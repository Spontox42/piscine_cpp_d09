/*
** Warrior.cpp for Warrior/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d09/ex00/Warrior.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Thu Jan 14 12:30:55 2016 petit_x - Marlon Petit
** Last update Thu Jan 14 17:51:20 2016 Marlon Petit
*/

#include "Warrior.hh"

Warrior::Warrior(const std::string &name, int level):Character(name, level)
{
  this->_pv = 100;
  this->_power = 100;
  this->weaponName = "hammer";
  this->_strength = 12;
  this->_stamina = 12;
  this->_intelligence = 6;
  this->_spirit = 5;
  this->_agility = 7;
  this->Range = CLOSE;
  std::cout << "I'm " << this->_name << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

Warrior::~Warrior()
{
}

int	Warrior::CloseAttack()
{
  if (this->_power >= 30)
    {
      this->_power = this->_power - 30;
      std::cout << this->_name << " strikes with his " << this->weaponName << std::endl;
      return (20 + this->_strength);
    }
  std::cout << this->_name << " out of power" << std::endl;
  return (0);
}

int	Warrior::RangeAttack()
{
  if (this->_power >= 10)
    {
      this->_power = this->_power - 10;
      std::cout << this->_name << " intercepts" << std::endl;
      this->Range = CLOSE;
    }
  else
    std::cout << this->_name << " out of power" << std::endl;
  return (0);
}
