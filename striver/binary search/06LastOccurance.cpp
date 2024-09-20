#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Brute-force Solution 
int solve(int n, int key, vector < int > & v) {
  int res = -1;
  for (int i = n - 1; i >= 0; i--) {
    if (v[i] == key) {
      res = i;
      break;
    }
  }
  return res;
}

// Optimal Solution  
int solve(int n, int key, vector < int > & v) {
  int start = 0;
  int end = n - 1;
  int res = -1;
  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (v[mid] == key) {
      res = mid;
      start = mid + 1;
    } else if (key < v[mid]) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return res;
}

int main() {
  int n = 7;
  int key = 13;
  vector < int > v = {3,4,13,13,13,20,40};
  cout << solve(n, key, v) << "\n";
  return 0;
}