#ifndef POLLEN_HPP
#define POLLEN_HPP

#include "Harvest.hpp"


class Pollen : public Harvest {
public:
	Pollen() :Harvest("Pollen") { }
private:
	void setName(const char* name) {
		Harvest::setName(name);
	}
};


#endif // !POLLEN_HPP
