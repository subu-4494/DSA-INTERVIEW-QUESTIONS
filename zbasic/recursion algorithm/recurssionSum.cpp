#include<bits/stdc++.h>
using namespace std;
int sum(int *arr,int size)
{
    int x=arr[0];
    if(size==0)
     return 0;
     return ( sum(arr,size-1) + arr[size-1]);

}
int main ()
{
    int arr[5] ={2,4,9,9,9};
    int size =5;
    
    cout<< sum (arr,size);

    return 0;
}