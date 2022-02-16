/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  int distance, extra = 0;
  float total = 0;

  printf("Enter the distance that van has travelled : ");
  scanf("%d", &distance);

  extra = distance - 30; //calculate extra kilometers that van has travelled
  if (extra <= 0){
    total = distance * 50;
    
  }
  else{
    total =  extra * 40 + 30 * 50;
  }

    printf("Your amount is %.2f", total);
  
  return 0;
}
