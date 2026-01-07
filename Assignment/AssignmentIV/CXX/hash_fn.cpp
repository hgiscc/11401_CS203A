/*
   ========================================
   hash_fn.cpp — implement your hash functions
   ========================================

   Description:
    This file contains the hash functions for integer and string keys.

   Development History:
    - 2025/11/11: Initial implementation
    - 2025/11/17: Refactored to use hash_fn.hpp

   Developer: Yu-Feng Huang <yfhuang@saturn.yzu.edu.tw>

   - 2025/11/23: add hash function in myHashInt & myHashString
   - 2025/11/23: change hash function in myHashInt to avoid collision
   - 2025/11/30: test another hash function in myHashString
   Developer: 徐翊甄 <jennyhsu0301@gmail.com>
 */
#include "hash_fn.hpp"
int i = 0;
int myHashInt(int key, int m) {
   // key = key % 10; ----will collision ,bad 
    key = key+i;
    i++;
    return key % m ;  // basic division method
}

int myHashString(const std::string& str, int m) {
    unsigned long hash = 0;
    hash = str[0] - 'a';
    return static_cast<int>(hash % m);  // basic division method
}
