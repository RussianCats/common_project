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
        if (arr_degree_n[1] >= 0 && arr_degree_n[0] >= 0 && arr_degree_n[2] >= 0 && arr_degree_n[3] >= 0){
            cout << pow(arr_degree_n[0], 2) <<"*X6 + " <<2*arr_degree_n[0]*arr_degree_n[1]<<"*X5 + "<< \
            pow(arr_degree_n[1], 2)<<"*X4 + "<<pow(arr_degree_n[2], 2)<<"*X2 + "<<pow(arr_degree_n[3], 2)<<" + "<< 2*arr_degree_n[0]*arr_degree_n[2] << "*X4 + " << \
            2*arr_degree_n[1]*arr_degree_n[2] << "*X3 + " << 2*arr_degree_n[0]*arr_degree_n[3] << "*X3 + " << 2*arr_degree_n[1]*arr_degree_n[3] << "*X2 + " << 2*arr_degree_n[2]*arr_degree_n[3] << "X" << endl;
        }
        else{
            cout <<"какой-то коэффициент меньше 0 ERROR \n";
        }
        
    };
    
    
    // Выводит произведение двух четырехчленов
    void proizv(){
        cout << "Введите коэффициенты второго четырехчлена:\n";
        double *vtdvu4 = new double[4];
        for (int i=0; i<4;i++){
            cin >> vtdvu4[i];
        }
        
        cout << "Произведение двух четырёхчленов: ";
        
        
        if (arr_degree_n[0]>=0 && arr_degree_n[1]>=0 && vtdvu4[0] >= 0 && vtdvu4[1] >= 0 && arr_degree_n[2]>=0 && arr_degree_n[3]>=0 && vtdvu4[2] >= 0 && vtdvu4[3] >= 0){
            //cout << arr_degree_n[0]*vtdvu4[0] << "*X2 + " << arr_degree_n[0]*vtdvu4[1]+arr_degree_n[1]*vtdvu4[0] << "*X1*X0 + " << arr_degree_n[1]*vtdvu4[1] << "*X0\n";
            cout<< arr_degree_n[0]*vtdvu4[1] << "*X5 + " << arr_degree_n[0]*vtdvu4[2] << "*X4 + " << \
            arr_degree_n[0]*vtdvu4[3] << "*X3 + " << arr_degree_n[1]*vtdvu4[1] << "*X4 + " << \
            arr_degree_n[1]*vtdvu4[2] << "*X3 + " << arr_degree_n[1]*vtdvu4[3] <<"*X2 + " << \
            arr_degree_n[2]*vtdvu4[1] << "*X3 + " << arr_degree_n[2]*vtdvu4[2] <<"*X2 + " << \
            arr_degree_n[2]*vtdvu4[3] << "*X + " << arr_degree_n[3]*vtdvu4[1] << "*X2 + " << \
            arr_degree_n[3]*vtdvu4[2] << "*X + " << arr_degree_n[3]*vtdvu4[3] << " + (" << \
            arr_degree_n[0] << "*X6 + " << arr_degree_n[1] << "*X5 + " << arr_degree_n[2] << "*X4 + " << arr_degree_n[3] << "*X3) * " << vtdvu4[0] << endl;
        }
        
        else{
            cout <<"какой-то коэффициент меньше 0 ERROR \n";
        }
        
        delete [] vtdvu4;
    };
    
    
    // Выводит сумму четырехчленов
    
    void summa(){                      
        T *vtdvu4 = new T[4];
        cout << "Введите коэффициенты второго четырехчлена:\n";
        for (int i=0; i<4;i++){
            cin >> vtdvu4[i];
        }
        cout << "Сумма четырехчленов: ";
        
        
        if (arr_degree_n[0]>=0 && arr_degree_n[1]>=0 && vtdvu4[0] >= 0 && vtdvu4[1] >= 0 && arr_degree_n[2]>=0 && arr_degree_n[3]>=0 && vtdvu4[2] >= 0 && vtdvu4[3] >= 0){
            cout << arr_degree_n[0] << "*X3 + " << arr_degree_n[1] << "*X2 + " << arr_degree_n[2] << "X + " << arr_degree_n[3] << " + " << vtdvu4[0] << "*X3 + " << \
            vtdvu4[1] << "*X2 + " << vtdvu4[2] << "*X + " << vtdvu4[3] << endl;
        }
        
        else{
            cout <<"какой-то коэффициент меньше 0 ERROR \n";
        }
        
        delete [] vtdvu4;
    };
    
    
    // Выводит разность четырехчленов
    void raznost(){
        double *vtdvu4 = new double[4];
        cout << "Введите коэффициенты второго четырехчлена:\n";
        for (int i=0; i<4;i++){
            cin >> vtdvu4[i];
        }
        cout << "Разность четырехчленов: ";
        if (arr_degree_n[0]>=0 && arr_degree_n[1]>=0 && vtdvu4[0] >= 0 && vtdvu4[1] >= 0 && arr_degree_n[2]>=0 && arr_degree_n[3]>=0 && vtdvu4[2] >= 0 && vtdvu4[3] >= 0){
            cout << arr_degree_n[0] << "*X3 + " << arr_degree_n[1] << "*X2 + " << arr_degree_n[2] << "X + " << arr_degree_n[3] << " - " << vtdvu4[0] << "*X3 - " << \
            vtdvu4[1] << "*X2 - " << vtdvu4[2] << "*X - " << vtdvu4[3] << endl;
        }
        
        else{
            cout <<"какой-то коэффициент меньше 0 ERROR \n";
        }
        
        delete [] vtdvu4;
    };
    
    
    
    // Перегруженная функция для изменения коэффициентов
    void Change(double open_arr_degree_n[])
    {
        for (int i = 0; i <= degree_n; i++) arr_degree_n[i] = open_arr_degree_n[i];
    };
};

