

#ifndef LAB01_INHERITANCE_DERIVED1_H
#define LAB01_INHERITANCE_DERIVED1_H
#include <iostream>  // allows program to output data to the screen
#include "Base.h"

struct Derived1 :  Base {
public:

    /* Dado a que tiene otro nombre no iba a funcionar la herencia, esto porque tiene que llamarse igual
     * virtual void do_semothing() {
        std::cout << "Derived1!!!" << std::endl;
    }
     * */

    virtual void do_something();

    Derived1();

    virtual ~Derived1();
};


#endif //LAB01_INHERITANCE_DERIVED1_H
