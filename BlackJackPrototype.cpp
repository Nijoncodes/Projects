 
#include <iostream>
#include <cstdlib>
using namespace std;

void Dealer(string cards[], int sizeofcards){ // Pass Array to function // It's about utilziing Programming concepts 

cout << "Displaying List of Cards: " <<endl;
cout << "Cards: " << sizeofcards;
cout << " A JACK, QUEEN, KING, ARE WORTH 10 POINTS EACH" << " || ACE CAN EITHER BE AN 11 0R ONE VALUE"<<endl;

for(int i = 0; i < sizeofcards; i++){ // Will Display List of cards you can  recieve 

cout << " " <<  cards[i] << ": ";


} 


}

void PickCards(string cards[], int sizeofcards, int randNum, int values[], int sizeofvalues, int randNum2, int cardpicker, int cardpicker2, int cardpicker3, int cardpicker4, int randNum3, int randNum4, int total, int total2, string doubledown, int decide){ // The Dealer will get a card and the Player as well // Depending on the number of the random generator a card will be given 

 // Since we have 13 cards we have 13 possibiltys // When you place your bet you will be given one card // Set random number to equal a postion of the index in the array 
cout << "Dealers Card will be shortly hidden " <<endl;


switch(randNum){ // Card one is an ACE
    
    case 1:
    cout << " You have been given an " <<  cards[0] << " " << randNum << " || "; // You and Dealer will be given two cards
    cout << " Dealer has been given an " << randNum2 << " || ";
    cout << " Dealers Value: " << randNum2 << " || ";
    if(randNum2 == 11 && randNum2 == 1){ // Checks for an ACE
    cout << "Dealer has been given an ACE " << cards[0];

    }

    if(randNum == 10){ // Nested If Statements 

    if(decide > 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
    cout << " You have been given a " << cards[11] <<endl;
    }else if(decide < 5){
    cout << " You have been given an " << cards[12];
    }else if(decide > 10 ){
    cout << " You have been given an " << cards[13];
    }


    }else if(randNum2 == 10){
        if(decide >= 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
    cout << " Dealer has been given a " << cards[11] <<endl;
        }else if(decide < 5){
    cout << " Dealer has been given an " << cards[12];
        }else if(decide >= 10){
    cout << " Dealer has been given an " << cards[13];
    }
    }

    cout << " || Your Second card is an  " << randNum3 << " || ";
    cout << " Dealer second card is faced down || Will be revealed after your decesion  " << endl;
    cout << " Take another card or stand with your current hand: double down will double your bet and take just one extra card: ";

    if(randNum3 == 10){
    if(decide > 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
    cout << " You have been given a " << cards[11] <<endl;
    }else if(decide < 5){
    cout << " You have been given an " << cards[12];
    }else if(decide > 10 ){
    cout << " You have been given an " << cards[13];
    }

    }else if(randNum3 == 11 && randNum3 == 1){
        cout << "You have been given an ACE " << cards[0];
    }

    cout << "Your Total is " << total << endl;

    if(total == 21){ // This will pop if you get a an 10 and an 11 
        cout << "You have Won BlackJack!!! || Congrats! " <<endl;
        break;

    }else if(total > 21 ) {
        cout  << "You went over 21: || This was a Bust "<<endl;
        break; 
    }

    break;

    case 2: // Card 2

    cout << " You have been given an " << randNum << " || ";
    cout << " Dealer has been given an  " << randNum2 << " || ";
    cout << "Dealers Value:  " << randNum2 << " || "; 
    if(randNum2 == 11 && randNum2 == 1){
     cout << "Dealer has been given an ACE" << cards[0];
    }

    if(randNum == 10){ // Nested If Statements 

    if(decide > 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
    cout << " You have been given a " << cards[11] <<endl;
    }else if(decide < 5){
    cout << " You have been given an " << cards[12];
    }else if(decide > 10 ){
    cout << " You have been given an " << cards[13];
    }


    }else if(randNum2 == 10){
        if(decide >= 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
    cout << " Dealer has been given a " << cards[11] <<endl;
        }else if(decide < 5){
    cout << " Dealer has been given an " << cards[12];
        }else if(decide >= 10){
    cout << " Dealer has been given an " << cards[13];
    }
    }

    cout << " || Your Second card is an  " << randNum3 << " || ";
    cout << " Dealer second card is faced down || Will be revealed after your decesion  " << endl;
    cout << " Take another card or stand with your current hand: double down will double your bet and take just one extra card: ";

    if(randNum3 == 10){
    if(decide >= 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
     cout << " You have been given a " << cards[11] <<endl;
    }else if(decide < 5){
     cout << " You have been given an " << cards[12];
    }else if(decide >= 10 ){
     cout << " You have been given an " << cards[13];
    }

    }else if(randNum3 == 11 && randNum3 == 1){
        cout << "You have been given an ACE " << cards[0];
    }

    cout << "Your total cards are: " << total << endl;

    if(total == 21){ // This will pop if you get a an 10 and an 11 
     cout << "You have Won BlackJack!!! || Congrats! " <<endl;
     break;

    }else if(total > 21 ) {
        cout  << "You went over 21: || This was a Bust "<<endl;
        break; 
    }
    
    break;

    case 3: // Card 3

    cout << " You have been given an " << randNum << " || ";
    cout << " Dealer has been given an  " << randNum2 << " || ";
    cout << "Dealers Value:  " << randNum2 << " || "; 
    if(randNum2 == 11 && randNum2 == 1){
        cout << " Dealer have been given an ACE " << cards[0]; // Checks for ACE
    
    }

    if(randNum == 10){ // Nested If Statements 

    if(decide >= 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
    cout << " You have been given a " << cards[11] <<endl;
    }else if(decide < 5){
    cout << " You have been given an " << cards[12];
    }else if(decide >= 10 ){
    cout << " You have been given an " << cards[13];
    }


    }else if(randNum2 == 10){
        if(decide >= 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
    cout << " Dealer has been given a " << cards[11] <<endl;
        }else if(decide < 5){
    cout << " Dealer has given an " << cards[12];
        }else if(decide >= 10){
    cout << " Dealer has been given an " << cards[13];
    }
    }

    cout << " || Your Second card is an  " << randNum3 << " || ";
    cout << " Dealer second card is faced down || Will be revealed after your decesion " << endl;
    cout << " Take another card or stand with your current hand: double down will double your bet and take just one extra card: ";

    if(randNum3 == 10){
    if(decide >= 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
     cout << " You have been given a " << cards[11] <<endl;
    }else if(decide < 5){
     cout << " You have been given an " << cards[12];
    }else if(decide >= 10 ){
     cout << " You have been given an " << cards[13];
    }

    }else if(randNum3 == 11 && randNum3 == 1){
        cout << " You have been given an ACE ";
    }

    cout << "Your total cards are: " << total << endl;

    if(total == 21){ // This will pop if you get a an 10 and an 11 
     cout << "You have Won BlackJack!!! || Congrats! " <<endl;
     break;

    }else if(total > 21 ) {
        cout  << "You went over 21: || This was a Bust "<<endl;
        break; 
    }
    
    break;

    case 4: // Card 4

    cout << " You have been given an " << randNum;
    cout << " Dealer has been given an  " << randNum2 << " || ";
    cout << " Dealers Value:  " << randNum2 << " || "; 
    if(randNum2 == 11 && randNum2 == 1){
        cout << " Dealer has been given an ACE " << cards[0]; // Checks for ACE for Dealer
    }

    if(randNum == 10){ // Nested If Statements 

    if(decide >= 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
    cout << " You have been given a " << cards[11] <<endl;
    }else if(decide < 5){
    cout << " You have been given an " << cards[12];
    }else if(decide >= 10 ){
    cout << " You have been given an " << cards[13];
    }

    }else if(randNum2 == 10){
        if(decide >= 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
    cout << " Dealer has been given a " << cards[11] <<endl;
        }else if(decide < 5){
    cout << " Dealer has been given an " << cards[12];
        }else if(decide >= 10){
    cout << " Dealer has been given an " << cards[13];
    }
    }

    cout << " || Your Second card is an " << randNum3 << " || ";
    cout << " Dealer second card is faced down || Will be revealed after your decesion  " << endl;
    cout << " Take another card or stand with your current hand: double down will double your bet and take just one extra card: ";

    if(randNum3 == 10){
    if(decide >= 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
     cout << " You have been given a " << cards[11] <<endl;
    }else if(decide < 5){
     cout << " You have been given an " << cards[12];
    }else if(decide >= 10 ){
     cout << " You have been given an " << cards[13];
    }

    }else if(randNum3 == 11 && randNum3 == 1){
        cout << "You have been given an ACE " << cards[0];
    }

    cout << "Your total cards are: " << total << endl;

    if(total == 21){ // This will pop if you get a an 10 and an 11 
     cout << "You have Won BlackJack!!! || Congrats! " <<endl;
     break;

    }else if(total > 21 ) {
        cout  << "You went over 21: || This was a Bust "<<endl;
        break; 
    }

    break;

    case 5: // Card 5
    cout << " You have been given an " << randNum;
    cout << " Dealer has been given an " << randNum2 << " || ";
    cout << "Dealers Value:  " << randNum2 << " || "; 
    if(randNum2 == 11 && randNum2 == 1){
        cout << " Dealer has been given an " << cards[0]; // Checks for ACE
    
    }

    if(randNum == 10){ // Nested If Statements 

    if(decide >= 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
    cout << " You have been given a " << cards[11] <<endl;
    }else if(decide < 5){
    cout << " You have been given an " << cards[12];
    }else if(decide >= 10 ){
    cout << " You have been given an " << cards[13];
    }


    }else if(randNum2 == 10){
        if(decide >= 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
    cout << " Dealer has been given a " << cards[11] <<endl;
        }else if(decide < 5){
    cout << " Dealer has given an " << cards[12];
        }else if(decide >= 10){
    cout << " Dealer has been given an " << cards[13];
    }
    }

    cout << " || Your Second card is an " << randNum3 << " || ";
    cout << " Dealer second card is faced down || Will be revealed after your decesion " << endl;
    cout << " Take another card or stand with your current hand: double down will double your bet and take just one extra card: ";

    if(randNum3 == 10){
    if(decide >= 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
     cout << " You have been given a " << cards[11] <<endl;
    }else if(decide < 5){
     cout << " You have been given an " << cards[12];
    }else if(decide >= 10 ){
     cout << " You have been given an " << cards[13];
    }

    }else if(randNum3 == 11 && randNum3 == 1){
        cout << " You have been given an ACE " << cards[0];
    }

    cout << "|| Your total cards are: " << total << endl;

    if(total == 21){ // This will pop if you get a an 10 and an 11 
     cout << "You have Won BlackJack!!! || Congrats! " <<endl;
     break;

    }else if(total > 21 ) {
        cout  << "You went over 21: || This was a Bust "<<endl;
        break; 
    }
   
    break;

    case 6: // Card 6
    cout << " You have been given an " << randNum;
    cout << " Dealer has been given an  " << randNum2 << " || ";
    cout << " Dealers Value:  " << randNum2 << " || "; 
    if(randNum2 == 11 && randNum2 == 1){
    cout << " Dealer has been given an ACE " << cards[0]; // Checks for ACE
    
    }

    if(randNum2 == 10){

     if(decide >= 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
    cout << " Dealer has been given a " << cards[11] <<endl;
        }else if(decide < 5){
    cout << " Dealer has been given an " << cards[12];
        }else if(decide >= 10){
    cout << " Dealer has been given an " << cards[13];
    }

    }


    cout << " You have been given an " << randNum3 << " || ";
    cout << " Dealer second card is faced down || Will be revealed after your decesion " << endl;
    cout << " Take another card or stand with your current hand: double down will double your bet and take just one extra card: ";

    if(randNum3 == 10){
    if(decide >= 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
     cout << " You have been given a " << cards[11] <<endl;
    }else if(decide < 5){
     cout << " You have been given an " << cards[12];
    }else if(decide >= 10 ){
     cout << " You have been given an " << cards[13];
    }

    }

    cout << "Your total cards are: " << total << endl;

    if(total == 21){ // This will pop if you get a an 10 and an 11 
     cout << "You have Won BlackJack!!! || Congrats! " <<endl;
     break;

    }else if(total > 21 ) {
        cout  << "You went over 21: || This was a Bust "<<endl;
        break; 
    }

    break;

    case 7: // Card 7
    cout << " You have been given an " << randNum << " || ";
    cout << " Dealer has been given an  " << randNum2 << " || ";
    cout << " Dealers Value:  " << randNum2 << " || "; 
    if(randNum2 == 11 && randNum2 == 1){
    cout << " Dealer has been given an ACE " << cards[0]; // Checks for ACE
    
    }

    if(randNum2 == 10){

     if(decide >= 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
    cout << " Dealer has been given a " << cards[11] <<endl;
        }else if(decide < 5){
    cout << " Dealer has given an " << cards[12];
        }else if(decide >= 10){
    cout << " Dealer has been given an " << cards[13];
    }

    }

    cout << " || Your Second card is an  " << randNum3 << " || ";
    cout << " Dealer second card is faced down || Will be revealed after your decesion  " << endl;
    cout << " Take another card or stand with your current hand: double down will double your bet and take just one extra card: ";

    if(randNum3 == 10){
    if(decide >= 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
     cout << " You have been given a " << cards[11] <<endl;
    }else if(decide < 5){
     cout << " You have been given an " << cards[12];
    }else if(decide >= 10 ){
     cout << " You have been given an " << cards[13];
    }

    }else if(randNum3 == 11 && randNum3 == 1){
        cout << " You have been given an ACE " << cards[0];
    }

    cout << "Your total cards are: " << total << endl;

    if(total == 21){ // This will pop if you get a an 10 and an 11 
     cout << "You have Won BlackJack!!! || Congrats! " <<endl;
     break;

    }else if(total > 21 ) {
        cout  << "You went over 21: || This was a Bust "<<endl;
        break; 
    }

    break;

    case 8: // Card 8
    cout << " You have been given an " << randNum;
    cout << " Dealer has been given an  " << randNum2 << " || "; 
    cout << " Dealers Value:  " << randNum2 << " || "; 
    if(randNum2 == 11 && randNum2 == 1){
    cout << " Dealer have been given an ACE " << cards[0]; // Checks for ACE
    
    }

    if(randNum2 == 10){

     if(decide > 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
    cout << " Dealer has been given a " << cards[11] <<endl;
        }else if(decide < 5){
    cout << " Dealer has given an " << cards[12];
        }else if(decide > 10){
    cout << " Dealer has been given an " << cards[13];
    }

    }


    cout << " || Your Second card is an  " << randNum3 << " || ";
    cout << " Dealer second card is faced down || Will be revealed after your decesion  " << endl;
    cout << " Take another card or stand with your current hand: double down will double your bet and take just one extra card: ";

    if(randNum3 == 10){
    if(decide >= 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
     cout << " You have been given a " << cards[11] <<endl;
    }else if(decide < 5){
     cout << " You have been given an " << cards[12];
    }else if(decide >= 10 ){
     cout << " You have been given an " << cards[13];
    }

    }

    cout << "Your total cards are: " << total << endl;

    if(total == 21){ // This will pop if you get a an 10 and an 11 
     cout << "You have Won BlackJack!!! || Congrats! " <<endl;
     break;

    }else if(total > 21 ) {
        cout  << "You went over 21: || This was a Bust "<<endl;
        break; 
    }

    break;

    case 9: // Card 9 
    cout << " You have been given an " << randNum << " || ";
    cout << " Dealer has been given an  " << randNum2 << " || ";
    cout << " Dealers Value:  " << randNum2 << " || "; 
    if(randNum2 == 11 && randNum2 == 1){
    cout << " Dealer have been given an " << cards[0]; // Checks for ACE
    
    }

    if(randNum2 == 10){

     if(decide >= 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
    cout << " Dealer has been given a " << cards[11] <<endl;
        }else if(decide < 5){
    cout << " Dealer has been given an " << cards[12];
        }else if(decide >= 10){
    cout << " Dealer has been given an " << cards[13];
    }

    }


    cout << " You have been given an " << randNum3 << " || ";
    cout << " Dealer second card is faced down || Will be revealed after your decesion " << endl;
    cout << " Take another card or Stand with your current hand: Double down will double your bet and take just one extra card: ";

    if(randNum3 == 10){
    if(decide >= 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
     cout << " You have been given a " << cards[11] <<endl;
    }else if(decide < 5){
     cout << " You have been given an " << cards[12];
    }else if(decide >= 10 ){
     cout << " You have been given an " << cards[13];
    }

    }else if(randNum3 == 11 && randNum3 == 1){
        cout << " You have been given an ACE " << cards[0];
    }

    cout << "Your total cards are: " << total << endl;

    if(total == 21){ // This will pop if you get a an 10 and an 11 
     cout << "You have Won BlackJack!!! || Congrats! " <<endl;
     break;

    }else if(total > 21 ) {
        cout  << "You went over 21: || This was a Bust: you lose "<<endl;
        break; 
    }

    break;

    case 10: // A QUEEN // JACK // KING
    cout << " You have been given an " << randNum << " || ";
    cout << " Dealer has been given an  " << randNum2 << " || ";
    cout << " Dealers Value:  " << randNum2 << " || "; 
    if(randNum2 == 11 && randNum2 == 1){
    cout << " Dealer have been given an ACE " << cards[0]; // Checks for ACE
    
    }

    if(randNum == 10){

     if(decide >= 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
    cout << " You have been given a " << cards[11] <<endl;
        }else if(decide < 5){
    cout << " You been given an " << cards[12];
        }else if(decide >= 10){
    cout << " You have been given an " << cards[13];
    }

    }else if(randNum2 == 10){
        if(decide >= 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
    cout << " Dealer has been given a " << cards[11] <<endl;
        }else if(decide < 5){
    cout << " Dealer has been given an " << cards[12];
        }else if(decide >= 10){
    cout << " Dealer has been given an " << cards[13];
    }

    }

    cout << " || Your Second card is an " << randNum3 << " || ";
    cout << " Dealer second card is faced down || Will be revealed after your decesion " << endl;
    cout << " Take another card or Stand with your current hand: Double down will double your bet and take just one extra card: ";

    if(randNum3 == 10){
    if(decide >= 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
     cout << " You have been given a " << cards[11] <<endl;
    }else if(decide < 5){
     cout << " You have been given an " << cards[12];
    }else if(decide >= 10 ){
     cout << " You have been given an " << cards[13];
    }

    }else if(randNum3 == 11 && randNum3 == 1){
     cout << " You have been given an ACE " << cards[0];
    }

    cout << "Your total cards are: " << total << endl;

    if(total == 21){ // This will pop if you get a an 10 and an 11 
     cout << "You have Won BlackJack!!! || Congrats! " <<endl;
     break;

    }else if(total > 21 ) {
        cout  << "You went over 21: || This was a Bust "<<endl;
        break; 
    }

    break;

    case 11: // An ACE
    
    cout << "You have been given an " << cards[0] << " " << randNum2;
    cout << " Dealer has been given an " << randNum2 << " || ";
    cout << " Dealers Value:  " << randNum2 << " || "; 
    if(randNum2 == 11 && randNum2 == 1){
    cout << " Dealer have been given an ACE " << cards[0]; // Checks for ACE
    
    }

     if(randNum2 == 10){

     if(decide >= 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
    cout << " Dealer has been given a " << cards[11] <<endl;
        }else if(decide < 5){
    cout << " Dealer has been given an " << cards[12];
        }else if(decide >= 10){
    cout << " Dealer has been given an " << cards[13];
    }

    }


    cout << " || Your Second card is an  " << randNum3 << " || ";
    cout << " Dealer second card is faced down || Will be revealed after your decesion  " << endl;
    cout << " Take another card or Stand with your current hand: Double down will double your bet and take just one extra card: ";

    if(randNum3 == 10){
    if(decide >= 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
     cout << " You have been given a " << cards[11] <<endl;
    }else if(decide < 5){
     cout << " You have been given an " << cards[12];
    }else if(decide >= 10 ){
     cout << " You have been given an " << cards[13];
    }

    }else if(randNum3 == 11 && randNum3 == 1){
        cout << " You have been given an ACE " << cards[0];
    }

    cout << "Your total cards are: " << total << endl;

    if(total == 21){ // This will pop if you get a an 10 and an 11 
     cout << "You have Won BlackJack!!! || Congrats! " <<endl;
     break;

    }else if(total > 21 ) {
        cout  << "You went over 21: || This was a Bust "<<endl;
        break; 
    }

    break;
   

    default:

    cout << "This has nothing to do with BLACKJACK!!!!" <<endl;

}






}

