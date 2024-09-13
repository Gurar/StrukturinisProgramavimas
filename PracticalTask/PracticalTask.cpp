
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
        << "Vietu skaicius: " << vietuSkaicius << "\n" << endl;

    // Trecia uzduotis

    string
        modelis = "Jeep",
        marke = "Grand Sheroke",
        spalva = "Juoda";
    int metai = 2010;
    float litrazas = 4.8;
    ;

    cout
        << "Automobilis " << modelis
        << " yra pagamintas " << metai
        << " jo motoro litraza yra " << litrazas
        << " Automobilis yra " << spalva << " spalvos "<< "\n" << endl;

    //Kietvirta Uzduotis

    int
        a = 13,
        b = 5;
    float c = 17.5;

    cout
        << a + b - c << "\n"
        << 15 / 2 - c << "\n"
        << a / static_cast<double>(b) + 2 * c << "\n"
        << 14 % 3 + 6.3 + b / a << "\n"
        << static_cast<int>(c) % 5 + a - b << "\n"
        << 13.5 / 2 + 4.0 * 3.5 + 18 << "\n" << endl;

    // Penkta Uzduotis
    int
        sk1 = 10,
        sk2 = 6,
        sk3 = 8,
        sk4 = 7,
        sk5 = 7;

    cout << "Vidurkis" <<  static_cast<float>(sk1 + sk2 + sk3 + sk4 + sk5) / 5 << endl;
}






