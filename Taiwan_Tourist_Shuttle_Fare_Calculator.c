#include <stdio.h>

int main() {
  int DayType, PassengerType, TicketType;
  scanf("%d%d%d", &DayType, &PassengerType, &TicketType);

  
  if (DayType > 2 || DayType < 1) {
  	return 0;
  }
  
  if (PassengerType < 1 || PassengerType > 3) {
  	return 0;
  }
  
  if (TicketType > 2 || TicketType < 1) {
  	return 0;
  }
  
  
  int base;
  if (TicketType == 1){
  	base = 150;
  }else{
  	base = 250;
  }
  
  int discount;
  if (PassengerType == 2 || PassengerType == 3) {
  	discount = (int) base/2;
  }else {
  	discount = 0;
  }
  
  int discounted = base - discount;
  
  int surcharge;
  if (DayType == 1) {
  	surcharge = 0;
  }else {
  	surcharge = discounted/5;
  }
  
  int FinalFare = discounted + surcharge;
  
  printf("Final Fare: %d\n", FinalFare);

  return 0;
}