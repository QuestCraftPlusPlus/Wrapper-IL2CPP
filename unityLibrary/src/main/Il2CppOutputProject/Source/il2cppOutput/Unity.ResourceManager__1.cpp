﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>>>
struct Action_1_t54EC897DFC8848F81D1D78E3F1F700871D4DDF09;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF;
// System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>
struct Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F;
// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>
struct Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A;
// System.Action`1<UnityEngine.Networking.UnityWebRequest>
struct Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70;
// System.Action`1<UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext>
struct Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2;
// System.Action`2<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,System.Exception>
struct Action_2_t67647DD70912484E9205AC38396D2849ED602730;
// System.Action`4<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventType,System.Int32,System.Object>
struct Action_4_t9DB534B7D8A36A98095AEEA67EAC338F2230BA3D;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>
struct AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>
struct AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.Networking.UnityWebRequest>
struct AsyncOperationBase_1_tD0DD431DD05073163579D3343FDB22100EA4533D;
// UnityEngine.ResourceManagement.Util.ComponentSingleton`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton>
struct ComponentSingleton_1_t72FE88792928B5CD2047657E9122FA6E177CA55B;
// UnityEngine.ResourceManagement.Util.ComponentSingleton`1<System.Object>
struct ComponentSingleton_1_t48E072079F42456220A56E31B3AA96C419BB3157;
// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>>
struct DelegateList_1_t932E16E3FBFE5A6A290BCE66829B9EBC952556E3;
// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>>
struct DelegateList_1_tE5214C095910CA36010DD471BBF1F8F7EA6D4787;
// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.Networking.UnityWebRequest>>
struct DelegateList_1_t303CCE219AFE8E3A438A0F781DCC8C5642AEA2C2;
// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct DelegateList_1_tC070A3D40FCD92D36D6C762C004DDB78978B4F88;
// DelegateList`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>
struct DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D;
// DelegateList`1<System.Single>
struct DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD;
// System.Collections.Generic.Dictionary`2<UnityEngine.ResourceManagement.Util.IOperationCacheKey,UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>
struct Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>
struct Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider>
struct Dictionary_2_tC671E97FB5C542AA785863491CA2CF37DA59AE5D;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Type,System.Type>
struct Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>,System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>>>
struct Func_2_tB94F993A5DDDF0C1D7E46D5279CA30600E42FDEF;
// System.Func`2<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent,System.Int32>
struct Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3;
// System.Func`2<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation,System.String>
struct Func_2_t4413089D739AA5DDB9D744DB3B447A0246563A86;
// System.Collections.Generic.HashSet`1<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider>
struct HashSet_1_tB0D8BEB55EE8D7CCDDEE7710376D3FB984232BB5;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.HashSet`1<UnityEngine.ResourceManagement.ResourceManager/InstanceOperation>
struct HashSet_1_tB813E9BB87712BD40D5CDC96CDB692FCBBEB5267;
// System.Collections.Generic.IEnumerable`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct IEnumerable_1_tFE6CE62D67D61F940F6BF8AE9D22B703E0E83BC1;
// System.Collections.Generic.IEnumerable`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>
struct IEnumerable_1_tDD9DF829266F558E94EC5986CD1208FFB246A018;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4;
// System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>
struct IList_1_tFEC432B87E444FFF0D7B8EFD6CBB918523AD6827;
// System.Linq.IOrderedEnumerable`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>
struct IOrderedEnumerable_1_t9DACB1ECAF5115C2F9791C94F3C9940F28215C06;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>
struct KeyCollection_tFAC383D7A40C76346ACBCBB59584FBF57DC456C0;
// System.Collections.Generic.LinkedList`1<System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>>
struct LinkedList_1_tAA509CD47BFC477A91DAC780DAE59B2DD17CFAEA;
// ListWithEvents`1<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider>
struct ListWithEvents_1_tE17E3C4786AF60909D570A474EDAB620896FF2FB;
// ListWithEvents`1<UnityEngine.ResourceManagement.IUpdateReceiver>
struct ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF;
// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843;
// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>
struct List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9;
// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>
struct List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C;
// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.IUpdateReceiver>
struct List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>
struct List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskCompletionSource`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>
struct TaskCompletionSource_1_t82760B5622E48B21F74387D6CA1B0F25D6E599B0;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.Networking.UnityWebRequest>
struct TaskCompletionSource_1_t2B9064F62AF3EDA7973A19D42D18B4C977E59E55;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>
struct ValueCollection_t4231960DE2FFBB109405B9AC8DA4CE93EFF2AF11;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>[]
struct EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5;
// System.Collections.Generic.HashSet`1/Slot<System.Object>[]
struct SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle[]
struct AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent[]
struct DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollector
struct DiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367;
// UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton
struct DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.ResourceManagement.AsyncOperations.GroupOperation
struct GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE;
// UnityEngine.ResourceManagement.Util.IAllocationStrategy
struct IAllocationStrategy_tBA79AEDCB2794BBB55BCD903B96EFBBB77583D77;
// UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation
struct IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.ResourceManagement.Util.IOperationCacheKey
struct IOperationCacheKey_t39BE25F281EA1D574F074D55F4CAF08F13DF3CCA;
// UnityEngine.IPlayerEditorConnectionNative
struct IPlayerEditorConnectionNative_tDFA5BC770DAA5BE37CBA1CF47281702FB064CCF3;
// UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation
struct IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C;
// UnityEngine.ResourceManagement.ResourceLocations.LocationWrapper
struct LocationWrapper_tB71FABF66A165C7C0C671E526E2031D0A28ACAA4;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ResourceManagement.Exceptions.OperationException
struct OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434;
// UnityEngine.Networking.PlayerConnection.PlayerConnection
struct PlayerConnection_tE21E6206D6FC40F07B3842D83BCB0732C9244E53;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
struct PlayerEditorConnectionEvents_tF92F4A9A0EDAB7D3D544AE9B0F3F925C4E48B7CB;
// UnityEngine.ResourceManagement.ResourceManager
struct ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Type
struct Type_t;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.ResourceManagement.AsyncOperations.UnityWebRequestOperation
struct UnityWebRequestOperation_t3FCA9B5B786DBF58B96FF885A08594DE60873BBD;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton/<>c
struct U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tDD9DF829266F558E94EC5986CD1208FFB246A018_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tFE6CE62D67D61F940F6BF8AE9D22B703E0E83BC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t62E1C014CE192AAF3D0E63C154CDC53D78D8A17B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tAB2648EE576B6D345AED3A8F4BB4D41E9F58FFF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D____m_InternalOp_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tB595130FC3DA0E818D15EE47483147BC10A6AED3____2D2025322643CE1497D8FB03FA789F27E833CF43545CA1003AFEFEA250D39313_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral14BBDB35FE445BD30DA2EC66B3F2990406A34F10;
IL2CPP_EXTERN_C String_t* _stringLiteral1C1DC6627277EC19EEFC4AFAEB16D378918A3EAD;
IL2CPP_EXTERN_C String_t* _stringLiteral22F26E94CC0601B218A55F5373A646B776F7FDEC;
IL2CPP_EXTERN_C String_t* _stringLiteral43DA1811FCD9FF890B2229A8C1CA4E836BE1BBA1;
IL2CPP_EXTERN_C String_t* _stringLiteral5545562CB57BB8E6D1204C7308B5206ED7661CE4;
IL2CPP_EXTERN_C String_t* _stringLiteral58BA2AE8C59D53CDE29FD298F28575052B915F62;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral820BFB423CB8C20E825524A0B74585E3BEEC752B;
IL2CPP_EXTERN_C String_t* _stringLiteral8DCCA33E7443A6F1FE7814F6BC316750D5ABD97A;
IL2CPP_EXTERN_C String_t* _stringLiteral95DAD4257816ED9B3D6718A6CBD69EFFCF321CAD;
IL2CPP_EXTERN_C String_t* _stringLiteralA9EA1B927738BD781758DEAA84C771341FBF9E5E;
IL2CPP_EXTERN_C String_t* _stringLiteralC7AEB4DBED56DD7667D53D9D797A7112C1253094;
IL2CPP_EXTERN_C String_t* _stringLiteralE020383F8C0765B1821DC0A9066E8570DB0904E8;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE60521B1295D070924B7C7ECB78E460EE3EF7E9B;
IL2CPP_EXTERN_C String_t* _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationBase_1_Complete_m34BA93C8DD45D0DDA01AD80F3B3E13AD552B24C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationBase_1_Complete_mA64801931999FC6D8355A5FDE500C47FAAF00E25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationBase_1_ShortenPath_mD1FCF48238D26B32283DBF3159837F321D65F680_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationBase_1__ctor_m263F8B1ABB3B3020DBB0D7A29C7F7539E8A76021_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationBase_1__ctor_m6CD94E72AD05CDA63192C5666C440F2171133C9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationBase_1_get_IsDone_mB4817573848671624B8CB8BE1DA5C59284C39135_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationBase_1_set_Result_m0938D410B6037B8BF1AE34976DDC01534AF33371_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentSingleton_1__ctor_m8278B3D96A270FC29C8C25774F9FFE38E4489339_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentSingleton_1_get_Exists_m5684B792850AD546429EFABC1968EB42394AC77D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentSingleton_1_get_Instance_m80CDAEE68C1180F577014BC10910403D8E797894_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelegateList_1_Add_m3E459CACF29B9E9C97CD353322C3177C7CD129F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelegateList_1_CreateWithGlobalCache_mD49EAE9505F5E576736F75029D2B73FE716D571E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelegateList_1_Invoke_m7E71EEC669399BB6A5B1F016ABA724EB4BA522A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelegateList_1_Remove_mFAFD47D0EC979EA6E063B0DB52060AD52F389C23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelegateList_1_get_Count_m997D0EED8579CCBAF3EEB9FF0E242F8E41A5FF65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiagnosticEventCollectorSingleton_RegisterEventHandler_mBD7EB71E6D5A3B2D180D6B0E2163C47E7DE291BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiagnosticEventCollectorSingleton_UnregisterEventHandler_m195CD42A740153DCC2387DC36511FB4FE36E5AF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mA30F6EF8D51BECC3FE45AFFD476B47A04A0E6984_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m3F1556AFF05432EA1C35EE48E2C0D7A9216293FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mC0498BC9E3720CFB6C1EAA4D0B44B7A666B2185A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m315FC05E431A5CB03DC47FAFB722AC3A0E641C3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m54B5765DBECABC8382F2917C037323B3B83FB520_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Concat_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_m65016DF203DEE1CBD87FE5ED17315DBE72F91E7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7EB40AC8CC562C611E3C2DCA36F5B04D55D1F253_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF14B13079BA29D72CF1479C47A523781823A6A79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mEE227741CD024815E1C4AC5DEEF931C18BDDFDF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mED23BA54237489B3A4CB41FAF90C0AD36D02A4AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367_m3614D3182E86B3371F0D02835223E5CB63C467B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GroupOperation_OnOperationCompleted_m9FFD2AEFFDB99EC7D040F53B0D5B62A60D6D23A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_m0181AAD373CCA0B6C26FE43A802121B3C0DE5F90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_mAF52C76F83E02DA4DDF4B21CD4D2910BA7CF157F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_m9CA1E919F54481CA3964DE66D4F3D415CBC66A64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m906B749545799371A47BEEB961CA6EBF2E434001_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB4257A2B4551959CAC74AAC14A4144D501D0A7D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mD24A56BF888EF741DFE7EBDC8475ECE6F5A74237_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5EC3D9DDBF70C3943F3F415E109848FB1BA4F483_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m279E5AA525FEFA2E8D2689C61D387586D5D7902B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEA50377FC2BC3CB5AA605E63AFB7F4B7A9B46A02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF98DA2A0A3DF3BE5F43A0348232321DF987F37EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA8C6DC40B44EFB5EC84E036997F5DDE2B4255F96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m09E5100907049D55AAD968065B93D7E92A6CF0F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__11_0_mC35442B113DAF4C3C790A4D17482F6CF5888FE73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterEventHandlerU3Eb__8_0_mA7621F2FC763736C0E5940EFF0C40BC79177573C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequestOperation_U3CExecuteU3Eb__2_0_mBFE21A77BDFDB2293AFCA6AD6CBE77D766921B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367_0_0_0_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DelegateList`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>
struct DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D  : public RuntimeObject
{
	// System.Func`2<System.Action`1<T>,System.Collections.Generic.LinkedListNode`1<System.Action`1<T>>> DelegateList`1::m_acquireFunc
	Func_2_tB94F993A5DDDF0C1D7E46D5279CA30600E42FDEF* ___m_acquireFunc_0;
	// System.Action`1<System.Collections.Generic.LinkedListNode`1<System.Action`1<T>>> DelegateList`1::m_releaseFunc
	Action_1_t54EC897DFC8848F81D1D78E3F1F700871D4DDF09* ___m_releaseFunc_1;
	// System.Collections.Generic.LinkedList`1<System.Action`1<T>> DelegateList`1::m_callbacks
	LinkedList_1_tAA509CD47BFC477A91DAC780DAE59B2DD17CFAEA* ___m_callbacks_2;
	// System.Boolean DelegateList`1::m_invoking
	bool ___m_invoking_3;
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>
struct Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tFAC383D7A40C76346ACBCBB59584FBF57DC456C0* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t4231960DE2FFBB109405B9AC8DA4CE93EFF2AF11* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>
struct List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>
struct ValueCollection_t4231960DE2FFBB109405B9AC8DA4CE93EFF2AF11  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* ____dictionary_0;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tB595130FC3DA0E818D15EE47483147BC10A6AED3  : public RuntimeObject
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

