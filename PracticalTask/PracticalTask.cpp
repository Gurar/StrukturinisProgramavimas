
#include <iostream>

#include <iostream>
#include <string>

using namespace std;


int main()
{
    // Pirma uzduotis 
    string
        vardas = "Jezy",
        pavarde = "Kozlovski",
        grupie = "Pirma",
        kursas = "Pirmas kursas",
        dalykoPavadinimas = "strukturins programavimas";

    int amzius = 34;

    cout <<
        "Vardas: " << vardas << "\n"
        "Pavarde: " << pavarde << "\n"
        "Amzius: " << amzius << "\n"
        "Grupie: " << grupie << "\n"
        "Kursas: " << kursas << "\n"
        "Studiu programos pavadinimas: " << dalykoPavadinimas << "\n" << endl;
   
    // Antras uzduotis

    string
        kluboPavadinimas = "Vilniaus Rytas",
        kluboSavininkas = "Jonas Jonaitis",
        stadionas = "Vilniaus stadionas";
    int
        ikurimoMetai = 1990,
        vietuSkaicius = 400;

    cout
        << "Klubo Pavadinimas: " << kluboPavadinimas << "\n"
        << "kluboSavininkas: " << kluboSavininkas << "\n"
        << "Stadionas: " << stadionas << "\n"
        << "Ikurimo metai: " << ikurimoMetai << "\n"
        << "Vietu skaicius: " << vietuSkaicius << endl;

    // Trecia uzduotis

    string
        modelis = "Jeep",
        marke = "Grand Sheroke",
        spalva = "Juoda";
    int metai = 2010;
    float litrazas = 4.8;
    ;

    cout
        << "\n" << "Automobilis " << modelis
        << " yra pagamintas " << metai
        << " jo motoro litraza yra " << litrazas
        << " Automobilis yra " << spalva << " spalvos " << endl;
}

