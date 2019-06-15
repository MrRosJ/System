#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <msclr/marshal_cppstd.h>
#include <sstream>
#include <vector>

#include "dataBase_tests.h"


using namespace msclr::interop;
using namespace std;
using namespace System::Collections::Generic;

#include "Example.h"
#include "_operation.h"

namespace ProjectCP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Сводка для correct_example
	/// </summary>
	public ref class correct_example : public System::Windows::Forms::Form
	{
		String^ name_test;
		int number;
	private: System::Windows::Forms::Label^ _label_error;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ _graph_file;


	private: System::Windows::Forms::Label^ label2;
	public:	correct_example(int number, String^ name_test)
		{
			this->name_test = name_test;
			this->number = number;
			InitializeComponent();
		}
			correct_example(){}
	protected: ~correct_example()
		{
			if (components)
			{
				delete components;
			}
			remove("current_example.txt");
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ _label_name_test;
	private: System::Windows::Forms::Label^ _label_question;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ _label_count;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ _true_answer;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ListBox^ _all_vars;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ _CONTINUE;
	private: System::Windows::Forms::ComboBox^ _BOX_INFO;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ _REPLACE_;
	private: System::Windows::Forms::Button^ _ACCEPT_CORRECT;
	private: System::Windows::Forms::Label^ label8;
	private: System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->_label_name_test = (gcnew System::Windows::Forms::Label());
			this->_label_question = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->_label_count = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->_true_answer = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->_all_vars = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->_CONTINUE = (gcnew System::Windows::Forms::Button());
			this->_BOX_INFO = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->_REPLACE_ = (gcnew System::Windows::Forms::TextBox());
			this->_ACCEPT_CORRECT = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->_label_error = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->_graph_file = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(21, 28);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Тест";
			// 
			// _label_name_test
			// 
			this->_label_name_test->AutoSize = true;
			this->_label_name_test->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->_label_name_test->Location = System::Drawing::Point(80, 28);
			this->_label_name_test->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->_label_name_test->Name = L"_label_name_test";
			this->_label_name_test->Size = System::Drawing::Size(93, 20);
			this->_label_name_test->TabIndex = 1;
			this->_label_name_test->Text = L"[name_test]";
			// 
			// _label_question
			// 
			this->_label_question->AutoSize = true;
			this->_label_question->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->_label_question->Location = System::Drawing::Point(92, 62);
			this->_label_question->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->_label_question->Name = L"_label_question";
			this->_label_question->Size = System::Drawing::Size(78, 20);
			this->_label_question->TabIndex = 3;
			this->_label_question->Text = L"[question]";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(21, 62);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 20);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Вопрос";
			// 
			// _label_count
			// 
			this->_label_count->AutoSize = true;
			this->_label_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->_label_count->Location = System::Drawing::Point(272, 173);
			this->_label_count->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->_label_count->Name = L"_label_count";
			this->_label_count->Size = System::Drawing::Size(57, 20);
			this->_label_count->TabIndex = 7;
			this->_label_count->Text = L"[count]";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(21, 173);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(247, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Количество вариантов ответа:";
			// 
			// _true_answer
			// 
			this->_true_answer->AutoSize = true;
			this->_true_answer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->_true_answer->Location = System::Drawing::Point(183, 98);
			this->_true_answer->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->_true_answer->Name = L"_true_answer";
			this->_true_answer->Size = System::Drawing::Size(105, 20);
			this->_true_answer->TabIndex = 5;
			this->_true_answer->Text = L"[true_answer]";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(21, 98);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(158, 20);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Правильный ответ:";
			// 
			// _all_vars
			// 
			this->_all_vars->FormattingEnabled = true;
			this->_all_vars->Location = System::Drawing::Point(25, 221);
			this->_all_vars->Margin = System::Windows::Forms::Padding(2);
			this->_all_vars->Name = L"_all_vars";
			this->_all_vars->Size = System::Drawing::Size(494, 82);
			this->_all_vars->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(21, 199);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(156, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Варианты ответов:";
			// 
			// _CONTINUE
			// 
			this->_CONTINUE->Location = System::Drawing::Point(654, 11);
			this->_CONTINUE->Margin = System::Windows::Forms::Padding(2);
			this->_CONTINUE->Name = L"_CONTINUE";
			this->_CONTINUE->Size = System::Drawing::Size(104, 33);
			this->_CONTINUE->TabIndex = 11;
			this->_CONTINUE->Text = L"ПРОДОЛЖИТЬ";
			this->_CONTINUE->UseVisualStyleBackColor = true;
			this->_CONTINUE->Click += gcnew System::EventHandler(this, &correct_example::_CONTINUE_Click);
			// 
			// _BOX_INFO
			// 
			this->_BOX_INFO->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->_BOX_INFO->FormattingEnabled = true;
			this->_BOX_INFO->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Вопрос", L"Правильный ответ", L"Графический файл" });
			this->_BOX_INFO->Location = System::Drawing::Point(654, 135);
			this->_BOX_INFO->Margin = System::Windows::Forms::Padding(2);
			this->_BOX_INFO->Name = L"_BOX_INFO";
			this->_BOX_INFO->Size = System::Drawing::Size(105, 21);
			this->_BOX_INFO->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(519, 173);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(136, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Новое значение:";
			// 
			// _REPLACE_
			// 
			this->_REPLACE_->Location = System::Drawing::Point(654, 176);
			this->_REPLACE_->Margin = System::Windows::Forms::Padding(2);
			this->_REPLACE_->MaxLength = 65;
			this->_REPLACE_->Name = L"_REPLACE_";
			this->_REPLACE_->Size = System::Drawing::Size(105, 20);
			this->_REPLACE_->TabIndex = 14;
			// 
			// _ACCEPT_CORRECT
			// 
			this->_ACCEPT_CORRECT->Location = System::Drawing::Point(654, 221);
			this->_ACCEPT_CORRECT->Margin = System::Windows::Forms::Padding(2);
			this->_ACCEPT_CORRECT->Name = L"_ACCEPT_CORRECT";
			this->_ACCEPT_CORRECT->Size = System::Drawing::Size(104, 29);
			this->_ACCEPT_CORRECT->TabIndex = 15;
			this->_ACCEPT_CORRECT->Text = L"Принять";
			this->_ACCEPT_CORRECT->UseVisualStyleBackColor = true;
			this->_ACCEPT_CORRECT->Click += gcnew System::EventHandler(this, &correct_example::_ACCEPT_CORRECT_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(523, 134);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(130, 20);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Выберите поле:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(564, 99);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(204, 24);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Корректировка теста";
			// 
			// _label_error
			// 
			this->_label_error->AutoSize = true;
			this->_label_error->Location = System::Drawing::Point(11, 320);
			this->_label_error->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->_label_error->Name = L"_label_error";
			this->_label_error->Size = System::Drawing::Size(91, 13);
			this->_label_error->TabIndex = 18;
			this->_label_error->Text = L"[LABEL_ERROR]";
			this->_label_error->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(21, 136);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(163, 20);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Графический файл:";
			// 
			// _graph_file
			// 
			this->_graph_file->AutoSize = true;
			this->_graph_file->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->_graph_file->Location = System::Drawing::Point(188, 136);
			this->_graph_file->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->_graph_file->Name = L"_graph_file";
			this->_graph_file->Size = System::Drawing::Size(87, 20);
			this->_graph_file->TabIndex = 20;
			this->_graph_file->Text = L"[graph_file]";
			// 
			// correct_example
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(769, 342);
			this->Controls->Add(this->_graph_file);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->_label_error);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->_ACCEPT_CORRECT);
			this->Controls->Add(this->_REPLACE_);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->_BOX_INFO);
			this->Controls->Add(this->_CONTINUE);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->_all_vars);
			this->Controls->Add(this->_label_count);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->_true_answer);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->_label_question);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->_label_name_test);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(785, 381);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(785, 381);
			this->Name = L"correct_example";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Корректировка задания";
			this->Load += gcnew System::EventHandler(this, &correct_example::Correct_example_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


#pragma region Global-variable
	private: bool is_correct = false; //Проверка на то, корректировалась исходная БД хоть раз
#pragma endregion

	private: System::Void Correct_example_Load(System::Object^ sender, System::EventArgs^ e) {
		_label_name_test->Text = name_test;
		dataBase_tests db_test; //База данных всех тестов
		_FROM_FILE_TO_CLASS(db_test, marshal_as<string>(_label_name_test->Text));
		//Поиск необходимого задания по номеру
		list<Example> all_example = db_test.get_all_example();
		list<Example>::iterator Iter_all_example;
		int i;
		for (i = 1, Iter_all_example = all_example.begin(); Iter_all_example != all_example.end(); Iter_all_example++, i++) {
			if (i == number) {
				Example one_example = *Iter_all_example;
				string name_question = one_example.get_name_question();
				string true_answer = one_example.get_true_answer();
				string count_variable_answer = to_string(one_example.get_count_variable_answer());
				string file_name = one_example.get_graph_file();
				_label_question->Text = marshal_as<String^>(name_question);
				_true_answer->Text = marshal_as<String^>(true_answer);
				_label_count->Text = marshal_as<String^>(count_variable_answer);
				_graph_file->Text = marshal_as<String^>(file_name);

				list<string>::iterator Iter_all_vars;
				list<string> all_info = one_example.get_all_vars();
				int j;
				for (j = 1, Iter_all_vars = all_info.begin(); Iter_all_vars != all_info.end(); Iter_all_vars++, j++) {
					string one_var = *Iter_all_vars;
					_all_vars->Items->Add("Вариант " + j + " -> " + marshal_as<String^>(one_var));
					_BOX_INFO->Items->Add("Вариант " + j);
				}
				break;
			}
		}
	}
	private: System::Void _ACCEPT_CORRECT_Click(System::Object^ sender, System::EventArgs^ e) {
		_label_error->Visible = false;
		//Проверка на пустоту строки
		if (_BOX_INFO->Text == "" || _REPLACE_->Text == "") {
			_label_error->Text = "Выбрано пустое поле!";
			_label_error->Visible = true;
			return;
		}

		//Проверка на пробелы в строке
		string word = marshal_as<string>(_REPLACE_->Text);

		bool is_close = false;
		is_correct = true;
		//Корректировка 
		if (_BOX_INFO->SelectedIndex == 0) {
			_IS_VALIDATION_LINE(word, _label_error, is_close);
			if (is_close)
				return;
			_label_question->Text = _REPLACE_->Text;
		}
		else if (_BOX_INFO->SelectedIndex == 1) {
			_IS_VALIDATION_LINE(word, _label_error, is_close);
			if (is_close)
				return;
			_true_answer->Text = _REPLACE_->Text;
		}
		else if (_BOX_INFO->SelectedIndex == 2) {
			bool is_close = false;
			_IS_VALIDATION_GRAPH(word, _label_error, is_close);

			if (is_close)
				return;
			_graph_file->Text = _REPLACE_->Text;
		}
		else {
			string current_index = marshal_as<string>(_BOX_INFO->Text); //Текущее значение бокса для изменения вариантов ответа
			string word_current_index;
			vector<string> array_current_index;
			stringstream ss_current_index(current_index);
			while (ss_current_index >> word_current_index)
				array_current_index.push_back(word_current_index);
			int number = atoi(array_current_index[1].c_str()); //Получили номер варианта, который необходимо изменить
			
			for (int i = 0; i < _all_vars->Items->Count; i++) {
				string current_vars = marshal_as<string>(_all_vars->Items[i]->ToString());
				string word_current_vars;
				vector<string> array_current_vars;
				stringstream ss_current_vars(current_vars);
				while (ss_current_vars >> word_current_vars)
					array_current_vars.push_back(word_current_vars);
				int index = atoi(array_current_vars[1].c_str());

				

				if (index == number) {
					//Формируем новый вариант ответа
					String^ forming_new_var = ("Вариант " + index + " -> " + _REPLACE_->Text);
					_all_vars->Items->Insert(index - 1, forming_new_var);
					_all_vars->Items->RemoveAt(index);
					break;
				}
			}

		}

		_REPLACE_->Text = ""; //Очищение строки
	}
	private: System::Void _CONTINUE_Click(System::Object^ sender, System::EventArgs^ e) {
		//Проверка на то, что в вариантах ответа есть правильный ответ
#pragma region Validation
		_label_error->Visible = false;
		string true_answer_teacher = marshal_as<string>(_true_answer->Text);
		bool is_true = false;
		int count_ex = 0;
		for (int i = 0; i < _all_vars->Items->Count; i++) {
			string line, word_line;
			line = marshal_as <string>(_all_vars->Items[i]->ToString());
			vector<string> array_line;
			stringstream ss_line(line);
			string current_line = "";
			while (ss_line >> word_line)
				array_line.push_back(word_line);
			for (unsigned int j = 3; j < array_line.size(); j++) {
				current_line += array_line[j];
				if (j != array_line.size() - 1)
					current_line += " ";
			}

			if (true_answer_teacher == current_line) {
				is_true = true;
				count_ex++;
			}
		}

		if (!is_true) {
			_label_error->Visible = true;
			_label_error->Text = "В вариантах ответа нет правильного ответа";
			return;
		}
		else if (count_ex != 1) {
			_label_error->Visible = true;
			_label_error->Text = "Количество правильных ответов больше одного";
			return;
		}

#pragma endregion
		//Создаем новый класс на основе имеющихся данных о коррекции
		if (is_correct) {
			string name_question = marshal_as<string>(_label_question->Text);
			string true_answer = marshal_as<string>(_true_answer->Text);
			string graph_file = marshal_as<string>(_graph_file->Text);
			int count_variable_answer = atoi(marshal_as<string>(_label_count->Text).c_str());
			list<string> all_vars;

			for (int i = 0; i < count_variable_answer; i++) {
				string one_var = marshal_as<string>(_all_vars->Items[i]->ToString());
				string word_one_var;
				string var = "";
				vector<string> array_one_var;
				stringstream ss_current_index(one_var);
				while (ss_current_index >> word_one_var)
					array_one_var.push_back(word_one_var);
				for (unsigned int j = 3; j < array_one_var.size(); j++) {
					var += array_one_var[j];
					if (j != array_one_var.size() - 1)
						var += " ";
				}
				all_vars.push_back(var);
			}


			_FROM_CLASS_TO_FILE(Example(name_question, true_answer, graph_file, count_variable_answer, all_vars), marshal_as<string>(name_test->ToString()), number);
		}
		Close();
	}
};
}
