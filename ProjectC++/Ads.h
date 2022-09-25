#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <stdio.h>
#include <cstdlib>

using namespace std;

namespace Ads {
    struct job
    {
        string name;
        string lastName;
        string adsName;
        string phone;
        float salary;
        int id;
    };
    struct Date
    {
        int day;
        int month;
        int year;
    };

    struct Student
    {
        Date birthday;
        int kurs;
        int age;
        int height;
        int weight;
    };

    struct Node {
        Student val;
        Node* next;

        Node(Student _val) : val(_val), next(nullptr) {}
    };
}