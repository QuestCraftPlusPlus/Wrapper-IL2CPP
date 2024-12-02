#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_tEE97FB3EBFE8765D0E2FC164B95E82BA5D0EAE86;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.IO.EndOfStreamException
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// ThreeDISevenZeroR.UnityGifDecoder.Model.GifApplicationExtension
struct GifApplicationExtension_t5F7EA5FA01EF8CD4BA5CC18F51EEBFC4854DB860;
// ThreeDISevenZeroR.UnityGifDecoder.GifBitBlockReader
struct GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F;
// ThreeDISevenZeroR.UnityGifDecoder.GifCanvas
struct GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3;
// ThreeDISevenZeroR.UnityGifDecoder.Model.GifImage
struct GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948;
// ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary
struct GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791;
// ThreeDISevenZeroR.UnityGifDecoder.GifStream
struct GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GifApplicationExtension_t5F7EA5FA01EF8CD4BA5CC18F51EEBFC4854DB860_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Token_tF5F8AF62F32CB565CECB5B4ADB4A0E7DABC84DC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral13114A10702C59B7459B7FFB94B3EC9814AED612;
IL2CPP_EXTERN_C String_t* _stringLiteral2478869FE087903451AEBC85CA33DBDF081CCAF9;
IL2CPP_EXTERN_C String_t* _stringLiteral4013E5E88C2171694988C9818C0339FDA4E6B30F;
IL2CPP_EXTERN_C String_t* _stringLiteral43F467B57F117AB9881882BD47460419D59340FD;
IL2CPP_EXTERN_C String_t* _stringLiteral8F88ED9B30F2AB64825F279EE35E3EE38153DDCF;
IL2CPP_EXTERN_C String_t* _stringLiteral97E1360CCA07F4C93334C1ACF7ADEA68AFAC743F;
IL2CPP_EXTERN_C String_t* _stringLiteralA211FD6F9DC081A1311C02E414175007CA919044;
IL2CPP_EXTERN_C String_t* _stringLiteralBF666DC28A44A677A8B7129A21CFC5D281CF7DE4;
IL2CPP_EXTERN_C String_t* _stringLiteralCBC8EA794C7E2E6B3E854B5482BBB1C0DDD0D67C;
IL2CPP_EXTERN_C String_t* _stringLiteralE697DBBAC6F5DC17B8F0F13A9F1560E8F8404117;
IL2CPP_EXTERN_C String_t* _stringLiteralF226672299FAF2A220099C0767092B56B36F869A;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BitUtils_AssertByte_m1C51DDBEBE55EDC843FC50DA3B371568FA1BECC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GifStream_ReadGraphicsControl_m8A8BC1A78C0A66074624C29292BBBBA1E060A7F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GifStream_ReadHeader_m802605B0A77E678E400B9A7E34572A62128FA218_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GifStream_ReadImage_m966A3B6748D0EF6B3A3B4E871120AF499391A053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GifStream_SkipToken_mEE39D7CD3B0F42091186BB2F2AEDCA64F65F6A31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var;
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tEBB047F14326BC2B16C3B96AE3154012B1FC8904 
{
};

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// ThreeDISevenZeroR.UnityGifDecoder.Utils.BitUtils
struct BitUtils_tDAE91775AF6F77789525230E47CC57F947162DB1  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifApplicationExtension
struct GifApplicationExtension_t5F7EA5FA01EF8CD4BA5CC18F51EEBFC4854DB860  : public RuntimeObject
{
	// System.String ThreeDISevenZeroR.UnityGifDecoder.Model.GifApplicationExtension::applicationIdentifier
	String_t* ___applicationIdentifier_0;
	// System.String ThreeDISevenZeroR.UnityGifDecoder.Model.GifApplicationExtension::applicationAuthCode
	String_t* ___applicationAuthCode_1;
	// System.Byte[][] ThreeDISevenZeroR.UnityGifDecoder.Model.GifApplicationExtension::applicationData
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___applicationData_2;
};

// ThreeDISevenZeroR.UnityGifDecoder.GifBitBlockReader
struct GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F  : public RuntimeObject
{
	// System.IO.Stream ThreeDISevenZeroR.UnityGifDecoder.GifBitBlockReader::stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream_0;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.GifBitBlockReader::currentByte
	int32_t ___currentByte_1;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.GifBitBlockReader::currentBitPosition
	int32_t ___currentBitPosition_2;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.GifBitBlockReader::currentBufferPosition
	int32_t ___currentBufferPosition_3;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.GifBitBlockReader::currentBufferSize
	int32_t ___currentBufferSize_4;
	// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.GifBitBlockReader::endReached
	bool ___endReached_5;
	// System.Byte[] ThreeDISevenZeroR.UnityGifDecoder.GifBitBlockReader::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_6;
};

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifImage
struct GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948  : public RuntimeObject
{
	// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.Model.GifImage::userInput
	bool ___userInput_0;
	// UnityEngine.Color32[] ThreeDISevenZeroR.UnityGifDecoder.Model.GifImage::colors
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors_1;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifImage::delay
	int32_t ___delay_2;
};

// ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary
struct GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791  : public RuntimeObject
{
	// System.Int32[] ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary::dictionaryEntryOffsets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___dictionaryEntryOffsets_0;
	// System.Int32[] ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary::dictionaryEntrySizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___dictionaryEntrySizes_1;
	// System.Byte[] ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary::dictionaryHeap
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dictionaryHeap_2;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary::dictionarySize
	int32_t ___dictionarySize_3;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary::dictionaryHeapPosition
	int32_t ___dictionaryHeapPosition_4;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary::initialDictionarySize
	int32_t ___initialDictionarySize_5;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary::initialLzwCodeSize
	int32_t ___initialLzwCodeSize_6;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary::initialDictionaryHeapPosition
	int32_t ___initialDictionaryHeapPosition_7;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary::nextLzwCodeGrowth
	int32_t ___nextLzwCodeGrowth_8;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary::currentMinLzwCodeSize
	int32_t ___currentMinLzwCodeSize_9;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary::codeSize
	int32_t ___codeSize_10;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary::clearCodeId
	int32_t ___clearCodeId_11;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary::stopCodeId
	int32_t ___stopCodeId_12;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary::lastCodeId
	int32_t ___lastCodeId_13;
	// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary::isFull
	bool ___isFull_14;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor
struct GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798 
{
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor::left
	int32_t ___left_0;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor::top
	int32_t ___top_1;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor::width
	int32_t ___width_2;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor::height
	int32_t ___height_3;
	// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor::isInterlaced
	bool ___isInterlaced_4;
	// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor::hasLocalColorTable
	bool ___hasLocalColorTable_5;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor::localColorTableSize
	int32_t ___localColorTableSize_6;
};
// Native definition for P/Invoke marshalling of ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor
struct GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshaled_pinvoke
{
	int32_t ___left_0;
	int32_t ___top_1;
	int32_t ___width_2;
	int32_t ___height_3;
	int32_t ___isInterlaced_4;
	int32_t ___hasLocalColorTable_5;
	int32_t ___localColorTableSize_6;
};
// Native definition for COM marshalling of ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor
struct GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshaled_com
{
	int32_t ___left_0;
	int32_t ___top_1;
	int32_t ___width_2;
	int32_t ___height_3;
	int32_t ___isInterlaced_4;
	int32_t ___hasLocalColorTable_5;
	int32_t ___localColorTableSize_6;
};

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifNetscapeExtension
struct GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837 
{
	// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.Model.GifNetscapeExtension::hasLoopCount
	bool ___hasLoopCount_0;
	// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.Model.GifNetscapeExtension::hasBufferSize
	bool ___hasBufferSize_1;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifNetscapeExtension::loopCount
	int32_t ___loopCount_2;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifNetscapeExtension::bufferSize
	int32_t ___bufferSize_3;
};
// Native definition for P/Invoke marshalling of ThreeDISevenZeroR.UnityGifDecoder.Model.GifNetscapeExtension
struct GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837_marshaled_pinvoke
{
	int32_t ___hasLoopCount_0;
	int32_t ___hasBufferSize_1;
	int32_t ___loopCount_2;
	int32_t ___bufferSize_3;
};
// Native definition for COM marshalling of ThreeDISevenZeroR.UnityGifDecoder.Model.GifNetscapeExtension
struct GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837_marshaled_com
{
	int32_t ___hasLoopCount_0;
	int32_t ___hasBufferSize_1;
	int32_t ___loopCount_2;
	int32_t ___bufferSize_3;
};

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifPalette
struct GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891 
{
	// UnityEngine.Color32[] ThreeDISevenZeroR.UnityGifDecoder.Model.GifPalette::palette
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___palette_0;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifPalette::size
	int32_t ___size_1;
	// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.Model.GifPalette::isGlobal
	bool ___isGlobal_2;
};
// Native definition for P/Invoke marshalling of ThreeDISevenZeroR.UnityGifDecoder.Model.GifPalette
struct GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshaled_pinvoke
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___palette_0;
	int32_t ___size_1;
	int32_t ___isGlobal_2;
};
// Native definition for COM marshalling of ThreeDISevenZeroR.UnityGifDecoder.Model.GifPalette
struct GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshaled_com
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___palette_0;
	int32_t ___size_1;
	int32_t ___isGlobal_2;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// ThreeDISevenZeroR.UnityGifDecoder.GifCanvas/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10 
{
	// ThreeDISevenZeroR.UnityGifDecoder.GifCanvas ThreeDISevenZeroR.UnityGifDecoder.GifCanvas/<>c__DisplayClass34_0::<>4__this
	GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* ___U3CU3E4__this_0;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.GifCanvas/<>c__DisplayClass34_0::y
	int32_t ___y_1;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.GifCanvas/<>c__DisplayClass34_0::x
	int32_t ___x_2;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.GifCanvas/<>c__DisplayClass34_0::currentRow
	int32_t ___currentRow_3;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.GifCanvas/<>c__DisplayClass34_0::width
	int32_t ___width_4;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.IO.FileAccess
struct FileAccess_t3992FF4CCC61971B804DD291F06F696C3CF33C30 
{
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;
};

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifDisposalMethod
struct GifDisposalMethod_tB7BD71E9CF412E646E00E69FBC87E666F824A869 
{
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifDisposalMethod::value__
	int32_t ___value___2;
};

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifPlainText
struct GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A 
{
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifPlainText::left
	int32_t ___left_0;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifPlainText::top
	int32_t ___top_1;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifPlainText::width
	int32_t ___width_2;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifPlainText::height
	int32_t ___height_3;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifPlainText::charWidth
	int32_t ___charWidth_4;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifPlainText::charHeight
	int32_t ___charHeight_5;
	// UnityEngine.Color32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifPlainText::backgroundColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___backgroundColor_6;
	// UnityEngine.Color32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifPlainText::foregroundColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___foregroundColor_7;
	// System.String ThreeDISevenZeroR.UnityGifDecoder.Model.GifPlainText::text
	String_t* ___text_8;
	// UnityEngine.Color32[] ThreeDISevenZeroR.UnityGifDecoder.Model.GifPlainText::colors
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors_9;
};
// Native definition for P/Invoke marshalling of ThreeDISevenZeroR.UnityGifDecoder.Model.GifPlainText
struct GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshaled_pinvoke
{
	int32_t ___left_0;
	int32_t ___top_1;
	int32_t ___width_2;
	int32_t ___height_3;
	int32_t ___charWidth_4;
	int32_t ___charHeight_5;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___backgroundColor_6;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___foregroundColor_7;
	char* ___text_8;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors_9;
};
// Native definition for COM marshalling of ThreeDISevenZeroR.UnityGifDecoder.Model.GifPlainText
struct GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshaled_com
{
	int32_t ___left_0;
	int32_t ___top_1;
	int32_t ___width_2;
	int32_t ___height_3;
	int32_t ___charWidth_4;
	int32_t ___charHeight_5;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___backgroundColor_6;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___foregroundColor_7;
	Il2CppChar* ___text_8;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors_9;
};

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifVersion
struct GifVersion_t7319E3B216530639E6D8AE657B680573E630A39B 
{
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifVersion::value__
	int32_t ___value___2;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
};

// System.IO.SeekOrigin
struct SeekOrigin_t7EB9AD0EDF26368A40F48FA2098F02160B1E8000 
{
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;
};

// ThreeDISevenZeroR.UnityGifDecoder.GifStream/Token
struct Token_tF5F8AF62F32CB565CECB5B4ADB4A0E7DABC84DC7 
{
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.GifStream/Token::value__
	int32_t ___value___2;
};

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;
};

