#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num1;
	int num2;

	cout << "Enter 2 numbers: " << endl;
	cin >> num1;
	cin >> num2;
	if (num1 < num2)
	{
		cout << "Your second number was larger than the first." << endl;
	}
	else if (num2 < num1)
	{
		cout << "Your first number was larger than the second." << endl;
	}
	else
	{
		cout << "Your 2 numbers were the same." << endl;
	}
}