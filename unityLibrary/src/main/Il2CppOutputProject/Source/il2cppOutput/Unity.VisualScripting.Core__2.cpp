﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>>
struct Dictionary_2_tEDE1812AF080D310B7E71B3DB1C085858D812133;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A;
// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>>
struct Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F;
// System.Collections.Generic.Dictionary`2<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Attribute>
struct Dictionary_2_t6F7C5D1D47078EB234FB37466D2A9394EAA78700;
// System.Collections.Generic.Dictionary`2<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Object>
struct Dictionary_2_t12EBB875CF54482585C346EFBACF37B33E3D6F76;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.Type,System.String>
struct Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121;
// System.Collections.Generic.IDictionary`2<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Attribute>
struct IDictionary_2_tF2ECBB7A1A6D5DBB7D72E7B2F8E55A1159709C07;
// System.Collections.Generic.IEnumerable`1<System.Attribute>
struct IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.IEqualityComparer`1<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery>
struct IEqualityComparer_1_t99E29E1E84DF834D2CD5B6CA55F1CD9A7EC637D6;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Type>
struct KeyCollection_t0E4390205378461F38BE857216C35DA687D245FA;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>>
struct KeyCollection_tBD90273CB39F445411EE482CEC310A1082B0243A;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Attribute>
struct KeyCollection_t710C6D24841A0513DEF3339081AEDEEEA082B082;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>
struct List_1_t7182E9791DD2596935EC5EBF901871476E91B95D;
// System.Collections.Generic.Queue`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>
struct Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Type>
struct ValueCollection_tA14BD0EE42AEA7EBFF2E10776A87B14C678C2E11;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>>
struct ValueCollection_t454F2DB878B0EFAB63E7E1C92A7F0D126981E341;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Attribute>
struct ValueCollection_t4FAB54BBE698E087FF06EEB537BD0531AF9E8C26;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Type>[]
struct EntryU5BU5D_t544267CEF10C325101E064C4EC137C5A1ADC3D92;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>>[]
struct EntryU5BU5D_t607696182CD414246EE5AE0D9B0CA6E932790F3F;
// System.Collections.Generic.Dictionary`2/Entry<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Attribute>[]
struct EntryU5BU5D_t930DFD181E8E0F665574C26E7B93C553B56BDEAF;
// System.Attribute[]
struct AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.VisualScripting.FullSerializer.Internal.fsVersionedType[]
struct fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.VisualScripting.FullSerializer.fsDuplicateVersionNameException
struct fsDuplicateVersionNameException_tAC800EE7692EB781843D91C2158A431897E11640;
// Unity.VisualScripting.FullSerializer.fsMissingVersionConstructorException
struct fsMissingVersionConstructorException_tE6DE04E84EDA9AFAB8D627E6BCA19BE39C7235DE;
// Unity.VisualScripting.FullSerializer.fsObjectAttribute
struct fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38;
// Unity.VisualScripting.FullSerializer.Internal.fsVersionedType
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8;
// Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager/ObjectReferenceEqualityComparator
struct ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24;
// Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQueryComparator
struct AttributeQueryComparator_t2FBE0BC91DB3A9551CE2E00214ADEFA9000EA7E1;
// Unity.VisualScripting.FullSerializer.Internal.fsTypeExtensions/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tAB0840C77123F2A797DA2837B414E58DEE35E9A9;

IL2CPP_EXTERN_C RuntimeClass* AttributeQueryComparator_t2FBE0BC91DB3A9551CE2E00214ADEFA9000EA7E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6F7C5D1D47078EB234FB37466D2A9394EAA78700_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tF2ECBB7A1A6D5DBB7D72E7B2F8E55A1159709C07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7182E9791DD2596935EC5EBF901871476E91B95D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_tAB0840C77123F2A797DA2837B414E58DEE35E9A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsDuplicateVersionNameException_tAC800EE7692EB781843D91C2158A431897E11640_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsMissingVersionConstructorException_tE6DE04E84EDA9AFAB8D627E6BCA19BE39C7235DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7____MemberInfo_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8____Ancestors_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8;
IL2CPP_EXTERN_C String_t* _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72;
IL2CPP_EXTERN_C String_t* _stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE;
IL2CPP_EXTERN_C String_t* _stringLiteral302E7C11D8C5F5B4DC0CB0C031B76B22322E35FE;
IL2CPP_EXTERN_C String_t* _stringLiteral4600E7CD4FD5EB039DB7A0180E7A8E86534BAA24;
IL2CPP_EXTERN_C String_t* _stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2;
IL2CPP_EXTERN_C String_t* _stringLiteral6ECB47BAE746457DBE91D0BA044A27960D4563D9;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteral7DAECB44011C6849DA19ADB265B52E7819342CB7;
IL2CPP_EXTERN_C String_t* _stringLiteral8CFACA9928DEA240B27CC5AE59150FBE2C0E96B6;
IL2CPP_EXTERN_C String_t* _stringLiteral99672067F54E936644EC9C19FECCD6680688628C;
IL2CPP_EXTERN_C String_t* _stringLiteralA7504EF46F36160E7DBF3DDCF3D029AD4817D3E6;
IL2CPP_EXTERN_C String_t* _stringLiteralB4AFA59984E170FBE2C100DAB9667B97DEBC0E55;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE10C348A0C2B1041ABA9463F48E12ADD6FCE6AA4;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF63A36CE5FB4A7C8B148AB4B8427E8FF5A711A65;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m4EC9A321B5DBDCB0E9249FFE9074D45472E5D933_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mC7D09AD7C3ECF89B60DA6860146520364EB8405C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9CFE7D3EA7000C67AD7CA81BB321AA10E1469FE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC2BE576BC0A6111C417951E5B8D2B17B28D6E3E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mEE2A06608BDDA14C7170B0039FF13E2DCE84EEE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mF86E918079AEE87DD62ADFBB36F4135E40F2E24E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisType_t_m73AC0FF907FFC6B1E9B1C9E8804176B00EB92517_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisType_t_TisString_t_m502CBD7F0EB7537D4C51DA8071B417FC79622BBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Skip_TisType_t_m7D71748DB6853797A890979775BC2B668679D174_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m1386E5D9BE2299D956F8334023BB11BC76318258_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAF53B32DBF05898F4578B6DA990EAF6492B8366F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9E93111D8C1F56BE86EFCF88046DA5F7C5B95E92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m54E80CEB7DA8D9BE61571B0F602A47B14C0FC0C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m18D26287FE9A32E930D02B66939DFB31D5FCF78F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mF9F0CCD361DD36335F701637DB0A91CDFCD40E19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m651F8A9D673A33075773C8090B4EA59E2C4916BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CCSharpNameU3Eb__0_mB271DB9009C764D4CB33A03876DB554A4EEFB2C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsOption_Just_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_m2924676A18A4C69DA6F8C6EEB7A1DAFA576EB5B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsPortableReflection_GetAttribute_TisfsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38_m05C71253753EF477CA25996DA4B7A36E67881A2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsVersionManager_GetVersionedType_m4CF940685782769880C5341A1C3D2FC703906484_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsVersionManager_VerifyConstructors_m8411C5605527031779BFE91B425DF200A968ACD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsVersionManager_VerifyUniqueVersionStrings_m930312E5E49A7FEFFAED1994F0B9633BC9BE4276_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8;;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com;;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke;;

struct AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1;
struct ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A;
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053;
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t544267CEF10C325101E064C4EC137C5A1ADC3D92* ____entries_1;
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
	KeyCollection_t0E4390205378461F38BE857216C35DA687D245FA* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA14BD0EE42AEA7EBFF2E10776A87B14C678C2E11* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>>
struct Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t607696182CD414246EE5AE0D9B0CA6E932790F3F* ____entries_1;
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
	KeyCollection_tBD90273CB39F445411EE482CEC310A1082B0243A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t454F2DB878B0EFAB63E7E1C92A7F0D126981E341* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Attribute>
struct Dictionary_2_t6F7C5D1D47078EB234FB37466D2A9394EAA78700  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t930DFD181E8E0F665574C26E7B93C553B56BDEAF* ____entries_1;
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
	KeyCollection_t710C6D24841A0513DEF3339081AEDEEEA082B082* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t4FAB54BBE698E087FF06EEB537BD0531AF9E8C26* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>
struct List_1_t7182E9791DD2596935EC5EBF901871476E91B95D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.Queue`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>
struct Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// Unity.VisualScripting.FullSerializer.Internal.fsOption
struct fsOption_t4278BEF99FB996B0A86CFD73812F3B6AE3D94E9C  : public RuntimeObject
{
};

// Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection
struct fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3  : public RuntimeObject
{
};

// Unity.VisualScripting.FullSerializer.Internal.fsTypeExtensions
struct fsTypeExtensions_t2F9B4DAD3A3BE02A6A45CB2FA315123061975E60  : public RuntimeObject
{
};

// Unity.VisualScripting.FullSerializer.Internal.fsVersionManager
struct fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3  : public RuntimeObject
{
};

// Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager/ObjectReferenceEqualityComparator
struct ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24  : public RuntimeObject
{
};

// Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQueryComparator
struct AttributeQueryComparator_t2FBE0BC91DB3A9551CE2E00214ADEFA9000EA7E1  : public RuntimeObject
{
};

// Unity.VisualScripting.FullSerializer.Internal.fsTypeExtensions/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tAB0840C77123F2A797DA2837B414E58DEE35E9A9  : public RuntimeObject
{
	// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsTypeExtensions/<>c__DisplayClass2_0::includeNamespace
	bool ___includeNamespace_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
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

// Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 
{
	// System.Boolean Unity.VisualScripting.FullSerializer.fsResult::_success
	bool ____success_1;
	// System.Collections.Generic.List`1<System.String> Unity.VisualScripting.FullSerializer.fsResult::_messages
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};
// Native definition for P/Invoke marshalling of Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_pinvoke
{
	int32_t ____success_1;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};
// Native definition for COM marshalling of Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_com
{
	int32_t ____success_1;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};

// Unity.VisualScripting.FullSerializer.Internal.fsVersionedType
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 
{
	// Unity.VisualScripting.FullSerializer.Internal.fsVersionedType[] Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::Ancestors
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* ___Ancestors_0;
	// System.String Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::VersionString
	String_t* ___VersionString_1;
	// System.Type Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::ModelType
	Type_t* ___ModelType_2;
};
// Native definition for P/Invoke marshalling of Unity.VisualScripting.FullSerializer.Internal.fsVersionedType
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke* ___Ancestors_0;
	char* ___VersionString_1;
	Type_t* ___ModelType_2;
};
// Native definition for COM marshalling of Unity.VisualScripting.FullSerializer.Internal.fsVersionedType
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com* ___Ancestors_0;
	Il2CppChar* ___VersionString_1;
	Type_t* ___ModelType_2;
};

// Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery
struct AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 
{
	// System.Reflection.MemberInfo Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery::MemberInfo
	MemberInfo_t* ___MemberInfo_0;
	// System.Type Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery::AttributeType
	Type_t* ___AttributeType_1;
};
// Native definition for P/Invoke marshalling of Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery
struct AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_marshaled_pinvoke
{
	MemberInfo_t* ___MemberInfo_0;
	Type_t* ___AttributeType_1;
};
// Native definition for COM marshalling of Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery
struct AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_marshaled_com
{
	MemberInfo_t* ___MemberInfo_0;
	Type_t* ___AttributeType_1;
};

// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>
struct fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A 
{
	// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1::_hasValue
	bool ____hasValue_0;
	// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1::_value
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ____value_1;
};

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
};

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB  : public MethodBase_t
{
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

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// System.Reflection.ParameterAttributes
struct ParameterAttributes_tDAEC8B3C5986B042F8F9B0845505D0FC15F92E68 
{
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Unity.VisualScripting.FullSerializer.fsMemberSerialization
struct fsMemberSerialization_t3F89526001C3843086162E32D48E8377998AB142 
{
	// System.Int32 Unity.VisualScripting.FullSerializer.fsMemberSerialization::value__
	int32_t ___value___2;
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

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// Unity.VisualScripting.FullSerializer.fsDuplicateVersionNameException
struct fsDuplicateVersionNameException_tAC800EE7692EB781843D91C2158A431897E11640  : public Exception_t
{
};

// Unity.VisualScripting.FullSerializer.fsMissingVersionConstructorException
struct fsMissingVersionConstructorException_tE6DE04E84EDA9AFAB8D627E6BCA19BE39C7235DE  : public Exception_t
{
};

// Unity.VisualScripting.FullSerializer.fsObjectAttribute
struct fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Type[] Unity.VisualScripting.FullSerializer.fsObjectAttribute::PreviousModels
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___PreviousModels_0;
	// System.String Unity.VisualScripting.FullSerializer.fsObjectAttribute::VersionString
	String_t* ___VersionString_1;
	// Unity.VisualScripting.FullSerializer.fsMemberSerialization Unity.VisualScripting.FullSerializer.fsObjectAttribute::MemberSerialization
	int32_t ___MemberSerialization_2;
	// System.Type Unity.VisualScripting.FullSerializer.fsObjectAttribute::Converter
	Type_t* ___Converter_3;
	// System.Type Unity.VisualScripting.FullSerializer.fsObjectAttribute::Processor
	Type_t* ___Processor_4;
};

// System.Func`2<System.Type,System.String>
struct Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121  : public MulticastDelegate_t
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Type>

// System.Collections.Generic.Dictionary`2<System.String,System.Type>

// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>>

// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>>

// System.Collections.Generic.Dictionary`2<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Attribute>

// System.Collections.Generic.Dictionary`2<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Attribute>

// System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>
struct List_1_t7182E9791DD2596935EC5EBF901871476E91B95D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>

// System.Collections.Generic.Queue`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>

// System.Collections.Generic.Queue`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>

// System.Attribute

// System.Attribute

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// Unity.VisualScripting.FullSerializer.Internal.fsOption

// Unity.VisualScripting.FullSerializer.Internal.fsOption

// Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection
struct fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields
{
	// System.Type[] Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_0;
	// System.Collections.Generic.IDictionary`2<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Attribute> Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::_cachedAttributeQueries
	RuntimeObject* ____cachedAttributeQueries_1;
	// System.Reflection.BindingFlags Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::DeclaredFlags
	int32_t ___DeclaredFlags_2;
};

// Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection

// Unity.VisualScripting.FullSerializer.Internal.fsTypeExtensions

// Unity.VisualScripting.FullSerializer.Internal.fsTypeExtensions

// Unity.VisualScripting.FullSerializer.Internal.fsVersionManager
struct fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>> Unity.VisualScripting.FullSerializer.Internal.fsVersionManager::_cache
	Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F* ____cache_0;
};

// Unity.VisualScripting.FullSerializer.Internal.fsVersionManager

// Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager/ObjectReferenceEqualityComparator
struct ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24_StaticFields
{
	// System.Collections.Generic.IEqualityComparer`1<System.Object> Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager/ObjectReferenceEqualityComparator::Instance
	RuntimeObject* ___Instance_0;
};

// Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager/ObjectReferenceEqualityComparator

// Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQueryComparator

// Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQueryComparator

// Unity.VisualScripting.FullSerializer.Internal.fsTypeExtensions/<>c__DisplayClass2_0

// Unity.VisualScripting.FullSerializer.Internal.fsTypeExtensions/<>c__DisplayClass2_0

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Reflection.FieldInfo

// System.Reflection.FieldInfo

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// System.Reflection.PropertyInfo

// System.Reflection.PropertyInfo

// System.Void

// System.Void

// Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields
{
	// System.String[] Unity.VisualScripting.FullSerializer.fsResult::EmptyStringArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___EmptyStringArray_0;
	// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsResult::Success
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___Success_3;
};

// Unity.VisualScripting.FullSerializer.fsResult

// Unity.VisualScripting.FullSerializer.Internal.fsVersionedType

// Unity.VisualScripting.FullSerializer.Internal.fsVersionedType

// Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery

// Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery

// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>

// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>

// System.Reflection.BindingFlags

// System.Reflection.BindingFlags

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticFields
{
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;
};

// System.Reflection.ConstructorInfo

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.Reflection.ParameterInfo

// System.Reflection.ParameterInfo

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

// Unity.VisualScripting.FullSerializer.fsDuplicateVersionNameException

// Unity.VisualScripting.FullSerializer.fsDuplicateVersionNameException

// Unity.VisualScripting.FullSerializer.fsMissingVersionConstructorException

// Unity.VisualScripting.FullSerializer.fsMissingVersionConstructorException

// Unity.VisualScripting.FullSerializer.fsObjectAttribute

// Unity.VisualScripting.FullSerializer.fsObjectAttribute

// System.Func`2<System.Type,System.String>

// System.Func`2<System.Type,System.String>
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Attribute[]
struct AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1  : public RuntimeArray
{
	ALIGN_FIELD (8) Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* m_Items[1];

	inline Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7  : public RuntimeArray
{
	ALIGN_FIELD (8) PropertyInfo_t* m_Items[1];

	inline PropertyInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265  : public RuntimeArray
{
	ALIGN_FIELD (8) MethodInfo_t* m_Items[1];

	inline MethodInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MethodInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MethodInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MethodInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MethodInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MethodInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A  : public RuntimeArray
{
	ALIGN_FIELD (8) ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* m_Items[1];

	inline ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8  : public RuntimeArray
{
	ALIGN_FIELD (8) FieldInfo_t* m_Items[1];

	inline FieldInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053  : public RuntimeArray
{
	ALIGN_FIELD (8) MemberInfo_t* m_Items[1];

	inline MemberInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MemberInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MemberInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MemberInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MemberInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MemberInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.VisualScripting.FullSerializer.Internal.fsVersionedType[]
struct fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F  : public RuntimeArray
{
	ALIGN_FIELD (8) fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 m_Items[1];

	inline fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Ancestors_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___VersionString_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ModelType_2), (void*)NULL);
		#endif
	}
	inline fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Ancestors_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___VersionString_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ModelType_2), (void*)NULL);
		#endif
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

IL2CPP_EXTERN_C void fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshal_pinvoke(const fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8& unmarshaled, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshal_pinvoke_back(const fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke& marshaled, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8& unmarshaled);
IL2CPP_EXTERN_C void fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshal_pinvoke_cleanup(fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshal_com(const fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8& unmarshaled, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com& marshaled);
IL2CPP_EXTERN_C void fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshal_com_back(const fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com& marshaled, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8& unmarshaled);
IL2CPP_EXTERN_C void fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshal_com_cleanup(fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com& marshaled);

// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m75B453F541BD3792F76EBFFFA8C573DA8AB6852C_gshared (Dictionary_2_t12EBB875CF54482585C346EFBACF37B33E3D6F76* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Skip<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Skip_TisRuntimeObject_mC63F7758979C7B3D3C94A57B8BCD63C5237EA697_gshared (RuntimeObject* ___0_source, int32_t ___1_count, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___0_source, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___1_selector, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m9E93111D8C1F56BE86EFCF88046DA5F7C5B95E92_gshared (List_1_t7182E9791DD2596935EC5EBF901871476E91B95D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mAF53B32DBF05898F4578B6DA990EAF6492B8366F_gshared_inline (List_1_t7182E9791DD2596935EC5EBF901871476E91B95D* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mE2B417D9C0A995CF8505F6CA100FA7FE7A3BEF97_gshared (Dictionary_2_tEDE1812AF080D310B7E71B3DB1C085858D812133* __this, RuntimeObject* ___0_key, fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* ___1_value, const RuntimeMethod* method) ;
// TAttribute Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetAttribute<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fsPortableReflection_GetAttribute_TisRuntimeObject_m1C0FA5FADFE944AE738700734DAF1F7431F24F2A_gshared (MemberInfo_t* ___0_element, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<T> Unity.VisualScripting.FullSerializer.Internal.fsOption::Just<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A fsOption_Just_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_m2924676A18A4C69DA6F8C6EEB7A1DAFA576EB5B0_gshared (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mAA16C26DAD891829846EB11127566A04B08650E3_gshared (Dictionary_2_tEDE1812AF080D310B7E71B3DB1C085858D812133* __this, RuntimeObject* ___0_key, fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mF9F0CCD361DD36335F701637DB0A91CDFCD40E19_gshared (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m18D26287FE9A32E930D02B66939DFB31D5FCF78F_gshared (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 Queue_1_Dequeue_m54E80CEB7DA8D9BE61571B0F602A47B14C0FC0C2_gshared (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m651F8A9D673A33075773C8090B4EA59E2C4916BB_gshared_inline (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE39074646B66E5876B460EFBBC3A4FC84BB0B88A_gshared (Dictionary_2_tEDE1812AF080D310B7E71B3DB1C085858D812133* __this, const RuntimeMethod* method) ;

// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_GetHashCode_m7B5D57E1EE2A59EDFA1BD237E9B37C6C836D774B (RuntimeObject* ___0_o, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager/ObjectReferenceEqualityComparator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectReferenceEqualityComparator__ctor_m609265685F45AFF755A5EF6BCF53C9B2FAF2DF64 (ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::HasAttribute(System.Reflection.MemberInfo,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsPortableReflection_HasAttribute_m1F9C28B7432B2B5C3DE18ACDF7E12F2318E52973 (MemberInfo_t* ___0_element, Type_t* ___1_attributeType, bool ___2_shouldCache, const RuntimeMethod* method) ;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Attribute_IsDefined_m5DB4031FBFCC88B85E13217F1323701794B8D42C (MemberInfo_t* ___0_element, Type_t* ___1_attributeType, bool ___2_inherit, const RuntimeMethod* method) ;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.MemberInfo,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* Attribute_GetCustomAttributes_mCB0A3E0F2148A92A0C6444D601F0F19E01B0ED09 (MemberInfo_t* ___0_element, Type_t* ___1_type, bool ___2_inherit, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Attribute>(System.Collections.Generic.IEnumerable`1<TSource>)
inline AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* Enumerable_ToArray_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m1386E5D9BE2299D956F8334023BB11BC76318258 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___0_source, method);
}
// System.Reflection.PropertyInfo[] Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetDeclaredProperties(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* fsPortableReflection_GetDeclaredProperties_mF26959E95815BD982802EC6160E3DA185B1DC6A7 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo[] Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetDeclaredMethods(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* fsPortableReflection_GetDeclaredMethods_mF1E5A4D80A892D0E7E9FED20061B23E39E413DB3 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Reflection.ConstructorInfo[] Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetDeclaredConstructors(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* fsPortableReflection_GetDeclaredConstructors_mB5B777C7EC535253A345584074FC1D8FBA32160A (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Type Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::Resolve(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsPortableReflection_Resolve_m995640D6EA5B5B1268075371EC800CF8720BF9C3 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQueryComparator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeQueryComparator__ctor_m97A20B142642A29462C6A1EEC957529E30965B4C (AttributeQueryComparator_t2FBE0BC91DB3A9551CE2E00214ADEFA9000EA7E1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Attribute>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
inline void Dictionary_2__ctor_m9CFE7D3EA7000C67AD7CA81BB321AA10E1469FE4 (Dictionary_2_t6F7C5D1D47078EB234FB37466D2A9394EAA78700* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6F7C5D1D47078EB234FB37466D2A9394EAA78700*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m75B453F541BD3792F76EBFFFA8C573DA8AB6852C_gshared)(__this, ___0_comparer, method);
}
// System.Boolean System.Reflection.MemberInfo::op_Equality(System.Reflection.MemberInfo,System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberInfo_op_Equality_m4B4F1AF29C9361D125F6D7FAB3D227ED3FECE685 (MemberInfo_t* ___0_left, MemberInfo_t* ___1_right, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.String Unity.VisualScripting.FullSerializer.Internal.fsTypeExtensions::CSharpName(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* fsTypeExtensions_CSharpName_m7B9CEB55166AB73F3E8475491EB08E4F91475FE6 (Type_t* ___0_type, bool ___1_includeNamespace, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsTypeExtensions/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m80831530C50B87BB035A96D17E242F8B7011C105 (U3CU3Ec__DisplayClass2_0_tAB0840C77123F2A797DA2837B414E58DEE35E9A9* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsNested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsNested_mCF57E6A68BA5CEDDB9DA81CB34B6945F414FB3FD (Type_t* __this, const RuntimeMethod* method) ;
// System.String Unity.VisualScripting.FullSerializer.Internal.fsTypeExtensions::CSharpName(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* fsTypeExtensions_CSharpName_mA1935C2EB35A9B042BDC965DA3A75B31F60B5671 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Skip<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
inline RuntimeObject* Enumerable_Skip_TisType_t_m7D71748DB6853797A890979775BC2B668679D174 (RuntimeObject* ___0_source, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Skip_TisRuntimeObject_mC63F7758979C7B3D3C94A57B8BCD63C5237EA697_gshared)(___0_source, ___1_count, method);
}
// System.Boolean System.Linq.Enumerable::Any<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_Any_TisType_t_m73AC0FF907FFC6B1E9B1C9E8804176B00EB92517 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_gshared)(___0_source, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Type,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m059A8C7FD3318EFF79FD145F9FDA4C44E4192897 (Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Type,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisType_t_TisString_t_m502CBD7F0EB7537D4C51DA8071B417FC79622BBD (RuntimeObject* ___0_source, Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___0_source, ___1_selector, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___0_source, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___0_separator, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_value, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_mDBC65647828F8A3D3E63807B5AEA4A4ECDE397E6 (Type_t* ___0_type, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Object Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::Migrate(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fsVersionedType_Migrate_mA2431BCBC723C85F909F6D50CCC218ABFAED65AB (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* __this, RuntimeObject* ___0_ancestorInstance, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.String Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* fsVersionedType_ToString_m584F4EBD02BC6D0502664D2047FF3D71270A359F (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsVersionedType_Equals_m051C07595BCB7037C2E668E0E09D0A4C74A2958F (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t fsVersionedType_GetHashCode_m02754D5563950758CECD86BE72D69DD7046C47C6 (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::.ctor()
inline void List_1__ctor_m9E93111D8C1F56BE86EFCF88046DA5F7C5B95E92 (List_1_t7182E9791DD2596935EC5EBF901871476E91B95D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7182E9791DD2596935EC5EBF901871476E91B95D*, const RuntimeMethod*))List_1__ctor_m9E93111D8C1F56BE86EFCF88046DA5F7C5B95E92_gshared)(__this, method);
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsVersionManager::GetVersionImportPathRecursive(System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>,System.String,Unity.VisualScripting.FullSerializer.Internal.fsVersionedType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsVersionManager_GetVersionImportPathRecursive_mB3A3038031C067D3C072AC7FA1A6483F923360B4 (List_1_t7182E9791DD2596935EC5EBF901871476E91B95D* ___0_path, String_t* ___1_currentVersion, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___2_current, const RuntimeMethod* method) ;
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsResult::Fail(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsResult_Fail_m3315594F29830C02FD560F7401D311F99DA241CD (String_t* ___0_warning, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::Add(T)
inline void List_1_Add_mAF53B32DBF05898F4578B6DA990EAF6492B8366F_inline (List_1_t7182E9791DD2596935EC5EBF901871476E91B95D* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7182E9791DD2596935EC5EBF901871476E91B95D*, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8, const RuntimeMethod*))List_1_Add_mAF53B32DBF05898F4578B6DA990EAF6492B8366F_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mC7D09AD7C3ECF89B60DA6860146520364EB8405C (Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F* __this, Type_t* ___0_key, fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F*, Type_t*, fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))Dictionary_2_TryGetValue_mE2B417D9C0A995CF8505F6CA100FA7FE7A3BEF97_gshared)(__this, ___0_key, ___1_value, method);
}
// TAttribute Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetAttribute<Unity.VisualScripting.FullSerializer.fsObjectAttribute>(System.Reflection.MemberInfo)
inline fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* fsPortableReflection_GetAttribute_TisfsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38_m05C71253753EF477CA25996DA4B7A36E67881A2A (MemberInfo_t* ___0_element, const RuntimeMethod* method)
{
	return ((  fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* (*) (MemberInfo_t*, const RuntimeMethod*))fsPortableReflection_GetAttribute_TisRuntimeObject_m1C0FA5FADFE944AE738700734DAF1F7431F24F2A_gshared)(___0_element, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType> Unity.VisualScripting.FullSerializer.Internal.fsVersionManager::GetVersionedType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A fsVersionManager_GetVersionedType_m4CF940685782769880C5341A1C3D2FC703906484 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_IsEmpty()
inline bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared)(__this, method);
}
// System.String System.ValueType::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueType_ToString_mFE1CB83BECC99D07BEA7EAB25AF73BE5A727C04D (RuntimeObject* __this, const RuntimeMethod* method) ;
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_Value()
inline fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241 (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared)(__this, method);
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsVersionManager::VerifyUniqueVersionStrings(Unity.VisualScripting.FullSerializer.Internal.fsVersionedType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsVersionManager_VerifyUniqueVersionStrings_m930312E5E49A7FEFFAED1994F0B9633BC9BE4276 (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_type, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsVersionManager::VerifyConstructors(Unity.VisualScripting.FullSerializer.Internal.fsVersionedType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsVersionManager_VerifyConstructors_m8411C5605527031779BFE91B425DF200A968ACD7 (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_type, const RuntimeMethod* method) ;
// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<T> Unity.VisualScripting.FullSerializer.Internal.fsOption::Just<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>(T)
inline fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A fsOption_Just_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_m2924676A18A4C69DA6F8C6EEB7A1DAFA576EB5B0 (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method)
{
	return ((  fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A (*) (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8, const RuntimeMethod*))fsOption_Just_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_m2924676A18A4C69DA6F8C6EEB7A1DAFA576EB5B0_gshared)(___0_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mF86E918079AEE87DD62ADFBB36F4135E40F2E24E (Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F* __this, Type_t* ___0_key, fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F*, Type_t*, fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A, const RuntimeMethod*))Dictionary_2_set_Item_mAA16C26DAD891829846EB11127566A04B08650E3_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void Unity.VisualScripting.FullSerializer.fsMissingVersionConstructorException::.ctor(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsMissingVersionConstructorException__ctor_m46EA05FE262E8C98465A921D2B2EB6035ED3FEFB (fsMissingVersionConstructorException_tE6DE04E84EDA9AFAB8D627E6BCA19BE39C7235DE* __this, Type_t* ___0_versionedType, Type_t* ___1_constructorType, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::.ctor()
inline void Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428 (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::.ctor()
inline void Queue_1__ctor_mF9F0CCD361DD36335F701637DB0A91CDFCD40E19 (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A*, const RuntimeMethod*))Queue_1__ctor_mF9F0CCD361DD36335F701637DB0A91CDFCD40E19_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::Enqueue(T)
inline void Queue_1_Enqueue_m18D26287FE9A32E930D02B66939DFB31D5FCF78F (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A*, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8, const RuntimeMethod*))Queue_1_Enqueue_m18D26287FE9A32E930D02B66939DFB31D5FCF78F_gshared)(__this, ___0_item, method);
}
// T System.Collections.Generic.Queue`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::Dequeue()
inline fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 Queue_1_Dequeue_m54E80CEB7DA8D9BE61571B0F602A47B14C0FC0C2 (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method)
{
	return ((  fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 (*) (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A*, const RuntimeMethod*))Queue_1_Dequeue_m54E80CEB7DA8D9BE61571B0F602A47B14C0FC0C2_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Type>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m4EC9A321B5DBDCB0E9249FFE9074D45472E5D933 (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Type>::get_Item(TKey)
inline Type_t* Dictionary_2_get_Item_mEE2A06608BDDA14C7170B0039FF13E2DCE84EEE9 (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Void Unity.VisualScripting.FullSerializer.fsDuplicateVersionNameException::.ctor(System.Type,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDuplicateVersionNameException__ctor_m0CA794E21F56EBADEED2971C6E9DC603CAA0AF51 (fsDuplicateVersionNameException_tAC800EE7692EB781843D91C2158A431897E11640* __this, Type_t* ___0_typeA, Type_t* ___1_typeB, String_t* ___2_version, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38 (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, String_t* ___0_key, Type_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, String_t*, Type_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Int32 System.Collections.Generic.Queue`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_Count()
inline int32_t Queue_1_get_Count_m651F8A9D673A33075773C8090B4EA59E2C4916BB_inline (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A*, const RuntimeMethod*))Queue_1_get_Count_m651F8A9D673A33075773C8090B4EA59E2C4916BB_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>>::.ctor()
inline void Dictionary_2__ctor_mC2BE576BC0A6111C417951E5B8D2B17B28D6E3E1 (Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F*, const RuntimeMethod*))Dictionary_2__ctor_mE39074646B66E5876B460EFBBC3A4FC84BB0B88A_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager/ObjectReferenceEqualityComparator::System.Collections.Generic.IEqualityComparer<System.Object>.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ObjectReferenceEqualityComparator_System_Collections_Generic_IEqualityComparerU3CSystem_ObjectU3E_Equals_mCF77DB060539A6992A81D2700283385C08751EB6 (ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24* __this, RuntimeObject* ___0_x, RuntimeObject* ___1_y, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return ReferenceEquals(x, y);
		RuntimeObject* L_0 = ___0_x;
		RuntimeObject* L_1 = ___1_y;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))? 1 : 0);
		goto IL_0008;
	}

IL_0008:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager/ObjectReferenceEqualityComparator::System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectReferenceEqualityComparator_System_Collections_Generic_IEqualityComparerU3CSystem_ObjectU3E_GetHashCode_mFB4BE9ACD40DEAE98F69833C25B3533F8DFED864 (ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return RuntimeHelpers.GetHashCode(obj);
		RuntimeObject* L_0 = ___0_obj;
		int32_t L_1;
		L_1 = RuntimeHelpers_GetHashCode_m7B5D57E1EE2A59EDFA1BD237E9B37C6C836D774B(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager/ObjectReferenceEqualityComparator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectReferenceEqualityComparator__ctor_m609265685F45AFF755A5EF6BCF53C9B2FAF2DF64 (ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager/ObjectReferenceEqualityComparator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectReferenceEqualityComparator__cctor_m8B819E32F9065E54766F626C4A17B330217E2D51 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly IEqualityComparer<object> Instance = new ObjectReferenceEqualityComparator();
		ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24* L_0 = (ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24*)il2cpp_codegen_object_new(ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ObjectReferenceEqualityComparator__ctor_m609265685F45AFF755A5EF6BCF53C9B2FAF2DF64(L_0, NULL);
		((ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24_StaticFields*)il2cpp_codegen_static_fields_for(ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24_il2cpp_TypeInfo_var))->___Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24_StaticFields*)il2cpp_codegen_static_fields_for(ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24_il2cpp_TypeInfo_var))->___Instance_0), (void*)L_0);
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
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::HasAttribute(System.Reflection.MemberInfo,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsPortableReflection_HasAttribute_mD4F1A8E233F51111056C7383B81BB3C2F6034477 (MemberInfo_t* ___0_element, Type_t* ___1_attributeType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return HasAttribute(element, attributeType, true);
		MemberInfo_t* L_0 = ___0_element;
		Type_t* L_1 = ___1_attributeType;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = fsPortableReflection_HasAttribute_m1F9C28B7432B2B5C3DE18ACDF7E12F2318E52973(L_0, L_1, (bool)1, NULL);
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::HasAttribute(System.Reflection.MemberInfo,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsPortableReflection_HasAttribute_m1F9C28B7432B2B5C3DE18ACDF7E12F2318E52973 (MemberInfo_t* ___0_element, Type_t* ___1_attributeType, bool ___2_shouldCache, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return Attribute.IsDefined(element, attributeType, true);
		MemberInfo_t* L_0 = ___0_element;
		Type_t* L_1 = ___1_attributeType;
		bool L_2;
		L_2 = Attribute_IsDefined_m5DB4031FBFCC88B85E13217F1323701794B8D42C(L_0, L_1, (bool)1, NULL);
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Attribute Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetAttribute(System.Reflection.MemberInfo,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* fsPortableReflection_GetAttribute_m54325D68CE95535644F25CD39FAA3D4858745EB8 (MemberInfo_t* ___0_element, Type_t* ___1_attributeType, bool ___2_shouldCache, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m1386E5D9BE2299D956F8334023BB11BC76318258_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tF2ECBB7A1A6D5DBB7D72E7B2F8E55A1159709C07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_1 = NULL;
	AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_7 = NULL;
	{
		// var query = new AttributeQuery
		// {
		//     MemberInfo = element,
		//     AttributeType = attributeType
		// };
		il2cpp_codegen_initobj((&V_2), sizeof(AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7));
		MemberInfo_t* L_0 = ___0_element;
		(&V_2)->___MemberInfo_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___MemberInfo_0), (void*)L_0);
		Type_t* L_1 = ___1_attributeType;
		(&V_2)->___AttributeType_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___AttributeType_1), (void*)L_1);
		AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 L_2 = V_2;
		V_0 = L_2;
		// if (_cachedAttributeQueries.TryGetValue(query, out attribute) == false)
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = ((fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields*)il2cpp_codegen_static_fields_for(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var))->____cachedAttributeQueries_1;
		AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = InterfaceFuncInvoker2< bool, AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Attribute>::TryGetValue(TKey,TValue&) */, IDictionary_2_tF2ECBB7A1A6D5DBB7D72E7B2F8E55A1159709C07_il2cpp_TypeInfo_var, L_3, L_4, (&V_1));
		V_3 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0069;
		}
	}
	{
		// var attributes = Attribute.GetCustomAttributes(element, attributeType, true).ToArray();
		MemberInfo_t* L_7 = ___0_element;
		Type_t* L_8 = ___1_attributeType;
		AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* L_9;
		L_9 = Attribute_GetCustomAttributes_mCB0A3E0F2148A92A0C6444D601F0F19E01B0ED09(L_7, L_8, (bool)1, NULL);
		AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* L_10;
		L_10 = Enumerable_ToArray_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m1386E5D9BE2299D956F8334023BB11BC76318258((RuntimeObject*)L_9, Enumerable_ToArray_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m1386E5D9BE2299D956F8334023BB11BC76318258_RuntimeMethod_var);
		V_4 = L_10;
		// if (attributes.Length > 0)
		AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* L_11 = V_4;
		NullCheck(L_11);
		V_5 = (bool)((!(((uint32_t)(((RuntimeArray*)L_11)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0052;
		}
	}
	{
		// attribute = (Attribute)attributes[0];
		AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* L_13 = V_4;
		NullCheck(L_13);
		int32_t L_14 = 0;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = L_15;
	}

IL_0052:
	{
		// if (shouldCache)
		bool L_16 = ___2_shouldCache;
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0068;
		}
	}
	{
		// _cachedAttributeQueries[query] = attribute;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		RuntimeObject* L_18 = ((fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields*)il2cpp_codegen_static_fields_for(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var))->____cachedAttributeQueries_1;
		AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 L_19 = V_0;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_20 = V_1;
		NullCheck(L_18);
		InterfaceActionInvoker2< AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Attribute>::set_Item(TKey,TValue) */, IDictionary_2_tF2ECBB7A1A6D5DBB7D72E7B2F8E55A1159709C07_il2cpp_TypeInfo_var, L_18, L_19, L_20);
	}

IL_0068:
	{
	}

IL_0069:
	{
		// return attribute;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_21 = V_1;
		V_7 = L_21;
		goto IL_006e;
	}

IL_006e:
	{
		// }
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_22 = V_7;
		return L_22;
	}
}
// System.Reflection.PropertyInfo Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetDeclaredProperty(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* fsPortableReflection_GetDeclaredProperty_m78691C838C06D0C4ADCE259161DE2323504862FC (Type_t* ___0_type, String_t* ___1_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	PropertyInfo_t* V_3 = NULL;
	bool V_4 = false;
	{
		// var props = GetDeclaredProperties(type);
		Type_t* L_0 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_1;
		L_1 = fsPortableReflection_GetDeclaredProperties_mF26959E95815BD982802EC6160E3DA185B1DC6A7(L_0, NULL);
		V_0 = L_1;
		// for (var i = 0; i < props.Length; ++i)
		V_1 = 0;
		goto IL_002b;
	}

IL_000c:
	{
		// if (props[i].Name == propertyName)
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		PropertyInfo_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		String_t* L_7 = ___1_propertyName;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, L_7, NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0026;
		}
	}
	{
		// return props[i];
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		PropertyInfo_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		goto IL_003b;
	}

IL_0026:
	{
		// for (var i = 0; i < props.Length; ++i)
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_002b:
	{
		// for (var i = 0; i < props.Length; ++i)
		int32_t L_15 = V_1;
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_16 = V_0;
		NullCheck(L_16);
		V_4 = (bool)((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))? 1 : 0);
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_000c;
		}
	}
	{
		// return null;
		V_3 = (PropertyInfo_t*)NULL;
		goto IL_003b;
	}

IL_003b:
	{
		// }
		PropertyInfo_t* L_18 = V_3;
		return L_18;
	}
}
// System.Reflection.MethodInfo Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetDeclaredMethod(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* fsPortableReflection_GetDeclaredMethod_mDC22CDA0777452C8D2FE05B2FB07B14B697A1E5B (Type_t* ___0_type, String_t* ___1_methodName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	MethodInfo_t* V_3 = NULL;
	bool V_4 = false;
	{
		// var methods = GetDeclaredMethods(type);
		Type_t* L_0 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_1;
		L_1 = fsPortableReflection_GetDeclaredMethods_mF1E5A4D80A892D0E7E9FED20061B23E39E413DB3(L_0, NULL);
		V_0 = L_1;
		// for (var i = 0; i < methods.Length; ++i)
		V_1 = 0;
		goto IL_002b;
	}

IL_000c:
	{
		// if (methods[i].Name == methodName)
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		MethodInfo_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		String_t* L_7 = ___1_methodName;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, L_7, NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0026;
		}
	}
	{
		// return methods[i];
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		MethodInfo_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		goto IL_003b;
	}

IL_0026:
	{
		// for (var i = 0; i < methods.Length; ++i)
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_002b:
	{
		// for (var i = 0; i < methods.Length; ++i)
		int32_t L_15 = V_1;
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_16 = V_0;
		NullCheck(L_16);
		V_4 = (bool)((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))? 1 : 0);
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_000c;
		}
	}
	{
		// return null;
		V_3 = (MethodInfo_t*)NULL;
		goto IL_003b;
	}

IL_003b:
	{
		// }
		MethodInfo_t* L_18 = V_3;
		return L_18;
	}
}
// System.Reflection.ConstructorInfo Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetDeclaredConstructor(System.Type,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* fsPortableReflection_GetDeclaredConstructor_m9F5B44FCB7E14D7E7CF90482A9D1D13C11445C01 (Type_t* ___0_type, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* V_0 = NULL;
	int32_t V_1 = 0;
	ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* V_2 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* V_8 = NULL;
	bool V_9 = false;
	{
		// var ctors = GetDeclaredConstructors(type);
		Type_t* L_0 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* L_1;
		L_1 = fsPortableReflection_GetDeclaredConstructors_mB5B777C7EC535253A345584074FC1D8FBA32160A(L_0, NULL);
		V_0 = L_1;
		// for (var i = 0; i < ctors.Length; ++i)
		V_1 = 0;
		goto IL_006a;
	}

IL_000c:
	{
		// var ctor = ctors[i];
		ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// var ctorParams = ctor.GetParameters();
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_6 = V_2;
		NullCheck(L_6);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_7;
		L_7 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(16 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_6);
		V_3 = L_7;
		// if (parameters.Length != ctorParams.Length)
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_8 = ___1_parameters;
		NullCheck(L_8);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_9 = V_3;
		NullCheck(L_9);
		V_4 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_002c;
		}
	}
	{
		// continue;
		goto IL_0066;
	}

IL_002c:
	{
		// for (var j = 0; j < ctorParams.Length; ++j)
		V_5 = 0;
		goto IL_0054;
	}

IL_0031:
	{
		// if (ctorParams[j].ParameterType != parameters[j])
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_11 = V_3;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Type_t* L_15;
		L_15 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_14);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_16 = ___1_parameters;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Type_t* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_15, L_19, NULL);
		V_6 = L_20;
		bool L_21 = V_6;
		if (!L_21)
		{
			goto IL_004d;
		}
	}
	{
		// continue;
		goto IL_004e;
	}

IL_004d:
	{
	}

IL_004e:
	{
		// for (var j = 0; j < ctorParams.Length; ++j)
		int32_t L_22 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0054:
	{
		// for (var j = 0; j < ctorParams.Length; ++j)
		int32_t L_23 = V_5;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_24 = V_3;
		NullCheck(L_24);
		V_7 = (bool)((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))? 1 : 0);
		bool L_25 = V_7;
		if (L_25)
		{
			goto IL_0031;
		}
	}
	{
		// return ctor;
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_26 = V_2;
		V_8 = L_26;
		goto IL_007b;
	}

IL_0066:
	{
		// for (var i = 0; i < ctors.Length; ++i)
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_006a:
	{
		// for (var i = 0; i < ctors.Length; ++i)
		int32_t L_28 = V_1;
		ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* L_29 = V_0;
		NullCheck(L_29);
		V_9 = (bool)((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))? 1 : 0);
		bool L_30 = V_9;
		if (L_30)
		{
			goto IL_000c;
		}
	}
	{
		// return null;
		V_8 = (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL;
		goto IL_007b;
	}

IL_007b:
	{
		// }
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_31 = V_8;
		return L_31;
	}
}
// System.Reflection.ConstructorInfo[] Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetDeclaredConstructors(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* fsPortableReflection_GetDeclaredConstructors_mB5B777C7EC535253A345584074FC1D8FBA32160A (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* V_0 = NULL;
	{
		// return type.GetConstructors(DeclaredFlags & ~BindingFlags.Static); // LUDIQ: Exclude static constructors
		Type_t* L_0 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		int32_t L_1 = ((fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields*)il2cpp_codegen_static_fields_for(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var))->___DeclaredFlags_2;
		NullCheck(L_0);
		ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* L_2;
		L_2 = VirtualFuncInvoker1< ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A*, int32_t >::Invoke(82 /* System.Reflection.ConstructorInfo[] System.Type::GetConstructors(System.Reflection.BindingFlags) */, L_0, ((int32_t)((int32_t)L_1&((int32_t)-9))));
		V_0 = L_2;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* L_3 = V_0;
		return L_3;
	}
}
// System.Reflection.MethodInfo Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetFlattenedMethod(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* fsPortableReflection_GetFlattenedMethod_mE5EF30F98C8A994F7581740E8ECEDBA6E42C8072 (Type_t* ___0_type, String_t* ___1_methodName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	MethodInfo_t* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	{
		goto IL_0048;
	}

IL_0003:
	{
		// var methods = GetDeclaredMethods(type);
		Type_t* L_0 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_1;
		L_1 = fsPortableReflection_GetDeclaredMethods_mF1E5A4D80A892D0E7E9FED20061B23E39E413DB3(L_0, NULL);
		V_0 = L_1;
		// for (var i = 0; i < methods.Length; ++i)
		V_1 = 0;
		goto IL_002e;
	}

IL_000f:
	{
		// if (methods[i].Name == methodName)
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		MethodInfo_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		String_t* L_7 = ___1_methodName;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, L_7, NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0029;
		}
	}
	{
		// return methods[i];
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		MethodInfo_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		goto IL_0059;
	}

IL_0029:
	{
		// for (var i = 0; i < methods.Length; ++i)
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_002e:
	{
		// for (var i = 0; i < methods.Length; ++i)
		int32_t L_15 = V_1;
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_16 = V_0;
		NullCheck(L_16);
		V_4 = (bool)((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))? 1 : 0);
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_000f;
		}
	}
	{
		// type = type.Resolve().BaseType;
		Type_t* L_18 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = fsPortableReflection_Resolve_m995640D6EA5B5B1268075371EC800CF8720BF9C3(L_18, NULL);
		NullCheck(L_19);
		Type_t* L_20;
		L_20 = VirtualFuncInvoker0< Type_t* >::Invoke(114 /* System.Type System.Type::get_BaseType() */, L_19);
		___0_type = L_20;
	}

IL_0048:
	{
		// while (type != null)
		Type_t* L_21 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_21, (Type_t*)NULL, NULL);
		V_5 = L_22;
		bool L_23 = V_5;
		if (L_23)
		{
			goto IL_0003;
		}
	}
	{
		// return null;
		V_3 = (MethodInfo_t*)NULL;
		goto IL_0059;
	}

IL_0059:
	{
		// }
		MethodInfo_t* L_24 = V_3;
		return L_24;
	}
}
// System.Reflection.MethodInfo[] Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetDeclaredMethods(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* fsPortableReflection_GetDeclaredMethods_mF1E5A4D80A892D0E7E9FED20061B23E39E413DB3 (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* V_0 = NULL;
	{
		// return type.GetMethods(DeclaredFlags);
		Type_t* L_0 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		int32_t L_1 = ((fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields*)il2cpp_codegen_static_fields_for(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var))->___DeclaredFlags_2;
		NullCheck(L_0);
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_2;
		L_2 = VirtualFuncInvoker1< MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265*, int32_t >::Invoke(100 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_0, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_3 = V_0;
		return L_3;
	}
}
// System.Reflection.PropertyInfo[] Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetDeclaredProperties(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* fsPortableReflection_GetDeclaredProperties_mF26959E95815BD982802EC6160E3DA185B1DC6A7 (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* V_0 = NULL;
	{
		// return type.GetProperties(DeclaredFlags);
		Type_t* L_0 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		int32_t L_1 = ((fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields*)il2cpp_codegen_static_fields_for(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var))->___DeclaredFlags_2;
		NullCheck(L_0);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_2;
		L_2 = VirtualFuncInvoker1< PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7*, int32_t >::Invoke(110 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_0, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_3 = V_0;
		return L_3;
	}
}
// System.Reflection.FieldInfo[] Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetDeclaredFields(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* fsPortableReflection_GetDeclaredFields_m8FCC0F8F72BA45796F5C46E49F74E6187790D89B (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* V_0 = NULL;
	{
		// return type.GetFields(DeclaredFlags);
		Type_t* L_0 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		int32_t L_1 = ((fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields*)il2cpp_codegen_static_fields_for(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var))->___DeclaredFlags_2;
		NullCheck(L_0);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_2;
		L_2 = VirtualFuncInvoker1< FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_0, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_3 = V_0;
		return L_3;
	}
}
// System.Reflection.MemberInfo[] Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetDeclaredMembers(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* fsPortableReflection_GetDeclaredMembers_m65055614D9291573376917BF3044659CAF23409E (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* V_0 = NULL;
	{
		// return type.GetMembers(DeclaredFlags);
		Type_t* L_0 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		int32_t L_1 = ((fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields*)il2cpp_codegen_static_fields_for(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var))->___DeclaredFlags_2;
		NullCheck(L_0);
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_2;
		L_2 = VirtualFuncInvoker1< MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*, int32_t >::Invoke(91 /* System.Reflection.MemberInfo[] System.Type::GetMembers(System.Reflection.BindingFlags) */, L_0, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_3 = V_0;
		return L_3;
	}
}
// System.Type Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::Resolve(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsPortableReflection_Resolve_m995640D6EA5B5B1268075371EC800CF8720BF9C3 (Type_t* ___0_type, const RuntimeMethod* method) 
{
	Type_t* V_0 = NULL;
	{
		// return type;
		Type_t* L_0 = ___0_type;
		V_0 = L_0;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		Type_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsPortableReflection__cctor_m809A0F036D94DD50B44E6986C9AC53DA8215DE41 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AttributeQueryComparator_t2FBE0BC91DB3A9551CE2E00214ADEFA9000EA7E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9CFE7D3EA7000C67AD7CA81BB321AA10E1469FE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6F7C5D1D47078EB234FB37466D2A9394EAA78700_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Type[] EmptyTypes = { };
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)0);
		((fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields*)il2cpp_codegen_static_fields_for(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var))->___EmptyTypes_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields*)il2cpp_codegen_static_fields_for(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var))->___EmptyTypes_0), (void*)L_0);
		// private static IDictionary<AttributeQuery, Attribute> _cachedAttributeQueries =
		//     new Dictionary<AttributeQuery, Attribute>(new AttributeQueryComparator());
		AttributeQueryComparator_t2FBE0BC91DB3A9551CE2E00214ADEFA9000EA7E1* L_1 = (AttributeQueryComparator_t2FBE0BC91DB3A9551CE2E00214ADEFA9000EA7E1*)il2cpp_codegen_object_new(AttributeQueryComparator_t2FBE0BC91DB3A9551CE2E00214ADEFA9000EA7E1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AttributeQueryComparator__ctor_m97A20B142642A29462C6A1EEC957529E30965B4C(L_1, NULL);
		Dictionary_2_t6F7C5D1D47078EB234FB37466D2A9394EAA78700* L_2 = (Dictionary_2_t6F7C5D1D47078EB234FB37466D2A9394EAA78700*)il2cpp_codegen_object_new(Dictionary_2_t6F7C5D1D47078EB234FB37466D2A9394EAA78700_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m9CFE7D3EA7000C67AD7CA81BB321AA10E1469FE4(L_2, L_1, Dictionary_2__ctor_m9CFE7D3EA7000C67AD7CA81BB321AA10E1469FE4_RuntimeMethod_var);
		((fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields*)il2cpp_codegen_static_fields_for(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var))->____cachedAttributeQueries_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields*)il2cpp_codegen_static_fields_for(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var))->____cachedAttributeQueries_1), (void*)L_2);
		// private static BindingFlags DeclaredFlags =
		//     BindingFlags.NonPublic |
		//     BindingFlags.Public |
		//     BindingFlags.Instance |
		//     BindingFlags.Static |
		//     BindingFlags.DeclaredOnly;
		((fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields*)il2cpp_codegen_static_fields_for(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var))->___DeclaredFlags_2 = ((int32_t)62);
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
// Conversion methods for marshalling of: Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery
IL2CPP_EXTERN_C void AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_marshal_pinvoke(const AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7& unmarshaled, AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_marshaled_pinvoke& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7____MemberInfo_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___MemberInfo_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7____MemberInfo_0_FieldInfo_var, AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___MemberInfo_0Exception, NULL);
}
IL2CPP_EXTERN_C void AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_marshal_pinvoke_back(const AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_marshaled_pinvoke& marshaled, AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7____MemberInfo_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___MemberInfo_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7____MemberInfo_0_FieldInfo_var, AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___MemberInfo_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery
IL2CPP_EXTERN_C void AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_marshal_pinvoke_cleanup(AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery
IL2CPP_EXTERN_C void AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_marshal_com(const AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7& unmarshaled, AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_marshaled_com& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7____MemberInfo_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___MemberInfo_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7____MemberInfo_0_FieldInfo_var, AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___MemberInfo_0Exception, NULL);
}
IL2CPP_EXTERN_C void AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_marshal_com_back(const AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_marshaled_com& marshaled, AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7____MemberInfo_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___MemberInfo_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7____MemberInfo_0_FieldInfo_var, AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___MemberInfo_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery
IL2CPP_EXTERN_C void AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_marshal_com_cleanup(AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_marshaled_com& marshaled)
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
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQueryComparator::Equals(Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AttributeQueryComparator_Equals_m27EA6B949A2AAF440EFE865A87E20FB9CED53635 (AttributeQueryComparator_t2FBE0BC91DB3A9551CE2E00214ADEFA9000EA7E1* __this, AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 ___0_x, AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return
		//     x.MemberInfo == y.MemberInfo &&
		//     x.AttributeType == y.AttributeType;
		AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 L_0 = ___0_x;
		MemberInfo_t* L_1 = L_0.___MemberInfo_0;
		AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 L_2 = ___1_y;
		MemberInfo_t* L_3 = L_2.___MemberInfo_0;
		bool L_4;
		L_4 = MemberInfo_op_Equality_m4B4F1AF29C9361D125F6D7FAB3D227ED3FECE685(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 L_5 = ___0_x;
		Type_t* L_6 = L_5.___AttributeType_1;
		AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 L_7 = ___1_y;
		Type_t* L_8 = L_7.___AttributeType_1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		G_B3_0 = ((int32_t)(L_9));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002b;
	}

IL_002b:
	{
		// }
		bool L_10 = V_0;
		return L_10;
	}
}
// System.Int32 Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQueryComparator::GetHashCode(Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AttributeQueryComparator_GetHashCode_m538CC0620B54C1478F4B17229A036FADB11E4359 (AttributeQueryComparator_t2FBE0BC91DB3A9551CE2E00214ADEFA9000EA7E1* __this, AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 ___0_obj, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return
		//     obj.MemberInfo.GetHashCode() +
		//     (17 * obj.AttributeType.GetHashCode());
		AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 L_0 = ___0_obj;
		MemberInfo_t* L_1 = L_0.___MemberInfo_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 L_3 = ___0_obj;
		Type_t* L_4 = L_3.___AttributeType_1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)il2cpp_codegen_multiply(((int32_t)17), L_5))));
		goto IL_001e;
	}

IL_001e:
	{
		// }
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQueryComparator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeQueryComparator__ctor_m97A20B142642A29462C6A1EEC957529E30965B4C (AttributeQueryComparator_t2FBE0BC91DB3A9551CE2E00214ADEFA9000EA7E1* __this, const RuntimeMethod* method) 
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
// System.String Unity.VisualScripting.FullSerializer.Internal.fsTypeExtensions::CSharpName(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* fsTypeExtensions_CSharpName_mA1935C2EB35A9B042BDC965DA3A75B31F60B5671 (Type_t* ___0_type, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return CSharpName(type, /*includeNamespace:*/ false);
		Type_t* L_0 = ___0_type;
		String_t* L_1;
		L_1 = fsTypeExtensions_CSharpName_m7B9CEB55166AB73F3E8475491EB08E4F91475FE6(L_0, (bool)0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String Unity.VisualScripting.FullSerializer.Internal.fsTypeExtensions::CSharpName(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* fsTypeExtensions_CSharpName_m7B9CEB55166AB73F3E8475491EB08E4F91475FE6 (Type_t* ___0_type, bool ___1_includeNamespace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisType_t_m73AC0FF907FFC6B1E9B1C9E8804176B00EB92517_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisType_t_TisString_t_m502CBD7F0EB7537D4C51DA8071B417FC79622BBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Skip_TisType_t_m7D71748DB6853797A890979775BC2B668679D174_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CCSharpNameU3Eb__0_mB271DB9009C764D4CB33A03876DB554A4EEFB2C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_tAB0840C77123F2A797DA2837B414E58DEE35E9A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ECB47BAE746457DBE91D0BA044A27960D4563D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_tAB0840C77123F2A797DA2837B414E58DEE35E9A9* V_0 = NULL;
	String_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	String_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t V_14 = 0;
	bool V_15 = false;
	bool V_16 = false;
	int32_t G_B26_0 = 0;
	{
		U3CU3Ec__DisplayClass2_0_tAB0840C77123F2A797DA2837B414E58DEE35E9A9* L_0 = (U3CU3Ec__DisplayClass2_0_tAB0840C77123F2A797DA2837B414E58DEE35E9A9*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_tAB0840C77123F2A797DA2837B414E58DEE35E9A9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m80831530C50B87BB035A96D17E242F8B7011C105(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_tAB0840C77123F2A797DA2837B414E58DEE35E9A9* L_1 = V_0;
		bool L_2 = ___1_includeNamespace;
		NullCheck(L_1);
		L_1->___includeNamespace_0 = L_2;
		// if (type == typeof(void))
		Type_t* L_3 = ___0_type;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		bool L_6;
		L_6 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_3, L_5, NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		// return "void";
		V_4 = _stringLiteral6ECB47BAE746457DBE91D0BA044A27960D4563D9;
		goto IL_020d;
	}

IL_002f:
	{
		// if (type == typeof(int))
		Type_t* L_8 = ___0_type;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_8, L_10, NULL);
		V_5 = L_11;
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0052;
		}
	}
	{
		// return "int";
		V_4 = _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72;
		goto IL_020d;
	}

IL_0052:
	{
		// if (type == typeof(float))
		Type_t* L_13 = ___0_type;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_13, L_15, NULL);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0075;
		}
	}
	{
		// return "float";
		V_4 = _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29;
		goto IL_020d;
	}

IL_0075:
	{
		// if (type == typeof(bool))
		Type_t* L_18 = ___0_type;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		V_7 = L_21;
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_0098;
		}
	}
	{
		// return "bool";
		V_4 = _stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2;
		goto IL_020d;
	}

IL_0098:
	{
		// if (type == typeof(double))
		Type_t* L_23 = ___0_type;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		V_8 = L_26;
		bool L_27 = V_8;
		if (!L_27)
		{
			goto IL_00bb;
		}
	}
	{
		// return "double";
		V_4 = _stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8;
		goto IL_020d;
	}

IL_00bb:
	{
		// if (type == typeof(string))
		Type_t* L_28 = ___0_type;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		bool L_31;
		L_31 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_28, L_30, NULL);
		V_9 = L_31;
		bool L_32 = V_9;
		if (!L_32)
		{
			goto IL_00de;
		}
	}
	{
		// return "string";
		V_4 = _stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE;
		goto IL_020d;
	}

IL_00de:
	{
		// if (type.IsGenericParameter)
		Type_t* L_33 = ___0_type;
		NullCheck(L_33);
		bool L_34;
		L_34 = VirtualFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Type::get_IsGenericParameter() */, L_33);
		V_10 = L_34;
		bool L_35 = V_10;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		// return type.ToString();
		Type_t* L_36 = ___0_type;
		NullCheck(L_36);
		String_t* L_37;
		L_37 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_36);
		V_4 = L_37;
		goto IL_020d;
	}

IL_00f8:
	{
		// var name = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// var genericArguments = (IEnumerable<Type>)type.GetGenericArguments();
		Type_t* L_38 = ___0_type;
		NullCheck(L_38);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_39;
		L_39 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50 /* System.Type[] System.Type::GetGenericArguments() */, L_38);
		V_2 = (RuntimeObject*)L_39;
		// if (type.IsNested)
		Type_t* L_40 = ___0_type;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsNested_mCF57E6A68BA5CEDDB9DA81CB34B6945F414FB3FD(L_40, NULL);
		V_11 = L_41;
		bool L_42 = V_11;
		if (!L_42)
		{
			goto IL_0155;
		}
	}
	{
		// name += type.DeclaringType.CSharpName() + ".";
		String_t* L_43 = V_1;
		Type_t* L_44 = ___0_type;
		NullCheck(L_44);
		Type_t* L_45;
		L_45 = VirtualFuncInvoker0< Type_t* >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_44);
		String_t* L_46;
		L_46 = fsTypeExtensions_CSharpName_mA1935C2EB35A9B042BDC965DA3A75B31F60B5671(L_45, NULL);
		String_t* L_47;
		L_47 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_43, L_46, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		V_1 = L_47;
		// if (type.DeclaringType.GetGenericArguments().Length > 0)
		Type_t* L_48 = ___0_type;
		NullCheck(L_48);
		Type_t* L_49;
		L_49 = VirtualFuncInvoker0< Type_t* >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_48);
		NullCheck(L_49);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_50;
		L_50 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50 /* System.Type[] System.Type::GetGenericArguments() */, L_49);
		NullCheck(L_50);
		V_12 = (bool)((!(((uint32_t)(((RuntimeArray*)L_50)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_51 = V_12;
		if (!L_51)
		{
			goto IL_0154;
		}
	}
	{
		// genericArguments = genericArguments.Skip(type.DeclaringType.GetGenericArguments().Length);
		RuntimeObject* L_52 = V_2;
		Type_t* L_53 = ___0_type;
		NullCheck(L_53);
		Type_t* L_54;
		L_54 = VirtualFuncInvoker0< Type_t* >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_53);
		NullCheck(L_54);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_55;
		L_55 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50 /* System.Type[] System.Type::GetGenericArguments() */, L_54);
		NullCheck(L_55);
		RuntimeObject* L_56;
		L_56 = Enumerable_Skip_TisType_t_m7D71748DB6853797A890979775BC2B668679D174(L_52, ((int32_t)(((RuntimeArray*)L_55)->max_length)), Enumerable_Skip_TisType_t_m7D71748DB6853797A890979775BC2B668679D174_RuntimeMethod_var);
		V_2 = L_56;
	}

IL_0154:
	{
	}

IL_0155:
	{
		// if (genericArguments.Any() == false)
		RuntimeObject* L_57 = V_2;
		bool L_58;
		L_58 = Enumerable_Any_TisType_t_m73AC0FF907FFC6B1E9B1C9E8804176B00EB92517(L_57, Enumerable_Any_TisType_t_m73AC0FF907FFC6B1E9B1C9E8804176B00EB92517_RuntimeMethod_var);
		V_13 = (bool)((((int32_t)L_58) == ((int32_t)0))? 1 : 0);
		bool L_59 = V_13;
		if (!L_59)
		{
			goto IL_0175;
		}
	}
	{
		// name += type.Name;
		String_t* L_60 = V_1;
		Type_t* L_61 = ___0_type;
		NullCheck(L_61);
		String_t* L_62;
		L_62 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_61);
		String_t* L_63;
		L_63 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_60, L_62, NULL);
		V_1 = L_63;
		goto IL_01da;
	}

IL_0175:
	{
		// var genericsTic = type.Name.IndexOf('`');
		Type_t* L_64 = ___0_type;
		NullCheck(L_64);
		String_t* L_65;
		L_65 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_64);
		NullCheck(L_65);
		int32_t L_66;
		L_66 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_65, ((int32_t)96), NULL);
		V_14 = L_66;
		// if (genericsTic > 0)
		int32_t L_67 = V_14;
		V_15 = (bool)((((int32_t)L_67) > ((int32_t)0))? 1 : 0);
		bool L_68 = V_15;
		if (!L_68)
		{
			goto IL_01a7;
		}
	}
	{
		// name += type.Name.Substring(0, genericsTic);
		String_t* L_69 = V_1;
		Type_t* L_70 = ___0_type;
		NullCheck(L_70);
		String_t* L_71;
		L_71 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_70);
		int32_t L_72 = V_14;
		NullCheck(L_71);
		String_t* L_73;
		L_73 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_71, 0, L_72, NULL);
		String_t* L_74;
		L_74 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_69, L_73, NULL);
		V_1 = L_74;
	}

IL_01a7:
	{
		// name += "<" + String.Join(",", genericArguments.Select(t => CSharpName(t, includeNamespace)).ToArray()) + ">";
		String_t* L_75 = V_1;
		RuntimeObject* L_76 = V_2;
		U3CU3Ec__DisplayClass2_0_tAB0840C77123F2A797DA2837B414E58DEE35E9A9* L_77 = V_0;
		Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* L_78 = (Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121*)il2cpp_codegen_object_new(Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121_il2cpp_TypeInfo_var);
		NullCheck(L_78);
		Func_2__ctor_m059A8C7FD3318EFF79FD145F9FDA4C44E4192897(L_78, L_77, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CCSharpNameU3Eb__0_mB271DB9009C764D4CB33A03876DB554A4EEFB2C3_RuntimeMethod_var), NULL);
		RuntimeObject* L_79;
		L_79 = Enumerable_Select_TisType_t_TisString_t_m502CBD7F0EB7537D4C51DA8071B417FC79622BBD(L_76, L_78, Enumerable_Select_TisType_t_TisString_t_m502CBD7F0EB7537D4C51DA8071B417FC79622BBD_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80;
		L_80 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194(L_79, Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		String_t* L_81;
		L_81 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_80, NULL);
		String_t* L_82;
		L_82 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_75, _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, L_81, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
		V_1 = L_82;
	}

IL_01da:
	{
		// if (includeNamespace && type.Namespace != null)
		U3CU3Ec__DisplayClass2_0_tAB0840C77123F2A797DA2837B414E58DEE35E9A9* L_83 = V_0;
		NullCheck(L_83);
		bool L_84 = L_83->___includeNamespace_0;
		if (!L_84)
		{
			goto IL_01ed;
		}
	}
	{
		Type_t* L_85 = ___0_type;
		NullCheck(L_85);
		String_t* L_86;
		L_86 = VirtualFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Type::get_Namespace() */, L_85);
		G_B26_0 = ((!(((RuntimeObject*)(String_t*)L_86) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_01ee;
	}

IL_01ed:
	{
		G_B26_0 = 0;
	}

IL_01ee:
	{
		V_16 = (bool)G_B26_0;
		bool L_87 = V_16;
		if (!L_87)
		{
			goto IL_0208;
		}
	}
	{
		// name = type.Namespace + "." + name;
		Type_t* L_88 = ___0_type;
		NullCheck(L_88);
		String_t* L_89;
		L_89 = VirtualFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Type::get_Namespace() */, L_88);
		String_t* L_90 = V_1;
		String_t* L_91;
		L_91 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_89, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_90, NULL);
		V_1 = L_91;
	}

IL_0208:
	{
		// return name;
		String_t* L_92 = V_1;
		V_4 = L_92;
		goto IL_020d;
	}

IL_020d:
	{
		// }
		String_t* L_93 = V_4;
		return L_93;
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
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsTypeExtensions/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m80831530C50B87BB035A96D17E242F8B7011C105 (U3CU3Ec__DisplayClass2_0_tAB0840C77123F2A797DA2837B414E58DEE35E9A9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Unity.VisualScripting.FullSerializer.Internal.fsTypeExtensions/<>c__DisplayClass2_0::<CSharpName>b__0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec__DisplayClass2_0_U3CCSharpNameU3Eb__0_mB271DB9009C764D4CB33A03876DB554A4EEFB2C3 (U3CU3Ec__DisplayClass2_0_tAB0840C77123F2A797DA2837B414E58DEE35E9A9* __this, Type_t* ___0_t, const RuntimeMethod* method) 
{
	{
		// name += "<" + String.Join(",", genericArguments.Select(t => CSharpName(t, includeNamespace)).ToArray()) + ">";
		Type_t* L_0 = ___0_t;
		bool L_1 = __this->___includeNamespace_0;
		String_t* L_2;
		L_2 = fsTypeExtensions_CSharpName_m7B9CEB55166AB73F3E8475491EB08E4F91475FE6(L_0, L_1, NULL);
		return L_2;
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


// Conversion methods for marshalling of: Unity.VisualScripting.FullSerializer.Internal.fsVersionedType
IL2CPP_EXTERN_C void fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshal_pinvoke(const fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8& unmarshaled, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8____Ancestors_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___Ancestors_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s'.", fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8____Ancestors_0_FieldInfo_var, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Ancestors_0Exception, NULL);
}
IL2CPP_EXTERN_C void fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshal_pinvoke_back(const fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke& marshaled, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8____Ancestors_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___Ancestors_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s'.", fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8____Ancestors_0_FieldInfo_var, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Ancestors_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VisualScripting.FullSerializer.Internal.fsVersionedType
IL2CPP_EXTERN_C void fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshal_pinvoke_cleanup(fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Unity.VisualScripting.FullSerializer.Internal.fsVersionedType
IL2CPP_EXTERN_C void fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshal_com(const fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8& unmarshaled, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8____Ancestors_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___Ancestors_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s'.", fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8____Ancestors_0_FieldInfo_var, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Ancestors_0Exception, NULL);
}
IL2CPP_EXTERN_C void fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshal_com_back(const fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com& marshaled, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8____Ancestors_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___Ancestors_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s'.", fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8____Ancestors_0_FieldInfo_var, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Ancestors_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VisualScripting.FullSerializer.Internal.fsVersionedType
IL2CPP_EXTERN_C void fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshal_com_cleanup(fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com& marshaled)
{
}
// System.Object Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::Migrate(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fsVersionedType_Migrate_mA2431BCBC723C85F909F6D50CCC218ABFAED65AB (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* __this, RuntimeObject* ___0_ancestorInstance, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return Activator.CreateInstance(ModelType, ancestorInstance);
		Type_t* L_0 = __this->___ModelType_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		RuntimeObject* L_3 = ___0_ancestorInstance;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = Activator_CreateInstance_mDBC65647828F8A3D3E63807B5AEA4A4ECDE397E6(L_0, L_2, NULL);
		V_0 = L_4;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* fsVersionedType_Migrate_mA2431BCBC723C85F909F6D50CCC218ABFAED65AB_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_ancestorInstance, const RuntimeMethod* method)
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = fsVersionedType_Migrate_mA2431BCBC723C85F909F6D50CCC218ABFAED65AB(_thisAdjusted, ___0_ancestorInstance, method);
	return _returnValue;
}
// System.String Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* fsVersionedType_ToString_m584F4EBD02BC6D0502664D2047FF3D71270A359F (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DAECB44011C6849DA19ADB265B52E7819342CB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99672067F54E936644EC9C19FECCD6680688628C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4AFA59984E170FBE2C100DAB9667B97DEBC0E55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	Type_t* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	Type_t* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	{
		// return "fsVersionedType [ModelType=" + ModelType + ", VersionString=" + VersionString + ", Ancestors.Length=" + Ancestors.Length + "]";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral99672067F54E936644EC9C19FECCD6680688628C);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral99672067F54E936644EC9C19FECCD6680688628C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		Type_t* L_3 = __this->___ModelType_2;
		Type_t* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = 1;
			G_B2_2 = L_2;
			G_B2_3 = L_2;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		goto IL_0023;
	}

IL_001e:
	{
		NullCheck(G_B2_0);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
	}

IL_0023:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralB4AFA59984E170FBE2C100DAB9667B97DEBC0E55);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralB4AFA59984E170FBE2C100DAB9667B97DEBC0E55);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8 = __this->___VersionString_1;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral7DAECB44011C6849DA19ADB265B52E7819342CB7);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral7DAECB44011C6849DA19ADB265B52E7819342CB7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_11 = __this->___Ancestors_0;
		NullCheck(L_11);
		V_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_10;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		String_t* L_14;
		L_14 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_13, NULL);
		V_1 = L_14;
		goto IL_0060;
	}

IL_0060:
	{
		// }
		String_t* L_15 = V_1;
		return L_15;
	}
}
IL2CPP_EXTERN_C  String_t* fsVersionedType_ToString_m584F4EBD02BC6D0502664D2047FF3D71270A359F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = fsVersionedType_ToString_m584F4EBD02BC6D0502664D2047FF3D71270A359F(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsVersionedType_Equals_m051C07595BCB7037C2E668E0E09D0A4C74A2958F (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return
		//     obj is fsVersionedType &&
		//     ModelType == ((fsVersionedType)obj).ModelType;
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_il2cpp_TypeInfo_var)))
		{
			goto IL_0021;
		}
	}
	{
		Type_t* L_1 = __this->___ModelType_2;
		RuntimeObject* L_2 = ___0_obj;
		Type_t* L_3 = ((fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8*)UnBox(L_2, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_il2cpp_TypeInfo_var))->___ModelType_2;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool fsVersionedType_Equals_m051C07595BCB7037C2E668E0E09D0A4C74A2958F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsVersionedType_Equals_m051C07595BCB7037C2E668E0E09D0A4C74A2958F(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t fsVersionedType_GetHashCode_m02754D5563950758CECD86BE72D69DD7046C47C6 (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return ModelType.GetHashCode();
		Type_t* L_0 = __this->___ModelType_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t fsVersionedType_GetHashCode_m02754D5563950758CECD86BE72D69DD7046C47C6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = fsVersionedType_GetHashCode_m02754D5563950758CECD86BE72D69DD7046C47C6(_thisAdjusted, method);
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
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.Internal.fsVersionManager::GetVersionImportPath(System.String,Unity.VisualScripting.FullSerializer.Internal.fsVersionedType,System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsVersionManager_GetVersionImportPath_mF78001EFBFAB16E1FB6D627FB2327FAA6382BCC6 (String_t* ___0_currentVersion, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___1_targetVersion, List_1_t7182E9791DD2596935EC5EBF901871476E91B95D** ___2_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF53B32DBF05898F4578B6DA990EAF6492B8366F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9E93111D8C1F56BE86EFCF88046DA5F7C5B95E92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7182E9791DD2596935EC5EBF901871476E91B95D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE10C348A0C2B1041ABA9463F48E12ADD6FCE6AA4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF63A36CE5FB4A7C8B148AB4B8427E8FF5A711A65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// path = new List<fsVersionedType>();
		List_1_t7182E9791DD2596935EC5EBF901871476E91B95D** L_0 = ___2_path;
		List_1_t7182E9791DD2596935EC5EBF901871476E91B95D* L_1 = (List_1_t7182E9791DD2596935EC5EBF901871476E91B95D*)il2cpp_codegen_object_new(List_1_t7182E9791DD2596935EC5EBF901871476E91B95D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m9E93111D8C1F56BE86EFCF88046DA5F7C5B95E92(L_1, List_1__ctor_m9E93111D8C1F56BE86EFCF88046DA5F7C5B95E92_RuntimeMethod_var);
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_1);
		// if (GetVersionImportPathRecursive(path, currentVersion, targetVersion) == false)
		List_1_t7182E9791DD2596935EC5EBF901871476E91B95D** L_2 = ___2_path;
		List_1_t7182E9791DD2596935EC5EBF901871476E91B95D* L_3 = *((List_1_t7182E9791DD2596935EC5EBF901871476E91B95D**)L_2);
		String_t* L_4 = ___0_currentVersion;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_5 = ___1_targetVersion;
		il2cpp_codegen_runtime_class_init_inline(fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = fsVersionManager_GetVersionImportPathRecursive_mB3A3038031C067D3C072AC7FA1A6483F923360B4(L_3, L_4, L_5, NULL);
		V_0 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		// return fsResult.Fail("There is no migration path from \"" + currentVersion + "\" to \"" + targetVersion.VersionString + "\"");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralE10C348A0C2B1041ABA9463F48E12ADD6FCE6AA4);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralE10C348A0C2B1041ABA9463F48E12ADD6FCE6AA4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		String_t* L_11 = ___0_currentVersion;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_10;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralF63A36CE5FB4A7C8B148AB4B8427E8FF5A711A65);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralF63A36CE5FB4A7C8B148AB4B8427E8FF5A711A65);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_14 = ___1_targetVersion;
		String_t* L_15 = L_14.___VersionString_1;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_13;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		String_t* L_17;
		L_17 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_18;
		L_18 = fsResult_Fail_m3315594F29830C02FD560F7401D311F99DA241CD(L_17, NULL);
		V_1 = L_18;
		goto IL_0062;
	}

IL_0051:
	{
		// path.Add(targetVersion);
		List_1_t7182E9791DD2596935EC5EBF901871476E91B95D** L_19 = ___2_path;
		List_1_t7182E9791DD2596935EC5EBF901871476E91B95D* L_20 = *((List_1_t7182E9791DD2596935EC5EBF901871476E91B95D**)L_19);
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_21 = ___1_targetVersion;
		NullCheck(L_20);
		List_1_Add_mAF53B32DBF05898F4578B6DA990EAF6492B8366F_inline(L_20, L_21, List_1_Add_mAF53B32DBF05898F4578B6DA990EAF6492B8366F_RuntimeMethod_var);
		// return fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_22 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_1 = L_22;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_23 = V_1;
		return L_23;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsVersionManager::GetVersionImportPathRecursive(System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>,System.String,Unity.VisualScripting.FullSerializer.Internal.fsVersionedType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsVersionManager_GetVersionImportPathRecursive_mB3A3038031C067D3C072AC7FA1A6483F923360B4 (List_1_t7182E9791DD2596935EC5EBF901871476E91B95D* ___0_path, String_t* ___1_currentVersion, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___2_current, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF53B32DBF05898F4578B6DA990EAF6492B8366F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B4_0 = 0;
	{
		// for (var i = 0; i < current.Ancestors.Length; ++i)
		V_0 = 0;
		goto IL_0042;
	}

IL_0005:
	{
		// var ancestor = current.Ancestors[i];
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_0 = ___2_current;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_1 = L_0.___Ancestors_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// if (ancestor.VersionString == currentVersion ||
		//     GetVersionImportPathRecursive(path, currentVersion, ancestor))
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_5 = V_1;
		String_t* L_6 = L_5.___VersionString_1;
		String_t* L_7 = ___1_currentVersion;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, L_7, NULL);
		if (L_8)
		{
			goto IL_002b;
		}
	}
	{
		List_1_t7182E9791DD2596935EC5EBF901871476E91B95D* L_9 = ___0_path;
		String_t* L_10 = ___1_currentVersion;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = fsVersionManager_GetVersionImportPathRecursive_mB3A3038031C067D3C072AC7FA1A6483F923360B4(L_9, L_10, L_11, NULL);
		G_B4_0 = ((int32_t)(L_12));
		goto IL_002c;
	}

IL_002b:
	{
		G_B4_0 = 1;
	}

IL_002c:
	{
		V_2 = (bool)G_B4_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_003d;
		}
	}
	{
		// path.Add(ancestor);
		List_1_t7182E9791DD2596935EC5EBF901871476E91B95D* L_14 = ___0_path;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_15 = V_1;
		NullCheck(L_14);
		List_1_Add_mAF53B32DBF05898F4578B6DA990EAF6492B8366F_inline(L_14, L_15, List_1_Add_mAF53B32DBF05898F4578B6DA990EAF6492B8366F_RuntimeMethod_var);
		// return true;
		V_3 = (bool)1;
		goto IL_0057;
	}

IL_003d:
	{
		// for (var i = 0; i < current.Ancestors.Length; ++i)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0042:
	{
		// for (var i = 0; i < current.Ancestors.Length; ++i)
		int32_t L_17 = V_0;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_18 = ___2_current;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_19 = L_18.___Ancestors_0;
		NullCheck(L_19);
		V_4 = (bool)((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))? 1 : 0);
		bool L_20 = V_4;
		if (L_20)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0057;
	}

IL_0057:
	{
		// }
		bool L_21 = V_3;
		return L_21;
	}
}
// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType> Unity.VisualScripting.FullSerializer.Internal.fsVersionManager::GetVersionedType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A fsVersionManager_GetVersionedType_m4CF940685782769880C5341A1C3D2FC703906484 (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC7D09AD7C3ECF89B60DA6860146520364EB8405C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mF86E918079AEE87DD62ADFBB36F4135E40F2E24E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsOption_Just_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_m2924676A18A4C69DA6F8C6EEB7A1DAFA576EB5B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_GetAttribute_TisfsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38_m05C71253753EF477CA25996DA4B7A36E67881A2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* V_5 = NULL;
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	int32_t V_8 = 0;
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 V_12;
	memset((&V_12), 0, sizeof(V_12));
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B9_0 = 0;
	Type_t* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	Type_t* G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	String_t* G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	int32_t G_B17_0 = 0;
	{
		// if (_cache.TryGetValue(type, out optionalVersionedType) == false)
		il2cpp_codegen_runtime_class_init_inline(fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var);
		Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F* L_0 = ((fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_StaticFields*)il2cpp_codegen_static_fields_for(fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var))->____cache_0;
		Type_t* L_1 = ___0_type;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mC7D09AD7C3ECF89B60DA6860146520364EB8405C(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mC7D09AD7C3ECF89B60DA6860146520364EB8405C_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0165;
		}
	}
	{
		// var attr = fsPortableReflection.GetAttribute<fsObjectAttribute>(type);
		Type_t* L_4 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* L_5;
		L_5 = fsPortableReflection_GetAttribute_TisfsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38_m05C71253753EF477CA25996DA4B7A36E67881A2A(L_4, fsPortableReflection_GetAttribute_TisfsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38_m05C71253753EF477CA25996DA4B7A36E67881A2A_RuntimeMethod_var);
		V_2 = L_5;
		// if (attr != null)
		fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* L_6 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0157;
		}
	}
	{
		// if (string.IsNullOrEmpty(attr.VersionString) == false || attr.PreviousModels != null)
		fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* L_8 = V_2;
		NullCheck(L_8);
		String_t* L_9 = L_8->___VersionString_1;
		bool L_10;
		L_10 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_9, NULL);
		if (!L_10)
		{
			goto IL_0044;
		}
	}
	{
		fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* L_11 = V_2;
		NullCheck(L_11);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_12 = L_11->___PreviousModels_0;
		G_B5_0 = ((!(((RuntimeObject*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)L_12) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B5_0 = 1;
	}

IL_0045:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0156;
		}
	}
	{
		// if (attr.PreviousModels != null && string.IsNullOrEmpty(attr.VersionString))
		fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* L_14 = V_2;
		NullCheck(L_14);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_15 = L_14->___PreviousModels_0;
		if (!L_15)
		{
			goto IL_0064;
		}
	}
	{
		fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* L_16 = V_2;
		NullCheck(L_16);
		String_t* L_17 = L_16->___VersionString_1;
		bool L_18;
		L_18 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_17, NULL);
		G_B9_0 = ((int32_t)(L_18));
		goto IL_0065;
	}

IL_0064:
	{
		G_B9_0 = 0;
	}

IL_0065:
	{
		V_7 = (bool)G_B9_0;
		bool L_19 = V_7;
		if (!L_19)
		{
			goto IL_008e;
		}
	}
	{
		// throw new Exception("fsObject attribute on " + type + " contains a PreviousModels specifier - it must also include a VersionString modifier");
		Type_t* L_20 = ___0_type;
		Type_t* L_21 = L_20;
		G_B11_0 = L_21;
		G_B11_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7504EF46F36160E7DBF3DDCF3D029AD4817D3E6));
		if (L_21)
		{
			G_B12_0 = L_21;
			G_B12_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7504EF46F36160E7DBF3DDCF3D029AD4817D3E6));
			goto IL_0079;
		}
	}
	{
		G_B13_0 = ((String_t*)(NULL));
		G_B13_1 = G_B11_1;
		goto IL_007e;
	}

