#include <iostream>
#include <vector>

using Matrix = std::vector<std::vector<int>>;

Matrix transpose(const Matrix& mat) {
    size_t rows = mat.size();
    size_t cols = mat[0].size();
    Matrix result(cols, std::vector<int>(rows));

    for (size_t i = 0; i < rows; ++i)
        for (size_t j = 0; j < cols; ++j)
            result[j][i] = mat[i][j];

    return result;
}

int main() {
    Matrix mat = {{1, 2, 3}, {4, 5, 6}};
    Matrix t = transpose(mat);

    for (const auto& row : t) {
        for (int val : row)
            std::cout << val << " ";
        std::cout << std::endl;
    }
    return 0;
}
