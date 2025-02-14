#include <unistd.h>

int main(void);

int    math(float pG, float pE)
{
    if ((pG * 0.70) < pE)
        return (0);
    else if ((pG * 0.70) > pE)
        return (1);
    else
        return (2);
}
