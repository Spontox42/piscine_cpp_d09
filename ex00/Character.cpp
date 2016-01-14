/*
** Character.cpp for Character/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d09/ex00/Character.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Thu Jan 14 12:30:55 2016 petit_x - Marlon Petit
** Last update Thu Jan 14 12:47:06 2016 Marlon Petit
*/

Character::Character(const std::string &name, int level)
{
  this->_name = *name;
  this->_level = level;
  this->_pv = 100;
  this->_power = 100;
}

const std::string	&Character::getName() const
{
  return (&this->_name);
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
  
}
