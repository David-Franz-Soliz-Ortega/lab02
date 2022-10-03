#pragma once
#include<iostream>

using namespace std;

class capsulavida {
public:
	void materialA(string _materialA);
protected:
	float curacion = 14;
	float velocidaddecura;// la velocidad que tarda en aumentar la salud
	string color = "naranja";
	string forma = "pildora";
	float tiempopermanencia; // el tiempo que permanece en el nivel antes de desaparecer
private: 
	string material;
};
