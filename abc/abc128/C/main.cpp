#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  int N, M;
  int ans=0;
  int tmp=0;
  int tmp2=0;

  cin >> N >> M;

  vector<int> k(M);
  vector<int> p(M);
  vector<int> NN(N);
  vector<vector<int>> v(M, vector<int>(N));
  for(long i = 0; i < M; i++){
    cin >> k[i];
    for(long j = 0; j < k[i]; j++){
      cin >> v[i][j];
    }
  }

  for(long j = 0; j < M; j++){
    cin >> p[j];
  }

    for(int i1 =0; i1<= 1; i1++){
      for(int i2 =0;  i2<= 1; i2++){
        for(int i3 =0; i3<= 1; i3++){
          for(int i4 =0;  i4<= 1; i4++){
            for(int i5 =0; i5<= 1; i5++){
              for(int i6 =0;  i6<= 1; i6++){
                for(int i7 =0; i7<= 1; i7++){
                  for(int i8 =0;  i8<= 1; i8++){
                    for(int i9 =0; i9<= 1; i9++){
                      for(int i0 =0;  i0<= 1; i0++){
                        NN[0] = i1;
                        NN[1] = i2;
                        NN[2] = i3;
                        NN[3] = i4;
                        NN[4] = i5;
                        NN[5] = i6;
                        NN[6] = i7;
                        NN[7] = i8;
                        NN[8] = i9;
                        NN[9] = i0;

                        for(int m=0; m < M; m++){
                          tmp=0;
                          for(int k1 =0; k1 < k[m]; k1++){
                            tmp += v[m][k1];
                            cout << tmp << endl;;
                          }
                          if(tmp%2 == p[m]){
                            tmp2++;
                          }
                        }
                        if(tmp2 == M){
                          ans++;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }

    cout << ans << endl;
}
