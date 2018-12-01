#include <iostream>
#include <fstream>
#include <iterator>
#include <numeric>

int main(int argc, char** argv)
{
    std::ifstream input{argc ? argv[1] : "/dev/stdin"};
    std::cout << std::accumulate(std::istream_iterator<long>{input}, std::istream_iterator<long>{}, static_cast<long>(0)) << std::endl;
}
