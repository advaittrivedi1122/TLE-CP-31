// CodeForces : https://codeforces.com/problemset/problem/1862/B

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

void solve(vector<int> &b) {
    vector<int> a;

    a.push_back(b[0]);

    for (int i=1; i<b.size(); i++) {
        if (b[i-1] > b[i]) {
            int next_val = min(b[i-1],b[i]) - 1;
            if (next_val == 0) {
                next_val = 1;
            }
            a.push_back(next_val);
        }
        a.push_back(b[i]);
    }

    // print output
    cout << a.size() << endl;
    for (int i:a) {
        cout << i << " ";
    }
}


int main() {
    int T;
    cin >> T;
    while (T--) {
        int n = int_input();
        vector<int> b(n,0);
        vector_input(b, n);
        solve(b);
        cout << endl;
        // cout << solve(b) << endl;
    }
}  