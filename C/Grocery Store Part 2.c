#include <stdio.h>

int main() {
  
 int appleQuantity;
 double applePrice = 1.49;
 double appleReview;
 int appleReviewDisplay;
 const char appleLocation = 'F';

 appleQuantity = 23;
 appleReview = 82.5;
 appleReviewDisplay = appleReview;
 int dayOfWeek = 1;
 dayOfWeek += 2;
 appleReviewDisplay =   875.0 / 10; ;

 if(appleQuantity > 10 || appleQuantity == 3)
 {
  printf("Sale on apples today, today only they are: $%.2f\n", applePrice * .9);
 }
 
 
 printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, appleLocation, appleReviewDisplay);

}
