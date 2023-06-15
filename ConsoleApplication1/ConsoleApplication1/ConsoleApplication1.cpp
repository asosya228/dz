#include <iostream> 
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    float bankcheloveka = 100, bankbota = 100, koaf = 0.9, zachisleno;
    int stavka, chislocheloveka, raznicacheloveka, raznicabota, a = 1, b = 1;

    while (bankbota > 0 and bankcheloveka > 0) {

        int chislobota = rand() % 101, zagadannoechislo = rand() % 101;

        cout << "ваш баланс: " << bankcheloveka << endl << "баланс бота: " << bankbota << endl;   //баланс банков      
        cout << "введите ставку: ";
        cin >> stavka;//ставка 
        cout << "введите число от 0 до 100:";//число человека 
        cin >> chislocheloveka;
        cout << "ваше число:" << chislocheloveka << endl << "число бота : " << chislobota << endl << "загаданное программой число : " << zagadannoechislo << endl;//число бота и число программы 

        if (chislocheloveka > zagadannoechislo) { //разница человека 
            raznicacheloveka = chislocheloveka - zagadannoechislo;
        }

        else if (chislocheloveka < zagadannoechislo) {
            raznicacheloveka = zagadannoechislo - chislocheloveka;
        }

        else {
            a = 0;
        }

        if (chislobota > zagadannoechislo) {//разница бота 
            raznicabota = chislobota - zagadannoechislo;
        }

        else if (chislobota < zagadannoechislo) {
            raznicabota = zagadannoechislo - chislobota;

        }

        else {
            b = 0;
        }


        if (a == 0 and b == 0) {//если оба угадали 
            cout << "ничья!";
        }

        else if (a == 0 and b != 0) { //если человек угадал 
            cout << "вы победили!" << endl;
            zachisleno = stavka * koaf;
            bankcheloveka += zachisleno; //добавление в бч 
            bankbota = bankbota - stavka; //отнимаем у бб 
        }

        else if (a != 0 and b == 0) { //если бот угадал 
            cout << "вы проиграли!" << endl;
            zachisleno = stavka * koaf;
            bankbota += zachisleno; //добавляем в бб 
            bankcheloveka = bankcheloveka - stavka; //отнимаем у бч 
        }
        else if (raznicacheloveka < raznicabota) { //если человек ближе 
            cout << "вы победили!" << endl;
            zachisleno = stavka * koaf;
            bankcheloveka += zachisleno; //добавление в бч 
            bankbota = bankbota - stavka; //отнимаем у бб 
        }
        else if (raznicacheloveka > raznicabota) { //если бот ближе 
            cout << "вы проиграли!" << endl;
            zachisleno = stavka * koaf;
            bankbota += zachisleno; //добавляем в бб 
            bankcheloveka = bankcheloveka - stavka; //отнимаем у бч 
        }
        else if (raznicacheloveka == raznicabota) {
            cout << "ничья!" << endl;
        }
    }
    if (bankbota <= 0 ) {
        cout << "бот проиграл!" << endl;
    }
    else if (bankcheloveka <= 0) {
        cout << "бот победил!" << endl;
    }
    else {
        cout << "чт.. *отрезхал руку т/и*" << endl;
    }
}
