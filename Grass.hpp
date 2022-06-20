#pragma once

#include "Plant.hpp"
#include "seeds.hpp"

class Grass :public Plant {
public:
	Grass():Plant("Grass", 8){}
	Harvest::uPoiner harvest() {
		decreaseHarvest();
		return std::make_unique<Seeds>();
	}
};
