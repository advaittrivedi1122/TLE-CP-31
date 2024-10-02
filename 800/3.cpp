// CodeForces : https://codeforces.com/problemset/problem/1900/A

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

// take string input
string string_input(int n) {
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
    int min = 0;
    int diff = 2*(k - v[n-1]);
    if (n == 1) {
        if (v[0] > diff) {
            return v[0];
        } else {
            return diff;
        }
    } else {
        min = v[0] - 0;
        for (int i = 1; i < n; i++) {
            if ((v[i] - v[i-1]) > min) {
                min = v[i] - v[i-1];
            }
        }
        return min > diff ? min : diff;
    }
}

// n
// string of length n
int solve(string &s, int n) {
    int dot_count = 0;
    int consecutive_dots = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
            dot_count++;
            consecutive_dots++;
            if (consecutive_dots >= 3) {
                return 2;
            }
        } else {
            consecutive_dots = 0;
        }
    }
    return dot_count;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n = int_input();
        // int k = int_input();
        string s = string_input(n);
        // vector<int> v(n, 0);
        // bool is_sorted = vector_input(v, n);

        cout << solve(s,n) << endl;
    }
}