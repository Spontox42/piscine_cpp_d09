/*
** Character.hh for Character/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d09/ex00/Character.hh
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Thu Jan 14 12:31:02 2016 petit_x - Marlon Petit
** Last update Thu Jan 14 15:29:04 2016 Marlon Petit
*/

#ifndef CHARACTER_HH_
# define CHARACTER_HH_

#include <iostream>
#include <string>

class	Character
{
public:
  Character(const std::string &name, int level);
  ~Character();
  const std::string	&getName() const;
  int			getLvl() const;
  int			getPv() const;
  int			getPower() const;
  int			CloseAttack();
  int			RangeAttack();
  void			Heal();
  void		        RestorePower();
  void			TakeDamage(int _damage);
  enum			AttackRange{CLOSE, RANGE};
  AttackRange		Range;
private:
  const std::string	_name;
  int			_level;
  int			_pv;
  int			_power;
  int			_strength;
  int			_stamina;
  int			_intelligence;
  int			_spirit;
  int			_agility;
};

#endif /* !CHARACTER_HH_ */
