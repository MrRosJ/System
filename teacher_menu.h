#pragma once
#include <fstream>
#include "menu_create_test.h"
#include "select_correct_test.h"
namespace ProjectCP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Сводка для teacher_menu
	/// </summary>
	public ref class teacher_menu : public System::Windows::Forms::Form
	{
	public:
		teacher_menu(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~teacher_menu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ _create_test;

	private: System::Windows::Forms::Button^ _correct_test;
	private: System::Windows::Forms::Button^ _exit;
	private: System::Windows::Forms::Label^ warning_label;

	protected:




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
			this->_create_test = (gcnew System::Windows::Forms::Button());
			this->_correct_test = (gcnew System::Windows::Forms::Button());
			this->_exit = (gcnew System::Windows::Forms::Button());
			this->warning_label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// _create_test
			// 
			this->_create_test->Location = System::Drawing::Point(76, 60);
			this->_create_test->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->_create_test->Name = L"_create_test";
			this->_create_test->Size = System::Drawing::Size(132, 32);
			this->_create_test->TabIndex = 0;
			this->_create_test->Text = L"Создать тест";
			this->_create_test->UseVisualStyleBackColor = true;
			this->_create_test->Click += gcnew System::EventHandler(this, &teacher_menu::_create_test_Click);
			// 
			// _correct_test
			// 
			this->_correct_test->Location = System::Drawing::Point(76, 118);
			this->_correct_test->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->_correct_test->Name = L"_correct_test";
			this->_correct_test->Size = System::Drawing::Size(132, 41);
			this->_correct_test->TabIndex = 2;
			this->_correct_test->Text = L"Корректировать тест";
			this->_correct_test->UseVisualStyleBackColor = true;
			this->_correct_test->Click += gcnew System::EventHandler(this, &teacher_menu::_correct_test_Click);
			// 
			// _exit
			// 
			this->_exit->Location = System::Drawing::Point(76, 180);
			this->_exit->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->_exit->Name = L"_exit";
			this->_exit->Size = System::Drawing::Size(132, 32);
			this->_exit->TabIndex = 3;
			this->_exit->Text = L"Выйти в меню";
			this->_exit->UseVisualStyleBackColor = true;
			this->_exit->Click += gcnew System::EventHandler(this, &teacher_menu::_exit_Click);
			// 
			// warning_label
			// 
			this->warning_label->AutoSize = true;
			this->warning_label->Location = System::Drawing::Point(10, 255);
			this->warning_label->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->warning_label->Name = L"warning_label";
			this->warning_label->Size = System::Drawing::Size(78, 13);
			this->warning_label->TabIndex = 4;
			this->warning_label->Text = L"[warning_label]";
			this->warning_label->Visible = false;
			// 
			// teacher_menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(296, 285);
			this->Controls->Add(this->warning_label);
			this->Controls->Add(this->_exit);
			this->Controls->Add(this->_correct_test);
			this->Controls->Add(this->_create_test);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(312, 324);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(312, 324);
			this->Name = L"teacher_menu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Меню для учителя";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void _create_test_Click(System::Object^ sender, System::EventArgs^ e) {
		warning_label->Visible = false;
		this->Hide();
		menu_create_test^ Show_Dialoge = gcnew menu_create_test();
		Show_Dialoge->ShowDialog();
		this->Show();
	}
	private: System::Void _correct_test_Click(System::Object^ sender, System::EventArgs^ e) {
		ifstream is_empty_file("Прочее\\База данных\\Названия тестов.txt", ios::in);
		if (is_empty_file.peek() == EOF) {
			warning_label->Text = "Нет доступных тестов для корректировки";
			warning_label->Visible = true;
			return;
		}
		else
			warning_label->Visible = false;
		this->Hide();
		select_correct_test^ Show_Dialoge = gcnew select_correct_test();
		Show_Dialoge->ShowDialog();
		this->Show();
	}
private: System::Void _exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
};
}
