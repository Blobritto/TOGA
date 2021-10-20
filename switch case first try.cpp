#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num1;
	cout << "Input a number: " << endl;
	cin >> num1;
	switch (num1)
	{
	case 0:
		cout << "Zero" << endl;
		break;
	case 1:
		cout << "One" << endl;
		break;
	case 2:
		cout << "Two" << endl;
		break;
	case 3:
		cout << "Three" << endl;
		break;
	case 4:
		cout << "Four" << endl;
		break;
	case 5:
		cout << "Five" << endl;
		break;
	case 6:
		cout << "Six" << endl;
		break;
	case 7:
		cout << "Seven" << endl;
		break;
	case 8:
		cout << "Eight" << endl;
		break;
	default:
		cout << "Something Else" << endl;
		break;
	}

}