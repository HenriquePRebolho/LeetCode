// Leetcode problem 292, done in 19/02/2025

bool canWinNim(int n) {
    while (n > 4) {
        n -= 4;
    }
    return n != 4;
}