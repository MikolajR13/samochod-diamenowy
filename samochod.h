#pragma once
#include <string>
#include<iostream>
class samochod
{
public:
	int bieg;
	int prd;
	bool wl;
	int rocznik;
	int przyspieszenie;
	std::string nazwa;
	std::string model;
	std::string rodzaj;
	static int ilosc;
	samochod(void):prd(0), przyspieszenie(10), nazwa("audi"), model("a5"), rodzaj("osobowy"), wl(false), bieg(0), rocznik(1999){}
private:
	int Biegnastepny(int prd);
	int Biegpoprzedni(int prd);
public:
	void uruchom(void);
	void wylacz(void);
	void przyspiesz(void);
	void hamuj(void);
	void drukuj();
	static void dodaj();
	static void usun();
	samochod(int prd, int rocznik, int przyspieszenie, std::string nazwa, std::string model, std::string rodzaj);
};
class spalinowy:virtual samochod 
{
public:
	std::string typpaliwa;
public:
	spalinowy(std::string typpaliwa);
	spalinowy(int prd, int rocznik, int przyspieszenie, std::string nazwa, std::string model, std::string rodzaj,std::string typpaliwa);
	void drukuj();
		void drukujpaliwo();
};
class elektryczny :virtual samochod
{
public:
	std::string energia;
public:
	elektryczny(std::string energia);
	elektryczny(int prd, int rocznik, int przyspieszenie, std::string nazwa, std::string model, std::string rodzaj, std::string energia);
	void drukuj();
	void drukujenergie();
};
class hybryda :public elektryczny, public spalinowy
{
	public:
		hybryda(std::string typpaliwa, std::string energia);
		hybryda() :spalinowy
		hybryda(int prd, int rocznik, int przyspieszenie, std::string nazwa, std::string model, std::string rodzaj, std::string energia, std::string typpaliwa);
		void drukuj();
};




