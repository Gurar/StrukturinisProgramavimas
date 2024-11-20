// treciaPraktineUzduotis.cpp : Defines the entry point for the application.
//

#include "treciaPraktineUzduotis.h"

using namespace std;

string input(string message) {
	string input;
	cout << message << endl;
	cin >> input;
	return input;
}

int main()
{
	int command;
	string str, strKey;
	while (true) {
		str = input("Iveskite zodi");
		strKey = input("Iveskite raktini zuodi");
		cout
			<< "Pasirinkite operacija \n"
			<< "1 - Sifravimas nauduojant masivo abecelie \n"
			<< "2 - Sifravimas nauduojant ASCII lentele \n"
			<< "0 - Baigti darba" << endl;
		cin >> command;

		if (command == 0)
			break;

		switch (command) {
			case 1:
				cout << "1" << endl;
				break;
			case 2:
				cout << "3" << endl;
				break;
		}
	}


	return 0;
}
