#include <iostream>
const int N = 100;
void removeElements(double arr[], int n)
{
    int l = 1;
    for (int i = 1; i < n; i++) {
        if (arr[l - 1] < arr[i]) {
            arr[l] = arr[i];
            l++;
        }
    }
    for (int i = 0; i < l; i++)
      std:: cout << arr[i] << " ";
}
void random(int first0, int last0, double arr[N], int n) {
    std::cout << "indicate boundaries from = ";
    std::cin >> first0; std::cout << "before = ";
    std::cin >> last0; if (first0 >= last0) {
        std::cout << "incorrect range";
    }
    else {
        for (int i = 0; i < n; ++i) {
            arr[i] = rand() % (last0 - first0) + first0;
        }
    }
}
void yporayd(double arr[N], int n)
{
    for (int i = 0; i < n; i += 2) {
        for (int j = i + 2; j < n; j += 2) {
            if (arr[i] > arr[j]) {
                std::swap(arr[i], arr[j]);
            }
        }
    }
}










int main() {
    setlocale(LC_ALL, "rus");
    int n{}, i{};
    int l = 1;
    double posledovatel[100];
    double arr[100];
    int sled_element = 1;
    double maxElement = arr[0];
    double minElement = arr[0];
    int maxIndex = 0;
    int minIndex = 0;
    double proizved = 1.0;
    int first0{}, last0{};
    int op;
    std::cout << "  Enter 0 and 1 !!!!" <<'\n';
    std::cin >> op;
    switch (op)
    {
    default:
        std::cout << " 0 and 1 !!!!"; break;
    case 0:
        std::cout << " Введите размер массива: ";
        std::cin >> n;
        random(first0, last0, arr, n);
        for (int i = 0; i < n; i++) {
            std::cout << arr[i] << " ";
        } std::cout << '\n';
           removeElements(arr, n);
         
           yporayd(arr, n);

    break;
    case 1:
        std::cout << " Введите размер массива: ";
        std::cin >> n;
        std::cout << " Введите элементы массива:" << '\n';
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }
       
           removeElements(arr, n); 
           
           yporayd(arr, n);
           
        break;
    }
   

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxIndex = i;
        }
        if (arr[i] < minElement) {
            minElement = arr[i];
            minIndex = i;
        }
    }
    if (minIndex < maxIndex) {
        for (int i = minIndex + 1; i < maxIndex; i++) {
            proizved *= arr[i];
        }
    }
    else {
        for (int i = maxIndex + 1; i < minIndex; i++) {
            proizved *= arr[i];
        }
    }
   

    // Удаление наименьшего количества элементов для получения строго возрастающей последовательности

    

    // Вычисление произведения элементов между последним максимальным и последним минимальным элементами

    

    // Упорядочивание элементов массива с четными номерами

    
    


    // Вывод результата

 
        std::cout << "Массив с наименьшим количеством элементов для возрастающей последовательности "<< '\n';

        std::cout << '\n';

        std::cout << "Произведение элементов между последним максимальным и последним минимальным элементами: " << '\n' << proizved;

        std::cout << '\n';

        std::cout << "Массив с четными номерами: " << '\n';
     for (int i = 1; i < n; i += 2)
     {
        std::cout << arr[i] << " ";   
     }

        std::cout << '\n';

    return 0;
}


