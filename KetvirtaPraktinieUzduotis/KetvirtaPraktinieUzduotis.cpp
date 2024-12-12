// KetvirtaPraktinieUzduotis.cpp : Defines the entry point for the application.
//

#include "KetvirtaPraktinieUzduotis.h"

using namespace std;

struct MenuListItemType {
	string name;
	float price;
};

struct OrderListItemType {
	int id;
	int quantity;
};

MenuListItemType menuList[8] = 
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

OrderListItemType orderList[8]{};

void showMenu() {
    int arrLenght = size(menuList);
    cout << "Restorano meniu" << endl;
    for (int i = 0; i < arrLenght; i++) {
        cout << left << i + 1 << " - " << setw(40) << menuList[i].name << right << fixed << setprecision(2) << menuList[i].price << "Eur" << endl;
    }
    cout << "0 - Iseiti is meniu" << endl;
}

void setOrder(int id, int quantity) {
    orderList[id - 1].id = id - 1;
    orderList[id - 1].quantity = quantity;
    cout << "uzsakimas sekmingai padaritas" << endl;
}

void executeMenu() {
    int select, kiekis;
    string actions;
    showMenu();
    while (true) {
        cout << endl;
        cout << "Pasirinkite patekala" << endl;
        cin >> select;

        if (select == 0)
            break;

        if (select > 8) {
            cout << "tokio patekalo niera" << endl;
        }

        cout << "yrasikite kieki" << endl;
        cin >> kiekis;

        if (kiekis > 9) {
            cout << "Perdidelis kiekis yrasitas" << endl;
            continue;
        }
        

        cout << "Patvirtinti uzsakima yrasikite taip/nia" << endl;
        cin >> actions;

        while (true) {
            if (actions == "taip") {
                setOrder(select, kiekis);
                break;
            }
            else if (actions == "nie") {
                break;
            }
            else {
                cout << "Tokios komandos niera" << endl;
                continue;
            }
        }

    }
}

void executeBill() {
    ofstream write;
    int
        orderListLength = size(orderList),
        width = 14;
    float sum = 0;
    write.open("result.txt");
    for (int i = 0; i < orderListLength; i++) {
        if (menuList[orderList[i].id].name.size() > width) {
            width = menuList[orderList[i].id].name.size();
        }
    }

    for (int i = 0; i < orderListLength; i++) {
        if (orderList[i].quantity > 0) {
            sum += menuList[orderList[i].id].price * orderList[i].quantity;
            write
                << left << orderList[i].quantity << " " << setw(width + 1) << menuList[orderList[i].id].name
                << right << fixed << setprecision(2)
                << menuList[orderList[i].id].price << "Eur" << endl;
            cout
                << left << orderList[i].quantity << " " << setw(width + 1) << menuList[orderList[i].id].name
                << right << fixed << setprecision(2)
                << menuList[orderList[i].id].price << "Eur" << endl;

        }

    }
    write << left << setw(width + 3) << "Mokesciai" << right << fixed << setprecision(2) << sum * 0.21 << "Eur" << endl;
    write << left << setw(width + 3) << "Galutinie suma" << right << fixed << setprecision(2) << round((sum + (sum * 0.21)) * 100.0 / 100.0)  << "$" << endl;

    cout << left << setw(width + 3) << "Mokesciai" << right << fixed << setprecision(2) << sum * 0.21 << "Eur" << endl;
    cout << left << setw(width + 3) << "Galutinie suma" << right << fixed << setprecision(2) << round((sum + (sum * 0.21)) * 100.0 / 100.0) << "$" << endl;
    write.close();
    cout << endl;
}


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
        cout << endl;

		if (command == 0)
			break;

		switch (command) {
		case 1:
            executeMenu();
			break;
		case 2:
            executeBill();
			break;
		}

	}
	return 0;
}
