//������������ ������ ������� �++
#include <iostream> // ������� ����������
#include <fstream> //���������� ����������� ������ � �������� ��������
#include<string>
using namespace std; //����������� ������������ ����

int main() {

	setlocale(LC_ALL, "Russian");

	string path = "file.txt"; //��������� ���������� ���������� ���� � �����
	ofstream out; //������ out ������ ofstream, ���������� �� ������ ������ � ���� (���������������� �������� out or fout)
	out.open(path, ios::app); //����� ��������� ����� ��������. � �������� �������� ����� "file.txt". ���� ����� ��� �� ���� ���������. 
	//������������� ����� ������� out, �������� ����� path � ������ ios::app.
	/*if (out.is_open()) { //������ �� ������������� �������� �����, �������� �� ����.
		cout << "The file is open.\n";
		// out << "Hello world!\n"; //������ � ����
		
		for (int i = 0; i < 1; i++) {
			string str;
			cout << "Enter word: ";
			getline(cin, str);
			out << str << "\n"; //���������� ������ � ����
		}
	}
	else
		cout << "Error open the file!\n";*/
	out.close();//�������� �����

	//���������� ����� � ���� ������ str, ���������� �� ���������
	/*ifstream in;
	in.open(path, ios::in);
	if (in.is_open()) {
		cout << "The file is open for reading!\n";

		string str; //������, � ������� ����� ��������� ����� �� �����
		char sym;
		while (in.get(sym)) //����� get �������� ����� bool � ���������� true - ���� ������ �� ������� ������� � false ���� ���.
			str += sym;
		cout << str << endl;
}
	else
		cout << "Error open file!\n";
	in.close();*/


	//��������� ����� �� �������
	/*ifstream in;
	in.open(path, ios::in);
	if (in.is_open()) {
		cout << "The file is open for reading!\n";

		string str; //������, � ������� ����� ��������� ����� �� �����
		
		while (!in.eof()) { //����� eof (���� �� �� � ����� �����)
			str = ""; //��������� ������
			//string str; //������ ������ ���������� ������
			in >> str; //���������� ��������
			cout << str << endl;
			//�� ��������� ��������� �������!!!! ����� �������� ������
		}
	}
	else
		cout << "Error open file!\n";
	in.close();*/

	//��������� ��������� � ������� ����� � �������.
	ifstream in;
	in.open(path, ios::in);
	if (in.is_open()) {
		cout << "The file is open for reading!\n";

		string str; //������, � ������� ����� ��������� ����� �� �����

		while (!in.eof()) { 
			getline(in, str);
			cout << str << endl;
		}
	}
	else
		cout << "Error open file!\n";
	in.close();

	//�������� �����
	if (remove("file.txt") == 0)
		cout << "���� ������";
	else
		cout << "���� �� ������";

	//������ 1



	return 0;
}