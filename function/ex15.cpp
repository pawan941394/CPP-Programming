#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans = ans + (x * y);
        x *= 2;
        n /= 10;
    }
    return ans;
}

int OctalToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans = ans + (x * y);
        x *= 8;
        n /= 10;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << binaryToDecimal(n) << endl;
    cout << "this is for octal to decimal" << endl;
    cout << OctalToDecimal(n) << endl;

}