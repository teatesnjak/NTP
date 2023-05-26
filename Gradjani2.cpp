#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

int brojacGradjana;

struct gradjanin{
	string prezime;
	string ime;
	string spol ;
	string datum;
	string drzava;
	string grad;
	string JMBG;
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

cout << "   Jedinstveni maticni broj: \n";
cin >> g[brojacGradjana].JMBG;

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

cout<<g[brojacGradjana].prezime;

outfile << g[brojacGradjana].prezime << ", "
		<< g[brojacGradjana].ime <<", "
		<< g[brojacGradjana].spol << ", "
		<< g[brojacGradjana].datum << ", "
		<< g[brojacGradjana].drzava << ", "
		<< g[brojacGradjana].grad << ", "
		<< g[brojacGradjana].JMBG << ", "
		<< g[brojacGradjana].drzavljanstvo << ", "
		<< g[brojacGradjana].broj << ", "
		<< g[brojacGradjana].otac << ", "
		<< g[brojacGradjana].majka << ", "<<endl;

outfile.close();

brojacGradjana++;
}


void ispis(gradjanin g[], int brojacGradjana){
string broj;
cout << "Unesite jedinstveni maticni broj: \n";
cin >> broj;
for (int i=0; i<brojacGradjana; i++){
if (g[i].JMBG==broj){
cout << "Prezime: "<< g[i].prezime<< endl;
cout << "Ime: " << g[i].ime << endl;
cout << "Spol: "<< g[i].spol << endl;
cout << "Datum rodenja: "<< g[i].datum << endl;
cout << "Drzava rodenja: "<< g[i].drzava << endl;
cout << "Grad rodenja: "<< g[i].grad << endl;
cout << "Jedinstveni maticni broj: "<< g[i].JMBG << endl;
cout << "Drzavljanstvo: "<< g[i].drzavljanstvo << endl;
cout << "Nacionalnost: "<< g[i].nacionalnost << endl;
cout << "Broj licne karte/pasosa: "<< g[i].broj << endl;
cout << "Ime oca: "<< g[i].otac << endl;
cout << "Ime majke: "<< g[i].majka << endl;

}
else{cout << "Nemamo zabiljezen taj Jedinstveni maticni broj \n ";}
}
}
void rodniList(gradjanin g[], int brojacGradjana){
string broj;
cout << "Unesite jedinstveni maticni broj: \n";
cin >> broj;
for (int i=0; i<brojacGradjana; i++){
if(g[i].JMBG==broj){
cout << "Prezime: "<< g[i].prezime << endl;
cout << "Ime: " << g[i].ime << endl;
cout << "Spol: "<< g[i].spol << endl;
cout << "Datum rodenja: "<< g[i].datum << endl;
cout << "Grad rodenja: "<< g[i].grad << endl;
cout << "Drzava rodenja: "<< g[i].drzava << endl;
cout << "Nacionalnost: "<< g[i].nacionalnost << endl;
cout << "Ime oca: "<< g[i].otac << endl;
cout << "Ime majke: "<< g[i].majka << endl;
cout << "Jedinstveni maticni broj: "<< g[i].JMBG << endl;
}        
else{cout << "Nemamo zabiljezen taj Jedinstveni maticni broj \n ";}
}
}
void drzavljanstvo(gradjanin g[], int brojacGradjana){
string broj;
cout << "Unesite jedinstveni maticni broj: \n";
cin >> broj;
for (int i=0; i<brojacGradjana; i++){
if(g[i].JMBG==broj){
cout << "Prezime: "<< g[i].prezime << endl;
cout << "Ime: " << g[i].ime << endl;
cout << "Ime oca: "<< g[i].otac << endl;
cout << "Datum rodenja: "<< g[i].datum << endl;
cout << "Grad rodenja: "<< g[i].grad << endl;
}
else{cout << "Nemamo zabiljezen taj Jedinstveni maticni broj \n ";}
}
}

int main(){
int odabir=0;
gradjanin g[100];
brojacGradjana=0;

do{
cout << endl;
cout << "1. Unos gradana \n";
cout << "2. Informacija o gradjanima \n";
cout << "3. Izvod iz maticne knjige rodjenih \n";
cout << "4. Uvjerenje o drzavljanstvu \n";

cout << "Odaberite sta zelite: ";
cout << endl;
cin >> odabir;

if (odabir==1){
unos(g, brojacGradjana);
system("pause");}

if (odabir==2){
ispis(g, brojacGradjana);
system("pause");}

if (odabir==3){
    rodniList (g, brojacGradjana);
    system("pause");}
    
if (odabir==4){
    drzavljanstvo (g, brojacGradjana);
    system("pause");}

} while(odabir!=0);

return 0;
}

