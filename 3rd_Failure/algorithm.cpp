//ALGORITHM::Linear Search
//TIME COMPLEXITY:: O(n) [Linear Time Complexity]
// #include<iostream>
// using namespace std;

// int linearSearch(int arr[],int size,int target){
//     for(int i=0;i<size;i++){
//         if(arr[i]== target){//FOUND
//             return i;
//         }
//     }
//     return -1;//NOT FOUND
// }

// int main(){
//     int arr[]={4,2,7,8,1,2,5};
//     int size=7;
//     int target=8;
//     cout<<linearSearch(arr,size,target)<<endl;
//     return 0;
// }



//Subarray-Continuous part of a array
//e.g. arr=[1,2,3,4,5] 
//1 element subarray-- [1],[2],[3],[4],[5]
//2 element subarray-- [1,2],[2,3],[3,4],[4,5]
//3 element subarray-- [1,2,3],[2,3,4],[3,4,5]
//4 element subarray-- [1,2,3,4],[2,3,4,5]
//5 element subarray-- [1,2,3,4,5]
//Formula to find total subarray = (n*(n+1))/2
// to print sub array we only need to find start and end point
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     int arr[5]={1,2,3,4,5};
//     for(int st=0;st<n;st++){
//         for(int end=st;end<n;end++){
//             for(int i=st;i<=end;i++){
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Maximum Subarray Sum --Brute force [O(n^2)]
#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    int maxSum=INT_MIN;
    for(int st=0;st<n;st++){
        int currSum=0;
        for(int end=st;end<n;end++){
            currSum+=arr[end];
            maxSum=max(maxSum,currSum);
        }
    }
    cout<<"Max Sum: "<<maxSum;
    return 0;
}
