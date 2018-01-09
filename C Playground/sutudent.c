//
//  sutudent.c
//  C Playground
//
//  Created by yesdgq on 2018/1/5.
//  Copyright © 2018年 yesdgq. All rights reserved.
//

#include "sutudent.h"

int functionA (int argc, const char * argv[]) {
    
        char str[100],c;
        int j,k;
        printf("please input a string:\n");
        gets(str);
        printf("\nEnter a character:");
        c = getchar();
        for(j=k=0; str[j]!='\0'; j++)
            if (str[j] != c)
                str[k++] = str[j];
        str[k] = '\0';
        printf("\n%s\n", str);
    

    
// ***************************** 乘法口诀  *****************************
//    int i,j,result;
//    printf("\n");
//    for (i=1;i<10;i++)
//    {
//        for(j=1;j<10;j++)
//        {
//            result=i*j;
//            printf("%d*%d=%-3d",i,j,result); /*-3d表示左对齐，占3位*/
//        }
//        printf("\n"); /*每一行后换行*/
//    }
//    getchar();
    return 0;
}
