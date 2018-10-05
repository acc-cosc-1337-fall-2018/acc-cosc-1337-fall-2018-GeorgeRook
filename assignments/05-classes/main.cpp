#include<iostream>
#include "invoice.h"

using std::cout; using std::endl;

int main()
{
	Invoice invoice; 

	InvoiceDetail detail; 
	std::cin >> detail; 
	invoice.add_invoice_detail(detail);

	invoice.add_invoice_detail(InvoiceDetail(5, 5));
	invoice.add_invoice_detail(InvoiceDetail(100, 2));

	Invoice invoice1; 
	invoice1.add_invoice_detail(InvoiceDetail(100, 2));

	Invoice result = invoice + invoice1; 
	std::cout << invoice.get_total();

	return 0;

}