// ThreeDISevenZeroR.UnityGifDecoder.GifCanvas
struct GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3  : public RuntimeObject
{
	// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::<FlipVertically>k__BackingField
	bool ___U3CFlipVerticallyU3Ek__BackingField_0;
	// UnityEngine.Color32 ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::<BackgroundColor>k__BackingField
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___U3CBackgroundColorU3Ek__BackingField_1;
	// UnityEngine.Color32[] ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::canvasColors
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___canvasColors_2;
	// UnityEngine.Color32[] ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::revertDisposalBuffer
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___revertDisposalBuffer_3;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::canvasWidth
	int32_t ___canvasWidth_4;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::canvasHeight
	int32_t ___canvasHeight_5;
	// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::canvasIsEmpty
	bool ___canvasIsEmpty_6;
	// UnityEngine.Color32[] ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::framePalette
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___framePalette_7;
	// ThreeDISevenZeroR.UnityGifDecoder.Model.GifDisposalMethod ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::frameDisposalMethod
	int32_t ___frameDisposalMethod_8;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::frameCanvasPosition
	int32_t ___frameCanvasPosition_9;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::frameCanvasRowEndPosition
	int32_t ___frameCanvasRowEndPosition_10;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::frameTransparentColorIndex
	int32_t ___frameTransparentColorIndex_11;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::frameRowCurrent
	int32_t ___frameRowCurrent_12;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::frameX
	int32_t ___frameX_13;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::frameY
	int32_t ___frameY_14;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::frameWidth
	int32_t ___frameWidth_15;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::frameHeight
	int32_t ___frameHeight_16;
	// System.Int32[] ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::frameRowStart
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___frameRowStart_17;
	// System.Int32[] ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::frameRowEnd
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___frameRowEnd_18;
};

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifGraphicControl
struct GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5 
{
	// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.Model.GifGraphicControl::userInput
	bool ___userInput_0;
	// ThreeDISevenZeroR.UnityGifDecoder.Model.GifDisposalMethod ThreeDISevenZeroR.UnityGifDecoder.Model.GifGraphicControl::disposalMethod
	int32_t ___disposalMethod_1;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifGraphicControl::delayTime
	int32_t ___delayTime_2;
	// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.Model.GifGraphicControl::hasTransparency
	bool ___hasTransparency_3;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifGraphicControl::transparentColorIndex
	int32_t ___transparentColorIndex_4;
};
// Native definition for P/Invoke marshalling of ThreeDISevenZeroR.UnityGifDecoder.Model.GifGraphicControl
struct GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshaled_pinvoke
{
	int32_t ___userInput_0;
	int32_t ___disposalMethod_1;
	int32_t ___delayTime_2;
	int32_t ___hasTransparency_3;
	int32_t ___transparentColorIndex_4;
};
// Native definition for COM marshalling of ThreeDISevenZeroR.UnityGifDecoder.Model.GifGraphicControl
struct GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshaled_com
{
	int32_t ___userInput_0;
	int32_t ___disposalMethod_1;
	int32_t ___delayTime_2;
	int32_t ___hasTransparency_3;
	int32_t ___transparentColorIndex_4;
};

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader
struct GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 
{
	// ThreeDISevenZeroR.UnityGifDecoder.Model.GifVersion ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader::version
	int32_t ___version_0;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader::width
	int32_t ___width_1;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader::height
	int32_t ___height_2;
	// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader::hasGlobalColorTable
	bool ___hasGlobalColorTable_3;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader::globalColorTableSize
	int32_t ___globalColorTableSize_4;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader::transparentColorIndex
	int32_t ___transparentColorIndex_5;
	// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader::sortColors
	bool ___sortColors_6;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader::colorResolution
	int32_t ___colorResolution_7;
	// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader::pixelAspectRatio
	int32_t ___pixelAspectRatio_8;
};
// Native definition for P/Invoke marshalling of ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader
struct GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshaled_pinvoke
{
	int32_t ___version_0;
	int32_t ___width_1;
	int32_t ___height_2;
	int32_t ___hasGlobalColorTable_3;
	int32_t ___globalColorTableSize_4;
	int32_t ___transparentColorIndex_5;
	int32_t ___sortColors_6;
	int32_t ___colorResolution_7;
	int32_t ___pixelAspectRatio_8;
};
// Native definition for COM marshalling of ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader
struct GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshaled_com
{
	int32_t ___version_0;
	int32_t ___width_1;
	int32_t ___height_2;
	int32_t ___hasGlobalColorTable_3;
	int32_t ___globalColorTableSize_4;
	int32_t ___transparentColorIndex_5;
	int32_t ___sortColors_6;
	int32_t ___colorResolution_7;
	int32_t ___pixelAspectRatio_8;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// ThreeDISevenZeroR.UnityGifDecoder.GifStream
struct GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD  : public RuntimeObject
{
	// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.GifStream::<DrawPlainTextBackground>k__BackingField
	bool ___U3CDrawPlainTextBackgroundU3Ek__BackingField_0;
	// ThreeDISevenZeroR.UnityGifDecoder.GifStream/Token ThreeDISevenZeroR.UnityGifDecoder.GifStream::<CurrentToken>k__BackingField
	int32_t ___U3CCurrentTokenU3Ek__BackingField_1;
	// System.IO.Stream ThreeDISevenZeroR.UnityGifDecoder.GifStream::currentStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___currentStream_2;
	// System.Int64 ThreeDISevenZeroR.UnityGifDecoder.GifStream::headerStartPosition
	int64_t ___headerStartPosition_3;
	// System.Int64 ThreeDISevenZeroR.UnityGifDecoder.GifStream::firstFrameStartPosition
	int64_t ___firstFrameStartPosition_4;
	// ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader ThreeDISevenZeroR.UnityGifDecoder.GifStream::header
	GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 ___header_5;
	// ThreeDISevenZeroR.UnityGifDecoder.Model.GifGraphicControl ThreeDISevenZeroR.UnityGifDecoder.GifStream::graphicControl
	GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5 ___graphicControl_6;
	// ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor ThreeDISevenZeroR.UnityGifDecoder.GifStream::imageDescriptor
	GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798 ___imageDescriptor_7;
	// ThreeDISevenZeroR.UnityGifDecoder.GifCanvas ThreeDISevenZeroR.UnityGifDecoder.GifStream::canvas
	GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* ___canvas_8;
	// ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary ThreeDISevenZeroR.UnityGifDecoder.GifStream::lzwDictionary
	GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* ___lzwDictionary_9;
	// ThreeDISevenZeroR.UnityGifDecoder.GifBitBlockReader ThreeDISevenZeroR.UnityGifDecoder.GifStream::blockReader
	GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* ___blockReader_10;
	// UnityEngine.Color32[] ThreeDISevenZeroR.UnityGifDecoder.GifStream::globalColorTable
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___globalColorTable_11;
	// UnityEngine.Color32[] ThreeDISevenZeroR.UnityGifDecoder.GifStream::localColorTable
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___localColorTable_12;
	// System.Byte[] ThreeDISevenZeroR.UnityGifDecoder.GifStream::headerBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___headerBuffer_13;
	// System.Byte[] ThreeDISevenZeroR.UnityGifDecoder.GifStream::colorTableBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___colorTableBuffer_14;
	// System.Byte[] ThreeDISevenZeroR.UnityGifDecoder.GifStream::extensionApplicationBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___extensionApplicationBuffer_15;
	// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.GifStream::nextPaletteIsGlobal
	bool ___nextPaletteIsGlobal_16;
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IO.EndOfStreamException
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Byte[]>

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Byte>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// ThreeDISevenZeroR.UnityGifDecoder.Utils.BitUtils

// ThreeDISevenZeroR.UnityGifDecoder.Utils.BitUtils

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifApplicationExtension

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifApplicationExtension

// ThreeDISevenZeroR.UnityGifDecoder.GifBitBlockReader

// ThreeDISevenZeroR.UnityGifDecoder.GifBitBlockReader

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifImage

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifImage

// ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary

// ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color32

// UnityEngine.Color32

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifNetscapeExtension

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifNetscapeExtension

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifPalette

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifPalette

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.Single

// System.Single

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// System.Void

// System.Void

// ThreeDISevenZeroR.UnityGifDecoder.GifCanvas/<>c__DisplayClass34_0

// ThreeDISevenZeroR.UnityGifDecoder.GifCanvas/<>c__DisplayClass34_0

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifDisposalMethod

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifDisposalMethod

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifPlainText

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifPlainText

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifVersion

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifVersion

// System.IO.MemoryStream

// System.IO.MemoryStream

// System.IO.SeekOrigin

// System.IO.SeekOrigin

// ThreeDISevenZeroR.UnityGifDecoder.GifStream/Token

// ThreeDISevenZeroR.UnityGifDecoder.GifStream/Token

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_5;
};

// System.IO.FileStream

// ThreeDISevenZeroR.UnityGifDecoder.GifCanvas

// ThreeDISevenZeroR.UnityGifDecoder.GifCanvas

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifGraphicControl

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifGraphicControl

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader

// ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader

// System.ArgumentException

// System.ArgumentException

// ThreeDISevenZeroR.UnityGifDecoder.GifStream

// ThreeDISevenZeroR.UnityGifDecoder.GifStream

// System.InvalidOperationException

// System.InvalidOperationException

// System.IO.EndOfStreamException

// System.IO.EndOfStreamException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA  : public RuntimeArray
{
	ALIGN_FIELD (8) ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* m_Items[1];

	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Byte>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifBitBlockReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader__ctor_mBA6AC05F45C018CE4C93967FBA821C9FAC9304E3 (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifBitBlockReader::SetStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader_SetStream_mBA7BAFA29C27A70E00B9326561E97B06610325A3 (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifBitBlockReader::ReadNextBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader_ReadNextBlock_m0E3D388FA5D6D102A8F545AD3F532223E9A9B96F (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, const RuntimeMethod* method) ;
// System.Byte ThreeDISevenZeroR.UnityGifDecoder.Utils.BitUtils::ReadByte8(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas__ctor_mC55FD64F83BF41DFA5371390ACDF3109BAB97AE8 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::SetSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_SetSize_mCF0E7261846E27A115A7B362A72156BAD3D3C37D (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_Reset_m03BAEC5C778EA7523B2B3C3D07490E8FFADE4A66 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Color32 ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::get_BackgroundColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GifCanvas_get_BackgroundColor_m7BF9FEE2DD131325DC84B30771B567922863DEFB_inline (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::FillWithColor(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_FillWithColor_m7B9E75DBA61CF4B87BAE1B5E07671CFD7ED1748B (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_width, int32_t ___3_height, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___4_color, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::RouteFrameDrawing(System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_RouteFrameDrawing_mAE8E7934F50B6A4BA75E583A904432FEA3DA5034 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_width, int32_t ___3_height, bool ___4_deinterlace, const RuntimeMethod* method) ;
// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::get_FlipVertically()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GifCanvas_get_FlipVertically_m5814DF98E608124EBE23157E643B524AFF578EC4_inline (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::<RouteFrameDrawing>g__ScheduleRowIndex|34_0(System.Int32,ThreeDISevenZeroR.UnityGifDecoder.GifCanvas/<>c__DisplayClass34_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_U3CRouteFrameDrawingU3Eg__ScheduleRowIndexU7C34_0_m625DC428E3382BEF601021869F064295A13BB76A (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_row, U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* ___1_p, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::set_FlipVertically(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GifCanvas_set_FlipVertically_mB801ABFE622E5537DA96A2FBE1A7818A1920906A_inline (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, bool ___0_value, const RuntimeMethod* method) ;
// ThreeDISevenZeroR.UnityGifDecoder.GifStream/Token ThreeDISevenZeroR.UnityGifDecoder.GifStream::get_CurrentToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GifStream_get_CurrentToken_m1891B7145B082A07D1A9263F217E5B60B10DEB83_inline (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::SetStream(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SetStream_m7F61EC21293580F829D95522BD62364BE517BB5A (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, bool ___1_disposePrevious, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifLzwDictionary__ctor_m45C86D2EE11A949D518D5B8CBCE04C7258E26BC3 (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream__ctor_m6F7C893E33AE780712D3C127B6C26C45D5FC0D59 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream__ctor_m5D79AD1F0EC34C906CDBF14B8A20DD3A5F94F985 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_OpenRead_m6181B052EB0E98D2E18FAC79E7744D766BA4244C (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::set_CurrentToken(ThreeDISevenZeroR.UnityGifDecoder.GifStream/Token)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GifStream_set_CurrentToken_m27028DAAFD0B0CBDF5552D7550A1CDB4EBA333F9_inline (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader ThreeDISevenZeroR.UnityGifDecoder.GifStream::ReadHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 GifStream_ReadHeader_m802605B0A77E678E400B9A7E34572A62128FA218 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
// ThreeDISevenZeroR.UnityGifDecoder.Model.GifPalette ThreeDISevenZeroR.UnityGifDecoder.GifStream::ReadPalette()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891 GifStream_ReadPalette_mDD3AA284A8A45F600C45E20FC19CF4C3C360B7E7 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
// ThreeDISevenZeroR.UnityGifDecoder.Model.GifGraphicControl ThreeDISevenZeroR.UnityGifDecoder.GifStream::ReadGraphicsControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5 GifStream_ReadGraphicsControl_m8A8BC1A78C0A66074624C29292BBBBA1E060A7F7 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
// ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor ThreeDISevenZeroR.UnityGifDecoder.GifStream::ReadImageDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798 GifStream_ReadImageDescriptor_mFCD5C52CF431F05B34EC092741E3D2F0EF02EE45 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
// ThreeDISevenZeroR.UnityGifDecoder.Model.GifImage ThreeDISevenZeroR.UnityGifDecoder.GifStream::ReadImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* GifStream_ReadImage_m966A3B6748D0EF6B3A3B4E871120AF499391A053 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::SkipComment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipComment_m8C9F60E0B968B2971085E8E27233268284F6CF42 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::SkipPlainText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipPlainText_m5218A8BD99A1BA407DA84E917829BB574D47D0EA (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::SkipNetscapeExtension()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipNetscapeExtension_mA379B5306260922DDC09823683FD9FEBF60A238C (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::SkipApplicationExtension()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipApplicationExtension_m53BD3252324088F8695E5FE3E3622F0167035E05 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// ThreeDISevenZeroR.UnityGifDecoder.GifStream/Token ThreeDISevenZeroR.UnityGifDecoder.GifStream::SetCurrentToken(ThreeDISevenZeroR.UnityGifDecoder.GifStream/Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_token, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::AssertToken(ThreeDISevenZeroR.UnityGifDecoder.GifStream/Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_token, const RuntimeMethod* method) ;
// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.Utils.BitUtils::CheckString(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitUtils_CheckString_m4576B20F61F98DB5C7287A7F28E2233F4BF5CB8D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, String_t* ___1_s, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Utils.BitUtils::ReadInt16LittleEndian(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, const RuntimeMethod* method) ;
// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Utils.BitUtils::GetBitsFromByte(System.Byte,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitUtils_GetBitsFromByte_m425F942AA28070AC80981FC044C3B51664FC389F (uint8_t ___0_b, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) ;
// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Utils.BitUtils::GetColorTableSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitUtils_GetColorTableSize_m0182A8D368C1072B1686362526DF5EE5EF2C55DF (int32_t ___0_data, const RuntimeMethod* method) ;
// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.Utils.BitUtils::GetBitFromByte(System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitUtils_GetBitFromByte_mA20256AF9D3D63341209EC29CA4964C1A22B12A0 (uint8_t ___0_b, int32_t ___1_offset, const RuntimeMethod* method) ;
// ThreeDISevenZeroR.UnityGifDecoder.GifStream/Token ThreeDISevenZeroR.UnityGifDecoder.GifStream::DetermineNextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.Utils.BitUtils::AssertByte(System.IO.Stream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitUtils_AssertByte_m1C51DDBEBE55EDC843FC50DA3B371568FA1BECC3 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, int32_t ___1_expectedValue, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::DecodeLzwImageToCanvas(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color32[],System.Int32,System.Boolean,ThreeDISevenZeroR.UnityGifDecoder.Model.GifDisposalMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_DecodeLzwImageToCanvas_m7C581346C2EE3C82016A2724C3BF3388CFB5E822 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_lzwMinCodeSize, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___5_colorTable, int32_t ___6_transparentColorIndex, bool ___7_isInterlaced, int32_t ___8_disposalMethod, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.Model.GifImage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifImage__ctor_mCE252161928621A19D7534A36A77905A3E3A80FB (GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* __this, const RuntimeMethod* method) ;
// UnityEngine.Color32[] ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::get_Colors()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* GifCanvas_get_Colors_mB86B2B82A2ACBA7F0DF0697BEE61BD1CB48E4AB2_inline (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65 (const RuntimeMethod* method) ;
// System.Byte[] ThreeDISevenZeroR.UnityGifDecoder.Utils.BitUtils::ReadGifBlocks(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitUtils_ReadGifBlocks_m9A068F0FB3C99E5BF362075674F9BA601DAAD19E (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::SkipBlock(ThreeDISevenZeroR.UnityGifDecoder.GifStream/Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipBlock_mE331E17D537E2B4F051E8629A68AE015D05ABDA6 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_token, const RuntimeMethod* method) ;
// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.GifStream::get_DrawPlainTextBackground()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GifStream_get_DrawPlainTextBackground_m0708BFF2D05BE4DA2C05B953DE611100A9002FAA_inline (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::FillPlainTextBackground(ThreeDISevenZeroR.UnityGifDecoder.Model.GifPlainText)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_FillPlainTextBackground_m9D9C028D42F5885FE8BE4BB3B3F30C0879455682 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A ___0_text, const RuntimeMethod* method) ;
// ThreeDISevenZeroR.UnityGifDecoder.Model.GifPlainText ThreeDISevenZeroR.UnityGifDecoder.GifStream::ReadPlainText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A GifStream_ReadPlainText_m56BE17B2053DAB7AFDA6599EFFC7DD6893A15A16 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) ;
// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Utils.BitUtils::ReadInt32LittleEndian(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitUtils_ReadInt32LittleEndian_m7BB989504B2207AC7B4CF6495A7BCCD1A997448F (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
inline void List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4 (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
inline void List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.Model.GifApplicationExtension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifApplicationExtension__ctor_m6224C7111883A017C592A7A88B839E67A1928BE6 (GifApplicationExtension_t5F7EA5FA01EF8CD4BA5CC18F51EEBFC4854DB860* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Byte[]>::ToArray()
inline ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::set_BackgroundColor(UnityEngine.Color32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GifCanvas_set_BackgroundColor_m1957BD48CA2C39BE26FDBB6DEAA2A226C6336675_inline (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_value, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::BeginNewFrame(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color32[],System.Int32,System.Boolean,ThreeDISevenZeroR.UnityGifDecoder.Model.GifDisposalMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_BeginNewFrame_m8527EA6DA98073F5AD60E2613A35C1A3A303665A (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_width, int32_t ___3_height, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___4_palette, int32_t ___5_transparentColorIndex, bool ___6_isInterlaced, int32_t ___7_disposalMethod, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary::InitWithWordSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifLzwDictionary_InitWithWordSize_m6EB670CB50780C303EA50B4E09D651A3FBDDE52C (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, int32_t ___0_minLzwCodeSize, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifBitBlockReader::StartNewReading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader_StartNewReading_mE9EA1508974B1D1568624B10F83F0C35195B401F (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary::DecodeStream(ThreeDISevenZeroR.UnityGifDecoder.GifBitBlockReader,ThreeDISevenZeroR.UnityGifDecoder.GifCanvas)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifLzwDictionary_DecodeStream_m282A91A032D123465F3B40EFF235A00D1A97A73B (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* ___0_reader, GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* ___1_c, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifBitBlockReader::FinishReading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader_FinishReading_m46CB518BF425B45BB2F5610311E53AB31721491D (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.Utils.BitUtils::SkipGifBlocks(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitUtils_SkipGifBlocks_m0855EB727D126CA398FECABBF94CBF935096D39A (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.IO.EndOfStreamException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfStreamException__ctor_m154EAE9BDAE2A8EB0EE6714D881FA7075628C582 (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
inline void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_gshared)(__this, ___0_collection, method);
}
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared)(__this, method);
}
// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifImage::get_DelayMs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifImage_get_DelayMs_mEFDA5F3F7FFF218E5A536FCF1D7893A80962E539 (GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* __this, const RuntimeMethod* method) ;
// System.Single ThreeDISevenZeroR.UnityGifDecoder.Model.GifImage::get_SafeDelayMs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GifImage_get_SafeDelayMs_mB05AF7D32EF57699413249C3BDDDD49B2758DFA9 (GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* __this, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifLzwDictionary_Clear_m1169FBCD8A2D4F227BBA0B53749FE91D6205E56B (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, const RuntimeMethod* method) ;
// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.GifBitBlockReader::ReadBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifBitBlockReader_ReadBits_m709349EC1361339B4B75A084A64398E5532CE98E (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, int32_t ___0_count, const RuntimeMethod* method) ;
// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary::CreateNewCode(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifLzwDictionary_CreateNewCode_mE1498C73E05273533BB8E39A82A149489F3205EE (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, int32_t ___0_baseEntry, int32_t ___1_deriveEntry, const RuntimeMethod* method) ;
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::OutputPixel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_OutputPixel_mAD73C3414E247E66802826F19AAFFA3083D10BE9 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_color, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Byte>(T[]&,System.Int32)
inline void Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**, int32_t, const RuntimeMethod*))Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_gshared)(___0_array, ___1_newSize, method);
}
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___0_src, int32_t ___1_srcOffset, RuntimeArray* ___2_dst, int32_t ___3_dstOffset, int32_t ___4_count, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifBitBlockReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader__ctor_mBA6AC05F45C018CE4C93967FBA821C9FAC9304E3 (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public GifBitBlockReader()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// buffer = new byte[256];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___buffer_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifBitBlockReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader__ctor_mE63DA83DBB10E85909B556CFDD1531FE9161155A (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	{
		// public GifBitBlockReader(Stream stream) : this()
		GifBitBlockReader__ctor_mBA6AC05F45C018CE4C93967FBA821C9FAC9304E3(__this, NULL);
		// SetStream(stream);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		GifBitBlockReader_SetStream_mBA7BAFA29C27A70E00B9326561E97B06610325A3(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifBitBlockReader::SetStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader_SetStream_mBA7BAFA29C27A70E00B9326561E97B06610325A3 (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	{
		// this.stream = stream;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		__this->___stream_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stream_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifBitBlockReader::StartNewReading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader_StartNewReading_mE9EA1508974B1D1568624B10F83F0C35195B401F (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, const RuntimeMethod* method) 
{
	{
		// currentByte = 0;
		__this->___currentByte_1 = 0;
		// currentBitPosition = 8;
		__this->___currentBitPosition_2 = 8;
		// ReadNextBlock();
		GifBitBlockReader_ReadNextBlock_m0E3D388FA5D6D102A8F545AD3F532223E9A9B96F(__this, NULL);
		// }
		return;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifBitBlockReader::FinishReading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader_FinishReading_m46CB518BF425B45BB2F5610311E53AB31721491D (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		goto IL_000c;
	}

IL_0003:
	{
		// ReadNextBlock();
		GifBitBlockReader_ReadNextBlock_m0E3D388FA5D6D102A8F545AD3F532223E9A9B96F(__this, NULL);
	}

IL_000c:
	{
		// while (!endReached)
		bool L_0 = __this->___endReached_5;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0003;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.GifBitBlockReader::ReadBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifBitBlockReader_ReadBits_m709349EC1361339B4B75A084A64398E5532CE98E (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	int32_t G_B11_0 = 0;
	{
		// var result = 0;
		V_0 = 0;
		// var bitsToRead = count;
		int32_t L_0 = ___0_count;
		V_1 = L_0;
		// var offset = 0;
		V_2 = 0;
		// var bitsAvailable = 8 - currentBitPosition;
		int32_t L_1 = __this->___currentBitPosition_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(8, L_1));
		goto IL_00dc;
	}

IL_0015:
	{
		// if (currentBitPosition >= 8)
		int32_t L_2 = __this->___currentBitPosition_2;
		V_6 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_6;
		if (!L_3)
		{
			goto IL_0088;
		}
	}
	{
		// currentBitPosition = 0;
		__this->___currentBitPosition_2 = 0;
		// bitsAvailable = 8;
		V_3 = 8;
		// if (endReached)
		bool L_4 = __this->___endReached_5;
		V_7 = L_4;
		bool L_5 = V_7;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		// currentByte = 0;
		__this->___currentByte_1 = 0;
		goto IL_0087;
	}

IL_0049:
	{
		// currentByte = buffer[currentBufferPosition++];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___buffer_6;
		int32_t L_7 = __this->___currentBufferPosition_3;
		V_8 = L_7;
		int32_t L_8 = V_8;
		__this->___currentBufferPosition_3 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = V_8;
		NullCheck(L_6);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		__this->___currentByte_1 = L_11;
		// if (currentBufferPosition == currentBufferSize)
		int32_t L_12 = __this->___currentBufferPosition_3;
		int32_t L_13 = __this->___currentBufferSize_4;
		V_9 = (bool)((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_9;
		if (!L_14)
		{
			goto IL_0086;
		}
	}
	{
		// ReadNextBlock();
		GifBitBlockReader_ReadNextBlock_m0E3D388FA5D6D102A8F545AD3F532223E9A9B96F(__this, NULL);
	}

IL_0086:
	{
	}

IL_0087:
	{
	}

IL_0088:
	{
		// var mask = (byte) (((1 << bitsToRead) - 1) << currentBitPosition);
		int32_t L_15 = V_1;
		int32_t L_16 = __this->___currentBitPosition_2;
		V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_15&((int32_t)31))))), 1))<<((int32_t)(L_16&((int32_t)31))))));
		// var readCount = bitsAvailable < bitsToRead ? bitsAvailable : bitsToRead;
		int32_t L_17 = V_3;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_19 = V_1;
		G_B11_0 = L_19;
		goto IL_00a5;
	}

IL_00a4:
	{
		int32_t L_20 = V_3;
		G_B11_0 = L_20;
	}

IL_00a5:
	{
		V_5 = G_B11_0;
		// result += ((mask & currentByte) >> currentBitPosition) << offset;
		int32_t L_21 = V_0;
		uint8_t L_22 = V_4;
		int32_t L_23 = __this->___currentByte_1;
		int32_t L_24 = __this->___currentBitPosition_2;
		int32_t L_25 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, ((int32_t)(((int32_t)(((int32_t)((int32_t)L_22&L_23))>>((int32_t)(L_24&((int32_t)31)))))<<((int32_t)(L_25&((int32_t)31)))))));
		// currentBitPosition += readCount;
		int32_t L_26 = __this->___currentBitPosition_2;
		int32_t L_27 = V_5;
		__this->___currentBitPosition_2 = ((int32_t)il2cpp_codegen_add(L_26, L_27));
		// bitsToRead -= readCount;
		int32_t L_28 = V_1;
		int32_t L_29 = V_5;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_28, L_29));
		// offset += readCount;
		int32_t L_30 = V_2;
		int32_t L_31 = V_5;
		V_2 = ((int32_t)il2cpp_codegen_add(L_30, L_31));
	}

IL_00dc:
	{
		// while(bitsToRead > 0)
		int32_t L_32 = V_1;
		V_10 = (bool)((((int32_t)L_32) > ((int32_t)0))? 1 : 0);
		bool L_33 = V_10;
		if (L_33)
		{
			goto IL_0015;
		}
	}
	{
		// return result;
		int32_t L_34 = V_0;
		V_11 = L_34;
		goto IL_00ee;
	}

IL_00ee:
	{
		// }
		int32_t L_35 = V_11;
		return L_35;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifBitBlockReader::ReadNextBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifBitBlockReader_ReadNextBlock_m0E3D388FA5D6D102A8F545AD3F532223E9A9B96F (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// currentBufferSize = stream.ReadByte8();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___stream_0;
		uint8_t L_1;
		L_1 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_0, NULL);
		__this->___currentBufferSize_4 = L_1;
		// currentBufferPosition = 0;
		__this->___currentBufferPosition_3 = 0;
		// endReached = currentBufferSize == 0;
		int32_t L_2 = __this->___currentBufferSize_4;
		__this->___endReached_5 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		// if(!endReached)
		bool L_3 = __this->___endReached_5;
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		// stream.Read(buffer, 0, currentBufferSize);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = __this->___stream_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___buffer_6;
		int32_t L_7 = __this->___currentBufferSize_4;
		NullCheck(L_5);
		int32_t L_8;
		L_8 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(30 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, L_7);
	}

IL_004e:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Color32[] ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::get_Colors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* GifCanvas_get_Colors_mB86B2B82A2ACBA7F0DF0697BEE61BD1CB48E4AB2 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) 
{
	{
		// public Color32[] Colors => canvasColors;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = __this->___canvasColors_2;
		return L_0;
	}
}
// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::get_FlipVertically()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GifCanvas_get_FlipVertically_m5814DF98E608124EBE23157E643B524AFF578EC4 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) 
{
	{
		// public bool FlipVertically { get; set; } = true;
		bool L_0 = __this->___U3CFlipVerticallyU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::set_FlipVertically(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_set_FlipVertically_mB801ABFE622E5537DA96A2FBE1A7818A1920906A (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool FlipVertically { get; set; } = true;
		bool L_0 = ___0_value;
		__this->___U3CFlipVerticallyU3Ek__BackingField_0 = L_0;
		return;
	}
}
// UnityEngine.Color32 ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::get_BackgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GifCanvas_get_BackgroundColor_m7BF9FEE2DD131325DC84B30771B567922863DEFB (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) 
{
	{
		// public Color32 BackgroundColor { get; set; }
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = __this->___U3CBackgroundColorU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::set_BackgroundColor(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_set_BackgroundColor_m1957BD48CA2C39BE26FDBB6DEAA2A226C6336675 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_value, const RuntimeMethod* method) 
{
	{
		// public Color32 BackgroundColor { get; set; }
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_value;
		__this->___U3CBackgroundColorU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas__ctor_mC55FD64F83BF41DFA5371390ACDF3109BAB97AE8 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) 
{
	{
		// public bool FlipVertically { get; set; } = true;
		__this->___U3CFlipVerticallyU3Ek__BackingField_0 = (bool)1;
		// public GifCanvas()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// canvasIsEmpty = true;
		__this->___canvasIsEmpty_6 = (bool)1;
		// }
		return;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas__ctor_m3F5CB0FF20699716E83C786471D3279B7360C0EB (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) 
{
	{
		// public GifCanvas(int width, int height) : this()
		GifCanvas__ctor_mC55FD64F83BF41DFA5371390ACDF3109BAB97AE8(__this, NULL);
		// SetSize(width, height);
		int32_t L_0 = ___0_width;
		int32_t L_1 = ___1_height;
		GifCanvas_SetSize_mCF0E7261846E27A115A7B362A72156BAD3D3C37D(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::SetSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_SetSize_mCF0E7261846E27A115A7B362A72156BAD3D3C37D (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		// if (width != canvasWidth || height != canvasHeight)
		int32_t L_0 = ___0_width;
		int32_t L_1 = __this->___canvasWidth_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = ___1_height;
		int32_t L_3 = __this->___canvasHeight_5;
		G_B3_0 = ((((int32_t)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
	}

IL_0019:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_005c;
		}
	}
	{
		// var size = width * height;
		int32_t L_5 = ___0_width;
		int32_t L_6 = ___1_height;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_5, L_6));
		// canvasColors = new Color32[size];
		int32_t L_7 = V_1;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_8 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->___canvasColors_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvasColors_2), (void*)L_8);
		// frameRowStart = new int[height];
		int32_t L_9 = ___1_height;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_9);
		__this->___frameRowStart_17 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___frameRowStart_17), (void*)L_10);
		// frameRowEnd = new int[height];
		int32_t L_11 = ___1_height;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_11);
		__this->___frameRowEnd_18 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___frameRowEnd_18), (void*)L_12);
		// revertDisposalBuffer = null;
		__this->___revertDisposalBuffer_3 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___revertDisposalBuffer_3), (void*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)NULL);
		// canvasWidth = width;
		int32_t L_13 = ___0_width;
		__this->___canvasWidth_4 = L_13;
		// canvasHeight = height;
		int32_t L_14 = ___1_height;
		__this->___canvasHeight_5 = L_14;
	}

IL_005c:
	{
		// Reset();
		GifCanvas_Reset_m03BAEC5C778EA7523B2B3C3D07490E8FFADE4A66(__this, NULL);
		// }
		return;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_Reset_m03BAEC5C778EA7523B2B3C3D07490E8FFADE4A66 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// frameDisposalMethod = GifDisposalMethod.Keep;
		__this->___frameDisposalMethod_8 = 0;
		// frameX = 0;
		__this->___frameX_13 = 0;
		// frameY = 0;
		__this->___frameY_14 = 0;
		// frameWidth = canvasWidth;
		int32_t L_0 = __this->___canvasWidth_4;
		__this->___frameWidth_15 = L_0;
		// frameHeight = canvasHeight;
		int32_t L_1 = __this->___canvasHeight_5;
		__this->___frameHeight_16 = L_1;
		// if (!canvasIsEmpty)
		bool L_2 = __this->___canvasIsEmpty_6;
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0080;
		}
	}
	{
		// FillWithColor(0, 0, canvasWidth, canvasHeight, new Color32(BackgroundColor.r, BackgroundColor.g, BackgroundColor.b, 0));
		int32_t L_4 = __this->___canvasWidth_4;
		int32_t L_5 = __this->___canvasHeight_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6;
		L_6 = GifCanvas_get_BackgroundColor_m7BF9FEE2DD131325DC84B30771B567922863DEFB_inline(__this, NULL);
		uint8_t L_7 = L_6.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_8;
		L_8 = GifCanvas_get_BackgroundColor_m7BF9FEE2DD131325DC84B30771B567922863DEFB_inline(__this, NULL);
		uint8_t L_9 = L_8.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_10;
		L_10 = GifCanvas_get_BackgroundColor_m7BF9FEE2DD131325DC84B30771B567922863DEFB_inline(__this, NULL);
		uint8_t L_11 = L_10.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_7, L_9, L_11, (uint8_t)0, /*hidden argument*/NULL);
		GifCanvas_FillWithColor_m7B9E75DBA61CF4B87BAE1B5E07671CFD7ED1748B(__this, 0, 0, L_4, L_5, L_12, NULL);
		// canvasIsEmpty = true;
		__this->___canvasIsEmpty_6 = (bool)1;
	}

IL_0080:
	{
		// }
		return;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::BeginNewFrame(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color32[],System.Int32,System.Boolean,ThreeDISevenZeroR.UnityGifDecoder.Model.GifDisposalMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_BeginNewFrame_m8527EA6DA98073F5AD60E2613A35C1A3A303665A (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_width, int32_t ___3_height, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___4_palette, int32_t ___5_transparentColorIndex, bool ___6_isInterlaced, int32_t ___7_disposalMethod, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	{
		// switch (frameDisposalMethod)
		int32_t L_0 = __this->___frameDisposalMethod_8;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_005e;
		}
	}
	{
		goto IL_0085;
	}

IL_0016:
	{
		// FillWithColor(frameX, frameY, frameWidth, frameHeight,
		//     new Color32(BackgroundColor.r, BackgroundColor.g, BackgroundColor.b, 0));
		int32_t L_4 = __this->___frameX_13;
		int32_t L_5 = __this->___frameY_14;
		int32_t L_6 = __this->___frameWidth_15;
		int32_t L_7 = __this->___frameHeight_16;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_8;
		L_8 = GifCanvas_get_BackgroundColor_m7BF9FEE2DD131325DC84B30771B567922863DEFB_inline(__this, NULL);
		uint8_t L_9 = L_8.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_10;
		L_10 = GifCanvas_get_BackgroundColor_m7BF9FEE2DD131325DC84B30771B567922863DEFB_inline(__this, NULL);
		uint8_t L_11 = L_10.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		L_12 = GifCanvas_get_BackgroundColor_m7BF9FEE2DD131325DC84B30771B567922863DEFB_inline(__this, NULL);
		uint8_t L_13 = L_12.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_14;
		memset((&L_14), 0, sizeof(L_14));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_14), L_9, L_11, L_13, (uint8_t)0, /*hidden argument*/NULL);
		GifCanvas_FillWithColor_m7B9E75DBA61CF4B87BAE1B5E07671CFD7ED1748B(__this, L_4, L_5, L_6, L_7, L_14, NULL);
		// break;
		goto IL_0085;
	}

IL_005e:
	{
		// if(disposalMethod != GifDisposalMethod.Keep)
		int32_t L_15 = ___7_disposalMethod;
		V_2 = (bool)((!(((uint32_t)L_15) <= ((uint32_t)0)))? 1 : 0);
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_0083;
		}
	}
	{
		// Array.Copy(revertDisposalBuffer, 0, canvasColors, 0, revertDisposalBuffer.Length);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_17 = __this->___revertDisposalBuffer_3;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_18 = __this->___canvasColors_2;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_19 = __this->___revertDisposalBuffer_3;
		NullCheck(L_19);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_17, 0, (RuntimeArray*)L_18, 0, ((int32_t)(((RuntimeArray*)L_19)->max_length)), NULL);
	}

IL_0083:
	{
		// break;
		goto IL_0085;
	}

IL_0085:
	{
		// switch (disposalMethod)
		int32_t L_20 = ___7_disposalMethod;
		V_4 = L_20;
		int32_t L_21 = V_4;
		V_3 = L_21;
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) == ((int32_t)2)))
		{
			goto IL_0092;
		}
	}
	{
		goto IL_00d2;
	}

