/****************************************************************************
 *
 *   Copyright (c) 2015 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/**
 * @file px4io_params.c
 *
 * Parameters defined by the PX4IO driver
 *
 * @author Lorenz Meier <lorenz@px4.io>
 */

#include <nuttx/config.h>
#include <systemlib/param/param.h>

/**
 * Invert direction of main output channel 1
 *
 * Set to 1 to invert the channel, 0 for default direction.
 *
 * @reboot_required true
 *
 * @min 0
 * @max 1
 * @group PWM Outputs
 */
PARAM_DEFINE_INT32(PWM_MAIN_REV1, 0);

/**
 * Invert direction of main output channel 2
 *
 * Set to 1 to invert the channel, 0 for default direction.
 *
 * @reboot_required true
 *
 * @min 0
 * @max 1
 * @group PWM Outputs
 */
PARAM_DEFINE_INT32(PWM_MAIN_REV2, 0);

/**
 * Invert direction of main output channel 3
 *
 * Set to 1 to invert the channel, 0 for default direction.
 *
 * @reboot_required true
 *
 * @min 0
 * @max 1
 * @group PWM Outputs
 */
PARAM_DEFINE_INT32(PWM_MAIN_REV3, 0);

/**
 * Invert direction of main output channel 4
 *
 * Set to 1 to invert the channel, 0 for default direction.
 *
 * @reboot_required true
 *
 * @min 0
 * @max 1
 * @group PWM Outputs
 */
PARAM_DEFINE_INT32(PWM_MAIN_REV4, 0);

/**
 * Invert direction of main output channel 5
 *
 * Set to 1 to invert the channel, 0 for default direction.
 *
 * @reboot_required true
 *
 * @min 0
 * @max 1
 * @group PWM Outputs
 */
PARAM_DEFINE_INT32(PWM_MAIN_REV5, 0);

/**
 * Invert direction of main output channel 6
 *
 * Set to 1 to invert the channel, 0 for default direction.
 *
 * @reboot_required true
 *
 * @min 0
 * @max 1
 * @group PWM Outputs
 */
PARAM_DEFINE_INT32(PWM_MAIN_REV6, 0);

/**
 * Invert direction of main output channel 7
 *
 * Set to 1 to invert the channel, 0 for default direction.
 *
 * @reboot_required true
 *
 * @min 0
 * @max 1
 * @group PWM Outputs
 */
PARAM_DEFINE_INT32(PWM_MAIN_REV7, 0);

/**
 * Invert direction of main output channel 8
 *
 * Set to 1 to invert the channel, 0 for default direction.
 *
 * @reboot_required true
 *
 * @min 0
 * @max 1
 * @group PWM Outputs
 */
PARAM_DEFINE_INT32(PWM_MAIN_REV8, 0);

/**
 * Enable S.BUS out
 *
 * Set to 1 to enable S.BUS version 1 output instead of RSSI.
 *
 * @min 0
 * @max 1
 * @group PWM Outputs
 */
PARAM_DEFINE_INT32(PWM_SBUS_MODE, 0);

/**
* The coefficient A in the relationship RPM = A * PWM + B * voltage + C
*
* @unit
* @min -99999.9
* @max 99999.9
* @group Physics
*/
PARAM_DEFINE_FLOAT(PHY_RPM_PER_PWM, 0.0f);

/**
* The coefficient B in the relationship RPM = A * PWM + B * voltage + C
*
* @unit 1/volt
* @min -99999.9
* @max 99999.9
* @group Physics
*/
PARAM_DEFINE_FLOAT(PHY_RPM_PER_VOLT, 0.0f);

/**
* The coefficient C in the relationship RPM = A * PWM + B * voltage + C
*
* @unit
* @min -99999.9
* @max 99999.9
* @group Physics
*/
PARAM_DEFINE_FLOAT(PHY_RPM_AT_ZERO_PWM_AND_VOLTS, 0.0f);
