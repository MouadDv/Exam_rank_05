#include "TargetGenerator.hpp"


TargetGenerator::TargetGenerator()
{

}

TargetGenerator::~TargetGenerator()
{
  std::map<std::string, ATarget *>::iterator it = this->targets.begin();

  while(it != this->targets.end())
    {
      delete it->second;
      it++;
    }
  this->targets.clear();
}

void TargetGenerator::learnTargetType(ATarget* a)
{
  this->targets.insert(std::pair<std::string, ATarget *>(a->getType(), a->clone()));
}

void TargetGenerator::forgetTargetType(std::string const &s)
{
  std::map<std::string, ATarget *>::iterator it = this->targets.find(s);

  if (it != this->targets.end())
    delete it->second;
  this->targets.erase(s);
}

ATarget* TargetGenerator::createTarget(std::string const &s)
{
  std::map<std::string, ATarget *>::iterator it = this->targets.find(s);

  if (it != this->targets.end())
    return(it->second);

  return (NULL);
}