IL_0092:
	{
		// if (revertDisposalBuffer == null)
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_23 = __this->___revertDisposalBuffer_3;
		V_5 = (bool)((((RuntimeObject*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)L_23) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		// revertDisposalBuffer = new Color32[canvasColors.Length];
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_25 = __this->___canvasColors_2;
		NullCheck(L_25);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_26 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)));
		__this->___revertDisposalBuffer_3 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___revertDisposalBuffer_3), (void*)L_26);
	}

IL_00b4:
	{
		// Array.Copy(canvasColors, 0,
		//     revertDisposalBuffer, 0, revertDisposalBuffer.Length);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_27 = __this->___canvasColors_2;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_28 = __this->___revertDisposalBuffer_3;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_29 = __this->___revertDisposalBuffer_3;
		NullCheck(L_29);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_27, 0, (RuntimeArray*)L_28, 0, ((int32_t)(((RuntimeArray*)L_29)->max_length)), NULL);
		// break;
		goto IL_00d2;
	}

IL_00d2:
	{
		// framePalette = palette;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_30 = ___4_palette;
		__this->___framePalette_7 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___framePalette_7), (void*)L_30);
		// frameDisposalMethod = disposalMethod;
		int32_t L_31 = ___7_disposalMethod;
		__this->___frameDisposalMethod_8 = L_31;
		// canvasIsEmpty = false;
		__this->___canvasIsEmpty_6 = (bool)0;
		// frameWidth = width;
		int32_t L_32 = ___2_width;
		__this->___frameWidth_15 = L_32;
		// frameHeight = height;
		int32_t L_33 = ___3_height;
		__this->___frameHeight_16 = L_33;
		// frameX = x;
		int32_t L_34 = ___0_x;
		__this->___frameX_13 = L_34;
		// frameY = y;
		int32_t L_35 = ___1_y;
		__this->___frameY_14 = L_35;
		// frameCanvasPosition = 0;
		__this->___frameCanvasPosition_9 = 0;
		// frameRowCurrent = -1;
		__this->___frameRowCurrent_12 = (-1);
		// frameCanvasRowEndPosition = -1;
		__this->___frameCanvasRowEndPosition_10 = (-1);
		// frameTransparentColorIndex = transparentColorIndex;
		int32_t L_36 = ___5_transparentColorIndex;
		__this->___frameTransparentColorIndex_11 = L_36;
		// RouteFrameDrawing(x, y, width, height, isInterlaced);
		int32_t L_37 = ___0_x;
		int32_t L_38 = ___1_y;
		int32_t L_39 = ___2_width;
		int32_t L_40 = ___3_height;
		bool L_41 = ___6_isInterlaced;
		GifCanvas_RouteFrameDrawing_mAE8E7934F50B6A4BA75E583A904432FEA3DA5034(__this, L_37, L_38, L_39, L_40, L_41, NULL);
		// }
		return;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::OutputPixel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_OutputPixel_mAD73C3414E247E66802826F19AAFFA3083D10BE9 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_color, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (frameCanvasPosition >= frameCanvasRowEndPosition)
		int32_t L_0 = __this->___frameCanvasPosition_9;
		int32_t L_1 = __this->___frameCanvasRowEndPosition_10;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		// frameRowCurrent++;
		int32_t L_3 = __this->___frameRowCurrent_12;
		__this->___frameRowCurrent_12 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// frameCanvasPosition = frameRowStart[frameRowCurrent];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___frameRowStart_17;
		int32_t L_5 = __this->___frameRowCurrent_12;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		__this->___frameCanvasPosition_9 = L_7;
		// frameCanvasRowEndPosition = frameRowEnd[frameRowCurrent];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___frameRowEnd_18;
		int32_t L_9 = __this->___frameRowCurrent_12;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		__this->___frameCanvasRowEndPosition_10 = L_11;
	}

IL_004c:
	{
		// if (color != frameTransparentColorIndex)
		int32_t L_12 = ___0_color;
		int32_t L_13 = __this->___frameTransparentColorIndex_11;
		V_1 = (bool)((((int32_t)((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_0079;
		}
	}
	{
		// canvasColors[frameCanvasPosition] = framePalette[color];
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_15 = __this->___canvasColors_2;
		int32_t L_16 = __this->___frameCanvasPosition_9;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_17 = __this->___framePalette_7;
		int32_t L_18 = ___0_color;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_20);
	}

IL_0079:
	{
		// frameCanvasPosition++;
		int32_t L_21 = __this->___frameCanvasPosition_9;
		__this->___frameCanvasPosition_9 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		// }
		return;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::FillWithColor(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_FillWithColor_m7B9E75DBA61CF4B87BAE1B5E07671CFD7ED1748B (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_width, int32_t ___3_height, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___4_color, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B3_0 = 0;
	{
		// if (width == canvasWidth && height == canvasHeight)
		int32_t L_0 = ___2_width;
		int32_t L_1 = __this->___canvasWidth_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___3_height;
		int32_t L_3 = __this->___canvasHeight_5;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		// for (var i = canvasColors.Length - 1; i >= 0; i--)
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_5 = __this->___canvasColors_2;
		NullCheck(L_5);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1));
		goto IL_003b;
	}

IL_0029:
	{
		// canvasColors[i] = color;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_6 = __this->___canvasColors_2;
		int32_t L_7 = V_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_8 = ___4_color;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_8);
		// for (var i = canvasColors.Length - 1; i >= 0; i--)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
	}

IL_003b:
	{
		// for (var i = canvasColors.Length - 1; i >= 0; i--)
		int32_t L_10 = V_1;
		V_2 = (bool)((((int32_t)((((int32_t)L_10) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_0029;
		}
	}
	{
		goto IL_00e3;
	}

IL_004c:
	{
		// if (FlipVertically)
		bool L_12;
		L_12 = GifCanvas_get_FlipVertically_m5814DF98E608124EBE23157E643B524AFF578EC4_inline(__this, NULL);
		V_5 = L_12;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_007d;
		}
	}
	{
		// yEnd = (canvasHeight - y) * canvasWidth + x;
		int32_t L_14 = __this->___canvasHeight_5;
		int32_t L_15 = ___1_y;
		int32_t L_16 = __this->___canvasWidth_4;
		int32_t L_17 = ___0_x;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_14, L_15)), L_16)), L_17));
		// yStart = yEnd - canvasWidth * height;
		int32_t L_18 = V_4;
		int32_t L_19 = __this->___canvasWidth_4;
		int32_t L_20 = ___3_height;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)il2cpp_codegen_multiply(L_19, L_20))));
		goto IL_0097;
	}

IL_007d:
	{
		// yStart = y * canvasWidth + x;
		int32_t L_21 = ___1_y;
		int32_t L_22 = __this->___canvasWidth_4;
		int32_t L_23 = ___0_x;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_21, L_22)), L_23));
		// yEnd = yStart + height * canvasWidth;
		int32_t L_24 = V_3;
		int32_t L_25 = ___3_height;
		int32_t L_26 = __this->___canvasWidth_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_24, ((int32_t)il2cpp_codegen_multiply(L_25, L_26))));
	}

IL_0097:
	{
		// for (var ySrc = yStart; ySrc < yEnd; ySrc += canvasWidth)
		int32_t L_27 = V_3;
		V_6 = L_27;
		goto IL_00d6;
	}

IL_009c:
	{
		// var rowEnd = ySrc + width;
		int32_t L_28 = V_6;
		int32_t L_29 = ___2_width;
		V_7 = ((int32_t)il2cpp_codegen_add(L_28, L_29));
		// for (var i = ySrc; i < rowEnd; i++)
		int32_t L_30 = V_6;
		V_8 = L_30;
		goto IL_00be;
	}

IL_00a9:
	{
		// canvasColors[i] = color;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_31 = __this->___canvasColors_2;
		int32_t L_32 = V_8;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_33 = ___4_color;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_33);
		// for (var i = ySrc; i < rowEnd; i++)
		int32_t L_34 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00be:
	{
		// for (var i = ySrc; i < rowEnd; i++)
		int32_t L_35 = V_8;
		int32_t L_36 = V_7;
		V_9 = (bool)((((int32_t)L_35) < ((int32_t)L_36))? 1 : 0);
		bool L_37 = V_9;
		if (L_37)
		{
			goto IL_00a9;
		}
	}
	{
		// for (var ySrc = yStart; ySrc < yEnd; ySrc += canvasWidth)
		int32_t L_38 = V_6;
		int32_t L_39 = __this->___canvasWidth_4;
		V_6 = ((int32_t)il2cpp_codegen_add(L_38, L_39));
	}

IL_00d6:
	{
		// for (var ySrc = yStart; ySrc < yEnd; ySrc += canvasWidth)
		int32_t L_40 = V_6;
		int32_t L_41 = V_4;
		V_10 = (bool)((((int32_t)L_40) < ((int32_t)L_41))? 1 : 0);
		bool L_42 = V_10;
		if (L_42)
		{
			goto IL_009c;
		}
	}
	{
	}

IL_00e3:
	{
		// }
		return;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::RouteFrameDrawing(System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_RouteFrameDrawing_mAE8E7934F50B6A4BA75E583A904432FEA3DA5034 (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_width, int32_t ___3_height, bool ___4_deinterlace, const RuntimeMethod* method) 
{
	U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	bool V_11 = false;
	{
		(&V_0)->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_0), (void*)__this);
		int32_t L_0 = ___1_y;
		(&V_0)->___y_1 = L_0;
		int32_t L_1 = ___0_x;
		(&V_0)->___x_2 = L_1;
		int32_t L_2 = ___2_width;
		(&V_0)->___width_4 = L_2;
		// var currentRow = 0;
		(&V_0)->___currentRow_3 = 0;
		// if (deinterlace)
		bool L_3 = ___4_deinterlace;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_00b8;
		}
	}
	{
		// for (var i = 0; i < height; i += 8) ScheduleRowIndex(i); // every 8, start with 0
		V_2 = 0;
		goto IL_0046;
	}

IL_0038:
	{
		// for (var i = 0; i < height; i += 8) ScheduleRowIndex(i); // every 8, start with 0
		int32_t L_5 = V_2;
		GifCanvas_U3CRouteFrameDrawingU3Eg__ScheduleRowIndexU7C34_0_m625DC428E3382BEF601021869F064295A13BB76A(__this, L_5, (&V_0), NULL);
		// for (var i = 0; i < height; i += 8) ScheduleRowIndex(i); // every 8, start with 0
		int32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_6, 8));
	}

IL_0046:
	{
		// for (var i = 0; i < height; i += 8) ScheduleRowIndex(i); // every 8, start with 0
		int32_t L_7 = V_2;
		int32_t L_8 = ___3_height;
		V_3 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_3;
		if (L_9)
		{
			goto IL_0038;
		}
	}
	{
		// for (var i = 4; i < height; i += 8) ScheduleRowIndex(i); // every 8, start with 4
		V_4 = 4;
		goto IL_0065;
	}

IL_0054:
	{
		// for (var i = 4; i < height; i += 8) ScheduleRowIndex(i); // every 8, start with 4
		int32_t L_10 = V_4;
		GifCanvas_U3CRouteFrameDrawingU3Eg__ScheduleRowIndexU7C34_0_m625DC428E3382BEF601021869F064295A13BB76A(__this, L_10, (&V_0), NULL);
		// for (var i = 4; i < height; i += 8) ScheduleRowIndex(i); // every 8, start with 4
		int32_t L_11 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_11, 8));
	}

IL_0065:
	{
		// for (var i = 4; i < height; i += 8) ScheduleRowIndex(i); // every 8, start with 4
		int32_t L_12 = V_4;
		int32_t L_13 = ___3_height;
		V_5 = (bool)((((int32_t)L_12) < ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_5;
		if (L_14)
		{
			goto IL_0054;
		}
	}
	{
		// for (var i = 2; i < height; i += 4) ScheduleRowIndex(i); // every 4, start with 2
		V_6 = 2;
		goto IL_0087;
	}

IL_0076:
	{
		// for (var i = 2; i < height; i += 4) ScheduleRowIndex(i); // every 4, start with 2
		int32_t L_15 = V_6;
		GifCanvas_U3CRouteFrameDrawingU3Eg__ScheduleRowIndexU7C34_0_m625DC428E3382BEF601021869F064295A13BB76A(__this, L_15, (&V_0), NULL);
		// for (var i = 2; i < height; i += 4) ScheduleRowIndex(i); // every 4, start with 2
		int32_t L_16 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_16, 4));
	}

IL_0087:
	{
		// for (var i = 2; i < height; i += 4) ScheduleRowIndex(i); // every 4, start with 2
		int32_t L_17 = V_6;
		int32_t L_18 = ___3_height;
		V_7 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_7;
		if (L_19)
		{
			goto IL_0076;
		}
	}
	{
		// for (var i = 1; i < height; i += 2) ScheduleRowIndex(i); // every 2, start with 1
		V_8 = 1;
		goto IL_00a9;
	}

IL_0098:
	{
		// for (var i = 1; i < height; i += 2) ScheduleRowIndex(i); // every 2, start with 1
		int32_t L_20 = V_8;
		GifCanvas_U3CRouteFrameDrawingU3Eg__ScheduleRowIndexU7C34_0_m625DC428E3382BEF601021869F064295A13BB76A(__this, L_20, (&V_0), NULL);
		// for (var i = 1; i < height; i += 2) ScheduleRowIndex(i); // every 2, start with 1
		int32_t L_21 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_21, 2));
	}

IL_00a9:
	{
		// for (var i = 1; i < height; i += 2) ScheduleRowIndex(i); // every 2, start with 1
		int32_t L_22 = V_8;
		int32_t L_23 = ___3_height;
		V_9 = (bool)((((int32_t)L_22) < ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_9;
		if (L_24)
		{
			goto IL_0098;
		}
	}
	{
		goto IL_00dc;
	}

IL_00b8:
	{
		// for (var i = 0; i < height; i++) ScheduleRowIndex(i); // every row in order
		V_10 = 0;
		goto IL_00cf;
	}

IL_00be:
	{
		// for (var i = 0; i < height; i++) ScheduleRowIndex(i); // every row in order
		int32_t L_25 = V_10;
		GifCanvas_U3CRouteFrameDrawingU3Eg__ScheduleRowIndexU7C34_0_m625DC428E3382BEF601021869F064295A13BB76A(__this, L_25, (&V_0), NULL);
		// for (var i = 0; i < height; i++) ScheduleRowIndex(i); // every row in order
		int32_t L_26 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00cf:
	{
		// for (var i = 0; i < height; i++) ScheduleRowIndex(i); // every row in order
		int32_t L_27 = V_10;
		int32_t L_28 = ___3_height;
		V_11 = (bool)((((int32_t)L_27) < ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_11;
		if (L_29)
		{
			goto IL_00be;
		}
	}
	{
	}

IL_00dc:
	{
		// }
		return;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifCanvas::<RouteFrameDrawing>g__ScheduleRowIndex|34_0(System.Int32,ThreeDISevenZeroR.UnityGifDecoder.GifCanvas/<>c__DisplayClass34_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifCanvas_U3CRouteFrameDrawingU3Eg__ScheduleRowIndexU7C34_0_m625DC428E3382BEF601021869F064295A13BB76A (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, int32_t ___0_row, U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* ___1_p, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		// var startPosition = FlipVertically
		//     ? (canvasHeight - 1 - (y + row)) * canvasWidth + x
		//     : (y + row) * canvasWidth + x;
		bool L_0;
		L_0 = GifCanvas_get_FlipVertically_m5814DF98E608124EBE23157E643B524AFF578EC4_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* L_1 = ___1_p;
		int32_t L_2 = L_1->___y_1;
		int32_t L_3 = ___0_row;
		int32_t L_4 = __this->___canvasWidth_4;
		U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* L_5 = ___1_p;
		int32_t L_6 = L_5->___x_2;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_2, L_3)), L_4)), L_6));
		goto IL_0040;
	}

IL_0021:
	{
		int32_t L_7 = __this->___canvasHeight_5;
		U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* L_8 = ___1_p;
		int32_t L_9 = L_8->___y_1;
		int32_t L_10 = ___0_row;
		int32_t L_11 = __this->___canvasWidth_4;
		U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* L_12 = ___1_p;
		int32_t L_13 = L_12->___x_2;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_7, 1)), ((int32_t)il2cpp_codegen_add(L_9, L_10)))), L_11)), L_13));
	}

IL_0040:
	{
		V_0 = G_B3_0;
		// frameRowStart[currentRow] = startPosition;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->___frameRowStart_17;
		U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* L_15 = ___1_p;
		int32_t L_16 = L_15->___currentRow_3;
		int32_t L_17 = V_0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int32_t)L_17);
		// frameRowEnd[currentRow] = startPosition + width;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->___frameRowEnd_18;
		U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* L_19 = ___1_p;
		int32_t L_20 = L_19->___currentRow_3;
		int32_t L_21 = V_0;
		U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* L_22 = ___1_p;
		int32_t L_23 = L_22->___width_4;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (int32_t)((int32_t)il2cpp_codegen_add(L_21, L_23)));
		// currentRow++;
		U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* L_24 = ___1_p;
		int32_t L_25 = L_24->___currentRow_3;
		V_1 = L_25;
		U3CU3Ec__DisplayClass34_0_tA2FA55B783BD6DB3F8F8AF608D79AEA1E1FA5C10* L_26 = ___1_p;
		int32_t L_27 = V_1;
		L_26->___currentRow_3 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.GifStream::get_FlipVertically()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GifStream_get_FlipVertically_m5E5924D7B57490821C577CF8115AFC222478A68F (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		// get => canvas.FlipVertically;
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_0 = __this->___canvas_8;
		NullCheck(L_0);
		bool L_1;
		L_1 = GifCanvas_get_FlipVertically_m5814DF98E608124EBE23157E643B524AFF578EC4_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::set_FlipVertically(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_set_FlipVertically_mE37F7D790DE0F00C55A9707901A3BCB48A4BA8AF (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => canvas.FlipVertically = value;
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_0 = __this->___canvas_8;
		bool L_1 = ___0_value;
		NullCheck(L_0);
		GifCanvas_set_FlipVertically_mB801ABFE622E5537DA96A2FBE1A7818A1920906A_inline(L_0, L_1, NULL);
		return;
	}
}
// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.GifStream::get_DrawPlainTextBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GifStream_get_DrawPlainTextBackground_m0708BFF2D05BE4DA2C05B953DE611100A9002FAA (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		// public bool DrawPlainTextBackground { get; set; }
		bool L_0 = __this->___U3CDrawPlainTextBackgroundU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::set_DrawPlainTextBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_set_DrawPlainTextBackground_m2D97A72E39881F2D174076DBD2E49DAF46EE4D39 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool DrawPlainTextBackground { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CDrawPlainTextBackgroundU3Ek__BackingField_0 = L_0;
		return;
	}
}
// ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader ThreeDISevenZeroR.UnityGifDecoder.GifStream::get_Header()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 GifStream_get_Header_m7276A6A6F32364A1B54AFB6EBA1E54FDCB62D19B (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		// public GifHeader Header => header;
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 L_0 = __this->___header_5;
		return L_0;
	}
}
// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.GifStream::get_HasMoreData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GifStream_get_HasMoreData_mDE4AECF1D3480208FA4A5B1B279F0FE5F583C658 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasMoreData => CurrentToken != Token.EndOfFile;
		int32_t L_0;
		L_0 = GifStream_get_CurrentToken_m1891B7145B082A07D1A9263F217E5B60B10DEB83_inline(__this, NULL);
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)((int32_t)9)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// ThreeDISevenZeroR.UnityGifDecoder.GifStream/Token ThreeDISevenZeroR.UnityGifDecoder.GifStream::get_CurrentToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifStream_get_CurrentToken_m1891B7145B082A07D1A9263F217E5B60B10DEB83 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		// public Token CurrentToken { get; private set; }
		int32_t L_0 = __this->___U3CCurrentTokenU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::set_CurrentToken(ThreeDISevenZeroR.UnityGifDecoder.GifStream/Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_set_CurrentToken_m27028DAAFD0B0CBDF5552D7550A1CDB4EBA333F9 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public Token CurrentToken { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CCurrentTokenU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.IO.Stream ThreeDISevenZeroR.UnityGifDecoder.GifStream::get_BaseStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* GifStream_get_BaseStream_m47DF5ADE42AE63C816E92398973BC90F57932E9F (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		// get => currentStream;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___currentStream_2;
		return L_0;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::set_BaseStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_set_BaseStream_m42346FD466BBDA585D29C9B3FC58CDA56D14D6B8 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => SetStream(value);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_value;
		GifStream_SetStream_m7F61EC21293580F829D95522BD62364BE517BB5A(__this, L_0, (bool)0, NULL);
		return;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream__ctor_m6F7C893E33AE780712D3C127B6C26C45D5FC0D59 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public GifStream()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// lzwDictionary = new GifLzwDictionary();
		GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* L_0 = (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791*)il2cpp_codegen_object_new(GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GifLzwDictionary__ctor_m45C86D2EE11A949D518D5B8CBCE04C7258E26BC3(L_0, NULL);
		__this->___lzwDictionary_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lzwDictionary_9), (void*)L_0);
		// canvas = new GifCanvas();
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_1 = (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3*)il2cpp_codegen_object_new(GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GifCanvas__ctor_mC55FD64F83BF41DFA5371390ACDF3109BAB97AE8(L_1, NULL);
		__this->___canvas_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvas_8), (void*)L_1);
		// blockReader = new GifBitBlockReader();
		GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* L_2 = (GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F*)il2cpp_codegen_object_new(GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GifBitBlockReader__ctor_mBA6AC05F45C018CE4C93967FBA821C9FAC9304E3(L_2, NULL);
		__this->___blockReader_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blockReader_10), (void*)L_2);
		// globalColorTable = new Color32[256];
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_3 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___globalColorTable_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___globalColorTable_11), (void*)L_3);
		// localColorTable = new Color32[256];
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_4 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___localColorTable_12 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localColorTable_12), (void*)L_4);
		// headerBuffer = new byte[6];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->___headerBuffer_13 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___headerBuffer_13), (void*)L_5);
		// extensionApplicationBuffer = new byte[11];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		__this->___extensionApplicationBuffer_15 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___extensionApplicationBuffer_15), (void*)L_6);
		// colorTableBuffer = new byte[768];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)768));
		__this->___colorTableBuffer_14 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorTableBuffer_14), (void*)L_7);
		// }
		return;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream__ctor_m5D79AD1F0EC34C906CDBF14B8A20DD3A5F94F985 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	{
		// public GifStream(Stream stream) : this()
		GifStream__ctor_m6F7C893E33AE780712D3C127B6C26C45D5FC0D59(__this, NULL);
		// SetStream(stream);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		GifStream_SetStream_m7F61EC21293580F829D95522BD62364BE517BB5A(__this, L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream__ctor_mBBB6FB8A4D2C329249BDDBEA98F190D6EE61140A (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_gifBytes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public GifStream(byte[] gifBytes) : this(new MemoryStream(gifBytes)) { }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_gifBytes;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_1, L_0, NULL);
		GifStream__ctor_m5D79AD1F0EC34C906CDBF14B8A20DD3A5F94F985(__this, L_1, NULL);
		// public GifStream(byte[] gifBytes) : this(new MemoryStream(gifBytes)) { }
		return;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream__ctor_m34C08F362121765D3734CAD4BB88DF1184CA07C6 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	{
		// public GifStream(string path) : this(File.OpenRead(path)) { }
		String_t* L_0 = ___0_path;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_1;
		L_1 = File_OpenRead_m6181B052EB0E98D2E18FAC79E7744D766BA4244C(L_0, NULL);
		GifStream__ctor_m5D79AD1F0EC34C906CDBF14B8A20DD3A5F94F985(__this, L_1, NULL);
		// public GifStream(string path) : this(File.OpenRead(path)) { }
		return;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::SetStream(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SetStream_m7F61EC21293580F829D95522BD62364BE517BB5A (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, bool ___1_disposePrevious, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B3_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B2_0 = NULL;
	{
		// if (disposePrevious)
		bool L_0 = ___1_disposePrevious;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// currentStream?.Dispose();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___currentStream_2;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0012;
		}
	}
	{
		goto IL_0018;
	}

IL_0012:
	{
		NullCheck(G_B3_0);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(G_B3_0, NULL);
	}

IL_0018:
	{
		// header = new GifHeader();
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_4 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header_5);
		il2cpp_codegen_initobj(L_4, sizeof(GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6));
		// imageDescriptor = new GifImageDescriptor();
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_5 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor_7);
		il2cpp_codegen_initobj(L_5, sizeof(GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798));
		// graphicControl = new GifGraphicControl();
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_6 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl_6);
		il2cpp_codegen_initobj(L_6, sizeof(GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5));
		// currentStream = stream;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = ___0_stream;
		__this->___currentStream_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentStream_2), (void*)L_7);
		// CurrentToken = Token.Header;
		GifStream_set_CurrentToken_m27028DAAFD0B0CBDF5552D7550A1CDB4EBA333F9_inline(__this, 0, NULL);
		// blockReader.SetStream(stream);
		GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* L_8 = __this->___blockReader_10;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9 = ___0_stream;
		NullCheck(L_8);
		GifBitBlockReader_SetStream_mBA7BAFA29C27A70E00B9326561E97B06610325A3(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_Dispose_m29EDB2507103ABC3A440D8EF2B4F3E8258807EF4 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B2_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B1_0 = NULL;
	{
		// currentStream?.Dispose();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___currentStream_2;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0013;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(G_B2_0, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::SkipToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipToken_mEE39D7CD3B0F42091186BB2F2AEDCA64F65F6A31 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (CurrentToken)
		int32_t L_0;
		L_0 = GifStream_get_CurrentToken_m1891B7145B082A07D1A9263F217E5B60B10DEB83_inline(__this, NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_003f;
			}
			case 2:
			{
				goto IL_0048;
			}
			case 3:
			{
				goto IL_0051;
			}
			case 4:
			{
				goto IL_005a;
			}
			case 5:
			{
				goto IL_0063;
			}
			case 6:
			{
				goto IL_006c;
			}
			case 7:
			{
				goto IL_0075;
			}
			case 8:
			{
				goto IL_007e;
			}
		}
	}
	{
		goto IL_0087;
	}

