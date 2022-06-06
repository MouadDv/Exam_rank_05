#include "Warlock.hpp"

Warlock::Warlock(const std::string &n, const std::string &t)
{
  this->name = n;
  this->title = t;
  std::cout << this->name << ": This looks like another boring day.\n";
}
Warlock::~Warlock()
{
  std::cout << this->name << ": My job here is done!\n";
}
const std::string &Warlock::getName( void ) const
{
  return (this->name);
}
const std::string &Warlock::getTitle( void ) const
{
  return (this->title);
}
void Warlock::setTitle(const std::string &t)
{
  this->title = t;
}

void Warlock::introduce() const
{
  std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";
}


void Warlock::learnSpell(ASpell *s)
{
  if (s)
    this->spells.insert(std::pair<std::string, ASpell *>(s->getName(), s->clone()));
}

void Warlock::forgetSpell(const std::string &n)
{
  std::map<std::string, ASpell *>::iterator it = this->spells.find(n);

  if (it != this->spells.end())
    delete it->second;
  this->spells.erase(n);
}

void Warlock::launchSpell(const std::string &n, ATarget &a)
{
  ASpell *sp = this->spells[n];
  if (sp)
    sp->launch(a);
}
