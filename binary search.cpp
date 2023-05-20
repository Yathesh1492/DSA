#include <iostream>
using namespace std;
int main()
{   int n,i,low,high,middle,search,f=-1;
    cout<<"Enter the size of an array:";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements:";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the element to be search:";
    cin>>search;
    low=0;
    high=n-1;
    while(low<high){
        middle=(low+high)/2;
        if(a[middle]==search){
            f=middle;
            break;
        }
        else if(a[middle]>search){
            high=middle-1;
        }
        else if(a[middle]<search){
            low=middle+1;
        }
    }
    if(f>0)
    cout<<"Element fount at:"<<f;
    else
    cout<<"Element not found";
    return 0;
}
