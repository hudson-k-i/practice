#include <bits/stdc++.h>
using namespace std;

bool judge(vector<int> vec){

    for(int i=0;i<vec.size();i++){
        if(vec.at(i) % 2 !=0){
            return false;
        }
    }
    return true;
} 
int main() {

    int N;

    cin >> N;
    vector<int> vec(N);

    for(int i = 0; i < N;i++){
        cin >> vec.at(i);
    }

    int count = 0;
    while(judge(vec)){
       for(int i=0;i<N;i++){
        vec.at(i) = vec.at(i) /2;
       }
       count++;
    }
   cout << count;
}


