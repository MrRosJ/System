#pragma once
#include <fstream>
#include <msclr\marshal_cppstd.h>

#include "one_example.h"
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

	public ref class menu_create_test : public System::Windows::Forms::Form
	{
	public:	menu_create_test(void)
		{
			InitializeComponent();
		}
	protected: ~menu_create_test()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ _create_name;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ _put_test_name;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ error_label;
	private: System::Windows::Forms::TextBox^ _count_example;
	private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->_create_name = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->_put_test_name = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->_count_example = (gcnew System::Windows::Forms::TextBox());
			this->error_label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// _create_name
			// 
			this->_create_name->Location = System::Drawing::Point(373, 157);
			this->_create_name->Margin = System::Windows::Forms::Padding(2);
			this->_create_name->Name = L"_create_name";
			this->_create_name->Size = System::Drawing::Size(83, 27);
			this->_create_name->TabIndex = 2;
			this->_create_name->Text = L"Создать";
			this->_create_name->UseVisualStyleBackColor = true;
			this->_create_name->Click += gcnew System::EventHandler(this, &menu_create_test::_create_name_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(9, 157);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 27);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Выйти в меню";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &menu_create_test::Button2_Click);
			// 
			// _put_test_name
			// 
			this->_put_test_name->Location = System::Drawing::Point(187, 25);
			this->_put_test_name->Margin = System::Windows::Forms::Padding(2);
			this->_put_test_name->MaxLength = 65;
			this->_put_test_name->Name = L"_put_test_name";
			this->_put_test_name->Size = System::Drawing::Size(270, 20);
			this->_put_test_name->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(43, 22);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Название теста:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(9, 51);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(173, 40);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Введите количество \r\nзаданий в тесте:";
			// 
			// _count_example
			// 
			this->_count_example->Location = System::Drawing::Point(187, 64);
			this->_count_example->Margin = System::Windows::Forms::Padding(2);
			this->_count_example->MaxLength = 50;
			this->_count_example->Name = L"_count_example";
			this->_count_example->Size = System::Drawing::Size(270, 20);
			this->_count_example->TabIndex = 1;
			// 
			// error_label
			// 
			this->error_label->AutoSize = true;
			this->error_label->Location = System::Drawing::Point(103, 115);
			this->error_label->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->error_label->Name = L"error_label";
			this->error_label->Size = System::Drawing::Size(62, 13);
			this->error_label->TabIndex = 7;
			this->error_label->Text = L"[error_label]";
			this->error_label->Visible = false;
			// 
			// menu_create_test
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(466, 200);
			this->Controls->Add(this->error_label);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->_count_example);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->_put_test_name);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->_create_name);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(482, 239);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(482, 239);
			this->Name = L"menu_create_test";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Создание теста";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void _create_name_Click(System::Object^ sender, System::EventArgs^ e) {
		error_label->Visible = false;
		//Проверка на пустые поля
		if (_put_test_name->Text == "" || _count_example->Text == "") {
			error_label->Visible = true;
			String^ error_Message = "Вы не ввели:\n";
			if (_put_test_name->Text == "")
				error_Message += "-Название теста\n";
			if (_count_example->Text == "")
				error_Message += "-Количество заданий";

			error_label->Text = error_Message;
			return;
		}


		string word = marshal_as<string>(_put_test_name->Text);
		bool is_close = false;
		_IS_VALIDATION_LINE(word, error_label, is_close);

		if (is_close)
			return;


		int count_example;
		try {
			count_example = Convert::ToInt32(_count_example->Text);
		}
		catch (FormatException^ error) {
			error_label->Visible = true;
			error_label->Text = "Ошибка: " + error->Message;
			return;
		}
		
		if (count_example < 0) {
			error_label->Visible = true;
			error_label->Text = "Ошибка: Количество тестов не может быть меньше нуля";
			return;
		}
		else if (count_example == 0) {
			error_label->Visible = true;
			error_label->Text = "Ошибка: Количество тестов не может быть равно нулю";
			return;
		}

		//Проверка на то, чтобы название теста не повторялось
		ifstream read_name_tests("Прочее\\База данных\\Названия тестов.txt", ios::in);
		if (read_name_tests.peek() != EOF) {
			string validate_name_test = marshal_as<string>(_put_test_name->Text);
			//Заполняем вектор значениями из файла
			vector<string> array_name_test;
			while (!read_name_tests.eof()) {
				string line;
				getline(read_name_tests, line, '\n');
				array_name_test.push_back(line);
			}
			//Прогоняем по всему вектору и сравниваем с исходным значением
			for (unsigned int i = 0; i < array_name_test.size() - 1; i++) {
				if (validate_name_test == array_name_test[i]) {
					error_label->Visible = true;
					error_label->Text = "Тест с таким именем уже создан";
					read_name_tests.close();
					return;
				}
			}
		}
		read_name_tests.close();

		//Добавляем информацию по названию тесту
		ofstream put_name("Прочее\\База данных\\Названия тестов.txt", ios::app);
		string name = marshal_as<string>(_put_test_name->Text);
		put_name << name << endl;
		put_name.close();

		//Создаем файл с названием теста
		ofstream add_test("Прочее\\База данных\\" + name + ".txt");
		add_test << "Название_теста: " + name << endl;
		add_test << "Количество_заданий_в_тесте: " << count_example << endl;
		add_test.close();
		this->Hide();
		for (int i = 1; i <= count_example; i++) {
			one_example^ Show_Dialoge = gcnew one_example(i, name);
			
			Show_Dialoge->ShowDialog();
			Show_Dialoge->Close();
		}
		this->Show();
		ofstream end_of_file("Прочее\\База данных\\" + name + ".txt", ios::app);
		end_of_file << "%END%";
		end_of_file.close();

		//Запуск формы корректировки задания
		
		Close();
	}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
};
}
