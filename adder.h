#pragma once

class Adder
{
    private:
        double first_argument;
        double second_argument;
    public:
        Adder(double first, double second);
        double get_first_argument();
        double get_second_argument();
        void set_first_argument(double value);
        void set_second_argument(double value);
        double sum();
};