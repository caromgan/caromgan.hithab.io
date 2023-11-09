
/*#include <iostream>
using namespace std;
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <stdio.h>
#include "funcionesClutch.h"

void repartir (string uno, string dos){

int num,i,j,x,carga=1, contador=0, numAnt=0;
int repartirCartas [5][4]={0};
char cartas [5]={10,'J','Q','K','A'};
int palos [4]={3,4,5,6};

srand(time(NULL));
cout<< "LAS CARTAS DE CADA UNO PARA INCIAR SON LAS SIGUIENTES "<< endl;

    for(i=0; i<5;i++){
        for (j=0; j<4;j++){
            repartirCartas[i][j]= carga++;
        }
    }
//num=rand ()%100+1;
num = 1 + rand() % (21 - 1);
    for (x=0;x<2;x++){
        cout<< endl<< endl;
        if(x==1 ){
            cout << "Cartas jugador "<< uno << endl;
            cout<<"--------------------------------"<< endl;
            cout<< endl<< endl;
        } else {cout << "Cartas jugador "<<dos << endl;
                cout<<"--------------------------------"<< endl;
                cout<< endl<< endl;
             }
        contador =0;

        while (contador<5){
            for (i=0; i<5;i++){
                for (j=0; j<4;j++){
                    if (num==repartirCartas[i][j]){
                        repartirCartas[i][j]=0;
                        if (cartas [i]== 10){
                            cout<<"\t"<<(int)cartas [i]<<"\t" << (char)palos [j]<< endl;
                        }
                        else{
                            cout<<"\t"<< cartas [i] <<"\t"<< (char)palos [j]<< endl;

                            }
                           contador++;// VA AL FINALIZAR EL IF PRIMERO
                    }

                }

            }
            //num=rand ()%100+1;
        num = 1 + rand() % (21 - 1);
        }
    }
}*/
