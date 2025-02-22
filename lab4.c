#include <stdio.h>
int main()
{

  // Initializing all variables
  int order = 0;
  int time = 0;
  float cost = 0;

  int flavour = 0;
  int topping = 0;
  int size = 0;
  int toppings = 0;

  printf("WELCOME TO FIIFI'S ICE CREAM SHOP\nWhat would you like to order?\n");

  do
  {
    printf("1 - Vanilla\n2 - Strawberry\n3 - Chocolate\n4 - Mango \n5 - Enquiries\n");
    scanf("%d", &flavour);

    if (flavour == 5)
    {
      printf("A customer service agent will be with you shortly");
    }
    else
    {
      printf("1 - small\n2 - large\n");
      scanf("%d", &size);
    }

    if (flavour == 1 || flavour == 2 || flavour == 3 || flavour == 4)
    {
      printf("\nYour order is ");
    }

    if (flavour == 1)
    {
      printf("Vanilla ");
    }
    else if (flavour == 2)
    {
      printf("Strawberry ");
    }
    else if (flavour == 3)
    {
      printf("Chocolate ");
    }
    else if (flavour == 4)
    {
      printf("Mango ");
    }
    else
    {
      printf("\nNo flavour entry!");
    }

    if (size == 1 || size == 2)
    {
      printf("ice cream in a ");
    }
    if (size == 1)
    {
      printf("Small size");
      time += 2;
    }
    else if (size == 2)
    {
      printf("Large size");
      time += 3;
    }
    else
    {
      printf("\nNo size entry!");
    }

    // Menu
    // Initializing the costs of the flavours
    if (flavour == 1 || flavour == 2)
    {
      cost += 5.00;
    }
    else if (flavour == 3)
    {
      cost += 6.00;
    }
    else if (flavour == 4)
    {
      cost += 7.00;
    }
    if (size == 1 || size == 2)
    {
      cost += 8.00;
    }
    else if (size == 3)
    {
      cost += 9.00;
    }
    else if (size == 4)
    {
      cost += 10.00;
    }

    // Toppings section
    do
    {
      printf("\nWhat topping would you like to add?\n1 - Sprinkes \n2 - Whipped Cream \n3 - Chopped Nuts \n4 - Coconut Shavings\n5 - No more toppings\n");
      scanf("%d", &topping);
      if (topping == 1)
      {
        printf("Sprinkles\n");
        cost += 2.00;
        time += 1;
        toppings++;
      }
      else if (topping == 2)
      {
        printf("Whipped Cream\n");
        cost += 3.00;
        time += 1;
        toppings++;
      }
      else if (topping == 3)
      {
        printf("Chopped Nuts\n");
        cost += 4.00;
        time += 1;
        toppings++;
      }
      else if (topping == 4)
      {
        printf("Coconut Shavings\n");
        cost += 5.00;
        time += 1;
        toppings++;
      }
      else if (topping == 5)
      {
        printf("You have finished selecting toppings.\n");
        toppings = 0;
      }
      else
      {
        printf("Invalid topping entry!\n");
      }

    } while (toppings > 0);

    printf("\nWould you like anything else?\n1 - Yes\n2 - No\n");
    scanf("%d", &order);
    if (order == 1)
    {
      order++;
    }
    else if (order == 2)
    {
      order = 0;
      printf("\nYour total cost is Ghc%.2f\n", cost);
      printf("Your order will be ready in %d minutes\n", time);
    }
    else
    {
      printf("Invalid entry!\n");
    }
  } while (order > 0);

  printf("\nKindly wait for your order\n");

  // Using a for loop for the countdown
  for (int i = time; i >= 0; i--)
  {
    printf("%d minutes remaining...\n", i);
  }
  printf("\nHere is your order\nThanks for coming to FIifi's Ice Cream");

  // Using a while loop for the countdown
  while (time >= 0)
  {
    printf("%d minutes remaining...\n", time);
    time--;
  }
  return 0;
}
