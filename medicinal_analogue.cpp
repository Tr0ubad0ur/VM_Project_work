#include <medicinal_analodue.h>

void medicinal_analodue::GetInfo()
      {
        while (true)
        {
          cout << "Введите название препарата (чтобы закончить подбор введите '0')";
          string name;
          if (name == 0)
            break;
          for (int i = 0; i < (вектор из базы данных позже сделаю).size; ++i)
          {
            if ((вектор из базы данных позже сделаю)[i].name)
            {
              cout << "Название: " + (вектор из базы данных позже сделаю)[i].name << endl;
              cout << "Цена:" << (вектор из базы данных позже сделаю)[i].price << endl;
              cout << "Состав:" + (вектор из базы данных позже сделаю)[i].compound << endl; 
            }
        }
      }
