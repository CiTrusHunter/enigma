//
//  machine.h
//  Enigma
//
//  Created by Petr Mánek on 21.02.14.
//  Copyright (c) 2014 TEEN, s.r.o. All rights reserved.
//

#ifndef __Enigma__machine__
#define __Enigma__machine__

#include <iostream>
#include "rotor.h"

class machine {
public:
    machine();
    
    char encode(char);
    
private:
    rotor m_r1, m_r2, m_r3;
};

#endif /* defined(__Enigma__machine__) */