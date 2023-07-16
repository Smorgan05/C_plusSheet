#pragma once
#include <string>
using namespace std;

class Person {       // The class
  public:             // Access specifier
    string name;        // Attribute (int variable)
    int number;  // Attribute (string variable)
};

int main () {
  Person Dave;
  Dave.name = "Dave";
  Dave.number = 123;

  Person mike;
  mike.name = "Mike";
  mike.number = 345;
}