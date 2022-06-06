#pragma once

#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
private:
  std::string name;
  std::string effects;

public:
  const std::string &getName() const;
  const std::string &getEffects() const;
  ASpell(const std::string &n, const std::string &e);
  virtual ~ASpell();
  void launch(const ATarget &a) const;
  virtual ASpell *clone( void ) const = 0;
};
