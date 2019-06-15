#pragma once
#include <string>
#include <vector>
using namespace std;

//����� ��������� �� ������
public class student_examples {
private:
	string question; //������
	string answer; //�����
	bool is_true; //���������� �� ����� �� ������
public:
	student_examples() { question = ""; answer = ""; is_true = false; }
	~student_examples(){}
	void set_qustion(string t) { question = t; }
	void set_answer(string t) { answer = t; }
	void set_is_true(bool t) { is_true = t; }

	string get_question() { return question; }
	string get_answer() { return answer; }
	bool get_is_true() { return is_true; }
};

//��� ������ ��������� �� ����
public class all_tests {
private:
	string name_test; //�������� �����
	int count_examples; //���������� �������
	vector<student_examples> all_examples; //��� ������� ������������
public:
	all_tests() { name_test = ""; count_examples = 0; }
	~all_tests() {}
	void set_name_test(string t) { name_test = t; }
	void set_count_examples(int t) { count_examples = t; }
	void set_all_examples(vector<student_examples> t) { all_examples = t; }

	string get_name_test() { return name_test; }
	int get_count_examples() { return count_examples; }
	vector<student_examples> get_all_examples() { return all_examples; }
};

//���������� �� ���������
public class current_student_example
{
private:
	string Fam; //������� ���������
	string Name; //��� ���������
	string Class; //����� ���������
	vector<all_tests> all_example; //��� ����� ���������

public:
	current_student_example(string Fam, string Name, string Class){
		this->Fam = Fam;
		this->Name = Name;
		this->Class = Class;
	}
	current_student_example() {}
	~current_student_example() {}

	//���������� ����� �������� � ����
	void set_Fam(string t) { Fam = t; }
	void set_Name(string t) { Name = t; }
	void set_Class(string t) { Class = t; }

	//������� �������� �� �����
	string get_Fam() { return Fam; }
	string get_Name() { return Name; }
	string get_Class() { return Class; }
	vector<all_tests> get_all_example() { return all_example; }

	//���������� � ������ ������ � �����
	void push_back(all_tests t) { all_example.push_back(t); }	
	
	//�������� ������ ���������
	void set_newExamples(vector<student_examples> t, string name_test) {
		for (unsigned int i = 0; i < all_example.size(); i++) {
			if (all_example[i].get_name_test() == name_test) {
				all_example[i].set_all_examples(t);
				break;
			}
		}
	}
};