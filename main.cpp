#include <iostream>

int main() {
  int FirstNumber;
  int SecondNumber;
  
  std::cout << "������� ������ �����: ";
  std::cin >> FirstNumber;
  std::cout << "������� ������ �����: ";
  std::cin >> SecondNumber;
  std::cout << "-----���������-----\n";
  
  if (FirstNumber > SecondNumber){
    std::cout << "���������� �����: " << SecondNumber << "\n";
  } else if (SecondNumber > FirstNumber){
    std::cout << "���������� �����: " << FirstNumber << "\n";
  } else {
    std::cout << "����� �����!\n";
  }

  return 0;
}