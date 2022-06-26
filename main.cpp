
#include <fstream> // работа с файлами
#include <iostream> // функции ввода/вывода
//#include <sstream>
//#include <cstring>

using namespace std;


string readFile(string);


int main() {	

	// корректное отображение Кириллицы
    setlocale(LC_ALL, "Russian");
    wcout << L"Привет, мир!" << endl << endl;
	
	FILE *fp;
	
	//char name[] = "тест.та";
	char name[] = "test.txt";
	
	if ((fp = fopen(name, "r")) == NULL) {
		//printf("Не удалось открыть файл");
		printf("Not open file...");
		getchar();
		return 0;
	}
	// открыть файл удалось
	// требуемые действия над данными
	//fgetc(fp);
	
	//printf(fgetc(fp));
	
	printf("Open file!");
	
	
    cout << endl;
    system("pause");

    return 0;
	
}