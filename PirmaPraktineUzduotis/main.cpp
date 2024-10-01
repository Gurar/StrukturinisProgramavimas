#include <iostream>
#include <string>

using namespace std;

void valiutosLiginimas();
void pirktiValiuta();
void parduotiValiuta();

int main() {
	
	bool isRunning = true;

	while (isRunning) {
		int command;

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
			cout << "pirtkti" << endl;
			break;
		case 3:
			cout << "parduoti" << endl;
			break;
		default:
			cout << "Tokios komandos nera" << endl;
			break;
		}
	}
}

void valiutosLiginimas() {
	bool isRunning = true;
	do {
		cout << "Valiutos kurso palyginimas su kita valiuta" << endl;
		int command;

		float
			GBP_Bendras = 0.8593,
			USD_Bendras = 1.0713,
			INR_Bendras = 88.8260,
			suma;


		cout << "Iveskite konvertuojama suma" << endl;
		cin >> suma;
		cout << endl;
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