#include <iostream>
#include <chrono>

//declares a large array statically
void staticArray() {
    static int arr1[1000];
}

//declares a large array on the stack
void stackArray() {
    int arr2[1000];
}

//declares a large array on the heap
void heapArray() {
    auto *arr3 = (int *) malloc(1000* sizeof(int));
}

int main() {
    auto start1 = std::chrono::high_resolution_clock::now();
    std::cout << "Declaring a large static array 1,000,000 times" << std::endl;
    for (int i = 0; i < 1000000; ++i) {
        staticArray();
    }
    auto finish1 = std::chrono::high_resolution_clock::now();
    std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(finish1-start1).count() << " ns\n";


    auto start2 = std::chrono::high_resolution_clock::now();
    std::cout << "Declaring a large stack array 1,000,000 times" << std::endl;
    for (int i = 0; i < 1000000; ++i) {
        stackArray();
    }
    auto finish2 = std::chrono::high_resolution_clock::now();
    std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(finish2-start2).count() << " ns\n";

    auto start3 = std::chrono::high_resolution_clock::now();
    std::cout << "Declaring a large heap array 1,000,000 times" << std::endl;
    for (int i = 0; i < 1000000; ++i) {
        heapArray();
    }
    auto finish3 = std::chrono::high_resolution_clock::now();
    std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(finish3-start3).count() << " ns\n";

    return 0;
}