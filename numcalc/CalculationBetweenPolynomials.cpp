#include <vector>
#include <iostream>
#include <string>

class Polynomial {
private:
    std::vector<std::string> coeffs;

public:
    Polynomial(const std::vector<std::string>& c) : coeffs(c) {}

    Polynomial operator*(const Polynomial& other) const {
        std::vector<std::string> result(coeffs.size() + other.coeffs.size() - 1, "0");
        for (size_t i = 0; i < coeffs.size(); ++i) {
            for (size_t j = 0; j < other.coeffs.size(); ++j) {
                if (i + j < result.size()) {
                    if (coeffs[i] != "0" && other.coeffs[j] != "0") {
                        if (result[i+j] == "0")
                            result[i+j] = coeffs[i] + "*" + other.coeffs[j];
                        else
                            result[i+j] += "+" + coeffs[i] + "*" + other.coeffs[j];
                    }
                }
            }
        }
        return Polynomial(result);
    }

    void print() const {
        for (size_t i = 0; i < coeffs.size(); ++i) {
            if (coeffs[i] != "0") {
                if (i > 0) std::cout << " + ";
                std::cout << "(" << coeffs[i] << ")";
                if (i > 0) std::cout << "x^" << i;
            }
        }
        std::cout << std::endl;
    }
};

int main() {
    std::vector<std::string> formulaA, formulaB;
    std::string s;
    bool readingA = true; // Start reading into formulaA
    while(std::cin >> s) {
        if (s == "0") {
            if (readingA) {
                readingA = false; // Switch to reading into formulaB
            } else {
                break; // Both formulaA and formulaB have been read
            }
        } else {
            if (readingA) {
                formulaA.push_back(s);
            } else {
                formulaB.push_back(s);
            }
        }
    }
    Polynomial p1(formulaA);
    Polynomial p2(formulaB);
    Polynomial result = p1 * p2;
    result.print();
    return 0;
}