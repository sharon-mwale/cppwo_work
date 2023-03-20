#include <iostream>

int main()
{
  int grade;
  int aCount = 0;
  int bCount = 0;
  int cCount = 0;
  int dCount = 0;
  int fCount = 0;

  std::cout << "Enter the letter grades."
            << "Enter the EOF character to end input." << std::endl;

  while ((grade = std::cin.get()) != EOF)
  {
  }
  std::cout << "\n\nTotals for letter grade are:"
            << "\nA: " << aCount
            << "\nA: " << bCount
            << "\nA: " << cCount
            << "\nA: " << dCount
            << "\nA: " << fCount
            << std::endl;
  return 0;
}