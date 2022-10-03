#pragma once
#include<iostream>

using namespace std;

class arma2 {
public:
	void velocidadbalaS(float _velocidadbalaS);
	void materialS(string _materialS);
protected:
	string color = "blanco";
	string form = "bala puntiaguda";
	float tamaño = 0.6f;
	int daño =2;
private:
	float velocidadbala;
	int barradeenergia;// numero de veces que se puede usar el arma2, es una barra recargable 
	string material;

};