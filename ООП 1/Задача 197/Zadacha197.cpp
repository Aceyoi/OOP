// Код создан Сапожниковым Ю.С.
// Задача 197

//Используемые библиотеки

#include "zadacha.h"

using namespace std;

int main() {

   setlocale(LC_ALL, "Russian");

   testcheck();

    // Ввод числа до которого будет производится произведение
    size_t n;
    cout << "До какого числа будет проводиться произведение ";  ///Удобность для пользователя
    cin >> n;

     //Вывод
    //cout << "Сумма (ai - bi)^2 от i=1  до " << n << " равна " << Summa_massiv(n);

    //Вывод
    cout << "Сумма (ai - bi)^2 от i=1  до " << n << " равна " << summa(n) << endl;

    return 0;
}