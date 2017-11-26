﻿#include "stdafx.h"
#include <iostream>


using namespace std;
/*
---------------------------------------------------------------------------------------------------------------------------------------------------------------------
                            Модуль 1 (6 пар) 
Введение в объектно-ориентированное  программирование на С++ 
1 . Вступление . 
2 . История и этапы развития языка С++ . 
3 . Сравнительный анализ языка C++ с другими языками программирования (C, PASCAL, BASIC) . 
4 . Три принципа объектно-ориентированного программирования: 
•	инкапсуляция . Определение, примеры использования  в повседневной среде; 
•	полиморфизм . Определение, примеры использования  в повседневной среде; 
•	наследование . Определение, примеры использования  в повседневной среде; 
5 . Класс и объект . 
6 . Классы: 
•	понятие класса; 
•	синтаксис объявления; 
•	спецификаторы доступа: 
◉ public; 
◉ private; 
◉ protected . 
7 . Переменные-члены класса . 
8 . Методы-члены: 
•	реализация тела метода внутри класса; 
•	вынос тела метода за класс . 
9 . Практические примеры работы с классами: 
•	использование спецификаторов доступа; 
•	реализация практических примеров (студент, прямоугольник, точка, машина, и так далее). 
10 . Понятие аксессора, инспектора, модификатора: 
•	определение;
•	реализация . 
11 . Встроенные (inline) методы: 
•	необходимость использования; 
•	примеры объявления и использования; 
•	ограничения при использовании inline методов.
12 . Сравнительный анализ структур и классов. 
13 . Конструктор: 
•	проблемы, возникающие при использовании неинициализированных переменных; 
•	понятие конструктора; 
•	синтаксис объявления; 
•	конструктор по умолчанию; 
•	конструктор, принимающий параметры; 
•	перегруженные конструкторы; 
•	примеры использования (например, классы студент, точка, машина, и так далее). 
14 . Деструктор: 
•	утечки ресурсов. причины их возникновения и плачевные последствия данного явления; 
•	понятие деструктора; 
•	синтаксис объявления; 
•	примеры использования (например, классы студент, массив, строка, и так далее). 
15 . Указатели на объекты . 
16 . Массивы объектов. 
17 . Инициализаторы: 
•	синтаксис объявления; 
•	примеры практического использования (инициализация поля класса, константы члена класса, инициализация внутреннего объекта). 
18 . Унифицированная инициализация объектов. 
19 . Инициализация членов класса. 
20 . Делегирование конструкторов. 
21 . Статические переменные-члены и статические функции-члены класса: 
•	необходимость использования статических членов (показать на практическом примере, например подсчет количества объектов, и так далее); 
•	синтаксис объявления статических переменных-членов класса; 
•	синтаксис объявления статических функций-членов класса; 
•	отличие статистических функций-членов класса от функций-членов класса.
---------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

//Объектно - ориентированное программирование(ООП) — подход к программированию,
//при котором основными концепциями являются понятия объектов и классов.

//_______________________________________________________________________________________________________________
//Ключевые черты ООП

 /*4 . Три принципа объектно-ориентированного программирования: 
•	инкапсуляция . Определение, примеры использования  в повседневной среде; 
•	полиморфизм . Определение, примеры использования  в повседневной среде; 
•	наследование . Определение, примеры использования  в повседневной среде; */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 //инкапсуляция. 
 //Определение, примеры использования  в повседневной среде;


//Инкапсуляция -это скрытие кода.
/*Инкапсуляция — это принцип, согласно которому любой класс должен рассматриваться как чёрный ящик — 
пользователь класса должен видеть и использовать только интерфейсную часть класса 
(т. е. список декларируемых свойств и методов класса) и не вникать в его внутреннюю реализацию. 
Поэтому данные принято инкапсулировать в классе таким образом, чтобы доступ к ним по чтению или 
записи осуществлялся не напрямую, а с помощью методов. Принцип инкапсуляции (теоретически) позволяет
минимизировать число связей между классами и, соответственно, упростить независимую реализацию 
и модификацию классов.*/

 class A
 {
 public:
	 int a, b; //данные открытого интерфейса
	 int ReturnSomething(); //метод открытого интерфейса
 private:
	 int Aa, Ab; //скрытые данные
	 void Do_Something(); //скрытый метод
 };
 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 //наследование
 /*Наследование — это порождение нового класса-потомка от уже существующего класса-родителя.
 Класс-родитель называют также супер-классом, а класс-потомок — подклассом. 
 Наследование происходит с передачей всех или некоторых полей и методов от класса-родителя к классу-потомку. 
 В процессе наследования возможно, при необходимости, добавлять новые свойства и методы. 
 Набор классов, связанных отношением наследования, называют иерархией.

 Наследование позволяет определить класс в терминах другого класса, что делает его легче создавать 
 и поддерживать приложения.Это также дает возможность повторно использовать функциональные возможности 
 программного кода и быстрое время выполнения.
 При создании класса, вместо того чтобы писать совершенно новые элементы данных и функции - члены, 
 программист может указать, что новый класс должен наследовать членов существующего класса.
 Этот существующий класс называетсябазовым классом, а новый класс называется производнымклассом.
  Идея наследования реализует взаимосвязь. 
  Например, млекопитающее - А животное, собака - Млекопитающее, следовательно, собака - А животное, а и так далее.
  */
 /*   Базовые и производные классы:
Класс может быть получен из более чем одного класса, что означает, 
что могут наследовать данные и функции от нескольких базовых классов. 
Для определения производного класса, мы используем список классов деривации, чтобы указать базовый класс(ы). 
Список класса деривации имена одного или нескольких базовых классов и имеет вид: */

