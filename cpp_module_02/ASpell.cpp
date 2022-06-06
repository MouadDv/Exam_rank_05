#include "ASpell.hpp"


const std::string &ASpell::getName() const
{
  return (this->name);
}

const std::string &ASpell::getEffects() const
{
  return (this->effects);
}
ASpell::ASpell(const std::string &n, const std::string &e)
{
  this->name = n;
  this->effects = e;
}

void ASpell::launch(const ATarget &a) const
{
  a.getHitBySpell(*this);
}


ASpell::~ASpell()
{

}
