#include <iostream>
#include <string>

using namespace std;

void valiutosLiginimas();
void pirktiValiuta();
void parduotiValiuta();

int main() {
	
	bool isRunning = true;
	
	int command;

	while (isRunning) {
		
		cout 
			<< "Pasirinkite operacija \n"
			<< "1 - valiutos kurso palyginimas \n"
			<< "2 - pirkti valiuta \n"
			<< "3 - parduoti valiuta \n"
			<< "0 - baigti darba" << endl;

		if (cin >> command) {
			if (command == 0) {
				isRunning = false;
				break;
			}	
		}
		else {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
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
		default:
			cout << "Tokios komandos nera \n" << endl;
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

		while (!(cin >> suma)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Iveskite konvertuojama suma" << endl;
		}
		

		cout
			<< "*************************************************** \n"
			<< (suma * GBP_Bendras) << " GBP \n\n"
			<< (suma * USD_Bendras) << " USD \n\n"
			<< (suma * INR_Bendras) << " INR \n"
			<< "***************************************************" << endl;


		cout
			<< "1 - pratesti operacija \n"
			<< "0 - grizti i pagrindinie meniu" << endl;

		if (cin >> command) {
			if (command == 0)
				isRunning = false;
		}
		else {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			isRunning = false;
		}


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
			<< "Pasirinkite vaiuta kuria norit pirkti \n"
			<< "1 - GBP \n"
			<< "2 - USD \n"
			<< "3 - INR " << endl;


		while (!(cin >> command)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Tokios komandos nera" << endl;
		}

		cout << "Iveskite kieki" << endl;

		while (!(cin >> suma)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Iveskite kieki" << endl;
		}

		switch (command) {
		case 1:
			cout << (suma / GBP_Pirkti) << " EUR " << endl;
			break;
		case 2:
			cout << (suma / USD_Pirkti) << " EUR " << endl;
			break;
		case 3:
			cout << (suma / INR_Pirkti) << " EUR " << endl;
			break;
		default:
			cout << "Tokios komandos niera" << endl;
		}
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
			<< "3 - INR" << endl;

		while (!(cin >> command)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Tokios komandos nera" << endl;
		}

		cout << "Iveskite kieki" << endl;

		while (!(cin >> suma)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Iveskite kieki" << endl;
		}

		switch (command) {
		case 1:
			cout << (suma / GBP_Parduoti) << " EUR " << endl;
			break;
		case 2:
			cout << (suma / USD_Parduoti) << " EUR " << endl;
			break;
		case 3:
			cout << (suma / INR_Parduoti) << " EUR " << endl;
			break;
		default:
			cout << "Invalid option, please try again." << endl;
		}


	} while (isRunning);
}