IL_0036:
	{
		// case Token.Header: ReadHeader(); break;
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 L_3;
		L_3 = GifStream_ReadHeader_m802605B0A77E678E400B9A7E34572A62128FA218(__this, NULL);
		// case Token.Header: ReadHeader(); break;
		goto IL_00a2;
	}

IL_003f:
	{
		// case Token.Palette: ReadPalette(); break;
		GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891 L_4;
		L_4 = GifStream_ReadPalette_mDD3AA284A8A45F600C45E20FC19CF4C3C360B7E7(__this, NULL);
		// case Token.Palette: ReadPalette(); break;
		goto IL_00a2;
	}

IL_0048:
	{
		// case Token.GraphicsControl: ReadGraphicsControl(); break;
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5 L_5;
		L_5 = GifStream_ReadGraphicsControl_m8A8BC1A78C0A66074624C29292BBBBA1E060A7F7(__this, NULL);
		// case Token.GraphicsControl: ReadGraphicsControl(); break;
		goto IL_00a2;
	}

IL_0051:
	{
		// case Token.ImageDescriptor: ReadImageDescriptor(); break;
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798 L_6;
		L_6 = GifStream_ReadImageDescriptor_mFCD5C52CF431F05B34EC092741E3D2F0EF02EE45(__this, NULL);
		// case Token.ImageDescriptor: ReadImageDescriptor(); break;
		goto IL_00a2;
	}

IL_005a:
	{
		// case Token.Image: ReadImage(); break;
		GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* L_7;
		L_7 = GifStream_ReadImage_m966A3B6748D0EF6B3A3B4E871120AF499391A053(__this, NULL);
		// case Token.Image: ReadImage(); break;
		goto IL_00a2;
	}

IL_0063:
	{
		// case Token.Comment: SkipComment(); break;
		GifStream_SkipComment_m8C9F60E0B968B2971085E8E27233268284F6CF42(__this, NULL);
		// case Token.Comment: SkipComment(); break;
		goto IL_00a2;
	}

IL_006c:
	{
		// case Token.PlainText: SkipPlainText(); break;
		GifStream_SkipPlainText_m5218A8BD99A1BA407DA84E917829BB574D47D0EA(__this, NULL);
		// case Token.PlainText: SkipPlainText(); break;
		goto IL_00a2;
	}

IL_0075:
	{
		// case Token.NetscapeExtension: SkipNetscapeExtension(); break;
		GifStream_SkipNetscapeExtension_mA379B5306260922DDC09823683FD9FEBF60A238C(__this, NULL);
		// case Token.NetscapeExtension: SkipNetscapeExtension(); break;
		goto IL_00a2;
	}

IL_007e:
	{
		// case Token.ApplicationExtension: SkipApplicationExtension(); break;
		GifStream_SkipApplicationExtension_m53BD3252324088F8695E5FE3E3622F0167035E05(__this, NULL);
		// case Token.ApplicationExtension: SkipApplicationExtension(); break;
		goto IL_00a2;
	}

IL_0087:
	{
		// default: throw new InvalidOperationException($"Cannot skip token {CurrentToken}");
		int32_t L_8;
		L_8 = GifStream_get_CurrentToken_m1891B7145B082A07D1A9263F217E5B60B10DEB83_inline(__this, NULL);
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Token_tF5F8AF62F32CB565CECB5B4ADB4A0E7DABC84DC7_il2cpp_TypeInfo_var)), &L_9);
		String_t* L_11;
		L_11 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF666DC28A44A677A8B7129A21CFC5D281CF7DE4)), L_10, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_12 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GifStream_SkipToken_mEE39D7CD3B0F42091186BB2F2AEDCA64F65F6A31_RuntimeMethod_var)));
	}

IL_00a2:
	{
		// }
		return;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::Reset(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_Reset_m55C711BFB9140D8C5AD01B423D58DB0FECAFB23F (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, bool ___0_skipHeader, bool ___1_resetCanvas, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int64_t G_B4_0 = 0;
	{
		// var targetPosition = skipHeader && firstFrameStartPosition != -1
		//     ? firstFrameStartPosition
		//     : headerStartPosition;
		bool L_0 = ___0_skipHeader;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		int64_t L_1 = __this->___firstFrameStartPosition_4;
		if ((!(((uint64_t)L_1) == ((uint64_t)((int64_t)(-1))))))
		{
			goto IL_0016;
		}
	}

IL_000e:
	{
		int64_t L_2 = __this->___headerStartPosition_3;
		G_B4_0 = L_2;
		goto IL_001c;
	}

IL_0016:
	{
		int64_t L_3 = __this->___firstFrameStartPosition_4;
		G_B4_0 = L_3;
	}

IL_001c:
	{
		V_0 = G_B4_0;
		// if (currentStream.Position != targetPosition)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->___currentStream_2;
		NullCheck(L_4);
		int64_t L_5;
		L_5 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_4);
		int64_t L_6 = V_0;
		V_1 = (bool)((((int32_t)((((int64_t)L_5) == ((int64_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		// currentStream.Position = targetPosition;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = __this->___currentStream_2;
		int64_t L_9 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_8, L_9);
	}

IL_003f:
	{
		// SetCurrentToken(Token.Header);
		int32_t L_10;
		L_10 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, 0, NULL);
		// if (resetCanvas)
		bool L_11 = ___1_resetCanvas;
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		// canvas.Reset();
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_13 = __this->___canvas_8;
		NullCheck(L_13);
		GifCanvas_Reset_m03BAEC5C778EA7523B2B3C3D07490E8FFADE4A66(L_13, NULL);
	}

IL_0058:
	{
		// }
		return;
	}
}
// ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader ThreeDISevenZeroR.UnityGifDecoder.GifStream::ReadHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 GifStream_ReadHeader_m802605B0A77E678E400B9A7E34572A62128FA218 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA211FD6F9DC081A1311C02E414175007CA919044);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF226672299FAF2A220099C0767092B56B36F869A);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// AssertToken(Token.Header);
		GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5(__this, 0, NULL);
		// headerStartPosition = currentStream.Position;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___currentStream_2;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		__this->___headerStartPosition_3 = L_1;
		// firstFrameStartPosition = -1;
		__this->___firstFrameStartPosition_4 = ((int64_t)(-1));
		// currentStream.Read(headerBuffer, 0, headerBuffer.Length);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___currentStream_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___headerBuffer_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___headerBuffer_13;
		NullCheck(L_4);
		NullCheck(L_2);
		int32_t L_5;
		L_5 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(30 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)));
		// if(BitUtils.CheckString(headerBuffer, "GIF87a"))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___headerBuffer_13;
		bool L_7;
		L_7 = BitUtils_CheckString_m4576B20F61F98DB5C7287A7F28E2233F4BF5CB8D(L_6, _stringLiteralF226672299FAF2A220099C0767092B56B36F869A, NULL);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_005f;
		}
	}
	{
		// header.version = GifVersion.Gif87a;
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_9 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header_5);
		L_9->___version_0 = 1;
		goto IL_008c;
	}

IL_005f:
	{
		// else if (BitUtils.CheckString(headerBuffer, "GIF89a"))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___headerBuffer_13;
		bool L_11;
		L_11 = BitUtils_CheckString_m4576B20F61F98DB5C7287A7F28E2233F4BF5CB8D(L_10, _stringLiteralA211FD6F9DC081A1311C02E414175007CA919044, NULL);
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0081;
		}
	}
	{
		// header.version = GifVersion.Gif89a;
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_13 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header_5);
		L_13->___version_0 = 0;
		goto IL_008c;
	}

IL_0081:
	{
		// throw new ArgumentException("Invalid or corrupted Gif file");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCBC8EA794C7E2E6B3E854B5482BBB1C0DDD0D67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GifStream_ReadHeader_m802605B0A77E678E400B9A7E34572A62128FA218_RuntimeMethod_var)));
	}

IL_008c:
	{
		// header.width = currentStream.ReadInt16LittleEndian();
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_15 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header_5);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_16 = __this->___currentStream_2;
		int32_t L_17;
		L_17 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_16, NULL);
		L_15->___width_1 = L_17;
		// header.height = currentStream.ReadInt16LittleEndian();
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_18 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header_5);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_19 = __this->___currentStream_2;
		int32_t L_20;
		L_20 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_19, NULL);
		L_18->___height_2 = L_20;
		// var flags = currentStream.ReadByte8();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_21 = __this->___currentStream_2;
		uint8_t L_22;
		L_22 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_21, NULL);
		V_0 = L_22;
		// header.globalColorTableSize = BitUtils.GetColorTableSize(flags.GetBitsFromByte(0, 3));
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_23 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header_5);
		uint8_t L_24 = V_0;
		int32_t L_25;
		L_25 = BitUtils_GetBitsFromByte_m425F942AA28070AC80981FC044C3B51664FC389F(L_24, 0, 3, NULL);
		int32_t L_26;
		L_26 = BitUtils_GetColorTableSize_m0182A8D368C1072B1686362526DF5EE5EF2C55DF(L_25, NULL);
		L_23->___globalColorTableSize_4 = L_26;
		// header.sortColors = flags.GetBitFromByte(3);
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_27 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header_5);
		uint8_t L_28 = V_0;
		bool L_29;
		L_29 = BitUtils_GetBitFromByte_mA20256AF9D3D63341209EC29CA4964C1A22B12A0(L_28, 3, NULL);
		L_27->___sortColors_6 = L_29;
		// header.colorResolution = flags.GetBitsFromByte(4, 3);
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_30 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header_5);
		uint8_t L_31 = V_0;
		int32_t L_32;
		L_32 = BitUtils_GetBitsFromByte_m425F942AA28070AC80981FC044C3B51664FC389F(L_31, 4, 3, NULL);
		L_30->___colorResolution_7 = L_32;
		// header.hasGlobalColorTable = flags.GetBitFromByte(7);
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_33 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header_5);
		uint8_t L_34 = V_0;
		bool L_35;
		L_35 = BitUtils_GetBitFromByte_mA20256AF9D3D63341209EC29CA4964C1A22B12A0(L_34, 7, NULL);
		L_33->___hasGlobalColorTable_3 = L_35;
		// header.transparentColorIndex = currentStream.ReadByte8();
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_36 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header_5);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_37 = __this->___currentStream_2;
		uint8_t L_38;
		L_38 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_37, NULL);
		L_36->___transparentColorIndex_5 = L_38;
		// header.pixelAspectRatio = currentStream.ReadByte8();
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_39 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header_5);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_40 = __this->___currentStream_2;
		uint8_t L_41;
		L_41 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_40, NULL);
		L_39->___pixelAspectRatio_8 = L_41;
		// canvas.SetSize(header.width, header.height);
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_42 = __this->___canvas_8;
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_43 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header_5);
		int32_t L_44 = L_43->___width_1;
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_45 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header_5);
		int32_t L_46 = L_45->___height_2;
		NullCheck(L_42);
		GifCanvas_SetSize_mCF0E7261846E27A115A7B362A72156BAD3D3C37D(L_42, L_44, L_46, NULL);
		// if (header.hasGlobalColorTable)
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_47 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header_5);
		bool L_48 = L_47->___hasGlobalColorTable_3;
		V_3 = L_48;
		bool L_49 = V_3;
		if (!L_49)
		{
			goto IL_0183;
		}
	}
	{
		// SetCurrentToken(Token.Palette);
		int32_t L_50;
		L_50 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, 1, NULL);
		// nextPaletteIsGlobal = true;
		__this->___nextPaletteIsGlobal_16 = (bool)1;
		goto IL_018c;
	}

IL_0183:
	{
		// DetermineNextToken();
		int32_t L_51;
		L_51 = GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8(__this, NULL);
	}

IL_018c:
	{
		// return header;
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 L_52 = __this->___header_5;
		V_4 = L_52;
		goto IL_0196;
	}

IL_0196:
	{
		// }
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6 L_53 = V_4;
		return L_53;
	}
}
// ThreeDISevenZeroR.UnityGifDecoder.Model.GifPalette ThreeDISevenZeroR.UnityGifDecoder.GifStream::ReadPalette()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891 GifStream_ReadPalette_mDD3AA284A8A45F600C45E20FC19CF4C3C360B7E7 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891 V_6;
	memset((&V_6), 0, sizeof(V_6));
	GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B3_0 = 0;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* G_B6_0 = NULL;
	{
		// AssertToken(Token.Palette);
		GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5(__this, 1, NULL);
		// var size = nextPaletteIsGlobal ? header.globalColorTableSize : imageDescriptor.localColorTableSize;
		bool L_0 = __this->___nextPaletteIsGlobal_16;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_1 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor_7);
		int32_t L_2 = L_1->___localColorTableSize_6;
		G_B3_0 = L_2;
		goto IL_0029;
	}

IL_001e:
	{
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_3 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header_5);
		int32_t L_4 = L_3->___globalColorTableSize_4;
		G_B3_0 = L_4;
	}

IL_0029:
	{
		V_0 = G_B3_0;
		// var palette = nextPaletteIsGlobal ? globalColorTable : localColorTable;
		bool L_5 = __this->___nextPaletteIsGlobal_16;
		if (L_5)
		{
			goto IL_003a;
		}
	}
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_6 = __this->___localColorTable_12;
		G_B6_0 = L_6;
		goto IL_0040;
	}

IL_003a:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_7 = __this->___globalColorTable_11;
		G_B6_0 = L_7;
	}

IL_0040:
	{
		V_1 = G_B6_0;
		// currentStream.Read(colorTableBuffer, 0, size * 3);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = __this->___currentStream_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___colorTableBuffer_14;
		int32_t L_10 = V_0;
		NullCheck(L_8);
		int32_t L_11;
		L_11 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(30 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, 0, ((int32_t)il2cpp_codegen_multiply(L_10, 3)));
		// var position = 0;
		V_2 = 0;
		// for (var i = 0; i < size; i++)
		V_3 = 0;
		goto IL_0098;
	}

IL_005d:
	{
		// palette[i] = new Color32(
		//     colorTableBuffer[position++],
		//     colorTableBuffer[position++],
		//     colorTableBuffer[position++],
		//     255);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_12 = V_1;
		int32_t L_13 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___colorTableBuffer_14;
		int32_t L_15 = V_2;
		int32_t L_16 = L_15;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		NullCheck(L_14);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___colorTableBuffer_14;
		int32_t L_20 = V_2;
		int32_t L_21 = L_20;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		NullCheck(L_19);
		int32_t L_22 = L_21;
		uint8_t L_23 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___colorTableBuffer_14;
		int32_t L_25 = V_2;
		int32_t L_26 = L_25;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		NullCheck(L_24);
		int32_t L_27 = L_26;
		uint8_t L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_29;
		memset((&L_29), 0, sizeof(L_29));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_29), L_18, L_23, L_28, (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_29);
		// for (var i = 0; i < size; i++)
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0098:
	{
		// for (var i = 0; i < size; i++)
		int32_t L_31 = V_3;
		int32_t L_32 = V_0;
		V_4 = (bool)((((int32_t)L_31) < ((int32_t)L_32))? 1 : 0);
		bool L_33 = V_4;
		if (L_33)
		{
			goto IL_005d;
		}
	}
	{
		// if (nextPaletteIsGlobal)
		bool L_34 = __this->___nextPaletteIsGlobal_16;
		V_5 = L_34;
		bool L_35 = V_5;
		if (!L_35)
		{
			goto IL_00ca;
		}
	}
	{
		// firstFrameStartPosition = currentStream.Position;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_36 = __this->___currentStream_2;
		NullCheck(L_36);
		int64_t L_37;
		L_37 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_36);
		__this->___firstFrameStartPosition_4 = L_37;
		// DetermineNextToken();
		int32_t L_38;
		L_38 = GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8(__this, NULL);
		goto IL_00d4;
	}

IL_00ca:
	{
		// SetCurrentToken(Token.Image);
		int32_t L_39;
		L_39 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, 4, NULL);
	}

IL_00d4:
	{
		// return new GifPalette
		// {
		//     palette = palette,
		//     size = size,
		//     isGlobal = nextPaletteIsGlobal
		// };
		il2cpp_codegen_initobj((&V_6), sizeof(GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891));
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_40 = V_1;
		(&V_6)->___palette_0 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_6)->___palette_0), (void*)L_40);
		int32_t L_41 = V_0;
		(&V_6)->___size_1 = L_41;
		bool L_42 = __this->___nextPaletteIsGlobal_16;
		(&V_6)->___isGlobal_2 = L_42;
		GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891 L_43 = V_6;
		V_7 = L_43;
		goto IL_00ff;
	}

IL_00ff:
	{
		// }
		GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891 L_44 = V_7;
		return L_44;
	}
}
// ThreeDISevenZeroR.UnityGifDecoder.Model.GifGraphicControl ThreeDISevenZeroR.UnityGifDecoder.GifStream::ReadGraphicsControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5 GifStream_ReadGraphicsControl_m8A8BC1A78C0A66074624C29292BBBBA1E060A7F7 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// AssertToken(Token.GraphicsControl);
		GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5(__this, 2, NULL);
		// currentStream.AssertByte(0x04);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___currentStream_2;
		BitUtils_AssertByte_m1C51DDBEBE55EDC843FC50DA3B371568FA1BECC3(L_0, 4, NULL);
		// var graphicsFlags = currentStream.ReadByte8();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___currentStream_2;
		uint8_t L_2;
		L_2 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_1, NULL);
		V_0 = L_2;
		// var disposalMethodValue = graphicsFlags.GetBitsFromByte(2, 3);
		uint8_t L_3 = V_0;
		int32_t L_4;
		L_4 = BitUtils_GetBitsFromByte_m425F942AA28070AC80981FC044C3B51664FC389F(L_3, 2, 3, NULL);
		V_1 = L_4;
		// graphicControl.hasTransparency = graphicsFlags.GetBitFromByte(0);
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_5 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl_6);
		uint8_t L_6 = V_0;
		bool L_7;
		L_7 = BitUtils_GetBitFromByte_mA20256AF9D3D63341209EC29CA4964C1A22B12A0(L_6, 0, NULL);
		L_5->___hasTransparency_3 = L_7;
		// graphicControl.userInput = graphicsFlags.GetBitFromByte(1);
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_8 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl_6);
		uint8_t L_9 = V_0;
		bool L_10;
		L_10 = BitUtils_GetBitFromByte_mA20256AF9D3D63341209EC29CA4964C1A22B12A0(L_9, 1, NULL);
		L_8->___userInput_0 = L_10;
		// graphicControl.delayTime = currentStream.ReadInt16LittleEndian();
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_11 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl_6);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_12 = __this->___currentStream_2;
		int32_t L_13;
		L_13 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_12, NULL);
		L_11->___delayTime_2 = L_13;
		// graphicControl.transparentColorIndex = currentStream.ReadByte8();
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_14 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl_6);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_15 = __this->___currentStream_2;
		uint8_t L_16;
		L_16 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_15, NULL);
		L_14->___transparentColorIndex_4 = L_16;
		// if (!graphicControl.hasTransparency)
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_17 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl_6);
		bool L_18 = L_17->___hasTransparency_3;
		V_2 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_0099;
		}
	}
	{
		// graphicControl.transparentColorIndex = -1;
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_20 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl_6);
		L_20->___transparentColorIndex_4 = (-1);
	}

IL_0099:
	{
		// switch (disposalMethodValue)
		int32_t L_21 = V_1;
		V_4 = L_21;
		int32_t L_22 = V_4;
		V_3 = L_22;
		int32_t L_23 = V_3;
		switch (L_23)
		{
			case 0:
			{
				goto IL_00b7;
			}
			case 1:
			{
				goto IL_00b7;
			}
			case 2:
			{
				goto IL_00c5;
			}
			case 3:
			{
				goto IL_00d3;
			}
		}
	}
	{
		goto IL_00e1;
	}

IL_00b7:
	{
		// case 1: graphicControl.disposalMethod = GifDisposalMethod.Keep; break;
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_24 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl_6);
		L_24->___disposalMethod_1 = 0;
		// case 1: graphicControl.disposalMethod = GifDisposalMethod.Keep; break;
		goto IL_00f7;
	}

IL_00c5:
	{
		// case 2: graphicControl.disposalMethod = GifDisposalMethod.ClearToBackgroundColor; break;
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_25 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl_6);
		L_25->___disposalMethod_1 = 1;
		// case 2: graphicControl.disposalMethod = GifDisposalMethod.ClearToBackgroundColor; break;
		goto IL_00f7;
	}

IL_00d3:
	{
		// case 3: graphicControl.disposalMethod = GifDisposalMethod.Revert; break;
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_26 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl_6);
		L_26->___disposalMethod_1 = 2;
		// case 3: graphicControl.disposalMethod = GifDisposalMethod.Revert; break;
		goto IL_00f7;
	}

IL_00e1:
	{
		// default: throw new ArgumentException($"Invalid disposal method type: {disposalMethodValue}");
		int32_t L_27 = V_1;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_28);
		String_t* L_30;
		L_30 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97E1360CCA07F4C93334C1ACF7ADEA68AFAC743F)), L_29, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_31 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_31);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_31, L_30, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GifStream_ReadGraphicsControl_m8A8BC1A78C0A66074624C29292BBBBA1E060A7F7_RuntimeMethod_var)));
	}

IL_00f7:
	{
		// currentStream.AssertByte(0x00);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_32 = __this->___currentStream_2;
		BitUtils_AssertByte_m1C51DDBEBE55EDC843FC50DA3B371568FA1BECC3(L_32, 0, NULL);
		// DetermineNextToken();
		int32_t L_33;
		L_33 = GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8(__this, NULL);
		// return graphicControl;
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5 L_34 = __this->___graphicControl_6;
		V_5 = L_34;
		goto IL_0115;
	}

IL_0115:
	{
		// }
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5 L_35 = V_5;
		return L_35;
	}
}
// ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor ThreeDISevenZeroR.UnityGifDecoder.GifStream::ReadImageDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798 GifStream_ReadImageDescriptor_mFCD5C52CF431F05B34EC092741E3D2F0EF02EE45 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	bool V_1 = false;
	GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// AssertToken(Token.ImageDescriptor);
		GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5(__this, 3, NULL);
		// imageDescriptor.left = currentStream.ReadInt16LittleEndian();
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_0 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor_7);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___currentStream_2;
		int32_t L_2;
		L_2 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_1, NULL);
		L_0->___left_0 = L_2;
		// imageDescriptor.top = currentStream.ReadInt16LittleEndian();
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_3 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor_7);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->___currentStream_2;
		int32_t L_5;
		L_5 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_4, NULL);
		L_3->___top_1 = L_5;
		// imageDescriptor.width = currentStream.ReadInt16LittleEndian();
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_6 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor_7);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = __this->___currentStream_2;
		int32_t L_8;
		L_8 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_7, NULL);
		L_6->___width_2 = L_8;
		// imageDescriptor.height = currentStream.ReadInt16LittleEndian();
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_9 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor_7);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_10 = __this->___currentStream_2;
		int32_t L_11;
		L_11 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_10, NULL);
		L_9->___height_3 = L_11;
		// var flags = currentStream.ReadByte8();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_12 = __this->___currentStream_2;
		uint8_t L_13;
		L_13 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_12, NULL);
		V_0 = L_13;
		// imageDescriptor.localColorTableSize = BitUtils.GetColorTableSize(flags.GetBitsFromByte(0, 3));
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_14 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor_7);
		uint8_t L_15 = V_0;
		int32_t L_16;
		L_16 = BitUtils_GetBitsFromByte_m425F942AA28070AC80981FC044C3B51664FC389F(L_15, 0, 3, NULL);
		int32_t L_17;
		L_17 = BitUtils_GetColorTableSize_m0182A8D368C1072B1686362526DF5EE5EF2C55DF(L_16, NULL);
		L_14->___localColorTableSize_6 = L_17;
		// imageDescriptor.isInterlaced = flags.GetBitFromByte(6);
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_18 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor_7);
		uint8_t L_19 = V_0;
		bool L_20;
		L_20 = BitUtils_GetBitFromByte_mA20256AF9D3D63341209EC29CA4964C1A22B12A0(L_19, 6, NULL);
		L_18->___isInterlaced_4 = L_20;
		// imageDescriptor.hasLocalColorTable = flags.GetBitFromByte(7);
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_21 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor_7);
		uint8_t L_22 = V_0;
		bool L_23;
		L_23 = BitUtils_GetBitFromByte_mA20256AF9D3D63341209EC29CA4964C1A22B12A0(L_22, 7, NULL);
		L_21->___hasLocalColorTable_5 = L_23;
		// if (imageDescriptor.hasLocalColorTable)
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_24 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor_7);
		bool L_25 = L_24->___hasLocalColorTable_5;
		V_1 = L_25;
		bool L_26 = V_1;
		if (!L_26)
		{
			goto IL_00cb;
		}
	}
	{
		// nextPaletteIsGlobal = false;
		__this->___nextPaletteIsGlobal_16 = (bool)0;
		// SetCurrentToken(Token.Palette);
		int32_t L_27;
		L_27 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, 1, NULL);
		goto IL_00d5;
	}

