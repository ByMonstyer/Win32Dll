#include "stdafx.h"
#include "typedefa.h"


#define EU_API __declspec(dllexport)

#ifdef __cplusplus
extern "C"{
#endif
	EU_API int32 EuRdmCreate(EU_RDM& h_mod);
	EU_API int32 EuRdmConnect(EU_RDM h_mod, unsigned short vendor_id, unsigned short product_id);
	EU_API int32 EuRdmDestory(EU_RDM h_mod, int i);
	EU_API int32 EuRdmDisconnect(EU_RDM h_mod);
	EU_API int32 EuRdmSendMsg(EU_RDM h_mod, UCHAR startCode, long long destinationUid, USHORT subDevice, UCHAR commandClass, USHORT PID, UCHAR PDL, UCHAR ParameterData[], int ParameterDataSize);
	EU_API int32 EuRdmSend(EU_RDM h_mod, UCHAR startCode, long long destinationUid, USHORT subDevice, UCHAR commandClass, USHORT PID);
	EU_API int32 EuRdmRead(EU_RDM h_mod, UCHAR* BufferData);
	EU_API int32 EuRdma(EU_RDM h_mod, vector<int> &v);
#ifdef __cplusplus
}
#endif