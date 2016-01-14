/*
** Hunter.cpp for Hunter/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d09/ex00/Hunter.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Thu Jan 14 12:30:55 2016 petit_x - Marlon Petit
** Last update Thu Jan 14 22:45:18 2016 Marlon Petit
*/

#include "Character.hh"
#include "Warrior.hh"
#include "Mage.hh"
#include "Priest.hh"
#include "Paladin.hh"
#include "Hunter.hh"

Hunter::Hunter(const std::string &name, int level):Character(name, level), Warrior(name, level)
{
  this->_pv = 100;
  this->_power = 100;
  this->_strength = 9;
  this->_stamina = 9;
  this->_intelligence = 5;
  this->_spirit = 6;
  this->_agility = 24;
  this->weaponName = "sword";
  this->Range = CLOSE;
  std::cout << this->_name << " is born from a tree" << std::endl;
}

Hunter::~Hunter()
{
}

void    Hunter::Heal()
{
  this->_pv += 50;
  if (this->_pv > 100)
    this->_pv = 100;
  std::cout << this->_name << " takes a potion" << std::endl;
}

int     Hunter::RangeAttack()
{
  if (this->_power >= 25)
    {
      this->_power = this->_power - 25;
      std::cout << this->_name << " uses his bow" << std::endl;
      return (20 + this->_agility);
    }
  else
    std::cout << this->_name << " out of power" << std::endl;
  return (0);
}

int     Hunter::CloseAttack()                                                                           
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

void	Hunter::RestorePower()
{
  this->_power = 100;
  std::cout << getName() << " meditates" << std::endl;
}
