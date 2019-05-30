
#include <string>

#include <assert.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

#include <log/log.h>
#include <cutils/log.h>

int daemonProcessCmd(const uint8_t* param, size_t size_param, uint8_t** result, size_t* size_result);
