#include<iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

// 3. Создать производный класс Четырехчлен. Определить в классе наследнике:
// перегруженную функцию для изменения коэффициентов,
// функцию вычисления квадрата четырехчлена,
// функцию вычисления произведения двух четырехчленов,
// функцию вычисления суммы двух четырехчленов,
// функцию вычисления разности двух трехчленов.

template<class T>
class Fourth: public Main<double> {
    
    public:
    // конструктор с параметрами
        Fourth(int open_degree_n, T open_arr_degree_n[])
        {
            degree_n = open_degree_n;
            for (int i = 0; i <= degree_n; i++) arr_degree_n[i] = open_arr_degree_n[i];
        };
        
    
    // Раскрывает квадрат четырехчлена
    void kva(){
        cout << "Квадрат четырехчлена: ";
            Foo_im_ILA(pow(arr_degree_n[0], 2), "X6"); 
            Foo_im_ILA(2*arr_degree_n[0]*arr_degree_n[1], "X5");
            Foo_im_ILA(pow(arr_degree_n[1], 2), "X4");
            Foo_im_ILA(pow(arr_degree_n[2], 2),"X2");
            Foo_im_ILA(pow(arr_degree_n[3], 2),"X0");
            Foo_im_ILA(2*arr_degree_n[0]*arr_degree_n[2],"X4");
            Foo_im_ILA(2*arr_degree_n[1]*arr_degree_n[2],"X3");
            Foo_im_ILA(2*arr_degree_n[0]*arr_degree_n[3],"X3");
            Foo_im_ILA(2*arr_degree_n[1]*arr_degree_n[3], "X2");
            Foo_im_ILA(2*arr_degree_n[2]*arr_degree_n[3], "X1");
            cout << "\n";
    };
    
    
    // Выводит произведение двух четырехчленов
    void proizv(){
        cout << "Введите коэффициенты второго четырехчлена:\n";
        T vtdvu4[4];
        for (int i=0; i<4;i++){
            cin >> vtdvu4[i];
        }
        
        cout << "Произведение двух четырёхчленов: ";
        
        
        Foo_im_ILA(arr_degree_n[0]*vtdvu4[1],"X5"); 
        Foo_im_ILA(arr_degree_n[0]*vtdvu4[2],"X4");
        Foo_im_ILA(arr_degree_n[0]*vtdvu4[3],"X3");
        Foo_im_ILA(arr_degree_n[1]*vtdvu4[1],"X4");
        Foo_im_ILA(arr_degree_n[1]*vtdvu4[2],"X3");
        Foo_im_ILA(arr_degree_n[1]*vtdvu4[3],"X2");
        Foo_im_ILA(arr_degree_n[2]*vtdvu4[1],"X3");
        Foo_im_ILA(arr_degree_n[2]*vtdvu4[2],"X2");
        Foo_im_ILA(arr_degree_n[2]*vtdvu4[3],"X1");
        Foo_im_ILA(arr_degree_n[3]*vtdvu4[1],"X2");
        Foo_im_ILA(arr_degree_n[3]*vtdvu4[2],"X1");
        Foo_im_ILA(arr_degree_n[3]*vtdvu4[3],"X0");
        Foo_im_ILA(arr_degree_n[0],"X6");
        Foo_im_ILA(arr_degree_n[1],"X5");
        Foo_im_ILA(arr_degree_n[2],"X4");
        Foo_im_ILA(arr_degree_n[3],"X3");
        Foo_im_ILA(vtdvu4[0],"X0");
        cout << "\n";

    };
    
    
    // Выводит сумму четырехчленов
    
    void summa(){                      
        T vtdvu4[4];
        cout << "Введите коэффициенты второго четырехчлена:\n";
        for (int i=0; i<4;i++){
            cin >> vtdvu4[i];
        }
        cout << "Сумма четырехчленов: ";
        

            
            
        Foo_im_ILA(arr_degree_n[0],"X3"); 
        Foo_im_ILA(arr_degree_n[1],"X2");
        Foo_im_ILA(arr_degree_n[2],"X1");
        Foo_im_ILA(arr_degree_n[3],"X0");
        Foo_im_ILA(vtdvu4[0],"X3");
        Foo_im_ILA(vtdvu4[1],"X2");
        Foo_im_ILA(vtdvu4[2],"X1");
        Foo_im_ILA(vtdvu4[3],"X0");
        cout << "\n";
        

    };
    
    
    // Выводит разность четырехчленов
    void raznost(){
        T vtdvu4[4];
        cout << "Введите коэффициенты второго четырехчлена:\n";
        for (int i=0; i<4;i++){
            cin >> vtdvu4[i];
        }
        cout << "Разность четырехчленов: ";

        Foo_im_ILA(arr_degree_n[0],"X3"); 
        Foo_im_ILA(arr_degree_n[1],"X2");
        Foo_im_ILA(arr_degree_n[2],"X1");
        Foo_im_ILA(arr_degree_n[3],"X0");
        Foo_im_ILA(vtdvu4[0],"X3");
        Foo_im_ILA(vtdvu4[1],"X2");
        Foo_im_ILA(vtdvu4[2],"X1");
        Foo_im_ILA(vtdvu4[3],"X0");
        cout << "\n";
   
    };
    
    
    
    // Перегруженная функция для изменения коэффициентов
    void Change(T open_arr_degree_n[])
    {
        for (int i = 0; i <= degree_n; i++) arr_degree_n[i] = open_arr_degree_n[i];
    };
};

