#include <iostream>
#include "dispositivos.h"
#include <string.h>

using namespace std;

int main(){
    dispositivos dis;
    strcpy(dis.empresa, "Conico");
    strcpy(dis.celular, "iPhone, Samsung, Xiaomi");
    strcpy(dis.tablet, "iPad, Samsung, LG");
    strcpy(dis.smarttv, "LG, Sony, TCL");
    strcpy(dis.laptop, "Lenovo, Asus, HP");

    cout << "Empresa: " << dis.empresa << endl;
    cout << "Celulares disponibles: " << dis.celular << endl;
    cout << "Tablets disponibles: " << dis.tablet << endl;
    cout << "Smart TV disponibles: " << dis.smarttv << endl;
    cout << "Laptops disponibles: " << dis.laptop << endl; 
}