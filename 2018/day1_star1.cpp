#include <iostream>
#include <fstream>
#include <iterator>
#include <numeric>

int main()
{
    std::cout << std::accumulate(std::istream_iterator<long>{std::cin}, std::istream_iterator<long>{}, static_cast<long>(0)) << std::endl;
}
