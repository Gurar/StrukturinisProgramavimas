﻿// treciaPraktineUzduotis.cpp : Defines the entry point for the application.
//

#include "treciaPraktineUzduotis.h"

using namespace std;

char ABECELE[52];

string input(string message) {
	string input;
	cout << message << endl;
	cin >> input;
	return input;
}

void abecele() {
	for (int i = 0; i < 26; i++) {
		ABECELE[i] = 'A' + i;
	}

	for (int i = 0; i < 26; i++) {
		ABECELE[26 + i] = 'a' + i;
	}
}

void sifravimas(string str, string strKey) {
	int m, k;

	for (int i = 0; i < str.size(); i++) {
		for (int j = 0; j < 52; j++) {
			if (str[i] == ABECELE[j]) {
				m = j;
				break;
			}
		}

		for (int j = 0; j < 52; j++) {
			if (strKey[i % strKey.size()] == ABECELE[j]) {
				k = j;
				break;
			}
		}

		str[i] = ABECELE[(m + k) % 52];
	}

	cout << "Uzsifruotas tekstas: " << str << endl;

	for (int i = 0; i < str.size(); i++) {
		for (int j = 0; j < 52; j++) {
			if (str[i] == ABECELE[j]) {
				m = j;
				break;
			}
		}

		for (int j = 0; j < 52; j++) {
			if (strKey[i % strKey.size()] == ABECELE[j]) {
				k = j;
				break;
			}
		}

		str[i] = ABECELE[(m - k + 52) % 52];
	}

	cout << "Desifruotas tekstas: " << str << endl;

}

void sifravimasASCII(string str, string strKey) {
	int m, k, c;
	for (int i = 0; i < str.length(); i++) {
		m = int(str[i]);
		k = int(strKey[i % strKey.size()]);
		c = 32 + ((m + k - 2 * 32) % 91);
		str[i] = char(c);
	}

	cout << "Uzsifruotas tekstas: " << str << endl;

	for (int i = 0; i < str.length(); i++) {
		m = int(str[i]);
		k = int(strKey[i % strKey.size()]);
		c = 32 + ((m - k + 91) % 91);
		str[i] = char(c);
	}

	cout << "Desifruotas tekstas: " << str << endl;
}

int main()
{
	abecele();
	int command;
	string str, strKey;
	while (true) {
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
				str = input("Iveskite zodi");
				strKey = input("Iveskite raktini zodi");
				cout << "Ivestas tekstas: " << str << endl;
				sifravimas(str, strKey);
				break;
			case 2:
				str = input("Iveskite zodi");
				strKey = input("Iveskite raktini zodi");
				cout << "Ivestas tekstas: " << str << endl;
				sifravimasASCII(str, strKey);
				break;
		}
	}


	return 0;
}
