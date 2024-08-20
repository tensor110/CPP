#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

// Brute-force Solution 
// vector<int> findMissingRepeatingNumbers(vector<int> a) {
//     int n = a.size();
//     int repeating = -1, missing = -1;
//     for (int i = 1; i <= n; i++) {
//         int cnt = 0;
//         for (int j = 0; j < n; j++) {
//             if (a[j] == i) cnt++;
//         }
//         if (cnt == 2) repeating = i;
//         else if (cnt == 0) missing = i;
//         if (repeating != -1 && missing != -1)
//             break;
//     }
//     return {repeating, missing};
// }

// Better Solution 
// vector<int> findMissingRepeatingNumbers(vector<int> a) {
//     int n = a.size();
//     vector<int> hash(n + 1, 0);
//     for (int i = 0; i < n; i++) {
//         hash[a[i]]++;
//     }
//     int repeating = -1, missing = -1;
//     for (int i = 1; i <= n; i++) {
//         if (hash[i] == 2) repeating = i;
//         else if (hash[i] == 0) missing = i;
//         if (repeating != -1 && missing != -1)
//             break;
//     }
//     return {repeating, missing};
// }

// Optimal Solution 
vector<int> findMissingRepeatingNumbers(vector<int> a) {
    long long n = a.size();
    long long SN = (n * (n + 1)) / 2;
    long long S2N = (n * (n + 1) * (2 * n + 1)) / 6;
    long long S = 0, S2 = 0;
    for (int i = 0; i < n; i++) {
        S += a[i];
        S2 += (long long)a[i] * (long long)a[i];
    }
    long long val1 = S - SN;
    long long val2 = S2 - S2N;
    val2 = val2 / val1;
    long long x = (val1 + val2) / 2;
    long long y = x - val1;
    return {(int)x, (int)y};
}

int main()
{
    vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> ans = findMissingRepeatingNumbers(a);
    cout << "The repeating and missing numbers are: {"
         << ans[0] << ", " << ans[1] << "}\n";
    return 0;
}