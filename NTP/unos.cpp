#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;

struct gradjanin{
	string prezime;
	string ime;
	string spol ;
	string datum;
	string drzava;
	string grad;
	string jmbg;
	string drzavljanstvo;
	string nacionalnost;
	string broj;
	string otac;
	string majka;
};

void unos (gradjanin g[], int& brojacGradjana){

cout << "   Prezime: \n";
cin >> g[brojacGradjana].prezime;

cout << "   Ime: \n";
cin >> g[brojacGradjana].ime;

cout << "   Spol: \n";
cin >> g[brojacGradjana].spol;

cout << "   Datum rodjenja: \n";
cin.ignore();
getline(cin, g[brojacGradjana].datum);

cout << "   Drzava rodjenja: \n";
getline(cin, g[brojacGradjana].drzava);

cout << "   Grad rodjenja: \n";
getline(cin, g[brojacGradjana].grad);

cout << "   JMBG: \n";
cin >> g[brojacGradjana].jmbg;

cout << "   Drzavljanstvo: \n";
cin >> g[brojacGradjana].drzavljanstvo;

cout << "   Nacionalnost: \n";
cin >> g[brojacGradjana].nacionalnost;

cout << "   Broj licne karte/pasosa: \n";
cin >> g[brojacGradjana].broj;

cout << "   Ime oca: \n";
cin >> g[brojacGradjana].otac;

cout << "   Ime majke: \n";
cin >> g[brojacGradjana].majka;


ofstream outfile("licne-informacije.txt", ios::app);


outfile << g[brojacGradjana].prezime << ", " 
		<< g[brojacGradjana].ime <<", "
		<< g[brojacGradjana].spol << ", "
		<< g[brojacGradjana].datum << ", "
		<< g[brojacGradjana].drzava << ", "
		<< g[brojacGradjana].grad << ", "
		<< g[brojacGradjana].jmbg << ", "
		<< g[brojacGradjana].drzavljanstvo << ", "
		<< g[brojacGradjana].broj << ", " 
		<< g[brojacGradjana].otac << ", "
		<< g[brojacGradjana].majka << ", "<<endl;

outfile.close();

brojacGradjana++;
}
