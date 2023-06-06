#include <iostream>

int main() {
    setlocale(LC_ALL, "ru");
    const int SIZE = 15;
    double absl;
    int c = 0;
    //эталонные значения
    int referenceValues[SIZE] = { 1,5,10,40,70,90,100,105,150,300,700,1200,1800,2500,5000 };
    //Показания прибора
    double values[SIZE] = {
            1.001,4.997,10.0002,
            39.986,70.001,90.011,
            99.997,105.001,149.999,
            300.015,700.002,1199.991,
            1798.794,2501.613,5002.014
    };
    double norm = 0.25;
    printf("Нормированная погрешность прибора: %.10g\n", norm);
    printf("Прямой ход:\n");
    printf("№ точки:\t\t\t");
    for (int i = 1; i <= SIZE; i++) printf("%-10d| ", i);
    printf("\n");
    printf("Эталонные значения, кПа:\t");
    for (int i : referenceValues) printf("%-10d| ", i);
    printf("\n");
    printf("Показания прибора, кПа:\t\t");
    for (double d : values) printf("%-10.10g| ", d);
    printf("\n");
    printf("Относительная погрешность, %%:\t");
    for (int i = 0; i < SIZE; i++) {
        absl = (abs((double)referenceValues[i] - values[i])) / values[i] * 100;
        if (absl > norm) {
            c += 1;
            printf("\u001B[31m");
        }
        else {
            printf("\u001B[32m");
        }
        printf("%-10.2f\u001B[0m| ", absl);
    }
    printf("\n");
    printf("\n");
    //Эталонные значения
    int referenceValues2[SIZE] = { 60000,50000,25000,10000,8000,5000,2500,1800,1200,700,300,150,105,100,90 };
    //Показания прибора
    double values2[SIZE] = {
            59997.231,49837.132,24997.524,
            9997.314,7999.314,5001.731,
            2500.831,1799.214,1200.004,
            699.996,300.012,150.000,
            105.001,99.999,90.001
    };
    printf("Обратный ход:\n");
    printf("№ точки:\t\t\t");
    for (int i = 1; i <= SIZE; i++) printf("%-10d| ", i);
    printf("\n");
    printf("Эталонные значения, кПа:\t");
    for (int i : referenceValues2) printf("%-10d| ", i);
    printf("\n");
    printf("Показания прибора, кПа:\t\t");
    for (double d : values2) printf("%-10.10g| ", d);
    printf("\n");
    printf("Относительная погрешность, %%:\t");
    for (int i = 0; i < SIZE; i++) {
        absl = (abs((double)referenceValues2[i] - values2[i])) / values2[i] * 100;
        if (absl > norm) {
            c += 1;
            printf("\u001B[31m");
        }
        else {
            printf("\u001B[32m");
        }
        printf("%-10.2f\u001B[0m| ", absl);
    }
    printf("\n");
    printf("\n");
    printf("Заключение о годности: ");
    if (c == 0) {
        printf("\u001B[32mПрибор годен к эксплуатации!\u001B[0m");
    }
    else
    {
        printf("\u001B[31mПрибор не годен к эксплуатации!\u001B[0m");
    }
}