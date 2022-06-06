#include "SpellBook.hpp"

SpellBook::SpellBook()
{}
SpellBook::~SpellBook()
{
  std::map<std::string, ASpell *>::iterator it = this->spells.begin();

  while (it != this->spells.end())
    {
      delete it->second;
      it++;
    }
  this->spells.clear();
}
void SpellBook::learnSpell(ASpell *s)
{
  if (s)
    this->spells.insert(std::pair<std::string, ASpell *>(s->getName(), s->clone()));
}

ASpell* SpellBook::createSpell(std::string const &s)
{
  std::map<std::string, ASpell *>::iterator it = this->spells.find(s);

  if(it != this->spells.end())
    return (it->second);
  return NULL;
}

void SpellBook::forgetSpell(std::string const &s)
{
  std::map<std::string, ASpell *>::iterator it = this->spells.find(s);
  if (it != this->spells.end())
    delete it->second;
  this->spells.erase(s);
}
