#ifndef PLANT_HPP
#define PLANT_HPP

#include <string>
#include <memory>
#include "Harvest.hpp"

class Plant {
public:
	Plant(const char *name,int harvestAmount)
		:name(name),
		countHarvest(harvestAmount)
	{
		++plants;
	}

	const char *getName()const {
		return name.c_str();
	}

	void setName(const char *name) {
		this->name = name;
	}

	virtual Harvest::uPoiner harvest() = 0;

	int muchHarvest()const {
		return countHarvest;
	}

	static int howMuch();

	virtual ~Plant() {
		--plants;
	}

protected:
	void decreaseHarvest() {
		countHarvest -= 1;
	}

private:
	std::string name;
	int countHarvest;
	static int plants;
};


#endif // !PLANT_HPP