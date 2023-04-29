#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Heap.h"

using namespace std;

void kthSmallest(Heap& heap, int k) {
    Heap _temp = heap;

    for (int i = 0; i < k - 1; i++) {
        heap.pop();
    }

    std::cout << _temp.top() << std::endl;
}

int main() {
    srand(time(NULL));

    Heap heap;

    for (int i = 0; i < 1000; i++) {
        int randNum = rand() % 1000000 + 1;
        heap.insert(randNum);
    }

    heap.print_array();

    // Printing k-th smallest element, where k = 5.
    // a.k.a finding and printing 5th smallest element in heap.
    kthSmallest(heap, 5);
}