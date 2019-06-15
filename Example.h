#pragma once
#include <string>
#include <list>

using namespace std;

public class Example
{
private:
	string name_question; //Название вопроса
	string true_answer; //Правильный ответ
	string graph_file; //Графический файл
	int count_variable_answer; //Количество вариантов ответа
	list<string> all_vars; //Все варианты ответа

public:
	Example(string name_question, string true_answer, int count_variable_answer, string graph_file) {
		this->name_question = name_question;
		this->true_answer = true_answer;
		this->count_variable_answer = count_variable_answer;
		this->graph_file = graph_file;
	}
	Example(string name_question, string true_answer, string graph_file, int count_variable_answer, list<string> all_vars) {
		this->name_question = name_question;
		this->true_answer = true_answer;
		this->count_variable_answer = count_variable_answer;
		this->all_vars = all_vars;
		this->graph_file = graph_file;
	}

	Example() {
		name_question = "";
		true_answer = "";
		count_variable_answer = 0;
		graph_file = "";
	}

	//Установить новые значения
	void set_name_question(string t) { name_question = t; }
	void set_true_answer(string t) { true_answer = t; }
	void set_count_variable_answer(int t) { count_variable_answer = t; }
	void set_all_vars(list<string> t) { all_vars = t; }
	void set_graph_file(string t) { graph_file = t; }
	
	//Вернуть старые значения
	string get_name_question() { return name_question; }
	string get_true_answer() { return true_answer; }
	int get_count_variable_answer() { return count_variable_answer; }
	list<string> get_all_vars() { return all_vars; }
	string get_graph_file() { return graph_file; }

	//Добавление нового значения в коллекцию
	void pushback(string t) { all_vars.push_back(t); }
};

