#include<iostream>
#include<string>
#include<cmath>
#include<vector>

using namespace std;

//Создать производный класс Трехчлен. Определить в классе наследнике:
//перегруженную функцию для изменения коэффициентов,
//функцию вычисления квадрата трехчлена,
//функцию вычисления произведения двух трехчленов,
//функцию вычисления суммы двух трехчленов,
//функцию вычисления разности двух трехчленов.

template<class T>
class Third: public Main<double> {
    
    public:
    // конструктор с параметрами
        Third(int open_degree_n, T open_arr_degree_n[])
        {
            degree_n = open_degree_n;
            for (int i = 0; i <= degree_n; i++) arr_degree_n[i] = open_arr_degree_n[i];
        };
          void kva(){                           
       cout<<pow(arr_degree_n[0],2)<<"*X4+ "<<pow(arr_degree_n[1],2)<<"*X2+ "<<pow(arr_degree_n[2],2)<<"*X0+ "<<2*(arr_degree_n[0]*arr_degree_n[1])<<\
        "*X3+ "<<2*(arr_degree_n[0]*arr_degree_n[2])<<"X2+ "<<2*(arr_degree_n[1]*arr_degree_n[2])<<"*X1\n";
    };
    
    // Выводит произведение двух двучленов
    void proizv(){
      cout << "Введите коэффициенты второго трехчлена:\n";
      
        T *vtdvu = new T[3];
        for (int i=0; i<3;i++){
            cin >> vtdvu[i];
        }
        
        cout << "Произведение двух трехчленов: ";
        Foo_im_ILA(arr_degree_n[0]*vtdvu[0], "X4"); 
        Foo_im_ILA(arr_degree_n[0]*vtdvu[1], "X3");
        Foo_im_ILA(arr_degree_n[0]*vtdvu[2], "X2");
        Foo_im_ILA(arr_degree_n[1]*vtdvu[0],"X3");
        Foo_im_ILA(arr_degree_n[1]*vtdvu[1],"X2");
        Foo_im_ILA(arr_degree_n[1]*vtdvu[2],"X1");
        Foo_im_ILA(arr_degree_n[2]*vtdvu[0],"X2");
        Foo_im_ILA(arr_degree_n[2]*vtdvu[1],"X1");
        cout << "\n";
        
        delete [] vtdvu;
    };
    
    
    // Выводит сумму двучленов
    void summa(){                      
        T *vtdvu = new T[3];
        cout << "Введите коэффициенты второго трехчлена:\n";
        for (int i=0; i<3;i++)
        {
            cin >> vtdvu[i];
        }
        cout << "Сумма трехчленов: ";
    
        Foo_im_ILA(arr_degree_n[0]+vtdvu[0], "X2");
        Foo_im_ILA(arr_degree_n[1]+vtdvu[1], "X1");
        Foo_im_ILA(arr_degree_n[2]+vtdvu[2], "X0");
        cout << "\n";
        delete [] vtdvu;
    };
    
    
    // Выводит разность двучленов
    void raznost(){
        T *vtdvu = new T[3];
        cout << "Введите коэффициенты второго трехчлена:\n";
        for (int i=0; i<3;i++){
            cin >> vtdvu[i];
        }
        cout << "Разность трехчленов: ";
       
        Foo_im_ILA(arr_degree_n[0]-vtdvu[0], "X2");
        Foo_im_ILA(arr_degree_n[1]-vtdvu[1], "X1");
        Foo_im_ILA(arr_degree_n[2]-vtdvu[2], "X0");
        cout << "\n";
        delete [] vtdvu;

    };
    
    
   
    // Перегруженная функция для изменения коэффициентов
    void Change(T open_arr_degree_n[])
    {
        for (int i = 0; i <= degree_n; i++) arr_degree_n[i] = open_arr_degree_n[i];
    };
};