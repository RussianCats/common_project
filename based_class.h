#include<iostream>
#include<string>
#include<cmath>
using namespace std;

template<class T>
class Main
{
protected:
    int degree_n; //степень многочлена n
    T *arr_degree_n = new T [degree_n + 1]; //все коэффициенты многочлена n-ой степени
    


public:
    // конструктор по умолчанию
    Main()
    {
        degree_n = 0;
    };

    // конструктор с параметрами
    Main(int open_degree_n, T open_arr_degree_n[])
    {
        degree_n = open_degree_n;
        for (int i = 0; i <= degree_n; i++) arr_degree_n[i] = open_arr_degree_n[i];
    };
    
    //задать значение
    virtual void Set(int number_x, double x)
    {
        arr_degree_n[number_x] = x;
    };
    
    //получить значение
    virtual T Get(int number_x)
    {
        return arr_degree_n[number_x];
    };

    //функция покажет многочлен
    virtual void Show()
    {
        int tmp = degree_n;
        cout << "\nмногочлен: ";
        for (int i = 0; i <= degree_n; i++)
        {
            if(!i)
            {
                cout << " " << arr_degree_n[i] << "*X" << tmp;
                tmp--;
                continue;
            } 
            if(arr_degree_n[i] > 0) cout << " + " << arr_degree_n[i] << "*X" << tmp;
            else cout << " - " << abs(arr_degree_n[i]) << "*X" << tmp;
            
            tmp--;
        }
        cout << "\n";
    };
    
    //функция для изменения коэффициентов
    virtual void Change(T open_arr_degree_n[])
    {
        for (int i = 0; i <= degree_n; i++) arr_degree_n[i] = open_arr_degree_n[i];
    };

    //вычислениe значения многочлена для заданного числа
    virtual void Calculate_x(int number_x)
    {
        double end_x = 0;
        int tmp = degree_n;
        for (int i = 0; i <= degree_n; i++)
        {
            end_x += arr_degree_n[i] * pow(number_x, tmp);
            tmp--;
        }
        cout << "многочлен равен = " << end_x << "\n";
        
    }
    //деструктор
    ~Main()
    {
        delete [] arr_degree_n;
    }
    
};

