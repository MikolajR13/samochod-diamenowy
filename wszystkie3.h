#pragma once
#include "samochod.h"
class pojazd :public samochod
{
public:
	static int ilosc;
public:
	static void dodajauto();
	static void usunauto();
	void wyswietl();
};
class spalinowy : public virtual pojazd
{
	public:
	std::string typpaliwa;
public:
	spalinowy(std::string typpaliwa);
	void pokazpaliwo();
	void pokaz();
};
class elektryczny : public virtual pojazd
{
	
	std::string na³adowanie;


};
class hybrydowy : public spalinowy, public elektryczny
{

};

