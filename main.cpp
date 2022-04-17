#include"based_class.h"

// функция взаимодействия пользователя для базового класса
void Foo_first();

void Foo_second();

void Foo_third();

void Foo_fourth();


int main()
{
    int fl;
    cout << "1 -- многочлен\n2 -- двухчлен\n3 -- трехчлен\n4 -- четырехчлен\n";
    cin >> fl;
    switch (fl)
    {
    case 1:
        Foo_first();
        break;
    
    case 2:
        Foo_second();
        break;
    
    case 3:
        Foo_third();
        break;
    
    case 4:
        Foo_fourth();
        break;
    
    default:
        cout << "Error\n";
        break;
    }
    
    

    Foo_first();
    
    
}


void Foo_first()
{
string str; //строка для ввода действия
    int n; //степень многочлена
    

    // интерфейс программы
    cout <<"ПРОГРАММА РАБОТЫ С МНОГОЧЛЕНОМ\n";

    cout << "Введите степень многочлена:";
    cin >> n;
    double* arr_n = new double[n + 1]; // коэффициенты многочлена
    cout << "Теперь вводим коэффициенты через пробел:\n";
    for (int i = 0; i <= n; i++) cin >> arr_n[i];
    //создание класса 
    Main mnogochlen(n, arr_n);
    cout << "Создание многочлена завершено\n"; 

    cout << ":exit -- выход\n:show -- показать многочлен\n:set -- задать значение\n:get -- получить значение\n:change -- изменить все значения многочлена\n:cal -- подсчитать по x\n\n";

    //скелет программы, здесь работа с пользователем
    while (true)
    {
        cin >> str;

        //выход с программы
        if(str == ":exit") break;

        //показать многочлен
        if(str == ":show")
        {
            mnogochlen.Show();
            cout << "--------------------------------------------------\n";
        }
        
        //задать значение Set
        if(str == ":set")
        {
            cout << "номер коэффициента и значение на которе хотите заменить(через пробел):";
            int num;
            double x;
            cin >> num >> x;
            mnogochlen.Set(num, x);
            cout << "--------------------------------------------------\n";
        }
        
        //получить значение Get
        if(str == ":get")  
        {
            cout << "номер коэффициента который хотите посмотреть:";
            int num;
            cin >> num;
            cout << mnogochlen.Get(num) << "\n"; 
            cout << "--------------------------------------------------\n";
        }

        //изменить значения
        if(str == ":change")  
        {
            cout << "Теперь вводим новые коэффициенты через пробел:\n";
            for (int i = 0; i <= n; i++) cin >> arr_n[i];
            mnogochlen.Change(arr_n);
            cout << "--------------------------------------------------\n";
        }

        //подсчитать по x
        if(str == ":cal")  
        {
            cout << "число x:";
            double num;
            cin >> num;
            mnogochlen.Calculate_x(num);
            cout << "--------------------------------------------------\n";
        }

    }


    //удаление массива
    delete [] arr_n;
}



void Foo_second()
{
    
};

void Foo_third()
{
    
};

void Foo_fourth()
{
    
};