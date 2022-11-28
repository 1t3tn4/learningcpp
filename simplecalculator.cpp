#include <iostream>
#include <string>

using namespace std;

int main() {

	int a, b;
	string islem;
	string bruh;

	cout << "Welcome to the Calculator..." << endl;
	cout << "1st: Plus " << endl;
	cout << "2nd: Minus " << endl;
	cout << "3rd: Multiply " << endl;
	cout << "4th: Divide " << endl;
	cout << "Choose one: 1-4: ";

	cin >> islem;

	if (islem == "1") {
		cout << "a: ";
		cin >> a;
		cout << "b: ";
		cin >> b;

		cout << "Result: " << float(a) + b << endl;

	}
	else if (islem == "2") {
		cout << "a: ";
		cin >> a;
		cout << "b: ";
		cin >> b;

		cout << "Result: " << float(a) - b << endl;
	}
	else if (islem == "3") {
		cout << "a: ";
		cin >> a;
		cout << "b: ";
		cin >> b;

		cout << "Result: " << float(a) * b << endl;
	}
	else if (islem == "4") {
		cout << "a: ";
		cin >> a;
		cout << "b: ";
		cin >> b;

		cout << "Result: " << float(a) / b << endl;
	}
	else {
		cout << "Don't know how to write but want to do Math?: ";
		cin >> bruh;
		cout << "Bruh you really said: " << bruh;
	}
	return 0;
}
