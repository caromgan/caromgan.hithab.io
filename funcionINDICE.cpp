
#include <iostream>
using namespace std;
#include <iomanip>
#include <ctime>
#include <stdlib.h>
#include <cstdio>
#include <stdio.h>
#include "funcionesClutch.h"
#include <string>
#include <locale>

void indice (int &opcion,char &confirma,string participanteGanador,bool ganador,string maximoJugador,int gananciaNoRoboUno,int gananciaNoRoboDos,int puntosNoPasarTurnoUno, int puntosNoPasarTurnoDos,int roboAccionTresUno,int roboAccionTresDos,int totalMalUbicadas,int puntosGanarPartida,string &nombreUno, string &nombreDos){
    setlocale(LC_ALL, "Spanish");
char nombreOk;
int elijo;
cout <<"--------------------------------------"<< endl;
cout<< "CLUTCH"<< endl;
cout<<"--------------------------------------"<< endl;
cout<< "1- JUGAR "<< endl;
cout<< "2- ESTADISTICAS "<< endl;
cout<< "3- CREDITOS "<< endl;
cout<<"--------------------------------------"<< endl;
cout<< "0- SALIR"<< endl;


cout<<endl<<endl;

if (ganador==true){
    opcion=2;
}else {
    cout<<"Seleccione una opcion  ";
    cin>> opcion;
    while (opcion !=1 && opcion !=2 && opcion !=3 && opcion !=0){
        cout<< "Seleccione una opcion correcta ";
        cin >> opcion;
}
}

if (opcion==0){
cout<<"--------------------------------------"<< endl;
cout<< "CLUTCH"<< endl;
cout<<"--------------------------------------"<< endl;
    cout<< "Confirma que desea salir del juego? S o N"<< endl;
    cin>> confirma;
    system ("cls");
}

float total=0;

if (opcion==1){
cout<<"--------------------------------------"<< endl;
cout<< "CLUTCH"<< endl;
cout<<"--------------------------------------"<< endl;
cout<< "Hola! para comenzar carguen sus nombres "<< endl;
cout<<endl<<endl;
getline (cin, nombreUno);
cout<< "Nombre jugador 1 ----> ";
getline(cin, nombreUno);
cout<<endl<<endl;
cout<< "Nombre jugador 2 ----> ";
getline (cin, nombreDos);
cout<<endl<<endl;
cout << "Confirma los nombres S/N"<< endl;
cin>> nombreOk;
while ( toupper(nombreOk)=='N'){
    cout<<endl<<endl;
    getline (cin, nombreUno);
    cout<< "Ingrese primer nombre correcto"<< endl;
    getline (cin, nombreUno);
    cout<< "Ingrese Segundo nombre correcto"<< endl;
    getline (cin, nombreDos);
    cout << "Confirma los nombres S/N"<< endl;
    cin>>nombreOk;
}
system ("cls");
}

if(opcion==2){
cout<<"--------------------------------------"<< endl;
cout<< "CLUTCH"<< endl;
cout<<"--------------------------------------"<< endl;
cout<< "HITOS                 "<<participanteGanador<< endl;
cout<<"--------------------------------------"<< endl;
if (participanteGanador==nombreUno){
cout<< "Ganar la Partida ____________________+"<< puntosGanarPartida  <<"PDV"<<endl;
cout<< "Robo a ultima carta jugador rival____+"<< roboAccionTresUno <<"PDV"<<endl;
cout<< "Cartas mal ubicadas del rival x 4____+"<< totalMalUbicadas    <<"PDV"<<endl;
cout<< "Sin pasar de turno___________________+"<<puntosNoPasarTurnoUno<<"PDV"<<endl;
cout<< "Sin haber sufrido un robo del rival__+"<<gananciaNoRoboUno    <<"PDV"<<endl;
cout<<"---------------------------------------"<< endl;
total=(float)puntosGanarPartida+roboAccionTresUno+totalMalUbicadas+puntosNoPasarTurnoUno+gananciaNoRoboUno;
cout<< endl<< endl;
cout<< "TOTAL________________________________"<< total<<"PDV"<<endl;
cout<< endl<< endl;
cout<< "GANADOR: "<<participanteGanador<<" CON "<< total <<" PUNTOS DE VICTORIA "<< endl;
cout<< endl<< endl;


} else if (participanteGanador==nombreDos){
cout<< "Ganar la Partida ____________________+"<< puntosGanarPartida  << "PDV"<< endl;
cout<< "Robo a ultima carta jugador rival____+"<< roboAccionTresDos << "PDV"<< endl;
cout<< "Cartas mal ubicadas del rival x 4____+"<< totalMalUbicadas    << "PDV"<<endl;
cout<< "Sin pasar de turno___________________+"<<puntosNoPasarTurnoDos<< "PDV"<<endl;
cout<< "Sin haber sufrido un robo del rival__+"<<gananciaNoRoboDos    << "PDV"<< endl;
cout<<"---------------------------------------"<< endl;
total=(float)puntosGanarPartida+roboAccionTresDos+totalMalUbicadas+puntosNoPasarTurnoDos+gananciaNoRoboDos;
cout<< "TOTAL________________________________"<<total <<"PDV"<<endl;
cout<< endl<< endl;
cout<< "GANADOR: "<<participanteGanador<<" CON "<< total <<" PUNTOS DE VICTORIA "<< endl;
cout<< endl<< endl;


}
cout<< "Presione 0 para continuar... "<< endl;
    cin >> elijo ;
    system ("cls");
    //while (elijo !=0){
      //  cout<< "Presione 0 para continuar... "<< endl;
        //cin >> elijo;
        //system ("cls");
    //}
    //while (elijo==0){
    //indice(confirma,participanteGanador,ganador, maximoJugador, gananciaNoRoboUno, gananciaNoRoboDos, puntosNoPasarTurnoUno,  puntosNoPasarTurnoDos, roboAccionTresUno, roboAccionTresDos, totalMalUbicadas, puntosGanarPartida,nombreUno, nombreDos);
//}

}


if(opcion==3){
cout<<"--------------------------------------"<< endl;
cout<< "CLUTCH"<< endl;
cout<<"--------------------------------------"<< endl;
cout<< "Juego inventado por Angel Simón. Inspirado en el juego de mesa Jardinero comercializado por Maldón. "<< endl;
cout<<endl<<endl;
cout<<"Desarrollado por CAROLINA MABEL GANDIN// legajo 18-28758"<< endl;
cout<<endl<<endl;
cout<<"Equipo: CODI-FIN"<< endl;
cout<<endl<<endl;

cout<< "Presione 0 para continuar... "<< endl;
    cin >> elijo ;
    system ("cls");
    while (elijo !=0){
        cout<< "Presione 0 para continuar... "<< endl;
        cin >> elijo;
        system ("cls");
    }
    //while (elijo==0){
    //indice(confirma,participanteGanador,ganador, maximoJugador, gananciaNoRoboUno, gananciaNoRoboDos, puntosNoPasarTurnoUno,  puntosNoPasarTurnoDos, roboAccionTresUno, roboAccionTresDos, totalMalUbicadas, puntosGanarPartida,nombreUno, nombreDos);
    //}

    }

}

void repartir (string uno, string dos, char cartasJugadorUno[],char cartasJugadorDos[],int TAM,int paloJugadorUno[],int paloJugadorDos[],int repartirCartas [][4],char cartas [],int palos []){
setlocale(LC_ALL, "Spanish");
int darUno=0;
int darDos=0;

int num,i,j,x,carga=1, contador=0;
srand(time(NULL));
cout<< "LAS CARTAS DE CADA UNO PARA INCIAR SON LAS SIGUIENTES "<< endl;

    for(i=0; i<5;i++){
        for (j=0; j<4;j++){
            repartirCartas[i][j]= carga++;
        }
    }
num = 1 + rand() % (21 - 1);
    for (x=0;x<2;x++){
        cout<< endl<< endl;
        if (x==0){
                cout << "Cartas jugador "<< uno << endl;
                cout<<"--------------------------------"<< endl;
                cout<< endl<< endl;
        } else if (x==1){
                cout << "Cartas jugador "<<dos << endl;
                cout<<"--------------------------------"<< endl;
                cout<< endl<< endl;
        }
        contador =0;

    while (contador<5){
    for (i=0; i<5;i++){
        for (j=0; j<4;j++){
          if (num==repartirCartas[i][j]){
            contador++;
            repartirCartas[i][j]=0;
            if (x==0){
                cartasJugadorUno[darUno]=cartas [i];
                paloJugadorUno [darUno]= palos [j];
                if (cartasJugadorUno[darUno] == 10){
                    cout<< "\t" <<(int)cartasJugadorUno[darUno]<<"\t" << (char)paloJugadorUno[darUno]<< endl;
                    darUno++;
                }
                else {
                cout<< "\t" <<cartasJugadorUno[darUno]<<"\t" << (char)paloJugadorUno[darUno]<< endl;
                darUno++;
                        }
            }else if (x==1){
                cartasJugadorDos[darDos]=cartas [i];
                paloJugadorDos [darDos]= palos [j];
                 if (cartasJugadorDos[darDos] == 10){
                    cout<< "\t" <<(int)cartasJugadorDos[darDos]<<"\t" << (char)paloJugadorDos[darDos]<< endl;
                    darDos++;
                }else {
                    cout<<"\t" << cartasJugadorDos[darDos]<<"\t" << (char)paloJugadorDos[darDos]<< endl;
                    darDos++;
                }
            }
        }
    }
}
    num = 1 + rand() % (21 - 1);
        }

    }

}

void ronda (char cartasJugadorUno[],char cartasJugadorDos[],int TAM, string uno, string dos,int turno,string &maximoJugador){
setlocale(LC_ALL, "Spanish");
    char arranque;
    int ContadorCartasJugadorUno[5]={0};
    int ContadorCartasJugadorDos[5]={0};
    for (int i =0; i < 5; i++){
    turno=1;
    if (turno==1){
    if(cartasJugadorUno[i]=='10'){
        ContadorCartasJugadorUno[4]+=1;
    }
    if( cartasJugadorUno[i]== 'J'){
        ContadorCartasJugadorUno[3]+=1;
        }
    if (cartasJugadorUno[i]=='Q'){
            ContadorCartasJugadorUno[2]+=1;
            }
    if ( cartasJugadorUno[i]=='K'){
            ContadorCartasJugadorUno[1]+=1;
            }
    if (cartasJugadorUno[i]=='A'){
        ContadorCartasJugadorUno[0]+=1;
                    }
   if(cartasJugadorDos[i]=='10'){
        ContadorCartasJugadorDos[4]+=1;
    }
    if( cartasJugadorDos[i]== 'J'){
        ContadorCartasJugadorDos[3]+=1;
        }
    if (cartasJugadorDos[i]=='Q'){
            ContadorCartasJugadorDos[2]+=1;
            }
    if ( cartasJugadorDos[i]=='K'){
            ContadorCartasJugadorDos[1]+=1;
            }
    if (cartasJugadorDos[i]=='A'){
            ContadorCartasJugadorDos[0]+=1;
            }
    }
    }
    cout<< endl<<endl;

   if(ContadorCartasJugadorUno[0]>ContadorCartasJugadorDos[0]){
        maximoJugador= uno;

        }else{ if((ContadorCartasJugadorUno[0]== ContadorCartasJugadorDos[0])&&(ContadorCartasJugadorUno[1]>ContadorCartasJugadorDos[1])){
                maximoJugador= uno;

                }else { if ((ContadorCartasJugadorUno[1]== ContadorCartasJugadorDos[1])&&(ContadorCartasJugadorUno[2]>ContadorCartasJugadorDos[2])){
                        maximoJugador= uno;
                    }else {if ((ContadorCartasJugadorUno[2]== ContadorCartasJugadorDos[2])&&(ContadorCartasJugadorUno[3]>ContadorCartasJugadorDos[3])){
                        maximoJugador= uno;
                        }else{ if ((ContadorCartasJugadorUno[3]== ContadorCartasJugadorDos[3])&&(ContadorCartasJugadorUno[4]>ContadorCartasJugadorDos[4])){
                                maximoJugador= uno;
                            }else {maximoJugador= dos;}
                        }
                    }
                }
        }


    cout<<"Inicia el juego el jugador "<< maximoJugador << endl;

    cout<<"ARRANCAMOS ?? presione cualquier letra..."<< endl;
    cin >> arranque;
    system ("cls");

  }

void comenzar (int turno,string uno, string dos,string maximoJugador,char cartasJugadorUno[], char cartasJugadorDos[], int TAM,int paloJugadorUno[],int paloJugadorDos[]){

setlocale(LC_ALL, "Spanish");
cout<<"--------------------------------------"<< endl;
cout<< "CLUTCH"<< endl;
cout<<"--------------------------------------"<< endl;
cout<< "RONDA # "<< turno<< endl;
cout<< uno <<" VS " << dos << endl;
cout<<endl;
cout<< "TURNO DE ---->"<< maximoJugador<< endl;
cout<<"+-----------------------------------+"<< endl;
cout<<"|                                   |"<< endl;
cout<<"|"<<uno                << endl;


for (int i=0; i<5; i ++){
         if (cartasJugadorUno[i] == 10){
cout<<"|"<<"\t" <<(int)cartasJugadorUno[i]<<"\t" << (char)paloJugadorUno[i]<<"                   |"<< endl;
}else {
cout<<"|"<<"\t" << cartasJugadorUno[i]<<"\t" << (char)paloJugadorUno[i]<<"                   |"<< endl;
}
}
cout<<"|                                   |"<<endl;
cout<<"|                                   |"<< endl;
cout<<"|"<<dos                << endl;
for (int i=0; i<5; i ++){
         if (cartasJugadorDos[i] == 10){
cout<<"|"<<"\t" <<(int)cartasJugadorDos[i]<<"\t" << (char)paloJugadorDos[i] <<"                   |"<< endl;
}else {
cout<<"|"<<"\t" << cartasJugadorDos[i]<<"\t" << (char)paloJugadorDos[i]<<"                   |"<< endl;
}
}
cout<<"|                                   |"<< endl;
cout<<"+-----------------------------------+"<< endl;




  }

void lanzarDado(bool &roboCartaUno,bool &roboCartaDos, bool pasoTurnoUno,bool pasoTurnoDos,int tirarDado, char cartasJugadorUno[], char cartasJugadorDos[], int TAM,int paloJugadorUno[],int paloJugadorDos[],string nombreUno, string nombreDos,string maximoJugador,int repartirCartas [][4],char cartas [],int palos [],int turno, int cont,char cartaBloqueadaDos[],char cartaBloqueadaUno[],int paloBloqueadoUno[], int paloBloqueadoDos[]){
setlocale(LC_ALL, "Spanish");
int x,opcion=0, palo,numMazo=0,paloAux=0,i,j,paloBuscar=0,cartaBuscar=0,cartaGuardada=0, paloAuxUno=0,paloAuxDos=0;
int paloAuxUnoBis=0, paloAuxDosBis=0;
char cartaAuxDos,cartaAux,t,h,cartaAuxUno,cartaAuxDosBis,cartaAuxUnoBis;
int mazoModelo[5][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int paloModelo [4]={3,4,5,6};
char cartaModelo [5]={10,'J','Q','K','A'};
bool encontrado=false,eleccionOk=false,bloqueadaDos=false,bloqueadaUno=false;
char carta, eleccion;
const int CARTAdIEZ=10;
bool encontradaBloqueada=false;

srand (time (NULL));
tirarDado= 1+ rand ()% (7-1);
 cout << "El dado cayo en el numero ----> " <<  tirarDado<< endl;
switch (tirarDado){
    case 1:
        cout<<"Cambiar una carta de tu propio corral con el mazo"<< endl;
        cout<<"+---------+"<<endl;
        cout<<"|         |"<<endl;
        cout<<"|    0    |"<<endl;
        cout<<"|         |"<<endl;
        cout<<"+---------+"<<endl;
        cout<<"Elije una carta de tu propio corral"<< endl;
        cout<< endl;
        cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
        cin >> eleccion;
        cout<< endl;
        while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                    cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10?";
                    cin >> eleccion;
                }

        if (toupper (eleccion) == 'S'){
            cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
            cin>> palo;
            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
            }
            } else{
            cout<< "CARTA ELEGIDA ---> ";
            cin >> carta;
            cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
            cin>> palo;
            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
            }
        }
