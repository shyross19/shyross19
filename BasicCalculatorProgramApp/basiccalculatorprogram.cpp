#include <iostream> 

int main() {
    int number;
    int integer;

    std::cout<<"Enter a number: ";
    std::cin>>number;

    std::cout<<"Enter a integer: ";
    std::cin>>integer;

    std::cout<<"The number you entered is: "<<number<<std::endl;

    std::cout<<"The integer you entered is: "<<integer<<std::endl;

    // Perform operations
    int addition = number + integer;
    int subtraction = number - integer;
    int multiplication = number * integer;
    int division = number / integer;


    std::cout<<"Addition: "<<addition<<std::endl;
    std::cout<<"Subtraction: "<<subtraction<<std::endl;
    std::cout<<"Multiplication: "<<multiplication<<std::endl;
    std::cout<<"Division: "<<division<<std::endl;

    return 0;
}