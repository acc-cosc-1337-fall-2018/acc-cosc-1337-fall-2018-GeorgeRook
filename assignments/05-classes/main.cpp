#include<iostream>
#include "invoice.h"

using std::cout; using std::endl;

int main()
{
	Invoice invoice; 

	invoice.add_invoice_detail(InvoiceDetail(10, 10));
	invoice.add_invoice_detail(InvoiceDetail(5, 5));
	invoice.add_invoice_detail(InvoiceDetail(100, 2));

	std::cout << invoice.get_total();


	return 0;

}