// CodeForces : https://codeforces.com/problemset/problem/1873/C

#include <bits/stdc++.h>
using namespace std;

void matrix_input(vector<vector<char>> &matrix) {
	for (int i=0; i<matrix.size(); i++) {
		for (int j=0; j<matrix[i].size(); j++) {
			cin >> matrix[i][j];
		}
	}
}

int solve() {
	vector<vector<char>> matrix(10,vector<char>(10,'.'));
	matrix_input(matrix);
	int sum = 0;
	for (int i=0; i<matrix.size(); i++) {
		for (int j=0; j<matrix[i].size(); j++) {
			if (matrix[i][j] == 'X') {
				int i_complement, j_complement;
				if (i>4) {
					i_complement = 10 - i;
					if (j>4) {
						j_complement = 10 - j; 
						sum += min(i_complement, j_complement);
					} else {
						sum += min(i_complement,j+1);
					}
				} else {
					if (j>4) {
						j_complement = 10 - j; 
						sum += min(i+1, j_complement);
					} else {
						sum += min(i+1,j+1);
					}
				}
			}
		}
	}
	return sum;
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		cout << solve() << endl;
	}
}