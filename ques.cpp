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


// CALCULATE SUM OF NUMBERS 1 TO N USING FUNCTION

// #include<iostream>
// using namespace std;

// int sum(int n){
//     int sum=0;
//     for(int i=0;i<=n;i++){
//         sum+=i;
//     }
//     return sum;
// }

// int main(){
//     int n;
//     cout<<"Enter no. upto which u want to find sum: ";
//     cin>>n;
//     cout<<sum(n)<<endl;
//     return 0;
// }


//CALCULATE N FACTORIAL USING FUNCTION

// #include<iostream>
// using namespace std;

// int fact(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
//     return fact;
// }

// int main(){
//     int n;
//     cout<<"Enter no. upto which u want to find sum: ";
//     cin>>n;
//     cout<<fact(n)<<endl;
//     return 0;
// }


//CALCULATE SUM OF DIGITS OF NUM USING FUNCTION

// #include<iostream>
// using namespace std;

// int digit(int n){
//     int sum=0;
//     while(n>0){
//         int i=n%10;
//         sum+=i;
//         n=n/10;
//     }
//     return sum;
// }

// int main(){
//     int n;
//     cout<<"Enter no. upto which u want to find sum: ";
//     cin>>n;
//     cout<<digit(n)<<endl;
//     return 0;
// }


//CALCULATE nCr BINOMIAL COEFFICIENT FOR n&r

// #include<iostream>
// using namespace std;

// int fact(int n){
//     int fact=1;
//     if(n!=0){
//         for(int i=1;i<=n;i++){
//             fact*=i;
//         }
//         return fact;
//     }
//     else{
//         return 1;
//     }
// }

// int binomial(int n,int r){
//     if (n>=r&&n>=0&&r>=0){
//         int a=fact(n)/(fact(r)*fact(n-r));
//         return a;
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//     int n,r;
//     cout<<"Enter no.: ";
//     cin>>n;
//     cout<<"Enter no.: ";
//     cin>>r;
//     cout<<binomial(n,r)<<endl;
//     return 0;
// }


//WAF TO CHECK IF A NUMBER IS PRIME OR NOT

// #include<iostream>
// using namespace std;

// bool check(int n){
//     if(n>=2){
//         for(int i=2;i*i<=n;i++){
//             if(n%i==0){
//                 return false;
//             }
//         }
//     }else{
//         return false;
//     }
//     return true;
// }

// int main(){
//     int n;
//     cout<<"Enter no.: ";
//     cin>>n;
//     if(check(n)){
//         cout<<"prime";
//     }else{
//         cout<<"not prime";
//     }
//     return 0;
// }

//WAF TO PRINT ALL PRIME NO.S FROM 1 TO N

// #include<iostream>
// using namespace std;

// int check(int n){
//     if(n>=2){
//         for(int i=2;i*i<=n;i++){
//             if(n%i==0){
//                 return false;
//             }
//         }
//     }else{
//         return false;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter no.: ";
//     cin>>n;
//     for(int i=2;i<=n;i++){
//         if(check(i)){
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }


//WAF TO PRINT Nth FIBONACCI

// #include<iostream>
// using namespace std;

// int fibonacci(int n){
    
//     if(n>=1){
//         int num0=0,num1=1;
//         cout<<num0<<" "<<num1<<" ";
//         for(int i=2;i<=n;i++){
//             int num2= num0 +num1;
//             cout<<num2<<" ";
//             num0=num1;
//             num1=num2;
//         }
//     }else if(n==0){
//         cout<<0;
//     }else{
//         return 0;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter no.: ";
//     cin>>n;
//     fibonacci(n);
//     return 0;
// }


//DECIMAL TO BINARY CONVERSION FOR N NO.
// #include<iostream>
// using namespace std;
// void bin(int dec){
//     int pow=1,bin=0;
//     int temp=dec;
//     while(dec>0){
//         int rem = dec%2;
//         dec=dec/2;
//         bin+=(rem*pow);
//         pow*=10;
//     }
//     cout<<"Decimal: "<<temp<<" binary no.:"<<bin<<endl;
// }

// int main(){
//     int dec;
//     cout<<"Enter any no. upto which u want to convert into binary: ";
//     cin>>dec;
//     for(int i=1;i<=dec;i++){
//         bin(i);
//     }
//     return 0;
// }


//BINARY TO DECIMAL
// #include<iostream>
// using namespace std;
// void dec(int bin){
//     int pow=1,dec=0;
//     int temp = bin;
//     while(bin>0){
//         int rem = bin%10;
//         bin=bin/10;
//         dec+=(rem*pow);
//         pow*=2;
//     }
//     cout<<" binary no.:"<<temp<<" Decimal no.: "<<dec<<endl;
// }

// int main(){
//     int bin;
//     cout<<"Enter any no. upto which u want to convert into binary: ";
//     cin>>bin;
//     dec(bin);
//     return 0;
// }


//WAF TO REVERSE A INTEGER N
// #include<iostream>
// using namespace std;

// int rev(int n){
//     int rev=0;
//     while(n>0){
//         int rem=n%10;
//         n/=10;
//         rev=rev*10+rem;
//     }
//     cout<<rev<<endl;
// }
// int main(){
//     int n;
//     cout<<"Enter any no. u want to rev.: ";
//     cin>>n;
//     rev(n);
//     return 0;
// }


//FIGURE OUT HOW TO FIND IF A NUMBER IS POWER OF 2  WITHOUT LOOP
