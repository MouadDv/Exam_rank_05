#ifndef WARLOCK_H
#define WARLOCK_H

#include <string>
#include <iostream>
#include <map>
#include "ASpell.hpp"

class Warlock {
public:
  Warlock(const std::string &n, const std::string &t);
  ~Warlock();
  const std::string &getName( void ) const;
  const std::string &getTitle( void ) const;
  void setTitle(const std::string &t);
  void introduce() const;

  void learnSpell(ASpell *s);
  void forgetSpell(const std::string &n);
  void launchSpell(const std::string &n, ATarget &a);


private:
  std::string name;
  std::string title;
  std::map<std::string, ASpell *> spells;

  Warlock();
  Warlock(const Warlock &s);
  Warlock &operator=(const Warlock &s);

};

#endif /* WARLOCK_H */
