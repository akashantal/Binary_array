#include<iostream>
using namespace std;
int main()
{
int n,count=0;
cout<<"Enter the size of the array: ";
cin>>n;
cout<<"Enter array: \n";
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
if (arr[i]==0)
        count++;
}

cout<<"sorted array is: ";
for(int j=0;j<n;j++)
{
if(j<count)
        arr[j]=0;
else
        arr[j]=1;
cout<<arr[j]<<" ";
}

return 0;
}
