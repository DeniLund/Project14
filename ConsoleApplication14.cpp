// ConsoleApplication14.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdint.h>
#include <iomanip>
#include <string>

int main()
{
 
    setlocale(LC_CTYPE, "rus");
    std::cout << "Итого апельсинов: \n";
    std::string orangeF = "666", orangeS = "38954";
    std::cout << orangeF + " и " + orangeS << "\n";
    std::string s("abcdefgh"); // s - отвечает за все цифры и где какая находится
    s = orangeF + orangeS;

    std::cout << "Длинна 1 партии: \n";
    std::cout << orangeF.length() << "\n";
    std::cout << "Длинна 2 партии: \n";
    std::cout << orangeS.length() << "\n";
    std::cout << "Общая длинна: \n";
    std::cout << orangeF.length() + orangeS.length() << "\n";
    
    std::cout << "Первая и последняя цифра в партии: \n";
    std::cout << s[0] << s[7] << "\n"; // 0 - это 1 цифра, 7 - это 8
        
    std::cin;
    return 0;
}
