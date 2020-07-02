//Computes and compares comission of two theoretical brokers

#include <stdio.h>

int main(void) {

  //Asks for user input

  float shares, share_price, value, commission1;

  printf("Enter number of shares: ");
  scanf("%f", &shares);
  printf("Enter price per share: ");
  scanf(" $%f", &share_price);

  //Computes a commission (comission1), charged by a theoretical broker, which is dependent on the value of the trade

  value = shares * share_price;

  if (value < 2500.00f)
    commission1 = 30.00f + 0.017f * value;
  else if (value < 6250.00f)
    commission1 = 56.00f + 0.0066f * value;
  else if (value < 20000.00f)
    commission1 = 76.00f + 0.0034f * value;
  else if (value < 50000.00f)
    commission1 = 100.00f + 0.0022f * value;
  else if (value < 500000.00f)
    commission1 = 155.00f + 0.0011f * value;
  else
    commission1 = 255.00f + 0.0009f * value;

  if (commission1 < 39.00f)
    commission1 = 39.00f;

  //Computes a commission (comission2), charged by a theoretical rival broker, which is solely dependent on the number of shares

  float commission2;

  if (shares < 2000.00f)
    commission2 = 33.0f + 0.03f * shares;
  else
    commission2 = 33.0f + 0.02f * shares;

  //Output

  printf("Commission of broker: $%.2f\nCommission of rival broker: $%.2f\n", commission1, commission2);

  return 0;
}
