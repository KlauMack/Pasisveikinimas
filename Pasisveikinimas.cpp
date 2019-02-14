#include <iostream>
#include <string>

const int N = 30;

int main()
{
	int EilutesIlgis;
	std::string PrEilute, AnEilute, KtEilute, PnEilute, Vardas;
	char p[N] = { ' ' };

	std::cout << "Iveskite varda: ";  std::cin >> Vardas;
	EilutesIlgis = 14 + Vardas.size();

	for (int i = 0; i < EilutesIlgis; i++)
	{
		p[i] = '*';
	}
	PrEilute = p;
	PnEilute = p;

	for (int x = 1; x < EilutesIlgis - 1; x++)
	{
		p[x] = ' ';
	}

	AnEilute = p;
	KtEilute = p;

	std::cout << PrEilute << std::endl;
	std::cout << AnEilute << std::endl;

	if (Vardas.back() == 's')
	{
		std::cout << "* Sveikas, " << Vardas << "! *" << std::endl;
	}
	else
	{
		std::cout << "* Sveika, " << Vardas << "! *" << std::endl;
	}

	std::cout << KtEilute << std::endl;
	std::cout << PnEilute << std::endl;

	return 0;
}