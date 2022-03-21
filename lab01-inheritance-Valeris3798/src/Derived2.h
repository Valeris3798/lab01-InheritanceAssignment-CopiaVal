

#ifndef LAB01_INHERITANCE_DERIVED2_H
#define LAB01_INHERITANCE_DERIVED2_H
#include <iostream>  // allows program to output data to the screen
#include "Base.h"

struct Derived2 :  Base {
    /* Dado a que tiene otro nombre no iba a funcionar la herencia, esto porque tiene que llamarse igual
    * virtual void do_semothing() {
       std::cout << "Derived1!!!" << std::endl;/
   }
    * */
public:
    virtual void do_something();
};


#endif //LAB01_INHERITANCE_DERIVED2_H
