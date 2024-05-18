#include <iostream>
#include <string>  
using namespace std;
int main() {
    // ******************* Quiz Game ********************
    
  cout<<"---------- Welcome to Quiz Game ! ---------- "<<endl;
   cout<<"------ Please follow the Instruction. ------ "<<endl; 
   cout<<"Step 1 : Quiz contains total 10 questions. "<<endl;
   cout<<"Step 2 : You will given 1 marks for each right answer. "<<endl;
   cout<< "Step 3 : There will be no negitive Marking. "<<endl;
    cout<< "Step 4 : Passing marks will be 4. "<<endl;
    
   cout<<endl;
   
    string name ;
    int score=0;
    char answer1, answer2, answer3, answer4, answer5, answer6, answer7, answer8,answer9,answer10;
    // Get user name 
    cout<<"Enter your name "<<endl;
    getline (cin , name);
cout<<"Welcome to the Quiz Game , " <<name<< "!" <<endl;

cout<<endl;

// Question 1 
cout<<"1) What is the old name of C++ ? "<<endl;
cout<<"a) Cpp b) C with Classes c) C++ d) None of these "<<endl;
cout<<"Enter your answer (a/b/c/d):"<<endl;
cin>>answer1;
if (answer1=='b') {
    cout<<"Correct!"<<endl;
    score++;
}
else {
    cout<<"Wrong! The correct answer is b) C with Classes "<<endl;
}
cout<<endl;
// Question 2
cout<<"2) Who is  Developer of C++ ? "<<endl;
cout<<"a) James Gosling  b) Mark Charles c) Bjarne Stroustrup d) None of these "<<endl;
cout<<"Enter your answer (a/b/c/d):"<<endl;
cin>>answer2;
if (answer2=='c') {
    cout<<"Correct!"<<endl;
    score++;
}
else {
    cout<<"Wrong! The correct answer is c) Bjarne Stroustrup "<<endl;
}
cout<<endl;
// Question 3
cout<<"3) How many loops are there in C++ ? "<<endl;
cout<<"a) 1  b) 5 c) 4 d) 3 "<<endl;
cout<<"Enter your answer (a/b/c/d):"<<endl;
cin>>answer3;
if (answer3=='d') {
    cout<<"Correct!"<<endl;
    score++;
}
else {
    cout<<"Wrong! The correct answer is d) 3 "<<endl;
}
cout<<endl;
// Question 4
cout<<"4) What is the name of :: in C++ ? "<<endl;
cout<<"a) Colon  b) Scope Resolution Operator c) Semi-Colon d) Comma "<<endl;
cout<<"Enter your answer (a/b/c/d):"<<endl;
cin>>answer4;
if (answer4=='b') {
    cout<<"Correct"<<endl;
    score++;
}
else {
    cout<<"Wrong! The correct answer is b) Scope Resolution Operator "<<endl;
}
cout<<endl;
// Question 5
cout<<"5) What is the size of int data type ? "<<endl;
cout<<"a) 4 B  b) 2 B c) 8 B d) Depend on Compiler "<<endl;
cout<<"Enter your answer (a/b/c/d):"<<endl;
cin>>answer5;
if (answer5=='d') {
    cout<<"Correct"<<endl;
    score++;
}
else {
    cout<<"Wrong! The correct answer is d) Depend on Compiler "<<endl;
}
cout<<endl;
// Question 6
cout<<"6) Which symbol represent for Logical AND ? "<<endl;
cout<<"a) ||  b) ** c) && d) None of these "<<endl;
cout<<"Enter your answer (a/b/c/d):"<<endl;
cin>>answer6;
if (answer6=='c') {
    cout<<"Correct"<<endl;
    score++;
}
else {
    cout<<"Wrong! The correct answer is c) && "<<endl;
}
cout<<endl;
// Question 7
cout<<"7) C++ is a superset of which Language ? "<<endl;
cout<<"a) Python  b) C c) Java  d) CSS "<<endl;
cout<<"Enter your answer (a/b/c/d):"<<endl;
cin>>answer7;
if (answer7=='b') {
    cout<<"Correct"<<endl;
    score++;
}
else {
    cout<<"Wrong! The correct answer is b) C "<<endl;
}
cout<<endl;
// Question 8
cout<<"8) C++ is a ____ Language ? "<<endl;
cout<<"a) OOPs  b) POP c) Simple d) None of these  "<<endl;
cout<<"Enter your answer (a/b/c/d):"<<endl;
cin>>answer8;
if (answer8=='a') {
    cout<<"Correct"<<endl;
    score++;
}
else {
    cout<<"Wrong! The correct answer is a) OOPs "<<endl;
}
cout<<endl;
// Question 9
cout<<"9) In which year C++ was Developed ? "<<endl;
cout<<"a) 1874  b) 1967 c) 1979 d) 2001  "<<endl;
cout<<"Enter your answer (a/b/c/d):"<<endl;
cin>>answer9;
if (answer9=='c') {
    cout<<"Correct"<<endl;
    score++;
}
else {
    cout<<"Wrong! The correct answer is c) 1979 "<<endl;
}
cout<<endl;
 // Question 10
cout<<"10) What we use in C++ for input/output ? "<<endl;
cout<<"a) o/p  b) cin/cout c) input/output d) None of these "<<endl;
cout<<"Enter your answer (a/b/c/d):"<<endl;
cin>>answer10;
if (answer10=='b') {
    cout<<"Correct"<<endl;
    score++;
}
else {
    cout<<"Wrong! The correct answer is b) cin/cout "<<endl;
}
cout<<endl;

// Displaying Final score and Message 
// cout<<"Congratulation, " << name << "! You scored " <<score<< " out of 10. "<<endl;
if (score==10 || score==9) {
    cout<<"Congratulation, " << name << "! You scored " <<score<< " out of 10. "<<endl;
    cout<<"You are a Quiz Master! "<<endl;
}
else if (score>=4 && score<=8)  {
    cout<<"Congratulation, " << name << "! You scored " <<score<< " out of 10. "<<endl;
    cout<<"Well Done! "<<endl;
}
else if (score<4) {
    cout<<"Oops! " << name << "! You scored " <<score<< " out of 10. "<<endl;
    cout<<"You are Failed in a Quiz "<<endl;
}
// else {
//     cout<<"You are failed in a Quiz "<<endl;
// }

return 0;
}