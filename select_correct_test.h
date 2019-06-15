#pragma once
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <msclr\marshal_cppstd.h>

#include "correct_example.h"

namespace ProjectCP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace std;
	/// <summary>
	/// Сводка для select_correct_test
	/// </summary>
	public ref class select_correct_test : public System::Windows::Forms::Form
	{
	public:	select_correct_test(void)
		{
			InitializeComponent();
		}
	protected: ~select_correct_test()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ _SELECT_NAME_TEST_;
	private: System::Windows::Forms::ComboBox^ _SELECT_EXAMPLE_;


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ _accept_example_;
	private: System::Windows::Forms::Label^ system_error;

	private: System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->_SELECT_NAME_TEST_ = (gcnew System::Windows::Forms::ComboBox());
			this->_SELECT_EXAMPLE_ = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->_accept_example_ = (gcnew System::Windows::Forms::Button());
			this->system_error = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// _SELECT_NAME_TEST_
			// 
			this->_SELECT_NAME_TEST_->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->_SELECT_NAME_TEST_->FormattingEnabled = true;
			this->_SELECT_NAME_TEST_->Location = System::Drawing::Point(160, 41);
			this->_SELECT_NAME_TEST_->Margin = System::Windows::Forms::Padding(2);
			this->_SELECT_NAME_TEST_->Name = L"_SELECT_NAME_TEST_";
			this->_SELECT_NAME_TEST_->Size = System::Drawing::Size(290, 21);
			this->_SELECT_NAME_TEST_->TabIndex = 0;
			this->_SELECT_NAME_TEST_->SelectedIndexChanged += gcnew System::EventHandler(this, &select_correct_test::_SELECT_NAME_TEST__SelectedIndexChanged);
			// 
			// _SELECT_EXAMPLE_
			// 
			this->_SELECT_EXAMPLE_->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->_SELECT_EXAMPLE_->Enabled = false;
			this->_SELECT_EXAMPLE_->FormattingEnabled = true;
			this->_SELECT_EXAMPLE_->Location = System::Drawing::Point(160, 76);
			this->_SELECT_EXAMPLE_->Margin = System::Windows::Forms::Padding(2);
			this->_SELECT_EXAMPLE_->Name = L"_SELECT_EXAMPLE_";
			this->_SELECT_EXAMPLE_->Size = System::Drawing::Size(290, 21);
			this->_SELECT_EXAMPLE_->TabIndex = 1;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(9, 154);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 29);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Выйти в меню";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &select_correct_test::Button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 41);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Выберите название теста:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 79);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Выберите задание:";
			// 
			// _accept_example_
			// 
			this->_accept_example_->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->_accept_example_->Location = System::Drawing::Point(362, 159);
			this->_accept_example_->Margin = System::Windows::Forms::Padding(2);
			this->_accept_example_->Name = L"_accept_example_";
			this->_accept_example_->Size = System::Drawing::Size(88, 29);
			this->_accept_example_->TabIndex = 3;
			this->_accept_example_->Text = L"Принять";
			this->_accept_example_->UseVisualStyleBackColor = true;
			this->_accept_example_->Click += gcnew System::EventHandler(this, &select_correct_test::_accept_example__Click);
			// 
			// system_error
			// 
			this->system_error->AutoSize = true;
			this->system_error->Location = System::Drawing::Point(144, 108);
			this->system_error->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->system_error->Name = L"system_error";
			this->system_error->Size = System::Drawing::Size(72, 13);
			this->system_error->TabIndex = 8;
			this->system_error->Text = L"[system_error]";
			this->system_error->Visible = false;
			// 
			// select_correct_test
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(461, 199);
			this->Controls->Add(this->system_error);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->_accept_example_);
			this->Controls->Add(this->_SELECT_EXAMPLE_);
			this->Controls->Add(this->_SELECT_NAME_TEST_);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"select_correct_test";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Выбор корректируемого задания";
			this->Load += gcnew System::EventHandler(this, &select_correct_test::Select_correct_test_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ selected;

	private: System::Void Select_correct_test_Load(System::Object^ sender, System::EventArgs^ e) {
		//Проверка на пустоту файла
		ifstream is_empty("Прочее\\База данных\\Названия тестов.txt", ios::in);

		//Заполнение вектора названиями тестов
		vector<string> all_name_test;
		while (!is_empty.eof()) {
			string line;
			getline(is_empty, line, '\n');
			all_name_test.push_back(line);
		}

		//Заполнение бокса
		for (unsigned int i = 0; i < all_name_test.size() - 1; i++)
			_SELECT_NAME_TEST_->Items->Add(marshal_as<String^>(all_name_test[i]));

		is_empty.close();
	}
	private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void _accept_example__Click(System::Object^ sender, System::EventArgs^ e)
	{
		system_error->Visible = false;
		//Проверка на пустоту бокса
		if (_SELECT_EXAMPLE_->Text == "" || _SELECT_NAME_TEST_->Text == "") {
			String^ error_message = "Вы не ввели:\n";
			if (_SELECT_NAME_TEST_->Text == "")
				error_message += "-Название теста\n";
			if (_SELECT_EXAMPLE_->Text == "")
				error_message += "-Задание теста";

			system_error->Visible = true;
			system_error->Text = error_message;
			return;
		}
		
		//Формирование номера задания для корректировки и передача названия теста
		string Current_switch = marshal_as<string>(_SELECT_EXAMPLE_->Text);
		string word_Current_switch;
		stringstream ss_Current_switch(Current_switch);
		vector<string> array_Current_switch;
		while (ss_Current_switch >> word_Current_switch)
			array_Current_switch.push_back(word_Current_switch);

		int number = atoi(array_Current_switch[1].c_str());
		this->Hide();
		correct_example^ Show_Dialoge = gcnew correct_example(number, selected);
		Show_Dialoge->ShowDialog();
		this->Show();
	}
	private: System::Void _SELECT_NAME_TEST__SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		_SELECT_EXAMPLE_->Items->Clear();
		selected = _SELECT_NAME_TEST_->Text;
		_SELECT_EXAMPLE_->Enabled = true;
		_accept_example_->Enabled = true;

		vector<string> selection_example;
		string selected_name_test = marshal_as<string>(_SELECT_NAME_TEST_->Text);
		string proof;
		ifstream read_info("Прочее\\База данных\\" + selected_name_test + ".txt", ios::in);
		getline(read_info, proof, '\n');

		//Берем строку с количеством заданий из файла
		string word_count_example;
		string text_count_example;
		int count_example;
		getline(read_info, text_count_example, '\n');
		stringstream ss_count_var(text_count_example);
		vector<string> array_count_var;
		while (ss_count_var >> word_count_example)
			array_count_var.push_back(word_count_example);
		count_example = atoi(array_count_var[1].c_str());
		read_info.close();

		for (int i = 0; i < count_example; i++) {
			_SELECT_EXAMPLE_->Items->Add("Вопрос " + (i + 1));
		}
	}
};
}
