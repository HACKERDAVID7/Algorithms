#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {21,13,14,15,16,17,89,86};
    int e;
    cout<<"Enter the element to search : ";
    cin>>e;
    int ans=-1;
    for (int i = 0; i < 8; i++)
    {
        if (arr[i]==e)
        {
            ans=i;
            cout<<"Elememt found at positon : "<<ans;
            break;
        }
        
    }
    if(ans==-1)
        cout<<"Elememt not found";
    getch();
}
