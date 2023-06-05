// fajl sa funkcijom za odabir 3, ispis za Izvod iz maticne knjige rodjenih

void rodniList(gradjanin g[], int brojacGradjana)
{
	string broj; // privremena varijabla koja postaje jmbg gradjanina kasnije
	cout << "\tUnesite Jedinstveni maticni broj: ";
	bool pronadjen = false;
	cin >> broj;
	for (int i = 0; i < brojacGradjana; i++)
	{
		if (g[i].jmbg == broj)
		{
			pronadjen = true;
			cout << "---------------------------------------------------\n";
			cout << "\tPrezime: " << g[i].prezime << endl;
			cout << "\tIme: " << g[i].ime << endl;
			cout << "\tSpol: " << g[i].spol << endl;
			cout << "\tDatum rodenja: " << g[i].datum << endl;
			cout << "\tGrad rodenja: " << g[i].grad << endl;
			cout << "\tDrzava rodenja: " << g[i].drzava << endl;
			cout << "\tNacionalnost: " << g[i].nacionalnost << endl;
			cout << "\tIme oca: " << g[i].otac << endl;
			cout << "\tIme majke: " << g[i].majka << endl;
			cout << "\tJedinstveni maticni broj: " << g[i].jmbg << endl;
			cout << "---------------------------------------------------\n";
		}
	}
	if (!pronadjen)
	{
		cout << "\tNemamo zabiljezen taj Jedinstveni maticni broj. \n ";
	} // ako vec postoji taj jmbg, ispisuje sve iz rodniList, a ako ne, uz odgovarajucu poruku vraca na pocetni meni
}
