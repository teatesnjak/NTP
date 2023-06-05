
void drzavljanstvo(gradjanin g[], int brojacGradjana)
{
	string broj; // ovom varijablom povezacemo jmbg iz struct gradjanin sa odgovarajucim jmbg gradjanina
	cout << "\tUnesite Jedinstveni maticni broj: ";
	cin >> broj;
	bool pronadjen = false;
	for (int i = 0; i < brojacGradjana; i++)
	{
		if (g[i].jmbg == broj) // string broj postaje jmbg iz struct gradjanin
		{
			pronadjen = true;
			cout << "---------------------------------------------------\n";
			cout << "\tPrezime: " << g[i].prezime << endl;
			cout << "\tIme: " << g[i].ime << endl;
			cout << "\tIme oca: " << g[i].otac << endl;
			cout << "\tDatum rodenja: " << g[i].datum << endl;
			cout << "\tGrad rodenja: " << g[i].grad << endl;
			cout << "---------------------------------------------------\n";
		}
	} // ako ima jmbg, ispisuje sav info, ako nema, vrati na meni uz odgovarajucu poruku
	if (!pronadjen)
	{
		cout << "\tNemamo zabiljezen taj Jedinstveni maticni broj. \n ";
	}
}
