#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <Windows.h>
#include "_operation.h"
#include "Example.h"
#include "dataBase_tests.h"
#include "current_student_example.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

//Преобразование из файла в объект класса через ссылку
int _FROM_FILE_TO_CLASS(dataBase_tests &example_class, string name_test) {
	ifstream read_info("Прочее\\База данных\\" + name_test + ".txt", ios::in);
	string proof;
	getline(read_info, proof, '\n'); //Пропуск строки

	//Количество заданий в тесте
	string word_count_example;
	string text_count_example;
	int count_example;
	getline(read_info, text_count_example, '\n');
	stringstream ss_count_example(text_count_example);
	vector<string> array_count_var;
	while (ss_count_example >> word_count_example)
		array_count_var.push_back(word_count_example);
	count_example = atoi(array_count_var[1].c_str());

	//Все задания в тесте
	for (int j = 0; j < count_example; j++) {
		getline(read_info, proof, '\n'); //Пропуск строки
		Example one_example;
		
		//Вопрос
		string word_question;
		string text_question;
		string question = "";
		getline(read_info, text_question, '\n');
		stringstream ss_question(text_question);
		vector<string> array_question;
		while (ss_question >> word_question)
			array_question.push_back(word_question);
		for (unsigned int i = 1; i < array_question.size(); i++) {
			question += array_question[i];
			if (i != array_question.size() - 1)
				question += " ";
		}

		//Правильный ответ
		string word_true_answer;
		string text_true_answer;
		string true_answer = "";
		getline(read_info, text_true_answer, '\n');
		stringstream ss_true_answer(text_true_answer);
		vector<string> array_true_answer;
		while (ss_true_answer >> word_true_answer)
			array_true_answer.push_back(word_true_answer);
		for (unsigned int i = 1; i < array_true_answer.size(); i++) {
			true_answer += array_true_answer[i];
			if (i != array_true_answer.size() - 1)
				true_answer += " ";
		}

		//Графический файл
		string word_graph_file;
		string text_graph_file;
		string graph_file_name = "";
		getline(read_info, text_graph_file, '\n');
		stringstream ss_graph_file(text_graph_file);
		vector<string> array_graph_file;
		while (ss_graph_file >> word_graph_file)
			array_graph_file.push_back(word_graph_file);
		string current_word = array_graph_file[1];
		for (int i = 0; i < array_graph_file[1].size(); i++) {
			if (current_word[i] != '.') {
				graph_file_name += current_word[i];
			}
			else
				break;
		}



		//Количество вариантов ответа
		string word_count_var;
		string text_count_var;
		unsigned int count_var;
		getline(read_info, text_count_var, '\n');
		stringstream ss_count_var(text_count_var);
		vector<string> array_count_var;
		while (ss_count_var >> word_count_var)
			array_count_var.push_back(word_count_var);
		count_var = atoi(array_count_var[1].c_str());

		//Варианты ответов
		for (unsigned int i = 1; i <= count_var; i++) {
			string word_var;
			string text_var;
			string var = "";
			getline(read_info, text_var, '\n');
			stringstream ss_var(text_var);
			vector<string> array_var;
			while (ss_var >> word_var)
				array_var.push_back(word_var);
			for (unsigned int i = 1; i < array_var.size(); i++) {
				var += array_var[i];
				if (i != array_var.size() - 1)
					var += " ";
			}
			one_example.pushback(var);
		}

		one_example.set_name_question(question);
		one_example.set_true_answer(true_answer);
		one_example.set_count_variable_answer(count_var);
		one_example.set_graph_file(graph_file_name);
		example_class.pushback(one_example);
	}
	///
	example_class.set_name_test(name_test);


	example_class.set_count_example();
	read_info.close();
	return NULL;
}

