#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

// struct type
struct Persona {
    char nombre[30];
    char apellido[30];
    int edad;
    double sueldo;
};

// enumeration type
enum costIcecream {
    vanilla = 5,
    chocolate = 6,
    butterscotch = 7,
    strawberry = 8,
    oreo = 9
};


int main() {
    // Boolean type
    // bool <name> = true or false
    std::cout << "======================" << std::endl;
    std::cout << "1.- Type Bool" << std::endl;
    std::cout << "======================" << std::endl;
    bool boolean1 = true;
    bool boolean2 = false;
    std::cout << "The value boolean1: " << boolean1 << std::endl;
    std::cout << "The value boolean2: " << boolean2 << std::endl;
    std::cout << "The sizeof bool is: " << sizeof(bool) << std::endl;

    std::cout << "======================" << std::endl;
    std::cout << "2.- Type Char" << std::endl;
    std::cout << "======================" << std::endl;
    std::cout << "The sizeof char is: " << sizeof(char) << std::endl;
    char newline = '\n';
    char tab = '\t';
    char carrige = '\r';
    char alert = '\a';
    char singleQuote = '\'';
    char doubleQuote = '\"';
    char backspace = '\b';
    char backslash = '\\';
    char nullChar = '\0';
    char c1 = '\100';   // char '@'
    char c2 = '\x0040'; // char '@'
    wchar_t chr1 = L'\u79C1';
    wchar_t chr2 = L'私';
    std::cout << "New line" << newline;
    std::cout << "Tabu" << tab << "after tab" << std::endl;
    std::cout << "Old message" << carrige << "New message" << std::endl;
    std::cout << "Alert " << alert << std::endl;
    std::cout << "Single Quote " << singleQuote << "Message" << singleQuote << std::endl;
    std::cout << "Double Quote " << doubleQuote << "Message" << doubleQuote << std::endl;
    std::cout << "Backspace " << backspace << "test" << std::endl;
    std::cout << "Backslash " << backslash << std::endl;
    std::cout << "Null char" << nullChar << std::endl;
    std::cout << "Octal definition: " << c1 << std::endl;
    std::cout << "Hexadecimal definition: " << c2 << std::endl;
    std::cout << "UNICODE definition 1: " << chr1 << std::endl;
    std::cout << "UNICODE definition 2: " << chr2 << std::endl;

    std::cout << "======================" << std::endl;
    std::cout << "3.- Type int" << std::endl;
    std::cout << "======================" << std::endl;
    std::cout << "The sizeof short is: " << sizeof(short) << std::endl;
    std::cout << "The sizeof short int is: " << sizeof(short int) << std::endl;
    std::cout << "The sizeof signed short is: " << sizeof(signed short) << std::endl;
    std::cout << "The sizeof signed short int is: " << sizeof(signed short int) << std::endl;
    std::cout << "The sizeof unsigned short is: " << sizeof(unsigned short) << std::endl;
    std::cout << "The sizeof unsigned short int is: " << sizeof(unsigned short int) << std::endl;
    std::cout << "The sizeof int is: " << sizeof(int) << std::endl;
    std::cout << "The sizeof signed is: " << sizeof(signed) << std::endl;
    std::cout << "The sizeof signed int is: " << sizeof(signed int) << std::endl;
    std::cout << "The sizeof unsigned is: " << sizeof(unsigned) << std::endl;
    std::cout << "The sizeof unsigned int is: " << sizeof(unsigned int) << std::endl;
    std::cout << "The sizeof long is: " << sizeof(long) << std::endl;
    std::cout << "The sizeof long int is: " << sizeof(long int) << std::endl;
    std::cout << "The sizeof signed long is: " << sizeof(signed long) << std::endl;
    std::cout << "The sizeof signed long int is: " << sizeof(signed long int) << std::endl;
    std::cout << "The sizeof unsigned long is: " << sizeof(unsigned long) << std::endl;
    std::cout << "The sizeof unsigned long int is: " << sizeof(unsigned long int) << std::endl;
    std::cout << "The sizeof long long is: " << sizeof(long long) << std::endl;
    std::cout << "The sizeof long long int is: " << sizeof(long long int) << std::endl;
    std::cout << "The sizeof signed long long is: " << sizeof(signed long long) << std::endl;
    std::cout << "The sizeof signed long long int is: " << sizeof(signed long long int) << std::endl;
    std::cout << "The sizeof unsigned long long is: " << sizeof(unsigned long long) << std::endl;
    std::cout << "The sizeof unsigned long long int is: " << sizeof(unsigned long long int) << std::endl;


    std::cout << "======================" << std::endl;
    std::cout << "4.- Type Double" << std::endl;
    std::cout << "======================" << std::endl;
    std::cout << "The sizeof double" << sizeof(float) << std::endl;
    std::cout << "The sizeof double" << sizeof(double) << std::endl;
    std::cout << "The sizeof double" << sizeof(long double) << std::endl;

    // std::cout << "======================" << std::endl;
    // std::cout << "5.- Type Void" << std::endl;
    // std::cout << "======================" << std::endl;
    //  void variable = 5 // Error compiler

    std::cout << "======================" << std::endl;
    std::cout << "6.- Type Double" << std::endl;
    std::cout << "======================" << std::endl;
    int a = 5; // variable simple
    int *b;    // puntero
    b = &a;    // apunto a la dirección de memoria
    std::cout << "The value of \'a\' is: " << a << std::endl;
    std::cout << "The value of \'b\' is: " << b << std::endl;
    *b = 4; // también cambia de valor
    std::cout << "The new value of \'a\' is: " << a << std::endl;
    std::cout << "The new value of \'b\' is: " << b << std::endl;

    

    
    /*----------------------------------------------------------------------------------------------*/
    std::cout << "===========================" << std::endl;
    std::cout << "Inicializacion de variables" << std::endl;
    std::cout << "===========================" << std::endl;
    int var1=5; // por asignación
    int var2(5);// por constructor
    int var3{5};// por lista
    std::cout << "Var1: " << var1 << std::endl;
    std::cout << "Var2: " << var2 << std::endl;
    std::cout << "Var3: " << var3 << std::endl;

    Persona people;
    strcpy(people.nombre, "Jesus");
    strcpy(people.apellido, "Huayhua");
    people.edad = 30;
    people.sueldo = 920.12;
    std::cout << "La persona se llama: " << people.nombre << " " << people.apellido
    << "tiene una edad de " << people.edad << "con un sueldo de " << people.sueldo << std::endl;

    costIcecream helado1, helado2;

    helado1 = chocolate;
    helado2 = oreo;

    if (helado1 > helado2) {
        std::cout << "The cost of helado1 is higher than helado2" << std::endl;
    } else {
        std::cout << "The cost of helado2 is greater than or equal to that of helado1" << std::endl;
    }

    return 0;
}