IL_0079:
	{
		NullCheck(G_B12_0);
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B12_0);
		G_B13_0 = L_22;
		G_B13_1 = G_B12_1;
	}

IL_007e:
	{
		String_t* L_23;
		L_23 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B13_1, G_B13_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8CFACA9928DEA240B27CC5AE59150FBE2C0E96B6)), NULL);
		Exception_t* L_24 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_24);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_24, L_23, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsVersionManager_GetVersionedType_m4CF940685782769880C5341A1C3D2FC703906484_RuntimeMethod_var)));
	}

IL_008e:
	{
		// var ancestors = new fsVersionedType[attr.PreviousModels != null ? attr.PreviousModels.Length : 0];
		fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* L_25 = V_2;
		NullCheck(L_25);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_26 = L_25->___PreviousModels_0;
		if (L_26)
		{
			goto IL_0099;
		}
	}
	{
		G_B17_0 = 0;
		goto IL_00a1;
	}

IL_0099:
	{
		fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* L_27 = V_2;
		NullCheck(L_27);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_28 = L_27->___PreviousModels_0;
		NullCheck(L_28);
		G_B17_0 = ((int32_t)(((RuntimeArray*)L_28)->max_length));
	}

IL_00a1:
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_29 = (fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F*)(fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F*)SZArrayNew(fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F_il2cpp_TypeInfo_var, (uint32_t)G_B17_0);
		V_5 = L_29;
		// for (var i = 0; i < ancestors.Length; ++i)
		V_8 = 0;
		goto IL_0105;
	}

