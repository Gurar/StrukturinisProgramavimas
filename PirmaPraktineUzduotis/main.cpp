#include <iostream>
#include <string>

using namespace std;

void message( string text) {
	cout << text << endl;
}

void lygintiValiuta() {
	message("Liginty Valiuta");
}

void pirktiValiuta() {
	message("Pirkti Valiuta");


}

void parduotiValiuta() {
	message("Parduoti Valiuta");
}

int main() {

	bool ciklas = true;

	while (ciklas) {
		int operacija;
		message("Operacijos meniu");
		message("=================");
		cin >> operacija;

		switch (operacija) {
		case 1: 
			lygintiValiuta();
			break;
		case 2:
			pirktiValiuta();
			break;
		case 3:
			parduotiValiuta();
			break;
		case 4:
			message("baigti darba");
			ciklas = false;
			break;
		default:
			message("pasirinkite operacija");
			break;
		}
	}
}