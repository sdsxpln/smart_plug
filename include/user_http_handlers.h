#ifndef __USER_HTTP_HANDLERS_H__
#define __USER_HTTP_HANDLERS_H__

#include "user_config.h"
#include "light_http.h"

int http_system_info_handler(struct query *query);
int http_get_device_info_handler(struct query *query);
int http_get_wifi_info_list_handler(struct query *query);

#endif