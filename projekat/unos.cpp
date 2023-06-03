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
cin >> g[brojacGradjana].prezime; //unos prezimena gradjana

cout << "\tIme: ";
cin >> g[brojacGradjana].ime; //unos imena gradjana

cout << "\tSpol: ";
cin >> g[brojacGradjana].spol; //unos spola gradjana

cout << "\tDatum rodjenja: ";
cin.ignore();
getline(cin, g[brojacGradjana].datum); //unos datuma rodjenja gradjana

cout << "\tDrzava rodjenja: ";
getline(cin, g[brojacGradjana].drzava); //unos drzave rodjenja gradjana

cout << "\tGrad rodjenja: ";
getline(cin, g[brojacGradjana].grad); //unos grada rodjenja gradjana

cout << "\tJMBG: ";
cin >> g[brojacGradjana].jmbg; //unos jmbg gradjana

cout << "\tDrzavljanstvo: ";
cin >> g[brojacGradjana].drzavljanstvo; //unos drzavljanstva gradjana

cout << "\tNacionalnost: ";
cin >> g[brojacGradjana].nacionalnost; //unos nacionalnosti gradjana

cout << "\tBroj licne karte/pasosa: ";
cin >> g[brojacGradjana].broj; //unos licne karte/pasosa gradjana

cout << "\tIme oca: ";
cin >> g[brojacGradjana].otac; //unos imena oca gradjana

cout << "\tIme majke: ";
cin >> g[brojacGradjana].majka; //unos imena majke gradjana

//neki su getline zbog problema koji su nam se javljali kada smo razmake ili previse karaktera unosili

ofstream outfile("licne-informacije.txt", ios::app); //kreiranje .txt fajla


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
