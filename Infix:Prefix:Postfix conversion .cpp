
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <stack>
#include <string>

using namespace std;

void DisplayMenu(){   // Our Menu


 cout<<"Pick a option\n"
 <<"1. Infix"<<endl
 <<"2. Prefix"<<endl
 <<"3.Postfix"<<endl
 <<"4.End Program"<<endl;




}


int main(){



 string Operand;
 string operand2;
int option;
 char op;
 int results;
 string Choice;
int number1;
int number2;
 bool run=true;
 stack<int> Operand1;
 stack<int> Operand2;
 stack<string> Operator;
 stack<int> Result;
 stack<string> equal;


do{
 DisplayMenu();
 cin>>option;
cout<< "is this the option you desire? (Y/n)" <<option<<endl;
cin>>op;
if(op == 'n')
    continue;
cout<<"here\n";
switch(option){
case 1:

                                  // infix expression
cout<<"Enter operand"<<endl;
cin>>Operand;
 number1= stod(Operand);
cout<<"choose operator(+,-,*,/)"<<endl;
cin>>op;
cout<<"Enter second operand"<<endl;
cin>>operand2;
 number2 = stod(operand2);

// Infix Expression
        switch(op){

            case '+':
            results = number1 + number2;
            Operand1.push(number1);
            Operand2.push(number2);
            Operator.push("+");
            Result.push(results);
            equal.push("=");
            break;
            case '-':
            results = number1 - number2;
            Operand1.push(number1);
            Operand2.push(number2);
            Operator.push("-");
            Result.push(results);
            equal.push("=");
            break;
            case '*':
            results = number1 * number2;
            Operand1.push(number1);
            Operand2.push(number2);
            Operator.push("*");
            Result.push(results);
            equal.push("=");
            break;
            case '/':
            results = number1 / number2;
            Operand1.push(number1);
            Operand2.push(number2);
            Operator.push("/");
            Result.push(results);
            equal.push("=");
            break;
        }// end inner switch
 case 2:

/*
    IF USER SELECTS ANYTHING BUT 1 ON FIRST
    RUN AS THE STACK IS EMPTY; SEGFALUT
    
*/

  cout << "Prefix Form"<< " " << Operator.top() << " " << Operand1.top() << " " << Operand2.top() << " " << equal.top() << " " << Result.top() <<endl;  // Prefix

  // Enter a prefix expression

cout << "Prefix input,Enter operator (+,-,*,/)"<<endl;
cin>>op;
 number1= stod(Operand);

cout<<"Pick the first operand"<<endl;
cin>>Operand;

cout<<"Enter second operand"<<endl;
cin>>operand2;
 number2 = stod(operand2);

  switch(op){

            case '+':
            results = number1 + number2;
            Operand1.push(number1);
            Operand2.push(number2);
            Operator.push("+");
            Result.push(results);
            equal.push("=");
            break;
            case '-':
            results = number1 - number2;
            Operand1.push(number1);
            Operand2.push(number2);
            Operator.push("-");
            Result.push(results);
            equal.push("=");
            break;
            case '*':
            results = number1 * number2;
            Operand1.push(number1);
            Operand2.push(number2);
            Operator.push("*");
            Result.push(results);
            equal.push("=");
            break;
            case '/':
            results = number1 / number2;
            Operand1.push(number1);
            Operand2.push(number2);
            Operator.push("/");
            Result.push(results);
            equal.push("=");
            break;
        }// end inner switch

  
 

break;
case 3:


 cout << "Postfix expression" << " " << Result.top() << " " << equal.top() << " " <<Operand1.top() << " " << operand2 << " " << Operator.top() <<endl;


cout << "Enter first operand)"<<endl;
cin>>Operand;
 number1= stod(Operand);

cout<<"Pick the second operand"<<endl;
cin>>operand2;

cout<<"Enter operator (+,-,*,/)"<<endl;
cin>>op;
 number2 = stod(operand2);


 switch(op){

            case '+':
            results = number1 + number2;
            Operand1.push(number1);
            Operand2.push(number2);
            Operator.push("+");
            Result.push(results);
            equal.push("=");
            break;
            case '-':
            results = number1 - number2;
            Operand1.push(number1);
            Operand2.push(number2);
            Operator.push("-");
            Result.push(results);
            equal.push("=");
            break;
            case '*':
            results = number1 * number2;
            Operand1.push(number1);
            Operand2.push(number2);
            Operator.push("*");
            Result.push(results);
            equal.push("=");
            break;
            case '/':
            results = number1 / number2;
            Operand1.push(number1);
            Operand2.push(number2);
            Operator.push("/");
            Result.push(results);
            equal.push("=");
            break;

            case 5:

            cout << "Infix Expression" << " " << Operand1.top() << " " << Operator.top() << " " << Operand2.top() << Result.top() <<endl;

            break;
        }// e

 // Enter a postfix expression first

break;
case 6: run=false;break;
} // end switch
}while(run);
return 0;



}

