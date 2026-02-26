#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

int main(){

int numStudent, numDays;
char ans;

do{
 system("cls");

cout << "====<STUDENT ATTDENDANCE SYSTEM>====";

//INPUT SECTION//
cout <<"\n\nEnter number of students: ";
cin >> numStudent;

cout << "Enter number of days: ";
cin >> numDays;

vector<vector<int>> attendance(numStudent, vector<int>(numDays));
vector<double> percentage(numStudent);
vector<int>total(numStudent);

 for(int i = 0; i < numStudent; i++){

  total[i] = 0;

  cout << "\nEnter Student [" << i + 1 << "] attendance:\n";

   for(int j = 0; j < numDays; j++){

     int input;

     //Checks the input
     while(true){
     cout << "Day " << j + 1 << ": ";
     cin >> input;

     if(input== 0 || input == 1){
     attendance[i][j]= input;
     total[i] += input;
     break;
     }

     else{
        cout<<"Invalid Input! Enter only 1 or 0.\n";
     }
    }
   }

   percentage[i] = (float(total[i])/ numDays)* 100;

 }

   //TABLE SECTION
    cout << "\n\n=======================================================================\n";
    cout << "Student";

    for(int j = 0; j < numDays; j++){
       cout << "\tDay " << j + 1;
    }

    cout << "\tTotal";
    cout << "\tPercentage";
    cout << "\tRemarks";
    cout << "\n=======================================================================\n";


    //OUTPUTS STUD NUM
    for(int i = 0; i < numStudent; i++){
     cout << i + 1;

     //OUTPUTS NUMDAYS
     for(int j = 0; j < numDays; j++){
      cout << "\t" << attendance[i][j];
     }

     cout << "\t" << total[i];

     //OUTPUTS PERCENTAGE
     cout << "\t" << percentage[i]<<"%";


     //OUTPUTS REMARKS
     if(percentage[i] < 50){

        cout <<"\t\t DRP";
     }

     else {
        cout <<"\t\t OK";
     }

     cout << endl;


    }

    cout<<"\n\nRepeat? (Y/N): ";
    cin>> ans;

    } while(ans == 'y' || ans == 'Y');

    return 0;
}

