#include "Motor.h"

Motor::Motor(int _cilindraje, string _marca){
  cilindraje=_cilindraje;
  marca=_marca;
}

int Motor::get_cilindraje() { return cilindraje; }
void Motor::set_cilindraje(int x) { cilindraje = x; }

string Motor::get_marca() { return marca; }
void Motor::set_marca(string x) { marca = x; }





