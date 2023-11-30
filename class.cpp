#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Task
{
public:
    float R;
    float y;
    string line;
    string a;
    int n, i, j, **x;

    double algoritm1(float R)
    {
if (R>=-8 && R<-5)// Проверка соответствия x данному промежутку
    y=0*R-3; // По введенному x просчитывается y
    else if  (R>=-5 && R<-3)
    y=1*R+3;
    else if  (R>=-3 && R<3)
    y=sqrt(9-pow(R, 2));
    else if (R>=3 && R<8)
    y=0.625*R-2;
    else if  (R>=8 && R<=10)
    y=0*R+3;
    if (R<-8 || R>10) // Выход за пределы промежутка
   cout <<"Rout of range";// Вывод ошибки
   else cout <<"Y = "<< y;// Вывод y по введеному значению x
    }
    void laba1()
    {
        algoritm1(R);

        cout << "При X = " << R << ", значение Y = " << y << endl; // Вывод значения Y, для заданного значения Х
    }

    void laba12()
    {
  for (R = -8; R <= 10; x++)
    {
        y = fact(R); // Нахождение y
        cout <<"R = "<< R ;
        cout << "\t Y ="
         << y << endl; // вывод каждого y
    }
    }

    void laba2(int n, float y)
    {
        int *a, max, n, s_max;

    cout<< "Vvedite razmernost' massiva: ";
     cin>> n;

    a = new int[n];

    for (int i = 0; i < n; i++)
    {
        a[i] = i+1;
        std::cout<< a[i]<< " ";
    }
    delete []a; // освобождаем память
    return 0;
    }

    void laba3()
    {
    int l;
int main()
{
    ifstream fin("file.txt");
    ofstream fout("file.txt");
    string b;
    float x, y;
    l = 0;
    for (int x = -8; x <= 10; x++)
    {
        l++;
        if (x >= -8 && x < -5) // Проверка соответствия x данному промежут
        {
            y = 0 * x - 3; // По введенному x просчитывается
        }
        else if (x >= -5 && x < -3)
        {
            y = 1 * x + 3;
        }
        else if (x >= -3 && x < 3)
        {
            y = sqrt(9 - pow(x, 2));
        }
        else if (x >= 3 && x < 8)
        {
            y = 0.625 * x - 2;
        }
        else if (x >= 8 && x <= 10)
        {
            y = 0 * x + 3;
        }

        fout << y << endl;
    }
    fout.close();

    float *data = new float[l];
    l = 0;
    while (getline(fin, b))
    {
        data[l] = stof(b);
        l++;
    }
    for (int i = 0; i < l; i++)
        cout << data[i] << "\n";
    fin.close();
}
    }
};

int main()
{
    setlocale(LC_ALL, "RU");
    setlocale(LC_ALL, ".UTF8");

    Task laba5;
    cout << "Введите X от -10 до 8"<< endl;
    cin >> laba5.R;

    laba5.laba1();
    laba5.laba12();
    cout << "\n Введите Кол-во строк\n";
    cin >> laba5.n;
    cout << "\n Введите Кол-во столбцов\n";
    cin >> laba5.y;
    laba5.laba2(laba5.n, laba5.y);
    laba5.laba3();
}