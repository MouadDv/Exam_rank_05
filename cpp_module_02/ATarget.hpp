#pragma once

#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class ATarget {
public:
  ATarget(const std::string &t);
  virtual ~ATarget();
  const std::string &getType() const;
  void getHitBySpell(const ASpell &s) const;
  virtual ATarget *clone() const = 0;
private:
  std::string type;

};
