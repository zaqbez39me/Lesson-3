#include <iostream>

using namespace std;
/*
void tsp_solve_4(int distances[4][4]) {
    int currentMinimalPathDistance = 1000000;
    int firstCity = 0;
    for (int secondCity = 1; secondCity <= 3; secondCity = secondCity + 1) {
        for (int thirdCity = 1; thirdCity <= 3; thirdCity = thirdCity + 1) {
            for (int fourthCity = 1; fourthCity <= 3; fourthCity = fourthCity + 1)
            {
                int orderOfCitiesInPath[4] = { firstCity, secondCity, thirdCity, fourthCity };
                bool CitiesInPathAreAllDifferent = true;
                for (int firstIndex = 0; firstIndex <= 3; firstIndex = firstIndex + 1) {
                    for (int secondIndex = 0; secondIndex <= 3; secondIndex = secondIndex + 1) {
                        if (firstIndex != secondIndex) {
                            int firstCityToCheck = orderOfCitiesInPath[firstIndex];
                            int secondCityToCheck = orderOfCitiesInPath[secondIndex];
                            if (firstCityToCheck == secondCityToCheck) {
                                CitiesInPathAreAllDifferent = false;
                            }
                        }
                    }
                }
                if (!CitiesInPathAreAllDifferent) {
                    continue;
                } else {
                    int currentPathDistance = 0;
                    currentPathDistance += distances[firstCity][secondCity];
                    currentPathDistance += distances[secondCity][thirdCity];
                    currentPathDistance += distances[thirdCity][fourthCity];
                    currentPathDistance += distances[fourthCity][firstCity];
                    if (currentPathDistance < currentMinimalPathDistance)
                        currentMinimalPathDistance = currentPathDistance;
                }
            }
        }
    }
    cout << currentMinimalPathDistance;
}

void tsp_solve_5(int distances[5][5]){
    int CurMinpathDist = 10000000;
    int firstCity = 0;
    for(int secCity = 1; secCity <= 4; secCity++){
        for(int thirdCity = 1; thirdCity <= 4; thirdCity++){
            for(int fourthCity = 1; fourthCity <= 4; fourthCity++){
                for(int fithCity = 1; fithCity <= 4; fithCity++){
                    int orderOfCitiesInPath[5] = {firstCity, secCity, thirdCity, fourthCity, fithCity};
                    bool CitiesPathAllDiff = true;
                    for(int i = 0; i <= 4; i++){
                        for(int j = 0; j <= 4; j++){
                            if(i != j){
                                int first = orderOfCitiesInPath[i];
                                int second = orderOfCitiesInPath[j];
                                if (first == second){
                                    CitiesPathAllDiff = false;
                                }
                            }
                        }
                    }
                    if(!CitiesPathAllDiff){
                        continue;
                    } else {
                        int curDist = 0;
                        curDist += distances[firstCity][secCity];
                        curDist += distances[secCity][thirdCity];
                        curDist += distances[thirdCity][fourthCity];
                        curDist += distances[fourthCity][fithCity];
                        curDist += distances[fithCity][firstCity];
                        if(curDist < CurMinpathDist){
                            CurMinpathDist = curDist;
                        }
                    }
                }
            }
        }
    }
    cout << CurMinpathDist;
}

void tsp_solve_6(int distances[6][6]){
    int CurMinpathDist = 10000000;
    int firstCity = 0;
    for(int secCity = 1; secCity <= 5; secCity++){
        for(int thirdCity = 1; thirdCity <= 5; thirdCity++){
            for(int fourthCity = 1; fourthCity <= 5; fourthCity++){
                for(int fithCity = 1; fithCity <= 5; fithCity++){
                    for(int sixthCity = 1; sixthCity <= 5; sixthCity++){
                        int orderOfCitiesInPath[6] = {firstCity, secCity, thirdCity, fourthCity, fithCity, sixthCity};
                        bool CitiesPathAllDiff = true;
                        for(int i = 0; i <= 5; i++){
                            for(int j = 0; j <= 5; j++){
                                if(i != j){
                                    int first = orderOfCitiesInPath[i];
                                    int second = orderOfCitiesInPath[j];
                                    if (first == second){
                                        CitiesPathAllDiff = false;
                                    }
                                }
                            }
                        }
                        if(!CitiesPathAllDiff){
                            continue;
                        } else {
                            int curDist = 0;
                            curDist += distances[firstCity][secCity];
                            curDist += distances[secCity][thirdCity];
                            curDist += distances[thirdCity][fourthCity];
                            curDist += distances[fourthCity][fithCity];
                            curDist += distances[fithCity][sixthCity];
                            curDist += distances[sixthCity][firstCity];
                            if(curDist < CurMinpathDist){
                                CurMinpathDist = curDist;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << CurMinpathDist;
}

int main(){
    int n;
    cin >> n;
    if (n == 4){
        int four_cities[4][4];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> four_cities[i][j];
            }
        }
        tsp_solve_4(four_cities);
    } else if (n == 5){
        int five_cities[5][5];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> five_cities[i][j];
            }
        }
        tsp_solve_5(five_cities);
    } else if (n == 6){
        int six_cities[6][6];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> six_cities[i][j];
            }
        }
        tsp_solve_6(six_cities);
    } else {
        cout << "Inappropriate n";
    }
    return 0;
}
*/


