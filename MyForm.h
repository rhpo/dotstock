#pragma once

#include "SystemeInfo.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		static Dataset^ Data;

		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Panel^  panel5;
	public: 
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::PictureBox^  pictureBox2;









	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Panel^  panel6;

	private: 











	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;









	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::NumericUpDown^  TVAInput;



	private: System::Windows::Forms::Label^  label18;
	public: System::Windows::Forms::Label^  RChiffresAffaires;
	private: 
	public: System::Windows::Forms::Label^  RRemises;
	public: System::Windows::Forms::Label^  RTVA;
	public: System::Windows::Forms::Label^  RVentesHT;

	public: 


	private: System::Windows::Forms::ListBox^  ICurrency;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Label^  label19;
	public: System::Windows::Forms::Label^  TVAOut;
	private: System::Windows::Forms::Label^  label23;
	public: System::Windows::Forms::Label^  NombreProduits;
	private: 
	public: 

	private: System::Windows::Forms::Button^  button3;
	public: System::Windows::Forms::Label^  NombreTotalProduits;
	private: System::Windows::Forms::NumericUpDown^  IQuantiteProduit;
	public: 
	private: System::Windows::Forms::TextBox^  INomProduit;
	private: System::Windows::Forms::NumericUpDown^  PrixUnitaireVente;
	private: System::Windows::Forms::NumericUpDown^  QuantiteVente;
	public: System::Windows::Forms::ComboBox^  VenteProduit;
	private: 
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Quantity;
	public: 
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  PName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  IDVente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  TotalVente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ProduitVente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  PrixProduitVente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  QteVente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  MontantTotalHTVente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  TVAVente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  RemiseVente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ActionVente;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn12;
private: System::Windows::Forms::Panel^  panel10;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Panel^  panel9;
private: System::Windows::Forms::Panel^  panel11;
private: System::Windows::Forms::Panel^  panel12;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::NumericUpDown^  CQtt;

private: System::Windows::Forms::TextBox^  CID;

