#include <iostream>
#include "student.h"
#include "animal.h"
#include "cat.h"
#include "dog.h"
#include "Rectangle.h"
using namespace std;

int main() {
    // animal* AnimalPtr;
    // cat myCat;
    // AnimalPtr = &myCat;
    // AnimalPtr->animalSound();

    // dog myDog;
    // AnimalPtr = &myDog;
    // AnimalPtr->animalSound();

    Rectangle r1(20, 35);
    Rectangle r2(80, 78);

    Rectangle r3 = ++r1;
    r3.Display();

    Rectangle sum = r1 + r2;
    sum.Display();

    // Creating another instance with a different name
    Rectangle R1(40, 50);
    cout << "wqs" << endl;

    return 0;
}
