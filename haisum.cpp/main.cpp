//
//  main.cpp
//  haisum.cpp
//
//  Created by Hailia Sommerville on 10/3/24.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//addition function
int add(int num1, int num2) {
    int sum = num1 + num2;
    cout << sum<< endl; // Print the sum
    return sum; // Return the sum for further use
}
//subtraction function
int subtract(int num1, int num2) {
    int diff = num1 - num2;
    cout << diff << endl;
    return diff;
}
//multiplication
int times(int num1, int num2) {
    int product = num1 * num2;
    cout << product << endl;
    return product;
}
//division
int divide(int num1, int num2) {
    int quotient = num1 / num2;
    cout << quotient << endl;
    return quotient;
}
//remainder
int mod(int num1, int num2) {
    int remainder = num1 % num2;
    cout << remainder << endl;
    return remainder;
}


int main ()
{
    
    cout<<"                              > HailSum| CALCULATOR <  \n";
    cout<<"                              ^^^^^^^^^^^^^^^^^^^^^^^\n";
    cout<<"Explore all our math tools!\n";
    cout<<"\n";
    cout<< "1.Four Function (+,-,/,*) \t\t";
    cout<<"2.Scientific (sin, cos, tan)\n";
    cout<<"\n";
    
    int selection;
    cout<<"Enter tool number: ";
    cin>>selection;
    
    if (selection== 1){
        
        
        int num1, num2;
        char op; //operand variable
        cout<< "Enter first number: ";
        cin >> num1;
        cout<< "Enter operand: ";
        cin >> op;
        cout<< "Enter second number: ";
        cin >> num2;
        
        if (op == '+'){
            add(num1,num2);
        }else if (op == '-'){
            subtract(num1,num2);
        }else if (op == '*'){
            times(num1, num2);
        }else if (op == '/'){
            divide(num1,num2);
        }else if (op == '%'){
            mod(num1, num2);
        }else {
            cout<< "INVALID OPERATOR!";
        }
        
    }else if (selection==2){
        double num, answer;
        string trig;
        cout<< "Enter trig function (sin,cos,tan): ";
        cin>> trig;
        cout<< "Enter radian: ";
        cin>> num;
        
        if (trig == "sin"){
            answer= sin(num);
            cout<< fixed<< setprecision(4)<<answer<< endl;
        } else if (trig == "cos"){
            answer= cos(num);
            cout<<fixed<< setprecision(4)<<answer<< endl;
        }else if (trig == "tan"){
            answer= tan(num);
            cout<<fixed<< setprecision(4)<<answer<< endl;
        }else {
            cout<< "INVALID FUNCTION!";
        }
        
    }else {
            cout<< "INVALID SELECTION!";
        }
        
    
    return 0;
}

