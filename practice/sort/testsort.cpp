#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main()
{

  vector<int> A{3,1,4,2,5};

  for(int i = 0; i < A.size(); i++){
      cout << A[i] << endl;
  }

  cout << " -- sort 1 --" << endl; 
  sort(A.begin(), A.end());
  
  for(int i = 0; i < A.size(); i++){
      cout << A[i] << endl;
  }

  cout << " -- sort 2 --" << endl; 
  sort(A.rbegin(), A.rend());
  
  for(int i = 0; i < A.size(); i++){
      cout << A[i] << endl;
  }

  sort(A.begin(), A.end());

  cout << " -- sort 3 --" << endl; 
  
  for(int i = 0; i < A.size(); i++){
      cout << A[i] << endl;
  }
  
  cout << " -- sort 4 --" << endl; 
  sort(A.begin(), A.end(),  greater<int>());
  
  for(int i = 0; i < A.size(); i++){
      cout << A[i] << endl;
  }

  
}
