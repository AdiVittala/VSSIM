// ssd_log_manager.h
// Copyright(c)2014
// Hanyang University, Seoul, Korea
// Embedded Software Systems Laboratory. All right reserved

#ifndef _LOG_MANAGER_H_
#define _LOG_MANAGER_H_

void INIT_LOG_MANAGER(void);
void TERM_LOG_MANAGER(void);
void WRITE_LOG(char* szLog);

void THREAD_SERVER(void* arg);
void THREAD_CLIENT(void* arg);

#endif
