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
};

struct Derived1 :  Base {
public:
    virtual void do_something() {
        std::cout << "Derived1!!!" << std::endl;
    }
};

struct Derived2 :  Base {
    virtual void do_something() {
        std::cout << "Derived2!!!" << std::endl;
    }
};

// function main begins program execution
int main() {
    std::cout << "Welcome to the UNA!" << std::endl;

    Derived1 derived1;
    derived1.do_something();

    Derived2 derived2;
    derived2.do_something();

}  // end function main