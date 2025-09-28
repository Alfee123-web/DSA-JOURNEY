#include <iostream>
using namespace std;
void printArr(char arr[], int n){
    for(int i = 0;i<n;i++){
    cout<<arr[i]<<"  , ";
}
cout<<endl;
}

void charSort(char arr[] , int n){
for(int i = 1;i<n;i++){
    int curr = arr[i];
    int prev = i-1;
    while(prev>=0 && arr[prev]<curr){ //for descending
        swap(arr[prev], arr[prev + 1]);
        prev--;
    }
    arr[prev +1]=curr;
}
printArr(arr , n);
}
int main() {
   char ch[] = {'f','b','a','e','c','d'};
   charSort(ch , 6);
    return 0;
}
