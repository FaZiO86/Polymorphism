#include "Harvest.hpp"

int Harvest::harvests_{0};

int Harvest::howMuch() {
    return Harvest::harvests_;
}
