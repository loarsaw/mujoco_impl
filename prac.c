// correct way to import based on your step up
// try to download, extract and place the them in usr/local 
#include <mujoco/mujoco.h>
#include <stdio.h>

char error[1000];
mjModel* m;  
mjData* d;  

int main(void){
    m = mj_loadXML("hello.xml", NULL, error, 1000); 
    if(!m){
        printf("\n%s\n", error);
        return 1;
    }
    d = mj_makeData(m);
    while(d->time < 10){
        mj_step(m, d);
    }
    mj_deleteData(d);
    mj_deleteModel(m);
    return 0;
}