eleccionOk=0;
// RECORRO Las cartas SEGUN EL JUGADOR Y SACO LA CARGA ELEGIDA
            if(maximoJugador== nombreUno){
                    if (toupper (eleccion)=='S'){
                        for(x=0;x<5;x++){
                            if(cartasJugadorUno [x]==CARTAdIEZ){
                                if(palo==paloJugadorUno[x]){
                                    cartaAux=CARTAdIEZ;
                                    paloAux=paloJugadorUno[x];
                                    cartasJugadorUno [x]=0;
                                    paloJugadorUno[x]=0;
                                    eleccionOk=true;
                                }
                            }
                        }
                    }else if (toupper (eleccion)=='N'){
                            for(x=0;x<5;x++){
                                if(toupper (carta) ==cartasJugadorUno [x]){
                                    if(palo==paloJugadorUno[x]){
                                        cartaAux=cartasJugadorUno [x];
                                        paloAux=paloJugadorUno[x];
                                        cartasJugadorUno [x]=0;
                                        paloJugadorUno[x]=0;
                                        eleccionOk=true;
                                    }
                                }
                        }
                    }
            }
        if(maximoJugador== nombreDos){
             if (toupper (eleccion)=='S'){
                    for(x=0;x<5;x++){
                        if(  (int)cartasJugadorDos [x]== CARTAdIEZ){
                           if ( palo==paloJugadorDos[x]){
                                cartaAux=CARTAdIEZ;
                                paloAux=paloJugadorDos[x];
                                cartasJugadorDos [x]=0;
                                paloJugadorDos[x]=0;
                                eleccionOk=true;
                            }
                        }
                   }
            } else if (toupper (eleccion)=='N'){
                    for(x=0;x<5;x++){
                        if(toupper (carta) ==cartasJugadorDos [x]){
                            if(palo==paloJugadorDos[x]){
                                cartaAux=cartasJugadorDos [x];
                                paloAux=paloJugadorDos[x];
                                cartasJugadorDos [x]=0;
                                paloJugadorDos[x]=0;
                                eleccionOk=true;
                            }
                        }
                    }
                }
            }

        while (eleccionOk==0){
                cout<<"ERROR!!! LA CARTA NO PERTENECE A TU CORRAL, Selecciona otra por favor"<< endl;
                cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
                cin >> eleccion;
                while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                    cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10? ";
                    cin >> eleccion;
                }
            if (toupper (eleccion) == 'S'){
                cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
                 while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                    cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                    cin>> palo;
                }
            } else{
                cout<< "CARTA ELEGIDA ---> ";
                cin >> carta;
                cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
                 while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                    cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                    cin>> palo;
            }
        }
    // RECORRO Las cartas SEGUN EL JUGADOR Y SACO LA CARGA ELEGIDA

            if(maximoJugador== nombreUno){
                    if (toupper (eleccion)=='S'){
                        for(x=0;x<5;x++){
                            if(cartasJugadorUno [x]==CARTAdIEZ){
                                if(palo==paloJugadorUno[x]){
                                    cartaAux=CARTAdIEZ;
                                    paloAux=paloJugadorUno[x];
                                    cartasJugadorUno [x]=0;
                                    paloJugadorUno[x]=0;
                                    eleccionOk=true;
                                }
                            }
                        }
                    }else if (toupper (eleccion)=='N'){
                            for(x=0;x<5;x++){
                                if(toupper (carta) ==cartasJugadorUno [x]){
                                    if(palo==paloJugadorUno[x]){
                                        cartaAux=cartasJugadorUno [x];
                                        paloAux=paloJugadorUno[x];
                                        cartasJugadorUno [x]=0;
                                        paloJugadorUno[x]=0;
                                        eleccionOk=true;
                                    }
                                }
                            }
                        }
                    }
        if(maximoJugador== nombreDos){
             if (toupper (eleccion)=='S'){
                    for(x=0;x<5;x++){
                        if(  (int)cartasJugadorDos [x]== CARTAdIEZ){
                           if ( palo==paloJugadorDos[x]){
                                cartaAux=CARTAdIEZ;
                                paloAux=paloJugadorDos[x];
                                cartasJugadorDos [x]=0;
                                paloJugadorDos[x]=0;
                                eleccionOk=true;
                            }
                        }
                   }
            } else if (toupper (eleccion)=='N'){
                    for(x=0;x<5;x++){
                        if(toupper (carta) ==cartasJugadorDos [x]){
                            if(palo==paloJugadorDos[x]){
                                cartaAux=cartasJugadorDos [x];
                                paloAux=paloJugadorDos[x];
                                cartasJugadorDos [x]=0;
                                paloJugadorDos[x]=0;
                                eleccionOk=true;
                            }
                        }
                    }
                }
        }
    }

// LA CARTA LA GUARDO EN EL MAZO PARA ELLO LA CONVIERTO EN DOS PARAMETROS T Y H.

                for (t=0; t<4; t++){
                        if(paloModelo[t]==paloAux){
                            paloBuscar=t;
                        }
                }
                if (cartaAux=='10'){
                    for   (h=0; h<5; h++){
                        if(cartaModelo[h]=='10'){
                            cartaBuscar=h;
                        }
                    }
                } else for   (h=0; h<5; h++){
                        if(cartaModelo[h]==cartaAux){
                            cartaBuscar=h;
                        }
                }
// GUARDO LA CARTA EN EL MAZO

            repartirCartas[cartaBuscar][paloBuscar]=mazoModelo[cartaBuscar][paloBuscar];
            cartaGuardada=mazoModelo[cartaBuscar][paloBuscar];

// TOMO UNA CARTA DEL MAZO
        while (encontrado==false){
            srand (time (NULL));
            numMazo = 1 + rand() % (21 - 1);
            while (numMazo==cartaGuardada){ // VALIDO QUE LA CARTA QUE GUARDE NO LA PUEDA ELEGIR
                srand (time (NULL));
                numMazo = 1 + rand() % (21 - 1);
            }
            for (int i=0; i<5;i++){
                for (int j=0; j<4;j++){
                    if (numMazo==repartirCartas[i][j]){
                        encontrado=true;
                        paloBuscar=j;
                        cartaBuscar=i;
                        repartirCartas[i][j]=0;
                    }
                }
            }
        }

// GUARDO LA CARTA DEL MAZO EN EL JUGADOR QUE CORRESPONDA.

            if(maximoJugador== nombreUno){
                    for (int i=0; i<5;i++){
                        if (cartasJugadorUno[i]==0){
                            cartasJugadorUno[i]=cartaModelo [cartaBuscar];
                        }
                    }
                    for (int i=0; i<5;i++) {
                        if (paloJugadorUno[i]==0){
                            paloJugadorUno [i]= paloModelo [paloBuscar];

                        }
                    }
               } else for (int i=0; i<5;i++){
                        if (cartasJugadorDos[i]==0){
                            cartasJugadorDos[i]=cartaModelo [cartaBuscar];
                            }
                        }
                        for (int i=0; i<5;i++) {
                            if (paloJugadorDos[i]==0){
                                paloJugadorDos [i]= paloModelo [paloBuscar];

                            }
                        }
encontrado=false;
system ("cls");

        break;
///// FIN PUNTO 1///////

    case 2:
        cout<<"Intercambiar una carta del jugador contrario con el mazo"<< endl;
        cout<<"+---------+"<<endl;
        cout<<"|    0    |"<<endl;
        cout<<"|         |"<<endl;
        cout<<"|    0    |"<<endl;
        cout<<"+---------+"<<endl;
        cout<<"Elije una carta del jugador contrario"<< endl;
        cout<< endl;
        cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
        cin >> eleccion;
        while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                    cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10?";
                    cin >> eleccion;
                }

        if (toupper (eleccion) == 'S'){
            cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
            cin>> palo;
            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
            }
            } else{
            cout<< "CARTA ELEGIDA ---> ";
            cin >> carta;
            cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
            cin>> palo;
            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
            }
        }


        //VALIDO QUE LA CARTA NO ESTE BLOQUEADA
encontradaBloqueada=false;
         if(maximoJugador== nombreUno){
                for(x=0;x<5;x++){
                    if (carta==cartaBloqueadaDos[x] && palo==paloBloqueadoDos[x] ){
                        encontradaBloqueada=true;
                    }
                }
         }
         if(maximoJugador== nombreDos){
               for(x=0;x<5;x++){
                    if (carta==cartaBloqueadaUno[x] && palo==paloBloqueadoUno[x] ){
                        encontradaBloqueada=true;
                    }
                  }
            }

                  while (encontradaBloqueada==true){
                        encontradaBloqueada=false;
                        cout<<"CARTA BLOQUEADA, debe seleccionar otra carta"<< endl;
                        cout<<"Elije una carta del jugador contrario"<< endl;
                        cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
                        cin >> eleccion;
                        while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                            cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10?";
                            cin >> eleccion;
                        }
                        if (toupper (eleccion) == 'S'){
                            cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                            cin>> palo;
                            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                                cin>> palo;
                            }
                        } else{
                            cout<< "CARTA ELEGIDA ---> ";
                            cin >> carta;
                            cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                            cin>> palo;
                            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                                cin>> palo;
                                }
                            }

                            if(maximoJugador== nombreUno){
                                for(x=0;x<5;x++){
                                    if (carta==cartaBloqueadaDos[x] && palo==paloBloqueadoDos[x] ){
                                        encontradaBloqueada=true;
                                    }
                                }
                            }
                            if(maximoJugador== nombreDos){
                                for(x=0;x<5;x++){
                                    if (carta==cartaBloqueadaUno[x] && palo==paloBloqueadoUno[x] ){
                                        encontradaBloqueada=true;
                                    }
                                }
                            }
                        }



// RECORRO Las cartas SEGUN EL JUGADOR Y SACO LA CARGA ELEGIDA

eleccionOk=0;
            if(maximoJugador== nombreUno){
                    if (toupper (eleccion)=='S'){
                        for(x=0;x<5;x++){
                            if(  (int)cartasJugadorDos [x]== CARTAdIEZ){
                                if ( palo==paloJugadorDos[x]){
                                    cartaAux=CARTAdIEZ;
                                    paloAux=paloJugadorDos[x];
                                    cartasJugadorDos [x]=0;
                                    paloJugadorDos[x]=0;
                                    eleccionOk=true;
                            }
                        }
                        }
                    }else if (toupper (eleccion)=='N'){
                            for(x=0;x<5;x++){
                                if(toupper (carta) ==cartasJugadorDos [x]){
                                    if(palo==paloJugadorDos[x]){
                                        cartaAux=cartasJugadorDos [x];
                                        paloAux=paloJugadorDos[x];
                                        cartasJugadorDos [x]=0;
                                        paloJugadorDos[x]=0;
                                        eleccionOk=true;
                                    }
                                }
                            }
                    }
            }
        if(maximoJugador== nombreDos){
             if (toupper (eleccion)=='S'){
                    for(x=0;x<5;x++){
                        if(cartasJugadorUno [x]==CARTAdIEZ){
                                if(palo==paloJugadorUno[x]){
                                    cartaAux=CARTAdIEZ;
                                    paloAux=paloJugadorUno[x];
                                    cartasJugadorUno [x]=0;
                                    paloJugadorUno[x]=0;
                                    eleccionOk=true;
                                }
                            }
                   }
            } else if (toupper (eleccion)=='N'){
                    for(x=0;x<5;x++){
                        if(toupper (carta) ==cartasJugadorUno [x]){
                            if(palo==paloJugadorUno[x]){
                                cartaAux=cartasJugadorUno [x];
                                paloAux=paloJugadorUno[x];
                                cartasJugadorUno [x]=0;
                                paloJugadorUno[x]=0;
                                eleccionOk=true;
                            }
                        }
                    }
                }
            }

        while (eleccionOk==0){
                cout<<"ERROR!!! LA CARTA NO PERTENECE AL CORRAL DEL JUGADOR CONTRARIO, Selecciona otra por favor"<< endl;
                cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
                cin >> eleccion;
                while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                    cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10? ";
                    cin >> eleccion;
                }
            if (toupper (eleccion) == 'S'){
                cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
                 while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                    cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                    cin>> palo;
                }
            } else{
                cout<< "CARTA ELEGIDA ---> ";
                cin >> carta;
                cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
                 while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                    cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                    cin>> palo;
            }
        }
    // RECORRO Las cartas SEGUN EL JUGADOR Y SACO LA CARGA ELEGIDA
     if(maximoJugador== nombreUno){
                    if (toupper (eleccion)=='S'){
                        for(x=0;x<5;x++){
                            if(  (int)cartasJugadorDos [x]== CARTAdIEZ){
                                if ( palo==paloJugadorDos[x]){
                                    cartaAux=CARTAdIEZ;
                                    paloAux=paloJugadorDos[x];
                                    cartasJugadorDos [x]=0;
                                    paloJugadorDos[x]=0;
                                    eleccionOk=true;
                            }
                        }
                        }
                    }else if (toupper (eleccion)=='N'){
                            for(x=0;x<5;x++){
                                if(toupper (carta) ==cartasJugadorDos [x]){
                                    if(palo==paloJugadorDos[x]){
                                        cartaAux=cartasJugadorDos [x];
                                        paloAux=paloJugadorDos[x];
                                        cartasJugadorDos [x]=0;
                                        paloJugadorDos[x]=0;
                                        eleccionOk=true;
                                    }
                                }
                            }
                    }
            }
        if(maximoJugador== nombreDos){
             if (toupper (eleccion)=='S'){
                    for(x=0;x<5;x++){
                        if(cartasJugadorUno [x]==CARTAdIEZ){
                                if(palo==paloJugadorUno[x]){
                                    cartaAux=CARTAdIEZ;
                                    paloAux=paloJugadorUno[x];
                                    cartasJugadorUno [x]=0;
                                    paloJugadorUno[x]=0;
                                    eleccionOk=true;
                                }
                            }
                   }
            } else if (toupper (eleccion)=='N'){
                    for(x=0;x<5;x++){
                        if(toupper (carta) ==cartasJugadorUno [x]){
                            if(palo==paloJugadorUno[x]){
                                cartaAux=cartasJugadorUno [x];
                                paloAux=paloJugadorUno[x];
                                cartasJugadorUno [x]=0;
                                paloJugadorUno[x]=0;
                                eleccionOk=true;
                            }
                        }
                    }
                }
            }
        }

       // LA CARTA LA GUARDO EN EL MAZO PARA ELLO LA CONVIERTO EN DOS PARAMETROS T Y H.

                for (t=0; t<4; t++){
                        if(paloModelo[t]==paloAux){
                            paloBuscar=t;
                        }
                }
                if (cartaAux=='10'){
                    for   (h=0; h<5; h++){
                        if(cartaModelo[h]=='10'){
                            cartaBuscar=h;
                        }
                    }
                } else for   (h=0; h<5; h++){
                        if(cartaModelo[h]==cartaAux){
                            cartaBuscar=h;
                        }
                }
// GUARDO LA CARTA EN EL MAZO

            repartirCartas[cartaBuscar][paloBuscar]=mazoModelo[cartaBuscar][paloBuscar];
            cartaGuardada=mazoModelo[cartaBuscar][paloBuscar];

// TOMO UNA CARTA DEL MAZO
        while (encontrado==false){
            srand (time (NULL));
            numMazo = 1 + rand() % (21 - 1);
            while (numMazo==cartaGuardada){ // VALIDO QUE LA CARTA QUE GUARDE NO LA PUEDA ELEGIR
                srand (time (NULL));
                numMazo = 1 + rand() % (21 - 1);
            }
            for (int i=0; i<5;i++){
                for (int j=0; j<4;j++){
                    if (numMazo==repartirCartas[i][j]){
                        encontrado=true;
                        paloBuscar=j;
                        cartaBuscar=i;
                        repartirCartas[i][j]=0;
                    }
                }
            }
        }

// GUARDO LA CARTA DEL MAZO EN EL JUGADOR QUE CORRESPONDA.

        if(maximoJugador== nombreUno){
                    for (int i=0; i<5;i++){
                        if (cartasJugadorDos[i]==0){
                            cartasJugadorDos[i]=cartaModelo [cartaBuscar];
                        }
                    }
                    for (int i=0; i<5;i++) {
                        if (paloJugadorDos[i]==0){
                            paloJugadorDos [i]= paloModelo [paloBuscar];

                        }
                    }
               } else for (int i=0; i<5;i++){
                        if (cartasJugadorUno[i]==0){
                            cartasJugadorUno[i]=cartaModelo [cartaBuscar];
                            }
                        }
                        for (int i=0; i<5;i++) {
                            if (paloJugadorUno[i]==0){
                                paloJugadorUno [i]= paloModelo [paloBuscar];

                            }
                        }
encontrado=false;
system ("cls");
       break;

