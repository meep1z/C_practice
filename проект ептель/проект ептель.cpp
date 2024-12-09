#include <iostream>  // Подключение библиотеки in-out stream.
#include <Windows.h> // Подключение библиотеки Win32.
using namespace std; // Подключение пространства имён std, нужно для работы cout без "std::".

int main() // Точка входа в программу.
{
    setlocale(LC_ALL, "rus"); // подключение кириллицы.
    // Объявление констант:
    // const int days_in_year = 366;
    // const int hours_in_day = 24;
    // int hours_in_year = 0; // То, что будем считать с помощью констант - сколько часов в году.
    // hours_in_year = days_in_year * hours_in_day;
    // cout << "Часов в году: \n" << hours_in_year << "\n";
     
    // Программа для подсчёта скидки:
    // float discount = 0.05; // Переменная для создания пяти-процентной скидки.
    // float price = 0; // Переменная стоимости товара.
    // cout << "\nВведите цену товара: "; // Ввод стоимости товара.
    // cin >> price;
    // int count = 0; // Переменная количества товара.
    // cout << "\nВведите количество товара: "; // Ввод количества товара.
    // cin >> count;
    // float final_price = 0; // Переменная стоимости с учётом скидки.
    // float final_discount = price * discount; // Переменная суммы скидки в денежном эквиваленте.
    // cout << "\nСтоимость со скидкой: \n" << (price - final_discount) * count << endl;
    // 
     
     
     
    // cout << "\nБьерн Страуструп\n"; // Вывод в консоль (console out).
    // cout << "Гавриленко Аристарх Остапович\n";
    // cout << "\nWhere \n\tis \n\t\tmy \n\t\t\tmind\n"; // \t - табуляция (4 пробела).
     
    // Синтаксис создания переменной;
    // Тип_данных имя_переменной = значение:
     
    // int number = 0; // объявление и инициализация переменной number с типом данных int - целочисленный;
    //                 // В зависимости от архитектуры процессора занимает в памяти 2 байта (16 бит) или 4 байта (32 бита);
    //                 // Диапазон значений - от -2147483648 до 2147483647.
     
    // char symbol = 'a'; // Тип данных char - символьный, может содержать один символ таблицы ASCII;
    //                    // Занимает в памяти 1 байт (8 бит).
     
    // float fnumber = 4.5; // Тип данных float - дробный, может содержать дробное число;
    //                      // Занимает в памяти 4 байта (32 бита).
     
    // double dnumber = 3.7235735427; // Тип данных double - двойной, представляет вещественное число двойной точности с плавающей точкой;
    //                                // В памяти занимает 8 байт (64 бита);
    //                                // Диапазон значений - от +/- 1.7E-308 до 1.7E+308.
     
    // short snumber = 32000; // Тип данных short - короткий, может содержать целое число;
    //                        // В памяти занимает 2 байта (16 бит).
     
    // long lnumber = -2000000; // Тип данных long - длинный, может содержать длинное целое число;
    //                          // В памяти занимает 4 байта (32 бит).
     
    // long long llnumber = -2000000000; // Тип данных long long - длинный длинный, может содержать более длинное целое число;
    //                                   // В памяти занимает 8 байт (64 бит).
     
    // bool logicVar = true; // Тип данных bool - логическое значение, может содержать только true или false;
    //                       // В памяти занимает 1 байт (8 бит).
     
    // cout << "\nЗначение типа данных bool: " << logicVar << endl;
     
    // cout << "\n Числа short, long и long long: " << "\n" << snumber << ";\n" << lnumber << ";\n" << llnumber << ";" << endl;
     
    // int num0 = 0; // Объявление переменной с инициализацией.
    // cout << "\nВведите число: ";
    // cin >> num0; // Ввод с клавиатуры (console in).
    // cout << "\nЗначение num0: " << num0 << endl;
     
    // Sleep(15000); // Задержка в 15 секунд (x1000, миллисекунды).
     
    // cout << "На горе стоит избушка,\n";
    // cout << "Красной глиной мазана...\n";
    // cout << "Там живет Баба - Яга,\n";
    // cout << "За ногу привязана";
     
    // cout << "\nКаждый \n\tохотник \n\t\tжелает \n\t\t\tзнать"
    //     << "\n\t\t\t\tгде \n\t\t\t\t\tсидит \n\t\t\t\t\t\tфазан.";
     
    // cout << "Продам щенков.\nПорода: Ротвейлер.\n...\nТел.:222-22-22\n\n"
    //      << "222\t| 222 |\n22\t| 22 |\n22\t| 22 |\n\nи т.д.\n\n\n\n\n";
    // cout << "\t \n\" Hello World! \"\n\/Bjarne Stroustrup\/\n ";
    // cout << "\t \n Hello World! \n\\\\Dennis Ritchi\\\\ \n\n";
    // cout << "To be or not to be: that is the question:\n"
    //      << "Wnether 'tis nobler in the mind to suffer\n"
    //      << "The slings and arrow of outrageous fortune,\n"
    //      << "Or to take arms against a sea of troubles,\n"
    //      << "And by opposing end them?\n"
    //      << "William Shakespeare";
     
    // cout << "Name\t\t:\t\"The war and the peace\"\n"
    //      << "Autor\t\t:\tL.N. Tolstoj\n";
    //      << "Publisher\t:\tPiter\n"
    //      << "Pages\t\t:\t\"500\"\n"
     
     
    // int inch = 1;
     
    // cout << "введите диагональ телевизора (в дюймах): ";
    // cin >> inch;
    // cout << "диагональ телевизора в сантиметрах: " << inch * 2.54 << " см." << "\n";
     
    // float feed_consumption;
    // cout << "введите расход корма в день: ";
    // cin >> feed_consumption;
    // cout << "расход за 30 дней: " << rashod_korma * 30 / 1000 << " кг." << "\n";
 
    // float height;
    // float width;
    // cout << "Введите ширину: ";
    // cin >> width;
    // cout << "Введите высоту: ";
    // cin >> height;
    // cout << "Размеры: " << "Ширина: " << width << ";" << " Высота: " << height << endl;
    // cout << "Периметр: " << 2 * (width + height) << endl;
    // cout << "Площадь: " << width * height << endl;
 
    // int map_scale;
    // float distance_between_points;
 
    // cout << "Введите масштаб карты: ";
    // cin >> map_scale;
    // cout << "Введите расстояние между точками (в см): ";
    // cin >> distance_between_points;
 
    // cout << "Масштаб карты (кол-во километров в сантиметре): " << map_scale << endl;
    // cout << "Расстояние между точками населённых пунктов (в см): " << distance_between_points << endl;
 
    // cout << "Расстояние между населенными пунктами: " << map_scale * distance_between_points << " км." << endl;


    srand(time(NULL));
    // работа с рандомом и команда Sleep():
    int value = rand();
    cout << "\nРандомное число: " << value;
    // rand() % (end - start + 1) + start; start = 16 end = 11:
    int value1 = rand() % (16 - 11 + 1) + 11;
    cout << "\nРандомное число в диапазоне 11-16: " << value1;

    int mas[5]{};
    for (int i = 0; i < 5; i++) {
        mas[i] = rand() % (100 - 1 + 1) + 1;
    }

    cout << "\nВывод массива: ";
    for (int i = 0; i < 5; i++) {
        cout << mas[i] << " "; // вывод элемента массива
    }

    cout << "\nВывод массива в обратном порядке: ";
    for (int i = 5 - 1; i >= 0; i--) {
        cout << mas[i] << " ";
    }

    cout << "\nВывод чётных элементов массива: ";
    for (int i = 0; i < 5; i++) {
        if (mas[i] % 2 == 0) {
            cout << mas[i] << " "; // вывод элемента массива
        }
    }


    Sleep(15000);
}
