/*
** Paladin.hh for Mahe/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d09/ex00/Paladin.hh
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Thu Jan 14 12:31:02 2016 petit_x - Marlon Petit
** Last update Thu Jan 14 22:24:58 2016 Marlon Petit
*/

#ifndef PALADIN_HH_
# define PALADIN_HH_

#include <iostream>
#include <string>

#include "Character.hh"
#include "Warrior.hh"
#include "Mage.hh"
#include "Priest.hh"
#include "Paladin.hh"

class	Paladin : virtual public Warrior, virtual public Priest
{
public:
  Paladin(const std::string &name, int level);
  ~Paladin();
  void			Heal();
  void			RestorePower();
  int			RangeAttack();
  int			CloseAttack();
private:
  std::string		_weapon;
};

#endif /* !PALADIN_HH_ */
