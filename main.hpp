#include <iostream>
using namespace std;


void getTwoValues(int& begin, int& end);
int getNextPrime(int begin);
int getPrevPrime(int end);

void getTwoValues(int& begin, int& end) {
    std::cout << "Enter first number: ";
    std::cin >> begin;
    std::cout << "Enter second number: ";
    std::cin >> end;
}


int getNextPrime(int begin) {
    int nextPrime = begin;
    bool isPrime = false;
    while (!isPrime) {
        nextPrime++;
        isPrime = true;
        for (int i = 2; i <= nextPrime / 2; i++) {
            if (nextPrime % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return nextPrime;
}

int getPrevPrime(int end) {
    int prevPrime = end - 1;
    while (prevPrime > 2) {
        bool isPrime = true;
        for (int i = 2; i * i <= prevPrime; i++) {
            if (prevPrime % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            return prevPrime;
        }
        prevPrime--;
    }
    return 2; // The previous prime number before 3 is 2
}