///// FIN PUNTO 2///////
      case 3:

          //VALIDO PARA LOS PUNTOS FINALES SI LE ROBARON UNA CARTA POR EL JUGADOR CONTRARIO
          if(maximoJugador==nombreUno){
            roboCartaDos=true;
          }else{
          roboCartaUno=true;
          }


        cout<<"Intercambiar una carta de tu propio corral con una del jugador contrario"<< endl;
        cout<<"+---------+"<<endl;
        cout<<"| 0       |"<<endl;
        cout<<"|    0    |"<<endl;
        cout<<"|       0 |"<<endl;
        cout<<"+---------+"<<endl;
        cout<<"Elije una carta de tu propio corral"<< endl;
        cout<< endl;
        cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
        cin >> eleccion;
        cout<< endl;
        while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                    cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10?";
                    cin >> eleccion;
                }

        if (toupper (eleccion) == 'S'){
            cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
            cin>> palo;
            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
            }
            } else{
            cout<< "CARTA ELEGIDA ---> ";
            cin >> carta;
            cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
            cin>> palo;
            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
            }
        }
eleccionOk=0;
// RECORRO Las cartas SEGUN EL JUGADOR Y SACO LA CARGA ELEGIDA
            if(maximoJugador== nombreUno){
                    if (toupper (eleccion)=='S'){
                        for(x=0;x<5;x++){
                            if(cartasJugadorUno [x]==CARTAdIEZ){
                                if(palo==paloJugadorUno[x]){
                                    cartaAuxUno=CARTAdIEZ;
                                    paloAuxUno=paloJugadorUno[x];
                                    cartasJugadorUno [x]=0;
                                    paloJugadorUno[x]=0;
                                    eleccionOk=true;
                                }
                            }
                        }
                    }else if (toupper (eleccion)=='N'){
                            for(x=0;x<5;x++){
                                if(toupper (carta) ==cartasJugadorUno [x]){
                                    if(palo==paloJugadorUno[x]){
                                        cartaAuxUno=cartasJugadorUno [x];
                                        paloAuxUno=paloJugadorUno[x];
                                        cartasJugadorUno [x]=0;
                                        paloJugadorUno[x]=0;
                                        eleccionOk=true;
                                    }
                                }
                        }
                    }
            }
        if(maximoJugador== nombreDos){
             if (toupper (eleccion)=='S'){
                    for(x=0;x<5;x++){
                        if(  (int)cartasJugadorDos [x]== CARTAdIEZ){
                           if ( palo==paloJugadorDos[x]){
                                cartaAuxDos=CARTAdIEZ;
                                paloAuxDos=paloJugadorDos[x];
                                cartasJugadorDos [x]=0;
                                paloJugadorDos[x]=0;
                                eleccionOk=true;
                            }
                        }
                   }
            } else if (toupper (eleccion)=='N'){
                    for(x=0;x<5;x++){
                        if(toupper (carta) ==cartasJugadorDos [x]){
                            if(palo==paloJugadorDos[x]){
                                cartaAuxDos=cartasJugadorDos [x];
                                paloAuxDos=paloJugadorDos[x];
                                cartasJugadorDos [x]=0;
                                paloJugadorDos[x]=0;
                                eleccionOk=true;
                            }
                        }
                    }
                }
            }

        while (eleccionOk==0){
                cout<<"ERROR!!! LA CARTA NO PERTENECE A TU CORRAL, Selecciona otra por favor"<< endl;
                cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
                cin >> eleccion;
                while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                    cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10? ";
                    cin >> eleccion;
                }
            if (toupper (eleccion) == 'S'){
                cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
                 while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                    cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                    cin>> palo;
                }
            } else{
                cout<< "CARTA ELEGIDA ---> ";
                cin >> carta;
                cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
                 while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                    cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                    cin>> palo;
            }
        }
    // RECORRO Las cartas SEGUN EL JUGADOR Y SACO LA CARGA ELEGIDA

            if(maximoJugador== nombreUno){
                    if (toupper (eleccion)=='S'){
                        for(x=0;x<5;x++){
                            if(cartasJugadorUno [x]==CARTAdIEZ){
                                if(palo==paloJugadorUno[x]){
                                    cartaAuxUno=CARTAdIEZ;
                                    paloAuxUno=paloJugadorUno[x];
                                    cartasJugadorUno [x]=0;
                                    paloJugadorUno[x]=0;
                                    eleccionOk=true;
                                }
                            }
                        }
                    }else if (toupper (eleccion)=='N'){
                            for(x=0;x<5;x++){
                                if(toupper (carta) ==cartasJugadorUno [x]){
                                    if(palo==paloJugadorUno[x]){
                                        cartaAuxUno=cartasJugadorUno [x];
                                        paloAuxUno=paloJugadorUno[x];
                                        cartasJugadorUno [x]=0;
                                        paloJugadorUno[x]=0;
                                        eleccionOk=true;
                                    }
                                }
                            }
                        }
                    }
        if(maximoJugador== nombreDos){
             if (toupper (eleccion)=='S'){
                    for(x=0;x<5;x++){
                        if(  (int)cartasJugadorDos [x]== CARTAdIEZ){
                           if ( palo==paloJugadorDos[x]){
                                cartaAuxDos=CARTAdIEZ;
                                paloAuxDos=paloJugadorDos[x];
                                cartasJugadorDos [x]=0;
                                paloJugadorDos[x]=0;
                                eleccionOk=true;
                            }
                        }
                   }
            } else if (toupper (eleccion)=='N'){
                    for(x=0;x<5;x++){
                        if(toupper (carta) ==cartasJugadorDos [x]){
                            if(palo==paloJugadorDos[x]){
                                cartaAuxDos=cartasJugadorDos [x];
                                paloAuxDos=paloJugadorDos[x];
                                cartasJugadorDos [x]=0;
                                paloJugadorDos[x]=0;
                                eleccionOk=true;
                            }
                        }
                    }
                }
        }
    }
cout<< endl;
cout<<"Elije una carta del jugador contrario"<< endl;
cout<< endl;
        cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
        cin >> eleccion;
        while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                    cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10?";
                    cin >> eleccion;
                }

        if (toupper (eleccion) == 'S'){
            cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
            cin>> palo;
            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
            }
            } else{
            cout<< "CARTA ELEGIDA ---> ";
            cin >> carta;
            cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
            cin>> palo;
            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
            }
        }


 //VALIDO QUE LA CARTA NO ESTE BLOQUEADA
encontradaBloqueada=false;
         if(maximoJugador== nombreUno){
                for(x=0;x<5;x++){
                    if (carta==cartaBloqueadaDos[x] && palo==paloBloqueadoDos[x] ){
                        encontradaBloqueada=true;
                    }
                }
         }
         if(maximoJugador== nombreDos){
               for(x=0;x<5;x++){
                    if (carta==cartaBloqueadaUno[x] && palo==paloBloqueadoUno[x] ){
                        encontradaBloqueada=true;
                    }
                  }
            }

                  while (encontradaBloqueada==true){
                        encontradaBloqueada=false;
                        cout<<"CARTA BLOQUEADA, debe seleccionar otra carta"<< endl;
                        cout<<"Elije una carta del jugador contrario"<< endl;
                        cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
                        cin >> eleccion;
                        while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                            cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10?";
                            cin >> eleccion;
                        }
                        if (toupper (eleccion) == 'S'){
                            cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                            cin>> palo;
                            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                                cin>> palo;
                            }
                        } else{
                            cout<< "CARTA ELEGIDA ---> ";
                            cin >> carta;
                            cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                            cin>> palo;
                            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                                cin>> palo;
                                }
                            }

                            if(maximoJugador== nombreUno){
                                for(x=0;x<5;x++){
                                    if (carta==cartaBloqueadaDos[x] && palo==paloBloqueadoDos[x] ){
                                        encontradaBloqueada=true;
                                    }
                                }
                            }
                            if(maximoJugador== nombreDos){
                                for(x=0;x<5;x++){
                                    if (carta==cartaBloqueadaUno[x] && palo==paloBloqueadoUno[x] ){
                                        encontradaBloqueada=true;
                                    }
                                }
                            }
                        }





// RECORRO Las cartas SEGUN EL JUGADOR Y SACO LA CARGA ELEGIDA

eleccionOk=0;
            if(maximoJugador== nombreUno){
                    if (toupper (eleccion)=='S'){
                        for(x=0;x<5;x++){
                            if(  (int)cartasJugadorDos [x]== CARTAdIEZ){
                                if ( palo==paloJugadorDos[x]){
                                    cartaAuxDos=CARTAdIEZ;
                                    paloAuxDos=paloJugadorDos[x];
                                    cartasJugadorDos [x]=0;
                                    paloJugadorDos[x]=0;
                                    eleccionOk=true;
                            }
                        }
                        }
                    }else if (toupper (eleccion)=='N'){
                            for(x=0;x<5;x++){
                                if(toupper (carta) ==cartasJugadorDos [x]){
                                    if(palo==paloJugadorDos[x]){
                                        cartaAuxDos=cartasJugadorDos [x];
                                        paloAuxDos=paloJugadorDos[x];
                                        cartasJugadorDos [x]=0;
                                        paloJugadorDos[x]=0;
                                        eleccionOk=true;
                                    }
                                }
                            }
                    }
            }
        if(maximoJugador== nombreDos){
             if (toupper (eleccion)=='S'){
                    for(x=0;x<5;x++){
                        if(cartasJugadorUno [x]==CARTAdIEZ){
                                if(palo==paloJugadorUno[x]){
                                    cartaAuxUno=CARTAdIEZ;
                                    paloAuxUno=paloJugadorUno[x];
                                    cartasJugadorUno [x]=0;
                                    paloJugadorUno[x]=0;
                                    eleccionOk=true;
                                }
                            }
                   }
            } else if (toupper (eleccion)=='N'){
                    for(x=0;x<5;x++){
                        if(toupper (carta) ==cartasJugadorUno [x]){
                            if(palo==paloJugadorUno[x]){
                                cartaAuxUno=cartasJugadorUno [x];
                                paloAuxUno=paloJugadorUno[x];
                                cartasJugadorUno [x]=0;
                                paloJugadorUno[x]=0;
                                eleccionOk=true;
                            }
                        }
                    }
                }
            }

        while (eleccionOk==0){
                cout<<"ERROR!!! LA CARTA NO PERTENECE AL CORRAL DEL JUGADOR CONTRARIO, Selecciona otra por favor"<< endl;
                cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
                cin >> eleccion;
                while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                    cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10? ";
                    cin >> eleccion;
                }
            if (toupper (eleccion) == 'S'){
                cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
                 while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                    cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                    cin>> palo;
                }
            } else{
                cout<< "CARTA ELEGIDA ---> ";
                cin >> carta;
                cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
                 while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                    cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                    cin>> palo;
            }
        }
    // RECORRO Las cartas SEGUN EL JUGADOR Y SACO LA CARGA ELEGIDA
     if(maximoJugador== nombreUno){
                    if (toupper (eleccion)=='S'){
                        for(x=0;x<5;x++){
                            if(  (int)cartasJugadorDos [x]== CARTAdIEZ){
                                if ( palo==paloJugadorDos[x]){
                                    cartaAuxDos=CARTAdIEZ;
                                    paloAuxDos=paloJugadorDos[x];
                                    cartasJugadorDos [x]=0;
                                    paloJugadorDos[x]=0;
                                    eleccionOk=true;
                            }
                        }
                        }
                    }else if (toupper (eleccion)=='N'){
                            for(x=0;x<5;x++){
                                if(toupper (carta) ==cartasJugadorDos [x]){
                                    if(palo==paloJugadorDos[x]){
                                        cartaAuxDos=cartasJugadorDos [x];
                                        paloAuxDos=paloJugadorDos[x];
                                        cartasJugadorDos [x]=0;
                                        paloJugadorDos[x]=0;
                                        eleccionOk=true;
                                    }
                                }
                            }
                    }
            }
        if(maximoJugador== nombreDos){
             if (toupper (eleccion)=='S'){
                    for(x=0;x<5;x++){
                        if(cartasJugadorUno [x]==CARTAdIEZ){
                                if(palo==paloJugadorUno[x]){
                                    cartaAuxUno=CARTAdIEZ;
                                    paloAuxUno=paloJugadorUno[x];
                                    cartasJugadorUno [x]=0;
                                    paloJugadorUno[x]=0;
                                    eleccionOk=true;
                                }
                            }
                   }
            } else if (toupper (eleccion)=='N'){
                    for(x=0;x<5;x++){
                        if(toupper (carta) ==cartasJugadorUno [x]){
                            if(palo==paloJugadorUno[x]){
                                cartaAuxUno=cartasJugadorUno [x];
                                paloAuxUno=paloJugadorUno[x];
                                cartasJugadorUno [x]=0;
                                paloJugadorUno[x]=0;
                                eleccionOk=true;
                            }
                        }
                    }
                }
            }
        }

        // GUARDO LA CARTA DEL MAZO EN EL JUGADOR QUE CORRESPONDA.

                    for (int i=0; i<5;i++){
                        if (cartasJugadorUno[i]==0){
                            cartasJugadorUno[i]=cartaAuxDos;
                        }
                        if (paloJugadorUno[i]==0){
                            paloJugadorUno [i]= paloAuxDos;
                        }
                        if (cartasJugadorDos[i]==0){
                            cartasJugadorDos[i]=cartaAuxUno;
                            }
                        if (paloJugadorDos[i]==0){
                            paloJugadorDos [i]= paloAuxUno;
                            }
                        }
system ("cls");

       break;
       ///// FIN PUNTO 3///////
      case 4:
        cout<<"Intercambiar de lugar dos cartas del propio corral"<< endl;
        cout<<"+---------+"<<endl;
        cout<<"| 0     0 |"<<endl;
        cout<<"|         |"<<endl;
        cout<<"| 0     0 |"<<endl;
        cout<<"+---------+"<<endl;

        // ELIJO LA PRIMER CARTA Y VALIDO QUE SEA VALEDERA
        cout<<"Elije LA PRIMER carta de tu propio corral"<< endl;
        cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
        cin >> eleccion;
        cout<< endl;
        while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                    cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10?";
                    cin >> eleccion;
                }

        if (toupper (eleccion) == 'S'){
            cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
            cin>> palo;
            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
            }
            } else{
            cout<< "CARTA ELEGIDA ---> ";
            cin >> carta;
            cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
            cin>> palo;
            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
            }
        }
eleccionOk=0;
// RECORRO Las cartas SEGUN EL JUGADOR Y SACO LA CARTA SELECCIONADA
            if(maximoJugador== nombreUno){
                    if (toupper (eleccion)=='S'){
                        for(x=0;x<5;x++){
                            if(cartasJugadorUno [x]==CARTAdIEZ){
                                if(palo==paloJugadorUno[x]){
                                    cartaAuxUno=CARTAdIEZ;
                                    paloAuxUno=paloJugadorUno[x];
                                    cartasJugadorUno [x]=0;
                                    paloJugadorUno[x]=0;
                                    eleccionOk=true;
                                }
                            }
                        }
                    }else if (toupper (eleccion)=='N'){
                            for(x=0;x<5;x++){
                                if(toupper (carta) ==cartasJugadorUno [x]){
                                    if(palo==paloJugadorUno[x]){
                                        cartaAuxUno=cartasJugadorUno [x];
                                        paloAuxUno=paloJugadorUno[x];
                                        cartasJugadorUno [x]=0;
                                        paloJugadorUno[x]=0;
                                        eleccionOk=true;
                                    }
                                }
                        }
                    }
            }
        if(maximoJugador== nombreDos){
             if (toupper (eleccion)=='S'){
                    for(x=0;x<5;x++){
                        if(  (int)cartasJugadorDos [x]== CARTAdIEZ){
                           if ( palo==paloJugadorDos[x]){
                                cartaAuxDos=CARTAdIEZ;
                                paloAuxDos=paloJugadorDos[x];
                                cartasJugadorDos [x]=0;
                                paloJugadorDos[x]=0;
                                eleccionOk=true;
                            }
                        }
                   }
            } else if (toupper (eleccion)=='N'){
                    for(x=0;x<5;x++){
                        if(toupper (carta) ==cartasJugadorDos [x]){
                            if(palo==paloJugadorDos[x]){
                                cartaAuxDos=cartasJugadorDos [x];
                                paloAuxDos=paloJugadorDos[x];
                                cartasJugadorDos [x]=0;
                                paloJugadorDos[x]=0;
                                eleccionOk=true;
                            }
                        }
                    }
                }
            }
