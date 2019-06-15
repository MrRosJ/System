#pragma once

#include <string>
#include <msclr/marshal_cppstd.h>
#include <fstream>
#include <vector>

#include "test_SOLUTION.h"
#include "_operation.h"
#include "current_student_example.h"

using namespace msclr::interop;
using namespace std;


namespace ProjectCP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class student_menu : public System::Windows::Forms::Form
	{
	public:	student_menu(void)
		{
			InitializeComponent();
		}
	protected: ~student_menu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ _get_FAM_;
	private: System::Windows::Forms::TextBox^ _get_NAME_;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ _get_CLASS_;
	private: System::Windows::Forms::ComboBox^ all_tests_student;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ system_error;




	private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->_get_FAM_ = (gcnew System::Windows::Forms::TextBox());
			this->_get_NAME_ = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->_get_CLASS_ = (gcnew System::Windows::Forms::TextBox());
			this->all_tests_student = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->system_error = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(261, 258);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Записаться на тест";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &student_menu::Button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(9, 258);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(79, 43);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Выйти в меню";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &student_menu::Button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(96, 7);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"ЗАПИСАТЬСЯ НА ТЕСТ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(9, 58);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 15);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Фамилия";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(35, 91);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 15);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Имя";
			// 
			// _get_FAM_
			// 
			this->_get_FAM_->Location = System::Drawing::Point(68, 58);
			this->_get_FAM_->Margin = System::Windows::Forms::Padding(2);
			this->_get_FAM_->MaxLength = 65;
			this->_get_FAM_->Name = L"_get_FAM_";
			this->_get_FAM_->Size = System::Drawing::Size(294, 20);
			this->_get_FAM_->TabIndex = 6;
			// 
			// _get_NAME_
			// 
			this->_get_NAME_->Location = System::Drawing::Point(68, 88);
			this->_get_NAME_->Margin = System::Windows::Forms::Padding(2);
			this->_get_NAME_->MaxLength = 65;
			this->_get_NAME_->Name = L"_get_NAME_";
			this->_get_NAME_->Size = System::Drawing::Size(294, 20);
			this->_get_NAME_->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(26, 120);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 15);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Класс";
			// 
			// _get_CLASS_
			// 
			this->_get_CLASS_->Location = System::Drawing::Point(68, 117);
			this->_get_CLASS_->Margin = System::Windows::Forms::Padding(2);
			this->_get_CLASS_->MaxLength = 65;
			this->_get_CLASS_->Name = L"_get_CLASS_";
			this->_get_CLASS_->Size = System::Drawing::Size(294, 20);
			this->_get_CLASS_->TabIndex = 9;
			// 
			// all_tests_student
			// 
			this->all_tests_student->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->all_tests_student->FormattingEnabled = true;
			this->all_tests_student->Location = System::Drawing::Point(186, 167);
			this->all_tests_student->Margin = System::Windows::Forms::Padding(2);
			this->all_tests_student->Name = L"all_tests_student";
			this->all_tests_student->Size = System::Drawing::Size(176, 21);
			this->all_tests_student->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(9, 167);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(177, 15);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Выберите тест для решения:";
			// 
			// system_error
			// 
			this->system_error->AutoSize = true;
			this->system_error->Location = System::Drawing::Point(91, 217);
			this->system_error->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->system_error->Name = L"system_error";
			this->system_error->Size = System::Drawing::Size(72, 13);
			this->system_error->TabIndex = 12;
			this->system_error->Text = L"[system_error]";
			this->system_error->Visible = false;
			// 
			// student_menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(372, 317);
			this->Controls->Add(this->system_error);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->all_tests_student);
			this->Controls->Add(this->_get_CLASS_);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->_get_NAME_);
			this->Controls->Add(this->_get_FAM_);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(388, 356);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(388, 356);
			this->Name = L"student_menu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Запись на тестирование";
			this->Load += gcnew System::EventHandler(this, &student_menu::Student_menu_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Student_menu_Load(System::Object^ sender, System::EventArgs^ e) {
		ifstream get_info("Прочее\\База данных\\Названия тестов.txt", ios::in);

		vector<string> all_name_test;
		while (!get_info.eof()) {
			string line;
			getline(get_info, line, '\n');
			all_name_test.push_back(line);
		}

		for (unsigned int i = 0; i < all_name_test.size() - 1; i++)
			all_tests_student->Items->Add(marshal_as<String^>(all_name_test[i]));


		get_info.close();
	}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		system_error->Visible = false;
		String^ Fam = _get_FAM_->Text;
		String^ Name = _get_NAME_->Text;
		String^ Class = _get_CLASS_->Text;
		String^ Current_test = all_tests_student->Text;

		//Проверка на пустоту строк
		if (Fam == "" || Name == "" || Class == "" || Current_test == "") {
			system_error->Visible = true;
			String^ error_Message = "Вы не ввели:\n";
			if (Fam == "")
				error_Message += "-Фамилию\n";
			if (Name == "")
				error_Message += "-Имя\n";
			if (Class == "")
				error_Message += "-Класс\n";
			if (Current_test == "")
				error_Message += "-Решаемый тест";

			system_error->Text = error_Message;
			return;
		}

		bool is_close = false;
		_IS_VALIDATION_LINE(marshal_as<string>(Fam), system_error, is_close); //Проверка для фамилии
		_IS_VALIDATION_LINE(marshal_as<string>(Name), system_error, is_close); //Првоерка для имени
		_IS_VALIDATION_LINE(marshal_as<string>(Class), system_error, is_close); // Проверка для класса обучения

		if (is_close)
			return;

		//Проверка на то, что учащийся не проходил данный тест
		ifstream get_info(marshal_as<string>("Прочее\\База данных\\" + Fam + " " + Name + " " + Class + ".txt"), ios::in);
		if (get_info.peek() != EOF) {
			current_student_example current_examples;
			_FROM_FILE_TO_CLASS(get_info, current_examples);
			vector<all_tests> all_tests = current_examples.get_all_example();
			for (unsigned int i = 0; i < all_tests.size(); i++) {
				if (marshal_as<string>(Current_test) == all_tests[i].get_name_test()) {
					//Тест существует, следовательно его невозможно пройти
					system_error->Visible = true;
					system_error->Text = "Данный тест невозможно пройти дважды";
					return;
				}
			}
		}
		get_info.close();

		this->Hide();
		test_SOLUTION^ Show_Dialoge = gcnew test_SOLUTION(Fam, Name, Class, Current_test);
		Show_Dialoge->ShowDialog();
		this->Show();
		Close();
	}
	private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
};
}
