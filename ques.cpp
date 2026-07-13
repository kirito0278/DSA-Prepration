//SUM OF 2 NUMBERS

// #include <iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cout<<"enter number 1: ";
//     cin>>a;
//     cout<<"enter number 2: ";
//     cin>>b;
//     cout<<"sum of "<<a<<" and "<<b<<" is: "<<(a+b);
//     return 0;
// }


// Find character lowercase and uppercase
// #include <iostream>
// using namespace std;

// int main(){
//     char ch;
//     cout<<"Enter any character: ";
//     cin>>ch;
//     if(ch >='a'&& ch<='z'){ // ALTERNATE METHOD-- ch>=97 && ch<=122
//         cout<<"LOWERCASE";
//     }else if(ch>='A'&&ch<='Z'){ // ALTERNATE METHOD-- ch>=65 && ch<=90
//         cout<<"UPPERCASE";
//     }else{
//         cout<<"WRONG INPUT";
//     }
//     return 0;
// }


//SUM OF NUMBERS FROM 1 TO N [FOR LOOP]

// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0;
//     int odd_sum =0;
//     int n;
//     cout<<"enter any no.: ";
//     cin>>n;
//     for(int i=1;i<n;i++){
//         sum+=i;
//         if(i%2!=0){
//             odd_sum+=i;
//         }
//     }
//     cout<<"sum: "<<sum<<endl;
//     return 0;
// }


//CHECK IFF A NUM IS PRIME OR NOT

#include<iostream>
using namespace std;
int main(){
    int count=0;
    int num;
    cout<<"enter any no.: ";
    cin>>num;
    for(int i=1;i<num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(num>=2 && count==1){
        cout<<"prime";
    }else{
        cout<<"not prime";
    }
    return 0;
}
