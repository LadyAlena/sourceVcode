#include <iostream>

int main() {
  int FirstNumber;
  int SecondNumber;
  
  std::cout << "Введите первое число: ";
  std::cin >> FirstNumber;
  std::cout << "Введите второе число: ";
  std::cin >> SecondNumber;
  std::cout << "-----Проверяем-----\n";
  
  if (FirstNumber > SecondNumber){
    std::cout << "Наименьшее число: " << SecondNumber << "\n";
  } else if (SecondNumber > FirstNumber){
    std::cout << "Наименьшее число: " << FirstNumber << "\n";
  } else {
    std::cout << "Числа равны!\n";
  }

  return 0;
}