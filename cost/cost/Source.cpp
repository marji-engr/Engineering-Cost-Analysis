#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float i;
    float n;
    float P;
    float F;
    float A;
    float G;
    float formula;


    cout << "Select formula" << endl;
    cout << "Enter 1 for F/P Compound Amount" << endl;
    cout << "Enter 2 for P/F Present Worth" << endl;
    cout << "Enter 3 for F/A Series Compound Amount" << endl;
    cout << "Enter 4 for A/F Sinking Fund" << endl;
    cout << "Enter 5 for A/P Capital Recovery" << endl;
    cout << "Enter 6 for P/A Series Present" << endl;
    cout << "Enter 7 for A/G Arithmetic Gradient Uniform Series" << endl;
    cout << "Enter 8 for P/G Arithmetic Gradient Present Worth" << endl;

    cin >> formula;

    if (formula == 1)
    {
        cout << "Enter P" << endl;
        cin >> P;
        cout << "Enter i" << endl;
        cin >> i;
        cout << "Enter n" << endl;
        cin >> n;
        cout << "F/P Compound Amount = " << (P * (pow((1 + i), n)));

    }
    else if (formula == 2)
    {
        cout << "Enter F" << endl;
        cin >> F;
        cout << "Enter i" << endl;
        cin >> i;
        cout << "Enter n" << endl;
        cin >> n;
        cout << "P/F Present Worth = " << (F * (pow((1 + i), (-n))));

    }

    else if (formula == 3)
    {
        cout << "Enter A" << endl;
        cin >> A;
        cout << "Enter i" << endl;
        cin >> i;
        cout << "Enter n" << endl;
        cin >> n;
        cout << "F/A Series Compound Amount = " << (A * (((pow((1 + i), n)) - 1) / i));

    }

    else if (formula == 4)
    {
        cout << "Enter F" << endl;
        cin >> F;
        cout << "Enter i" << endl;
        cin >> i;
        cout << "Enter n" << endl;
        cin >> n;
        cout << "A/F Sinking Fund = " << (F * (i / ((pow((1 + i), n)) - 1)));

    }

    else if (formula == 5)
    {
        cout << "Enter P" << endl;
        cin >> P;
        cout << "Enter i" << endl;
        cin >> i;
        cout << "Enter n" << endl;
        cin >> n;
        cout << "A/P Capital Recovery = " << (P * (i * (pow((1 + i), n))) / ((pow((1 + i), n)) - 1));

    }

    else if (formula == 6)
    {
        cout << "Enter A" << endl;
        cin >> A;
        cout << "Enter i" << endl;
        cin >> i;
        cout << "Enter n" << endl;
        cin >> n;
        cout << "P/A Series Present Worth = " << (A * ((pow((1 + i), n)) - 1)) / (i * (pow((1 + i), n)));

    }

    else if (formula == 7)
    {
        cout << "Enter G" << endl;
        cin >> G;
        cout << "Enter i" << endl;
        cin >> i;
        cout << "Enter n" << endl;
        cin >> n;
        cout << "A/G Arithmetic Gradient Uniform Series = " << (G * ((1 / i) - (n / (pow((1 + i), n) - 1))));

    }

    else if (formula == 8)
    {
        cout << "Enter G" << endl;
        cin >> G;
        cout << "Enter i" << endl;
        cin >> i;
        cout << "Enter n" << endl;
        cin >> n;
        cout << "P/G Arithmetic Gradient Present Worth = " << (G * ((pow((1 + i), n) - (i * n) - 1) / ((pow(i, 2)) * (pow((1 + i), n)))));

    }

    return 0;
}