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
    cout << "A[0] " << A[0] << " <= A[1] " << A[1] << endl;
      cout << "count++" << endl;
    }else{
    cout << "A[0] " << A[0] << " >= A[1] " << A[1] << endl;
      cout << "Not count" << endl;
    }

  
  for(int j =2; j<N-1; j++){
    cout << "loop   j=" << j << "  ";
    cout << "sort  from start to " << j-1 << "th" << endl;

    partial_sort(A.begin(), A.begin() + j-1, A.end());

      cout << " sort start"<< endl;
    for(int i=0; i<2+(j-1); i++){
      cout << "A[" << i << "] = " << A[i] << endl;
    }
      cout << " sort end"<< endl;
    
    if(A[j-1]<=A[j]){
      cout << "A[" << j-1 << "] " << A[j-1] << " <= A[" << j << "] " << A[j] << endl;
      cout << "count++" << endl;
      count++;
    }else{
      cout << "A[" << j-1 << "] " << A[j-1] << " >= A[" << j << "] " << A[j] << endl;
      cout << "Not count" << endl;
    }
  }

    if(A[N-2]<=A[N-1]){
      count++;
      cout << "A[" << N-2 << "] " << A[N-2] << " <= A[" << N-1 << "] " << A[N-1] << endl;
      cout << "count++" << endl;
    }else{
            cout << "A[" << N-2 << "] " << A[N-2] << " >= A[" << N-1 << "] " << A[N-1] << endl;
      cout << "Not count" << endl;
    }

  
  
  cout << count << endl;

}
