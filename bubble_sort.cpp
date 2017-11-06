
// Sortowanie babelkowe
//Tomasz Skrzypiec

#include <iostream>

using namespace std;
void bubble_sort(int* , int );
void print_arr(int* , int );

int main()
{
    const int SIZE = 6;
    int my_array[SIZE] = {33,41,54,43,61,1};
    
    bubble_sort(my_array, SIZE);
    print_arr(my_array, SIZE);

    return 0;
}

void bubble_sort(int* arr, int size)
{
    int iter = 0;
    int temp = 0; //zmienna tymczasowa
    do
    {
        iter = 0; //zerujemy zmienną iter przed każdą pętlą
        for (int i=0; i < size - 1; ++i)
        {
            if (arr[i] > arr[i+1])  // jeśli element tablicy jest większy od następnego elementu
            {
                iter++;  //jeśli jest jakaś zmiana, to zmienne zamiana powiększa swoją wartość
                temp=arr[i];  //wartość t[i] jest kopiowana do zmiennej temp
                arr[i]=arr[i+1]; //t[i] przyjmuje wartość następnego elementu, gdyż jest on mniejszy
                arr[i+1]=temp;  //kolejny element tablicy przejmuje wcześniejszą wartość poprzedniego elementu, gdyż jest on większy
            }
        }
    }
    while (iter != 0);   //jeśli zmienna iter miałaby wartość 0, oznaczałoby to że nie dokonano żadnych zmian, a więc nie ma potrzeby dalszego sortowania
}

void print_arr(int* arr, int size)
{
    for (int i=0; i<size; ++i)
    {
        cout << *(arr + i) << " "; // to samo co arr[i], wypisanie posortowanych liczb
    }
}
