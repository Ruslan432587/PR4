#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    vector<vector<int>> matrix = {
        {5, 2, 3, 4},
        {3, 7, 8, 9},
        {5, 6, 7, 1},
        {1, 4, 5, 6},
        {3, 2, 3, 4}
    };

    map<int, vector<int>> result;
    for (const auto& row : matrix) {
        if (!row.empty()) {
            int key = row[0];
            result[key] = row;
        }
    }
    cout << "Результат (ключ -> строка):\n";
    for (const auto& pair : result) {
        cout << "Ключ " << pair.first << ": [ ";
        for (int val : pair.second) {
            cout << val << " ";
        }
        cout << "]\n";
    }

    return 0;
}