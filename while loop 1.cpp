#include <iostream>
using namespace std;

int main()
{
	bool okay = false;
	int answer = 0;
	while (okay == false) {
		cout << "Enter a number from 1 - 9: ";
		cin >> answer;
		if (answer < 10) {
			if (answer > 0) {
				okay = true;
			}
		}
		else {
			cout << "You entered an invalid number, please try again: " << endl;
		}
	}
}