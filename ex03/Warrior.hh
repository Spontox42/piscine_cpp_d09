/*
** Warrior.hh for Warrior/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d09/ex00/Warrior.hh
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Thu Jan 14 12:31:02 2016 petit_x - Marlon Petit
** Last update Thu Jan 14 18:41:28 2016 Marlon Petit
*/

#ifndef WARRIOR_HH_
# define WARRIOR_HH_

#include <iostream>
#include <string>
#include "Character.hh"

class	Warrior : virtual public Character
{
public:
  Warrior(const std::string &name, int level);
  ~Warrior();
  int			CloseAttack();
  int			RangeAttack();
protected:
  std::string		weaponName;
};

#endif /* !WARRIOR_HH_ */
