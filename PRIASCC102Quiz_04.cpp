#include <iostream>
#include <vector>
using namespace std;

int main(){

int choice;
int row, col, time;

vector<vector<int>> layout(5, vector<int>(10,0));
char letters[]={'A','B','C','D','E'};

do{

cout << "\n\n====<COMPUTER SHOP RENTAL SYSTEM>====";
cout<< " \n1. View Computer Layout";
cout<< " \n2. Rent a Computer";
cout<< " \n3. Return Computer";
cout<< " \n4. Reset Computer";
cout<< " \n5. Exit";
cout << "\n========================================\n";
cout<<"\nEnter choice: ";
cin>>choice;


if(choice == 1){

cout<<endl;
cout << "\n\n---------------------------------<COMPUTER UNIT LAYOUT>---------------------------------\n\t";

for(int i=0;i<=10;i++){
    if(i==0){
        continue;
    }
    cout<<i<<"\t";
}
cout<<"\n----------------------------------------------------------------------------------------\n";

for(int i=0;i<5;i++){
    cout<<letters[i];

    for(int j=0;j<10;j++){
        cout<<"\t"<<layout[i][j];
    }
    cout<<endl;
}
cout<<"----------------------------------------------------------------------------------------\n";
}

//RENTING
if(choice == 2){

int occuCounter = 0;


for(int i=0;i<5;i++){
    for(int j=0;j<10;j++){
        if(layout[i][j] != 0)
            occuCounter++;
    }
}

if(occuCounter == 50){
    cout<<"\nShop is fully occupied!";
    continue;
}

cout<<"\nEnter row: ";
cin>>row;

cout<<"Enter column: ";
cin>>col;

cout<<"Enter time: ";
cin>>time;

//checks input
if(row>=0 && row<5 && col>=0 && col<10){
    if(layout[row][col] == 0){
        layout[row-1][col-1] = time;
        cout<<"\nComputer unit "<<letters[row-1]<<col<<" successfully rented for "<<time<<" hour(s)\n";
    }
    else{
        cout<<"\nComputer is already occupied!";
    }

}else{
    cout<<"\nInvalid row or column!";
}

}
int row2,col2;
//RETURN
if(choice==3){

int rentSale;
bool avail = true;


cout<<"\nEnter row: ";
cin>>row2;

cout<<"Enter column: ";
cin>>col2;


//checks input
if(row2>=0 && row2<5 && col2>=0 && col2<10){
    if(layout[row2-1][col2-1] == 0){
     cout<<"\nComputer unit is already available!";
     avail=false;
    }
    else{
        rentSale = (layout[row2-1][col2-1] * 20);
     cout<<"\nComputer unit "<<letters[row-1]<<col<<" successfully returned\n";
     cout<<"\nRental Sale: "<<rentSale;
    }
}

}

//RESET
if(choice==4){

for(int i=0;i<5;i++){
    for(int j=0;j<10;j++){
        layout[i][j] = 0;
    }
}

cout<<"\nSystem has been reset!";
}


}while(choice != 5);

return 0;
}

