#include "CreationForm.h"
#include "GroupWindow.h"
#using <System.dll>

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
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ mainWindow_header;
	protected:


					// zmienne globalne do łączenia z bazą danych
	private: String^ constring = L"datasource=localhost;port=3306;username=root;password=;";
	private: MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

	private: System::Windows::Forms::Button^ main_btnCreate;
	private: System::Windows::Forms::Label^ mainWindow_headerLable;

	private: System::Windows::Forms::FlowLayoutPanel^ panel2;

			 // zmienne globalne do przechowywania nazw grup
	//private: Dictionary <int, Panel^> gNames = gcnew Dictionary<int, Panel^>();
	private: List<String^>^ groupID = gcnew List<String^>();
	private: List<String^>^ groupNames = gcnew List<String^>();

	protected:

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
			this->mainWindow_header = (gcnew System::Windows::Forms::Panel());
			this->main_btnCreate = (gcnew System::Windows::Forms::Button());
			this->mainWindow_headerLable = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->mainWindow_header->SuspendLayout();
			this->SuspendLayout();
			// 
			// mainWindow_header
			// 
			this->mainWindow_header->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->mainWindow_header->Controls->Add(this->main_btnCreate);
			this->mainWindow_header->Controls->Add(this->mainWindow_headerLable);
			this->mainWindow_header->Dock = System::Windows::Forms::DockStyle::Top;
			this->mainWindow_header->Location = System::Drawing::Point(0, 0);
			this->mainWindow_header->Name = L"mainWindow_header";
			this->mainWindow_header->Size = System::Drawing::Size(982, 100);
			this->mainWindow_header->TabIndex = 0;
			// 
			// main_btnCreate
			// 
			this->main_btnCreate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->main_btnCreate->FlatAppearance->BorderSize = 0;
			this->main_btnCreate->Font = (gcnew System::Drawing::Font(L"Elephant", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->main_btnCreate->Location = System::Drawing::Point(88, 33);
			this->main_btnCreate->Name = L"main_btnCreate";
			this->main_btnCreate->Size = System::Drawing::Size(175, 36);
			this->main_btnCreate->TabIndex = 1;
			this->main_btnCreate->Text = L"Stwówrz grupe";
			this->main_btnCreate->UseVisualStyleBackColor = true;
			this->main_btnCreate->Click += gcnew System::EventHandler(this, &MyForm::main_btnCreate_Click);
			// 
			// mainWindow_headerLable
			// 
			this->mainWindow_headerLable->AutoSize = true;
			this->mainWindow_headerLable->Font = (gcnew System::Drawing::Font(L"Elephant", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mainWindow_headerLable->Location = System::Drawing::Point(400, 18);
			this->mainWindow_headerLable->Name = L"mainWindow_headerLable";
			this->mainWindow_headerLable->Size = System::Drawing::Size(366, 51);
			this->mainWindow_headerLable->TabIndex = 0;
			this->mainWindow_headerLable->Text = L"Group Organizer";
			this->mainWindow_headerLable->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->AutoScroll = true;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 100);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(982, 653);
			this->panel2->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(982, 753);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->mainWindow_header);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Group Organizer";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->mainWindow_header->ResumeLayout(false);
			this->mainWindow_header->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

//											Функції створенні мною
// -----------------------------------------------------------------------------------------------------------------------------------------
	private: void updateGroupsWindow()
	{
		try {
			panel2->Controls->Clear();
			groupID->Clear();
			groupNames->Clear();

			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM groupOrg.`groups`", conDatabase);
			MySqlDataReader^ reader = cmd->ExecuteReader();

			while (reader->Read())
			{
				groupID->Add(reader->GetString(0));

				groupNames->Add(reader->GetString(1));
			}
			for (int i = 0; i < groupNames->Count; i++)
			{
				Panel^ groupPanel = gcnew Panel();
				groupPanel->BackColor = Color::DarkGray;
				groupPanel->Size = System::Drawing::Size(232, 130);
				groupPanel->Cursor = System::Windows::Forms::Cursors::Hand;

				//New Label with group name
				Label^ groupLabel = gcnew Label();

				groupLabel->Text = L"Group Name: " + groupNames[i];
				groupLabel->Size = System::Drawing::Size(239, 80);
				groupLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				groupLabel->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));

				//New panel for buttons 
				Panel^ btnPanel = gcnew Panel();
				btnPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
				btnPanel->Size = System::Drawing::Size(230, 30);
				//btnPanel->BackColor = Color::Red;


				//Edit button
				//Button groupEdit_btn
				Button^ editGroup = gcnew Button();
				editGroup->Name = L"editGroup";
				editGroup->Text = L"Edytuj Grupę";
				editGroup->Size = System::Drawing::Size(117, 20);
				editGroup->FlatStyle = FlatStyle::System;
				editGroup->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				editGroup->Dock = System::Windows::Forms::DockStyle::Left;
				editGroup->Tag = groupNames[i];
				editGroup->Click += gcnew System::EventHandler(this, &MyForm::openGroup_Click);


				//Button to remove group
				//groupRemove_btn
				Button^ removeGroup = gcnew Button();
				removeGroup->Name = L"removeGroup";
				removeGroup->Text = L"Usun grupę";
				removeGroup->Size = System::Drawing::Size(117, 20);
				removeGroup->FlatStyle = FlatStyle::System;
				removeGroup->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				removeGroup->Dock = System::Windows::Forms::DockStyle::Right;
				removeGroup->Tag = groupID[i];
				removeGroup->Click += gcnew System::EventHandler(this, &MyForm::removeGroup_Click);



				// dodanie elementów do głównej formy				
				groupPanel->Controls->Add(groupLabel);
				groupPanel->Controls->Add(btnPanel);

				btnPanel->Controls->Add(editGroup);
				btnPanel->Controls->Add(removeGroup);

				panel2->Controls->Add(groupPanel);
			}


		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		finally {
			conDatabase->Close();
		}

	}

							// Функції створенні системою
// -----------------------------------------------------------------------------------------------------------------------------------------
		   
	
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
		conDatabase->Open();
		updateGroupsWindow();

	}


	private: System::Void openGroup_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ groupNameToDelete = dynamic_cast<Button^>(sender)->Name->ToString();
		String^ groupIDToDelete = dynamic_cast<Button^>(sender)->Tag->ToString();
	
		openGroupWindow(groupNameToDelete, groupIDToDelete);
	}



	private: System::Void removeGroup_Click(System::Object^ sender, System::EventArgs^ e) {
		
		String^ groupIDToDelete = dynamic_cast<Button^>(sender)->Tag->ToString();
		String^ deleteCmd = "DELETE FROM groupOrg.groups WHERE id = @value";
		MySqlCommand^ cmdDelete = gcnew MySqlCommand(deleteCmd, conDatabase);
		cmdDelete->Parameters->AddWithValue("@value", groupIDToDelete);

		try
		{
			conDatabase->Open();
			cmdDelete->ExecuteNonQuery();
			updateGroupsWindow();
			
			
			
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

	private: System::Void main_btnCreate_Click(System::Object^ sender, System::EventArgs^ e) {
		
		
		CreationForm^ creationForm = gcnew CreationForm();
		if (creationForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			
			String^ groupName = creationForm->GroupName;
			if (groupName->Length != 0) {
				//wysłanie zapytania do bazy danych

				String^ insertQuery = "INSERT INTO grouporg.groups (id, groupName) VALUES (NULL, @value2)";
				MySqlCommand^ cmdInsert = gcnew MySqlCommand(insertQuery, conDatabase);
				cmdInsert->Parameters->AddWithValue("@value2", groupName);

				try {
					conDatabase->Open();
					cmdInsert->ExecuteNonQuery();
					MessageBox::Show("Grupa stworzona!");
					updateGroupsWindow();
								
					//Application::Restart();
					

				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->Message);
				}
				finally {
					conDatabase->Close();
				}
			}
			else {
				MessageBox::Show("Nie wpisales nazwy grupy!");
				
			}
			
		}	
	}
	private: System::Void openGroupWindow(String^ cur_groupName, String^ cur_groupID)
	{
		
		/*GroupWindow^ groupWindowForm = gcnew GroupWindow();
		groupWindowForm->ShowDialog();*/

		this->Hide();
		groupOrg::GroupWindow^ groupWindowForm = gcnew GroupWindow(cur_groupName, cur_groupID);
		groupWindowForm->ShowDialog();
		
		
	}


	

};// end
}

//як зробити так щоб назва змінної залежала від самої змінної.


//TODO :: //Tabela osób i powiązanie z grupami !!!!!!!! do 22.11.2023
//В моєму проекті є панелі на котрих є назва групи і кнопка видалити панель. Як зробити так щоб після натискання кнопки Усунти групу з бази даних 

/*
INSERT INTO `members`(`MemberID`, `GroupID`, `FirstName`, `LastName`, `Email`, `BirthDate`, `Gender`, `PhoneNumber`, `JoinDate`) VALUES (null,126,'Valeria','Pilhui','gmail@gmail.com','2003-07-06','woman','545 454 484','2023-11-20')
*/

/* Питання до бази даних щоб показати назву групи до якої належить особа з ім'ям
SELECT groups.GroupName
FROM members
JOIN groups ON members.GroupID = groups.id
WHERE members.FirstName = 'Viktor';
*/
 

/* Tworzenie tablicy odnoszeń użytkownik-grupa
CREATE TABLE Group_Members(
	`ID_group` INT NOT NULL ,
	`ID_member` INT NOT NULL,
	FOREIGN KEY (ID_group) REFERENCES Groups(id),
	FOREIGN KEY (ID_member) REFERENCES members(MemberID)
);
*/