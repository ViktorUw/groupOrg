#include "CreateEventWindow.h"
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
	/// Сводка для EventsWindow
	/// </summary>
	public ref class EventsWindow : public System::Windows::Forms::Form
	{
	public:
		EventsWindow(Form^ okno, String^ GroupID)
		{
			this->StartPosition = FormStartPosition::CenterScreen;
			this->okno = okno;
			this->GroupID = GroupID;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~EventsWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	private: String^ constring = L"datasource=localhost;port=3306;username=root;password=;";
	private: MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		   
	private: String^ GroupID;
	private: Form^ okno;
	private: System::Windows::Forms::Panel^ eventsWindow_header;
	private: System::Windows::Forms::Button^ eventsWindow_btnCreateEvent;
	protected:

	protected:

	private: System::Windows::Forms::Label^ eventsWindow_headerLable;
	private: System::Windows::Forms::FlowLayoutPanel^ eventsWindow_panelForEvents;


	private: System::Windows::Forms::Button^ eventsWIndow_back_to_group;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;


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
			this->eventsWIndow_back_to_group = (gcnew System::Windows::Forms::Button());
			this->eventsWindow_btnCreateEvent = (gcnew System::Windows::Forms::Button());
			this->eventsWindow_headerLable = (gcnew System::Windows::Forms::Label());
			this->eventsWindow_panelForEvents = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->eventsWindow_header->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// eventsWindow_header
			// 
			this->eventsWindow_header->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->eventsWindow_header->Controls->Add(this->eventsWIndow_back_to_group);
			this->eventsWindow_header->Controls->Add(this->eventsWindow_btnCreateEvent);
			this->eventsWindow_header->Controls->Add(this->eventsWindow_headerLable);
			this->eventsWindow_header->Dock = System::Windows::Forms::DockStyle::Top;
			this->eventsWindow_header->Location = System::Drawing::Point(0, 0);
			this->eventsWindow_header->Name = L"eventsWindow_header";
			this->eventsWindow_header->Size = System::Drawing::Size(982, 100);
			this->eventsWindow_header->TabIndex = 1;
			// 
			// eventsWIndow_back_to_group
			// 
			this->eventsWIndow_back_to_group->Cursor = System::Windows::Forms::Cursors::Hand;
			this->eventsWIndow_back_to_group->FlatAppearance->BorderSize = 0;
			this->eventsWIndow_back_to_group->Font = (gcnew System::Drawing::Font(L"Elephant", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eventsWIndow_back_to_group->Location = System::Drawing::Point(25, 31);
			this->eventsWIndow_back_to_group->Name = L"eventsWIndow_back_to_group";
			this->eventsWIndow_back_to_group->Size = System::Drawing::Size(175, 36);
			this->eventsWIndow_back_to_group->TabIndex = 2;
			this->eventsWIndow_back_to_group->Text = L"Wróc do grupy";
			this->eventsWIndow_back_to_group->UseVisualStyleBackColor = true;
			this->eventsWIndow_back_to_group->Click += gcnew System::EventHandler(this, &EventsWindow::eventsWIndow_back_to_group_Click);
			// 
			// eventsWindow_btnCreateEvent
			// 
			this->eventsWindow_btnCreateEvent->Cursor = System::Windows::Forms::Cursors::Hand;
			this->eventsWindow_btnCreateEvent->FlatAppearance->BorderSize = 0;
			this->eventsWindow_btnCreateEvent->Font = (gcnew System::Drawing::Font(L"Elephant", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eventsWindow_btnCreateEvent->Location = System::Drawing::Point(221, 32);
			this->eventsWindow_btnCreateEvent->Name = L"eventsWindow_btnCreateEvent";
			this->eventsWindow_btnCreateEvent->Size = System::Drawing::Size(175, 36);
			this->eventsWindow_btnCreateEvent->TabIndex = 1;
			this->eventsWindow_btnCreateEvent->Text = L"Stwówrz wydarzenie";
			this->eventsWindow_btnCreateEvent->UseVisualStyleBackColor = true;
			this->eventsWindow_btnCreateEvent->Click += gcnew System::EventHandler(this, &EventsWindow::eventsWindow_btnCreateEvent_Click);
			// 
			// eventsWindow_headerLable
			// 
			this->eventsWindow_headerLable->AutoSize = true;
			this->eventsWindow_headerLable->Font = (gcnew System::Drawing::Font(L"Elephant", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eventsWindow_headerLable->Location = System::Drawing::Point(470, 16);
			this->eventsWindow_headerLable->Name = L"eventsWindow_headerLable";
			this->eventsWindow_headerLable->Size = System::Drawing::Size(366, 51);
			this->eventsWindow_headerLable->TabIndex = 0;
			this->eventsWindow_headerLable->Text = L"Group Organizer";
			this->eventsWindow_headerLable->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// eventsWindow_panelForEvents
			// 
			this->eventsWindow_panelForEvents->AutoScroll = true;
			this->eventsWindow_panelForEvents->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->eventsWindow_panelForEvents->Location = System::Drawing::Point(0, 129);
			this->eventsWindow_panelForEvents->Name = L"eventsWindow_panelForEvents";
			this->eventsWindow_panelForEvents->Size = System::Drawing::Size(982, 624);
			this->eventsWindow_panelForEvents->TabIndex = 2;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 100);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(982, 33);
			this->panel1->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bell MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Lista eventów:";
			// 
			// EventsWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 753);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->eventsWindow_panelForEvents);
			this->Controls->Add(this->eventsWindow_header);
			this->Name = L"EventsWindow";
			this->Text = L"EventsWindow";
			this->Shown += gcnew System::EventHandler(this, &EventsWindow::eventsWindow_shown);
			this->eventsWindow_header->ResumeLayout(false);
			this->eventsWindow_header->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void eventsWIndow_back_to_group_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		okno->Show();
	}
	private: System::Void eventsWindow_shown(System::Object^ sender, System::EventArgs^ e) {
		updateEventsWindow();


	}
	private: System::Void updateEventsWindow() {
		String^ str_cmd = "SELECT * FROM `grouporg`.`events` WHERE `id_group` = " + GroupID;
		MySqlCommand^ cmd = gcnew MySqlCommand(str_cmd, conDatabase);

		try
		{
			conDatabase->Open();

			MySqlDataReader^ reader = cmd->ExecuteReader();

			while (reader->Read())
			{
				Panel^ panelForEvent = gcnew Panel();
				panelForEvent->Size = System::Drawing::Size(232, 130);
				panelForEvent->BackColor = Color::DarkGray;
				panelForEvent->Tag = reader->GetString(0);

				Label^ eventName_label = gcnew Label();
				eventName_label->Text = L"Nazwa Eventu: " + reader->GetString(1);
				eventName_label->Size = System::Drawing::Size(240, 30);
				eventName_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				eventName_label->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));

				Label^ eventDateEnd_label = gcnew Label();
				if (reader->IsDBNull(2))
				{
					eventDateEnd_label->Text = L"Data zakończenia eventu: ";
				}
				else
				{
					eventDateEnd_label->Text = L"Data zakończenia eventu: " + reader->GetDateTime(2).ToString("dd.MM.yyyy");
				}
				eventDateEnd_label->Size = System::Drawing::Size(240, 100);
				eventDateEnd_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				eventDateEnd_label->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));

				Panel^ panelForBtn = gcnew Panel();
				panelForBtn->Dock = System::Windows::Forms::DockStyle::Bottom;
				panelForBtn->Size = System::Drawing::Size(240, 30);

				Button^ enterEventBtn = gcnew Button();
				enterEventBtn->Dock = System::Windows::Forms::DockStyle::Left;
				enterEventBtn->Size = System::Drawing::Size(119, 30);
				enterEventBtn->FlatStyle = System::Windows::Forms::FlatStyle::System;
				enterEventBtn->BackColor = Color::LightGray;
				enterEventBtn->Text = L"Wejdź w wydarzenie";
				//this->main_btnCreate->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
				enterEventBtn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				enterEventBtn->Tag = reader->GetString(0);

				Button^ deleteEventBtn = gcnew Button();
				deleteEventBtn->Dock = System::Windows::Forms::DockStyle::Right;
				deleteEventBtn->Size = System::Drawing::Size(119, 30);
				deleteEventBtn->FlatStyle = System::Windows::Forms::FlatStyle::System;
				deleteEventBtn->BackColor = Color::LightGray;
				deleteEventBtn->Text = L"Usuń wydarzenie";
				deleteEventBtn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				deleteEventBtn->Tag = reader->GetString(0);
				deleteEventBtn->Click += gcnew System::EventHandler(this, &EventsWindow::deleteEventBtn_Click);


				panelForBtn->Controls->Add(enterEventBtn);
				panelForBtn->Controls->Add(deleteEventBtn);

				panelForEvent->Controls->Add(eventName_label);
				panelForEvent->Controls->Add(eventDateEnd_label);
				panelForEvent->Controls->Add(panelForBtn);

				eventsWindow_panelForEvents->Controls->Add(panelForEvent);

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
	private: System::Void eventsWindow_btnCreateEvent_Click(System::Object^ sender, System::EventArgs^ e) {
	CreateEventWindow^ createEventWindow = gcnew CreateEventWindow(this, GroupID);
	createEventWindow->ShowDialog();
	//this->Hide();
	if(createEventWindow->DialogResult == System::Windows::Forms::DialogResult::OK)
	{
		eventsWindow_panelForEvents->Controls->Clear();
		updateEventsWindow();
	}
}
	private: System::Void deleteEventBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ eventIDToDelete = dynamic_cast<Button^>(sender)->Tag->ToString();

		String^ str_cmd = "DELETE FROM `grouporg`.`events` WHERE `id_event` = " + eventIDToDelete;
		MySqlCommand^ cmd = gcnew MySqlCommand(str_cmd, conDatabase);

		try
		{
			conDatabase->Open();

			MySqlDataReader^ reader = cmd->ExecuteReader();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);

		}
		finally
		{
			conDatabase->Close();
		}
		eventsWindow_panelForEvents->Controls->Clear();
		updateEventsWindow();
	}
};
}

/*
* MySqlCommand^ cmd = "SELECT events.id_event, events.event_name FROM events JOIN group_event ON events.id_event = group_event.ID_event JOIN groups ON group_event.ID_group = groups.id WHERE groups.id = 288;"
* 
SELECT events.id_event, events.event_name
FROM events
JOIN group_event ON events.id_event = group_event.ID_event
JOIN groups ON group_event.ID_group = groups.id
WHERE groups.id = 288;
*/