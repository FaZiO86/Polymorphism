#include "Programm.hpp"

Environment Init() {
	Environment result{std::make_shared<std::vector<std::unique_ptr<Plant>>>()};
	for (size_t i = 0; i < 10; i++) {
		result->emplace_back(std::make_unique<Tree>());
	}
	for (size_t i = 0; i < 7; i++) {
		result->emplace_back(std::make_unique<Bush>());
	}
	for (size_t i = 0; i < 7; i++) {
		result->emplace_back(std::make_unique<Grass>());
	}
	for (size_t i = 0; i < 7; i++) {
		result->emplace_back(std::make_unique<Flower>());
	}
	std::shuffle(result->begin(), result->end(), std::random_device());
	return result;
}


