#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int l , int m, int r )
{
    int nl= m-l+1;
    int nr= r-m;

    vector<int> arrl(nl);
    vector<int> arrr(nr);

    for(int i=0;i<nl;i++)
    {
        arrl[i]=arr[l+i];
    }

      for(int i=0;i<nr;i++)
    {
        arrr[i]=arr[m+1+i];
    }

    int i=0;
    int j=0;
    int k=l;

    while(i<nl && j<nr)
    {
        if(arrl[i]<=arrr[j])
        {
            arr[k]= arrl[i];
            i++;
        }
        else{
            arr[k]= arrr[j];
            j++;
        }
        k++;
    }

    while(i<nl)
    {
        arr[k]=arrl[i];
        i++;
        k++;
    }

      while(j<nr)
    {
        arr[k]=arrr[j];
        j++;
        k++;
    }

}

void mergesort(vector<int> &arr , int l , int r)

{
    if(l<r)
    {
        int m = (l+r)/2;

        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

     mergesort(arr, 0, n-1);

      cout << "Sorted array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}