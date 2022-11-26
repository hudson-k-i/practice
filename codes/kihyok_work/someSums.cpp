#include <bits/stdc++.h>
using namespace std;


int main()
{
    int N,A,B;

 	cin >> N >> A >> B;
    int total=0;
  	for(int i=1;i<=N;i++) {
     	int X = i,sum=0;
      	while(X>0) {
            // 下１桁
         	sum += X%10;
            // 下２桁〜
          	X /= 10;
        }
        if(sum>=A && sum<=B){
            total += i;
        }
    }
  	cout << total;
 	return 0;
}