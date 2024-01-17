#include "AddDuty.h"
#include "EditDutyWindow.h"

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
	/// Сводка для CurrentEventWindow
	/// </summary>
	public ref class CurrentEventWindow : public System::Windows::Forms::Form
	{
	public:
		CurrentEventWindow(Form^ okno, String^ GroupID, String^ eventName, String^ eventId)
		{
			InitializeComponent();
			
			currentEventWindow_eventNameLabel->Text = eventName;
			this->StartPosition = FormStartPosition::CenterScreen;
			this->okno = okno;
			this->eventId = eventId;
			this->eventName = eventName;
			this->GroupID = GroupID;

		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~CurrentEventWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ duty;
	//private: String^ memberId;

	private: Form^ okno;
	private: String^ eventName;
	private: String^ eventId;
	private: String^ GroupID;


	private: String^ constring = L"datasource=localhost;port=3306;username=root;password=;";
	private: MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

	private: System::Windows::Forms::Panel^ eventsWindow_header;
	private: System::Windows::Forms::Button^ currentEventWindow_createDutyBtn;

	private: System::Windows::Forms::Label^ currentEventWindow_eventNameLabel;
	protected:

	private: bool checkIsCompleted(String^ complatedDuty) {
		MySqlCommand^ cmd = gcnew MySqlCommand("SELECT is_complited FROM `groupOrg`.`idevent_idmember_duty` WHERE	`duty` = '" + complatedDuty + "'", conDatabase);
		try
		{
			conDatabase->Open();
			MySqlDataReader^ readStatus = cmd->ExecuteReader();
			while (readStatus->Read())
			{
				String^ Status = readStatus->GetString(0);
				if (Status == "Yes")
				{
					return true;
				}
				else if (Status == "No")
				{
					return false;
				}
			}
		}
		catch (Exception^ Ex)
		{
			MessageBox::Show(Ex->Message);
		}
		finally
		{
			conDatabase->Close();
		}
		
	}

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::FlowLayoutPanel^ currentEventWindow_panelForDuties;
	private: System::Windows::Forms::Button^ currentEventWindow_backToEventsBtn;


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
			this->eventsWindow_header = (gcnew System::Windows::Forms::Panel());
			this->currentEventWindow_backToEventsBtn = (gcnew System::Windows::Forms::Button());
			this->currentEventWindow_createDutyBtn = (gcnew System::Windows::Forms::Button());
			this->currentEventWindow_eventNameLabel = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->currentEventWindow_panelForDuties = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->eventsWindow_header->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// eventsWindow_header
			// 
			this->eventsWindow_header->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->eventsWindow_header->Controls->Add(this->currentEventWindow_backToEventsBtn);
			this->eventsWindow_header->Controls->Add(this->currentEventWindow_createDutyBtn);
			this->eventsWindow_header->Controls->Add(this->currentEventWindow_eventNameLabel);
			this->eventsWindow_header->Dock = System::Windows::Forms::DockStyle::Top;
			this->eventsWindow_header->Location = System::Drawing::Point(0, 0);
			this->eventsWindow_header->Name = L"eventsWindow_header";
			this->eventsWindow_header->Size = System::Drawing::Size(982, 100);
			this->eventsWindow_header->TabIndex = 2;
			// 
			// currentEventWindow_backToEventsBtn
			// 
			this->currentEventWindow_backToEventsBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->currentEventWindow_backToEventsBtn->FlatAppearance->BorderSize = 0;
			this->currentEventWindow_backToEventsBtn->Font = (gcnew System::Drawing::Font(L"Elephant", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->currentEventWindow_backToEventsBtn->Location = System::Drawing::Point(35, 32);
			this->currentEventWindow_backToEventsBtn->Name = L"currentEventWindow_backToEventsBtn";
			this->currentEventWindow_backToEventsBtn->Size = System::Drawing::Size(161, 36);
			this->currentEventWindow_backToEventsBtn->TabIndex = 3;
			this->currentEventWindow_backToEventsBtn->Text = L"Wróć do eventów";
			this->currentEventWindow_backToEventsBtn->UseVisualStyleBackColor = true;
			this->currentEventWindow_backToEventsBtn->Click += gcnew System::EventHandler(this, &CurrentEventWindow::currentEventWindow_backToEventsBtn_Click);
			// 
			// currentEventWindow_createDutyBtn
			// 
			this->currentEventWindow_createDutyBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->currentEventWindow_createDutyBtn->FlatAppearance->BorderSize = 0;
			this->currentEventWindow_createDutyBtn->Font = (gcnew System::Drawing::Font(L"Elephant", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->currentEventWindow_createDutyBtn->Location = System::Drawing::Point(229, 31);
			this->currentEventWindow_createDutyBtn->Name = L"currentEventWindow_createDutyBtn";
			this->currentEventWindow_createDutyBtn->Size = System::Drawing::Size(234, 36);
			this->currentEventWindow_createDutyBtn->TabIndex = 2;
			this->currentEventWindow_createDutyBtn->Text = L"Przydzielenie obowiazków";
			this->currentEventWindow_createDutyBtn->UseVisualStyleBackColor = true;
			this->currentEventWindow_createDutyBtn->Click += gcnew System::EventHandler(this, &CurrentEventWindow::currentEventWindow_createDutyBtn_Click);
			// 
			// currentEventWindow_eventNameLabel
			// 
			this->currentEventWindow_eventNameLabel->AutoSize = true;
			this->currentEventWindow_eventNameLabel->Font = (gcnew System::Drawing::Font(L"Elephant", 24, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->currentEventWindow_eventNameLabel->Location = System::Drawing::Point(517, 18);
			this->currentEventWindow_eventNameLabel->Name = L"currentEventWindow_eventNameLabel";
			this->currentEventWindow_eventNameLabel->Size = System::Drawing::Size(312, 51);
			this->currentEventWindow_eventNameLabel->TabIndex = 0;
			this->currentEventWindow_eventNameLabel->Text = L"Nazwa Eventu";
			this->currentEventWindow_eventNameLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 100);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(982, 33);
			this->panel1->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bell MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Obowiązki osoby:";
			// 
			// currentEventWindow_panelForDuties
			// 
			this->currentEventWindow_panelForDuties->AutoScroll = true;
			this->currentEventWindow_panelForDuties->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->currentEventWindow_panelForDuties->Location = System::Drawing::Point(0, 129);
			this->currentEventWindow_panelForDuties->Name = L"currentEventWindow_panelForDuties";
			this->currentEventWindow_panelForDuties->Size = System::Drawing::Size(982, 624);
			this->currentEventWindow_panelForDuties->TabIndex = 9;
			// 
			// CurrentEventWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 753);
			this->Controls->Add(this->currentEventWindow_panelForDuties);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->eventsWindow_header);
			this->Name = L"CurrentEventWindow";
			this->Text = L"CurrentEventWindow";
			this->Shown += gcnew System::EventHandler(this, &CurrentEventWindow::CurrentEventWindow_Shown);
			this->eventsWindow_header->ResumeLayout(false);
			this->eventsWindow_header->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void currentEventWindow_backToEventsBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		okno->Show();
	}
	private: Panel^ panelForDuty;
	private: Label^ labelForDuty;

	private: void updateDuties() {
		String^ cmd = "SELECT `members`.`MemberID`, `members`.`FirstName`, `idevent_idmember_duty`.`duty` FROM `grouporg`.`members` JOIN `grouporg`.`idevent_idmember_duty` ON `members`.`MemberID` = `idevent_idmember_duty`.`idMember` WHERE `idEvent` = " + eventId;
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand(cmd, conDatabase);
		MySqlDataReader^ myReader = cmdDataBase->ExecuteReader();
		while (myReader->Read()) {
			panelForDuty = gcnew Panel();
			panelForDuty->Size = System::Drawing::Size(982, 20);
			panelForDuty->Dock = System::Windows::Forms::DockStyle::Top;

			labelForDuty = gcnew Label();
			labelForDuty->Text = myReader->GetString(1) + " - " + myReader->GetString(2);
			labelForDuty->Font = (gcnew System::Drawing::Font(L"Bell MT", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			labelForDuty->Location = System::Drawing::Point(3, 3);
			labelForDuty->AutoSize = true;

			Button^ editDutyBtn = gcnew Button();
			editDutyBtn->Text = "Edytuj";
			editDutyBtn->Font = gcnew System::Drawing::Font(editDutyBtn->Font->FontFamily, 7);
			editDutyBtn->Size = System::Drawing::Size(75, 20);
			editDutyBtn->Location = System::Drawing::Point(570, 0);
			editDutyBtn->FlatAppearance->BorderSize = 0;
			editDutyBtn->Tag = myReader->GetString(2);
			editDutyBtn->Click += gcnew System::EventHandler(this, &CurrentEventWindow::editDutyBtn_Click);


			Button^ deleteDutyBtn = gcnew Button();
			deleteDutyBtn->Text = "Usun";
			deleteDutyBtn->Font = gcnew System::Drawing::Font(deleteDutyBtn->Font->FontFamily, 7);
			deleteDutyBtn->Size = System::Drawing::Size(75, 20);
			deleteDutyBtn->Location = System::Drawing::Point(650, 0);
			deleteDutyBtn->FlatAppearance->BorderSize = 0;
			deleteDutyBtn->Tag = myReader->GetString(2);
			deleteDutyBtn->Click += gcnew System::EventHandler(this, &CurrentEventWindow::deleteDutyBtn_Click);

			Button^ completeDutyBtn = gcnew Button();
			completeDutyBtn->Text = "Wykonane";
			completeDutyBtn->Font = gcnew System::Drawing::Font(completeDutyBtn->Font->FontFamily, 7);
			completeDutyBtn->Size = System::Drawing::Size(75, 20);
			completeDutyBtn->Location = System::Drawing::Point(490, 0);
			completeDutyBtn->FlatAppearance->BorderSize = 0;
			completeDutyBtn->Tag = myReader->GetString(2);
			completeDutyBtn->Click += gcnew System::EventHandler(this, &CurrentEventWindow::completeDutyBtn_Click);



			panelForDuty->Controls->Add(labelForDuty);
			panelForDuty->Controls->Add(deleteDutyBtn);
			panelForDuty->Controls->Add(editDutyBtn);
			panelForDuty->Controls->Add(completeDutyBtn);

			currentEventWindow_panelForDuties->Controls->Add(panelForDuty);
		}
				
	}

	private: System::Void CurrentEventWindow_Shown(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			conDatabase->Open();

			updateDuties();


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
	private: System::Void currentEventWindow_createDutyBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		AddDuty^ addDuty = gcnew AddDuty(this, GroupID, eventId, eventName);
		//this->Hide();
		addDuty->ShowDialog();
		if(addDuty->DialogResult == System::Windows::Forms::DialogResult::OK)
		{
			currentEventWindow_panelForDuties->Controls->Clear();
			try
			{
				conDatabase->Open();
				updateDuties();

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
	}


	private: System::Void editDutyBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ btn = (Button^)sender;
		String^ duty = btn->Tag->ToString();
		

		EditDutyWindow^ editDutyWindow = gcnew EditDutyWindow(this, eventId, GroupID, duty);
		//this->Hide();
		editDutyWindow->ShowDialog();
		if (editDutyWindow->DialogResult == System::Windows::Forms::DialogResult::OK)
		{
			currentEventWindow_panelForDuties->Controls->Clear();
			try
			{
				conDatabase->Open();

				updateDuties();
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
	}

	private: System::Void deleteDutyBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ btn = (Button^)sender;
		String^ duty = btn->Tag->ToString();

		String^ cmd = "DELETE FROM `grouporg`.`idevent_idmember_duty` WHERE `duty` = '" + duty + " ';";
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand(cmd, conDatabase);
		//MySqlDataReader^ myReader;
		try
		{
			conDatabase->Open();

			int rowsAffected = cmdDataBase->ExecuteNonQuery();

			if (rowsAffected > 0)
			{
				//MessageBox::Show("Usunieto obowiazek");
				currentEventWindow_panelForDuties->Controls->Clear();
				updateDuties();
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

	
	private: System::Void completeDutyBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ btn = (Button^)sender;
		Panel^ panel = (Panel^)btn->Parent;
		String^ complatedDuty = btn->Tag->ToString();

		if (checkIsCompleted(complatedDuty))
		{
			panel->BackColor = Color::Red;
			
		}
		else
		{
			panel->BackColor = Color::Blue;

		}

	}
};
}

/*
CREATE TABLE idEvent_idMember_duty(
	idEvent int,
	idMember int,
	duty varchar(255),
	FOREIGN KEY (idEvent) REFERENCES events(id_event),
	FOREIGN KEY (idMember) REFERENCES members(memberID)
)
*/
/*
SELECT events.id_event, events.event_name
FROM events
JOIN group_event ON events.id_event = group_event.ID_event
JOIN groups ON group_event.ID_group = groups.id
WHERE groups.id = 288;
*/
