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

void dviejuSkaitmenuSuma(int skaicius) {
	if (skaicius <= 99) {
		cout << "Dvieju skaitmenu suma: " <<  (skaicius / 10) + (skaicius % 10) << endl;
	}
}

void dviejuSkaitmenuDelmuo(int skaicius) {
	if (skaicius % 10 == 0) {
		cout << "daliba is nulio negalima" << endl;
	}
	else {
		cout << "Dvieju skaitmenu suma: " << static_cast<float>(skaicius / 10) / (skaicius % 10) << endl;
	}
}

void maxNumber(int sk1, int sk2) {
	if (sk1 > sk2) {
		cout << sk1 << endl;
	}
	else if (sk1 == sk2) {
		cout << "Skaicia yra lygus" << endl;
	}
	else {
		cout << sk2 << endl;
	}
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

	dviejuSkaitmenuSuma(10);

	cout << "delmuo " << endl;

	dviejuSkaitmenuDelmuo(25);

	maxNumber(20, 10);
	maxNumber(1, 5);
	maxNumber(3, 3);


}