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

// #include<iostream>
// using namespace std;
// int main(){
//     int count=0;
//     int num;
//     cout<<"enter any no.: ";
//     cin>>num;
//     for(int i=2;i<num;i++){ // ALTERNATE METHOD FOR OPTIMAIZATION for(int i=2 ;i*i<n;i++)
//         if(num%i==0){
//             count++;
//         }
//     }
//     if(num>=2 && count==0){
//         cout<<"prime";
//     }else{
//         cout<<"not prime";
//     }
//     return 0;
// }


// SUM OF ALL NUMBERS FROM 1 TO N WHICH ARE DIVISIBLE BY 3
// #include<iostream>
// using namespace std;
// int main(){
//     int n,sum=0;
//     cout<<"Enter no. upto which u want to find sum of all no. divisible by 3: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if (i%3==0){
//             sum+=i;
//         }
//     }
//     cout<<"Sum: "<<sum;
//     return 0;
// }


// PRINT FACTORIAL OF A NUMBER N
// #include<iostream>
// using namespace std;
// int main(){
//     int n,fact=1;
//     cout<<"Enter any no. to find factorial: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
//     cout<<"Factorial: "<<fact;
//     return 0;
// }

// BASIC CALC TO PERFORM +,-,/,*
// #include<iostream>
// #include<cstdlib>
// using namespace std;
// int main(){
//     double choice,num1,num2;

//     while(true){
//         cout<<"PRESS 1 TO ADD 2 NO.S"<<endl;
//         cout<<"PRESS 2 TO SUB 2 NO.S"<<endl;
//         cout<<"PRESS 3 TO MUL 2 NO.S"<<endl;
//         cout<<"PRESS 4 TO DIV 2 NO.S"<<endl;
//         cout<<"PRESS 5 TO EXIT"<<endl;

//         cout<<endl<<"Enter your response"<<endl;
//         cin>>choice;
//         if (choice == 1){
//             cout<<"Selected: Addition"<<endl;
//             cout<<"Enter num1: "<<endl;
//             cin>>num1;
//             cout<<"Enter num2: "<<endl;
//             cin>>num2;
//             cout<<"Sum: "<<num1+num2<<endl;
//         }
//         else if (choice == 2){
//             cout<<"Selected: Subtraction"<<endl;
//             cout<<"Enter num1: "<<endl;
//             cin>>num1;
//             cout<<"Enter num2: "<<endl;
//             cin>>num2;
//             cout<<"Sub: "<<num1-num2<<endl;
//         }
//         else if (choice == 3){
//             cout<<"Selected: Multiplication"<<endl;
//             cout<<"Enter num1: "<<endl;
//             cin>>num1;
//             cout<<"Enter num2: "<<endl;
//             cin>>num2;
//             cout<<"Mul: "<<num1*num2<<endl;
//         }
//         else if (choice == 4){
//             cout<<"Selected: Division(num should not be 0)"<<endl;
//             cout<<"Enter num1: "<<endl;
//             cin>>num1;
//             cout<<"Enter num2: "<<endl;
//             cin>>num2;
//             cout<<"Div: "<<num1/num2<<endl;
//         }
//         else if (choice == 5){
//             exit(0);
//         }
//         else{
//             cout<<"INVALID INPUT"<<endl;
//         }
//     }
//     return 0;
// }


// 