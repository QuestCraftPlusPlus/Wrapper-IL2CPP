#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// unity.libwebp.Interop.NativeTypeNameAttribute
struct NativeTypeNameAttribute_tE5EC4F7E89DEC7E6ED1010E287691C7E1D143FBA;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// WebP.Texture2DExt/ScalingFunction
struct ScalingFunction_t1D0FC4CAF370AADB695D32F2A2FED84C4882CB40;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VP8StatusCode_t696A07C6E19C1232322C933B41947D7DE5DD4AAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral18BBD9FF95EF433922AAA6EC8DAB73350575E33A;
IL2CPP_EXTERN_C String_t* _stringLiteral68E9D0200D63EB16B9247F1DF95AEA1449C358C5;
IL2CPP_EXTERN_C String_t* _stringLiteral6E895C5929F24EA7F5357BAB0B0C22B9F9801614;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E7326BEE3CECC4D134714BC2BD923677047CC1;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2DExt_GetWebPDimensions_mFEDCA454D7C7435D3E9447EBA833167DED5F69A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2DExt_LoadRGBAFromWebP_m150314BA100E346FCCD25E882EDCAAB5005D3B36_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t2021B84442184BBD7EDE54B3AA42320BC8679709 
{
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// unity.libwebp.NativeLibwebp
struct NativeLibwebp_tFA3D3BA71D9AACD39EE270E50009D7D6AB0F0249  : public RuntimeObject
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

// WebP.Texture2DExt
struct Texture2DExt_tD5E5EB20FF599F68039392A519A34E9506B7574A  : public RuntimeObject
{
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// unity.libwebp.Interop.NativeTypeNameAttribute
struct NativeTypeNameAttribute_tE5EC4F7E89DEC7E6ED1010E287691C7E1D143FBA  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.UIntPtr
struct UIntPtr_t 
{
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;
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

// unity.libwebp.Interop.WebPBitstreamFeatures/<pad>e__FixedBuffer
struct U3CpadU3Ee__FixedBuffer_tA2EBA175A51AACD20349883C99BE0F449319729A 
{
	union
	{
		struct
		{
			// System.UInt32 unity.libwebp.Interop.WebPBitstreamFeatures/<pad>e__FixedBuffer::FixedElementField
			uint32_t ___FixedElementField_0;
		};
		uint8_t U3CpadU3Ee__FixedBuffer_tA2EBA175A51AACD20349883C99BE0F449319729A__padding[20];
	};
};

// unity.libwebp.Interop.WebPDecBuffer/<pad>e__FixedBuffer
struct U3CpadU3Ee__FixedBuffer_t3E722EC2E8C180E4AF11403A66A85BE0AC419BD4 
{
	union
	{
		struct
		{
			// System.UInt32 unity.libwebp.Interop.WebPDecBuffer/<pad>e__FixedBuffer::FixedElementField
			uint32_t ___FixedElementField_0;
		};
		uint8_t U3CpadU3Ee__FixedBuffer_t3E722EC2E8C180E4AF11403A66A85BE0AC419BD4__padding[16];
	};
};

// unity.libwebp.Interop.WebPDecoderOptions/<pad>e__FixedBuffer
struct U3CpadU3Ee__FixedBuffer_tE6276F2E57A8DB4446D687C120123BDF1E271C23 
{
	union
	{
		struct
		{
			// System.UInt32 unity.libwebp.Interop.WebPDecoderOptions/<pad>e__FixedBuffer::FixedElementField
			uint32_t ___FixedElementField_0;
		};
		uint8_t U3CpadU3Ee__FixedBuffer_tE6276F2E57A8DB4446D687C120123BDF1E271C23__padding[20];
	};
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

// WebP.Error
struct Error_t60455CC396BD9B46442FCE06B935DF058587ADE9 
{
	// System.Int32 WebP.Error::value__
	int32_t ___value___2;
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

// UnityEngine.Experimental.Rendering.GraphicsFormat
struct GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713 
{
	// System.Int32 UnityEngine.Experimental.Rendering.GraphicsFormat::value__
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

// UnityEngine.TextureFormat
struct TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D 
{
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;
};

// unity.libwebp.Interop.VP8StatusCode
struct VP8StatusCode_t696A07C6E19C1232322C933B41947D7DE5DD4AAF 
{
	// System.Int32 unity.libwebp.Interop.VP8StatusCode::value__
	int32_t ___value___2;
};

// unity.libwebp.Interop.WEBP_CSP_MODE
struct WEBP_CSP_MODE_t54FCD1E191C4439901F92940F5164D1F4DFCB7C3 
{
	// System.Int32 unity.libwebp.Interop.WEBP_CSP_MODE::value__
	int32_t ___value___2;
};

// unity.libwebp.Interop.WebPBitstreamFeatures
struct WebPBitstreamFeatures_tF9A5B6D765AEB88F82BE8D52269DE63F04DF0E06 
{
	// System.Int32 unity.libwebp.Interop.WebPBitstreamFeatures::width
	int32_t ___width_0;
	// System.Int32 unity.libwebp.Interop.WebPBitstreamFeatures::height
	int32_t ___height_1;
	// System.Int32 unity.libwebp.Interop.WebPBitstreamFeatures::has_alpha
	int32_t ___has_alpha_2;
	// System.Int32 unity.libwebp.Interop.WebPBitstreamFeatures::has_animation
	int32_t ___has_animation_3;
	// System.Int32 unity.libwebp.Interop.WebPBitstreamFeatures::format
	int32_t ___format_4;
	// unity.libwebp.Interop.WebPBitstreamFeatures/<pad>e__FixedBuffer unity.libwebp.Interop.WebPBitstreamFeatures::pad
	U3CpadU3Ee__FixedBuffer_tA2EBA175A51AACD20349883C99BE0F449319729A ___pad_5;
};

// unity.libwebp.Interop.WebPDecoderOptions
struct WebPDecoderOptions_tCBC5B4D729CD4ECFE22655E4C917DA46C8F3355C 
{
	// System.Int32 unity.libwebp.Interop.WebPDecoderOptions::bypass_filtering
	int32_t ___bypass_filtering_0;
	// System.Int32 unity.libwebp.Interop.WebPDecoderOptions::no_fancy_upsampling
	int32_t ___no_fancy_upsampling_1;
	// System.Int32 unity.libwebp.Interop.WebPDecoderOptions::use_cropping
	int32_t ___use_cropping_2;
	// System.Int32 unity.libwebp.Interop.WebPDecoderOptions::crop_left
	int32_t ___crop_left_3;
	// System.Int32 unity.libwebp.Interop.WebPDecoderOptions::crop_top
	int32_t ___crop_top_4;
	// System.Int32 unity.libwebp.Interop.WebPDecoderOptions::crop_width
	int32_t ___crop_width_5;
	// System.Int32 unity.libwebp.Interop.WebPDecoderOptions::crop_height
	int32_t ___crop_height_6;
	// System.Int32 unity.libwebp.Interop.WebPDecoderOptions::use_scaling
	int32_t ___use_scaling_7;
	// System.Int32 unity.libwebp.Interop.WebPDecoderOptions::scaled_width
	int32_t ___scaled_width_8;
	// System.Int32 unity.libwebp.Interop.WebPDecoderOptions::scaled_height
	int32_t ___scaled_height_9;
	// System.Int32 unity.libwebp.Interop.WebPDecoderOptions::use_threads
	int32_t ___use_threads_10;
	// System.Int32 unity.libwebp.Interop.WebPDecoderOptions::dithering_strength
	int32_t ___dithering_strength_11;
	// System.Int32 unity.libwebp.Interop.WebPDecoderOptions::flip
	int32_t ___flip_12;
	// System.Int32 unity.libwebp.Interop.WebPDecoderOptions::alpha_dithering_strength
	int32_t ___alpha_dithering_strength_13;
	// unity.libwebp.Interop.WebPDecoderOptions/<pad>e__FixedBuffer unity.libwebp.Interop.WebPDecoderOptions::pad
	U3CpadU3Ee__FixedBuffer_tE6276F2E57A8DB4446D687C120123BDF1E271C23 ___pad_14;
};

// unity.libwebp.Interop.WebPRGBABuffer
struct WebPRGBABuffer_t303C8D4AE7BDA5D322CB344EDDF809A1F9B847F7 
{
	// System.Byte* unity.libwebp.Interop.WebPRGBABuffer::rgba
	uint8_t* ___rgba_0;
	// System.Int32 unity.libwebp.Interop.WebPRGBABuffer::stride
	int32_t ___stride_1;
	// System.UIntPtr unity.libwebp.Interop.WebPRGBABuffer::size
	uintptr_t ___size_2;
};

// unity.libwebp.Interop.WebPYUVABuffer
struct WebPYUVABuffer_tE1EF3866D95D9274F262BC76E3014D76D04D785E 
{
	// System.Byte* unity.libwebp.Interop.WebPYUVABuffer::y
	uint8_t* ___y_0;
	// System.Byte* unity.libwebp.Interop.WebPYUVABuffer::u
	uint8_t* ___u_1;
	// System.Byte* unity.libwebp.Interop.WebPYUVABuffer::v
	uint8_t* ___v_2;
	// System.Byte* unity.libwebp.Interop.WebPYUVABuffer::a
	uint8_t* ___a_3;
	// System.Int32 unity.libwebp.Interop.WebPYUVABuffer::y_stride
	int32_t ___y_stride_4;
	// System.Int32 unity.libwebp.Interop.WebPYUVABuffer::u_stride
	int32_t ___u_stride_5;
	// System.Int32 unity.libwebp.Interop.WebPYUVABuffer::v_stride
	int32_t ___v_stride_6;
	// System.Int32 unity.libwebp.Interop.WebPYUVABuffer::a_stride
	int32_t ___a_stride_7;
	// System.UIntPtr unity.libwebp.Interop.WebPYUVABuffer::y_size
	uintptr_t ___y_size_8;
	// System.UIntPtr unity.libwebp.Interop.WebPYUVABuffer::u_size
	uintptr_t ___u_size_9;
	// System.UIntPtr unity.libwebp.Interop.WebPYUVABuffer::v_size
	uintptr_t ___v_size_10;
	// System.UIntPtr unity.libwebp.Interop.WebPYUVABuffer::a_size
	uintptr_t ___a_size_11;
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

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// unity.libwebp.Interop.WebPDecBuffer/_u_e__Union
struct _u_e__Union_t89F42D82660AE0DF7ACA5E40B897094EBC44306A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// unity.libwebp.Interop.WebPRGBABuffer unity.libwebp.Interop.WebPDecBuffer/_u_e__Union::RGBA
			WebPRGBABuffer_t303C8D4AE7BDA5D322CB344EDDF809A1F9B847F7 ___RGBA_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			WebPRGBABuffer_t303C8D4AE7BDA5D322CB344EDDF809A1F9B847F7 ___RGBA_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// unity.libwebp.Interop.WebPYUVABuffer unity.libwebp.Interop.WebPDecBuffer/_u_e__Union::YUVA
			WebPYUVABuffer_tE1EF3866D95D9274F262BC76E3014D76D04D785E ___YUVA_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			WebPYUVABuffer_tE1EF3866D95D9274F262BC76E3014D76D04D785E ___YUVA_1_forAlignmentOnly;
		};
	};
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// unity.libwebp.Interop.WebPDecBuffer
struct WebPDecBuffer_t8052DC32BDD5A183F35B244855142168A176582F 
{
	// unity.libwebp.Interop.WEBP_CSP_MODE unity.libwebp.Interop.WebPDecBuffer::colorspace
	int32_t ___colorspace_0;
	// System.Int32 unity.libwebp.Interop.WebPDecBuffer::width
	int32_t ___width_1;
	// System.Int32 unity.libwebp.Interop.WebPDecBuffer::height
	int32_t ___height_2;
	// System.Int32 unity.libwebp.Interop.WebPDecBuffer::is_external_memory
	int32_t ___is_external_memory_3;
	// unity.libwebp.Interop.WebPDecBuffer/_u_e__Union unity.libwebp.Interop.WebPDecBuffer::u
	_u_e__Union_t89F42D82660AE0DF7ACA5E40B897094EBC44306A ___u_4;
	// unity.libwebp.Interop.WebPDecBuffer/<pad>e__FixedBuffer unity.libwebp.Interop.WebPDecBuffer::pad
	U3CpadU3Ee__FixedBuffer_t3E722EC2E8C180E4AF11403A66A85BE0AC419BD4 ___pad_5;
	// System.Byte* unity.libwebp.Interop.WebPDecBuffer::private_memory
	uint8_t* ___private_memory_6;
};

// WebP.Texture2DExt/ScalingFunction
struct ScalingFunction_t1D0FC4CAF370AADB695D32F2A2FED84C4882CB40  : public MulticastDelegate_t
{
};

// unity.libwebp.Interop.WebPDecoderConfig
struct WebPDecoderConfig_t200F3A6A3B99C51064A8102F7103FD597A72F2AB 
{
	// unity.libwebp.Interop.WebPBitstreamFeatures unity.libwebp.Interop.WebPDecoderConfig::input
	WebPBitstreamFeatures_tF9A5B6D765AEB88F82BE8D52269DE63F04DF0E06 ___input_0;
	// unity.libwebp.Interop.WebPDecBuffer unity.libwebp.Interop.WebPDecoderConfig::output
	WebPDecBuffer_t8052DC32BDD5A183F35B244855142168A176582F ___output_1;
	// unity.libwebp.Interop.WebPDecoderOptions unity.libwebp.Interop.WebPDecoderConfig::options
	WebPDecoderOptions_tCBC5B4D729CD4ECFE22655E4C917DA46C8F3355C ___options_2;
};

// <Module>

// <Module>

// System.Attribute

// System.Attribute

// unity.libwebp.NativeLibwebp

// unity.libwebp.NativeLibwebp

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// WebP.Texture2DExt

// WebP.Texture2DExt

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

// System.Double

// System.Double

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// unity.libwebp.Interop.NativeTypeNameAttribute

// unity.libwebp.Interop.NativeTypeNameAttribute

// System.Single

// System.Single

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.UIntPtr
struct UIntPtr_t_StaticFields
{
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;
};

// System.UIntPtr

// System.Void

// System.Void

// unity.libwebp.Interop.WebPBitstreamFeatures/<pad>e__FixedBuffer

// unity.libwebp.Interop.WebPBitstreamFeatures/<pad>e__FixedBuffer

// unity.libwebp.Interop.WebPDecBuffer/<pad>e__FixedBuffer

// unity.libwebp.Interop.WebPDecBuffer/<pad>e__FixedBuffer

// unity.libwebp.Interop.WebPDecoderOptions/<pad>e__FixedBuffer

// unity.libwebp.Interop.WebPDecoderOptions/<pad>e__FixedBuffer

// System.Delegate

// System.Delegate

// WebP.Error

// WebP.Error

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Experimental.Rendering.GraphicsFormat

// UnityEngine.Experimental.Rendering.GraphicsFormat

// UnityEngine.TextureFormat

// UnityEngine.TextureFormat

// unity.libwebp.Interop.VP8StatusCode

// unity.libwebp.Interop.VP8StatusCode

// unity.libwebp.Interop.WEBP_CSP_MODE

// unity.libwebp.Interop.WEBP_CSP_MODE

// unity.libwebp.Interop.WebPBitstreamFeatures

// unity.libwebp.Interop.WebPBitstreamFeatures

// unity.libwebp.Interop.WebPDecoderOptions

// unity.libwebp.Interop.WebPDecoderOptions

// unity.libwebp.Interop.WebPRGBABuffer

// unity.libwebp.Interop.WebPRGBABuffer

// unity.libwebp.Interop.WebPYUVABuffer

// unity.libwebp.Interop.WebPYUVABuffer

// unity.libwebp.Interop.WebPDecBuffer/_u_e__Union

// unity.libwebp.Interop.WebPDecBuffer/_u_e__Union

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// unity.libwebp.Interop.WebPDecBuffer

// unity.libwebp.Interop.WebPDecBuffer

// WebP.Texture2DExt/ScalingFunction

// WebP.Texture2DExt/ScalingFunction

// unity.libwebp.Interop.WebPDecoderConfig

// unity.libwebp.Interop.WebPDecoderConfig
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
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// unity.libwebp.Interop.VP8StatusCode unity.libwebp.NativeLibwebp::WebPGetFeaturesInternal(System.Byte*,System.UIntPtr,unity.libwebp.Interop.WebPBitstreamFeatures*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibwebp_WebPGetFeaturesInternal_m354BBE8EF07C34F2B222D9661F39012F0D389CA7 (uint8_t* ___0_param0, uintptr_t ___1_param1, WebPBitstreamFeatures_tF9A5B6D765AEB88F82BE8D52269DE63F04DF0E06* ___2_param2, int32_t ___3_param3, const RuntimeMethod* method) ;
// System.Int32 unity.libwebp.NativeLibwebp::WebPInitDecoderConfigInternal(unity.libwebp.Interop.WebPDecoderConfig*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibwebp_WebPInitDecoderConfigInternal_m7BA81262A67DE25D4142D5CCB755926F218879E6 (WebPDecoderConfig_t200F3A6A3B99C51064A8102F7103FD597A72F2AB* ___0_param0, int32_t ___1_param1, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.UIntPtr System.UIntPtr::op_Explicit(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8 (uint64_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 unity.libwebp.NativeLibwebp::WebPGetInfo(System.Byte*,System.UIntPtr,System.Int32*,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibwebp_WebPGetInfo_m696555436BA98E3DB6A7924BC36E1C5E9C928BE8 (uint8_t* ___0_data, uintptr_t ___1_data_size, int32_t* ___2_width, int32_t* ___3_height, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void WebP.Texture2DExt/ScalingFunction::Invoke(System.Int32&,System.Int32&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScalingFunction_Invoke_mE17AC87523B58DA6B517DE9E5CF7FC5561CFA799_inline (ScalingFunction_t1D0FC4CAF370AADB695D32F2A2FED84C4882CB40* __this, int32_t* ___0_width, int32_t* ___1_height, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Int32 unity.libwebp.NativeLibwebp::WebPInitDecoderConfig(unity.libwebp.Interop.WebPDecoderConfig*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibwebp_WebPInitDecoderConfig_m9976305FF94CDE857404F529FC97903451BAFE75 (WebPDecoderConfig_t200F3A6A3B99C51064A8102F7103FD597A72F2AB* ___0_config, const RuntimeMethod* method) ;
// unity.libwebp.Interop.VP8StatusCode unity.libwebp.NativeLibwebp::WebPGetFeatures(System.Byte*,System.UIntPtr,unity.libwebp.Interop.WebPBitstreamFeatures*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibwebp_WebPGetFeatures_m39884CA49534BCF6568CE3E49CCB99C95DA32786 (uint8_t* ___0_data, uintptr_t ___1_data_size, WebPBitstreamFeatures_tF9A5B6D765AEB88F82BE8D52269DE63F04DF0E06* ___2_features, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// unity.libwebp.Interop.VP8StatusCode unity.libwebp.NativeLibwebp::WebPDecode(System.Byte*,System.UIntPtr,unity.libwebp.Interop.WebPDecoderConfig*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibwebp_WebPDecode_mC0EAA4E6F850FDE91496C78958574071CF090A8D (uint8_t* ___0_data, uintptr_t ___1_data_size, WebPDecoderConfig_t200F3A6A3B99C51064A8102F7103FD597A72F2AB* ___2_config, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat(UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_mE38154E9B9C810EDAF2FAD3E1F1CD856FFC13F3C (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.Experimental.Rendering.GraphicsFormatUtility::ComputeMipmapSize(System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t GraphicsFormatUtility_ComputeMipmapSize_m34883B0890B84D62E41BAE90A33CABBFBE905DD6 (int32_t ___0_width, int32_t ___1_height, int32_t ___2_format, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mB1445796B2A76B3D867B2603205F513AF494B9F3 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_textureFormat, int32_t ___3_mipCount, bool ___4_linear, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_textureFormat, bool ___3_mipChain, bool ___4_linear, const RuntimeMethod* method) ;
// System.Void WebP.Texture2DExt::GetWebPDimensions(System.Byte[],System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2DExt_GetWebPDimensions_mFEDCA454D7C7435D3E9447EBA833167DED5F69A3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_lData, int32_t* ___1_lWidth, int32_t* ___2_lHeight, const RuntimeMethod* method) ;
// System.Byte[] WebP.Texture2DExt::LoadRGBAFromWebP(System.Byte[],System.Int32&,System.Int32&,System.Boolean,WebP.Error&,WebP.Texture2DExt/ScalingFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Texture2DExt_LoadRGBAFromWebP_m150314BA100E346FCCD25E882EDCAAB5005D3B36 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_lData, int32_t* ___1_lWidth, int32_t* ___2_lHeight, bool ___3_lMipmaps, int32_t* ___4_lError, ScalingFunction_t1D0FC4CAF370AADB695D32F2A2FED84C4882CB40* ___5_scalingFunction, const RuntimeMethod* method) ;
// UnityEngine.Texture2D WebP.Texture2DExt::CreateWebpTexture2D(System.Int32,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Texture2DExt_CreateWebpTexture2D_m848D661BA72CA0BD079F557592F4098C48810EE4 (int32_t ___0_width, int32_t ___1_height, bool ___2_isUseMipmap, bool ___3_isLinear, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::LoadRawTextureData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_LoadRawTextureData_mB8D1DEB5FF8715A871D8043D48C9054FCFF4ED1B (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, bool ___0_updateMipmaps, bool ___1_makeNoLongerReadable, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webp_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL WebPGetInfo(uint8_t*, uintptr_t, int32_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webp_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL WebPGetFeaturesInternal(uint8_t*, uintptr_t, WebPBitstreamFeatures_tF9A5B6D765AEB88F82BE8D52269DE63F04DF0E06*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webp_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL WebPInitDecoderConfigInternal(WebPDecoderConfig_t200F3A6A3B99C51064A8102F7103FD597A72F2AB*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webp_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL WebPDecode(uint8_t*, uintptr_t, WebPDecoderConfig_t200F3A6A3B99C51064A8102F7103FD597A72F2AB*);
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
// System.Int32 unity.libwebp.NativeLibwebp::WebPGetInfo(System.Byte*,System.UIntPtr,System.Int32*,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibwebp_WebPGetInfo_m696555436BA98E3DB6A7924BC36E1C5E9C928BE8 (uint8_t* ___0_data, uintptr_t ___1_data_size, int32_t* ___2_width, int32_t* ___3_height, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (uint8_t*, uintptr_t, int32_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint8_t*) + sizeof(uintptr_t) + sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webp"), "WebPGetInfo", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webp_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebPGetInfo)(___0_data, ___1_data_size, ___2_width, ___3_height);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_data, ___1_data_size, ___2_width, ___3_height);
	#endif

	return returnValue;
}
// unity.libwebp.Interop.VP8StatusCode unity.libwebp.NativeLibwebp::WebPGetFeaturesInternal(System.Byte*,System.UIntPtr,unity.libwebp.Interop.WebPBitstreamFeatures*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibwebp_WebPGetFeaturesInternal_m354BBE8EF07C34F2B222D9661F39012F0D389CA7 (uint8_t* ___0_param0, uintptr_t ___1_param1, WebPBitstreamFeatures_tF9A5B6D765AEB88F82BE8D52269DE63F04DF0E06* ___2_param2, int32_t ___3_param3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (uint8_t*, uintptr_t, WebPBitstreamFeatures_tF9A5B6D765AEB88F82BE8D52269DE63F04DF0E06*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint8_t*) + sizeof(uintptr_t) + sizeof(WebPBitstreamFeatures_tF9A5B6D765AEB88F82BE8D52269DE63F04DF0E06*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webp"), "WebPGetFeaturesInternal", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webp_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebPGetFeaturesInternal)(___0_param0, ___1_param1, ___2_param2, ___3_param3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_param0, ___1_param1, ___2_param2, ___3_param3);
	#endif

	return returnValue;
}
// unity.libwebp.Interop.VP8StatusCode unity.libwebp.NativeLibwebp::WebPGetFeatures(System.Byte*,System.UIntPtr,unity.libwebp.Interop.WebPBitstreamFeatures*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibwebp_WebPGetFeatures_m39884CA49534BCF6568CE3E49CCB99C95DA32786 (uint8_t* ___0_data, uintptr_t ___1_data_size, WebPBitstreamFeatures_tF9A5B6D765AEB88F82BE8D52269DE63F04DF0E06* ___2_features, const RuntimeMethod* method) 
{
	{
		// return WebPGetFeaturesInternal(data, data_size, features, 0x0209);
		uint8_t* L_0 = ___0_data;
		uintptr_t L_1 = ___1_data_size;
		WebPBitstreamFeatures_tF9A5B6D765AEB88F82BE8D52269DE63F04DF0E06* L_2 = ___2_features;
		int32_t L_3;
		L_3 = NativeLibwebp_WebPGetFeaturesInternal_m354BBE8EF07C34F2B222D9661F39012F0D389CA7(L_0, L_1, L_2, ((int32_t)521), NULL);
		return L_3;
	}
}
// System.Int32 unity.libwebp.NativeLibwebp::WebPInitDecoderConfigInternal(unity.libwebp.Interop.WebPDecoderConfig*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibwebp_WebPInitDecoderConfigInternal_m7BA81262A67DE25D4142D5CCB755926F218879E6 (WebPDecoderConfig_t200F3A6A3B99C51064A8102F7103FD597A72F2AB* ___0_param0, int32_t ___1_param1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (WebPDecoderConfig_t200F3A6A3B99C51064A8102F7103FD597A72F2AB*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(WebPDecoderConfig_t200F3A6A3B99C51064A8102F7103FD597A72F2AB*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webp"), "WebPInitDecoderConfigInternal", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webp_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebPInitDecoderConfigInternal)(___0_param0, ___1_param1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_param0, ___1_param1);
	#endif

	return returnValue;
}
// System.Int32 unity.libwebp.NativeLibwebp::WebPInitDecoderConfig(unity.libwebp.Interop.WebPDecoderConfig*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibwebp_WebPInitDecoderConfig_m9976305FF94CDE857404F529FC97903451BAFE75 (WebPDecoderConfig_t200F3A6A3B99C51064A8102F7103FD597A72F2AB* ___0_config, const RuntimeMethod* method) 
{
	{
		// return WebPInitDecoderConfigInternal(config, 0x0209);
		WebPDecoderConfig_t200F3A6A3B99C51064A8102F7103FD597A72F2AB* L_0 = ___0_config;
		int32_t L_1;
		L_1 = NativeLibwebp_WebPInitDecoderConfigInternal_m7BA81262A67DE25D4142D5CCB755926F218879E6(L_0, ((int32_t)521), NULL);
		return L_1;
	}
}
// unity.libwebp.Interop.VP8StatusCode unity.libwebp.NativeLibwebp::WebPDecode(System.Byte*,System.UIntPtr,unity.libwebp.Interop.WebPDecoderConfig*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibwebp_WebPDecode_mC0EAA4E6F850FDE91496C78958574071CF090A8D (uint8_t* ___0_data, uintptr_t ___1_data_size, WebPDecoderConfig_t200F3A6A3B99C51064A8102F7103FD597A72F2AB* ___2_config, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (uint8_t*, uintptr_t, WebPDecoderConfig_t200F3A6A3B99C51064A8102F7103FD597A72F2AB*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webp_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint8_t*) + sizeof(uintptr_t) + sizeof(WebPDecoderConfig_t200F3A6A3B99C51064A8102F7103FD597A72F2AB*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webp"), "WebPDecode", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webp_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebPDecode)(___0_data, ___1_data_size, ___2_config);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_data, ___1_data_size, ___2_config);
	#endif

	return returnValue;
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void unity.libwebp.Interop.NativeTypeNameAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeTypeNameAttribute__ctor_m58C0950DA62F848974E70AD6401DE01909D47187 (NativeTypeNameAttribute_tE5EC4F7E89DEC7E6ED1010E287691C7E1D143FBA* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		// public NativeTypeNameAttribute(string name)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void WebP.Texture2DExt::GetWebPDimensions(System.Byte[],System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2DExt_GetWebPDimensions_mFEDCA454D7C7435D3E9447EBA833167DED5F69A3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_lData, int32_t* ___1_lWidth, int32_t* ___2_lHeight, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// fixed (byte* lDataPtr = lData)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_lData;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		// lWidth = 0;
		int32_t* L_4 = ___1_lWidth;
		*((int32_t*)L_4) = (int32_t)0;
		// lHeight = 0;
		int32_t* L_5 = ___2_lHeight;
		*((int32_t*)L_5) = (int32_t)0;
		// if (NativeLibwebp.WebPGetInfo(lDataPtr, (UIntPtr)lData.Length, &w, &h) == 0)
		uint8_t* L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_lData;
		NullCheck(L_7);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_8;
		L_8 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((int64_t)((int32_t)(((RuntimeArray*)L_7)->max_length))), NULL);
		int32_t L_9;
		L_9 = NativeLibwebp_WebPGetInfo_m696555436BA98E3DB6A7924BC36E1C5E9C928BE8(L_6, L_8, (int32_t*)((uintptr_t)(&V_2)), (int32_t*)((uintptr_t)(&V_3)), NULL);
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		// throw new Exception("Invalid WebP header detected");
		Exception_t* L_10 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral18BBD9FF95EF433922AAA6EC8DAB73350575E33A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Texture2DExt_GetWebPDimensions_mFEDCA454D7C7435D3E9447EBA833167DED5F69A3_RuntimeMethod_var)));
	}

