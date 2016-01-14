/*
** Mage.cpp for Mage/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d09/ex00/Mage.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Thu Jan 14 12:30:55 2016 petit_x - Marlon Petit
** Last update Thu Jan 14 22:31:11 2016 Marlon Petit
*/

#include "Character.hh"
#include "Warrior.hh"
#include "Mage.hh"

Mage::Mage(const std::string &name, int level):Character(name, level)
{
  this->_pv = 100;
  this->_power = 100;
  this->_strength = 6;
  this->_stamina = 6;
  this->_intelligence = 12;
  this->_spirit = 11;
  this->_agility = 7;
  this->Range = CLOSE;
  std::cout << this->_name << " teleported" << std::endl;
}

Mage::~Mage()
{
}

void	Mage::RestorePower()
{
  this->_power += (50 + this->_intelligence);
  if (this->_power > 100)
    this->_power = 100;
  std::cout << getName() << " takes a mana potion" << std::endl;
}

int	Mage::CloseAttack()
{
  if (this->_power >= 10)
    {
      this->_power = this->_power - 10;
      std::cout << this->_name << " blinks" << std::endl;
      this->Range = RANGE;
    }
  else
    std::cout << this->_name << " out of power" << std::endl;
  return (0);
}

int	Mage::RangeAttack()
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
