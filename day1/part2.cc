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

  int times[1000000];
  for (int i = 0; i < 1000000; i++) times[i] = 0;
  
  for (int i = 0; i < l2.size(); i++) times[l2[i]]++;

  int total = 0;
  for (int i = 0; i < l1.size(); i++) total += l1[i] * times[l1[i]];

  cout << total << '\n';
}

