#pragma once
#include<iostream>

using namespace std;
	// eljefe sera robot gigante
class jefe {
public:
	void velocidadq(float _velocidadq);
	void materialq(float _materialq);
protected:
	string Color = "rojo"; // color de robot gigante
	string Form = "robot grande";
	float tama�o = 5.2f;
private:
	float velocidad;
	int da�o; // solo cuando el jugador toca al jefe
	string material;
};