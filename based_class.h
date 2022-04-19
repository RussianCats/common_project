#include<iostream>
#include<string>
#include<cmath>
using namespace std;


class Main
{
protected:
    int degree_n; //степень многочлена n
    double *arr_degree_n = new double [degree_n + 1]; //все коэффициенты многочлена n-ой степени
    


public:
    // конструктор по умолчанию
    Main()
    {
        degree_n = 0;
    };

    // конструктор с параметрами
    Main(int open_degree_n, double open_arr_degree_n[])
    {
        degree_n = open_degree_n;
        for (int i = 0; i <= degree_n; i++) arr_degree_n[i] = open_arr_degree_n[i];
    };
    
    //задать значение
    virtual void Set(int number_x, double x);
    
    //получить значение
    virtual int Get(int number_x);

    //функция покажет многочлен
    virtual void Show();
    
    //функция для изменения коэффициентов
    virtual void Change(double arr_degree_n[]);

    //вычислениe значения многочлена для заданного числа
    virtual void Calculate_x(int number_x);

    //деструктор
    ~Main()
    {
        delete [] arr_degree_n;
    }
    
};

