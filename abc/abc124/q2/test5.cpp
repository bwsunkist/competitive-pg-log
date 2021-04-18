#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main() {
  int count=0;
  int target;
  int N;

  cin >> N ;

  //長さNの配列を作成.
  vector<int> A(N);
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }

    const int size = sizeof(A) / sizeof(A[0]);

    //next to sea
    count++;
    
    if(A[0]<=A[1]){
      count++;
    }



    
  for(int j =2; j<N; j++){

    vector<int> B(j);
    for(int i=0; i<j; i++){
      B[i] = A[i];
    }

    int size = sizeof(B) / sizeof(B[0]);

      
    sort(B.begin(), B.end());

    B[j] = A[j];
    
    if(B[j-1]<=B[j]){
      count++;
    }
  }
  
  
  
  cout << count << endl;

}
