#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include "unos.cpp"
#include "ispis.cpp"
#include "rodniList.cpp"
#include "drzavljanstvo.cpp"
using namespace std;

int main(){
int odabir=0;
gradjanin g[100];
brojacGradjana=0;

do{
cout << endl;
cout << "1. Unos gradjana \n";
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

system("CLS");
} while(odabir!=0);

return 0;
}
