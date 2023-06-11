#include <iostream>
#include <windows.h>
#include "math_library_1122.h"
#include "DynamicMathPower.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    std::system("chcp 1251");

 
    //task1122_Library::Leaver vlad;
    DynamicLeaver::Leaver vlad1;
    std::cout << "Введите имя: ";
    std::string name;
    std::cin >> name;
    //std::cout << "Здравствуйте, " << vlad.get_leave(name) << "." << std::endl;
    std::cout << "До свиданья, " << vlad1.get_leave(name) << "!" << std::endl;

    return 0;
}