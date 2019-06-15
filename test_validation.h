#pragma once
#include <fstream>
#include <string>
#include <sstream>
#include <msclr\marshal_cppstd.h>
#include "_operation.h"
#include "current_student_example.h"

using namespace std;
using namespace msclr::interop;

namespace ProjectCP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class test_validation : public System::Windows::Forms::Form
	{
	public: test_validation(void)
		{
			InitializeComponent();
		}
	protected: ~test_validation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ view_database;
	protected:

	protected:
	private: System::Windows::Forms::Button^ menu;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ _FAM;
	private: System::Windows::Forms::TextBox^ _NAME;
	private: System::Windows::Forms::TextBox^ _CLASS;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ _ALL_TESTS;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ system_label;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ question;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ true_answer;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ answer;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ is_true;








	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->view_database = (gcnew System::Windows::Forms::DataGridView());
			this->question = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->true_answer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->answer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->is_true = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menu = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->_FAM = (gcnew System::Windows::Forms::TextBox());
			this->_NAME = (gcnew System::Windows::Forms::TextBox());
			this->_CLASS = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->_ALL_TESTS = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->system_label = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->view_database))->BeginInit();
			this->SuspendLayout();
			// 
			// view_database
			// 
			this->view_database->AllowUserToAddRows = false;
			this->view_database->AllowUserToDeleteRows = false;
			this->view_database->AllowUserToResizeColumns = false;
			this->view_database->AllowUserToResizeRows = false;
			this->view_database->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->view_database->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->view_database->BackgroundColor = System::Drawing::SystemColors::ControlLight;
			this->view_database->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->view_database->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->view_database->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->question,
					this->true_answer, this->answer, this->is_true
			});
			this->view_database->Dock = System::Windows::Forms::DockStyle::Right;
			this->view_database->EnableHeadersVisualStyles = false;
			this->view_database->Location = System::Drawing::Point(405, 0);
			this->view_database->Margin = System::Windows::Forms::Padding(2);
			this->view_database->MultiSelect = false;
			this->view_database->Name = L"view_database";
			this->view_database->ReadOnly = true;
			this->view_database->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->view_database->RowHeadersWidth = 51;
			this->view_database->RowTemplate->Height = 24;
			this->view_database->Size = System::Drawing::Size(698, 446);
			this->view_database->TabIndex = 0;
			this->view_database->TabStop = false;
			// 
			// question
			// 
			this->question->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->question->FillWeight = 128.3422F;
			this->question->HeaderText = L"Задание";
			this->question->MinimumWidth = 6;
			this->question->Name = L"question";
			this->question->ReadOnly = true;
			this->question->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->question->Width = 56;
			// 
			// true_answer
			// 
			this->true_answer->FillWeight = 90.55258F;
			this->true_answer->HeaderText = L"Правильный ответ";
			this->true_answer->MinimumWidth = 6;
			this->true_answer->Name = L"true_answer";
			this->true_answer->ReadOnly = true;
			this->true_answer->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// answer
			// 
			this->answer->FillWeight = 90.55258F;
			this->answer->HeaderText = L"Ответ учащегося";
			this->answer->MinimumWidth = 6;
			this->answer->Name = L"answer";
			this->answer->ReadOnly = true;
			this->answer->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// is_true
			// 
			this->is_true->FillWeight = 90.55258F;
			this->is_true->HeaderText = L"Правильность выполнения";
			this->is_true->MinimumWidth = 6;
			this->is_true->Name = L"is_true";
			this->is_true->ReadOnly = true;
			this->is_true->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// menu
			// 
			this->menu->Location = System::Drawing::Point(11, 407);
			this->menu->Margin = System::Windows::Forms::Padding(2);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(103, 28);
			this->menu->TabIndex = 10;
			this->menu->Text = L"Назад в меню";
			this->menu->UseVisualStyleBackColor = true;
			this->menu->Click += gcnew System::EventHandler(this, &test_validation::Menu_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 66);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Введите фамилию:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(54, 91);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Введите имя:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(45, 114);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Введите класс:";
			// 
			// _FAM
			// 
			this->_FAM->Location = System::Drawing::Point(130, 66);
			this->_FAM->Margin = System::Windows::Forms::Padding(2);
			this->_FAM->MaxLength = 65;
			this->_FAM->Name = L"_FAM";
			this->_FAM->Size = System::Drawing::Size(271, 20);
			this->_FAM->TabIndex = 5;
			// 
			// _NAME
			// 
			this->_NAME->Location = System::Drawing::Point(130, 89);
			this->_NAME->Margin = System::Windows::Forms::Padding(2);
			this->_NAME->MaxLength = 65;
			this->_NAME->Name = L"_NAME";
			this->_NAME->Size = System::Drawing::Size(271, 20);
			this->_NAME->TabIndex = 6;
			// 
			// _CLASS
			// 
			this->_CLASS->Location = System::Drawing::Point(130, 112);
			this->_CLASS->Margin = System::Windows::Forms::Padding(2);
			this->_CLASS->MaxLength = 65;
			this->_CLASS->Name = L"_CLASS";
			this->_CLASS->Size = System::Drawing::Size(271, 20);
			this->_CLASS->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(322, 189);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 28);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Принять";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &test_validation::Button1_Click);
			// 
			// _ALL_TESTS
			// 
			this->_ALL_TESTS->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->_ALL_TESTS->FormattingEnabled = true;
			this->_ALL_TESTS->Location = System::Drawing::Point(130, 135);
			this->_ALL_TESTS->Margin = System::Windows::Forms::Padding(2);
			this->_ALL_TESTS->Name = L"_ALL_TESTS";
			this->_ALL_TESTS->Size = System::Drawing::Size(271, 21);
			this->_ALL_TESTS->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(38, 137);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Название теста:";
			// 
			// system_label
			// 
			this->system_label->AutoSize = true;
			this->system_label->Location = System::Drawing::Point(26, 236);
			this->system_label->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->system_label->Name = L"system_label";
			this->system_label->Size = System::Drawing::Size(73, 13);
			this->system_label->TabIndex = 11;
			this->system_label->Text = L"[system_label]";
			this->system_label->Visible = false;
			// 
			// test_validation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1103, 446);
			this->Controls->Add(this->system_label);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->_ALL_TESTS);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->_CLASS);
			this->Controls->Add(this->_NAME);
			this->Controls->Add(this->_FAM);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menu);
			this->Controls->Add(this->view_database);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1119, 485);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(1119, 485);
			this->Name = L"test_validation";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Проверка результатов";
			this->Load += gcnew System::EventHandler(this, &test_validation::Test_validation_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->view_database))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		system_label->Visible = false;
		string Fam = marshal_as<string>(_FAM->Text);
		string Name = marshal_as<string>(_NAME->Text);
		string Class = marshal_as<string>(_CLASS->Text);
		string name_test = marshal_as<string>(_ALL_TESTS->Text);

		//Проверка на пустые поля
		if (Fam == "" || Name == "" || Class == "" || name_test == "") {
			system_label->Visible = true;
			string error_message = "Вы не ввели:\n";
			if (Fam == "")
				error_message += "-Фамилию\n";
			if (Name == "")
				error_message += "-Имя\n";
			if (Class == "")
				error_message += "-Класс\n";
			if (name_test == "")
				error_message += "-Название теста";

			system_label->Text = marshal_as<String^>(error_message);
			return;
		}

		bool is_close = false;
		_IS_VALIDATION_LINE(Fam, system_label, is_close); //Проверка для фамилии
		_IS_VALIDATION_LINE(Name, system_label, is_close); //Првоерка для имени
		_IS_VALIDATION_LINE(Class, system_label, is_close); // Проверка для класса обучения

		if (is_close)
			return;


		ifstream read_one_test("Прочее\\База данных\\" + (Fam + " " + Name + " " + Class + ".txt"), ios::in);
		system_label->Visible = false;
		//Проверка на существование файла, т.е. информации о том, зарегистрирован ли учащийся
		if (!read_one_test.is_open()) {
			system_label->Visible = true;
			system_label->Text = "Данные об учащемся невозможно получить";
			read_one_test.close();
			return;
		}

		//Проверка на пустоту файла
		if (read_one_test.peek() == EOF) {
			system_label->Visible = true;
			system_label->Text = "Данные о тестах учащегося нет в БД";
			read_one_test.close();
			return;
		}

		bool is_aval = false;

		current_student_example all_examples;
		_FROM_FILE_TO_CLASS(read_one_test, all_examples); //Получение объекта класса через файл
		_VALIDATION_TESTS(all_examples, name_test, is_aval); //Проверка результатов по конкретному тесту
		
		//Если тест найден, то выполняем его реализацию в таблице
		if (is_aval) {
			//Всего у нас будет i строк в таблице
			for (unsigned int i = 0; i < all_examples.get_all_example().size(); i++) {
				//Получаем информацию по конкретному тесту
				vector<all_tests> all_tests_student = all_examples.get_all_example();
				//Прогоняем по циклу с заданиями
				for (unsigned int j = 0; j < all_tests_student.size(); j++) {
					if (all_tests_student[j].get_name_test() == name_test) {
						vector<student_examples> all_student_examples = all_tests_student[j].get_all_examples();
						//Берем информацию по всем заданиям
						for (unsigned int k = 0; k < all_student_examples.size(); k++) {
							string question = all_student_examples[k].get_question();
							string answer = all_student_examples[k].get_answer();
							bool is_true = all_student_examples[k].get_is_true();
							string true_answer;
							
							//Берем правильный ответ в зависимости от счетчика
							dataBase_tests db_tests;
							_FROM_FILE_TO_CLASS(db_tests, name_test);
							list<Example> all_example_test = db_tests.get_all_example();
							list<Example>::iterator Iter_all_example_test;
							int y;
							for (y = 0, Iter_all_example_test = all_example_test.begin(); Iter_all_example_test != all_example_test.end(); Iter_all_example_test++, y++) {
								//Ищем нужный тест
								if (y == k) {
									Example true_example = *Iter_all_example_test;
									true_answer = true_example.get_true_answer();
									break;
								}
							}
						
							//Добавляем информацию в таблицу DataGridView
							view_database->RowCount = all_student_examples.size();

							view_database->Rows[k]->Cells[0]->Value = marshal_as<String^>(question);
							view_database->Rows[k]->Cells[1]->Value = marshal_as<String^>(true_answer);
							view_database->Rows[k]->Cells[2]->Value = marshal_as<String^>(answer);
							if (is_true) {
								view_database->Rows[k]->Cells[3]->Value = marshal_as<String^>("Верно");
							}
							else {
								view_database->Rows[k]->Cells[3]->Value = marshal_as<String^>("Неверно");
							}
						}
						break;
					}
				}
			}
		}
		else {
			system_label->Visible = true;
			system_label->Text = "Выбранный учащийся не выполнял данный тест";
			read_one_test.close();
			return;
		}

		read_one_test.close();
	}
	private: System::Void Test_validation_Load(System::Object^ sender, System::EventArgs^ e) {
		//Добавление в список всех тестов

		ifstream read_tests("Прочее\\База данных\\Названия тестов.txt", ios::in);
		vector<string> all_name_tests;
		while (!read_tests.eof()) {
			string line;
			getline(read_tests, line, '\n');
			all_name_tests.push_back(line);
		}

		for (unsigned int i = 0; i < all_name_tests.size() - 1; i++)
			_ALL_TESTS->Items->Add(marshal_as<String^>(all_name_tests[i]));
		read_tests.close();
	}
	private: System::Void Menu_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
};
}