// VALIDO QUE LA CARTA PERTENEZCA AL JUGADOR
        while (eleccionOk==0){
                cout<<"ERROR!!! LA CARTA NO PERTENECE A TU CORRAL, Selecciona otra por favor"<< endl;
                cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
                cin >> eleccion;
                while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                    cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10? ";
                    cin >> eleccion;
                }
            if (toupper (eleccion) == 'S'){
                cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
                 while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                    cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                    cin>> palo;
                }
            } else{
                cout<< "CARTA ELEGIDA ---> ";
                cin >> carta;
                cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
                 while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                    cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                    cin>> palo;
            }
        }
    // RECORRO Las cartas SEGUN EL JUGADOR Y SACO LA CARGA ELEGIDA

            if(maximoJugador== nombreUno){
                    if (toupper (eleccion)=='S'){
                        for(x=0;x<5;x++){
                            if(cartasJugadorUno [x]==CARTAdIEZ){
                                if(palo==paloJugadorUno[x]){
                                    cartaAuxUno=CARTAdIEZ;
                                    paloAuxUno=paloJugadorUno[x];
                                    cartasJugadorUno [x]=0;
                                    paloJugadorUno[x]=0;
                                    eleccionOk=true;
                                }
                            }
                        }
                    }else if (toupper (eleccion)=='N'){
                            for(x=0;x<5;x++){
                                if(toupper (carta) ==cartasJugadorUno [x]){
                                    if(palo==paloJugadorUno[x]){
                                        cartaAuxUno=cartasJugadorUno [x];
                                        paloAuxUno=paloJugadorUno[x];
                                        cartasJugadorUno [x]=0;
                                        paloJugadorUno[x]=0;
                                        eleccionOk=true;
                                    }
                                }
                            }
                        }
                    }
        if(maximoJugador== nombreDos){
             if (toupper (eleccion)=='S'){
                    for(x=0;x<5;x++){
                        if(  (int)cartasJugadorDos [x]== CARTAdIEZ){
                           if ( palo==paloJugadorDos[x]){
                                cartaAuxDos=CARTAdIEZ;
                                paloAuxDos=paloJugadorDos[x];
                                cartasJugadorDos [x]=0;
                                paloJugadorDos[x]=0;
                                eleccionOk=true;
                            }
                        }
                   }
            } else if (toupper (eleccion)=='N'){
                    for(x=0;x<5;x++){
                        if(toupper (carta) ==cartasJugadorDos [x]){
                            if(palo==paloJugadorDos[x]){
                                cartaAuxDos=cartasJugadorDos [x];
                                paloAuxDos=paloJugadorDos[x];
                                cartasJugadorDos [x]=0;
                                paloJugadorDos[x]=0;
                                eleccionOk=true;
                            }
                        }
                    }
                }
        }
    }
        // SELECCIONO LA SEGUNDA CARTA
        cout<< endl<< endl;
        cout<< "Seleccione la segunda carta de su propio corral"<<endl;
        cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
        cin >> eleccion;
        while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                    cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10?";
                    cin >> eleccion;
                }

        if (toupper (eleccion) == 'S'){
            cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
            cin>> palo;
            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
            }
            } else{
            cout<< "CARTA ELEGIDA ---> ";
            cin >> carta;
            cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
            cin>> palo;
            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
            }
        }
eleccionOk=0;
// RECORRO Las cartas SEGUN EL JUGADOR Y GUARDO LA CARTA EN palo/cartaBis  y la marco el espacio donde estaban del vector con 11
            if(maximoJugador== nombreUno){
                    if (toupper (eleccion)=='S'){
                        for(x=0;x<5;x++){
                            if(cartasJugadorUno [x]==CARTAdIEZ){
                                if(palo==paloJugadorUno[x]){
                                    cartaAuxUnoBis=CARTAdIEZ;
                                    paloAuxUnoBis=paloJugadorUno[x];
                                    cartasJugadorUno [x]=11;
                                    paloJugadorUno[x]=11;
                                    eleccionOk=true;
                                }
                            }
                        }
                    }else if (toupper (eleccion)=='N'){
                            for(x=0;x<5;x++){
                                if(toupper (carta) ==cartasJugadorUno [x]){
                                    if(palo==paloJugadorUno[x]){
                                        cartaAuxUnoBis=cartasJugadorUno [x];
                                        paloAuxUnoBis=paloJugadorUno[x];
                                        cartasJugadorUno [x]=11;
                                        paloJugadorUno[x]=11;
                                        eleccionOk=true;
                                    }
                                }
                        }
                    }
            }
        if(maximoJugador== nombreDos){
             if (toupper (eleccion)=='S'){
                    for(x=0;x<5;x++){
                        if(  (int)cartasJugadorDos [x]== CARTAdIEZ){
                           if ( palo==paloJugadorDos[x]){
                                cartaAuxDosBis=CARTAdIEZ;
                                paloAuxDosBis=paloJugadorDos[x];
                                cartasJugadorDos [x]=11;
                                paloJugadorDos[x]=11;
                                eleccionOk=true;
                            }
                        }
                   }
            } else if (toupper (eleccion)=='N'){
                    for(x=0;x<5;x++){
                        if(toupper (carta) ==cartasJugadorDos [x]){
                            if(palo==paloJugadorDos[x]){
                                cartaAuxDosBis=cartasJugadorDos [x];
                                paloAuxDosBis=paloJugadorDos[x];
                                cartasJugadorDos [x]=11;
                                paloJugadorDos[x]=11;
                                eleccionOk=true;
                            }
                        }
                    }
                }
            }
// VALIDO QUE LA CARTA PERTENEZCA AL JUGADOR
        while (eleccionOk==0){
                cout<<"ERROR!!! LA CARTA NO PERTENECE A TU CORRAL, Selecciona otra por favor"<< endl;
                cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
                cin >> eleccion;
                while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                    cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10? ";
                    cin >> eleccion;
                }
            if (toupper (eleccion) == 'S'){
                cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
                 while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                    cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                    cin>> palo;
                }
            } else{
                cout<< "CARTA ELEGIDA ---> ";
                cin >> carta;
                cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
                 while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                    cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                    cin>> palo;
            }
        }
   // RECORRO Las cartas SEGUN EL JUGADOR Y GUARDO LA CARTA EN palo/cartaBis  y la marco el espacio donde estaban del vector con 11

            if(maximoJugador== nombreUno){
                    if (toupper (eleccion)=='S'){
                        for(x=0;x<5;x++){
                            if(cartasJugadorUno [x]==CARTAdIEZ){
                                if(palo==paloJugadorUno[x]){
                                    cartaAuxUnoBis=CARTAdIEZ;
                                    paloAuxUnoBis=paloJugadorUno[x];
                                    cartasJugadorUno [x]=11;
                                    paloJugadorUno[x]=11;
                                    eleccionOk=true;
                                }
                            }
                        }
                    }else if (toupper (eleccion)=='N'){
                            for(x=0;x<5;x++){
                                if(toupper (carta) ==cartasJugadorUno [x]){
                                    if(palo==paloJugadorUno[x]){
                                        cartaAuxUnoBis=cartasJugadorUno [x];
                                        paloAuxUnoBis=paloJugadorUno[x];
                                        cartasJugadorUno [x]=11;
                                        paloJugadorUno[x]=11;
                                        eleccionOk=true;
                                    }
                                }
                            }
                        }
                    }
        if(maximoJugador== nombreDos){
             if (toupper (eleccion)=='S'){
                    for(x=0;x<5;x++){
                        if(  (int)cartasJugadorDos [x]== CARTAdIEZ){
                           if ( palo==paloJugadorDos[x]){
                                cartaAuxDosBis=CARTAdIEZ;
                                paloAuxDosBis=paloJugadorDos[x];
                                cartasJugadorDos [x]=11;
                                paloJugadorDos[x]=11;
                                eleccionOk=true;
                            }
                        }
                   }
            } else if (toupper (eleccion)=='N'){
                    for(x=0;x<5;x++){
                        if(toupper (carta) ==cartasJugadorDos [x]){
                            if(palo==paloJugadorDos[x]){
                                cartaAuxDosBis=cartasJugadorDos [x];
                                paloAuxDosBis=paloJugadorDos[x];
                                cartasJugadorDos [x]=11;
                                paloJugadorDos[x]=11;
                                eleccionOk=true;
                            }
                        }
                    }
                }
            }
        }

     // GUARDO LA CARTA EN EL JUGADOR QUE CORRESPONDA.


            if(maximoJugador== nombreUno){
                    for (int i=0; i<5;i++){
                        if (cartasJugadorUno[i]==0){
                            cartasJugadorUno[i]=cartaAuxUnoBis;
                        }
                        if (paloJugadorUno[i]==0){
                            paloJugadorUno [i]= paloAuxUnoBis;
                        }
                         if (cartasJugadorUno[i]==11){
                            cartasJugadorUno[i]=cartaAuxUno;
                        }
                        if (paloJugadorUno[i]==11){
                            paloJugadorUno [i]= paloAuxUno;
                        }
                    }
                    }else if(maximoJugador== nombreDos){

                        for (int i=0; i<5;i++){

                        if (cartasJugadorDos[i]==0){
                            cartasJugadorDos[i]=cartaAuxDosBis;
                            }
                        if (paloJugadorDos[i]==0){
                            paloJugadorDos [i]= paloAuxDosBis;
                            }
                        if (cartasJugadorDos[i]==11){
                            cartasJugadorDos[i]=cartaAuxDos;
                            }
                        if (paloJugadorDos[i]==11){
                            paloJugadorDos [i]= paloAuxDos;
                            }

                        }
                    }
system ("cls");

    ///// FIN PUNTO 4///////
       break;
      case 5:
        cout<<"Bloquear una carta de tu corral para que el jugador contrario no pueda elegirla"<< endl;
        cout<<"+---------+"<<endl;
        cout<<"| 0     0 |"<<endl;
        cout<<"|    0    |"<<endl;
        cout<<"| 0     0 |"<<endl;
        cout<<"+---------+"<<endl;

         // ELIJO LA PRIMER CARTA Y VALIDO QUE SEA VALEDERA
        cout<<"Elije la carta de tu propio corral a BLOQUEAR"<< endl;
        cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
        cin >> eleccion;
        cout<< endl;
        while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                    cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10?";
                    cin >> eleccion;
                }

        if (toupper (eleccion) == 'S'){
            cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
            cin>> palo;
            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                cout << "ERROR, marque un número de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
            }
            } else{
            cout<< "CARTA ELEGIDA ---> ";
            cin >> carta;
            cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
            cin>> palo;
            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                cout << "ERROR, marque un número de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
            }
        }


        //VALIDO QUE LA CARTA NO ESTA BLOQUEADA DE ANTES

        if(maximoJugador== nombreUno){
            if (toupper (eleccion)=='S'){
                 for(x=0;x<5;x++){
                        if (CARTAdIEZ==cartaBloqueadaUno[x]){
                            if(palo== paloBloqueadoUno[x]){
                                bloqueadaUno=true;
                                }
                        }
                    }
            }else if (toupper (eleccion)=='N'){
                    for(x=0;x<5;x++){
                        if (toupper (carta)==cartaBloqueadaUno[x]){
                            if(palo== paloBloqueadoUno[x]){
                                bloqueadaUno=true;
                            }
                        }
                    }
            }
        }
            if(maximoJugador== nombreDos){
                if (toupper (eleccion)=='S'){
                   for(x=0;x<5;x++){
                        if (CARTAdIEZ==cartaBloqueadaDos[x]){
                            if(palo== paloBloqueadoDos[x]){
                                bloqueadaDos=true;
                                }
                        }
                    }
                }else if (toupper (eleccion)=='N'){
                        for(x=0;x<5;x++){
                            if (toupper (carta)==cartaBloqueadaDos[x]){
                                if(palo== paloBloqueadoDos[x]){
                                    bloqueadaDos=true;
                            }
                        }
                    }
                }
            }


                    while (bloqueadaUno==true || bloqueadaDos==true){
                        bloqueadaUno=false;
                        bloqueadaDos=false;
                        cout<<"Carta ya bloquada por favor Elija otra carta"<< endl;
                        cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
                        cin >> eleccion;
                        cout<< endl;
                        while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                            cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10?";
                            cin >> eleccion;
                        }

                        if (toupper (eleccion) == 'S'){
                            cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                            cin>> palo;
                            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                            cout << "ERROR, marque un número de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                            cin>> palo;
                            }
                        } else{
                            cout<< "CARTA ELEGIDA ---> ";
                            cin >> carta;
                            cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                            cin>> palo;
                            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                                cout << "ERROR, marque un número de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                                cin>> palo;
                            }
                        }

                       if(maximoJugador== nombreUno){
                        if (toupper (eleccion)=='S'){
                            for(x=0;x<5;x++){
                                if (CARTAdIEZ==cartaBloqueadaUno[x]){
                                    if(palo== paloBloqueadoUno[x]){
                                    bloqueadaUno=true;
                                    }
                                }
                            }
                        }else if (toupper (eleccion)=='N'){
                            for(x=0;x<5;x++){
                                if (toupper (carta)==cartaBloqueadaUno[x]){
                                    if(palo== paloBloqueadoUno[x]){
                                        bloqueadaUno=true;
                                    }
                                }
                            }
                        }
                    }
                if(maximoJugador== nombreDos){
                    if (toupper (eleccion)=='S'){
                        for(x=0;x<5;x++){
                            if (CARTAdIEZ==cartaBloqueadaDos[x]){
                                if(palo== paloBloqueadoDos[x]){
                                    bloqueadaDos=true;
                                }
                            }
                        }
                }else if (toupper (eleccion)=='N'){
                        for(x=0;x<5;x++){
                            if (toupper (carta)==cartaBloqueadaDos[x]){
                                if(palo== paloBloqueadoDos[x]){
                                    bloqueadaDos=true;
                                }
                            }
                        }
                    }
                }
            }


// RECORRO Las cartas SEGUN EL JUGADOR Y GUARDO EN BLOQUEADA LA CARTA SELECCIONADA

                if(maximoJugador== nombreUno){
                    if (toupper (eleccion)=='S'){
                        for(x=0;x<5;x++){
                            if(cartasJugadorUno [x]==CARTAdIEZ){
                                if(palo==paloJugadorUno[x]){
                                    cartaBloqueadaUno[x]=CARTAdIEZ;
                                    paloBloqueadoUno[x]=paloJugadorUno[x];
                                }
                            }
                        }
                    }else if (toupper (eleccion)=='N'){
                            for(x=0;x<5;x++){
                                if(toupper (carta) ==cartasJugadorUno [x]){
                                    if(palo==paloJugadorUno[x]){
                                        cartaBloqueadaUno[x]=cartasJugadorUno [x];
                                        paloBloqueadoUno[x]=paloJugadorUno[x];
                                    }
                                }
                        }
                    }
            }
            if(maximoJugador== nombreDos){
             if (toupper (eleccion)=='S'){
                    for(x=0;x<5;x++){
                        if(  (int)cartasJugadorDos [x]== CARTAdIEZ){
                           if ( palo==paloJugadorDos[x]){
                                cartaBloqueadaDos[x]=CARTAdIEZ;
                                paloBloqueadoDos[x]=paloJugadorDos[x];
                            }
                        }
                   }
            } else if (toupper (eleccion)=='N'){
                    for(x=0;x<5;x++){
                        if(toupper (carta) ==cartasJugadorDos [x]){
                            if(palo==paloJugadorDos[x]){
                                cartaBloqueadaDos[x]=cartasJugadorDos [x];
                                paloBloqueadoDos[x]=paloJugadorDos[x];
                            }
                        }
                    }
                }
            }

    system ("cls");
          ///// FIN PUNTO 5///////
       break;

      case 6:
        cout<<"Eligir alguna opcion o pasar de turno"<< endl;
        cout<<"+---------+"<<endl;
        cout<<"| 0     0 |"<<endl;
        cout<<"| 0     0 |"<<endl;
        cout<<"| 0     0 |"<<endl;
        cout<<"+---------+"<<endl;

        cout<<"ELEGIR UNA CARTA DEL PROPIO CORRAL E INTERCAMBIAR POR LA DEL MAZO--->OPCION 1"<< endl;
        cout<<"ELEGIR UNA CARTA DEL CORRAL CONTRARIO E INTERCAMBIAR POR LA DEL MAZO--->OPCION 2"<< endl;
        cout<<"ELEGIR UNA CARTA DEL PROPIO CORRAL E INTERCAMBIAR POR DEL CORRAL CONTRARIO--->OPCION 3"<< endl;
        cout<<"ELEGIR DOS CARTAS DEL PROPIO CORRAL E INTERCAMBIARLAS--->OPCION 4"<< endl;
        cout<<"ELEGIR UNA CARTA DEL PROPIO CORRAL PARA BLOQUEAR--->OPCION 5"<< endl;
        cout<<"PASAR EL TURNO AL SIGUIENTE JUGADOR--->OPCION 6"<< endl;
        cout<<"Opcion elegida # ";
        cin >> opcion;

        //VALIDO QUE EL NUMERO DE ACCION INGRESADO SEA CORRECTO.
         while (opcion != 1&&opcion !=2&&opcion !=3&&opcion !=4&&opcion !=5&&opcion !=6){
                cout << "ERROR, marque una opción correcta ---> ";
                cin>> opcion;
            }

        system ("cls");

      if(opcion<6){
         tirarDado=opcion;
         // VEO LO QUE HAY EN CADA MAZO

            cout<< "RONDA # "<< turno<< endl;
            cout<< "TURNO JUGADOR "<< maximoJugador<< endl;
            cout<< endl;
            cout<<"|"<<nombreUno                << endl;
            for (int i=0; i<5; i ++){
                 if (cartasJugadorUno[i] == 10 ){
                    cout<<"|"<<"\t" <<(int)cartasJugadorUno[i]<<"\t" << (char)paloJugadorUno[i]<<"                   |"<< endl;
                    }else{
                    cout<<"|"<<"\t" << cartasJugadorUno[i]<<"\t" << (char)paloJugadorUno[i]<<"                   |"<< endl;
                }
                if(cartasJugadorUno[i] ==0){
                    cout<<"|"<<"\t" <<(int)cartasJugadorUno[i]<<"\t" << paloJugadorUno[i]<<"                   |"<< endl;
                }
            }

            cout<<"|"<<nombreDos                << endl;
            for (int i=0; i<5; i ++){
                if (cartasJugadorDos[i] == 10){
                    cout<<"|"<<"\t" <<(int)cartasJugadorDos[i]<<"\t" << (char)paloJugadorDos[i] <<"                   |"<< endl;
                }else {
                    cout<<"|"<<"\t" << cartasJugadorDos[i]<<"\t" << (char)paloJugadorDos[i]<<"                   |"<< endl;
                }
                if(cartasJugadorDos[i] ==0){
                    cout<<"|"<<"\t" <<(int)cartasJugadorUno[i]<<"\t" << paloJugadorUno[i]<<"                   |"<< endl;
                }
            }
       //SEGUN LA OPCION QUE ELIJA EL JUGADOR
         switch (tirarDado){
    case 1:
        cout<<"Cambiar una carta de tu propio corral con el mazo"<< endl;
        cout<<"+---------+"<<endl;
        cout<<"|         |"<<endl;
        cout<<"|    0    |"<<endl;
        cout<<"|         |"<<endl;
        cout<<"+---------+"<<endl;
        cout<<"Elije una carta de tu propio corral"<< endl;
        cout<< endl;
        cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
        cin >> eleccion;
        cout<< endl;
        while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                    cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10?";
                    cin >> eleccion;
                }

        if (toupper (eleccion) == 'S'){
            cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
            cin>> palo;
            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
            }
            } else{
            cout<< "CARTA ELEGIDA ---> ";
            cin >> carta;
            cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
            cin>> palo;
            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
            }
        }
