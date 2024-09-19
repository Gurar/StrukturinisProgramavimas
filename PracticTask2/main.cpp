#include <iostream>

using namespace std;


void main() {

	// Pirma ir Antra praktine uzduotis
	int
		pz1 = 3,
		pz2 = 10,
		pz3 = 7,
		pz4 = 2,
		pz5 = 2;

	float vidurkis = static_cast<float>(pz1 + pz2 + pz3 + pz4 + pz5) / 5;

	cout << "vidurkis: " << vidurkis << " " << (vidurkis >= 5 ? "Teigiams vidurkis" : " Neigiamas vidurkis") << endl;
	
	cout << "====================" << endl;
}