#ifndef KPI_H
#define KPI_H

extern long kpi_start_time_ms;
extern long kpi_end_time_ms;
/* return current time in milliseconds */
long get_current_ms();
void print_result(int cmd_id,char* p_rev_buf);


#endif
