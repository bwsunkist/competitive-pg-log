#include<iostream>
#include <vector>

using namespace std;

int  divnum(int x){
  int i=2;
  if(x < 2) return 1;
  else if(x == 2) return i;
  if(x%2 == 0) i+=2;
  if(x == 4) return 3;
  for(int j = 3; j*j <= x; j += 1){
	if(x%j == 0){
	  if(x == j) i++;
	  else{
		i+=2;
		if(x == j*j) i--;
	  }
	}
  }
  return i;
}

int main(){
  int n;
  int ans = 0;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
	if(divnum(i) == 8 && i%2 == 1){
		ans++;
	}
  }

  cout << ans << endl;
}