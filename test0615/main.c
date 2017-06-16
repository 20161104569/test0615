//
//  main.c
//  test0615
//
//  Created by 20161104569 on 17/6/15.
//  Copyright © 2017年 20161104569. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    // printf("Hello, World!\n");
    //return 0;
    int a[20];
    int j,i,t;
    FILE *fp1,*fp2;
    fp1=fopen("//Users//a20161104569//Desktop//test0615//sortout.txt","w+");
    fp2=fopen("//Users//a20161104569//Desktop//test0615//sort.txt","r+");
    if(fp2==NULL)
    {
        printf("打开文件错误,要打开的文件可能不存在");
    }
    else
    {
        
        for(i=0;i<10;i++)
        {
            fscanf(fp2,"%d",&a[i]);
        }
        for(i=0;i<10;i++)
        {
            for(j=i+1;j<10;j++)
            {
                if(a[i]>a[j])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
        }
        for(i=0;i<10;i++)
        {
            printf("%d ",a[i]);
            fprintf(fp1,"%d ",a[i]);
        }
        //fprintf(fp1,"\n");
        printf("\n");
        
        
        fclose(fp1);
        fclose(fp2);
    }
    return 0;
}
