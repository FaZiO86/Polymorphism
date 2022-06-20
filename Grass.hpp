#pragma once
#include "Plant.hpp"
#include "Seeds.hpp"
#include "Fruit.hpp"

class Grass : public Plant {
public:
	Grass() :Plant("Grass", 5)
	{
	}
	Harvest::uPoiner harvest()
	{
		decreaseHarvest();
		return std::make_unique<Seeds>();
	}
private:
	void setName(const char* name)
	{
		Plant::setName(name);
	}
};
