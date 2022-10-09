#include <iostream>
#include "jugador.h"
#include "jefe.h"
#include"arma1.h"
#include"arma2.h"
#include"capsulavida.h"
#include"capsulaenergia.h"
#include"nivel.h"
using namespace std;
// videojuego: Megaman
int main() {
	jugador* player = new jugador();
	player->velocidadx(0.8f);

	jefe* metgigante = new jefe();
	metgigante->velocidadq(0.3f);

	arma1* armaprincipal = new arma1();
	armaprincipal->velocidadbalaX(1.0f);

	capsulavida* curacion = new capsulavida();
	curacion->materialA("capsula1");

	arma2* armaobtenida1 = new arma2();
	armaobtenida1->velocidadbalaS(0.4f);
	
	capsulaenergia* recarga = new capsulaenergia();
	recarga->materialE("capsula2");

	nivel* stage = new nivel();
	stage->colornivel("gris");
};

