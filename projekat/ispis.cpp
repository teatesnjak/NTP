int brojacGradjana;
void ispis(gradjanin g[], int brojacGradjana){
string broj;
cout << "\tUnesite Jedinstveni maticni broj: ";
cin >> broj;
for (int i=0; i<brojacGradjana; i++){
	 
	if(broj==g[i].jmbg){
cout << "---------------------------------------------------\n";
cout << "\tPrezime: "<< g[i].prezime<< endl;
cout << "\tIme: " << g[i].ime << endl;
cout << "\tSpol: "<< g[i].spol << endl;
cout << "\tDatum rodenja: "<< g[i].datum << endl;
cout << "\tDrzava rodenja: "<< g[i].drzava << endl;
cout << "\tGrad rodenja: "<< g[i].grad << endl;
cout << "\tJMBG: "<< g[i].jmbg << endl;
cout << "\tDrzavljanstvo: "<< g[i].drzavljanstvo << endl;
cout << "\tNacionalnost: "<< g[i].nacionalnost << endl;
cout << "\tBroj licne karte/pasosa: "<< g[i].broj << endl;
cout << "\tIme oca: "<< g[i].otac << endl;
cout << "\tIme majke: "<< g[i].majka << endl;
cout << "---------------------------------------------------\n";
}
else {cout << "\tNemamo zabiljezen taj Jedinstveni maticni broj. \n ";}

}

	}	

