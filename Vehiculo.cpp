#include "Vehiculo.h"

Vehiculo::Vehiculo() {}
Vehiculo::Vehiculo(Motor *motor, Conductor *conductor, int placa) : _motor(motor), _conductor(conductor),placa(placa) {}
Vehiculo::~Vehiculo(){}

void Vehiculo::setMotor(Motor *motor) {_motor = motor;}
void Vehiculo::setConductor(Conductor *conductor) {_conductor = conductor;}
void Vehiculo::setPlaca(int placa) {Vehiculo::placa = placa;}

Motor *Vehiculo::getMotor() const {return _motor;}
Conductor *Vehiculo::getConductor() const {return _conductor;}
int Vehiculo::getPlaca() const {return placa;}

int Vehiculo::to_string() const {}