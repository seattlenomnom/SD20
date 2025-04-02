/* sd20.cpp sourcefile for sd20
 * Program practices use of concepts found in, Dmitrovic, Slobodan,
 * Modern C++ for the Complete Beginner, Apress, New York, New York, 2020.
 *
 * Notes:
 *
 *Tue 01 Apr 2025 11:50:09 PM PDT
 * 20.3 Functions parameters
 * 20.4 Passing Arguments
 * 20.5 Function Overloads
 *
*/


/* includes */
#include<iostream>



/* function declarations */
int multiplication(int, int);


int main(){

    int result = 0;

    result = multiplication(10, 20);

    std::cout << "The result is: " << result << '\n';


}

/* function definitions */
int multiplication(int x, int y){
    return(x * y);
}









