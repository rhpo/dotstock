#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace std;

ref class Produit {
public:
    String^ ID;
    String^ Name;
    int Quantity;

    Produit(String^ name, int quantity);

};

ref class ResumeMagasin {
public:
    float TotalVenteHT;
	float TotalTVACollected;
	float TotalRemiseApplied;
	float ChiffreAffaires;

    ResumeMagasin(float _TotalVenteHT, float _TotalTVACollected, float _TotalRemiseApplied, float _ChiffreAffaires);

};

void setTVA(float* newTVA);

ref class Vente {
public:

    String^ ID;
    Produit^ _Produit;
    int Quantity;
    float PrixUnitaire;
    float MontantTotalHT;
    float TVA;
    float Remise;
    float PrixTotal;

	Vente(Produit^ __Produit, float _PrixUnitaire, int _Quantity, float TAUX_TVA);

	void Recalculate(float TAUX_TVA);

	private:
	float TauxRemise;
};

ref class Dataset {

public:
    static List<Produit^>^ products; 
    static List<Vente^>^ ventes;    
    static ResumeMagasin^ resume;    

	static String^ Currency;

    Dataset(void);

};

float CalculerTauxRemise(int quantity);
float Conversion(float Prix, String^ Currency);
String^ GetPrice(float Prix);

void CreateProduct(String^ Name, int Quantity);
void CreateVente(Produit^ __Produit, float _PrixUnitaire, int _Quantity, float TAUX_TVA);
