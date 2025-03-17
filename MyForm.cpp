#include "MyForm.h"
#include "SystemeInfo.h"

using namespace System;
using namespace Project1;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

float TAUX_TVA = 0.20;

void UpdateVenteProductUI(MyForm^ form) {
	while (form->VenteProduit->Items->Count > 0) form->VenteProduit->Items->RemoveAt(0);

	for (int i = Dataset::products->Count - 1; i >= 0; --i) {
		Produit^ product = Dataset::products[i];

		if (product->Quantity > 0)
			form->VenteProduit->Items->Add(product->Name + " [Stock: " + product->Quantity + "] (" + product->ID + ")");
	}
}

void AddProductUI(MyForm^ form, String^ ID, String^ name, int Quantity) {

	auto Produits = form->Produits;

	if (Produits->ColumnCount < 3) {
		Produits->ColumnCount = 3;

		Produits->Columns[0]->HeaderText = "ID";
		Produits->Columns[1]->HeaderText = "Nom du Produit";
		Produits->Columns[2]->HeaderText = "Quantit� en Stock";
	}

	DataGridViewRow^ row = gcnew DataGridViewRow();
	row->CreateCells(Produits);
	row->Cells[0]->Value = ID;
	row->Cells[1]->Value = name;
	row->Cells[2]->Value = Quantity;

	Produits->Rows->Add(row);

}

void UpdateProductsUI(MyForm^ form) {
	auto Produits = form->Produits;
	Produits->Rows->Clear();

	int count = Dataset::products->Count;
	int totalCount = 0;

	for (int i = count - 1; i >= 0; --i) {
		Produit^ product = Dataset::products[i];

		totalCount += product->Quantity;
		AddProductUI(form, product->ID, product->Name, product->Quantity);
	}

	form->NombreProduits->Text = Convert::ToString(count);
	form->NombreTotalProduits->Text = Convert::ToString(totalCount);

	UpdateVenteProductUI(form);

}



void AddVenteUI(MyForm^ form, Vente^ vente) {

	auto Ventes = form->Ventes;

	if (Ventes->ColumnCount < 9) {
		Ventes->ColumnCount = 9;

		Ventes->Columns[0]->HeaderText = "ID";
		Ventes->Columns[1]->HeaderText = "Produit";
		Ventes->Columns[2]->HeaderText = "Prix Unitaire";

		Ventes->Columns[3]->HeaderText = "Quantit�";
		Ventes->Columns[3]->ReadOnly = false;

		Ventes->Columns[4]->HeaderText = "Montant Total HT";
		Ventes->Columns[5]->HeaderText = "TVA";
		Ventes->Columns[6]->HeaderText = "Remise";
		Ventes->Columns[7]->HeaderText = "Prix Total TTC";
		Ventes->Columns[8]->HeaderText = "Action";
	}

	DataGridViewRow^ row = gcnew DataGridViewRow();
	row->CreateCells(Ventes);

	row->Cells[0]->Value = vente->ID;
	row->Cells[1]->Value = vente->_Produit->Name;
	row->Cells[2]->Value = GetPrice(vente->PrixUnitaire);

	row->Cells[3] = gcnew DataGridViewTextBoxCell();
	row->Cells[3]->Value = vente->Quantity;
	row->Cells[3]->ReadOnly = false;

	row->Cells[4]->Value = GetPrice(vente->MontantTotalHT);
	row->Cells[5]->Value = GetPrice(vente->TVA);
	row->Cells[6]->Value = GetPrice(vente->Remise);
	row->Cells[7]->Value = GetPrice(vente->PrixTotal);

	Ventes->Rows->Add(row);

}

void UpdateVentesUI(MyForm^ form) {
	auto Ventes = form->Ventes;

	Ventes->Rows->Clear();

	int count = Dataset::ventes->Count;
	for (int i = count - 1; i >= 0; --i) {
		Vente^ vente = Dataset::ventes[i];
		AddVenteUI(form, vente);
	}

	UpdateVenteProductUI(form);

}


// for updating the resume of the store.
void UpdateResults(MyForm^ form) {
	form->RVentesHT->Text = GetPrice(form->Data->resume->TotalVenteHT);
	form->RChiffresAffaires->Text = GetPrice(form->Data->resume->ChiffreAffaires);
	form->RRemises->Text = GetPrice(form->Data->resume->TotalRemiseApplied);
	form->RTVA->Text = GetPrice(form->Data->resume->TotalTVACollected);
}


void UpdateComponents(MyForm^ form) {
	UpdateResults(form);       // Le R�sum�
	UpdateProductsUI(form);    // Products Table
	UpdateVentesUI(form);      // Ventes Table
}

