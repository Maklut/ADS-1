// Copyright 2022 NNTU-CS
#include "alg.h"
#include <iostream>
#include <cstdint>

int main() {
    std::cout << "=== Тестирование функций для работы с простыми числами ===\n\n";

    std::cout << "1. Тестирование checkPrime:\n";
    std::cout << "   checkPrime(2) = " << checkPrime(2) << " (ожидается: 1)\n";
    std::cout << "   checkPrime(4) = " << checkPrime(4) << " (ожидается: 0)\n";
    std::cout << "   checkPrime(17) = " << checkPrime(17) << " (ожидается: 1)\n";
    std::cout << "   checkPrime(25) = " << checkPrime(25) << " (ожидается: 0)\n";
    std::cout << "   checkPrime(97) = " << checkPrime(97) << " (ожидается: 1)\n\n";
 
    std::cout << "2. Тестирование nPrime:\n";
    std::cout << "   nPrime(1) = " << nPrime(1) << " (ожидается: 2)\n";
    std::cout << "   nPrime(2) = " << nPrime(2) << " (ожидается: 3)\n";
    std::cout << "   nPrime(3) = " << nPrime(3) << " (ожидается: 5)\n";
    std::cout << "   nPrime(5) = " << nPrime(5) << " (ожидается: 11)\n";
    std::cout << "   nPrime(10) = " << nPrime(10) << " (ожидается: 29)\n\n";

    std::cout << "3. Тестирование nextPrime:\n";
    std::cout << "   nextPrime(4) = " << nextPrime(4) << " (ожидается: 5)\n";
    std::cout << "   nextPrime(11) = " << nextPrime(11) << " (ожидается: 13)\n";
    std::cout << "   nextPrime(20) = " << nextPrime(20) << " (ожидается: 23)\n";
    std::cout << "   nextPrime(29) = " << nextPrime(29) << " (ожидается: 31)\n";
    std::cout << "   nextPrime(1) = " << nextPrime(1) << " (ожидается: 2)\n\n";
 
    std::cout << "4. Тестирование sumPrime:\n";
    std::cout << "   sumPrime(10) = " << sumPrime(10) << " (ожидается: 17) [2+3+5+7=17]\n";
    std::cout << "   sumPrime(20) = " << sumPrime(20) << " (ожидается: 77) [2+3+5+7+11+13+17+19=77]\n";
    std::cout << "   sumPrime(5) = " << sumPrime(5) << " (ожидается: 5) [2+3=5]\n";
    std::cout << "   sumPrime(2) = " << sumPrime(2) << " (ожидается: 0)\n\n";

    std::cout << "5. Тестирование twinPrimes:\n";
    std::cout << "   twinPrimes(2, 10) = " << twinPrimes(2, 10) << " (ожидается: 2) [пары: (3,5) и (5,7)]\n";
    std::cout << "   twinPrimes(1, 20) = " << twinPrimes(1, 20) << " (ожидается: 3) [пары: (3,5), (5,7), (11,13)]\n";
    std::cout << "   twinPrimes(10, 30) = " << twinPrimes(10, 30) << " (ожидается: 2) [пары: (11,13), (17,19)]\n";
    std::cout << "   twinPrimes(100, 150) = " << twinPrimes(100, 150) << " (ожидается: 2) [пары: (101,103), (107,109)]\n";
    std::cout << "   twinPrimes(2, 100) = " << twinPrimes(2, 100) << " (ожидается: 8)\n\n";
    
    std::cout << "=== Тестирование завершено ===\n";
    
    return 0;
}
