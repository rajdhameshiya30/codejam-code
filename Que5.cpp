#include <bits/stdc++.h>

using namespace std;

int sqr[60][60], n, k, t;
bool row_sa[60][60], col_sa[60][60], sol;

void solver(int row, int col, int m) {
    if (row == n && col == n + 1 && m == k && !sol) {
        sol = true;
        cout << "Case #" << t << ": " << "POSSIBLE\n";
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                cout << sqr[i][j] << " ";
            }
            cout << "\n";
        }
        return;
    } else if (row > n) {
        return;
    } else if (col > n) {
        solver(row + 1, 1, m);
    }
    for (int i = 1; i <= n && !sol; ++i) {
        if (!row_sa[row][i] && !col_sa[col][i]) {
            row_sa[row][i] = col_sa[col][i] = true;
            if (row == col) {
                m += i;
            }
            sqr[row][col] = i;

            solver(row, col + 1, m);

            row_sa[row][i] = col_sa[col][i] = false;
            if (row == col) {
                m -= i;
            }
            sqr[row][col] = 0;
        }
    }
}

int main() {
    int T;
    scanf(" %d", &T);
    for (t = 1; t <= T; ++t) {
        scanf(" %d %d", &n, &k);
        solver(1, 1, 0);
        if (!sol) {
            cout << "Case #" << t << ": " << "IMPOSSIBLE\n";
        }
        sol = false;
    }
    return 0;
}