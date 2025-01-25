#ifndef Animal_hpp
#define Animal_hpp
#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void Animalsound() const = 0; // Pure virtual function
    virtual ~Animal() {}                  // Pure virtual destructor
};

#endif // ANIMAL_HPP