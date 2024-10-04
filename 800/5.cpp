// CodeForces : https://codeforces.com/problemset/problem/1896/A

#include <bits/stdc++.h>
using namespace std;

// take int input
int int_input()
{
    int n;
    cin >> n;
    return n;
}

// pre-computed info for vector that we can get during vector input
struct vector_info {
    bool sorted;
    bool permutation;   // eg :- 1-5 => 3,2,1,5,4 (all present once)
    int max;
};

// take int array input
vector_info vector_input(vector<int> &v, int n)
{
    vector_info vi;
    // Sorted 
    // permutaion 1 to n numbers
    vi.sorted = true;
    vi.max = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i] - (i + 1);
        if (i > 0 && v[i] < v[i - 1])
        {
            vi.sorted = false;
        }
        if (v[i] > vi.max) {
            vi.max = v[i];
        }
    }
    vi.permutation = (sum == 0);
    return vi;
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
string solve(vector<int> &v, int n, vector_info vi)
{
   if (v[0] == 1) {
        return "YES";
   } else {
        return "NO";
   }
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
string solve(int n)
{
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
        vector<int> v(n, 0);
        vector_info vi = vector_input(v, n);

        cout << solve(v,n,vi) << endl;
    }
}