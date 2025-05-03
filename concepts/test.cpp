#include <iostream>

int main() {
    float a { 4.5 };
    std::cout << "a = " << a << '\n';
    a = 6.75;
    std::cout << "New Line! a = " << a;
    std::cout << "\nNumber 'a' = " << a << " | change the value: ";
    std::cin >> a;
    std::cout << "Number = " << a << "!\n";
    std::cout << "Again ! Two numbers now:\n";
    int b { 0 };
    std::cin >> a >> b;
    std::cout << "a = " << a << " and b = " << b;
    std::cout << "\nflush one time!" << std::endl;

    return 0;
}