IL_00cb:
	{
		// SetCurrentToken(Token.Image);
		int32_t L_28;
		L_28 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, 4, NULL);
	}

IL_00d5:
	{
		// return imageDescriptor;
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798 L_29 = __this->___imageDescriptor_7;
		V_2 = L_29;
		goto IL_00de;
	}

IL_00de:
	{
		// }
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798 L_30 = V_2;
		return L_30;
	}
}
// ThreeDISevenZeroR.UnityGifDecoder.Model.GifImage ThreeDISevenZeroR.UnityGifDecoder.GifStream::ReadImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* GifStream_ReadImage_m966A3B6748D0EF6B3A3B4E871120AF499391A053 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_0 = NULL;
	uint8_t V_1 = 0x0;
	bool V_2 = false;
	GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* V_3 = NULL;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* G_B3_0 = NULL;
	int32_t G_B6_0 = 0;
	{
		// AssertToken(Token.Image);
		GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5(__this, 4, NULL);
		// var usedColorTable = imageDescriptor.hasLocalColorTable
		//     ? localColorTable
		//     : globalColorTable;
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_0 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor_7);
		bool L_1 = L_0->___hasLocalColorTable_5;
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_2 = __this->___globalColorTable_11;
		G_B3_0 = L_2;
		goto IL_0024;
	}

IL_001e:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_3 = __this->___localColorTable_12;
		G_B3_0 = L_3;
	}

IL_0024:
	{
		V_0 = G_B3_0;
		// var lzwMinCodeSize = currentStream.ReadByte8();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->___currentStream_2;
		uint8_t L_5;
		L_5 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_4, NULL);
		V_1 = L_5;
		// if(lzwMinCodeSize == 0 || lzwMinCodeSize > 8)
		uint8_t L_6 = V_1;
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		uint8_t L_7 = V_1;
		G_B6_0 = ((((int32_t)L_7) > ((int32_t)8))? 1 : 0);
		goto IL_003b;
	}

IL_003a:
	{
		G_B6_0 = 1;
	}

IL_003b:
	{
		V_2 = (bool)G_B6_0;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_004a;
		}
	}
	{
		// throw new ArgumentException("Invalid lzw min code size");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral43F467B57F117AB9881882BD47460419D59340FD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GifStream_ReadImage_m966A3B6748D0EF6B3A3B4E871120AF499391A053_RuntimeMethod_var)));
	}

IL_004a:
	{
		// DecodeLzwImageToCanvas(lzwMinCodeSize,
		//     imageDescriptor.left, imageDescriptor.top,
		//     imageDescriptor.width, imageDescriptor.height, usedColorTable,
		//     graphicControl.transparentColorIndex,
		//     imageDescriptor.isInterlaced, graphicControl.disposalMethod);
		uint8_t L_10 = V_1;
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_11 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor_7);
		int32_t L_12 = L_11->___left_0;
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_13 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor_7);
		int32_t L_14 = L_13->___top_1;
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_15 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor_7);
		int32_t L_16 = L_15->___width_2;
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_17 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor_7);
		int32_t L_18 = L_17->___height_3;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_19 = V_0;
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_20 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl_6);
		int32_t L_21 = L_20->___transparentColorIndex_4;
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_22 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor_7);
		bool L_23 = L_22->___isInterlaced_4;
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_24 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl_6);
		int32_t L_25 = L_24->___disposalMethod_1;
		GifStream_DecodeLzwImageToCanvas_m7C581346C2EE3C82016A2724C3BF3388CFB5E822(__this, L_10, L_12, L_14, L_16, L_18, L_19, L_21, L_23, L_25, NULL);
		// DetermineNextToken();
		int32_t L_26;
		L_26 = GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8(__this, NULL);
		// return new GifImage
		// {
		//     colors = canvas.Colors,
		//     userInput = graphicControl.userInput,
		//     delay = graphicControl.delayTime
		// };
		GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* L_27 = (GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948*)il2cpp_codegen_object_new(GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		GifImage__ctor_mCE252161928621A19D7534A36A77905A3E3A80FB(L_27, NULL);
		GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* L_28 = L_27;
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_29 = __this->___canvas_8;
		NullCheck(L_29);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_30;
		L_30 = GifCanvas_get_Colors_mB86B2B82A2ACBA7F0DF0697BEE61BD1CB48E4AB2_inline(L_29, NULL);
		NullCheck(L_28);
		L_28->___colors_1 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->___colors_1), (void*)L_30);
		GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* L_31 = L_28;
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_32 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl_6);
		bool L_33 = L_32->___userInput_0;
		NullCheck(L_31);
		L_31->___userInput_0 = L_33;
		GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* L_34 = L_31;
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_35 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl_6);
		int32_t L_36 = L_35->___delayTime_2;
		NullCheck(L_34);
		L_34->___delay_2 = L_36;
		V_3 = L_34;
		goto IL_00e2;
	}

IL_00e2:
	{
		// }
		GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* L_37 = V_3;
		return L_37;
	}
}
// System.String ThreeDISevenZeroR.UnityGifDecoder.GifStream::ReadComment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GifStream_ReadComment_mCA8259E47882D1CEB1F57ACFBF876E110ADFEEB1 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// AssertToken(Token.Comment);
		GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5(__this, 5, NULL);
		// var text = Encoding.ASCII.GetString(BitUtils.ReadGifBlocks(currentStream));
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___currentStream_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitUtils_ReadGifBlocks_m9A068F0FB3C99E5BF362075674F9BA601DAAD19E(L_1, NULL);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(35 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_2);
		V_0 = L_3;
		// DetermineNextToken();
		int32_t L_4;
		L_4 = GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8(__this, NULL);
		// return text;
		String_t* L_5 = V_0;
		V_1 = L_5;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		String_t* L_6 = V_1;
		return L_6;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::SkipComment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipComment_m8C9F60E0B968B2971085E8E27233268284F6CF42 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		// public void SkipComment() => SkipBlock(Token.Comment);
		GifStream_SkipBlock_mE331E17D537E2B4F051E8629A68AE015D05ABDA6(__this, 5, NULL);
		return;
	}
}
// ThreeDISevenZeroR.UnityGifDecoder.Model.GifPlainText ThreeDISevenZeroR.UnityGifDecoder.GifStream::ReadPlainText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A GifStream_ReadPlainText_m56BE17B2053DAB7AFDA6599EFFC7DD6893A15A16 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// AssertToken(Token.PlainText);
		GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5(__this, 6, NULL);
		// currentStream.AssertByte(0x0c);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___currentStream_2;
		BitUtils_AssertByte_m1C51DDBEBE55EDC843FC50DA3B371568FA1BECC3(L_0, ((int32_t)12), NULL);
		// var result = new GifPlainText();
		il2cpp_codegen_initobj((&V_0), sizeof(GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A));
		// result.left = currentStream.ReadInt16LittleEndian();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___currentStream_2;
		int32_t L_2;
		L_2 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_1, NULL);
		(&V_0)->___left_0 = L_2;
		// result.top = currentStream.ReadInt16LittleEndian();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = __this->___currentStream_2;
		int32_t L_4;
		L_4 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_3, NULL);
		(&V_0)->___top_1 = L_4;
		// result.width = currentStream.ReadInt16LittleEndian();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = __this->___currentStream_2;
		int32_t L_6;
		L_6 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_5, NULL);
		(&V_0)->___width_2 = L_6;
		// result.height = currentStream.ReadInt16LittleEndian();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = __this->___currentStream_2;
		int32_t L_8;
		L_8 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_7, NULL);
		(&V_0)->___height_3 = L_8;
		// result.charWidth = currentStream.ReadByte8();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9 = __this->___currentStream_2;
		uint8_t L_10;
		L_10 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_9, NULL);
		(&V_0)->___charWidth_4 = L_10;
		// result.charHeight = currentStream.ReadByte8();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_11 = __this->___currentStream_2;
		uint8_t L_12;
		L_12 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_11, NULL);
		(&V_0)->___charHeight_5 = L_12;
		// result.foregroundColor = globalColorTable[currentStream.ReadByte8()];
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_13 = __this->___globalColorTable_11;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_14 = __this->___currentStream_2;
		uint8_t L_15;
		L_15 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_14, NULL);
		NullCheck(L_13);
		uint8_t L_16 = L_15;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		(&V_0)->___foregroundColor_7 = L_17;
		// result.backgroundColor = globalColorTable[currentStream.ReadByte8()];
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_18 = __this->___globalColorTable_11;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_19 = __this->___currentStream_2;
		uint8_t L_20;
		L_20 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_19, NULL);
		NullCheck(L_18);
		uint8_t L_21 = L_20;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_22 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		(&V_0)->___backgroundColor_6 = L_22;
		// result.text = Encoding.ASCII.GetString(BitUtils.ReadGifBlocks(currentStream));
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_23;
		L_23 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_24 = __this->___currentStream_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = BitUtils_ReadGifBlocks_m9A068F0FB3C99E5BF362075674F9BA601DAAD19E(L_24, NULL);
		NullCheck(L_23);
		String_t* L_26;
		L_26 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(35 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_23, L_25);
		(&V_0)->___text_8 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___text_8), (void*)L_26);
		// result.colors = canvas.Colors;
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_27 = __this->___canvas_8;
		NullCheck(L_27);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_28;
		L_28 = GifCanvas_get_Colors_mB86B2B82A2ACBA7F0DF0697BEE61BD1CB48E4AB2_inline(L_27, NULL);
		(&V_0)->___colors_9 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___colors_9), (void*)L_28);
		// if (DrawPlainTextBackground)
		bool L_29;
		L_29 = GifStream_get_DrawPlainTextBackground_m0708BFF2D05BE4DA2C05B953DE611100A9002FAA_inline(__this, NULL);
		V_1 = L_29;
		bool L_30 = V_1;
		if (!L_30)
		{
			goto IL_0105;
		}
	}
	{
		// FillPlainTextBackground(result);
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_31 = V_0;
		GifStream_FillPlainTextBackground_m9D9C028D42F5885FE8BE4BB3B3F30C0879455682(__this, L_31, NULL);
	}

IL_0105:
	{
		// DetermineNextToken();
		int32_t L_32;
		L_32 = GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8(__this, NULL);
		// return result;
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_33 = V_0;
		V_2 = L_33;
		goto IL_0110;
	}

IL_0110:
	{
		// }
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_34 = V_2;
		return L_34;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::SkipPlainText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipPlainText_m5218A8BD99A1BA407DA84E917829BB574D47D0EA (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (DrawPlainTextBackground)
		bool L_0;
		L_0 = GifStream_get_DrawPlainTextBackground_m0708BFF2D05BE4DA2C05B953DE611100A9002FAA_inline(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// ReadPlainText();
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_2;
		L_2 = GifStream_ReadPlainText_m56BE17B2053DAB7AFDA6599EFFC7DD6893A15A16(__this, NULL);
		goto IL_001c;
	}

IL_0014:
	{
		// SkipBlock(Token.PlainText);
		GifStream_SkipBlock_mE331E17D537E2B4F051E8629A68AE015D05ABDA6(__this, 6, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// ThreeDISevenZeroR.UnityGifDecoder.Model.GifNetscapeExtension ThreeDISevenZeroR.UnityGifDecoder.GifStream::ReadNetscapeExtension()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837 GifStream_ReadNetscapeExtension_mD3CA420FFD767AB398CC96FFDC61EA00072FFF1F (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	bool V_6 = false;
	uint8_t V_7 = 0x0;
	uint8_t V_8 = 0x0;
	bool V_9 = false;
	GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837 V_10;
	memset((&V_10), 0, sizeof(V_10));
	GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837 V_11;
	memset((&V_11), 0, sizeof(V_11));
	{
		// AssertToken(Token.NetscapeExtension);
		GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5(__this, 7, NULL);
		// var hasBufferSize = false;
		V_0 = (bool)0;
		// var hasLoopCount = false;
		V_1 = (bool)0;
		// var loopCount = 0;
		V_2 = 0;
		// var bufferSize = 0;
		V_3 = 0;
		goto IL_0086;
	}

IL_0013:
	{
		// var blockSize = currentStream.ReadByte8();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___currentStream_2;
		uint8_t L_1;
		L_1 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_0, NULL);
		V_4 = L_1;
		// if (blockSize == 0)
		uint8_t L_2 = V_4;
		V_6 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_6;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// break;
		goto IL_008b;
	}

IL_002e:
	{
		// var blockId = currentStream.ReadByte8();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->___currentStream_2;
		uint8_t L_5;
		L_5 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_4, NULL);
		V_5 = L_5;
		// switch (blockId)
		uint8_t L_6 = V_5;
		V_8 = L_6;
		uint8_t L_7 = V_8;
		V_7 = L_7;
		uint8_t L_8 = V_7;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_004a;
	}

IL_004a:
	{
		uint8_t L_9 = V_7;
		if ((((int32_t)L_9) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0071;
	}

IL_0051:
	{
		// hasLoopCount = true;
		V_1 = (bool)1;
		// loopCount = currentStream.ReadInt16LittleEndian();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_10 = __this->___currentStream_2;
		int32_t L_11;
		L_11 = BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389(L_10, NULL);
		V_2 = L_11;
		// break;
		goto IL_0085;
	}

IL_0061:
	{
		// hasBufferSize = true;
		V_0 = (bool)1;
		// bufferSize = currentStream.ReadInt32LittleEndian();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_12 = __this->___currentStream_2;
		int32_t L_13;
		L_13 = BitUtils_ReadInt32LittleEndian_m7BB989504B2207AC7B4CF6495A7BCCD1A997448F(L_12, NULL);
		V_3 = L_13;
		// break;
		goto IL_0085;
	}

IL_0071:
	{
		// currentStream.Seek(blockSize - 1, SeekOrigin.Current);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_14 = __this->___currentStream_2;
		uint8_t L_15 = V_4;
		NullCheck(L_14);
		int64_t L_16;
		L_16 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(29 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_14, ((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, 1))), 1);
		// break;
		goto IL_0085;
	}

IL_0085:
	{
	}

IL_0086:
	{
		// while (true)
		V_9 = (bool)1;
		goto IL_0013;
	}

IL_008b:
	{
		// DetermineNextToken();
		int32_t L_17;
		L_17 = GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8(__this, NULL);
		// return new GifNetscapeExtension
		// {
		//     hasLoopCount = hasLoopCount,
		//     hasBufferSize = hasBufferSize,
		//     loopCount = loopCount,
		//     bufferSize = bufferSize
		// };
		il2cpp_codegen_initobj((&V_10), sizeof(GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837));
		bool L_18 = V_1;
		(&V_10)->___hasLoopCount_0 = L_18;
		bool L_19 = V_0;
		(&V_10)->___hasBufferSize_1 = L_19;
		int32_t L_20 = V_2;
		(&V_10)->___loopCount_2 = L_20;
		int32_t L_21 = V_3;
		(&V_10)->___bufferSize_3 = L_21;
		GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837 L_22 = V_10;
		V_11 = L_22;
		goto IL_00c0;
	}

IL_00c0:
	{
		// }
		GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837 L_23 = V_11;
		return L_23;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::SkipNetscapeExtension()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipNetscapeExtension_mA379B5306260922DDC09823683FD9FEBF60A238C (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		// public void SkipNetscapeExtension() => SkipBlock(Token.NetscapeExtension);
		GifStream_SkipBlock_mE331E17D537E2B4F051E8629A68AE015D05ABDA6(__this, 7, NULL);
		return;
	}
}
// ThreeDISevenZeroR.UnityGifDecoder.Model.GifApplicationExtension ThreeDISevenZeroR.UnityGifDecoder.GifStream::ReadApplicationExtension()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GifApplicationExtension_t5F7EA5FA01EF8CD4BA5CC18F51EEBFC4854DB860* GifStream_ReadApplicationExtension_mEBFB87FDBA6C6E54D87797C0B95C10F41D4E7D3E (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GifApplicationExtension_t5F7EA5FA01EF8CD4BA5CC18F51EEBFC4854DB860_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	uint8_t V_3 = 0x0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	GifApplicationExtension_t5F7EA5FA01EF8CD4BA5CC18F51EEBFC4854DB860* V_7 = NULL;
	{
		// AssertToken(Token.ApplicationExtension);
		GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5(__this, 8, NULL);
		// var blocks = new List<byte[]>();
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_0, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		V_0 = L_0;
		// var appName = Encoding.ASCII.GetString(extensionApplicationBuffer, 0, 8);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___extensionApplicationBuffer_15;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_1, L_2, 0, 8);
		V_1 = L_3;
		// var appCode = Encoding.ASCII.GetString(extensionApplicationBuffer, 8, 3);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4;
		L_4 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___extensionApplicationBuffer_15;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 8, 3);
		V_2 = L_6;
		goto IL_0072;
	}

IL_0037:
	{
		// var blockSize = currentStream.ReadByte8();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = __this->___currentStream_2;
		uint8_t L_8;
		L_8 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_7, NULL);
		V_3 = L_8;
		// if (blockSize == 0)
		uint8_t L_9 = V_3;
		V_5 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		// break;
		goto IL_0077;
	}

IL_0050:
	{
		// var array = new byte[blockSize];
		uint8_t L_11 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_11);
		V_4 = L_12;
		// currentStream.Read(array, 0, blockSize);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_13 = __this->___currentStream_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_4;
		uint8_t L_15 = V_3;
		NullCheck(L_13);
		int32_t L_16;
		L_16 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(30 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_13, L_14, 0, L_15);
		// blocks.Add(array);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_17 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_4;
		NullCheck(L_17);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_17, L_18, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
	}

IL_0072:
	{
		// while (true)
		V_6 = (bool)1;
		goto IL_0037;
	}

IL_0077:
	{
		// DetermineNextToken();
		int32_t L_19;
		L_19 = GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8(__this, NULL);
		// return new GifApplicationExtension
		// {
		//     applicationIdentifier = appName,
		//     applicationAuthCode = appCode,
		//     applicationData = blocks.ToArray()
		// };
		GifApplicationExtension_t5F7EA5FA01EF8CD4BA5CC18F51EEBFC4854DB860* L_20 = (GifApplicationExtension_t5F7EA5FA01EF8CD4BA5CC18F51EEBFC4854DB860*)il2cpp_codegen_object_new(GifApplicationExtension_t5F7EA5FA01EF8CD4BA5CC18F51EEBFC4854DB860_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		GifApplicationExtension__ctor_m6224C7111883A017C592A7A88B839E67A1928BE6(L_20, NULL);
		GifApplicationExtension_t5F7EA5FA01EF8CD4BA5CC18F51EEBFC4854DB860* L_21 = L_20;
		String_t* L_22 = V_1;
		NullCheck(L_21);
		L_21->___applicationIdentifier_0 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___applicationIdentifier_0), (void*)L_22);
		GifApplicationExtension_t5F7EA5FA01EF8CD4BA5CC18F51EEBFC4854DB860* L_23 = L_21;
		String_t* L_24 = V_2;
		NullCheck(L_23);
		L_23->___applicationAuthCode_1 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_23->___applicationAuthCode_1), (void*)L_24);
		GifApplicationExtension_t5F7EA5FA01EF8CD4BA5CC18F51EEBFC4854DB860* L_25 = L_23;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_26 = V_0;
		NullCheck(L_26);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_27;
		L_27 = List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A(L_26, List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		NullCheck(L_25);
		L_25->___applicationData_2 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->___applicationData_2), (void*)L_27);
		V_7 = L_25;
		goto IL_00a1;
	}

IL_00a1:
	{
		// }
		GifApplicationExtension_t5F7EA5FA01EF8CD4BA5CC18F51EEBFC4854DB860* L_28 = V_7;
		return L_28;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::SkipApplicationExtension()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipApplicationExtension_m53BD3252324088F8695E5FE3E3622F0167035E05 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		// public void SkipApplicationExtension() => SkipBlock(Token.ApplicationExtension);
		GifStream_SkipBlock_mE331E17D537E2B4F051E8629A68AE015D05ABDA6(__this, 8, NULL);
		return;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::DecodeLzwImageToCanvas(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color32[],System.Int32,System.Boolean,ThreeDISevenZeroR.UnityGifDecoder.Model.GifDisposalMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_DecodeLzwImageToCanvas_m7C581346C2EE3C82016A2724C3BF3388CFB5E822 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_lzwMinCodeSize, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___5_colorTable, int32_t ___6_transparentColorIndex, bool ___7_isInterlaced, int32_t ___8_disposalMethod, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (header.hasGlobalColorTable)
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_0 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header_5);
		bool L_1 = L_0->___hasGlobalColorTable_3;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// canvas.BackgroundColor = globalColorTable[header.transparentColorIndex];
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_3 = __this->___canvas_8;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_4 = __this->___globalColorTable_11;
		GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6* L_5 = (GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6*)(&__this->___header_5);
		int32_t L_6 = L_5->___transparentColorIndex_5;
		NullCheck(L_4);
		int32_t L_7 = L_6;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_3);
		GifCanvas_set_BackgroundColor_m1957BD48CA2C39BE26FDBB6DEAA2A226C6336675_inline(L_3, L_8, NULL);
	}

IL_0032:
	{
		// canvas.BeginNewFrame(x, y, width, height, colorTable, transparentColorIndex, isInterlaced, disposalMethod);
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_9 = __this->___canvas_8;
		int32_t L_10 = ___1_x;
		int32_t L_11 = ___2_y;
		int32_t L_12 = ___3_width;
		int32_t L_13 = ___4_height;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_14 = ___5_colorTable;
		int32_t L_15 = ___6_transparentColorIndex;
		bool L_16 = ___7_isInterlaced;
		int32_t L_17 = ___8_disposalMethod;
		NullCheck(L_9);
		GifCanvas_BeginNewFrame_m8527EA6DA98073F5AD60E2613A35C1A3A303665A(L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, NULL);
		// lzwDictionary.InitWithWordSize(lzwMinCodeSize);
		GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* L_18 = __this->___lzwDictionary_9;
		int32_t L_19 = ___0_lzwMinCodeSize;
		NullCheck(L_18);
		GifLzwDictionary_InitWithWordSize_m6EB670CB50780C303EA50B4E09D651A3FBDDE52C(L_18, L_19, NULL);
		// blockReader.StartNewReading();
		GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* L_20 = __this->___blockReader_10;
		NullCheck(L_20);
		GifBitBlockReader_StartNewReading_mE9EA1508974B1D1568624B10F83F0C35195B401F(L_20, NULL);
		// lzwDictionary.DecodeStream(blockReader, canvas);
		GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* L_21 = __this->___lzwDictionary_9;
		GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* L_22 = __this->___blockReader_10;
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_23 = __this->___canvas_8;
		NullCheck(L_21);
		GifLzwDictionary_DecodeStream_m282A91A032D123465F3B40EFF235A00D1A97A73B(L_21, L_22, L_23, NULL);
		// blockReader.FinishReading();
		GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* L_24 = __this->___blockReader_10;
		NullCheck(L_24);
		GifBitBlockReader_FinishReading_m46CB518BF425B45BB2F5610311E53AB31721491D(L_24, NULL);
		// }
		return;
	}
}
// ThreeDISevenZeroR.UnityGifDecoder.GifStream/Token ThreeDISevenZeroR.UnityGifDecoder.GifStream::DetermineNextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13114A10702C59B7459B7FFB94B3EC9814AED612);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t G_B22_0 = 0;
	{
		goto IL_012c;
	}

IL_0006:
	{
		// var blockType = currentStream.ReadByte8();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___currentStream_2;
		uint8_t L_1;
		L_1 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_0, NULL);
		V_0 = L_1;
		// switch (blockType)
		uint8_t L_2 = V_0;
		V_3 = L_2;
		uint8_t L_3 = V_3;
		V_2 = L_3;
		uint8_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)33))))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_001e;
	}

IL_001e:
	{
		uint8_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)44))))
		{
			goto IL_00fe;
		}
	}
	{
		goto IL_0028;
	}

IL_0028:
	{
		uint8_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)59))))
		{
			goto IL_0109;
		}
	}
	{
		goto IL_0115;
	}

IL_0035:
	{
		// var extensionType = currentStream.ReadByte8();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = __this->___currentStream_2;
		uint8_t L_8;
		L_8 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_7, NULL);
		V_1 = L_8;
		// switch (extensionType)
		uint8_t L_9 = V_1;
		V_5 = L_9;
		uint8_t L_10 = V_5;
		V_4 = L_10;
		uint8_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)249)))))
		{
			goto IL_0066;
		}
	}
	{
		uint8_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)1)))
		{
			goto IL_008a;
		}
	}
	{
		goto IL_0058;
	}

