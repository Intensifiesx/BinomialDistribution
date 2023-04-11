#include <iostream>
#include <math.h>
using namespace std;

class BinomialDistribution
{

    double result;
    /*  Calculates factorial of a number recursively
        @param int n = factorial num to repeat
        @return unsigned long long int = factorial of n
    */
    unsigned long long int factorial(int n)
    {
        return n < 2 ? 1 : n * factorial(n - 1);
    }

public:
    /*  Calculates binomial distribution to find the
        probability of getting k successes in n trials
        @param int n = # of trials
        @param int k = # of successes
        @param double p = probability of getting a success
        @return int = binomial distribution
    */
    double calcBin(int n, int k, double p)
    {
        int nChooseK = factorial(n) / (factorial(k) * factorial(n - k));
        double pPowerOfK = pow(p, k);
        double oneMinusPToPowerOfNMinusK = pow((1 - p), (n - k));
        return nChooseK * pPowerOfK * oneMinusPToPowerOfNMinusK;
    }
};