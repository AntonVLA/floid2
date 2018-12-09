#include <iostream>
using namespace std;
const int maxV = 1000;
int i, j, n, t, k,v,a,b;
int GR[maxV][maxV]; //алгоритм Флойда-Уоршелла 
void FU(int D[][maxV], int V) {
    int k;
    for (i = 0; i < V; i++) D[i][i] = 0;
    for (k = 0; k < V; k++) for (i = 0; i < V; i++)
            for (j = 0; j < V; j++)
                if (D[i][k] && D[k][j] && i != j)
                    if (D[i][k] + D[k][j] < D[i][j] || D[i][j] == 0) D[i][j] = D[i][k] + D[k][j];
}
//главная функция 
int main() {
    cin >> n >> v;
    for (i = 0; i < n; i++) for (j = 0; j < n; j++) {
            cin >> GR[i][j];
        }
    FU(GR, n);
    for (i = 0; i < v; i++)
    {
        cin >> mas[i][0] >> mas[i][1];cin>> a >> b
        cout << gr[a][b]
    }
    FU(GR, n);
    return 0;
}