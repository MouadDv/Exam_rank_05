#pragma once

#include "ATarget.hpp"
#include <map>
class TargetGenerator
{
public:
  TargetGenerator();
  ~TargetGenerator();
  void learnTargetType(ATarget* a);
  void forgetTargetType(std::string const &s);
  ATarget* createTarget(std::string const &s);

private:
  std::map<std::string, ATarget *> targets;
  TargetGenerator & operator=(const TargetGenerator &s);
  TargetGenerator(const TargetGenerator &s);

};
