/*
** Warrior.cpp for Warrior/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d09/ex00/Warrior.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Thu Jan 14 12:30:55 2016 petit_x - Marlon Petit
** Last update Thu Jan 14 16:46:30 2016 Marlon Petit
*/

#include "Warrior.hh"

Warrior::Warrior(const std::string &name, int level):Character::Character(name, level)
{
  this->_level = level;
  this->_pv = 100;
  this->_power = 100;
  this->weaponName = "hammer";
  this->_strength = 12;
  this->_stamina = 12;
  this->_intelligence = 6;
  this->_spirit = 5;
  this->_agility = 7;
  this->Range = CLOSE;
  std::cout << "I'm " << getName() << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

Warrior::~Warrior()
{
}

int	Warrior::CloseAttack()
{
  if (getPower() >= 30)
    {
      this->_power -= 30;
      std::cout << getName() << " strikes with his " << this->weaponName << std::endl;
      return (20 + this->_strength);
    }
  std::cout << getName() << " out of power" << std::endl;
  return (0);
}

int	Warrior::RangeAttack()
{
  if (getPower() >= 10)
    this->_power -= 10;
  std::cout << getName() << " intercepts" << std::endl;
  this->Range = CLOSE;
  return (0);
}
