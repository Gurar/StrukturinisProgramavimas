#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void valiutosLiginimas();
void pirktiValiuta();
void parduotiValiuta();

int inputValue(int commandCount, string errMsg);
int inputValue(string errMsg);

int main() {
	
	bool isRunning = true;
	
	int command;

	while (isRunning) {
		
		cout 
			<< "Pasirinkite operacija \n"
			<< "1 - Valiutos kurso palyginimas \n"
			<< "2 - Pirkti valiuta \n"
			<< "3 - Parduoti valiuta \n"
			<< "0 - Baigti darba" << endl;

		command = inputValue(3, "Tokios komandos nera");

		if (command == 0) {
			isRunning = false;
			break;
		}
			

		switch (command) {
		case 1:
			valiutosLiginimas();
			break;
		case 2:
			pirktiValiuta();
			break;
		case 3:
			parduotiValiuta();
			break;
		}
	}
}

void valiutosLiginimas() {
	bool isRunning = true;
	float
		GBP_Bendras = 0.8593,
		USD_Bendras = 1.0713,
		INR_Bendras = 88.8260,
		suma = 0;

	int command;
	
	do {

		cout << "Valiutos kurso palyginimas su kita valiuta" << endl;

		cout << "Iveskite konvertuojama suma" << endl;

		suma = inputValue("Iveskite konvertuojama suma");
		
		cout
			<< "================== \n"
			<< (suma * GBP_Bendras) << " GBP \n\n"
			<< (suma * USD_Bendras) << " USD \n\n"
			<< (suma * INR_Bendras) << " INR \n"
			<< "==================" << endl;

		cout
			<< "0 - Grizti i pagrindini meniu \n"
			<< "1 - Pratesti" << endl;

		command = inputValue(1, "Tokios komandos nera");

		if (command == 0)
			isRunning = false;

	} while (isRunning);
}

void pirktiValiuta() {
	bool isRunning = true;

	float
		GBP_Pirkti = 0.8450,
		USD_Pirkti = 1.0547,
		INR_Pirkti = 85.2614,
		suma = 0;

	int command;

	do {
		cout << "Valiutos pirkimas" << endl;

		cout
			<< "Pasirinkite valiuta kuria norit pirkti \n"
			<< "1 - GBP \n"
			<< "2 - USD \n"
			<< "3 - INR \n"
			<< "0 - Grizti i pagrindini meniu" << endl;

		command = inputValue(3, "Tokios komandos niera");

		if (command == 0) {
			isRunning = false;
			break;
		}
			
			

		cout << "Iveskite kieki" << endl;

		suma = inputValue("Iveskite kieki");

		switch (command) {
		case 1:
			cout << (round((suma / GBP_Pirkti) * 100.0) / 100.0) << " EUR " << endl;
			break;
		case 2:
			cout << (round((suma / USD_Pirkti) * 100.0) / 100.0) << " EUR " << endl;
			break;
		case 3:
			cout << (round((suma / INR_Pirkti) * 100.0) / 100.0) << " EUR " << endl;
			break;
		default:
			cout << "Tokios komandos niera" << endl;
		}

		cout
			<< "0 - Grizti i pagrindini meniu \n"
			<< "1 - Pratesti" << endl;


		command = inputValue(1, "Tokios komandos niera");

		if (command == 0)
			isRunning = false;

	} while (isRunning);

}

void parduotiValiuta() {
	bool isRunning = true;
	float
		GBP_Parduoti = 0.9060,
		USD_Parduoti = 1.1309,
		INR_Parduoti = 92.8334,
		suma = 0;
	int command;

	do {

		cout
			<< "Pasirinkite valiuta kuria norit parduoti \n"
			<< "1 - GBP \n"
			<< "2 - USD \n"
			<< "3 - INR \n"
			<< "0 - Grizti i pagrindini meniu" << endl;

		command = inputValue(3, "Tokios komandos niera");

		if (command == 0) {
			isRunning = false;
			break;
		}

		cout << "Iveskite kieki" << endl;

		suma = inputValue("Iveskite kieki");

		switch (command) {
		case 1:
			cout << (round((suma / GBP_Parduoti) * 100.0 ) / 100.0) << " EUR " << endl;
			break;
		case 2:
			cout << (round((suma / USD_Parduoti) * 100.0) / 100.0) << " EUR " << endl;
			break;
		case 3:
			cout << (round((suma / INR_Parduoti) * 100.0) / 100.0) << " EUR " << endl;
			break;

		}

		cout
			<< "0 - Grizti i pagrindini meniu \n"
			<< "1 - pratesti" << endl;


		command = inputValue(1, "Tokios komandos niera");

		if (command == 0)
			isRunning = false;


	} while (isRunning);
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
		} else {
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