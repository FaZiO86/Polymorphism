#ifndef PROGRAMM_HPP
#define PROGRAMM_HPP

#include <vector>
#include <memory>
#include <algorithm>

#include "Harvest.hpp"
#include "Plant.hpp"
#include "Tree.hpp"
#include "Bush.hpp"
#include "Grass.hpp"
#include "Flower.hpp"

using Environment = std::shared_ptr<std::vector<std::unique_ptr<Plant>>>;
Environment Init();
using Backpack = std::vector<std::unique_ptr<Harvest>>;

#endif // !PROGRAMM_HPP