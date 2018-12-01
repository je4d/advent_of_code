#include <iostream>
#include <fstream>
#include <iterator>
#include <unordered_set>
#include <vector>

int main()
{
    std::vector<long> freqs;
    std::copy(std::istream_iterator<long>{std::cin}, std::istream_iterator<long>{}, std::back_inserter(freqs));
    std::unordered_set<long> sums;
    long sum{};
    while (true)
        for (auto freq : freqs)
            if (not sums.insert(sum += freq).second)
                return std::cout << sum << std::endl, 0;
}
