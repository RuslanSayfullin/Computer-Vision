#include<iostream>
using namespace std;
// function to find grade using switch-case
char findGrade(int score) 
{
   // check score is valid or not
   // score is valid if it belongs to 0-100
   if(score<0 || score>100) {
     return '\0';
   }

   // find grade for given score
   switch( score / 10 )
   {
     case 10:
     case 9:
       return 'A';
     case 8:
       return 'B';
     case 7:
       return 'C';
     case 6:
       return 'D';
     case 5:
       return 'E';
     default:
       return 'F';
   }
}
// main function
int main()
{
   // variables
   int score;
   char grade;

   // take score
   cout << "Enter score(0-100): ";
   cin >> score;

   // find grade
   grade = findGrade(score);
   
   // display grade
   if(grade=='\0')
     cout << "Invalid Score";
   else
     cout << "Grade = " << grade << endl; 

   return 0;
}
