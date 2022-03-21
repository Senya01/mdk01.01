#include <iostream>

using namespace std;

int main()
{
    int i, j, N, M, Z;
    float a[5][5], s[5], c[5];

    cout << "N=";
    cin >> N;
    cout << "M=";
    cin >> M;

    cout << "Z=";
    cin >> Z;

    cout << "input matrix A:\n";
    for (i = 0; i < N; i++) {
        s[i] = 0;
        for (j = 0; j < M; j++) {
            cout << "[" << i + 1 << "]" << "[" << j + 1 << "]: ";
            cin >> a[i][j];
            if (a[i][j] == 0) {
                s[i]++;
            }
        }
    }

    cout << "================\nN. 1:\n";
    for (i = 0; i < N; i++) {
        cout << i + 1 << ": " << s[i] << "\n";
    }

    cout << "================\n\N. 2:\n";
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            if (a[i][j] == 0) {
                a[i][j] = Z;
            }
            cout << "[" << i + 1 << "]" << "[" << j + 1 << "]: " << a[i][j] << "\n";
        }
    }
    
    cout << "================\n\N. 3:\n";
    for (i = 0; i < N; i++) { 
        s[i] = 0;
        c[i] = 0;
        for (j = 0; j < M; j++) {
            if (a[i][j] < Z) {
                s[i] += a[i][j];
                c[i] += 1;
            }
        }
        s[i] = s[i] / c[i];
        cout << "[" << i + 1 << "]: " << s[i] << "\n";
    }
}
