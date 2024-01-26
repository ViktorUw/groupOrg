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
	/// Сводка для EditEventWindow
	/// </summary>
	public ref class EditEventWindow : public System::Windows::Forms::Form
	{
	public:
		EditEventWindow(Form^ okno, String^ EventID)
		{
			InitializeComponent();

			this->StartPosition = FormStartPosition::CenterScreen;
			this->okno = okno;
			this->EventID = EventID;
			disableTextBoxes(isEdit);
			
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~EditEventWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: bool isEdit;

	private: String^ constring = L"datasource=localhost;port=3306;username=root;password=;";
	private: MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

	private: Form^ okno;
	private: String^ EventID;
	private: System::Windows::Forms::TextBox^ editEvent_TextBoxForAddInformation;
	private: System::Windows::Forms::Label^ editEventWindow_labelForAddInformation;
	private: System::Windows::Forms::Button^ editEventWindow_btnCancel;

	protected:



	private: System::Windows::Forms::DateTimePicker^ addUserForm_TextBoxForEndDate;
	private: System::Windows::Forms::Label^ editEventWindow_labelForEndDate;
	private: System::Windows::Forms::Button^ editEventWindow_btnCreate;


	private: System::Windows::Forms::TextBox^ editEventWindow_textBoxForEventName;
	private: System::Windows::Forms::Label^ editEventWindow_labelForEventName;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

	private: void disableTextBoxes(bool isEdit) {
		if (isEdit) {
			editEventWindow_textBoxForEventName->Enabled = true;
			editEvent_TextBoxForAddInformation->Enabled = true;
			addUserForm_TextBoxForEndDate->Enabled = true;


			editEventWindow_btnCreate->Text = "Zapisz";
		}
		else
		{
			editEventWindow_textBoxForEventName->Enabled = false;
			editEvent_TextBoxForAddInformation->Enabled = false;
			addUserForm_TextBoxForEndDate->Enabled = false;

			editEventWindow_btnCreate->Text = "Edytuj";
		}

	}

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EditEventWindow::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->editEvent_TextBoxForAddInformation = (gcnew System::Windows::Forms::TextBox());
			this->editEventWindow_labelForAddInformation = (gcnew System::Windows::Forms::Label());
			this->editEventWindow_btnCancel = (gcnew System::Windows::Forms::Button());
			this->addUserForm_TextBoxForEndDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->editEventWindow_labelForEndDate = (gcnew System::Windows::Forms::Label());
			this->editEventWindow_btnCreate = (gcnew System::Windows::Forms::Button());
			this->editEventWindow_textBoxForEventName = (gcnew System::Windows::Forms::TextBox());
			this->editEventWindow_labelForEventName = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->panel1->Controls->Add(this->editEvent_TextBoxForAddInformation);
			this->panel1->Controls->Add(this->editEventWindow_labelForAddInformation);
			this->panel1->Controls->Add(this->editEventWindow_btnCancel);
			this->panel1->Controls->Add(this->addUserForm_TextBoxForEndDate);
			this->panel1->Controls->Add(this->editEventWindow_labelForEndDate);
			this->panel1->Controls->Add(this->editEventWindow_btnCreate);
			this->panel1->Controls->Add(this->editEventWindow_textBoxForEventName);
			this->panel1->Controls->Add(this->editEventWindow_labelForEventName);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(692, 453);
			this->panel1->TabIndex = 2;
			// 
			// editEvent_TextBoxForAddInformation
			// 
			this->editEvent_TextBoxForAddInformation->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->editEvent_TextBoxForAddInformation->Location = System::Drawing::Point(270, 151);
			this->editEvent_TextBoxForAddInformation->Multiline = true;
			this->editEvent_TextBoxForAddInformation->Name = L"editEvent_TextBoxForAddInformation";
			this->editEvent_TextBoxForAddInformation->Size = System::Drawing::Size(319, 96);
			this->editEvent_TextBoxForAddInformation->TabIndex = 7;
			// 
			// editEventWindow_labelForAddInformation
			// 
			this->editEventWindow_labelForAddInformation->AutoSize = true;
			this->editEventWindow_labelForAddInformation->Font = (gcnew System::Drawing::Font(L"Elephant", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->editEventWindow_labelForAddInformation->Location = System::Drawing::Point(43, 163);
			this->editEventWindow_labelForAddInformation->Name = L"editEventWindow_labelForAddInformation";
			this->editEventWindow_labelForAddInformation->Size = System::Drawing::Size(182, 74);
			this->editEventWindow_labelForAddInformation->TabIndex = 6;
			this->editEventWindow_labelForAddInformation->Text = L"Dodatkowe\r\n infromacje:";
			// 
			// editEventWindow_btnCancel
			// 
			this->editEventWindow_btnCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->editEventWindow_btnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->editEventWindow_btnCancel->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editEventWindow_btnCancel->Location = System::Drawing::Point(149, 359);
			this->editEventWindow_btnCancel->Name = L"editEventWindow_btnCancel";
			this->editEventWindow_btnCancel->Size = System::Drawing::Size(179, 43);
			this->editEventWindow_btnCancel->TabIndex = 5;
			this->editEventWindow_btnCancel->Text = L"Anuluj";
			this->editEventWindow_btnCancel->UseVisualStyleBackColor = true;
			this->editEventWindow_btnCancel->Click += gcnew System::EventHandler(this, &EditEventWindow::createEventWindow_btnCancel_Click);
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
			// editEventWindow_labelForEndDate
			// 
			this->editEventWindow_labelForEndDate->AutoSize = true;
			this->editEventWindow_labelForEndDate->Font = (gcnew System::Drawing::Font(L"Elephant", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->editEventWindow_labelForEndDate->Location = System::Drawing::Point(20, 266);
			this->editEventWindow_labelForEndDate->Name = L"editEventWindow_labelForEndDate";
			this->editEventWindow_labelForEndDate->Size = System::Drawing::Size(205, 30);
			this->editEventWindow_labelForEndDate->TabIndex = 3;
			this->editEventWindow_labelForEndDate->Text = L"Data ukonczenia\r\n";
			// 
			// editEventWindow_btnCreate
			// 
			this->editEventWindow_btnCreate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->editEventWindow_btnCreate->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editEventWindow_btnCreate->Location = System::Drawing::Point(370, 359);
			this->editEventWindow_btnCreate->Name = L"editEventWindow_btnCreate";
			this->editEventWindow_btnCreate->Size = System::Drawing::Size(179, 43);
			this->editEventWindow_btnCreate->TabIndex = 2;
			this->editEventWindow_btnCreate->Text = L"Edytuj";
			this->editEventWindow_btnCreate->UseVisualStyleBackColor = true;
			this->editEventWindow_btnCreate->Click += gcnew System::EventHandler(this, &EditEventWindow::editEventWindow_btnCreate_Click);
			// 
			// editEventWindow_textBoxForEventName
			// 
			this->editEventWindow_textBoxForEventName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->editEventWindow_textBoxForEventName->Location = System::Drawing::Point(130, 91);
			this->editEventWindow_textBoxForEventName->Name = L"editEventWindow_textBoxForEventName";
			this->editEventWindow_textBoxForEventName->Size = System::Drawing::Size(470, 30);
			this->editEventWindow_textBoxForEventName->TabIndex = 1;
			// 
			// editEventWindow_labelForEventName
			// 
			this->editEventWindow_labelForEventName->AutoSize = true;
			this->editEventWindow_labelForEventName->Font = (gcnew System::Drawing::Font(L"Elephant", 22.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->editEventWindow_labelForEventName->Location = System::Drawing::Point(197, 21);
			this->editEventWindow_labelForEventName->Name = L"editEventWindow_labelForEventName";
			this->editEventWindow_labelForEventName->Size = System::Drawing::Size(276, 47);
			this->editEventWindow_labelForEventName->TabIndex = 0;
			this->editEventWindow_labelForEventName->Text = L"Nazwa eventu";
			// 
			// EditEventWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(692, 453);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"EditEventWindow";
			this->Text = L"EditEventWindow";
			this->Shown += gcnew System::EventHandler(this, &EditEventWindow::EditEventWindow_Shown);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void createEventWindow_btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		okno->Show();
	}

	private: System::Void EditEventWindow_Shown(System::Object^ sender, System::EventArgs^ e) {
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * FROM `grouporg`.`events` WHERE `id_event` = " + EventID + ";", conDatabase);
		try
		{
			conDatabase->Open();
			MySqlDataReader^ myReader = cmdDataBase->ExecuteReader();
			while (myReader->Read())
			{
				editEventWindow_textBoxForEventName->Text = myReader->GetString(1);
				editEvent_TextBoxForAddInformation->Text = myReader->GetString(4);
				addUserForm_TextBoxForEndDate->Text = myReader->GetString(2);
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		finally
		{
			conDatabase->Close();
		}
	}

	private: System::Void editEventWindow_btnCreate_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isEdit)
		{
			isEdit = false;
			disableTextBoxes(isEdit);
			MySqlCommand^ cmdDataBase = gcnew MySqlCommand("UPDATE `grouporg`.`events` SET `event_name` = '" + editEventWindow_textBoxForEventName->Text + "', `additional_information` = '" + editEvent_TextBoxForAddInformation->Text + "', `end_date` = '" + addUserForm_TextBoxForEndDate->Text + "' WHERE `events`.`id_event` = " + EventID + ";", conDatabase);
			try
			{
				conDatabase->Open();
				MySqlDataReader^ myReader = cmdDataBase->ExecuteReader();

				//MessageBox::Show("Event zostal zedytowany");
				editEventWindow_btnCreate->DialogResult = System::Windows::Forms::DialogResult::OK;
				editEventWindow_btnCreate->PerformClick();
				okno->Show();
				
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
			finally
			{
				conDatabase->Close();
			}
		}
		else
		{
			isEdit = true;
			disableTextBoxes(isEdit);

		}
	}
};
}
