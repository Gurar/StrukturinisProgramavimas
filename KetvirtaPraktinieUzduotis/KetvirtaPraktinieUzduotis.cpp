// KetvirtaPraktinieUzduotis.cpp : Defines the entry point for the application.
//

#include "KetvirtaPraktinieUzduotis.h"

using namespace std;

struct MeniuListItemType {
	string name;
	float price;
};

struct OrderListItemType {
	int id;
	int cout;
};

MeniuListItemType MeniuList[8] = 
{
    {
        "Kiasiniene",
        1.45
    },
    {
        "Kiaulienos sonine su keptu kiausiniu",
        2.45
    },
    {
        "Kieksiukas su vysnia",
        0.99
    },
    {
        "Prancuziskas skrebutis",
        1.99
    },
    {
        "Vaisiu salotos",
        2.49
    },
    {
        "Pusryciu dribsniai",
        0.69
    },
    {
        "Kava",
        0.50
    },
    {
        "Arbata",
        0.75
    },
};

OrderListItemType OrderList[8]{};

int main()
{
	int command;
	while (true) {
		cout
			<< "Sveiki atvyke i restorana Manami \n"
			<< "1 - Meniu \n"
			<< "2 - Saskaita \n"
			<< "0 - Baigti darba" << endl;
		cin >> command;

		if (command == 0)
			break;

		switch (command) {
		case 1:
			cout << "Meniu" << endl;
			break;
		case 2:
			cout << "Saskaita" << endl;
			break;
		}

	}
	return 0;
}
