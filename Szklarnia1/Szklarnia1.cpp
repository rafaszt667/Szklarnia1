// Szklarnia1.cpp : Defines the entry point for the console application.
//

/**
		* \mainpage
		* \par Projekt:
		* System sterowania mikroklimatem szklarni.
		* \author Damian Sprawka
		* \author Rafa� Sztwietnia
		* \author Kamil Zyglewski
		
		* \date 2015.05.15
		* \version 1.1
		* \par Kontakt:
		* \a rafaszt667@gmail.com

*/

/**
	\file Szklarnia1.cpp
	\brief G��wny plik programu.


*/
#include "stdafx.h"

/**
	\brief Funkcja inicjuj�ca.

	Inicjalizacja port�w i czujnik�w.
	\return 0 - pomy�lna
	1 - b��d inicjalizacji.
*/
void init();

/**

	\brief Odczyt danych z czujnik�w.

	Funkcja odczytuje dane z czujnik�w: temperatury w st C, wilgotno�ci w % , CO2 w ppm, O2 w %. 

	\param &buf - bufor do kt�rego zapisywane s� odczytane dane. buf = {temeratura,wilgotno��, CO2,O2,czas odczytu}
	\param id - ID obszaru z kt�rego odczyta� dane.
	\return 0 - pomy�lny odczyt
	1 - b��d odczytu temperatury
	2 - b��d odczytu wilgotno�ci
	3 - b��d odczytu CO2
	4 - b��d odczytu O2

	\see zapis_do_bazy(int &buf, int id)
	\see wyswietl(int id)
*/
int odczyt_czujnikow(int &buf, int id);


/**
	\brief Zapis do bazy danych.

	Funkcja zapisuje dane do bazy danych na karcie SD.

	\param &buf bufor z kt�rego zapisywane s� dane do bazy. buf = {temeratura,wilgotno��, CO2,O2,czas odczytu}
	\param id - ID obszaru kt�rego zapisa� dane.
	\return 0 - pomyslnie zapisano
	1 - b��d zapisu.

	\see odczyt_danych_zbazy(int id)
	\see odczyt_czujnikow(int &buf, int id)
*/
int zapis_do_bazy(int &buf, int id);


/**
	\brief Zmiana has�a dost�pu do uprawnie� administratora
*/
void zmiana_hasla(void);


/**
	\brief Zmiana nastaw parametrow przez administratora.

	Funkcja s�uzy do zmiany nastaw po podaniu has�a administratora. 
	Has�o administratora mo�na zmieni�.
	\see zmiana_hasla()
*/
void zmiana_nastaw_parametrow(void);

/**
	\brief Generowanie raportu.

	Funkcja generuje raport z dowolnego przedzia�u czasowego nie wykraczaj�cego poza zakres bazy danych. Wymaga podania has�a administratora.

	\param data_poczatkowa - data poczatku generowanego raportu
	\param data_koncowa - data ko�ca rapotru

	\return 0 - pomy�lnie wygenerowano raport
	1 - b��d.
	\see zmiana_hasla()
*/
void raport(int data_poczatkowa, int data_koncowa);


/**
	\brief Odczytuje aktualne parametry z bazy.

	Odczytuje aktualne warto�ci parametr�w aby wy�wietli� je na wy�wietlaczu b�d� na stronie www.

	\param id - ID obszaru dla kt�rego wy�iwetli� parametry.

	\return 0 - pomy�lnie odczytano.
	1 - b��d odczytu.

	\see odczyt_czujnikow(int &buf, int id).
	\see zapis_do_bazy(int &buf, int id).
*/
void odczyt_danych_zbazy(int id);

/**
	\brief Wy�wietla aktualne dane na wy�wietlaczu.

	\param id - ID obszaru z kt�rego maj� by� wy�wietlone dane.
	
	\see odczyt_danych_zbazy(int id)
	\see raport(int data_poczatkowa, int data_koncowa)
*/
void wyswietl(int id);


/**
	\brief Funkcja do regulacji parametr�w.

	Por�wnuje nastawione parametry z odczytanymi i na podstawie tych danych przeprowadza regulacje nastawnik�w, aby utrzyma� zadane parametry.
	
	\see odczyt_czujnikow(int &buf, int id)
	\see odczyt_danych_zbazy(int id)
	\see zmiana_nastaw_parametrow(void)
*/
void regulacja(void);

/**
	\brief G�owna funkcja programu.
*/
int _tmain(int argc, _TCHAR* argv[])
{
	int buf[5];
	long long int i = 1;
	zapis_do_bazy(*buf, 0);
	odczyt_czujnikow(*buf, 1);
	regulacja();

	do
	{
		++i;
	}while(i < 3000000000);

	zapis_do_bazy(*buf, 0);
	return 0;
}

int zapis_do_bazy(int &buf, int id)
{
	long int i=1;

	do
	{
		++i;
	} while (i<1000000000);

		return 1;
}

int odczyt_czujnikow(int &buf, int id)
{
	unsigned long int i = 1;

	do
	{
		++i;
	} while (i<2000000000);

	regulacja();
	return 1;
}

void regulacja(void)
{

	long int i = 1;

	do
	{
		++i;
	} while (i< 500000000);

}
