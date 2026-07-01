#include <iostream>
using namespace std;

using int64 = long long;
using i128 = __int128_t;

// Function to calculate GCD
int64 gcd(int64 a, int64 b)
{
    while (b)
    {
        int64 temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

// Function to calculate LCM safely
int64 lcm(int64 a, int64 b)
{
    return (i128)a / gcd(a, b) * b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    // Store answers first
    int64 ansA[10005];
    int64 ansB[10005];
    int64 ansC[10005];

    for (int tc = 0; tc < t; tc++)
    {
        int64 a, b, c;
        long long m;

        cin >> a >> b >> c >> m;

        int64 ab = lcm(a, b);
        int64 ac = lcm(a, c);
        int64 bc = lcm(b, c);
        int64 abc = lcm(ab, c);

        int64 A = m / a;
        int64 B = m / b;
        int64 C = m / c;

        int64 AB = m / ab;
        int64 AC = m / ac;
        int64 BC = m / bc;
        int64 ABC = m / abc;

        // Exact counts
        int64 onlyA = A - AB - AC + ABC;
        int64 onlyB = B - AB - BC + ABC;
        int64 onlyC = C - AC - BC + ABC;

        int64 onlyAB = AB - ABC;
        int64 onlyAC = AC - ABC;
        int64 onlyBC = BC - ABC;

        int64 allABC = ABC;

        ansA[tc] = onlyA * 6 + (onlyAB + onlyAC) * 3 + allABC * 2;
        ansB[tc] = onlyB * 6 + (onlyAB + onlyBC) * 3 + allABC * 2;
        ansC[tc] = onlyC * 6 + (onlyAC + onlyBC) * 3 + allABC * 2;
    }

    // Print all outputs together
    for (int i = 0; i < t; i++)
    {
        cout << ansA[i] << " " << ansB[i] << " " << ansC[i] << "\n";
    }

    return 0;
}