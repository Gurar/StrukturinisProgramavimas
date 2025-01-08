// PektaPraktineUzduotis.cpp : Defines the entry point for the application.
//

#include "PektaPraktineUzduotis.h"

using namespace std;

struct Vartotojas {
    int id;
    string vardas;
    string pavarde;
    string emailas;
    int telefonoNumeris;
};

void sukurtiLentele();

Vartotojas* idetiVartotoja(
    Vartotojas* vartotojai, 
    int& masyvoIlgis,
    string vardas,
    string pavarde,
    string emailas,
    int telefonoNumeris 
);

Vartotojas* istrintiVartotoja(Vartotojas* vartotojai, int& masyvoIlgis, int vartotojoId);

void atnaujintiVartotoja(Vartotojas* vartotojai, int& masyvoIlgis, int vartotojoId, string vardas, string pavarde, string emailas, int telefonoNumeris);


int main()
{
    Vartotojas* vartotojai = new Vartotojas[0];
    int masyvoIlgis = 0, command;
    while (true) {
        cout
            << "Sveiki pasirinkite uzduoti\n"
            << "1 - Lenteles \n"
            << "2 - Vartotoju duomenu knygele \n"
            << "0 - Baigti darba" << endl;
        cin >> command;

        if (command == 0)
            break;

        switch (command) {
        case 1:
            sukurtiLentele();
            break;
        case 2:
            while (true) {
                cout
                    << "Vartotoju duomenu knygele\n"
                    << "1 - Ideti vartotoja \n"
                    << "2 - Atnaujinti vartotojo duomenis \n"
                    << "3 - Istrinti vartotoja \n"
                    << "4 - Paroditi visus vartotojus \n"
                    << "0 - Baigti darba" << endl;
                cin >> command;

                if (command == 0)
                    break;

                switch (command) {
                case 1:
                    {
                        string vardas, pavarde, emailas;
                        int telefonoNumeris;
                        cout << "Iveslite varda pavarde emaila telefonoNumeri" << endl;
                        cin >> vardas >> pavarde >> emailas >> telefonoNumeris;
                        vartotojai = idetiVartotoja(vartotojai, masyvoIlgis, vardas, pavarde, emailas, telefonoNumeris);
                    }
                    break;
                case 2:
                    {
                        if (masyvoIlgis == 0) {
                            cout << "Vartotoju nera ir nera ka atnaujinti!" << endl;
                            break;
                        }
                        string vardas, pavarde, emailas;
                        int vartotojoId, telefonoNumeris;
                        cout << "Kad atnaujinti vartotoja yrasikite vartotojo id" << endl;
                        cin >> vartotojoId;
                        cout << "Iveslite varda pavarde emaila telefonoNumeri" << endl;
                        cin >> vardas >> pavarde >> emailas >> telefonoNumeris;
                        atnaujintiVartotoja(vartotojai, masyvoIlgis, vartotojoId, vardas, pavarde, emailas, telefonoNumeris);
                    }
                    break;
                case 3:
                    {   
                        if (masyvoIlgis == 0) {
                            cout << "Vartotoju nera ir nera ka trinti!" << endl;
                            break;
                        }
                        int vartotojoId;
                        cout << "Kad istrinti vartotoja is duomenu knygeles irasikite vartotojo id " << endl;
                        cin >> vartotojoId;
                        vartotojai = istrintiVartotoja(vartotojai, masyvoIlgis, vartotojoId);
                    }
                    break;
                case 4:
                    {
                        if (masyvoIlgis == 0) {
                            cout << "Vartotoju nera!" << endl;
                            break;
                        }
                        for (int i = 0; i < masyvoIlgis; i++) {
                            cout
                                << "Vartotojo Id: " << vartotojai[i].id << "\n"
                                << "Vardas: " << vartotojai[i].vardas << "\n"
                                << "Pavarde: " << vartotojai[i].pavarde << "\n"
                                << "El. pastas: " << vartotojai[i].emailas << "\n"
                                << "Tel. Nr.: " << vartotojai[i].telefonoNumeris << endl;
                            cout << endl;
                        }
                    }
                    break;
                }
            }
            break;
        }
    }

	return 0;
}

void sukurtiLentele() {
    using namespace std;

    int eilutes, stulpeliai;
    cout << "Iveskite eilutes didi" << endl;
    cin >> eilutes;
    cout << "Iveskite stulpelio didi" << endl;
    cin >> stulpeliai;
    int** lentele = new int* [eilutes];

    for (int i = 0; i < eilutes; i++) {
        lentele[i] = new int[stulpeliai];
    }

    for (int i = 0; i < eilutes; i++) {
        for (int j = 0; j < stulpeliai; j++) {

            lentele[i][j] = 1 + (rand() % 100);

            cout << setw(4) << lentele[i][j];
        }

        cout << endl;
    }



    for (int i = 0; i < eilutes; i++) {
        int eiluciuSuma = 0;
        for (int j = 0; j < stulpeliai; j++) {
            eiluciuSuma += lentele[i][j];
        }
        cout << "Eiluciu suma " << eiluciuSuma << endl;
    }

    cout << endl;

    for (int i = 0; i < stulpeliai; i++) {
        int stulpeliuSuma = 0;
        for (int j = 0; j < eilutes; j++) {
            stulpeliuSuma += lentele[j][i];
        }
        cout << "Stulpeliu suma " << stulpeliuSuma << endl;
    }

    int didziausiasSkaicius = lentele[0][0];
    for (int i = 0; i < eilutes; i++) {
        for (int j = 0; j < eilutes; j++) {
            if (lentele[i][j] > didziausiasSkaicius) {
                didziausiasSkaicius = lentele[i][j];
            }
        }
    }
}


Vartotojas* idetiVartotoja(
    Vartotojas* vartotojai,
    int& masyvoIlgis,
    string vardas,
    string pavarde,
    string emailas,
    int telefonoNumeris
){
    Vartotojas* naujasMasyvas = new Vartotojas[masyvoIlgis + 1];

    int id = masyvoIlgis + 1;

    for (int i = 0; i < masyvoIlgis; i++) {
        naujasMasyvas[i] = vartotojai[i];
    }

    naujasMasyvas[masyvoIlgis] = { id, vardas, pavarde, emailas, telefonoNumeris };

    masyvoIlgis++;

    delete[] vartotojai;

    return naujasMasyvas;
};

void atnaujintiVartotoja(Vartotojas* vartotojai, int& masyvoIlgis, int vartotojoId, string vardas, string pavarde, string emailas, int telefonoNumeris) {
    
    for (int i = 0; i < masyvoIlgis; i++) {
        if (vartotojai[i].id == vartotojoId) {
            vartotojai[i].vardas = vardas;
            vartotojai[i].pavarde = pavarde;
            vartotojai[i].emailas = emailas;
            vartotojai[i].telefonoNumeris = telefonoNumeris;
            break;
        }
    }
}

Vartotojas* istrintiVartotoja(Vartotojas* vartotojai, int& masyvoIlgis, int vartotojoId) {

    Vartotojas* naujasMasyvas = new Vartotojas[masyvoIlgis - 1];

    int naujasIndeksas = 0;
    for (int i = 0; i < masyvoIlgis; i++) {
        if (vartotojai[i].id != vartotojoId) {
            naujasMasyvas[naujasIndeksas++] = vartotojai[i];
        } 
    }

    masyvoIlgis--;


    delete[] vartotojai;

    return naujasMasyvas;
}
