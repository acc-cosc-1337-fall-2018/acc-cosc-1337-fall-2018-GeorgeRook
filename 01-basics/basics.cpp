#include "basics.h"
#include<vector>
#include<iostream>
#include<string>


using std::cout; using std::vector; using std::endl; using std::string;

int sum_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write code for multiply_numbers function here

int multiply_numbers(int num1, int num2)
{
	return num1 * num2;
}
void pass_by_val_by_ref(int val, int& ref)
{
	val = 99;
	ref = 99;

}

void const_pass_by_val_by_ref(int val, const int& ref)
{
	val = 99;
}

void initialize_vector_of_ints()
{
	vector<int> numbers = { 5,7,9,4,6,8 };
	numbers.push_back(1);
	
	for (auto n : numbers)
	{
		cout << n << std::endl;
	}


}
void initialize_vector_of_strings()
{
	vector<string> philosopher = {"Kant", "Plato", "Hume", "Kierkegaard"};   
	philosopher.push_back("socrates");

	for (auto p : philosopher)
	{
		cout << p << endl;
	}
}
