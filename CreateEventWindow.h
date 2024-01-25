#pragma once

namespace groupOrg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Сводка для CreateEventWindow
	/// </summary>
	public ref class CreateEventWindow : public System::Windows::Forms::Form
	{
	public:
		CreateEventWindow(Form^ okno, String^ GroupID)
		{
			InitializeComponent();

			this->StartPosition = FormStartPosition::CenterScreen;
			this->groupID = GroupID;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~CreateEventWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ groupID;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ createEventWindow_btnCreate;
	private: System::Windows::Forms::TextBox^ createEventWindow_textBoxForEventName;
	protected:


	private: System::Windows::Forms::Label^ createEventWindow_labelForEventName;
	private: System::Windows::Forms::Label^ createEventWindow_labelForEndDate;


	private: System::Windows::Forms::DateTimePicker^ addUserForm_TextBoxForEndDate;
	private: System::Windows::Forms::Button^ createEventWindow_btnCancel;

	private: String^ constring = L"datasource=localhost;port=3306;username=root;password=;";
	private: MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
	private: System::Windows::Forms::Label^ createEventWindow_labelForAddInformation;
	private: System::Windows::Forms::TextBox^ CreateEvent_TextBoxForAddInformation;








	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CreateEventWindow::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->CreateEvent_TextBoxForAddInformation = (gcnew System::Windows::Forms::TextBox());
			this->createEventWindow_labelForAddInformation = (gcnew System::Windows::Forms::Label());
			this->createEventWindow_btnCancel = (gcnew System::Windows::Forms::Button());
			this->addUserForm_TextBoxForEndDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->createEventWindow_labelForEndDate = (gcnew System::Windows::Forms::Label());
			this->createEventWindow_btnCreate = (gcnew System::Windows::Forms::Button());
			this->createEventWindow_textBoxForEventName = (gcnew System::Windows::Forms::TextBox());
			this->createEventWindow_labelForEventName = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->panel1->Controls->Add(this->CreateEvent_TextBoxForAddInformation);
			this->panel1->Controls->Add(this->createEventWindow_labelForAddInformation);
			this->panel1->Controls->Add(this->createEventWindow_btnCancel);
			this->panel1->Controls->Add(this->addUserForm_TextBoxForEndDate);
			this->panel1->Controls->Add(this->createEventWindow_labelForEndDate);
			this->panel1->Controls->Add(this->createEventWindow_btnCreate);
			this->panel1->Controls->Add(this->createEventWindow_textBoxForEventName);
			this->panel1->Controls->Add(this->createEventWindow_labelForEventName);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(709, 484);
			this->panel1->TabIndex = 1;
			// 
			// CreateEvent_TextBoxForAddInformation
			// 
			this->CreateEvent_TextBoxForAddInformation->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->CreateEvent_TextBoxForAddInformation->Location = System::Drawing::Point(270, 151);
			this->CreateEvent_TextBoxForAddInformation->Multiline = true;
			this->CreateEvent_TextBoxForAddInformation->Name = L"CreateEvent_TextBoxForAddInformation";
			this->CreateEvent_TextBoxForAddInformation->Size = System::Drawing::Size(319, 96);
			this->CreateEvent_TextBoxForAddInformation->TabIndex = 7;
			// 
			// createEventWindow_labelForAddInformation
			// 
			this->createEventWindow_labelForAddInformation->AutoSize = true;
			this->createEventWindow_labelForAddInformation->Font = (gcnew System::Drawing::Font(L"Elephant", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->createEventWindow_labelForAddInformation->Location = System::Drawing::Point(43, 163);
			this->createEventWindow_labelForAddInformation->Name = L"createEventWindow_labelForAddInformation";
			this->createEventWindow_labelForAddInformation->Size = System::Drawing::Size(182, 74);
			this->createEventWindow_labelForAddInformation->TabIndex = 6;
			this->createEventWindow_labelForAddInformation->Text = L"Dodatkowe\r\n infromacje:";
			// 
			// createEventWindow_btnCancel
			// 
			this->createEventWindow_btnCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->createEventWindow_btnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->createEventWindow_btnCancel->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->createEventWindow_btnCancel->Location = System::Drawing::Point(149, 379);
			this->createEventWindow_btnCancel->Name = L"createEventWindow_btnCancel";
			this->createEventWindow_btnCancel->Size = System::Drawing::Size(179, 43);
			this->createEventWindow_btnCancel->TabIndex = 5;
			this->createEventWindow_btnCancel->Text = L"Anuluj";
			this->createEventWindow_btnCancel->UseVisualStyleBackColor = true;
			this->createEventWindow_btnCancel->Click += gcnew System::EventHandler(this, &CreateEventWindow::createEventWindow_btnCancel_Click);
			// 
			// addUserForm_TextBoxForEndDate
			// 
			this->addUserForm_TextBoxForEndDate->CalendarMonthBackground = System::Drawing::Color::White;
			this->addUserForm_TextBoxForEndDate->CalendarTitleForeColor = System::Drawing::Color::AliceBlue;
			this->addUserForm_TextBoxForEndDate->CustomFormat = L"yyyy-MM-dd";
			this->addUserForm_TextBoxForEndDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->addUserForm_TextBoxForEndDate->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->addUserForm_TextBoxForEndDate->Location = System::Drawing::Point(270, 266);
			this->addUserForm_TextBoxForEndDate->Name = L"addUserForm_TextBoxForEndDate";
			this->addUserForm_TextBoxForEndDate->Size = System::Drawing::Size(319, 32);
			this->addUserForm_TextBoxForEndDate->TabIndex = 4;
			// 
			// createEventWindow_labelForEndDate
			// 
			this->createEventWindow_labelForEndDate->AutoSize = true;
			this->createEventWindow_labelForEndDate->Font = (gcnew System::Drawing::Font(L"Elephant", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->createEventWindow_labelForEndDate->Location = System::Drawing::Point(20, 266);
			this->createEventWindow_labelForEndDate->Name = L"createEventWindow_labelForEndDate";
			this->createEventWindow_labelForEndDate->Size = System::Drawing::Size(205, 30);
			this->createEventWindow_labelForEndDate->TabIndex = 3;
			this->createEventWindow_labelForEndDate->Text = L"Data ukonczenia\r\n";
			// 
			// createEventWindow_btnCreate
			// 
			this->createEventWindow_btnCreate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->createEventWindow_btnCreate->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->createEventWindow_btnCreate->Location = System::Drawing::Point(370, 379);
			this->createEventWindow_btnCreate->Name = L"createEventWindow_btnCreate";
			this->createEventWindow_btnCreate->Size = System::Drawing::Size(179, 43);
			this->createEventWindow_btnCreate->TabIndex = 2;
			this->createEventWindow_btnCreate->Text = L"Stworz";
			this->createEventWindow_btnCreate->UseVisualStyleBackColor = true;
			this->createEventWindow_btnCreate->Click += gcnew System::EventHandler(this, &CreateEventWindow::createEventWindow_btnCreate_Click);
			// 
			// createEventWindow_textBoxForEventName
			// 
			this->createEventWindow_textBoxForEventName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->createEventWindow_textBoxForEventName->Location = System::Drawing::Point(130, 91);
			this->createEventWindow_textBoxForEventName->Name = L"createEventWindow_textBoxForEventName";
			this->createEventWindow_textBoxForEventName->Size = System::Drawing::Size(470, 30);
			this->createEventWindow_textBoxForEventName->TabIndex = 1;
			// 
			// createEventWindow_labelForEventName
			// 
			this->createEventWindow_labelForEventName->AutoSize = true;
			this->createEventWindow_labelForEventName->Font = (gcnew System::Drawing::Font(L"Elephant", 22.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->createEventWindow_labelForEventName->Location = System::Drawing::Point(167, 20);
			this->createEventWindow_labelForEventName->Name = L"createEventWindow_labelForEventName";
			this->createEventWindow_labelForEventName->Size = System::Drawing::Size(382, 47);
			this->createEventWindow_labelForEventName->TabIndex = 0;
			this->createEventWindow_labelForEventName->Text = L"Podaj nazwe eventu";
			// 
			// CreateEventWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(709, 484);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"CreateEventWindow";
			this->Text = L"CreateEventWindow";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void createEventWindow_btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void createEventWindow_btnCreate_Click(System::Object^ sender, System::EventArgs^ e) {
		if (createEventWindow_textBoxForEventName->Text->Length != 0)
		{
			String^ query = "INSERT INTO grouporg.events (id_event, event_name, end_date, id_group, additional_information) VALUES (null, '" + createEventWindow_textBoxForEventName->Text + "', '" + addUserForm_TextBoxForEndDate->Text + "' ," + groupID + ", '" + CreateEvent_TextBoxForAddInformation->Text + "')";
			MySqlCommand^ cmdDatabase = gcnew MySqlCommand(query, conDatabase);




			try
			{
				conDatabase->Open();
				cmdDatabase->ExecuteNonQuery();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}


			this->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->Close();
		}
		else
		{
			MessageBox::Show("Wprowadz nazwe eventu");
		}
	}

};
}



//TODO: Edycja obowiązków i ich zaznaczanie jako wykonane;
//TODO: Dodanie textBoxu dla uwag do eventu;
//TODO: Dodanie możliwości wysłania informacji o obowiązkach do każdej osoby mejlem (wszystko do wszystkich)

//TODO: info o evencie
