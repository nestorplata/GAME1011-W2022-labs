#pragma once

#include "Orc.h"
class DarkOrc : public Orc
{
public:
	DarkOrc() {
		setWarcry("I conjure a Discord mod");
		magic = " \"Discord mod bans you from the server\"";
	}

	void Attack() {
		std::cout << "Dark Orc: " << getWarcry() << magic << std::endl;
		std::cout << "Deals emotional damage to opponent" << std::endl;
	}
private:
	std::string magic;
};