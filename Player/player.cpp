#include <iostream>
#include "player.h"

player::player(std::string name) : m_name(name)
{
}

void player::move()
{
	std::cout << m_name << " move..." << std::endl;
}

void player::attack()
{
	std::cout << m_name << " attack..." << std::endl;
}