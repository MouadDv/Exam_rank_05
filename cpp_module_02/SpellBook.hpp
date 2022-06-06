#pragma once

#include "ASpell.hpp"
#include <map>

class SpellBook
{
public:
  SpellBook();
  ~SpellBook();
  void learnSpell(ASpell* s);
  ASpell* createSpell(std::string const &s);
  void forgetSpell(std::string const &s);
private:
  SpellBook &operator=(const SpellBook &s);
  SpellBook(const SpellBook &s);
  std::map<std::string, ASpell *> spells;
};
