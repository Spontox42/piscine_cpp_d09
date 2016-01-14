/*
** Hunter.hh for Mahe/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d09/ex00/Hunter.hh
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Thu Jan 14 12:31:02 2016 petit_x - Marlon Petit
** Last update Thu Jan 14 22:43:46 2016 Marlon Petit
*/

#ifndef HUNTER_HH_
# define HUNTER_HH_

#include <iostream>
#include <string>

#include "Character.hh"
#include "Warrior.hh"
#include "Mage.hh"
#include "Priest.hh"
#include "Paladin.hh"

class	Hunter : virtual public Warrior
{
public:
  Hunter(const std::string &name, int level);
  ~Hunter();
  void			Heal();
  void			RestorePower();
  int			RangeAttack();
  int			CloseAttack();
};

#endif /* !HUNTER_HH_ */
