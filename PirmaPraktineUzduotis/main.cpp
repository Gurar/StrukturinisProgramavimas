#include <iostream>

using namespace std;

int main() {
	
	bool isRuning = true;

	while (isRuning) {
		int options;

		cout 
			<< "Pasirinkite operacija \n"
			<< "1 - valiutos kurso palyginimas \n"
			<< "2 - pirkti valiuta \n"
			<< "3 - parduoti valiuta \n"
			<< "0 - baigti darba" << endl;

		cin >> options;

		switch (options) {
		case 1:
			cout << "liginti" << endl;
			break;
		case 2:
			cout << "pirtkti" << endl;
			break;
		case 3:
			cout << "parduoti" << endl;
			break;
		case 4:
			cout << "Bagti darba" << endl;
			isRuning = false;
			break;
		default:
			break;
		}
	}
}