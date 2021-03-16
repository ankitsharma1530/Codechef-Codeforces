vector<vector<string>> solve(vector<vector<string>>& mat) {
    int n = mat.size(), m = mat[0].size();
    for (int i = 0; i < n; i++) {
        int last = m;
        for (int j = m - 1; j >= 0; j--) {
            if (mat[i][j] == "#") {
                if (last > 0) {
                    mat[i][last - 1] = "#";
                    if (last - 1 != j) mat[i][j] = '.';
                    last -= 1;
                }
            } else if (mat[i][j] == "*")
                last = j;
        }
    }
    vector<vector<string>> matrix(m, vector<string>(n, ""));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[j][n - i - 1] = mat[i][j];
        }
    }
    return matrix;
}
