#ifndef BASIC_00_EXAMPLE_CARRO_H
#define BASIC_00_EXAMPLE_CARRO_H

#include "Vehiculo.h"
#include<string>
using namespace std;

class Carro : public Vehiculo{

  private:
  string marca;
  string modelo;
  Vehiculo* vehiculo;

  public:
  Carro();
  Carro(string,string);
  Carro(const Motor &motor, Conductor *conductor, int placa, const string &marca, const string &modelo,Vehiculo *vehiculo);

  string get_marca();
  string get_modelo();
  
  void set_marca(string);
  void set_modelo(string);
  
  string to_string () const override;
};


#endif //BASIC_00_EXAMPLE_CARRO_H