//class derived-class : access - specifier base - class

 /*Наследование классов — очень мощная возможность в объектно ориентированном программировании. 
 Оно позволяет создавать производные классы (классы наследники), взяв за основу все методы и 
 элементы базового класса (класса родителя). Таким образом экономится масса времени на написание и 
 отладку кода новой программы. Объекты производного класса  свободно могут использовать всё, что создано
 и отлажено в базовом классе. При этом, мы можем в производный класс,  дописать необходимый код 
 для усовершенствования программы: добавить новые элементы, методы и т.д.. 
 Базовый класс останется нетронутым. Эту тему вполне возможно освоить новичкам. 
 Необходимо только познакомиться с синтаксисом и некоторыми особенностями. 
 Ниже приведен простой код программы, который мы детально разберем под листингом. 
 В этой программе созданы два класса: базовый — FirstClass  
 и производный от него SecondClass.

Пример:*/
  
#include <iostream>
 using namespace std;

 class FirstClass    // базовый класс
 {
 protected:          // спецификатор доступа к элементу value
	 int value;
 public:
	 FirstClass() {
		 value = 0; }

	 FirstClass(int input)
	 {
		 value = input;
	 }

	 void show_value()
	 {
		 cout << value << endl;
	 }
 };

 class SecondClass : public FirstClass   // производный класс
 {
 public:
	 SecondClass() : FirstClass()   // конструктор класса SecondClass вызывает конструктор класса FirstClass
	 {}

	 SecondClass(int inputS) : FirstClass(inputS)   // inputS передается в конструктор с параметром класса FirstClass
	 {}

	 void ValueSqr() // возводит value в квадрат. Без спецификатора доступа protected эта функция не могла бы изменить значение value
	 {
		 value *= value;
	 }
 };

 int main()
 {
	 setlocale(LC_ALL, "rus");

	 FirstClass F_object(3);     // объект базового класса
	 cout << "value F_object = ";
	 F_object.show_value();

	 SecondClass S_object(4);    // объект производного класса
	 cout << "value S_object = ";
	 S_object.show_value();  // вызов метода базового класса

	 S_object.ValueSqr();        // возводим value в квадрат
	 cout << "квадрат value S_object = ";
	 S_object.show_value();

	 //F_object.ValueSqr();      // базовый класс не имеет доступа к методам производного класса

	 cout << endl;
	 return 0;
 }
 /*В строке 6 мы встретили новый для нас спецификатор доступа protected.
 Он отличается от private тем, что разрешает доступ к элементам базового класса из производных классов.
 Если бы элемент value находился в поле private, то доступ к нему был бы закрыт и мы бы не могли 
 изменить его значение через объект класса SecondClass, используя функцию ValueSqr(), 
 определённую в строках 34 — 37.
 Чтобы было наглядней, отличия спецификаторов доступа можно отобразить в таблице :*/
   /*                                           private	 protected	public
	 Доступ из тела класса	                    открыт	  открыт	открыт
	 Доступ из производных классов	            закрыт	  открыт	открыт
	 Доступ из внешних функций и классов	    закрыт	  закрыт    открыт

 Если вы создаёте класс, который в дальнейшем планируете использовать, как базовый, 
 то объявляйте в нём поле protected вместо private.Иначе объекты производного класса
 не смогут обращаться к элементам базового.
  Ниже, в строках 8 — 22, определены методы базового класса.Конструктор без параметров FirstClass(), 
  конструктор с параметром FirstClass(int input)  и метод void show_value(), который выводит значение value на экран.
  Определение производного находится в строках 25 — 38. 
  Синтаксис наследования такой — 
  class   Имя_Производного_Класса : спецификатор доступа    Имя_Базового_Класса {  }; Двоеточие:  не путайте с двойным двоеточием :: (определение области действия).
  Используя этот оператор мы показываем, наследником какого класса является производный класс.
  Важной особенностью производного класса, является то, что хоть он и может использовать все методы 
  и элементы полей protected и public базового класса, но он не может обратиться к конструктору с параметрами.
  Если конструкторы в производном классе не определены, при создании объекта сработает конструктор без аргументов 
  базового класса.А если нам надо сразу при создании объекта производного класса внести данные, 
  то для него необходимо определить свои конструкторы.В нашем примере показано, 
  как же мы всё - таки можем использовать уже готовые конструкторы базового класса, чтобы не набирать код конструкторов 
  снова — строки 28 — 32. Для этого при определении конструктора производного класса после его имени 
  следует поставить оператор : и  имя конструктора базового класса, который необходимо вызвать, при создании объекта 
  производного класса — SecondClass() : FirstClass() {}.Тело конструктора оставляем пустым т.к.всю работу проделает 
  конструктор базового класса.В случае конструктора с параметром, этот параметр мы передаем в конструктор с параметром 
  базового класса SecondClass(int inputS) : FirstClass(inputS) {} — строка  31.
   В main - функции создаем объекты базового и производного классов — FirstClass F_object(3); и  SecondClass S_object(4); 
и отображаем их значения value на экран.Как видите в строке 50, объект производного класса без проблем обращается 
к методу show_value() базового класса.Так, будто это его собственный метод.Ниже вызываем метод, который возводит 
значения value производного класса в квадрат.И выводим это изменённое значение на экран.А вот если мы захотим 
вызвать этот метод —  F_object.ValueSqr(); —  для объекта базового класса, компилятор нам этого не позволит сделать 
и выдаст ошибку.Это еще одна важная особенность — производный класс имеет доступ к базовому классу, а базовый класс, 
даже «не знает» о существовании производного и не может пользоваться его кодом.

	 Результат работы программы :
	 value F_object = 3
	 value S_object = 4
	 квадрат value S_object = 16



В виде списка приведу  основную информацию о наследовании классов, которую важно знать:

Наследование — это определение производного класса, который может обращаться ко всем элементам и методам базового
класса за исключением тех, которые находятся в поле private;
Производный класс еще называют потомком или подклассом, а базовый — родитель или надкласс;
Синтаксис определения производного класса:   
class   Имя_Производного_Класса    :    спецификатор доступа    Имя_Базового_Класса   { /код/ };       
Производный класс имеет доступ ко всем элементам и методам базового класса, 
а базовый класс может использовать только свои собственные элементы и методы.
В производном классе необходимо явно определять свои конструкторы, деструкторы и перегруженные операторы присваивания  
из - за  того, что  они  не  наследуются  от  базового  класса. Но  их  можно вызвать явным образом при определении конструктора, 
деструктора или перегрузки оператора присваивания производного класса, например таким образом(для конструктора) : 
Конструктор_Производного_Класса(/параметры/) : Конструктор_Базового_Класса( /параметры/) { } .
Еще один важный момент при наследовании — перегруженные функции - методы  класса потомка.
В данном примере мы его не рассматривали.Но чтобы вы знали, если в  классе родителе и в его классах 
потомках встречаются методы с одинаковым именем, то для объектов  класса потомка компилятор будет использовать методы 
именно класса потомка.Перегруженные методы класса потомка, могут вызывать методы класса родителя.В таком случае важно помнить, 
что необходимо правильно определить область действия с помощью оператора ::.   Иначе компилятор воспримет это, как вызов функцией самой себя.
Наглядно, если бы мы перегрузили в классе SecondClass функцию show_value() — это  выглядело бы так :*/
	
		 void show_value()
	 {
		 if (value != 0)
			 FirstClass::show_value();
	 }
