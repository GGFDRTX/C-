#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
public:
     void Animalsound() const override;
};

#endif // CAT_HPP