IL_0040:
	{
		// lWidth = w;
		int32_t* L_11 = ___1_lWidth;
		int32_t L_12 = V_2;
		*((int32_t*)L_11) = (int32_t)L_12;
		// lHeight = h;
		int32_t* L_13 = ___2_lHeight;
		int32_t L_14 = V_3;
		*((int32_t*)L_13) = (int32_t)L_14;
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// }
		return;
	}
}
// System.Byte[] WebP.Texture2DExt::LoadRGBAFromWebP(System.Byte[],System.Int32&,System.Int32&,System.Boolean,WebP.Error&,WebP.Texture2DExt/ScalingFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Texture2DExt_LoadRGBAFromWebP_m150314BA100E346FCCD25E882EDCAAB5005D3B36 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_lData, int32_t* ___1_lWidth, int32_t* ___2_lHeight, bool ___3_lMipmaps, int32_t* ___4_lError, ScalingFunction_t1D0FC4CAF370AADB695D32F2A2FED84C4882CB40* ___5_scalingFunction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	uint8_t* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	int32_t V_6 = 0;
	uint8_t* V_7 = NULL;
	WebPDecoderConfig_t200F3A6A3B99C51064A8102F7103FD597A72F2AB V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B10_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B9_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B11_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B12_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B14_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B13_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B16_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B15_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B18_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B17_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B20_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B19_0 = NULL;
	{
		// lError = 0;
		int32_t* L_0 = ___4_lError;
		*((int32_t*)L_0) = (int32_t)0;
		// int lLength = lData.Length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_lData;
		NullCheck(L_1);
		V_0 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		// fixed (byte* lDataPtr = lData)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_lData;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		V_2 = L_3;
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_2;
		NullCheck(L_4);
		if (((int32_t)(((RuntimeArray*)L_4)->max_length)))
		{
			goto IL_0017;
		}
	}

