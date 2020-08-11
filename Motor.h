//
// Created by Al404 on 11/8/2020.
//

#ifndef BASIC_00_EXAMPLE_MOTOR_H
#define BASIC_00_EXAMPLE_MOTOR_H
#include<string>

class Motor {

 int cilindraje;
 std::string marca;

 public:
	 Motor(int = 0, std::string = " ");

	 std::string get_marca();
	 void set_marca(std::string);

	 int get_cilindraje();
	 void set_cilindraje(int);
};


#endif //BASIC_00_EXAMPLE_MOTOR_H