IL_00ad:
	{
		// var ancestorType = GetVersionedType(attr.PreviousModels[i]);
		fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* L_30 = V_2;
		NullCheck(L_30);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_31 = L_30->___PreviousModels_0;
		int32_t L_32 = V_8;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		Type_t* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		il2cpp_codegen_runtime_class_init_inline(fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var);
		fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A L_35;
		L_35 = fsVersionManager_GetVersionedType_m4CF940685782769880C5341A1C3D2FC703906484(L_34, NULL);
		V_9 = L_35;
		// if (ancestorType.IsEmpty)
		bool L_36;
		L_36 = fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E((&V_9), fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_RuntimeMethod_var);
		V_10 = L_36;
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00ee;
		}
	}
	{
		// throw new Exception("Unable to create versioned type for ancestor " + ancestorType + "; please add an [fsObject(VersionString=\"...\")] attribute");
		Il2CppFakeBox<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A> L_38(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A_il2cpp_TypeInfo_var)), (&V_9));
		String_t* L_39;
		L_39 = ValueType_ToString_mFE1CB83BECC99D07BEA7EAB25AF73BE5A727C04D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_38), NULL);
		String_t* L_40;
		L_40 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral302E7C11D8C5F5B4DC0CB0C031B76B22322E35FE)), L_39, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4600E7CD4FD5EB039DB7A0180E7A8E86534BAA24)), NULL);
		Exception_t* L_41 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_41);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_41, L_40, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsVersionManager_GetVersionedType_m4CF940685782769880C5341A1C3D2FC703906484_RuntimeMethod_var)));
	}

