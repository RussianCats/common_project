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
        //(a+b)^3=a^3+3*a^2*b+3*a*b^2+b^3
        //(a-b)^3=a^3-3*a^2*b+3*a*b^2-b^3
        
        if (arr_degree_n[2] >= 0 && arr_degree_n[1] >= 0 && arr_degree_n[0])
        cout<<pow(arr_degree_n[0],4)<<"*X4+ "<<pow(arr_degree_n[1],2)<<"*X2+ "<<pow(arr_degree_n[2],1)<<"*X0+ "<<pow(arr_degree_n[0]*arr_degree_n[1],3)<<\
        "*X3+ "<<pow(arr_degree_n[0]*arr_degree_n[2],2)<<"X2+ "<<pow(arr_degree_n[1]*arr_degree_n[2],1)<<"*X0\n";
        else
        {
            cout<<"Ошибка ввода";
        }
        
    };
    
    
    // Выводит произведение двух двучленов
    void proizv(){
        cout << "Введите коэффициенты второго двучлена:\n";
        double *vtdvu = new double[3];
        for (int i=0; i<3;i++){
            cin >> vtdvu[i];
        }
        
        cout << "Произведение двух трехчленов: ";
        if (arr_degree_n[0]>=0 && arr_degree_n[1]>=0&&arr_degree_n[2]>=0 && vtdvu[0] >= 0 && vtdvu[1] >= 0&&vtdvu[2]>=0)
        cout<<arr_degree_n[0]*vtdvu[0]<<"*X4+ "<<arr_degree_n[0]*vtdvu[1]<<"X3+ "<<arr_degree_n[0]*vtdvu[2]<<"X2+ "<<arr_degree_n[1]*vtdvu[0]<<"X3+ "<<arr_degree_n[1]*vtdvu[1]<<\
        "X2+ "<<arr_degree_n[1]*vtdvu[2]<<"*X1+ "<<arr_degree_n[2]*vtdvu[0]<<"X2+ "<<arr_degree_n[2]*vtdvu[1]<<"X1+ "<<arr_degree_n[2]*vtdvu[2]<<"X0+\n  ";
        else cout<<"Ошибка ввода\n";
        delete [] vtdvu;
    };
    
    
    // Выводит сумму двучленов
    void summa(){                      
        double *vtdvu = new double[3];
        cout << "Введите коэффициенты второго трехчлена:\n";
        for (int i=0; i<3;i++)
        {
            cin >> vtdvu[i];
        }
        cout << "Сумма трехчленов: ";
        if ((arr_degree_n[0] >=0) && (arr_degree_n[1] >=0) && (arr_degree_n[2] >=0) && (vtdvu[0] >= 0) && (vtdvu[1] >= 0) && (vtdvu[2] >= 0))
        cout << abs(arr_degree_n[0]+vtdvu[0]) << "*X2 + " << abs(arr_degree_n[1]+vtdvu[1])<<"X1 + "<<abs(arr_degree_n[2]+vtdvu[2]) << "*X0\n";
        /*
        if ((arr_degree_n[0] + vtdvu[0]) <0) && ((arr_degree_n[1] + vtdvu[1]) >= 0)&&((arr_degree_n[2] + vtdvu[2]) >= 0 ))
        cout <<"-"<<(arr_degree_n[0]+vtdvu[0]) << "*X2 + " << abs(arr_degree_n[1]+vtdvu[1])<<"X1 + "<<abs(arr_degree_n[2]+vtdvu[2]) << "*X0\n";
        if ((arr_degree_n[0] + vtdvu[0]) <0) && ((arr_degree_n[1] + vtdvu[1]) < 0))&&((arr_degree_n[2] + vtdvu[2])>= 0))
        cout <<"-"<<(arr_degree_n[0]+vtdvu[0]) << "*X2 - " << abs(arr_degree_n[1]+vtdvu[1])<<"X1 + "<<abs(arr_degree_n[2]+vtdvu[2]) << "*X0\n";
        if (arr_degree_n[0] + vtdvu[0]) <0 && (arr_degree_n[1] + vtdvu[1]) < 0)&&(arr_degree_n[2] + vtdvu[2]) < 0)
        cout <<"-"<<(arr_degree_n[0]+vtdvu[0]) << "*X2 - " << abs(arr_degree_n[1]+vtdvu[1])<<"X1 - "<<abs(arr_degree_n[2]+vtdvu[2]) << "*X0\n";
        if (arr_degree_n[0] + vtdvu[0]) >= 0 && (arr_degree_n[1] + vtdvu[1]) >= 0)&&(arr_degree_n[2] + vtdvu[2]) < 0)
        cout <<(arr_degree_n[0]+vtdvu[0]) << "*X2 + " << abs(arr_degree_n[1]+vtdvu[1])<<"X1 - "<<abs(arr_degree_n[2]+vtdvu[2]) << "*X0\n";
        if (arr_degree_n[0] + vtdvu[0]) >= 0 && (arr_degree_n[1] + vtdvu[1]) < 0)&&(arr_degree_n[2] + vtdvu[2]) < 0)
        cout <<(arr_degree_n[0]+vtdvu[0]) << "*X2 - " << abs(arr_degree_n[1]+vtdvu[1])<<"X1 + "<<abs(arr_degree_n[2]+vtdvu[2]) << "*X0\n";
        if (arr_degree_n[0] + vtdvu[0]) >= 0 && (arr_degree_n[1] + vtdvu[1]) < 0)&&(arr_degree_n[2] + vtdvu[2]) >= 0)
        cout <<(arr_degree_n[0]+vtdvu[0]) << "*X2 - " << abs(arr_degree_n[1]+vtdvu[1])<<"X1 + "<<abs(arr_degree_n[2]+vtdvu[2]) << "*X0\n";
        if (arr_degree_n[0] + vtdvu[0]) <0 && (arr_degree_n[1] + vtdvu[1]) >= 0)&&(arr_degree_n[2] + vtdvu[2]) < 0)
        cout <<"-"<<(arr_degree_n[0]+vtdvu[0]) << "*X2 + " << abs(arr_degree_n[1]+vtdvu[1])<<"X1 - "<<abs(arr_degree_n[2]+vtdvu[2]) << "*X0\n";
 */
        
        delete [] vtdvu;
    };
    
    
    // Выводит разность двучленов
    void raznost(){
        double *vtdvu = new double[3];
        cout << "Введите коэффициенты второго двучлена:\n";
        for (int i=0; i<3;i++){
            cin >> vtdvu[i];
        }
        cout << "Разность трехчленов: ";
        if ((arr_degree_n[0] - vtdvu[0])>=0 && (arr_degree_n[1] - vtdvu[1])>=0&&(arr_degree_n[2]-vtdvu[2]>=0)){
            cout << abs(arr_degree_n[0]-vtdvu[0]) << "*X2 + "<<abs(arr_degree_n[1]-vtdvu[1])<<"*X1 +" << abs(arr_degree_n[1]-vtdvu[1]) << "*X0\n";
        }
       
        delete [] vtdvu;
    };
    
    
   
    
    // Перегруженная функция для изменения коэффициентов
    void Change(double open_arr_degree_n[])
    {
        for (int i = 0; i <= degree_n; i++) arr_degree_n[i] = open_arr_degree_n[i];
    };
};

