#include<iostream>
using namespace std ;

int main(){

    int A,B ;
    // "<<" is a insertion Operator    
    cout << "Enter the value of A : " ; 
    // ">>" is a Extraction Operator
    cin >> A ;

    // "<<" is a insertion Operator    
    cout << "\nEnter the value of B : " ; 
    // ">>" is a Extraction Operator
    cin >> B ;

    cout << "\nSum of both value is "<< A + B ;
    cout << "\nDifference of both value is "<< A - B ;
    cout << "\nMultiplication of both value is "<< A * B ;
    cout << "\nDivision of both value is "<< A / B ;

 return 0 ;    

}