IL_00ee:
	{
		// ancestors[i] = ancestorType.Value;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_42 = V_5;
		int32_t L_43 = V_8;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_44;
		L_44 = fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241((&V_9), fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_RuntimeMethod_var);
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8)L_44);
		// for (var i = 0; i < ancestors.Length; ++i)
		int32_t L_45 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_0105:
	{
		// for (var i = 0; i < ancestors.Length; ++i)
		int32_t L_46 = V_8;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_47 = V_5;
		NullCheck(L_47);
		V_11 = (bool)((((int32_t)L_46) < ((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length))))? 1 : 0);
		bool L_48 = V_11;
		if (L_48)
		{
			goto IL_00ad;
		}
	}
	{
		// var versionedType = new fsVersionedType
		// {
		//     Ancestors = ancestors,
		//     VersionString = attr.VersionString,
		//     ModelType = type
		// };
		il2cpp_codegen_initobj((&V_12), sizeof(fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8));
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_49 = V_5;
		(&V_12)->___Ancestors_0 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_12)->___Ancestors_0), (void*)L_49);
		fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* L_50 = V_2;
		NullCheck(L_50);
		String_t* L_51 = L_50->___VersionString_1;
		(&V_12)->___VersionString_1 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_12)->___VersionString_1), (void*)L_51);
		Type_t* L_52 = ___0_type;
		(&V_12)->___ModelType_2 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_12)->___ModelType_2), (void*)L_52);
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_53 = V_12;
		V_6 = L_53;
		// VerifyUniqueVersionStrings(versionedType);
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_54 = V_6;
		il2cpp_codegen_runtime_class_init_inline(fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var);
		fsVersionManager_VerifyUniqueVersionStrings_m930312E5E49A7FEFFAED1994F0B9633BC9BE4276(L_54, NULL);
		// VerifyConstructors(versionedType);
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_55 = V_6;
		fsVersionManager_VerifyConstructors_m8411C5605527031779BFE91B425DF200A968ACD7(L_55, NULL);
		// optionalVersionedType = fsOption.Just(versionedType);
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_56 = V_6;
		fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A L_57;
		L_57 = fsOption_Just_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_m2924676A18A4C69DA6F8C6EEB7A1DAFA576EB5B0(L_56, fsOption_Just_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_m2924676A18A4C69DA6F8C6EEB7A1DAFA576EB5B0_RuntimeMethod_var);
		V_0 = L_57;
	}

