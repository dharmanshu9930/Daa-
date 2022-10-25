#include<iostream>
using namespace std;
class ClassB;
class ClassA
{
 private:
 int numA;
 public:
 ClassA():numA(12)
 {}
 friend int add (ClassA,ClassB);
};
class ClassB
{
 private:
 int numB;
 public:
 ClassB() : numB(1)
 {}
 friend int add(ClassA,ClassB);
};
int add(ClassA objectA, ClassB objectB)
{
 return(objectA.numA + objectB.numB);
}
int main()
{
 ClassA objA;
 ClassB objB;
 cout<<"Sum: "<<add(objA,objB);
 return 0; 
}
