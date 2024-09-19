#include <iostream>

using namespace std;


void main() {

	// Pirma ir Antra praktine uzduotis
	int
		pz1 = 10,
		pz2 = 10,
		pz3 = 10,
		pz4 = 10,
		pz5 = 10;

	float vidurkis = static_cast<float>(pz1 + pz2 + pz3 + pz4 + pz5) / 5;

	cout << "vidurkis: " << vidurkis << " " << (vidurkis >= 5 ? "Teigiams vidurkis" : " Neigiamas vidurkis") << endl;
	
	cout << "====================" << endl;

	// Trecia uzdiotis

	if (vidurkis == 10) {
		cout << "Puiku" << endl;
	}
	else if (vidurkis >= 9) {
		cout << "Labai Gerai" << endl;
	}
	else if (vidurkis >= 7) {
		cout << "Gerai" << endl;
	}
	else if (vidurkis >= 5) {
		cout << "Patenkinamai" << endl;
	}
	else {
		cout << "Egzamina ne islaikitas" << endl;
	}
}