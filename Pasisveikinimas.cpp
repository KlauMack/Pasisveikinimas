#include <iostream>
#include <string>

const int N = 30;


void PirmaIrPaskutineEilutes(int a)
{
	std::cout << "*";
	for (int i = 0; i < a; i++)
	{
		std::cout << '*';
	}
	std::cout << "*" << std::endl;
}

void TarpuEilutes(int a)
{
	std::cout << "*";
	for (int i = 0; i < a; i++)
	{
		std::cout << ' ';
	}
	std::cout << "*" << std::endl;
}

void VidurineEilute(int a, std::string b)
{
	std::cout << "*";

	for (int i = 0; i < a; i++)
	{
		std::cout << ' ';
	}

	if (b.back() == 's')
	{
		std::cout << "Sveikas, " + b + "!";
	}
	else
	{
		std::cout << "Sveika, " + b + "!";
	}
	

	for (int i = 0; i < a; i++)
	{
		std::cout << ' ';
	}

	std::cout << "*" << std::endl;
}

int main()
{
	int EilutesIlgis, RemelioIlgis;
	std::string Vardas;

	std::cout << "Iveskite varda: ";  std::cin >> Vardas;
	std::cout << "Iveskite remelio ilgis: "; std::cin >> RemelioIlgis;

	if (Vardas.back() == 's')
	{
		EilutesIlgis = 10 + RemelioIlgis * 2 + Vardas.size();

	}
	else
	{
		EilutesIlgis = 9 + RemelioIlgis * 2 + Vardas.size();
	}
	
	std::cout << EilutesIlgis << std::endl;

	PirmaIrPaskutineEilutes (EilutesIlgis);
	for (int i = 0; i < RemelioIlgis; i++)
	{
		TarpuEilutes (EilutesIlgis);
	}
	VidurineEilute (RemelioIlgis, Vardas);
	for (int i = 0; i < RemelioIlgis; i++)
	{
		TarpuEilutes (EilutesIlgis);
	}
	PirmaIrPaskutineEilutes (EilutesIlgis);

	return 0;
}