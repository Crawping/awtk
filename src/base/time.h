﻿/**
 * File:   time.h
 * Author: Li XianJing <xianjimli@hotmail.com>
 * Brief:  time
 *
 * Copyright (c) 2018 - 2018  Li XianJing <xianjimli@hotmail.com>
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * License file for more details.
 *
 */

/**
 * History:
 * ================================================================
 * 2018-04-28 Li XianJing <xianjimli@hotmail.com> created
 *
 */

#ifndef TK_TIME_H
#define TK_TIME_H

#include "base/types_def.h"

BEGIN_C_DECLS

uint32_t time_now_s(void);
uint32_t time_now_ms(void);

END_C_DECLS

#endif /*TK_TIME_H*/