#include<bits/stdc++.h>
using namespace std;

// Function to find if n reaches to 1 or not.
bool isToOneRec(int n, unordered_set<int> &s)
{
    if (n == 1)
        return true;

    if (s.find(n) != s.end())
        return false;

    return (n % 2)? isToOneRec(3*n + 1, s) :
                    isToOneRec(n/2, s);
}

bool isToOne(int n)
{
   unordered_set<int> s;

   return isToOneRec(n, s);
}

// Drivers code
int main()
{
    int n = 5;
    isToOne(n) ? cout << "Yes" << "\n": cout <<"No" << "\n";
    return 0;
}
