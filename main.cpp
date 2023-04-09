#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::cout << "Введите сегодняшнюю дату в формате Д М ГГГГ: ";
    int dayNow;
    int monthNow;
    int yearNow;
    std::cin >> dayNow >> monthNow >> yearNow;
    std::cout << "Введите дату рождения посетителяв формате Д М ГГГГ: ";
    int dayBirthday;
    int monthBirthday;
    int yearBirthday;
    std::cin >> dayBirthday >> monthBirthday >> yearBirthday;
    std::string info = "";
    if (yearNow - yearBirthday > 18) {
        info = "Клиент совершеннолетний";
    } else if (yearNow - yearBirthday < 18) {
        info = "Клиент несовершеннолетний";
    } else if (monthNow > monthBirthday) {
        info = "Клиент совершеннолетний";
    } else if (monthNow < monthBirthday) {
        info = "Клиент несовершеннолетний";
    } else if (dayNow > dayBirthday) {
        info = "Клиент совершеннолетний";
    } else {
        info = "Клиент несовершеннолетний";
    }

    //проверка корректности
    if (monthNow == 1 || monthNow == 3 || monthNow == 5 || monthNow == 7 || monthNow == 8 || monthNow == 10 ||
        monthNow == 12) {
        if (dayNow < 1 || dayNow > 31) {
            info = "Некорректная дата";
            }
    } else if (monthNow == 4 || monthNow == 6 || monthNow == 9 || monthNow == 11){
        if (dayNow < 1 || dayNow > 30) {
            info = "Некорректная дата";
            }
    } else if ((monthNow==2) && (yearNow%4==0 && yearNow%100!=0||yearNow%400==0)) {
        if (dayNow < 1 || dayNow > 29) {
            info = "Некорректная дата";
        }
    } else if ((monthNow==2) && (yearNow%4!=0||yearNow%100==0 && yearNow%400!=0)) {
        if (dayNow < 1 || dayNow > 28) {
            info = "Некорректная дата";
        }
    } else {
        info = "Некорректная дата";
    }

    //проверка корректности
    if (monthBirthday == 1 || monthBirthday == 3 || monthBirthday == 5 || monthBirthday == 7 || monthBirthday == 8 || monthBirthday == 10 ||
        monthBirthday == 12) {
        if (dayBirthday < 1 || dayBirthday > 31) {
            info = "Некорректная дата";
        }
    } else if (monthBirthday == 4 || monthBirthday == 6 || monthBirthday == 9 || monthBirthday == 11){
        if (dayBirthday < 1 || dayBirthday > 30) {
            info = "Некорректная дата";
        }
    } else if ((monthBirthday==2) && (yearBirthday%4==0 && yearBirthday%100!=0||yearBirthday%400==0)) {
        if (dayBirthday < 1 || dayBirthday > 29) {
            info = "Некорректная дата";
        }
    } else if ((monthBirthday==2) && (yearBirthday%4!=0||yearBirthday%100==0 && yearBirthday%400!=0)) {
        if (dayBirthday < 1 || dayBirthday > 28) {
            info = "Некорректная дата";
        }
    } else {
        info = "Некорректная дата";
    }


    std::cout<<info;

}



