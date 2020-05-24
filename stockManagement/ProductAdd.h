
#pragma once
#include <exception>

namespace stockManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System;
	using namespace System::Windows::Forms;
	using namespace System::Data::Sql;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for ProductAdd
	/// </summary>
	public ref class ProductAdd : public System::Windows::Forms::Form
	{
	public:
		ProductAdd(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ProductAdd()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ NomTextBox;

	private: Bunifu::Framework::UI::BunifuMetroTextbox^ DiscreptionTextbox;


	private: Bunifu::Framework::UI::BunifuMetroTextbox^ PriceTextbox;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ StockTextbox;


	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel1;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel2;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel3;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ firstNameTx;

	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel5;
	private: Bunifu::Framework::UI::BunifuFlatButton^ bunifuFlatButton1;
	private: JTextBox::JText_Box^ jText_Box1;
	private: Bunifu::Framework::UI::BunifuFlatButton^ bunifuFlatButton2;
	private: Bunifu::Framework::UI::BunifuFlatButton^ bunifuFlatButton3;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel6;
	private: Bunifu::Framework::UI::BunifuSeparator^ bunifuSeparator1;
	private: System::Windows::Forms::ComboBox^ categoryComboBox;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;






	protected:

	protected:


	protected:

	private:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProductAdd::typeid));
			this->NomTextBox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->DiscreptionTextbox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->PriceTextbox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->StockTextbox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bunifuCustomLabel1 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel2 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel3 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->firstNameTx = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel5 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuFlatButton1 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->jText_Box1 = (gcnew JTextBox::JText_Box());
			this->bunifuFlatButton2 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuFlatButton3 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuCustomLabel6 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuSeparator1 = (gcnew Bunifu::Framework::UI::BunifuSeparator());
			this->categoryComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// NomTextBox
			// 
			this->NomTextBox->BorderColorFocused = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->NomTextBox->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->NomTextBox->BorderColorMouseHover = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->NomTextBox->BorderThickness = 1;
			this->NomTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->NomTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13));
			this->NomTextBox->ForeColor = System::Drawing::Color::DimGray;
			this->NomTextBox->isPassword = false;
			this->NomTextBox->Location = System::Drawing::Point(72, 166);
			this->NomTextBox->Margin = System::Windows::Forms::Padding(0);
			this->NomTextBox->Name = L"NomTextBox";
			this->NomTextBox->Size = System::Drawing::Size(413, 35);
			this->NomTextBox->TabIndex = 11;
			this->NomTextBox->Text = L"Enter the Name of the Product";
			this->NomTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->NomTextBox->Enter += gcnew System::EventHandler(this, &ProductAdd::NomTextBox_Enter);
			// 
			// DiscreptionTextbox
			// 
			this->DiscreptionTextbox->BorderColorFocused = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->DiscreptionTextbox->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->DiscreptionTextbox->BorderColorMouseHover = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->DiscreptionTextbox->BorderThickness = 1;
			this->DiscreptionTextbox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->DiscreptionTextbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->DiscreptionTextbox->ForeColor = System::Drawing::Color::DimGray;
			this->DiscreptionTextbox->isPassword = false;
			this->DiscreptionTextbox->Location = System::Drawing::Point(72, 434);
			this->DiscreptionTextbox->Margin = System::Windows::Forms::Padding(0);
			this->DiscreptionTextbox->Name = L"DiscreptionTextbox";
			this->DiscreptionTextbox->Size = System::Drawing::Size(413, 72);
			this->DiscreptionTextbox->TabIndex = 14;
			this->DiscreptionTextbox->Text = L"Enter a Discreption of the Product";
			this->DiscreptionTextbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->DiscreptionTextbox->Enter += gcnew System::EventHandler(this, &ProductAdd::DiscreptionTextbox_Enter);
			// 
			// PriceTextbox
			// 
			this->PriceTextbox->BorderColorFocused = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->PriceTextbox->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->PriceTextbox->BorderColorMouseHover = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->PriceTextbox->BorderThickness = 1;
			this->PriceTextbox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->PriceTextbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13));
			this->PriceTextbox->ForeColor = System::Drawing::Color::DimGray;
			this->PriceTextbox->isPassword = false;
			this->PriceTextbox->Location = System::Drawing::Point(72, 346);
			this->PriceTextbox->Margin = System::Windows::Forms::Padding(0);
			this->PriceTextbox->Name = L"PriceTextbox";
			this->PriceTextbox->Size = System::Drawing::Size(188, 31);
			this->PriceTextbox->TabIndex = 15;
			this->PriceTextbox->Text = L"Enter the Price ";
			this->PriceTextbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->PriceTextbox->Enter += gcnew System::EventHandler(this, &ProductAdd::PriceTextbox_Enter);
			// 
			// StockTextbox
			// 
			this->StockTextbox->BorderColorFocused = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->StockTextbox->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->StockTextbox->BorderColorMouseHover = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->StockTextbox->BorderThickness = 1;
			this->StockTextbox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->StockTextbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13));
			this->StockTextbox->ForeColor = System::Drawing::Color::DimGray;
			this->StockTextbox->isPassword = false;
			this->StockTextbox->Location = System::Drawing::Point(285, 346);
			this->StockTextbox->Margin = System::Windows::Forms::Padding(0);
			this->StockTextbox->Name = L"StockTextbox";
			this->StockTextbox->Size = System::Drawing::Size(200, 30);
			this->StockTextbox->TabIndex = 16;
			this->StockTextbox->Text = L"Enter the Stock ";
			this->StockTextbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->StockTextbox->Enter += gcnew System::EventHandler(this, &ProductAdd::StockTextbox_Enter);
			// 
			// bunifuCustomLabel1
			// 
			this->bunifuCustomLabel1->AutoSize = true;
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel1->ForeColor = System::Drawing::Color::DimGray;
			this->bunifuCustomLabel1->Location = System::Drawing::Point(72, 134);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(52, 21);
			this->bunifuCustomLabel1->TabIndex = 19;
			this->bunifuCustomLabel1->Text = L"Name";
			// 
			// bunifuCustomLabel2
			// 
			this->bunifuCustomLabel2->AutoSize = true;
			this->bunifuCustomLabel2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel2->ForeColor = System::Drawing::Color::DimGray;
			this->bunifuCustomLabel2->Location = System::Drawing::Point(71, 230);
			this->bunifuCustomLabel2->Name = L"bunifuCustomLabel2";
			this->bunifuCustomLabel2->Size = System::Drawing::Size(73, 21);
			this->bunifuCustomLabel2->TabIndex = 20;
			this->bunifuCustomLabel2->Text = L"Category";
			// 
			// bunifuCustomLabel3
			// 
			this->bunifuCustomLabel3->AutoSize = true;
			this->bunifuCustomLabel3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel3->ForeColor = System::Drawing::Color::DimGray;
			this->bunifuCustomLabel3->Location = System::Drawing::Point(71, 317);
			this->bunifuCustomLabel3->Name = L"bunifuCustomLabel3";
			this->bunifuCustomLabel3->Size = System::Drawing::Size(44, 21);
			this->bunifuCustomLabel3->TabIndex = 21;
			this->bunifuCustomLabel3->Text = L"Price";
			// 
			// firstNameTx
			// 
			this->firstNameTx->AutoSize = true;
			this->firstNameTx->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->firstNameTx->ForeColor = System::Drawing::Color::DimGray;
			this->firstNameTx->Location = System::Drawing::Point(283, 318);
			this->firstNameTx->Name = L"firstNameTx";
			this->firstNameTx->Size = System::Drawing::Size(47, 21);
			this->firstNameTx->TabIndex = 22;
			this->firstNameTx->Text = L"Stock";
			// 
			// bunifuCustomLabel5
			// 
			this->bunifuCustomLabel5->AutoSize = true;
			this->bunifuCustomLabel5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel5->ForeColor = System::Drawing::Color::DimGray;
			this->bunifuCustomLabel5->Location = System::Drawing::Point(72, 406);
			this->bunifuCustomLabel5->Name = L"bunifuCustomLabel5";
			this->bunifuCustomLabel5->Size = System::Drawing::Size(89, 21);
			this->bunifuCustomLabel5->TabIndex = 23;
			this->bunifuCustomLabel5->Text = L"Discreption";
			// 
			// bunifuFlatButton1
			// 
			this->bunifuFlatButton1->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->bunifuFlatButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->bunifuFlatButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton1->BorderRadius = 0;
			this->bunifuFlatButton1->ButtonText = L"Add";
			this->bunifuFlatButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton1->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton1->ForeColor = System::Drawing::Color::White;
			this->bunifuFlatButton1->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton1.Iconimage")));
			this->bunifuFlatButton1->Iconimage_right = nullptr;
			this->bunifuFlatButton1->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton1->Iconimage_Selected = nullptr;
			this->bunifuFlatButton1->IconMarginLeft = 0;
			this->bunifuFlatButton1->IconMarginRight = 0;
			this->bunifuFlatButton1->IconRightVisible = true;
			this->bunifuFlatButton1->IconRightZoom = 0;
			this->bunifuFlatButton1->IconVisible = false;
			this->bunifuFlatButton1->IconZoom = 90;
			this->bunifuFlatButton1->IsTab = false;
			this->bunifuFlatButton1->Location = System::Drawing::Point(72, 552);
			this->bunifuFlatButton1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bunifuFlatButton1->Name = L"bunifuFlatButton1";
			this->bunifuFlatButton1->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->bunifuFlatButton1->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->bunifuFlatButton1->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton1->selected = false;
			this->bunifuFlatButton1->Size = System::Drawing::Size(248, 51);
			this->bunifuFlatButton1->TabIndex = 24;
			this->bunifuFlatButton1->Text = L"Add";
			this->bunifuFlatButton1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuFlatButton1->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton1->TextFont = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F));
			this->bunifuFlatButton1->Click += gcnew System::EventHandler(this, &ProductAdd::bunifuFlatButton1_Click);
			// 
			// jText_Box1
			// 
			this->jText_Box1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->jText_Box1->BorderThickness = 1;
			this->jText_Box1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->jText_Box1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->jText_Box1->FontStyles = (gcnew System::Drawing::Font(L"Lucida Console", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->jText_Box1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->jText_Box1->Location = System::Drawing::Point(339, 550);
			this->jText_Box1->Margin = System::Windows::Forms::Padding(5);
			this->jText_Box1->MaxLength = 32767;
			this->jText_Box1->Name = L"jText_Box1";
			this->jText_Box1->onFocusBorderColor = System::Drawing::Color::Magenta;
			this->jText_Box1->PasswordChar = '\0';
			this->jText_Box1->RoundedBorder = 0;
			this->jText_Box1->Size = System::Drawing::Size(146, 53);
			this->jText_Box1->TabIndex = 26;
			this->jText_Box1->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->jText_Box1->TextColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->jText_Box1->TextInput = L"";
			// 
			// bunifuFlatButton2
			// 
			this->bunifuFlatButton2->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->bunifuFlatButton2->BackColor = System::Drawing::Color::White;
			this->bunifuFlatButton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton2->BorderRadius = 0;
			this->bunifuFlatButton2->ButtonText = L"Annuler";
			this->bunifuFlatButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton2->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton2->ForeColor = System::Drawing::Color::White;
			this->bunifuFlatButton2->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton2->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton2.Iconimage")));
			this->bunifuFlatButton2->Iconimage_right = nullptr;
			this->bunifuFlatButton2->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton2->Iconimage_Selected = nullptr;
			this->bunifuFlatButton2->IconMarginLeft = 0;
			this->bunifuFlatButton2->IconMarginRight = 0;
			this->bunifuFlatButton2->IconRightVisible = true;
			this->bunifuFlatButton2->IconRightZoom = 0;
			this->bunifuFlatButton2->IconVisible = false;
			this->bunifuFlatButton2->IconZoom = 90;
			this->bunifuFlatButton2->IsTab = false;
			this->bunifuFlatButton2->Location = System::Drawing::Point(455, 832);
			this->bunifuFlatButton2->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->bunifuFlatButton2->Name = L"bunifuFlatButton2";
			this->bunifuFlatButton2->Normalcolor = System::Drawing::Color::White;
			this->bunifuFlatButton2->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->bunifuFlatButton2->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton2->selected = false;
			this->bunifuFlatButton2->Size = System::Drawing::Size(324, 70);
			this->bunifuFlatButton2->TabIndex = 27;
			this->bunifuFlatButton2->Text = L"Annuler";
			this->bunifuFlatButton2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuFlatButton2->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->bunifuFlatButton2->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			// 
			// bunifuFlatButton3
			// 
			this->bunifuFlatButton3->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->bunifuFlatButton3->BackColor = System::Drawing::Color::White;
			this->bunifuFlatButton3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton3->BorderRadius = 0;
			this->bunifuFlatButton3->ButtonText = L"Cancel";
			this->bunifuFlatButton3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton3->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton3->ForeColor = System::Drawing::Color::White;
			this->bunifuFlatButton3->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton3->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton3.Iconimage")));
			this->bunifuFlatButton3->Iconimage_right = nullptr;
			this->bunifuFlatButton3->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton3->Iconimage_Selected = nullptr;
			this->bunifuFlatButton3->IconMarginLeft = 0;
			this->bunifuFlatButton3->IconMarginRight = 0;
			this->bunifuFlatButton3->IconRightVisible = true;
			this->bunifuFlatButton3->IconRightZoom = 0;
			this->bunifuFlatButton3->IconVisible = false;
			this->bunifuFlatButton3->IconZoom = 90;
			this->bunifuFlatButton3->IsTab = false;
			this->bunifuFlatButton3->Location = System::Drawing::Point(341, 552);
			this->bunifuFlatButton3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bunifuFlatButton3->Name = L"bunifuFlatButton3";
			this->bunifuFlatButton3->Normalcolor = System::Drawing::Color::White;
			this->bunifuFlatButton3->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->bunifuFlatButton3->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton3->selected = false;
			this->bunifuFlatButton3->Size = System::Drawing::Size(144, 51);
			this->bunifuFlatButton3->TabIndex = 28;
			this->bunifuFlatButton3->Text = L"Cancel";
			this->bunifuFlatButton3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuFlatButton3->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->bunifuFlatButton3->TextFont = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F));
			this->bunifuFlatButton3->Click += gcnew System::EventHandler(this, &ProductAdd::bunifuFlatButton3_Click);
			// 
			// bunifuCustomLabel6
			// 
			this->bunifuCustomLabel6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18));
			this->bunifuCustomLabel6->ForeColor = System::Drawing::Color::DimGray;
			this->bunifuCustomLabel6->Location = System::Drawing::Point(159, 49);
			this->bunifuCustomLabel6->Name = L"bunifuCustomLabel6";
			this->bunifuCustomLabel6->Size = System::Drawing::Size(245, 37);
			this->bunifuCustomLabel6->TabIndex = 0;
			this->bunifuCustomLabel6->Text = L"Add a New Product";
			this->bunifuCustomLabel6->Click += gcnew System::EventHandler(this, &ProductAdd::bunifuCustomLabel6_Click);
			// 
			// bunifuSeparator1
			// 
			this->bunifuSeparator1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuSeparator1->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->bunifuSeparator1->LineThickness = 1;
			this->bunifuSeparator1->Location = System::Drawing::Point(28, 90);
			this->bunifuSeparator1->Margin = System::Windows::Forms::Padding(4);
			this->bunifuSeparator1->Name = L"bunifuSeparator1";
			this->bunifuSeparator1->Size = System::Drawing::Size(493, 35);
			this->bunifuSeparator1->TabIndex = 29;
			this->bunifuSeparator1->Transparency = 255;
			this->bunifuSeparator1->Vertical = false;
			// 
			// categoryComboBox
			// 
			this->categoryComboBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->categoryComboBox->ForeColor = System::Drawing::Color::DimGray;
			this->categoryComboBox->FormattingEnabled = true;
			this->categoryComboBox->Location = System::Drawing::Point(72, 258);
			this->categoryComboBox->Margin = System::Windows::Forms::Padding(2);
			this->categoryComboBox->Name = L"categoryComboBox";
			this->categoryComboBox->Size = System::Drawing::Size(413, 30);
			this->categoryComboBox->TabIndex = 30;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->ForeColor = System::Drawing::Color::Gainsboro;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(8, 672);
			this->panel1->TabIndex = 31;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->panel2->Location = System::Drawing::Point(8, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(548, 8);
			this->panel2->TabIndex = 32;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel3->ForeColor = System::Drawing::Color::Gainsboro;
			this->panel3->Location = System::Drawing::Point(548, 8);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(8, 664);
			this->panel3->TabIndex = 33;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel4->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->panel4->Location = System::Drawing::Point(8, 664);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(540, 8);
			this->panel4->TabIndex = 34;
			// 
			// ProductAdd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(556, 672);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->categoryComboBox);
			this->Controls->Add(this->bunifuSeparator1);
			this->Controls->Add(this->bunifuFlatButton3);
			this->Controls->Add(this->bunifuCustomLabel6);
			this->Controls->Add(this->bunifuFlatButton2);
			this->Controls->Add(this->jText_Box1);
			this->Controls->Add(this->bunifuFlatButton1);
			this->Controls->Add(this->bunifuCustomLabel5);
			this->Controls->Add(this->firstNameTx);
			this->Controls->Add(this->bunifuCustomLabel3);
			this->Controls->Add(this->bunifuCustomLabel2);
			this->Controls->Add(this->bunifuCustomLabel1);
			this->Controls->Add(this->StockTextbox);
			this->Controls->Add(this->PriceTextbox);
			this->Controls->Add(this->DiscreptionTextbox);
			this->Controls->Add(this->NomTextBox);
			this->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ProductAdd";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ProductAdd";
			this->Load += gcnew System::EventHandler(this, &ProductAdd::ProductAdd_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	SqlConnection^ cnx = gcnew SqlConnection("Data Source = sql5047.site4now.net; Initial Catalog = DB_A61B88_storemgmnt; User id = DB_A61B88_storemgmnt_admin; Password = Secretpassword11");

	private: System::Void bunifuCustomLabel6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bunifuFlatButton3_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Hide();
	}

	private: System::Void NomTextBox_Enter(System::Object^ sender, System::EventArgs^ e) {
			NomTextBox->Text = "";
	}

	private: System::Void PriceTextbox_Enter(System::Object^ sender, System::EventArgs^ e) {
			PriceTextbox->Text = "";
	}
	private: System::Void StockTextbox_Enter(System::Object^ sender, System::EventArgs^ e) {
			StockTextbox->Text = "";
	}
	private: System::Void DiscreptionTextbox_Enter(System::Object^ sender, System::EventArgs^ e) {
			DiscreptionTextbox->Text = "";
	}
	private: System::Void ProductAdd_Load(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			cnx->Open();
			SqlDataAdapter^ da = gcnew SqlDataAdapter("select * from Category", cnx);
			DataTable^ dt = gcnew DataTable;
			da->Fill(dt);
			categoryComboBox->DataSource = dt;
			categoryComboBox->ValueMember = "id";
			categoryComboBox->DisplayMember = "lebelle";
		}
		catch (const std::exception&)
		{
			MessageBox::Show("An error has occured !!");
			cnx->Close();
		}
		finally {
			cnx->Close();
		}
	}
private: System::Void bunifuFlatButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		cnx->Open();
		SqlCommand^ cmd = gcnew SqlCommand("insert into Produit(libel,category,prixU,stock,description) values(@lib,@cat,@prix,@stck,@descr)",cnx);
		cmd->Parameters->AddWithValue("@lib", NomTextBox->Text);
		cmd->Parameters->AddWithValue("@cat", categoryComboBox->SelectedValue);
		cmd->Parameters->AddWithValue("@prix", PriceTextbox->Text);
		cmd->Parameters->AddWithValue("@stck", StockTextbox->Text);
		cmd->Parameters->AddWithValue("@descr", DiscreptionTextbox->Text);
		cmd->ExecuteNonQuery();
		MessageBox::Show("Product inserted successfully");
	}
	catch (const std::exception&)
	{
		MessageBox::Show("An error has occured somewhere");
	}
	finally
	{
		cnx->Close();
		this->Hide();
	}
}
};
}
