#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main()
{

  vector<int> A{3,1,4,2,5};

  partial_sort(A.begin(), A.begin() + 2, A.end());  
  
  for(int i = 0; i < A.size(); i++){
    cout << A[i] << " ";
  }
}