IL_0012:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_0020;
	}

IL_0017:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_2;
		NullCheck(L_5);
		V_1 = (uint8_t*)((uintptr_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0020:
	{
		// scalingFunction?.Invoke(ref lWidth, ref lHeight);
		ScalingFunction_t1D0FC4CAF370AADB695D32F2A2FED84C4882CB40* L_6 = ___5_scalingFunction;
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		ScalingFunction_t1D0FC4CAF370AADB695D32F2A2FED84C4882CB40* L_7 = ___5_scalingFunction;
		int32_t* L_8 = ___1_lWidth;
		int32_t* L_9 = ___2_lHeight;
		NullCheck(L_7);
		ScalingFunction_Invoke_mE17AC87523B58DA6B517DE9E5CF7FC5561CFA799_inline(L_7, L_8, L_9, NULL);
	}

IL_002d:
	{
		// int numBytesRequired = lWidth * lHeight * 4;
		int32_t* L_10 = ___1_lWidth;
		int32_t L_11 = *((int32_t*)L_10);
		int32_t* L_12 = ___2_lHeight;
		int32_t L_13 = *((int32_t*)L_12);
		V_3 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_11, L_13)), 4));
		// if (lMipmaps)
		bool L_14 = ___3_lMipmaps;
		if (!L_14)
		{
			goto IL_004c;
		}
	}
	{
		// numBytesRequired = Mathf.CeilToInt((numBytesRequired * 4.0f) / 3.0f);
		int32_t L_15 = V_3;
		int32_t L_16;
		L_16 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(((float)(((float)il2cpp_codegen_multiply(((float)L_15), (4.0f)))/(3.0f))), NULL);
		V_3 = L_16;
	}

