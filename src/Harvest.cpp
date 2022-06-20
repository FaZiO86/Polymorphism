#include "Harvest.hpp"

int Harvest::harvests{0};

int Harvest::howMuch() {
    return Harvest::harvests;
}
