#pragma once
#include <fstream>
#include "dataBase_tests.h"
#include "Example.h"
#include "current_student_example.h"

using namespace System::Windows::Forms;

int _FROM_FILE_TO_CLASS(dataBase_tests& example_class, string name_test);
int _FROM_CLASS_TO_FILE(Example corrected_example, string name_test, int number);
int _FROM_FILE_TO_CLASS(ifstream& read_one_test, current_student_example &current);
int _VALIDATION_TESTS(current_student_example& all_tests_student, string name_test, bool& is_true);
void _IS_VALIDATION_LINE(string word, Label^ _label_error, bool& is_close);
void _IS_VALIDATION_GRAPH(string word, Label^ _label_error, bool& is_close);