IL_0156:
	{
	}

IL_0157:
	{
		// _cache[type] = optionalVersionedType;
		il2cpp_codegen_runtime_class_init_inline(fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var);
		Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F* L_58 = ((fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_StaticFields*)il2cpp_codegen_static_fields_for(fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var))->____cache_0;
		Type_t* L_59 = ___0_type;
		fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A L_60 = V_0;
		NullCheck(L_58);
		Dictionary_2_set_Item_mF86E918079AEE87DD62ADFBB36F4135E40F2E24E(L_58, L_59, L_60, Dictionary_2_set_Item_mF86E918079AEE87DD62ADFBB36F4135E40F2E24E_RuntimeMethod_var);
	}

IL_0165:
	{
		// return optionalVersionedType;
		fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A L_61 = V_0;
		V_13 = L_61;
		goto IL_016a;
	}

IL_016a:
	{
		// }
		fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A L_62 = V_13;
		return L_62;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsVersionManager::VerifyConstructors(Unity.VisualScripting.FullSerializer.Internal.fsVersionedType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsVersionManager_VerifyConstructors_m8411C5605527031779BFE91B425DF200A968ACD7 (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* V_0 = NULL;
	int32_t V_1 = 0;
	Type_t* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B5_0 = 0;
	{
		// var publicConstructors = type.ModelType.GetDeclaredConstructors();
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_0 = ___0_type;
		Type_t* L_1 = L_0.___ModelType_2;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* L_2;
		L_2 = fsPortableReflection_GetDeclaredConstructors_mB5B777C7EC535253A345584074FC1D8FBA32160A(L_1, NULL);
		V_0 = L_2;
		// for (var i = 0; i < type.Ancestors.Length; ++i)
		V_1 = 0;
		goto IL_008c;
	}

IL_0011:
	{
		// var requiredConstructorType = type.Ancestors[i].ModelType;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_3 = ___0_type;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_4 = L_3.___Ancestors_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Type_t* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___ModelType_2;
		V_2 = L_6;
		// var found = false;
		V_3 = (bool)0;
		// for (var j = 0; j < publicConstructors.Length; ++j)
		V_4 = 0;
		goto IL_0062;
	}

IL_002b:
	{
		// var parameters = publicConstructors[j].GetParameters();
		ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* L_7 = V_0;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_11;
		L_11 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(16 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_10);
		V_5 = L_11;
		// if (parameters.Length == 1 && parameters[0].ParameterType == requiredConstructorType)
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_12 = V_5;
		NullCheck(L_12);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))) == ((uint32_t)1))))
		{
			goto IL_004f;
		}
	}
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_13 = V_5;
		NullCheck(L_13);
		int32_t L_14 = 0;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_15);
		Type_t* L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_17, NULL);
		G_B5_0 = ((int32_t)(L_18));
		goto IL_0050;
	}

