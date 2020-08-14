#include "Carro.h"

 Carro::Carro(){
   marca="";
   modelo="";
 }
 Carro::Carro(string mar,string mod){
   marca = mar;
   modelo = mod;
 }
 Carro::Carro(string mar,string mod,Vehiculo* vehiculo){
   marca=mar;
   modelo=mod;
 }

 string Carro::get_marca(){return marca;}
 string Carro::get_modelo(){return modelo;}
  
 void Carro::set_marca(string mar){
   marca=mar;
 }
 void Carro::set_modelo(string mod){
   modelo=mod;
 }
  
  string Carro::to_string() override{
    stringstream s;
    s<<"Marca: "<<marca<<endl;
    s<<"Modelo: "<<modelo<<endl;
    return s.str();
  }