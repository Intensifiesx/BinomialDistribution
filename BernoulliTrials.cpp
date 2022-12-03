#include <iostream>
#include <math.h>
using namespace std;

int factorial(int n)
{
    return n < 2 ? 1 : n * factorial(n - 1);
}

double BernoulliTheorem(int n, int k, double p)
{
    int nChooseK = factorial(n) / (factorial(k) * factorial(n - k));
    double pPowerOfK = pow(p, k);
    double oneMinusPToPowerOfNMinusK = pow((1 - p), (n - k));
    return nChooseK * pPowerOfK * oneMinusPToPowerOfNMinusK;
}

int main()
{
    cout << BernoulliTheorem(6, 4, 2 / 3) << endl;
    return 0;
}