#include "ATarget.hpp"

ATarget::ATarget(const std::string &t)
{
  this->type = t;
}

ATarget::~ATarget()
{
}

const std::string &ATarget::getType() const
{
  return (this->type);
}


void ATarget::getHitBySpell(const ASpell &s) const
{
  std::cout << this->type << " has been " << s.getEffects() << "!\n";
}