IL_0058:
	{
		uint8_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)249))))
		{
			goto IL_0098;
		}
	}
	{
		goto IL_00ee;
	}

IL_0066:
	{
		uint8_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)254))))
		{
			goto IL_007c;
		}
	}
	{
		goto IL_0071;
	}

IL_0071:
	{
		uint8_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)255))))
		{
			goto IL_00a6;
		}
	}
	{
		goto IL_00ee;
	}

IL_007c:
	{
		// case commentLabel: return SetCurrentToken(Token.Comment);
		int32_t L_16;
		L_16 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, 5, NULL);
		V_6 = L_16;
		goto IL_0134;
	}

IL_008a:
	{
		// case PlainTextLabel: return SetCurrentToken(Token.PlainText);
		int32_t L_17;
		L_17 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, 6, NULL);
		V_6 = L_17;
		goto IL_0134;
	}

IL_0098:
	{
		// case GraphicControlLabel: return SetCurrentToken(Token.GraphicsControl);
		int32_t L_18;
		L_18 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, 2, NULL);
		V_6 = L_18;
		goto IL_0134;
	}

IL_00a6:
	{
		// currentStream.AssertByte(11);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_19 = __this->___currentStream_2;
		BitUtils_AssertByte_m1C51DDBEBE55EDC843FC50DA3B371568FA1BECC3(L_19, ((int32_t)11), NULL);
		// currentStream.Read(extensionApplicationBuffer, 0, 11);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_20 = __this->___currentStream_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___extensionApplicationBuffer_15;
		NullCheck(L_20);
		int32_t L_22;
		L_22 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(30 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_20, L_21, 0, ((int32_t)11));
		// var token = BitUtils.CheckString(extensionApplicationBuffer, "NETSCAPE2.0")
		//     ? Token.NetscapeExtension
		//     : Token.ApplicationExtension;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___extensionApplicationBuffer_15;
		bool L_24;
		L_24 = BitUtils_CheckString_m4576B20F61F98DB5C7287A7F28E2233F4BF5CB8D(L_23, _stringLiteral13114A10702C59B7459B7FFB94B3EC9814AED612, NULL);
		if (L_24)
		{
			goto IL_00df;
		}
	}
	{
		G_B22_0 = 8;
		goto IL_00e0;
	}

IL_00df:
	{
		G_B22_0 = 7;
	}

IL_00e0:
	{
		V_7 = G_B22_0;
		// return SetCurrentToken(token);
		int32_t L_25 = V_7;
		int32_t L_26;
		L_26 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, L_25, NULL);
		V_6 = L_26;
		goto IL_0134;
	}

IL_00ee:
	{
		// default: BitUtils.SkipGifBlocks(currentStream); break;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_27 = __this->___currentStream_2;
		BitUtils_SkipGifBlocks_m0855EB727D126CA398FECABBF94CBF935096D39A(L_27, NULL);
		// default: BitUtils.SkipGifBlocks(currentStream); break;
		goto IL_00fc;
	}

IL_00fc:
	{
		// break;
		goto IL_012b;
	}

IL_00fe:
	{
		// case ImageDescriptorBlock: return SetCurrentToken(Token.ImageDescriptor);
		int32_t L_28;
		L_28 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, 3, NULL);
		V_6 = L_28;
		goto IL_0134;
	}

IL_0109:
	{
		// case EndOfFile: return SetCurrentToken(Token.EndOfFile);
		int32_t L_29;
		L_29 = GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF(__this, ((int32_t)9), NULL);
		V_6 = L_29;
		goto IL_0134;
	}

IL_0115:
	{
		// default: throw new ArgumentException($"Unknown block type {blockType}");
		uint8_t L_30 = V_0;
		uint8_t L_31 = L_30;
		RuntimeObject* L_32 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)), &L_31);
		String_t* L_33;
		L_33 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F88ED9B30F2AB64825F279EE35E3EE38153DDCF)), L_32, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_34 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_34);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_34, L_33, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8_RuntimeMethod_var)));
	}

IL_012b:
	{
	}

IL_012c:
	{
		// while (true)
		V_8 = (bool)1;
		goto IL_0006;
	}

IL_0134:
	{
		// }
		int32_t L_35 = V_6;
		return L_35;
	}
}
// ThreeDISevenZeroR.UnityGifDecoder.GifStream/Token ThreeDISevenZeroR.UnityGifDecoder.GifStream::SetCurrentToken(ThreeDISevenZeroR.UnityGifDecoder.GifStream/Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifStream_SetCurrentToken_mD56B5CAB9C79A09DDAD9DBBAAD9A1ADB9410E5EF (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_token, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// CurrentToken = token;
		int32_t L_0 = ___0_token;
		GifStream_set_CurrentToken_m27028DAAFD0B0CBDF5552D7550A1CDB4EBA333F9_inline(__this, L_0, NULL);
		// return token;
		int32_t L_1 = ___0_token;
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::FillPlainTextBackground(ThreeDISevenZeroR.UnityGifDecoder.Model.GifPlainText)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_FillPlainTextBackground_m9D9C028D42F5885FE8BE4BB3B3F30C0879455682 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A ___0_text, const RuntimeMethod* method) 
{
	{
		// canvas.BeginNewFrame(text.left, text.top, text.width, text.height, globalColorTable,
		//     graphicControl.transparentColorIndex, imageDescriptor.isInterlaced, graphicControl.disposalMethod);
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_0 = __this->___canvas_8;
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_1 = ___0_text;
		int32_t L_2 = L_1.___left_0;
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_3 = ___0_text;
		int32_t L_4 = L_3.___top_1;
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_5 = ___0_text;
		int32_t L_6 = L_5.___width_2;
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_7 = ___0_text;
		int32_t L_8 = L_7.___height_3;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_9 = __this->___globalColorTable_11;
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_10 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl_6);
		int32_t L_11 = L_10->___transparentColorIndex_4;
		GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798* L_12 = (GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798*)(&__this->___imageDescriptor_7);
		bool L_13 = L_12->___isInterlaced_4;
		GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5* L_14 = (GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5*)(&__this->___graphicControl_6);
		int32_t L_15 = L_14->___disposalMethod_1;
		NullCheck(L_0);
		GifCanvas_BeginNewFrame_m8527EA6DA98073F5AD60E2613A35C1A3A303665A(L_0, L_2, L_4, L_6, L_8, L_9, L_11, L_13, L_15, NULL);
		// canvas.FillWithColor(text.left, text.top,
		//     text.width, text.height, text.backgroundColor);
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_16 = __this->___canvas_8;
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_17 = ___0_text;
		int32_t L_18 = L_17.___left_0;
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_19 = ___0_text;
		int32_t L_20 = L_19.___top_1;
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_21 = ___0_text;
		int32_t L_22 = L_21.___width_2;
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_23 = ___0_text;
		int32_t L_24 = L_23.___height_3;
		GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A L_25 = ___0_text;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_26 = L_25.___backgroundColor_6;
		NullCheck(L_16);
		GifCanvas_FillWithColor_m7B9E75DBA61CF4B87BAE1B5E07671CFD7ED1748B(L_16, L_18, L_20, L_22, L_24, L_26, NULL);
		// }
		return;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::AssertToken(ThreeDISevenZeroR.UnityGifDecoder.GifStream/Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (CurrentToken != token)
		int32_t L_0;
		L_0 = GifStream_get_CurrentToken_m1891B7145B082A07D1A9263F217E5B60B10DEB83_inline(__this, NULL);
		int32_t L_1 = ___0_token;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		// throw new InvalidOperationException(
		//     $"Cannot invoke this method while current token is \"{CurrentToken}\", " +
		//     $"method should be called when token is {token}");
		int32_t L_3;
		L_3 = GifStream_get_CurrentToken_m1891B7145B082A07D1A9263F217E5B60B10DEB83_inline(__this, NULL);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Token_tF5F8AF62F32CB565CECB5B4ADB4A0E7DABC84DC7_il2cpp_TypeInfo_var)), &L_4);
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2478869FE087903451AEBC85CA33DBDF081CCAF9)), L_5, NULL);
		int32_t L_7 = ___0_token;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Token_tF5F8AF62F32CB565CECB5B4ADB4A0E7DABC84DC7_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE697DBBAC6F5DC17B8F0F13A9F1560E8F8404117)), L_9, NULL);
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_6, L_10, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_12 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5_RuntimeMethod_var)));
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.GifStream::SkipBlock(ThreeDISevenZeroR.UnityGifDecoder.GifStream/Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifStream_SkipBlock_mE331E17D537E2B4F051E8629A68AE015D05ABDA6 (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_token, const RuntimeMethod* method) 
{
	{
		// AssertToken(token);
		int32_t L_0 = ___0_token;
		GifStream_AssertToken_m5CF79E42442C2D375A09CDE56629B4557163F1E5(__this, L_0, NULL);
		// BitUtils.SkipGifBlocks(currentStream);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___currentStream_2;
		BitUtils_SkipGifBlocks_m0855EB727D126CA398FECABBF94CBF935096D39A(L_1, NULL);
		// DetermineNextToken();
		int32_t L_2;
		L_2 = GifStream_DetermineNextToken_mED7F6FE35C44C0B1F85980023B261E04137FCEF8(__this, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.Utils.BitUtils::CheckString(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitUtils_CheckString_m4576B20F61F98DB5C7287A7F28E2233F4BF5CB8D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, String_t* ___1_s, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// for (var i = 0; i < array.Length; i++)
		V_0 = 0;
		goto IL_0022;
	}

IL_0005:
	{
		// if (array[i] != s[i])
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		String_t* L_4 = ___1_s;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, L_5, NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_001d;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0030;
	}

IL_001d:
	{
		// for (var i = 0; i < array.Length; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0022:
	{
		// for (var i = 0; i < array.Length; i++)
		int32_t L_9 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_array;
		NullCheck(L_10);
		V_3 = (bool)((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))? 1 : 0);
		bool L_11 = V_3;
		if (L_11)
		{
			goto IL_0005;
		}
	}
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		bool L_12 = V_2;
		return L_12;
	}
}
// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Utils.BitUtils::ReadInt16LittleEndian(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitUtils_ReadInt16LittleEndian_m4ECA1FE3EF5B4B1E55CA4518D712BB7E8C0F4389 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	int32_t V_2 = 0;
	{
		// var b1 = reader.ReadByte8();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_reader;
		uint8_t L_1;
		L_1 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_0, NULL);
		V_0 = L_1;
		// var b2 = reader.ReadByte8();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___0_reader;
		uint8_t L_3;
		L_3 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_2, NULL);
		V_1 = L_3;
		// return (b2 << 8) + b1;
		uint8_t L_4 = V_1;
		uint8_t L_5 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_4<<8)), (int32_t)L_5));
		goto IL_0017;
	}

IL_0017:
	{
		// }
		int32_t L_6 = V_2;
		return L_6;
	}
}
// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Utils.BitUtils::ReadInt32LittleEndian(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitUtils_ReadInt32LittleEndian_m7BB989504B2207AC7B4CF6495A7BCCD1A997448F (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	int32_t V_4 = 0;
	{
		// var b1 = reader.ReadByte8();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_reader;
		uint8_t L_1;
		L_1 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_0, NULL);
		V_0 = L_1;
		// var b2 = reader.ReadByte8();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___0_reader;
		uint8_t L_3;
		L_3 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_2, NULL);
		V_1 = L_3;
		// var b3 = reader.ReadByte8();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = ___0_reader;
		uint8_t L_5;
		L_5 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_4, NULL);
		V_2 = L_5;
		// var b4 = reader.ReadByte8();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___0_reader;
		uint8_t L_7;
		L_7 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_6, NULL);
		V_3 = L_7;
		// return (b4 << 24) + (b3 << 16) + (b2 << 8) + b1;
		uint8_t L_8 = V_3;
		uint8_t L_9 = V_2;
		uint8_t L_10 = V_1;
		uint8_t L_11 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_8<<((int32_t)24))), ((int32_t)((int32_t)L_9<<((int32_t)16))))), ((int32_t)((int32_t)L_10<<8)))), (int32_t)L_11));
		goto IL_0030;
	}

IL_0030:
	{
		// }
		int32_t L_12 = V_4;
		return L_12;
	}
}
// System.Byte ThreeDISevenZeroR.UnityGifDecoder.Utils.BitUtils::ReadByte8(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	uint8_t V_2 = 0x0;
	{
		// var b = reader.ReadByte();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_reader;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(32 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		V_0 = L_1;
		// if (b == -1)
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0016;
		}
	}
	{
		// throw new EndOfStreamException();
		EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* L_4 = (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		EndOfStreamException__ctor_m154EAE9BDAE2A8EB0EE6714D881FA7075628C582(L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF_RuntimeMethod_var)));
	}

IL_0016:
	{
		// return (byte) b;
		int32_t L_5 = V_0;
		V_2 = (uint8_t)((int32_t)(uint8_t)L_5);
		goto IL_001b;
	}

IL_001b:
	{
		// }
		uint8_t L_6 = V_2;
		return L_6;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.Utils.BitUtils::AssertByte(System.IO.Stream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitUtils_AssertByte_m1C51DDBEBE55EDC843FC50DA3B371568FA1BECC3 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, int32_t ___1_expectedValue, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	bool V_1 = false;
	{
		// var readByte = reader.ReadByte8();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_reader;
		uint8_t L_1;
		L_1 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_0, NULL);
		V_0 = L_1;
		// if(readByte != expectedValue)
		uint8_t L_2 = V_0;
		int32_t L_3 = ___1_expectedValue;
		V_1 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// throw new ArgumentException($"Invalid byte, expected {expectedValue}, got {readByte}");
		int32_t L_5 = ___1_expectedValue;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_6);
		uint8_t L_8 = V_0;
		uint8_t L_9 = L_8;
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)), &L_9);
		String_t* L_11;
		L_11 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4013E5E88C2171694988C9818C0339FDA4E6B30F)), L_7, L_10, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BitUtils_AssertByte_m1C51DDBEBE55EDC843FC50DA3B371568FA1BECC3_RuntimeMethod_var)));
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Utils.BitUtils::GetColorTableSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitUtils_GetColorTableSize_m0182A8D368C1072B1686362526DF5EE5EF2C55DF (int32_t ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return 1 << (data + 1);
		int32_t L_0 = ___0_data;
		V_0 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_add(L_0, 1))&((int32_t)31)))));
		goto IL_000c;
	}

