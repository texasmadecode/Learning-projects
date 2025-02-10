#include <stdio.h>

int main() {
  
int appleQuantity = 23;
float applePrice = 1.23;
float appleReview = 82.5;
int appleReviewDisplay = 7;
const char appleLocation = 'F';
appleReview =(int)appleReviewDisplay;

printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, appleLocation, appleReviewDisplay);

}
