#include "adder.h"

Adder::Adder(double first, double second) : first_argument(first), second_argument(second){}

double Adder::get_first_argument()
{
    return first_argument;
}

double Adder::get_second_argument()
{
    return second_argument;
}

void Adder::set_first_argument(double value)
{
    first_argument = value;
}

void Adder::set_second_argument(double value)
{
    second_argument = value;
}

double Adder::sum()
{
    return first_argument + second_argument;
}
