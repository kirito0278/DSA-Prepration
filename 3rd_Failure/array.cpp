#include<iostream>
#include<climits>//needed to use INT_MAX and INT_MIN
#include<algorithm>// needed to use min and max functions
using namespace std;

// void changeArr(int arr[],int size){
//     cout<<"In function\n";
//     for(int i=0;i<size;i++){
//         arr[i]=2*arr[i];
//     }
// }

// int reverseArr(int arr[],int size){
//     //Two Pointer Approach is a technique where you use two indices (pointers) to solve array or string problems efficiently, usually in O(n) time instead of O(n²).
//     int start=0,end=size-1;
//     while(start<end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }

// void opp(int arr[],int size){
//     int sum=0,product=1;
//     for(int i=0;i<size;i++){
//         sum+=arr[i];
//         product*=arr[i];
//     }
//     cout<<"Sum: "<<sum<<"\nProduct: "<<product;
// }

// void min_max_swap(int arr[],int size){
//     int small=INT_MAX,large=INT_MIN,small_index,large_index;
//     cout<<"Before Swap:\n";
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     for(int i=0;i<size;i++){
//         if(arr[i]<small){
//             small=arr[i];
//             small_index=i;
//         }
//         if(arr[i]>large){
//             large=arr[i];
//             large_index=i;
//         }
//     }
//     swap(arr[small_index],arr[large_index]);
//     cout<<"\nafter Swap:\n";
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// void unique_val(int arr[],int size){
//     int count=0;
//     for(int i=0;i<size;i++){
//         for(int j=0;j<size;j++){
//             if(i!=j && arr[i]==arr[j]){
//                 count++;
//                 break;
//             }
//         }
//         if(count==0){
//             cout<<arr[i]<<" ";
//         }
//         count=0;
//     }
// }

// void intersect(int arr1[],int arr2[],int size1,int size2){
//     for(int i=0;i<size1;i++){
//         for(int j=0;j<size2;j++){
//             if(arr1[i]==arr2[j]){
//                 cout<<arr1[i]<<" ";
//             }
//         }
//     }
// }

int main(){
    
    //ARRAY SYNTAX-- data_type variable_name[length_of_array]
    //NOTE-- ONLY STORE SAME DATA TYPE, CONTIGUOUS IN MEMORY + LINEAR

    // int grades[10]; // Declares an integer array of size 10. No values are initialized, so the elements contain garbage values (for a local array) until assigned,elements contain 0 (for a global array)
    
    // int mark[50]={99,100,54,36,89}; //An array of size 50 is created. The first five elements are initialized with the given values, and the remaining 45 elements are automatically initialized to 0
    
    // double price[]={23.43,42.43,43.53}; //Since no size is specified, the compiler automatically determines the array size from the number of initializer values (3)
    
    //indexing starts from 0 in array [0 to size-1]
    // int marks[5]={99,100,54,36,89};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;

    // to find size of array
    // int size= sizeof(marks)/sizeof(int); //sizeof(marks) will provide use storage used in memory(in bytes) in this case it is 20
    // cout<<size<<endl;

    // using loops for initialization of array and print all elements of array
    // int num[size];
    //to input elements in array
    // for(int i=0;i<size;i++){
    //     cin>>num[i];
    // }
    // //to print elements of array
    // for(int i=0;i<size;i++){
    //     cout<<num[i]<<endl;
    // }

    //Pass By Reference:: Pass by Reference means you pass the original variable to the function, not a copy.
    //So, any changes made inside the function directly affect the original variable.
    //The reference operator is &
    // int arr[]={1,2,3};
    // changeArr(arr,3);
    // cout<<"In main\n";
    // for(int i=0;i<3;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;


    // FIND SMALLEST/LARGEST IN ARRAY
    // int num[]={5,15,22,1,-15,24};

    // int small=INT_MAX,large=INT_MIN;

    // int size=sizeof(num)/sizeof(int);
    // for(int i=0;i<size;i++){
    //     // if(num[i]<min){
    //     //     min=num[i];
    //     // }
    //     // if(num[i]>max){
    //     //     max=num[i];
    //     // }
    //     small=min(num[i],small);
    //     large=max(num[i],large);
    // }
    // cout<<"Smallest: "<<small<<endl;
    // cout<<"Largest: "<<large<<endl;


    // FIND SMALLEST/LARGEST IN ARRAY AND THEIR INDEX
    // int num[]={5,15,22,1,-15,24};

    // int small=INT_MAX,large=INT_MIN,small_index,large_index;

    // int size=sizeof(num)/sizeof(int);
    // for(int i=0;i<size;i++){
    //     if(num[i]<small){
    //         small=num[i];
    //         small_index=i;
    //     }
    //     if(num[i]>large){
    //         large=num[i];
    //         large_index=i;
    //     }
    // }
    // cout<<"Smallest: "<<small<<" Index: "<<small_index<<endl;
    // cout<<"Largest: "<<large<<" Index: "<<large_index<<endl;


    //Reverse Array
    // int arr[]={4,2,7,8,3,1};
    // int size=6;
    // reverseArr(arr,size);
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    //Sum and Product of all num in array
    // int arr[]={4,2,7,8,3,1};
    // int size=6;
    // opp(arr,size);

    //Swap MAX & MIN num of an array
    // int arr[]={4,2,7,8,3,1};
    // int size=6;
    // min_max_swap(arr,size);

    //Print unique values in an array
    // int arr[]={1,2,3,1,3,1,4,5,2};
    // int size=9;
    // unique_val(arr,size);

    //Intersection of 2 Array 
    // int arr1[]={1,2,3,5,6};
    // int size1=5;
    // int arr2[]={6,7,3,1};
    // int size2=4;
    // intersect(arr1,arr2,size1,size2);
    return 0;
} 