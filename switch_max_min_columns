/* 
Вернулась к задаче спустя полтора года :)
Удивилась, как близко была к решению, но так не дошла до него
Поменять местами столбец с минимальной суммой элементов со столбцом с максимальной суммой элементов.

Входные данные:
Два натуральных числа N и M. Далее с новой строки N строк по M целых чисел в каждой. N и M не превышают десяти.

Выходные данные:
Вывести исходную матрицу N на M, в которой столбец с минимальной и столбец с максимальной суммой элементов поменяны местами. 
Числа разделять пробелами. Если присутствует несколько столбцов с одинаковой минимальной суммой элементов, то использовать первый по порядку. 
Аналогично с максимальной суммой.
*/
#include <stdio.h>

int main(void)
{
    int n, m, sum = 0, max = -9999, min = 9999;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &arr[i][j]);
    
   int min_index = 9999, max_index = -9999;
    
   for (int j = m - 1; j >= 0; j--) {
        sum = 0;
        for (int i = 0; i < n; i++)
            sum += arr[i][j];
        //printf("%d ", sum);
        if(sum >= max) { 
            max = sum;
            max_index = j;
        }
        if(sum <= min) {
            min = sum;
            min_index = j;
        }
    }  
    //printf("\nmin_index: %d max_index: %d\n", min_index, max_index);     
    int temp;
    for(int i = 0; i < n; i++) {
        temp = arr[i][min_index];
        arr[i][min_index] = arr[i][max_index];
        arr[i][max_index] = temp;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}
