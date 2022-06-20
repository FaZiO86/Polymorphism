#ifndef PLANT_HPP
#define PLANT_HPP

#include <string>
#include <memory>
#include "Harvest.hpp"

class Plant {
public:
	Plant(const char *name,int harvestAmount)
		:name_(name),
		countHarvest_(harvestAmount)
	{
		++plants_;
	}

	const char *getName()const {
		return name_.c_str();
	}

	void setName(const char *name) {
		name_ = name;
	}

	virtual Harvest::uPoiner harvest() = 0;

	int muchHarvest()const {
		return countHarvest_;
	}

	static int howMuch();

	virtual ~Plant() {
		--plants_;
	}

protected:
	void decreaseHarvest() {
		countHarvest_ -= 1;
	}

private:
	std::string name_;
	int countHarvest_;
	static int plants_;
};


#endif // !PLANT_HPP