//Преобразование из файла в объект класса через поток
int _FROM_FILE_TO_CLASS(ifstream &read_one_test, current_student_example &current) {
	//Строка для фамилии
	string text_Fam;
	getline(read_one_test, text_Fam, '\n');
	string word_Fam;
	string Fam = "";
	stringstream ss_Fam(text_Fam);
	vector<string> array_Fam;
	while (ss_Fam >> word_Fam)
		array_Fam.push_back(word_Fam);
	for (unsigned int i = 1; i < array_Fam.size(); i++) {
		Fam += array_Fam[i];
		if (i != array_Fam.size() - 1)
			Fam += " ";
	}
		
	//Строка для имени
	string text_Name;
	getline(read_one_test, text_Name, '\n');
	string word_Name;
	string Name = "";
	stringstream ss_Name(text_Name);
	vector<string> array_Name;
	while (ss_Name >> word_Name)
		array_Name.push_back(word_Name);
	for (unsigned int i = 1; i < array_Name.size(); i++) {
		Name += array_Name[i];
		if (i != array_Name.size() - 1)
			Name += " ";
	}

	//Строка для класса
	string text_Class;
	getline(read_one_test, text_Class, '\n');
	string word_Class;
	string Class = "";
	stringstream ss_Class(text_Class);
	vector<string> array_Class;
	while (ss_Class >> word_Class)
		array_Class.push_back(word_Class);
	for (unsigned int i = 1; i < array_Class.size(); i++) {
		Class += array_Class[i];
		if (i != array_Class.size() - 1)
			Class += " ";
	}

	//Установить значения исходных полей
	current.set_Fam(Fam);
	current.set_Name(Name);
	current.set_Class(Class);

	string current_line;

	while (!read_one_test.eof()) {
		all_tests one_test;
		
		//Название теста
		string text_name_test;
		getline(read_one_test, text_name_test, '\n');
		current_line = text_name_test; //Проверка для выхода из цикла
		
		//Проверка на выход из цикла
		if (current_line == "")
			break;
		
		string word_name_test;
		string name_test = "";
		stringstream ss_name_test(text_name_test);
		vector<string> array_name_test;
		while (ss_name_test >> word_name_test)
			array_name_test.push_back(word_name_test);
		for (unsigned int i = 1; i < array_name_test.size(); i++) {
			name_test += array_name_test[i];
			if (i != array_name_test.size() - 1)
				name_test += " ";
		}

		//Количество тестов
		string text_count_examples;
		getline(read_one_test, text_count_examples, '\n');
		string word_count_examples;
		int count_exmaples;
		stringstream ss_count_examples(text_count_examples);
		vector<string> array_count_examples;
		while (ss_count_examples >> word_count_examples)
			array_count_examples.push_back(word_count_examples);
		count_exmaples = atoi(array_count_examples[1].c_str());

		vector<student_examples> all_example;

		for (int i = 0; i < count_exmaples; i++) {
			student_examples one_exmaples;
			//Вопрос
			string text_question;
			getline(read_one_test, text_question, '\n');
			string word_question;
			string question = "";
			stringstream ss_question(text_question);
			vector<string> array_question;
			while (ss_question >> word_question)
				array_question.push_back(word_question);
			for (unsigned int i = 1; i < array_question.size(); i++) {
				question += array_question[i];
				if (i != array_question.size() - 1)
					question += " ";
			}

			//Ответ
			string text_answer;
			getline(read_one_test, text_answer, '\n');
			string word_answer;
			string answer = "";
			stringstream ss_answer(text_answer);
			vector<string> array_answer;
			while (ss_answer >> word_answer)
				array_answer.push_back(word_answer);
			for (unsigned int i = 1; i < array_answer.size(); i++) {
				answer += array_answer[i];
				if (i != array_answer.size() - 1)
					answer += " ";
			}
						
			one_exmaples.set_answer(answer);
			one_exmaples.set_qustion(question);
			one_exmaples.set_is_true(false);
			all_example.push_back(one_exmaples);
			
		}
	
		one_test.set_name_test(name_test);
		one_test.set_count_examples(count_exmaples);
		one_test.set_all_examples(all_example);

		current.push_back(one_test);
	}

	return NULL;
}

//Изменение исходной БД новыми данными // Замена определенного блока данных новыми данными
int _FROM_CLASS_TO_FILE(Example corrected_dataBase, string name_test, int number) {
	//Получаем всю базу данных
	dataBase_tests _ALL_BD;
	_FROM_FILE_TO_CLASS(_ALL_BD, name_test);


	//Получаем доступ ко всем заданиям
	list<Example> all_example = _ALL_BD.get_all_example();
	list<Example>::iterator Iter_all_example;
	int i;
	for (i = 1, Iter_all_example = all_example.begin(); Iter_all_example != all_example.end(); Iter_all_example++, i++) {
		if (i == number) {
			all_example.insert(Iter_all_example, corrected_dataBase);
			all_example.erase(Iter_all_example);
			break;
		}
	}

	//Перезаполнение файла
	ofstream put_info("Прочее\\База данных\\" + name_test + ".txt", ios::out | ios::trunc);
	put_info << "Название_теста: " << name_test << endl;
	put_info << "Количество_заданий_в_тесте: " << _ALL_BD.get_count_example() << endl;
	list<Example>::iterator Iter_example;
	for (i = 1, Iter_example = all_example.begin(); Iter_example != all_example.end(); Iter_example++, i++) {
		//Графический файл
		Example one_example_c = *Iter_example;
		string graph_file;
		if (one_example_c.get_graph_file() != "Отсутствует")
			graph_file = one_example_c.get_graph_file() + ".png";
		else
			graph_file = "Отсутствует";

		put_info << "Номер_задания: " << i << endl;
		put_info << "Вопрос: " << one_example_c.get_name_question() << endl;
		put_info << "Правильный_ответ: " << one_example_c.get_true_answer() << endl;
		put_info << "Графический_файл: " << graph_file << endl;
		put_info << "Количество_вариантов_ответа: " << one_example_c.get_count_variable_answer() << endl;
		list<string> all_vars_c = one_example_c.get_all_vars();
		list<string>::iterator Iter_all_vars_c;
		int j;
		for (j = 1, Iter_all_vars_c = all_vars_c.begin(); Iter_all_vars_c != all_vars_c.end(); Iter_all_vars_c++, j++) {
			string current = *Iter_all_vars_c;
			put_info << "Вариант_" << j << ": " << current << endl;
		}
	}
	put_info << "%END%";
	put_info.close();
	return NULL;
}

