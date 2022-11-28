#include <iostream>
#include <string>

using namespace std;

int main() {

	string password = "yazilimbilimi";

	string input;
	cout << "Write password: ";
	cin >> input;

	if (password == input) {
		cout << "Password correct!!";
	}
	else {
		cout << "Password wrong!!";
	}

	return 0;
}
