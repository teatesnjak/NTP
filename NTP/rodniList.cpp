
void rodniList(gradjanin g[], int brojacGradjana){
string broj;
cout << "Unesite Jedinstveni maticni broj: \n";
cin >> broj;
for (int i=0; i<brojacGradjana; i++){
if(g[i].jmbg==broj){
cout << "Prezime: "<< g[i].prezime << endl;
cout << "Ime: " << g[i].ime << endl;
cout << "Spol: "<< g[i].spol << endl;
cout << "Datum rodenja: "<< g[i].datum << endl;
cout << "Grad rodenja: "<< g[i].grad << endl;
cout << "Drzava rodenja: "<< g[i].drzava << endl;
cout << "Nacionalnost: "<< g[i].nacionalnost << endl;
cout << "Ime oca: "<< g[i].otac << endl;
cout << "Ime majke: "<< g[i].majka << endl;
cout << "Jedinstveni maticni broj: "<< g[i].jmbg << endl;
}        
else{cout << "Nemamo zabiljezen taj Jedinstveni maticni broj. \n ";}
}
}
