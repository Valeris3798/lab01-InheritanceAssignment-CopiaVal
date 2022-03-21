

#ifndef LAB01_INHERITANCE_BASE_H
#define LAB01_INHERITANCE_BASE_H


#include <iostream>  // allows program to output data to the screen

struct Base {
    /*
     * //Esta NO es una buen metodo de una clase base pues no solo se declara,
     * tambien se programa aunque sea vacio.
     * virtual void do_something(){}
     */
    /*
     * Esta SI es un buen metodo de una clase base pues es un metodo
     * abstracto que hace que sea unicamente heredado y regla para
     * las clases hijas
     * virtual void do_something() =0;
     * */

    virtual void do_something() =0;

    Base();

    virtual ~Base();
};


#endif //LAB01_INHERITANCE_BASE_H