// UnityEngine.ResourceManagement.ResourceLocations.LocationWrapper
struct LocationWrapper_tB71FABF66A165C7C0C671E526E2031D0A28ACAA4  : public RuntimeObject
{
	// UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation UnityEngine.ResourceManagement.ResourceLocations.LocationWrapper::m_InternalLocation
	RuntimeObject* ___m_InternalLocation_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UnityEngine.ResourceManagement.ResourceManager
struct ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D  : public RuntimeObject
{
	// System.Boolean UnityEngine.ResourceManagement.ResourceManager::postProfilerEvents
	bool ___postProfilerEvents_0;
	// System.Func`2<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation,System.String> UnityEngine.ResourceManagement.ResourceManager::<InternalIdTransformFunc>k__BackingField
	Func_2_t4413089D739AA5DDB9D744DB3B447A0246563A86* ___U3CInternalIdTransformFuncU3Ek__BackingField_2;
	// System.Action`1<UnityEngine.Networking.UnityWebRequest> UnityEngine.ResourceManagement.ResourceManager::<WebRequestOverride>k__BackingField
	Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* ___U3CWebRequestOverrideU3Ek__BackingField_3;
	// System.Boolean UnityEngine.ResourceManagement.ResourceManager::CallbackHooksEnabled
	bool ___CallbackHooksEnabled_4;
	// ListWithEvents`1<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider> UnityEngine.ResourceManagement.ResourceManager::m_ResourceProviders
	ListWithEvents_1_tE17E3C4786AF60909D570A474EDAB620896FF2FB* ___m_ResourceProviders_5;
	// UnityEngine.ResourceManagement.Util.IAllocationStrategy UnityEngine.ResourceManagement.ResourceManager::m_allocator
	RuntimeObject* ___m_allocator_6;
	// ListWithEvents`1<UnityEngine.ResourceManagement.IUpdateReceiver> UnityEngine.ResourceManagement.ResourceManager::m_UpdateReceivers
	ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF* ___m_UpdateReceivers_7;
	// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.IUpdateReceiver> UnityEngine.ResourceManagement.ResourceManager::m_UpdateReceiversToRemove
	List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1* ___m_UpdateReceiversToRemove_8;
	// System.Boolean UnityEngine.ResourceManagement.ResourceManager::m_UpdatingReceivers
	bool ___m_UpdatingReceivers_9;
	// System.Boolean UnityEngine.ResourceManagement.ResourceManager::m_InsideUpdateMethod
	bool ___m_InsideUpdateMethod_10;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider> UnityEngine.ResourceManagement.ResourceManager::m_providerMap
	Dictionary_2_tC671E97FB5C542AA785863491CA2CF37DA59AE5D* ___m_providerMap_11;
	// System.Collections.Generic.Dictionary`2<UnityEngine.ResourceManagement.Util.IOperationCacheKey,UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation> UnityEngine.ResourceManagement.ResourceManager::m_AssetOperationCache
	Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE* ___m_AssetOperationCache_12;
	// System.Collections.Generic.HashSet`1<UnityEngine.ResourceManagement.ResourceManager/InstanceOperation> UnityEngine.ResourceManagement.ResourceManager::m_TrackedInstanceOperations
	HashSet_1_tB813E9BB87712BD40D5CDC96CDB692FCBBEB5267* ___m_TrackedInstanceOperations_13;
	// DelegateList`1<System.Single> UnityEngine.ResourceManagement.ResourceManager::m_UpdateCallbacks
	DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD* ___m_UpdateCallbacks_14;
	// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation> UnityEngine.ResourceManagement.ResourceManager::m_DeferredCompleteCallbacks
	List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C* ___m_DeferredCompleteCallbacks_15;
	// System.Collections.Generic.HashSet`1<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider> UnityEngine.ResourceManagement.ResourceManager::m_AsestBundleProviders
	HashSet_1_tB0D8BEB55EE8D7CCDDEE7710376D3FB984232BB5* ___m_AsestBundleProviders_16;
	// System.Boolean UnityEngine.ResourceManagement.ResourceManager::m_InsideExecuteDeferredCallbacksMethod
	bool ___m_InsideExecuteDeferredCallbacksMethod_17;
	// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest> UnityEngine.ResourceManagement.ResourceManager::m_DeferredCallbacksToRegister
	List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* ___m_DeferredCallbacksToRegister_18;
	// System.Action`4<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventType,System.Int32,System.Object> UnityEngine.ResourceManagement.ResourceManager::m_obsoleteDiagnosticsHandler
	Action_4_t9DB534B7D8A36A98095AEEA67EAC338F2230BA3D* ___m_obsoleteDiagnosticsHandler_19;
	// System.Action`1<UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext> UnityEngine.ResourceManagement.ResourceManager::m_diagnosticsHandler
	Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2* ___m_diagnosticsHandler_20;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation> UnityEngine.ResourceManagement.ResourceManager::m_ReleaseOpNonCached
	Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* ___m_ReleaseOpNonCached_21;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation> UnityEngine.ResourceManagement.ResourceManager::m_ReleaseOpCached
	Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* ___m_ReleaseOpCached_22;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation> UnityEngine.ResourceManagement.ResourceManager::m_ReleaseInstanceOp
	Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* ___m_ReleaseInstanceOp_23;
	// UnityEngine.Networking.CertificateHandler UnityEngine.ResourceManagement.ResourceManager::<CertificateHandlerInstance>k__BackingField
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___U3CCertificateHandlerInstanceU3Ek__BackingField_26;
	// System.Boolean UnityEngine.ResourceManagement.ResourceManager::m_RegisteredForCallbacks
	bool ___m_RegisteredForCallbacks_27;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Type> UnityEngine.ResourceManagement.ResourceManager::m_ProviderOperationTypeCache
	Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* ___m_ProviderOperationTypeCache_28;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton/<>c
struct U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7  : public RuntimeObject
{
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_38;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D 
{
	// UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::m_InternalOp
	RuntimeObject* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::m_LocationName
	String_t* ___m_LocationName_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke
{
	RuntimeObject* ___m_InternalOp_0;
	int32_t ___m_Version_1;
	char* ___m_LocationName_2;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com
{
	RuntimeObject* ___m_InternalOp_0;
	int32_t ___m_Version_1;
	Il2CppChar* ___m_LocationName_2;
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

// UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent
struct DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 
{
	// System.String UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::m_Graph
	String_t* ___m_Graph_0;
	// System.Int32[] UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::m_Dependencies
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_Dependencies_1;
	// System.Int32 UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::m_ObjectId
	int32_t ___m_ObjectId_2;
	// System.String UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.Int32 UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::m_Stream
	int32_t ___m_Stream_4;
	// System.Int32 UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::m_Frame
	int32_t ___m_Frame_5;
	// System.Int32 UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::m_Value
	int32_t ___m_Value_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent
struct DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshaled_pinvoke
{
	char* ___m_Graph_0;
	Il2CppSafeArray/*NONE*/* ___m_Dependencies_1;
	int32_t ___m_ObjectId_2;
	char* ___m_DisplayName_3;
	int32_t ___m_Stream_4;
	int32_t ___m_Frame_5;
	int32_t ___m_Value_6;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent
struct DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshaled_com
{
	Il2CppChar* ___m_Graph_0;
	Il2CppSafeArray/*NONE*/* ___m_Dependencies_1;
	int32_t ___m_ObjectId_2;
	Il2CppChar* ___m_DisplayName_3;
	int32_t ___m_Stream_4;
	int32_t ___m_Frame_5;
	int32_t ___m_Value_6;
};

// UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus
struct DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D 
{
	// System.Int64 UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus::TotalBytes
	int64_t ___TotalBytes_0;
	// System.Int64 UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus::DownloadedBytes
	int64_t ___DownloadedBytes_1;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus::IsDone
	bool ___IsDone_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus
struct DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshaled_pinvoke
{
	int64_t ___TotalBytes_0;
	int64_t ___DownloadedBytes_1;
	int32_t ___IsDone_2;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus
struct DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshaled_com
{
	int64_t ___TotalBytes_0;
	int64_t ___DownloadedBytes_1;
	int32_t ___IsDone_2;
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

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_tEE766410CC487F36BE62DCDAB733EDF48703854C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_tEE766410CC487F36BE62DCDAB733EDF48703854C__padding[12];
	};
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct Enumerator_tD5B9682CA32C785D58B7B51B5BA570252958ACF5 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ____current_3;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus
struct AsyncOperationStatus_t1D89963C21E9A4C34EF3312FDFE60060339C2A88 
{
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus::value__
	int32_t ___value___2;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.HideFlags
struct HideFlags_tC514182ACEFD3B847988C45D5DB812FF6DB1BF4A 
{
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.ResourceManagement.AsyncOperations.GroupOperation/GroupOperationSettings
struct GroupOperationSettings_t5457A68DBAECB92CC60CCD4B5E2D3D88479FAE7F 
{
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.GroupOperation/GroupOperationSettings::value__
	int32_t ___value___2;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>
struct AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D  : public RuntimeObject
{
	// TObject UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::<Result>k__BackingField
	RuntimeObject* ___U3CResultU3Ek__BackingField_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_referenceCount
	int32_t ___m_referenceCount_1;
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Status
	int32_t ___m_Status_2;
	// System.Exception UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Error
	Exception_t* ___m_Error_3;
	// UnityEngine.ResourceManagement.ResourceManager UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_RM
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_RM_4;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Version
	int32_t ___m_Version_5;
	// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_DestroyedAction
	DelegateList_1_tC070A3D40FCD92D36D6C762C004DDB78978B4F88* ___m_DestroyedAction_6;
	// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_CompletedActionT
	DelegateList_1_t932E16E3FBFE5A6A290BCE66829B9EBC952556E3* ___m_CompletedActionT_7;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_OnDestroyAction
	Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* ___m_OnDestroyAction_8;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_dependencyCompleteAction
	Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___m_dependencyCompleteAction_9;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::HasExecuted
	bool ___HasExecuted_10;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_11;
	// System.Threading.Tasks.TaskCompletionSource`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_taskCompletionSource
	TaskCompletionSource_1_t82760B5622E48B21F74387D6CA1B0F25D6E599B0* ___m_taskCompletionSource_12;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_taskCompletionSourceTypeless
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___m_taskCompletionSourceTypeless_13;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_InDeferredCallbackQueue
	bool ___m_InDeferredCallbackQueue_14;
	// DelegateList`1<System.Single> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_UpdateCallbacks
	DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD* ___m_UpdateCallbacks_15;
	// System.Action`1<System.Single> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_UpdateCallback
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___m_UpdateCallback_16;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>
struct AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13  : public RuntimeObject
{
	// TObject UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::<Result>k__BackingField
	RuntimeObject* ___U3CResultU3Ek__BackingField_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_referenceCount
	int32_t ___m_referenceCount_1;
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Status
	int32_t ___m_Status_2;
	// System.Exception UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Error
	Exception_t* ___m_Error_3;
	// UnityEngine.ResourceManagement.ResourceManager UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_RM
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_RM_4;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Version
	int32_t ___m_Version_5;
	// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_DestroyedAction
	DelegateList_1_tC070A3D40FCD92D36D6C762C004DDB78978B4F88* ___m_DestroyedAction_6;
	// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_CompletedActionT
	DelegateList_1_tE5214C095910CA36010DD471BBF1F8F7EA6D4787* ___m_CompletedActionT_7;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_OnDestroyAction
	Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* ___m_OnDestroyAction_8;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_dependencyCompleteAction
	Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___m_dependencyCompleteAction_9;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::HasExecuted
	bool ___HasExecuted_10;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_11;
	// System.Threading.Tasks.TaskCompletionSource`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_taskCompletionSource
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___m_taskCompletionSource_12;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_taskCompletionSourceTypeless
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___m_taskCompletionSourceTypeless_13;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_InDeferredCallbackQueue
	bool ___m_InDeferredCallbackQueue_14;
	// DelegateList`1<System.Single> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_UpdateCallbacks
	DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD* ___m_UpdateCallbacks_15;
	// System.Action`1<System.Single> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_UpdateCallback
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___m_UpdateCallback_16;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.Networking.UnityWebRequest>
struct AsyncOperationBase_1_tD0DD431DD05073163579D3343FDB22100EA4533D  : public RuntimeObject
{
	// TObject UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::<Result>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CResultU3Ek__BackingField_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_referenceCount
	int32_t ___m_referenceCount_1;
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Status
	int32_t ___m_Status_2;
	// System.Exception UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Error
	Exception_t* ___m_Error_3;
	// UnityEngine.ResourceManagement.ResourceManager UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_RM
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_RM_4;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Version
	int32_t ___m_Version_5;
	// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_DestroyedAction
	DelegateList_1_tC070A3D40FCD92D36D6C762C004DDB78978B4F88* ___m_DestroyedAction_6;
	// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_CompletedActionT
	DelegateList_1_t303CCE219AFE8E3A438A0F781DCC8C5642AEA2C2* ___m_CompletedActionT_7;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_OnDestroyAction
	Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* ___m_OnDestroyAction_8;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_dependencyCompleteAction
	Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___m_dependencyCompleteAction_9;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::HasExecuted
	bool ___HasExecuted_10;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_11;
	// System.Threading.Tasks.TaskCompletionSource`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_taskCompletionSource
	TaskCompletionSource_1_t2B9064F62AF3EDA7973A19D42D18B4C977E59E55* ___m_taskCompletionSource_12;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_taskCompletionSourceTypeless
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___m_taskCompletionSourceTypeless_13;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_InDeferredCallbackQueue
	bool ___m_InDeferredCallbackQueue_14;
	// DelegateList`1<System.Single> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_UpdateCallbacks
	DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD* ___m_UpdateCallbacks_15;
	// System.Action`1<System.Single> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_UpdateCallback
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___m_UpdateCallback_16;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ResourceManagement.Exceptions.OperationException
struct OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434  : public Exception_t
{
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>
struct Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent,System.Int32>
struct Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.ResourceManagement.AsyncOperations.GroupOperation
struct GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE  : public AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D
{
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::m_InternalOnComplete
	Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___m_InternalOnComplete_17;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::m_LoadedCount
	int32_t ___m_LoadedCount_18;
	// UnityEngine.ResourceManagement.AsyncOperations.GroupOperation/GroupOperationSettings UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::m_Settings
	int32_t ___m_Settings_19;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::debugName
	String_t* ___debugName_20;
	// UnityEngine.ResourceManagement.Util.IOperationCacheKey UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::<UnityEngine.ResourceManagement.AsyncOperations.ICachable.Key>k__BackingField
	RuntimeObject* ___U3CUnityEngine_ResourceManagement_AsyncOperations_ICachable_KeyU3Ek__BackingField_22;
	// System.Collections.Generic.HashSet`1<System.String> UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::m_CachedDependencyLocations
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___m_CachedDependencyLocations_23;
};

// UnityEngine.Networking.PlayerConnection.PlayerConnection
struct PlayerConnection_tE21E6206D6FC40F07B3842D83BCB0732C9244E53  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents UnityEngine.Networking.PlayerConnection.PlayerConnection::m_PlayerEditorConnectionEvents
	PlayerEditorConnectionEvents_tF92F4A9A0EDAB7D3D544AE9B0F3F925C4E48B7CB* ___m_PlayerEditorConnectionEvents_5;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.Networking.PlayerConnection.PlayerConnection::m_connectedPlayers
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_connectedPlayers_6;
	// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerConnection::m_IsInitilized
	bool ___m_IsInitilized_7;
};

// UnityEngine.ResourceManagement.AsyncOperations.UnityWebRequestOperation
struct UnityWebRequestOperation_t3FCA9B5B786DBF58B96FF885A08594DE60873BBD  : public AsyncOperationBase_1_tD0DD431DD05073163579D3343FDB22100EA4533D
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.ResourceManagement.AsyncOperations.UnityWebRequestOperation::m_UWR
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___m_UWR_17;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.ResourceManagement.Util.ComponentSingleton`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton>
struct ComponentSingleton_1_t72FE88792928B5CD2047657E9122FA6E177CA55B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollector
struct DiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton
struct DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19  : public ComponentSingleton_1_t72FE88792928B5CD2047657E9122FA6E177CA55B
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent> UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::m_CreatedEvents
	Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* ___m_CreatedEvents_6;
	// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent> UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::m_UnhandledEvents
	List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9* ___m_UnhandledEvents_7;
	// DelegateList`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent> UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::s_EventHandlers
	DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* ___s_EventHandlers_8;
	// System.Single UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::m_lastTickSent
	float ___m_lastTickSent_9;
	// System.Int32 UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::m_lastFrame
	int32_t ___m_lastFrame_10;
	// System.Single UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::fpsAvg
	float ___fpsAvg_11;
};

// DelegateList`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>

// DelegateList`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>

// System.Collections.Generic.HashSet`1<System.Object>

// System.Collections.Generic.HashSet`1<System.Object>

// System.Collections.Generic.HashSet`1<System.String>

// System.Collections.Generic.HashSet`1<System.String>

// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>

// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>
struct List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tB595130FC3DA0E818D15EE47483147BC10A6AED3_StaticFields
{
	// System.Int64 <PrivateImplementationDetails>::2D2025322643CE1497D8FB03FA789F27E833CF43545CA1003AFEFEA250D39313
	int64_t ___2D2025322643CE1497D8FB03FA789F27E833CF43545CA1003AFEFEA250D39313_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::EA60AE08A5700DD4BD20B4E747628D0EB97778BF93E89F290F83674C07FC2BF2
	__StaticArrayInitTypeSizeU3D12_tEE766410CC487F36BE62DCDAB733EDF48703854C ___EA60AE08A5700DD4BD20B4E747628D0EB97778BF93E89F290F83674C07FC2BF2_1;
};

// <PrivateImplementationDetails>

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

// UnityEngine.ResourceManagement.ResourceLocations.LocationWrapper

// UnityEngine.ResourceManagement.ResourceLocations.LocationWrapper

// UnityEngine.ResourceManagement.ResourceManager
struct ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_StaticFields
{
	// System.Action`2<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,System.Exception> UnityEngine.ResourceManagement.ResourceManager::<ExceptionHandler>k__BackingField
	Action_2_t67647DD70912484E9205AC38396D2849ED602730* ___U3CExceptionHandlerU3Ek__BackingField_1;
	// System.Int32 UnityEngine.ResourceManagement.ResourceManager::s_GroupOperationTypeHash
	int32_t ___s_GroupOperationTypeHash_24;
	// System.Int32 UnityEngine.ResourceManagement.ResourceManager::s_InstanceOperationTypeHash
	int32_t ___s_InstanceOperationTypeHash_25;
};

// UnityEngine.ResourceManagement.ResourceManager

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton/<>c
struct U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_StaticFields
{
	// UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton/<>c UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton/<>c::<>9
	U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7* ___U3CU3E9_0;
	// System.Func`2<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent,System.Int32> UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton/<>c::<>9__8_0
	Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3* ___U3CU3E9__8_0_1;
	// System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent> UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton/<>c::<>9__11_0
	Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* ___U3CU3E9__11_0_2;
};

// UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton/<>c

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Object>

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle

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

// UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent

// UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent

// UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus

// UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>

// UnityEngine.AsyncOperation

// UnityEngine.AsyncOperation

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.HideFlags

// UnityEngine.HideFlags

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.ResourceManagement.AsyncOperations.GroupOperation/GroupOperationSettings

// UnityEngine.ResourceManagement.AsyncOperations.GroupOperation/GroupOperationSettings

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.Networking.UnityWebRequest>

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.Networking.UnityWebRequest>

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.ResourceManagement.Exceptions.OperationException

// UnityEngine.ResourceManagement.Exceptions.OperationException

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// System.Action`1<UnityEngine.AsyncOperation>

// System.Action`1<UnityEngine.AsyncOperation>

// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>

// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>

// System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>

// System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>

// System.Func`2<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent,System.Int32>

// System.Func`2<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent,System.Int32>

// UnityEngine.ResourceManagement.AsyncOperations.GroupOperation

// UnityEngine.ResourceManagement.AsyncOperations.GroupOperation

// UnityEngine.Networking.PlayerConnection.PlayerConnection
struct PlayerConnection_tE21E6206D6FC40F07B3842D83BCB0732C9244E53_StaticFields
{
	// UnityEngine.IPlayerEditorConnectionNative UnityEngine.Networking.PlayerConnection.PlayerConnection::connectionNative
	RuntimeObject* ___connectionNative_4;
	// UnityEngine.Networking.PlayerConnection.PlayerConnection UnityEngine.Networking.PlayerConnection.PlayerConnection::s_Instance
	PlayerConnection_tE21E6206D6FC40F07B3842D83BCB0732C9244E53* ___s_Instance_8;
};

// UnityEngine.Networking.PlayerConnection.PlayerConnection

// UnityEngine.ResourceManagement.AsyncOperations.UnityWebRequestOperation

// UnityEngine.ResourceManagement.AsyncOperations.UnityWebRequestOperation

// System.ArgumentNullException

// System.ArgumentNullException

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.ResourceManagement.Util.ComponentSingleton`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton>
struct ComponentSingleton_1_t72FE88792928B5CD2047657E9122FA6E177CA55B_StaticFields
{
	// T UnityEngine.ResourceManagement.Util.ComponentSingleton`1::s_Instance
	DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* ___s_Instance_4;
};

// UnityEngine.ResourceManagement.Util.ComponentSingleton`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton>

// UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollector
struct DiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367_StaticFields
{
	// UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollector UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollector::s_Collector
	DiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367* ___s_Collector_4;
};

// UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollector

// UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton
struct DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19_StaticFields
{
	// System.Guid UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::s_editorConnectionGuid
	Guid_t ___s_editorConnectionGuid_5;
};

// UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent[]
struct DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95  : public RuntimeArray
{
	ALIGN_FIELD (8) DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 m_Items[1];

	inline DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Graph_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Dependencies_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DisplayName_3), (void*)NULL);
		#endif
	}
	inline DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Graph_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Dependencies_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DisplayName_3), (void*)NULL);
		#endif
	}
};


// T UnityEngine.JsonUtility::FromJson<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 JsonUtility_FromJson_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_m9CA1E919F54481CA3964DE66D4F3D415CBC66A64_gshared (String_t* ___0_json, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.Util.ComponentSingleton`1<System.Object>::get_Exists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ComponentSingleton_1_get_Exists_m9072614255876FC8A02C1DD02222CB4A021BA5C5_gshared (const RuntimeMethod* method) ;
// T UnityEngine.ResourceManagement.Util.ComponentSingleton`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ComponentSingleton_1_get_Instance_m4A3E22BB505964D1199EE767B0D16B00F3DD4427_gshared (const RuntimeMethod* method) ;
// System.Void DelegateList`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Add(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateList_1_Add_m3E459CACF29B9E9C97CD353322C3177C7CD129F8_gshared (DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* __this, Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* ___0_action, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t4231960DE2FFBB109405B9AC8DA4CE93EFF2AF11* Dictionary_2_get_Values_m54B5765DBECABC8382F2917C037323B3B83FB520_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Concat_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_m65016DF203DEE1CBD87FE5ED17315DBE72F91E7B_gshared (RuntimeObject* ___0_first, RuntimeObject* ___1_second, const RuntimeMethod* method) ;
// System.Void System.Func`2<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m25B26E462882E5D20E8E0A69EFF9D94B9AEBF4AA_gshared (Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7EB40AC8CC562C611E3C2DCA36F5B04D55D1F253_gshared (RuntimeObject* ___0_source, Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3* ___1_keySelector, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mFAD2E8B344DDEDAC8E40E83616A8076B83831241_gshared_inline (Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* __this, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD24A56BF888EF741DFE7EBDC8475ECE6F5A74237_gshared_inline (List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9* __this, const RuntimeMethod* method) ;
// System.Void DelegateList`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Remove(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateList_1_Remove_mFAFD47D0EC979EA6E063B0DB52060AD52F389C23_gshared (DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* __this, Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* ___0_action, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m3F1556AFF05432EA1C35EE48E2C0D7A9216293FF_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mA30F6EF8D51BECC3FE45AFFD476B47A04A0E6984_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_key, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mC0498BC9E3720CFB6C1EAA4D0B44B7A666B2185A_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Int32 DelegateList`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelegateList_1_get_Count_m997D0EED8579CCBAF3EEB9FF0E242F8E41A5FF65_gshared (DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* __this, const RuntimeMethod* method) ;
// System.Void DelegateList`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Invoke(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateList_1_Invoke_m7E71EEC669399BB6A5B1F016ABA724EB4BA522A7_gshared (DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* __this, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___0_res, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB4257A2B4551959CAC74AAC14A4144D501D0A7D5_gshared_inline (List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9* __this, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___0_item, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m06B2E66413629515634D1103FC191FE010DB6B22_gshared (Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m315FC05E431A5CB03DC47FAFB722AC3A0E641C3A_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mEA50377FC2BC3CB5AA605E63AFB7F4B7A9B46A02_gshared (List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9* __this, const RuntimeMethod* method) ;
// DelegateList`1<T> DelegateList`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::CreateWithGlobalCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* DelegateList_1_CreateWithGlobalCache_mD49EAE9505F5E576736F75029D2B73FE716D571E_gshared (const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.Util.ComponentSingleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentSingleton_1__ctor_mE3C6A56ADC464B0E183DD01ACE533B50F1B3E365_gshared (ComponentSingleton_1_t48E072079F42456220A56E31B3AA96C419BB3157* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_1__ctor_mFC5DD5A9DBFD933E7B316BC47708AFE7D9CDE731_gshared (AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mB7E422278A9F89203BFED7F1B8F04DB5F7438D0E_gshared (Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF98DA2A0A3DF3BE5F43A0348232321DF987F37EB_gshared (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>::set_Result(TObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationBase_1_set_Result_m34F12D5AF676CCB4F67BBB1B2608F46833A59257_gshared_inline (AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>::get_IsDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationBase_1_get_IsDone_mFD5B8AC9A444EA62DB9751CEE9275A9BB43B4622_gshared (AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* __this, const RuntimeMethod* method) ;
// TObject UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationBase_1_get_Result_mCCD9D27A9D37A11B520A6D95B4EB191835B8C368_gshared_inline (AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m906B749545799371A47BEEB961CA6EBF2E434001_gshared (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mA8C6DC40B44EFB5EC84E036997F5DDE2B4255F96_gshared_inline (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD5B9682CA32C785D58B7B51B5BA570252958ACF5 List_1_GetEnumerator_m5EC3D9DDBF70C3943F3F415E109848FB1BA4F483_gshared (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mF14B13079BA29D72CF1479C47A523781823A6A79_gshared (Enumerator_tD5B9682CA32C785D58B7B51B5BA570252958ACF5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D Enumerator_get_Current_mED23BA54237489B3A4CB41FAF90C0AD36D02A4AA_gshared_inline (Enumerator_tD5B9682CA32C785D58B7B51B5BA570252958ACF5* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mEE227741CD024815E1C4AC5DEEF931C18BDDFDF8_gshared (Enumerator_tD5B9682CA32C785D58B7B51B5BA570252958ACF5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m75A6528F0B47448EB3B3A05EC379260E9BDFC2DD_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D List_1_get_Item_m09E5100907049D55AAD968065B93D7E92A6CF0F3_gshared (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>::ShortenPath(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsyncOperationBase_1_ShortenPath_mD1FCF48238D26B32283DBF3159837F321D65F680_gshared (String_t* ___0_p, bool ___1_keepExtension, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>::Complete(TObject,System.Boolean,System.Exception,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_1_Complete_mCBEB3D85A0C514DB4453265D71CAF90A5FE14D5D_gshared (AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* __this, RuntimeObject* ___0_result, bool ___1_success, Exception_t* ___2_exception, bool ___3_releaseDependenciesOnFailure, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m279E5AA525FEFA2E8D2689C61D387586D5D7902B_gshared (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>::Complete(TObject,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_1_Complete_m113C44FFAB7DAA0DCB9C105663C50FA7D9BFD8F8_gshared (AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* __this, RuntimeObject* ___0_result, bool ___1_success, String_t* ___2_errorMsg, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::get_Graph()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DiagnosticEvent_get_Graph_m670206480E0149C55B547DF779321DFE8EF9436B (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::get_ObjectId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiagnosticEvent_get_ObjectId_mF6D69C8148C581548D9CF4C21293F6A8300DAC75 (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DiagnosticEvent_get_DisplayName_m02754B60C44C78A265F62732A3395470BEAA39CA (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, const RuntimeMethod* method) ;
// System.Int32[] UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::get_Dependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* DiagnosticEvent_get_Dependencies_m5E3CA5E99242A6845C6974B9620EFEFE3777C2CD (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::get_Stream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiagnosticEvent_get_Stream_mC79CA5D736C7CEBA931F272DA4F94BA8DED1BCF6 (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::get_Frame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiagnosticEvent_get_Frame_m3CC82F45DB1EA65234FF98A1E739FC40D303171B (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiagnosticEvent_get_Value_mC412E8EC2AC4D004D2E68BCF0566AA2261008C02 (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::.ctor(System.String,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticEvent__ctor_mDF62B33ABFF1F33A4B39DF5C209B8238F2D529A0 (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, String_t* ___0_graph, String_t* ___1_name, int32_t ___2_id, int32_t ___3_stream, int32_t ___4_frame, int32_t ___5_value, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___6_deps, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65 (const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::Serialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiagnosticEvent_Serialize_m6C00B0750960B7E23FB1DFE666C93DC3F5B0FF1A (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>(System.String)
inline DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 JsonUtility_FromJson_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_m9CA1E919F54481CA3964DE66D4F3D415CBC66A64 (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_m9CA1E919F54481CA3964DE66D4F3D415CBC66A64_gshared)(___0_json, method);
}
// System.Boolean System.Guid::op_Equality(System.Guid,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240 (Guid_t ___0_a, Guid_t ___1_b, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
// System.Void System.Guid::.ctor(System.Int32,System.Int16,System.Int16,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_m9C03A78803E0696A0A446B0CAC0AA55CB8E326EB (Guid_t* __this, int32_t ___0_a, int16_t ___1_b, int16_t ___2_c, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_d, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.Util.ComponentSingleton`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton>::get_Exists()
inline bool ComponentSingleton_1_get_Exists_m5684B792850AD546429EFABC1968EB42394AC77D (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))ComponentSingleton_1_get_Exists_m9072614255876FC8A02C1DD02222CB4A021BA5C5_gshared)(method);
}
// T UnityEngine.ResourceManagement.Util.ComponentSingleton`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton>::get_Instance()
inline DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* ComponentSingleton_1_get_Instance_m80CDAEE68C1180F577014BC10910403D8E797894 (const RuntimeMethod* method)
{
	return ((  DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* (*) (const RuntimeMethod*))ComponentSingleton_1_get_Instance_m4A3E22BB505964D1199EE767B0D16B00F3DD4427_gshared)(method);
}
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::RegisterEventHandler(System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticEventCollectorSingleton_RegisterEventHandler_mBD7EB71E6D5A3B2D180D6B0E2163C47E7DE291BA (DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* __this, Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* ___0_handler, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::UnregisterEventHandler(System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticEventCollectorSingleton_UnregisterEventHandler_m195CD42A740153DCC2387DC36511FB4FE36E5AF2 (DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* __this, Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* ___0_handler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Assert(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_mA460392021AC0A8210C9081E3C1C9652DBF32BF6 (bool ___0_condition, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void DelegateList`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Add(System.Action`1<T>)
inline void DelegateList_1_Add_m3E459CACF29B9E9C97CD353322C3177C7CD129F8 (DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* __this, Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* ___0_action, const RuntimeMethod* method)
{
	((  void (*) (DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D*, Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F*, const RuntimeMethod*))DelegateList_1_Add_m3E459CACF29B9E9C97CD353322C3177C7CD129F8_gshared)(__this, ___0_action, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::get_Values()
inline ValueCollection_t4231960DE2FFBB109405B9AC8DA4CE93EFF2AF11* Dictionary_2_get_Values_m54B5765DBECABC8382F2917C037323B3B83FB520 (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t4231960DE2FFBB109405B9AC8DA4CE93EFF2AF11* (*) (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD*, const RuntimeMethod*))Dictionary_2_get_Values_m54B5765DBECABC8382F2917C037323B3B83FB520_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Concat_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_m65016DF203DEE1CBD87FE5ED17315DBE72F91E7B (RuntimeObject* ___0_first, RuntimeObject* ___1_second, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Concat_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_m65016DF203DEE1CBD87FE5ED17315DBE72F91E7B_gshared)(___0_first, ___1_second, method);
}
// System.Void System.Func`2<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m25B26E462882E5D20E8E0A69EFF9D94B9AEBF4AA (Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m25B26E462882E5D20E8E0A69EFF9D94B9AEBF4AA_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
inline RuntimeObject* Enumerable_OrderBy_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7EB40AC8CC562C611E3C2DCA36F5B04D55D1F253 (RuntimeObject* ___0_source, Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3* ___1_keySelector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3*, const RuntimeMethod*))Enumerable_OrderBy_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7EB40AC8CC562C611E3C2DCA36F5B04D55D1F253_gshared)(___0_source, ___1_keySelector, method);
}
// System.Void System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Invoke(T)
inline void Action_1_Invoke_mFAD2E8B344DDEDAC8E40E83616A8076B83831241_inline (Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* __this, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F*, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274, const RuntimeMethod*))Action_1_Invoke_mFAD2E8B344DDEDAC8E40E83616A8076B83831241_gshared_inline)(__this, ___0_obj, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Clear()
inline void List_1_Clear_mD24A56BF888EF741DFE7EBDC8475ECE6F5A74237_inline (List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9*, const RuntimeMethod*))List_1_Clear_mD24A56BF888EF741DFE7EBDC8475ECE6F5A74237_gshared_inline)(__this, method);
}
// System.Void DelegateList`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Remove(System.Action`1<T>)
inline void DelegateList_1_Remove_mFAFD47D0EC979EA6E063B0DB52060AD52F389C23 (DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* __this, Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* ___0_action, const RuntimeMethod* method)
{
	((  void (*) (DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D*, Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F*, const RuntimeMethod*))DelegateList_1_Remove_mFAFD47D0EC979EA6E063B0DB52060AD52F389C23_gshared)(__this, ___0_action, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m3F1556AFF05432EA1C35EE48E2C0D7A9216293FF (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m3F1556AFF05432EA1C35EE48E2C0D7A9216293FF_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Add(TKey,TValue)
inline void Dictionary_2_Add_mA30F6EF8D51BECC3FE45AFFD476B47A04A0E6984 (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_key, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD*, int32_t, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274, const RuntimeMethod*))Dictionary_2_Add_mA30F6EF8D51BECC3FE45AFFD476B47A04A0E6984_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Remove(TKey)
inline bool Dictionary_2_Remove_mC0498BC9E3720CFB6C1EAA4D0B44B7A666B2185A (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mC0498BC9E3720CFB6C1EAA4D0B44B7A666B2185A_gshared)(__this, ___0_key, method);
}
// System.Int32 DelegateList`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::get_Count()
inline int32_t DelegateList_1_get_Count_m997D0EED8579CCBAF3EEB9FF0E242F8E41A5FF65 (DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D*, const RuntimeMethod*))DelegateList_1_get_Count_m997D0EED8579CCBAF3EEB9FF0E242F8E41A5FF65_gshared)(__this, method);
}
// System.Void DelegateList`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Invoke(T)
inline void DelegateList_1_Invoke_m7E71EEC669399BB6A5B1F016ABA724EB4BA522A7 (DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* __this, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___0_res, const RuntimeMethod* method)
{
	((  void (*) (DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D*, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274, const RuntimeMethod*))DelegateList_1_Invoke_m7E71EEC669399BB6A5B1F016ABA724EB4BA522A7_gshared)(__this, ___0_res, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Add(T)
inline void List_1_Add_mB4257A2B4551959CAC74AAC14A4144D501D0A7D5_inline (List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9* __this, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9*, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274, const RuntimeMethod*))List_1_Add_mB4257A2B4551959CAC74AAC14A4144D501D0A7D5_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m06B2E66413629515634D1103FC191FE010DB6B22 (Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m06B2E66413629515634D1103FC191FE010DB6B22_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667 (const RuntimeMethod* method) ;
// System.Int64 UnityEngine.Profiling.Profiler::GetMonoUsedSizeLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Profiler_GetMonoUsedSizeLong_m0502757AA9D86F43BEE50352F6082F978AB1C973 (const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::PostEvent(UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticEventCollectorSingleton_PostEvent_m814E46059FF639B7B3E731E6F354778282DF5B2A (DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* __this, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___0_diagnosticEvent, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::.ctor()
inline void Dictionary_2__ctor_m315FC05E431A5CB03DC47FAFB722AC3A0E641C3A (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD*, const RuntimeMethod*))Dictionary_2__ctor_m315FC05E431A5CB03DC47FAFB722AC3A0E641C3A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::.ctor()
inline void List_1__ctor_mEA50377FC2BC3CB5AA605E63AFB7F4B7A9B46A02 (List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9*, const RuntimeMethod*))List_1__ctor_mEA50377FC2BC3CB5AA605E63AFB7F4B7A9B46A02_gshared)(__this, method);
}
// DelegateList`1<T> DelegateList`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::CreateWithGlobalCache()
inline DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* DelegateList_1_CreateWithGlobalCache_mD49EAE9505F5E576736F75029D2B73FE716D571E (const RuntimeMethod* method)
{
	return ((  DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* (*) (const RuntimeMethod*))DelegateList_1_CreateWithGlobalCache_mD49EAE9505F5E576736F75029D2B73FE716D571E_gshared)(method);
}
// System.Void UnityEngine.ResourceManagement.Util.ComponentSingleton`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton>::.ctor()
inline void ComponentSingleton_1__ctor_m8278B3D96A270FC29C8C25774F9FFE38E4489339 (ComponentSingleton_1_t72FE88792928B5CD2047657E9122FA6E177CA55B* __this, const RuntimeMethod* method)
{
	((  void (*) (ComponentSingleton_1_t72FE88792928B5CD2047657E9122FA6E177CA55B*, const RuntimeMethod*))ComponentSingleton_1__ctor_mE3C6A56ADC464B0E183DD01ACE533B50F1B3E365_gshared)(__this, method);
}
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7E8AE3390AA2F226FD9AE66A810054796F6E3EF7 (U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.PlayerConnection.PlayerConnection UnityEngine.Networking.PlayerConnection.PlayerConnection::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerConnection_tE21E6206D6FC40F07B3842D83BCB0732C9244E53* PlayerConnection_get_instance_mF08ABE514910AD8B105D42561CF97CBF135ABD3B (const RuntimeMethod* method) ;
// System.Guid UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::get_PlayerConnectionGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t DiagnosticEventCollectorSingleton_get_PlayerConnectionGuid_m12CE48F5FA9778C6B084529356CE2BA2FF19E0FC (const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.PlayerConnection.PlayerConnection::Send(System.Guid,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerConnection_Send_mBFE41D75C28DF0885455CE809D40C489818F91B7 (PlayerConnection_tE21E6206D6FC40F07B3842D83BCB0732C9244E53* __this, Guid_t ___0_messageId, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_data, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m721D643351E55308EA4F5F41B67D5446D11C61F0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___1_components, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollector>()
inline DiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367* GameObject_GetComponent_TisDiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367_m3614D3182E86B3371F0D02835223E5CB63C467B4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  DiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::RegisterEventHandler(System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DiagnosticEventCollectorSingleton_RegisterEventHandler_m9FCC0418DB7FCB86CDD3C233C6D59507D3A1CBC5 (Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* ___0_handler, bool ___1_register, bool ___2_create, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_LocationName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsyncOperationHandle_get_LocationName_mFBCB4F35970F65B67F34263CBBC8949DBD04954F (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::set_LocationName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_set_LocationName_mA4DD8D02B510CD9974D1E5AAC4D34DD91575865C (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::.ctor(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle__ctor_m68E6B69581AD8F879FE27693A96D6F36ABD3A264 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, RuntimeObject* ___0_op, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::.ctor(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle__ctor_m21CD505FAB5F5AB79ADA74F7F95AD6DEA7F145E8 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, RuntimeObject* ___0_op, int32_t ___1_version, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::.ctor(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle__ctor_mC618D938157A14E87066933EF6757D73A2847E22 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, RuntimeObject* ___0_op, String_t* ___1_locationName, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::.ctor(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle__ctor_m40A34479B55F7F00CB5DF17F1003A38B12D0A51A (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, RuntimeObject* ___0_op, int32_t ___1_version, String_t* ___2_locationName, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_InternalOp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::Acquire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D AsyncOperationHandle_Acquire_mDFD8D1733D45A5F9C20B3A49EA51891BE2C1435B (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::add_Completed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_add_Completed_mD5633623ADF00C97B6A1EE712E6654452F64B2E0 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::remove_Completed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_remove_Completed_m538FFC6655C8FB0600775FFFB998D9903478DB44 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::Equals(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationHandle_Equals_m496ACE1240F3D9550447E1930A1A426BF40CE186 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationHandle_IsValid_mC57B65EA4D8E084859EF42FD671EDA1E2ED46626 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_DebugName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsyncOperationHandle_get_DebugName_m8DDB7ED8B735AFC69305907ED82F695ED9F9697E (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::add_Destroyed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_add_Destroyed_m66F321AB085184936F570B4C3A1F9D66B1872C07 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::remove_Destroyed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_remove_Destroyed_m8755ED149C64A82AF2EF9710F0D9256163ED71C9 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::GetDependencies(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_GetDependencies_m188E3F0A06DA1F789B431E3401D692AD14F45C39 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* ___0_deps, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncOperationHandle_GetHashCode_mA261FCCE8588545912EAD2AC611FADD3F104DF15 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_IsDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationHandle_get_IsDone_m55E07BF92CC2979A9BBFD8F5B97DCCD52DA1326A (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Exception UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_OperationException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* AsyncOperationHandle_get_OperationException_m531FC4DC2E215075C0EA7CE135FF1D68F6049270 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_PercentComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AsyncOperationHandle_get_PercentComplete_mB5B48174489343D707D9E4A90BAFE24658D135EC (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
inline void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::InternalGetDownloadStatus(System.Collections.Generic.HashSet`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D AsyncOperationHandle_InternalGetDownloadStatus_mC00D428E94E347EE6FCD224530016D1F9433B33C (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___0_visited, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::GetDownloadStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D AsyncOperationHandle_GetDownloadStatus_m526B0F8EC8EF9A00D4F59D5BC918913CE2BED374 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
inline bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, RuntimeObject*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___0_item, method);
}
// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_ReferenceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncOperationHandle_get_ReferenceCount_m28F7ED9B712CC95D3F1E304578F94B6EEC1A5B3D (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_Release_mD4ADD2AA46F56753B12E0916FA2A739A3EBB5762 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Object UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncOperationHandle_get_Status_mD5FB502808777A3C88880942DB9595C614CF9B0A (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.Object> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncOperationHandle_get_Task_m74053C375ECE675441967B0EA68091A7D9F84EF6 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Object UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_System_Collections_IEnumerator_get_Current_mBAF3C14B4A6BD17BBBE6663D0061A1DD42E8FE37 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::System.Collections.IEnumerator.MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationHandle_System_Collections_IEnumerator_MoveNext_m8A793FA1EEE2DAAD8B74F95FFEC60D94B9B8610E (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_System_Collections_IEnumerator_Reset_m8921AB145EB1F53FD4352BE9E512505719FE6527 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Object UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::WaitForCompletion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_WaitForCompletion_m4F5203EAAEAA1F724EA1220006A43E89A0951784 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus::get_Percent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DownloadStatus_get_Percent_m0EBC4A32546FB0EA6099462E3D6B7C9168F93985 (DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
inline void HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>::.ctor()
inline void AsyncOperationBase_1__ctor_m6CD94E72AD05CDA63192C5666C440F2171133C9C (AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D* __this, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D*, const RuntimeMethod*))AsyncOperationBase_1__ctor_mFC5DD5A9DBFD933E7B316BC47708AFE7D9CDE731_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mB7E422278A9F89203BFED7F1B8F04DB5F7438D0E (Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mB7E422278A9F89203BFED7F1B8F04DB5F7438D0E_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::.ctor()
inline void List_1__ctor_mF98DA2A0A3DF3BE5F43A0348232321DF987F37EB (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843*, const RuntimeMethod*))List_1__ctor_mF98DA2A0A3DF3BE5F43A0348232321DF987F37EB_gshared)(__this, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>::set_Result(TObject)
inline void AsyncOperationBase_1_set_Result_m0938D410B6037B8BF1AE34976DDC01534AF33371_inline (AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D*, RuntimeObject*, const RuntimeMethod*))AsyncOperationBase_1_set_Result_m34F12D5AF676CCB4F67BBB1B2608F46833A59257_gshared_inline)(__this, ___0_value, method);
}
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>::get_IsDone()
inline bool AsyncOperationBase_1_get_IsDone_mB4817573848671624B8CB8BE1DA5C59284C39135 (AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D*, const RuntimeMethod*))AsyncOperationBase_1_get_IsDone_mFD5B8AC9A444EA62DB9751CEE9275A9BB43B4622_gshared)(__this, method);
}
// TObject UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>::get_Result()
inline RuntimeObject* AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline (AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D*, const RuntimeMethod*))AsyncOperationBase_1_get_Result_mCCD9D27A9D37A11B520A6D95B4EB191835B8C368_gshared_inline)(__this, method);
}
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.ResourceManager::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_Update_mE18FA475CB6F6B7020A53A51B0FAD323819F7B4C (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, float ___0_unscaledDeltaTime, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m906B749545799371A47BEEB961CA6EBF2E434001 (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m906B749545799371A47BEEB961CA6EBF2E434001_gshared)(__this, ___0_collection, method);
}
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::get_Count()
inline int32_t HashSet_1_get_Count_mAF52C76F83E02DA4DDF4B21CD4D2910BA7CF157F_inline (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, const RuntimeMethod*))HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Count()
inline int32_t List_1_get_Count_mA8C6DC40B44EFB5EC84E036997F5DDE2B4255F96_inline (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843*, const RuntimeMethod*))List_1_get_Count_mA8C6DC40B44EFB5EC84E036997F5DDE2B4255F96_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::GetEnumerator()
inline Enumerator_tD5B9682CA32C785D58B7B51B5BA570252958ACF5 List_1_GetEnumerator_m5EC3D9DDBF70C3943F3F415E109848FB1BA4F483 (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD5B9682CA32C785D58B7B51B5BA570252958ACF5 (*) (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843*, const RuntimeMethod*))List_1_GetEnumerator_m5EC3D9DDBF70C3943F3F415E109848FB1BA4F483_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::Dispose()
inline void Enumerator_Dispose_mF14B13079BA29D72CF1479C47A523781823A6A79 (Enumerator_tD5B9682CA32C785D58B7B51B5BA570252958ACF5* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD5B9682CA32C785D58B7B51B5BA570252958ACF5*, const RuntimeMethod*))Enumerator_Dispose_mF14B13079BA29D72CF1479C47A523781823A6A79_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Current()
inline AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D Enumerator_get_Current_mED23BA54237489B3A4CB41FAF90C0AD36D02A4AA_inline (Enumerator_tD5B9682CA32C785D58B7B51B5BA570252958ACF5* __this, const RuntimeMethod* method)
{
	return ((  AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D (*) (Enumerator_tD5B9682CA32C785D58B7B51B5BA570252958ACF5*, const RuntimeMethod*))Enumerator_get_Current_mED23BA54237489B3A4CB41FAF90C0AD36D02A4AA_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(T)
inline bool HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::MoveNext()
inline bool Enumerator_MoveNext_mEE227741CD024815E1C4AC5DEEF931C18BDDFDF8 (Enumerator_tD5B9682CA32C785D58B7B51B5BA570252958ACF5* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD5B9682CA32C785D58B7B51B5BA570252958ACF5*, const RuntimeMethod*))Enumerator_MoveNext_mEE227741CD024815E1C4AC5DEEF931C18BDDFDF8_gshared)(__this, method);
}
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::DependenciesAreUnchanged(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GroupOperation_DependenciesAreUnchanged_m961C61C0E83B18B91E4C3A589DD5C98C5FA027D9 (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* ___0_deps, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.String>::Clear()
inline void HashSet_1_Clear_m0181AAD373CCA0B6C26FE43A802121B3C0DE5F90 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, const RuntimeMethod*))HashSet_1_Clear_m75A6528F0B47448EB3B3A05EC379260E9BDFC2DD_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Item(System.Int32)
inline AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D List_1_get_Item_m09E5100907049D55AAD968065B93D7E92A6CF0F3 (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D (*) (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843*, int32_t, const RuntimeMethod*))List_1_get_Item_m09E5100907049D55AAD968065B93D7E92A6CF0F3_gshared)(__this, ___0_index, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(T)
inline bool HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___0_item, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>::ShortenPath(System.String,System.Boolean)
inline String_t* AsyncOperationBase_1_ShortenPath_mD1FCF48238D26B32283DBF3159837F321D65F680 (String_t* ___0_p, bool ___1_keepExtension, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, bool, const RuntimeMethod*))AsyncOperationBase_1_ShortenPath_mD1FCF48238D26B32283DBF3159837F321D65F680_gshared)(___0_p, ___1_keepExtension, method);
}
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::CompleteIfDependenciesComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupOperation_CompleteIfDependenciesComplete_m0CBDC4B0BC6DEB0F32D2E9884F99D6EA4FBFD346 (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.Exceptions.OperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperationException__ctor_m86A0486864C0BBA58E2688D3FB650CAB1D616D59 (OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>::Complete(TObject,System.Boolean,System.Exception,System.Boolean)
inline void AsyncOperationBase_1_Complete_m34BA93C8DD45D0DDA01AD80F3B3E13AD552B24C8 (AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D* __this, RuntimeObject* ___0_result, bool ___1_success, Exception_t* ___2_exception, bool ___3_releaseDependenciesOnFailure, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D*, RuntimeObject*, bool, Exception_t*, bool, const RuntimeMethod*))AsyncOperationBase_1_Complete_mCBEB3D85A0C514DB4453265D71CAF90A5FE14D5D_gshared)(__this, ___0_result, ___1_success, ___2_exception, ___3_releaseDependenciesOnFailure, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m279E5AA525FEFA2E8D2689C61D387586D5D7902B (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m279E5AA525FEFA2E8D2689C61D387586D5D7902B_gshared)(__this, ___0_collection, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.Networking.UnityWebRequest>::.ctor()
inline void AsyncOperationBase_1__ctor_m263F8B1ABB3B3020DBB0D7A29C7F7539E8A76021 (AsyncOperationBase_1_tD0DD431DD05073163579D3343FDB22100EA4533D* __this, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationBase_1_tD0DD431DD05073163579D3343FDB22100EA4533D*, const RuntimeMethod*))AsyncOperationBase_1__ctor_mFC5DD5A9DBFD933E7B316BC47708AFE7D9CDE731_gshared)(__this, method);
}
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.AsyncOperation>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.AsyncOperation::add_completed(System.Action`1<UnityEngine.AsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.Networking.UnityWebRequest>::Complete(TObject,System.Boolean,System.String)
inline void AsyncOperationBase_1_Complete_mA64801931999FC6D8355A5FDE500C47FAAF00E25 (AsyncOperationBase_1_tD0DD431DD05073163579D3343FDB22100EA4533D* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___0_result, bool ___1_success, String_t* ___2_errorMsg, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationBase_1_tD0DD431DD05073163579D3343FDB22100EA4533D*, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*, bool, String_t*, const RuntimeMethod*))AsyncOperationBase_1_Complete_m113C44FFAB7DAA0DCB9C105663C50FA7D9BFD8F8_gshared)(__this, ___0_result, ___1_success, ___2_errorMsg, method);
}
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.ResourceManagement.ResourceLocations.LocationWrapper::.ctor(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationWrapper__ctor_mAA6CC9A09ED34EDB9381D915BFF630E0C9C22141 (LocationWrapper_tB71FABF66A165C7C0C671E526E2031D0A28ACAA4* __this, RuntimeObject* ___0_location, const RuntimeMethod* method) 
{
	{
		// public LocationWrapper(IResourceLocation location)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_InternalLocation = location;
		RuntimeObject* L_0 = ___0_location;
		__this->___m_InternalLocation_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InternalLocation_0), (void*)L_0);
		// }
		return;
	}
}
// System.String UnityEngine.ResourceManagement.ResourceLocations.LocationWrapper::get_InternalId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocationWrapper_get_InternalId_m7ABC2B6F84C4F6C7FE2F5332CCF37EF74AB921DE (LocationWrapper_tB71FABF66A165C7C0C671E526E2031D0A28ACAA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string InternalId => m_InternalLocation.InternalId;
		RuntimeObject* L_0 = __this->___m_InternalLocation_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_InternalId() */, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String UnityEngine.ResourceManagement.ResourceLocations.LocationWrapper::get_ProviderId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocationWrapper_get_ProviderId_m810DF53B752AD42985C7BF9AD6A8FC61E2B5A926 (LocationWrapper_tB71FABF66A165C7C0C671E526E2031D0A28ACAA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string ProviderId => m_InternalLocation.ProviderId;
		RuntimeObject* L_0 = __this->___m_InternalLocation_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_ProviderId() */, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> UnityEngine.ResourceManagement.ResourceLocations.LocationWrapper::get_Dependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LocationWrapper_get_Dependencies_m857880D71F22D81B2959C327BACC0D4A1588E501 (LocationWrapper_tB71FABF66A165C7C0C671E526E2031D0A28ACAA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IList<IResourceLocation> Dependencies => m_InternalLocation.Dependencies;
		RuntimeObject* L_0 = __this->___m_InternalLocation_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_Dependencies() */, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 UnityEngine.ResourceManagement.ResourceLocations.LocationWrapper::get_DependencyHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocationWrapper_get_DependencyHashCode_m0AD260651E814478350AD80C78E0FD36A4EF1075 (LocationWrapper_tB71FABF66A165C7C0C671E526E2031D0A28ACAA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int DependencyHashCode => m_InternalLocation.DependencyHashCode;
		RuntimeObject* L_0 = __this->___m_InternalLocation_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_DependencyHashCode() */, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean UnityEngine.ResourceManagement.ResourceLocations.LocationWrapper::get_HasDependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationWrapper_get_HasDependencies_mCFD06F0102DFE96A00F495219F766D7DFAE7F83C (LocationWrapper_tB71FABF66A165C7C0C671E526E2031D0A28ACAA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool HasDependencies => m_InternalLocation.HasDependencies;
		RuntimeObject* L_0 = __this->___m_InternalLocation_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_HasDependencies() */, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Object UnityEngine.ResourceManagement.ResourceLocations.LocationWrapper::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LocationWrapper_get_Data_m8C0C8F501B27EB5846D9C404AB899C628BBDC88E (LocationWrapper_tB71FABF66A165C7C0C671E526E2031D0A28ACAA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public object Data => m_InternalLocation.Data;
		RuntimeObject* L_0 = __this->___m_InternalLocation_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_Data() */, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String UnityEngine.ResourceManagement.ResourceLocations.LocationWrapper::get_PrimaryKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocationWrapper_get_PrimaryKey_m7023AE6E7AA84AC50ABFCDC3BDDB9A194013BC98 (LocationWrapper_tB71FABF66A165C7C0C671E526E2031D0A28ACAA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string PrimaryKey => m_InternalLocation.PrimaryKey;
		RuntimeObject* L_0 = __this->___m_InternalLocation_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(7 /* System.String UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_PrimaryKey() */, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Type UnityEngine.ResourceManagement.ResourceLocations.LocationWrapper::get_ResourceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* LocationWrapper_get_ResourceType_mB3E67E25F1DF8CCF6C378E0181A1AC354404BBA8 (LocationWrapper_tB71FABF66A165C7C0C671E526E2031D0A28ACAA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Type ResourceType => m_InternalLocation.ResourceType;
		RuntimeObject* L_0 = __this->___m_InternalLocation_0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = InterfaceFuncInvoker0< Type_t* >::Invoke(8 /* System.Type UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_ResourceType() */, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 UnityEngine.ResourceManagement.ResourceLocations.LocationWrapper::Hash(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocationWrapper_Hash_m06AE5E2A24BAEA7EB329B79C840EDDCEB84BFCFB (LocationWrapper_tB71FABF66A165C7C0C671E526E2031D0A28ACAA4* __this, Type_t* ___0_resultType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return m_InternalLocation.Hash(resultType);
		RuntimeObject* L_0 = __this->___m_InternalLocation_0;
		Type_t* L_1 = ___0_resultType;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, Type_t* >::Invoke(3 /* System.Int32 UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::Hash(System.Type) */, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		int32_t L_3 = V_0;
		return L_3;
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
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent
IL2CPP_EXTERN_C void DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshal_pinvoke(const DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274& unmarshaled, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Graph_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Graph_0);
	marshaled.___m_Dependencies_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.___m_Dependencies_1);
	marshaled.___m_ObjectId_2 = unmarshaled.___m_ObjectId_2;
	marshaled.___m_DisplayName_3 = il2cpp_codegen_marshal_string(unmarshaled.___m_DisplayName_3);
	marshaled.___m_Stream_4 = unmarshaled.___m_Stream_4;
	marshaled.___m_Frame_5 = unmarshaled.___m_Frame_5;
	marshaled.___m_Value_6 = unmarshaled.___m_Value_6;
}
IL2CPP_EXTERN_C void DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshal_pinvoke_back(const DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshaled_pinvoke& marshaled, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___m_Graph_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Graph_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Graph_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_Graph_0));
	unmarshaled.___m_Dependencies_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, marshaled.___m_Dependencies_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Dependencies_1), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, marshaled.___m_Dependencies_1));
	int32_t unmarshaledm_ObjectId_temp_2 = 0;
	unmarshaledm_ObjectId_temp_2 = marshaled.___m_ObjectId_2;
	unmarshaled.___m_ObjectId_2 = unmarshaledm_ObjectId_temp_2;
	unmarshaled.___m_DisplayName_3 = il2cpp_codegen_marshal_string_result(marshaled.___m_DisplayName_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_DisplayName_3), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_DisplayName_3));
	int32_t unmarshaledm_Stream_temp_4 = 0;
	unmarshaledm_Stream_temp_4 = marshaled.___m_Stream_4;
	unmarshaled.___m_Stream_4 = unmarshaledm_Stream_temp_4;
	int32_t unmarshaledm_Frame_temp_5 = 0;
	unmarshaledm_Frame_temp_5 = marshaled.___m_Frame_5;
	unmarshaled.___m_Frame_5 = unmarshaledm_Frame_temp_5;
	int32_t unmarshaledm_Value_temp_6 = 0;
	unmarshaledm_Value_temp_6 = marshaled.___m_Value_6;
	unmarshaled.___m_Value_6 = unmarshaledm_Value_temp_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent
IL2CPP_EXTERN_C void DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshal_pinvoke_cleanup(DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Graph_0);
	marshaled.___m_Graph_0 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___m_Dependencies_1);
	marshaled.___m_Dependencies_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_DisplayName_3);
	marshaled.___m_DisplayName_3 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent
IL2CPP_EXTERN_C void DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshal_com(const DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274& unmarshaled, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshaled_com& marshaled)
{
	marshaled.___m_Graph_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_Graph_0);
	marshaled.___m_Dependencies_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.___m_Dependencies_1);
	marshaled.___m_ObjectId_2 = unmarshaled.___m_ObjectId_2;
	marshaled.___m_DisplayName_3 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_DisplayName_3);
	marshaled.___m_Stream_4 = unmarshaled.___m_Stream_4;
	marshaled.___m_Frame_5 = unmarshaled.___m_Frame_5;
	marshaled.___m_Value_6 = unmarshaled.___m_Value_6;
}
IL2CPP_EXTERN_C void DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshal_com_back(const DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshaled_com& marshaled, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___m_Graph_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_Graph_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Graph_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_Graph_0));
	unmarshaled.___m_Dependencies_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, marshaled.___m_Dependencies_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Dependencies_1), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, marshaled.___m_Dependencies_1));
	int32_t unmarshaledm_ObjectId_temp_2 = 0;
	unmarshaledm_ObjectId_temp_2 = marshaled.___m_ObjectId_2;
	unmarshaled.___m_ObjectId_2 = unmarshaledm_ObjectId_temp_2;
	unmarshaled.___m_DisplayName_3 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_DisplayName_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_DisplayName_3), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_DisplayName_3));
	int32_t unmarshaledm_Stream_temp_4 = 0;
	unmarshaledm_Stream_temp_4 = marshaled.___m_Stream_4;
	unmarshaled.___m_Stream_4 = unmarshaledm_Stream_temp_4;
	int32_t unmarshaledm_Frame_temp_5 = 0;
	unmarshaledm_Frame_temp_5 = marshaled.___m_Frame_5;
	unmarshaled.___m_Frame_5 = unmarshaledm_Frame_temp_5;
	int32_t unmarshaledm_Value_temp_6 = 0;
	unmarshaledm_Value_temp_6 = marshaled.___m_Value_6;
	unmarshaled.___m_Value_6 = unmarshaledm_Value_temp_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent
IL2CPP_EXTERN_C void DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshal_com_cleanup(DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Graph_0);
	marshaled.___m_Graph_0 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___m_Dependencies_1);
	marshaled.___m_Dependencies_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_DisplayName_3);
	marshaled.___m_DisplayName_3 = NULL;
}
// System.String UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::get_Graph()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DiagnosticEvent_get_Graph_m670206480E0149C55B547DF779321DFE8EF9436B (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return m_Graph; }
		String_t* L_0 = __this->___m_Graph_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Graph; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* DiagnosticEvent_get_Graph_m670206480E0149C55B547DF779321DFE8EF9436B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = DiagnosticEvent_get_Graph_m670206480E0149C55B547DF779321DFE8EF9436B(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::get_ObjectId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiagnosticEvent_get_ObjectId_mF6D69C8148C581548D9CF4C21293F6A8300DAC75 (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return m_ObjectId; }
		int32_t L_0 = __this->___m_ObjectId_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_ObjectId; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t DiagnosticEvent_get_ObjectId_mF6D69C8148C581548D9CF4C21293F6A8300DAC75_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = DiagnosticEvent_get_ObjectId_mF6D69C8148C581548D9CF4C21293F6A8300DAC75(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DiagnosticEvent_get_DisplayName_m02754B60C44C78A265F62732A3395470BEAA39CA (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return m_DisplayName; }
		String_t* L_0 = __this->___m_DisplayName_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_DisplayName; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* DiagnosticEvent_get_DisplayName_m02754B60C44C78A265F62732A3395470BEAA39CA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = DiagnosticEvent_get_DisplayName_m02754B60C44C78A265F62732A3395470BEAA39CA(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32[] UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::get_Dependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* DiagnosticEvent_get_Dependencies_m5E3CA5E99242A6845C6974B9620EFEFE3777C2CD (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		// get { return m_Dependencies; }
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___m_Dependencies_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Dependencies; }
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* DiagnosticEvent_get_Dependencies_m5E3CA5E99242A6845C6974B9620EFEFE3777C2CD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274*>(__this + _offset);
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* _returnValue;
	_returnValue = DiagnosticEvent_get_Dependencies_m5E3CA5E99242A6845C6974B9620EFEFE3777C2CD(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::get_Stream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiagnosticEvent_get_Stream_mC79CA5D736C7CEBA931F272DA4F94BA8DED1BCF6 (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return m_Stream; }
		int32_t L_0 = __this->___m_Stream_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Stream; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t DiagnosticEvent_get_Stream_mC79CA5D736C7CEBA931F272DA4F94BA8DED1BCF6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = DiagnosticEvent_get_Stream_mC79CA5D736C7CEBA931F272DA4F94BA8DED1BCF6(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::get_Frame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiagnosticEvent_get_Frame_m3CC82F45DB1EA65234FF98A1E739FC40D303171B (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return m_Frame; }
		int32_t L_0 = __this->___m_Frame_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Frame; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t DiagnosticEvent_get_Frame_m3CC82F45DB1EA65234FF98A1E739FC40D303171B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = DiagnosticEvent_get_Frame_m3CC82F45DB1EA65234FF98A1E739FC40D303171B(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiagnosticEvent_get_Value_mC412E8EC2AC4D004D2E68BCF0566AA2261008C02 (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return m_Value; }
		int32_t L_0 = __this->___m_Value_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Value; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t DiagnosticEvent_get_Value_mC412E8EC2AC4D004D2E68BCF0566AA2261008C02_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = DiagnosticEvent_get_Value_mC412E8EC2AC4D004D2E68BCF0566AA2261008C02(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::.ctor(System.String,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticEvent__ctor_mDF62B33ABFF1F33A4B39DF5C209B8238F2D529A0 (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, String_t* ___0_graph, String_t* ___1_name, int32_t ___2_id, int32_t ___3_stream, int32_t ___4_frame, int32_t ___5_value, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___6_deps, const RuntimeMethod* method) 
{
	{
		// m_Graph = graph;
		String_t* L_0 = ___0_graph;
		__this->___m_Graph_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Graph_0), (void*)L_0);
		// m_DisplayName = name;
		String_t* L_1 = ___1_name;
		__this->___m_DisplayName_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DisplayName_3), (void*)L_1);
		// m_ObjectId = id;
		int32_t L_2 = ___2_id;
		__this->___m_ObjectId_2 = L_2;
		// m_Stream = stream;
		int32_t L_3 = ___3_stream;
		__this->___m_Stream_4 = L_3;
		// m_Frame = frame;
		int32_t L_4 = ___4_frame;
		__this->___m_Frame_5 = L_4;
		// m_Value = value;
		int32_t L_5 = ___5_value;
		__this->___m_Value_6 = L_5;
		// m_Dependencies = deps;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___6_deps;
		__this->___m_Dependencies_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Dependencies_1), (void*)L_6);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DiagnosticEvent__ctor_mDF62B33ABFF1F33A4B39DF5C209B8238F2D529A0_AdjustorThunk (RuntimeObject* __this, String_t* ___0_graph, String_t* ___1_name, int32_t ___2_id, int32_t ___3_stream, int32_t ___4_frame, int32_t ___5_value, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___6_deps, const RuntimeMethod* method)
{
	DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274*>(__this + _offset);
	DiagnosticEvent__ctor_mDF62B33ABFF1F33A4B39DF5C209B8238F2D529A0(_thisAdjusted, ___0_graph, ___1_name, ___2_id, ___3_stream, ___4_frame, ___5_value, ___6_deps, method);
}
// System.Byte[] UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::Serialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiagnosticEvent_Serialize_m6C00B0750960B7E23FB1DFE666C93DC3F5B0FF1A (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// return Encoding.ASCII.GetBytes(JsonUtility.ToJson(this));
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_1 = (*(DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274*)__this);
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_2 = L_1;
		RuntimeObject* L_3 = Box(DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_3, NULL);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_4);
		V_0 = L_5;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiagnosticEvent_Serialize_m6C00B0750960B7E23FB1DFE666C93DC3F5B0FF1A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = DiagnosticEvent_Serialize_m6C00B0750960B7E23FB1DFE666C93DC3F5B0FF1A(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::Deserialize(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 DiagnosticEvent_Deserialize_m22BCF0716BAC26F28A164F479E6F67613B00D16A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_m9CA1E919F54481CA3964DE66D4F3D415CBC66A64_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return JsonUtility.FromJson<DiagnosticEvent>(Encoding.ASCII.GetString(data));
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_data;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(35 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_1);
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_3;
		L_3 = JsonUtility_FromJson_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_m9CA1E919F54481CA3964DE66D4F3D415CBC66A64(L_2, JsonUtility_FromJson_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_m9CA1E919F54481CA3964DE66D4F3D415CBC66A64_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_4 = V_0;
		return L_4;
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
// System.Guid UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::get_PlayerConnectionGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t DiagnosticEventCollectorSingleton_get_PlayerConnectionGuid_m12CE48F5FA9778C6B084529356CE2BA2FF19E0FC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tB595130FC3DA0E818D15EE47483147BC10A6AED3____2D2025322643CE1497D8FB03FA789F27E833CF43545CA1003AFEFEA250D39313_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (s_editorConnectionGuid == Guid.Empty)
		Guid_t L_0 = ((DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19_StaticFields*)il2cpp_codegen_static_fields_for(DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19_il2cpp_TypeInfo_var))->___s_editorConnectionGuid_5;
		Guid_t L_1 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->___Empty_0;
		bool L_2;
		L_2 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// s_editorConnectionGuid = new Guid(1, 2, 3, new byte[] {20, 1, 32, 32, 4, 9, 6, 44});
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_6 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB595130FC3DA0E818D15EE47483147BC10A6AED3____2D2025322643CE1497D8FB03FA789F27E833CF43545CA1003AFEFEA250D39313_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_5, L_6, NULL);
		Guid_t L_7;
		memset((&L_7), 0, sizeof(L_7));
		Guid__ctor_m9C03A78803E0696A0A446B0CAC0AA55CB8E326EB((&L_7), 1, (int16_t)2, (int16_t)3, L_5, /*hidden argument*/NULL);
		((DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19_StaticFields*)il2cpp_codegen_static_fields_for(DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19_il2cpp_TypeInfo_var))->___s_editorConnectionGuid_5 = L_7;
	}

IL_0032:
	{
		// return s_editorConnectionGuid;
		Guid_t L_8 = ((DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19_StaticFields*)il2cpp_codegen_static_fields_for(DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19_il2cpp_TypeInfo_var))->___s_editorConnectionGuid_5;
		V_1 = L_8;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		Guid_t L_9 = V_1;
		return L_9;
	}
}
// System.String UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::GetGameObjectName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DiagnosticEventCollectorSingleton_GetGameObjectName_m1361552A8D1AFD2282D01F14975908635A86D74D (DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14BBDB35FE445BD30DA2EC66B3F2990406A34F10);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override string GetGameObjectName() => "EventCollector";
		return _stringLiteral14BBDB35FE445BD30DA2EC66B3F2990406A34F10;
	}
}
// System.Boolean UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::RegisterEventHandler(System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DiagnosticEventCollectorSingleton_RegisterEventHandler_m9FCC0418DB7FCB86CDD3C233C6D59507D3A1CBC5 (Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* ___0_handler, bool ___1_register, bool ___2_create, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentSingleton_1_get_Exists_m5684B792850AD546429EFABC1968EB42394AC77D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentSingleton_1_get_Instance_m80CDAEE68C1180F577014BC10910403D8E797894_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// if (register && (create || Exists))
		bool L_0 = ___1_register;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1 = ___2_create;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		bool L_2;
		L_2 = ComponentSingleton_1_get_Exists_m5684B792850AD546429EFABC1968EB42394AC77D(ComponentSingleton_1_get_Exists_m5684B792850AD546429EFABC1968EB42394AC77D_RuntimeMethod_var);
		G_B4_0 = ((int32_t)(L_2));
		goto IL_000f;
	}

IL_000e:
	{
		G_B4_0 = 1;
	}

IL_000f:
	{
		G_B6_0 = G_B4_0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B6_0 = 0;
	}

IL_0012:
	{
		V_0 = (bool)G_B6_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// Instance.RegisterEventHandler(handler);
		DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* L_4;
		L_4 = ComponentSingleton_1_get_Instance_m80CDAEE68C1180F577014BC10910403D8E797894(ComponentSingleton_1_get_Instance_m80CDAEE68C1180F577014BC10910403D8E797894_RuntimeMethod_var);
		Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* L_5 = ___0_handler;
		NullCheck(L_4);
		DiagnosticEventCollectorSingleton_RegisterEventHandler_mBD7EB71E6D5A3B2D180D6B0E2163C47E7DE291BA(L_4, L_5, NULL);
		// return true;
		V_1 = (bool)1;
		goto IL_0048;
	}

IL_0027:
	{
		// if (!register && Exists)
		bool L_6 = ___1_register;
		if (L_6)
		{
			goto IL_0031;
		}
	}
	{
		bool L_7;
		L_7 = ComponentSingleton_1_get_Exists_m5684B792850AD546429EFABC1968EB42394AC77D(ComponentSingleton_1_get_Exists_m5684B792850AD546429EFABC1968EB42394AC77D_RuntimeMethod_var);
		G_B11_0 = ((int32_t)(L_7));
		goto IL_0032;
	}

IL_0031:
	{
		G_B11_0 = 0;
	}

IL_0032:
	{
		V_2 = (bool)G_B11_0;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		// Instance.UnregisterEventHandler(handler);
		DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* L_9;
		L_9 = ComponentSingleton_1_get_Instance_m80CDAEE68C1180F577014BC10910403D8E797894(ComponentSingleton_1_get_Instance_m80CDAEE68C1180F577014BC10910403D8E797894_RuntimeMethod_var);
		Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* L_10 = ___0_handler;
		NullCheck(L_9);
		DiagnosticEventCollectorSingleton_UnregisterEventHandler_m195CD42A740153DCC2387DC36511FB4FE36E5AF2(L_9, L_10, NULL);
	}

IL_0044:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0048;
	}

IL_0048:
	{
		// }
		bool L_11 = V_1;
		return L_11;
	}
}
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::RegisterEventHandler(System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticEventCollectorSingleton_RegisterEventHandler_mBD7EB71E6D5A3B2D180D6B0E2163C47E7DE291BA (DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* __this, Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* ___0_handler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateList_1_Add_m3E459CACF29B9E9C97CD353322C3177C7CD129F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m54B5765DBECABC8382F2917C037323B3B83FB520_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_m65016DF203DEE1CBD87FE5ED17315DBE72F91E7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7EB40AC8CC562C611E3C2DCA36F5B04D55D1F253_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tDD9DF829266F558E94EC5986CD1208FFB246A018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tAB2648EE576B6D345AED3A8F4BB4D41E9F58FFF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mD24A56BF888EF741DFE7EBDC8475ECE6F5A74237_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterEventHandlerU3Eb__8_0_mA7621F2FC763736C0E5940EFF0C40BC79177573C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58BA2AE8C59D53CDE29FD298F28575052B915F62);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		// Debug.Assert(m_UnhandledEvents != null, "DiagnosticEventCollectorSingleton.RegisterEventHandler - s_unhandledEvents == null.");
		List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9* L_0 = __this->___m_UnhandledEvents_7;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_mA460392021AC0A8210C9081E3C1C9652DBF32BF6((bool)((!(((RuntimeObject*)(List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), _stringLiteral58BA2AE8C59D53CDE29FD298F28575052B915F62, NULL);
		// if (handler == null)
		Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* L_1 = ___0_handler;
		V_1 = (bool)((((RuntimeObject*)(Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// throw new ArgumentNullException("handler");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7AEB4DBED56DD7667D53D9D797A7112C1253094)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DiagnosticEventCollectorSingleton_RegisterEventHandler_mBD7EB71E6D5A3B2D180D6B0E2163C47E7DE291BA_RuntimeMethod_var)));
	}

IL_0028:
	{
		// s_EventHandlers.Add(handler);
		DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* L_4 = __this->___s_EventHandlers_8;
		Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* L_5 = ___0_handler;
		NullCheck(L_4);
		DelegateList_1_Add_m3E459CACF29B9E9C97CD353322C3177C7CD129F8(L_4, L_5, DelegateList_1_Add_m3E459CACF29B9E9C97CD353322C3177C7CD129F8_RuntimeMethod_var);
		// var combinedAndSortedList = m_UnhandledEvents.Concat(m_CreatedEvents.Values).OrderBy(evt => evt.Frame);
		List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9* L_6 = __this->___m_UnhandledEvents_7;
		Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* L_7 = __this->___m_CreatedEvents_6;
		NullCheck(L_7);
		ValueCollection_t4231960DE2FFBB109405B9AC8DA4CE93EFF2AF11* L_8;
		L_8 = Dictionary_2_get_Values_m54B5765DBECABC8382F2917C037323B3B83FB520(L_7, Dictionary_2_get_Values_m54B5765DBECABC8382F2917C037323B3B83FB520_RuntimeMethod_var);
		RuntimeObject* L_9;
		L_9 = Enumerable_Concat_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_m65016DF203DEE1CBD87FE5ED17315DBE72F91E7B(L_6, L_8, Enumerable_Concat_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_m65016DF203DEE1CBD87FE5ED17315DBE72F91E7B_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var);
		Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3* L_10 = ((U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1;
		Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3* L_11 = L_10;
		G_B3_0 = L_11;
		G_B3_1 = L_9;
		if (L_11)
		{
			G_B4_0 = L_11;
			G_B4_1 = L_9;
			goto IL_006a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var);
		U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7* L_12 = ((U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3* L_13 = (Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3*)il2cpp_codegen_object_new(Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Func_2__ctor_m25B26E462882E5D20E8E0A69EFF9D94B9AEBF4AA(L_13, L_12, (intptr_t)((void*)U3CU3Ec_U3CRegisterEventHandlerU3Eb__8_0_mA7621F2FC763736C0E5940EFF0C40BC79177573C_RuntimeMethod_var), NULL);
		Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3* L_14 = L_13;
		((U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1), (void*)L_14);
		G_B4_0 = L_14;
		G_B4_1 = G_B3_1;
	}

IL_006a:
	{
		RuntimeObject* L_15;
		L_15 = Enumerable_OrderBy_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7EB40AC8CC562C611E3C2DCA36F5B04D55D1F253(G_B4_1, G_B4_0, Enumerable_OrderBy_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7EB40AC8CC562C611E3C2DCA36F5B04D55D1F253_RuntimeMethod_var);
		V_0 = L_15;
		// foreach (var evt in combinedAndSortedList)
		RuntimeObject* L_16 = V_0;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::GetEnumerator() */, IEnumerable_1_tDD9DF829266F558E94EC5986CD1208FFB246A018_il2cpp_TypeInfo_var, L_16);
		V_2 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0093:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_18 = V_2;
					if (!L_18)
					{
						goto IL_009d;
					}
				}
				{
					RuntimeObject* L_19 = V_2;
					NullCheck(L_19);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_19);
				}

IL_009d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0089_1;
			}

IL_007a_1:
			{
				// foreach (var evt in combinedAndSortedList)
				RuntimeObject* L_20 = V_2;
				NullCheck(L_20);
				DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_21;
				L_21 = InterfaceFuncInvoker0< DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::get_Current() */, IEnumerator_1_tAB2648EE576B6D345AED3A8F4BB4D41E9F58FFF0_il2cpp_TypeInfo_var, L_20);
				V_3 = L_21;
				// handler(evt);
				Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* L_22 = ___0_handler;
				DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_23 = V_3;
				NullCheck(L_22);
				Action_1_Invoke_mFAD2E8B344DDEDAC8E40E83616A8076B83831241_inline(L_22, L_23, NULL);
			}

IL_0089_1:
			{
				// foreach (var evt in combinedAndSortedList)
				RuntimeObject* L_24 = V_2;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_007a_1;
				}
			}
			{
				goto IL_009e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009e:
	{
		// m_UnhandledEvents.Clear();
		List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9* L_26 = __this->___m_UnhandledEvents_7;
		NullCheck(L_26);
		List_1_Clear_mD24A56BF888EF741DFE7EBDC8475ECE6F5A74237_inline(L_26, List_1_Clear_mD24A56BF888EF741DFE7EBDC8475ECE6F5A74237_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::UnregisterEventHandler(System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticEventCollectorSingleton_UnregisterEventHandler_m195CD42A740153DCC2387DC36511FB4FE36E5AF2 (DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* __this, Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* ___0_handler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateList_1_Remove_mFAFD47D0EC979EA6E063B0DB52060AD52F389C23_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (handler == null)
		Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* L_0 = ___0_handler;
		V_0 = (bool)((((RuntimeObject*)(Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException("handler");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7AEB4DBED56DD7667D53D9D797A7112C1253094)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DiagnosticEventCollectorSingleton_UnregisterEventHandler_m195CD42A740153DCC2387DC36511FB4FE36E5AF2_RuntimeMethod_var)));
	}

IL_0014:
	{
		// s_EventHandlers.Remove(handler);
		DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* L_3 = __this->___s_EventHandlers_8;
		Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* L_4 = ___0_handler;
		NullCheck(L_3);
		DelegateList_1_Remove_mFAFD47D0EC979EA6E063B0DB52060AD52F389C23(L_3, L_4, DelegateList_1_Remove_mFAFD47D0EC979EA6E063B0DB52060AD52F389C23_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::PostEvent(UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticEventCollectorSingleton_PostEvent_m814E46059FF639B7B3E731E6F354778282DF5B2A (DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* __this, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___0_diagnosticEvent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateList_1_Invoke_m7E71EEC669399BB6A5B1F016ABA724EB4BA522A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateList_1_get_Count_m997D0EED8579CCBAF3EEB9FF0E242F8E41A5FF65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mA30F6EF8D51BECC3FE45AFFD476B47A04A0E6984_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3F1556AFF05432EA1C35EE48E2C0D7A9216293FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mC0498BC9E3720CFB6C1EAA4D0B44B7A666B2185A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB4257A2B4551959CAC74AAC14A4144D501D0A7D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DCCA33E7443A6F1FE7814F6BC316750D5ABD97A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// if (diagnosticEvent.Stream == (int)ResourceManager.DiagnosticEventType.AsyncOperationCreate && !m_CreatedEvents.ContainsKey(diagnosticEvent.ObjectId))
		int32_t L_0;
		L_0 = DiagnosticEvent_get_Stream_mC79CA5D736C7CEBA931F272DA4F94BA8DED1BCF6((&___0_diagnosticEvent), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0022;
		}
	}
	{
		Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* L_1 = __this->___m_CreatedEvents_6;
		int32_t L_2;
		L_2 = DiagnosticEvent_get_ObjectId_mF6D69C8148C581548D9CF4C21293F6A8300DAC75((&___0_diagnosticEvent), NULL);
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m3F1556AFF05432EA1C35EE48E2C0D7A9216293FF(L_1, L_2, Dictionary_2_ContainsKey_m3F1556AFF05432EA1C35EE48E2C0D7A9216293FF_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		// m_CreatedEvents.Add(diagnosticEvent.ObjectId, diagnosticEvent);
		Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* L_5 = __this->___m_CreatedEvents_6;
		int32_t L_6;
		L_6 = DiagnosticEvent_get_ObjectId_mF6D69C8148C581548D9CF4C21293F6A8300DAC75((&___0_diagnosticEvent), NULL);
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_7 = ___0_diagnosticEvent;
		NullCheck(L_5);
		Dictionary_2_Add_mA30F6EF8D51BECC3FE45AFFD476B47A04A0E6984(L_5, L_6, L_7, Dictionary_2_Add_mA30F6EF8D51BECC3FE45AFFD476B47A04A0E6984_RuntimeMethod_var);
		goto IL_005e;
	}

IL_003d:
	{
		// else if (diagnosticEvent.Stream == (int)ResourceManager.DiagnosticEventType.AsyncOperationDestroy)
		int32_t L_8;
		L_8 = DiagnosticEvent_get_Stream_mC79CA5D736C7CEBA931F272DA4F94BA8DED1BCF6((&___0_diagnosticEvent), NULL);
		V_1 = (bool)((((int32_t)L_8) == ((int32_t)5))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_005e;
		}
	}
	{
		// m_CreatedEvents.Remove(diagnosticEvent.ObjectId);
		Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* L_10 = __this->___m_CreatedEvents_6;
		int32_t L_11;
		L_11 = DiagnosticEvent_get_ObjectId_mF6D69C8148C581548D9CF4C21293F6A8300DAC75((&___0_diagnosticEvent), NULL);
		NullCheck(L_10);
		bool L_12;
		L_12 = Dictionary_2_Remove_mC0498BC9E3720CFB6C1EAA4D0B44B7A666B2185A(L_10, L_11, Dictionary_2_Remove_mC0498BC9E3720CFB6C1EAA4D0B44B7A666B2185A_RuntimeMethod_var);
	}

IL_005e:
	{
		// Debug.Assert(m_UnhandledEvents != null, "DiagnosticEventCollectorSingleton.PostEvent - s_unhandledEvents == null.");
		List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9* L_13 = __this->___m_UnhandledEvents_7;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_mA460392021AC0A8210C9081E3C1C9652DBF32BF6((bool)((!(((RuntimeObject*)(List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9*)L_13) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), _stringLiteral8DCCA33E7443A6F1FE7814F6BC316750D5ABD97A, NULL);
		// if (s_EventHandlers.Count > 0)
		DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* L_14 = __this->___s_EventHandlers_8;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = DelegateList_1_get_Count_m997D0EED8579CCBAF3EEB9FF0E242F8E41A5FF65(L_14, DelegateList_1_get_Count_m997D0EED8579CCBAF3EEB9FF0E242F8E41A5FF65_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_15) > ((int32_t)0))? 1 : 0);
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_0093;
		}
	}
	{
		// s_EventHandlers.Invoke(diagnosticEvent);
		DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* L_17 = __this->___s_EventHandlers_8;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_18 = ___0_diagnosticEvent;
		NullCheck(L_17);
		DelegateList_1_Invoke_m7E71EEC669399BB6A5B1F016ABA724EB4BA522A7(L_17, L_18, DelegateList_1_Invoke_m7E71EEC669399BB6A5B1F016ABA724EB4BA522A7_RuntimeMethod_var);
		goto IL_00a0;
	}

IL_0093:
	{
		// m_UnhandledEvents.Add(diagnosticEvent);
		List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9* L_19 = __this->___m_UnhandledEvents_7;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_20 = ___0_diagnosticEvent;
		NullCheck(L_19);
		List_1_Add_mB4257A2B4551959CAC74AAC14A4144D501D0A7D5_inline(L_19, L_20, List_1_Add_mB4257A2B4551959CAC74AAC14A4144D501D0A7D5_RuntimeMethod_var);
	}

IL_00a0:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticEventCollectorSingleton_Awake_m123CE39CFC51D74A89D0EACF7DB3FC080FD07723 (DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__11_0_mC35442B113DAF4C3C790A4D17482F6CF5888FE73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* G_B2_0 = NULL;
	DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* G_B2_1 = NULL;
	Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* G_B1_0 = NULL;
	DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* G_B1_1 = NULL;
	{
		// RegisterEventHandler((DiagnosticEvent diagnosticEvent) => {PlayerConnection.instance.Send(DiagnosticEventCollectorSingleton.PlayerConnectionGuid, diagnosticEvent.Serialize()); });
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var);
		Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* L_0 = ((U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_2;
		Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var);
		U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7* L_2 = ((U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* L_3 = (Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F*)il2cpp_codegen_object_new(Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m06B2E66413629515634D1103FC191FE010DB6B22(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CAwakeU3Eb__11_0_mC35442B113DAF4C3C790A4D17482F6CF5888FE73_RuntimeMethod_var), NULL);
		Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* L_4 = L_3;
		((U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_2), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0021:
	{
		NullCheck(G_B2_1);
		DiagnosticEventCollectorSingleton_RegisterEventHandler_mBD7EB71E6D5A3B2D180D6B0E2163C47E7DE291BA(G_B2_1, G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticEventCollectorSingleton_Update_m5EBCBD1D3BCD145D3EEB6460DA39FCC197354BD3 (DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateList_1_get_Count_m997D0EED8579CCBAF3EEB9FF0E242F8E41A5FF65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22F26E94CC0601B218A55F5373A646B776F7FDEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43DA1811FCD9FF890B2229A8C1CA4E836BE1BBA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95DAD4257816ED9B3D6718A6CBD69EFFCF321CAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE60521B1295D070924B7C7ECB78E460EE3EF7E9B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	{
		// if (s_EventHandlers.Count > 0)
		DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* L_0 = __this->___s_EventHandlers_8;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = DelegateList_1_get_Count_m997D0EED8579CCBAF3EEB9FF0E242F8E41A5FF65(L_0, DelegateList_1_get_Count_m997D0EED8579CCBAF3EEB9FF0E242F8E41A5FF65_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00c4;
		}
	}
	{
		// var elapsed = Time.realtimeSinceStartup - m_lastTickSent;
		float L_3;
		L_3 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_4 = __this->___m_lastTickSent_9;
		V_1 = ((float)il2cpp_codegen_subtract(L_3, L_4));
		// if (elapsed > .25f)
		float L_5 = V_1;
		V_2 = (bool)((((float)L_5) > ((float)(0.25f)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_00c3;
		}
	}
	{
		// var fps = (Time.frameCount - m_lastFrame) / elapsed;
		int32_t L_7;
		L_7 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		int32_t L_8 = __this->___m_lastFrame_10;
		float L_9 = V_1;
		V_3 = ((float)(((float)((int32_t)il2cpp_codegen_subtract(L_7, L_8)))/L_9));
		// m_lastFrame = Time.frameCount;
		int32_t L_10;
		L_10 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		__this->___m_lastFrame_10 = L_10;
		// fpsAvg = (fpsAvg + fps) * .5f;
		float L_11 = __this->___fpsAvg_11;
		float L_12 = V_3;
		__this->___fpsAvg_11 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_11, L_12)), (0.5f)));
		// m_lastTickSent = Time.realtimeSinceStartup;
		float L_13;
		L_13 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___m_lastTickSent_9 = L_13;
		// int heapKB = (int)(UnityEngine.Profiling.Profiler.GetMonoUsedSizeLong() / 1024);
		int64_t L_14;
		L_14 = Profiler_GetMonoUsedSizeLong_m0502757AA9D86F43BEE50352F6082F978AB1C973(NULL);
		V_4 = ((int32_t)((int64_t)(L_14/((int64_t)((int32_t)1024)))));
		// PostEvent(new DiagnosticEvent("FrameCount", "FPS", 2, 1, Time.frameCount, (int)fpsAvg, null));
		int32_t L_15;
		L_15 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		float L_16 = __this->___fpsAvg_11;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_17;
		memset((&L_17), 0, sizeof(L_17));
		DiagnosticEvent__ctor_mDF62B33ABFF1F33A4B39DF5C209B8238F2D529A0((&L_17), _stringLiteralE60521B1295D070924B7C7ECB78E460EE3EF7E9B, _stringLiteral95DAD4257816ED9B3D6718A6CBD69EFFCF321CAD, 2, 1, L_15, il2cpp_codegen_cast_double_to_int<int32_t>(L_16), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL, /*hidden argument*/NULL);
		DiagnosticEventCollectorSingleton_PostEvent_m814E46059FF639B7B3E731E6F354778282DF5B2A(__this, L_17, NULL);
		// PostEvent(new DiagnosticEvent("MemoryCount", "MonoHeap", 3, 2, Time.frameCount, heapKB, null));
		int32_t L_18;
		L_18 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		int32_t L_19 = V_4;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_20;
		memset((&L_20), 0, sizeof(L_20));
		DiagnosticEvent__ctor_mDF62B33ABFF1F33A4B39DF5C209B8238F2D529A0((&L_20), _stringLiteral22F26E94CC0601B218A55F5373A646B776F7FDEC, _stringLiteral43DA1811FCD9FF890B2229A8C1CA4E836BE1BBA1, 3, 2, L_18, L_19, (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL, /*hidden argument*/NULL);
		DiagnosticEventCollectorSingleton_PostEvent_m814E46059FF639B7B3E731E6F354778282DF5B2A(__this, L_20, NULL);
	}

IL_00c3:
	{
	}

IL_00c4:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticEventCollectorSingleton__ctor_m439DE5DDEF6D28BB4E48FF1A9FA7B3F100B41E03 (DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentSingleton_1__ctor_m8278B3D96A270FC29C8C25774F9FFE38E4489339_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateList_1_CreateWithGlobalCache_mD49EAE9505F5E576736F75029D2B73FE716D571E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m315FC05E431A5CB03DC47FAFB722AC3A0E641C3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEA50377FC2BC3CB5AA605E63AFB7F4B7A9B46A02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal Dictionary<int, DiagnosticEvent> m_CreatedEvents = new Dictionary<int, DiagnosticEvent>();
		Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* L_0 = (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD*)il2cpp_codegen_object_new(Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m315FC05E431A5CB03DC47FAFB722AC3A0E641C3A(L_0, Dictionary_2__ctor_m315FC05E431A5CB03DC47FAFB722AC3A0E641C3A_RuntimeMethod_var);
		__this->___m_CreatedEvents_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CreatedEvents_6), (void*)L_0);
		// internal List<DiagnosticEvent> m_UnhandledEvents = new List<DiagnosticEvent>();
		List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9* L_1 = (List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9*)il2cpp_codegen_object_new(List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mEA50377FC2BC3CB5AA605E63AFB7F4B7A9B46A02(L_1, List_1__ctor_mEA50377FC2BC3CB5AA605E63AFB7F4B7A9B46A02_RuntimeMethod_var);
		__this->___m_UnhandledEvents_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UnhandledEvents_7), (void*)L_1);
		// internal DelegateList<DiagnosticEvent> s_EventHandlers = DelegateList<DiagnosticEvent>.CreateWithGlobalCache();
		DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* L_2;
		L_2 = DelegateList_1_CreateWithGlobalCache_mD49EAE9505F5E576736F75029D2B73FE716D571E(DelegateList_1_CreateWithGlobalCache_mD49EAE9505F5E576736F75029D2B73FE716D571E_RuntimeMethod_var);
		__this->___s_EventHandlers_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___s_EventHandlers_8), (void*)L_2);
		// float m_lastTickSent = 0;
		__this->___m_lastTickSent_9 = (0.0f);
		// int m_lastFrame = 0;
		__this->___m_lastFrame_10 = 0;
		// float fpsAvg = 30;
		__this->___fpsAvg_11 = (30.0f);
		ComponentSingleton_1__ctor_m8278B3D96A270FC29C8C25774F9FFE38E4489339(__this, ComponentSingleton_1__ctor_m8278B3D96A270FC29C8C25774F9FFE38E4489339_RuntimeMethod_var);
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
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m68A24D9C1E63B9D1C8598AA17A966FF00C9FCA63 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7* L_0 = (U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7*)il2cpp_codegen_object_new(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m7E8AE3390AA2F226FD9AE66A810054796F6E3EF7(L_0, NULL);
		((U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7E8AE3390AA2F226FD9AE66A810054796F6E3EF7 (U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton/<>c::<RegisterEventHandler>b__8_0(UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CRegisterEventHandlerU3Eb__8_0_mA7621F2FC763736C0E5940EFF0C40BC79177573C (U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7* __this, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___0_evt, const RuntimeMethod* method) 
{
	{
		// var combinedAndSortedList = m_UnhandledEvents.Concat(m_CreatedEvents.Values).OrderBy(evt => evt.Frame);
		int32_t L_0;
		L_0 = DiagnosticEvent_get_Frame_m3CC82F45DB1EA65234FF98A1E739FC40D303171B((&___0_evt), NULL);
		return L_0;
	}
}
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton/<>c::<Awake>b__11_0(UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CAwakeU3Eb__11_0_mC35442B113DAF4C3C790A4D17482F6CF5888FE73 (U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7* __this, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___0_diagnosticEvent, const RuntimeMethod* method) 
{
	{
		// RegisterEventHandler((DiagnosticEvent diagnosticEvent) => {PlayerConnection.instance.Send(DiagnosticEventCollectorSingleton.PlayerConnectionGuid, diagnosticEvent.Serialize()); });
		PlayerConnection_tE21E6206D6FC40F07B3842D83BCB0732C9244E53* L_0;
		L_0 = PlayerConnection_get_instance_mF08ABE514910AD8B105D42561CF97CBF135ABD3B(NULL);
		Guid_t L_1;
		L_1 = DiagnosticEventCollectorSingleton_get_PlayerConnectionGuid_m12CE48F5FA9778C6B084529356CE2BA2FF19E0FC(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = DiagnosticEvent_Serialize_m6C00B0750960B7E23FB1DFE666C93DC3F5B0FF1A((&___0_diagnosticEvent), NULL);
		NullCheck(L_0);
		PlayerConnection_Send_mBFE41D75C28DF0885455CE809D40C489818F91B7(L_0, L_1, L_2, NULL);
		// RegisterEventHandler((DiagnosticEvent diagnosticEvent) => {PlayerConnection.instance.Send(DiagnosticEventCollectorSingleton.PlayerConnectionGuid, diagnosticEvent.Serialize()); });
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
// System.Guid UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollector::get_PlayerConnectionGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t DiagnosticEventCollector_get_PlayerConnectionGuid_mBA28978681F7978EDAD805C720891BB0013FC3E1 (const RuntimeMethod* method) 
{
	{
		// public static Guid PlayerConnectionGuid => DiagnosticEventCollectorSingleton.PlayerConnectionGuid;
		Guid_t L_0;
		L_0 = DiagnosticEventCollectorSingleton_get_PlayerConnectionGuid_m12CE48F5FA9778C6B084529356CE2BA2FF19E0FC(NULL);
		return L_0;
	}
}
// UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollector UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollector::FindOrCreateGlobalInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367* DiagnosticEventCollector_FindOrCreateGlobalInstance_mF69245B78702CB0B5D38DD7F7E35DD84D1884E6F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367_m3614D3182E86B3371F0D02835223E5CB63C467B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14BBDB35FE445BD30DA2EC66B3F2990406A34F10);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	DiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367* V_2 = NULL;
	{
		// if (s_Collector == null)
		DiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367* L_0 = ((DiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367_StaticFields*)il2cpp_codegen_static_fields_for(DiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367_il2cpp_TypeInfo_var))->___s_Collector_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0044;
		}
	}
	{
		// var go = new GameObject("EventCollector", typeof(DiagnosticEventCollector));
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4 = L_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (DiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		GameObject__ctor_m721D643351E55308EA4F5F41B67D5446D11C61F0(L_7, _stringLiteral14BBDB35FE445BD30DA2EC66B3F2990406A34F10, L_4, NULL);
		V_1 = L_7;
		// s_Collector = go.GetComponent<DiagnosticEventCollector>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_1;
		NullCheck(L_8);
		DiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367* L_9;
		L_9 = GameObject_GetComponent_TisDiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367_m3614D3182E86B3371F0D02835223E5CB63C467B4(L_8, GameObject_GetComponent_TisDiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367_m3614D3182E86B3371F0D02835223E5CB63C467B4_RuntimeMethod_var);
		((DiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367_StaticFields*)il2cpp_codegen_static_fields_for(DiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367_il2cpp_TypeInfo_var))->___s_Collector_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((DiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367_StaticFields*)il2cpp_codegen_static_fields_for(DiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367_il2cpp_TypeInfo_var))->___s_Collector_4), (void*)L_9);
		// go.hideFlags = HideFlags.DontSave; // HideFlags.HideAndDontSave;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_1;
		NullCheck(L_10);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_10, ((int32_t)52), NULL);
	}

IL_0044:
	{
		// return s_Collector;
		DiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367* L_11 = ((DiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367_StaticFields*)il2cpp_codegen_static_fields_for(DiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367_il2cpp_TypeInfo_var))->___s_Collector_4;
		V_2 = L_11;
		goto IL_004c;
	}

IL_004c:
	{
		// }
		DiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367* L_12 = V_2;
		return L_12;
	}
}
// System.Boolean UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollector::RegisterEventHandler(System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DiagnosticEventCollector_RegisterEventHandler_m07723751487743072F7D163A0C94803345C3DA46 (Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* ___0_handler, bool ___1_register, bool ___2_create, const RuntimeMethod* method) 
{
	{
		// public static bool RegisterEventHandler(Action<DiagnosticEvent> handler, bool register, bool create) => DiagnosticEventCollectorSingleton.RegisterEventHandler(handler, register, create);
		Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* L_0 = ___0_handler;
		bool L_1 = ___1_register;
		bool L_2 = ___2_create;
		bool L_3;
		L_3 = DiagnosticEventCollectorSingleton_RegisterEventHandler_m9FCC0418DB7FCB86CDD3C233C6D59507D3A1CBC5(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollector::UnregisterEventHandler(System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticEventCollector_UnregisterEventHandler_m6183F50FB14701F99FC2F34D16ABAFC738A63F4B (DiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367* __this, Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* ___0_handler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentSingleton_1_get_Instance_m80CDAEE68C1180F577014BC10910403D8E797894_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void UnregisterEventHandler(Action<DiagnosticEvent> handler) => DiagnosticEventCollectorSingleton.Instance.UnregisterEventHandler(handler);
		DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* L_0;
		L_0 = ComponentSingleton_1_get_Instance_m80CDAEE68C1180F577014BC10910403D8E797894(ComponentSingleton_1_get_Instance_m80CDAEE68C1180F577014BC10910403D8E797894_RuntimeMethod_var);
		Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* L_1 = ___0_handler;
		NullCheck(L_0);
		DiagnosticEventCollectorSingleton_UnregisterEventHandler_m195CD42A740153DCC2387DC36511FB4FE36E5AF2(L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollector::PostEvent(UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticEventCollector_PostEvent_m7E9005E48B8D9756D61E13B4C6F4070B1A108E19 (DiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367* __this, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___0_diagnosticEvent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentSingleton_1_get_Instance_m80CDAEE68C1180F577014BC10910403D8E797894_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void PostEvent(DiagnosticEvent diagnosticEvent) => DiagnosticEventCollectorSingleton.Instance.PostEvent(diagnosticEvent);
		DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* L_0;
		L_0 = ComponentSingleton_1_get_Instance_m80CDAEE68C1180F577014BC10910403D8E797894(ComponentSingleton_1_get_Instance_m80CDAEE68C1180F577014BC10910403D8E797894_RuntimeMethod_var);
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_1 = ___0_diagnosticEvent;
		NullCheck(L_0);
		DiagnosticEventCollectorSingleton_PostEvent_m814E46059FF639B7B3E731E6F354778282DF5B2A(L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticEventCollector__ctor_m55F16BF9725CD02336D84D2032D17D23079D34BC (DiagnosticEventCollector_tF83786D91685446C24FC6E443A86AF4B623E1367* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_pinvoke(const AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D& unmarshaled, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D____m_InternalOp_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_InternalOp_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D____m_InternalOp_0_FieldInfo_var, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_InternalOp_0Exception, NULL);
}
IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_pinvoke_back(const AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke& marshaled, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D____m_InternalOp_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_InternalOp_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D____m_InternalOp_0_FieldInfo_var, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_InternalOp_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_pinvoke_cleanup(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_com(const AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D& unmarshaled, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D____m_InternalOp_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_InternalOp_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D____m_InternalOp_0_FieldInfo_var, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_InternalOp_0Exception, NULL);
}
IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_com_back(const AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com& marshaled, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D____m_InternalOp_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_InternalOp_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D____m_InternalOp_0_FieldInfo_var, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_InternalOp_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_com_cleanup(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com& marshaled)
{
}
// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_LocationName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsyncOperationHandle_get_LocationName_mFBCB4F35970F65B67F34263CBBC8949DBD04954F (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return m_LocationName; }
		String_t* L_0 = __this->___m_LocationName_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_LocationName; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* AsyncOperationHandle_get_LocationName_mFBCB4F35970F65B67F34263CBBC8949DBD04954F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AsyncOperationHandle_get_LocationName_mFBCB4F35970F65B67F34263CBBC8949DBD04954F(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::set_LocationName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_set_LocationName_mA4DD8D02B510CD9974D1E5AAC4D34DD91575865C (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_LocationName = value; }
		String_t* L_0 = ___0_value;
		__this->___m_LocationName_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LocationName_2), (void*)L_0);
		// set { m_LocationName = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationHandle_set_LocationName_mA4DD8D02B510CD9974D1E5AAC4D34DD91575865C_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle_set_LocationName_mA4DD8D02B510CD9974D1E5AAC4D34DD91575865C(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::.ctor(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle__ctor_m68E6B69581AD8F879FE27693A96D6F36ABD3A264 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, RuntimeObject* ___0_op, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* G_B2_0 = NULL;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* G_B3_1 = NULL;
	{
		// m_InternalOp = op;
		RuntimeObject* L_0 = ___0_op;
		__this->___m_InternalOp_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InternalOp_0), (void*)L_0);
		// m_Version = op?.Version ?? 0;
		RuntimeObject* L_1 = ___0_op;
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_000f;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0015;
	}

IL_000f:
	{
		RuntimeObject* L_2 = ___0_op;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::get_Version() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_2);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0015:
	{
		G_B3_1->___m_Version_1 = G_B3_0;
		// m_LocationName = null;
		__this->___m_LocationName_2 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LocationName_2), (void*)(String_t*)NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationHandle__ctor_m68E6B69581AD8F879FE27693A96D6F36ABD3A264_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_op, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle__ctor_m68E6B69581AD8F879FE27693A96D6F36ABD3A264(_thisAdjusted, ___0_op, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::.ctor(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle__ctor_m21CD505FAB5F5AB79ADA74F7F95AD6DEA7F145E8 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, RuntimeObject* ___0_op, int32_t ___1_version, const RuntimeMethod* method) 
{
	{
		// m_InternalOp = op;
		RuntimeObject* L_0 = ___0_op;
		__this->___m_InternalOp_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InternalOp_0), (void*)L_0);
		// m_Version = version;
		int32_t L_1 = ___1_version;
		__this->___m_Version_1 = L_1;
		// m_LocationName = null;
		__this->___m_LocationName_2 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LocationName_2), (void*)(String_t*)NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationHandle__ctor_m21CD505FAB5F5AB79ADA74F7F95AD6DEA7F145E8_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_op, int32_t ___1_version, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle__ctor_m21CD505FAB5F5AB79ADA74F7F95AD6DEA7F145E8(_thisAdjusted, ___0_op, ___1_version, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::.ctor(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle__ctor_mC618D938157A14E87066933EF6757D73A2847E22 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, RuntimeObject* ___0_op, String_t* ___1_locationName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* G_B2_0 = NULL;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* G_B3_1 = NULL;
	{
		// m_InternalOp = op;
		RuntimeObject* L_0 = ___0_op;
		__this->___m_InternalOp_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InternalOp_0), (void*)L_0);
		// m_Version = op?.Version ?? 0;
		RuntimeObject* L_1 = ___0_op;
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_000f;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0015;
	}

IL_000f:
	{
		RuntimeObject* L_2 = ___0_op;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::get_Version() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_2);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0015:
	{
		G_B3_1->___m_Version_1 = G_B3_0;
		// m_LocationName = locationName;
		String_t* L_4 = ___1_locationName;
		__this->___m_LocationName_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LocationName_2), (void*)L_4);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationHandle__ctor_mC618D938157A14E87066933EF6757D73A2847E22_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_op, String_t* ___1_locationName, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle__ctor_mC618D938157A14E87066933EF6757D73A2847E22(_thisAdjusted, ___0_op, ___1_locationName, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::.ctor(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle__ctor_m40A34479B55F7F00CB5DF17F1003A38B12D0A51A (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, RuntimeObject* ___0_op, int32_t ___1_version, String_t* ___2_locationName, const RuntimeMethod* method) 
{
	{
		// m_InternalOp = op;
		RuntimeObject* L_0 = ___0_op;
		__this->___m_InternalOp_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InternalOp_0), (void*)L_0);
		// m_Version = version;
		int32_t L_1 = ___1_version;
		__this->___m_Version_1 = L_1;
		// m_LocationName = locationName;
		String_t* L_2 = ___2_locationName;
		__this->___m_LocationName_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LocationName_2), (void*)L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationHandle__ctor_m40A34479B55F7F00CB5DF17F1003A38B12D0A51A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_op, int32_t ___1_version, String_t* ___2_locationName, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle__ctor_m40A34479B55F7F00CB5DF17F1003A38B12D0A51A(_thisAdjusted, ___0_op, ___1_version, ___2_locationName, method);
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::Acquire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D AsyncOperationHandle_Acquire_mDFD8D1733D45A5F9C20B3A49EA51891BE2C1435B (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// InternalOp.IncrementReferenceCount();
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(5 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::IncrementReferenceCount() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0);
		// return this;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_1 = (*(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*)__this);
		V_0 = L_1;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D AsyncOperationHandle_Acquire_mDFD8D1733D45A5F9C20B3A49EA51891BE2C1435B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D _returnValue;
	_returnValue = AsyncOperationHandle_Acquire_mDFD8D1733D45A5F9C20B3A49EA51891BE2C1435B(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::add_Completed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_add_Completed_mD5633623ADF00C97B6A1EE712E6654452F64B2E0 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// add { InternalOp.CompletedTypeless += value; }
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* >::Invoke(15 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::add_CompletedTypeless(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>) */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0, L_1);
		// add { InternalOp.CompletedTypeless += value; }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationHandle_add_Completed_mD5633623ADF00C97B6A1EE712E6654452F64B2E0_AdjustorThunk (RuntimeObject* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___0_value, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle_add_Completed_mD5633623ADF00C97B6A1EE712E6654452F64B2E0(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::remove_Completed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_remove_Completed_m538FFC6655C8FB0600775FFFB998D9903478DB44 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// remove { InternalOp.CompletedTypeless -= value; }
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* >::Invoke(16 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::remove_CompletedTypeless(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>) */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0, L_1);
		// remove { InternalOp.CompletedTypeless -= value; }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationHandle_remove_Completed_m538FFC6655C8FB0600775FFFB998D9903478DB44_AdjustorThunk (RuntimeObject* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___0_value, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle_remove_Completed_m538FFC6655C8FB0600775FFFB998D9903478DB44(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::Equals(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationHandle_Equals_m496ACE1240F3D9550447E1930A1A426BF40CE186 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return m_Version == other.m_Version && m_InternalOp == other.m_InternalOp;
		int32_t L_0 = __this->___m_Version_1;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_1 = ___0_other;
		int32_t L_2 = L_1.___m_Version_1;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_3 = __this->___m_InternalOp_0;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_4 = ___0_other;
		RuntimeObject* L_5 = L_4.___m_InternalOp_0;
		G_B3_0 = ((((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject*)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool AsyncOperationHandle_Equals_m496ACE1240F3D9550447E1930A1A426BF40CE186_AdjustorThunk (RuntimeObject* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___0_other, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	bool _returnValue;
	_returnValue = AsyncOperationHandle_Equals_m496ACE1240F3D9550447E1930A1A426BF40CE186(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_DebugName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsyncOperationHandle_get_DebugName_m8DDB7ED8B735AFC69305907ED82F695ED9F9697E (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C1DC6627277EC19EEFC4AFAEB16D378918A3EAD);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		// if (!IsValid())
		bool L_0;
		L_0 = AsyncOperationHandle_IsValid_mC57B65EA4D8E084859EF42FD671EDA1E2ED46626(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// return "InvalidHandle";
		V_1 = _stringLiteral1C1DC6627277EC19EEFC4AFAEB16D378918A3EAD;
		goto IL_0024;
	}

IL_0016:
	{
		// return InternalOp.DebugName;
		RuntimeObject* L_2;
		L_2 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::get_DebugName() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		String_t* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* AsyncOperationHandle_get_DebugName_m8DDB7ED8B735AFC69305907ED82F695ED9F9697E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AsyncOperationHandle_get_DebugName_m8DDB7ED8B735AFC69305907ED82F695ED9F9697E(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::add_Destroyed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_add_Destroyed_m66F321AB085184936F570B4C3A1F9D66B1872C07 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// add { InternalOp.Destroyed += value; }
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* >::Invoke(17 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::add_Destroyed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>) */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0, L_1);
		// add { InternalOp.Destroyed += value; }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationHandle_add_Destroyed_m66F321AB085184936F570B4C3A1F9D66B1872C07_AdjustorThunk (RuntimeObject* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___0_value, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle_add_Destroyed_m66F321AB085184936F570B4C3A1F9D66B1872C07(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::remove_Destroyed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_remove_Destroyed_m8755ED149C64A82AF2EF9710F0D9256163ED71C9 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// remove { InternalOp.Destroyed -= value; }
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* >::Invoke(18 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::remove_Destroyed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>) */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0, L_1);
		// remove { InternalOp.Destroyed -= value; }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationHandle_remove_Destroyed_m8755ED149C64A82AF2EF9710F0D9256163ED71C9_AdjustorThunk (RuntimeObject* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___0_value, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle_remove_Destroyed_m8755ED149C64A82AF2EF9710F0D9256163ED71C9(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::GetDependencies(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_GetDependencies_m188E3F0A06DA1F789B431E3401D692AD14F45C39 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* ___0_deps, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InternalOp.GetDependencies(deps);
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* L_1 = ___0_deps;
		NullCheck(L_0);
		InterfaceActionInvoker1< List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* >::Invoke(13 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::GetDependencies(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>) */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationHandle_GetDependencies_m188E3F0A06DA1F789B431E3401D692AD14F45C39_AdjustorThunk (RuntimeObject* __this, List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* ___0_deps, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle_GetDependencies_m188E3F0A06DA1F789B431E3401D692AD14F45C39(_thisAdjusted, ___0_deps, method);
}
// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncOperationHandle_GetHashCode_mA261FCCE8588545912EAD2AC611FADD3F104DF15 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// return m_InternalOp == null ? 0 : m_InternalOp.GetHashCode() * 17 + m_Version;
		RuntimeObject* L_0 = __this->___m_InternalOp_0;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_1 = __this->___m_InternalOp_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		int32_t L_3 = __this->___m_Version_1;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)17))), L_3));
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 0;
	}

IL_0021:
	{
		V_0 = G_B3_0;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t AsyncOperationHandle_GetHashCode_mA261FCCE8588545912EAD2AC611FADD3F104DF15_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AsyncOperationHandle_GetHashCode_mA261FCCE8588545912EAD2AC611FADD3F104DF15(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_InternalOp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		// if (m_InternalOp == null || m_InternalOp.Version != m_Version)
		RuntimeObject* L_0 = __this->___m_InternalOp_0;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_1 = __this->___m_InternalOp_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::get_Version() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_1);
		int32_t L_3 = __this->___m_Version_1;
		G_B3_0 = ((((int32_t)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// throw new Exception("Attempting to use an invalid operation handle");
		Exception_t* L_5 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5545562CB57BB8E6D1204C7308B5206ED7661CE4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C_RuntimeMethod_var)));
	}

IL_0031:
	{
		// return m_InternalOp;
		RuntimeObject* L_6 = __this->___m_InternalOp_0;
		V_1 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_IsDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationHandle_get_IsDone_m55E07BF92CC2979A9BBFD8F5B97DCCD52DA1326A (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// get { return !IsValid() || InternalOp.IsDone; }
		bool L_0;
		L_0 = AsyncOperationHandle_IsValid_mC57B65EA4D8E084859EF42FD671EDA1E2ED46626(__this, NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(11 /* System.Boolean UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::get_IsDone() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		// get { return !IsValid() || InternalOp.IsDone; }
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AsyncOperationHandle_get_IsDone_m55E07BF92CC2979A9BBFD8F5B97DCCD52DA1326A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	bool _returnValue;
	_returnValue = AsyncOperationHandle_get_IsDone_m55E07BF92CC2979A9BBFD8F5B97DCCD52DA1326A(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationHandle_IsValid_mC57B65EA4D8E084859EF42FD671EDA1E2ED46626 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return m_InternalOp != null && m_InternalOp.Version == m_Version;
		RuntimeObject* L_0 = __this->___m_InternalOp_0;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_1 = __this->___m_InternalOp_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::get_Version() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_1);
		int32_t L_3 = __this->___m_Version_1;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0022;
	}

IL_0022:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool AsyncOperationHandle_IsValid_mC57B65EA4D8E084859EF42FD671EDA1E2ED46626_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	bool _returnValue;
	_returnValue = AsyncOperationHandle_IsValid_mC57B65EA4D8E084859EF42FD671EDA1E2ED46626(_thisAdjusted, method);
	return _returnValue;
}
// System.Exception UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_OperationException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* AsyncOperationHandle_get_OperationException_m531FC4DC2E215075C0EA7CE135FF1D68F6049270 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	{
		// get { return InternalOp.OperationException; }
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		NullCheck(L_0);
		Exception_t* L_1;
		L_1 = InterfaceFuncInvoker0< Exception_t* >::Invoke(10 /* System.Exception UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::get_OperationException() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return InternalOp.OperationException; }
		Exception_t* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  Exception_t* AsyncOperationHandle_get_OperationException_m531FC4DC2E215075C0EA7CE135FF1D68F6049270_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	Exception_t* _returnValue;
	_returnValue = AsyncOperationHandle_get_OperationException_m531FC4DC2E215075C0EA7CE135FF1D68F6049270(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_PercentComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AsyncOperationHandle_get_PercentComplete_mB5B48174489343D707D9E4A90BAFE24658D135EC (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// get { return InternalOp.PercentComplete; }
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = InterfaceFuncInvoker0< float >::Invoke(7 /* System.Single UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::get_PercentComplete() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return InternalOp.PercentComplete; }
		float L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  float AsyncOperationHandle_get_PercentComplete_mB5B48174489343D707D9E4A90BAFE24658D135EC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	float _returnValue;
	_returnValue = AsyncOperationHandle_get_PercentComplete_mB5B48174489343D707D9E4A90BAFE24658D135EC(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::GetDownloadStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D AsyncOperationHandle_GetDownloadStatus_m526B0F8EC8EF9A00D4F59D5BC918913CE2BED374 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return InternalGetDownloadStatus(new HashSet<object>());
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_0 = (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*)il2cpp_codegen_object_new(HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E(L_0, HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_RuntimeMethod_var);
		DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D L_1;
		L_1 = AsyncOperationHandle_InternalGetDownloadStatus_mC00D428E94E347EE6FCD224530016D1F9433B33C(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D AsyncOperationHandle_GetDownloadStatus_m526B0F8EC8EF9A00D4F59D5BC918913CE2BED374_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D _returnValue;
	_returnValue = AsyncOperationHandle_GetDownloadStatus_m526B0F8EC8EF9A00D4F59D5BC918913CE2BED374(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::InternalGetDownloadStatus(System.Collections.Generic.HashSet`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D AsyncOperationHandle_InternalGetDownloadStatus_mC00D428E94E347EE6FCD224530016D1F9433B33C (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___0_visited, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D V_1;
	memset((&V_1), 0, sizeof(V_1));
	DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D V_2;
	memset((&V_2), 0, sizeof(V_2));
	DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	{
		// if (visited == null)
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_0 = ___0_visited;
		V_0 = (bool)((((RuntimeObject*)(HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// visited = new HashSet<object>();
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_2 = (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*)il2cpp_codegen_object_new(HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E(L_2, HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_RuntimeMethod_var);
		___0_visited = L_2;
	}

IL_0010:
	{
		// return visited.Add(InternalOp) ? InternalOp.GetDownloadStatus(visited) : new DownloadStatus() {IsDone = IsDone};
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_3 = ___0_visited;
		RuntimeObject* L_4;
		L_4 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		NullCheck(L_3);
		bool L_5;
		L_5 = HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B(L_3, L_4, HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0036;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D));
		bool L_6;
		L_6 = AsyncOperationHandle_get_IsDone_m55E07BF92CC2979A9BBFD8F5B97DCCD52DA1326A(__this, NULL);
		(&V_1)->___IsDone_2 = L_6;
		DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D L_7 = V_1;
		G_B5_0 = L_7;
		goto IL_0042;
	}

IL_0036:
	{
		RuntimeObject* L_8;
		L_8 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_9 = ___0_visited;
		NullCheck(L_8);
		DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D L_10;
		L_10 = InterfaceFuncInvoker1< DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* >::Invoke(8 /* UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::GetDownloadStatus(System.Collections.Generic.HashSet`1<System.Object>) */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_8, L_9);
		G_B5_0 = L_10;
	}

IL_0042:
	{
		V_2 = G_B5_0;
		goto IL_0045;
	}

IL_0045:
	{
		// }
		DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C  DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D AsyncOperationHandle_InternalGetDownloadStatus_mC00D428E94E347EE6FCD224530016D1F9433B33C_AdjustorThunk (RuntimeObject* __this, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___0_visited, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D _returnValue;
	_returnValue = AsyncOperationHandle_InternalGetDownloadStatus_mC00D428E94E347EE6FCD224530016D1F9433B33C(_thisAdjusted, ___0_visited, method);
	return _returnValue;
}
// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_ReferenceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncOperationHandle_get_ReferenceCount_m28F7ED9B712CC95D3F1E304578F94B6EEC1A5B3D (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// get { return InternalOp.ReferenceCount; }
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::get_ReferenceCount() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return InternalOp.ReferenceCount; }
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t AsyncOperationHandle_get_ReferenceCount_m28F7ED9B712CC95D3F1E304578F94B6EEC1A5B3D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AsyncOperationHandle_get_ReferenceCount_m28F7ED9B712CC95D3F1E304578F94B6EEC1A5B3D(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_Release_mD4ADD2AA46F56753B12E0916FA2A739A3EBB5762 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InternalOp.DecrementReferenceCount();
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::DecrementReferenceCount() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0);
		// m_InternalOp = null;
		__this->___m_InternalOp_0 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InternalOp_0), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationHandle_Release_mD4ADD2AA46F56753B12E0916FA2A739A3EBB5762_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle_Release_mD4ADD2AA46F56753B12E0916FA2A739A3EBB5762(_thisAdjusted, method);
}
// System.Object UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// get { return InternalOp.GetResultAsObject(); }
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Object UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::GetResultAsObject() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return InternalOp.GetResultAsObject(); }
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncOperationHandle_get_Status_mD5FB502808777A3C88880942DB9595C614CF9B0A (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// get { return InternalOp.Status; }
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(9 /* UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::get_Status() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return InternalOp.Status; }
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t AsyncOperationHandle_get_Status_mD5FB502808777A3C88880942DB9595C614CF9B0A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AsyncOperationHandle_get_Status_mD5FB502808777A3C88880942DB9595C614CF9B0A(_thisAdjusted, method);
	return _returnValue;
}
// System.Threading.Tasks.Task`1<System.Object> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncOperationHandle_get_Task_m74053C375ECE675441967B0EA68091A7D9F84EF6 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* V_0 = NULL;
	{
		// get { return InternalOp.Task; }
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		NullCheck(L_0);
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_1;
		L_1 = InterfaceFuncInvoker0< Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* >::Invoke(20 /* System.Threading.Tasks.Task`1<System.Object> UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::get_Task() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return InternalOp.Task; }
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncOperationHandle_get_Task_m74053C375ECE675441967B0EA68091A7D9F84EF6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* _returnValue;
	_returnValue = AsyncOperationHandle_get_Task_m74053C375ECE675441967B0EA68091A7D9F84EF6(_thisAdjusted, method);
	return _returnValue;
}
// System.Object UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_System_Collections_IEnumerator_get_Current_mBAF3C14B4A6BD17BBBE6663D0061A1DD42E8FE37 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// get { return Result; }
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return Result; }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* AsyncOperationHandle_System_Collections_IEnumerator_get_Current_mBAF3C14B4A6BD17BBBE6663D0061A1DD42E8FE37_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = AsyncOperationHandle_System_Collections_IEnumerator_get_Current_mBAF3C14B4A6BD17BBBE6663D0061A1DD42E8FE37(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::System.Collections.IEnumerator.MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationHandle_System_Collections_IEnumerator_MoveNext_m8A793FA1EEE2DAAD8B74F95FFEC60D94B9B8610E (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return !IsDone;
		bool L_0;
		L_0 = AsyncOperationHandle_get_IsDone_m55E07BF92CC2979A9BBFD8F5B97DCCD52DA1326A(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool AsyncOperationHandle_System_Collections_IEnumerator_MoveNext_m8A793FA1EEE2DAAD8B74F95FFEC60D94B9B8610E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	bool _returnValue;
	_returnValue = AsyncOperationHandle_System_Collections_IEnumerator_MoveNext_m8A793FA1EEE2DAAD8B74F95FFEC60D94B9B8610E(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_System_Collections_IEnumerator_Reset_m8921AB145EB1F53FD4352BE9E512505719FE6527 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationHandle_System_Collections_IEnumerator_Reset_m8921AB145EB1F53FD4352BE9E512505719FE6527_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle_System_Collections_IEnumerator_Reset_m8921AB145EB1F53FD4352BE9E512505719FE6527(_thisAdjusted, method);
}
// System.Object UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::WaitForCompletion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_WaitForCompletion_m4F5203EAAEAA1F724EA1220006A43E89A0951784 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		// if (IsValid() && !InternalOp.IsDone)
		bool L_0;
		L_0 = AsyncOperationHandle_IsValid_mC57B65EA4D8E084859EF42FD671EDA1E2ED46626(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(11 /* System.Boolean UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::get_IsDone() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// InternalOp.WaitForCompletion();
		RuntimeObject* L_4;
		L_4 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(23 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::WaitForCompletion() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_4);
	}

IL_002a:
	{
		// if (IsValid())
		bool L_5;
		L_5 = AsyncOperationHandle_IsValid_mC57B65EA4D8E084859EF42FD671EDA1E2ED46626(__this, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// return Result;
		RuntimeObject* L_7;
		L_7 = AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746(__this, NULL);
		V_2 = L_7;
		goto IL_0041;
	}

IL_003d:
	{
		// return null;
		V_2 = NULL;
		goto IL_0041;
	}

IL_0041:
	{
		// }
		RuntimeObject* L_8 = V_2;
		return L_8;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* AsyncOperationHandle_WaitForCompletion_m4F5203EAAEAA1F724EA1220006A43E89A0951784_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = AsyncOperationHandle_WaitForCompletion_m4F5203EAAEAA1F724EA1220006A43E89A0951784(_thisAdjusted, method);
	return _returnValue;
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
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus
IL2CPP_EXTERN_C void DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshal_pinvoke(const DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D& unmarshaled, DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshaled_pinvoke& marshaled)
{
	marshaled.___TotalBytes_0 = unmarshaled.___TotalBytes_0;
	marshaled.___DownloadedBytes_1 = unmarshaled.___DownloadedBytes_1;
	marshaled.___IsDone_2 = static_cast<int32_t>(unmarshaled.___IsDone_2);
}
IL2CPP_EXTERN_C void DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshal_pinvoke_back(const DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshaled_pinvoke& marshaled, DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D& unmarshaled)
{
	int64_t unmarshaledTotalBytes_temp_0 = 0;
	unmarshaledTotalBytes_temp_0 = marshaled.___TotalBytes_0;
	unmarshaled.___TotalBytes_0 = unmarshaledTotalBytes_temp_0;
	int64_t unmarshaledDownloadedBytes_temp_1 = 0;
	unmarshaledDownloadedBytes_temp_1 = marshaled.___DownloadedBytes_1;
	unmarshaled.___DownloadedBytes_1 = unmarshaledDownloadedBytes_temp_1;
	bool unmarshaledIsDone_temp_2 = false;
	unmarshaledIsDone_temp_2 = static_cast<bool>(marshaled.___IsDone_2);
	unmarshaled.___IsDone_2 = unmarshaledIsDone_temp_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus
IL2CPP_EXTERN_C void DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshal_pinvoke_cleanup(DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus
IL2CPP_EXTERN_C void DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshal_com(const DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D& unmarshaled, DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshaled_com& marshaled)
{
	marshaled.___TotalBytes_0 = unmarshaled.___TotalBytes_0;
	marshaled.___DownloadedBytes_1 = unmarshaled.___DownloadedBytes_1;
	marshaled.___IsDone_2 = static_cast<int32_t>(unmarshaled.___IsDone_2);
}
IL2CPP_EXTERN_C void DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshal_com_back(const DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshaled_com& marshaled, DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D& unmarshaled)
{
	int64_t unmarshaledTotalBytes_temp_0 = 0;
	unmarshaledTotalBytes_temp_0 = marshaled.___TotalBytes_0;
	unmarshaled.___TotalBytes_0 = unmarshaledTotalBytes_temp_0;
	int64_t unmarshaledDownloadedBytes_temp_1 = 0;
	unmarshaledDownloadedBytes_temp_1 = marshaled.___DownloadedBytes_1;
	unmarshaled.___DownloadedBytes_1 = unmarshaledDownloadedBytes_temp_1;
	bool unmarshaledIsDone_temp_2 = false;
	unmarshaledIsDone_temp_2 = static_cast<bool>(marshaled.___IsDone_2);
	unmarshaled.___IsDone_2 = unmarshaledIsDone_temp_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus
IL2CPP_EXTERN_C void DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshal_com_cleanup(DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshaled_com& marshaled)
{
}
// System.Single UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus::get_Percent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DownloadStatus_get_Percent_m0EBC4A32546FB0EA6099462E3D6B7C9168F93985 (DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D* __this, const RuntimeMethod* method) 
{
	float G_B4_0 = 0.0f;
	float G_B6_0 = 0.0f;
	{
		// public float Percent => (TotalBytes > 0) ? ((float)DownloadedBytes / (float)TotalBytes) : (IsDone ? 1.0f : 0f);
		int64_t L_0 = __this->___TotalBytes_0;
		if ((((int64_t)L_0) > ((int64_t)((int64_t)0))))
		{
			goto IL_0020;
		}
	}
	{
		bool L_1 = __this->___IsDone_2;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		G_B4_0 = (0.0f);
		goto IL_001e;
	}

IL_0019:
	{
		G_B4_0 = (1.0f);
	}

IL_001e:
	{
		G_B6_0 = G_B4_0;
		goto IL_002f;
	}

IL_0020:
	{
		int64_t L_2 = __this->___DownloadedBytes_1;
		int64_t L_3 = __this->___TotalBytes_0;
		G_B6_0 = ((float)(((float)L_2)/((float)L_3)));
	}

IL_002f:
	{
		return G_B6_0;
	}
}
IL2CPP_EXTERN_C  float DownloadStatus_get_Percent_m0EBC4A32546FB0EA6099462E3D6B7C9168F93985_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D*>(__this + _offset);
	float _returnValue;
	_returnValue = DownloadStatus_get_Percent_m0EBC4A32546FB0EA6099462E3D6B7C9168F93985(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupOperation__ctor_mAC487B41FFD0ECF87B5042B10198D55E8460FB26 (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1__ctor_m6CD94E72AD05CDA63192C5666C440F2171133C9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_set_Result_m0938D410B6037B8BF1AE34976DDC01534AF33371_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GroupOperation_OnOperationCompleted_m9FFD2AEFFDB99EC7D040F53B0D5B62A60D6D23A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF98DA2A0A3DF3BE5F43A0348232321DF987F37EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string debugName = null;
		__this->___debugName_20 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___debugName_20), (void*)(String_t*)NULL);
		// HashSet<string> m_CachedDependencyLocations = new HashSet<string>();
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03(L_0, HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		__this->___m_CachedDependencyLocations_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CachedDependencyLocations_23), (void*)L_0);
		// public GroupOperation()
		AsyncOperationBase_1__ctor_m6CD94E72AD05CDA63192C5666C440F2171133C9C(__this, AsyncOperationBase_1__ctor_m6CD94E72AD05CDA63192C5666C440F2171133C9C_RuntimeMethod_var);
		// m_InternalOnComplete = OnOperationCompleted;
		Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* L_1 = (Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF*)il2cpp_codegen_object_new(Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mB7E422278A9F89203BFED7F1B8F04DB5F7438D0E(L_1, __this, (intptr_t)((void*)GroupOperation_OnOperationCompleted_m9FFD2AEFFDB99EC7D040F53B0D5B62A60D6D23A7_RuntimeMethod_var), NULL);
		__this->___m_InternalOnComplete_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InternalOnComplete_17), (void*)L_1);
		// Result = new List<AsyncOperationHandle>();
		List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* L_2 = (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843*)il2cpp_codegen_object_new(List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF98DA2A0A3DF3BE5F43A0348232321DF987F37EB(L_2, List_1__ctor_mF98DA2A0A3DF3BE5F43A0348232321DF987F37EB_RuntimeMethod_var);
		AsyncOperationBase_1_set_Result_m0938D410B6037B8BF1AE34976DDC01534AF33371_inline(__this, L_2, AsyncOperationBase_1_set_Result_m0938D410B6037B8BF1AE34976DDC01534AF33371_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::InvokeWaitForCompletion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GroupOperation_InvokeWaitForCompletion_m58F701EB4E389EC5FCA0E834852D3FA88530C284 (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_get_IsDone_mB4817573848671624B8CB8BE1DA5C59284C39135_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tFE6CE62D67D61F940F6BF8AE9D22B703E0E83BC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t62E1C014CE192AAF3D0E63C154CDC53D78D8A17B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* G_B17_0 = NULL;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* G_B16_0 = NULL;
	int32_t G_B21_0 = 0;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* G_B25_0 = NULL;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* G_B24_0 = NULL;
	{
		// if (IsDone || Result == null)
		bool L_0;
		L_0 = AsyncOperationBase_1_get_IsDone_mB4817573848671624B8CB8BE1DA5C59284C39135(__this, AsyncOperationBase_1_get_IsDone_mB4817573848671624B8CB8BE1DA5C59284C39135_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		G_B3_0 = ((((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_00c0;
	}

IL_0020:
	{
		// foreach (var r in Result)
		RuntimeObject* L_3;
		L_3 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::GetEnumerator() */, IEnumerable_1_tFE6CE62D67D61F940F6BF8AE9D22B703E0E83BC1_il2cpp_TypeInfo_var, L_3);
		V_2 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_2;
					if (!L_5)
					{
						goto IL_0067;
					}
				}
				{
					RuntimeObject* L_6 = V_2;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0067:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0053_1;
			}

IL_002f_1:
			{
				// foreach (var r in Result)
				RuntimeObject* L_7 = V_2;
				NullCheck(L_7);
				AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_8;
				L_8 = InterfaceFuncInvoker0< AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Current() */, IEnumerator_1_t62E1C014CE192AAF3D0E63C154CDC53D78D8A17B_il2cpp_TypeInfo_var, L_7);
				V_3 = L_8;
				// r.WaitForCompletion();
				RuntimeObject* L_9;
				L_9 = AsyncOperationHandle_WaitForCompletion_m4F5203EAAEAA1F724EA1220006A43E89A0951784((&V_3), NULL);
				// if (Result == null)
				RuntimeObject* L_10;
				L_10 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
				V_4 = (bool)((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_11 = V_4;
				if (!L_11)
				{
					goto IL_0052_1;
				}
			}
			{
				// return true;
				V_1 = (bool)1;
				goto IL_00c0;
			}

IL_0052_1:
			{
			}

IL_0053_1:
			{
				// foreach (var r in Result)
				RuntimeObject* L_12 = V_2;
				NullCheck(L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_002f_1;
				}
			}
			{
				goto IL_0068;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0068:
	{
		// m_RM?.Update(Time.unscaledDeltaTime);
		ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* L_14 = ((AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D*)__this)->___m_RM_4;
		ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* L_15 = L_14;
		G_B16_0 = L_15;
		if (L_15)
		{
			G_B17_0 = L_15;
			goto IL_0074;
		}
	}
	{
		goto IL_007f;
	}

IL_0074:
	{
		float L_16;
		L_16 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		NullCheck(G_B17_0);
		ResourceManager_Update_mE18FA475CB6F6B7020A53A51B0FAD323819F7B4C(G_B17_0, L_16, NULL);
	}

IL_007f:
	{
		// if (!IsDone && Result != null)
		bool L_17;
		L_17 = AsyncOperationBase_1_get_IsDone_mB4817573848671624B8CB8BE1DA5C59284C39135(__this, AsyncOperationBase_1_get_IsDone_mB4817573848671624B8CB8BE1DA5C59284C39135_RuntimeMethod_var);
		if (L_17)
		{
			goto IL_0092;
		}
	}
	{
		RuntimeObject* L_18;
		L_18 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		G_B21_0 = ((!(((RuntimeObject*)(RuntimeObject*)L_18) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0093;
	}

IL_0092:
	{
		G_B21_0 = 0;
	}

IL_0093:
	{
		V_5 = (bool)G_B21_0;
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_00a0;
		}
	}
	{
		// Execute();
		VirtualActionInvoker0::Invoke(28 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>::Execute() */, __this);
	}

IL_00a0:
	{
		// m_RM?.Update(Time.unscaledDeltaTime);
		ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* L_20 = ((AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D*)__this)->___m_RM_4;
		ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* L_21 = L_20;
		G_B24_0 = L_21;
		if (L_21)
		{
			G_B25_0 = L_21;
			goto IL_00ac;
		}
	}
	{
		goto IL_00b7;
	}

IL_00ac:
	{
		float L_22;
		L_22 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		NullCheck(G_B25_0);
		ResourceManager_Update_mE18FA475CB6F6B7020A53A51B0FAD323819F7B4C(G_B25_0, L_22, NULL);
	}

IL_00b7:
	{
		// return IsDone;
		bool L_23;
		L_23 = AsyncOperationBase_1_get_IsDone_mB4817573848671624B8CB8BE1DA5C59284C39135(__this, AsyncOperationBase_1_get_IsDone_mB4817573848671624B8CB8BE1DA5C59284C39135_RuntimeMethod_var);
		V_1 = L_23;
		goto IL_00c0;
	}

IL_00c0:
	{
		// }
		bool L_24 = V_1;
		return L_24;
	}
}
// UnityEngine.ResourceManagement.Util.IOperationCacheKey UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::UnityEngine.ResourceManagement.AsyncOperations.ICachable.get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GroupOperation_UnityEngine_ResourceManagement_AsyncOperations_ICachable_get_Key_mBE090D49C1F51ACDEB43492606BD9BEEC3E0DC43 (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, const RuntimeMethod* method) 
{
	{
		// IOperationCacheKey ICachable.Key { get; set; }
		RuntimeObject* L_0 = __this->___U3CUnityEngine_ResourceManagement_AsyncOperations_ICachable_KeyU3Ek__BackingField_22;
		return L_0;
	}
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::UnityEngine.ResourceManagement.AsyncOperations.ICachable.set_Key(UnityEngine.ResourceManagement.Util.IOperationCacheKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupOperation_UnityEngine_ResourceManagement_AsyncOperations_ICachable_set_Key_m45EACDDD26430787AC6D4D45297312F87B6BA59D (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// IOperationCacheKey ICachable.Key { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CUnityEngine_ResourceManagement_AsyncOperations_ICachable_KeyU3Ek__BackingField_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUnityEngine_ResourceManagement_AsyncOperations_ICachable_KeyU3Ek__BackingField_22), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::GetDependentOps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GroupOperation_GetDependentOps_m9FE0CB241C9F3630AA74C2C00539CECFD817B1D4 (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return Result;
		RuntimeObject* L_0;
		L_0 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::GetDependencies(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupOperation_GetDependencies_m4C7707C62DB7B67454BFDABC5B2C31BDEC74B395 (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* ___0_deps, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m906B749545799371A47BEEB961CA6EBF2E434001_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// deps.AddRange(Result);
		List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* L_0 = ___0_deps;
		RuntimeObject* L_1;
		L_1 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_AddRange_m906B749545799371A47BEEB961CA6EBF2E434001(L_0, L_1, List_1_AddRange_m906B749545799371A47BEEB961CA6EBF2E434001_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::ReleaseDependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupOperation_ReleaseDependencies_mC61C8336FBDB7D9D6CBFF04E772DDEE94E1650B2 (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	{
		// for (int i = 0; i < Result.Count; i++)
		V_0 = 0;
		goto IL_0036;
	}

IL_0005:
	{
		// if (Result[i].IsValid())
		RuntimeObject* L_0;
		L_0 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_2;
		L_2 = InterfaceFuncInvoker1< AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Item(System.Int32) */, IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var, L_0, L_1);
		V_2 = L_2;
		bool L_3;
		L_3 = AsyncOperationHandle_IsValid_mC57B65EA4D8E084859EF42FD671EDA1E2ED46626((&V_2), NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// Result[i].Release();
		RuntimeObject* L_5;
		L_5 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_7;
		L_7 = InterfaceFuncInvoker1< AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Item(System.Int32) */, IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var, L_5, L_6);
		V_2 = L_7;
		AsyncOperationHandle_Release_mD4ADD2AA46F56753B12E0916FA2A739A3EBB5762((&V_2), NULL);
	}

IL_0032:
	{
		// for (int i = 0; i < Result.Count; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0036:
	{
		// for (int i = 0; i < Result.Count; i++)
		int32_t L_9 = V_0;
		RuntimeObject* L_10;
		L_10 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Count() */, ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var, L_10);
		V_3 = (bool)((((int32_t)L_9) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		// Result.Clear();
		RuntimeObject* L_13;
		L_13 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		NullCheck(L_13);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::Clear() */, ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var, L_13);
		// }
		return;
	}
}
// UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::GetDownloadStatus(System.Collections.Generic.HashSet`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D GroupOperation_GetDownloadStatus_mCC253D27B3D655D0DE72A115047A298D32E6FBFB (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___0_visited, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_get_IsDone_mB4817573848671624B8CB8BE1DA5C59284C39135_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D V_0;
	memset((&V_0), 0, sizeof(V_0));
	DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D V_4;
	memset((&V_4), 0, sizeof(V_4));
	DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// var status = new DownloadStatus() {IsDone = IsDone};
		il2cpp_codegen_initobj((&V_1), sizeof(DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D));
		bool L_0;
		L_0 = AsyncOperationBase_1_get_IsDone_mB4817573848671624B8CB8BE1DA5C59284C39135(__this, AsyncOperationBase_1_get_IsDone_mB4817573848671624B8CB8BE1DA5C59284C39135_RuntimeMethod_var);
		(&V_1)->___IsDone_2 = L_0;
		DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D L_1 = V_1;
		V_0 = L_1;
		// for (int i = 0; i < Result.Count; i++)
		V_2 = 0;
		goto IL_0079;
	}

IL_001c:
	{
		// if (Result[i].IsValid())
		RuntimeObject* L_2;
		L_2 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		int32_t L_3 = V_2;
		NullCheck(L_2);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_4;
		L_4 = InterfaceFuncInvoker1< AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Item(System.Int32) */, IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var, L_2, L_3);
		V_4 = L_4;
		bool L_5;
		L_5 = AsyncOperationHandle_IsValid_mC57B65EA4D8E084859EF42FD671EDA1E2ED46626((&V_4), NULL);
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0074;
		}
	}
	{
		// var depStatus = Result[i].InternalGetDownloadStatus(visited);
		RuntimeObject* L_7;
		L_7 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		int32_t L_8 = V_2;
		NullCheck(L_7);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_9;
		L_9 = InterfaceFuncInvoker1< AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Item(System.Int32) */, IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var, L_7, L_8);
		V_4 = L_9;
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_10 = ___0_visited;
		DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D L_11;
		L_11 = AsyncOperationHandle_InternalGetDownloadStatus_mC00D428E94E347EE6FCD224530016D1F9433B33C((&V_4), L_10, NULL);
		V_5 = L_11;
		// status.DownloadedBytes += depStatus.DownloadedBytes;
		int64_t* L_12 = (int64_t*)(&(&V_0)->___DownloadedBytes_1);
		int64_t* L_13 = L_12;
		int64_t L_14 = *((int64_t*)L_13);
		DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D L_15 = V_5;
		int64_t L_16 = L_15.___DownloadedBytes_1;
		*((int64_t*)L_13) = (int64_t)((int64_t)il2cpp_codegen_add(L_14, L_16));
		// status.TotalBytes += depStatus.TotalBytes;
		int64_t* L_17 = (int64_t*)(&(&V_0)->___TotalBytes_0);
		int64_t* L_18 = L_17;
		int64_t L_19 = *((int64_t*)L_18);
		DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D L_20 = V_5;
		int64_t L_21 = L_20.___TotalBytes_0;
		*((int64_t*)L_18) = (int64_t)((int64_t)il2cpp_codegen_add(L_19, L_21));
	}

IL_0074:
	{
		// for (int i = 0; i < Result.Count; i++)
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0079:
	{
		// for (int i = 0; i < Result.Count; i++)
		int32_t L_23 = V_2;
		RuntimeObject* L_24;
		L_24 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		NullCheck(L_24);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Count() */, ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var, L_24);
		V_6 = (bool)((((int32_t)L_23) < ((int32_t)L_25))? 1 : 0);
		bool L_26 = V_6;
		if (L_26)
		{
			goto IL_001c;
		}
	}
	{
		// return status;
		DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D L_27 = V_0;
		V_7 = L_27;
		goto IL_0092;
	}

IL_0092:
	{
		// }
		DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D L_28 = V_7;
		return L_28;
	}
}
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::DependenciesAreUnchanged(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GroupOperation_DependenciesAreUnchanged_m961C61C0E83B18B91E4C3A589DD5C98C5FA027D9 (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* ___0_deps, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF14B13079BA29D72CF1479C47A523781823A6A79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mEE227741CD024815E1C4AC5DEEF931C18BDDFDF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mED23BA54237489B3A4CB41FAF90C0AD36D02A4AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_mAF52C76F83E02DA4DDF4B21CD4D2910BA7CF157F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5EC3D9DDBF70C3943F3F415E109848FB1BA4F483_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA8C6DC40B44EFB5EC84E036997F5DDE2B4255F96_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Enumerator_tD5B9682CA32C785D58B7B51B5BA570252958ACF5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	{
		// if (m_CachedDependencyLocations.Count != deps.Count) return false;
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = __this->___m_CachedDependencyLocations_23;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = HashSet_1_get_Count_mAF52C76F83E02DA4DDF4B21CD4D2910BA7CF157F_inline(L_0, HashSet_1_get_Count_mAF52C76F83E02DA4DDF4B21CD4D2910BA7CF157F_RuntimeMethod_var);
		List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* L_2 = ___0_deps;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mA8C6DC40B44EFB5EC84E036997F5DDE2B4255F96_inline(L_2, List_1_get_Count_mA8C6DC40B44EFB5EC84E036997F5DDE2B4255F96_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		// if (m_CachedDependencyLocations.Count != deps.Count) return false;
		V_1 = (bool)0;
		goto IL_006e;
	}

IL_001f:
	{
		// foreach (var d in deps)
		List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* L_5 = ___0_deps;
		NullCheck(L_5);
		Enumerator_tD5B9682CA32C785D58B7B51B5BA570252958ACF5 L_6;
		L_6 = List_1_GetEnumerator_m5EC3D9DDBF70C3943F3F415E109848FB1BA4F483(L_5, List_1_GetEnumerator_m5EC3D9DDBF70C3943F3F415E109848FB1BA4F483_RuntimeMethod_var);
		V_2 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF14B13079BA29D72CF1479C47A523781823A6A79((&V_2), Enumerator_Dispose_mF14B13079BA29D72CF1479C47A523781823A6A79_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0050_1;
			}

IL_0029_1:
			{
				// foreach (var d in deps)
				AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_7;
				L_7 = Enumerator_get_Current_mED23BA54237489B3A4CB41FAF90C0AD36D02A4AA_inline((&V_2), Enumerator_get_Current_mED23BA54237489B3A4CB41FAF90C0AD36D02A4AA_RuntimeMethod_var);
				V_3 = L_7;
				// if (!m_CachedDependencyLocations.Contains(d.LocationName))
				HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_8 = __this->___m_CachedDependencyLocations_23;
				String_t* L_9;
				L_9 = AsyncOperationHandle_get_LocationName_mFBCB4F35970F65B67F34263CBBC8949DBD04954F((&V_3), NULL);
				NullCheck(L_8);
				bool L_10;
				L_10 = HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853(L_8, L_9, HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
				V_4 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
				bool L_11 = V_4;
				if (!L_11)
				{
					goto IL_0050_1;
				}
			}
			{
				// return false;
				V_1 = (bool)0;
				goto IL_006e;
			}

IL_0050_1:
			{
				// foreach (var d in deps)
				bool L_12;
				L_12 = Enumerator_MoveNext_mEE227741CD024815E1C4AC5DEEF931C18BDDFDF8((&V_2), Enumerator_MoveNext_mEE227741CD024815E1C4AC5DEEF931C18BDDFDF8_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0029_1;
				}
			}
			{
				goto IL_006a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006a:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_006e;
	}

IL_006e:
	{
		// }
		bool L_13 = V_1;
		return L_13;
	}
}
// System.String UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::get_DebugName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GroupOperation_get_DebugName_m3B4DD1AA206F8FBE96076A01E17258594826B90B (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_ShortenPath_mD1FCF48238D26B32283DBF3159837F321D65F680_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Clear_m0181AAD373CCA0B6C26FE43A802121B3C0DE5F90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF98DA2A0A3DF3BE5F43A0348232321DF987F37EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA8C6DC40B44EFB5EC84E036997F5DDE2B4255F96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m09E5100907049D55AAD968065B93D7E92A6CF0F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9EA1B927738BD781758DEAA84C771341FBF9E5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE020383F8C0765B1821DC0A9066E8570DB0904E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D V_6;
	memset((&V_6), 0, sizeof(V_6));
	String_t* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B5_0 = 0;
	{
		// List<AsyncOperationHandle> deps = new List<AsyncOperationHandle>();
		List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* L_0 = (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843*)il2cpp_codegen_object_new(List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF98DA2A0A3DF3BE5F43A0348232321DF987F37EB(L_0, List_1__ctor_mF98DA2A0A3DF3BE5F43A0348232321DF987F37EB_RuntimeMethod_var);
		V_0 = L_0;
		// GetDependencies(deps);
		List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* L_1 = V_0;
		VirtualActionInvoker1< List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* >::Invoke(32 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>::GetDependencies(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>) */, __this, L_1);
		// if (deps.Count == 0)
		List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mA8C6DC40B44EFB5EC84E036997F5DDE2B4255F96_inline(L_2, List_1_get_Count_mA8C6DC40B44EFB5EC84E036997F5DDE2B4255F96_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// return "Dependencies";
		V_3 = _stringLiteralA9EA1B927738BD781758DEAA84C771341FBF9E5E;
		goto IL_0134;
	}

IL_0027:
	{
		// if (debugName != null && DependenciesAreUnchanged(deps))
		String_t* L_5 = __this->___debugName_20;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* L_6 = V_0;
		bool L_7;
		L_7 = GroupOperation_DependenciesAreUnchanged_m961C61C0E83B18B91E4C3A589DD5C98C5FA027D9(__this, L_6, NULL);
		G_B5_0 = ((int32_t)(L_7));
		goto IL_0039;
	}

IL_0038:
	{
		G_B5_0 = 0;
	}

IL_0039:
	{
		V_4 = (bool)G_B5_0;
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		// return debugName;
		String_t* L_9 = __this->___debugName_20;
		V_3 = L_9;
		goto IL_0134;
	}

IL_004b:
	{
		// m_CachedDependencyLocations.Clear();
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_10 = __this->___m_CachedDependencyLocations_23;
		NullCheck(L_10);
		HashSet_1_Clear_m0181AAD373CCA0B6C26FE43A802121B3C0DE5F90(L_10, HashSet_1_Clear_m0181AAD373CCA0B6C26FE43A802121B3C0DE5F90_RuntimeMethod_var);
		// string toBeDisplayed = "Dependencies [";
		V_1 = _stringLiteralE020383F8C0765B1821DC0A9066E8570DB0904E8;
		// for (var i = 0; i < deps.Count; i++)
		V_5 = 0;
		goto IL_0105;
	}

IL_0065:
	{
		// var d = deps[i];
		List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* L_11 = V_0;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_13;
		L_13 = List_1_get_Item_m09E5100907049D55AAD968065B93D7E92A6CF0F3(L_11, L_12, List_1_get_Item_m09E5100907049D55AAD968065B93D7E92A6CF0F3_RuntimeMethod_var);
		V_6 = L_13;
		// var locationString = d.LocationName;
		String_t* L_14;
		L_14 = AsyncOperationHandle_get_LocationName_mFBCB4F35970F65B67F34263CBBC8949DBD04954F((&V_6), NULL);
		V_7 = L_14;
		// m_CachedDependencyLocations.Add(locationString);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_15 = __this->___m_CachedDependencyLocations_23;
		String_t* L_16 = V_7;
		NullCheck(L_15);
		bool L_17;
		L_17 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_15, L_16, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		// if (locationString == null)
		String_t* L_18 = V_7;
		V_8 = (bool)((((RuntimeObject*)(String_t*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_8;
		if (!L_19)
		{
			goto IL_0094;
		}
	}
	{
		// continue;
		goto IL_00ff;
	}

IL_0094:
	{
		// if (locationString.Length > k_MaxDisplayedLocationLength)
		String_t* L_20 = V_7;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_20, NULL);
		V_9 = (bool)((((int32_t)L_21) > ((int32_t)((int32_t)45)))? 1 : 0);
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00d3;
		}
	}
	{
		// locationString = AsyncOperationBase<object>.ShortenPath(locationString, true);
		String_t* L_23 = V_7;
		String_t* L_24;
		L_24 = AsyncOperationBase_1_ShortenPath_mD1FCF48238D26B32283DBF3159837F321D65F680(L_23, (bool)1, AsyncOperationBase_1_ShortenPath_mD1FCF48238D26B32283DBF3159837F321D65F680_RuntimeMethod_var);
		V_7 = L_24;
		// locationString = locationString.Substring(0, Math.Min(k_MaxDisplayedLocationLength, locationString.Length)) + "...";
		String_t* L_25 = V_7;
		String_t* L_26 = V_7;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_26, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)45), L_27, NULL);
		NullCheck(L_25);
		String_t* L_29;
		L_29 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_25, 0, L_28, NULL);
		String_t* L_30;
		L_30 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_29, _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A, NULL);
		V_7 = L_30;
	}

IL_00d3:
	{
		// if (i == deps.Count - 1)
		int32_t L_31 = V_5;
		List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = List_1_get_Count_mA8C6DC40B44EFB5EC84E036997F5DDE2B4255F96_inline(L_32, List_1_get_Count_mA8C6DC40B44EFB5EC84E036997F5DDE2B4255F96_RuntimeMethod_var);
		V_10 = (bool)((((int32_t)L_31) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_33, 1))))? 1 : 0);
		bool L_34 = V_10;
		if (!L_34)
		{
			goto IL_00f0;
		}
	}
	{
		// toBeDisplayed += locationString;
		String_t* L_35 = V_1;
		String_t* L_36 = V_7;
		String_t* L_37;
		L_37 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_35, L_36, NULL);
		V_1 = L_37;
		goto IL_00fe;
	}

IL_00f0:
	{
		// toBeDisplayed += locationString + ", ";
		String_t* L_38 = V_1;
		String_t* L_39 = V_7;
		String_t* L_40;
		L_40 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_38, L_39, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		V_1 = L_40;
	}

IL_00fe:
	{
	}

IL_00ff:
	{
		// for (var i = 0; i < deps.Count; i++)
		int32_t L_41 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_0105:
	{
		// for (var i = 0; i < deps.Count; i++)
		int32_t L_42 = V_5;
		List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* L_43 = V_0;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = List_1_get_Count_mA8C6DC40B44EFB5EC84E036997F5DDE2B4255F96_inline(L_43, List_1_get_Count_mA8C6DC40B44EFB5EC84E036997F5DDE2B4255F96_RuntimeMethod_var);
		V_11 = (bool)((((int32_t)L_42) < ((int32_t)L_44))? 1 : 0);
		bool L_45 = V_11;
		if (L_45)
		{
			goto IL_0065;
		}
	}
	{
		// toBeDisplayed += "]";
		String_t* L_46 = V_1;
		String_t* L_47;
		L_47 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_46, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		V_1 = L_47;
		// debugName = toBeDisplayed;
		String_t* L_48 = V_1;
		__this->___debugName_20 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___debugName_20), (void*)L_48);
		// return debugName;
		String_t* L_49 = __this->___debugName_20;
		V_3 = L_49;
		goto IL_0134;
	}

IL_0134:
	{
		// }
		String_t* L_50 = V_3;
		return L_50;
	}
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupOperation_Execute_mDACD8D19DE8A2916CC5D12093AC39E7709C826DD (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	{
		// m_LoadedCount = 0;
		__this->___m_LoadedCount_18 = 0;
		// for (int i = 0; i < Result.Count; i++)
		V_0 = 0;
		goto IL_0055;
	}

IL_000c:
	{
		// if (Result[i].IsDone)
		RuntimeObject* L_0;
		L_0 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_2;
		L_2 = InterfaceFuncInvoker1< AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Item(System.Int32) */, IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var, L_0, L_1);
		V_2 = L_2;
		bool L_3;
		L_3 = AsyncOperationHandle_get_IsDone_m55E07BF92CC2979A9BBFD8F5B97DCCD52DA1326A((&V_2), NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		// m_LoadedCount++;
		int32_t L_5 = __this->___m_LoadedCount_18;
		__this->___m_LoadedCount_18 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		goto IL_0050;
	}

IL_0035:
	{
		// Result[i].Completed += m_InternalOnComplete;
		RuntimeObject* L_6;
		L_6 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_8;
		L_8 = InterfaceFuncInvoker1< AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Item(System.Int32) */, IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var, L_6, L_7);
		V_2 = L_8;
		Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* L_9 = __this->___m_InternalOnComplete_17;
		AsyncOperationHandle_add_Completed_mD5633623ADF00C97B6A1EE712E6654452F64B2E0((&V_2), L_9, NULL);
	}

IL_0050:
	{
		// for (int i = 0; i < Result.Count; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		// for (int i = 0; i < Result.Count; i++)
		int32_t L_11 = V_0;
		RuntimeObject* L_12;
		L_12 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Count() */, ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var, L_12);
		V_3 = (bool)((((int32_t)L_11) < ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_3;
		if (L_14)
		{
			goto IL_000c;
		}
	}
	{
		// CompleteIfDependenciesComplete();
		GroupOperation_CompleteIfDependenciesComplete_m0CBDC4B0BC6DEB0F32D2E9884F99D6EA4FBFD346(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::CompleteIfDependenciesComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupOperation_CompleteIfDependenciesComplete_m0CBDC4B0BC6DEB0F32D2E9884F99D6EA4FBFD346 (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_Complete_m34BA93C8DD45D0DDA01AD80F3B3E13AD552B24C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral820BFB423CB8C20E825524A0B74585E3BEEC752B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	{
		// if (m_LoadedCount == Result.Count)
		int32_t L_0 = __this->___m_LoadedCount_18;
		RuntimeObject* L_1;
		L_1 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Count() */, ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var, L_1);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_00cf;
		}
	}
	{
		// bool success = true;
		V_1 = (bool)1;
		// OperationException ex = null;
		V_2 = (OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434*)NULL;
		// if (!m_Settings.HasFlag(GroupOperationSettings.AllowFailedDependencies))
		int32_t L_4 = __this->___m_Settings_19;
		int32_t L_5 = L_4;
		int32_t L_6 = 2;
		bool L_7 = il2cpp_codegen_enum_has_flag((int32_t)L_5, (int32_t)L_6);
		V_3 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_00a9;
		}
	}
	{
		// for (int i = 0; i < Result.Count; i++)
		V_4 = 0;
		goto IL_0093;
	}

IL_0043:
	{
		// if (Result[i].Status != AsyncOperationStatus.Succeeded)
		RuntimeObject* L_9;
		L_9 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		int32_t L_10 = V_4;
		NullCheck(L_9);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_11;
		L_11 = InterfaceFuncInvoker1< AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Item(System.Int32) */, IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var, L_9, L_10);
		V_6 = L_11;
		int32_t L_12;
		L_12 = AsyncOperationHandle_get_Status_mD5FB502808777A3C88880942DB9595C614CF9B0A((&V_6), NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_12) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_008c;
		}
	}
	{
		// success = false;
		V_1 = (bool)0;
		// ex = new OperationException("GroupOperation failed because one of its dependencies failed", Result[i].OperationException);
		RuntimeObject* L_14;
		L_14 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		int32_t L_15 = V_4;
		NullCheck(L_14);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_16;
		L_16 = InterfaceFuncInvoker1< AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Item(System.Int32) */, IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var, L_14, L_15);
		V_6 = L_16;
		Exception_t* L_17;
		L_17 = AsyncOperationHandle_get_OperationException_m531FC4DC2E215075C0EA7CE135FF1D68F6049270((&V_6), NULL);
		OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434* L_18 = (OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434*)il2cpp_codegen_object_new(OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		OperationException__ctor_m86A0486864C0BBA58E2688D3FB650CAB1D616D59(L_18, _stringLiteral820BFB423CB8C20E825524A0B74585E3BEEC752B, L_17, NULL);
		V_2 = L_18;
		// break;
		goto IL_00a8;
	}

IL_008c:
	{
		// for (int i = 0; i < Result.Count; i++)
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0093:
	{
		// for (int i = 0; i < Result.Count; i++)
		int32_t L_20 = V_4;
		RuntimeObject* L_21;
		L_21 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Count() */, ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var, L_21);
		V_7 = (bool)((((int32_t)L_20) < ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_7;
		if (L_23)
		{
			goto IL_0043;
		}
	}

IL_00a8:
	{
	}

IL_00a9:
	{
		// Complete(Result, success, ex, m_Settings.HasFlag(GroupOperationSettings.ReleaseDependenciesOnFailure));
		RuntimeObject* L_24;
		L_24 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		bool L_25 = V_1;
		OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434* L_26 = V_2;
		int32_t L_27 = __this->___m_Settings_19;
		int32_t L_28 = L_27;
		int32_t L_29 = 1;
		bool L_30 = il2cpp_codegen_enum_has_flag((int32_t)L_28, (int32_t)L_29);
		AsyncOperationBase_1_Complete_m34BA93C8DD45D0DDA01AD80F3B3E13AD552B24C8(__this, L_24, L_25, L_26, L_30, AsyncOperationBase_1_Complete_m34BA93C8DD45D0DDA01AD80F3B3E13AD552B24C8_RuntimeMethod_var);
	}

IL_00cf:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupOperation_Destroy_m16201058C128455D5672E019015B4657ABD9614A (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, const RuntimeMethod* method) 
{
	{
		// ReleaseDependencies();
		VirtualActionInvoker0::Invoke(34 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>::ReleaseDependencies() */, __this);
		// }
		return;
	}
}
// System.Single UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::get_Progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GroupOperation_get_Progress_m5CB53EFD6FAD043CE2D65F8028A2579F8A51B5AC (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	float V_5 = 0.0f;
	{
		// float total = 0f;
		V_0 = (0.0f);
		// for (int i = 0; i < Result.Count; i++)
		V_1 = 0;
		goto IL_0040;
	}

IL_000b:
	{
		// var handle = Result[i];
		RuntimeObject* L_0;
		L_0 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		int32_t L_1 = V_1;
		NullCheck(L_0);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_2;
		L_2 = InterfaceFuncInvoker1< AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Item(System.Int32) */, IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var, L_0, L_1);
		V_2 = L_2;
		// if (!handle.IsDone)
		bool L_3;
		L_3 = AsyncOperationHandle_get_IsDone_m55E07BF92CC2979A9BBFD8F5B97DCCD52DA1326A((&V_2), NULL);
		V_3 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// total += handle.PercentComplete;
		float L_5 = V_0;
		float L_6;
		L_6 = AsyncOperationHandle_get_PercentComplete_mB5B48174489343D707D9E4A90BAFE24658D135EC((&V_2), NULL);
		V_0 = ((float)il2cpp_codegen_add(L_5, L_6));
		goto IL_003b;
	}

IL_0033:
	{
		// total++;
		float L_7 = V_0;
		V_0 = ((float)il2cpp_codegen_add(L_7, (1.0f)));
	}

IL_003b:
	{
		// for (int i = 0; i < Result.Count; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0040:
	{
		// for (int i = 0; i < Result.Count; i++)
		int32_t L_9 = V_1;
		RuntimeObject* L_10;
		L_10 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Count() */, ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var, L_10);
		V_4 = (bool)((((int32_t)L_9) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_000b;
		}
	}
	{
		// return total / Result.Count;
		float L_13 = V_0;
		RuntimeObject* L_14;
		L_14 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		NullCheck(L_14);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Count() */, ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var, L_14);
		V_5 = ((float)(L_13/((float)L_15)));
		goto IL_0066;
	}

IL_0066:
	{
		// }
		float L_16 = V_5;
		return L_16;
	}
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::Init(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupOperation_Init_m8C19E45ECB5A7DB7895A83EE0F918CEF60FD932E (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* ___0_operations, bool ___1_releaseDependenciesOnFailure, bool ___2_allowFailedDependencies, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_set_Result_m0938D410B6037B8BF1AE34976DDC01534AF33371_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m279E5AA525FEFA2E8D2689C61D387586D5D7902B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* G_B2_0 = NULL;
	GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* G_B3_1 = NULL;
	{
		// Result = new List<AsyncOperationHandle>(operations);
		List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* L_0 = ___0_operations;
		List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* L_1 = (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843*)il2cpp_codegen_object_new(List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m279E5AA525FEFA2E8D2689C61D387586D5D7902B(L_1, L_0, List_1__ctor_m279E5AA525FEFA2E8D2689C61D387586D5D7902B_RuntimeMethod_var);
		AsyncOperationBase_1_set_Result_m0938D410B6037B8BF1AE34976DDC01534AF33371_inline(__this, L_1, AsyncOperationBase_1_set_Result_m0938D410B6037B8BF1AE34976DDC01534AF33371_RuntimeMethod_var);
		// m_Settings = releaseDependenciesOnFailure ? GroupOperationSettings.ReleaseDependenciesOnFailure : GroupOperationSettings.None;
		bool L_2 = ___1_releaseDependenciesOnFailure;
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0016:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_Settings_19 = G_B3_0;
		// if (allowFailedDependencies)
		bool L_3 = ___2_allowFailedDependencies;
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// m_Settings |= GroupOperationSettings.AllowFailedDependencies;
		int32_t L_5 = __this->___m_Settings_19;
		__this->___m_Settings_19 = ((int32_t)((int32_t)L_5|2));
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::Init(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>,UnityEngine.ResourceManagement.AsyncOperations.GroupOperation/GroupOperationSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupOperation_Init_m63F2FE2DAA01637218A993C4008090339ECC1EC0 (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* ___0_operations, int32_t ___1_settings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_set_Result_m0938D410B6037B8BF1AE34976DDC01534AF33371_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m279E5AA525FEFA2E8D2689C61D387586D5D7902B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Result = new List<AsyncOperationHandle>(operations);
		List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* L_0 = ___0_operations;
		List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* L_1 = (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843*)il2cpp_codegen_object_new(List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m279E5AA525FEFA2E8D2689C61D387586D5D7902B(L_1, L_0, List_1__ctor_m279E5AA525FEFA2E8D2689C61D387586D5D7902B_RuntimeMethod_var);
		AsyncOperationBase_1_set_Result_m0938D410B6037B8BF1AE34976DDC01534AF33371_inline(__this, L_1, AsyncOperationBase_1_set_Result_m0938D410B6037B8BF1AE34976DDC01534AF33371_RuntimeMethod_var);
		// m_Settings = settings;
		int32_t L_2 = ___1_settings;
		__this->___m_Settings_19 = L_2;
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::OnOperationCompleted(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupOperation_OnOperationCompleted_m9FFD2AEFFDB99EC7D040F53B0D5B62A60D6D23A7 (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___0_op, const RuntimeMethod* method) 
{
	{
		// m_LoadedCount++;
		int32_t L_0 = __this->___m_LoadedCount_18;
		__this->___m_LoadedCount_18 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// CompleteIfDependenciesComplete();
		GroupOperation_CompleteIfDependenciesComplete_m0CBDC4B0BC6DEB0F32D2E9884F99D6EA4FBFD346(__this, NULL);
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
// System.Void UnityEngine.ResourceManagement.AsyncOperations.UnityWebRequestOperation::.ctor(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequestOperation__ctor_mA83D2F7455DD870CD8AF192415C0DFD29F054F62 (UnityWebRequestOperation_t3FCA9B5B786DBF58B96FF885A08594DE60873BBD* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___0_webRequest, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1__ctor_m263F8B1ABB3B3020DBB0D7A29C7F7539E8A76021_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnityWebRequestOperation(UnityWebRequest webRequest)
		AsyncOperationBase_1__ctor_m263F8B1ABB3B3020DBB0D7A29C7F7539E8A76021(__this, AsyncOperationBase_1__ctor_m263F8B1ABB3B3020DBB0D7A29C7F7539E8A76021_RuntimeMethod_var);
		// m_UWR = webRequest;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___0_webRequest;
		__this->___m_UWR_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UWR_17), (void*)L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.UnityWebRequestOperation::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequestOperation_Execute_m6CDFDEA8F294580DD53D1C9D7B27872BBFA42115 (UnityWebRequestOperation_t3FCA9B5B786DBF58B96FF885A08594DE60873BBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestOperation_U3CExecuteU3Eb__2_0_mBFE21A77BDFDB2293AFCA6AD6CBE77D766921B4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_UWR.SendWebRequest().completed += (request) => { Complete(m_UWR, string.IsNullOrEmpty(m_UWR.error), m_UWR.error); };
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___m_UWR_17;
		NullCheck(L_0);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_1;
		L_1 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_0, NULL);
		Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* L_2 = (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*)il2cpp_codegen_object_new(Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D(L_2, __this, (intptr_t)((void*)UnityWebRequestOperation_U3CExecuteU3Eb__2_0_mBFE21A77BDFDB2293AFCA6AD6CBE77D766921B4A_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.UnityWebRequestOperation::<Execute>b__2_0(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequestOperation_U3CExecuteU3Eb__2_0_mBFE21A77BDFDB2293AFCA6AD6CBE77D766921B4A (UnityWebRequestOperation_t3FCA9B5B786DBF58B96FF885A08594DE60873BBD* __this, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___0_request, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_Complete_mA64801931999FC6D8355A5FDE500C47FAAF00E25_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_UWR.SendWebRequest().completed += (request) => { Complete(m_UWR, string.IsNullOrEmpty(m_UWR.error), m_UWR.error); };
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___m_UWR_17;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___m_UWR_17;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_1, NULL);
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = __this->___m_UWR_17;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_4, NULL);
		AsyncOperationBase_1_Complete_mA64801931999FC6D8355A5FDE500C47FAAF00E25(__this, L_0, L_3, L_5, AsyncOperationBase_1_Complete_mA64801931999FC6D8355A5FDE500C47FAAF00E25_RuntimeMethod_var);
		// m_UWR.SendWebRequest().completed += (request) => { Complete(m_UWR, string.IsNullOrEmpty(m_UWR.error), m_UWR.error); };
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mFAD2E8B344DDEDAC8E40E83616A8076B83831241_gshared_inline (Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* __this, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD24A56BF888EF741DFE7EBDC8475ECE6F5A74237_gshared_inline (List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = __this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95* L_3 = __this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB4257A2B4551959CAC74AAC14A4144D501D0A7D5_gshared_inline (List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9* __this, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___0_item, const RuntimeMethod* method) 
{
	DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95* L_6 = V_0;
		int32_t L_7 = V_1;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274)L_8);
		return;
	}

IL_0034:
	{
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_9 = ___0_item;
		((  void (*) (List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9*, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationBase_1_set_Result_m34F12D5AF676CCB4F67BBB1B2608F46833A59257_gshared_inline (AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TObject Result { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CResultU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationBase_1_get_Result_mCCD9D27A9D37A11B520A6D95B4EB191835B8C368_gshared_inline (AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* __this, const RuntimeMethod* method) 
{
	{
		// public TObject Result { get; set; }
		RuntimeObject* L_0 = __this->___U3CResultU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mA8C6DC40B44EFB5EC84E036997F5DDE2B4255F96_gshared_inline (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D Enumerator_get_Current_mED23BA54237489B3A4CB41FAF90C0AD36D02A4AA_gshared_inline (Enumerator_tD5B9682CA32C785D58B7B51B5BA570252958ACF5* __this, const RuntimeMethod* method) 
{
	{
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_0 = __this->____current_3;
		return L_0;
	}
}