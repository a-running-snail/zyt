#include <stdio.h>
#include "ifaa_manager_interface.h"

int main()
{
    printf("ifaa test start.");
    int ret = 0;
    uint8_t param[4] = {1, 2, 3, 4};
    uint8_t *result = NULL;
    size_t result_len = 4;
    ret = daemonProcessCmd((uint8_t*)param, 4, &result, &result_len);
    printf("hehe completed with %04x.\n", ret);
    return ret;
}
