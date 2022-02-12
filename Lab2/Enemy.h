#pragma once


#include <iostream>
#include <string>

class Enemy{
public:
	Enemy() {
		Damage = 10;
		Warcry = "Roar!";
	}

	int getDamage() { return Damage; }
	std::string getWarcry() { return Warcry; }

	void setDamage(int points) { Damage = points; }
	void setWarcry(std::string roar ) { Warcry = roar; }

	virtual void Attack() = 0;
	//std::cout << "Enemy: " << Warcry << std::endl;
	//std::cout << "Deals " << Damage << " Damage To Oponent " << std::endl;

private:
	int Damage;
	std::string Warcry;


};
