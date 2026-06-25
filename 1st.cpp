#include<iostream>
using namespace std;
int main()
{
    cout<<"enter size of array"<<endl;
int size;
cin>>size;

    cout<<"enter the array"<<endl;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"enter the target number"<<endl;
    int target;
    cin>>target;

for(int i=0;i<size;i++)
{
for(int j =i;j<size;j++){

   int c= arr[i]+arr[j];
if (c==target)
{
    cout<<i<<" "<<j<<endl;
}
else{
    continue;
}
}}
}