IL_004f:
	{
		G_B5_0 = 0;
	}

IL_0050:
	{
		V_6 = (bool)G_B5_0;
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_005b;
		}
	}
	{
		// found = true;
		V_3 = (bool)1;
		// break;
		goto IL_006f;
	}

IL_005b:
	{
		// for (var j = 0; j < publicConstructors.Length; ++j)
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0062:
	{
		// for (var j = 0; j < publicConstructors.Length; ++j)
		int32_t L_21 = V_4;
		ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* L_22 = V_0;
		NullCheck(L_22);
		V_7 = (bool)((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))? 1 : 0);
		bool L_23 = V_7;
		if (L_23)
		{
			goto IL_002b;
		}
	}

IL_006f:
	{
		// if (found == false)
		bool L_24 = V_3;
		V_8 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_0087;
		}
	}
	{
		// throw new fsMissingVersionConstructorException(type.ModelType, requiredConstructorType);
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_26 = ___0_type;
		Type_t* L_27 = L_26.___ModelType_2;
		Type_t* L_28 = V_2;
		fsMissingVersionConstructorException_tE6DE04E84EDA9AFAB8D627E6BCA19BE39C7235DE* L_29 = (fsMissingVersionConstructorException_tE6DE04E84EDA9AFAB8D627E6BCA19BE39C7235DE*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsMissingVersionConstructorException_tE6DE04E84EDA9AFAB8D627E6BCA19BE39C7235DE_il2cpp_TypeInfo_var)));
		NullCheck(L_29);
		fsMissingVersionConstructorException__ctor_m46EA05FE262E8C98465A921D2B2EB6035ED3FEFB(L_29, L_27, L_28, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsVersionManager_VerifyConstructors_m8411C5605527031779BFE91B425DF200A968ACD7_RuntimeMethod_var)));
	}

