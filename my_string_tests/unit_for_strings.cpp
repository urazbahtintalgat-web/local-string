#include "unit_for_strings.h"

#include "..\my_string.h"

#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

//void test_smthg() {
//    if (success) {
//        printf("[OK] test success strstr" "\n");
//    }
//    else {
//        // Очень подробно
//        // Что ожидалось . что получилось . и тд
//    }
//}

void my_str_tests() {
    //my_puts testing
    my_puts("i");
    printf("correct %s\n", "i");
    my_puts("love");
    printf("correct %s\n", "love");
    my_puts("big");
    printf("correct %s\n", "big");
    my_puts("cakes");
    printf("correct %s\n", "cakes");
    //my_strchr testing
    char* ans = my_strchr("lol", (int) 'l');
    printf("%c\n", *ans);
    printf("correct %c\n", 'l');
    //my_strlen testing
    printf("%d\n", my_strlen("sosiska"));
    printf("correct 7\n");
    //my_strcpy testing
    char ans1[100];
    const char enter1[] = "sosiska";
    my_strcpy(ans1, enter1);
    printf("%s\n", ans1);
    printf("correct sosiska\n");
    //my_strncpy testing
    char ans2[100];
    const char enter2[] = "sosiska";
    my_strncpy(ans2, enter2, 5);
    printf("%s\n", ans2);
    printf("correct sosis\n");
    //my_strcat
    char ans3[100] = "soso";
    const char enter3[] = "sosiska";
    my_strcat(ans3, enter3);
    printf("%s\n", ans3);
    printf("correct sosososiska\n");
    //my_strncat testing
    char ans4[100] = "soso";
    const char enter4[] = "sosiska";
    my_strncat(ans4, enter4, 5);
    printf("%s\n", ans4);
    printf("correct sosososis\n");
    //----------------------------------------------------------------
    FILE* tests = fopen("my_string_tests/unit_tests.txt", "r");
    //----------------------------------------------------------------
    //my_fgets testing
    char ans5[100];
    printf("%s\n", my_fgets(ans5, 6, tests));
    printf("correct sosis\n");
    //my_atoi testing
    printf("%d\n", my_atoi("    01488jfjfdk"));
    printf("correct 1488\n");
    printf("%d\n", my_atoi("    -01488jfjfdk"));
    printf("correct -1488\n");
    //my_strdup testing
    printf("%s\n", my_strdup("sosiska"));
    printf("correct sosiska\n");
    //my_getline testing
    //printf("my_getline testing\n");
    char ans6[1000];
    size_t size = sizeof(ans6);
    char* ans6pointer = ans6;
    my_getline(&ans6pointer, &size, tests);
    printf("%s", ans6);
    printf("correct ka 1\n");
    //my_strstr testing
    printf("%s\n", my_strstr("sosiska", "isk"));
    printf("correct iska");
    //------------------------------------
    fclose(tests);
}
