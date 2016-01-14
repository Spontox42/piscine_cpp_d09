/*
** Paladin.cpp for Paladin/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d09/ex00/Paladin.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Thu Jan 14 12:30:55 2016 petit_x - Marlon Petit
** Last update Thu Jan 14 22:26:17 2016 Marlon Petit
*/

#include "Character.hh"
#include "Warrior.hh"
#include "Mage.hh"
#include "Priest.hh"
#include "Paladin.hh"

Paladin::Paladin(const std::string &name, int level):Character(name, level), Warrior(name, level), Mage(name, level), Priest(name, level)
{
  this->_pv = 100;
  this->_power = 100;
  this->_strength = 9;
  this->_stamina = 10;
  this->_intelligence = 10;
  this->_spirit = 10;
  this->_agility = 2;
  this->_weapon = "hammer";
  this->Range = CLOSE;
  std::cout << "the light falls on " << this->_name << std::endl;
}

Paladin::~Paladin()
{
}

void    Paladin::Heal()
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

int     Paladin::RangeAttack()                                                                            {
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

int     Paladin::CloseAttack()                                                                           
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

void	Paladin::RestorePower()
{
  this->_power = 100;
  std::cout << getName() << " eats" << std::endl;
}
