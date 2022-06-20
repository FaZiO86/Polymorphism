#ifndef FLOWER_HPP
#define FLOWER_HPP

#include "Plant.hpp"
#include "Pollen.hpp"

class Flower :public Plant {
public:
	Flower() :Plant("Flower", rand() % 49 + 1) {
	}
	Harvest::uPoiner harvest() {
		decreaseHarvest();
		return std::make_unique<Pollen>();
	}
};


#endif // !FLOWER_HPP