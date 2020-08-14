#ifndef BASIC_00_EXAMPLE_CONDUCTOR_H
#define BASIC_00_EXAMPLE_CONDUCTOR_H
#include<iostream>
using namespace std;

class Conductor {
  string nombre;
	string id;

public:
	Conductor(string = " ", string = " ");

	string get_nombre();
	void set_nombre(string);

	string get_id();
	void set_id(string);
};


#endif //BASIC_00_EXAMPLE_CONDUCTOR_H
