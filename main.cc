#include "MyTime.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;


int main(){

  int h = 0;
  int m = 0;
  
  cout << "Enter the hours THEN minutes of your first time." << endl;
  cout << "Hours: ";
  cin >> h;
  cout << endl;
  cout << "Minutes: ";
  cin >> m;
  cout << endl;
  MyTime t1(h, m);
  cout << "Repeat this for the second time object." << endl;
  cout << "Hours: ";
  cin >> h;
  cout << endl;
  cout << "Minutes: ";
  cin >> m;
  cout << endl;
  MyTime t2(h, m);
  

    MyTime tmp(0,0);
  tmp = t1+t2;
  cout << "Time 1 + time 2 equals: " << tmp << endl;
  tmp.Reset(0,0);
  tmp = t1-t2;
  cout << "Time 1 - time 2 equals: " << tmp << endl;
  tmp.Reset(0,0);
  int scaler;
  cout << "Enter a scaler for multiplication and division: ";
  cin >> scaler;
  tmp = t1*scaler;
  cout << "Time 1 * scaler equals: " << tmp << endl;
  tmp.Reset(0,0);
  tmp = t1/scaler;
  cout << "Time 1 / scaler equals: " << tmp << endl;



  cout << "Enter the hours THEN minutes of your first time you wish to compare." << endl;
  cout << "Hours: ";
  cin >> h;
  cout << endl;
  cout << "Minutes: ";
  cin >> m;
  cout << endl;
  MyTime tc1(h, m);
  
  cout << "Repeat this for the second time object you wish to compare." << endl;
  cout << "Hours: ";
  cin >> h;
  cout << endl;
  cout << "Minutes: ";
  cin >> m;
  cout << endl;
  MyTime tc2(h, m);
  
  if(tc1==tc2){
    cout << "The times are equal." << endl;
  }
  else{
    cout << "The times are not equal." << endl;
  }
  if(tc1 <= tc2){
    cout << "The first time is less than or equal to the second time when using the '<=' operator." << endl;
  }
  else {
    cout << "The first time is NOT less than or equal to the second when using the '<=' operator." << endl;
  }
  if(tc1 > tc2){
    cout << "The first time is greater than the second time when using the '>' operator." << endl;
  }
  else {
    cout << "The first time is NOT greater than the second time when using the '>' operator." << endl;
  }
  



 cout << "Enter a time to print to the terminal (hh:mm): ";
  
  MyTime iot1;
  cin >> iot1;

  cout << iot1;
  
  

}
