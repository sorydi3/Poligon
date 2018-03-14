// Poligon.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include<iostream>
#include"Poligon.h"
using namespace std;

int main()
{
	// Entrada: un polígon triangle
	// Sortida: mostra el triangle, mostra un quadrat i el seu perímetre
		cout<<"entra el punt del triangle";
	Poligon pol; // un triangle
	Punt2D p;
	p.llegir();
	pol.afegirPunt(p);
	pol.mostra();
	// el mètode perimetre() no està implementat
	//cout << endl << "El perimetre es " << pol.perimetre() << endl;
	return 0;
}

