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

cout << "\tPrezime: ";
cin >> g[brojacGradjana].prezime;

cout << "\tIme: ";
cin >> g[brojacGradjana].ime;

cout << "\tSpol: ";
cin >> g[brojacGradjana].spol;

cout << "\tDatum rodjenja: ";
cin.ignore();
getline(cin, g[brojacGradjana].datum);

cout << "\tDrzava rodjenja: ";
getline(cin, g[brojacGradjana].drzava);

cout << "\tGrad rodjenja: ";
getline(cin, g[brojacGradjana].grad);

cout << "\tJMBG: ";
cin >> g[brojacGradjana].jmbg;

cout << "\tDrzavljanstvo: ";
cin >> g[brojacGradjana].drzavljanstvo;

cout << "\tNacionalnost: ";
cin >> g[brojacGradjana].nacionalnost;

cout << "\tBroj licne karte/pasosa: ";
cin >> g[brojacGradjana].broj;

cout << "\tIme oca: ";
cin >> g[brojacGradjana].otac;

cout << "\tIme majke: ";
cin >> g[brojacGradjana].majka;


ofstream outfile("licne-informacije.txt", ios::app);


outfile << "Prezime: "<< g[brojacGradjana].prezime 
		<< "\nIme: "<<g[brojacGradjana].ime
		<< "\nSpol: "<<g[brojacGradjana].spol
		<< "\nDatum: "<<g[brojacGradjana].datum
		<< "\nDrzava: "<<g[brojacGradjana].drzava
		<< "\nGrad: "<<g[brojacGradjana].grad
		<< "\nJMBG: "<<g[brojacGradjana].jmbg
		<< "\nDrzavljanstvo: "<<g[brojacGradjana].drzavljanstvo
		<< "\nBroj licne karte/pasosa: "<<g[brojacGradjana].broj
		<< "\nIme oca: "<<g[brojacGradjana].otac
		<< "\nIme majke: "<<g[brojacGradjana].majka <<endl<<endl;

outfile.close();

brojacGradjana++;
}
