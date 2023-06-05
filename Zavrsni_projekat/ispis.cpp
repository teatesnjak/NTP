// fajl sa funkcijom za odabir 2, ispis za informacija gradjanina

int brojacGradjana; // brojac koji pohranjuje gradjane

void ispis(gradjanin g[], int brojacGradjana)
{
	string broj; // privremena varijabla koja postaje jmbg gradjanina kasnije
	bool pronadjen = false; // koristimo bool da ne prolazi kroz citavu petlju odma nakon provjere prvog jmbg-a
	cout << "Unesite JMBG: \n";
	cin >> broj;
	for (int i = 0; i < brojacGradjana; i++) // mozemo vise gradjana unosit
	{
		if (g[i].jmbg == broj)
		{
			pronadjen = true;
			cout << "---------------------------------------------------\n";
			cout << "\tPrezime: " << g[i].prezime << endl;
			cout << "\tIme: " << g[i].ime << endl;
			cout << "\tSpol: " << g[i].spol << endl;
			cout << "\tDatum rodenja: " << g[i].datum << endl;
			cout << "\tDrzava rodenja: " << g[i].drzava << endl;
			cout << "\tGrad rodenja: " << g[i].grad << endl;
			cout << "\tJMBG: " << g[i].jmbg << endl;
			cout << "\tDrzavljanstvo: " << g[i].drzavljanstvo << endl;
			cout << "\tNacionalnost: " << g[i].nacionalnost << endl;
			cout << "\tBroj licne karte/pasosa: " << g[i].broj << endl;
			cout << "\tIme oca: " << g[i].otac << endl;
			cout << "\tIme majke: " << g[i].majka << endl;
			cout << "---------------------------------------------------\n";

			break;
		}
	}
	if (!pronadjen) //ako uopste ne postoji u nasoj bazi jmbg koji smo unijeli, tek onda prelazi na else
	{
		cout << "Nemamo zabiljezen taj JMBG \n ";
	}
}
