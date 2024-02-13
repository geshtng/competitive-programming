#include <bits/stdc++.h>
using namespace std;

bool compare(pair <string, int> &a, pair <string, int> &b) {
    return a.second < b.second;
}

string ArrayChallenge(string strArr[], int arrLength) {
  map <string, int> m;
  vector <pair<string, int>> vec;
  string ans;

  for (int i = 0; i < arrLength; i++) {
    m[strArr[i]] = i;
  } 

  for (auto i : m) {
    vec.push_back(i);
  }

  sort(vec.begin(), vec.end(), compare);

  int start = (vec.size() > 5) ? vec.size() - 5 : 0;
  int end = (vec.size() > 5) ? 5 : vec.size();

  for (int i = 0, x = start; i < end; i++, x++) {
    ans += vec[x].first + "-";
  }
  ans.pop_back();
  
  return ans;
}

int main(void) { 
   
  // keep this function call here
  int arrLength; cin >> arrLength;
  string A[arrLength];

  for (int i = 0; i < arrLength; i++) cin >> A[i];

  cout << ArrayChallenge(A, arrLength);

  return 0;  
}