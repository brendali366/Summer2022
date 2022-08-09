#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(){

    double  a, b, diff;

    cout << "Please enter first value: " <<endl;
    cin >> a;

    cout << "Please enter second value: " <<endl;
    cin >> b;

    diff = ((abs(a-b))/((a+b)/2))*100; //this calculates the absolute value of (a-b), and adds the value (a+b)/2 and divides the two value and then multiply it by 100 for the percentage

    cout << "Percent difference is: " <<fixed <<setprecision(2) <<diff <<"%" <<endl;


    return 0;
}