//Проверка тестов учащегося [инициализация полей is_true класса Examples исходных данных]
int _VALIDATION_TESTS(current_student_example &all_tests_student, string name_test, bool &is_true) {
	//Получаем сначала из общей БД необходимый ТЕСТ
	dataBase_tests db_test; //Необходимый тест
	_FROM_FILE_TO_CLASS(db_test, name_test);

	bool& is_aval = is_true;

	vector<all_tests> all_examples = all_tests_student.get_all_example(); //Все тесты учащегося
	vector<student_examples> new_examples;
	int number_test; //Номер теста

	for (unsigned int i = 0; i < all_examples.size(); i++) {
		if (all_examples[i].get_name_test() == name_test) {
			new_examples = all_examples[i].get_all_examples();
			number_test;
			is_aval = true;
			break;
		}
	}


	if (!is_aval)
		return NULL;
	
	//Все задания в тесте
	list<Example> all_example = db_test.get_all_example();
	
	
	//Проверка тестов
	vector<student_examples>::iterator Iter_new_examples;
	//Прогоняем по тестам пользователя
	int q;
	for (q = 0, Iter_new_examples = new_examples.begin(); Iter_new_examples != new_examples.end(); Iter_new_examples++, q++) {
		student_examples one_examples = *Iter_new_examples;
		//Ответ пользователя
		string answer = one_examples.get_answer();

		//Ищем правильный ответ из данных тестов
		string true_answer;
		list<Example>::iterator Iter_all_example;
		int k;
		for (k = 0, Iter_all_example = all_example.begin(); Iter_all_example != all_example.end(); Iter_all_example++, k++) {
			if (q == k) {
				Example one_db_example = *Iter_all_example;
				true_answer = one_db_example.get_true_answer();
				break;
			}
		}
	
		if (true_answer == answer) {
			new_examples[q].set_is_true(true);
		}
	}

	all_tests_student.set_newExamples(new_examples, name_test);
	return NULL;
}

//Проверка строки на запретные комбинации и пробелы
void _IS_VALIDATION_LINE(string word, Label ^_label_error, bool& is_close) {
	if (word[0] == ' ') {
		_label_error->Text = "Слово не может начинаться с пробела";
		_label_error->Visible = true;
		is_close = true;
		return;
	}
	else if (word[strlen(word.c_str()) - 1] == ' ') {
		_label_error->Text = "Последний символ не может быть пробелом";
		_label_error->Visible = true;
		is_close = true;
		return;
	}

	char last_char = word[0];
	for (unsigned int i = 0; i < strlen(word.c_str()); i++) {
		char current_char = word[i];
		if (last_char == ' ' && current_char == ' ') {
			_label_error->Visible = true;
			is_close = true;
			_label_error->Text = "Недопустимо использовать несколько пробелов подряд";
			return;
		}
		else if ((last_char == ' ' && current_char == '?') || (last_char == ' ' && current_char == '!') || (last_char == ' ' && current_char == '.') || (last_char == ' ' && current_char == ',')) {
			_label_error->Text = "Использование пробела перед символами ?!,. невозможно";
			_label_error->Visible = true;
			is_close = true;
			return;
		}
		last_char = current_char;
	}
}

//Проверка на корректность имени графического файла
void _IS_VALIDATION_GRAPH(string word, Label^ _label_error, bool& is_close) {
	//Проверка на отсутствие пробелов
	for (unsigned int i = 0; i < word.size(); i++) {
		if (word[i] == ' ') {
			_label_error->Text = "В названии файла должны отсутствовать пробелы";
			is_close = true;
			return;
		}
		else if (word[i] == '.'  || word[i] == '\\' || word[i] == '/' || word[i] == ';' || word[i] == '*' || word[i] == '?' || word[i] == '\"' || word[i] == '<' || word[i] == '>' || word[i] == '|') {
			_label_error->Text = "Использование символов  .\/;*?\"<>| в названии файлов недопустимо";
			is_close = true;
			return;
		}
	}
}