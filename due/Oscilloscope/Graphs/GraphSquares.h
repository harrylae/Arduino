// GraphSquares.h

#ifndef _GRAPHSQUARES_h
#define _GRAPHSQUARES_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

#include "GraphBase.h"

class GraphSquares : public GraphBase
{
 private:
 public:
	virtual void init();
	virtual void draw();
};
#endif