IL_004c:
	{
		// lRawData = new byte[numBytesRequired];
		int32_t L_17 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_17);
		// fixed (byte* lRawDataPtr = lRawData)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = L_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = L_19;
		V_5 = L_20;
		G_B9_0 = L_19;
		if (!L_20)
		{
			G_B10_0 = L_19;
			goto IL_005e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_5;
		NullCheck(L_21);
		G_B10_0 = G_B9_0;
		if (((int32_t)(((RuntimeArray*)L_21)->max_length)))
		{
			G_B11_0 = G_B9_0;
			goto IL_0064;
		}
	}

IL_005e:
	{
		V_4 = (uint8_t*)((uintptr_t)0);
		G_B12_0 = G_B10_0;
		goto IL_006f;
	}

IL_0064:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_5;
		NullCheck(L_22);
		V_4 = (uint8_t*)((uintptr_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
		G_B12_0 = G_B11_0;
	}

IL_006f:
	{
		// int lStride = 4 * lWidth;
		int32_t* L_23 = ___1_lWidth;
		int32_t L_24 = *((int32_t*)L_23);
		V_6 = ((int32_t)il2cpp_codegen_multiply(4, L_24));
		// byte* lTmpDataPtr = lRawDataPtr + (lHeight - 1) * lStride;
		uint8_t* L_25 = V_4;
		int32_t* L_26 = ___2_lHeight;
		int32_t L_27 = *((int32_t*)L_26);
		int32_t L_28 = V_6;
		V_7 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_25, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_27, 1)), L_28))));
		// WebPDecoderConfig config = new WebPDecoderConfig();
		il2cpp_codegen_initobj((&V_8), sizeof(WebPDecoderConfig_t200F3A6A3B99C51064A8102F7103FD597A72F2AB));
		// if (NativeLibwebp.WebPInitDecoderConfig(&config) == 0)
		int32_t L_29;
		L_29 = NativeLibwebp_WebPInitDecoderConfig_m9976305FF94CDE857404F529FC97903451BAFE75((WebPDecoderConfig_t200F3A6A3B99C51064A8102F7103FD597A72F2AB*)((uintptr_t)(&V_8)), NULL);
		G_B13_0 = G_B12_0;
		if (L_29)
		{
			G_B14_0 = G_B12_0;
			goto IL_009e;
		}
	}
	{
		// throw new Exception("WebPInitDecoderConfig failed. Wrong version?");
		Exception_t* L_30 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_30);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_30, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E7326BEE3CECC4D134714BC2BD923677047CC1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Texture2DExt_LoadRGBAFromWebP_m150314BA100E346FCCD25E882EDCAAB5005D3B36_RuntimeMethod_var)));
	}

