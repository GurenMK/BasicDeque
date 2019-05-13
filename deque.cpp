//Alexander Urbanyak

#include <iostream>
#include "deque.h"

int main() {
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);
    dq.push_back(5);
    dq.push_back(6);
    dq.push_back(7);
    dq.push_back(8);
    dq.push_back(9);
    dq.push_back(10);
    assert(dq.front() == 1);
    assert(dq.back() == 10);
    assert(dq.full());

    dq.pop_front();
    assert(dq.front() == 2);
    dq.pop_back();
    dq.pop_back();
    assert(dq.back() == 8);


    deque<int> dq2;
    dq2.push_front(6);
    dq2.push_front(5);
    dq2.push_front(4);
    dq2.push_front(3);
    dq2.push_front(2);
    dq2.push_front(1);
    assert(dq2.front() == 1);
    assert(dq2.back() == 6);
    assert(!dq2.full());
    assert(dq2.size() == 6);


    assert(!(dq == dq2));

    dq.push_front(1);
    dq.pop_back();
    dq.pop_back();
    assert(dq == dq2);


    dq.pop_front();
    dq.pop_front();
    dq.pop_front();
    dq.pop_back();
    dq.pop_back();
    dq.pop_back();
    assert(dq.empty());



    std::cout << "Deque 1: " << dq << std::endl;
    std::cout << "Deque 2: " << dq2 << std::endl;
    std::cout << "All tests passed. " << std::endl;
    return 0;
}