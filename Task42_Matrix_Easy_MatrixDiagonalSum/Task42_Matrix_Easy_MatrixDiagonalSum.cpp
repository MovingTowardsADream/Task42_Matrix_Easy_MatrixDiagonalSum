#include <iostream>
#include <vector>

class Solution {
public:
    static int diagonalSum(std::vector<std::vector<int>>& mat) {
        int n = mat.size(), sum = 0;
        for (int i = 0;i < n;i++)
            sum += (mat[i][i] + mat[n - i - 1][i]);
        if (n % 2 == 0)
            return sum;
        return sum - mat[n / 2][n / 2];
    }
};

int main()
{
    std::vector<std::vector<int>> mat = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    std::cout << Solution::diagonalSum(mat);
}
