/*
** Mage.hh for Mahe/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d09/ex00/Mage.hh
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Thu Jan 14 12:31:02 2016 petit_x - Marlon Petit
** Last update Thu Jan 14 18:23:27 2016 Marlon Petit
*/

#ifndef MAGE_HH_
# define MAGE_HH_

#include <iostream>
#include <string>

#include "Character.hh"
#include "Warrior.hh"

class	Mage : virtual public Character
{
public:
  Mage(const std::string &name, int level);
  ~Mage();
  int			CloseAttack();
  int			RangeAttack();
  void			RestorePower();
};

#endif /* !MAGE_HH_ */
