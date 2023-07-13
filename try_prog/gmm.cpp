#include <iostream>
#include <fstream>
#include <vector>
#include <random>

// 混合正規分布のパラメータを表す構造体
struct GaussianParameters {
    double mean;
    double stddev;
    double weight;
};

// テキストファイルから混合正規分布のパラメータを読み込む関数
std::vector<GaussianParameters> readGaussianParameters(const std::string& filename) {
    std::vector<GaussianParameters> parameters;
    std::ifstream file("result/er_hubert_large-predict.txt");
    double mean, stddev, weight;
    
    while (file >> mean >> stddev >> weight) {
        parameters.push_back({mean, stddev, weight});
    }
    
    return parameters;
}

// 混合正規分布を生成する関数
std::vector<double> generateMixtureNormalDistribution(const std::vector<GaussianParameters>& parameters, int numSamples) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::discrete_distribution<> distribution;
    std::vector<double> samples(numSamples);
    
    // 混合正規分布からサンプルを生成
    for (int i = 0; i < numSamples; ++i) {
        double value = 0.0;
        for (const auto& param : parameters) {
            std::normal_distribution<double> normalDist(param.mean, param.stddev);
            value += normalDist(gen) * param.weight;
        }
        samples[i] = value;
    }
    
    return samples;
}

int main() {
    // テキストファイルから混合正規分布のパラメータを読み込む
    std::vector<GaussianParameters> parameters = readGaussianParameters("parameters.txt");
    
    // 混合正規分布からサンプルを生成
    std::vector<double> samples = generateMixtureNormalDistribution(parameters, 100);
    
    // 生成したサンプルを表示
    for (const auto& sample : samples) {
        std::cout << sample << " ";
    }
    std::cout << std::endl;
    
    return 0;
}

