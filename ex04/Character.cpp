/*
** Character.cpp for Character/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d09/ex00/Character.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Thu Jan 14 12:30:55 2016 petit_x - Marlon Petit
** Last update Thu Jan 14 17:07:10 2016 Marlon Petit
*/

#include "Character.hh"

Character::Character(const std::string &name, int level):_name(name), _level(level)
{
  this->_pv = 100;
  this->_power = 100;
  this->_strength = 5;
  this->_stamina = 5;
  this->_intelligence = 5;
  this->_spirit = 5;
  this->_agility = 5;
  this->Range = CLOSE;
  std::cout << getName() << " Created" << std::endl;
}

Character::~Character()
{
}

const std::string	&Character::getName() const
{
  return (this->_name);
}

int	Character::getLvl() const
{
  return (this->_level);
}

int	Character::getPv() const
{
  return (this->_pv);
}

int	Character::getPower() const
{
  return (this->_power);
}

int	Character::CloseAttack()
{
  if (getPower() >= 10)
    {
      this->_power -= 10;
      std::cout << getName() << " strikes with a wood stick" << std::endl;
      return (10 + this->_strength);
    }
  std::cout << getName() << " out of power" << std::endl;
  return (0);
}

int	Character::RangeAttack()
{
  if (getPower() >= 10)
    {
      this->_power -= 10;
      std::cout << getName() << " launches a stone" << std::endl;
      return (5 + this->_strength);
    }
  std::cout << getName() << " out of power" << std::endl;
  return (0);
}

void	Character::Heal()
{
  this->_pv += 50;
  if (this->_pv > 100)
    this->_pv = 100;
  std::cout << getName() << " takes a potion" << std::endl;
}

void	Character::RestorePower()
{
  this->_power = 100;
  std::cout << getName() << " eats" << std::endl;
}

void	Character::TakeDamage(int _damage)
{
  this->_pv -= _damage;
  if (getPv() > 0)
    std::cout << getName() << " takes " << _damage << " damage" << std::endl;
  else
    std::cout << getName() << " out of combat" << std::endl;
  if (getPv() < 0)
    this->_pv = 0;
}
