#include<iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	int ans = 0;
	int ansss = 1;

  cin >> N;

  for(int n = 2; n <= N; n++){  
  	vector<int> x(n + 1);
	  int num = n; // 素因数分解する変数num 

  	for (int i = 2; i <= n; i++) {
	  	while (num%i == 0) { // 素数で割り切れなくなるまで割っていく
		  	x.at(i)++; //割った個数を配列に足す
			  num /= i;
  		}
	  }
	  for (int i = 2; i <= n; i++){ 	
	  	ansss *= x.at(i) + 1; //それぞれを+1して掛けていく
	  }
    if(n % 2 == 1 && ansss == 8){
      ans++;
    }
    ansss = 1;
  }
  cout << ans << endl;
}