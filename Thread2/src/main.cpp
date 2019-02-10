#include "Account.h"
#include "Thread2.h"
int main()
{
    Account account(5000.00);
    Thread2 depositor(&account, ThreadType::DEPOSITOR );
    Thread2 withdrawer(&account, ThreadType::WITHDRAWER );
    depositor.start();
    withdrawer.start();

    depositor.join();
    withdrawer.join();

    return 0;
}