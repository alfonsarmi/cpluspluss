/*
  Name: CALCULATOR v1.0
  Author: Aldo Ziflaj
  Date: 01-01-13 12:01
  Description: A simple calculator that can add, subtract multiply, divide, 
               raise to n-th integer power and calculate the factorial
*/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;

unsigned int factorial(int a) {
         int r=1;
         for (int i=a;i>0;i--) r*=i;
         return r;
}

int main () {
    double a,b,r,memory=0;
    char op, choice[10];

    cout<<"+ to add, - to subtract, * to multiply, / to divide, \
^ to power, ! to factorial\n\n";
    start: // THE BEGINING

    cin>>a; // 1ST NUMBER
    reused: //
    cin>>op; // OPERATOR
    // WHAT TO DO
    if (op=='!') r=factorial(a); 
    else {
         cin>>b;
         if (op=='+') r=a+b;
         if (op=='-') r=a-b;
         if (op=='*') r=a*b;
         if (op=='/') r=a/b;
         if (op=='^') r=pow(a,b);
         }
    // COUT THE RESULT
    cout<<"="<<r<<endl;

    // CREATING THE MEMORY
    cout<<"\nType 'mi' to insert the number into memory, or 'mc' to clear memory\n";
    cin>>choice;
    if (!strcmp(choice,"mi")) memory=r; // INSERT THE MEMORY
    else if (!strcmp(choice,"mc")) memory=0; // CLEAR THE MEMORY
    else cout<<"command unknown, program will go on\n"; // DEFAULT

    // CREATING THE BASE FOR THE LOOP
    cout<<"\nType 'restart' to start again from the beggining, \
'reuse' to use the result, \n'mr' to reuse the number \
in the memory, or 'quit' to quit: ";
    cin>>choice; // TELL THE PROGRAM WHAT TO DO
    if (!strcmp(choice,"restart")) goto start; // START FROM THE BEGINING
    if (!strcmp(choice,"reuse")) { a=r; cout<<a; } // USE THE RESULT
    if (!strcmp(choice,"reuse")) goto reused; // START WITH THE RESULT
    if (!strcmp(choice,"quit")) goto end; // QUIT THE PROGRAM
    if (!strcmp(choice,"mr")) { a=memory; cout<<a; } // USE THE MEMORY
    if (!strcmp(choice,"mr")) goto reused; // START WITH THE MEMORY
    getchar();
    end: // TO QUIT THE PROGRAM
    return 0;
}

void Polynomial::tokenize(const string& str) {

   //tokenize input string
   regex e(R"([-+]?((\d*[xX]\^\d+)|(\d*[xX])|(\d+)))");
   sregex_token_iterator first(str.begin(), str.end(), e), last;

   //convert tokenized string terms to exponent and coefficient
   //and then insert them to map<int, double> polyTerms
   while (first != last) {
      string token {*first++};
      smatch sm;

      // Terms like "-5x^2" , "+2x^3" , "x^5"
      if (regex_match(token, sm, regex(R"(([-+]?\d+)([xX](\^(\d+))?)?)"))) {
         double coef {stod(sm[1])};
         int exp {0};

         string expToken {sm[4].str()};
         if (!sm[2].str().empty()) {
            if (!expToken.empty()) {// "3x^2" , "x^5"
               exp = stoi(expToken);
            }
            else {// "4x" , "-2X" , "1x"
               exp = 1;
            }
         }
         else {// "9" , "-2"
            exp = 0;
         }

         polyTerms[exp] += coef;
         //check if coefficient is zero and if and so, delete from polyTerms
         if (polyTerms[exp] == 0) {
            polyTerms.erase(exp);
         }
      }
   }
}