void find_shortest_path_6(int distances[6][6]){
    int curMinpathDist = 10000000;
    int firstCity = 0;
    for(int secCity = 1; secCity <= 5; secCity++){
        for(int thirdCity = 1; thirdCity <= 5; thirdCity++){
            for(int fourthCity = 1; fourthCity <= 5; fourthCity++){
                for(int fithCity = 1; fithCity <= 5; fithCity++){
                    for(int sixthCity = 1; sixthCity <= 5; sixthCity++){
                        int orderOfCitiesInPath[6] = {firstCity, secCity, thirdCity, fourthCity, fithCity, sixthCity};
                        bool CitiesPathAllDiff = true;
                        for(int i = 0; i <= 5; i++){
                            for(int j = 0; j <= 5; j++){
                                if(i != j){
                                    int first = orderOfCitiesInPath[i];
                                    int second = orderOfCitiesInPath[j];
                                    if (first == second){
                                        CitiesPathAllDiff = false;
                                    }
                                }
                            }
                        }
                        if(!CitiesPathAllDiff){
                            continue;
                        } else {
                            int curDist = 0;
                            curDist += distances[firstCity][secCity];
                            curDist += distances[secCity][thirdCity];
                            curDist += distances[thirdCity][fourthCity];
                            curDist += distances[fourthCity][fithCity];
                            curDist += distances[fithCity][sixthCity];
                            curDist += distances[sixthCity][firstCity];
                            if(curDist < curMinpathDist){
                                curMinpathDist = curDist;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << curMinpathDist;
}
/*
void swap(int *a, int i, int j)
{
    int s = a[i];
    a[i] = a[j];
    a[j] = s;
}

bool NextSet(int *a, int n, int m)
{
    int j;
    do  // повторяем пока не будет найдено следующее размещение
    {
        j = n - 1;
        while (j != -1 && a[j] >= a[j + 1]) j--;
        if (j == -1)
            return false; // больше размещений нет
            int k = n - 1;
            while (a[j] >= a[k]) k--;
            swap(a, j, k);
            int l = j + 1, r = n - 1; // сортируем оставшуюся часть последовательности
            while (l < r)
                swap(a, l++, r--);
    } while (j > m - 1);
    return true;
}
*/
void find_shortest_path_5(int distances[5][5]){
    int curMinpathDist = 10000000;
    int firstCity = 0;
    for(int secCity = 1; secCity <= 4; secCity++){
        for(int thirdCity = 1; thirdCity <= 4; thirdCity++){
            for(int fourthCity = 1; fourthCity <= 4; fourthCity++){
                for(int fithCity = 1; fithCity <= 4; fithCity++){
                    int orderOfCitiesInPath[5] = {firstCity, secCity, thirdCity, fourthCity, fithCity};
                    bool CitiesPathAllDiff = true;
                    for(int i = 0; i <= 4; i++){
                        for(int j = 0; j <= 4; j++){
                            if(i != j){
                                int first = orderOfCitiesInPath[i];
                                int second = orderOfCitiesInPath[j];
                                if (first == second){
                                    CitiesPathAllDiff = false;
                                }
                            }
                        }
                    }
                    if(!CitiesPathAllDiff){
                        continue;
                    } else {
                        int curDist = 0;
                        curDist += distances[firstCity][secCity];
                        curDist += distances[secCity][thirdCity];
                        curDist += distances[thirdCity][fourthCity];
                        curDist += distances[fourthCity][fithCity];
                        curDist += distances[fithCity][firstCity];
                        if(curDist < curMinpathDist){
                            curMinpathDist = curDist;
                        }
                    }
                }
            }
        }
    }
    cout << curMinpathDist;
}
/*
void find_shortest_path_n(int n, int distances[100][100]){
    int curMinpathDist = 10000000;
    int arr[n];
    while (NextSet(arr, n, n - 1)){
        bool CitiesPathAllDiff = true;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i != j){
                    int first = arr[i];
                    int second = arr[j];
                    if (first == second){
                        CitiesPathAllDiff = false;
                    }
                }
            }
        }
        if(!CitiesPathAllDiff){
            continue;
        } else {
            int curDist = 0;
            curDist += distances[0][arr[0]];
            for(int i = 1; i < n; i++){
                curDist += distances[arr[i - 1]][arr[i]];
            }
            curDist += distances[arr[n - 1]][0];
            if(curDist < curMinpathDist){
                curMinpathDist = curDist;
            }
        }
        cout << curMinpathDist;
    }
}
*/
    int main(){
        int n;
        cin >> n;
        int posl[n];
        if(n == 5){
            int Five_to_Five[5][5];
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    cin >> Five_to_Five[i][j];
                }
            }
            find_shortest_path_5(Five_to_Five);
        } else if(n == 6){
            int Six_to_Six[6][6];
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    cin >> Six_to_Six[i][j];
                }
            }
            find_shortest_path_6(Six_to_Six);
        } else {
            int matr[100][100];
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    cin >> matr[i][j];
                }
            }
            find_shortest_path_n(n, matr);
        }
    }