void moreCards(string cards[], int sizeofcards,int randNum, int randNum2, int total, int total2, string choice, int randNum4, int decide, int randNum3, int bet, int doublebet, int randNum5, int total3, string choice2, int randNum6, int total4){ // If the game continues then more cards will have to be drawn

if(total == 21){ // Only pops if you get an 11 and 10 
 cout <<" Game was already decided || NO more cards needed"<<endl; // If games ends this function will end 
}else if(total2 == 21 ){
 cout <<" Game was already decided || NO more cards needed"<<endl;
}else if(total == 21 && total2 == 21){
 cout << "Game over || This was a draw " <<endl;
 }else if(total > 21){
 cout << "This was a bust: You lose "<<endl;
 }else if(total2 > 21){
 cout << "Dealer has went over 21 || You win " <<endl;
 cout << "Dealer second card was " << randNum4;
 }


 if(total != 21 && total2 != 21){

 cout << " Now It's time to advance to more cards || Let's Advance!! " << endl;

 }else if(total > 21 && total2 > 21 ){
 cout << "Game will not continue || It was a bust " <<endl;
 }


 if(choice == "Double"){

    cout << " You Doubled down! " <<endl;
    cout << " Current Score! ";
    cout << " PLAYER " <<  total;
    cout << " || Dealer " << total2;
    cout << " Dealer second card has been revealed to be " << randNum4 << " || ";

    cout << " Your Bet has been doubled " << bet <<endl;
    cout << " Your Next card is " << randNum5 << " || ";

   if(randNum4 == 10){
    if(decide > 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
    cout << " Which is also a  " << cards[11];
        }else if(decide < 5){
    cout << " Which is also an " << cards[12];
        }else if(decide > 10){
    cout << " Which is also an " << cards[13];
    }
  }else if(randNum4 == 11 && randNum4 == 1){
    cout << "Which is also an " << cards[0];
 }

 if(randNum5 == 10){
     if(decide > 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
    cout << " Which is also a  " << cards[11];
        }else if(decide < 5){
    cout << " Which is also an " << cards[12];
        }else if(decide > 10){
    cout << " Which is also an " << cards[13];
    }

    }else if(randNum5 == 11 && randNum5 == 1){
        cout << " You have recieved " << cards[0];
    }

    cout << " You have a total of " << total3 <<endl;

    if(total3 > 21){

        cout <<  "You have gone bust || You lose ";
        cout << " You have lost all of your chips ";
    }

}else if(choice == "Stand"){ // You will not be handed any more cards
    cout << " You decided to stand! "<<endl;
    cout << " Current Score! ";
    cout << " PLAYER " <<  total;   
    cout << " || Dealer " << total2;
    cout << " Dealer second card has been revealed to be " << randNum4 <<endl;

if(randNum4 == 10){
if(decide > 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
    cout << " Which is also a  " << cards[11];
        }else if(decide < 5){
    cout << " Which is also an " << cards[12];
        }else if(decide > 10){
    cout << " Which is also an " << cards[13];
    }
}else if(randNum4 == 11 && randNum4 == 1){
    cout << "Which is also an " << cards[0];
}


}else if(choice == "Hit"){ // Hit will allow you to take two more cards 
   
  cout << " You decided to Hit! "<<endl;
  cout << " Current Score! ";
  cout << " PLAYER " <<  total;
  cout << " || Dealer " << total2;
  cout << " Dealer second card has been revealed after you take your hits " <<endl;

 if(randNum4 == 10){
 if(decide > 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
  cout << " Which is also a  " << cards[11];
        }else if(decide < 5){
  cout << " Which is also an " << cards[12];
        }else if(decide > 10){
  cout << " Which is also an " << cards[13];
    }
}else if(randNum4 == 11 && randNum4 == 1){
cout << "Which is also an " << cards[0];
}

cout << " Your third card is " << randNum5;
cout << " Would you like to hit or stand with your current cards ";
cout << " You have a total of: " << total3 << " ";
if(total3 > 21){

 cout << " This was bust: You have went over 21 " <<endl;

}else if(total3 == 21){
    cout << " You have won BLACKJACK || CONGRATS "<<endl;
}



}

}




