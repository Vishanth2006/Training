#include <iostream>

int main() {
    int favorite_number;

    // Print a message to the console
    std::cout << "Hello! C++ is working perfectly." << std::endl;
    
    // Ask the user for input
    std::cout << "Enter your favorite number: ";
    std::cin >> favorite_number;
    
    // Print the result back
    std::cout << "Awesome! Your favorite number is " << favorite_number << "." << std::endl;

    return 0;
}