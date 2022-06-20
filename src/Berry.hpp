#ifndef BERRY_HPP
#define BERRY_HPP


#include "Harvest.hpp"

class Berry:public Harvest {
public:
	Berry():Harvest("Berry") {
	}

private:
	void setName(const char *name) {
		Harvest::setName(name);
	}
};


#endif //BERRY_HPP