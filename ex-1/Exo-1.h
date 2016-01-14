/*
** Exo-1.h for Exo-1/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d09/ex-1/Exo-1.h
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Thu Jan 14 11:32:40 2016 petit_x - Marlon Petit
** Last update Thu Jan 14 12:18:11 2016 Marlon Petit
*/

#ifndef EXO_1_H_
# define EXO_1_H_

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>
#include <stdarg.h>

typedef struct	s_cthulhu
{
  int		m_power;
  char		*m_name;
}		t_cthulhu;

typedef struct	s_koala
{
  t_cthulhu	m_parent;
  char		m_isALegend;
}		t_koala;

t_cthulhu	*NewCthulhu();
void		PrintPower(t_cthulhu *this);
void		Attack(t_cthulhu *this);
void		Sleeping(t_cthulhu *this);
t_koala         *NewKoala(char *name, char _isALegend);
void		Eat(t_koala *this);

#endif /* !EXO_1_H_ */
