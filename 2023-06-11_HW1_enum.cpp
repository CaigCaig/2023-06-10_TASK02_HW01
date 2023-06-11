#include <iostream>
#include <Windows.h>
#include <string>

enum class months {
    Январь,
    Февраль,
    Март,
    Апрель,
    Май,
    Июнь,
    Июль,
    Август,
    Сентябрь,
    Октябрь,
    Ноябрь,
    Декабрь,
    Ошибка
};

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string str;
    months month{};
    int n;
    
    while (1) {
        std::cout << "Введите номер месяца: ";
        
        try {
            std::cin >> str;
            n = static_cast<char>(std::stoi(str));
        }
        catch (const std::invalid_argument& n) {
            std::cout << "Не номер!\n";
            system("pause");
            return 1;
        }
        if (!n) {
            std::cout << "До свидания" << std::endl;
            system("pause");
            return 0;
        }
        month = static_cast<months>(n-1);
        switch (month) {
        case months::Январь:
            std::cout << "Январь" << std::endl;
            break;
        case months::Февраль:
            std::cout << "Февраль" << std::endl;
            break;
        case months::Март:
            std::cout << "Март" << std::endl;
            break;
        case months::Апрель:
            std::cout << "Апрель" << std::endl;
            break;
        case months::Май:
            std::cout << "Май" << std::endl;
            break;
        case months::Июнь:
            std::cout << "Июнь" << std::endl;
            break;
        case months::Июль:
            std::cout << "Июль" << std::endl;
            break;
        case months::Август:
            std::cout << "Август" << std::endl;
            break;
        case months::Сентябрь:
            std::cout << "Сентябрь" << std::endl;
            break;
        case months::Октябрь:
            std::cout << "Октябрь" << std::endl;
            break;
        case months::Ноябрь:
            std::cout << "Ноябрь" << std::endl;
            break;
        case months::Декабрь:
            std::cout << "Декабрь" << std::endl;
            break;
        default:
            std::cout << "Неправильный номер!" << std::endl;
            break;
        }
    }
}