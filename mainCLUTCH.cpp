#include <iostream>
using namespace std;
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include<stdlib.h>
#include<time.h>
#include "funcionesClutch.h"
#include <string>
#include <locale>

int main () {
setlocale(LC_ALL, "Spanish");

string nombreUno, nombreDos, maximoJugador,participanteGanador;
const int TAM=5;
char cartasJugadorUno[TAM]={0};
char cartasJugadorDos[TAM]= {0};
int turno=0;
int paloJugadorUno[TAM]={0};
int paloJugadorDos[TAM]={0};
int repartirCartas [5][4]={0};
char cartas [5]={10,'J','Q','K','A'};
int palos [4]={3,4,5,6};
char elijo;
int cont=0, tirarDado=0;
bool ganador=false, pasoTurnoUno=false, pasoTurnoDos=false,roboCartaUno=false,roboCartaDos=false;
char cartaBloqueadaDos[TAM]={0},cartaBloqueadaUno[TAM]={0};
int paloBloqueadoUno[TAM]={0}, paloBloqueadoDos[TAM]={0};
int gananciaNoRoboUno=0, gananciaNoRoboDos=0, puntosNoPasarTurnoUno=0,  puntosNoPasarTurnoDos=0, roboAccionTresUno=0;
int roboAccionTresDos=0, totalMalUbicadas=0, puntosGanarPartida=0;

indice(participanteGanador,ganador,  maximoJugador,gananciaNoRoboUno, gananciaNoRoboDos, puntosNoPasarTurnoUno,  puntosNoPasarTurnoDos, roboAccionTresUno, roboAccionTresDos, totalMalUbicadas, puntosGanarPartida,nombreUno, nombreDos);
cout <<"Desea comenzar a jugar digite S o N"<<endl;
cin >> elijo ;
system ("cls");

while (toupper (elijo) !='S'){
indice(participanteGanador,ganador, maximoJugador, gananciaNoRoboUno, gananciaNoRoboDos, puntosNoPasarTurnoUno,  puntosNoPasarTurnoDos, roboAccionTresUno, roboAccionTresDos, totalMalUbicadas, puntosGanarPartida,nombreUno, nombreDos);
cout <<"Desea comenzar a jugar S o N"<<endl;
cin >> elijo ;
system ("cls");
}

repartir(nombreUno, nombreDos,cartasJugadorUno,cartasJugadorDos,TAM,paloJugadorUno,paloJugadorDos,repartirCartas,cartas,palos);

if ((cartasJugadorUno[0]==10 && cartasJugadorUno[1]=='J'&&cartasJugadorUno[2]=='Q'&&cartasJugadorUno[3]=='K'&&cartasJugadorUno[4]=='A')||(cartasJugadorDos[0]==10 && cartasJugadorDos[1]=='J'&& cartasJugadorDos[2]=='Q'&& cartasJugadorDos[3]=='K' && cartasJugadorDos[4]=='A')){
    repartir(nombreUno, nombreDos, cartasJugadorUno,cartasJugadorDos,TAM,paloJugadorUno,paloJugadorDos,repartirCartas,cartas,palos);
}

ronda(cartasJugadorUno, cartasJugadorDos, TAM,nombreUno, nombreDos,turno,maximoJugador);

while (ganador==false){

    cont++;
if(cont==1){
            turno++;
            cont=0;
        }

    if (cartasJugadorUno[0]==10 && cartasJugadorUno[1]=='J'&&cartasJugadorUno[2]=='Q'&&cartasJugadorUno[3]=='K'&&cartasJugadorUno[4]=='A'){
        ganador=true;
        participanteGanador= maximoJugador;
        //FUNCION QUE CALCULA LOS DATOS DEL GANADOR
        datosGanador (participanteGanador,gananciaNoRoboUno, gananciaNoRoboDos, puntosNoPasarTurnoUno, puntosNoPasarTurnoDos, roboAccionTresUno, roboAccionTresDos, totalMalUbicadas, puntosGanarPartida,maximoJugador,cartasJugadorUno,cartasJugadorDos,TAM,nombreUno,nombreDos,tirarDado,pasoTurnoUno,pasoTurnoDos,roboCartaUno,roboCartaDos);
indice(participanteGanador,ganador, maximoJugador, gananciaNoRoboUno, gananciaNoRoboDos, puntosNoPasarTurnoUno,  puntosNoPasarTurnoDos, roboAccionTresUno, roboAccionTresDos, totalMalUbicadas, puntosGanarPartida,nombreUno, nombreDos);

    }else if (cartasJugadorDos[0]==10 && cartasJugadorDos[1]=='J'&& cartasJugadorDos[2]=='Q'&& cartasJugadorDos[3]=='K' && cartasJugadorDos[4]=='A'){
        ganador=true;
        participanteGanador= maximoJugador;
    //FUNCION QUE CALCULA LOS DATOS DEL GANADOR
        datosGanador (participanteGanador,gananciaNoRoboUno, gananciaNoRoboDos, puntosNoPasarTurnoUno, puntosNoPasarTurnoDos, roboAccionTresUno, roboAccionTresDos, totalMalUbicadas, puntosGanarPartida,maximoJugador,cartasJugadorUno,cartasJugadorDos,TAM,nombreUno,nombreDos,tirarDado,pasoTurnoUno,pasoTurnoDos,roboCartaUno,roboCartaDos);
indice(participanteGanador,ganador, maximoJugador, gananciaNoRoboUno, gananciaNoRoboDos, puntosNoPasarTurnoUno,  puntosNoPasarTurnoDos, roboAccionTresUno, roboAccionTresDos, totalMalUbicadas, puntosGanarPartida,nombreUno, nombreDos);

    }else {
        comenzar(turno,nombreUno, nombreDos,maximoJugador,cartasJugadorUno, cartasJugadorDos, TAM,paloJugadorUno,paloJugadorDos);
        cout<<"Lanzamiento del dado....."<< endl;
        lanzarDado(roboCartaUno,roboCartaDos,pasoTurnoUno,pasoTurnoDos,tirarDado,cartasJugadorUno,cartasJugadorDos,TAM,paloJugadorUno, paloJugadorDos,nombreUno,  nombreDos, maximoJugador,repartirCartas,cartas,palos,turno,cont,cartaBloqueadaDos,cartaBloqueadaUno,paloBloqueadoUno, paloBloqueadoDos);
        mostrarPartida (  roboCartaUno, roboCartaDos, pasoTurnoUno, pasoTurnoDos, tirarDado,cont, turno, maximoJugador, nombreUno, nombreDos, cartasJugadorUno,  cartasJugadorDos, TAM, paloJugadorUno, paloJugadorDos, repartirCartas, cartas , palos,cartaBloqueadaDos, cartaBloqueadaUno, paloBloqueadoUno, paloBloqueadoDos  );
        ganador=false;

    }
}

system("pause>nul");
return 0;
}
