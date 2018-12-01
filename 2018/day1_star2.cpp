#include <iostream>
#include <fstream>
#include <iterator>
#include <unordered_set>
#include <vector>

int main(int argc, char** argv)
{
    std::ifstream input{argc ? argv[1] : "/dev/stdin"};
    std::vector<long> input_cache;
    std::unordered_set<long> sums;
    long sum{};
    auto sum_and_test_dupe = [&](long freq) {
        auto ret = not sums.insert(sum += freq).second;
        if (ret)
            std::cout << sum << std::endl;
        return ret;
    };

    for (auto it  = std::istream_iterator<long>{input},
              end = std::istream_iterator<long>{};
         it != end; ++it) {
        input_cache.push_back(*it);
        if (sum_and_test_dupe(*it))
            return 0;
    }
    while (true)
        for (auto freq : input_cache)
            if (sum_and_test_dupe(freq))
                return 0;
}
