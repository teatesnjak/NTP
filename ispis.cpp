int brojacGradjana;

void ispis(gradjanin g[], int brojacGradjana){
string broj;
bool pronadjen= false;
cout << "Unesite JMBG: \n";
cin >> broj;
for (int i=0; i<brojacGradjana; i++){
if (g[i].jmbg==broj){
pronadjen=true;
cout << "Prezime: "<< g[i].prezime<< endl;
cout << "Ime: " << g[i].ime << endl;
cout << "Spol: "<< g[i].spol << endl;
cout << "Datum rodenja: "<< g[i].datum << endl;
cout << "Drzava rodenja: "<< g[i].drzava << endl;
cout << "Grad rodenja: "<< g[i].grad << endl;
cout << "JMBG: "<< g[i].jmbg << endl;
cout << "Drzavljanstvo: "<< g[i].drzavljanstvo << endl;
cout << "Nacionalnost: "<< g[i].nacionalnost << endl;
cout << "Broj licne karte/pasosa: "<< g[i].broj << endl;
cout << "Ime oca: "<< g[i].otac << endl;
cout << "Ime majke: "<< g[i].majka << endl;
break;
}
}
if {!pronadjen}{cout << "Nemamo zabiljezen taj JMBG \n ";}
	
}
