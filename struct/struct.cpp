#include <iostream>
#include<string>
using namespace  std;
struct student
{
    struct fullname
    {
        string fname;
        string lname;
    };
    int number;
    float media;
    fullname name;
    /*void fun()
    {
    cout << name<<endl;
    cout << number << endl;
    cout << media << endl;
    }*/    
};

int main()
{
    student s1;
    student s2;
    s1 = { 20,2,{"assem","assem"} };
    s2 = s1;
    cout << s2.name.fname;
    student* s3;
    s3 = &s2;
    cout << s3->name.fname;
    /* s1.name = "assem";
    s1.number = 20;
    s1.media = 2;*/
    /*s1 = { 20,"assem",2 };
    s2 = { 19,"george",1.8 };*/
   /* s1 = { 20,2,{"assem","assem"}};
    cout<<s1.name.fname;*/
    /*if (s1.media > s2.media)
        cout << s1.name<<" first place";
    else
        cout << s2.name<<" first place";*/

    /*cout << s1.name;
    cout << s1.number;
    cout << s1.media;*/
    /*s1.fun();
    s2.fun();*/
    /*s1.name.fname="taha";
    s1.name.lname = "omar";
    cout << s1.name.fname << endl;

    cout << s1.name.lname << endl;*/
}