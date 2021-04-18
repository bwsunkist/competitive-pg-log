#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main()
{

  vector<int> A{3,1,4};

  A[3]=2;
  A[4]=5;


  sort(A.begin(), A.begin() + 5);
  
  for(int i = 0; i < 5; i++){
      cout << A[i] << " ";
  }

  
}
