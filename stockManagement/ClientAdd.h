#pragma once


namespace stockManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::Sql;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ClientAdd
	/// </summary>
	public ref class ClientAdd : public System::Windows::Forms::Form
	{
	public:
		ClientAdd(void)
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
		~ClientAdd()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuFlatButton^ bunifuFlatButton1;
	protected:
	private: Bunifu::Framework::UI::BunifuFlatButton^ cancelBtn;
	private: JTextBox::JText_Box^ jText_Box1;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel3;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ emailTx;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel1;
	private: Bunifu::Framework::UI::BunifuSeparator^ bunifuSeparator1;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel6;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel5;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel2;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel1;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ NomTextBox;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ lastNameTx;
	private: System::Windows::Forms::TextBox^ AdresseTx;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ClientAdd::typeid));
			this->bunifuFlatButton1 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->cancelBtn = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->jText_Box1 = (gcnew JTextBox::JText_Box());
			this->bunifuCustomLabel3 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->emailTx = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bunifuSeparator1 = (gcnew Bunifu::Framework::UI::BunifuSeparator());
			this->bunifuCustomLabel6 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel5 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel2 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel1 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->NomTextBox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->lastNameTx = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->AdresseTx = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
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
			this->bunifuFlatButton1->Location = System::Drawing::Point(96, 683);
			this->bunifuFlatButton1->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->bunifuFlatButton1->Name = L"bunifuFlatButton1";
			this->bunifuFlatButton1->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->bunifuFlatButton1->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->bunifuFlatButton1->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton1->selected = false;
			this->bunifuFlatButton1->Size = System::Drawing::Size(331, 63);
			this->bunifuFlatButton1->TabIndex = 93;
			this->bunifuFlatButton1->Text = L"Add";
			this->bunifuFlatButton1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuFlatButton1->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton1->TextFont = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F));
			this->bunifuFlatButton1->Click += gcnew System::EventHandler(this, &ClientAdd::bunifuFlatButton1_Click);
			// 
			// cancelBtn
			// 
			this->cancelBtn->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->cancelBtn->BackColor = System::Drawing::Color::White;
			this->cancelBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->cancelBtn->BorderRadius = 0;
			this->cancelBtn->ButtonText = L"Cancel";
			this->cancelBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cancelBtn->DisabledColor = System::Drawing::Color::Gray;
			this->cancelBtn->ForeColor = System::Drawing::Color::White;
			this->cancelBtn->Iconcolor = System::Drawing::Color::Transparent;
			this->cancelBtn->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cancelBtn.Iconimage")));
			this->cancelBtn->Iconimage_right = nullptr;
			this->cancelBtn->Iconimage_right_Selected = nullptr;
			this->cancelBtn->Iconimage_Selected = nullptr;
			this->cancelBtn->IconMarginLeft = 0;
			this->cancelBtn->IconMarginRight = 0;
			this->cancelBtn->IconRightVisible = false;
			this->cancelBtn->IconRightZoom = 0;
			this->cancelBtn->IconVisible = false;
			this->cancelBtn->IconZoom = 90;
			this->cancelBtn->IsTab = false;
			this->cancelBtn->Location = System::Drawing::Point(455, 683);
			this->cancelBtn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cancelBtn->Name = L"cancelBtn";
			this->cancelBtn->Normalcolor = System::Drawing::Color::White;
			this->cancelBtn->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->cancelBtn->OnHoverTextColor = System::Drawing::Color::White;
			this->cancelBtn->selected = false;
			this->cancelBtn->Size = System::Drawing::Size(192, 63);
			this->cancelBtn->TabIndex = 92;
			this->cancelBtn->Text = L"Cancel";
			this->cancelBtn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->cancelBtn->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->cancelBtn->TextFont = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F));
			this->cancelBtn->Click += gcnew System::EventHandler(this, &ClientAdd::cancelBtn_Click);
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
			this->jText_Box1->Location = System::Drawing::Point(452, 681);
			this->jText_Box1->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->jText_Box1->MaxLength = 32767;
			this->jText_Box1->Name = L"jText_Box1";
			this->jText_Box1->onFocusBorderColor = System::Drawing::Color::Magenta;
			this->jText_Box1->PasswordChar = '\0';
			this->jText_Box1->RoundedBorder = 0;
			this->jText_Box1->Size = System::Drawing::Size(195, 65);
			this->jText_Box1->TabIndex = 91;
			this->jText_Box1->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->jText_Box1->TextColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->jText_Box1->TextInput = L"";
			// 
			// bunifuCustomLabel3
			// 
			this->bunifuCustomLabel3->AutoSize = true;
			this->bunifuCustomLabel3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel3->ForeColor = System::Drawing::Color::DimGray;
			this->bunifuCustomLabel3->Location = System::Drawing::Point(95, 396);
			this->bunifuCustomLabel3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->bunifuCustomLabel3->Name = L"bunifuCustomLabel3";
			this->bunifuCustomLabel3->Size = System::Drawing::Size(59, 28);
			this->bunifuCustomLabel3->TabIndex = 88;
			this->bunifuCustomLabel3->Text = L"Email";
			// 
			// emailTx
			// 
			this->emailTx->BorderColorFocused = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(124)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->emailTx->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->emailTx->BorderColorMouseHover = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->emailTx->BorderThickness = 1;
			this->emailTx->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->emailTx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->emailTx->ForeColor = System::Drawing::Color::DimGray;
			this->emailTx->isPassword = false;
			this->emailTx->Location = System::Drawing::Point(96, 431);
			this->emailTx->Margin = System::Windows::Forms::Padding(0);
			this->emailTx->Name = L"emailTx";
			this->emailTx->Size = System::Drawing::Size(551, 43);
			this->emailTx->TabIndex = 89;
			this->emailTx->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel4->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->panel4->Location = System::Drawing::Point(11, 817);
			this->panel4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(719, 10);
			this->panel4->TabIndex = 86;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel3->ForeColor = System::Drawing::Color::Gainsboro;
			this->panel3->Location = System::Drawing::Point(730, 10);
			this->panel3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(11, 817);
			this->panel3->TabIndex = 85;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->panel2->Location = System::Drawing::Point(11, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(730, 10);
			this->panel2->TabIndex = 84;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->ForeColor = System::Drawing::Color::Gainsboro;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(11, 827);
			this->panel1->TabIndex = 83;
			// 
			// bunifuSeparator1
			// 
			this->bunifuSeparator1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuSeparator1->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->bunifuSeparator1->LineThickness = 1;
			this->bunifuSeparator1->Location = System::Drawing::Point(37, 111);
			this->bunifuSeparator1->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->bunifuSeparator1->Name = L"bunifuSeparator1";
			this->bunifuSeparator1->Size = System::Drawing::Size(657, 43);
			this->bunifuSeparator1->TabIndex = 82;
			this->bunifuSeparator1->Transparency = 255;
			this->bunifuSeparator1->Vertical = false;
			// 
			// bunifuCustomLabel6
			// 
			this->bunifuCustomLabel6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->bunifuCustomLabel6->ForeColor = System::Drawing::Color::DimGray;
			this->bunifuCustomLabel6->Location = System::Drawing::Point(215, 60);
			this->bunifuCustomLabel6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->bunifuCustomLabel6->Name = L"bunifuCustomLabel6";
			this->bunifuCustomLabel6->Size = System::Drawing::Size(327, 46);
			this->bunifuCustomLabel6->TabIndex = 77;
			this->bunifuCustomLabel6->Text = L"Add a New Client";
			// 
			// bunifuCustomLabel5
			// 
			this->bunifuCustomLabel5->AutoSize = true;
			this->bunifuCustomLabel5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel5->ForeColor = System::Drawing::Color::DimGray;
			this->bunifuCustomLabel5->Location = System::Drawing::Point(96, 500);
			this->bunifuCustomLabel5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->bunifuCustomLabel5->Name = L"bunifuCustomLabel5";
			this->bunifuCustomLabel5->Size = System::Drawing::Size(80, 28);
			this->bunifuCustomLabel5->TabIndex = 81;
			this->bunifuCustomLabel5->Text = L"Adresse";
			// 
			// bunifuCustomLabel2
			// 
			this->bunifuCustomLabel2->AutoSize = true;
			this->bunifuCustomLabel2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel2->ForeColor = System::Drawing::Color::DimGray;
			this->bunifuCustomLabel2->Location = System::Drawing::Point(95, 283);
			this->bunifuCustomLabel2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->bunifuCustomLabel2->Name = L"bunifuCustomLabel2";
			this->bunifuCustomLabel2->Size = System::Drawing::Size(103, 28);
			this->bunifuCustomLabel2->TabIndex = 80;
			this->bunifuCustomLabel2->Text = L"Last Name";
			// 
			// bunifuCustomLabel1
			// 
			this->bunifuCustomLabel1->AutoSize = true;
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel1->ForeColor = System::Drawing::Color::DimGray;
			this->bunifuCustomLabel1->Location = System::Drawing::Point(96, 165);
			this->bunifuCustomLabel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(106, 28);
			this->bunifuCustomLabel1->TabIndex = 79;
			this->bunifuCustomLabel1->Text = L"First Name";
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
			this->NomTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->NomTextBox->ForeColor = System::Drawing::Color::DimGray;
			this->NomTextBox->isPassword = false;
			this->NomTextBox->Location = System::Drawing::Point(96, 204);
			this->NomTextBox->Margin = System::Windows::Forms::Padding(0);
			this->NomTextBox->Name = L"NomTextBox";
			this->NomTextBox->Size = System::Drawing::Size(551, 43);
			this->NomTextBox->TabIndex = 78;
			this->NomTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// lastNameTx
			// 
			this->lastNameTx->BorderColorFocused = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->lastNameTx->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->lastNameTx->BorderColorMouseHover = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->lastNameTx->BorderThickness = 1;
			this->lastNameTx->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->lastNameTx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->lastNameTx->ForeColor = System::Drawing::Color::DimGray;
			this->lastNameTx->isPassword = false;
			this->lastNameTx->Location = System::Drawing::Point(96, 318);
			this->lastNameTx->Margin = System::Windows::Forms::Padding(0);
			this->lastNameTx->Name = L"lastNameTx";
			this->lastNameTx->Size = System::Drawing::Size(551, 43);
			this->lastNameTx->TabIndex = 87;
			this->lastNameTx->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// AdresseTx
			// 
			this->AdresseTx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->AdresseTx->ForeColor = System::Drawing::Color::DimGray;
			this->AdresseTx->Location = System::Drawing::Point(96, 534);
			this->AdresseTx->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->AdresseTx->Multiline = true;
			this->AdresseTx->Name = L"AdresseTx";
			this->AdresseTx->Size = System::Drawing::Size(549, 88);
			this->AdresseTx->TabIndex = 90;
			// 
			// ClientAdd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(741, 827);
			this->Controls->Add(this->bunifuFlatButton1);
			this->Controls->Add(this->cancelBtn);
			this->Controls->Add(this->jText_Box1);
			this->Controls->Add(this->bunifuCustomLabel3);
			this->Controls->Add(this->emailTx);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->bunifuSeparator1);
			this->Controls->Add(this->bunifuCustomLabel6);
			this->Controls->Add(this->bunifuCustomLabel5);
			this->Controls->Add(this->bunifuCustomLabel2);
			this->Controls->Add(this->bunifuCustomLabel1);
			this->Controls->Add(this->NomTextBox);
			this->Controls->Add(this->lastNameTx);
			this->Controls->Add(this->AdresseTx);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"ClientAdd";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ClientAdd";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	SqlConnection^ cnx = gcnew SqlConnection("Data Source = sql5047.site4now.net; Initial Catalog = DB_A61B88_storemgmnt; User id = DB_A61B88_storemgmnt_admin; Password = Secretpassword11");
	private: System::Void cancelBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
private: System::Void bunifuFlatButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlCommand^ cmd = gcnew SqlCommand("insert into Client(name,lastname,adresse,email) values(@name,@lastname,@address,@email)",cnx);
	cnx->Open();
	cmd->Parameters->AddWithValue("name", NomTextBox->Text);
	cmd->Parameters->AddWithValue("lastname", lastNameTx->Text);
	cmd->Parameters->AddWithValue("address", AdresseTx->Text);
	cmd->Parameters->AddWithValue("email", emailTx->Text);
	cmd->ExecuteNonQuery();
	cnx->Close();
	MessageBox::Show(String::Format("{0} added successfuly !!", NomTextBox->Text));
	this->Hide();
}
};
}
