#include "Motor.h"

Motor::Motor(int _cilindraje, std::string _marca){
  cilindraje=_cilindraje;
  marca=_marca;
}

int Motor::get_cilindraje() { return cilindraje; }
void Motor::set_cilindraje(int x) { cilindraje = x; }

std::string Motor::get_marca() { return marca; }
void Motor::set_marca(std::string x) { marca = x; }