IL_0087:
	{
		// for (var i = 0; i < type.Ancestors.Length; ++i)
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_008c:
	{
		// for (var i = 0; i < type.Ancestors.Length; ++i)
		int32_t L_31 = V_1;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_32 = ___0_type;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_33 = L_32.___Ancestors_0;
		NullCheck(L_33);
		V_9 = (bool)((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))? 1 : 0);
		bool L_34 = V_9;
		if (L_34)
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsVersionManager::VerifyUniqueVersionStrings(Unity.VisualScripting.FullSerializer.Internal.fsVersionedType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsVersionManager_VerifyUniqueVersionStrings_m930312E5E49A7FEFFAED1994F0B9633BC9BE4276 (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4EC9A321B5DBDCB0E9249FFE9074D45472E5D933_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEE2A06608BDDA14C7170B0039FF13E2DCE84EEE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m54E80CEB7DA8D9BE61571B0F602A47B14C0FC0C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m18D26287FE9A32E930D02B66939DFB31D5FCF78F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mF9F0CCD361DD36335F701637DB0A91CDFCD40E19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m651F8A9D673A33075773C8090B4EA59E2C4916BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* V_0 = NULL;
	Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* V_1 = NULL;
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* V_4 = NULL;
	int32_t V_5 = 0;
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	int32_t G_B4_0 = 0;
	{
		// var found = new Dictionary<string, Type>();
		Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_0 = (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*)il2cpp_codegen_object_new(Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428(L_0, Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428_RuntimeMethod_var);
		V_0 = L_0;
		// var remaining = new Queue<fsVersionedType>();
		Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* L_1 = (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A*)il2cpp_codegen_object_new(Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Queue_1__ctor_mF9F0CCD361DD36335F701637DB0A91CDFCD40E19(L_1, Queue_1__ctor_mF9F0CCD361DD36335F701637DB0A91CDFCD40E19_RuntimeMethod_var);
		V_1 = L_1;
		// remaining.Enqueue(type);
		Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* L_2 = V_1;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_3 = ___0_type;
		NullCheck(L_2);
		Queue_1_Enqueue_m18D26287FE9A32E930D02B66939DFB31D5FCF78F(L_2, L_3, Queue_1_Enqueue_m18D26287FE9A32E930D02B66939DFB31D5FCF78F_RuntimeMethod_var);
		goto IL_00b3;
	}

IL_001a:
	{
		// var item = remaining.Dequeue();
		Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* L_4 = V_1;
		NullCheck(L_4);
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_5;
		L_5 = Queue_1_Dequeue_m54E80CEB7DA8D9BE61571B0F602A47B14C0FC0C2(L_4, Queue_1_Dequeue_m54E80CEB7DA8D9BE61571B0F602A47B14C0FC0C2_RuntimeMethod_var);
		V_2 = L_5;
		// if (found.ContainsKey(item.VersionString) && found[item.VersionString] != item.ModelType)
		Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_6 = V_0;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_7 = V_2;
		String_t* L_8 = L_7.___VersionString_1;
		NullCheck(L_6);
		bool L_9;
		L_9 = Dictionary_2_ContainsKey_m4EC9A321B5DBDCB0E9249FFE9074D45472E5D933(L_6, L_8, Dictionary_2_ContainsKey_m4EC9A321B5DBDCB0E9249FFE9074D45472E5D933_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_0049;
		}
	}
	{
		Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_10 = V_0;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_11 = V_2;
		String_t* L_12 = L_11.___VersionString_1;
		NullCheck(L_10);
		Type_t* L_13;
		L_13 = Dictionary_2_get_Item_mEE2A06608BDDA14C7170B0039FF13E2DCE84EEE9(L_10, L_12, Dictionary_2_get_Item_mEE2A06608BDDA14C7170B0039FF13E2DCE84EEE9_RuntimeMethod_var);
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_14 = V_2;
		Type_t* L_15 = L_14.___ModelType_2;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_13, L_15, NULL);
		G_B4_0 = ((int32_t)(L_16));
		goto IL_004a;
	}

IL_0049:
	{
		G_B4_0 = 0;
	}

IL_004a:
	{
		V_3 = (bool)G_B4_0;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_006d;
		}
	}
	{
		// throw new fsDuplicateVersionNameException(found[item.VersionString], item.ModelType, item.VersionString);
		Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_18 = V_0;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_19 = V_2;
		String_t* L_20 = L_19.___VersionString_1;
		NullCheck(L_18);
		Type_t* L_21;
		L_21 = Dictionary_2_get_Item_mEE2A06608BDDA14C7170B0039FF13E2DCE84EEE9(L_18, L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Dictionary_2_get_Item_mEE2A06608BDDA14C7170B0039FF13E2DCE84EEE9_RuntimeMethod_var)));
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_22 = V_2;
		Type_t* L_23 = L_22.___ModelType_2;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_24 = V_2;
		String_t* L_25 = L_24.___VersionString_1;
		fsDuplicateVersionNameException_tAC800EE7692EB781843D91C2158A431897E11640* L_26 = (fsDuplicateVersionNameException_tAC800EE7692EB781843D91C2158A431897E11640*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsDuplicateVersionNameException_tAC800EE7692EB781843D91C2158A431897E11640_il2cpp_TypeInfo_var)));
		NullCheck(L_26);
		fsDuplicateVersionNameException__ctor_m0CA794E21F56EBADEED2971C6E9DC603CAA0AF51(L_26, L_21, L_23, L_25, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsVersionManager_VerifyUniqueVersionStrings_m930312E5E49A7FEFFAED1994F0B9633BC9BE4276_RuntimeMethod_var)));
	}

IL_006d:
	{
		// found[item.VersionString] = item.ModelType;
		Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_27 = V_0;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_28 = V_2;
		String_t* L_29 = L_28.___VersionString_1;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_30 = V_2;
		Type_t* L_31 = L_30.___ModelType_2;
		NullCheck(L_27);
		Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38(L_27, L_29, L_31, Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38_RuntimeMethod_var);
		// foreach (var ancestor in item.Ancestors)
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_32 = V_2;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_33 = L_32.___Ancestors_0;
		V_4 = L_33;
		V_5 = 0;
		goto IL_00aa;
	}

IL_008e:
	{
		// foreach (var ancestor in item.Ancestors)
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_34 = V_4;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_6 = L_37;
		// remaining.Enqueue(ancestor);
		Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* L_38 = V_1;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_39 = V_6;
		NullCheck(L_38);
		Queue_1_Enqueue_m18D26287FE9A32E930D02B66939DFB31D5FCF78F(L_38, L_39, Queue_1_Enqueue_m18D26287FE9A32E930D02B66939DFB31D5FCF78F_RuntimeMethod_var);
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00aa:
	{
		// foreach (var ancestor in item.Ancestors)
		int32_t L_41 = V_5;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_42 = V_4;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_008e;
		}
	}
	{
	}

IL_00b3:
	{
		// while (remaining.Count > 0)
		Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* L_43 = V_1;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = Queue_1_get_Count_m651F8A9D673A33075773C8090B4EA59E2C4916BB_inline(L_43, Queue_1_get_Count_m651F8A9D673A33075773C8090B4EA59E2C4916BB_RuntimeMethod_var);
		V_7 = (bool)((((int32_t)L_44) > ((int32_t)0))? 1 : 0);
		bool L_45 = V_7;
		if (L_45)
		{
			goto IL_001a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsVersionManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsVersionManager__cctor_m54A1308F62862C4480603F2633A6DAB7362EBF92 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC2BE576BC0A6111C417951E5B8D2B17B28D6E3E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Dictionary<Type, fsOption<fsVersionedType>> _cache = new Dictionary<Type, fsOption<fsVersionedType>>();
		Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F* L_0 = (Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F*)il2cpp_codegen_object_new(Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC2BE576BC0A6111C417951E5B8D2B17B28D6E3E1(L_0, Dictionary_2__ctor_mC2BE576BC0A6111C417951E5B8D2B17B28D6E3E1_RuntimeMethod_var);
		((fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_StaticFields*)il2cpp_codegen_static_fields_for(fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var))->____cache_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_StaticFields*)il2cpp_codegen_static_fields_for(fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var))->____cache_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mAF53B32DBF05898F4578B6DA990EAF6492B8366F_gshared_inline (List_1_t7182E9791DD2596935EC5EBF901871476E91B95D* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_item, const RuntimeMethod* method) 
{
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_6 = V_0;
		int32_t L_7 = V_1;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8)L_8);
		return;
	}

IL_0034:
	{
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_9 = ___0_item;
		((  void (*) (List_1_t7182E9791DD2596935EC5EBF901871476E91B95D*, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m651F8A9D673A33075773C8090B4EA59E2C4916BB_gshared_inline (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_3;
		return L_0;
	}
}
