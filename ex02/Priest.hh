/*
** Priest.hh for Mahe/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d09/ex00/Priest.hh
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Thu Jan 14 12:31:02 2016 petit_x - Marlon Petit
** Last update Thu Jan 14 18:24:03 2016 Marlon Petit
*/

#ifndef PRIEST_HH_
# define PRIEST_HH_

#include <iostream>
#include <string>

#include "Character.hh"
#include "Warrior.hh"
#include "Mage.hh"

class	Priest : virtual public Character, public Mage
{
public:
  Priest(const std::string &name, int level);
  ~Priest();
  int			CloseAttack();
  int			RangeAttack();
  void			Heal();
};

#endif /* !PRIEST_HH_ */
