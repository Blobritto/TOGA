#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	int player1x = 0;
	int player1y = 0;
	int player2x = 0;
	int player2y = 0;
	float distance = 0.0f;



	cout << "Input preffered spawning co-ordinates for Player 1: " << endl;
	cin >> player1x;
	cin >> player1y;



	if (player1x > 20) {
		cout << "You can only set the 'X' value between 10 and 20." << endl;
		player1x = 20;
	}
	else if (player1x < 10) {
		cout << "You can only set the 'X' value between 10 and 20." << endl;
		player1x = 10;
	}
	if (player1y > 25) {
		cout << "You can only set the 'Y' value between 5 and 25." << endl;
		player1y = 25;
	}
	else if (player1y < 5) {
		cout << "You can only set the 'Y' value between 5 and 25." << endl;
		player1y = 5;
	}



	cout << "Input preffered spawning co-ordinates for Player 2: " << endl;
	cin >> player2x;
	cin >> player2y;



	if (player2x > 20) {
		cout << "You can only set the 'X' value between 10 and 20." << endl;
		player2x = 20;
	}
	else if (player2x < 10) {
		cout << "You can only set the 'X' value between 10 and 20." << endl;
		player2x = 10;
	}
	if (player2y > 25) {
		cout << "You can only set the 'Y' value between 5 and 25." << endl;
		player2y = 25;
	}
	else if (player2y < 5) {
		cout << "You can only set the 'Y' value between 5 and 25." << endl;
		player2y = 5;
	}



	distance = sqrt((abs(player1x - player2x) * abs(player1x - player2x)) + (abs(player1y - player2y) * abs(player1y - player2y)));



	cout << "The distance between the 2 players is: " << distance << endl;

}