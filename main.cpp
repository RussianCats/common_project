#include"based_class.h"

// функция взаимодействия пользователя для базового класса
void Foo_first(Main<double> *p);

void Foo_second(Main<double> *p);

void Foo_third(Main<double> *p);

void Foo_fourth(Main<double> *p);


int main()
{
    //создаем указатель основного класса его нужно интегрировать во все функции на 4 6 8 10 строчки
    Main<double> *p;
    // работа с пользователем 
    int fl;
    

    while (fl > 0)
    {
        cout << "0 -- выход\n1 -- многочлен\n2 -- двухчлен\n3 -- трехчлен\n4 -- четырехчлен\n";
        cin >> fl;
        switch (fl)
        {
        case 0:
            break;

        case 1:
            Foo_first(p);
            continue;

        case 2:
            Foo_second(p);
            continue;

        case 3:
            Foo_third(p);
            continue;

        case 4:
            Foo_fourth(p);
            continue;

        default:
            cout << "Error\n";
            
        }
    }
    
    
    
};


void Foo_first(Main<double> *p)
{
    string str; //строка для ввода действия
    int n; //степень многочлена
    

    // интерфейс программы
    cout <<"ПРОГРАММА РАБОТЫ С МНОГОЧЛЕНОМ n-ОЙ СТЕПЕНИ\n";
    
    //проверка на отрицательную степень
    do
    {
        cout << "Введите степень многочлена:";
        cin >> n;
        if (n < 0) cout << "Вы ввели отрицательную степень. Повтирите снова.";
    } while (n < 0);
    
    //заполнение массива 
    double* arr_n = new double[n + 1]; // коэффициенты многочлена
    cout << "Теперь вводим коэффициенты через пробел:\n";
    for (int i = 0; i <= n; i++) cin >> arr_n[i]; // вводит коэффициенты с терминала

    //создание класса через указатель на основной класс, вызывать класс нужно через указатель p
    Main<double> mnogochlen(n, arr_n);
    p = &mnogochlen;
    cout << "Создание многочлена завершено\n"; 

    //скелет программы, здесь работа с пользователем
    cout << ":exit -- выход\n:show -- показать многочлен\n:set -- задать значение\n:get -- получить значение\n:change -- изменить все значения многочлена\n:cal -- подсчитать по x\n\n";
    while (true)
    {
        cin >> str;

        //выход с программы
        if(str == ":exit") break;

        //показать многочлен
        if(str == ":show")
        {
            p->Show();
            cout << "--------------------------------------------------\n";
        }
        
        //задать значение Set
        if(str == ":set")
        {
            int num;
            double x;

            //проверка на правильный n
            do
            {
                cout << "номер коэффициента и значение на которе хотите заменить(через пробел):";
                cin >> num >> x;
                if (num > n) cout <<"Error\n";
            } while (num > n);
            
            
            p->Set(num, x);
            cout << "--------------------------------------------------\n";
        }
        
        //получить значение Get
        if(str == ":get")  
        {
            int num;

            //проверка на правильный n
            do
            {
                cout << "номер коэффициента который хотите посмотреть:";
                cin >> num;
                if (num > n) cout <<"Error\n";
            } while (num > n);
            

            cout << p->Get(num) << "\n"; 
            cout << "--------------------------------------------------\n";
        }

        //изменить значения
        if(str == ":change")  
        {

            cout << "Теперь вводим новые коэффициенты через пробел:\n";
            for (int i = 0; i <= n; i++) cin >> arr_n[i];
            p->Change(arr_n);
            cout << "--------------------------------------------------\n";
        }

        //подсчитать по x
        if(str == ":cal")  
        {
            cout << "число x:";
            double num;
            cin >> num;
            p->Calculate_x(num);
            cout << "--------------------------------------------------\n";
        }

    }


    //удаление массива
    delete [] arr_n;
};



void Foo_second(Main<double> *p)
{
    
};

void Foo_third(Main<double> *p)
{
    
};

void Foo_fourth(Main<double> *p)
{
    
};