//
// Created by taha29 on 20.10.2024.
//

#ifndef SENSORS_H
#define SENSORS_H

double okuToz();
double okuSicaklik();
double okuNem();
void kontrolnem(double &nem,int esikNem,bool &sulama);
void kontrolsicaktoz(double sicaklik,double toz,bool &alarm,int esiksicaklik,int esiktoz);
void nemyukseltme(double &nem,int maxesik,bool &sulama);
#endif //SENSORS_H