eleccionOk=0;
// RECORRO Las cartas SEGUN EL JUGADOR Y SACO LA CARGA ELEGIDA
            if(maximoJugador== nombreUno){
                    if (toupper (eleccion)=='S'){
                        for(x=0;x<5;x++){
                            if(cartasJugadorUno [x]==CARTAdIEZ){
                                if(palo==paloJugadorUno[x]){
                                    cartaAux=CARTAdIEZ;
                                    paloAux=paloJugadorUno[x];
                                    cartasJugadorUno [x]=0;
                                    paloJugadorUno[x]=0;
                                    eleccionOk=true;
                                }
                            }
                        }
                    }else if (toupper (eleccion)=='N'){
                            for(x=0;x<5;x++){
                                if(toupper (carta) ==cartasJugadorUno [x]){
                                    if(palo==paloJugadorUno[x]){
                                        cartaAux=cartasJugadorUno [x];
                                        paloAux=paloJugadorUno[x];
                                        cartasJugadorUno [x]=0;
                                        paloJugadorUno[x]=0;
                                        eleccionOk=true;
                                    }
                                }
                        }
                    }
            }
        if(maximoJugador== nombreDos){
             if (toupper (eleccion)=='S'){
                    for(x=0;x<5;x++){
                        if(  (int)cartasJugadorDos [x]== CARTAdIEZ){
                           if ( palo==paloJugadorDos[x]){
                                cartaAux=CARTAdIEZ;
                                paloAux=paloJugadorDos[x];
                                cartasJugadorDos [x]=0;
                                paloJugadorDos[x]=0;
                                eleccionOk=true;
                            }
                        }
                   }
            } else if (toupper (eleccion)=='N'){
                    for(x=0;x<5;x++){
                        if(toupper (carta) ==cartasJugadorDos [x]){
                            if(palo==paloJugadorDos[x]){
                                cartaAux=cartasJugadorDos [x];
                                paloAux=paloJugadorDos[x];
                                cartasJugadorDos [x]=0;
                                paloJugadorDos[x]=0;
                                eleccionOk=true;
                            }
                        }
                    }
                }
            }

        while (eleccionOk==0){
                cout<<"ERROR!!! LA CARTA NO PERTENECE A TU CORRAL, Selecciona otra por favor"<< endl;
                cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
                cin >> eleccion;
                while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                    cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10? ";
                    cin >> eleccion;
                }
            if (toupper (eleccion) == 'S'){
                cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
                 while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                    cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                    cin>> palo;
                }
            } else{
                cout<< "CARTA ELEGIDA ---> ";
                cin >> carta;
                cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
                 while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                    cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                    cin>> palo;
            }
        }
    // RECORRO Las cartas SEGUN EL JUGADOR Y SACO LA CARGA ELEGIDA

            if(maximoJugador== nombreUno){
                    if (toupper (eleccion)=='S'){
                        for(x=0;x<5;x++){
                            if(cartasJugadorUno [x]==CARTAdIEZ){
                                if(palo==paloJugadorUno[x]){
                                    cartaAux=CARTAdIEZ;
                                    paloAux=paloJugadorUno[x];
                                    cartasJugadorUno [x]=0;
                                    paloJugadorUno[x]=0;
                                    eleccionOk=true;
                                }
                            }
                        }
                    }else if (toupper (eleccion)=='N'){
                            for(x=0;x<5;x++){
                                if(toupper (carta) ==cartasJugadorUno [x]){
                                    if(palo==paloJugadorUno[x]){
                                        cartaAux=cartasJugadorUno [x];
                                        paloAux=paloJugadorUno[x];
                                        cartasJugadorUno [x]=0;
                                        paloJugadorUno[x]=0;
                                        eleccionOk=true;
                                    }
                                }
                            }
                        }
                    }
        if(maximoJugador== nombreDos){
             if (toupper (eleccion)=='S'){
                    for(x=0;x<5;x++){
                        if(  (int)cartasJugadorDos [x]== CARTAdIEZ){
                           if ( palo==paloJugadorDos[x]){
                                cartaAux=CARTAdIEZ;
                                paloAux=paloJugadorDos[x];
                                cartasJugadorDos [x]=0;
                                paloJugadorDos[x]=0;
                                eleccionOk=true;
                            }
                        }
                   }
            } else if (toupper (eleccion)=='N'){
                    for(x=0;x<5;x++){
                        if(toupper (carta) ==cartasJugadorDos [x]){
                            if(palo==paloJugadorDos[x]){
                                cartaAux=cartasJugadorDos [x];
                                paloAux=paloJugadorDos[x];
                                cartasJugadorDos [x]=0;
                                paloJugadorDos[x]=0;
                                eleccionOk=true;
                            }
                        }
                    }
                }
        }
    }

// LA CARTA LA GUARDO EN EL MAZO PARA ELLO LA CONVIERTO EN DOS PARAMETROS T Y H.

                for (t=0; t<4; t++){
                        if(paloModelo[t]==paloAux){
                            paloBuscar=t;
                        }
                }
                if (cartaAux=='10'){
                    for   (h=0; h<5; h++){
                        if(cartaModelo[h]=='10'){
                            cartaBuscar=h;
                        }
                    }
                } else for   (h=0; h<5; h++){
                        if(cartaModelo[h]==cartaAux){
                            cartaBuscar=h;
                        }
                }
// GUARDO LA CARTA EN EL MAZO

            repartirCartas[cartaBuscar][paloBuscar]=mazoModelo[cartaBuscar][paloBuscar];
            cartaGuardada=mazoModelo[cartaBuscar][paloBuscar];

// TOMO UNA CARTA DEL MAZO
        while (encontrado==false){
            srand (time (NULL));
            numMazo = 1 + rand() % (21 - 1);
            while (numMazo==cartaGuardada){ // VALIDO QUE LA CARTA QUE GUARDE NO LA PUEDA ELEGIR
                srand (time (NULL));
                numMazo = 1 + rand() % (21 - 1);
            }
            for (int i=0; i<5;i++){
                for (int j=0; j<4;j++){
                    if (numMazo==repartirCartas[i][j]){
                        encontrado=true;
                        paloBuscar=j;
                        cartaBuscar=i;
                        repartirCartas[i][j]=0;
                    }
                }
            }
        }

// GUARDO LA CARTA DEL MAZO EN EL JUGADOR QUE CORRESPONDA.

            if(maximoJugador== nombreUno){
                    for (int i=0; i<5;i++){
                        if (cartasJugadorUno[i]==0){
                            cartasJugadorUno[i]=cartaModelo [cartaBuscar];
                        }
                    }
                    for (int i=0; i<5;i++) {
                        if (paloJugadorUno[i]==0){
                            paloJugadorUno [i]= paloModelo [paloBuscar];

                        }
                    }
               } else for (int i=0; i<5;i++){
                        if (cartasJugadorDos[i]==0){
                            cartasJugadorDos[i]=cartaModelo [cartaBuscar];
                            }
                        }
                        for (int i=0; i<5;i++) {
                            if (paloJugadorDos[i]==0){
                                paloJugadorDos [i]= paloModelo [paloBuscar];

                            }
                        }
system ("cls");

// VEO LO QUE SE CAMBIO EN CADA MAZO.

            cout<< "RONDA # "<< turno<< endl;
            cout<< "TURNO JUGADOR "<< maximoJugador<< endl;
            cout<< endl,
            cout<<"|"<<nombreUno                << endl;
            for (int i=0; i<5; i ++){
                if (cartasJugadorUno[i] == 10 ){
                    cout<<"|"<<"\t" <<(int)cartasJugadorUno[i]<<"\t" << (char)paloJugadorUno[i]<<"                   |"<< endl;
                    }else{
                    cout<<"|"<<"\t" << cartasJugadorUno[i]<<"\t" << (char)paloJugadorUno[i]<<"                   |"<< endl;
                }
                if(cartasJugadorUno[i] ==0){
                    cout<<"|"<<"\t" <<(int)cartasJugadorUno[i]<<"\t" << paloJugadorUno[i]<<"                   |"<< endl;
                }
            }

            cout<<"|"<<nombreDos                << endl;
            for (int i=0; i<5; i ++){
                if (cartasJugadorDos[i] == 10){
                    cout<<"|"<<"\t" <<(int)cartasJugadorDos[i]<<"\t" << (char)paloJugadorDos[i] <<"                   |"<< endl;
                }else {
                    cout<<"|"<<"\t" << cartasJugadorDos[i]<<"\t" << (char)paloJugadorDos[i]<<"                   |"<< endl;
                }
                if(cartasJugadorDos[i] ==0){
                    cout<<"|"<<"\t" <<(int)cartasJugadorUno[i]<<"\t" << paloJugadorUno[i]<<"                   |"<< endl;
                }
            }

        encontrado=false;
        break;
///// FIN PUNTO 1///////

    case 2:
        cout<<"Intercambiar una carta del jugador contrario con el mazo"<< endl;
        cout<<"+---------+"<<endl;
        cout<<"|    0    |"<<endl;
        cout<<"|         |"<<endl;
        cout<<"|    0    |"<<endl;
        cout<<"+---------+"<<endl;
        cout<<"Elije una carta del jugador contrario"<< endl;
        cout<< endl;
        cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
        cin >> eleccion;
        while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                    cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10?";
                    cin >> eleccion;
                }

        if (toupper (eleccion) == 'S'){
            cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
            cin>> palo;
            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
            }
            } else{
            cout<< "CARTA ELEGIDA ---> ";
            cin >> carta;
            cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
            cin>> palo;
            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
            }
        }


        //VALIDO QUE LA CARTA NO ESTE BLOQUEADA
encontradaBloqueada=false;
         if(maximoJugador== nombreUno){
                for(x=0;x<5;x++){
                    if (carta==cartaBloqueadaDos[x] && palo==paloBloqueadoDos[x] ){
                        encontradaBloqueada=true;
                    }
                }
         }
         if(maximoJugador== nombreDos){
               for(x=0;x<5;x++){
                    if (carta==cartaBloqueadaUno[x] && palo==paloBloqueadoUno[x] ){
                        encontradaBloqueada=true;
                    }
                  }
            }

                  while (encontradaBloqueada==true){
                        encontradaBloqueada=false;
                        cout<<"CARTA BLOQUEADA, debe seleccionar otra carta"<< endl;
                        cout<<"Elije una carta del jugador contrario"<< endl;
                        cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
                        cin >> eleccion;
                        while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                            cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10?";
                            cin >> eleccion;
                        }
                        if (toupper (eleccion) == 'S'){
                            cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                            cin>> palo;
                            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                                cin>> palo;
                            }
                        } else{
                            cout<< "CARTA ELEGIDA ---> ";
                            cin >> carta;
                            cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                            cin>> palo;
                            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                                cin>> palo;
                                }
                            }

                            if(maximoJugador== nombreUno){
                                for(x=0;x<5;x++){
                                    if (carta==cartaBloqueadaDos[x] && palo==paloBloqueadoDos[x] ){
                                        encontradaBloqueada=true;
                                    }
                                }
                            }
                            if(maximoJugador== nombreDos){
                                for(x=0;x<5;x++){
                                    if (carta==cartaBloqueadaUno[x] && palo==paloBloqueadoUno[x] ){
                                        encontradaBloqueada=true;
                                    }
                                }
                            }
                        }



// RECORRO Las cartas SEGUN EL JUGADOR Y SACO LA CARGA ELEGIDA

