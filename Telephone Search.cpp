/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: nijonknight
 *
 * Created on May 2, 2022, 9:03 PM
 */




#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;     

int option;
string name;
void menu(){   //Our Menu for The Telephone Search
    
    cout<<"Telephone Search Menu"<<endl;
    cout<<"1.Input data"<<endl;
    cout<<"2.Sort Data Ascending"<<endl;
    cout<<"3.Sort Data Descending"<<endl;
    cout<<"4.Print all data"<<endl;
    cout<<"5.Search for individual"<<endl;
    cout<<"6.End Program"<<endl;
    cin>>option;  
    
}

void inputdata(string names[5],string numbers[5]){ //Our function to input data
    cout<<"Add name Please"<<endl;
    cin>>name;
}

void sortAC(string names[5],string numbers[5]){
    for(int i=0;i<5;i++){
        cout<<names[i]<<","<<numbers[i]<<endl;  
    }
   
   }
void DC(string names[5]){
    
 string temp ="";

int index = -1;

int pass = -1;
for (pass = 0; pass < 5 ; pass++)

{

for (index = 0; index < 5 - pass; index++)

{

if ( names[index] > names[index + 1] )

{

temp = names[index];

names[index] = names[index + 1];

names[index + 1] = temp;

}

}

}

for(index = 0; index < 5; index++)

{

cout << names[index];

if (index < 5) cout << "-";

}

cout << endl;

}

void printdata(string names[5],string numbers[5]){
    for(int i=0;i<5;i++){
    cout<<names[i]<<","<<numbers[i]<<endl;
    }
}

void SearchArray(string names[5],string numbers[5]){
    for(int i=0;i<5;i++){
        cout<<"Search for name"<<endl;
        cin>>name;
        for(int i=0; i<5;i++){
            if(names[i]==name){
                cout<<endl<<name<<","<<numbers[i]<<endl;
            }
        }
                
    }
}

int main(int argc, char** argv){
     
    string names[5]= {"Tom","Toby","JJ","Deji","Joe"};
    string numbers[5]={"773-747-094","773-459-2424","845-564-0403","708-612-5907","312-399-8989"};
    
    do{
    menu();
    if(option==1){
        inputdata(names,numbers);
    }else if(option==2){
        sortAC(names,numbers);
    }else if(option==3){
        DC(names);
    }else if(option==4){
        printdata(names,numbers);
    }else if(option==5){
        SearchArray(names,numbers);
    }
    }while(option!=6);
    
    
    
    
  
    
    return 0;
  
}