private: System::Windows::Forms::Label^  label25;
	private: 
	public: 

	private: 
	private: 
	private: 

	public: System::Windows::Forms::DataGridView^  Produits;
	

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;

	private: System::Windows::Forms::Panel^  panel2;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label5;




	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label8;


	private: System::Windows::Forms::Label^  label7;


	private: System::Windows::Forms::Label^  label6;

	private: 


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  panel3;



	private: System::Windows::Forms::Label^  label9;



	private: System::Windows::Forms::Panel^  panel4;
	public: System::Windows::Forms::DataGridView^  Ventes;
	private: 

	private: System::Windows::Forms::Label^  label10;



	protected: 

	protected: 

	public:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->IQuantiteProduit = (gcnew System::Windows::Forms::NumericUpDown());
			this->INomProduit = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->PrixUnitaireVente = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->QuantiteVente = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->VenteProduit = (gcnew System::Windows::Forms::ComboBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->Produits = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->Ventes = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->NombreTotalProduits = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->NombreProduits = (gcnew System::Windows::Forms::Label());
			this->TVAOut = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->ICurrency = (gcnew System::Windows::Forms::ListBox());
			this->TVAInput = (gcnew System::Windows::Forms::NumericUpDown());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->RChiffresAffaires = (gcnew System::Windows::Forms::Label());
			this->RRemises = (gcnew System::Windows::Forms::Label());
			this->RTVA = (gcnew System::Windows::Forms::Label());
			this->RVentesHT = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->IDVente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TotalVente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProduitVente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PrixProduitVente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->QteVente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MontantTotalHTVente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TVAVente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RemiseVente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ActionVente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->CQtt = (gcnew System::Windows::Forms::NumericUpDown());
			this->CID = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->IQuantiteProduit))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PrixUnitaireVente))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->QuantiteVente))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Produits))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Ventes))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->TVAInput))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->panel11->SuspendLayout();
			this->panel12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->CQtt))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(792, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(120, 59);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Script", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(247, 9);
			this->label1->Margin = System::Windows::Forms::Padding(0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(372, 40);
			this->label1->TabIndex = 1;
			this->label1->Text = L"GProduit par HADID Rami";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				33.33345F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				33.33342F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				33.33312F)));
			this->tableLayoutPanel1->Controls->Add(this->panel2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->panel1, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->panel3, 2, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(14, 228);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(900, 228);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BackColor = System::Drawing::SystemColors::Control;
			this->panel2->Controls->Add(this->panel10);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->IQuantiteProduit);
			this->panel2->Controls->Add(this->INomProduit);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Location = System::Drawing::Point(1, 1);
			this->panel2->Margin = System::Windows::Forms::Padding(0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(298, 226);
			this->panel2->TabIndex = 2;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::SystemColors::Desktop;
			this->panel10->Controls->Add(this->label2);
			this->panel10->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel10->Location = System::Drawing::Point(0, 0);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(298, 27);
			this->panel10->TabIndex = 25;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(6, 5);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Ajouter un Produit";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DodgerBlue;
			this->button1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button1->Location = System::Drawing::Point(0, 192);
			this->button1->Margin = System::Windows::Forms::Padding(0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(298, 34);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Ajouter à la Liste";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::AddProductEvent);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label5->Location = System::Drawing::Point(6, 114);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(114, 17);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Quantité en Stock:";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// IQuantiteProduit
			// 
			this->IQuantiteProduit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->IQuantiteProduit->Location = System::Drawing::Point(8, 135);
			this->IQuantiteProduit->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {50000, 0, 0, 0});
			this->IQuantiteProduit->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->IQuantiteProduit->Name = L"IQuantiteProduit";
			this->IQuantiteProduit->Size = System::Drawing::Size(280, 20);
			this->IQuantiteProduit->TabIndex = 1;
			this->IQuantiteProduit->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->IQuantiteProduit->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// INomProduit
			// 
			this->INomProduit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->INomProduit->Location = System::Drawing::Point(8, 86);
			this->INomProduit->Name = L"INomProduit";
			this->INomProduit->Size = System::Drawing::Size(280, 20);
			this->INomProduit->TabIndex = 0;
			this->INomProduit->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label4->Location = System::Drawing::Point(6, 65);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(105, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Nom du Produit:";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->Controls->Add(this->panel9);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->PrixUnitaireVente);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->QuantiteVente);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->VenteProduit);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(300, 1);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(298, 226);
			this->panel1->TabIndex = 0;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::Desktop;
			this->panel9->Controls->Add(this->label3);
			this->panel9->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel9->Location = System::Drawing::Point(0, 0);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(298, 27);
			this->panel9->TabIndex = 24;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(5, 5);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Ajouter une Vente";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LimeGreen;
			this->button2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button2->Location = System::Drawing::Point(0, 192);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(298, 34);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Vendre";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::AddVente);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label8->Location = System::Drawing::Point(5, 138);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(79, 17);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Prix unitaire:";
			// 
			// PrixUnitaireVente
			// 
			this->PrixUnitaireVente->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->PrixUnitaireVente->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			this->PrixUnitaireVente->Location = System::Drawing::Point(7, 159);
			this->PrixUnitaireVente->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99999999, 0, 0, 0});
			this->PrixUnitaireVente->Name = L"PrixUnitaireVente";
			this->PrixUnitaireVente->Size = System::Drawing::Size(281, 20);
			this->PrixUnitaireVente->TabIndex = 9;
			this->PrixUnitaireVente->ValueChanged += gcnew System::EventHandler(this, &MyForm::PrixUnitaireVente_ValueChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label7->Location = System::Drawing::Point(5, 87);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(106, 17);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Quantité vendue:";
			// 
			// QuantiteVente
			// 
			this->QuantiteVente->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->QuantiteVente->Location = System::Drawing::Point(8, 107);
			this->QuantiteVente->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {50000, 0, 0, 0});
			this->QuantiteVente->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->QuantiteVente->Name = L"QuantiteVente";
			this->QuantiteVente->Size = System::Drawing::Size(280, 20);
			this->QuantiteVente->TabIndex = 4;
			this->QuantiteVente->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->QuantiteVente->ValueChanged += gcnew System::EventHandler(this, &MyForm::QuantiteVente_ValueChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label6->Location = System::Drawing::Point(4, 38);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(201, 17);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Produit (Selectionnez un Produit):";
			// 
			// VenteProduit
			// 
			this->VenteProduit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->VenteProduit->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->VenteProduit->FormattingEnabled = true;
			this->VenteProduit->Location = System::Drawing::Point(6, 59);
			this->VenteProduit->Name = L"VenteProduit";
			this->VenteProduit->Size = System::Drawing::Size(282, 23);
			this->VenteProduit->TabIndex = 3;
			this->VenteProduit->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::VenteProduit_SelectedIndexChanged);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel3->Controls->Add(this->Produits);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(599, 1);
			this->panel3->Margin = System::Windows::Forms::Padding(0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(300, 226);
			this->panel3->TabIndex = 2;
			// 
			// Produits
			// 
			this->Produits->AllowUserToAddRows = false;
			this->Produits->AllowUserToDeleteRows = false;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Produits->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->Produits->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->Produits->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->Produits->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Produits->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->dataGridViewTextBoxColumn1, 
				this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3});
			this->Produits->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Produits->GridColor = System::Drawing::SystemColors::Control;
			this->Produits->Location = System::Drawing::Point(0, 27);
			this->Produits->Margin = System::Windows::Forms::Padding(0);
			this->Produits->Name = L"Produits";
			this->Produits->ReadOnly = true;
			this->Produits->Size = System::Drawing::Size(300, 199);
			this->Produits->TabIndex = 8;
			this->Produits->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->FillWeight = 20;
			this->dataGridViewTextBoxColumn1->Frozen = true;
			this->dataGridViewTextBoxColumn1->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 45;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn2->HeaderText = L"Nom du Produit";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn3->HeaderText = L"Quantité en Stock";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Location = System::Drawing::Point(3, 5);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(131, 17);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Tableau des Produits";
			// 
			// panel4
			// 
			this->panel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel4->BackColor = System::Drawing::SystemColors::Control;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->Ventes);
			this->panel4->Controls->Add(this->label10);
			this->panel4->Location = System::Drawing::Point(15, 55);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(748, 166);
			this->panel4->TabIndex = 9;
			// 
			// Ventes
			// 
			this->Ventes->AllowUserToAddRows = false;
			this->Ventes->AllowUserToDeleteRows = false;
			this->Ventes->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->Ventes->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->Ventes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Ventes->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {this->dataGridViewTextBoxColumn4, 
				this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, 
				this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12});
			this->Ventes->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Ventes->GridColor = System::Drawing::SystemColors::Control;
			this->Ventes->Location = System::Drawing::Point(0, 24);
			this->Ventes->Name = L"Ventes";
			this->Ventes->ReadOnly = true;
			this->Ventes->Size = System::Drawing::Size(746, 140);
			this->Ventes->TabIndex = 8;
			this->Ventes->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::Ventes_CellContentClick);
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn4->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn5->HeaderText = L"Produit";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn6->HeaderText = L"Prix Unitaire";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn7->HeaderText = L"Quantité";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn8->HeaderText = L"Montant Total HT";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn9->HeaderText = L"TVA";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn10->HeaderText = L"Remise";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn11->HeaderText = L"Prix Total TTC";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn12->HeaderText = L"Action";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->ReadOnly = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label10->Location = System::Drawing::Point(4, 3);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(122, 17);
			this->label10->TabIndex = 7;
			this->label10->Text = L"Tableau des Ventes";
			// 
			// panel5
			// 
			this->panel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel5->BackColor = System::Drawing::SystemColors::WindowText;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->button3);
			this->panel5->Controls->Add(this->NombreTotalProduits);
			this->panel5->Controls->Add(this->label23);
			this->panel5->Controls->Add(this->NombreProduits);
			this->panel5->Controls->Add(this->TVAOut);
			this->panel5->Controls->Add(this->label21);
			this->panel5->Controls->Add(this->label20);
			this->panel5->Controls->Add(this->panel8);
			this->panel5->Controls->Add(this->label19);
			this->panel5->Controls->Add(this->ICurrency);
			this->panel5->Controls->Add(this->TVAInput);
			this->panel5->Controls->Add(this->label18);
			this->panel5->Controls->Add(this->label17);
			this->panel5->Controls->Add(this->panel7);
			this->panel5->Controls->Add(this->label16);
			this->panel5->Controls->Add(this->RChiffresAffaires);
			this->panel5->Controls->Add(this->RRemises);
			this->panel5->Controls->Add(this->RTVA);
			this->panel5->Controls->Add(this->RVentesHT);
			this->panel5->Controls->Add(this->label15);
			this->panel5->Controls->Add(this->label14);
			this->panel5->Controls->Add(this->label13);
			this->panel5->Controls->Add(this->panel6);
			this->panel5->Controls->Add(this->label12);
			this->panel5->Controls->Add(this->label11);
			this->panel5->Location = System::Drawing::Point(0, 471);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(924, 131);
			this->panel5->TabIndex = 10;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel5_Paint);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(603, 89);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(309, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Quitter GProduct →";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// NombreTotalProduits
			// 
			this->NombreTotalProduits->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->NombreTotalProduits->AutoSize = true;
			this->NombreTotalProduits->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->NombreTotalProduits->ForeColor = System::Drawing::Color::LightGreen;
			this->NombreTotalProduits->Location = System::Drawing::Point(880, 49);
			this->NombreTotalProduits->Name = L"NombreTotalProduits";
			this->NombreTotalProduits->Size = System::Drawing::Size(15, 17);
			this->NombreTotalProduits->TabIndex = 30;
			this->NombreTotalProduits->Text = L"0";
			// 
			// label23
			// 
			this->label23->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label23->Location = System::Drawing::Point(600, 49);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(114, 17);
			this->label23->TabIndex = 29;
			this->label23->Text = L"Total de Produits:";
			// 
			// NombreProduits
			// 
			this->NombreProduits->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->NombreProduits->AutoSize = true;
			this->NombreProduits->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->NombreProduits->ForeColor = System::Drawing::Color::LightGreen;
			this->NombreProduits->Location = System::Drawing::Point(880, 32);
			this->NombreProduits->Name = L"NombreProduits";
			this->NombreProduits->Size = System::Drawing::Size(15, 17);
			this->NombreProduits->TabIndex = 28;
			this->NombreProduits->Text = L"0";
			// 
			// TVAOut
			// 
			this->TVAOut->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->TVAOut->AutoSize = true;
			this->TVAOut->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TVAOut->ForeColor = System::Drawing::Color::LightGreen;
			this->TVAOut->Location = System::Drawing::Point(877, 66);
			this->TVAOut->Name = L"TVAOut";
			this->TVAOut->Size = System::Drawing::Size(37, 17);
			this->TVAOut->TabIndex = 27;
			this->TVAOut->Text = L"20 %";
			// 
			// label21
			// 
			this->label21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label21->Location = System::Drawing::Point(600, 66);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(89, 17);
			this->label21->TabIndex = 26;
			this->label21->Text = L"Taux TVA (%):";
			this->label21->Click += gcnew System::EventHandler(this, &MyForm::label21_Click);
			// 
			// label20
			// 
			this->label20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label20->Location = System::Drawing::Point(600, 32);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(150, 17);
			this->label20->TabIndex = 25;
			this->label20->Text = L"Le nombre de Produits:";
			this->label20->Click += gcnew System::EventHandler(this, &MyForm::label20_Click);
			// 
			// panel8
			// 
			this->panel8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel8->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel8->Location = System::Drawing::Point(587, 29);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(7, 128);
			this->panel8->TabIndex = 23;
			// 
			// label19
			// 
			this->label19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"MV Boli", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label19->Location = System::Drawing::Point(583, 7);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(212, 20);
			this->label19->TabIndex = 24;
			this->label19->Text = L"Informations Supplémentaires";
			// 
			// ICurrency
			// 
			this->ICurrency->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->ICurrency->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ICurrency->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ICurrency->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ICurrency->ForeColor = System::Drawing::SystemColors::InfoText;
			this->ICurrency->FormattingEnabled = true;
			this->ICurrency->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"€      (Euro)", L"DA   (Dinar Algérien)", L"$      (Dollar Américain)"});
			this->ICurrency->Location = System::Drawing::Point(319, 71);
			this->ICurrency->Name = L"ICurrency";
			this->ICurrency->Size = System::Drawing::Size(246, 41);
			this->ICurrency->TabIndex = 7;
			this->ICurrency->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// TVAInput
			// 
			this->TVAInput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->TVAInput->Location = System::Drawing::Point(446, 35);
			this->TVAInput->Name = L"TVAInput";
			this->TVAInput->Size = System::Drawing::Size(119, 20);
			this->TVAInput->TabIndex = 6;
			this->TVAInput->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {20, 0, 0, 0});
			this->TVAInput->ValueChanged += gcnew System::EventHandler(this, &MyForm::TVAChange);
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label18->Location = System::Drawing::Point(316, 34);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(89, 17);
			this->label18->TabIndex = 21;
			this->label18->Text = L"Taux TVA (%):";
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label17->Location = System::Drawing::Point(316, 52);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(96, 17);
			this->label17->TabIndex = 20;
			this->label17->Text = L"Espèce Utilisée";
			this->label17->Click += gcnew System::EventHandler(this, &MyForm::label17_Click);
			// 
			// panel7
			// 
			this->panel7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->panel7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel7->Location = System::Drawing::Point(303, 29);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(7, 128);
			this->panel7->TabIndex = 12;
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"MV Boli", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label16->Location = System::Drawing::Point(299, 7);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(199, 20);
			this->label16->TabIndex = 19;
			this->label16->Text = L"Paramètres de L\'application";
			// 
			// RChiffresAffaires
			// 
			this->RChiffresAffaires->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->RChiffresAffaires->AutoSize = true;
			this->RChiffresAffaires->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RChiffresAffaires->ForeColor = System::Drawing::Color::LightGreen;
			this->RChiffresAffaires->Location = System::Drawing::Point(228, 92);
			this->RChiffresAffaires->Name = L"RChiffresAffaires";
			this->RChiffresAffaires->Size = System::Drawing::Size(56, 17);
			this->RChiffresAffaires->TabIndex = 18;
			this->RChiffresAffaires->Text = L"0.00 DA";
			this->RChiffresAffaires->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// RRemises
			// 
			this->RRemises->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->RRemises->AutoSize = true;
			this->RRemises->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RRemises->ForeColor = System::Drawing::Color::LightGreen;
			this->RRemises->Location = System::Drawing::Point(228, 75);
			this->RRemises->Name = L"RRemises";
			this->RRemises->Size = System::Drawing::Size(56, 17);
			this->RRemises->TabIndex = 17;
			this->RRemises->Text = L"0.00 DA";
			this->RRemises->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// RTVA
			// 
			this->RTVA->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->RTVA->AutoSize = true;
			this->RTVA->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RTVA->ForeColor = System::Drawing::Color::LightGreen;
			this->RTVA->Location = System::Drawing::Point(228, 58);
			this->RTVA->Name = L"RTVA";
			this->RTVA->Size = System::Drawing::Size(56, 17);
			this->RTVA->TabIndex = 16;
			this->RTVA->Text = L"0.00 DA";
			this->RTVA->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// RVentesHT
			// 
			this->RVentesHT->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->RVentesHT->AutoSize = true;
			this->RVentesHT->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RVentesHT->ForeColor = System::Drawing::Color::LightGreen;
			this->RVentesHT->Location = System::Drawing::Point(228, 41);
			this->RVentesHT->Name = L"RVentesHT";
			this->RVentesHT->Size = System::Drawing::Size(56, 17);
			this->RVentesHT->TabIndex = 15;
			this->RVentesHT->Text = L"0.00 DA";
			this->RVentesHT->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label15->Location = System::Drawing::Point(25, 92);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(137, 17);
			this->label15->TabIndex = 14;
			this->label15->Text = L"Chiffre d\'affaires TTC: ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label14->Location = System::Drawing::Point(25, 75);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(184, 17);
			this->label14->TabIndex = 13;
			this->label14->Text = L"Total des remises appliquées:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label13->Location = System::Drawing::Point(25, 58);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(123, 17);
			this->label13->TabIndex = 12;
			this->label13->Text = L"Total TVA collectée:";
			// 
			// panel6
			// 
			this->panel6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel6->Location = System::Drawing::Point(12, 29);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(7, 128);
			this->panel6->TabIndex = 11;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label12->Location = System::Drawing::Point(25, 41);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(134, 17);
			this->label12->TabIndex = 10;
			this->label12->Text = L"Total des ventes HT: ";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"MV Boli", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label11->Location = System::Drawing::Point(8, 7);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(143, 20);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Résumé du Magasin";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(13, 7);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(44, 40);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			// 
			// Quantity
			// 
			this->Quantity->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Quantity->HeaderText = L"Quantité en Stock";
			this->Quantity->Name = L"Quantity";
			this->Quantity->ReadOnly = true;
			// 
			// ID
			// 
			this->ID->FillWeight = 20;
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			this->ID->Width = 45;
			// 
			// PName
			// 
			this->PName->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->PName->HeaderText = L"Nom du Produit";
			this->PName->Name = L"PName";
			this->PName->ReadOnly = true;
			// 
			// IDVente
			// 
			this->IDVente->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->IDVente->HeaderText = L"ID";
			this->IDVente->Name = L"IDVente";
			this->IDVente->ReadOnly = true;
			// 
			// TotalVente
			// 
			this->TotalVente->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->TotalVente->HeaderText = L"Prix Total TTC";
			this->TotalVente->Name = L"TotalVente";
			this->TotalVente->ReadOnly = true;
			// 
			// ProduitVente
			// 
			this->ProduitVente->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->ProduitVente->HeaderText = L"Produit";
			this->ProduitVente->Name = L"ProduitVente";
			this->ProduitVente->ReadOnly = true;
			// 
			// PrixProduitVente
			// 
			this->PrixProduitVente->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->PrixProduitVente->HeaderText = L"Prix Unitaire";
			this->PrixProduitVente->Name = L"PrixProduitVente";
			this->PrixProduitVente->ReadOnly = true;
			// 
			// QteVente
			// 
			this->QteVente->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->QteVente->HeaderText = L"Quantité";
			this->QteVente->Name = L"QteVente";
			this->QteVente->ReadOnly = true;
			// 
			// MontantTotalHTVente
			// 
			this->MontantTotalHTVente->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->MontantTotalHTVente->HeaderText = L"Montant Total HT";
			this->MontantTotalHTVente->Name = L"MontantTotalHTVente";
			this->MontantTotalHTVente->ReadOnly = true;
			// 
			// TVAVente
			// 
			this->TVAVente->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->TVAVente->HeaderText = L"TVA";
			this->TVAVente->Name = L"TVAVente";
			this->TVAVente->ReadOnly = true;
			// 
			// RemiseVente
			// 
			this->RemiseVente->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->RemiseVente->HeaderText = L"Remise";
			this->RemiseVente->Name = L"RemiseVente";
			this->RemiseVente->ReadOnly = true;
			// 
			// ActionVente
			// 
			this->ActionVente->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->ActionVente->HeaderText = L"Action";
			this->ActionVente->Name = L"ActionVente";
			this->ActionVente->ReadOnly = true;
			// 
			// panel11
			// 
			this->panel11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel11->BackColor = System::Drawing::SystemColors::Control;
			this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel11->Controls->Add(this->panel12);
			this->panel11->Controls->Add(this->button4);
			this->panel11->Controls->Add(this->label24);
			this->panel11->Controls->Add(this->CQtt);
			this->panel11->Controls->Add(this->CID);
			this->panel11->Controls->Add(this->label25);
			this->panel11->Location = System::Drawing::Point(767, 55);
			this->panel11->Margin = System::Windows::Forms::Padding(0);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(145, 165);
			this->panel11->TabIndex = 26;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::Silver;
			this->panel12->Controls->Add(this->label22);
			this->panel12->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel12->Location = System::Drawing::Point(0, 0);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(143, 27);
			this->panel12->TabIndex = 25;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label22->Location = System::Drawing::Point(6, 5);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(55, 17);
			this->label22->TabIndex = 3;
			this->label22->Text = L"Retours";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::RoyalBlue;
			this->button4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button4->Location = System::Drawing::Point(0, 129);
			this->button4->Margin = System::Windows::Forms::Padding(0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(143, 34);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Changer";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::ChangeQuantity);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label24->Location = System::Drawing::Point(5, 81);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(114, 17);
			this->label24->TabIndex = 5;
			this->label24->Text = L"Quantité en Stock:";
			// 
			// CQtt
			// 
			this->CQtt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->CQtt->Location = System::Drawing::Point(6, 100);
			this->CQtt->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {50000, 0, 0, 0});
			this->CQtt->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->CQtt->Name = L"CQtt";
			this->CQtt->Size = System::Drawing::Size(130, 20);
			this->CQtt->TabIndex = 1;
			this->CQtt->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			// 
			// CID
			// 
			this->CID->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->CID->Location = System::Drawing::Point(6, 55);
			this->CID->Name = L"CID";
			this->CID->Size = System::Drawing::Size(132, 20);
			this->CID->TabIndex = 0;
			this->CID->TextChanged += gcnew System::EventHandler(this, &MyForm::CID_TextChanged);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label25->Location = System::Drawing::Point(5, 36);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(89, 17);
			this->label25->TabIndex = 3;
			this->label25->Text = L"ID du Produit:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(924, 602);
			this->Controls->Add(this->panel11);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GProduit - Mini Projet SI (ESST)";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->IQuantiteProduit))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PrixUnitaireVente))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->QuantiteVente))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Produits))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Ventes))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->TVAInput))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->CQtt))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void AddProductEvent(System::Object^  sender, System::EventArgs^  e);
private: System::Void AddVente(System::Object^  sender, System::EventArgs^  e);
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e);
private: System::Void label17_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void panel5_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void ChangedCurrency(System::Object^  sender, System::EventArgs^  e) {};
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void TVAChange(System::Object^  sender, System::EventArgs^  e);
private: System::Void PrixUnitaireVente_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void QuantiteVente_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void VenteProduit_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Ventes_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void label21_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label20_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void ChangeQuantity(System::Object^  sender, System::EventArgs^  e);
private: System::Void CID_TextChanged(System::Object^  sender, System::EventArgs^  e);
};
}
