//
// PolyFilter takes PolyData as input
//
#ifndef __vlPolyFilter_h
#define __vlPolyFilter_h

#include "Filter.h"
#include "PolyData.h"

class vlPolyFilter : public vlFilter {
public:
  vlPolyFilter() : Input(0) {};
  ~vlPolyFilter();
  virtual void SetInput(vlPolyData *in);
  virtual vlPolyData* GetInput();
  void Execute();
  void Update();
protected:
  vlPolyData *Input;

};

#endif


