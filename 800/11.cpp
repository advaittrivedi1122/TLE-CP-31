// CodeForces : https://codeforces.com/problemset/problem/1866/A

#include <bits/stdc++.h>
using namespace std;

// take int input
int int_input()
{
    int n;
    cin >> n;
    return n;
}

long long int long_long_int_input()
{
    long long int n;
    cin >> n;
    return n;
}
long int long_int_input()
{
    long int n;
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

int solve(vector<int> &v) {
    int abs_min = 100001; // range (1 <= N <= 10**5) so take max_range + 1
    for (int i = 0; i < v.size(); i++) {
        if (abs(v[i]) < abs_min) {
            abs_min = abs(v[i]);
        }
    }
    return (abs_min - 0);   
}


int main() {
    // int T;
    // cin >> T;
    // while (T--) {
        int n = int_input();
        vector<int> v(n,0);
        vector_input(v, n);
        cout << solve(v) << endl;
    // }
}  