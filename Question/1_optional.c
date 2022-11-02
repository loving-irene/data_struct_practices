//
// Created by 76435 on 2022/11/1.
//
// version:0.0.1
// 实现基本功能，CURD

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_NUM 5

void add(){

}

void update(){

}

void del(){

}

void qName(char *name){

}

void qAge(char age){

}

int main(int argc,char *argv[]){

    char *names[MAX_NUM];
    int ages[MAX_NUM];

    printf("员工花名册（上限%d）\n",MAX_NUM);
    printf("Usage Example:\n");
    printf("add name age #新增员工\n");
    printf("del name age #删除员工\n");
    printf("update name age #更新员工\n");
    printf("query name age #查找员工\n");
    printf("all #显示所有花名册\n");

    char *name;
    char *action;
    int age;
    int index=0;
    while (true){
        printf("输入指令:\n");
        scanf("%s %s %d",action,name,&age);
        printf("action:%s name:%s age:%d\n",action,name,age);
        if(index>MAX_NUM){
            printf("已达输入上限");
        }

        if (strcmp(action,"add") == 0){
            names[index]=name;
            ages[index]=age;
            index++;
        }

        if(strcmp(action,"all") == 0){
            for (int i = 0; i < MAX_NUM; i++) {
                printf("name:%s age:%d\n",names[i],ages[i]);
            }
        }
    }
}

