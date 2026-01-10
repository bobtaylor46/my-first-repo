#include <stdio.h>
#include <math.h>

int main() {
  int croptype, farmer_age, is_org;
  double area;
  double base, orgBon, yf_bon, multiplier, sub;
  
  scanf("%d %d %d %lf", &croptype, &farmer_age, &is_org, &area);
  
  //step1: base rate
  if (croptype == 1)
    base = 10000;
  else if (croptype == 2)
    base = 8000;
  else
    base = 6000;
  
  //step2: Bonuses and exeptions
  /*Organic bonus*/
  if (croptype == 2 && is_org == 1)
    orgBon = 1.8; //Pomelo and organic special
  else if (is_org == 1)
    orgBon = 1.5;
  else
    orgBon = 1.0;
  
  /*Young farmer bonus*/
  if (croptype == 3 && area < 0.5)
    yf_bon = 1.0; //Not eligible
  else if (farmer_age <= 40)
    yf_bon = 1.2;
  else 
    yf_bon = 1.0;
  
  //step3: multiplier
  multiplier = orgBon * yf_bon;
  
  //Rice exception
  if (croptype == 1 && area > 5){
  	double area1 = 5.0;
    double area2 = area - 5.0;
    sub = (area1 * base * multiplier) + (area2 * base * multiplier * 0.8);
  }else {
  	sub = area * base * multiplier;
  }
  
  int sub2 = (int) round(sub); //Rounding and truncating to integer.
  
  //Final cap
  if (sub2 > 200000)
    sub2 = 200000;
  
  printf("Final Subsidy: %d\n", sub2);

  return 0;
}