IL_009e:
	{
		// config.options.use_threads = 1;
		WebPDecoderOptions_tCBC5B4D729CD4ECFE22655E4C917DA46C8F3355C* L_31 = (WebPDecoderOptions_tCBC5B4D729CD4ECFE22655E4C917DA46C8F3355C*)(&(&V_8)->___options_2);
		L_31->___use_threads_10 = 1;
		// if (scalingFunction != null)
		ScalingFunction_t1D0FC4CAF370AADB695D32F2A2FED84C4882CB40* L_32 = ___5_scalingFunction;
		G_B15_0 = G_B14_0;
		if (!L_32)
		{
			G_B16_0 = G_B14_0;
			goto IL_00bc;
		}
	}
	{
		// config.options.use_scaling = 1;
		WebPDecoderOptions_tCBC5B4D729CD4ECFE22655E4C917DA46C8F3355C* L_33 = (WebPDecoderOptions_tCBC5B4D729CD4ECFE22655E4C917DA46C8F3355C*)(&(&V_8)->___options_2);
		L_33->___use_scaling_7 = 1;
		G_B16_0 = G_B15_0;
	}

IL_00bc:
	{
		// config.options.scaled_width = lWidth;
		WebPDecoderOptions_tCBC5B4D729CD4ECFE22655E4C917DA46C8F3355C* L_34 = (WebPDecoderOptions_tCBC5B4D729CD4ECFE22655E4C917DA46C8F3355C*)(&(&V_8)->___options_2);
		int32_t* L_35 = ___1_lWidth;
		int32_t L_36 = *((int32_t*)L_35);
		L_34->___scaled_width_8 = L_36;
		// config.options.scaled_height = lHeight;
		WebPDecoderOptions_tCBC5B4D729CD4ECFE22655E4C917DA46C8F3355C* L_37 = (WebPDecoderOptions_tCBC5B4D729CD4ECFE22655E4C917DA46C8F3355C*)(&(&V_8)->___options_2);
		int32_t* L_38 = ___2_lHeight;
		int32_t L_39 = *((int32_t*)L_38);
		L_37->___scaled_height_9 = L_39;
		// VP8StatusCode result = NativeLibwebp.WebPGetFeatures(lDataPtr, (UIntPtr)lLength, &config.input);
		uint8_t* L_40 = V_1;
		int32_t L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_42;
		L_42 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((int64_t)L_41), NULL);
		WebPBitstreamFeatures_tF9A5B6D765AEB88F82BE8D52269DE63F04DF0E06* L_43 = (WebPBitstreamFeatures_tF9A5B6D765AEB88F82BE8D52269DE63F04DF0E06*)(&(&V_8)->___input_0);
		int32_t L_44;
		L_44 = NativeLibwebp_WebPGetFeatures_m39884CA49534BCF6568CE3E49CCB99C95DA32786(L_40, L_42, (WebPBitstreamFeatures_tF9A5B6D765AEB88F82BE8D52269DE63F04DF0E06*)((uintptr_t)L_43), NULL);
		V_9 = L_44;
		// if (result != VP8StatusCode.VP8_STATUS_OK)
		int32_t L_45 = V_9;
		G_B17_0 = G_B16_0;
		if (!L_45)
		{
			G_B18_0 = G_B16_0;
			goto IL_0110;
		}
	}
	{
		// throw new Exception(string.Format("Failed WebPGetFeatures with error {0}.", result.ToString()));
		Il2CppFakeBox<int32_t> L_46(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VP8StatusCode_t696A07C6E19C1232322C933B41947D7DE5DD4AAF_il2cpp_TypeInfo_var)), (&V_9));
		String_t* L_47;
		L_47 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_46), NULL);
		String_t* L_48;
		L_48 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68E9D0200D63EB16B9247F1DF95AEA1449C358C5)), L_47, NULL);
		Exception_t* L_49 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_49);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_49, L_48, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_49, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Texture2DExt_LoadRGBAFromWebP_m150314BA100E346FCCD25E882EDCAAB5005D3B36_RuntimeMethod_var)));
	}

