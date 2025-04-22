// ��� ������ ������������ �.�.

#pragma once

#include "figure.Modul.h" 

// ��� ������ �������������
template <typename T>
class RectangleOrParallelepiped {
private:
    double  width,  // ������
            height, // ������                   
            length; // �����

public:

    //����������� ��� ����������
    RectangleOrParallelepiped() : length(0), width(0), height(0)  {}

    // ����������� � �����������
    RectangleOrParallelepiped(double  l, double  w, double  h) {
        setFigL(l);
        setFigW(w);
        setFigH(h);
    }

    // ����������� ���� ������
    // ����������� �������  
    // ����������
    virtual ~RectangleOrParallelepiped() {}

    // ����������� �����������
    RectangleOrParallelepiped(const RectangleOrParallelepiped& other)
        : width(other.width), height(other.height), length(other.length) {}

    // ����������� �����������
    RectangleOrParallelepiped(RectangleOrParallelepiped&& other) noexcept
        : width(other.width), height(other.height), length(other.length) {
        other.width = 0;
        other.height = 0;
        other.length = 0;
    }

    // ����� ���������� ������
    void setFigW(double  w) {
        if (w > 0) {
            width = w;
        }
        else {
            cout << "������ ������ ���� �������������." << endl;
        }
    }

    // ����� ���������� ������
    void setFigH(double  h) {
        if (h >= 0) {
            height = h;
        }
        else {
            cout << "������ ������ ���� ���������������." << endl;
        }
    }

    // ����� ���������� �����
    void setFigL(double  l) {
        if (l > 0) {
            length = l;
        }
        else {
            cout << "����� ������ ���� �������������." << endl;
        }
    }

    // ����� ������ ������
    double  Getwidth() const {
        return width;
    }

    // ����� ������ ������
    double  Getheight() const {
        return height;
    }

    // ����� ������ �����
    double  Getlength() const {
        return length;
    }

    // ����� ���������� ��������� ��������������
    double  GetTwod_Perimeter() const { // const - ������ �� ����������
        return (length + width) * 2;
    }

    // ����� ���������� ������� ��������������
    double  GetTwod_Area() const {
        return length * width;
    }

    // ����� ���������� ������� ��������������� 
    double  GetTreed_Perimeter() const {
        return 4 * (length + width + height);
    }

    // ����� ���������� ������ ���������������
    double  GetTreed_Volume() const {
        return (width * length * height);
    }
};