#include "Pthread1.h"
#include<pthread.h>
int main()
{
    pthread_t thread1, thread2, thread3;
    pthread_create(&thread1,NULL,threadProc,NULL);
    pthread_create(&thread2,NULL,threadProc,NULL);
    pthread_create(&thread3,NULL,threadProc,NULL);
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    pthread_join(thread3,NULL);
    return 0;
}