IL_0110:
	{
		// config.output.colorspace = WEBP_CSP_MODE.MODE_RGBA;
		WebPDecBuffer_t8052DC32BDD5A183F35B244855142168A176582F* L_50 = (WebPDecBuffer_t8052DC32BDD5A183F35B244855142168A176582F*)(&(&V_8)->___output_1);
		L_50->___colorspace_0 = 1;
		// config.output.u.RGBA.rgba = lTmpDataPtr;
		WebPDecBuffer_t8052DC32BDD5A183F35B244855142168A176582F* L_51 = (WebPDecBuffer_t8052DC32BDD5A183F35B244855142168A176582F*)(&(&V_8)->___output_1);
		_u_e__Union_t89F42D82660AE0DF7ACA5E40B897094EBC44306A* L_52 = (_u_e__Union_t89F42D82660AE0DF7ACA5E40B897094EBC44306A*)(&L_51->___u_4);
		WebPRGBABuffer_t303C8D4AE7BDA5D322CB344EDDF809A1F9B847F7* L_53 = (WebPRGBABuffer_t303C8D4AE7BDA5D322CB344EDDF809A1F9B847F7*)(&L_52->___RGBA_0);
		uint8_t* L_54 = V_7;
		L_53->___rgba_0 = L_54;
		// config.output.u.RGBA.stride = -lStride;
		WebPDecBuffer_t8052DC32BDD5A183F35B244855142168A176582F* L_55 = (WebPDecBuffer_t8052DC32BDD5A183F35B244855142168A176582F*)(&(&V_8)->___output_1);
		_u_e__Union_t89F42D82660AE0DF7ACA5E40B897094EBC44306A* L_56 = (_u_e__Union_t89F42D82660AE0DF7ACA5E40B897094EBC44306A*)(&L_55->___u_4);
		WebPRGBABuffer_t303C8D4AE7BDA5D322CB344EDDF809A1F9B847F7* L_57 = (WebPRGBABuffer_t303C8D4AE7BDA5D322CB344EDDF809A1F9B847F7*)(&L_56->___RGBA_0);
		int32_t L_58 = V_6;
		L_57->___stride_1 = ((-L_58));
		// config.output.u.RGBA.size = (UIntPtr)(lHeight * lStride);
		WebPDecBuffer_t8052DC32BDD5A183F35B244855142168A176582F* L_59 = (WebPDecBuffer_t8052DC32BDD5A183F35B244855142168A176582F*)(&(&V_8)->___output_1);
		_u_e__Union_t89F42D82660AE0DF7ACA5E40B897094EBC44306A* L_60 = (_u_e__Union_t89F42D82660AE0DF7ACA5E40B897094EBC44306A*)(&L_59->___u_4);
		WebPRGBABuffer_t303C8D4AE7BDA5D322CB344EDDF809A1F9B847F7* L_61 = (WebPRGBABuffer_t303C8D4AE7BDA5D322CB344EDDF809A1F9B847F7*)(&L_60->___RGBA_0);
		int32_t* L_62 = ___2_lHeight;
		int32_t L_63 = *((int32_t*)L_62);
		int32_t L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_65;
		L_65 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((int64_t)((int32_t)il2cpp_codegen_multiply(L_63, L_64))), NULL);
		L_61->___size_2 = L_65;
		// config.output.height = lHeight;
		WebPDecBuffer_t8052DC32BDD5A183F35B244855142168A176582F* L_66 = (WebPDecBuffer_t8052DC32BDD5A183F35B244855142168A176582F*)(&(&V_8)->___output_1);
		int32_t* L_67 = ___2_lHeight;
		int32_t L_68 = *((int32_t*)L_67);
		L_66->___height_2 = L_68;
		// config.output.width = lWidth;
		WebPDecBuffer_t8052DC32BDD5A183F35B244855142168A176582F* L_69 = (WebPDecBuffer_t8052DC32BDD5A183F35B244855142168A176582F*)(&(&V_8)->___output_1);
		int32_t* L_70 = ___1_lWidth;
		int32_t L_71 = *((int32_t*)L_70);
		L_69->___width_1 = L_71;
		// config.output.is_external_memory = 1;
		WebPDecBuffer_t8052DC32BDD5A183F35B244855142168A176582F* L_72 = (WebPDecBuffer_t8052DC32BDD5A183F35B244855142168A176582F*)(&(&V_8)->___output_1);
		L_72->___is_external_memory_3 = 1;
		// result = NativeLibwebp.WebPDecode(lDataPtr, (UIntPtr)lLength, &config);
		uint8_t* L_73 = V_1;
		int32_t L_74 = V_0;
		uintptr_t L_75;
		L_75 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((int64_t)L_74), NULL);
		int32_t L_76;
		L_76 = NativeLibwebp_WebPDecode_mC0EAA4E6F850FDE91496C78958574071CF090A8D(L_73, L_75, (WebPDecoderConfig_t200F3A6A3B99C51064A8102F7103FD597A72F2AB*)((uintptr_t)(&V_8)), NULL);
		V_9 = L_76;
		// if (result != VP8StatusCode.VP8_STATUS_OK)
		int32_t L_77 = V_9;
		G_B19_0 = G_B18_0;
		if (!L_77)
		{
			G_B20_0 = G_B18_0;
			goto IL_01cb;
		}
	}
	{
		// throw new Exception(string.Format("Failed WebPDecode with error {0}.", result.ToString()));
		Il2CppFakeBox<int32_t> L_78(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VP8StatusCode_t696A07C6E19C1232322C933B41947D7DE5DD4AAF_il2cpp_TypeInfo_var)), (&V_9));
		String_t* L_79;
		L_79 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_78), NULL);
		String_t* L_80;
		L_80 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E895C5929F24EA7F5357BAB0B0C22B9F9801614)), L_79, NULL);
		Exception_t* L_81 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_81);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_81, L_80, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_81, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Texture2DExt_LoadRGBAFromWebP_m150314BA100E346FCCD25E882EDCAAB5005D3B36_RuntimeMethod_var)));
	}

