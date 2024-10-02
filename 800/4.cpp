// CodeForces : https://codeforces.com/problemset/problem/1899/A

#include <bits/stdc++.h>
using namespace std;

// take int input
int int_input()
{
    int n;
    cin >> n;
    return n;
}

// take int array input
bool vector_input(vector<int> &v, int n)
{
    bool is_sorted = true;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i > 0 && v[i] < v[i - 1])
        {
            is_sorted = false;
        }
    }
    return is_sorted;
}

// take string input
string string_input(int n)
{
    string s;
    cin >> s;
    return s;
}

// n
// array elements - n
int solve(vector<int> &v, int n)
{
}

// n k
// array elements - n
int solve(vector<int> &v, int n, int k, bool sorted)
{
}

// n
// string of length n
int solve(string &s, int n)
{
}

// n
string solve(int n) {
    if ((n+1)%3 == 0 || (n-1)%3==0) {
        return "First";
    } else {
        return "Second";
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n = int_input();
        // int k = int_input();
        // string s = string_input(n);
        // vector<int> v(n, 0);
        // bool is_sorted = vector_input(v, n);

        cout << solve(n) << endl;
    }
}