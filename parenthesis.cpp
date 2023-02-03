#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

int printparenthesis(int i){
    if (i == 1){
        cout << "(";
    }
    else{
        cout << ")";
    }
    return 1;
}


int f_y_a(int n) {
  int arr[2*n], arr1[n*2], index_arr[n*2];
  int index;
  for (int i = 0; i < n; i++)
  arr[i] = 1;
  for (int i = n; i < (2*n); i++)
  arr[i] = -1;
   
  for (int i = 0; i < (2*n); i++)
  index_arr[i] = 0;
   
  for (int i = 0; i < (2*n); i++) {
      do {
         index = rand() % (2*n);
      }
      while (index_arr[index] != 0);
      index_arr[index] = 1;
      arr1[i] = arr[index];
  }
  int sum = 0, stay_above_zero = 1;
  for (int i = 0; i < (2*n); i++){
      sum = sum + arr1[i];
      if (sum < 0){
          stay_above_zero = 0;
      }
  }
  
  if (stay_above_zero == 1){
      for (int i = 0; i < (2*n); i++){
          printparenthesis(arr1[i]);
        //   cout << arr1[i] << " ";
      }
      cout << endl;
  }

//   for (int i = 0; i < (2*n); i++)
//   cout << arr1[i] << " ";
  return stay_above_zero;
   
   
  
}







// cout<<"The shuffled array is: ";

//   for (int i = 0; i < n; i++)
//   cout << arr1[i] << " ";
//   return 0;
   
   
   
   
   
   
   
   
   
   
   

int main(){
    int n;
    cout << "Enter the array size: "<<endl;
    cin >> n;
    int hmt;
    cout << "Enter the amount of lines you want: "<<endl;
    cin >> hmt;
    int finished =0;
    while (finished < hmt){
        /// go to function and calculate array and return 1 if it worked, otherwise return 0
        int f = f_y_a(n);
        if (f == 1){
            finished = finished + 1;
        }
    }
    return 1;
     
    
}




