#include <Thread2.h>

mutex Thread2::locker;
Thread2::Thread2(Account *pAccount, ThreadType typeOfThread )
{
 this->pAccount = pAccount;
 pThread = NULL;
 stopped = false;
 threadType = typeOfThread;

}
Thread2::~Thread2()
{
    delete pThread;
    pThread = NULL;
}
void Thread2::run()
{
    while(1)
    {
        switch (threadType)
        {
            case DEPOSITOR:
                locker.lock();
                cout << "Depositor : current balance is " << pAccount->getBalance() << endl;
                pAccount->deposit(2000.00);
                cout << "Depositor : post deopsit balance is " << pAccount->getBalance() << endl;
                locker.unlock();
                this_thread::sleep_for(1s);
            break;
            case WITHDRAWER:
                locker.lock();
                cout << "Withdrawer: current balance is "<< pAccount->getBalance() << endl;
                pAccount->withdraw(1000.00);
                cout << "Withdrawer: post withdraw balance is "<< pAccount->getBalance() << endl;
                locker.unlock();
                this_thread::sleep_for(1s);
            break;    
        }
    }
}
void Thread2::start()
{
    pThread = new thread(&Thread2::run, this );
}
void Thread2::stop()
{
    stopped = true;
}
void Thread2::join()
{
    pThread->join();
}
void Thread2::detach()
{
    pThread->detach();
}