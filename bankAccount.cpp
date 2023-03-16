#include "bankAccount.h"

int main() {


	bankAccount acc1("Durukan", "Cetin", 3500, "05071234567");
	cout << acc1;

	acc1 + 10000;
	cout << acc1;

	acc1 - 20000;
	cout << acc1;

	return 0;
}