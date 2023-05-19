#include<iostream>
using namespace std;
int main(){
    int  n,i,num,index;
    cout<<"\nEnter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the array elements:";
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"\nEnter a Number to Search:";
    cin>>num;
    for(i=0; i<n; i++){
        if(arr[i]==num)
        {
            index = i;
            break;
        }
    }
    cout<<"\nFound at Index No"<<index;
    cout<<endl;
    return 0;
}
