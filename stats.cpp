#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<float>& example) {
    Stats stats;

    if (example.empty()) {
        stats.average = std::nanf("");
        stats.max = std::nanf("");
        stats.min = std::nanf("");
        return stats;
    }

    stats.average = std::accumulate(example.begin(), example.end(), 0.0f) / example.size();
    stats.max = *std::max_element(example.begin(), example.end());
    stats.min = *std::min_element(example.begin(), example.end());

    return stats;
}