/* Эта запись указывает компилятору  — если значение value не равно нулю — вызвать метод show_value() класса FirstClass.
А он в свою очередь, отобразит это значение на экране.
Думаю для первого знакомства с наследованием классов этого достаточно.
Это бесспорно классная возможность языка С++.Она помогает экономить массу времени на написание и отладку кода с нуля.
Вместо этого мы можем использовать уже готовый и отлаженный код и подстраивать его под новые задачи, которые поставлены перед нами.
При этом наша новая программа будет занимать намного меньше строк, что значительно улучшит её читабельность.
*/


 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 //полиморфизм
 /* Полиморфизм — это явление, при котором функции (методу) с одним и тем же именем соответствует 
 разный программный код (полиморфный код) в зависимости от того, в каком контексте он 
 вызывается (объектами какого класса или с какими параметрами).


 Полиморфизм.
 Под заковыристым словом "полиморфизм" на самом деле скрывается невинная и естественная способность 
 программы выполнять методы объектов в точном соответствии с конкретным типом объекта.
 Например, метод "Ехать" объекта - экземпляра класса "Запорожец" наверняка отличается от 
 метода "Ехать" объекта класса "Мерседес". Но при этом имена таких методов совпадают, 
 что нередко и путает разработчиков.

 Кроме того, язык С++ допускает хранение в переменной объектного типа (класса) реального объекта другого типа. 
 Типы эти связаны некоторым образом по иерархии наследования. 
 Например, возьмем из предыдущего занятия классы Car (Автомобиль) и Truck (Грузовик), наследник класса Car.
  */
 class Car
 {
 public:
	 double Benzin; // бензин 

	 void Go(float dist) {
		 Benzin -= dist / 10; // 1 литр бенза на 10 км 
		 Rasst += dist; // проехали 
	 }

 protected:
	 double Rasst; // пройденное расстояние 
 };


 class Truck : public Car //наследование
 {
 public:
	 int Kuzov;

	 void Go(float dist) { //полиморфизм
		 Benzin -= dist / 5; // 1 литр бенза на 5 км 
		 Rasst += dist; // проехали 
	 }
 };

 //Стандартны следующие декларации объектов :
 Car * car = new Car;
 Truck * truck = new Truck;

 //Однако принцип полиморфизма допускает и такую запись :
  Car * car = new Truck;

 //Переменная ссылочного, более общего типа допускает хранение ссылки на дочерний тип.
 //	 А вот запись
  Truck * truck = new Car;// будет ошибочной.
 //Однако можно принудительно выполнить подобный оператор, если явно указать приведение типов :
 Truck * truck = (Truck*)(new Car); // Здесь создается новый экземпляр класса Car, 
 //и ссылка на него приводится к типу ссылки на объект класса Truck.
 //В результате в переменных car и truck будут храниться ссылки на объекты других классов!
 //Переменая car хранит ссылку на объект - грузовик, наследник Car, 
 //а переменная truck хранит ссылку на экземпляр родительского класса Car.

