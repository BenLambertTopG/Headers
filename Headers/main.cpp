#include <iostream>
#include "Car.h"

int main()
{

    std::string A{};
    std::string B{};
    int Num{};

    std::cout << "What is the Make of the car??";
    std::cin >> A;

    std::cout << "\nWhat is the Model of the car??";
    std::cin >> B;

    std::cout << "\nWhat is the Year of the car?";
    std::cin >> Num;

    Car Car1;

    Car1.SetMake(A);
    Car1.SetModel(B);
    Car1.SetYear(Num);

    std::cout << "\n\nCar Details:" << std::endl;
    Car1.PrintDetails();

    return 0;
}