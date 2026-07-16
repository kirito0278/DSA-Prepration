// SQUARE PATTERNS
// 1234   ****   ABCD   123   ABC
// 1234   ****   ABCD   456   DEF
// 1234   ****   ABCD   789   GHI
// 1234   ****   ABCD

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter no. of lines: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         char ch='A';
//         for(int j=0;j<n;j++){
//             cout<<ch; // FOR SPACE cout<<j+1<<" ";
//             ch=ch+1; //65+1-->66=B
//         }            // FOR STARS cout<<"* ";
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n,num=1;
//     cout<<"enter no. of lines: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<num<<" ";
//             num+=1;
//         }
//         cout<<endl; //IN THE END num = 10
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     char ch='A';
//     cout<<"enter no. of lines: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl; //IN THE END num = 10
//     }
// }


//TRIANGLE PATTERNS
// *      1      A     1      1
// **     22     BB    12     21
// ***    333    CCC   123    321
// ****   4444   DDDD  1234   4321 


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of lines: ";
    cin>>n;
    //char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<j+1<<" ";
            //cout<<ch<<" ";
            //cout<<i+1<<" ";
            //cout<<"*";
        }
        cout<<endl;
        //ch++;
    }
}