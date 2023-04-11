#include "samochod.h"
#include<iostream>
void samochod:: dodaj()
{
	ilosc++;
}
void samochod:: usun()
{
	ilosc--;
}

samochod::samochod(int prd, int rocznik, int przyspieszenie, std::string nazwa, std::string model, std::string rodzaj)
	:prd(prd), rocznik(rocznik), przyspieszenie(przyspieszenie), nazwa(nazwa), model(model), rodzaj(rodzaj)
{
	dodaj();
	std::cout<<"liczba samochodow:"<<ilosc<<std::endl;
}
spalinowy::spalinowy(std::string typpaliwa) : typpaliwa(typpaliwa)
{}
spalinowy::spalinowy(int prd, int rocznik, int przyspieszenie, std::string nazwa, std::string model, std::string rodzaj,std::string typpaliwa):
	samochod(prd, rocznik,przyspieszenie,nazwa,model,rodzaj),typpaliwa(typpaliwa)
{}
void spalinowy::drukuj()
{
	samochod::drukuj();
	drukujpaliwo();
}
void spalinowy::drukujpaliwo()
{
	std::cout << "typ paliwa:" << typpaliwa << std::endl;
}
elektryczny::elektryczny(std::string energia) : energia(energia)
{}
elektryczny::elektryczny(int prd, int rocznik, int przyspieszenie, std::string nazwa, std::string model, std::string rodzaj, std::string energia) :
	samochod(prd, rocznik, przyspieszenie, nazwa, model, rodzaj), energia(energia)
{}
void elektryczny::drukuj()
{
	samochod::drukuj();
	drukujenergie();
}
void elektryczny::drukujenergie()
{
	std::cout << "energia:" << energia << std::endl;
}
hybryda::hybryda(std::string typpaliwa,std::string energia):
	spalinowy(typpaliwa),elektryczny(energia)
{}
hybryda::hybryda(std::string energia,std::string typpaliwa):
	hybryda(energia,typpaliwa)
{}
hybryda::hybryda(int prd, int rocznik, int przyspieszenie, std::string nazwa, std::string model, std::string rodzaj, std::string energia, std::string typpaliwa):
elektryczny( prd,  rocznik,  przyspieszenie,  nazwa,  model,  rodzaj, energia),
spalinowy( prd,  rocznik, przyspieszenie,  nazwa,  model,  rodzaj, typpaliwa)
{}
hybryda::hybryda(int prd, int rocznik, int przyspieszenie, std::string nazwa, std::string model, std::string rodzaj, std::string typpaliwa, std::string energia) :
	hybryda(prd, rocznik, przyspieszenie, nazwa, model, rodzaj, energia, typpaliwa)
{}
void hybryda::drukuj()
{
	spalinowy::drukuj();
	elektryczny::drukujenergie();

}


void samochod::przyspiesz(void)
{
	if (prd < 100)
	{
		if (wl == true)
		{
			int a = (100 - prd) / 2;
			prd = prd + rand() % a / 2 + 1;

		}
		else
		{
			std::cout << "wlacz samochod zeby przyspieszyc" << std::endl;
		}

	}
	else
	{
		std::cout << "osiagnales maksymalna predkosc samochodu" << std::endl;
	}
	 Biegnastepny(prd);
}
 void samochod::hamuj(void)
{
	if (prd > 0)
	{
		if (wl == true)
		{
			prd = prd - rand() % prd + 1;

		}

	}
	else
	{
		std::cout << "nie mozesz bardziej zwolnic bo twoja prednosc wynosi 0" << std::endl;
	}
	 Biegpoprzedni(prd);
}
void samochod::drukuj(void)
{
	std::cout << "predkosc:" << prd << std::endl;
	std::cout << "bieg:" << bieg << std::endl;
	std::cout << "rocznik:" << rocznik << std::endl;
	std::cout << "przyspieszenie:" << przyspieszenie << std::endl;
	std::cout << "model:" << model << std::endl;
	std::cout << "nazwa :" << nazwa << std::endl;
	std::cout << "rodzaj:" << rodzaj << std::endl;

}
void samochod::uruchom(void)
{
	if (wl == true)
	{
		std::cout << "samochod jest juz wlaczony" << std::endl;
	}
	else
	{
		wl = true;
		std::cout << "wlaczyles samochod" << std::endl;
	}
}
void samochod::wylacz(void)
{
	if (wl == true)
	{
		std::cout << "wylaczyles samochod" << std::endl;
		wl = false;
	}
	else
	{
		std::cout << "samochod jest juz wylaczony" << std::endl;
	}
}
int samochod::Biegnastepny(int prd)
{

	bieg = prd / 20 + 1;
	return bieg;
}
int samochod::Biegpoprzedni(int prd)
{
	bieg = prd / 20 + 1;
	return bieg;
}
