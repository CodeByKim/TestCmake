#pragma once
#include <string>

class player
{
public:
	player(std::string name);
	void move();
	void attack();

private:
	std::string m_name;
};