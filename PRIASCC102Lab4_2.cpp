#include <iostream>
#include <cctype>
#include <stdlib.h>
using namespace std;

int main() {

char ans;

do{
system("cls");

double sales[5][4] = {};

int salesperson, product;
double amount;
char choice;

cout << "==== MONTHLY SALES SUMMARY SYSTEM ====\n";

do {

//INPUT SECTION
 cout << "\nEnter Salesperson number (1-4): ";
 cin >> salesperson;
 cout << "Enter Product number (1-5): ";
 cin>> product;

 cout << "Enter the amount sold: ";
 cin >> amount;

 //check input
  if(salesperson >= 1 && salesperson <= 4 &&
   product >= 1 && product <= 5){

   sales[product-1][salesperson-1] += amount;
   }

   else{
    cout << "Invalid input! Try again\n";
   }

   cout << "\nEnter another sale? (Y/N): ";
   cin >> choice;

   } while(choice == 'y' || choice == 'Y');

// TABLE SECTION
cout << "\n\n============= SALES TABLE =============\n";
cout << "Product\tS1\tS2\tS3\tS4\tTotal\n";
cout << "----------------------------------------\n";

double finalTotal = 0;

//CALC ROWS

//rownumber
for(int i =0; i<5; i++){

double rowTotal = 0;

cout << i + 1;

//rowcounter
 for(int j = 0; j < 4; j++){
 cout << "\t" << sales[i][j];

 rowTotal += sales[i][j];
 }

 cout << "\t" << rowTotal << endl;
 finalTotal += rowTotal;
        }

cout << "----------------------------------------\n";
cout << "Total";


//COL CALC

//colnumber
for(int j = 0; j < 4; j++){
double columnTotal = 0;

//colcounter
  for(int k = 0; k < 5; k++){
  columnTotal += sales[k][j];
  }
   cout << "\t" << columnTotal;
}

  cout << "\t" << finalTotal << endl;


 cout << "\nRepeat? (Y/N): ";
        cin >> ans;

} while(ans == 'y'|| ans == 'Y');

    return 0;
}
