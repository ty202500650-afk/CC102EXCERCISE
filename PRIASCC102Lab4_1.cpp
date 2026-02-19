#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

int main(){

int numStudent, numQuiz;
char ans;

do{
 system("cls");

cout << "====<AVERAGE CALCULATOR>====";

//INPUT SECTION//
cout <<"\n\nEnter number of students: ";
cin >> numStudent;

cout << "Enter number of quizzes: ";
cin >> numQuiz;

vector<vector<double>> scores(numStudent, vector<double>(numQuiz));
vector<double> average(numStudent);

 for(int i = 0; i < numStudent; i++){

 double totalScore = 0;

  cout << "\nEnter scores of Student [" << i + 1 << "]:\n";

   for(int j = 0; j < numQuiz; j++){
     cout << " Q" << j + 1 << ": ";
     cin >> scores[i][j];

    totalScore += scores[i][j];
   }

    average[i] = totalScore / numQuiz;

 }
 
 // TABEL SECTION//

    cout << "\n\n=============================================\n";
    cout << "Student";

    for(int j = 0; j < numQuiz; j++){
       cout << "\tQ" << j + 1;
    }

    cout << "\tAverage";
    cout << "\n=============================================\n";

    for(int i = 0; i < numStudent; i++){
     cout << i + 1;

     for(int j = 0; j < numQuiz; j++){
      cout << "\t" << scores[i][j];
     }

            cout << "\t" << average[i];
            cout << endl;
    }

    cout << "\n\nCalculate Again?(Y/N): ";
    cin >> ans;

    } while(ans == 'y' || ans == 'Y');

    return 0;
}

