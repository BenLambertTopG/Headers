#ifndef CAR_H
#define CAR_H

#pragma once
#include <iostream>

class Car
{
public:
    void SetMake(std::string M);
    void SetModel(std::string M);
    void SetYear(int Y);

    void PrintDetails();

private:
    std::string Make;
    std::string Model;
    int Year{};
};

#endif