#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> l1; 
  vector<int> l2; 
  
  int n, m;
  while(cin >> n >> m) {
   l1.push_back(n);
   l2.push_back(m);
  }

  sort(l1.begin(), l1.end());
  sort(l2.begin(), l2.end());

  int total = 0;
  for (int i = 0; i < l1.size(); i++) {
    total += abs(l1[i] - l2[i]);
  }

  cout << total << '\n';
}