void Hit(int total4, int randNum6, int randNum7, int total2, int total5, int randNum8, int total6, int total3){ // This function will useful if player decide to hit for the third time

    cout << " You have decided to hit again: Your fourth card will be " << randNum6;
    cout << " You have a total of " << total4 << "|| Dealers total " << total2;

    if(total4 > 21){
    cout << " You have went over 21 || You lose "<<endl;
        
    }else if(total4 < 21){
    cout << " Game shall continue ";
    if(total2 >= 17){
        cout << " Dealer will now stand with two cards "; 
        if(total2 > total4){
            cout << "Dealer has won BLACKJACK || You lose";
        }else if(total4 > total2){
            cout << "You have won BLACKJACK || You win"<<endl;
        }
    }else if(total2 <= 16){
        cout << " Dealer will take a third card " << randNum7;
        if(total5 >=17){
          cout << " Dealer will now stand with three cards ";
          if(total5 > total4){
            cout << "Dealer has won BLACKJACK || You lose";
          }else if(total4 > total5){
            cout << "You have won BLACKJACK || You win";
          }
        }else if(total5 <= 16){
          cout << " Dealer will take a fourth card " << randNum8; 
          if(total6 > total4){ // Dealer with four cards
            cout << "Dealer has won BLACKJACK || You lose ";
          }else if(total4 > total5){
            cout << "You have won BLACKJACK || You win";
          }

        }
    }

    }
   

    }

