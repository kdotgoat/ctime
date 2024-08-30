#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t now =time (0);
    char*currentTime = ctime(&now);
    cout<<"Current time is: "<<currentTime;
      return 0;
}
