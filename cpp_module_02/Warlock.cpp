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
  book.learnSpell(s);
}

void Warlock::forgetSpell(const std::string &n)
{
  book.forgetSpell(n);
}

void Warlock::launchSpell(const std::string &n, ATarget &a)
{
  ASpell *sp = this->book.createSpell(n);
  if (sp)
    sp->launch(a);
}
