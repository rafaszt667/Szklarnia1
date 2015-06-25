// Szklarnia1.cpp : Defines the entry point for the console application.
//

/**
		* \mainpage
		* \par Projekt:
		* System sterowania mikroklimatem szklarni.
		* \author Damian Sprawka
		* \author Rafa³ Sztwietnia
		* \author Kamil Zyglewski
		
		* \date 2015.05.15
		* \version 1.1
		* \par Kontakt:
		* \a rafaszt667@gmail.com

*/

/**
	\file Szklarnia1.cpp
	\brief G³ówny plik programu.


*/
#include "stdafx.h"

/**
	\brief Funkcja inicjuj¹ca.

	Inicjalizacja portów i czujników.
	\return 0 - pomyœlna
	1 - b³¹d inicjalizacji.
*/
void init();

/**

	\brief Odczyt danych z czujników.

	Funkcja odczytuje dane z czujników: temperatury w st C, wilgotnoœci w % , CO2 w ppm, O2 w %. 

	\param &buf - bufor do którego zapisywane s¹ odczytane dane. buf = {temeratura,wilgotnoœæ, CO2,O2,czas odczytu}
	\param id - ID obszaru z którego odczytaæ dane.
	\return 0 - pomyœlny odczyt
	1 - b³¹d odczytu temperatury
	2 - b³¹d odczytu wilgotnoœci
	3 - b³¹d odczytu CO2
	4 - b³¹d odczytu O2

	\see zapis_do_bazy(int &buf, int id)
	\see wyswietl(int id)
*/
int odczyt_czujnikow(int &buf, int id);


/**
	\brief Zapis do bazy danych.

	Funkcja zapisuje dane do bazy danych na karcie SD.

	\param &buf bufor z którego zapisywane s¹ dane do bazy. buf = {temeratura,wilgotnoœæ, CO2,O2,czas odczytu}
	\param id - ID obszaru którego zapisaæ dane.
	\return 0 - pomyslnie zapisano
	1 - b³¹d zapisu.

	\see odczyt_danych_zbazy(int id)
	\see odczyt_czujnikow(int &buf, int id)
*/
int zapis_do_bazy(int &buf, int id);


/**
	\brief Zmiana has³a dostêpu do uprawnieñ administratora
*/
void zmiana_hasla(void);


/**
	\brief Zmiana nastaw parametrow przez administratora.

	Funkcja s³uzy do zmiany nastaw po podaniu has³a administratora. 
	Has³o administratora mo¿na zmieniæ.
	\see zmiana_hasla()
*/
void zmiana_nastaw_parametrow(void);

/**
	\brief Generowanie raportu.

	Funkcja generuje raport z dowolnego przedzia³u czasowego nie wykraczaj¹cego poza zakres bazy danych. Wymaga podania has³a administratora.

	\param data_poczatkowa - data poczatku generowanego raportu
	\param data_koncowa - data koñca rapotru

	\return 0 - pomyœlnie wygenerowano raport
	1 - b³¹d.
	\see zmiana_hasla()
*/
void raport(int data_poczatkowa, int data_koncowa);


/**
	\brief Odczytuje aktualne parametry z bazy.

	Odczytuje aktualne wartoœci parametrów aby wyœwietliæ je na wyœwietlaczu b¹dŸ na stronie www.

	\param id - ID obszaru dla którego wyœiwetliæ parametry.

	\return 0 - pomyœlnie odczytano.
	1 - b³¹d odczytu.

	\see odczyt_czujnikow(int &buf, int id).
	\see zapis_do_bazy(int &buf, int id).
*/
void odczyt_danych_zbazy(int id);

/**
	\brief Wyœwietla aktualne dane na wyœwietlaczu.

	\param id - ID obszaru z którego maj¹ byæ wyœwietlone dane.
	
	\see odczyt_danych_zbazy(int id)
	\see raport(int data_poczatkowa, int data_koncowa)
*/
void wyswietl(int id);


/**
	\brief Funkcja do regulacji parametrów.

	Porównuje nastawione parametry z odczytanymi i na podstawie tych danych przeprowadza regulacje nastawników, aby utrzymaæ zadane parametry.
	
	\see odczyt_czujnikow(int &buf, int id)
	\see odczyt_danych_zbazy(int id)
	\see zmiana_nastaw_parametrow(void)
*/
void regulacja(void);

/**
	\brief G³owna funkcja programu.
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
