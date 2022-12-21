#include <iostream>

int main(){
    std::cout << "The standard character output(often by default a screen)";
    std::cerr << "The standard character error output(un buffered)";
    std::clog << "The standard character error output(buffered)";

    int var;
    std::cout << "Enter the ramdon data ";
    std::cin  >> var; // input data
    std::cout << "The enter value of var is: "<< var << std::endl;
    std::cout << "The standard character input(often by default a keyboard)";
    return 0;
}
