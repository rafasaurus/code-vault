#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

struct MatchWithFirstValue {
    MatchWithFirstValue(int compare)
        : m_compare(compare)
    {}
    bool operator()(std::pair<int, bool> const &pair_) {
        return pair_.first == m_compare;
    }
    int m_compare; 
};

int main() {
    std::vector<std::pair<int, bool>> v = { std::make_pair(1, true), std::make_pair(2, false) };
    std::vector<std::pair<int, bool>> v1= { std::make_pair(1, 2.f), std::make_pair(2, 0.f) };
    find(begin(v), end(v), std::make_pair(1,true));
    std::vector<std::pair<int,bool>>::iterator it = find_if(begin(v), end(v), MatchWithFirstValue(1));
    std::cout << it->first  << it->second << std::endl;
    return 0;
}
