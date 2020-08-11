#ifndef BASIC_00_EXAMPLE_CONDUCTOR_H
#define BASIC_00_EXAMPLE_CONDUCTOR_H
#include<string>

class Conductor {
  std::string nombre;
	std::string id;

public:
	Conductor(std::string = " ", std::string = " ");

	std::string get_nombre();
	void set_nombre(std::string);

	std::string get_id();
	void set_id(std::string);
};


#endif //BASIC_00_EXAMPLE_CONDUCTOR_H