void Stand(int total4, int randNum6, int randNum7, int total2, int total5, int randNum8, int total6, int total3, int total){ 

    if(total2 < 21){
        cout << " Player has decided to stand with two cards " <<endl;
    }

    if(total2 >= 17){
        cout << " Dealer will now stand two cards ";
        if(total2 > total){
        cout << " Dealer has won BLACKJACK || You lose ";
        }else if(total > total2){
        cout << "You have won BLACKJACK || You win";
        }
    }else if(total2 <=16){
        cout << " Dealer will take a their third card "  << randNum7;
        if(total5 > 21 && total5 == 21){
            if(total5 == 21){
                cout << " Dealer has won BLACKJACK || You lose "<<endl;
            }else if(total5 > 21){
                cout << " Dealer has went over bust || You win "<<endl;
            }else if(total2 > total5){
                cout << " You have won BLACKJACK || You win "<<endl;
            }
        }
    }
    if(total5 >= 17){
        if(total5 > 21){
        cout <<  " GAME OVER || Dealer went over limit || You win";
        }else if (total5 >= 17){
        cout <<  " Dealer will now stand with three cards " << total5 ; // 
        if(total2 > total5){
            cout << " You have won BLACKJACK || You win " <<endl;
        }else if(total5 > total2){
            cout << " Dealer has won BLACKJACK || You lose"<<endl;
        }
        }

    }else if(total5 <= 16){
        cout << " Dealer will take a fourth card which is a " << randNum8 << " Total: " << total6;
        if(total6 > 21){
            cout << "Dealer has went over bust || You win " <<endl;
        }
        if(total6 < 21){
          cout << " || Dealer will now stand " <<endl;
        if(total2 > total6){
            cout << " You have won BLACKJACK || You win " <<endl;

        }else if(total6 > total2){
            cout << " Dealer has won BLACKJACK || You lose "<<endl;
        }
    }
    }



    

}

