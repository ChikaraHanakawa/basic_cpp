#include <iostream>
#include <vector>
#include <tuple>

std::tuple<std::vector<std::vector<double>>, std::vector<std::vector<double>>, std::vector<int>> tre_matrix() {
    // 遷移確率
    std::vector<std::vector<double>> a {
        {0.6, 0.4},
        {0.7, 0.3},
        {0.5, 0.5}
    };

    // 出力確率
    std::vector<std::vector<double>> b {
        {0.8, 0.2},
        {0.2, 0.8},
        {0.6, 0.4}
    };

    // RBRR
    std::vector<int> c {0, 1, 0, 0};

    return std::make_tuple(a, b, c);
}

std::pair<double, std::vector<std::vector<double>>> keisan(const std::vector<std::vector<double>>& a, const std::vector<std::vector<double>>& b, const std::vector<int>& c) {
    std::vector<std::vector<double>> tre {
        {0.0, 0.0, 0.0, 0.0, 0.0},
        {0.0, b[0][c[0]], b[0][c[1]], 0.0, 0.0},
        {0.0, 0.0, b[1][c[1]], b[1][c[2]], 0.0},
        {0.0, 0.0, 0.0, b[2][c[2]], b[2][c[3]]}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (i == 0 && j == 0) {
                tre[i + 1][j + 1] = tre[i + 1][j + 1];
            } else {
                tre[i + 1][j + 1] = tre[i + 1][j + 1] * tre[i][j] * a[i - 1][1] + tre[i + 1][j + 1] * tre[i + 1][j] * a[i][0];
            }
        }
    }

    double kakuritu = tre[3][4] * a[2][1];

    return {kakuritu, tre};
}

void main_function() {
    std::vector<std::vector<double>> a, b;
    std::vector<int> c;
    std::tie(a, b, c) = tre_matrix();
    
    std::pair<double, std::vector<std::vector<double>>> result = keisan(a, b, c);
    double kakuritu = result.first;
    std::vector<std::vector<double>> treris = result.second;

    for (const auto& row : treris) {
        for (const auto& val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "確率 = " << kakuritu << std::endl;
}

int main() {
    main_function();
    return 0;
}

