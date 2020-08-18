#include "Carro.h"

 Carro::Carro(){
   marca="";
   modelo="";
 }
 Carro::Carro(string mar,string mod){
   marca = mar;
   modelo = mod;
 }

Carro::Carro(const Motor &motor, Conductor *conductor, int placa, const string &marca, const string &modelo,Vehiculo *vehiculo):
        Vehiculo(motor, conductor, placa), marca(marca), modelo(modelo),vehiculo(vehiculo) {}

 string Carro::get_marca(){return marca;}
 string Carro::get_modelo(){return modelo;}
  
 void Carro::set_marca(string mar){
   marca=mar;
 }
 void Carro::set_modelo(string mod){
   modelo=mod;
 }
  
  string Carro::to_string() const {
    stringstream s;
    s<<"Marca: "<<marca<<endl;
    s<<"Modelo: "<<modelo<<endl;
    return s.str();
  }