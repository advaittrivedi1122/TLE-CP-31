// CodeForces : https://codeforces.com/problemset/problem/1903/A

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
        if (i > 0 && v[i] < v[i-1]) {
            is_sorted = false;
        }
    }
    return is_sorted;
}

// n
// array elements
int solve(vector<int> &v, int n)
{
}

// n k
// array elements
string solve(vector<int> &v, int n, int k, bool sorted)
{
    if (k == 1) {
        if (sorted) {
            return "YES";
        } else {
            return "NO";
        }
    } else if (k >= 2) {
        return "YES";
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n = int_input();
        int k = int_input();
        vector<int> v(n, 0);
        bool is_sorted = vector_input(v, n);
        cout << solve(v, n, k, is_sorted) << endl;
    }
}