#include<iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;


class Second: public Main<double> {
    
    public:
    // конструктор с параметрами
        Second(int open_degree_n, double open_arr_degree_n[])
        {
            degree_n = open_degree_n;
            for (int i = 0; i <= degree_n; i++) arr_degree_n[i] = open_arr_degree_n[i];
        };

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
            cout << "- " << abs(pow(arr_degree_n[0],3.0)) << "*X3 - " << abs(3*pow(arr_degree_n[0],2.0)*arr_degree_n[1]) << "*X2*X0 - " << abs(3*pow(arr_degree_n[1],2.0)*arr_degree_n[0]) << "*X1*X0 - " << abs(pow(arr_degree_n[1],3.0)) << "*X0\n";
        }
    };
    
    void proizv(){
        cout << "Введите коэффициенты второго двучлена:\n";
        double *vtdvu = new double[2];
        for (int i=0; i<2;i++){
            cin >> vtdvu[i];
        }
        
        cout << "Произведение двух двучленов: ";
        
        if (arr_degree_n[0]>=0 && arr_degree_n[1]>=0 && vtdvu[0] >= 0 && vtdvu[1] >= 0){
            cout << arr_degree_n[0]*vtdvu[0] << "*X2 + " << arr_degree_n[0]*vtdvu[1]+arr_degree_n[1]*vtdvu[0] << "*X1*X0 + " << arr_degree_n[1]*vtdvu[1] << "*X0\n";
        }
        if (arr_degree_n[0]>=0 && arr_degree_n[1] < 0 && vtdvu[0] >= 0 && vtdvu[1] >= 0){
            cout << arr_degree_n[0]*vtdvu[0] << "*X2 + " << arr_degree_n[0]*vtdvu[1]+arr_degree_n[1]*vtdvu[0] << "*X1*X0 - " << abs(arr_degree_n[1]*vtdvu[1]) << "*X0\n";
        }
        if (arr_degree_n[0]>=0 && arr_degree_n[1] < 0 && vtdvu[0] >= 0 && vtdvu[1] < 0){
            cout << arr_degree_n[0]*vtdvu[0] << "*X2 - " << abs(arr_degree_n[0]*vtdvu[1]+arr_degree_n[1]*vtdvu[0]) << "*X1*X0 + " << abs(arr_degree_n[1]*vtdvu[1]) << "*X0\n";
        }
        if (arr_degree_n[0]>=0 && arr_degree_n[1] >= 0 && vtdvu[0] >= 0 && vtdvu[1] < 0){
            cout << arr_degree_n[0]*vtdvu[0] << "*X2 + " << arr_degree_n[0]*vtdvu[1]+arr_degree_n[1]*vtdvu[0] << "*X1*X0 - " << abs(arr_degree_n[1]*vtdvu[1]) << "*X0\n";
        }
        if (arr_degree_n[0]<0 && arr_degree_n[1] >= 0 && vtdvu[0] < 0 && vtdvu[1] >= 0){
            cout << arr_degree_n[0]*vtdvu[0] << "*X2 - " << abs(arr_degree_n[0]*vtdvu[1]+arr_degree_n[1]*vtdvu[0]) << "*X1*X0 + " << abs(arr_degree_n[1]*vtdvu[1]) << "*X0\n";
        }
        if (arr_degree_n[0]<0 && arr_degree_n[1] >= 0 && vtdvu[0] >= 0 && vtdvu[1] >= 0){
            cout << "-" << abs(arr_degree_n[0]*vtdvu[0]) << "*X2 + " << abs(arr_degree_n[0]*vtdvu[1]+arr_degree_n[1]*vtdvu[0]) << "*X1*X0 + " << abs(arr_degree_n[1]*vtdvu[1]) << "*X0\n";
        }
        if (arr_degree_n[0]>=0 && arr_degree_n[1] >= 0 && vtdvu[0] < 0 && vtdvu[1] >= 0){
            cout << "-" << abs(arr_degree_n[0]*vtdvu[0]) << "*X2 + " << abs(arr_degree_n[0]*vtdvu[1]+arr_degree_n[1]*vtdvu[0]) << "*X1*X0 + " << abs(arr_degree_n[1]*vtdvu[1]) << "*X0\n";
        }
        if (arr_degree_n[0] < 0 && arr_degree_n[1] < 0 && vtdvu[0] < 0 && vtdvu[1] < 0){
            cout << abs(arr_degree_n[0]*vtdvu[0]) << "*X2 + " << abs(arr_degree_n[0]*vtdvu[1]+arr_degree_n[1]*vtdvu[0]) << "*X1*X0 + " << abs(arr_degree_n[1]*vtdvu[1]) << "*X0\n";
        }
        delete [] vtdvu;
    };
    
    void summa(){
        double *vtdvu = new double[2];
        cout << "Введите коэффициенты второго двучлена:\n";
        for (int i=0; i<2;i++){
            cin >> vtdvu[i];
        }
        cout << "Сумма двучленов: ";
        if ((arr_degree_n[0] + vtdvu[0])>=0 && (arr_degree_n[1] + vtdvu[1])>=0){
            cout << abs(arr_degree_n[0]+vtdvu[0]) << "*X1 + " << abs(arr_degree_n[1]+vtdvu[1]) << "*X0\n";
        }
        if ((arr_degree_n[0] + vtdvu[0])<0 && (arr_degree_n[1] + vtdvu[1])>=0){
            cout << "-" << abs(arr_degree_n[0]+vtdvu[0]) << "*X1 + " << abs(arr_degree_n[1]+vtdvu[1]) << "*X0\n";
        }
        if ((arr_degree_n[0] + vtdvu[0])<0 && (arr_degree_n[1] + vtdvu[1])<0){
            cout << "-" << abs(arr_degree_n[0]+vtdvu[0]) << "*X1 - " << abs(arr_degree_n[1]+vtdvu[1]) << "*X0\n";
        }
        if ((arr_degree_n[0] + vtdvu[0])>=0 && (arr_degree_n[1] + vtdvu[1])<0){
            cout << abs(arr_degree_n[0]+vtdvu[0]) << "*X1 - " << abs(arr_degree_n[1]+vtdvu[1]) << "*X0\n";
        }
        delete [] vtdvu;
    };
    
    void raznost(){
        double *vtdvu = new double[2];
        cout << "Введите коэффициенты второго двучлена:\n";
        for (int i=0; i<2;i++){
            cin >> vtdvu[i];
        }
        cout << "Разность двучленов: ";
        if ((arr_degree_n[0] - vtdvu[0])>=0 && (arr_degree_n[1] - vtdvu[1])>=0){
            cout << abs(arr_degree_n[0]-vtdvu[0]) << "*X1 + " << abs(arr_degree_n[1]-vtdvu[1]) << "*X0\n";
        }
        if ((arr_degree_n[0] - vtdvu[0])<0 && (arr_degree_n[1] - vtdvu[1])>=0){
            cout << "-" << abs(arr_degree_n[0]-vtdvu[0]) << "*X1 + " << abs(arr_degree_n[1]-vtdvu[1]) << "*X0\n";
        }
        if ((arr_degree_n[0] - vtdvu[0])<0 && (arr_degree_n[1] - vtdvu[1])<0){
            cout << "-" << abs(arr_degree_n[0]-vtdvu[0]) << "*X1 - " << abs(arr_degree_n[1]-vtdvu[1]) << "*X0\n";
        }
        if ((arr_degree_n[0] - vtdvu[0])>=0 && (arr_degree_n[1] - vtdvu[1])<0){
            cout << abs(arr_degree_n[0]-vtdvu[0]) << "*X1 - " << abs(arr_degree_n[1]-vtdvu[1]) << "*X0\n";
        }
        delete [] vtdvu;
    };
    
    void korni(){
        cout << "Корень уравнения ";
        cout << "X = " << ((-1)*arr_degree_n[1])/(arr_degree_n[0]) << "\n";
    };
    
    void Change(double open_arr_degree_n[])
    {
        for (int i = 0; i <= degree_n; i++) arr_degree_n[i] = open_arr_degree_n[i];
    };
};

