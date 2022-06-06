#ifndef WARLOCK_H
#define WARLOCK_H

#include <string>
#include <iostream>

class Warlock {
public:
  Warlock(const std::string &n, const std::string &t);
  ~Warlock();
  const std::string &getName( void ) const;
  const std::string &getTitle( void ) const;
  void setTitle(const std::string &t);
  void introduce() const;
private:
  std::string name;
  std::string title;
  Warlock();
  Warlock(const Warlock &s);
  Warlock &operator=(const Warlock &s);

};

#endif /* WARLOCK_H */
