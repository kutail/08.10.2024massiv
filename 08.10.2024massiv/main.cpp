/*
 Написать функцию, которая принимает массив и определяет минимальный и максимальный элемент массива
 Показывает значение и номер элемента. Массив на 10 ячеек и заполняется рандомом
 */


#include <iostream>
#include <cstdlib>

using namespace std;

int Min_chislo(const int size, int arr[], int minchislo)
{
    for (int j = 0; j < size; j++)
    {
        if (arr[j]<minchislo)
        {
            minchislo = arr[j];
        }
    }
    return minchislo;
}

int Max_chislo(const int size, int arr[], int maxchislo)
{
    for (int j = 0; j < size; j++)
    {
        if (arr[j]>maxchislo)
        {
            maxchislo = arr[j];
        }
    }
    return maxchislo;
}

int main()
{
    srand(time(NULL));
    
    const int size = 10;
    int maxchislo = 9;
    int minchislo = 1;
    int arr[size];
    for (int j = 0; j < size; j++)
    {
        arr[j] = rand() % maxchislo + minchislo;
        cout << arr[j] << "\t";
    }
    cout << "\nМаксимально число: " << Max_chislo(size, arr, maxchislo) << endl << "Минимальное число: " << Min_chislo(size, arr, minchislo) << endl;
    
    
    return 0;
}