void DoubleDown(int total4, int randNum6, int randNum7, int total2, int total5, int randNum8, int total6, int total3, int total){ // Will take one additonal card with a bet doubled 

      if(total3 < 21){ // Game will continue 
      cout << " Dealer will either stand or take more cards ";

     
     }else if(total3 == 21){
      cout << " You have won BLACKJACK || You win ";
}

}

void Split(int randNum, int randNum3){ // If cards have the same value 


cout << " You have split both your cards " <<endl;




}




void Scoreboard(string cards[], int sizeofcards, int randNum, int randNum2){

    cout << "|| BlackJack ScoreBoard  ||" <<endl; // Will Display after game is done 
    cout << "////////////////////////////"<<endl;
    cout << "PLAYER       ||    DEALER"<<endl;
    cout << "||//////////SCORES//////////||"<<endl;
    cout << "||" << randNum << "||  " << "          || " <<  randNum2 << "||" <<endl;
    cout <<"//////////OVERALL WINNER/////||"<<endl;



}



int main(){

     // Introduction to Blackjack // This is a game on where the first player to reach the number 21 or closer wins the game // We should implment a scoreboard as well 
    // This BackJack Program is modeled after the video game Gta 5's Black Jack Mini Game
    
    string cards[] = {"ACE", "1", "2", "3","4", "5", "6", "7", "8", "9", "10", "JACK", "QUEEN", "KING"}; // Array Of Cards // Set Array size to 14 to contain the elements 
    int values[] = {1,2,3,4,5,6,7,8,9,10,11}; // Values for cards // ACE is an is just in the array to say you got an ACE

    srand(time(0)); // Random Number Generator 

    int input;
    int bet;
    string choice;
    string choice2;

    int randNum = rand() % 11;
    int randNum2 = rand() % 11;
    int randNum3 = rand() % 11; 
    int randNum4 = rand()  % 11; 

    int cardpicker = rand() % 11;
    int cardPicker2 = rand() % 11;
    int cardpicker3 = rand() % 11;
    int cardpicker4 = rand() % 11;
    int cardpicker5 = rand() % 11;
    int cardpicker6 = rand() % 11;
    int cardpicker7 = rand() % 11;
    int cardpicker8 = rand() % 11;


    int randNum5 = rand() % 11; //  Creation of more cards 
    int randNum6 = rand() % 11;
    int randNum7 = rand() % 11;
    int randNum8 = rand() % 11;


    int decide = rand() % 11 + 1; 

    int doublebet = 2; // If you double your bet

    string doubledown;




  randNum  = values[cardpicker];  // Adding Random Values into Array to decide cards
  randNum4 = values[cardpicker4];
  randNum2 = values[cardPicker2];
  randNum3 = values[cardpicker3];

  randNum5 = values[cardpicker5];
  randNum6 = values[cardpicker6];
  randNum7 = values[cardpicker7];
  randNum8 = values[cardpicker8];


  int total = randNum + randNum3; // Players total of twp cards they begin with 
  int total2 = randNum2 + randNum4; // Dealers total of two cards 

  int total3 = randNum + randNum3 + randNum5; // player total of three cards 

  int total4 = randNum + randNum3 + randNum5 + randNum6; // Player total of cards if they hit again at 4 cards

  int total5 = randNum + randNum4 + randNum7; // Dealers total amount of cards at 3 cards
  int total6 = randNum + randNum4 + randNum7 + randNum8; // Dealers amount of cards at 4 cards

    cout << "Welcome to my Black Jack Game" <<endl;  
    cout << "To start this game the dealer will give out some cards || ";
    cout << "First person to reach 21 points or closest wins the game  || If you go past 21 then it will be a bust" <<endl;
    cout << "This means you or the dealer will lose if you go over 21"<<endl;
    cout << "The dealer can keep taking cards at least soft 17 or go bust"<<endl;
    cout << "If Both the player and the dealer get 21 points then it will be a draw "<<endl;
    cout << "Can only split two cards if they have the same value"<<endl;
    cout << "Press one to play the game" <<endl;
    cin >> input;

    switch(input){
    
        case 1:
        Dealer(cards, 14); // Call Dealer from function
        cout << " Place your bet: ";
        cin >> bet;
        

        while( bet > 0 && 20 <= bet){ // Bet has to be declared // Bet will also be chips

        cout << "Your Bet has been Declared: " << " Bet: " <<  bet << endl;

        }

          PickCards(cards, 14, randNum, values, 14, randNum2, cardpicker, cardPicker2, cardpicker3, cardpicker4, randNum3, randNum4, total, total2, doubledown, decide);

           // Game will not continue // Only works if Blackjack is pulled early 

           if(total2 == 21 && total == 21){
            if(total2 == 21){
            cout << " Game will not continue || Dealer has pulled BLACKJACK EARLY!!: Dealers total " << total2 <<endl;
            }else if(total == 21){
                cout << " Game wll not continue || Player has pulled BLACKJACK EARLY!!: Players total " << total <<endl;
            }else if( total2 > 21 && total > 21){
                if(total2 > 21){
                    cout << " Dealer has went over bust || Game over "<<endl;
                }else if(total > 21){
                    cout << " Player has went over bust || Game over "<<endl;
                }

            }

           }else if(total2 != 21 && total != 21){    // Game will continue 
        
          do{ // Loops until player makes the right decesion 
          cout << "|| Would you like to to do || Double Down: ENTER Double || Stand: Enter Stand || Hit: Enter Hit || Split: Enter Split || ";
          if(total > 21 && total2 > 21){
          cout << "GAME OVER "<<endl;
          }
          if(total2 < 21 && total < 21){
          cin >> choice;
          if(choice != "Double" && choice != "Stand" && choice != "Hit" && choice != "Split"){
            cout << "Wrong Input || Please try again"<<endl;
          }
          }
          

          }while(choice != "Double" && choice != "Stand" && choice != "Hit" && choice != "Split" );

          moreCards(cards, 14, randNum, randNum2, total, total2, choice, randNum4, decide, randNum3, bet, doublebet, randNum5, total3, choice2, randNum6, total4);
           }
           if(choice == "Double"){
            DoubleDown(total4, randNum6, randNum7, total2, total5, randNum8, total6, total3, total);
           }
           if(choice == "Split"){ // Split only works if cards have the same value 
            if(randNum != randNum3 && randNum3 != randNum){
            do{
            cout << "Cards don't match || Try something else || Double || Hit || Stand ";
            cin>>choice;
            if(choice!= "Double" && choice !="Hit" && choice != "Stand"){
                cout << "Wrong Input || Try again "<<endl;
            }
            }while(choice != "Double" && choice !="Hit" && choice != "Stand");
            if(choice == "Double"){
                DoubleDown(total4, randNum6, randNum7, total2, total5, randNum8, total6, total3, total);
            }else if(choice == "Hit"){
                Hit(total4, randNum6, randNum7, total2, total5, randNum8, total6, total3);
            }else if(choice == "Stand"){
                Stand(total4, randNum6, randNum7, total2, total5, randNum8, total6, total3, total); 
            }

            }else if(randNum == randNum3 && randNum3 == randNum){
            Split(randNum, randNum3);
           }
           } 
          if(choice == "Stand"){
            if(total == 21 && total2 == 21){
            cout << " || Game was Already decided || No need to continue " <<endl;
               }else if(total > 21 && total2 > 21){
                cout << "GAME WAS A BUST " <<endl;
               }else if(total < 21 && total2 < 21){
               Stand(total4, randNum6, randNum7, total2, total5, randNum8, total6, total3, total);
               }
          }
          if(choice == "Hit"){
             if(total3 > 21 && total3 == 21){
             cout << "Game is over || it will not continue ";
             }else if(total3 < 21){
          do{
          cout << " You have choosen Hit again : Would you like to Hit again?: Press No or Hit "<<endl;
          cin>>choice;
          if(choice != "Hit" && choice != "No"){
            cout << " Wrong Input: Try again"<<endl;
          }
          }while(choice != "Hit" && choice != "No");
          
          }else if(total3 == 21){
            cout << "Game is over || You have won BLACKJACK "<<endl;
          }

          if(choice == "Hit"){ // Player might decide to hit again for the third time 
            if(total3 == 21 && total3 > 21){ 
                cout << " GAME OVER "<<endl;
            }else if(total3 < 21){ // Game will continue if game is not declared over 
            Hit(total4, randNum6, randNum7, total2, total5, randNum8, total6, total3);
            }
          }else if(choice == "No"){
            cout << " Player will stand with three cards || ";
            if(total2 > total3){ // Will only run if dealer total of two cards is more then your three cards
                cout << "Dealer has " << total2 << "|| You Lose "<<endl;
            }else if(total3 > total2){ // Game will continue to run if the dealer has less then the total of your three cards
            cout << " Dealer is pulling out third card: " << randNum7; 
            cout << " Dealer has a total of " << total5 << " ";
                if(total5 > 21){
                cout << "Dealer has went over bust || You win"; // If Dealers third card goes over 21 it's a bust
            }else if(total5 == 21){
                cout << "Dealer has won BLACKJACK || You lose";
            }
            if(randNum7 == 10){
              if(decide > 5){ // Even though JACKs, QUEENS, and KINGS are worth 10 points // WE should specify which card you get when you reach 10 points 
                cout << " Which is also a  " << cards[11];
                }else if(decide < 5){
                cout << " Which is also an " << cards[12];
               }else if(decide > 10){
               cout << " Which is also an " << cards[13];
               }
                 }else if(randNum7 == 11 && randNum7 == 1){
                      cout << "Which is also an ACE " << cards[0];
                   }

                if(total3 < 21 && total5 < 21){ // Game will continue 
            if(total5 > 21){
                cout << " Dealer has went over bust || You win: Dealers total " << total5 <<endl;
            }else if(total5 >= 17){ // if Dealer gets 16 or less they will keep hitting // If they get 17 they will stand 
                if(total5 >= 17){
                    cout << " Dealer will now stand with three cards ";
                    cout << " Dealers total: " << total5;
                 }
                if(total3 > total5){
                    cout << " You win the game || Congrats "<<endl;
                }else if(total5 > total3){
                    cout << " You lose || Dealer has won the game "<<endl;
                }
            }else if(total5 <= 16 && total2 > total3){
                if(total5 <= 16){
                cout << " Dealer will get a forth card ";
                cout << " Dealer has been given a " << randNum8;
                if(total6 > 21){
                    cout << " Dealer has gone busted || YOU WIN! " <<endl; // If(total 5 == total3 && total3 == total5) // This will result in draw
                
            }else if(total6 > total3){
                cout << "You have lost || Dealer wins ";
            }
                }else if(total2 > total3){
                    cout << "GAME OVER ";
                }
          }
            if(total3 > 21){
                cout << " You went over bust || You lose " <<endl;
            }

            

        break;
        
        default:
        cout << "This Option does not exist || Play BLACKJACK Already "<<endl;
}
    


}

}

}

}

}