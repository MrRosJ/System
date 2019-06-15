#pragma once
#include <iostream>
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include "_operation.h"
namespace ProjectCP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace std;
	using namespace System::Collections::Generic;

	public ref class one_example : public System::Windows::Forms::Form
	{
	private:
		int number; //Номер задания
	private: System::Windows::Forms::Label^ program_name_test;
	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ accept_var;

	private: System::Windows::Forms::Label^ system_var;
	private: System::Windows::Forms::TextBox^ new_var;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::CheckBox^ is_graph;


	private: System::Windows::Forms::TextBox^ name_file;





			 String^ name_test;
	public:
		one_example(int i, string name_test)
		{
			number = i;
			this->name_test = marshal_as<String^>(name_test);
			InitializeComponent();
			
		}
		one_example(){}
	protected:
		~one_example()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ _number_label;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ _label_question;
	private: System::Windows::Forms::TextBox^ _label_true_answer;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ _accept_count;
	private: System::Windows::Forms::TextBox^ _label_count;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Button^ _accept;
	private: System::Windows::Forms::Label^ _truys;


	private: System::Windows::Forms::Label^ system_error;


	private: System::ComponentModel::Container ^components;
	void InitializeComponent()
				 {
		this->_number_label = (gcnew System::Windows::Forms::Label());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->_label_question = (gcnew System::Windows::Forms::TextBox());
		this->_label_true_answer = (gcnew System::Windows::Forms::TextBox());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->label4 = (gcnew System::Windows::Forms::Label());
		this->_accept_count = (gcnew System::Windows::Forms::Button());
		this->_label_count = (gcnew System::Windows::Forms::TextBox());
		this->label5 = (gcnew System::Windows::Forms::Label());
		this->label7 = (gcnew System::Windows::Forms::Label());
		this->_accept = (gcnew System::Windows::Forms::Button());
		this->_truys = (gcnew System::Windows::Forms::Label());
		this->system_error = (gcnew System::Windows::Forms::Label());
		this->program_name_test = (gcnew System::Windows::Forms::Label());
		this->label8 = (gcnew System::Windows::Forms::Label());
		this->label9 = (gcnew System::Windows::Forms::Label());
		this->accept_var = (gcnew System::Windows::Forms::Button());
		this->system_var = (gcnew System::Windows::Forms::Label());
		this->new_var = (gcnew System::Windows::Forms::TextBox());
		this->label6 = (gcnew System::Windows::Forms::Label());
		this->label10 = (gcnew System::Windows::Forms::Label());
		this->is_graph = (gcnew System::Windows::Forms::CheckBox());
		this->name_file = (gcnew System::Windows::Forms::TextBox());
		this->SuspendLayout();
		// 
		// _number_label
		// 
		this->_number_label->AutoSize = true;
		this->_number_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->_number_label->Location = System::Drawing::Point(12, 38);
		this->_number_label->Name = L"_number_label";
		this->_number_label->Size = System::Drawing::Size(148, 24);
		this->_number_label->TabIndex = 0;
		this->_number_label->Text = L"[program_status]";
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->label1->Location = System::Drawing::Point(23, 81);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(64, 18);
		this->label1->TabIndex = 8;
		this->label1->Text = L"Вопрос:";
		// 
		// label2
		// 
		this->label2->AutoSize = true;
		this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->label2->Location = System::Drawing::Point(13, 168);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(0, 18);
		this->label2->TabIndex = 2;
		// 
		// _label_question
		// 
		this->_label_question->Location = System::Drawing::Point(161, 83);
		this->_label_question->MaxLength = 65;
		this->_label_question->Name = L"_label_question";
		this->_label_question->Size = System::Drawing::Size(412, 20);
		this->_label_question->TabIndex = 0;
		// 
		// _label_true_answer
		// 
		this->_label_true_answer->Location = System::Drawing::Point(161, 139);
		this->_label_true_answer->MaxLength = 65;
		this->_label_true_answer->Name = L"_label_true_answer";
		this->_label_true_answer->Size = System::Drawing::Size(412, 20);
		this->_label_true_answer->TabIndex = 1;
		// 
		// label3
		// 
		this->label3->AutoSize = true;
		this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->label3->Location = System::Drawing::Point(13, 220);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(0, 18);
		this->label3->TabIndex = 6;
		// 
		// label4
		// 
		this->label4->AutoSize = true;
		this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->label4->Location = System::Drawing::Point(23, 119);
		this->label4->Name = L"label4";
		this->label4->Size = System::Drawing::Size(95, 36);
		this->label4->TabIndex = 9;
		this->label4->Text = L"Правильный\r\nответ:";
		// 
		// _accept_count
		// 
		this->_accept_count->Location = System::Drawing::Point(486, 225);
		this->_accept_count->Name = L"_accept_count";
		this->_accept_count->Size = System::Drawing::Size(87, 31);
		this->_accept_count->TabIndex = 3;
		this->_accept_count->Text = L"Принять";
		this->_accept_count->UseVisualStyleBackColor = true;
		this->_accept_count->Click += gcnew System::EventHandler(this, &one_example::Button3_Click);
		// 
		// _label_count
		// 
		this->_label_count->Location = System::Drawing::Point(265, 186);
		this->_label_count->MaxLength = 2;
		this->_label_count->Name = L"_label_count";
		this->_label_count->Size = System::Drawing::Size(215, 20);
		this->_label_count->TabIndex = 2;
		// 
		// label5
		// 
		this->label5->AutoSize = true;
		this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->label5->Location = System::Drawing::Point(12, 264);
		this->label5->Name = L"label5";
		this->label5->Size = System::Drawing::Size(0, 18);
		this->label5->TabIndex = 11;
		// 
		// label7
		// 
		this->label7->AutoSize = true;
		this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->label7->Location = System::Drawing::Point(12, 212);
		this->label7->Name = L"label7";
		this->label7->Size = System::Drawing::Size(0, 18);
		this->label7->TabIndex = 9;
		// 
		// _accept
		// 
		this->_accept->Enabled = false;
		this->_accept->Location = System::Drawing::Point(484, 409);
		this->_accept->Name = L"_accept";
		this->_accept->Size = System::Drawing::Size(89, 31);
		this->_accept->TabIndex = 6;
		this->_accept->Text = L"Завершить";
		this->_accept->UseVisualStyleBackColor = true;
		this->_accept->Click += gcnew System::EventHandler(this, &one_example::_accept_Click);
		// 
		// _truys
		// 
		this->_truys->AutoSize = true;
		this->_truys->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->_truys->Location = System::Drawing::Point(444, 29);
		this->_truys->Name = L"_truys";
		this->_truys->Size = System::Drawing::Size(129, 17);
		this->_truys->TabIndex = 16;
		this->_truys->Text = L"ВВОД ЗАКОНЧЕН";
		this->_truys->Visible = false;
		// 
		// system_error
		// 
		this->system_error->AutoSize = true;
		this->system_error->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->system_error->Location = System::Drawing::Point(12, 364);
		this->system_error->Name = L"system_error";
		this->system_error->Size = System::Drawing::Size(99, 17);
		this->system_error->TabIndex = 21;
		this->system_error->Text = L"[system_error]";
		this->system_error->Visible = false;
		// 
		// program_name_test
		// 
		this->program_name_test->AutoSize = true;
		this->program_name_test->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		this->program_name_test->Location = System::Drawing::Point(90, 9);
		this->program_name_test->Name = L"program_name_test";
		this->program_name_test->Size = System::Drawing::Size(187, 24);
		this->program_name_test->TabIndex = 22;
		this->program_name_test->Text = L"[program_name_test]";
		// 
		// label8
		// 
		this->label8->AutoSize = true;
		this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->label8->Location = System::Drawing::Point(11, 9);
		this->label8->Name = L"label8";
		this->label8->Size = System::Drawing::Size(58, 24);
		this->label8->TabIndex = 23;
		this->label8->Text = L"Тест:";
		// 
		// label9
		// 
		this->label9->AutoSize = true;
		this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->label9->Location = System::Drawing::Point(23, 272);
		this->label9->Name = L"label9";
		this->label9->Size = System::Drawing::Size(263, 18);
		this->label9->TabIndex = 25;
		this->label9->Text = L"Выберите и введите вариант ответа:";
		this->label9->Visible = false;
		// 
		// accept_var
		// 
		this->accept_var->Location = System::Drawing::Point(486, 310);
		this->accept_var->Name = L"accept_var";
		this->accept_var->Size = System::Drawing::Size(87, 31);
		this->accept_var->TabIndex = 5;
		this->accept_var->Text = L"Принять";
		this->accept_var->UseVisualStyleBackColor = true;
		this->accept_var->Visible = false;
		this->accept_var->Click += gcnew System::EventHandler(this, &one_example::Accept_var_Click_1);
		// 
		// system_var
		// 
		this->system_var->AutoSize = true;
		this->system_var->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->system_var->Location = System::Drawing::Point(23, 314);
		this->system_var->Name = L"system_var";
		this->system_var->Size = System::Drawing::Size(92, 18);
		this->system_var->TabIndex = 27;
		this->system_var->Text = L"[system_var]";
		this->system_var->Visible = false;
		// 
		// new_var
		// 
		this->new_var->Location = System::Drawing::Point(161, 316);
		this->new_var->MaxLength = 65;
		this->new_var->Name = L"new_var";
		this->new_var->Size = System::Drawing::Size(319, 20);
		this->new_var->TabIndex = 4;
		this->new_var->Visible = false;
		// 
		// label6
		// 
		this->label6->AutoSize = true;
		this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->label6->Location = System::Drawing::Point(36, 186);
		this->label6->Name = L"label6";
		this->label6->Size = System::Drawing::Size(223, 18);
		this->label6->TabIndex = 10;
		this->label6->Text = L"Количество вариантов ответа:";
		// 
		// label10
		// 
		this->label10->AutoSize = true;
		this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->label10->Location = System::Drawing::Point(99, 231);
		this->label10->Name = L"label10";
		this->label10->Size = System::Drawing::Size(160, 18);
		this->label10->TabIndex = 28;
		this->label10->Text = L"Графический вопрос:";
		// 
		// is_graph
		// 
		this->is_graph->AutoSize = true;
		this->is_graph->Location = System::Drawing::Point(265, 234);
		this->is_graph->Name = L"is_graph";
		this->is_graph->Size = System::Drawing::Size(15, 14);
		this->is_graph->TabIndex = 30;
		this->is_graph->UseVisualStyleBackColor = true;
		this->is_graph->CheckedChanged += gcnew System::EventHandler(this, &one_example::CheckBox1_CheckedChanged);
		// 
		// name_file
		// 
		this->name_file->Enabled = false;
		this->name_file->Location = System::Drawing::Point(286, 231);
		this->name_file->MaxLength = 30;
		this->name_file->Name = L"name_file";
		this->name_file->Size = System::Drawing::Size(193, 20);
		this->name_file->TabIndex = 32;
		// 
		// one_example
		// 
		this->ClientSize = System::Drawing::Size(587, 456);
		this->ControlBox = false;
		this->Controls->Add(this->name_file);
		this->Controls->Add(this->is_graph);
		this->Controls->Add(this->label10);
		this->Controls->Add(this->new_var);
		this->Controls->Add(this->system_var);
		this->Controls->Add(this->accept_var);
		this->Controls->Add(this->label9);
		this->Controls->Add(this->label8);
		this->Controls->Add(this->program_name_test);
		this->Controls->Add(this->system_error);
		this->Controls->Add(this->_truys);
		this->Controls->Add(this->_accept);
		this->Controls->Add(this->_accept_count);
		this->Controls->Add(this->_label_count);
		this->Controls->Add(this->label5);
		this->Controls->Add(this->label6);
		this->Controls->Add(this->label7);
		this->Controls->Add(this->_label_true_answer);
		this->Controls->Add(this->label3);
		this->Controls->Add(this->label4);
		this->Controls->Add(this->_label_question);
		this->Controls->Add(this->label2);
		this->Controls->Add(this->label1);
		this->Controls->Add(this->_number_label);
		this->MaximizeBox = false;
		this->MaximumSize = System::Drawing::Size(603, 495);
		this->MinimizeBox = false;
		this->MinimumSize = System::Drawing::Size(603, 495);
		this->Name = L"one_example";
		this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		this->Text = L"Добавление задания";
		this->Load += gcnew System::EventHandler(this, &one_example::One_example_Load);
		this->ResumeLayout(false);
		this->PerformLayout();

	}

#pragma region Global-variable
		private: String^ true_answer; //Правильный ответ 
		private: int count_example; //Количество вариантов ответа
		private: List<String^> all_vars;
		private: int counter_all_vars = 1; //Счетчик для вариантов ответа
#pragma endregion

	private: System::Void One_example_Load(System::Object^ sender, System::EventArgs^ e) {
		_number_label->Text = "Номер вопроса #" + number;
		program_name_test->Text = name_test;
	}
	private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
		system_error->Visible = false;
		if (_label_question->Text == "" || _label_true_answer->Text == "" || _label_count->Text == "" || (name_file->Text == "" && is_graph->Checked)) {
			system_error->Visible = true;
			String^ error_Message = "Вы не ввели:\n";
			if (_label_question->Text == "")
				error_Message += "-Название теста\n";
			if (_label_true_answer->Text == "")
				error_Message += "-Правильный ответ\n";
			if (_label_count->Text == "")
				error_Message += "-Количество вариантов ответа";


			system_error->Text = error_Message;
		}
		else {
			//Проверка строк на правильные вводы
			string word_question = marshal_as<string>(_label_question->Text);
			string word_true_answer = marshal_as<string>(_label_true_answer->Text);
			string name_f = marshal_as<string>(name_file->Text);
			bool is_close = false;

			_IS_VALIDATION_LINE(word_question, system_error, is_close); //Для вопроса
			_IS_VALIDATION_LINE(word_true_answer, system_error, is_close); //Для правильного ответа
			_IS_VALIDATION_GRAPH(name_f, system_error, is_close); //Для графического файла
			
			//Проверка на то, что файл существует в исходной папке
			if (is_graph->Checked) {
				ifstream validation("Прочее\\Графические файлы\\" + name_f + ".png", ios::in);
				if (!validation.is_open()) {
					system_error->Text = "Не найден исходный графический файл";
					system_error->Visible = true;
					validation.close();
					return;
				}
				validation.close();
			}

			if (is_close)
				return;


			int count_example;
			try {
				count_example = Convert::ToInt32(_label_count->Text);
			}
			catch (FormatException^ error) {
				system_error->Visible = true;
				system_error->Text = "Ошибка: " + error->Message;
				return;
			}

			if (count_example < 0) {
				system_error->Visible = true;
				system_error->Text = "Количество вариантов ответа не может быть меньше нуля";
				return;
			}
			if (count_example == 1) {
				system_error->Visible = true;
				system_error->Text = "Количество вариантов ответа должно быть больше одного";
				return;
			}


			true_answer = _label_true_answer->Text;
			system_error->Visible = false;
			system_error->Name = "";
			_accept_count->Enabled = false;

			string put_in_graph;
			if (is_graph->Checked)
				put_in_graph = name_f + ".png";
			else
				put_in_graph = "Отсутствует";

			_label_question->Enabled = false;
			_label_true_answer->Enabled = false;
			_label_count->Enabled = false;
			is_graph->Enabled = false;
			name_file->Enabled = false;
			this->count_example = count_example;
			///Добавление инофрмации в файл
			ofstream put_info("Прочее\\База данных\\" + marshal_as<string>(program_name_test->Text) + ".txt", ios::app);
			put_info << "Номер_задания: " << number << endl;
			put_info << "Вопрос: " << marshal_as<string>(_label_question->Text) << endl;
			put_info << "Правильный_ответ: " << marshal_as<string>(_label_true_answer->Text) << endl;
			put_info << "Графический_файл: " << put_in_graph <<endl;
			put_info << "Количество_вариантов_ответа: " << count_example << endl;
			put_info.close();

			label9->Visible = true;
			system_var->Visible = true;
			new_var->Visible = true;
			accept_var->Visible = true;
			system_var->Text = "Вариант 1";
		}
	}
	private: System::Void Accept_var_Click_1(System::Object^ sender, System::EventArgs^ e) {
		system_error->Visible = false;
		//Проверка на пустоту строки
		if (new_var->Text == "") {
			system_error->Visible = true;
			system_error->Text = "Вы не ввели вариант ответа";
			return;
		}

		bool is_close = false;
		string word_var = marshal_as<string>(new_var->Text);
		_IS_VALIDATION_LINE(word_var, system_error, is_close);
		if (is_close)
			return;


		//Пока счетчик не совпадет с количеством вариантов ответа
		if (counter_all_vars < count_example) {
			system_var->Text = "Вариант " + (counter_all_vars + 1);
			all_vars.Add(new_var->Text);
			counter_all_vars++;
			new_var->Text = "";
		}
		else {
			all_vars.Add(new_var->Text);
			counter_all_vars++;

			bool is_true = false; //Если true, то существует только один правильный ответ в информации
			int count_one_var = 0;
			//Проверка только на одно вхождение правильного ответа в тест
			for (int i = 0; i < all_vars.Count; i++) {
				String^ one_var = all_vars[i];
				if (one_var == true_answer) {
					is_true = true;
					count_one_var++;
				}
			}

			if (is_true && count_one_var == 1) {
				_accept->Enabled = true;
				new_var->Enabled = false;
				accept_var->Enabled = false;
				_truys->Visible = true;
				///Запись в файл вариантов ответа
				ofstream put_info(marshal_as<string>("Прочее\\База данных\\" + name_test + ".txt"), ios::app);
				for (int i = 0; i < all_vars.Count; i++)
					put_info << marshal_as<string>("Вариант_" + (i + 1)) + ": " << marshal_as<string>(all_vars[i]) << endl;
				put_info.close();
				return;
			}
			else if (!is_true)
				system_error->Text = "В вариантах ответа нет правильного ответа\nПовторите ввод...";
			else if (count_one_var != 1)
				system_error->Text = "В вариантах ответа больше одного правильного ответа\nПовторите ввод...";

			system_error->Visible = true;
			counter_all_vars = 1;
			system_var->Text = "Вариант 1";
			new_var->Text = "";
			all_vars.Clear();
		}
	}
	private: System::Void CheckBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (is_graph->Checked) {
			name_file->Enabled = true;
			system_error->Visible = true;
			system_error->Text = "Проверьте, чтобы присутствовал исходный .png файл по пути:\nПрочее->Графические файлы";
		}
		else {
			name_file->Enabled = false;
			system_error->Visible = false;
		}
	}
	private: System::Void _accept_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
};
}
