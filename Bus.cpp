#include "Bus.h"
#include<sstream>

Bus::Bus(const Motor &motor, Conductor *conductor, int placa, double tarifa, int cantAsientos) :
Vehiculo(motor,conductor,placa),tarifa(tarifa),cant_asientos(cantAsientos) {}

void Bus::setTarifa(double tarifa) {Bus::tarifa = tarifa;}
void Bus::setCantAsientos(int cantAsientos) {cant_asientos = cantAsientos;}

double Bus::getTarifa() const {return tarifa;}
int Bus::getCantAsientos() const {return cant_asientos;}

string Bus::to_string() const{
    stringstream b;Conductor*punt;Motor*mo;
    b<<"Conductor: "<<punt->get_id()<<", "<<punt->get_nombre()<<endl;
    b<<"Placa: "<<getPlaca();
    b<<"Marca del Motor: "<<mo->get_marca();
    b<<"Tarifa: "<<tarifa<<endl;
    b<<"Cantidad Asientos: "<<cant_asientos<<endl;
    return b.str();
}