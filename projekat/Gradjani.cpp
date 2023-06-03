#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include "unos.cpp" //pozivamo odvojeni unos.cpp fajl
#include "ispis.cpp" //pozivamo odvojeni ispis.cpp fajl
#include "rodniList.cpp" //pozivamo odvojeni rodniList.cpp fajl
#include "drzavljanstvo.cpp" //pozivamo odvojeni drzavljanstvo.cpp fajl
using namespace std;

int main(){
int odabir=0; //koristimo u do while petlji za odabir 1 od 4 opciju ponudjenih
gradjanin g[100]; //od struct gradnjanin
brojacGradjana=0; //pohranjuje broj gradjana iz unosa

do{
//nas meni, osnovni izgled stranice
cout << "---------------------------------------------------\n";
cout << "\t1. Unos gradjana \n";
cout << "\t2. Informacija o gradjanima \n";
cout << "\t3. Izvod iz maticne knjige rodjenih \n";
cout << "\t4. Uvjerenje o drzavljanstvu";
cout << "\n---------------------------------------------------\n";
cout << "\tOdaberite sta zelite: ";
cin >> odabir;

if (odabir==1){
    unos(g, brojacGradjana); //uzima podatke iz struct gradjanin i funkcije unos i omogucava unos podataka naseg gradjanina
    system("pause");}

if (odabir==2){
    ispis(g, brojacGradjana); //uzima podatke iz struct gradjanin i funkcije ispis te ispisuje sve o gradjaninu nakon unosa JMBG-a
    system("pause");}

if (odabir==3){
    rodniList (g, brojacGradjana); //uzima podatke iz struct gradjanin i funkcije rodniList te ispisuje trazene podatke o gradjaninu nakon unosa JMBG-a
    system("pause");}
    
if (odabir==4){
    drzavljanstvo (g, brojacGradjana); //uzima podatke iz struct gradjanin i funkcije drzavljanstvo te ispisuje trazene podatke o gradjaninu nakon unosa JMBG-a
    system("pause");}

system("CLS"); //obrise ekran od prethodnog odabira
} while(odabir!=0); 

return 0;
}
