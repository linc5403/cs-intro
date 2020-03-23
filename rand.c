/*
 * ============================================================================
 *
 *       Filename:  rand.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/23/2020 07:08:06 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  lin chuan , linch1982@gmail.com
 *   Organization:  
 *
 * ============================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

char* names[] = {
    "杨星辰",
    "孙孝",
    "俞超",
    "王进进",
    "方启豪",
    "陈鹏",
    "李星星",
    "孙明羽",
    "张志",
    "李海洋",
    "汤典",
    "田文镐",
    "张松怡",
    "朱强",
    "朱银生"
};


int main(int argc, char** argv) {
    unsigned int len = sizeof(names) / sizeof(names[0]);
    srand(time(NULL));
    unsigned int index = rand() % len;
    printf("今天检查 %s 的作业\n", names[index]);
    return 0;
}

#if 0
int main(int argc, char** argv) {
    unsigned int len = sizeof(names) / sizeof(names[0]);
    srand(time(NULL));
    int a[len];
    for (int i = 0; i < len; i++)
        a[i] = i;
    for (int i = len-1; i > 0; i--)
    {
        // 选出一个来替换
        int swap =  rand() % (i+1);
        if (swap != i)
        {
            int t = a[swap];
            a[swap] = a[i];
            a[i] = t;
        }
    }

    for (int i = 0; i < len; i++) {
        printf("%s ", names[a[i]]);
    }
    printf("\n");
}
#endif
