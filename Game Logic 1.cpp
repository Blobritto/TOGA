#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Please Enter a number: " << endl;
    cin >> n;
    //cout << "Your number was: " << n << endl;
    if (n < 7) {
        cout << "Your number was less than 7." << endl;
    }
    else if (n == 7) {
        cout << "Your number was 7." << endl;
    }
    else {
        cout << "Your number was greater than 7.";
    }
}
