
void rodniList(gradjanin g[], int brojacGradjana){
string broj;
cout << "\tUnesite Jedinstveni maticni broj: ";
cin >> broj;
for (int i=0; i<brojacGradjana; i++){
if(g[i].jmbg==broj){
	
cout << "---------------------------------------------------\n";
cout << "\tPrezime: "<< g[i].prezime << endl;
cout << "\tIme: " << g[i].ime << endl;
cout << "\tSpol: "<< g[i].spol << endl;
cout << "\tDatum rodenja: "<< g[i].datum << endl;
cout << "\tGrad rodenja: "<< g[i].grad << endl;
cout << "\tDrzava rodenja: "<< g[i].drzava << endl;
cout << "\tNacionalnost: "<< g[i].nacionalnost << endl;
cout << "\tIme oca: "<< g[i].otac << endl;
cout << "\tIme majke: "<< g[i].majka << endl;
cout << "\tJedinstveni maticni broj: "<< g[i].jmbg << endl;
cout << "---------------------------------------------------\n";
}        
else{cout << "\tNemamo zabiljezen taj Jedinstveni maticni broj. \n ";}
}
}
