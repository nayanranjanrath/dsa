#include<iostream>
using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
// int i =1;

// while(i<=n)
// {
//     int j = 1;
//     int count=1;
//     while (j<2*n){
//     if(j<=n-i){
//         cout<<" ";
//         j=j+1;
//     }
//     else if (j>n+i-1)
//     {
//          cout<<" ";
//         j=j+1;
//     }
    

//     else if(j>n-i&&j<n){
//         cout<<count<<" ";
//         j=j+1;
//         count=count+1;
//     }
//     else if (j>=n&&j<=n+i-1){
        
//         cout<<count<<" ";
//         j=j+1;
//         count=count-1; 
//     }
// }
//       cout<<endl;
//         i=i+1;
// }

// }


int main(){
int n;
cin>>n;
int row = 1;
while (row<=n){
    // print space 
    int space = n-row;
    while(space){
        cout<<" ";
        space=space-1;
    }
    // ist trinhle
    int j =1;
    while(j<=row){
        cout<<j;
        j=j+1;
    }

    //2md tringle 
    int start = row-1;
    while(start){

        cout<<start;
        start=start-1;
    }
    cout<<endl;
    row= row+1;
}


}