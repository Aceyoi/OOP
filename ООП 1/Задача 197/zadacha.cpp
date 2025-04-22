/// Функция вычисления произведения от i до n (Ai-Bi)^2


// Где Ai = i,если i нечётное
//          i/2 в противном случае
// Где Bi = i^2, если i нечётное
//          i^3 в противном случае
// Не может быть float т.к. четность и нечетность распространяется только на целые числа

// Нахождение Ai в формуле
size_t receivingA(int i) {
    size_t a;
    if ((i + 1) % 2 == 1)
    {
        a = i + 1;
    }
    else// Если i чётное
    {
        a = (i + 1) / 2;
    }
    return a;
}

// Нахождение Bi в формуле
size_t receivingB(int i) {
    size_t b;
    if ((i + 1) % 2 == 1)
    {
        b = (i + 1) * (i + 1);
    }
    else// Если i чётное
    {
        b = (i + 1) * (i + 1) * (i + 1);
    }
    return b;
}

// Нахождение (Ai-Bi) в формуле
size_t receivingDIFF(int i) {
    size_t diff = receivingA(i) - receivingB(i);
    return diff;
}

// Нахождение ответа формулы и вывод её
size_t summa(int n) {
    size_t sum = 0;
    int i;
    for (i = 0; i < n; i++) {
        sum += receivingDIFF(i) * receivingDIFF(i);
    }
    return sum;
}

// Тесты
void testcheck() {
    assert(summa(5) == 4329);
    assert(receivingA(5) == 3);
    assert(receivingB(5) == 216);
    assert(receivingDIFF(5) == 18446744073709551403);

}