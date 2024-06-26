#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t now;
    tm ptm;

    if (time(&now) == -1)
    {
        perror("time");
        return 1;
    }

    if (localtime_s(&ptm, &now) != 0)
    {
        perror("localtime_s");
        return 1;
    }

    char buffer[64];
    strftime(buffer, sizeof(buffer), "예제 만드는 지금은 %Y년 %m월 %d일, %H시, %M분 %S초입니다. (%p)\n", &ptm);

    cout << buffer;

    return 0;
}