eleccionOk=0;
            if(maximoJugador== nombreUno){
                    if (toupper (eleccion)=='S'){
                        for(x=0;x<5;x++){
                            if(  (int)cartasJugadorDos [x]== CARTAdIEZ){
                                if ( palo==paloJugadorDos[x]){
                                    cartaAux=CARTAdIEZ;
                                    paloAux=paloJugadorDos[x];
                                    cartasJugadorDos [x]=0;
                                    paloJugadorDos[x]=0;
                                    eleccionOk=true;
                            }
                        }
                        }
                    }else if (toupper (eleccion)=='N'){
                            for(x=0;x<5;x++){
                                if(toupper (carta) ==cartasJugadorDos [x]){
                                    if(palo==paloJugadorDos[x]){
                                        cartaAux=cartasJugadorDos [x];
                                        paloAux=paloJugadorDos[x];
                                        cartasJugadorDos [x]=0;
                                        paloJugadorDos[x]=0;
                                        eleccionOk=true;
                                    }
                                }
                            }
                    }
            }
        if(maximoJugador== nombreDos){
             if (toupper (eleccion)=='S'){
                    for(x=0;x<5;x++){
                        if(cartasJugadorUno [x]==CARTAdIEZ){
                                if(palo==paloJugadorUno[x]){
                                    cartaAux=CARTAdIEZ;
                                    paloAux=paloJugadorUno[x];
                                    cartasJugadorUno [x]=0;
                                    paloJugadorUno[x]=0;
                                    eleccionOk=true;
                                }
                            }
                   }
            } else if (toupper (eleccion)=='N'){
                    for(x=0;x<5;x++){
                        if(toupper (carta) ==cartasJugadorUno [x]){
                            if(palo==paloJugadorUno[x]){
                                cartaAux=cartasJugadorUno [x];
                                paloAux=paloJugadorUno[x];
                                cartasJugadorUno [x]=0;
                                paloJugadorUno[x]=0;
                                eleccionOk=true;
                            }
                        }
                    }
                }
            }

        while (eleccionOk==0){
                cout<<"ERROR!!! LA CARTA NO PERTENECE AL CORRAL DEL JUGADOR CONTRARIO, Selecciona otra por favor"<< endl;
                cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
                cin >> eleccion;
                while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                    cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10? ";
                    cin >> eleccion;
                }
            if (toupper (eleccion) == 'S'){
                cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
                 while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                    cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                    cin>> palo;
                }
            } else{
                cout<< "CARTA ELEGIDA ---> ";
                cin >> carta;
                cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
                 while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                    cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                    cin>> palo;
            }
        }
    // RECORRO Las cartas SEGUN EL JUGADOR Y SACO LA CARGA ELEGIDA
     if(maximoJugador== nombreUno){
                    if (toupper (eleccion)=='S'){
                        for(x=0;x<5;x++){
                            if(  (int)cartasJugadorDos [x]== CARTAdIEZ){
                                if ( palo==paloJugadorDos[x]){
                                    cartaAux=CARTAdIEZ;
                                    paloAux=paloJugadorDos[x];
                                    cartasJugadorDos [x]=0;
                                    paloJugadorDos[x]=0;
                                    eleccionOk=true;
                            }
                        }
                        }
                    }else if (toupper (eleccion)=='N'){
                            for(x=0;x<5;x++){
                                if(toupper (carta) ==cartasJugadorDos [x]){
                                    if(palo==paloJugadorDos[x]){
                                        cartaAux=cartasJugadorDos [x];
                                        paloAux=paloJugadorDos[x];
                                        cartasJugadorDos [x]=0;
                                        paloJugadorDos[x]=0;
                                        eleccionOk=true;
                                    }
                                }
                            }
                    }
            }
        if(maximoJugador== nombreDos){
             if (toupper (eleccion)=='S'){
                    for(x=0;x<5;x++){
                        if(cartasJugadorUno [x]==CARTAdIEZ){
                                if(palo==paloJugadorUno[x]){
                                    cartaAux=CARTAdIEZ;
                                    paloAux=paloJugadorUno[x];
                                    cartasJugadorUno [x]=0;
                                    paloJugadorUno[x]=0;
                                    eleccionOk=true;
                                }
                            }
                   }
            } else if (toupper (eleccion)=='N'){
                    for(x=0;x<5;x++){
                        if(toupper (carta) ==cartasJugadorUno [x]){
                            if(palo==paloJugadorUno[x]){
                                cartaAux=cartasJugadorUno [x];
                                paloAux=paloJugadorUno[x];
                                cartasJugadorUno [x]=0;
                                paloJugadorUno[x]=0;
                                eleccionOk=true;
                            }
                        }
                    }
                }
            }
        }

       // LA CARTA LA GUARDO EN EL MAZO PARA ELLO LA CONVIERTO EN DOS PARAMETROS T Y H.

                for (t=0; t<4; t++){
                        if(paloModelo[t]==paloAux){
                            paloBuscar=t;
                        }
                }
                if (cartaAux=='10'){
                    for   (h=0; h<5; h++){
                        if(cartaModelo[h]=='10'){
                            cartaBuscar=h;
                        }
                    }
                } else for   (h=0; h<5; h++){
                        if(cartaModelo[h]==cartaAux){
                            cartaBuscar=h;
                        }
                }
// GUARDO LA CARTA EN EL MAZO

            repartirCartas[cartaBuscar][paloBuscar]=mazoModelo[cartaBuscar][paloBuscar];
            cartaGuardada=mazoModelo[cartaBuscar][paloBuscar];

// TOMO UNA CARTA DEL MAZO
        while (encontrado==false){
            srand (time (NULL));
            numMazo = 1 + rand() % (21 - 1);
            while (numMazo==cartaGuardada){ // VALIDO QUE LA CARTA QUE GUARDE NO LA PUEDA ELEGIR
                srand (time (NULL));
                numMazo = 1 + rand() % (21 - 1);
            }
            for (int i=0; i<5;i++){
                for (int j=0; j<4;j++){
                    if (numMazo==repartirCartas[i][j]){
                        encontrado=true;
                        paloBuscar=j;
                        cartaBuscar=i;
                        repartirCartas[i][j]=0;
                    }
                }
            }
        }

// GUARDO LA CARTA DEL MAZO EN EL JUGADOR QUE CORRESPONDA.

        if(maximoJugador== nombreUno){
                    for (int i=0; i<5;i++){
                        if (cartasJugadorDos[i]==0){
                            cartasJugadorDos[i]=cartaModelo [cartaBuscar];
                        }
                    }
                    for (int i=0; i<5;i++) {
                        if (paloJugadorDos[i]==0){
                            paloJugadorDos [i]= paloModelo [paloBuscar];

                        }
                    }
               } else for (int i=0; i<5;i++){
                        if (cartasJugadorUno[i]==0){
                            cartasJugadorUno[i]=cartaModelo [cartaBuscar];
                            }
                        }
                        for (int i=0; i<5;i++) {
                            if (paloJugadorUno[i]==0){
                                paloJugadorUno [i]= paloModelo [paloBuscar];

                            }
                        }
system ("cls");

// VEO LO QUE SE CAMBIO EN CADA MAZO.
      cout<< "RONDA # "<< turno<< endl;
      cout<< "TURNO JUGADOR "<< maximoJugador<< endl;
      cout<< endl;
            cout<<"|"<<nombreUno                << endl;
            for (int i=0; i<5; i ++){
                if (cartasJugadorUno[i] == 10 ){
                    cout<<"|"<<"\t" <<(int)cartasJugadorUno[i]<<"\t" << (char)paloJugadorUno[i]<<"                   |"<< endl;
                    }else{
                    cout<<"|"<<"\t" << cartasJugadorUno[i]<<"\t" << (char)paloJugadorUno[i]<<"                   |"<< endl;
                }
                if(cartasJugadorUno[i] ==0){
                    cout<<"|"<<"\t" <<(int)cartasJugadorUno[i]<<"\t" << paloJugadorUno[i]<<"                   |"<< endl;
                }
            }

            cout<<"|"<<nombreDos                << endl;
            for (int i=0; i<5; i ++){
                if (cartasJugadorDos[i] == 10){
                    cout<<"|"<<"\t" <<(int)cartasJugadorDos[i]<<"\t" << (char)paloJugadorDos[i] <<"                   |"<< endl;
                }else {
                    cout<<"|"<<"\t" << cartasJugadorDos[i]<<"\t" << (char)paloJugadorDos[i]<<"                   |"<< endl;
                }
                if(cartasJugadorDos[i] ==0){
                    cout<<"|"<<"\t" <<(int)cartasJugadorUno[i]<<"\t" << paloJugadorUno[i]<<"                   |"<< endl;
                }
            }

       encontrado=false;
       break;

///// FIN PUNTO 2///////
      case 3:

          //VALIDO PARA LOS PUNTOS FINALES SI LE ROBARON UNA CARTA POR EL JUGADOR CONTRARIO
          if(maximoJugador==nombreUno){
            roboCartaDos=true;
          }else{
          roboCartaUno=true;
          }
        cout<<"Intercambiar una carta de tu propio corral con una del jugador contrario"<< endl;
        cout<<"+---------+"<<endl;
        cout<<"| 0       |"<<endl;
        cout<<"|    0    |"<<endl;
        cout<<"|       0 |"<<endl;
        cout<<"+---------+"<<endl;
        cout<<"Elije una carta de tu propio corral"<< endl;
        cout<< endl;
        cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
        cin >> eleccion;
        cout<< endl;
        while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                    cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10?";
                    cin >> eleccion;
                }

        if (toupper (eleccion) == 'S'){
            cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
            cin>> palo;
            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
            }
            } else{
            cout<< "CARTA ELEGIDA ---> ";
            cin >> carta;
            cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
            cin>> palo;
            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
            }
        }
eleccionOk=0;
// RECORRO Las cartas SEGUN EL JUGADOR Y SACO LA CARGA ELEGIDA
            if(maximoJugador== nombreUno){
                    if (toupper (eleccion)=='S'){
                        for(x=0;x<5;x++){
                            if(cartasJugadorUno [x]==CARTAdIEZ){
                                if(palo==paloJugadorUno[x]){
                                    cartaAuxUno=CARTAdIEZ;
                                    paloAuxUno=paloJugadorUno[x];
                                    cartasJugadorUno [x]=0;
                                    paloJugadorUno[x]=0;
                                    eleccionOk=true;
                                }
                            }
                        }
                    }else if (toupper (eleccion)=='N'){
                            for(x=0;x<5;x++){
                                if(toupper (carta) ==cartasJugadorUno [x]){
                                    if(palo==paloJugadorUno[x]){
                                        cartaAuxUno=cartasJugadorUno [x];
                                        paloAuxUno=paloJugadorUno[x];
                                        cartasJugadorUno [x]=0;
                                        paloJugadorUno[x]=0;
                                        eleccionOk=true;
                                    }
                                }
                        }
                    }
            }
        if(maximoJugador== nombreDos){
             if (toupper (eleccion)=='S'){
                    for(x=0;x<5;x++){
                        if(  (int)cartasJugadorDos [x]== CARTAdIEZ){
                           if ( palo==paloJugadorDos[x]){
                                cartaAuxDos=CARTAdIEZ;
                                paloAuxDos=paloJugadorDos[x];
                                cartasJugadorDos [x]=0;
                                paloJugadorDos[x]=0;
                                eleccionOk=true;
                            }
                        }
                   }
            } else if (toupper (eleccion)=='N'){
                    for(x=0;x<5;x++){
                        if(toupper (carta) ==cartasJugadorDos [x]){
                            if(palo==paloJugadorDos[x]){
                                cartaAuxDos=cartasJugadorDos [x];
                                paloAuxDos=paloJugadorDos[x];
                                cartasJugadorDos [x]=0;
                                paloJugadorDos[x]=0;
                                eleccionOk=true;
                            }
                        }
                    }
                }
            }

        while (eleccionOk==0){
                cout<<"ERROR!!! LA CARTA NO PERTENECE A TU CORRAL, Selecciona otra por favor"<< endl;
                cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
                cin >> eleccion;
                while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                    cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10? ";
                    cin >> eleccion;
                }
            if (toupper (eleccion) == 'S'){
                cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
                 while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                    cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                    cin>> palo;
                }
            } else{
                cout<< "CARTA ELEGIDA ---> ";
                cin >> carta;
                cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
                 while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                    cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                    cin>> palo;
            }
        }
    // RECORRO Las cartas SEGUN EL JUGADOR Y SACO LA CARGA ELEGIDA

            if(maximoJugador== nombreUno){
                    if (toupper (eleccion)=='S'){
                        for(x=0;x<5;x++){
                            if(cartasJugadorUno [x]==CARTAdIEZ){
                                if(palo==paloJugadorUno[x]){
                                    cartaAuxUno=CARTAdIEZ;
                                    paloAuxUno=paloJugadorUno[x];
                                    cartasJugadorUno [x]=0;
                                    paloJugadorUno[x]=0;
                                    eleccionOk=true;
                                }
                            }
                        }
                    }else if (toupper (eleccion)=='N'){
                            for(x=0;x<5;x++){
                                if(toupper (carta) ==cartasJugadorUno [x]){
                                    if(palo==paloJugadorUno[x]){
                                        cartaAuxUno=cartasJugadorUno [x];
                                        paloAuxUno=paloJugadorUno[x];
                                        cartasJugadorUno [x]=0;
                                        paloJugadorUno[x]=0;
                                        eleccionOk=true;
                                    }
                                }
                            }
                        }
                    }
        if(maximoJugador== nombreDos){
             if (toupper (eleccion)=='S'){
                    for(x=0;x<5;x++){
                        if(  (int)cartasJugadorDos [x]== CARTAdIEZ){
                           if ( palo==paloJugadorDos[x]){
                                cartaAuxDos=CARTAdIEZ;
                                paloAuxDos=paloJugadorDos[x];
                                cartasJugadorDos [x]=0;
                                paloJugadorDos[x]=0;
                                eleccionOk=true;
                            }
                        }
                   }
            } else if (toupper (eleccion)=='N'){
                    for(x=0;x<5;x++){
                        if(toupper (carta) ==cartasJugadorDos [x]){
                            if(palo==paloJugadorDos[x]){
                                cartaAuxDos=cartasJugadorDos [x];
                                paloAuxDos=paloJugadorDos[x];
                                cartasJugadorDos [x]=0;
                                paloJugadorDos[x]=0;
                                eleccionOk=true;
                            }
                        }
                    }
                }
        }
    }
cout<< endl;
cout<<"Elije una carta del jugador contrario"<< endl;
cout<< endl;
        cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
        cin >> eleccion;
        while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                    cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10?";
                    cin >> eleccion;
                }

        if (toupper (eleccion) == 'S'){
            cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
            cin>> palo;
            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
            }
            } else{
            cout<< "CARTA ELEGIDA ---> ";
            cin >> carta;
            cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
            cin>> palo;
            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
            }
        }


 //VALIDO QUE LA CARTA NO ESTE BLOQUEADA
encontradaBloqueada=false;
         if(maximoJugador== nombreUno){
                for(x=0;x<5;x++){
                    if (carta==cartaBloqueadaDos[x] && palo==paloBloqueadoDos[x] ){
                        encontradaBloqueada=true;
                    }
                }
         }
         if(maximoJugador== nombreDos){
               for(x=0;x<5;x++){
                    if (carta==cartaBloqueadaUno[x] && palo==paloBloqueadoUno[x] ){
                        encontradaBloqueada=true;
                    }
                  }
            }

                  while (encontradaBloqueada==true){
                        encontradaBloqueada=false;
                        cout<<"CARTA BLOQUEADA, debe seleccionar otra carta"<< endl;
                        cout<<"Elije una carta del jugador contrario"<< endl;
                        cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
                        cin >> eleccion;
                        while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                            cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10?";
                            cin >> eleccion;
                        }
                        if (toupper (eleccion) == 'S'){
                            cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                            cin>> palo;
                            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                                cin>> palo;
                            }
                        } else{
                            cout<< "CARTA ELEGIDA ---> ";
                            cin >> carta;
                            cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                            cin>> palo;
                            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                                cin>> palo;
                                }
                            }

                            if(maximoJugador== nombreUno){
                                for(x=0;x<5;x++){
                                    if (carta==cartaBloqueadaDos[x] && palo==paloBloqueadoDos[x] ){
                                        encontradaBloqueada=true;
                                    }
                                }
                            }
                            if(maximoJugador== nombreDos){
                                for(x=0;x<5;x++){
                                    if (carta==cartaBloqueadaUno[x] && palo==paloBloqueadoUno[x] ){
                                        encontradaBloqueada=true;
                                    }
                                }
                            }
                        }





// RECORRO Las cartas SEGUN EL JUGADOR Y SACO LA CARGA ELEGIDA

