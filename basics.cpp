#include<bits/stdc++.h>
//#include<iostream>      //when we want to take input and print something we use this library and for different functionalities or work we include different libraries (instead of remembering name of different libraries we include  bits/stdc++.h )
using namespace std;
int main(){
// User Input/Output
//     std::cout<<"HEY"<<std::endl;
//     std::cout<<"HEY"<<std::endl;

//     int x,y;
//     cin>>x>>y;
//     cout<< "Value of x: " << x<<" y: "<<y<<endl;

// //Data Types
//     int a = 10;
//     long b= 15;
//     long long c = 2034234433;

//     float d = 4.4;
//     float e = 4;
//     double f = 3.4;
//     cout<< "Value of e: " << e<<endl;  // 4.0

//     string s1 , s2;
//     cin>>s1>>s2; //INPUT- hey bro!!
//     cout<<s1<<" "<<s2<<endl; //OUTPUT- hey
    
//     string str;
//     getline(cin,str);
//     cout<<str;

//     char ch = 'g'; //single quote for char

//conditional statements

// loops
    // int n =5;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=0;j<=i;j++){
    //         cout<<"- ";
    //     }
    //     for(int j=0;j<i;j++){
    //         cout<<"- ";
    //     }
    //     cout<<endl;
    // }

    // int n =5;
    // for(int i=1;i<=n;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<2*(n-i)+1;j++){
    //         cout<<"-";
    //     }
    //     cout<<endl;
    // }

    // int n =5;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         if((i%2!=0 && j%2!=0)||(i%2==0 && j%2==0)){
    //             cout<<"1";
    //         }
    //         else{
    //             cout<<"0";
    //         }
    //     }
    //     cout<<endl;
    // }

    // int n =5;
    // for(int i=1;i<n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<j;
    //     }
    //     for(int j=1;j<=n-i-1;j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=n-i-1;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<i;j++){
    //         cout<<i-j;
    //     }
    //     cout<<endl;
    // }

    int n =4;
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int down = (2*n-2)-i;
            cout<<(n-min(min(top,down),min(left,right)));
        }
        cout<<endl;
    }

    return 0;
}