IL_01cb:
	{
		V_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// lError = Error.Success;
		int32_t* L_82 = ___4_lError;
		*((int32_t*)L_82) = (int32_t)0;
		V_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// return lRawData;
		return G_B20_0;
	}
}
// UnityEngine.Texture2D WebP.Texture2DExt::CreateWebpTexture2D(System.Int32,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Texture2DExt_CreateWebpTexture2D_m848D661BA72CA0BD079F557592F4098C48810EE4 (int32_t ___0_width, int32_t ___1_height, bool ___2_isUseMipmap, bool ___3_isLinear, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (isUseMipmap)
		bool L_0 = ___2_isUseMipmap;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// UnityEngine.Experimental.Rendering.GraphicsFormat graphicsFormat = UnityEngine.Experimental.Rendering.GraphicsFormatUtility.GetGraphicsFormat(TextureFormat.RGBA32, false);
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = GraphicsFormatUtility_GetGraphicsFormat_mE38154E9B9C810EDAF2FAD3E1F1CD856FFC13F3C(4, (bool)0, NULL);
		V_0 = L_1;
		// uint mipmapSize = UnityEngine.Experimental.Rendering.GraphicsFormatUtility.ComputeMipmapSize(width, height, graphicsFormat);
		int32_t L_2 = ___0_width;
		int32_t L_3 = ___1_height;
		int32_t L_4 = V_0;
		uint32_t L_5;
		L_5 = GraphicsFormatUtility_ComputeMipmapSize_m34883B0890B84D62E41BAE90A33CABBFBE905DD6(L_2, L_3, L_4, NULL);
		// int mipmapCount = (int)mipmapSize / (width * height);
		int32_t L_6 = ___0_width;
		int32_t L_7 = ___1_height;
		V_1 = ((int32_t)((int32_t)L_5/((int32_t)il2cpp_codegen_multiply(L_6, L_7))));
		// return new Texture2D(width, height, TextureFormat.RGBA32, mipCount: mipmapCount, isLinear);
		int32_t L_8 = ___0_width;
		int32_t L_9 = ___1_height;
		int32_t L_10 = V_1;
		bool L_11 = ___3_isLinear;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Texture2D__ctor_mB1445796B2A76B3D867B2603205F513AF494B9F3(L_12, L_8, L_9, 4, L_10, L_11, NULL);
		return L_12;
	}

