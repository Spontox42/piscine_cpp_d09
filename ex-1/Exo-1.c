/*
** Exo-1.c for Exo-1/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d09/ex-1/Exo-1.c
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Thu Jan 14 11:32:54 2016 petit_x - Marlon Petit
** Last update Thu Jan 14 15:37:01 2016 Marlon Petit
*/

#include "Exo-1.h"

static void   KoalaInitializer(t_koala *, char *, char);
static void    CthulhuInitializer(t_cthulhu *this);

static void	CthulhuInitializer(t_cthulhu *this)
{
  this->m_name = malloc(sizeof(char) * 7);
  bzero(this->m_name, 7);
  this->m_name = strcpy(this->m_name, "Cthulhu");
  this->m_power = 42;
}

t_cthulhu	*NewCthulhu()
{
  t_cthulhu	*new;

  new = malloc(sizeof(t_cthulhu));
  printf("----\nBuilding Cthulhu\n");
  CthulhuInitializer(new);
  return (new);
}

void	PrintPower(t_cthulhu *this)
{
  printf("Power => %i\n", this->m_power);
}

void	Attack(t_cthulhu *this)
{
  if (this->m_power >= 42)
    {
      this->m_power -= 42;
      printf("%s attacks and destroys the city\n", this->m_name);
    }
  else
    printf("%s can't attack, he doesn't have enough power\n", this->m_name);
}

void	Sleeping(t_cthulhu *this)
{
  this->m_power += 42000;
  printf("%s sleeps\n", this->m_name);
}

static void     KoalaInitializer(t_koala *this, char *_name, char _isALegend)
{
  t_cthulhu	new;

  new.m_power = 42;
  new.m_name = _name;
  this->m_isALegend = _isALegend;
  if (this->m_isALegend == 0)
    new.m_power = 0;
  this->m_parent = new;
}

t_koala		*NewKoala(char *name, char _isALegend)
{
  t_koala	*new;

  new = malloc(sizeof(t_koala));
  printf("----\nBuilding Cthulhu\n");
  KoalaInitializer(new, name, _isALegend);
  printf("Building %s\n", name);
  return (new);
}

void	Eat(t_koala *this)
{
  this->m_parent.m_power += 42;
  printf("%s eats\n", this->m_parent.m_name);
}
