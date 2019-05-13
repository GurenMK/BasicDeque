//Alexander Urbanyak

#include "deque.h"

using namespace std;

int main() {
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);
    assert(dq.front() == 1);
    assert(dq.back() == 4);
    assert(!dq.empty());

    deque<int> dq2;
    dq2.push_front(4);
    dq2.push_front(3);
    dq2.push_front(2);
    dq2.push_front(1);
    assert(dq2.front() == 1);
    assert(dq2.back() == 4);
    assert(!dq2.empty());
    assert(dq2.size() == 4);

    assert(dq == dq2);

    dq.pop_back();
    dq2.pop_front();
    assert(!(dq == dq2));
    dq2.pop_front();
    dq2.pop_back();
    dq2.pop_back();
    assert(dq2.empty());

    std::cout << "Deque 1: " << dq << std::endl;
    std::cout << "Deque 2: " << dq2 << std::endl;
    std::cout << "All tests passed." << std::endl;
    return 0;
}