/*
** Priest.cpp for Priest/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d09/ex00/Priest.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Thu Jan 14 12:30:55 2016 petit_x - Marlon Petit
** Last update Thu Jan 14 18:27:44 2016 Marlon Petit
*/

#include "Character.hh"
#include "Warrior.hh"
#include "Mage.hh"
#include "Priest.hh"

Priest::Priest(const std::string &name, int level):Character(name, level), Mage(name, level)
{
  this->_pv = 100;
  this->_power = 100;
  this->_strength = 4;
  this->_stamina = 4;
  this->_intelligence = 42;
  this->_spirit = 21;
  this->_agility = 2;
  this->Range = CLOSE;
  std::cout << this->_name << " enters in the order" << std::endl;
}

Priest::~Priest()
{
}

void	Priest::Heal()
{
  if (this->_power >= 10)
    {
      this->_power = this->_power - 10;
      this->_pv += 70;
      if (this->_pv > 100)
	this->_pv = 100;
      std::cout << this->_name << " casts a little heal spell" << std::endl;
    }
  else
    std::cout << this->_name << " out of power" << std::endl;
}

int	Priest::CloseAttack()
{
  if (this->_power >= 10)
    {
      this->_power = this->_power - 10;
      std::cout << this->_name << " uses a spirit explosion" << std::endl;
      return (10 + this->_spirit);
    }
  else
    std::cout << this->_name << " out of power" << std::endl;
  return (0);
}

int	Priest::RangeAttack()
{
  if (this->_power >= 25)
    {
      this->_power = this->_power - 25;
      std::cout << this->_name << " launches a fire ball" << std::endl;
      return (20 + this->_spirit);
    }
  else
    std::cout << this->_name << " out of power" << std::endl;
  return (0);
}
