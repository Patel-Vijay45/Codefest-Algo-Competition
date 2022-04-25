#include <iostream>
using namespace std;

void grid(int t,int *arr){
    for(int i=t;i>=0;i--){
        int array[arr[i]][arr[i]];
        
        //create an array of n size n X n
        for(int row=0;row<arr[i];row++){
            for(int col=0;col<arr[i];col++){
                if(row==0){ 
                      array[row][col]=col+1; 
                }else if(col==arr[i]-1){
                    array[row][0]=array[row-1][col];
                }else{
                     array[row][col+1]=array[row-1][col];
                
                }
            } 
        }
        
         cout <<"[";
        for(int col=arr[i]-1;col>=0;col--){
             cout <<"[";
            for(int row=0;row<arr[i];row++){
                cout <<array[row][col];
                if(row!=arr[i]-1){
                    cout<<",";
                }
            }
             if(col!=0){
              cout <<"],";
             }
        }
         cout <<"]]\n[";
           
        for(int col=arr[i]-1;col>=0;col--){
             cout <<"[";
            for(int row=0;row<arr[i];row++){
                cout <<array[col][row];
                if(row!=arr[i]-1){
                    cout<<",";
                }
            }
            if(col!=0){
              cout <<"],";
             }
        }
      cout <<"]]\n\n";
   
    }
}
int main() { 
  int t;
  cin >>t;

  int arr[t];
 
    int size=t;
     t--;
    while(size--){
        cin>>arr[size]; 
    }

    grid(t,arr);

  return 0;
}