// C++ program to measure execution 
// time using clock() function 
  
#include <bits/stdc++.h> 
using namespace std; 
  
// Function whose time taken to 
// be measured 
void fun() 
{ 
    // OSN-P 2023 A1
    int sum = 0;
    for (int d1 = 0; d1 <= 9; d1++) {
        for (int d2 = 0; d2 <= 9; d2++) {
            for (int d3 = 0; d3 <= 9; d3++) {
                for (int d4 = 0; d4 <= 9; d4++) {
                    for (int d5 = 0; d5 <= 9; d5++) {
                        for (int d6 = 0; d6 <= 9; d6++) {
                            for (int d7 = 0; d7 <= 9; d7++) {
                                if ((d1 == d4 && d2 == d5 && d3 == d6) || (d1 == d5 && d2 == d6 && d3 == d7)) {
                                    sum++;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout << sum << "\n";
} 
  
// Driver Code 
int main() 
{ 
    // clock_t clock(void) returns the 
    // number of clock ticks elapsed 
    // after program was launched. 
    clock_t start, end; 
  
    // Recording the starting 
    // clock tick 
    start = clock(); 
  
    fun(); 
  
    // Recording the end clock tick 
    end = clock(); 
  
    // Calculating total time taken 
    // by the program 
    double time_taken 
        = double(end - start) 
          / double(CLOCKS_PER_SEC); 
  
    cout << "Time taken by program is: "
         << fixed 
         << time_taken 
         << setprecision(5); 
  
    cout << " sec " << endl; 
  
    return 0; 
}