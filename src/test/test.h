// Copyright 2014 Technical Machine, Inc. See the COPYRIGHT
// file at the top-level directory of this distribution.
//
// Licensed under the Apache License, Version 2.0 <LICENSE-APACHE or
// http://www.apache.org/licenses/LICENSE-2.0> or the MIT license
// <LICENSE-MIT or http://opensource.org/licenses/MIT>, at your
// option. This file may not be copied, modified, or distributed
// except according to those terms.

#ifndef SDRAM_TEST_H_
#define SDRAM_TEST_H_

#ifdef __cplusplus
extern "C" {
#endif


void test_leds (void);
void test_gpios (void);
void test_udp_send (void);
void test_i2c (char port);
void test_i2c_master_slave (uint8_t mode);
void test_spi (char port);
void test_uart (char port);
void test_gpio_read (void);
void test_adc (void);
void test_unconnected_adc(void);
void test_dac (void);
void test_pwm (void);

int test_sdram_1 (void);
int test_sdram_2 (void);


// external

void test_hw_spi (void);
void testalator();

#ifdef __cplusplus
};
#endif

#endif
