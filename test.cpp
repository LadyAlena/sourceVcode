#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input;
    int number;
    char extra;

    std::cout << "Input int: ";

    // ��������� ������
    std::getline(std::cin, input);

    // ������� ������������� ������ � ����� �����
    std::istringstream iss(input);
    if (!(iss >> number) || iss.get(extra)) {
        std::cerr << "Error: input int!" << std::endl;
        return 1;
    }

    std::cout << "You enter: " << number << std::endl;

    return 0;
}