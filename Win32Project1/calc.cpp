#include "stdafx.h"
#include "calc.h"
#include "ccc.h"
#define BREAK_IF_ERROR(err) if(kNoError != (err)) { ret = int32(err);}

EU_API int32 EuRdmCreate(EU_RDM& h_mod)
{
	ccc* rdm = nullptr;
	h_mod = NULL;
	rdm = new ccc();



	h_mod = (EU_RDM)rdm;
	
	return 0;
}


EU_API int32 EuRdmDestory(EU_RDM h_mod,int i)
{	
	return ((ccc*)h_mod)->add(i);
}

EU_API int32 EuRdma(EU_RDM h_mod, vector<int> &v)
{
	return ((ccc*)h_mod)->sub(v);
}