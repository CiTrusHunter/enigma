//
//  tests.h
//  Enigma
//
//  Created by Petr Mánek on 20.02.14.
//  Copyright (c) 2014 TEEN, s.r.o. All rights reserved.
//

#ifndef __Enigma__tests__
#define __Enigma__tests__

#include <iostream>
#include "machine.h"
#include "plug.h"

void test_rotor();
void test_rotor_custom_wiring();

void test_rotor_forward_backward();
void test_rotor_turnover();
void test_machine_encode();
void test_plugboard();
void test_machine_encode_plugboard();
void test_machine_encode_decode();

#endif /* defined(__Enigma__tests__) */
