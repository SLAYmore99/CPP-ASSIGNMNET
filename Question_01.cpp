#include <bits/stdc++.h>
using namespace std;

double Series(int n)
{
    double sum = 0.0;
    for (int i = 1; i <= n; ++i)
    {
        if (i % 2 == 0)
            sum -= (1 / pow(i, i));
        else
            sum += (1 / pow(i, i));
    }
    return sum;
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        int n;
        cout << "Enter your number : ";
        cin >> n;
        cout << Series(n);
    }

    char *n = argv[1];
    cout << Series(*n - 48) << endl; // because ASCII of '0' is 48;

    return 0;
}