#ifndef BASIC_00_EXAMPLE_BUS_H
#define BASIC_00_EXAMPLE_BUS_H
 
#include"Vehiculo.h"
using namespace std;

class Bus {

  private:
   double tarifa;
   int cant_asientos;

  public:
  Bus(double = 0, int = 0);
  Bus(double,int,Vehiculo);

  double get_tarifa();
  void set_tarifa(double);

  int get_cant_asientos();
  void set_cant_asientos(int);
  
  string to_string()override;


};


#endif //BASIC_00_EXAMPLE_BUS_H
