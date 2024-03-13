#include <iostream>
#include"Header.h"
using namespace std;
int add(int a, int b)
{
	int add;
	add = a + b;
	return add;
}
int sub(int a, int b)
{
	int sub;
	sub = a - b;
	return sub;
}
int mult(int a, int b)
{
	int mult;
	mult = a * b;
	return mult;
}
float div(float a, float b)
{
	float div;
	div = a / b;
	return div;
}

int main()
{
	int a, b, num;
	cout << "_________________" << endl;
	cout << "enter numbers" << endl;
	cout << "_________________" << endl;
	cin >> a;
	cin >> b;
	cout << "_________________" << endl;

	while (1)
	{

		cout << "_________________" << endl;
		cout << "enter choice from 1-4 and 5 to terminate" << endl;
		cout << "1 for addition" << endl;
		cout << "2 for subtraction" << endl;
		cout << "3 for multiplication" << endl;
		cout << "4 for division" << endl;
		cout << "_________________" << endl;
		cin >> num;
		switch (num)
		{
		case 1:
		{
			cout << "sum\t" << add(a, b) << endl;

			cout << "_________________" << endl;
			system("pause");
			system("cls");
			main();

			cout << "_________________" << endl;


		}
		case 2:
		{
			cout << "subtraction\t" << sub(a, b) << endl;

			cout << "_________________" << endl;
			system("pause");
			system("cls");
			main();

			cout << "_________________" << endl;
		}
		case 3:
		{
			cout << "multiplication\t" << mult(a, b) << endl;

			cout << "_________________" << endl;
			system("pause");
			system("cls");
			main();

			cout << "_________________" << endl;

		}
		case 4:
			cout << "division\t";
			cout << division(a, b) << endl;

			cout << "_________________" << endl;
			system("pause");
			system("cls");
			main();

			cout << "_________________" << endl;

		case 0:
		{
			exit;
			break;

			cout << "_________________" << endl;
		}
		}
		system("pause");
		return 0;
	}
}