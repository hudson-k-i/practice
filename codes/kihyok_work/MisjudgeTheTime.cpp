#include <bits/stdc++.h>
using namespace std;

vector<int> spritTime(int num){
    
    vector<int> vec(2);
    vec.at(0) = num / 10;
    vec.at(1) = num % 10;
    return vec;

}

bool judge(vector<int> vec1,vector<int> vec2){
    swap(vec1.at(1),vec2.at(0));
    //時判定
    int hour = 10* vec1.at(0) + vec1.at(1);
    int minute = 10 * vec2.at(0) + vec2.at(1);

    if(24 > hour && 59 >= minute){
        return true;
    }else{
        swap(vec1.at(1),vec2.at(0));
        return false;
    }


}

int main() {
    
  int H,M;

  cin >> H >>M;
  vector<int> hour = spritTime(H),minute = spritTime(M);
  while(!judge(hour,minute)){
    if(hour.at(0) == 2 && hour.at(1) == 3  && minute.at(0) == 5 && minute.at(1) ==9){
         hour.at(0) =  0;
            hour.at(1) = 0;
            minute.at(0) = 0;
            minute.at(1) = 0;
    }
    else if(minute.at(0) ==5 && minute.at(1) == 9){
        if(hour.at(1) == 9){
            hour.at(0) =  hour.at(0)+ 1;
            hour.at(1) = 0;
            minute.at(0) = 0;
            minute.at(1) = 0;
            
        }else{
            hour.at(1) =  hour.at(1)+ 1;
            minute.at(0) = 0;
            minute.at(1) = 0;
        }
    }else{
         if(minute.at(1) == 9){
            minute.at(0) =  minute.at(0)+ 1;
            minute.at(1) = 0;
        }else{
            minute.at(1)  = minute.at(1) + 1;
        }

    }

  }
 
  cout << 10* hour.at(0) + hour.at(1) << " "<< 10 * minute.at(0) + minute.at(1);


}


