// Leetcode problem 278, done in 20/02/2025

#include <math.h>
#include <algorithm>

// check version is bad (implemented just to make it run, it's actually an API)
bool isBadVersion(int version) {
    return version != -1;
}

int firstBadVersion(int n) {
    long left = 1;
    long right = n;
    long middle;
    long res = n;

    while (left <= right) {
        middle = (left + right) / 2;
        if (isBadVersion(middle) == 1) {
            right = middle - 1;
            res = std::min(res, middle);
        } else {
            left = middle + 1;
        }
    }
    return res;
}

