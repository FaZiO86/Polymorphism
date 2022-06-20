#ifndef GRASS_H
#define GRASS_H

#include "Plant.hpp"
#include "Semen.h"

class Grass :public Plant
{
public:
	Grass() :Plant("Grass", 10) { }
	Harvest::uPoiner harvest() {
		decreaseHarvest();
		return std::make_unique<Semen>();
	}
};

#endif