// AntrasPraktinisDarbas.cpp : Defines the entry point for the application.
//

#include "AntrasPraktinisDarbas.h"

using namespace std;

bool balse(char raide);
int didziausiasDaliklis(int sk1, int sk2);
void miniGame();
void fizzBuzz(int n);

int inputValue(int commandCount, string errMsg);
int inputValue(string errMsg);

int main()
{
	bool isRunning = true;

	int command;

	while (isRunning) {
		
		cout
			<< "Pasirinkite operacija \n"
			<< "1 - Patikrinti Ar raide yra balse \n"
			<< "2 - Didziausias daliklis dvieju skaiciu \n"
			<< "3 - Zaidumas \n"
			<< "4 - FizzBazz \n"
			<< "0 - Baigti darba" << endl;

		command = inputValue(4, "Tokios komandos nera");

		if (command == 0) {
			isRunning = false;
			break;
		}

		switch (command) {
		case 1:
			char raide;
			cout << "Iveskite raide" << endl;
			cin >> raide;
			cout << "Ivesta raide " << (balse(raide) ? "yra balse" : "niera balse") << endl;
			break;
		case 2:
			int sk1, sk2;
			cout << "Iveskite skaiciu" << endl;
			cin >> sk1;
			cout << "Iveskite skaiciu" << endl;
			cin >> sk2;
			
			cout 
				<< "Didziausias daliklis dvieju skaiciu " 
				<< sk1 << " ir " << sk2 << " yra " 
				<< didziausiasDaliklis(sk1, sk2) 
				<< endl;
			break;
		case 3:
			miniGame();
			break;
		case 4:
			int sk;
			cout << "Iveskite teigiama sveikaji skaiciu" << endl;
			sk = inputValue("Iveskite teigiama sveikaji skaiciu");
			fizzBuzz(sk);
			break;
		}
	}


	return 0;
}

bool balse(char raide) {
	char balses[] = { 'a', 'i', 'o', 'y', 'u', 'e' };
	bool otp = false;
	for (int i = 0; i < 6; i++) {
		if (balses[i] == raide) {
			otp = true;
			break;
		}
	}
	return otp;
}

int didziausiasDaliklis(int sk1, int sk2) {
	int tmp;

	while (sk2 > 0) {
		tmp = sk1;
		sk1 = sk2;
		sk2 = tmp % sk2;
	}
	
	return sk1;
}

void miniGame() {
	int randomNumber = rand() % 100 + 1, number;

	while (true) {
		cout << randomNumber << " " << "Atspiekite skaiciu" << endl;
		cin >> number;
		if (randomNumber > number) {
			cout << "Skaicius yra mazenis bandikite darkarta" << endl;
		}
		else if (randomNumber < number) {
			cout << "Skaicius yra didesnis bandikite darkarta" << endl;
		}
		else {
			cout << "Sveikinu jus atspejote skaiciu" << endl;
			break;
		}
	}
}

void fizzBuzz(int n) {
	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0) {
			if (i % 5 == 0) {
				cout <<  i << " " << "FizzBuzz" << endl;
			}
			else {
				cout << i << " " << "Fizz" << endl;
			}
		}
		else if (i % 5 == 0) {
			cout << i << " " << "Buzz" << endl;
		}
	}
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
		}
		else {
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

