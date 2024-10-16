// AntrasPraktinisDarbas.cpp : Defines the entry point for the application.
//

#include "AntrasPraktinisDarbas.h"

using namespace std;

bool balse(char raide);
void fizzBuzz(int n);

int inputValue(int commandCount, string errMsg);
int inputValue(string errMsg);

int main()
{
	bool isRunning = true;

	int command;

	while (isRunning) {
		
		cout
			<< "Pasirinkite operacija \n"
			<< "1 - Valiutos kurso palyginimas \n"
			<< "2 - Pirkti valiuta \n"
			<< "3 - Zaidumas \n"
			<< "4 - FizzBazz \n"
			<< "0 - Baigti darba" << endl;

		command = inputValue(4, "Tokios komandos nera");

		if (command == 0) {
			isRunning = false;
			break;
		}

		switch (command) {
		case 1:
			char raide;
			cout << "Iveskite raide" << endl;
			cin >> raide;
			cout << "Ivesta raide yra balse " << (balse(raide) ? "taip" : "nie") << endl;
			break;
		case 2:
			cout << "2" << endl;
			break;
		case 3:
			break;
		case 4:
			int sk;
			cout << "Iveskite teigiama sveikaji skaiciu" << endl;
			sk = inputValue("Iveskite teigiama sveikaji skaiciu");
			fizzBuzz(sk);
			break;
		}
	}


	return 0;
}

bool balse(char raide) {
	char balses[] = { 'a', 'i', 'o', 'y', 'u', 'e' };
	bool otp = false;
	for (int i = 0; i < 6; i++) {
		if (balses[i] == raide) {
			otp = true;
			break;
		}
	}
	return otp;
}

void fizzBuzz(int n) {
	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0) {
			if (i % 5 == 0) {
				cout <<  i << " " << "FizzBuzz" << endl;
			}
			else {
				cout << i << " " << "Fizz" << endl;
			}
		}
		else if (i % 5 == 0) {
			cout << i << " " << "Buzz" << endl;
		}
	}
}


int inputValue(int commandCount, string errMsg) {
	int input;
	bool isRunning = true;

	while (isRunning) {
		if (cin >> input) {
			if (input <= commandCount && input >= 0) {
				isRunning = false;
			}
			else {
				cout << errMsg << endl;
			}
		}
		else {
			cout << errMsg << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}

	}

	return input;
}

int inputValue(string errMsg) {
	int input;

	while (!(cin >> input)) {
		cout << errMsg << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	return input;
}

