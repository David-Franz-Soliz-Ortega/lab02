#pragma once
#include <iostream>
using namespace std;

class nivel
{
protected:
	string forma = "rectangulo";
	float tamaño = 30.0f;
	string tipomaterial = "metal";
private:
	string color;
public:
	void colornivel(string colornivel);

};

