#include <bits/stdc++.h>
#include "person.hpp"
#include "student.hpp"
#include "Animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

using namespace std;

int main()
{
	/*person s1;
	string name;
	string Gender;
	string Address;

	int age = 0;

	cout << "Enter Your Name :" << endl;
	cin >> name;
	s1.setName(name);

	cout << "Enter Your Age :" << endl;
	cin >> age;
	s1.setAge(age);

	cout << "Enter Your Gender :" << endl;
	cin >> Gender;
	s1.setGender(Gender);

	cout << "Enter Your Address :" << endl;
	cin >> Address;
	s1.setAddress(Address);
	s1.getAddress();

	s1.display();
	*/

	Animal *Animalptr;
	Dog myDog;
	Cat myCat;
	Animalptr = &myCat;
	Animalptr->Animalsound(); // This should output "Meow Meow" because Animalptr points to a Cat object

	// Optional: Uncomment the following lines to demonstrate sound of Dog
	Animalptr = &myDog;
	Animalptr->Animalsound(); // This should output "Hoo Hoo" because Animalptr points to a Dog object

	return 0;
}
