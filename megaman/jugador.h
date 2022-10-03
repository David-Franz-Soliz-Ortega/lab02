#pragma once
#include<iostream>
using namespace std;
// el jugador sera megaman
class jugador
{
protected:
	string Color = "blue"; // color del jugador
	string forma = "robot con aspecto humano";//forma del jugador
	float tamaño;
private:
	float velocidad;
	string material;
	float velocidaddeslizar;
	int salud;
public:
	void velocidadx(float _velocidadx);
	void materialx(float _materialx);

};

