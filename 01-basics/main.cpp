#include<iostream>
#include "basics.h"

using std::cout;

int main()
{
	cout << sum_numbers(5, 5);

	return 0;
}

#include "references.h"
#include<iostream>

using std::cout;

int main()
{
	int num1{ 0 };
	int num2{ 0 };

	cout << "before:" << num1 << " " << num2<<'\n';

	pass_by_val_by_ref(num1, num2);

	cout << "after: " << num1 << " " << num2;



	return 0;
}
