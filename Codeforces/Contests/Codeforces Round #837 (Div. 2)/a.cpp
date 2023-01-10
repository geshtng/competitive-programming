#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

const int N = 1e5 + 5;

int t, n;
int a[N];

int main() {
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
      scanf("%d", &a[i]);
    }
    sort(a + 1, a + n + 1);
    int amax = a[n];
    int amin = a[1];
    int max_diff = 0;
    for (int i = 1; i <= n; i++) {
      for (int j = i + 1; j <= n; j++) {
        max_diff = max(max_diff, abs(a[i] - a[j]));
      }
    }
    if (max_diff == abs(amax - amin)) {
      printf("%d\n", n - 1);
    } else {
      printf("0\n");
    }
  }
  return 0;
}
