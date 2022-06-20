#ifndef SEED_HPP
#define SEED_HPP
#include "Harvest.hpp"

class Seeds :public Harvest
{
public:
	Seeds() :Harvest("Seeds") {}
private:
	void setName(const char* name)
	{
		Harvest::setName(name);
	}
};
#endif