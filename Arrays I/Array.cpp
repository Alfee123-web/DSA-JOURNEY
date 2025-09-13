// #include<iostream>
// using namespace std;
// int main(){
// // int marks[50];//garbage value ayegi
// int marks[50] = {1,2,3};//zero  value ayegi after 3 size
// int marks[] = {1,2,3};//automatically 3 size ka array create ho jayega
// cout<<marks[0]<<endl;//garbage value ayegi if not initialize
// cout<<marks[1]<<endl;
// cout<<marks[2]<<endl;
// cout<<marks[3]<<endl;//automatically 0 ayega
// cout<<marks[4]<<endl;
// cout<<marks[5]<<endl;
// cout<<marks[50]<<endl;//error beacuse 0 to 49 tk hota hai

// //MEMORY IS STATICALLY ALLOCATED AT COMPILE TIME
// int marks[5] = {1,2,3,4,5};
// cout<<sizeof(marks)<<endl;
// int n = sizeof(marks)/sizeof(int) //4 bytes
// cout<<sizeof(marks)/sizeof(int)<<endl; //it will give correct length of array
//     return 0;
// // }
// length = size of array / size of type

// OUTPUT in Array
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int arr[5] = {7,5,52,21,13};

//     // int len = sizeof(arr) / sizeof(int);
//     int n = sizeof(arr) / sizeof(int);
//     // cout<<marks[idx];
//      // idx update hoga and always start with 0

//     // for(int idx = 0; idx<=len-1 ; idx ++){
//     for(int idx = 0; idx<n ; idx ++){
//         cout<<arr[idx]<<" ";
//     }
//     cout<<endl;

//     return 0;
// }

// INPUT IN ARRAY
#include <iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter length of array : ";//we can dynamically allocate size of array during run time
   cin>>n;
    int arr[n];

    // int n = sizeof(arr) / sizeof(int);

    for (int idx = 0; idx < n; idx++)
    {
        cin >> arr[idx];
    }

    for (int idx = 0; idx < n; idx++)
    {
        cout << arr[idx] << " , ";
    }
    cout << endl;

    return 0;
}
