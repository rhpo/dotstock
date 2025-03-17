#include "SystemeInfo.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace std;

float CalculerTauxRemise(int quantity) {
	if (quantity < 5)
		return 0;
	else if (quantity <= 5 && quantity <= 10) 
		return 0.05;
	else 
		return 0.1;
}

Produit::Produit(String^ name, int quantity) {
	ID = "P" + Convert::ToString(Dataset::products->Count + 1);

    Name = name;
    Quantity = quantity;
}

ResumeMagasin::ResumeMagasin(float _TotalVenteHT, float _TotalTVACollected, float _TotalRemiseApplied, float _ChiffreAffaires) {
	TotalVenteHT = _TotalVenteHT;
	TotalTVACollected = _TotalTVACollected;
	TotalRemiseApplied = _TotalRemiseApplied;
	ChiffreAffaires = _ChiffreAffaires;
}

Vente::Vente(Produit^ __Produit, float _PrixUnitaire, int _Quantity, float TAUX_TVA) {
	ID = "VN" + Convert::ToString(Dataset::ventes->Count + 1); 
	_Produit = __Produit;


	Quantity = _Quantity;
	TauxRemise = CalculerTauxRemise(Quantity);
	PrixUnitaire = _PrixUnitaire;
	MontantTotalHT = Quantity * PrixUnitaire;
	Remise = MontantTotalHT * TauxRemise;
	TVA = (MontantTotalHT - Remise) * TAUX_TVA;

	PrixTotal = MontantTotalHT - Remise + TVA;
}

void Vente::Recalculate(float TAUX_TVA) {

	Dataset::resume->TotalVenteHT -= MontantTotalHT;
	Dataset::resume->TotalTVACollected -= TVA;
	Dataset::resume->TotalRemiseApplied -= Remise;
	Dataset::resume->ChiffreAffaires -= PrixTotal;

	TauxRemise = CalculerTauxRemise(Quantity);
	MontantTotalHT = Quantity * PrixUnitaire;
	Remise = MontantTotalHT * TauxRemise;
	TVA = (MontantTotalHT - Remise) * TAUX_TVA;

	PrixTotal = MontantTotalHT - Remise + TVA;
	
	Dataset::resume->TotalVenteHT += MontantTotalHT;
	Dataset::resume->TotalTVACollected += TVA;
	Dataset::resume->TotalRemiseApplied += Remise;
	Dataset::resume->ChiffreAffaires += PrixTotal;

}

Dataset::Dataset() {
    products = gcnew List<Produit^>();
    ventes = gcnew List<Vente^>();   
    resume = gcnew ResumeMagasin(0, 0, 0, 0);   

	Currency = "DA";
}

String^ GetPrice(float Prix) {
	return Conversion(Prix, Dataset::Currency).ToString("F2") + " " + Dataset::Currency;
};

float Conversion(float Prix, String^ Currency) {
    float conversionRate = 0.0f; 

    if (Currency == "DA") {
        return Prix; 
    }

    else if (Currency == "$") {
        conversionRate = 0.0069f;
    }
    else if (Currency == "€") {
        conversionRate = 0.0064f;
    }
    else {
        throw gcnew System::ArgumentException("Unsupported currency");
    }

    return Prix * conversionRate;
}

void CreateProduct(String^ name, int quantity) {

	// fairee des checks additionnels, mais je prefere les faire sur la logique de Form.

	Produit^ p = gcnew Produit(name, quantity);
	Dataset::products->Add(p);

}

void CreateVente(Produit^ __Produit, float _PrixUnitaire, int _Quantity, float TAUX_TVA) {

	Vente^ v = gcnew Vente(__Produit, _PrixUnitaire, _Quantity, TAUX_TVA);

	Dataset::resume->TotalVenteHT += v->MontantTotalHT;
	Dataset::resume->TotalTVACollected += v->TVA;
	Dataset::resume->TotalRemiseApplied += v->Remise;
	Dataset::resume->ChiffreAffaires += v->PrixTotal;

	Dataset::ventes->Add(v);
	
}

