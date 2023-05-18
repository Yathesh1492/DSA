#include <iostream>
using namespace std;
int main(){
    int n,i,j,temp;
    cout<<"Enter the size of an array :\n";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements:\n";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i = 0; i < n; i++){    
      for(j = i+1; j < n; j++){    
            if(a[j] < a[i]){    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }     
    cout<<"Sorted array elements are: \n ";
    for(i=0;i<n;i++){
    cout<<"\t"<<a[i];
    }
   return 0;
}
