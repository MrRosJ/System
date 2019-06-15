#pragma once
#include <fstream>
#include <string>
#include <Windows.h>

#include "teacher_menu.h"
#include "student_menu.h"
#include "test_validation.h"

namespace ProjectCP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::Media;
	using namespace System::Collections::Generic;

	public ref class mainMenu : public System::Windows::Forms::Form
	{
	public:	mainMenu(void)
		{
			InitializeComponent();
		}

	protected: ~mainMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ _for_teacher;
	private: System::Windows::Forms::Button^ _for_student;
	private: System::Windows::Forms::Button^ _exit;

	private: System::Windows::Forms::Label^ warning_label;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ next_track;
	private: System::Windows::Forms::Button^ back_track;
	private: System::Windows::Forms::Button^ pause_track;
	private: System::Windows::Forms::Label^ label1;
	private: System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->_for_teacher = (gcnew System::Windows::Forms::Button());
			this->_for_student = (gcnew System::Windows::Forms::Button());
			this->_exit = (gcnew System::Windows::Forms::Button());
			this->warning_label = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->next_track = (gcnew System::Windows::Forms::Button());
			this->back_track = (gcnew System::Windows::Forms::Button());
			this->pause_track = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// _for_teacher
			// 
			this->_for_teacher->Location = System::Drawing::Point(351, 115);
			this->_for_teacher->Margin = System::Windows::Forms::Padding(2);
			this->_for_teacher->Name = L"_for_teacher";
			this->_for_teacher->Size = System::Drawing::Size(198, 32);
			this->_for_teacher->TabIndex = 0;
			this->_for_teacher->Text = L"Для учителя";
			this->_for_teacher->UseVisualStyleBackColor = true;
			this->_for_teacher->Click += gcnew System::EventHandler(this, &mainMenu::_for_teacher_Click);
			// 
			// _for_student
			// 
			this->_for_student->Location = System::Drawing::Point(351, 169);
			this->_for_student->Margin = System::Windows::Forms::Padding(2);
			this->_for_student->Name = L"_for_student";
			this->_for_student->Size = System::Drawing::Size(198, 32);
			this->_for_student->TabIndex = 1;
			this->_for_student->Text = L"Для учащегося";
			this->_for_student->UseVisualStyleBackColor = true;
			this->_for_student->Click += gcnew System::EventHandler(this, &mainMenu::_for_student_Click);
			// 
			// _exit
			// 
			this->_exit->Location = System::Drawing::Point(351, 278);
			this->_exit->Margin = System::Windows::Forms::Padding(2);
			this->_exit->Name = L"_exit";
			this->_exit->Size = System::Drawing::Size(198, 32);
			this->_exit->TabIndex = 3;
			this->_exit->Text = L"Выйти";
			this->_exit->UseVisualStyleBackColor = true;
			this->_exit->Click += gcnew System::EventHandler(this, &mainMenu::_exit_Click);
			// 
			// warning_label
			// 
			this->warning_label->AutoSize = true;
			this->warning_label->Location = System::Drawing::Point(85, 451);
			this->warning_label->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->warning_label->Name = L"warning_label";
			this->warning_label->Size = System::Drawing::Size(78, 13);
			this->warning_label->TabIndex = 4;
			this->warning_label->Text = L"[warning_label]";
			this->warning_label->Visible = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(351, 225);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(198, 32);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Посмотреть результаты";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &mainMenu::_valid_Click);
			// 
			// next_track
			// 
			this->next_track->Location = System::Drawing::Point(487, 338);
			this->next_track->Name = L"next_track";
			this->next_track->Size = System::Drawing::Size(62, 23);
			this->next_track->TabIndex = 5;
			this->next_track->Text = L"-->";
			this->next_track->UseVisualStyleBackColor = true;
			this->next_track->Click += gcnew System::EventHandler(this, &mainMenu::Next_track_Click);
			// 
			// back_track
			// 
			this->back_track->Location = System::Drawing::Point(351, 338);
			this->back_track->Name = L"back_track";
			this->back_track->Size = System::Drawing::Size(51, 23);
			this->back_track->TabIndex = 6;
			this->back_track->Text = L"<--";
			this->back_track->UseVisualStyleBackColor = true;
			this->back_track->Click += gcnew System::EventHandler(this, &mainMenu::Back_track_Click);
			// 
			// pause_track
			// 
			this->pause_track->Location = System::Drawing::Point(408, 338);
			this->pause_track->Name = L"pause_track";
			this->pause_track->Size = System::Drawing::Size(73, 23);
			this->pause_track->TabIndex = 7;
			this->pause_track->Text = L"| >";
			this->pause_track->UseVisualStyleBackColor = true;
			this->pause_track->Click += gcnew System::EventHandler(this, &mainMenu::Pause_track_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(351, 316);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(201, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Выберите музыку для прослушивания";
			// 
			// mainMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(918, 536);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pause_track);
			this->Controls->Add(this->back_track);
			this->Controls->Add(this->next_track);
			this->Controls->Add(this->warning_label);
			this->Controls->Add(this->_exit);
			this->Controls->Add(this->_for_student);
			this->Controls->Add(this->_for_teacher);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"mainMenu";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Программная система";
			this->Load += gcnew System::EventHandler(this, &mainMenu::MainMenu_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Плеер для проигрывания музыки
	ref class Player {
		private:
			//Массив из названий треков 
			static List<String^> tracks;
			static bool is_pause = true;
			static int numbers_track = 1;
			static SoundPlayer^ sfm;
		public:
			Player() {}
			~Player(){}
			//Установить названия треков
			void set_name_tracks() {
				tracks.Add("Трек 1");
				tracks.Add("Трек 2");
				tracks.Add("Трек 3");
				tracks.Add("Трек 4");
				tracks.Add("Трек 5");
				tracks.Add("Трек 6");
				tracks.Add("Трек 7");
				tracks.Add("Трек 8");
			}

			//Работаем с паузой
			void set_pause(bool is_pause) { this->is_pause = is_pause; }
			bool get_pause() { return is_pause; }
			void pause_music() { sfm->Stop(); }


			//Номер трека
			void set_number_track(int number_track) { this->numbers_track = number_track; }
			int get_number_track() { return numbers_track; }

			//Устанавливаем музыку
			void set_music(){
				sfm = gcnew SoundPlayer("Прочее\\Треки\\" + tracks[numbers_track - 1] + ".wav");
				sfm->PlayLooping();
			}
			
			//УСТАНОВИТЬ КОММУНИЗМ
			void set_COMMUNIZM(){}

			//УБРАТЬ КОММУНИЗМ ИЗ-ЗА КОММУНИЗМА
			void remove_COMMUNIZM(){}

			//Переключение на другую музыку
			void increment() { numbers_track++; }
			void decrement() { numbers_track--; }

		};
	private: Player^ player;

	private: System::Void _for_teacher_Click(System::Object^ sender, System::EventArgs^ e) {
		warning_label->Visible = false;
		this->Hide();
		teacher_menu^ Show_Dialoge = gcnew teacher_menu();
		Show_Dialoge->ShowDialog();
		this->Show();
	}
	private: System::Void _for_student_Click(System::Object^ sender, System::EventArgs^ e) {
		ifstream is_empty_file("Прочее\\База данных\\Названия тестов.txt", ios::in);
		if (is_empty_file.peek() == EOF) {
			warning_label->Text = "Нет доступных тестов для выполнения";
			warning_label->Visible = true;
			is_empty_file.close();
			return;
		}
		else
			warning_label->Visible = false;
		
		is_empty_file.close();
		this->Hide();
		student_menu^ Show_Dialoge = gcnew student_menu();
		Show_Dialoge->ShowDialog();
		this->Show();
	}
	private: System::Void _valid_Click(System::Object^ sender, System::EventArgs^ e) {
		ifstream is_empty_file("Прочее\\База данных\\База данных студентов.txt", ios::in);
		if (is_empty_file.peek() == EOF) {
			warning_label->Text = "Нет доступных тестов для проверки";
			warning_label->Visible = true;
			is_empty_file.close();
			return;
		}
		else
			warning_label->Visible = false;

		is_empty_file.close();
		this->Hide();
		test_validation^ Show_Dialoge = gcnew test_validation();
		Show_Dialoge->ShowDialog();
		this->Show();
	}
	


	private: System::Void _exit_Click(System::Object^ sender, System::EventArgs^ e) {
		auto aut = MessageBox::Show("Подтвердите выход из программной системы", "Закрытие", MessageBoxButtons::YesNo);
		if (aut == ::DialogResult::Yes) {
			Close();
		}
	}
	
	//Работа с музыкой	
	private: System::Void Pause_track_Click(System::Object^ sender, System::EventArgs^ e) {
		if (player->get_pause()) {
			pause_track->Text = "| |";
			player->set_music();
			player->set_pause(false);
			
		}
		else if (!player->get_pause()) {
			pause_track->Text = "| >";
			player->set_pause(true);
			player->pause_music();
		}
	}
	private: System::Void Next_track_Click(System::Object^ sender, System::EventArgs^ e) {
		player->increment();
		if (player->get_number_track() == 9)
			player->set_number_track(1);
		if (!player->get_pause()) {
			player->set_music();
		}
	}
	private: System::Void Back_track_Click(System::Object^ sender, System::EventArgs^ e) {
		player->decrement();
		if (player->get_number_track() == 0)
			player->set_number_track(8);
		if (!player->get_pause()) {
			player->set_music();
		}
	}
	private: System::Void MainMenu_Load(System::Object^ sender, System::EventArgs^ e) {
		player->set_name_tracks();
	}
};
}
