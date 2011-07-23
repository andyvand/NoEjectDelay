#ifndef BASE_HPP
#define BASE_HPP

#include <mach/mach_types.h>
#include <IOKit/hidsystem/IOHIKeyboard.h>
#define protected public // A hack for access private member of IOHIKeyboard
#define private public
#include "IOHIDConsumer.h"
#include "IOHIDEventService.h"
#undef protected
#undef private

#define IOLOG_ERROR(...)  IOLog("NoEjectDelay --Error-- " __VA_ARGS__)
#define IOLOG_INFO(...)   IOLog("NoEjectDelay --Info-- "  __VA_ARGS__)
#define IOLOG_WARN(...)   IOLog("NoEjectDelay --Warn-- "  __VA_ARGS__)

#endif
