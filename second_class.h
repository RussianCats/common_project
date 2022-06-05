#include<iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

// 3. Создать производный класс Двучлен. Определить в классе наследнике:
// перегруженную функцию для изменения коэффициентов,
// функцию вычисления куба двучлена,
// функцию вычисления произведения двух двучленов,
// функцию вычисления суммы двух двучленов
// функцию вычисления разности двух двучленов
// нахождение корней двучлена.

template<class T>
class Second: public Main<double> {
    public:
    // конструктор с параметрами
        Second(int open_degree_n, T open_arr_degree_n[])
        {
            degree_n = open_degree_n;
            for (int i = 0; i <= degree_n; i++) arr_degree_n[i] = open_arr_degree_n[i];
        };
        
        
    // Раскрывает куб двучлена
    void kub(){                           
        //(a+b)^3=a^3+3*a^2*b+3*a*b^2+b^3
        //(a-b)^3=a^3-3*a^2*b+3*a*b^2-b^3
        
        if (arr_degree_n[1] >= 0 && arr_degree_n[0] >= 0){
            cout << pow(arr_degree_n[0],3.0) << "*X3 + " << 3*pow(arr_degree_n[0],2.0)*arr_degree_n[1] << "*X2*X0 + " << 3*pow(arr_degree_n[1],2.0)*arr_degree_n[0] << "*X1*X0 + " << pow(arr_degree_n[1],3.0) << "*X0\n";
        }
        if (arr_degree_n[1] < 0 && arr_degree_n[0] >= 0){
            cout << pow(arr_degree_n[0],3.0) << "*X3 - " << 3*pow(arr_degree_n[0],2.0)*abs(arr_degree_n[1]) << "*X2*X0 + " << 3*pow(arr_degree_n[1],2.0)*arr_degree_n[0] << "*X1*X0 - " << pow(abs(arr_degree_n[1]),3.0) << "*X0\n";
        }
        if (arr_degree_n[0] < 0 && arr_degree_n[1] >= 0){
            cout << pow(arr_degree_n[1],3.0) << "*X0 - " << 3*pow(arr_degree_n[1],2.0)*abs(arr_degree_n[0]) << "*X0*X1 + " << 3*pow(arr_degree_n[0],2.0)*arr_degree_n[1] << "*X0*X2 - " << pow(abs(arr_degree_n[0]),3.0) << "*X3\n";
        }
        if (arr_degree_n[0] < 0 && arr_degree_n[1] < 0){
            cout << "-" << abs(pow(arr_degree_n[0],3.0)) << "*X3 - " << abs(3*pow(arr_degree_n[0],2.0)*arr_degree_n[1]) << "*X2*X0 - " << abs(3*pow(arr_degree_n[1],2.0)*arr_degree_n[0]) << "*X1*X0 - " << abs(pow(arr_degree_n[1],3.0)) << "*X0\n";
        }
    };
    
    
    // Выводит произведение двух двучленов
    void proizv(){
        cout << "Введите коэффициенты второго двучлена:\n";
        T *vtdvu = new T[2];
        for (int i=0; i<2;i++){
            cin >> vtdvu[i];
        }
        
        cout << "Произведение двух двучленов: ";
        
        Foo_im_ILA(arr_degree_n[0]*vtdvu[0], "X2");
        Foo_im_ILA(arr_degree_n[0]*vtdvu[1]+arr_degree_n[1]*vtdvu[0], "X1*X0");
        Foo_im_ILA(arr_degree_n[1]*vtdvu[1],"X0");
        cout << "\n";
        
        delete [] vtdvu;
    };
    
    
    // Выводит сумму двучленов
    void summa(){                      
        T *vtdvu = new T[2];
        cout << "Введите коэффициенты второго двучлена:\n";
        for (int i=0; i<2;i++){
            cin >> vtdvu[i];
        }
        cout << "Сумма двучленов: ";
        
        Foo_im_ILA(arr_degree_n[0]+vtdvu[0],"X1");
        Foo_im_ILA(arr_degree_n[1]+vtdvu[1],"X0");
        cout << "\n";
        
        delete [] vtdvu;
    };
    
    
    // Выводит разность двучленов
    void raznost(){
        T *vtdvu = new T[2];
        cout << "Введите коэффициенты второго двучлена:\n";
        for (int i=0; i<2;i++){
            cin >> vtdvu[i];
        }
        cout << "Разность двучленов: ";
        
        Foo_im_ILA(arr_degree_n[0]-vtdvu[0], "X1");
        Foo_im_ILA(arr_degree_n[1]-vtdvu[1], "X0");
        cout << "\n";
    
        delete [] vtdvu;
    };
    
    
    // Функция нахождения корней двучлена 
    void korni(){
        cout << "Корень уравнения ";
        cout << "X = " << ((-1)*arr_degree_n[1])/(arr_degree_n[0]) << "\n";
    };
    
    
    // Перегруженная функция для изменения коэффициентов
    void Change(T open_arr_degree_n[])
    {
        for (int i = 0; i <= degree_n; i++) arr_degree_n[i] = open_arr_degree_n[i];
    };
};
