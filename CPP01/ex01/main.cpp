
#include"Zombie.hpp"

int main()
{
    Zombie *a = zombieHorde(4, "miski");
    a[0].announce();
    a[1].announce();
    a[2].announce();
    a[3].announce();
    delete[] a;
}