                   //---------------->for ascending order
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>> arr[i];
    }
   // int counter=0;
    for(int j=0;j<n-1;j++)//----->number of passes ke liye loop
    {
        for(int i=0;i<n-j-1;i++) //ye loop check krne ke liye har pass ko
        {
            if(arr[i]<arr[i+1])
            {
                int temp=arr[i];
                  arr[i]=arr[i+1];
                  arr[i+1]=temp;
            }
               // counter++ ;
        }
        //count++ ;
    }
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }cout<<endl;

    return 0;
}