/*
\
 * File:   main.cpp
 * Author: nijonknight
 *
 * Created on April 16, 2022, 6:42 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    string objectname="greenlight, yellowlight, redlight";
    
    bool greenlight=true;
    bool yellowlight=false;
    bool redlight=false;
    if(greenlight){
        cout<<"The light is green"<<endl;
        cout<<"detecting no oncoming traffic"<<endl;
        cout<<"turn signal set to left"<<endl;
    }else
        if(yellowlight){
            cout<<"the light is yellow"<<endl;
            cout<<"Detecting minor oncoming traffic"<<endl;
            cout<<"turn signal set to left"<<endl;
        }  else 
                if(redlight){
                    cout<<"the light is red"<<endl;
                    cout<<"Detecting on coming traffic"<<endl;
                    cout<<"vehicle has decided to wait"<<endl;
        
    
         
    }
          
    return 0;
}

