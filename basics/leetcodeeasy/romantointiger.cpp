#include<iostream>
#include<string>
using namespace std;
int value(char ch){
    int value =0;
     switch (ch)
    {
    case 'I':
    
        value=1;
        break;
    case 'V':
        value=5;
        break;
    case 'X':
        value=10;
        break;
    case 'L':
        value=50;
        break;
    case 'C':
        value=100;
        break;
    case 'D':
        value=500;
        break;
    case 'M':
        value=1000;
        break;
    
    default:
    cout<<"invalid input";
        break;
    }
    return value ;
}

int main(){
string input;
cin>>input;
int length = input.length();
int i = 0;
int total=0;

while (i<length){
    char charecter = input[i];
    if(i+1<length){
        
    
    char nextchar = input[i+1];
    int current =value(charecter);
    int next = value(nextchar);
    if(current<next){
       total -= current;
    }
   else{
   total += current;
   }
   i=i+1;}

else{
    total += value(charecter);
    i=i+1;
}


}cout<<total<<endl;
}