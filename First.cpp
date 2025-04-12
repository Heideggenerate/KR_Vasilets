#include <iostream>

using namespace std;

struct Person {
    bool typeTask[2]{};
    string subject;
    string surname;
};

int main() {

    setlocale(LC_ALL, "");

    int size;
    cin >> size;

    Person* DATA = new Person[size];

    for (int i = 0; i < size; i++) {
        wcout << L"Введите название предмета: " << endl;
        cin >> DATA[i].subject;
        wcout << L"Преподаватель ведёт лекции? (1 - да, 0 - нет)" << endl; cin >> DATA[i].typeTask[0];
        wcout << L"Преподаватель ведёт практику? (1 - да, 0 - нет)" << endl; cin >> DATA[i].typeTask[1];
        wcout << L"Введите фамилию преподавателя: " << endl;
        cin >> DATA[i].surname;
    }

    for (int i = 0; i < size; i++) {
        if (DATA[i].typeTask[0] == 0 && DATA[i].typeTask[1] == 1) {
            cout << DATA[i].surname << endl;
        }
    }
}
