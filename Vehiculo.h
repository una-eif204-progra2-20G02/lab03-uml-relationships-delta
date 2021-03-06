#ifndef BASIC_00_EXAMPLE_VEHICULO_H
#define BASIC_00_EXAMPLE_VEHICULO_H

#endif //BASIC_00_EXAMPLE_VEHICULO_H

#include "sstream"
#include "Motor.h"
#include "Conductor.h"

class Vehiculo{
    Motor _motor;
    Conductor*_conductor;
    int placa;
public:
    Vehiculo();
    Vehiculo(Motor,Conductor,int);
    Vehiculo(Motor, Conductor *conductor, int placa);
    ~Vehiculo();

    void setMotor(Motor motor);
    void setConductor(Conductor *conductor);
    void setPlaca(int placa);

    Motor getMotor() const;
    Conductor *getConductor() const;
    int getPlaca() const;

    virtual std::string to_string()const = 0;
};
