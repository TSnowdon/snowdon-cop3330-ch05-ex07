/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Tyler Snowdon
 */
#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

double get_discrim(double a, double b, double c)
{
    return pow(b, 2) - (4 * a * c);
}

int main()
{
    /**
     * @brief 
     * Discriminates have 3 rules
     * if < 0 no solution
     * if == 0 one solution
     * if > 0 two solutions
     */

    double dis = -2;
    double a = -1;
    double b = -1;
    double c = -1;

    cout << "Insert \"a\" value:\n";
    cin >> a;
    cout << "Insert \"b\" value:\n";
    cin >> b;
    cout << "Insert \"c\" value:\n";
    cin >> c;

    dis = get_discrim(a, b, c);
    if (dis < 0)
    {
        cout << "The values produce no real roots.\n";
    }
    else if (dis == 0)
    {
        double root = (-1 * b) / (2 * a);
        cout << "Your root is "
             << root << "\n";
    }
    else if (dis > 0)
    {
        double root1 = ((-1 * b) + sqrt(dis)) / (2 * a);
        double root2 = ((-1 * b) - sqrt(dis)) / (2 * a);
        cout << "Your roots are "
             << root1 << " " << root2 << "\n";
    }

    return 0;
}