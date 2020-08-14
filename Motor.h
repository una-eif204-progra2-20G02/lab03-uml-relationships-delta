#ifndef BASIC_00_EXAMPLE_MOTOR_H
#define BASIC_00_EXAMPLE_MOTOR_H
#include<iostream>
using namespace std;

class Motor {

 int cilindraje;
 string marca;

 public:
	 Motor(int = 0, string = " ");

	 string get_marca();
	 void set_marca(string);

	 int get_cilindraje();
	 void set_cilindraje(int);
};



#endif //BASIC_00_EXAMPLE_MOTOR_H
