#pragma once
#include <string>

class player
{
public:
	player(std::string name);
	void move();
	void attack();
	void print();

private:
	std::string m_name;
};