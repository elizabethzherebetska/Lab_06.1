#include <iostream>
#include <cstdlib> 
#include <ctime>
#define SIZE 25

using namespace std;


int count_even_possitive(int a[SIZE]);
int sum_even_possitive(int a[SIZE]);
void replace_element(int a[SIZE]);


int main() {

    int a[SIZE];
    int min = -20, max = 30;


    srand(time(0));

    for (int i = 0; i < SIZE; i++) {
        a[i] = min + rand() % (max - min + 1);
    }


    std::cout << "Array elements: ";
    for (int i = 0; i < SIZE; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Positive even numbers: " << count_even_possitive(a) << endl;
    cout << "Sum of posittive event numbers: " << sum_even_possitive(a) << endl;

    replace_element(a);
    std::cout << "Changed array elements: ";
    for (int i = 0; i < SIZE; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    int count_even_possitive(int a[SIZE]) {
        int res = 0;
        for (int i = 0; i < SIZE; i++)
        {
            if (a[i] % 2 == 0 && a[i] > 0) {
                res++;
            }
        }

        return res;
    }

    int sum_even_possitive(int a[SIZE])
    {
        int s = 0;
        for (int i = 0; i < SIZE; i++)
        {
            if (a[i] % 2 == 0 && a[i] > 0) {
                s += a[i];
            }
        }

        return s;
    }

    void replace_element(int a[SIZE])
    {
        for (int i = 0; i < SIZE; i++)
        {
            if (a[i] % 2 == 0 && a[i] > 0) {
                a[i] = 0;
            }
        }
    }
