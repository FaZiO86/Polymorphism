#ifndef FRUIT_HPP
#define FRUIT_HPP

#include "Harvest.hpp"


class Fruit: public Harvest {
public:
	Fruit():Harvest("fruit"){ }
	//const char *type() {
	//	return Harvest::getName();
	//}
private:
	void setName(const char *name) {
		Harvest::setName(name);
	}
};


#endif // !FRUIT_HPP