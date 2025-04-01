// Leetcode problem 374, done in 28/03/2025

int guess(int num);

int guessNumber(int n) {
    long l = 1;
    long r = n;
    long long pick;

    while (true) {
        pick =  (l + r) / 2;
        int guessed = guess(pick);

        if (guessed == 0) {
            break;
        }
        else if (guessed == -1) {
            r = pick - 1;
        }
        else {
            l = pick + 1;
        }
    }
    return pick;
}

// someone's
int guessNumber2(int n) {
    int l = 1;
    int r = n;
    
    while (l <= r) {
        int mid = (l + r) / 2;

        if (guess(mid) == 0) {
            return mid;
        }
        else if (guess(mid) == -1) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return -1;
}
