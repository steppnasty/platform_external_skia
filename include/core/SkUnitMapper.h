
/*
 * Copyright 2006 The Android Open Source Project
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */


#ifndef SkUnitMapper_DEFINED
#define SkUnitMapper_DEFINED

#include "SkRefCnt.h"
#include "SkScalar.h"

#include "SkFlattenable.h"

class SkUnitMapper : public SkFlattenable {
public:
    SkUnitMapper() {}

    /** Given a value in [0..0xFFFF], return a value in the same range.
    */
    virtual uint16_t mapUnit16(uint16_t x) = 0;
    
protected:
    SkUnitMapper(SkFlattenableReadBuffer& rb) : SkFlattenable(rb) {}
};

#endif

