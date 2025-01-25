#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
     void Animalsound() const override;
};

#endif // DOG_HPP