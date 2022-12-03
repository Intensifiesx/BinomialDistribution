#include <iostream>
#include <math.h>
using namespace std;

class BinomialDistribution
{
    double result;
    /*  Calculates factorial of a number recursively
        factorial(int n)
        n = factorial num to repeat */
    int factorial(int n)
    {
        return n < 2 ? 1 : n * factorial(n - 1);
    }
    /*  Calculates binomial distribution to find the
        number of successes in a sequence.
        calculateBinomial(int n, int k, double p)
        n = # of trials
        k = # of successes
        p = probability of getting a success  */
    double calculateBinomial(int n, int k, double p)
    {
        int nChooseK = factorial(n) / (factorial(k) * factorial(n - k));
        double pPowerOfK = pow(p, k);
        double oneMinusPToPowerOfNMinusK = pow((1 - p), (n - k));
        return nChooseK * pPowerOfK * oneMinusPToPowerOfNMinusK;
    }

public:
    // Constructor
    BinomialDistribution(int n, int k, double p)
    {
        this->result = calculateBinomial(n, k, p);
    }
    friend ostream &operator<<(ostream &out, const BinomialDistribution &b);
};

// Overloads << operator to output result
ostream &operator<<(ostream &out, const BinomialDistribution &b)
{
    out << b.result;
    return out;
}
