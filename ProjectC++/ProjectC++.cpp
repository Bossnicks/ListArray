#include "Header.h"
#include <iostream>


using namespace Ads;

job* arr = new job;

void workWithMassiv()
{
    setlocale(LC_ALL, "Russian");
    int select, len = 0;
    bool Exit = true;

    while (Exit)
    {
        system("cls");
        cout << "0)выход\n"
            << "1)добавить в массив\n"
            << "2)вывести весь массив\n"
            << "3)меню работы с файлами\n"
            << "4)удаление\n"//laba06
            << "5)изменение\n"//laba06
            << "6)меню сортировки\n"//laba07
            << "7)поиск подстрок\n"//laba08
            << "8)меню поиска\n"//laba09
            << "9)найти по индексу\n" << endl;
        cin >> select;
        system("cls");
        switch (select)
        {
        case 0:
            Exit = false;
            system("pause");
            system("cls");
            break;
        case 1:
            Add(arr, len);
            break;
        case 2:
            Print(arr, len);
            break;
        case 3:
            filePrint(arr, len);
            break;
        case 4:
            Delete(arr, len);
            break;
        case 5:
            Change(arr, len);
            break;
        case 6:
            Sort(arr, len);
            break;
        case 7:
            FindStr(arr, len);
            break;
        case 8:
            FoundAlg(arr, len);
            break;
        case 9:
            FindByIndex(arr, len);
            break;
        default:
            break;
        }
    }
    cout << "1) Работа со списком(студенты)\n2) Работа с массивом(работники)" << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int choice; 
    cout << "1) Работа со списком(студенты)\n2) Работа с массивом(работники)" << endl;
    int fullExit = true;
    cin >> choice;
    system("cls");
    do {
        switch (choice) {
        case 1:
            workWithList();
            cin >> choice;
            break;
        case 2:
            workWithMassiv();
            cin >> choice;
            break;
        case 0:
            fullExit = false;
            break;
        default:
            break;
        } 
    } while (fullExit);
}