#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;


int main() {
  int t;
  cin >>t;
 while(t--){
     int arr[36];
    for(int i=0;i<36;i++){
        cin >>arr[i];
    }
     int min = INT_MAX, max = INT_MIN;
     int max_cnt=0,cnt=0;
    for (int i: arr)
    {
        if (i < min) {
            min = i;
        }
        if (i > max) {
            max_cnt=cnt;
            max = i;
        }
        cnt++;
    }
    max_cnt=(max_cnt)*10+570;
   int h=max_cnt/60;
   if(h>12){
    h-=12;
   }
    cout <<"["<<max-min<<","<< h<<"."<<max_cnt%60<<"]\n";

 }


  return 0;
}
