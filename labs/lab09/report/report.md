---
## Front matter
title: "Лаборная работа №9"
subtitle: "НММ-бд-02-22"
author: "Крухмалев Артём Владиславович"


## Generic otions
lang: ru-RU
toc-title: "Содержание"

## Bibliography
bibliography: bib/cite.bib
csl: pandoc/csl/gost-r-7-0-5-2008-numeric.csl

## Pdf output format
toc: true # Table of contents
toc-depth: 2
fontsize: 12pt
linestretch: 1.5
papersize: a4
documentclass: scrreprt
## I18n polyglossia
polyglossia-lang:
  name: russian
  options:
	- spelling=modern
	- babelshorthands=true
polyglossia-otherlangs:
  name: english
## I18n babel
babel-lang: russian
babel-otherlangs: english
## Fonts
mainfont: PT Serif
romanfont: PT Serif
sansfont: PT Sans
monofont: PT Mono
mainfontoptions: Ligatures=TeX
romanfontoptions: Ligatures=TeX
sansfontoptions: Ligatures=TeX,Scale=MatchLowercase
monofontoptions: Scale=MatchLowercase,Scale=0.9
## Biblatex
biblatex: false
biblio-style: "gost-numeric"
biblatexoptions:
  - parentracker=true
  - backend=biber
  - hyperref=auto
  - language=auto
  - autolang=other*
  - citestyle=gost-numeric
## Pandoc-crossref LaTeX customization
figureTitle: "Рис."
tableTitle: "Таблица"
listingTitle: "Листинг"
lofTitle: "Список иллюстраций"
lotTitle: "Список таблиц"
lolTitle: "Листинги"
## Misc options
indent: true
header-includes:
  - \usepackage{indentfirst}
  - \usepackage{float} # keep figures where there are in the text
  - \floatplacement{figure}{H} # keep figures where there are in the text
---

# Цель работы

Познакомиться с операционной системой Linux. Получить практические навыки рабо-
ты с редактором Emacs.

# Задание

Создать файл. Отредактировать его.

# Выполнение лабораторной работы

1. Скачаем необходимое ПО, и создадим файл.

![емасs](image/1.png){ #fig:001 width=70% }

2. ВВедем текст 

![редактор](image/2.png){ #fig:002 width=70% }

3. Начнем редактировать файл. удалим строку (С-к)

![удаление](image/3.png){ #fig:003 width=70% }

4. Вставка строки (С-v)

![Вставка](image/4.png){ #fig:004 width=70% }

5. Выделим область и вставим в конец текста

![Выделение области] (image/5.png){ #fig:005 width=70% }

6. Далее поуправляем курсорами и перейдем к буферам (С-х С-б)

![Буфер](image/6.png){ #fig:006 width=70% }

7. Переключимся на другой буфер

![Переключение](image/7.png){ #fig:007 width=70% }

8. Откроем 4 окна 

![4 окна](image/9.png){ #fig:009 width=70% }

9. В каждом откроем новый буфер и напишем там текст

![новый буфер](image/10.png){ #fig:010 width=70% }

10. Начнем поиск и найдем слово

![Поиск](image/11.png){ #fig:011 width=70% }

11. Заменим текст после поиска с помощбю 2 режимов. В первом случае, результаты показан в тексте. Во втором-в отдельном окне.

![Замена после поиска](image/12.png){ #fig:011 width=70% }

# Контрольные вопросы

1. Кратко охарактеризуйте редактор emacs.
Emacs представляет собой мощный экранный редактор текста, написанный на языке высокого уровня Elisp.

2. Какие особенности данного редактора могут сделать его сложным для освоения новичком?
Многие рутинные операции в Emacs удобнее производить с помощью клавиатуры, а не графического меню. Наиболее часто в командах Emacs используются сочетания c клавишами Ctrl и Meta (в обозначениях Emacs: C- и M-; клавиша Shift в Emasc обозначается как S-). Так как на клавиатуре для IBM PC совместимых ПК клавиши Meta нет, то вместо неё можно использовать Alt или Esc.

3. Своими словами опишите, что такое буфер и окно в терминологии emacs’а.
Если своими словами, то буфер - это файл, содержащий какой-либо текст. Окно же можно сказать область, где вы водится текст определенного буфера.

4. Можно ли открыть больше 10 буферов в одном окне?
Можно открыть больше 10 буферов в одном окне.

5. Какие буферы создаются по умолчанию при запуске emacs?
Только что запущенный Emacs несет один буфер с именем `scratch’, который может быть использован для вычисления выражений Лиспа в Emacs.

6. Какие клавиши вы нажмёте, чтобы ввести следующую комбинацию C-c | и C-c C-|?
Ctrl-c |(первые две нажму вместе, а третью отдельно), Ctrl-c Ctrl-|(каждую пару нажму раздельно).

7. Как поделить текущее окно на две части?
Разделить фрейм на два окна по вертикали (C-x 3),а по горизонтали (C-x 2)

8. В каком файле хранятся настройки редактора emacs?
В файле Emacs хранятся настройки редактора.

9. Какую функцию выполняет клавиша и можно ли её переназначить?
Кнопка BACKSPACE = функции C-k и ее можно переназначить.

10. Какой редактор вам показался удобнее в работе vi или emacs? Поясните почему
Редактор Emacs мне показался удобнее, так как в нем больше возможностей по сравнению с vi.


# Выводы

Познакомился с операционной системой Linux. Получил практические навыки работы с редактором Emacs. 
