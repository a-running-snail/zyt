#include <time.h>
#include <string.h>
#include <log/log.h>
#include <utils.h>
#include "ifaa_common.h"


long kpi_start_time_ms = 0;
long kpi_end_time_ms = 0;

long get_current_ms()
{
    struct timespec res;
    clock_gettime(CLOCK_REALTIME, &res);
    return 1000 * res.tv_sec + res.tv_nsec / 1e6;
}

/*
   4bytes | 4bytes     | 4bytes
   return | status_len | status
*/

void print_result(int cmd_id,char* p_rev_buf)
{
    char cmd_str[64] = { 0 };
    get_cmd_str(cmd_id,cmd_str);
    int* p_result = (int*)p_rev_buf;
    int* p_buf_len = (int*)(p_rev_buf+4);
    if(cmd_id==IFAA_TA_CMD_QUERY_STATUS) {
        int* p_status = (int*)(p_rev_buf+8);
        ALOGI("ifaa_kpi : called %s ,used time : %ld ms , result = %d , p_buf_len = %d status = %d ",cmd_str,kpi_end_time_ms-kpi_start_time_ms,*p_result,*p_buf_len,*p_status);
    } else {
        ALOGI("ifaa_kpi : called %s ,used time : %ld ms , result = %d , buf_len = %d",cmd_str,kpi_end_time_ms-kpi_start_time_ms,*p_result,*p_buf_len);
    }
}
