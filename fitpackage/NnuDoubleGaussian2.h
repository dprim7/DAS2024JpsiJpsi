/*****************************************************************************
 * Project: RooFit                                                           *
 *                                                                           *
  * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/

#ifndef NNUDOUBLEGAUSSIAN2
#define NNUDOUBLEGAUSSIAN2

#include "RooAbsPdf.h"
#include "RooRealProxy.h"
#include "RooCategoryProxy.h"
#include "RooAbsReal.h"
#include "RooAbsCategory.h"
 
class NnuDoubleGaussian2 : public RooAbsPdf {
public:
  NnuDoubleGaussian2() {} ; 
  NnuDoubleGaussian2(const char *name, const char *title,
	      RooAbsReal& _x,
	      RooAbsReal& _mean,
	      RooAbsReal& _frac1,
	      RooAbsReal& _mpeak,
	      RooAbsReal& _mth,
	      RooAbsReal& _a1,
	      RooAbsReal& _b1,
	      RooAbsReal& _c1,
	      RooAbsReal& _d1,
	      RooAbsReal& _e1,
	      RooAbsReal& _a2,
	      RooAbsReal& _b2,
	      RooAbsReal& _c2,
	      RooAbsReal& _d2,
	      RooAbsReal& _e2);
  NnuDoubleGaussian2(const NnuDoubleGaussian2& other, const char* name=0) ;
  virtual TObject* clone(const char* newname) const { return new NnuDoubleGaussian2(*this,newname); }
  inline virtual ~NnuDoubleGaussian2() { }

protected:

  RooRealProxy x ;
  RooRealProxy mean ;
  RooRealProxy frac1 ;
  RooRealProxy mpeak ;
  RooRealProxy mth ;
  RooRealProxy a1 ;
  RooRealProxy b1 ;
  RooRealProxy c1 ;
  RooRealProxy d1 ;
  RooRealProxy e1 ;
  RooRealProxy a2 ;
  RooRealProxy b2 ;
  RooRealProxy c2 ;
  RooRealProxy d2 ;
  RooRealProxy e2 ;
  
  Double_t evaluate() const ;

private:

  ClassDef(NnuDoubleGaussian2,1) // Your description goes here...
};
 
#endif