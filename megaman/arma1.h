#pragma once
#include <iostream>
using namespace std;

class arma1 {
public:
	void velocidadbalaX(float _velocidadbalaX);
	void materialX(string _materialX);
protected:
	int daño = 3;
	float alcancededistancia = 6;
	string color = "yellow";
	string form = "bolita de energia";
	float tamaño = 0.3f;
private:
	float velocidadbala;
	string material;
};