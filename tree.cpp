#include <iostream>
#include "MyTree1.h"

int main()
{
    std::system("chcp 1251");
    MyTree1 tree;

    char choise = 0;

    while (choise != '0') {
        std::cout << "\n------------------MENU------------------";
        std::cout << "\n1 - Добавить элемент\n2 - Удалить элемент\n3 - Прямой обход\n4 - Реверсивный обход \n5 - Симметричный обход"
            "\n6 - Вывести дерево\n7 - Прошить дерево\n8 - Загрузить тестовое дерево\n0 - Выход" << std::endl;

        std::cin >> choise;
        std::cout << std::endl;

        switch (choise)
        {
        case '0': {
            break;
        }
        case '1': {
            int value;
            std::cout << "Введите значение: ";
            std::cin >> value;
            tree.addNode(value);
            break;
        }
        case '2': {
            int value;
            std::cout << "Введите значение: ";
            std::cin >> value;
            tree.deleteNode(value);
            break;
        }
        case '3': {
            std::cout << "Прямой обход: ";
            tree.directBypass();
            break;
        }
        case '4': {
            std::cout << "Реверсивный обход: ";
            tree.reversiveBypass();
            break;
        }
        case '5': {
            std::cout << "Симметричный обход: ";
            tree.symmetricBypass();
            break;
        }
        case '6': {
            tree.showTree();
            break;
        }
        case '7': {
            tree.performTree();
            break;
        }
        case '8': {
            tree.clearTree();
            tree.addNode(8);
            tree.addNode(4);
            tree.addNode(9);
            tree.addNode(3);
            tree.addNode(6);
            tree.addNode(10);
            tree.addNode(5);
            break;
        }
        }
    }

    return 0;
}
