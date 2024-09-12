/* card.h
 * =============================================================
 * Name: Your Name
 * Section:  Your Section
 * Project:  FILL IN
 * Purpose:  FILL IN
 * ============================================================= */

#include "card.h"
#include <stdio.h>
#include <stdlib.h>

void displayCard(Card card){
   char displayRank = ' ';
   
   if(card.rank < 10){
      displayRank = card.rank + '0'; // convert int to char
   }
   if(card.rank == 10){
      displayRank = 'X';
   }
   if(card.rank == 11){
      displayRank = 'J';
   }
   if(card.rank == 12){
      displayRank = 'Q';
   }
   if(card.rank == 13){
      displayRank = 'K';
   }
   if(card.rank == 14){
      displayRank = 'A';
   }

   printf(" %c%c", displayRank, card.suit);
}

Card* createCard(int rank, char suit){

   Card* newCard = newCard = (Card*) malloc(sizeof(Card));
   newCard->rank = rank;
   newCard->suit = suit;
   newCard->nextCard = NULL;

   return newCard;
}