IL_000c:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Utils.BitUtils::GetBitsFromByte(System.Byte,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitUtils_GetBitsFromByte_m425F942AA28070AC80981FC044C3B51664FC389F (uint8_t ___0_b, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	{
		// var result = 0;
		V_0 = 0;
		// for (var i = 0; i < count; i++)
		V_1 = 0;
		goto IL_0024;
	}

IL_0007:
	{
		// result += (GetBitFromByte(b, offset + i) ? 1 : 0) << i;
		int32_t L_0 = V_0;
		uint8_t L_1 = ___0_b;
		int32_t L_2 = ___1_offset;
		int32_t L_3 = V_1;
		bool L_4;
		L_4 = BitUtils_GetBitFromByte_mA20256AF9D3D63341209EC29CA4964C1A22B12A0(L_1, ((int32_t)il2cpp_codegen_add(L_2, L_3)), NULL);
		G_B2_0 = L_0;
		if (L_4)
		{
			G_B3_0 = L_0;
			goto IL_0017;
		}
	}
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_0018:
	{
		int32_t L_5 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(G_B4_1, ((int32_t)(G_B4_0<<((int32_t)(L_5&((int32_t)31)))))));
		// for (var i = 0; i < count; i++)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0024:
	{
		// for (var i = 0; i < count; i++)
		int32_t L_7 = V_1;
		int32_t L_8 = ___2_count;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0007;
		}
	}
	{
		// return result;
		int32_t L_10 = V_0;
		V_3 = L_10;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		int32_t L_11 = V_3;
		return L_11;
	}
}
// System.Boolean ThreeDISevenZeroR.UnityGifDecoder.Utils.BitUtils::GetBitFromByte(System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitUtils_GetBitFromByte_mA20256AF9D3D63341209EC29CA4964C1A22B12A0 (uint8_t ___0_b, int32_t ___1_offset, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return (b & (1 << offset)) != 0;
		uint8_t L_0 = ___0_b;
		int32_t L_1 = ___1_offset;
		V_0 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&((int32_t)(1<<((int32_t)(L_1&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Byte[] ThreeDISevenZeroR.UnityGifDecoder.Utils.BitUtils::ReadGifBlocks(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitUtils_ReadGifBlocks_m9A068F0FB3C99E5BF362075674F9BA601DAAD19E (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_0 = NULL;
	uint8_t V_1 = 0x0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	{
		// var blocks = new List<byte>();
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9(L_0, List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		V_0 = L_0;
		goto IL_0037;
	}

IL_0009:
	{
		// var blockSize = reader.ReadByte8();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_reader;
		uint8_t L_2;
		L_2 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_1, NULL);
		V_1 = L_2;
		// if(blockSize == 0)
		uint8_t L_3 = V_1;
		V_3 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_001b;
		}
	}
	{
		// break;
		goto IL_003c;
	}

IL_001b:
	{
		// var bytes = new byte[blockSize];
		uint8_t L_5 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_2 = L_6;
		// reader.Read(bytes, 0, bytes.Length);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = ___0_reader;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10;
		L_10 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(30 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, ((int32_t)(((RuntimeArray*)L_9)->max_length)));
		// blocks.AddRange(bytes);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_11 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_2;
		NullCheck(L_11);
		List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_11, (RuntimeObject*)L_12, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
	}

IL_0037:
	{
		// while (true)
		V_4 = (bool)1;
		goto IL_0009;
	}

IL_003c:
	{
		// return blocks.ToArray();
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_13 = V_0;
		NullCheck(L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_13, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		V_5 = L_14;
		goto IL_0046;
	}

IL_0046:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_5;
		return L_15;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.Utils.BitUtils::SkipGifBlocks(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitUtils_SkipGifBlocks_m0855EB727D126CA398FECABBF94CBF935096D39A (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_reader, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	bool V_1 = false;
	bool V_2 = false;
	{
		goto IL_0020;
	}

IL_0003:
	{
		// var blockSize = reader.ReadByte8();
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_reader;
		uint8_t L_1;
		L_1 = BitUtils_ReadByte8_mB0326945961522CFB8C7C01E07B5CF78DE2558FF(L_0, NULL);
		V_0 = L_1;
		// if (blockSize == 0)
		uint8_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		goto IL_0024;
	}

IL_0015:
	{
		// reader.Seek(blockSize, SeekOrigin.Current);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = ___0_reader;
		uint8_t L_5 = V_0;
		NullCheck(L_4);
		int64_t L_6;
		L_6 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(29 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_4, ((int64_t)(uint64_t)L_5), 1);
	}

IL_0020:
	{
		// while (true)
		V_2 = (bool)1;
		goto IL_0003;
	}

IL_0024:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ThreeDISevenZeroR.UnityGifDecoder.Model.GifApplicationExtension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifApplicationExtension__ctor_m6224C7111883A017C592A7A88B839E67A1928BE6 (GifApplicationExtension_t5F7EA5FA01EF8CD4BA5CC18F51EEBFC4854DB860* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: ThreeDISevenZeroR.UnityGifDecoder.Model.GifGraphicControl
IL2CPP_EXTERN_C void GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshal_pinvoke(const GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5& unmarshaled, GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshaled_pinvoke& marshaled)
{
	marshaled.___userInput_0 = static_cast<int32_t>(unmarshaled.___userInput_0);
	marshaled.___disposalMethod_1 = unmarshaled.___disposalMethod_1;
	marshaled.___delayTime_2 = unmarshaled.___delayTime_2;
	marshaled.___hasTransparency_3 = static_cast<int32_t>(unmarshaled.___hasTransparency_3);
	marshaled.___transparentColorIndex_4 = unmarshaled.___transparentColorIndex_4;
}
IL2CPP_EXTERN_C void GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshal_pinvoke_back(const GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshaled_pinvoke& marshaled, GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5& unmarshaled)
{
	bool unmarshaleduserInput_temp_0 = false;
	unmarshaleduserInput_temp_0 = static_cast<bool>(marshaled.___userInput_0);
	unmarshaled.___userInput_0 = unmarshaleduserInput_temp_0;
	int32_t unmarshaleddisposalMethod_temp_1 = 0;
	unmarshaleddisposalMethod_temp_1 = marshaled.___disposalMethod_1;
	unmarshaled.___disposalMethod_1 = unmarshaleddisposalMethod_temp_1;
	int32_t unmarshaleddelayTime_temp_2 = 0;
	unmarshaleddelayTime_temp_2 = marshaled.___delayTime_2;
	unmarshaled.___delayTime_2 = unmarshaleddelayTime_temp_2;
	bool unmarshaledhasTransparency_temp_3 = false;
	unmarshaledhasTransparency_temp_3 = static_cast<bool>(marshaled.___hasTransparency_3);
	unmarshaled.___hasTransparency_3 = unmarshaledhasTransparency_temp_3;
	int32_t unmarshaledtransparentColorIndex_temp_4 = 0;
	unmarshaledtransparentColorIndex_temp_4 = marshaled.___transparentColorIndex_4;
	unmarshaled.___transparentColorIndex_4 = unmarshaledtransparentColorIndex_temp_4;
}
// Conversion method for clean up from marshalling of: ThreeDISevenZeroR.UnityGifDecoder.Model.GifGraphicControl
IL2CPP_EXTERN_C void GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshal_pinvoke_cleanup(GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ThreeDISevenZeroR.UnityGifDecoder.Model.GifGraphicControl
IL2CPP_EXTERN_C void GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshal_com(const GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5& unmarshaled, GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshaled_com& marshaled)
{
	marshaled.___userInput_0 = static_cast<int32_t>(unmarshaled.___userInput_0);
	marshaled.___disposalMethod_1 = unmarshaled.___disposalMethod_1;
	marshaled.___delayTime_2 = unmarshaled.___delayTime_2;
	marshaled.___hasTransparency_3 = static_cast<int32_t>(unmarshaled.___hasTransparency_3);
	marshaled.___transparentColorIndex_4 = unmarshaled.___transparentColorIndex_4;
}
IL2CPP_EXTERN_C void GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshal_com_back(const GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshaled_com& marshaled, GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5& unmarshaled)
{
	bool unmarshaleduserInput_temp_0 = false;
	unmarshaleduserInput_temp_0 = static_cast<bool>(marshaled.___userInput_0);
	unmarshaled.___userInput_0 = unmarshaleduserInput_temp_0;
	int32_t unmarshaleddisposalMethod_temp_1 = 0;
	unmarshaleddisposalMethod_temp_1 = marshaled.___disposalMethod_1;
	unmarshaled.___disposalMethod_1 = unmarshaleddisposalMethod_temp_1;
	int32_t unmarshaleddelayTime_temp_2 = 0;
	unmarshaleddelayTime_temp_2 = marshaled.___delayTime_2;
	unmarshaled.___delayTime_2 = unmarshaleddelayTime_temp_2;
	bool unmarshaledhasTransparency_temp_3 = false;
	unmarshaledhasTransparency_temp_3 = static_cast<bool>(marshaled.___hasTransparency_3);
	unmarshaled.___hasTransparency_3 = unmarshaledhasTransparency_temp_3;
	int32_t unmarshaledtransparentColorIndex_temp_4 = 0;
	unmarshaledtransparentColorIndex_temp_4 = marshaled.___transparentColorIndex_4;
	unmarshaled.___transparentColorIndex_4 = unmarshaledtransparentColorIndex_temp_4;
}
// Conversion method for clean up from marshalling of: ThreeDISevenZeroR.UnityGifDecoder.Model.GifGraphicControl
IL2CPP_EXTERN_C void GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshal_com_cleanup(GifGraphicControl_t4430684A1F1F66B047E4A8A0F7EFCE75BC6405D5_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader
IL2CPP_EXTERN_C void GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshal_pinvoke(const GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6& unmarshaled, GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshaled_pinvoke& marshaled)
{
	marshaled.___version_0 = unmarshaled.___version_0;
	marshaled.___width_1 = unmarshaled.___width_1;
	marshaled.___height_2 = unmarshaled.___height_2;
	marshaled.___hasGlobalColorTable_3 = static_cast<int32_t>(unmarshaled.___hasGlobalColorTable_3);
	marshaled.___globalColorTableSize_4 = unmarshaled.___globalColorTableSize_4;
	marshaled.___transparentColorIndex_5 = unmarshaled.___transparentColorIndex_5;
	marshaled.___sortColors_6 = static_cast<int32_t>(unmarshaled.___sortColors_6);
	marshaled.___colorResolution_7 = unmarshaled.___colorResolution_7;
	marshaled.___pixelAspectRatio_8 = unmarshaled.___pixelAspectRatio_8;
}
IL2CPP_EXTERN_C void GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshal_pinvoke_back(const GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshaled_pinvoke& marshaled, GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6& unmarshaled)
{
	int32_t unmarshaledversion_temp_0 = 0;
	unmarshaledversion_temp_0 = marshaled.___version_0;
	unmarshaled.___version_0 = unmarshaledversion_temp_0;
	int32_t unmarshaledwidth_temp_1 = 0;
	unmarshaledwidth_temp_1 = marshaled.___width_1;
	unmarshaled.___width_1 = unmarshaledwidth_temp_1;
	int32_t unmarshaledheight_temp_2 = 0;
	unmarshaledheight_temp_2 = marshaled.___height_2;
	unmarshaled.___height_2 = unmarshaledheight_temp_2;
	bool unmarshaledhasGlobalColorTable_temp_3 = false;
	unmarshaledhasGlobalColorTable_temp_3 = static_cast<bool>(marshaled.___hasGlobalColorTable_3);
	unmarshaled.___hasGlobalColorTable_3 = unmarshaledhasGlobalColorTable_temp_3;
	int32_t unmarshaledglobalColorTableSize_temp_4 = 0;
	unmarshaledglobalColorTableSize_temp_4 = marshaled.___globalColorTableSize_4;
	unmarshaled.___globalColorTableSize_4 = unmarshaledglobalColorTableSize_temp_4;
	int32_t unmarshaledtransparentColorIndex_temp_5 = 0;
	unmarshaledtransparentColorIndex_temp_5 = marshaled.___transparentColorIndex_5;
	unmarshaled.___transparentColorIndex_5 = unmarshaledtransparentColorIndex_temp_5;
	bool unmarshaledsortColors_temp_6 = false;
	unmarshaledsortColors_temp_6 = static_cast<bool>(marshaled.___sortColors_6);
	unmarshaled.___sortColors_6 = unmarshaledsortColors_temp_6;
	int32_t unmarshaledcolorResolution_temp_7 = 0;
	unmarshaledcolorResolution_temp_7 = marshaled.___colorResolution_7;
	unmarshaled.___colorResolution_7 = unmarshaledcolorResolution_temp_7;
	int32_t unmarshaledpixelAspectRatio_temp_8 = 0;
	unmarshaledpixelAspectRatio_temp_8 = marshaled.___pixelAspectRatio_8;
	unmarshaled.___pixelAspectRatio_8 = unmarshaledpixelAspectRatio_temp_8;
}
// Conversion method for clean up from marshalling of: ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader
IL2CPP_EXTERN_C void GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshal_pinvoke_cleanup(GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader
IL2CPP_EXTERN_C void GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshal_com(const GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6& unmarshaled, GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshaled_com& marshaled)
{
	marshaled.___version_0 = unmarshaled.___version_0;
	marshaled.___width_1 = unmarshaled.___width_1;
	marshaled.___height_2 = unmarshaled.___height_2;
	marshaled.___hasGlobalColorTable_3 = static_cast<int32_t>(unmarshaled.___hasGlobalColorTable_3);
	marshaled.___globalColorTableSize_4 = unmarshaled.___globalColorTableSize_4;
	marshaled.___transparentColorIndex_5 = unmarshaled.___transparentColorIndex_5;
	marshaled.___sortColors_6 = static_cast<int32_t>(unmarshaled.___sortColors_6);
	marshaled.___colorResolution_7 = unmarshaled.___colorResolution_7;
	marshaled.___pixelAspectRatio_8 = unmarshaled.___pixelAspectRatio_8;
}
IL2CPP_EXTERN_C void GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshal_com_back(const GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshaled_com& marshaled, GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6& unmarshaled)
{
	int32_t unmarshaledversion_temp_0 = 0;
	unmarshaledversion_temp_0 = marshaled.___version_0;
	unmarshaled.___version_0 = unmarshaledversion_temp_0;
	int32_t unmarshaledwidth_temp_1 = 0;
	unmarshaledwidth_temp_1 = marshaled.___width_1;
	unmarshaled.___width_1 = unmarshaledwidth_temp_1;
	int32_t unmarshaledheight_temp_2 = 0;
	unmarshaledheight_temp_2 = marshaled.___height_2;
	unmarshaled.___height_2 = unmarshaledheight_temp_2;
	bool unmarshaledhasGlobalColorTable_temp_3 = false;
	unmarshaledhasGlobalColorTable_temp_3 = static_cast<bool>(marshaled.___hasGlobalColorTable_3);
	unmarshaled.___hasGlobalColorTable_3 = unmarshaledhasGlobalColorTable_temp_3;
	int32_t unmarshaledglobalColorTableSize_temp_4 = 0;
	unmarshaledglobalColorTableSize_temp_4 = marshaled.___globalColorTableSize_4;
	unmarshaled.___globalColorTableSize_4 = unmarshaledglobalColorTableSize_temp_4;
	int32_t unmarshaledtransparentColorIndex_temp_5 = 0;
	unmarshaledtransparentColorIndex_temp_5 = marshaled.___transparentColorIndex_5;
	unmarshaled.___transparentColorIndex_5 = unmarshaledtransparentColorIndex_temp_5;
	bool unmarshaledsortColors_temp_6 = false;
	unmarshaledsortColors_temp_6 = static_cast<bool>(marshaled.___sortColors_6);
	unmarshaled.___sortColors_6 = unmarshaledsortColors_temp_6;
	int32_t unmarshaledcolorResolution_temp_7 = 0;
	unmarshaledcolorResolution_temp_7 = marshaled.___colorResolution_7;
	unmarshaled.___colorResolution_7 = unmarshaledcolorResolution_temp_7;
	int32_t unmarshaledpixelAspectRatio_temp_8 = 0;
	unmarshaledpixelAspectRatio_temp_8 = marshaled.___pixelAspectRatio_8;
	unmarshaled.___pixelAspectRatio_8 = unmarshaledpixelAspectRatio_temp_8;
}
// Conversion method for clean up from marshalling of: ThreeDISevenZeroR.UnityGifDecoder.Model.GifHeader
IL2CPP_EXTERN_C void GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshal_com_cleanup(GifHeader_tC0EA5414F28868FD9D750FC6D6CC5EDA1A9918C6_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Model.GifImage::get_DelayMs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifImage_get_DelayMs_mEFDA5F3F7FFF218E5A536FCF1D7893A80962E539 (GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* __this, const RuntimeMethod* method) 
{
	{
		// public int DelayMs => delay * 10;
		int32_t L_0 = __this->___delay_2;
		return ((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)10)));
	}
}
// System.Single ThreeDISevenZeroR.UnityGifDecoder.Model.GifImage::get_SafeDelayMs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GifImage_get_SafeDelayMs_mB05AF7D32EF57699413249C3BDDDD49B2758DFA9 (GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// public float SafeDelayMs => delay > 1 ? DelayMs : 100;
		int32_t L_0 = __this->___delay_2;
		if ((((int32_t)L_0) > ((int32_t)1)))
		{
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((int32_t)100);
		goto IL_0013;
	}

IL_000d:
	{
		int32_t L_1;
		L_1 = GifImage_get_DelayMs_mEFDA5F3F7FFF218E5A536FCF1D7893A80962E539(__this, NULL);
		G_B3_0 = L_1;
	}

IL_0013:
	{
		return ((float)G_B3_0);
	}
}
// System.Single ThreeDISevenZeroR.UnityGifDecoder.Model.GifImage::get_DelaySeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GifImage_get_DelaySeconds_m5CD56C6BFFD2EAFC227C141D8E0773A8C85FEF3E (GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* __this, const RuntimeMethod* method) 
{
	{
		// public float DelaySeconds => delay / 100f;
		int32_t L_0 = __this->___delay_2;
		return ((float)(((float)L_0)/(100.0f)));
	}
}
// System.Single ThreeDISevenZeroR.UnityGifDecoder.Model.GifImage::get_SafeDelaySeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GifImage_get_SafeDelaySeconds_m1469D5E57209B454175D5EB4E2AB8A4ACC1404A8 (GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* __this, const RuntimeMethod* method) 
{
	{
		// public float SafeDelaySeconds => SafeDelayMs / 1000f;
		float L_0;
		L_0 = GifImage_get_SafeDelayMs_mB05AF7D32EF57699413249C3BDDDD49B2758DFA9(__this, NULL);
		return ((float)(L_0/(1000.0f)));
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.Model.GifImage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifImage__ctor_mCE252161928621A19D7534A36A77905A3E3A80FB (GifImage_t41076A88DAFC129782CD4ADDBE7B3E189BCD3948* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor
IL2CPP_EXTERN_C void GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshal_pinvoke(const GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798& unmarshaled, GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshaled_pinvoke& marshaled)
{
	marshaled.___left_0 = unmarshaled.___left_0;
	marshaled.___top_1 = unmarshaled.___top_1;
	marshaled.___width_2 = unmarshaled.___width_2;
	marshaled.___height_3 = unmarshaled.___height_3;
	marshaled.___isInterlaced_4 = static_cast<int32_t>(unmarshaled.___isInterlaced_4);
	marshaled.___hasLocalColorTable_5 = static_cast<int32_t>(unmarshaled.___hasLocalColorTable_5);
	marshaled.___localColorTableSize_6 = unmarshaled.___localColorTableSize_6;
}
IL2CPP_EXTERN_C void GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshal_pinvoke_back(const GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshaled_pinvoke& marshaled, GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798& unmarshaled)
{
	int32_t unmarshaledleft_temp_0 = 0;
	unmarshaledleft_temp_0 = marshaled.___left_0;
	unmarshaled.___left_0 = unmarshaledleft_temp_0;
	int32_t unmarshaledtop_temp_1 = 0;
	unmarshaledtop_temp_1 = marshaled.___top_1;
	unmarshaled.___top_1 = unmarshaledtop_temp_1;
	int32_t unmarshaledwidth_temp_2 = 0;
	unmarshaledwidth_temp_2 = marshaled.___width_2;
	unmarshaled.___width_2 = unmarshaledwidth_temp_2;
	int32_t unmarshaledheight_temp_3 = 0;
	unmarshaledheight_temp_3 = marshaled.___height_3;
	unmarshaled.___height_3 = unmarshaledheight_temp_3;
	bool unmarshaledisInterlaced_temp_4 = false;
	unmarshaledisInterlaced_temp_4 = static_cast<bool>(marshaled.___isInterlaced_4);
	unmarshaled.___isInterlaced_4 = unmarshaledisInterlaced_temp_4;
	bool unmarshaledhasLocalColorTable_temp_5 = false;
	unmarshaledhasLocalColorTable_temp_5 = static_cast<bool>(marshaled.___hasLocalColorTable_5);
	unmarshaled.___hasLocalColorTable_5 = unmarshaledhasLocalColorTable_temp_5;
	int32_t unmarshaledlocalColorTableSize_temp_6 = 0;
	unmarshaledlocalColorTableSize_temp_6 = marshaled.___localColorTableSize_6;
	unmarshaled.___localColorTableSize_6 = unmarshaledlocalColorTableSize_temp_6;
}
// Conversion method for clean up from marshalling of: ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor
IL2CPP_EXTERN_C void GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshal_pinvoke_cleanup(GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor
IL2CPP_EXTERN_C void GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshal_com(const GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798& unmarshaled, GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshaled_com& marshaled)
{
	marshaled.___left_0 = unmarshaled.___left_0;
	marshaled.___top_1 = unmarshaled.___top_1;
	marshaled.___width_2 = unmarshaled.___width_2;
	marshaled.___height_3 = unmarshaled.___height_3;
	marshaled.___isInterlaced_4 = static_cast<int32_t>(unmarshaled.___isInterlaced_4);
	marshaled.___hasLocalColorTable_5 = static_cast<int32_t>(unmarshaled.___hasLocalColorTable_5);
	marshaled.___localColorTableSize_6 = unmarshaled.___localColorTableSize_6;
}
IL2CPP_EXTERN_C void GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshal_com_back(const GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshaled_com& marshaled, GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798& unmarshaled)
{
	int32_t unmarshaledleft_temp_0 = 0;
	unmarshaledleft_temp_0 = marshaled.___left_0;
	unmarshaled.___left_0 = unmarshaledleft_temp_0;
	int32_t unmarshaledtop_temp_1 = 0;
	unmarshaledtop_temp_1 = marshaled.___top_1;
	unmarshaled.___top_1 = unmarshaledtop_temp_1;
	int32_t unmarshaledwidth_temp_2 = 0;
	unmarshaledwidth_temp_2 = marshaled.___width_2;
	unmarshaled.___width_2 = unmarshaledwidth_temp_2;
	int32_t unmarshaledheight_temp_3 = 0;
	unmarshaledheight_temp_3 = marshaled.___height_3;
	unmarshaled.___height_3 = unmarshaledheight_temp_3;
	bool unmarshaledisInterlaced_temp_4 = false;
	unmarshaledisInterlaced_temp_4 = static_cast<bool>(marshaled.___isInterlaced_4);
	unmarshaled.___isInterlaced_4 = unmarshaledisInterlaced_temp_4;
	bool unmarshaledhasLocalColorTable_temp_5 = false;
	unmarshaledhasLocalColorTable_temp_5 = static_cast<bool>(marshaled.___hasLocalColorTable_5);
	unmarshaled.___hasLocalColorTable_5 = unmarshaledhasLocalColorTable_temp_5;
	int32_t unmarshaledlocalColorTableSize_temp_6 = 0;
	unmarshaledlocalColorTableSize_temp_6 = marshaled.___localColorTableSize_6;
	unmarshaled.___localColorTableSize_6 = unmarshaledlocalColorTableSize_temp_6;
}
// Conversion method for clean up from marshalling of: ThreeDISevenZeroR.UnityGifDecoder.Model.GifImageDescriptor
IL2CPP_EXTERN_C void GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshal_com_cleanup(GifImageDescriptor_tF64A043EBF4F94910255C949754D71E7C297E798_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: ThreeDISevenZeroR.UnityGifDecoder.Model.GifNetscapeExtension
IL2CPP_EXTERN_C void GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837_marshal_pinvoke(const GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837& unmarshaled, GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837_marshaled_pinvoke& marshaled)
{
	marshaled.___hasLoopCount_0 = static_cast<int32_t>(unmarshaled.___hasLoopCount_0);
	marshaled.___hasBufferSize_1 = static_cast<int32_t>(unmarshaled.___hasBufferSize_1);
	marshaled.___loopCount_2 = unmarshaled.___loopCount_2;
	marshaled.___bufferSize_3 = unmarshaled.___bufferSize_3;
}
IL2CPP_EXTERN_C void GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837_marshal_pinvoke_back(const GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837_marshaled_pinvoke& marshaled, GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837& unmarshaled)
{
	bool unmarshaledhasLoopCount_temp_0 = false;
	unmarshaledhasLoopCount_temp_0 = static_cast<bool>(marshaled.___hasLoopCount_0);
	unmarshaled.___hasLoopCount_0 = unmarshaledhasLoopCount_temp_0;
	bool unmarshaledhasBufferSize_temp_1 = false;
	unmarshaledhasBufferSize_temp_1 = static_cast<bool>(marshaled.___hasBufferSize_1);
	unmarshaled.___hasBufferSize_1 = unmarshaledhasBufferSize_temp_1;
	int32_t unmarshaledloopCount_temp_2 = 0;
	unmarshaledloopCount_temp_2 = marshaled.___loopCount_2;
	unmarshaled.___loopCount_2 = unmarshaledloopCount_temp_2;
	int32_t unmarshaledbufferSize_temp_3 = 0;
	unmarshaledbufferSize_temp_3 = marshaled.___bufferSize_3;
	unmarshaled.___bufferSize_3 = unmarshaledbufferSize_temp_3;
}
// Conversion method for clean up from marshalling of: ThreeDISevenZeroR.UnityGifDecoder.Model.GifNetscapeExtension
IL2CPP_EXTERN_C void GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837_marshal_pinvoke_cleanup(GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ThreeDISevenZeroR.UnityGifDecoder.Model.GifNetscapeExtension
IL2CPP_EXTERN_C void GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837_marshal_com(const GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837& unmarshaled, GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837_marshaled_com& marshaled)
{
	marshaled.___hasLoopCount_0 = static_cast<int32_t>(unmarshaled.___hasLoopCount_0);
	marshaled.___hasBufferSize_1 = static_cast<int32_t>(unmarshaled.___hasBufferSize_1);
	marshaled.___loopCount_2 = unmarshaled.___loopCount_2;
	marshaled.___bufferSize_3 = unmarshaled.___bufferSize_3;
}
IL2CPP_EXTERN_C void GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837_marshal_com_back(const GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837_marshaled_com& marshaled, GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837& unmarshaled)
{
	bool unmarshaledhasLoopCount_temp_0 = false;
	unmarshaledhasLoopCount_temp_0 = static_cast<bool>(marshaled.___hasLoopCount_0);
	unmarshaled.___hasLoopCount_0 = unmarshaledhasLoopCount_temp_0;
	bool unmarshaledhasBufferSize_temp_1 = false;
	unmarshaledhasBufferSize_temp_1 = static_cast<bool>(marshaled.___hasBufferSize_1);
	unmarshaled.___hasBufferSize_1 = unmarshaledhasBufferSize_temp_1;
	int32_t unmarshaledloopCount_temp_2 = 0;
	unmarshaledloopCount_temp_2 = marshaled.___loopCount_2;
	unmarshaled.___loopCount_2 = unmarshaledloopCount_temp_2;
	int32_t unmarshaledbufferSize_temp_3 = 0;
	unmarshaledbufferSize_temp_3 = marshaled.___bufferSize_3;
	unmarshaled.___bufferSize_3 = unmarshaledbufferSize_temp_3;
}
// Conversion method for clean up from marshalling of: ThreeDISevenZeroR.UnityGifDecoder.Model.GifNetscapeExtension
IL2CPP_EXTERN_C void GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837_marshal_com_cleanup(GifNetscapeExtension_tC773D2920C4CF23929126C322F6951F0087B2837_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: ThreeDISevenZeroR.UnityGifDecoder.Model.GifPalette
IL2CPP_EXTERN_C void GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshal_pinvoke(const GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891& unmarshaled, GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.___palette_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledpalette_Length = (unmarshaled.___palette_0)->max_length;
		marshaled.___palette_0 = il2cpp_codegen_marshal_allocate_array<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>(_unmarshaledpalette_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledpalette_Length); i++)
		{
			(marshaled.___palette_0)[i] = (unmarshaled.___palette_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___palette_0 = NULL;
	}
	marshaled.___size_1 = unmarshaled.___size_1;
	marshaled.___isGlobal_2 = static_cast<int32_t>(unmarshaled.___isGlobal_2);
}
IL2CPP_EXTERN_C void GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshal_pinvoke_back(const GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshaled_pinvoke& marshaled, GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___palette_0 != NULL)
	{
		if (unmarshaled.___palette_0 == NULL)
		{
			unmarshaled.___palette_0 = reinterpret_cast<Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*>((Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___palette_0), (void*)reinterpret_cast<Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*>((Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___palette_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___palette_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___palette_0)[i]);
		}
	}
	int32_t unmarshaledsize_temp_1 = 0;
	unmarshaledsize_temp_1 = marshaled.___size_1;
	unmarshaled.___size_1 = unmarshaledsize_temp_1;
	bool unmarshaledisGlobal_temp_2 = false;
	unmarshaledisGlobal_temp_2 = static_cast<bool>(marshaled.___isGlobal_2);
	unmarshaled.___isGlobal_2 = unmarshaledisGlobal_temp_2;
}
// Conversion method for clean up from marshalling of: ThreeDISevenZeroR.UnityGifDecoder.Model.GifPalette
IL2CPP_EXTERN_C void GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshal_pinvoke_cleanup(GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshaled_pinvoke& marshaled)
{
	if (marshaled.___palette_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___palette_0);
		marshaled.___palette_0 = NULL;
	}
}
// Conversion methods for marshalling of: ThreeDISevenZeroR.UnityGifDecoder.Model.GifPalette
IL2CPP_EXTERN_C void GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshal_com(const GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891& unmarshaled, GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshaled_com& marshaled)
{
	if (unmarshaled.___palette_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledpalette_Length = (unmarshaled.___palette_0)->max_length;
		marshaled.___palette_0 = il2cpp_codegen_marshal_allocate_array<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>(_unmarshaledpalette_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledpalette_Length); i++)
		{
			(marshaled.___palette_0)[i] = (unmarshaled.___palette_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___palette_0 = NULL;
	}
	marshaled.___size_1 = unmarshaled.___size_1;
	marshaled.___isGlobal_2 = static_cast<int32_t>(unmarshaled.___isGlobal_2);
}
IL2CPP_EXTERN_C void GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshal_com_back(const GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshaled_com& marshaled, GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___palette_0 != NULL)
	{
		if (unmarshaled.___palette_0 == NULL)
		{
			unmarshaled.___palette_0 = reinterpret_cast<Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*>((Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___palette_0), (void*)reinterpret_cast<Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*>((Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___palette_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___palette_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___palette_0)[i]);
		}
	}
	int32_t unmarshaledsize_temp_1 = 0;
	unmarshaledsize_temp_1 = marshaled.___size_1;
	unmarshaled.___size_1 = unmarshaledsize_temp_1;
	bool unmarshaledisGlobal_temp_2 = false;
	unmarshaledisGlobal_temp_2 = static_cast<bool>(marshaled.___isGlobal_2);
	unmarshaled.___isGlobal_2 = unmarshaledisGlobal_temp_2;
}
// Conversion method for clean up from marshalling of: ThreeDISevenZeroR.UnityGifDecoder.Model.GifPalette
IL2CPP_EXTERN_C void GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshal_com_cleanup(GifPalette_t239677530E0BB6AB01D17994EC748AB496B30891_marshaled_com& marshaled)
{
	if (marshaled.___palette_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___palette_0);
		marshaled.___palette_0 = NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: ThreeDISevenZeroR.UnityGifDecoder.Model.GifPlainText
IL2CPP_EXTERN_C void GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshal_pinvoke(const GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A& unmarshaled, GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshaled_pinvoke& marshaled)
{
	marshaled.___left_0 = unmarshaled.___left_0;
	marshaled.___top_1 = unmarshaled.___top_1;
	marshaled.___width_2 = unmarshaled.___width_2;
	marshaled.___height_3 = unmarshaled.___height_3;
	marshaled.___charWidth_4 = unmarshaled.___charWidth_4;
	marshaled.___charHeight_5 = unmarshaled.___charHeight_5;
	marshaled.___backgroundColor_6 = unmarshaled.___backgroundColor_6;
	marshaled.___foregroundColor_7 = unmarshaled.___foregroundColor_7;
	marshaled.___text_8 = il2cpp_codegen_marshal_string(unmarshaled.___text_8);
	if (unmarshaled.___colors_9 != NULL)
	{
		il2cpp_array_size_t _unmarshaledcolors_Length = (unmarshaled.___colors_9)->max_length;
		marshaled.___colors_9 = il2cpp_codegen_marshal_allocate_array<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>(_unmarshaledcolors_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledcolors_Length); i++)
		{
			(marshaled.___colors_9)[i] = (unmarshaled.___colors_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___colors_9 = NULL;
	}
}
IL2CPP_EXTERN_C void GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshal_pinvoke_back(const GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshaled_pinvoke& marshaled, GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaledleft_temp_0 = 0;
	unmarshaledleft_temp_0 = marshaled.___left_0;
	unmarshaled.___left_0 = unmarshaledleft_temp_0;
	int32_t unmarshaledtop_temp_1 = 0;
	unmarshaledtop_temp_1 = marshaled.___top_1;
	unmarshaled.___top_1 = unmarshaledtop_temp_1;
	int32_t unmarshaledwidth_temp_2 = 0;
	unmarshaledwidth_temp_2 = marshaled.___width_2;
	unmarshaled.___width_2 = unmarshaledwidth_temp_2;
	int32_t unmarshaledheight_temp_3 = 0;
	unmarshaledheight_temp_3 = marshaled.___height_3;
	unmarshaled.___height_3 = unmarshaledheight_temp_3;
	int32_t unmarshaledcharWidth_temp_4 = 0;
	unmarshaledcharWidth_temp_4 = marshaled.___charWidth_4;
	unmarshaled.___charWidth_4 = unmarshaledcharWidth_temp_4;
	int32_t unmarshaledcharHeight_temp_5 = 0;
	unmarshaledcharHeight_temp_5 = marshaled.___charHeight_5;
	unmarshaled.___charHeight_5 = unmarshaledcharHeight_temp_5;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B unmarshaledbackgroundColor_temp_6;
	memset((&unmarshaledbackgroundColor_temp_6), 0, sizeof(unmarshaledbackgroundColor_temp_6));
	unmarshaledbackgroundColor_temp_6 = marshaled.___backgroundColor_6;
	unmarshaled.___backgroundColor_6 = unmarshaledbackgroundColor_temp_6;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B unmarshaledforegroundColor_temp_7;
	memset((&unmarshaledforegroundColor_temp_7), 0, sizeof(unmarshaledforegroundColor_temp_7));
	unmarshaledforegroundColor_temp_7 = marshaled.___foregroundColor_7;
	unmarshaled.___foregroundColor_7 = unmarshaledforegroundColor_temp_7;
	unmarshaled.___text_8 = il2cpp_codegen_marshal_string_result(marshaled.___text_8);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___text_8), (void*)il2cpp_codegen_marshal_string_result(marshaled.___text_8));
	if (marshaled.___colors_9 != NULL)
	{
		if (unmarshaled.___colors_9 == NULL)
		{
			unmarshaled.___colors_9 = reinterpret_cast<Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*>((Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___colors_9), (void*)reinterpret_cast<Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*>((Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___colors_9)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___colors_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___colors_9)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: ThreeDISevenZeroR.UnityGifDecoder.Model.GifPlainText
IL2CPP_EXTERN_C void GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshal_pinvoke_cleanup(GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___text_8);
	marshaled.___text_8 = NULL;
	if (marshaled.___colors_9 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___colors_9);
		marshaled.___colors_9 = NULL;
	}
}
// Conversion methods for marshalling of: ThreeDISevenZeroR.UnityGifDecoder.Model.GifPlainText
IL2CPP_EXTERN_C void GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshal_com(const GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A& unmarshaled, GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshaled_com& marshaled)
{
	marshaled.___left_0 = unmarshaled.___left_0;
	marshaled.___top_1 = unmarshaled.___top_1;
	marshaled.___width_2 = unmarshaled.___width_2;
	marshaled.___height_3 = unmarshaled.___height_3;
	marshaled.___charWidth_4 = unmarshaled.___charWidth_4;
	marshaled.___charHeight_5 = unmarshaled.___charHeight_5;
	marshaled.___backgroundColor_6 = unmarshaled.___backgroundColor_6;
	marshaled.___foregroundColor_7 = unmarshaled.___foregroundColor_7;
	marshaled.___text_8 = il2cpp_codegen_marshal_bstring(unmarshaled.___text_8);
	if (unmarshaled.___colors_9 != NULL)
	{
		il2cpp_array_size_t _unmarshaledcolors_Length = (unmarshaled.___colors_9)->max_length;
		marshaled.___colors_9 = il2cpp_codegen_marshal_allocate_array<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>(_unmarshaledcolors_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledcolors_Length); i++)
		{
			(marshaled.___colors_9)[i] = (unmarshaled.___colors_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___colors_9 = NULL;
	}
}
IL2CPP_EXTERN_C void GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshal_com_back(const GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshaled_com& marshaled, GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaledleft_temp_0 = 0;
	unmarshaledleft_temp_0 = marshaled.___left_0;
	unmarshaled.___left_0 = unmarshaledleft_temp_0;
	int32_t unmarshaledtop_temp_1 = 0;
	unmarshaledtop_temp_1 = marshaled.___top_1;
	unmarshaled.___top_1 = unmarshaledtop_temp_1;
	int32_t unmarshaledwidth_temp_2 = 0;
	unmarshaledwidth_temp_2 = marshaled.___width_2;
	unmarshaled.___width_2 = unmarshaledwidth_temp_2;
	int32_t unmarshaledheight_temp_3 = 0;
	unmarshaledheight_temp_3 = marshaled.___height_3;
	unmarshaled.___height_3 = unmarshaledheight_temp_3;
	int32_t unmarshaledcharWidth_temp_4 = 0;
	unmarshaledcharWidth_temp_4 = marshaled.___charWidth_4;
	unmarshaled.___charWidth_4 = unmarshaledcharWidth_temp_4;
	int32_t unmarshaledcharHeight_temp_5 = 0;
	unmarshaledcharHeight_temp_5 = marshaled.___charHeight_5;
	unmarshaled.___charHeight_5 = unmarshaledcharHeight_temp_5;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B unmarshaledbackgroundColor_temp_6;
	memset((&unmarshaledbackgroundColor_temp_6), 0, sizeof(unmarshaledbackgroundColor_temp_6));
	unmarshaledbackgroundColor_temp_6 = marshaled.___backgroundColor_6;
	unmarshaled.___backgroundColor_6 = unmarshaledbackgroundColor_temp_6;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B unmarshaledforegroundColor_temp_7;
	memset((&unmarshaledforegroundColor_temp_7), 0, sizeof(unmarshaledforegroundColor_temp_7));
	unmarshaledforegroundColor_temp_7 = marshaled.___foregroundColor_7;
	unmarshaled.___foregroundColor_7 = unmarshaledforegroundColor_temp_7;
	unmarshaled.___text_8 = il2cpp_codegen_marshal_bstring_result(marshaled.___text_8);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___text_8), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___text_8));
	if (marshaled.___colors_9 != NULL)
	{
		if (unmarshaled.___colors_9 == NULL)
		{
			unmarshaled.___colors_9 = reinterpret_cast<Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*>((Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___colors_9), (void*)reinterpret_cast<Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*>((Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___colors_9)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___colors_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___colors_9)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: ThreeDISevenZeroR.UnityGifDecoder.Model.GifPlainText
IL2CPP_EXTERN_C void GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshal_com_cleanup(GifPlainText_t1A5D4D566225FB62B1BB89932724E1DFE539BF8A_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___text_8);
	marshaled.___text_8 = NULL;
	if (marshaled.___colors_9 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___colors_9);
		marshaled.___colors_9 = NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifLzwDictionary__ctor_m45C86D2EE11A949D518D5B8CBCE04C7258E26BC3 (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public GifLzwDictionary()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// dictionaryEntryOffsets = new int[4096];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		__this->___dictionaryEntryOffsets_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dictionaryEntryOffsets_0), (void*)L_0);
		// dictionaryEntrySizes = new int[4096];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		__this->___dictionaryEntrySizes_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dictionaryEntrySizes_1), (void*)L_1);
		// dictionaryHeap = new byte[32768];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32768));
		__this->___dictionaryHeap_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dictionaryHeap_2), (void*)L_2);
		// }
		return;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary::InitWithWordSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifLzwDictionary_InitWithWordSize_m6EB670CB50780C303EA50B4E09D651A3FBDDE52C (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, int32_t ___0_minLzwCodeSize, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		// if (currentMinLzwCodeSize != minLzwCodeSize)
		int32_t L_0 = __this->___currentMinLzwCodeSize_9;
		int32_t L_1 = ___0_minLzwCodeSize;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00a5;
		}
	}
	{
		// currentMinLzwCodeSize = minLzwCodeSize;
		int32_t L_3 = ___0_minLzwCodeSize;
		__this->___currentMinLzwCodeSize_9 = L_3;
		// dictionaryHeapPosition = 0;
		__this->___dictionaryHeapPosition_4 = 0;
		// dictionarySize = 0;
		__this->___dictionarySize_3 = 0;
		// var colorCount = 1 << minLzwCodeSize;
		int32_t L_4 = ___0_minLzwCodeSize;
		V_1 = ((int32_t)(1<<((int32_t)(L_4&((int32_t)31)))));
		// for (var i = 0; i < colorCount; i++)
		V_2 = 0;
		goto IL_006c;
	}

IL_0035:
	{
		// dictionaryEntryOffsets[i] = dictionaryHeapPosition;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___dictionaryEntryOffsets_0;
		int32_t L_6 = V_2;
		int32_t L_7 = __this->___dictionaryHeapPosition_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (int32_t)L_7);
		// dictionaryEntrySizes[i] = 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___dictionaryEntrySizes_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (int32_t)1);
		// dictionaryHeap[dictionaryHeapPosition++] = (byte) i;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___dictionaryHeap_2;
		int32_t L_11 = __this->___dictionaryHeapPosition_4;
		V_3 = L_11;
		int32_t L_12 = V_3;
		__this->___dictionaryHeapPosition_4 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		int32_t L_13 = V_3;
		int32_t L_14 = V_2;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint8_t)((int32_t)(uint8_t)L_14));
		// for (var i = 0; i < colorCount; i++)
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_006c:
	{
		// for (var i = 0; i < colorCount; i++)
		int32_t L_16 = V_2;
		int32_t L_17 = V_1;
		V_4 = (bool)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_4;
		if (L_18)
		{
			goto IL_0035;
		}
	}
	{
		// initialDictionarySize = colorCount + 2;
		int32_t L_19 = V_1;
		__this->___initialDictionarySize_5 = ((int32_t)il2cpp_codegen_add(L_19, 2));
		// initialLzwCodeSize = minLzwCodeSize + 1;
		int32_t L_20 = ___0_minLzwCodeSize;
		__this->___initialLzwCodeSize_6 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		// initialDictionaryHeapPosition = dictionaryHeapPosition;
		int32_t L_21 = __this->___dictionaryHeapPosition_4;
		__this->___initialDictionaryHeapPosition_7 = L_21;
		// clearCodeId = colorCount;
		int32_t L_22 = V_1;
		__this->___clearCodeId_11 = L_22;
		// stopCodeId = colorCount + 1;
		int32_t L_23 = V_1;
		__this->___stopCodeId_12 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		// Clear();
		GifLzwDictionary_Clear_m1169FBCD8A2D4F227BBA0B53749FE91D6205E56B(__this, NULL);
		// }
		return;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifLzwDictionary_Clear_m1169FBCD8A2D4F227BBA0B53749FE91D6205E56B (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, const RuntimeMethod* method) 
{
	{
		// codeSize = initialLzwCodeSize;
		int32_t L_0 = __this->___initialLzwCodeSize_6;
		__this->___codeSize_10 = L_0;
		// dictionarySize = initialDictionarySize;
		int32_t L_1 = __this->___initialDictionarySize_5;
		__this->___dictionarySize_3 = L_1;
		// dictionaryHeapPosition = initialDictionaryHeapPosition;
		int32_t L_2 = __this->___initialDictionaryHeapPosition_7;
		__this->___dictionaryHeapPosition_4 = L_2;
		// nextLzwCodeGrowth = 1 << codeSize;
		int32_t L_3 = __this->___codeSize_10;
		__this->___nextLzwCodeGrowth_8 = ((int32_t)(1<<((int32_t)(L_3&((int32_t)31)))));
		// isFull = false;
		__this->___isFull_14 = (bool)0;
		// lastCodeId = -1;
		__this->___lastCodeId_13 = (-1);
		// }
		return;
	}
}
// System.Void ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary::DecodeStream(ThreeDISevenZeroR.UnityGifDecoder.GifBitBlockReader,ThreeDISevenZeroR.UnityGifDecoder.GifCanvas)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GifLzwDictionary_DecodeStream_m282A91A032D123465F3B40EFF235A00D1A97A73B (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* ___0_reader, GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* ___1_c, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	{
		goto IL_00e0;
	}

IL_0006:
	{
		// var entry = reader.ReadBits(codeSize);
		GifBitBlockReader_t6FBE81498C2D5EEACA2B1A6A56CA841F6496A44F* L_0 = ___0_reader;
		int32_t L_1 = __this->___codeSize_10;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = GifBitBlockReader_ReadBits_m709349EC1361339B4B75A084A64398E5532CE98E(L_0, L_1, NULL);
		V_0 = L_2;
		// if (entry == clearCodeId)
		int32_t L_3 = V_0;
		int32_t L_4 = __this->___clearCodeId_11;
		V_4 = (bool)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// Clear();
		GifLzwDictionary_Clear_m1169FBCD8A2D4F227BBA0B53749FE91D6205E56B(__this, NULL);
		// continue;
		goto IL_00e0;
	}

IL_0030:
	{
		// if (entry == stopCodeId)
		int32_t L_6 = V_0;
		int32_t L_7 = __this->___stopCodeId_12;
		V_5 = (bool)((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		// return;
		goto IL_00e8;
	}

IL_0045:
	{
		// if (entry < dictionarySize)
		int32_t L_9 = V_0;
		int32_t L_10 = __this->___dictionarySize_3;
		V_6 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_007f;
		}
	}
	{
		// if (lastCodeId >= 0)
		int32_t L_12 = __this->___lastCodeId_13;
		V_7 = (bool)((((int32_t)((((int32_t)L_12) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_7;
		if (!L_13)
		{
			goto IL_0075;
		}
	}
	{
		// CreateNewCode(lastCodeId, entry);
		int32_t L_14 = __this->___lastCodeId_13;
		int32_t L_15 = V_0;
		int32_t L_16;
		L_16 = GifLzwDictionary_CreateNewCode_mE1498C73E05273533BB8E39A82A149489F3205EE(__this, L_14, L_15, NULL);
	}

IL_0075:
	{
		// lastCodeId = entry;
		int32_t L_17 = V_0;
		__this->___lastCodeId_13 = L_17;
		goto IL_0099;
	}

IL_007f:
	{
		// lastCodeId = CreateNewCode(lastCodeId, lastCodeId);
		int32_t L_18 = __this->___lastCodeId_13;
		int32_t L_19 = __this->___lastCodeId_13;
		int32_t L_20;
		L_20 = GifLzwDictionary_CreateNewCode_mE1498C73E05273533BB8E39A82A149489F3205EE(__this, L_18, L_19, NULL);
		__this->___lastCodeId_13 = L_20;
	}

IL_0099:
	{
		// var position = dictionaryEntryOffsets[lastCodeId];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->___dictionaryEntryOffsets_0;
		int32_t L_22 = __this->___lastCodeId_13;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_1 = L_24;
		// var size = dictionaryEntrySizes[lastCodeId];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = __this->___dictionaryEntrySizes_1;
		int32_t L_26 = __this->___lastCodeId_13;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		int32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_2 = L_28;
		// var heapEnd = position + size;
		int32_t L_29 = V_1;
		int32_t L_30 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_29, L_30));
		// for (var i = position; i < heapEnd; i++)
		int32_t L_31 = V_1;
		V_8 = L_31;
		goto IL_00d4;
	}

IL_00be:
	{
		// c.OutputPixel(dictionaryHeap[i]);
		GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* L_32 = ___1_c;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = __this->___dictionaryHeap_2;
		int32_t L_34 = V_8;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		uint8_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_32);
		GifCanvas_OutputPixel_mAD73C3414E247E66802826F19AAFFA3083D10BE9(L_32, L_36, NULL);
		// for (var i = position; i < heapEnd; i++)
		int32_t L_37 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00d4:
	{
		// for (var i = position; i < heapEnd; i++)
		int32_t L_38 = V_8;
		int32_t L_39 = V_3;
		V_9 = (bool)((((int32_t)L_38) < ((int32_t)L_39))? 1 : 0);
		bool L_40 = V_9;
		if (L_40)
		{
			goto IL_00be;
		}
	}
	{
	}

IL_00e0:
	{
		// while (true)
		V_10 = (bool)1;
		goto IL_0006;
	}

IL_00e8:
	{
		// }
		return;
	}
}
// System.Int32 ThreeDISevenZeroR.UnityGifDecoder.Decode.GifLzwDictionary::CreateNewCode(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GifLzwDictionary_CreateNewCode_mE1498C73E05273533BB8E39A82A149489F3205EE (GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* __this, int32_t ___0_baseEntry, int32_t ___1_deriveEntry, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	int32_t G_B12_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B12_1 = NULL;
	int32_t G_B11_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B11_1 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B13_2 = NULL;
	GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* G_B16_0 = NULL;
	GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* G_B15_0 = NULL;
	int32_t G_B17_0 = 0;
	GifLzwDictionary_t451D3827FC1043EFDF9C154E57D964A0A03E7791* G_B17_1 = NULL;
	{
		// if (isFull)
		bool L_0 = __this->___isFull_14;
		V_6 = L_0;
		bool L_1 = V_6;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return -1;
		V_7 = (-1);
		goto IL_01ac;
	}

IL_0015:
	{
		// var entryHeapPosition = dictionaryEntryOffsets[baseEntry];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___dictionaryEntryOffsets_0;
		int32_t L_3 = ___0_baseEntry;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		// var entrySize = dictionaryEntrySizes[baseEntry];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->___dictionaryEntrySizes_1;
		int32_t L_7 = ___0_baseEntry;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		// var newEntryOffset = dictionaryHeapPosition;
		int32_t L_10 = __this->___dictionaryHeapPosition_4;
		V_2 = L_10;
		// var newEntrySize = entrySize + 1;
		int32_t L_11 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		// var newHeapCapacity = newEntryOffset + newEntrySize;
		int32_t L_12 = V_2;
		int32_t L_13 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(L_12, L_13));
		// if (dictionaryHeap.Length < newHeapCapacity)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___dictionaryHeap_2;
		NullCheck(L_14);
		int32_t L_15 = V_4;
		V_8 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_8;
		if (!L_16)
		{
			goto IL_0066;
		}
	}
	{
		// Array.Resize(ref dictionaryHeap, Math.Max(dictionaryHeap.Length * 2, newHeapCapacity));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_17 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)(&__this->___dictionaryHeap_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___dictionaryHeap_2;
		NullCheck(L_18);
		int32_t L_19 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_20;
		L_20 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_18)->max_length)), 2)), L_19, NULL);
		Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297(L_17, L_20, Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_RuntimeMethod_var);
	}

IL_0066:
	{
		// if (entrySize < 12)
		int32_t L_21 = V_1;
		V_9 = (bool)((((int32_t)L_21) < ((int32_t)((int32_t)12)))? 1 : 0);
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00b5;
		}
	}
	{
		// var endValue = entryHeapPosition + entrySize;
		int32_t L_23 = V_0;
		int32_t L_24 = V_1;
		V_10 = ((int32_t)il2cpp_codegen_add(L_23, L_24));
		// for (var i = entryHeapPosition; i < endValue; i++)
		int32_t L_25 = V_0;
		V_11 = L_25;
		goto IL_00a6;
	}

IL_007c:
	{
		// dictionaryHeap[dictionaryHeapPosition++] = dictionaryHeap[i];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___dictionaryHeap_2;
		int32_t L_27 = __this->___dictionaryHeapPosition_4;
		V_12 = L_27;
		int32_t L_28 = V_12;
		__this->___dictionaryHeapPosition_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		int32_t L_29 = V_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = __this->___dictionaryHeap_2;
		int32_t L_31 = V_11;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		uint8_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (uint8_t)L_33);
		// for (var i = entryHeapPosition; i < endValue; i++)
		int32_t L_34 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00a6:
	{
		// for (var i = entryHeapPosition; i < endValue; i++)
		int32_t L_35 = V_11;
		int32_t L_36 = V_10;
		V_13 = (bool)((((int32_t)L_35) < ((int32_t)L_36))? 1 : 0);
		bool L_37 = V_13;
		if (L_37)
		{
			goto IL_007c;
		}
	}
	{
		goto IL_00df;
	}

IL_00b5:
	{
		// Buffer.BlockCopy(dictionaryHeap, entryHeapPosition,
		//     dictionaryHeap, dictionaryHeapPosition, entrySize);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = __this->___dictionaryHeap_2;
		int32_t L_39 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = __this->___dictionaryHeap_2;
		int32_t L_41 = __this->___dictionaryHeapPosition_4;
		int32_t L_42 = V_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_38, L_39, (RuntimeArray*)L_40, L_41, L_42, NULL);
		// dictionaryHeapPosition += entrySize;
		int32_t L_43 = __this->___dictionaryHeapPosition_4;
		int32_t L_44 = V_1;
		__this->___dictionaryHeapPosition_4 = ((int32_t)il2cpp_codegen_add(L_43, L_44));
	}

IL_00df:
	{
		// dictionaryHeap[dictionaryHeapPosition++] = deriveEntry < initialDictionarySize
		//     ? (byte) deriveEntry : dictionaryHeap[dictionaryEntryOffsets[deriveEntry]];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = __this->___dictionaryHeap_2;
		int32_t L_46 = __this->___dictionaryHeapPosition_4;
		V_12 = L_46;
		int32_t L_47 = V_12;
		__this->___dictionaryHeapPosition_4 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		int32_t L_48 = V_12;
		int32_t L_49 = ___1_deriveEntry;
		int32_t L_50 = __this->___initialDictionarySize_5;
		G_B11_0 = L_48;
		G_B11_1 = L_45;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			G_B12_0 = L_48;
			G_B12_1 = L_45;
			goto IL_0113;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = __this->___dictionaryHeap_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = __this->___dictionaryEntryOffsets_0;
		int32_t L_53 = ___1_deriveEntry;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		int32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_51);
		int32_t L_56 = L_55;
		uint8_t L_57 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		G_B13_0 = ((int32_t)(L_57));
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_0115;
	}

IL_0113:
	{
		int32_t L_58 = ___1_deriveEntry;
		G_B13_0 = ((int32_t)(uint8_t)L_58);
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_0115:
	{
		NullCheck(G_B13_2);
		(G_B13_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B13_1), (uint8_t)G_B13_0);
		// var insertPosition = dictionarySize++;
		int32_t L_59 = __this->___dictionarySize_3;
		V_12 = L_59;
		int32_t L_60 = V_12;
		__this->___dictionarySize_3 = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = V_12;
		V_5 = L_61;
		// dictionaryEntryOffsets[insertPosition] = newEntryOffset;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = __this->___dictionaryEntryOffsets_0;
		int32_t L_63 = V_5;
		int32_t L_64 = V_2;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_63), (int32_t)L_64);
		// dictionaryEntrySizes[insertPosition] = newEntrySize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = __this->___dictionaryEntrySizes_1;
		int32_t L_66 = V_5;
		int32_t L_67 = V_3;
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(L_66), (int32_t)L_67);
		// if (dictionarySize >= nextLzwCodeGrowth)
		int32_t L_68 = __this->___dictionarySize_3;
		int32_t L_69 = __this->___nextLzwCodeGrowth_8;
		V_14 = (bool)((((int32_t)((((int32_t)L_68) < ((int32_t)L_69))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_70 = V_14;
		if (!L_70)
		{
			goto IL_0189;
		}
	}
	{
		// codeSize++;
		int32_t L_71 = __this->___codeSize_10;
		__this->___codeSize_10 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		// nextLzwCodeGrowth = codeSize == 12 ? int.MaxValue : 1 << codeSize;
		int32_t L_72 = __this->___codeSize_10;
		G_B15_0 = __this;
		if ((((int32_t)L_72) == ((int32_t)((int32_t)12))))
		{
			G_B16_0 = __this;
			goto IL_017e;
		}
	}
	{
		int32_t L_73 = __this->___codeSize_10;
		G_B17_0 = ((int32_t)(1<<((int32_t)(L_73&((int32_t)31)))));
		G_B17_1 = G_B15_0;
		goto IL_0183;
	}

IL_017e:
	{
		G_B17_0 = ((int32_t)2147483647LL);
		G_B17_1 = G_B16_0;
	}

IL_0183:
	{
		NullCheck(G_B17_1);
		G_B17_1->___nextLzwCodeGrowth_8 = G_B17_0;
	}

IL_0189:
	{
		// if (dictionarySize >= 4096)
		int32_t L_74 = __this->___dictionarySize_3;
		V_15 = (bool)((((int32_t)((((int32_t)L_74) < ((int32_t)((int32_t)4096)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_75 = V_15;
		if (!L_75)
		{
			goto IL_01a6;
		}
	}
	{
		// isFull = true;
		__this->___isFull_14 = (bool)1;
	}

IL_01a6:
	{
		// return insertPosition;
		int32_t L_76 = V_5;
		V_7 = L_76;
		goto IL_01ac;
	}

IL_01ac:
	{
		// }
		int32_t L_77 = V_7;
		return L_77;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GifCanvas_get_BackgroundColor_m7BF9FEE2DD131325DC84B30771B567922863DEFB_inline (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) 
{
	{
		// public Color32 BackgroundColor { get; set; }
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = __this->___U3CBackgroundColorU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___0_r;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___1_g;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___2_b;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___3_a;
		__this->___a_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GifCanvas_get_FlipVertically_m5814DF98E608124EBE23157E643B524AFF578EC4_inline (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) 
{
	{
		// public bool FlipVertically { get; set; } = true;
		bool L_0 = __this->___U3CFlipVerticallyU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GifCanvas_set_FlipVertically_mB801ABFE622E5537DA96A2FBE1A7818A1920906A_inline (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool FlipVertically { get; set; } = true;
		bool L_0 = ___0_value;
		__this->___U3CFlipVerticallyU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GifStream_get_CurrentToken_m1891B7145B082A07D1A9263F217E5B60B10DEB83_inline (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		// public Token CurrentToken { get; private set; }
		int32_t L_0 = __this->___U3CCurrentTokenU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GifStream_set_CurrentToken_m27028DAAFD0B0CBDF5552D7550A1CDB4EBA333F9_inline (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public Token CurrentToken { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CCurrentTokenU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* GifCanvas_get_Colors_mB86B2B82A2ACBA7F0DF0697BEE61BD1CB48E4AB2_inline (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, const RuntimeMethod* method) 
{
	{
		// public Color32[] Colors => canvasColors;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = __this->___canvasColors_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GifStream_get_DrawPlainTextBackground_m0708BFF2D05BE4DA2C05B953DE611100A9002FAA_inline (GifStream_tC32297D835D6150BBD9319F36DFDF34EB1B55BDD* __this, const RuntimeMethod* method) 
{
	{
		// public bool DrawPlainTextBackground { get; set; }
		bool L_0 = __this->___U3CDrawPlainTextBackgroundU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GifCanvas_set_BackgroundColor_m1957BD48CA2C39BE26FDBB6DEAA2A226C6336675_inline (GifCanvas_tBD82BACBD238AA36AB3BD75AFC429342CB484DC3* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_value, const RuntimeMethod* method) 
{
	{
		// public Color32 BackgroundColor { get; set; }
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_value;
		__this->___U3CBackgroundColorU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
