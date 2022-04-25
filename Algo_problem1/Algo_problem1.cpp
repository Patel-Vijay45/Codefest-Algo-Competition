#include <iostream>
using namespace std;


int main() { 
  
	int t,size;
	cout << "Enter Number of Lanes : ";
	cin >> t;
	int arr[t][100];
	int seq[t];
	int sum[t];
	int val = 0;
	// input track size
	for(int i = 0; i < t ;i++){
		cout << "Enter Number of total tracks in Lane "<< i + 1 << " : ";
		cin >> size;
		 arr[i][size];
		cout << "Enter  "<<size<<" tracks : \n";
		//input track
		for(int p = 0; p < size ; p++){
			cin>>arr[i][p];
		}
	
		// remove duplicate track
		for(int j = 0; j < size ;j++){
				for(int k = j+1; k < size ;k++){		
		  		if(arr[i][j] == arr[i][k]){
		  			
		  			for(int y = k; y<size-1;y++){
		  				
						arr[i][y] = arr[i][y + 1];
						
					}
					
					size--;
					k--;
				}
	}
}
	val = 0;
	//sum track
	for(int m = 0;m < size ;m++){
   	   val += arr[i][m];
	}
	
	sum[i] = val;

}
//create sequence of track
	for(int i = 0 ; i < t ;i++){
		 seq[i] = i + 1;
		}

int temp = 0,temp2 = 0;
// set sequence and track number
	for(int i = 0 ; i < t ;i++){
		for(int j = i+1;j<t;j++){
			if(sum[i] > sum[j]){
				temp = sum[i];
				sum[i] = sum[j];
				sum[j] = temp;
				temp2 = seq[i];
				seq[i] = seq[j];
				seq[j] = temp2;	
			}
		}
	}
	
	cout<<"\n[";
	//display
		for(int i = 0 ; i < t ;i++){
		 cout<<seq[i]<<","<<sum[i]<<",";
		}
			cout<<"\b]";
		
  return 0;
}