IL_0023:
	{
		// return new Texture2D(width, height, TextureFormat.RGBA32, mipChain: false, isLinear);
		int32_t L_13 = ___0_width;
		int32_t L_14 = ___1_height;
		bool L_15 = ___3_isLinear;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A(L_16, L_13, L_14, 4, (bool)0, L_15, NULL);
		return L_16;
	}
}
// UnityEngine.Texture2D WebP.Texture2DExt::CreateTexture2DFromWebP(System.Byte[],System.Boolean,System.Boolean,WebP.Error&,WebP.Texture2DExt/ScalingFunction,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Texture2DExt_CreateTexture2DFromWebP_m950C651F1C3F758ED2C1952A7AA55816547F789B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_lData, bool ___1_lMipmaps, bool ___2_lLinear, int32_t* ___3_lError, ScalingFunction_t1D0FC4CAF370AADB695D32F2A2FED84C4882CB40* ___4_scalingFunction, bool ___5_makeNoLongerReadable, const RuntimeMethod* method) 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		// Texture2D lTexture2D = null;
		V_0 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		// GetWebPDimensions(lData, out lWidth, out lHeight);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_lData;
		Texture2DExt_GetWebPDimensions_mFEDCA454D7C7435D3E9447EBA833167DED5F69A3(L_0, (&V_1), (&V_2), NULL);
		// byte[] lRawData = LoadRGBAFromWebP(lData, ref lWidth, ref lHeight, lMipmaps, out lError, scalingFunction);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_lData;
		bool L_2 = ___1_lMipmaps;
		int32_t* L_3 = ___3_lError;
		ScalingFunction_t1D0FC4CAF370AADB695D32F2A2FED84C4882CB40* L_4 = ___4_scalingFunction;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Texture2DExt_LoadRGBAFromWebP_m150314BA100E346FCCD25E882EDCAAB5005D3B36(L_1, (&V_1), (&V_2), L_2, L_3, L_4, NULL);
		V_3 = L_5;
		// if (lError == Error.Success)
		int32_t* L_6 = ___3_lError;
		int32_t L_7 = *((int32_t*)L_6);
		if (L_7)
		{
			goto IL_0039;
		}
	}
	{
		// lTexture2D = CreateWebpTexture2D(lWidth, lHeight, lMipmaps, lLinear);
		int32_t L_8 = V_1;
		int32_t L_9 = V_2;
		bool L_10 = ___1_lMipmaps;
		bool L_11 = ___2_lLinear;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12;
		L_12 = Texture2DExt_CreateWebpTexture2D_m848D661BA72CA0BD079F557592F4098C48810EE4(L_8, L_9, L_10, L_11, NULL);
		V_0 = L_12;
		// lTexture2D.LoadRawTextureData(lRawData);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_3;
		NullCheck(L_13);
		Texture2D_LoadRawTextureData_mB8D1DEB5FF8715A871D8043D48C9054FCFF4ED1B(L_13, L_14, NULL);
		// lTexture2D.Apply(lMipmaps, makeNoLongerReadable);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_15 = V_0;
		bool L_16 = ___1_lMipmaps;
		bool L_17 = ___5_makeNoLongerReadable;
		NullCheck(L_15);
		Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A(L_15, L_16, L_17, NULL);
	}

IL_0039:
	{
		// return lTexture2D;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = V_0;
		return L_18;
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
void ScalingFunction_Invoke_mE17AC87523B58DA6B517DE9E5CF7FC5561CFA799_Multicast(ScalingFunction_t1D0FC4CAF370AADB695D32F2A2FED84C4882CB40* __this, int32_t* ___0_width, int32_t* ___1_height, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ScalingFunction_t1D0FC4CAF370AADB695D32F2A2FED84C4882CB40* currentDelegate = reinterpret_cast<ScalingFunction_t1D0FC4CAF370AADB695D32F2A2FED84C4882CB40*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t*, int32_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_width, ___1_height, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ScalingFunction_Invoke_mE17AC87523B58DA6B517DE9E5CF7FC5561CFA799_OpenInst(ScalingFunction_t1D0FC4CAF370AADB695D32F2A2FED84C4882CB40* __this, int32_t* ___0_width, int32_t* ___1_height, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t*, int32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_width, ___1_height, method);
}
void ScalingFunction_Invoke_mE17AC87523B58DA6B517DE9E5CF7FC5561CFA799_OpenStatic(ScalingFunction_t1D0FC4CAF370AADB695D32F2A2FED84C4882CB40* __this, int32_t* ___0_width, int32_t* ___1_height, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t*, int32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_width, ___1_height, method);
}
void ScalingFunction_Invoke_mE17AC87523B58DA6B517DE9E5CF7FC5561CFA799_OpenStaticInvoker(ScalingFunction_t1D0FC4CAF370AADB695D32F2A2FED84C4882CB40* __this, int32_t* ___0_width, int32_t* ___1_height, const RuntimeMethod* method)
{
	InvokerActionInvoker2< int32_t*, int32_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_width, ___1_height);
}
void ScalingFunction_Invoke_mE17AC87523B58DA6B517DE9E5CF7FC5561CFA799_ClosedStaticInvoker(ScalingFunction_t1D0FC4CAF370AADB695D32F2A2FED84C4882CB40* __this, int32_t* ___0_width, int32_t* ___1_height, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t*, int32_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_width, ___1_height);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ScalingFunction_t1D0FC4CAF370AADB695D32F2A2FED84C4882CB40 (ScalingFunction_t1D0FC4CAF370AADB695D32F2A2FED84C4882CB40* __this, int32_t* ___0_width, int32_t* ___1_height, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t*, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_width, ___1_height);

}
// System.Void WebP.Texture2DExt/ScalingFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScalingFunction__ctor_m81D71E7E959CD5690166B6EB468A7EF5F86665CF (ScalingFunction_t1D0FC4CAF370AADB695D32F2A2FED84C4882CB40* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ScalingFunction_Invoke_mE17AC87523B58DA6B517DE9E5CF7FC5561CFA799_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ScalingFunction_Invoke_mE17AC87523B58DA6B517DE9E5CF7FC5561CFA799_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ScalingFunction_Invoke_mE17AC87523B58DA6B517DE9E5CF7FC5561CFA799_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ScalingFunction_Invoke_mE17AC87523B58DA6B517DE9E5CF7FC5561CFA799_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ScalingFunction_Invoke_mE17AC87523B58DA6B517DE9E5CF7FC5561CFA799_Multicast;
}
// System.Void WebP.Texture2DExt/ScalingFunction::Invoke(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScalingFunction_Invoke_mE17AC87523B58DA6B517DE9E5CF7FC5561CFA799 (ScalingFunction_t1D0FC4CAF370AADB695D32F2A2FED84C4882CB40* __this, int32_t* ___0_width, int32_t* ___1_height, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t*, int32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_width, ___1_height, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScalingFunction_Invoke_mE17AC87523B58DA6B517DE9E5CF7FC5561CFA799_inline (ScalingFunction_t1D0FC4CAF370AADB695D32F2A2FED84C4882CB40* __this, int32_t* ___0_width, int32_t* ___1_height, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t*, int32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_width, ___1_height, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = ceil(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