// Теперь зададим вызовы метода Go(), который имеется и в классе Car, и в классе Truck :
 Car * car = new Truck;
 car->Go(100);

 Truck * truck = (Truck*)(new Car);
 truck->Go(100);

/* Какие конкретно версии метода Go() будут вызваны - класса Car или Truck ? 
Это и определяет принцип полиморфизма.
В соответствии с ним в языке С++ определены так называемые статическое связывание и динамическое связывание.
Связывание - не людей : ), а методов с объектом.
Статическое связывание - это связывание метода с родительским объектом на этапе компиляции.
Так как компилятор не знает, как конкретно будет работать программа, 
он всегда исходит из известного и явно заданного типа объекта - владельца метода.
Если используется переменная car класса Car, то будет вызван метод Go() класса Car, 
хотя физически в переменной car хранится экземпляр класса Truck.
Так же и в случае с переменной truck - хотя мы принудительно записали в нее ссылку на объект класса Car, 
компилятор об этом не знает и исходит из типа переменной truck - вызывает метод Go() класса Truck.
 При этом компилятор можно явно "обмануть" - выполнить приведение типов :*/

 ((Car*)truck)->Go(100));// Здесь уже будет вызван метод Go() класса Car, 
 //так как владелец метода Go() в левой части выражения явно приведен к типу Car.
 /*
 Динамическое связывание - это связывание метода с объектом, которое происходит во время работы программы.
 При этом нужный метод определяется уже не типом переменной - владельца, а реальным типом объекта, 
 ссылку на который она хранит.
 Но такое связывание возможно только для так называемых виртуальных методов, 
 -разделение типов методов нужно, чтобы подсказать компилятору, где какое связывание реализовывать.

 Виртуальный метод - это обычный метод, в заголовке которого используется ключевое слово virtual.
 Например:*/

 class Car
 {
 public:
	 ...

		 virtual void Go(float dist) {
		 ...
	 }
	 ...

//Теперь метод Go() класса Car описан как виртуальный. Пусть имеются команды

Truck * truck = (Truck*)(new Car);
 truck->Go(100);

 /* Если бы метод Go() класса Car был невиртуальным, то выполнилось бы статическое связывание.
 Но в данном случае вызывается метод Go() класса Car, потому что переменная truck 
 типа Truck хранит ссылку на экземпляр класса Car.*/
 
 //_______________________________________________________________________________________________________________


 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
 5.Класс и объект .
	 6.Классы:
 •	понятие класса;
 •	синтаксис объявления;
 •	спецификаторы доступа :
 ◉ public;
 ◉ private;
 ◉ protected .
 */




 void main() {

	 cout << "Hello World!" << endl;
 }