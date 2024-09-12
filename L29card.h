/* l29card.h
 * =============================================================
 * Name: Your Name
 * Section:  Your Section
 * Project:  FILL IN
 * Purpose:  FILL IN
 * ============================================================= */

#ifndef L29CARD_H
#define L29CARD_H

/*
 * PURPOSE:
 * define a Card type useful for creating a list of 
 * standard 52-card deck playing cards
 * 
 * DETAILS - Card
 * FIELD: suit - a char which (should be) one of 'S', 'H', 'C', 'D'
 * FIELD: rank - an int which (should be) in the range 2 to 14, inclusive
 */

/** Card (struct cardType) is used in CardList
 */
typedef struct cardType {
   char suit;
   int  rank;
   struct cardType* nextCard;
} Card;

/* displays a Card type struct to stdout; does not have newline
 * @param card - a single card
 */
void displayCard(Card card);

/* allocates memory for a Card struct and set the field values
 * @param rank - an int which (should be) in the range 2 to 14, inclusive
 * @param suit - a char which (should be) one of 'S', 'H', 'C', 'D'
 * @return a pointer to the allocated memory
 */
Card* createCard(int rank, char suit);

#endif
