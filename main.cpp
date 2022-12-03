#include <iostream>
#include "BinomialDistribution.h"
using namespace std;

int main()
{
    /* BinomialDistribution(int n, int k, double p)
        n = # of trials
        k = # of successes
        p = probability of getting a success */
    cout << BinomialDistribution(6, 2, 1.0 / 3.0) << endl;
    return 0;
}