#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int variable = 1;
	int a = 0;

	a = ++variable + 1 + ++variable * 2;

	cout << "a = " << a << endl;

	return 0;
}
