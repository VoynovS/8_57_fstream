//Персональный шаблон проекта С++
#include <iostream> // Главная библиотека
#include <fstream> //Библиотека реализующая работу с файловой системой
#include<string>
using namespace std; //Подключение пространства имен

int main() {

	setlocale(LC_ALL, "Russian");

	string path = "file.txt"; //строковая переменная содержащая путь к файлу
	ofstream out; //Объект out класса ofstream, отвечающий за запись данных в файл (распрастраненное название out or fout)
	out.open(path, ios::app); //метод принимает набор значений. В кавычках название файла "file.txt". Если файла нет то файл создастся. 
	//Инициализация полей объекта out, открытие файла path в режиме ios::app.
	/*if (out.is_open()) { //защита от неправильного открытия файла, открылся ли файл.
		cout << "The file is open.\n";
		// out << "Hello world!\n"; //Запись в файл
		
		for (int i = 0; i < 1; i++) {
			string str;
			cout << "Enter word: ";
			getline(cin, str);
			out << str << "\n"; //Добавление записи в файл
		}
	}
	else
		cout << "Error open the file!\n";*/
	out.close();//Закрытие файла

	//Считывание файла в одну строку str, считывание по символьно
	/*ifstream in;
	in.open(path, ios::in);
	if (in.is_open()) {
		cout << "The file is open for reading!\n";

		string str; //Строка, в которую будет вноситься текст из файла
		char sym;
		while (in.get(sym)) //Метод get обладает типом bool и возвращает true - если символ не удалось считать и false если нет.
			str += sym;
		cout << str << endl;
}
	else
		cout << "Error open file!\n";
	in.close();*/


	//Разбиение файла по строчно
	/*ifstream in;
	in.open(path, ios::in);
	if (in.is_open()) {
		cout << "The file is open for reading!\n";

		string str; //Строка, в которую будет вноситься текст из файла
		
		while (!in.eof()) { //Метод eof (Пока мы не в конце файла)
			str = ""; //обнуление строки
			//string str; //второй способ обновления строки
			in >> str; //Считывание пословно
			cout << str << endl;
			//Не выводится последняя строчка!!!! Можно обнулять строку
		}
	}
	else
		cout << "Error open file!\n";
	in.close();*/

	//Считывает построчно и выводит сразу в консоль.
	ifstream in;
	in.open(path, ios::in);
	if (in.is_open()) {
		cout << "The file is open for reading!\n";

		string str; //Строка, в которую будет вноситься текст из файла

		while (!in.eof()) { 
			getline(in, str);
			cout << str << endl;
		}
	}
	else
		cout << "Error open file!\n";
	in.close();

	//Удаление файла
	if (remove("file.txt") == 0)
		cout << "Файл удален";
	else
		cout << "Файл не удален";

	//Задача 1



	return 0;
}