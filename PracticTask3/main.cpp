#include <iostream>

using namespace std;

void message() {
	cout << "Jezy Kozlovski Programu Sistemos" << endl;
}

void kolegija() {
	cout << "Vilniaus Kolegija" << endl;
}

void fakultetas() {
	cout << "Elektronikos ir Informatikos Fakultetas" << endl;
}

void randomNumber() {
	
	cout << "Atsitiktinis skaicius " << rand() << endl;
}

int main() {
	message();

	kolegija();
	fakultetas();

	int sk = 1;

	cout << "====================" << endl;

	while (sk <= 10) {
		randomNumber();
		sk++;
	}

	cout << "====================" << endl;


}