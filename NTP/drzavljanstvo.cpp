
void drzavljanstvo(gradjanin g[], int brojacGradjana){
string broj;
cout << "Unesite Jedinstveni maticni broj: \n";
cin >> broj;
for (int i=0; i<brojacGradjana; i++){
if(g[i].jmbg==broj){
cout << "Prezime: "<< g[i].prezime << endl;
cout << "Ime: " << g[i].ime << endl;
cout << "Ime oca: "<< g[i].otac << endl;
cout << "Datum rodenja: "<< g[i].datum << endl;
cout << "Grad rodenja: "<< g[i].grad << endl;
}
else{cout << "Nemamo zabiljezen taj Jedinstveni maticni broj. \n ";}
}
}
