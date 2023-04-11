#include "wszystkie3.h"
#include<iostream>

void pojazd:: dodajauto()
{
	ilosc++;

}
void pojazd::usunauto()
{
	ilosc--;
}
void pojazd::wyswietl()
{
	std::cout << "predkosc:" << prd << std::endl;
	std::cout << "bieg:" << bieg << std::endl;
	std::cout << "rocznik:" << rocznik << std::endl;
	std::cout << "przyspieszenie:" << przyspieszenie << std::endl;
	std::cout << "model:" << model << std::endl;
	std::cout << "nazwa :" << nazwa << std::endl;
	std::cout << "rodzaj:" << rodzaj << std::endl;
}
void spalinowy::pokazpaliwo()
{
	std::cout << "paliwo:" << typpaliwa << std::endl;
}
void spalinowy::pokaz()
{
	pojazd::wyswietl();
	pokazpaliwo();
}