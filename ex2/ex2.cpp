#include <bits/stdc++.h>
using namespace std;

int find(int decimal_number)
{
    if (decimal_number == 0)
        return 0;
    else
        return (decimal_number % 2 + 10 *
                find(decimal_number / 2));
}

int toFind (int decimal_number)
{
    return find(decimal_number);
}

// Driver code
int main()
{
    int decimal_number = 10;
    cout << toFind(decimal_number) << "\n";
    return 0;
}
