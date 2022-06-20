#ifndef SEMEN_H
#define SEMEN_H

#include "Harvest.hpp"

class Semen: public Harvest
{
public:
	Semen() :Harvest("Semen") {

	}

private:
	void setName(const char* name);
};

#endif // !FRUIT_HPP