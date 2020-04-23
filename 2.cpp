#include <bits/stdc++.h> 
using namespace std; 

// Function to print odd numbers 
void printOddNumbers(int N) 
{ 
  
    cout << "\nOdd: "; 
    for (int i = 1; i <= 2 * a; i++) { 
  
        // Numbers that are not divisible by 2 
        if (i % 2 != 0) 
            cout << i << ","; 
    } 
} 
  
// Driver code 
int main() 
{ 
  
    int a = 5; 
    printOddNumbers(a); 
    return 0; 
} 



Output:

1,3,5,7,9