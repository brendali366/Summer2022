/*
Objective of this mini excercise is to code a system to calculate the percent error of two numbers
Done after taking PHYS 2425
*/

 #include <iostream>
 #include <cstdlib>
 #include <iomanip>

 using namespace std;

 int main(){
     double exp, exact, diff, error;

    cout << "Please enter the experiemental number: " <<endl;
    cin >> exp;

    cout << "Please enter the exact/theoretical value: " <<endl;
    cin >> exact;

    diff = exp - exact;
    error = (abs(diff)/exact)*100;



    cout << "The percent error is: " <<setprecision(3) << error << "%"<<endl;



 
     return 0;
 }