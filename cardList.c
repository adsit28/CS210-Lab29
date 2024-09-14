/* cardList.c
 * =============================================================
 * Name: Your Name
 * Section:  Your Section
 * Project:  FILL IN
 * Purpose:  FILL IN
 * ============================================================= */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cardList.h"

CardList* createCardList(){
   CardList* newList = (CardList*) malloc(sizeof(CardList));
   newList->topCard = NULL;
   newList->bottomCard = NULL;
   newList->count = 0;
   return newList;
}

void freeCardList(CardList* cardList){
   Card* nextCard = cardList->topCard;

   while(nextCard != NULL){
      cardList->topCard = nextCard->nextCard;
      free(nextCard);
      nextCard = cardList->topCard;
   }
   free(cardList);
}

void makeDeck(CardList* deck){
   Card* newCard = NULL;

   char SUIT[] = {'S', 'H', 'C', 'D'};

   for(int suit = 0; suit < 4; suit++){
      for(int rank = 2; rank < 15; rank++){
        newCard = createCard(rank, SUIT[suit]);
        appendCard(deck, newCard);
      }
   }
}

int isEmpty(CardList* cardList){
   return cardList->count == 0;
}

int listLength(CardList* cardList){
   return cardList->count;
}

void shuffleCardList(CardList* cardList){
   CardList* list1 = createCardList();
   CardList* list2 = createCardList();

   for(int i = 0; i < 50; i++){

      // cut
      int cutCount = rand() % 10 + 21;
      for(int i = 0; i < cutCount; i++){
         appendCard(list1,getTopCard(cardList));
      }
      while(!isEmpty(cardList)){
         appendCard(list2,getTopCard(cardList));
      }

      // fold
      while(!isEmpty(list1) || !isEmpty(list2)){
         if(rand()%2){
            if(!isEmpty(list1)){
                appendCard(cardList, getTopCard(list1));
            }
         } else {
            if(!isEmpty(list2)){
                appendCard(cardList, getTopCard(list2));
            }
         }
      }
   }
   freeCardList(list1);
   freeCardList(list2);
}

void appendCard(CardList* cardList, Card* card){
   card->nextCard = NULL;
   if(cardList->topCard == NULL){
      cardList->topCard = card;
      cardList->bottomCard = card;
      cardList->count = 1;
   } else {
      cardList->bottomCard->nextCard = card;
      cardList->bottomCard = card;
      cardList->count += 1;
      if(cardList->topCard == NULL){
          cardList->topCard = card;
      }
   }
}

void prependCard(CardList* cardList, Card* card){
   if (cardList->count == 0) {
      cardList->topCard = card;
      cardList->bottomCard = card;
      cardList->count = 1;
      card->nextCard = NULL;
   } else {
      card->nextCard = cardList->topCard;
      cardList->topCard = card;
      cardList->count += 1;
   }
}

Card* getTopCard(CardList* cardList){
   if(cardList->topCard == NULL){
      return NULL;
   }

   Card* topCard = cardList->topCard;
   cardList->topCard = topCard->nextCard;
   cardList->count -= 1;

   return topCard;
}

Card* lookAtTopCard(CardList* cardList){
   return cardList->topCard;
}

Card* lookAtBottomCard(CardList* cardList){
   return cardList->bottomCard;
}

#define SEPERATOR_LENGTH 4
void displayCardList(CardList* cardList){
   Card* nextCard = cardList->topCard;
   char seperator[SEPERATOR_LENGTH] = "";

   printf("%2d cards: ", cardList->count);

   while(nextCard != NULL){
      printf("%s", seperator);
      displayCard(*nextCard);
      if(seperator[0] == '\0'){
         strncpy(seperator, ", ", SEPERATOR_LENGTH);
      }
      nextCard = nextCard->nextCard;
   }
}

void appendCardList(CardList* list1, CardList* list2){
   if(list1->count == 0){
      list1->topCard = list2->topCard;
      list1->bottomCard = list2->bottomCard;
      list1->count = list2->count;
   } else {
      list1->bottomCard->nextCard = list2->topCard;
      list1->bottomCard = list2->bottomCard;
      list1->count += list2->count;
   }
   list2->topCard = NULL;
   list2->bottomCard = NULL;
   list2->count = 0;
}
