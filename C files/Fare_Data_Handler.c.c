#include <stdio.h>

int main() {
  int DayType, PassengerType, TicketType;
  scanf("%d%d%d", &DayType, &PassengerType, &TicketType);
  int FinalFare1, base, discount, surcharge;
  FinalFare1 = base - discount;
  int FinalFare2 = FinalFare1 + surcharge;
  
  if (DayType > 2 || DayType < 1) {
  	return 0;
  }
  
  if (PassengerType < 1 || PassengerType > 3) {
  	return 0;
  }
  
  if (TicketType > 2 || TicketType < 1) {
  	return 0;
  }
  
  
  
  if (TicketType == 1){
  	base = 150;
  }else{
  	base = 250;
  }
  
  if (PassengerType == 2 || PassengerType == 3) {
  	discount = (int) base/2;
  }else {
  	discount = 0;
  }
  
  if (DayType == 1) {
  	surcharge = 0;
  }else {
  	surcharge = FinalFare1/5;
  }
  
  printf("Final Fare: %d\n", FinalFare2);

  return 0;
}