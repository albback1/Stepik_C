#include <stdio.h>
#include <string.h>

int main() {
    char str[102] = {0};
    fgets(str, 102, stdin);
    int flag_beg = -1, flag_end = -1, flag = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '/' && str[i + 1] == '*' && str[i + 2] != '/') {
            flag++;
            flag_beg = i;
        }
        if (str[i] == '*' && str[i + 1] == '/' && str[i + 2] != '*') {
            flag++;
            flag_end = i + 2;
        } 
    }
    
    if (flag == 0 || flag == 1) puts(str);
    else {
        for (int i = 0; i < flag_beg; i++)
            printf("%c", str[i]);
       
        for (int i = flag_end; i < strlen(str); i++)     
            printf("%c", str[i]);
    }
 
    //printf("%d %d", flag_beg, flag_end);
    return 0;
}