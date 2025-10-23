#include <bits/stdc++.h>
using namespace std;
bool isPrime(long long n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    long long sqr = sqrt(n);
    for (long long i = 3; i <= sqr; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}
vector<long long> generateSuperPrimes(long long limit) {
    queue<long long> q;
    vector<long long> result;
    q.push(2);
    q.push(3);
    q.push(5);
    q.push(7);
    while (!q.empty()) {
        long long num = q.front(); q.pop();
        if (num > limit) continue;
        result.push_back(num);

        for (int d = 0; d <= 9; d++) {
            long long next = num * 10 + d;
            if (next <= limit && isPrime(next)) {
                q.push(next);
            }
        }
    }

    return result;
}

int main() {
    long long a, b;
    cin >> a >> b;

    vector<long long> superPrimes = generateSuperPrimes(b);

    int count = 0;
    for (long long x : superPrimes) {
        if (x >= a && x <= b) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
