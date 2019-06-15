#pragma once
#include <string>
#include "Example.h"
using namespace std;
using namespace System::Collections::Generic;
class dataBase_tests
{
private:
	string name_test; //�������� �����
	int count_example; //���������� ������� � �����
	list<Example> all_example; //��� ������� � �����

public:
	dataBase_tests(){
		name_test = "";
		count_example = 0;
	}
	dataBase_tests(string name_test, int count_example, string graph_file) {
		this->name_test = name_test;
		this->count_example = count_example;
	}
	~dataBase_tests() {}

	//���������� ����� ��������
	void set_name_test(string t) { name_test = t; }
	void set_count_example(int t) { count_example = t; }
	
	//������� ��������
	string get_name_test() { return name_test; }
	int get_count_example() { return count_example; }
	list<Example> get_all_example() { return all_example; }

	//��������� �������
	void pushback(Example t) { all_example.push_back(t); }
	void set_count_example() { count_example = all_example.size(); }
};