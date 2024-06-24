#ifndef BUSH_HPP
#define BUSH_HPP

#include "Plant.hpp"
#include "Berry.hpp"

class Bush:public Plant {
public:
	Bush():Plant("Bush", 30) {
	}
	Harvest::uPoiner harvest() {
		decreaseHarvest();
		return std::make_unique<Berry>();
	}
};

#endif // !BUSH_HPP