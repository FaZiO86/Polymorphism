#ifndef HARVEST_HPP
#define HARVEST_HPP

#include <string>
#include <typeinfo>
#include <memory>



class Harvest {
public:
	using uPoiner = std::unique_ptr<Harvest>;
	using shPoiner = std::shared_ptr<Harvest>;
	using wPoiner = std::weak_ptr<Harvest>;


	Harvest(const char *name):name_(name) {
		++harvests_;
	}
	
	const char *getName()const {
		return name_.c_str();
	}

	void setName(const char *name) {
		name_ = name;
	}

	virtual const char *type() {
		return typeid(*this).name();
	}

	virtual ~Harvest(){ 
		--harvests_;
	}
	static int howMuch();
private:
	std::string name_;
	static int harvests_;
};

#endif