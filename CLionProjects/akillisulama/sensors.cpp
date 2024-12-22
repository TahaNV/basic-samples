//
// Created by taha29 on 20.10.2024.
//
#include "sensors.h"
#include <cstdlib>
#include <iostream>
#include <unistd.h>
using namespace std;

double okuToz() {
    return 10+rand()%8;
}
double okuSicaklik() {
    return 20+rand()%20;
}
double okuNem() {
    return 50-rand()%20;
}

void kontrolnem(double &nem,int esikNem,bool &sulama) {
    if(nem<esikNem) {
        sulama=true;
    }
    else
        sulama=false;
}
void kontrolsicaktoz(double sicaklik,double toz,bool &alarm,int esiksicaklik,int esiktoz) {
    if(sicaklik>esiksicaklik) {
        alarm=true;
        cout<<"ALARM!!!"<<endl<<"Sicaklik esigi asildi"<<endl;
    }
    if(toz>esiktoz){
        alarm=true;
        cout<<"ALARM!!!"<<endl<<"Toz esigi asildi"<<endl;
    }
}
    void nemyukseltme(double &nem,int maxesik,bool &sulama){
        do{
            nem++;
            cout<<"Anlik nem orani: "<<nem<<endl;
            sleep(1);
        }while (nem<maxesik);
        sulama=false;
    cout<<"Sulama durduruldu"<<endl;

    }
