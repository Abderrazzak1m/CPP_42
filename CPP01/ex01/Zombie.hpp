#include<iostream>
#include <new>
class Zombie
{
private:
    std::string name;
public:
    Zombie();
    ~Zombie();
    void announce( void );
    std::string getName();
   void setName(std::string name);
    
};
Zombie* zombieHorde( int N, std::string name );