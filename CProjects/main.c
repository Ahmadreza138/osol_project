#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

struct forms{
    int index;
    char name[100];
    int textbox[2];
    char lables[1000][1000];
    char lables_amount[1000][1000];
};

int len_char_1d(char str[1000]){
    int n=0;
    while (str[n]!='\0')
        n++;
    return n;
}

int len_char_2d(char str[][1000]){
    int n=0;
    while (str[n][0]!='\0')
        n++;
    return n;
}

void show_form(struct forms form){
    printf(" ");
    for (int i = 0; i < form.textbox[1]; ++i)
        printf("-");
    printf("\n");
    for (int i = 0; i < form.textbox[0]; ++i) {
        printf("|");
        printf("%s : ",form.lables[i]);
        prin
        for (int j = 0; j < form.textbox[1]-2-len_char_1d(form.lables[i]); ++j)
            printf(" ");
        printf("|\n");
    }
    for (int i = 0; i < form.textbox[1]; ++i)
        printf("-");
    printf("\n");
}


void get_commend_1(struct forms form){
    int command;
    scanf("%d",command);
    if (command==1){
        printf("height : ");
        scanf("%d",&form.textbox[0]);
        if (form.textbox[0]>13){
            printf("please re enter height : ");
            scanf("%s",&form.textbox[0]);
        }
        printf("width : ");
        scanf("%d",&form.textbox[1]);
        if (form.textbox[1]>25){
            printf("please re enter width : ");
            scanf("%s",&form.textbox[1]);
        }
        system("cls");
        printf("----------------------------------------------------------------------\n");

    }else if (command==2){

    }
}

void show(char buttons[][1000]){
    printf("options:\n");
    for (int i = 0; i < len_char_2d(buttons); ++i) {
        printf("%d-%s ",i+1,buttons[i]);
        if (i>=5 && i%5==0)
            printf("\n");
    }

}


void start(){
    struct forms form[100];
    int num_of_form=0;
    for (int i = 0; i < 15; ++i)
        printf("\n");
    printf("----------------------------------------------------------------------\n");
    printf("Choose your desired option!\n");
    char buttons[1000][1000]={"Create new form", "List of forms"};
    show(buttons);
    get_commend_1(form[num_of_form++]);
}



int main(){
    start();
    return 1;
}




