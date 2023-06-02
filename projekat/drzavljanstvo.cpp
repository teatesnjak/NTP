
void drzavljanstvo(gradjanin g[], int brojacGradjana){
string broj;
cout << "\tUnesite Jedinstveni maticni broj: ";
cin >> broj;
for (int i=0; i<brojacGradjana; i++){
if(g[i].jmbg==broj){
	cout << "---------------------------------------------------\n";
	cout << "\tPrezime: "<< g[i].prezime << endl;
	cout << "\tIme: " << g[i].ime << endl;
	cout << "\tIme oca: "<< g[i].otac << endl;
	cout << "\tDatum rodenja: "<< g[i].datum << endl;
	cout << "\tGrad rodenja: "<< g[i].grad << endl;
	cout << "---------------------------------------------------\n";
}
else{cout << "\tNemamo zabiljezen taj Jedinstveni maticni broj. \n ";}
}
}
