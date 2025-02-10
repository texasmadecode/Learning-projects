#include <stdio.h>
//this one was hard
int main(void) {
  int month, day, year;

  // Standard date form
  printf("Enter date (mm/dd/yyyy): ");
  // Split the user input into 3 variables for the date
  scanf("%d /%d /%d", &month, &day, &year);

  // Print the month
  switch(month) {
    case 1:
      printf("January");
      break;
    case 2:
      printf("February");
      break;
    case 3:
      printf("March");
      break;
    case 4:
      printf("April");
      break;
    case 5:
      printf("May");
      break;
    case 6:
      printf("June");
      break;
    case 7:
      printf("July");
      break;
    case 8:
      printf("August");
      break;
    case 9:
      printf("September");
      break;
    case 10:
      printf("October");
      break;
    case 11:
      printf("November");
      break;
    case 12:
      printf("December");
      break;
    default:
      printf("Invalid month");
      break;
  }
    switch(day % 10) {
        case 1: if (day != 11) printf("st"); break;
        case 2: if (day != 12) printf("nd"); break;
        case 3: if (day != 13) printf("rd"); break;
        default: printf("th"); break;
    }
printf("%int",day);
printf("%i",year);
  return 0;
}

  
 
