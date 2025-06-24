
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

int option;
// Our menu for the address book

void Displaymenu(){

    cout<<"Welcome to the modfied address book"<<endl;
    cout<<"1.Add Car Sales detail<"<<endl;
    cout<<"2.Display cars sales details"<<endl;
    cout<<"3.Add Manufactoring details"<<endl;
    cout<<"4.Display Manufactoring details"<<endl;
    cout<<"5.Add Service details"<<endl;
    cout<<"6.Display Service details"<<endl;
    cout<<"7.End Program"<<endl;
    cin>>option;


}



class Employer{
    public:        // Inhertiance and our main class
    vector<int> Sales;
    vector<int> Manufactor;
    vector<int> service;
    int salesnumber;
    int saleshours;
    int manufactorhours;
    int servicehours;
    int ManufactorEmployees;
    int salesEmployees;
    int ServiceEmployees;
    int carsmade;
    int carssold;
    int carsserviced;

     void secret(){  // End program meesage through Inhertiance
        
        cout<<"You have ended the program, Thank you!"<<endl;

     }
    
    


};

// Classes  inherits from our main class

class Sales: public Employer{ 

    public:

    void Add(Employer &TF){

        ofstream Salesfile;

        Salesfile.open("Salesinfo");

        cout<<"Enter the number of cars sold-"<<endl;
        cin>>TF.carssold;

        cout<<"Enter the number of sales employees"<<endl;
        cin>>TF.salesEmployees;

        cout<<"Enter the number of sales hours"<<endl;
        cin>>TF.saleshours;

        Salesfile << TF.carssold<<endl;
        Salesfile << TF.salesEmployees <<endl;
        Salesfile << TF.saleshours <<endl;


    TF.Sales.push_back(TF.carssold);
    TF.Sales.push_back(TF.carssold);
    TF.Sales.push_back(TF.salesEmployees);
    TF.Sales.push_back(TF.saleshours);
 

        
    }

   




};

class Manufactoring: public Employer{

    public:

void addcar(Employer &TF){

    ofstream Manufactoringfile;

    cout<<"Enter the number of hours for the manufactoring employees"<<endl;
    cin>>manufactorhours;

    cout<<"Enter the number of cars you want manufactered"<<endl;
    cin>>TF.carsmade;

    cout<<"Enter the number of Manufactor employees"<<endl;
    cin>>TF.ManufactorEmployees;

    

    Manufactoringfile << TF.manufactorhours <<endl;
    Manufactoringfile << TF.carsmade <<endl;
    Manufactoringfile  << TF.ManufactorEmployees <<endl;

    TF.Manufactor.push_back(TF.manufactorhours);
    TF.Manufactor.push_back(TF.carsmade);
    TF.Manufactor.push_back(TF.ManufactorEmployees);
    TF.Manufactor.push_back(TF.carsmade);


    
}







};



class  Service : public Employer{

    public:

void AddService(Employer &TF){
cout<<"Enter the number of service hours"<<endl;
cin>>TF.servicehours;

cout<<"Enter the number of service employees"<<endl;
cin>>TF.ServiceEmployees;

cout<<"Enter the number of cars service"<<endl;
cin>>TF.carsserviced;


TF.service.push_back(TF.servicehours);
TF.service.push_back(TF.ServiceEmployees);
TF.service.push_back(TF.carsserviced);

}



    








};


// Classes to output data thats stored in the vectors


class display{
    public:
    void Cars(const Employer &TF){
        for(const int&carssoldsaleshourssalesnumberalesEmployees: TF.Sales){
            cout<<"The number of cars sold-"<< TF.carssold <<endl;
            cout<<"The number of sales hours" << TF.saleshours <<endl;
            cout<<"The number of sales employees"<<TF.salesEmployees<<endl;
            cout<<"Enter the number of sales-"<<TF.salesnumber <<endl;
        


        }



    }




};

class Made: public Employer{
    public:

    void Carshow(const Employer &TF){
        for(const int&carsmademanufactorhoursManufactorEmployees: TF.Manufactor){
            cout<<"The number of cars manufactered-" << TF.carsmade <<endl;
            cout<<"The number of hours for manufactor employees"<<TF.manufactorhours <<endl;
            cout<<"The number of manufactor employees"<< TF.ManufactorEmployees <<endl;

        
        }

        
    }



};

class displayservice{
public:
    void Display(Employer &TF){
        for(const int&servicehoursServiceEmployeecarsserviceds: TF.service){


            cout<<"Your service hours-"<< TF.saleshours <<endl;
            cout<<"Your service employees-"<< TF.ServiceEmployees <<endl;
            cout<<"The number of cars serviced-"<< TF.carsserviced <<endl;


        
        }
      

    }





};


// End program message through Inhertience

class Message: public Employer{



    
};







int main(){

    // Declare our class variable
Employer TF;

// The creation of our menu
    do{
    Displaymenu();
    if(option==1){
Sales().Add(TF);
    }else if(option==2){
display().Cars(TF);
    }else if(option==3){
Manufactoring().addcar(TF);
    }else if(option==4){
Made().Carshow(TF);
    }else if(option==5){
Service().AddService(TF);
    }else if(option==6){
displayservice().Display(TF);
    }else if(option==7){
        Message LF;
        LF.secret();
        cout<<"Your info is stored in its files."<<endl;
           }
    }while(option!=7);


}