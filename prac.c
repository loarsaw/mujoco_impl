#include "mujoco.h"
#include "stdio.h"

char error[1000];
myModel* m;
myData* d;

int main(void){

m = my_loadXML("hello.xml",NULL,error,1000);
if(!m){
printf("\n%s\n",error);
return 1;
}

d = mj_makeData(m);

while(d->time < 10){
mj_step(m,d);
}

mj_deleteData(d);
mj_deleteModel(m);

return 0;

}
