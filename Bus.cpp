#include "Bus.h"
#include<sstream>

  Bus::Bus(double _tarica, int _asientos){
    tarifa=_tarifa;
    cant_asientos=_asientos;
  }
  Bus::Bus(double _tarifa,int _asientos,Vehiculo v){
    tarifa=_tarifa;
    cant_asientos=_asientos;
  }

  double Bus::get_tarifa(){return tarifa;}
  void Bus::set_tarifa(double x){tarifa=x;}

  int Bus::get_cant_asientos(){return cant_asientos;}
  void Bus::set_cant_asientos(int x){cant_asientos=x;}
  
  string Bus::to_string()override{
    stringstream s;
    s<<"Tarifa : "<<get_tarifa()<<endl;
    s<<"Cantidad de asientos : "<<get_cant_asientos()<<endl;
    return s.str();
  }
