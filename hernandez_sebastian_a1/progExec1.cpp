#include <iostream>

int main() {
    int dog = 5;
    for (int i = 0; i < 1; ++i) {
        int cat = 6;
    }
    try {
        dog += cat;
        std::cout << "Dog has a value of " << dog << std::endl; //will be 11 if cat has a scope that will allow it
    }  catch (int e){
        std::cout << "Dog has a value of " << dog << std::endl; //will be 5 if cat has no scope outside of the for loop
    }

    return 0;
}