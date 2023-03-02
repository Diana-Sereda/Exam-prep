#include <stdio.h>

struct humans{
    char name[20];
    char surname[20];
    int height;
};
void create_human(struct humans *human,int n);
void compare_height(struct humans *human,int n,int a);

int main(){
int n,a;
scanf("%d",&n);
struct humans human[n];
create_human(human, n);
scanf("%d",&a);
compare_height(human, n,a);
    return 0;
}
void create_human(struct humans *human,int n){
    for(int i=0; i<n;i++){
        scanf("%s",human[i].name);
        scanf("%s",human[i].surname);
        scanf("%d",&human[i].height);
    } 
}

void compare_height(struct humans *human,int n, int a){
    for(int i=0; i<n;i++){
        if(human[i].height>=a){
            printf("%s %s",human[i].name, human[i].surname);
        }
    }
}