eleccionOk=0;
            if(maximoJugador== nombreUno){
                    if (toupper (eleccion)=='S'){
                        for(x=0;x<5;x++){
                            if(  (int)cartasJugadorDos [x]== CARTAdIEZ){
                                if ( palo==paloJugadorDos[x]){
                                    cartaAuxDos=CARTAdIEZ;
                                    paloAuxDos=paloJugadorDos[x];
                                    cartasJugadorDos [x]=0;
                                    paloJugadorDos[x]=0;
                                    eleccionOk=true;
                            }
                        }
                        }
                    }else if (toupper (eleccion)=='N'){
                            for(x=0;x<5;x++){
                                if(toupper (carta) ==cartasJugadorDos [x]){
                                    if(palo==paloJugadorDos[x]){
                                        cartaAuxDos=cartasJugadorDos [x];
                                        paloAuxDos=paloJugadorDos[x];
                                        cartasJugadorDos [x]=0;
                                        paloJugadorDos[x]=0;
                                        eleccionOk=true;
                                    }
                                }
                            }
                    }
            }
        if(maximoJugador== nombreDos){
             if (toupper (eleccion)=='S'){
                    for(x=0;x<5;x++){
                        if(cartasJugadorUno [x]==CARTAdIEZ){
                                if(palo==paloJugadorUno[x]){
                                    cartaAuxUno=CARTAdIEZ;
                                    paloAuxUno=paloJugadorUno[x];
                                    cartasJugadorUno [x]=0;
                                    paloJugadorUno[x]=0;
                                    eleccionOk=true;
                                }
                            }
                   }
            } else if (toupper (eleccion)=='N'){
                    for(x=0;x<5;x++){
                        if(toupper (carta) ==cartasJugadorUno [x]){
                            if(palo==paloJugadorUno[x]){
                                cartaAuxUno=cartasJugadorUno [x];
                                paloAuxUno=paloJugadorUno[x];
                                cartasJugadorUno [x]=0;
                                paloJugadorUno[x]=0;
                                eleccionOk=true;
                            }
                        }
                    }
                }
            }

        while (eleccionOk==0){
                cout<<"ERROR!!! LA CARTA NO PERTENECE AL CORRAL DEL JUGADOR CONTRARIO, Selecciona otra por favor"<< endl;
                cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
                cin >> eleccion;
                while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                    cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10? ";
                    cin >> eleccion;
                }
            if (toupper (eleccion) == 'S'){
                cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
                 while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                    cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                    cin>> palo;
                }
            } else{
                cout<< "CARTA ELEGIDA ---> ";
                cin >> carta;
                cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
                 while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                    cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                    cin>> palo;
            }
        }
    // RECORRO Las cartas SEGUN EL JUGADOR Y SACO LA CARGA ELEGIDA
     if(maximoJugador== nombreUno){
                    if (toupper (eleccion)=='S'){
                        for(x=0;x<5;x++){
                            if(  (int)cartasJugadorDos [x]== CARTAdIEZ){
                                if ( palo==paloJugadorDos[x]){
                                    cartaAuxDos=CARTAdIEZ;
                                    paloAuxDos=paloJugadorDos[x];
                                    cartasJugadorDos [x]=0;
                                    paloJugadorDos[x]=0;
                                    eleccionOk=true;
                            }
                        }
                        }
                    }else if (toupper (eleccion)=='N'){
                            for(x=0;x<5;x++){
                                if(toupper (carta) ==cartasJugadorDos [x]){
                                    if(palo==paloJugadorDos[x]){
                                        cartaAuxDos=cartasJugadorDos [x];
                                        paloAuxDos=paloJugadorDos[x];
                                        cartasJugadorDos [x]=0;
                                        paloJugadorDos[x]=0;
                                        eleccionOk=true;
                                    }
                                }
                            }
                    }
            }
        if(maximoJugador== nombreDos){
             if (toupper (eleccion)=='S'){
                    for(x=0;x<5;x++){
                        if(cartasJugadorUno [x]==CARTAdIEZ){
                                if(palo==paloJugadorUno[x]){
                                    cartaAuxUno=CARTAdIEZ;
                                    paloAuxUno=paloJugadorUno[x];
                                    cartasJugadorUno [x]=0;
                                    paloJugadorUno[x]=0;
                                    eleccionOk=true;
                                }
                            }
                   }
            } else if (toupper (eleccion)=='N'){
                    for(x=0;x<5;x++){
                        if(toupper (carta) ==cartasJugadorUno [x]){
                            if(palo==paloJugadorUno[x]){
                                cartaAuxUno=cartasJugadorUno [x];
                                paloAuxUno=paloJugadorUno[x];
                                cartasJugadorUno [x]=0;
                                paloJugadorUno[x]=0;
                                eleccionOk=true;
                            }
                        }
                    }
                }
            }
        }

        // GUARDO LA CARTA DEL MAZO EN EL JUGADOR QUE CORRESPONDA.

                    for (int i=0; i<5;i++){
                        if (cartasJugadorUno[i]==0){
                            cartasJugadorUno[i]=cartaAuxDos;
                        }
                        if (paloJugadorUno[i]==0){
                            paloJugadorUno [i]= paloAuxDos;
                        }
                        if (cartasJugadorDos[i]==0){
                            cartasJugadorDos[i]=cartaAuxUno;
                            }
                        if (paloJugadorDos[i]==0){
                            paloJugadorDos [i]= paloAuxUno;
                            }
                        }
system ("cls");

// VEO LO QUE SE CAMBIO EN CADA MAZO.

      cout<< "RONDA # "<< turno<< endl;
      cout<< "TURNO JUGADOR "<< maximoJugador<< endl;
            cout<<"|"<<nombreUno                << endl;
            for (int i=0; i<5; i ++){
                if (cartasJugadorUno[i] == 10 ){
                    cout<<"|"<<"\t" <<(int)cartasJugadorUno[i]<<"\t" << (char)paloJugadorUno[i]<<"                   |"<< endl;
                    }else{
                    cout<<"|"<<"\t" << cartasJugadorUno[i]<<"\t" << (char)paloJugadorUno[i]<<"                   |"<< endl;
                }
                if(cartasJugadorUno[i] ==0){
                    cout<<"|"<<"\t" <<(int)cartasJugadorUno[i]<<"\t" << paloJugadorUno[i]<<"                   |"<< endl;
                }
            }

            cout<<"|"<<nombreDos                << endl;
            for (int i=0; i<5; i ++){
                if (cartasJugadorDos[i] == 10){
                    cout<<"|"<<"\t" <<(int)cartasJugadorDos[i]<<"\t" << (char)paloJugadorDos[i] <<"                   |"<< endl;
                }else {
                    cout<<"|"<<"\t" << cartasJugadorDos[i]<<"\t" << (char)paloJugadorDos[i]<<"                   |"<< endl;
                }
                if(cartasJugadorDos[i] ==0){
                    cout<<"|"<<"\t" <<(int)cartasJugadorUno[i]<<"\t" << paloJugadorUno[i]<<"                   |"<< endl;
                }
            }

       break;
       ///// FIN PUNTO 3///////
      case 4:
        cout<<"Intercambiar de lugar dos cartas del propio corral"<< endl;
        cout<<"+---------+"<<endl;
        cout<<"| 0     0 |"<<endl;
        cout<<"|         |"<<endl;
        cout<<"| 0     0 |"<<endl;
        cout<<"+---------+"<<endl;

        // ELIJO LA PRIMER CARTA Y VALIDO QUE SEA VALEDERA
        cout<<"Elije LA PRIMER carta de tu propio corral"<< endl;
        cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
        cin >> eleccion;
        cout<< endl;
        while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                    cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10?";
                    cin >> eleccion;
                }

        if (toupper (eleccion) == 'S'){
            cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
            cin>> palo;
            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
            }
            } else{
            cout<< "CARTA ELEGIDA ---> ";
            cin >> carta;
            cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
            cin>> palo;
            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
            }
        }
eleccionOk=0;
// RECORRO Las cartas SEGUN EL JUGADOR Y SACO LA CARTA SELECCIONADA
            if(maximoJugador== nombreUno){
                    if (toupper (eleccion)=='S'){
                        for(x=0;x<5;x++){
                            if(cartasJugadorUno [x]==CARTAdIEZ){
                                if(palo==paloJugadorUno[x]){
                                    cartaAuxUno=CARTAdIEZ;
                                    paloAuxUno=paloJugadorUno[x];
                                    cartasJugadorUno [x]=0;
                                    paloJugadorUno[x]=0;
                                    eleccionOk=true;
                                }
                            }
                        }
                    }else if (toupper (eleccion)=='N'){
                            for(x=0;x<5;x++){
                                if(toupper (carta) ==cartasJugadorUno [x]){
                                    if(palo==paloJugadorUno[x]){
                                        cartaAuxUno=cartasJugadorUno [x];
                                        paloAuxUno=paloJugadorUno[x];
                                        cartasJugadorUno [x]=0;
                                        paloJugadorUno[x]=0;
                                        eleccionOk=true;
                                    }
                                }
                        }
                    }
            }
        if(maximoJugador== nombreDos){
             if (toupper (eleccion)=='S'){
                    for(x=0;x<5;x++){
                        if(  (int)cartasJugadorDos [x]== CARTAdIEZ){
                           if ( palo==paloJugadorDos[x]){
                                cartaAuxDos=CARTAdIEZ;
                                paloAuxDos=paloJugadorDos[x];
                                cartasJugadorDos [x]=0;
                                paloJugadorDos[x]=0;
                                eleccionOk=true;
                            }
                        }
                   }
            } else if (toupper (eleccion)=='N'){
                    for(x=0;x<5;x++){
                        if(toupper (carta) ==cartasJugadorDos [x]){
                            if(palo==paloJugadorDos[x]){
                                cartaAuxDos=cartasJugadorDos [x];
                                paloAuxDos=paloJugadorDos[x];
                                cartasJugadorDos [x]=0;
                                paloJugadorDos[x]=0;
                                eleccionOk=true;
                            }
                        }
                    }
                }
            }
// VALIDO QUE LA CARTA PERTENEZCA AL JUGADOR
        while (eleccionOk==0){
                cout<<"ERROR!!! LA CARTA NO PERTENECE A TU CORRAL, Selecciona otra por favor"<< endl;
                cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
                cin >> eleccion;
                while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                    cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10? ";
                    cin >> eleccion;
                }
            if (toupper (eleccion) == 'S'){
                cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
                 while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                    cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                    cin>> palo;
                }
            } else{
                cout<< "CARTA ELEGIDA ---> ";
                cin >> carta;
                cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
                 while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                    cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                    cin>> palo;
            }
        }
    // RECORRO Las cartas SEGUN EL JUGADOR Y SACO LA CARGA ELEGIDA

            if(maximoJugador== nombreUno){
                    if (toupper (eleccion)=='S'){
                        for(x=0;x<5;x++){
                            if(cartasJugadorUno [x]==CARTAdIEZ){
                                if(palo==paloJugadorUno[x]){
                                    cartaAuxUno=CARTAdIEZ;
                                    paloAuxUno=paloJugadorUno[x];
                                    cartasJugadorUno [x]=0;
                                    paloJugadorUno[x]=0;
                                    eleccionOk=true;
                                }
                            }
                        }
                    }else if (toupper (eleccion)=='N'){
                            for(x=0;x<5;x++){
                                if(toupper (carta) ==cartasJugadorUno [x]){
                                    if(palo==paloJugadorUno[x]){
                                        cartaAuxUno=cartasJugadorUno [x];
                                        paloAuxUno=paloJugadorUno[x];
                                        cartasJugadorUno [x]=0;
                                        paloJugadorUno[x]=0;
                                        eleccionOk=true;
                                    }
                                }
                            }
                        }
                    }
        if(maximoJugador== nombreDos){
             if (toupper (eleccion)=='S'){
                    for(x=0;x<5;x++){
                        if(  (int)cartasJugadorDos [x]== CARTAdIEZ){
                           if ( palo==paloJugadorDos[x]){
                                cartaAuxDos=CARTAdIEZ;
                                paloAuxDos=paloJugadorDos[x];
                                cartasJugadorDos [x]=0;
                                paloJugadorDos[x]=0;
                                eleccionOk=true;
                            }
                        }
                   }
            } else if (toupper (eleccion)=='N'){
                    for(x=0;x<5;x++){
                        if(toupper (carta) ==cartasJugadorDos [x]){
                            if(palo==paloJugadorDos[x]){
                                cartaAuxDos=cartasJugadorDos [x];
                                paloAuxDos=paloJugadorDos[x];
                                cartasJugadorDos [x]=0;
                                paloJugadorDos[x]=0;
                                eleccionOk=true;
                            }
                        }
                    }
                }
        }
    }
        // SELECCIONO LA SEGUNDA CARTA
        cout<< endl<< endl;
        cout<< "Seleccione la segunda carta de su propio corral"<<endl;
        cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
        cin >> eleccion;
        while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                    cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10?";
                    cin >> eleccion;
                }

        if (toupper (eleccion) == 'S'){
            cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
            cin>> palo;
            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
            }
            } else{
            cout<< "CARTA ELEGIDA ---> ";
            cin >> carta;
            cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
            cin>> palo;
            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
            }
        }
eleccionOk=0;
// RECORRO Las cartas SEGUN EL JUGADOR Y GUARDO LA CARTA EN palo/cartaBis  y la marco el espacio donde estaban del vector con 11
            if(maximoJugador== nombreUno){
                    if (toupper (eleccion)=='S'){
                        for(x=0;x<5;x++){
                            if(cartasJugadorUno [x]==CARTAdIEZ){
                                if(palo==paloJugadorUno[x]){
                                    cartaAuxUnoBis=CARTAdIEZ;
                                    paloAuxUnoBis=paloJugadorUno[x];
                                    cartasJugadorUno [x]=11;
                                    paloJugadorUno[x]=11;
                                    eleccionOk=true;
                                }
                            }
                        }
                    }else if (toupper (eleccion)=='N'){
                            for(x=0;x<5;x++){
                                if(toupper (carta) ==cartasJugadorUno [x]){
                                    if(palo==paloJugadorUno[x]){
                                        cartaAuxUnoBis=cartasJugadorUno [x];
                                        paloAuxUnoBis=paloJugadorUno[x];
                                        cartasJugadorUno [x]=11;
                                        paloJugadorUno[x]=11;
                                        eleccionOk=true;
                                    }
                                }
                        }
                    }
            }
        if(maximoJugador== nombreDos){
             if (toupper (eleccion)=='S'){
                    for(x=0;x<5;x++){
                        if(  (int)cartasJugadorDos [x]== CARTAdIEZ){
                           if ( palo==paloJugadorDos[x]){
                                cartaAuxDosBis=CARTAdIEZ;
                                paloAuxDosBis=paloJugadorDos[x];
                                cartasJugadorDos [x]=11;
                                paloJugadorDos[x]=11;
                                eleccionOk=true;
                            }
                        }
                   }
            } else if (toupper (eleccion)=='N'){
                    for(x=0;x<5;x++){
                        if(toupper (carta) ==cartasJugadorDos [x]){
                            if(palo==paloJugadorDos[x]){
                                cartaAuxDosBis=cartasJugadorDos [x];
                                paloAuxDosBis=paloJugadorDos[x];
                                cartasJugadorDos [x]=11;
                                paloJugadorDos[x]=11;
                                eleccionOk=true;
                            }
                        }
                    }
                }
            }
// VALIDO QUE LA CARTA PERTENEZCA AL JUGADOR
        while (eleccionOk==0){
                cout<<"ERROR!!! LA CARTA NO PERTENECE A TU CORRAL, Selecciona otra por favor"<< endl;
                cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
                cin >> eleccion;
                while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                    cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10? ";
                    cin >> eleccion;
                }
            if (toupper (eleccion) == 'S'){
                cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
                 while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                    cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                    cin>> palo;
                }
            } else{
                cout<< "CARTA ELEGIDA ---> ";
                cin >> carta;
                cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
                 while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                    cout << "ERROR, marque un numero de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                    cin>> palo;
            }
        }
   // RECORRO Las cartas SEGUN EL JUGADOR Y GUARDO LA CARTA EN palo/cartaBis  y la marco el espacio donde estaban del vector con 11

            if(maximoJugador== nombreUno){
                    if (toupper (eleccion)=='S'){
                        for(x=0;x<5;x++){
                            if(cartasJugadorUno [x]==CARTAdIEZ){
                                if(palo==paloJugadorUno[x]){
                                    cartaAuxUnoBis=CARTAdIEZ;
                                    paloAuxUnoBis=paloJugadorUno[x];
                                    cartasJugadorUno [x]=11;
                                    paloJugadorUno[x]=11;
                                    eleccionOk=true;
                                }
                            }
                        }
                    }else if (toupper (eleccion)=='N'){
                            for(x=0;x<5;x++){
                                if(toupper (carta) ==cartasJugadorUno [x]){
                                    if(palo==paloJugadorUno[x]){
                                        cartaAuxUnoBis=cartasJugadorUno [x];
                                        paloAuxUnoBis=paloJugadorUno[x];
                                        cartasJugadorUno [x]=11;
                                        paloJugadorUno[x]=11;
                                        eleccionOk=true;
                                    }
                                }
                            }
                        }
                    }
        if(maximoJugador== nombreDos){
             if (toupper (eleccion)=='S'){
                    for(x=0;x<5;x++){
                        if(  (int)cartasJugadorDos [x]== CARTAdIEZ){
                           if ( palo==paloJugadorDos[x]){
                                cartaAuxDosBis=CARTAdIEZ;
                                paloAuxDosBis=paloJugadorDos[x];
                                cartasJugadorDos [x]=11;
                                paloJugadorDos[x]=11;
                                eleccionOk=true;
                            }
                        }
                   }
            } else if (toupper (eleccion)=='N'){
                    for(x=0;x<5;x++){
                        if(toupper (carta) ==cartasJugadorDos [x]){
                            if(palo==paloJugadorDos[x]){
                                cartaAuxDosBis=cartasJugadorDos [x];
                                paloAuxDosBis=paloJugadorDos[x];
                                cartasJugadorDos [x]=11;
                                paloJugadorDos[x]=11;
                                eleccionOk=true;
                            }
                        }
                    }
                }
            }
        }

     // GUARDO LA CARTA EN EL JUGADOR QUE CORRESPONDA.


            if(maximoJugador== nombreUno){
                    for (int i=0; i<5;i++){
                        if (cartasJugadorUno[i]==0){
                            cartasJugadorUno[i]=cartaAuxUnoBis;
                        }
                        if (paloJugadorUno[i]==0){
                            paloJugadorUno [i]= paloAuxUnoBis;
                        }
                         if (cartasJugadorUno[i]==11){
                            cartasJugadorUno[i]=cartaAuxUno;
                        }
                        if (paloJugadorUno[i]==11){
                            paloJugadorUno [i]= paloAuxUno;
                        }
                    }
                    }else if(maximoJugador== nombreDos){

                        for (int i=0; i<5;i++){

                        if (cartasJugadorDos[i]==0){
                            cartasJugadorDos[i]=cartaAuxDosBis;
                            }
                        if (paloJugadorDos[i]==0){
                            paloJugadorDos [i]= paloAuxDosBis;
                            }
                        if (cartasJugadorDos[i]==11){
                            cartasJugadorDos[i]=cartaAuxDos;
                            }
                        if (paloJugadorDos[i]==11){
                            paloJugadorDos [i]= paloAuxDos;
                            }

                        }
                    }
