/*
 * Event.cpp
 *
 *  Created on: Nov 14, 2014
 *      Author: sascha
 */

#ifdef RENDERING_HAS_LIB_OPENCL
#include "Event.h"

#include <CL/cl.hpp>

namespace Rendering {
namespace CL {

Event::Event() : event(new cl::Event()) {}

void Event::wait() {
	event->wait();
}

} /* namespace CL */
} /* namespace Rendering */

#endif /* RENDERING_HAS_LIB_OPENCL */
