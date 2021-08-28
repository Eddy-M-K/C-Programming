//Prints the English word for a two-digit number

#include <stdio.h>

int main(void)
{
  int number, tens, ones;

  printf("Enter a two-digit number: ");
  scanf("%d", &number);

  tens = number / 10;
  ones = number % 10;

  if (number < 10 || number > 99) {
    printf("\aA non-two-digit number was entered.");
    return 0;
  }

  if (tens == 1) {
    if (ones == 1) {
      printf("You entered the number eleven.");
    }
    else if (ones == 2) {
      printf("You entered the number twelve.");
    }
    else if (ones == 3) {
      printf("You entered the number thirteen.");
    }
    else if (ones == 4) {
      printf("You entered the number fourteen.");
    }
    else if (ones == 5) {
      printf("You entered the number fifteen.");
    }
    else if (ones == 6) {
      printf("You entered the number sixteen.");
    }
    else if (ones == 7) {
      printf("You entered the number seventeen.");
    }
    else if (ones == 8) {
      printf("You entered the number eighteen.");
    }
    else if (ones == 9) {
      printf("You entered the number nineteen.");
    }
  }
  else switch (tens) {
    case 2: {
      if (ones == 0) {
        printf("You entered the number twenty.");
      }
      else if (ones == 1) {
        printf("You entered the number twenty-one.");
      }
      else if (ones == 2) {
        printf("You entered the number twenty-two.");
      }
      else if (ones == 3) {
        printf("You entered the number twenty-three.");
      }
      else if (ones == 4) {
        printf("You entered the number twenty-four.");
      }
      else if (ones == 5) {
        printf("You entered the number twenty-five.");
      }
      else if (ones == 6) {
        printf("You entered the number twenty-six.");
      }
      else if (ones == 7) {
        printf("You entered the number twenty-seven.");
      }
      else if (ones == 8) {
        printf("You entered the number twenty-eight.");
      }
      else if (ones == 9) {
        printf("You entered the number twenty-nine.");
      }
      break;
    }
    case 3: {
      if (ones == 0) {
        printf("You entered the number thirty.");
      }
      else if (ones == 1) {
        printf("You entered the number thirty-one.");
      }
      else if (ones == 2) {
        printf("You entered the number thirty-two.");
      }
      else if (ones == 3) {
        printf("You entered the number thirty-three.");
      }
      else if (ones == 4) {
        printf("You entered the number thirty-four.");
      }
      else if (ones == 5) {
        printf("You entered the number thirty-five.");
      }
      else if (ones == 6) {
        printf("You entered the number thirty-six.");
      }
      else if (ones == 7) {
        printf("You entered the number thirty-seven.");
      }
      else if (ones == 8) {
        printf("You entered the number thirty-eight.");
      }
      else if (ones == 9) {
        printf("You entered the number thirty-nine.");
      }
      break;
    }
    case 4: {
      if (ones == 0) {
        printf("You entered the number forty.");
      }
      else if (ones == 1) {
        printf("You entered the number forty-one.");
      }
      else if (ones == 2) {
        printf("You entered the number forty-two.");
      }
      else if (ones == 3) {
        printf("You entered the number forty-three.");
      }
      else if (ones == 4) {
        printf("You entered the number forty-four.");
      }
      else if (ones == 5) {
        printf("You entered the number forty-five.");
      }
      else if (ones == 6) {
        printf("You entered the number forty-six.");
      }
      else if (ones == 7) {
        printf("You entered the number forty-seven.");
      }
      else if (ones == 8) {
        printf("You entered the number forty-eight.");
      }
      else if (ones == 9) {
        printf("You entered the number forty-nine.");
      }
      break;
    }
    case 5: {
      if (ones == 0) {
        printf("You entered the number fifty.");
      }
      else if (ones == 1) {
        printf("You entered the number fifty-one.");
      }
      else if (ones == 2) {
        printf("You entered the number fifty-two.");
      }
      else if (ones == 3) {
        printf("You entered the number fifty-three.");
      }
      else if (ones == 4) {
        printf("You entered the number fifty-four.");
      }
      else if (ones == 5) {
        printf("You entered the number fifty-five.");
      }
      else if (ones == 6) {
        printf("You entered the number fifty-six.");
      }
      else if (ones == 7) {
        printf("You entered the number fifty-seven.");
      }
      else if (ones == 8) {
        printf("You entered the number fifty-eight.");
      }
      else if (ones == 9) {
        printf("You entered the number fifty-nine.");
      }
      break;
    }
    case 6: {
      if (ones == 0) {
        printf("You entered the number sixty.");
      }
      else if (ones == 1) {
        printf("You entered the number sixty-one.");
      }
      else if (ones == 2) {
        printf("You entered the number sixty-two.");
      }
      else if (ones == 3) {
        printf("You entered the number sixty-three.");
      }
      else if (ones == 4) {
        printf("You entered the number sixty-four.");
      }
      else if (ones == 5) {
        printf("You entered the number sixty-five.");
      }
      else if (ones == 6) {
        printf("You entered the number sixty-six.");
      }
      else if (ones == 7) {
        printf("You entered the number sixty-seven.");
      }
      else if (ones == 8) {
        printf("You entered the number sixty-eight.");
      }
      else if (ones == 9) {
        printf("You entered the number sixty-nine.");
      }
      break;
    }
    case 7: {
      if (ones == 0) {
        printf("You entered the number seventy.");
      }
      else if (ones == 1) {
        printf("You entered the number seventy-one.");
      }
      else if (ones == 2) {
        printf("You entered the number seventy-two.");
      }
      else if (ones == 3) {
        printf("You entered the number seventy-three.");
      }
      else if (ones == 4) {
        printf("You entered the number seventy-four.");
      }
      else if (ones == 5) {
        printf("You entered the number seventy-five.");
      }
      else if (ones == 6) {
        printf("You entered the number seventy-six.");
      }
      else if (ones == 7) {
        printf("You entered the number seventy-seven.");
      }
      else if (ones == 8) {
        printf("You entered the number seventy-eight.");
      }
      else if (ones == 9) {
        printf("You entered the number seventy-nine.");
      }
      break;
    }
    case 8: {
      if (ones == 0) {
        printf("You entered the number eighty.");
      }
      else if (ones == 1) {
        printf("You entered the number eighty-one.");
      }
      else if (ones == 2) {
        printf("You entered the number eighty-two.");
      }
      else if (ones == 3) {
        printf("You entered the number eighty-three.");
      }
      else if (ones == 4) {
        printf("You entered the number eighty-four.");
      }
      else if (ones == 5) {
        printf("You entered the number eighty-five.");
      }
      else if (ones == 6) {
        printf("You entered the number eighty-six.");
      }
      else if (ones == 7) {
        printf("You entered the number eighty-seven.");
      }
      else if (ones == 8) {
        printf("You entered the number eighty-eight.");
      }
      else if (ones == 9) {
        printf("You entered the number eighty-nine.");
      }
      break;
    }
    case 9: {
      if (ones == 0) {
        printf("You entered the number ninety.");
      }
      else if (ones == 1) {
        printf("You entered the number ninety-one.");
      }
      else if (ones == 2) {
        printf("You entered the number ninety-two.");
      }
      else if (ones == 3) {
        printf("You entered the number ninety-three.");
      }
      else if (ones == 4) {
        printf("You entered the number ninety-four.");
      }
      else if (ones == 5) {
        printf("You entered the number ninety-five.");
      }
      else if (ones == 6) {
        printf("You entered the number ninety-six.");
      }
      else if (ones == 7) {
        printf("You entered the number ninety-seven.");
      }
      else if (ones == 8) {
        printf("You entered the number ninety-eight.");
      }
      else if (ones == 9) {
        printf("You entered the number ninety-nine.");
      }
      break;
  }
  return 0;

  }
}
