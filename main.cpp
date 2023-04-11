#include <iostream>
#include "BinomialDistribution.h"
using namespace std;

int main()
{
    BinomialDistribution binomial;
    /* BinomialDistribution(int n, int k, double p)
        n = # of trials
        k = # of successes
        p = probability of getting a success */
    double result = 0;

    for (int i = 10; i < 21; i++)
        result += binomial.calcBin(20, i, 0.3);

    cout << "n=20, 10<=k<=20, p=0.3: " << result << endl;
    return 0;
}