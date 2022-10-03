#pragma once
#include<iostream>

using namespace std;
class capsulaenergia {
public: 
	void  materialE(string _materialE);
protected:
	float recargar = 10;// energia para recargar la barra de energia de armas obtenidas
	float velocidadrecarga;
	string color = "Blue"; // color de la capsula de energia
	string forma = "esfera";
	float tiempoduracion; // el tiempo que dura en el campo
private:
	string material;
};