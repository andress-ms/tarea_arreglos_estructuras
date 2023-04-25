#include <iostream>
#include <string>

using namespace std;

struct atleta {
  string nombre;
  int edad;
  string deporte;
  struct resultados {
    int oro;
    int plata;
    int bronce;
  } medallas;
};
