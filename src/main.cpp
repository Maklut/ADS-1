// Copyright 2022 NNTU-CS
#include <iostream>
#include <cstdint>
#include "alg.h"

int main() {
  std::cout << "=== Testing prime numbers functions ===\n\n";

  std::cout << "1. Testing checkPrime:\n";
  std::cout << "   checkPrime(2) = " << checkPrime(2)
            << " (expected: 1)\n";
  std::cout << "   checkPrime(4) = " << checkPrime(4)
            << " (expected: 0)\n";
  std::cout << "   checkPrime(17) = " << checkPrime(17)
            << " (expected: 1)\n";
  std::cout << "   checkPrime(25) = " << checkPrime(25)
            << " (expected: 0)\n";
  std::cout << "   checkPrime(97) = " << checkPrime(97)
            << " (expected: 1)\n\n";

  std::cout << "2. Testing nPrime:\n";
  std::cout << "   nPrime(1) = " << nPrime(1)
            << " (expected: 2)\n";
  std::cout << "   nPrime(2) = " << nPrime(2)
            << " (expected: 3)\n";
  std::cout << "   nPrime(3) = " << nPrime(3)
            << " (expected: 5)\n";
  std::cout << "   nPrime(5) = " << nPrime(5)
            << " (expected: 11)\n";
  std::cout << "   nPrime(10) = " << nPrime(10)
            << " (expected: 29)\n\n";

  std::cout << "3. Testing nextPrime:\n";
  std::cout << "   nextPrime(4) = " << nextPrime(4)
            << " (expected: 5)\n";
  std::cout << "   nextPrime(11) = " << nextPrime(11)
            << " (expected: 13)\n";
  std::cout << "   nextPrime(20) = " << nextPrime(20)
            << " (expected: 23)\n";
  std::cout << "   nextPrime(29) = " << nextPrime(29)
            << " (expected: 31)\n";
  std::cout << "   nextPrime(1) = " << nextPrime(1)
            << " (expected: 2)\n\n";

  std::cout << "4. Testing sumPrime:\n";
  std::cout << "   sumPrime(10) = " << sumPrime(10)
            << " (expected: 17)\n";
  std::cout << "   sumPrime(20) = " << sumPrime(20)
            << " (expected: 77)\n";
  std::cout << "   sumPrime(5) = " << sumPrime(5)
            << " (expected: 5)\n";
  std::cout << "   sumPrime(2) = " << sumPrime(2)
            << " (expected: 0)\n\n";

  std::cout << "5. Testing twinPrimes:\n";
  std::cout << "   twinPrimes(2, 10) = " << twinPrimes(2, 10)
            << " (expected: 2)\n";
  std::cout << "   twinPrimes(1, 20) = " << twinPrimes(1, 20)
            << " (expected: 3)\n";
  std::cout << "   twinPrimes(10, 30) = " << twinPrimes(10, 30)
            << " (expected: 2)\n";
  std::cout << "   twinPrimes(100, 150) = " << twinPrimes(100, 150)
            << " (expected: 2)\n";
  std::cout << "   twinPrimes(2, 100) = " << twinPrimes(2, 100)
            << " (expected: 8)\n\n";

  std::cout << "=== Testing completed ===\n";

  return 0;
}
