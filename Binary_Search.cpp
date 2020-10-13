//A simple binary search program

#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {12,13,14,15,16,17,89,86};
    int e;
    cout<<"Enter the element to search : ";
    cin>>e;
    int ans=-1;
    
    int start=0;
    int end=7;
    while (start<=end)
    {
        int mid=(start+end)/2;
        if (arr[mid]==e)
        {
            ans=mid;
            break;
        }
        else if (arr[mid]>e)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    cout<<"Element found at position : "<<ans<<endl;
    if (ans==-1)
    {
        cout<<"Element not found";
    }
    getch();
}
