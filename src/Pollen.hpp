#ifndef POLLEN_HPP
#define POLLEN_HPP

#include "Harvest.hpp"


class Pollen: public Harvest {
public:
	Pollen() :Harvest("pollen") { }
private:
	void setName(const char* name) {
		Harvest::setName(name);
	}
};


#endif 
