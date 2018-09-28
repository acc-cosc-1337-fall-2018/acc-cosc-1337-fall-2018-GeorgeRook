#include<iostream>
#include "invoice_detail.h"

using std::cout; using std::endl;

int main()
{
	

	InvoiceDetail InvoiceExample1(10, 10);
	cout << "get_extended_cost =" << InvoiceExample1.get_extended_cost() << endl;

	return 0;
}