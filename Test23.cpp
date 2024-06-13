#include<bits/stdc++.h>
using namespace std;

int findEffectiveLength(char array[], int array_size) {
    int start = 0;
    int end = array_size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (array[mid] == '\0') {
            end = mid + 1;
        } else {
            start = mid + 1;
        }
    }

    return start;
}
// zoom in a bit
int main() {
    char array[] = "\0\0\0\0Hello, world!";
    int array_size = sizeof(array) / sizeof(array[0]);

    cout << "Effective length: " << findEffectiveLength(array, array_size) << endl;  // Output: 13
    return 0;
}


// int main() {

//     //Taking input
//     int n;
//     vector <char> v(n);
//     for(int i = 0 ; i < n ; i++){
//         cin>>v[i];
//     }
//     int length = 0;
//     //Iterating over the array
//     for(auto it: v){
//         if(isNull(it)){
//             continue;
//         }else{
//             length++;
//         }
//     }

//     cout<<length
    
//     return 0;
// }
// while (start <= end) {
//     int mid = start + (end - start) / 2;

//     if (array[mid] == '\0') {
//         end = mid - 1;
//     } else {
//         start = mid + 1;
//     }
// }

// Standard template for binary search
// Step 1: Take input,
// Step 2: Initialise start and end .
// Start = 0, end = vector.size() - 1;
// Step 3: use condition while (start <= end)
// step 4: find mid using the formula -> start + (end - start) / 2;
// Now checking if the mid element is null then the end becomes mid - 1
// because all the elements right to mid are null.
// Step 5: if mid is not null then all the elements to the left are not null 
// and we move start to mid + 1.
// Step 6: Keep an answer variable to keep track of the size. and 