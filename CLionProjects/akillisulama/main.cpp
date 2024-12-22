#include <iostream>
#include <ctime>

#include "sensors.h"
using namespace std;
int main() {
    int maxesiknem=60;
    int esiknem=40;
    int esiktoz=14;
    int esiksicak=30;

    bool sulama=false;
    bool alarm=false;

    srand(time(nullptr));

    double toz=okuToz();
    double sicaklik=okuSicaklik();
    double nem=okuNem();
    cout<<"Anlik Nem orani:"<<nem<<"%"<<endl;
    cout<<"Anlik Sicaklik:"<<sicaklik<<"°C"<<endl;
    cout<<"Anlik Toz orani:"<<toz<<"%"<<endl;
    kontrolnem(nem,esiknem,sulama);
    kontrolsicaktoz(sicaklik,toz,alarm,esiksicak,esiktoz);

    if (sulama) {
        cout<<"Dusuk Nem!!!"<<endl<<"Sulama Baslatildi!!!"<<endl;
        nemyukseltme(nem,maxesiknem,sulama);
    }
        return 0;
}
