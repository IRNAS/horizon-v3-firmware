/* syshal_batt.h - HAL for battery monitoring
 *
 * Copyright (C) 2018 Arribada
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef _SYSHAL_BATT_H_
#define _SYSHAL_BATT_H_

#include <stdint.h>
#include <stdbool.h>

// Constants
#define SYSHAL_BATT_NO_ERROR                   ( 0)
#define SYSHAL_BATT_ERROR_DEVICE               (-1)
#define SYSHAL_BATT_ERROR_BUSY                 (-2)
#define SYSHAL_BATT_ERROR_TIMEOUT              (-3)
#define SYSHAL_BATT_ERROR_DEVICE_UNRESPONSIVE  (-4)

int syshal_batt_init(void);
int syshal_batt_term(void);
int syshal_batt_level(uint8_t * level);
int syshal_batt_voltage(uint16_t * voltage);

#endif /* _SYSHAL_BATT_H_ */