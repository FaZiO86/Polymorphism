#pragma once
#include "Plant.hpp"
#include "Seed.hpp"

class Grass :public Plant
{
public:
	Grass() :Plant("grass", 40) {}
	Harvest::uPoiner harvest()
	{
		decreaseHarvest();
		return std::make_unique<Seed>();
	}
};
#endif