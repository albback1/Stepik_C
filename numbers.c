#include <stdio.h>
#include <string.h>

int main() {
    char str[102] = {0};
    fgets(str, 102, stdin);
    int flag = 0;
    int count = 0;
    // проверка точки в начале и в конце (требования автотеста)
    if(str[0] == '.' || str[strlen(str) - 2] == '.') {
        printf("error"); 
        return 0;
    }
    // проверка на валидность (только цифры, знаки '.' (точка), '-' (минус))
    for(int i = 0; i < strlen(str) - 1; i++) {
        if(str[i] >= 48 && str[i] <= 57 || str[i] == 46 || str[i] == 45) 
            continue;
        else
        {
            printf("error"); 
            return 0;
        }
    }
    //наличие точки для определения float или int
    if(strpbrk(str, ".") == NULL) { //int
            for(int i = 0; i < strlen(str); i++) {
                if(str[i - 1] != NULL && str[i] == '-' && str[i + 1] != NULL) flag++; //проверка против записи формать 123-456, если да, то флаг для ошибки
        }
    }
    else { //float
    // цикл для поиска количества вхождений точки
        for(int i = 0; i < strlen(str); i++) {
            if(str[i] == '.') {
                count++; //количество точек
                flag = -1; //точка есть
            }
        }
    }
    //финальная проверка
    if(flag > 0 || count > 1) printf("error");
    else if(flag == -1) printf("float");
    else printf("int");
    
    return 0;
}