void MyForm::listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

    if (ICurrency->SelectedItem != nullptr) {
        String^ selectedValue = ICurrency->SelectedItem->ToString()->Substring(0, 2)->Trim();

		Dataset::Currency = selectedValue;
		UpdateComponents(this);

		MessageBox::Show("Changed Currency to: " + ICurrency->SelectedItem->ToString()->Substring(2)->Trim(), "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }

}

void MyForm::AddProductEvent(System::Object^  sender, System::EventArgs^  e) {

	auto productName = INomProduit->Text->Trim();
	auto productQuantity = (int)IQuantiteProduit->Value;

	if (productName->Length < 3 || productName->Length > 100)
		MessageBox::Show("Veuiller entrer un Nom de produit avec une taille valide.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Question);
	else if (productQuantity <= 0 || productQuantity > 50000)
		MessageBox::Show("Veuiller entrer une quantit� de produit valide (entre 1 et 50,000).", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
	else {

		INomProduit->Text = "";
		IQuantiteProduit->Value = 1;
		INomProduit->Focus();

		CreateProduct(productName, productQuantity);

		MessageBox::Show("Le produit '" + productName + "' a �t� ajout� avec succ�ss.", "R�ussite", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	UpdateProductsUI(this);

}

void UpdateTVAUI(MyForm^ form) {
    form->TVAOut->Text = System::String::Format("{0}%", TAUX_TVA * 100);
}

void MyForm::TVAChange(System::Object^  sender, System::EventArgs^  e) {
	TAUX_TVA = (float)(TVAInput->Value / 100);

	UpdateTVAUI(this);
}

String^ GetStringBetweenParentheses(String^ input) {
    if (String::IsNullOrEmpty(input)) {
        return String::Empty;
    }

    int startIndex = input->IndexOf('(');
	if (startIndex < 0) return String::Empty;

    int endIndex = input->IndexOf(')', startIndex);

    if (startIndex != -1 && endIndex != -1 && endIndex > startIndex) {
        return input->Substring(startIndex + 1, endIndex - startIndex - 1);
    }

    return String::Empty;
}

Produit^ FindProductByID(String^ id) {
    for each (Produit^ p in Dataset::products) {
        if (p->ID == id) {
            return p;
        }
    }
    return nullptr;
}

Vente^ FindVenteByID(String^ id) {
    for each (Vente^ v in Dataset::ventes) {
        if (v->ID == id) {
            return v;
        }
    }
    return nullptr;
}

void MyForm::AddVente(System::Object^ sender, System::EventArgs^  e) {

	String^ produit = VenteProduit->Text;
	String^ ID = GetStringBetweenParentheses(produit);

	int quantite = int::Parse(QuantiteVente->Text);
	float prixUnitaire = float::Parse(PrixUnitaireVente->Text);

	if (String::IsNullOrEmpty(ID))
		MessageBox::Show("Veuiller entrer un produit.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);

	else {
		Produit^ Found = FindProductByID(ID);

		if (Found == nullptr)
			MessageBox::Show("Veuiller entrer un produit.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);

		if (quantite > Found->Quantity)
			MessageBox::Show("Quantit� de '" + Found->Name + "' Insuffisante.", "Insuffisant", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else {

			Found->Quantity -= quantite;

			VenteProduit->Text = "";

			CreateVente(Found, prixUnitaire, quantite, TAUX_TVA);
			UpdateComponents(this);
		}
	}
}

void MyForm::CID_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	CID->Text = CID->Text->Trim();
}

void MyForm::ChangeQuantity(System::Object^  sender, System::EventArgs^  e) {
	String^ id = CID->Text;
	int quantity = (int)CQtt->Value;

	Vente^ v = FindVenteByID(id);

	if (String::IsNullOrEmpty(id)) {
		MessageBox::Show("Veuiller entrer un ID.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	else if (v == nullptr) {
		MessageBox::Show("Vente avec (ID=" + id + ") n'est pas trouv�.", "Oops! V�rifiez l'ID...", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	else {
		int addToProduct = v->Quantity - quantity;

		if (v->_Produit->Quantity + addToProduct < 0)
			MessageBox::Show("La quantit� de '" + v->_Produit->Name + "' ne suffit pas pour atteindre x" + quantity + " �l�ments.", "Quantit� Insuffisante...", MessageBoxButtons::OK, MessageBoxIcon::Error);

		else {
			v->_Produit->Quantity += addToProduct;
			v->Quantity -= addToProduct;

			v->Recalculate(TAUX_TVA);

			UpdateComponents(this);
		}
	}
}

void MyForm::button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}

void MyForm::MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	this->Data = gcnew Dataset();

	Produits->AutoGenerateColumns = false;
	Ventes->AutoGenerateColumns = false;

	UpdateComponents(this);
}

[STAThread]
void main(array<String^>^ args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project1::MyForm form;
	Application::Run(%form);
}
