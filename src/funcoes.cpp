#include "funcoes.hpp"
#include <numeric>
#include <stdexcept>

namespace funcoes {
    int soma(int a, int b) { return a + b; }

    std::string repeat(const std::string& s, int n) {
        if (n < 0) throw std::invalid_argument("n negativo");
        std::string out;
        out.reserve(s.size() * (n > 0 ? n : 0));
        for (int i = 0; i < n; ++i) out += s;
        return out;
    }

    double media(const std::vector<double>& xs) {
        if (xs.empty()) return 0.0;
        double sum = std::accumulate(xs.begin(), xs.end(), 0.0);
        return sum / xs.size();
    }
}
