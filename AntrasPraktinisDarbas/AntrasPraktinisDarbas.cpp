// AntrasPraktinisDarbas.cpp : Defines the entry point for the application.
//

#include "AntrasPraktinisDarbas.h"

using namespace std;

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
			<< "3 - Parduoti valiuta \n"
			<< "4 - FizzBazz \n"
			<< "0 - Baigti darba" << endl;

		command = inputValue(3, "Tokios komandos nera");

		if (command == 0) {
			isRunning = false;
			break;
		}

		switch (command) {
		case 1:
			cout << "1" << endl;
			break;
		case 2:
			cout << "2" << endl;
			break;
		case 3:
			cout << "3" << endl;
			break;
		case 4:
			cout << "1" << endl;
			break;
		}



		
	}


	return 0;
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