system ("cls");
        // VEO LO QUE SE CAMBIO EN CADA MAZO.

      cout<< "RONDA # "<< turno<< endl;
      cout<< "TURNO JUGADOR "<< maximoJugador<< endl;
      cout<< endl;
            cout<<"|"<<nombreUno                << endl;
            for (int i=0; i<5; i ++){

                if (cartasJugadorUno[i] == 10 ){
                    cout<<"|"<<"\t" <<(int)cartasJugadorUno[i]<<"\t" << (char)paloJugadorUno[i]<<"                   |"<< endl;
                    }else{
                    cout<<"|"<<"\t" << cartasJugadorUno[i]<<"\t" << (char)paloJugadorUno[i]<<"                   |"<< endl;
                }
                if(cartasJugadorUno[i] ==0){
                    cout<<"|"<<"\t" <<(int)cartasJugadorUno[i]<<"\t" << paloJugadorUno[i]<<"                   |"<< endl;
                }
            }

            cout<<"|"<<nombreDos                << endl;
            for (int i=0; i<5; i ++){
                if (cartasJugadorDos[i] == 10){
                    cout<<"|"<<"\t" <<(int)cartasJugadorDos[i]<<"\t" << (char)paloJugadorDos[i] <<"                   |"<< endl;
                }else {
                    cout<<"|"<<"\t" << cartasJugadorDos[i]<<"\t" << (char)paloJugadorDos[i]<<"                   |"<< endl;
                }
                if(cartasJugadorDos[i] ==0){
                    cout<<"|"<<"\t" <<(int)cartasJugadorUno[i]<<"\t" << paloJugadorUno[i]<<"                   |"<< endl;
                }
            }


    ///// FIN PUNTO 4///////
       break;
      case 5:
        cout<<"Bloquear una carta de tu corral para que el jugador contrario no pueda elegirla"<< endl;
        cout<<"+---------+"<<endl;
        cout<<"| 0     0 |"<<endl;
        cout<<"|    0    |"<<endl;
        cout<<"| 0     0 |"<<endl;
        cout<<"+---------+"<<endl;

         // ELIJO LA PRIMER CARTA Y VALIDO QUE SEA VALEDERA
        cout<<"Elije la carta de tu propio corral a BLOQUEAR"<< endl;
        cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
        cin >> eleccion;
        cout<< endl;
        while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                    cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10?";
                    cin >> eleccion;
                }

        if (toupper (eleccion) == 'S'){
            cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
            cin>> palo;
            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                cout << "ERROR, marque un número de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
            }
            } else{
            cout<< "CARTA ELEGIDA ---> ";
            cin >> carta;
            cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
            cin>> palo;
            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                cout << "ERROR, marque un número de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                cin>> palo;
            }
        }


        //VALIDO QUE LA CARTA NO ESTA BLOQUEADA DE ANTES

        if(maximoJugador== nombreUno){
            if (toupper (eleccion)=='S'){
                 for(x=0;x<5;x++){
                        if (CARTAdIEZ==cartaBloqueadaUno[x]){
                            if(palo== paloBloqueadoUno[x]){
                                bloqueadaUno=true;
                                }
                        }
                    }
            }else if (toupper (eleccion)=='N'){
                    for(x=0;x<5;x++){
                        if (toupper (carta)==cartaBloqueadaUno[x]){
                            if(palo== paloBloqueadoUno[x]){
                                bloqueadaUno=true;
                            }
                        }
                    }
            }
        }
            if(maximoJugador== nombreDos){
                if (toupper (eleccion)=='S'){
                   for(x=0;x<5;x++){
                        if (CARTAdIEZ==cartaBloqueadaDos[x]){
                            if(palo== paloBloqueadoDos[x]){
                                bloqueadaDos=true;
                                }
                        }
                    }
                }else if (toupper (eleccion)=='N'){
                        for(x=0;x<5;x++){
                            if (toupper (carta)==cartaBloqueadaDos[x]){
                                if(palo== paloBloqueadoDos[x]){
                                    bloqueadaDos=true;
                            }
                        }
                    }
                }
            }


                    while (bloqueadaUno==true || bloqueadaDos==true){
                        bloqueadaUno=false;
                        bloqueadaDos=false;
                        cout<<"Carta ya bloquada por favor Elija otra carta"<< endl;
                        cout << "QUIERE ELEGIR ALGUNA CARTA 10? S/N"<<endl;
                        cin >> eleccion;
                        cout<< endl;
                        while (toupper (eleccion) != 'S'&& toupper (eleccion) != 'N'){
                            cout << "ERROR, marque S o N ¿QUIERE ELEGIR ALGUNA CARTA 10?";
                            cin >> eleccion;
                        }

                        if (toupper (eleccion) == 'S'){
                            cout<< "EL 10 DE QUE PALO 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                            cin>> palo;
                            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                            cout << "ERROR, marque un número de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                            cin>> palo;
                            }
                        } else{
                            cout<< "CARTA ELEGIDA ---> ";
                            cin >> carta;
                            cout<< "Del Palo 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                            cin>> palo;
                            while (palo != 3&&palo !=4&&palo !=5&&palo !=6){
                                cout << "ERROR, marque un número de palo correcto 3=CORAZONES,4=DIAMANTE,5=TREBOL,6=PICA---> ";
                                cin>> palo;
                            }
                        }

                       if(maximoJugador== nombreUno){
                        if (toupper (eleccion)=='S'){
                            for(x=0;x<5;x++){
                                if (CARTAdIEZ==cartaBloqueadaUno[x]){
                                    if(palo== paloBloqueadoUno[x]){
                                    bloqueadaUno=true;
                                    }
                                }
                            }
                        }else if (toupper (eleccion)=='N'){
                            for(x=0;x<5;x++){
                                if (toupper (carta)==cartaBloqueadaUno[x]){
                                    if(palo== paloBloqueadoUno[x]){
                                        bloqueadaUno=true;
                                    }
                                }
                            }
                        }
                    }
                if(maximoJugador== nombreDos){
                    if (toupper (eleccion)=='S'){
                        for(x=0;x<5;x++){
                            if (CARTAdIEZ==cartaBloqueadaDos[x]){
                                if(palo== paloBloqueadoDos[x]){
                                    bloqueadaDos=true;
                                }
                            }
                        }
                }else if (toupper (eleccion)=='N'){
                        for(x=0;x<5;x++){
                            if (toupper (carta)==cartaBloqueadaDos[x]){
                                if(palo== paloBloqueadoDos[x]){
                                    bloqueadaDos=true;
                                }
                            }
                        }
                    }
                }
            }


// RECORRO Las cartas SEGUN EL JUGADOR Y GUARDO EN BLOQUEADA LA CARTA SELECCIONADA


                if(maximoJugador== nombreUno){
                    if (toupper (eleccion)=='S'){
                        for(x=0;x<5;x++){
                            if(cartasJugadorUno [x]==CARTAdIEZ){
                                if(palo==paloJugadorUno[x]){
                                    cartaBloqueadaUno[x]=CARTAdIEZ;
                                    paloBloqueadoUno[x]=paloJugadorUno[x];

                                }
                            }
                        }
                    }else if (toupper (eleccion)=='N'){
                            for(x=0;x<5;x++){
                                if(toupper (carta) ==cartasJugadorUno [x]){
                                    if(palo==paloJugadorUno[x]){
                                        cartaBloqueadaUno[x]=cartasJugadorUno [x];
                                        paloBloqueadoUno[x]=paloJugadorUno[x];

                                    }
                                }
                        }
                    }
            }
            if(maximoJugador== nombreDos){
             if (toupper (eleccion)=='S'){
                    for(x=0;x<5;x++){
                        if(  (int)cartasJugadorDos [x]== CARTAdIEZ){
                           if ( palo==paloJugadorDos[x]){
                                cartaBloqueadaDos[x]=CARTAdIEZ;
                                paloBloqueadoDos[x]=paloJugadorDos[x];

                            }
                        }
                   }
            } else if (toupper (eleccion)=='N'){
                    for(x=0;x<5;x++){
                        if(toupper (carta) ==cartasJugadorDos [x]){
                            if(palo==paloJugadorDos[x]){
                                cartaBloqueadaDos[x]=cartasJugadorDos [x];
                                paloBloqueadoDos[x]=paloJugadorDos[x];

                            }
                        }
                    }
                }
            }

    system ("cls");


    // VEO LO QUE SE CAMBIO EN CADA MAZO en este caso nada:)

            cout<< "RONDA # "<< turno<< endl;
            cout<< "TURNO JUGADOR "<< maximoJugador<< endl;
            cout<< endl;
            cout<<"|"<<nombreUno                << endl;
            for (int i=0; i<5; i ++){
                 if (cartasJugadorUno[i] == 10 ){
                    cout<<"|"<<"\t" <<(int)cartasJugadorUno[i]<<"\t" << (char)paloJugadorUno[i]<<"                   |"<< endl;
                    }else{
                    cout<<"|"<<"\t" << cartasJugadorUno[i]<<"\t" << (char)paloJugadorUno[i]<<"                   |"<< endl;
                }
                if(cartasJugadorUno[i] ==0){
                    cout<<"|"<<"\t" <<(int)cartasJugadorUno[i]<<"\t" << paloJugadorUno[i]<<"                   |"<< endl;
                }
            }

            cout<<"|"<<nombreDos                << endl;
            for (int i=0; i<5; i ++){
                if (cartasJugadorDos[i] == 10){
                    cout<<"|"<<"\t" <<(int)cartasJugadorDos[i]<<"\t" << (char)paloJugadorDos[i] <<"                   |"<< endl;
                }else {
                    cout<<"|"<<"\t" << cartasJugadorDos[i]<<"\t" << (char)paloJugadorDos[i]<<"                   |"<< endl;
                }
                if(cartasJugadorDos[i] ==0){
                    cout<<"|"<<"\t" <<(int)cartasJugadorUno[i]<<"\t" << paloJugadorUno[i]<<"                   |"<< endl;
                }
            }
       ///// FIN PUNTO 5///////
       break;

       }//TERMINA EL SWITCH DE LOS PUNTOS MENORES A 6

      } //TERMINA EL IF DE LOS PUNTOS MENORES A 6

      else if(maximoJugador==nombreUno){
        pasoTurnoUno=true;
        }else{
            pasoTurnoDos=true;
      }

        system ("cls");
       break;

}//termina el SWICH DE LOS 6 PUNTOS....

}

void mostrarPartida (bool roboCartaUno,bool roboCartaDos,bool pasoTurnoUno,bool pasoTurnoDos,int tirarDado,int cont,int turno,string maximoJugador,string nombreUno,string nombreDos,char cartasJugadorUno[], char cartasJugadorDos[],int TAM,int paloJugadorUno[],int paloJugadorDos[],int repartirCartas [][4],char cartas [],int palos [],char cartaBloqueadaDos[],char cartaBloqueadaUno[],int paloBloqueadoUno[], int paloBloqueadoDos[]){
setlocale(LC_ALL, "Spanish");

               if ( maximoJugador== nombreUno){
                cout<< endl<< endl;
                maximoJugador=nombreDos;
                comenzar(turno,nombreUno, nombreDos,maximoJugador,cartasJugadorUno, cartasJugadorDos, TAM,paloJugadorUno,paloJugadorDos);
                lanzarDado(roboCartaUno,roboCartaDos,pasoTurnoUno,pasoTurnoDos,tirarDado,cartasJugadorUno,cartasJugadorDos,TAM,paloJugadorUno, paloJugadorDos,nombreUno,  nombreDos, maximoJugador,repartirCartas,cartas,palos,turno,cont,cartaBloqueadaDos,cartaBloqueadaUno,paloBloqueadoUno, paloBloqueadoDos);
            } else if (maximoJugador== nombreDos){
                cout<< endl<< endl;
                maximoJugador=nombreUno;
                comenzar(turno,nombreUno, nombreDos,maximoJugador,cartasJugadorUno, cartasJugadorDos, TAM,paloJugadorUno,paloJugadorDos);
                lanzarDado(roboCartaUno,roboCartaDos,pasoTurnoUno,pasoTurnoDos,tirarDado,cartasJugadorUno,cartasJugadorDos,TAM,paloJugadorUno, paloJugadorDos,nombreUno,  nombreDos, maximoJugador,repartirCartas,cartas,palos,turno,cont,cartaBloqueadaDos,cartaBloqueadaUno,paloBloqueadoUno, paloBloqueadoDos);
            }

}

void datosGanador (string participanteGanador,int &gananciaNoRoboUno,int &gananciaNoRoboDos,int &puntosNoPasarTurnoUno, int &puntosNoPasarTurnoDos,int &roboAccionTresUno,int &roboAccionTresDos,int &totalMalUbicadas,int &puntosGanarPartida,string &maximoJugador,char cartasJugadorUno[],char cartasJugadorDos[],int TAM,string nombreUno,string nombreDos,int tirarDado,bool pasoTurnoUno,bool pasoTurnoDos,bool roboCartaUno,bool roboCartaDos){
setlocale(LC_ALL, "Spanish");


int malUbicadasJugadorDos=0,malUbicadasJugadorUno=0;

puntosGanarPartida=15;//ACUMULO PUNTOS POR SER GANADOR

//DATOS JUGADOR UNO

if(participanteGanador==nombreUno){

    if (tirarDado==3){
        roboAccionTresUno=10;// SUMO EL PUNTO SI LA ULTIMA JUGADA FUE LA ACCION 3
    }
    // VERIFICA LA CANTIDAD DE CARTAS MAL ACOMODADAS DEL RIVAL
    if (cartasJugadorDos[0]!=10){
        malUbicadasJugadorDos++;
    }
    if (cartasJugadorDos[1]!='J'){
        malUbicadasJugadorDos++;
    }
    if (cartasJugadorDos[2]!='Q'){
        malUbicadasJugadorDos++;
    }
    if (cartasJugadorDos[3]!='K'){
        malUbicadasJugadorDos++;
    }
    if (cartasJugadorDos[4]!='A'){
        malUbicadasJugadorDos++;
    }
    totalMalUbicadas=malUbicadasJugadorDos*4;// REALIZO LA CUENTA FINAL DE ESTOS PUNTOS POR ESTAR MAL ACOMODADAS LAS CARTAS EN EL RIVAL
// VALIDO QUE NUNCA PASO DE TURNO CON ACCION 6
    if (pasoTurnoUno==false){
        puntosNoPasarTurnoUno=10;
    }
//VALIDO QUE NO LE HAYAN ROBADO NUNCA UNA CARTA EL JUGADOR CONTRARIO.
    if(roboCartaUno==false){
        gananciaNoRoboUno=5;
    }

}


//DATOS JUGADOR DOS

if (participanteGanador==nombreDos){

    if (tirarDado==3){
        roboAccionTresDos=10;// SUMO EL PUNTO SI LA ULTIMA JUGADA FUE AL ACCION 3
    }

     // VERIFICA LA CANTIDAD DE CARTAS MAL ACOMODADAS DEL RIVAL
    if (cartasJugadorUno[0]!=10){
        malUbicadasJugadorUno++;
    }
    if (cartasJugadorUno[1]!='J'){
        malUbicadasJugadorUno++;
    }
    if (cartasJugadorUno[2]!='Q'){
        malUbicadasJugadorUno++;
    }
    if (cartasJugadorUno[3]!='K'){
        malUbicadasJugadorUno++;
    }
    if (cartasJugadorUno[4]!='A'){
        malUbicadasJugadorUno++;
    }
    totalMalUbicadas=malUbicadasJugadorUno*4;// REALIZO LA CUENTA FINAL DE ESTOS PUNTOS POR ESTAR MAL ACOMODADAS LAS CARTAS EN EL RIVAL
    // VALIDO QUE NUNCA PASO DE TURNO CON ACCION 6
    if (pasoTurnoDos==false){
        puntosNoPasarTurnoDos=10;
    }
    //VALIDO QUE NO LE HAYAN ROBADO NUNCA UNA CARTA EL JUGADOR CONTRARIO.
    if(roboCartaDos==false){
        gananciaNoRoboDos=5;
    }
}

}



