#include <iostream>
using namespace std;
void printSubarrays(int *arr, int n)
{
    for (int start = 0; start < n; start++) // n times
    {
        for (int end = start; end < n; end++) // n times
        {
            // cout << "(" << start << " , " << end << ")";
            //starting aur ending index pair me print ho jayega
            
            for (int i = start; i <=end; i++) //elements print honge saare
            // n times
            {
                cout<<arr[i];
            }
            cout<<" , ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;

    printSubarrays(arr,n);

    return 0;
}

// Sub Array direct formula = n(n+1)/2;
//TIME COMPLEXITY = O(N3)

