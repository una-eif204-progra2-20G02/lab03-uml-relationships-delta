#ifndef BASIC_00_EXAMPLE_BUS_H
#define BASIC_00_EXAMPLE_BUS_H
 
#include"Vehiculo.h"
using namespace std;

class Bus: Vehiculo {

  private:
   double tarifa;
   int cant_asientos;

  public:
  Bus(double = 0, int = 0);
  Bus(const Motor &motor, Conductor *conductor, int placa, double tarifa, int cantAsientos);

  void setTarifa(double tarifa);
  void setCantAsientos(int cantAsientos);

  double getTarifa() const;
  int getCantAsientos() const;

  string to_string() const override;
};

#endif //BASIC_00_EXAMPLE_BUS_H
