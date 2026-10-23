//A vector is a dynamic array provided by the C++ Standard Template Library (<vector>). Unlike a normal array, it can automatically resize itself at runtime and provides many built-in functions for efficient element management
#include <iostream>
#include <vector>
using namespace std;
int main(){
    //vector syntax:
    // vector<int> vec;//currently size = 0
    // vector<int> vec={1,2,3};
    // vector<int> vec(3,0);
    // cout<<vec[1];


    // for(int val:vec){   // for each loop
    //     cout<<val<<endl;
    // }


    //vector functions:
    // cout<<"size: "<<vec.size()<<endl; //size function
    // vec.push_back(4); // add element and increase size
    // cout<<"size: "<<vec.size()<<endl;
    // vec.pop_back();//remove last element
    // cout<<vec.front()<<endl;//gives 1st element
    // cout<<vec.back()<<endl;//gives last element
    // cout<<vec.at(0)<<endl;//gives element according to given index


    //Static vs Dynamic Allocation
    //static memory get allocated during compile time
    //dynamic memory get allocated during run time[in vector element pushed during run time]
    //static allocation takes part in stack memory
    //static allocation takes part in heap memory


    //vector has two properties:1.size [no. of elements stored] 2.capacity [how many elements this internal array can store]
    vector<int> val1;
    val1.push_back(1);
    val1.push_back(2);
    val1.push_back(3);
    val1.push_back(2);
    val1.push_back(3);
    cout<<val1.size()<<endl;//5
    cout<<val1.capacity()<<endl;//8

    //linear search
    //reverse
    return 0;
}


// g++ -std=c++11 vector.cpp  