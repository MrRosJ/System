#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include <msclr\marshal_cppstd.h>
#include "dataBase_tests.h"
#include "_operation.h"

using namespace msclr::interop;
using namespace std;


namespace ProjectCP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class test_SOLUTION : public System::Windows::Forms::Form
	{
	private: ref struct info
		{
			int count_example; //Количество заданий в тесте
			int current_example;
			String^ Fam; //Фамилия учащегося
			String^ Name; //Имя учащегося
			String^ Class; //Класс обучения учащегося
			String^ Name_test; //Имя теста
		};

	private: info current_info;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ name_question;

	private: System::Windows::Forms::ListBox^ _ALL_VARIABLE_;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ put_answer;

	private: System::Windows::Forms::Label^ STATUS;
	private: System::Windows::Forms::Label^ graph_question;
	private: System::Windows::Forms::PictureBox^ graphick;







	private: System::Windows::Forms::Button^ accept;



	public:
		test_SOLUTION(String^ Fam, String^ Name, String^ Class, String^ Name_test)
		{
			current_info.Fam = Fam;
			current_info.Name = Name;
			current_info.Class = Class;
			current_info.Name_test = Name_test;

			InitializeComponent();
		}
		test_SOLUTION(){}
	protected: ~test_SOLUTION()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ system_test;
	private: System::Windows::Forms::Label^ system_class;
	private: System::Windows::Forms::Label^ system_name;
	private: System::Windows::Forms::Label^ system_fam;
	private: System::ComponentModel::IContainer^ components;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(test_SOLUTION::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->system_test = (gcnew System::Windows::Forms::Label());
			this->system_class = (gcnew System::Windows::Forms::Label());
			this->system_name = (gcnew System::Windows::Forms::Label());
			this->system_fam = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->name_question = (gcnew System::Windows::Forms::Label());
			this->_ALL_VARIABLE_ = (gcnew System::Windows::Forms::ListBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->put_answer = (gcnew System::Windows::Forms::TextBox());
			this->accept = (gcnew System::Windows::Forms::Button());
			this->STATUS = (gcnew System::Windows::Forms::Label());
			this->graph_question = (gcnew System::Windows::Forms::Label());
			this->graphick = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphick))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(10, 11);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Фамилия:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(44, 30);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Имя:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(38, 69);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 18);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Тест:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(32, 50);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 18);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Класс:";
			// 
			// system_test
			// 
			this->system_test->AutoSize = true;
			this->system_test->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->system_test->Location = System::Drawing::Point(86, 69);
			this->system_test->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->system_test->Name = L"system_test";
			this->system_test->Size = System::Drawing::Size(96, 18);
			this->system_test->TabIndex = 7;
			this->system_test->Text = L"[system_test]";
			// 
			// system_class
			// 
			this->system_class->AutoSize = true;
			this->system_class->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->system_class->Location = System::Drawing::Point(86, 50);
			this->system_class->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->system_class->Name = L"system_class";
			this->system_class->Size = System::Drawing::Size(107, 18);
			this->system_class->TabIndex = 6;
			this->system_class->Text = L"[system_class]";
			// 
			// system_name
			// 
			this->system_name->AutoSize = true;
			this->system_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->system_name->Location = System::Drawing::Point(86, 30);
			this->system_name->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->system_name->Name = L"system_name";
			this->system_name->Size = System::Drawing::Size(109, 18);
			this->system_name->TabIndex = 5;
			this->system_name->Text = L"[system_name]";
			// 
			// system_fam
			// 
			this->system_fam->AutoSize = true;
			this->system_fam->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->system_fam->Location = System::Drawing::Point(86, 11);
			this->system_fam->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->system_fam->Name = L"system_fam";
			this->system_fam->Size = System::Drawing::Size(97, 18);
			this->system_fam->TabIndex = 4;
			this->system_fam->Text = L"[system_fam]";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(9, 119);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 18);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Вопрос:";
			// 
			// name_question
			// 
			this->name_question->AutoSize = true;
			this->name_question->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->name_question->Location = System::Drawing::Point(74, 120);
			this->name_question->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->name_question->Name = L"name_question";
			this->name_question->Size = System::Drawing::Size(113, 17);
			this->name_question->TabIndex = 9;
			this->name_question->Text = L"[name_question]";
			// 
			// _ALL_VARIABLE_
			// 
			this->_ALL_VARIABLE_->FormattingEnabled = true;
			this->_ALL_VARIABLE_->Location = System::Drawing::Point(13, 175);
			this->_ALL_VARIABLE_->Margin = System::Windows::Forms::Padding(2);
			this->_ALL_VARIABLE_->Name = L"_ALL_VARIABLE_";
			this->_ALL_VARIABLE_->Size = System::Drawing::Size(692, 147);
			this->_ALL_VARIABLE_->TabIndex = 10;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(9, 149);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(183, 24);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Варианты ответов:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(10, 326);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(106, 13);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Введите ваш ответ:";
			// 
			// put_answer
			// 
			this->put_answer->Location = System::Drawing::Point(134, 326);
			this->put_answer->Margin = System::Windows::Forms::Padding(2);
			this->put_answer->MaxLength = 50;
			this->put_answer->Name = L"put_answer";
			this->put_answer->Size = System::Drawing::Size(571, 20);
			this->put_answer->TabIndex = 13;
			// 
			// accept
			// 
			this->accept->Location = System::Drawing::Point(593, 393);
			this->accept->Margin = System::Windows::Forms::Padding(2);
			this->accept->Name = L"accept";
			this->accept->Size = System::Drawing::Size(112, 29);
			this->accept->TabIndex = 14;
			this->accept->Text = L"Принять";
			this->accept->UseVisualStyleBackColor = true;
			this->accept->Click += gcnew System::EventHandler(this, &test_SOLUTION::Button1_Click);
			// 
			// STATUS
			// 
			this->STATUS->AutoSize = true;
			this->STATUS->ForeColor = System::Drawing::Color::Black;
			this->STATUS->Location = System::Drawing::Point(17, 363);
			this->STATUS->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->STATUS->Name = L"STATUS";
			this->STATUS->Size = System::Drawing::Size(56, 13);
			this->STATUS->TabIndex = 15;
			this->STATUS->Text = L"[STATUS]";
			this->STATUS->Visible = false;
			// 
			// graph_question
			// 
			this->graph_question->AutoSize = true;
			this->graph_question->Location = System::Drawing::Point(467, 9);
			this->graph_question->Name = L"graph_question";
			this->graph_question->Size = System::Drawing::Size(116, 13);
			this->graph_question->TabIndex = 16;
			this->graph_question->Text = L"Графический вопрос:";
			this->graph_question->Visible = false;
			// 
			// graphick
			// 
			this->graphick->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->graphick->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->graphick->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"graphick.ErrorImage")));
			this->graphick->ImageLocation = L"";
			this->graphick->Location = System::Drawing::Point(470, 25);
			this->graphick->Name = L"graphick";
			this->graphick->Size = System::Drawing::Size(235, 145);
			this->graphick->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->graphick->TabIndex = 17;
			this->graphick->TabStop = false;
			this->graphick->Visible = false;
			// 
			// test_SOLUTION
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(716, 433);
			this->ControlBox = false;
			this->Controls->Add(this->graphick);
			this->Controls->Add(this->graph_question);
			this->Controls->Add(this->STATUS);
			this->Controls->Add(this->accept);
			this->Controls->Add(this->put_answer);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->_ALL_VARIABLE_);
			this->Controls->Add(this->name_question);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->system_test);
			this->Controls->Add(this->system_class);
			this->Controls->Add(this->system_name);
			this->Controls->Add(this->system_fam);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(732, 472);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(732, 472);
			this->Name = L"test_SOLUTION";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Решение теста";
			this->Load += gcnew System::EventHandler(this, &test_SOLUTION::Test_SOLUTION_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphick))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Test_SOLUTION_Load(System::Object^ sender, System::EventArgs^ e) {
		system_fam->Text = current_info.Fam;
		system_name->Text = current_info.Name;
		system_class->Text = current_info.Class;
		system_test->Text = current_info.Name_test;

		dataBase_tests db_one_test;
		_FROM_FILE_TO_CLASS(db_one_test, marshal_as<string>(current_info.Name_test->ToString()));

		list<Example> all_example = db_one_test.get_all_example();
		list<Example>::iterator Iter_all_example = all_example.begin();
		Example one_example = *Iter_all_example;
		current_info.count_example = db_one_test.get_count_example();
		name_question->Text = marshal_as <String^>(one_example.get_name_question());
		list<string> all_vars = one_example.get_all_vars();
		list<string>::iterator Iter_all_vars;

		//Графический вопрос
		if (one_example.get_graph_file() != "Отсутствует") {
			graph_question->Visible = true;
			graphick->Visible = true;
			String^ location = marshal_as<String^>("Прочее\\Графические файлы\\" + one_example.get_graph_file() + ".png");
			graphick->ImageLocation = location;
		}
		else {
			graph_question->Visible = false;
			graphick->Visible = false;
		}


		int i;
		for (i = 1, Iter_all_vars = all_vars.begin(); Iter_all_vars != all_vars.end(); Iter_all_vars++, i++)
			_ALL_VARIABLE_->Items->Add(("Вариант " + i + ": ") + marshal_as<String^>(*Iter_all_vars));
		current_info.current_example = 1;

		//Добавление информации в файл
		bool is_added = true;
		ifstream read_all_students("Прочее\\База данных\\База данных студентов.txt", ios::in);
		ofstream all_students("Прочее\\База данных\\База данных студентов.txt", ios::out | ios::app);
		string name_student = marshal_as<string>(system_fam->Text + " " + system_name->Text + " " + system_class->Text);
		//Проверка на то, есть ли в БД информация по одному и тому же учащемуся
		if (read_all_students.peek() == EOF)
			all_students << name_student << endl;
		else {
			while (!read_all_students.eof()) {
				string line;
				getline(read_all_students, line, '\n');
				if (line == name_student) {
					is_added = false;
					break;
				}
			}
			if (is_added)
				all_students << name_student << endl;
		}
		read_all_students.close();
		all_students.close();

		ofstream put_info(marshal_as<string>("Прочее\\База данных\\" + system_fam->Text + " " + system_name->Text + " " + system_class->Text + ".txt"), ios::out | ios::app);
		ifstream read_info(marshal_as<string>("Прочее\\База данных\\" + system_fam->Text + " " + system_name->Text + " " + system_class->Text + ".txt"), ios::in);
		if (read_info.peek() == EOF) {
			put_info << marshal_as<string>("Фамилия: " + system_fam->Text) << endl;
			put_info << marshal_as<string>("Имя: " + system_name->Text) << endl;
			put_info << marshal_as<string>("Класс: " + system_class->Text) << endl;
		}
		put_info << marshal_as<string>("Название_теста: " + system_test->Text) << endl;
		put_info << marshal_as<string>("Количество_вопросов: " + current_info.count_example) << endl;
		put_info.close();
		read_info.close();
	}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		STATUS->Visible = false;
		//Проверка на пустоту строки
		if (put_answer->Text == "") {
			STATUS->Visible = true;
			STATUS->Text = "Вы ничего не ввели в поле";
			return;
		}


		bool is_true_answer_put = false;
		//Проверка на то, чтобы ответ учащегося соответствовал одному из вариантов ответа
		for (int i = 0; i < _ALL_VARIABLE_->Items->Count; i++) {
			string line = marshal_as<string>(_ALL_VARIABLE_->Items[i]->ToString());
			stringstream ss_line(line);
			vector<string> array_line;
			string word_line, final_line = "";
			while (ss_line >> word_line)
				array_line.push_back(word_line);
			for (unsigned int i = 2; i < array_line.size(); i++) {
				final_line += array_line[i];
				if (i != array_line.size() - 1)
					final_line += " ";
			}

			if (marshal_as<string>(put_answer->Text) == final_line) {
				is_true_answer_put = true;
				break;
			}
		}

		if (!is_true_answer_put) {
			STATUS->Visible = true;
			STATUS->Text = "Такого варианта ответа нет";
			return;
		}

		if (current_info.current_example != current_info.count_example) {
			//Добавление информации в файл по вопросу и ответу
			ofstream put_info("Прочее\\База данных\\" + marshal_as<string>(current_info.Fam + " " + current_info.Name + " " + current_info.Class + ".txt"), ios::app);
			put_info << "Вопрос_" << current_info.current_example << ": " << marshal_as<string>(name_question->Text) << endl;
			put_info << "Ответ: " << marshal_as<string>(put_answer->Text) << endl;
			put_info.close();
			dataBase_tests db_one_test;
			_ALL_VARIABLE_->Items->Clear(); //Очистка списка вариантов ответа
			put_answer->Text = "";
			current_info.current_example++; //Номер задания увеличивается на единицу
			_FROM_FILE_TO_CLASS(db_one_test, marshal_as<string>(current_info.Name_test->ToString()));
			list<Example> all_example = db_one_test.get_all_example();
			list<Example>::iterator Iter_all_example;
			int i;
			for (i = 1, Iter_all_example = all_example.begin(); Iter_all_example != all_example.end(); Iter_all_example++, i++) {
				if (i == current_info.current_example) {
					Example current_example = *Iter_all_example;

					if (current_example.get_graph_file() != "Отсутствует") {
						graph_question->Visible = true;
						graphick->Visible = true;
						String^ location = marshal_as<String^>("Прочее\\Графические файлы\\" + current_example.get_graph_file() + ".png");
						graphick->ImageLocation = location;
					}
					else {
						graph_question->Visible = false;
						graphick->Visible = false;
					}

					name_question->Text = marshal_as<String^>(current_example.get_name_question());
					list<string> all_vars = current_example.get_all_vars();
					list<string>::iterator Iter_all_vars;
					int j;
					for (j = 1, Iter_all_vars = all_vars.begin(); Iter_all_vars != all_vars.end(); j++, Iter_all_vars++)
						_ALL_VARIABLE_->Items->Add(("Вариант " + j + ": ") + marshal_as<String^>(*Iter_all_vars));
					break;
				}
			}
		}
		else if (accept->Text != "Завершить") {
			put_answer->Enabled = false;
			//Добавление информации в файл по вопросу и ответу
			ofstream put_info("Прочее\\База данных\\" + marshal_as<string>(current_info.Fam + " " + current_info.Name + " " + current_info.Class + ".txt"), ios::app);
			put_info << "Вопрос_" << current_info.current_example << ": " << marshal_as<string>(name_question->Text) << endl;
			put_info << "Ответ: " << marshal_as<string>(put_answer->Text) << endl;
			STATUS->Visible = true;
			STATUS->Text = "ВЫ ПРОШЛИ ТЕСТ!";
			accept->Text = "Завершить";
			put_info.close();
		}
		else {
			Close();
		}
	}
};
}
