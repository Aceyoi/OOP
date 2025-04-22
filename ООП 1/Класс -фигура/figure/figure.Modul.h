#pragma once
// ��� ������ ������������ �.�.
// ������������ ����������

#include <iostream>
#include <fstream>
#include "figure.Class.h"

using namespace std;

// ����� �� �����
template <typename T>
void Print(T figure) {
    if (figure.Getheight() == 0) {  // �������� ������
        cout << endl << "� �������������� ������" << endl;
        cout << "�������� ������: " << figure.GetTwod_Perimeter() << endl;
        cout << "������� ������: " << figure.GetTwod_Area() << endl;
    }
    else {
        cout << endl << "� ��������������� ������" << endl;
        cout << "�������� ������: " << figure.GetTreed_Perimeter() << endl;
        cout << "����� ������: " << figure.GetTreed_Volume() << endl;
    }
}

// ������ ������ � ����
template <typename T>
void SaveFileSolution(T figure, string text) {
    ofstream out;  // ����� ��� ������
    out.open(text); // ��������� ���� ��� ������
    if (!out.is_open()) {
        throw runtime_error("������ �������� �����");
    }
        if (figure.Getheight() == 0) {  // �������� ������
            out << figure.GetTwod_Perimeter() << " " << figure.GetTwod_Area() << endl;
        }
        else {
            out << figure.GetTreed_Perimeter() << " " << figure.GetTreed_Volume() << endl;
        }
    out.close();
    cout << endl << "���� ��� �������" << endl;
}

// ������ ��������� ������ � ����
template <typename T>
void SaveFileElements(T figure, string text) {
    ofstream out;  // ����� ��� ������
    out.open(text); // ��������� ���� ��� ������
    if (!out.is_open()) {
        throw runtime_error("������ �������� �����");
    }
    if (figure.Getheight() == 0) {  // �������� ������
        out << figure.Getwidth() << " " << figure.Getlength() << endl;
    }
    else {
        out << figure.Getwidth() << " " << figure.Getlength() << " " << figure.Getheight() << endl;
    }
    out.close();
    cout << endl << "���� ��� �������" << endl;
}