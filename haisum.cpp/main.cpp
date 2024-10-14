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
double divide(double num1, double num2) {
    double quotient = num1 / num2;
    cout << fixed<<setprecision(2)<<quotient << endl;
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
    
    
    string user;
    cout<<"Hello, what's your name? ";
    cin>>user;
    cout<<"Welcome "<<user<<"!"<<endl;
    
    char continue_calc;
    do{
        
        cout<<"                             Explore all our math tools!\n";
        cout<<"\n";
        cout<< "1.Four Function (+,-,/,*) \t";
        cout<<"2.Trigonometric (sin,cos,tan)\t";
        cout<<"3.Exponents & Roots\n";
        cout<<"\n";
        
        int selection;
        cout<<"Enter tool number: ";
        cin>>selection;
        
        switch (selection){
                
                
            case 1: {int num1, num2;
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
                break;
            }
            case 2:{
                double num, answer;
                string trig;
                cout<< "Enter trig function (sin,cos,tan): ";
                cin>> trig;
                cout<< "Enter radian: ";
                cin>> num;
                
                if (trig == "sin"){
                    answer= sin(num);
                    cout<< fixed<< setprecision(4)<<"Answer: "<<answer<< endl;
                } else if (trig == "cos"){
                    answer= cos(num);
                    cout<<fixed<< setprecision(4)<<"Answer: "<<answer<< endl;
                }else if (trig == "tan"){
                    answer= tan(num);
                    cout<<fixed<< setprecision(4)<<"Answer: "<<answer<< endl;
                }else {
                    cout<< "INVALID FUNCTION!";
                }
                break;
            }
            case 3: {
                double num1, num2,answer;
                char selection;
                cout<<"a.Exponents b.Roots\n";
                cout<<"Selection: ";
                cin>>selection;
                
                switch(selection){
                    case 'a':
                    case 'A': {
                        cout<<"Enter base and exponent: ";
                        cin>>num1>>num2;
                        answer=pow(num1,num2);
                        cout<<answer<<endl;
                        break;
                    }
                    case 'b':
                    case 'B':{
                        cout<<"Enter base and root: ";
                        cin>>num1>>num2;
                        answer=pow(num1,(1.0/num2));
                        cout<<answer<<endl;
                        break;
                    }
                }
                break;
            }
                
            default:
                cout<< "INVALID SELECTION!";
                break;
                
        }

               // Ask if the user wants to perform another calculation
               cout << "Want to do more math " << user << "? (y/n): ";
               cin >> continue_calc;
           } while (continue_calc == 'y' || continue_calc == 'Y');

           return 0;
       }
