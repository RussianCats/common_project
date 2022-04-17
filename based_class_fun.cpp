#include"based_class.h"

// number_x - номер коэффициента, который нужно изменить x - само число 
void Main::Set(int number_x, double x)
{
    arr_degree_n[number_x] = x;
};

int Main::Get(int number_x)
{
    return arr_degree_n[number_x];
};

void Main::Show()
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


void Main::Change(double open_arr_degree_n[])
{
    for (int i = 0; i <= degree_n; i++) arr_degree_n[i] = open_arr_degree_n[i];
};

void Main::Calculate_x(int number_x)
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
