#include <iostream>

int main()
{
  int rows;
  std::cout << "Enter the number of rows for the pyramids: ";
  std::cin >> rows;

  // Normal pyramid
  for (int i = 1; i <= rows; i++)
  {
    for (int j = 1; j <= rows - i; j++)
    {
      std::cout << " ";
    }
    for (int k = 1; k <= 2 * i - 1; k++)
    {
      std::cout << "*";
    }
    std::cout << std::endl;
  }

  // Upside-down pyramid
  for (int i = rows; i >= 1; i--)
  {
    for (int j = 1; j <= rows - i; j++)
    {
      std::cout << " ";
    }
    for (int k = 1; k <= 2 * i - 1; k++)
    {
      std::cout << "*";
    }
    std::cout << std::endl;
  }

  return 0;
}