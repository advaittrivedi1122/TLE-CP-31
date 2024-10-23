// CodeForces : https://codeforces.com/problemset/problem/1877/A

#include <bits/stdc++.h>
using namespace std;

// take int input
int int_input()
{
    int n;
    cin >> n;
    return n;
}

struct vector_info {
    bool sorted;
    bool permutation;   // 1-5 => 3,2,1,5,4 (all present once)
    int min;
    int max;
    map<int,int> frequency;
};

// take int array input
vector_info vector_input(vector<int> &v, int n, bool with_vi = false)
{
    vector_info vi;
    // Sorted 
    // permutaion 1 to n numbers
    if (with_vi) {
        vi.sorted = true;
        vi.max = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            
            cin >> v[i];
            if (i == 0) {
                vi.min = v[0];
            }
            sum += v[i] - (i + 1);
            if (i > 0 && v[i] < v[i - 1])
            {
                vi.sorted = false;
            }
            if (v[i] > vi.max) {
                vi.max = v[i];
            } 
            if (v[i] < vi.min) {
                vi.min = v[i];
            }
            vi.frequency[v[i]] += 1;
        }
        vi.permutation = (sum == 0);
    } else {
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
    }
    return vi;
}

// take string input
string string_input()
{
    string s;
    cin >> s;
    return s;
}

void print_string(string &s) {
    for (auto i:s) {
        cout << i;
    }
}

int solve(vector<int> &v, int n) {
    int sum = 0;
    for (int i=0;i<n-1;i++) {
        sum += v[i];
    }
    return sum*-1;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n = int_input();
        vector<int> v(n-1,0);
        vector_input(v,n-1,false);
        cout << solve(v, n) << endl;
    }
}