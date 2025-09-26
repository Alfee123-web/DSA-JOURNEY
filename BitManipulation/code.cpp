// #include <iostream>
// using namespace std;

// int main()
// {
//     // Bitwise Operators
//     cout << (3 & 5) << endl; // AND
//     cout << (3 | 5) << endl; // OR
//     cout << (3 ^ 5) << endl; // XOR (same => 0 , diff => 1)
//     cout << (~6) << endl;    // NOT (0 => 1, 1=> 0)
//     cout << (~0) << endl;    //-1

//     // ans = -7 (beacuse there are more preceedings zeross...)

//     return 0;
// }

//MSB = most significant bit decides whether is no. is positive or negative
//MSB =>  0 = +ve  (towards left)
//MSB =>  1 = -ve {sign} 
// 1s complement then add 1 = {magnitude} / 2's complement
// 32 bits = last bit 1 MSB and other 31 bits = {magnitude}


//BINARY SHIFT OPERATORS

// #include <iostream>
// using namespace std;

// int main() {
//    cout<<(7 << 2)<<endl; //28
//    cout<<(7 >> 2)<<endl; //1
//     return 0;
// }
//left shift = a << b =>  a * 2^b
//right shift = a >> b => a / 2^b



//PREDICT THE OUTPUT

#include <iostream>
using namespace std;

int main() {
   cout << (~4) << endl; 
      cout<<(8 >> 1)<<endl;
    return 0;
}
