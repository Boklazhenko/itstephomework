# Инструкция

#### Общая информация
иерархия репозитория представляет из себя набор директорий по следующей схеме
<pre>
-ps (форма обучения полустационар)
&nbsp;&nbsp;&nbsp;&nbsp;|-week1 (неделя 1)
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|-task1 (задача 1)
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|-boklazhenko (директория с фамилией студента)
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|-main.cpp (решение студента)
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|-ivanov (директория с фамилией студента)
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|-first.cpp (решение студента)
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|-second.cpp (решение студента)
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|-krasnova (директория с фамилией студента)
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|-header.h (решение студента)
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|-source.cpp (решение студента)
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|-task2 (задача 2)
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|-boklazhenko (директория с фамилией студента)
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|-ivanov (директория с фамилией студента)
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|-krasnova (директория с фамилией студента)
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|-task3 (задача 3)
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|-boklazhenko (директория с фамилией студента)
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|-krasnova (директория с фамилией студента)
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|-task4 (задача 4)
&nbsp;&nbsp;&nbsp;&nbsp;|-week2 (неделя 2)
-st (форма обучения cтационар)
</pre>

с течением времени в репозитории будут появляться новые директории недель, куда будут добавляться новые директории с задачами и их описанием. СТУДЕНТ СОЗДАЕТ ДИРЕКТОРИЮ ВНУТРИ ДИРЕКТОРИИ КАЖДОЙ ЗАДАЧИ,&nbsp;ДАЕТ ЕЙ ИМЯ В ЧЕСТЬ СВОЕЙ ФАМИЛИИ (на английском языке), И КЛАДЁТ ФАЙЛЫ РЕШЕНИЯ ЗАДАЧИ В ЭТУ ДИРЕКТОРИЮ (пример выше)

#### Начало работы
1) регистрируемся на [github](https://github.com/).
2) сообщаем свой ник преподавателю любым имеющимся способом
3) устанавливаем [git](https://git-scm.com/downloads) на свою локальную машину
4) клонируем удаленный репозиторий к себе на локальную машину
```sh
$ git clone https://github.com/Boklazhenko/itstephomework.git
```

#### Выполнение домашнего задания
1) переключаемся на ветку мастер, куда будут попадать новые задачи для домашней работы
```sh
git checkout master
```
2) тянем изменения из удаленного репозитория к себе на локальную машину
```sh
git pull
```
3) одновременно создаём и переключаемся на свою ветку, в которой будем выполнять свое домашнее задание
##### !ВНИМАНИЕ!
ветку именуем в формате {ФАМИЛИЯ}-{НЕДЕЛЯ}{НОМЕР},
например:
boklazhenko-week2
```sh
git checkout -b boklazhenko-week2
```
4) выполняем домашнее задание. файлы решения кладём согласно информации из раздела "Общая информация"

5) подготавливаем все изменения, который мы собираемся отправить на проверку
```sh
git add .
```
6) делаем коммит нашей работы с указанием комментария - "что мы сделали"
```sh
git commit -m "added week2 solutions"
```
7) отправляем изменения своей локальной ветки на удаленный репозиторий для проверки. Имя последнего агрумента (имя ветки) должно совпадать с тем именем, которое вы вводили на шаге 3
```sh
git push origin boklazhenko-week2
```
8) создаем pull-request. проходим по ссылке, которую выдала нам консоль. открывается вкладка в браузере, где мы следуем инстуркциям

#### Рекомендации
1) для освоения git пройдите небольшой [практический курс](https://githowto.com/ru) на русском языке
2) при возникновении каких либо ошибок на любом их шагов - удалите локальный репозиторий и начните действия сначала
3) первое время храните ваши труды в другой директории, для возможности быстрого восстановления. Копируйте ваши выполненные задания в локальный репозиторий
