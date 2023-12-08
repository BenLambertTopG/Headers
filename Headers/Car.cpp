#include "Car.h"

void Car::SetMake(std::string M)
{
    Make = M;
}

void Car::SetModel(std::string M)
{
    Model = M;
}

void Car::SetYear(int Y)
{

    Year = Y;
}

void Car::PrintDetails()
{

    std::cout << "Make:" << Make << std::endl;
    std::cout << "Model:" << Model << std::endl;
    std::cout << "Year:" << Model << std::endl;
}