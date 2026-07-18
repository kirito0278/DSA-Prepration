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
//         char ch='A'; // FOR 3RD PATTERN
//         for(int j=0;j<n;j++){
//             cout<<ch; // 3RD PATTERN
//             ch=ch+1; //65+1-->66=B // FOR 3RD PATTERN

//           //cout<<j+1<<" ";//1ST PATTERN

//           //cout<<"* "; //2ND PATTERN
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//4TH PATTERN
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
//     return 0;
// }


//5TH PATTERN
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
//         cout<<endl;
//     }
//     return 0;
// }


//TRIANGLE PATTERNS
// *      1      A     1      1        1        A           A
// **     22     BB    12     21       23       BC          BA
// ***    333    CCC   123    321      456      DEF         CBA
// ****   4444   DDDD  1234   4321     78910    GHIIJ       DCBA
//                                (FLOYD'S TRIANGLE PATTERN)

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     // int num = 1;
//     cout<<"enter no. of lines: ";
//     cin>>n;
//     char ch='A';
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             // cout<<ch;
//             // ch++;  //FLOYD'S TRIANGLE [CHAR VERSION]

//             // cout<<num;   // FLOYD'S TRIANGLE
//             // num++;

//             // cout<<j+1<<" ";  // 4TH PATTERN

//             //cout<<ch<<" "; // 3RD PATTERN

//             //cout<<i+1<<" ";// 2ND PATTERN

//             //cout<<"*"; // 1ST PATTERN
//         }
//         cout<<endl;
//         //ch++; //FOR 3RD PATTERN
//     }
//     return 0;
// }

//5TH PATTERN
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter no. of lines: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j>0;j--){
//             cout<<j<<" ";

//         }
//         cout<<endl;
//     }
//     return 0;
// }


//8TH PATTERN
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     char temp,ch='A';
//     cout<<"enter no. of lines: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         temp = ch;
//         for(int j=0;j<1+i;j++){  //ALTERNATE : for(intj=i;j>=0;j--){
//             cout<<temp<<" ";     //                cout<<char('A'+j)<<" ";
//             temp--;              //             }
//         }
//         ch++;
//         cout<<endl;
//     }
//     return 0;
// }


//INVERTED TRIANGLE PATTERN
//  1111    AAAA
//   222     BBB
//    33      CC
//     4       D

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     char ch='A';
//     cout<<"enter no. of lines: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int j=n-i;j>0;j--){
//             // cout<<i+1; //1ST PATTERN
//             cout<<ch;
//         }
//         ch++;
//         cout<<endl;
//     }
//     return 0;
// }

//INVERTED PYRAMID
// * * * * 
//  * * * 
//   * * 
//    * 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter no. of lines: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){   
//             cout<<" ";
//         }
//         for(int j=n-i;j>0;j--){
//             cout<<"* ";  // PREVIOUS INVERTED TRIANGLE CODE IS SAME TO MAKE IT INVERTED PYRAMID WE HAVE TO ADD A SPACE WITH SYMBOL
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//RANDOM PATTERN
// ****
//   ***
//     **
//       *
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter no. of lines: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<"  ";   // BY SWITCH SPACE FROM PREVIOUS CODE WE GET THIS RNDM PATTERN
//         }
//         for(int j=n-i;j>0;j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



//PYRAMID PATTERN
//    1
//   121
//  12321
// 1234321

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter no. of lines: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-1-i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<i+1;j++){
//             cout<<j+1;
//         }
//         for(int j=i;j>0;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//HOLLOW DIAMOND PATTERN
//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of lines: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=0){
            for(int j=0;j<2*i-1;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<i+1;j++){
            cout<<" ";        
        }
        cout<<"*";
        if(i!=n-2){
            for(int j=0;j<n-i-2;j++){
                string space = "  ";
                cout<<space;
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}


// BUTTEFLY PATTERN
// *             * 
// * *         * * 
// * * *     * * * 
// * * * * * * * * 
// * * * * * * * * 
// * * *     * * * 
// * *         * * 
// *             * 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter no. of lines: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<"* ";
//         }
//         for(int j=0;j<n-i-1;j++){
//             cout<<"  ";
//         }
//         for(int j=0;j<n-i-1;j++){
//             cout<<"  ";
//         }
//         for(int j=0;j<i+1;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<n;i++){
//         for(int j=n;j>i;j--){
//             cout<<"* ";
//         }
//         for(int j=0;j<i;j++){
//             cout<<"  ";
//         }
//         for(int j=0;j<i;j++){
//             cout<<"  ";
//         }
//         for(int j=n;j>i;j--){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }