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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<UnityEngine.Color>
struct Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<UnityEngine.Vector2>
struct Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81;
// System.Action`1<UnityEngine.Vector3>
struct Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Action`2<UnityEngine.Color,System.Object>
struct Action_2_tA6305A40DF06ED5230D130F9BFFB7DFF81760FF3;
// System.Action`2<System.Single,System.Object>
struct Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10;
// System.Action`2<System.Single,System.Single>
struct Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132;
// System.Action`2<UnityEngine.Vector3,System.Object>
struct Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/DropdownItem>
struct List_1_tA7EEECF976A6B4957450A4D235070C9324ED1A97;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// TMPro.TweenRunner`1<TMPro.FloatTween>
struct TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0;
// LTBezier[]
struct LTBezierU5BU5D_t5A6DC7783390D4CBB82F150E6800EF310348433D;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// APIHandler
struct APIHandler_t6CC9CF56D3CD435410CA1E4F0ABD6347C0BB632A;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C;
// System.Exception
struct Exception_t;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
// InstanceManager
struct InstanceManager_tFB5E3E616F12DB413A972248B9E569042BCDCEE0;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A;
// JNIStorage
struct JNIStorage_t375A1F8724CA5D597A2FE2AD654C0A9059F8851D;
// Newtonsoft.Json.Linq.JObject
struct JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t4A44691A9942B8A7AEB4016F7405BF388D1E0632;
// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3;
// LTBezierPath
struct LTBezierPath_t14FA55414C70F430785E94A3E3D1CA9046CD3251;
// LTDescr
struct LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696;
// LTDescrOptional
struct LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF;
// LTRect
struct LTRect_tE59D1029540FDC2C553CB986B1E93E4EFF88B58D;
// LTSeq
struct LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21;
// LTSpline
struct LTSpline_tC934BB65DEF45BC8FBF1F47A99B2D3A7785F3D5D;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// DentedPixel.LeanDummy
struct LeanDummy_tC93FBA95B1799B72C5A4B8FF57357E65EBD9BCC3;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_tDBF36F3E2C6B7538106878E1D5A7553C5EA77616;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ModManager
struct ModManager_tB0092BDBA384CFCF9A3294DA37FD13BFA499D27C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_tF293724DEA588C35A7E94C4F4413AEE6438FE9CD;
// Quester
struct Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98;
// QuesterGameEnder
struct QuesterGameEnder_t24D8E5F96401555996F4D08FCDB2145ADCC0D4AD;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// ScoreAdder
struct ScoreAdder_tFB64CF27DECC982630854B5EF4B2997164B7BB1E;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SkinHandler
struct SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_Dropdown
struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UIHandler
struct UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016;
// UiRedocker
struct UiRedocker_t50EC979A33241C3E6655D1C4CC036F115662EFDC;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// VersionChecker
struct VersionChecker_tEE09B71014356A251DC3C5B82392DF9316DBA06F;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// WindowHandler
struct WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// LTDescr/<>c
struct U3CU3Ec_t573714D0F4A8020AA5706EF5484FD5F787729F5F;
// LTDescr/ActionMethodDelegate
struct ActionMethodDelegate_tE88025EB184988CC54961CA0853A56DDA2826048;
// LTDescr/EaseTypeDelegate
struct EaseTypeDelegate_t731A985425250B1DB3EC8DD69CA4644BD2DCF7CC;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Quester/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t861E900D6FF2354B4096105C4D34E500F2EC8D0F;
// TMPro.TMP_Dropdown/DropdownEvent
struct DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91;
// TMPro.TMP_Dropdown/OptionData
struct OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E;
// TMPro.TMP_Dropdown/OptionDataList
struct OptionDataList_tF66EA4801BFA499F010E6EFF89ED760BF4F0BEE1;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JNIStorage_t375A1F8724CA5D597A2FE2AD654C0A9059F8851D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass20_0_t861E900D6FF2354B4096105C4D34E500F2EC8D0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t573714D0F4A8020AA5706EF5484FD5F787729F5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0D624BE517893410AA118931741AD1D74FB8703B;
IL2CPP_EXTERN_C String_t* _stringLiteral19AB9E6C5E0A67C98B6590610E27E5BD8B979978;
IL2CPP_EXTERN_C String_t* _stringLiteral29234851D18F1D30FBFCF592D0C23BCB54FEE683;
IL2CPP_EXTERN_C String_t* _stringLiteral365AE998E5D9C5133ADDC184FF9BC53499F0A7D1;
IL2CPP_EXTERN_C String_t* _stringLiteral3FE4D81F6F37F82D827D08351F38C3ABC599BC04;
IL2CPP_EXTERN_C String_t* _stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF;
IL2CPP_EXTERN_C String_t* _stringLiteral5777562C5A66004DCA7A3C381A9DCE6BFBAFCB40;
IL2CPP_EXTERN_C String_t* _stringLiteral64F455E67CB67B0F18309B34D910267A9D8C1589;
IL2CPP_EXTERN_C String_t* _stringLiteral6D22D0B0296DBC3D55BC016EA2FB23A731ABB73E;
IL2CPP_EXTERN_C String_t* _stringLiteral7C7AC9D789A4D59768B2EDE94AF1A1E1D3430374;
IL2CPP_EXTERN_C String_t* _stringLiteral9603EBC95E85A2172EEF77747F2D4A88853CAFC7;
IL2CPP_EXTERN_C String_t* _stringLiteral9769331E0E83A6E8CCBDF9FD5074978CCE6A226C;
IL2CPP_EXTERN_C String_t* _stringLiteral9C89C7E575A511555596297CE0CBB44752563AE5;
IL2CPP_EXTERN_C String_t* _stringLiteralA33A162928EC5E0A13A9E319200B92BB73A5C838;
IL2CPP_EXTERN_C String_t* _stringLiteralAFFE67E8BE3AB2B6F5D2420E0CA4D06D3DB65DC1;
IL2CPP_EXTERN_C String_t* _stringLiteralB4D936E3CEDD1EFB5DD76C014BB756DB2FF8510A;
IL2CPP_EXTERN_C String_t* _stringLiteralC0AA5F478AE4FF95463D3D0F92BAF8FBADEB4BDC;
IL2CPP_EXTERN_C String_t* _stringLiteralE847CC353B5CDC3EE77874FD153F49593B7E381A;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8_m7B848906E9892F16BB907E5F7BD0A2189060A9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45_m503E617FC27E5B5E700185DF654EC4C05B3BD57A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CGetNameU3Ed__15_t8DED562071A15F853BEC4FF4B6C13B63DFC33E33_m9E5AC078FF66579C1B9DA64C4E996F0BDA848255_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8_mBF21D74187524A3ECD455BD0AB4E864C027F0521_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45_m6D99AAA288CE89C97C004F600ABCAE36A1EB5898_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A_m96408582444873AD97A8B3230DA560BFEC270EA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A_mB7C9A2B6CBA531F6AEB08A3FCC1B4AE7F55F8D76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Quester_U3CGameoverU3Eb__19_0_m4B9434A8D73329D29901DD862F23801A16A667F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Quester_U3CloopbgU3Eb__22_0_m4B69B0302642D32BDA29BBC6A50973CAC8876502_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Quester_U3CloopbgU3Eb__22_1_m029E1A222DA31D5919C17C23C58DE5256B95E822_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass20_0_U3CGenerateObstaclesU3Eb__0_mF8675CBCE3A6DDFCBB8FBA58DFACE63BE79242AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass20_0_U3CGenerateObstaclesU3Eb__1_m46D09D08B5EEE082ACDBF9C4083FB64A6484671F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIHandler_U3CStartU3Eb__13_0_m0F2FC96D643A192ED83B80445A067C08176CCE33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIHandler_U3CStartU3Eb__13_1_m5D47FFA0B81EB594EC4769CB2FC5C7F3DD181F62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIHandler_U3CStartU3Eb__13_2_m8112435F3E660E7813195BABF0C5A6D0B168E7E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIHandler_U3CStartU3Eb__13_3_mE2FA2B5D34A5653D5C035881F9A0471409969BCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIHandler_U3CStartU3Eb__13_4_mDCE7E1C65296504AF0D56E74520D9998FE5DD54C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIHandler_U3CStartU3Eb__13_5_m8A6460A227D6AB7C47A01B3E92C31BDA23334695_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIHandler_U3CStartU3Eb__13_6_m248601F3CFCD21971CDD44779162B796F6CF1556_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UiRedocker_U3CStartU3Eb__5_0_m3EAF1AAB8CEE15B353D9DA6156F8A9E588C219C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowHandler_U3CAnimateLoginU3Eb__40_0_mDA5F2018A2A4181973C708A4D6224476687E4B09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowHandler_U3CAnimateLoginU3Eb__40_1_m3E50BC1AD73EFC85F71B97185A5099AE987859FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowHandler_U3CAnimateLoginU3Eb__40_2_m92675FBCC104CEC19D59253A7C1100028F2E7997_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowHandler_U3CGithugLogSetterU3Eb__42_0_mE2615FF7E4411FE2F204AF2C882397282F5D10E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowHandler_U3CGithugLogSetterU3Eb__42_1_mDC450FCA890DA4021606843B7474E5249BD65D87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowHandler_U3CGithugLogSetterU3Eb__42_2_m9D414019873150E7E6A268DA2A26980E4EFC911C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowHandler_U3CGithugLogSetterU3Eb__42_3_m815E63D8F0D07A9C3336C12C41E6224627A9529C_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
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

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3  : public RuntimeObject
{
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A* ____parent_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____previous_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____next_2;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject* ____annotations_3;
};

// LTBezierPath
struct LTBezierPath_t14FA55414C70F430785E94A3E3D1CA9046CD3251  : public RuntimeObject
{
	// UnityEngine.Vector3[] LTBezierPath::pts
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___pts_0;
	// System.Single LTBezierPath::length
	float ___length_1;
	// System.Boolean LTBezierPath::orientToPath
	bool ___orientToPath_2;
	// System.Boolean LTBezierPath::orientToPath2d
	bool ___orientToPath2d_3;
	// LTBezier[] LTBezierPath::beziers
	LTBezierU5BU5D_t5A6DC7783390D4CBB82F150E6800EF310348433D* ___beziers_4;
	// System.Single[] LTBezierPath::lengthRatio
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___lengthRatio_5;
	// System.Int32 LTBezierPath::currentBezier
	int32_t ___currentBezier_6;
	// System.Int32 LTBezierPath::previousBezier
	int32_t ___previousBezier_7;
};

// LTSeq
struct LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21  : public RuntimeObject
{
	// LTSeq LTSeq::previous
	LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* ___previous_0;
	// LTSeq LTSeq::current
	LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* ___current_1;
	// LTDescr LTSeq::tween
	LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* ___tween_2;
	// System.Single LTSeq::totalDelay
	float ___totalDelay_3;
	// System.Single LTSeq::timeScale
	float ___timeScale_4;
	// System.Int32 LTSeq::debugIter
	int32_t ___debugIter_5;
	// System.UInt32 LTSeq::counter
	uint32_t ___counter_6;
	// System.Boolean LTSeq::toggle
	bool ___toggle_7;
	// System.UInt32 LTSeq::_id
	uint32_t ____id_8;
};

// LTSpline
struct LTSpline_tC934BB65DEF45BC8FBF1F47A99B2D3A7785F3D5D  : public RuntimeObject
{
	// System.Single LTSpline::distance
	float ___distance_2;
	// System.Boolean LTSpline::constantSpeed
	bool ___constantSpeed_3;
	// UnityEngine.Vector3[] LTSpline::pts
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___pts_4;
	// UnityEngine.Vector3[] LTSpline::ptsAdj
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___ptsAdj_5;
	// System.Int32 LTSpline::ptsAdjLength
	int32_t ___ptsAdjLength_6;
	// System.Boolean LTSpline::orientToPath
	bool ___orientToPath_7;
	// System.Boolean LTSpline::orientToPath2d
	bool ___orientToPath2d_8;
	// System.Int32 LTSpline::numSections
	int32_t ___numSections_9;
	// System.Int32 LTSpline::currPt
	int32_t ___currPt_10;
};

// DentedPixel.LeanDummy
struct LeanDummy_tC93FBA95B1799B72C5A4B8FF57357E65EBD9BCC3  : public RuntimeObject
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
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7  : public RuntimeObject
{
	// System.Int32 System.Version::_Major
	int32_t ____Major_0;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_1;
	// System.Int32 System.Version::_Build
	int32_t ____Build_2;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_3;
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

// LTDescr/<>c
struct U3CU3Ec_t573714D0F4A8020AA5706EF5484FD5F787729F5F  : public RuntimeObject
{
};

// Quester/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t861E900D6FF2354B4096105C4D34E500F2EC8D0F  : public RuntimeObject
{
	// UnityEngine.GameObject Quester/<>c__DisplayClass20_0::newObstacle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___newObstacle_0;
	// Quester Quester/<>c__DisplayClass20_0::<>4__this
	Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* ___U3CU3E4__this_1;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
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

// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A  : public JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3
{
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_tDBF36F3E2C6B7538106878E1D5A7553C5EA77616* ____listChanged_14;
	// System.Collections.Specialized.NotifyCollectionChangedEventHandler Newtonsoft.Json.Linq.JContainer::_collectionChanged
	NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF* ____collectionChanged_15;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject* ____syncRoot_16;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_17;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// Unity.Mathematics.float3
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E 
{
	// System.Single Unity.Mathematics.float3::x
	float ___x_0;
	// System.Single Unity.Mathematics.float3::y
	float ___y_1;
	// System.Single Unity.Mathematics.float3::z
	float ___z_2;
};

// Unity.Mathematics.float4
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E 
{
	// System.Single Unity.Mathematics.float4::x
	float ___x_0;
	// System.Single Unity.Mathematics.float4::y
	float ___y_1;
	// System.Single Unity.Mathematics.float4::z
	float ___z_2;
	// System.Single Unity.Mathematics.float4::w
	float ___w_3;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// Unity.Collections.Allocator
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
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

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// TMPro.ColorMode
struct ColorMode_tA7A815AAB9F175EFBA0AE0814E55728432A880BF 
{
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// UnityEngine.FilterMode
struct FilterMode_t4AD57F1A3FE272D650E0E688BA044AE872BD2A34 
{
	// System.Int32 UnityEngine.FilterMode::value__
	int32_t ___value___2;
};

// TMPro.FontStyles
struct FontStyles_t9E611EE6BBE6E192A73EAFF7872596517C527FF5 
{
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;
};

// TMPro.FontWeight
struct FontWeight_tA2585C0A73B70D31CE71E7843149098A5E16BC80 
{
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;
};

// UnityEngine.ForceMode2D
struct ForceMode2D_tED0B49EFC7DE2D6679187CE772C38F82CC9E45CA 
{
	// System.Int32 UnityEngine.ForceMode2D::value__
	int32_t ___value___2;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// TMPro.HorizontalAlignmentOptions
struct HorizontalAlignmentOptions_tCC21260E9FBEC656BA7783643ED5F44AFF7955A1 
{
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.InputActionType
struct InputActionType_t7E3615BDDF3C84F39712E5889559D3AD8E773108 
{
	// System.Int32 UnityEngine.InputSystem.InputActionType::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.Linq.JObject
struct JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1  : public JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A
{
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t4A44691A9942B8A7AEB4016F7405BF388D1E0632* ____properties_18;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___PropertyChanged_19;
	// System.ComponentModel.PropertyChangingEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanging
	PropertyChangingEventHandler_tF293724DEA588C35A7E94C4F4413AEE6438FE9CD* ___PropertyChanging_20;
};

// LTDescrOptional
struct LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF  : public RuntimeObject
{
	// UnityEngine.Transform LTDescrOptional::<toTrans>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtoTransU3Ek__BackingField_0;
	// UnityEngine.Vector3 LTDescrOptional::<point>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpointU3Ek__BackingField_1;
	// UnityEngine.Vector3 LTDescrOptional::<axis>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CaxisU3Ek__BackingField_2;
	// System.Single LTDescrOptional::<lastVal>k__BackingField
	float ___U3ClastValU3Ek__BackingField_3;
	// UnityEngine.Quaternion LTDescrOptional::<origRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CorigRotationU3Ek__BackingField_4;
	// LTBezierPath LTDescrOptional::<path>k__BackingField
	LTBezierPath_t14FA55414C70F430785E94A3E3D1CA9046CD3251* ___U3CpathU3Ek__BackingField_5;
	// LTSpline LTDescrOptional::<spline>k__BackingField
	LTSpline_tC934BB65DEF45BC8FBF1F47A99B2D3A7785F3D5D* ___U3CsplineU3Ek__BackingField_6;
	// UnityEngine.AnimationCurve LTDescrOptional::animationCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___animationCurve_7;
	// System.Int32 LTDescrOptional::initFrameCount
	int32_t ___initFrameCount_8;
	// UnityEngine.Color LTDescrOptional::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_9;
	// LTRect LTDescrOptional::<ltRect>k__BackingField
	LTRect_tE59D1029540FDC2C553CB986B1E93E4EFF88B58D* ___U3CltRectU3Ek__BackingField_10;
	// System.Action`1<System.Single> LTDescrOptional::<onUpdateFloat>k__BackingField
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___U3ConUpdateFloatU3Ek__BackingField_11;
	// System.Action`2<System.Single,System.Single> LTDescrOptional::<onUpdateFloatRatio>k__BackingField
	Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* ___U3ConUpdateFloatRatioU3Ek__BackingField_12;
	// System.Action`2<System.Single,System.Object> LTDescrOptional::<onUpdateFloatObject>k__BackingField
	Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* ___U3ConUpdateFloatObjectU3Ek__BackingField_13;
	// System.Action`1<UnityEngine.Vector2> LTDescrOptional::<onUpdateVector2>k__BackingField
	Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* ___U3ConUpdateVector2U3Ek__BackingField_14;
	// System.Action`1<UnityEngine.Vector3> LTDescrOptional::<onUpdateVector3>k__BackingField
	Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* ___U3ConUpdateVector3U3Ek__BackingField_15;
	// System.Action`2<UnityEngine.Vector3,System.Object> LTDescrOptional::<onUpdateVector3Object>k__BackingField
	Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* ___U3ConUpdateVector3ObjectU3Ek__BackingField_16;
	// System.Action`1<UnityEngine.Color> LTDescrOptional::<onUpdateColor>k__BackingField
	Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22* ___U3ConUpdateColorU3Ek__BackingField_17;
	// System.Action`2<UnityEngine.Color,System.Object> LTDescrOptional::<onUpdateColorObject>k__BackingField
	Action_2_tA6305A40DF06ED5230D130F9BFFB7DFF81760FF3* ___U3ConUpdateColorObjectU3Ek__BackingField_18;
	// System.Action LTDescrOptional::<onComplete>k__BackingField
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3ConCompleteU3Ek__BackingField_19;
	// System.Action`1<System.Object> LTDescrOptional::<onCompleteObject>k__BackingField
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3ConCompleteObjectU3Ek__BackingField_20;
	// System.Object LTDescrOptional::<onCompleteParam>k__BackingField
	RuntimeObject* ___U3ConCompleteParamU3Ek__BackingField_21;
	// System.Object LTDescrOptional::<onUpdateParam>k__BackingField
	RuntimeObject* ___U3ConUpdateParamU3Ek__BackingField_22;
	// System.Action LTDescrOptional::<onStart>k__BackingField
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3ConStartU3Ek__BackingField_23;
};

// LeanTweenType
struct LeanTweenType_t324C65D08A71F69385126A41129962E70C92B13D 
{
	// System.Int32 LeanTweenType::value__
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.TMP_TextElementType
struct TMP_TextElementType_t51EE6662436732F22C6B599F5757B7F35F706342 
{
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;
};

// TMPro.TextAlignmentOptions
struct TextAlignmentOptions_tF3FA9020F7E2AF1A48660044540254009A22EF01 
{
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;
};

// TMPro.TextOverflowModes
struct TextOverflowModes_t7DCCD00C16E3223CE50CDDCC53F785C0405BE203 
{
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;
};

// TMPro.TextRenderFlags
struct TextRenderFlags_tE023FF398ECFE57A1DBC6FD2A1AF4AE9620F6E1C 
{
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;
};

// TMPro.TextureMappingOptions
struct TextureMappingOptions_t0E1A47C529DEB45A875486256E7026E97C940DAE 
{
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;
};

// TweenAction
struct TweenAction_tF69C3E9C907B1FAC52BDC1450A65DC4229E2D17D 
{
	// System.Int32 TweenAction::value__
	int32_t ___value___2;
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

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.VertexSortingOrder
struct VertexSortingOrder_t95B7AEDBDCAACC3459B6476E5CCC594A6422FFA8 
{
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;
};

// TMPro.VerticalAlignmentOptions
struct VerticalAlignmentOptions_tCEF70AF60282B71AEEE14D51253CE6A61E72D855 
{
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;
};

// Unity.Mathematics.quaternion
struct quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 
{
	// Unity.Mathematics.float4 Unity.Mathematics.quaternion::value
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___value_0;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.InputSystem.InputAction/ActionFlags
struct ActionFlags_t639BD2944E073F8DD263CE2CA581FC62C401AB1E 
{
	// System.Int32 UnityEngine.InputSystem.InputAction/ActionFlags::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.InputBinding/Flags
struct Flags_t2ED4EFE461994B03533B3B524C8C2EA71315AAE6 
{
	// System.Int32 UnityEngine.InputSystem.InputBinding/Flags::value__
	int32_t ___value___2;
};

// LTGUI/Element_Type
struct Element_Type_t074939111620879E1C27EECF2B7EF5896CDE2CD3 
{
	// System.Int32 LTGUI/Element_Type::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Navigation/Mode
struct Mode_t2D49D0E10E2FDA0026278C2400C16033888D0542 
{
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Selectable/Transition
struct Transition_tF856A77C9FAC6D26EA3CA158CF68B739D35397B3 
{
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;
};

// TMPro.TMP_Dropdown/DropdownEvent
struct DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91  : public UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A
{
};

// TMPro.TMP_Text/TextInputSources
struct TextInputSources_t41387D6C9CB16E60390F47A15AEB8185BE966D26 
{
	// System.Int32 TMPro.TMP_Text/TextInputSources::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02  : public UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB
{
};

// UnityEngine.UI.Toggle/ToggleTransition
struct ToggleTransition_tCE3F3757423A29F22112989C6B4D087850A13ED7 
{
	// System.Int32 UnityEngine.UI.Toggle/ToggleTransition::value__
	int32_t ___value___2;
};

// UnityEngine.Networking.UnityWebRequest/Result
struct Result_tFB98154F15BF37A66902802D441FEFADC68D4C87 
{
	// System.Int32 UnityEngine.Networking.UnityWebRequest/Result::value__
	int32_t ___value___2;
};

// Unity.Mathematics.math/RotationOrder
struct RotationOrder_t59C18AB67483D3D89CDFE295521729C7617295AC 
{
	// System.Byte Unity.Mathematics.math/RotationOrder::value__
	uint8_t ___value___2;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// LTDescr
struct LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696  : public RuntimeObject
{
	// System.Boolean LTDescr::toggle
	bool ___toggle_0;
	// System.Boolean LTDescr::useEstimatedTime
	bool ___useEstimatedTime_1;
	// System.Boolean LTDescr::useFrames
	bool ___useFrames_2;
	// System.Boolean LTDescr::useManualTime
	bool ___useManualTime_3;
	// System.Boolean LTDescr::usesNormalDt
	bool ___usesNormalDt_4;
	// System.Boolean LTDescr::hasInitiliazed
	bool ___hasInitiliazed_5;
	// System.Boolean LTDescr::hasExtraOnCompletes
	bool ___hasExtraOnCompletes_6;
	// System.Boolean LTDescr::hasPhysics
	bool ___hasPhysics_7;
	// System.Boolean LTDescr::onCompleteOnRepeat
	bool ___onCompleteOnRepeat_8;
	// System.Boolean LTDescr::onCompleteOnStart
	bool ___onCompleteOnStart_9;
	// System.Boolean LTDescr::useRecursion
	bool ___useRecursion_10;
	// System.Single LTDescr::ratioPassed
	float ___ratioPassed_11;
	// System.Single LTDescr::passed
	float ___passed_12;
	// System.Single LTDescr::delay
	float ___delay_13;
	// System.Single LTDescr::time
	float ___time_14;
	// System.Single LTDescr::speed
	float ___speed_15;
	// System.Single LTDescr::lastVal
	float ___lastVal_16;
	// System.UInt32 LTDescr::_id
	uint32_t ____id_17;
	// System.Int32 LTDescr::loopCount
	int32_t ___loopCount_18;
	// System.UInt32 LTDescr::counter
	uint32_t ___counter_19;
	// System.Single LTDescr::direction
	float ___direction_20;
	// System.Single LTDescr::directionLast
	float ___directionLast_21;
	// System.Single LTDescr::overshoot
	float ___overshoot_22;
	// System.Single LTDescr::period
	float ___period_23;
	// System.Single LTDescr::scale
	float ___scale_24;
	// System.Boolean LTDescr::destroyOnComplete
	bool ___destroyOnComplete_25;
	// UnityEngine.Transform LTDescr::trans
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___trans_26;
	// UnityEngine.Vector3 LTDescr::fromInternal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fromInternal_27;
	// UnityEngine.Vector3 LTDescr::toInternal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___toInternal_28;
	// UnityEngine.Vector3 LTDescr::diff
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___diff_29;
	// UnityEngine.Vector3 LTDescr::diffDiv2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___diffDiv2_30;
	// TweenAction LTDescr::type
	int32_t ___type_31;
	// LeanTweenType LTDescr::easeType
	int32_t ___easeType_32;
	// LeanTweenType LTDescr::loopType
	int32_t ___loopType_33;
	// System.Boolean LTDescr::hasUpdateCallback
	bool ___hasUpdateCallback_34;
	// LTDescr/EaseTypeDelegate LTDescr::easeMethod
	EaseTypeDelegate_t731A985425250B1DB3EC8DD69CA4644BD2DCF7CC* ___easeMethod_35;
	// LTDescr/ActionMethodDelegate LTDescr::<easeInternal>k__BackingField
	ActionMethodDelegate_tE88025EB184988CC54961CA0853A56DDA2826048* ___U3CeaseInternalU3Ek__BackingField_36;
	// LTDescr/ActionMethodDelegate LTDescr::<initInternal>k__BackingField
	ActionMethodDelegate_tE88025EB184988CC54961CA0853A56DDA2826048* ___U3CinitInternalU3Ek__BackingField_37;
	// UnityEngine.SpriteRenderer LTDescr::spriteRen
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRen_38;
	// UnityEngine.RectTransform LTDescr::rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform_39;
	// UnityEngine.UI.Text LTDescr::uiText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___uiText_40;
	// UnityEngine.UI.Image LTDescr::uiImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___uiImage_41;
	// UnityEngine.UI.RawImage LTDescr::rawImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___rawImage_42;
	// UnityEngine.Sprite[] LTDescr::sprites
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___sprites_43;
	// LTDescrOptional LTDescr::_optional
	LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* ____optional_44;
};

// LTRect
struct LTRect_tE59D1029540FDC2C553CB986B1E93E4EFF88B58D  : public RuntimeObject
{
	// UnityEngine.Rect LTRect::_rect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ____rect_0;
	// System.Single LTRect::alpha
	float ___alpha_1;
	// System.Single LTRect::rotation
	float ___rotation_2;
	// UnityEngine.Vector2 LTRect::pivot
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot_3;
	// UnityEngine.Vector2 LTRect::margin
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___margin_4;
	// UnityEngine.Rect LTRect::relativeRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___relativeRect_5;
	// System.Boolean LTRect::rotateEnabled
	bool ___rotateEnabled_6;
	// System.Boolean LTRect::rotateFinished
	bool ___rotateFinished_7;
	// System.Boolean LTRect::alphaEnabled
	bool ___alphaEnabled_8;
	// System.String LTRect::labelStr
	String_t* ___labelStr_9;
	// LTGUI/Element_Type LTRect::type
	int32_t ___type_10;
	// UnityEngine.GUIStyle LTRect::style
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style_11;
	// System.Boolean LTRect::useColor
	bool ___useColor_12;
	// UnityEngine.Color LTRect::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_13;
	// System.Boolean LTRect::fontScaleToFit
	bool ___fontScaleToFit_14;
	// System.Boolean LTRect::useSimpleScale
	bool ___useSimpleScale_15;
	// System.Boolean LTRect::sizeByHeight
	bool ___sizeByHeight_16;
	// UnityEngine.Texture LTRect::texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_17;
	// System.Int32 LTRect::_id
	int32_t ____id_18;
	// System.Int32 LTRect::counter
	int32_t ___counter_19;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
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

// WindowHandler/<LoadAv>d__23
struct U3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A 
{
	// System.Int32 WindowHandler/<LoadAv>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder WindowHandler/<LoadAv>d__23::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// WindowHandler WindowHandler/<LoadAv>d__23::<>4__this
	WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter WindowHandler/<LoadAv>d__23::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// System.Action`1<UnityEngine.Color>
struct Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.Vector2>
struct Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.Vector3>
struct Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2  : public MulticastDelegate_t
{
};

// System.Action`2<UnityEngine.Color,System.Object>
struct Action_2_tA6305A40DF06ED5230D130F9BFFB7DFF81760FF3  : public MulticastDelegate_t
{
};

// System.Action`2<System.Single,System.Object>
struct Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10  : public MulticastDelegate_t
{
};

// System.Action`2<System.Single,System.Single>
struct Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132  : public MulticastDelegate_t
{
};

// System.Action`2<UnityEngine.Vector3,System.Object>
struct Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C  : public MulticastDelegate_t
{
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandlerTexture::m_NativeData
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
	// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::mTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___mTexture_2;
	// System.Boolean UnityEngine.Networking.DownloadHandlerTexture::mHasTexture
	bool ___mHasTexture_3;
	// System.Boolean UnityEngine.Networking.DownloadHandlerTexture::mNonReadable
	bool ___mNonReadable_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___mTexture_2;
	int32_t ___mHasTexture_3;
	int32_t ___mNonReadable_4;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___mTexture_2;
	int32_t ___mHasTexture_3;
	int32_t ___mNonReadable_4;
};

// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionReference::m_Asset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_4;
	// System.String UnityEngine.InputSystem.InputActionReference::m_ActionId
	String_t* ___m_ActionId_5;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_6;
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// LTDescr/ActionMethodDelegate
struct ActionMethodDelegate_tE88025EB184988CC54961CA0853A56DDA2826048  : public MulticastDelegate_t
{
};

// LTDescr/EaseTypeDelegate
struct EaseTypeDelegate_t731A985425250B1DB3EC8DD69CA4644BD2DCF7CC  : public MulticastDelegate_t
{
};

// SkinHandler/<<LoadSkin>g__LoadImage|11_0>d
struct U3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8 
{
	// System.Int32 SkinHandler/<<LoadSkin>g__LoadImage|11_0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder SkinHandler/<<LoadSkin>g__LoadImage|11_0>d::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// System.String SkinHandler/<<LoadSkin>g__LoadImage|11_0>d::username
	String_t* ___username_2;
	// SkinHandler SkinHandler/<<LoadSkin>g__LoadImage|11_0>d::<>4__this
	SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* ___U3CU3E4__this_3;
	// UnityEngine.Networking.UnityWebRequest SkinHandler/<<LoadSkin>g__LoadImage|11_0>d::<request>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CrequestU3E5__2_4;
	// System.Runtime.CompilerServices.TaskAwaiter SkinHandler/<<LoadSkin>g__LoadImage|11_0>d::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_5;
};

// SkinHandler/<<LoadSkin>g__SetSkinType|11_1>d
struct U3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45 
{
	// System.Int32 SkinHandler/<<LoadSkin>g__SetSkinType|11_1>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder SkinHandler/<<LoadSkin>g__SetSkinType|11_1>d::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// System.String SkinHandler/<<LoadSkin>g__SetSkinType|11_1>d::username
	String_t* ___username_2;
	// SkinHandler SkinHandler/<<LoadSkin>g__SetSkinType|11_1>d::<>4__this
	SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* ___U3CU3E4__this_3;
	// UnityEngine.Networking.UnityWebRequest SkinHandler/<<LoadSkin>g__SetSkinType|11_1>d::<www>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwwwU3E5__2_4;
	// System.Runtime.CompilerServices.TaskAwaiter SkinHandler/<<LoadSkin>g__SetSkinType|11_1>d::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_5;
};

// UIHandler/<GetName>d__15
struct U3CGetNameU3Ed__15_t8DED562071A15F853BEC4FF4B6C13B63DFC33E33 
{
	// System.Int32 UIHandler/<GetName>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder UIHandler/<GetName>d__15::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// TMPro.TextMeshProUGUI UIHandler/<GetName>d__15::profileNameHolder
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___profileNameHolder_2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// InstanceManager
struct InstanceManager_tFB5E3E616F12DB413A972248B9E569042BCDCEE0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject InstanceManager::instanceArray
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___instanceArray_4;
	// UnityEngine.GameObject InstanceManager::instancePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___instancePrefab_5;
	// TMPro.TextMeshProUGUI InstanceManager::instanceVersion
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___instanceVersion_6;
	// TMPro.TextMeshProUGUI InstanceManager::instanceTitle
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___instanceTitle_7;
	// UnityEngine.UI.RawImage InstanceManager::instanceImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___instanceImage_8;
	// UnityEngine.GameObject InstanceManager::instanceRemoveMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___instanceRemoveMenu_9;
	// TMPro.TMP_InputField InstanceManager::instanceName
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___instanceName_10;
	// UnityEngine.UI.Toggle InstanceManager::defaultModsToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___defaultModsToggle_11;
	// TMPro.TMP_Dropdown InstanceManager::versionDropdown
	TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* ___versionDropdown_12;
	// WindowHandler InstanceManager::windowHandler
	WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* ___windowHandler_13;
	// UnityEngine.Texture2D InstanceManager::errorTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___errorTexture_14;
	// TMPro.TextMeshProUGUI InstanceManager::modCounter
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___modCounter_15;
	// UnityEngine.GameObject InstanceManager::modPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___modPrefab_16;
	// UnityEngine.GameObject InstanceManager::modArray
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___modArray_17;
	// APIHandler InstanceManager::apiHandler
	APIHandler_t6CC9CF56D3CD435410CA1E4F0ABD6347C0BB632A* ___apiHandler_18;
};

// JNIStorage
struct JNIStorage_t375A1F8724CA5D597A2FE2AD654C0A9059F8851D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<System.String> JNIStorage::supportedVersions
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___supportedVersions_9;
	// UIHandler JNIStorage::uiHandler
	UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016* ___uiHandler_10;
	// TMPro.TMP_InputField JNIStorage::RAMSetterField
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___RAMSetterField_11;
	// TMPro.TMP_Dropdown JNIStorage::instancesDropdown
	TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* ___instancesDropdown_12;
	// UnityEngine.UI.Toggle JNIStorage::_devToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ____devToggle_13;
};

// ModManager
struct ModManager_tB0092BDBA384CFCF9A3294DA37FD13BFA499D27C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ModManager::modPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___modPrefab_4;
	// UnityEngine.GameObject ModManager::modPagePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___modPagePrefab_5;
	// UnityEngine.GameObject ModManager::modArray
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___modArray_6;
	// UnityEngine.GameObject ModManager::modInfoArray
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___modInfoArray_7;
	// UnityEngine.GameObject ModManager::modPage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___modPage_8;
	// APIHandler ModManager::apiHandler
	APIHandler_t6CC9CF56D3CD435410CA1E4F0ABD6347C0BB632A* ___apiHandler_9;
	// TMPro.TextMeshProUGUI ModManager::modDescription
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___modDescription_10;
	// TMPro.TextMeshProUGUI ModManager::modTitle
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___modTitle_11;
	// TMPro.TextMeshProUGUI ModManager::modIDObject
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___modIDObject_12;
	// TMPro.TMP_InputField ModManager::searchQuery
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___searchQuery_13;
	// UnityEngine.UI.RawImage ModManager::modImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___modImage_14;
	// UnityEngine.GameObject ModManager::modSearchMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___modSearchMenu_15;
	// UnityEngine.GameObject ModManager::instanceMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___instanceMenu_16;
	// TMPro.TextMeshProUGUI ModManager::downloadText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___downloadText_17;
	// UnityEngine.GameObject ModManager::errorMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___errorMenu_18;
	// UnityEngine.GameObject ModManager::downloadButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___downloadButton_19;
	// UnityEngine.Texture2D ModManager::errorTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___errorTexture_20;
	// TMPro.TMP_Dropdown ModManager::instanceDropdown
	TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* ___instanceDropdown_21;
	// TMPro.TMP_Dropdown ModManager::mainMenuModDropdown
	TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* ___mainMenuModDropdown_22;
	// TMPro.TextMeshProUGUI ModManager::instanceLabel
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___instanceLabel_23;
	// UnityEngine.GameObject ModManager::modButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___modButton_24;
	// UnityEngine.GameObject ModManager::modPacksButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___modPacksButton_25;
	// UnityEngine.GameObject ModManager::resourcePacksButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___resourcePacksButton_26;
	// TMPro.TextMeshProUGUI ModManager::statusText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___statusText_27;
	// System.Int32 ModManager::page
	int32_t ___page_28;
	// System.String ModManager::currModSlug
	String_t* ___currModSlug_29;
	// System.String[] ModManager::currModVersions
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___currModVersions_30;
	// System.Boolean ModManager::isSearching
	bool ___isSearching_31;
};

// Quester
struct Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Quester::questerBox
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___questerBox_4;
	// UnityEngine.GameObject Quester::quest
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___quest_5;
	// UnityEngine.InputSystem.InputActionReference Quester::ToggleGame
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___ToggleGame_6;
	// UnityEngine.InputSystem.InputActionReference Quester::Act
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___Act_7;
	// System.Boolean Quester::gameon
	bool ___gameon_8;
	// UnityEngine.GameObject Quester::background
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___background_9;
	// UnityEngine.Vector3 Quester::BackGroundOriginalPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___BackGroundOriginalPosition_10;
	// UnityEngine.Vector3 Quester::QuestOriginalPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___QuestOriginalPosition_11;
	// TMPro.TextMeshProUGUI Quester::Title
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___Title_12;
	// TMPro.TextMeshProUGUI Quester::ScoreBox
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___ScoreBox_13;
	// UnityEngine.GameObject Quester::Obsticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Obsticle_14;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Quester::Obstacles
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___Obstacles_15;
	// System.Int32 Quester::_score
	int32_t ____score_16;
};

// QuesterGameEnder
struct QuesterGameEnder_t24D8E5F96401555996F4D08FCDB2145ADCC0D4AD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Quester QuesterGameEnder::GameManager
	Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* ___GameManager_4;
};

// ScoreAdder
struct ScoreAdder_tFB64CF27DECC982630854B5EF4B2997164B7BB1E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Quester ScoreAdder::GameManager
	Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* ___GameManager_4;
};

// SkinHandler
struct SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material SkinHandler::skin
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___skin_4;
	// UnityEngine.Material SkinHandler::profilePicture
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___profilePicture_5;
	// System.String SkinHandler::skinType
	String_t* ___skinType_6;
	// UnityEngine.GameObject SkinHandler::rSlim
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rSlim_7;
	// UnityEngine.GameObject SkinHandler::rClassic
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rClassic_8;
	// UnityEngine.GameObject SkinHandler::lSlim
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___lSlim_9;
	// UnityEngine.GameObject SkinHandler::lClassic
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___lClassic_10;
	// UnityEngine.GameObject SkinHandler::figurineSlim
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___figurineSlim_11;
	// UnityEngine.GameObject SkinHandler::figurineClassic
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___figurineClassic_12;
	// System.String SkinHandler::FETCHINGUSERNAME
	String_t* ___FETCHINGUSERNAME_13;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIHandler
struct UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI UIHandler::minuteHourText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___minuteHourText_4;
	// TMPro.TMP_Dropdown UIHandler::dropdownMain
	TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* ___dropdownMain_5;
	// TMPro.TMP_Dropdown UIHandler::dropdownModSearch
	TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* ___dropdownModSearch_6;
	// TMPro.TMP_Dropdown UIHandler::dropdownModInfo
	TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* ___dropdownModInfo_7;
	// TMPro.TMP_Dropdown UIHandler::dropdownInstanceCreator
	TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* ___dropdownInstanceCreator_8;
	// UnityEngine.GameObject UIHandler::errorMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___errorMenu_9;
	// UnityEngine.UI.Toggle UIHandler::modToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___modToggle_10;
	// UnityEngine.UI.Toggle UIHandler::modpacksToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___modpacksToggle_11;
	// UnityEngine.UI.Toggle UIHandler::resourcePacksToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___resourcePacksToggle_12;
	// ModManager UIHandler::modManager
	ModManager_tB0092BDBA384CFCF9A3294DA37FD13BFA499D27C* ___modManager_16;
};

// UiRedocker
struct UiRedocker_t50EC979A33241C3E6655D1C4CC036F115662EFDC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject UiRedocker::ui
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ui_4;
	// UnityEngine.GameObject UiRedocker::mainScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___mainScreen_5;
	// UnityEngine.GameObject UiRedocker::watchDisplay
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___watchDisplay_6;
	// UnityEngine.UI.Button UiRedocker::redockButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___redockButton_7;
	// System.Boolean UiRedocker::main
	bool ___main_8;
};

// VersionChecker
struct VersionChecker_tEE09B71014356A251DC3C5B82392DF9316DBA06F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String VersionChecker::currentPublicVersion
	String_t* ___currentPublicVersion_4;
	// TMPro.TextMeshProUGUI VersionChecker::updateText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___updateText_5;
};

// WindowHandler
struct WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject WindowHandler::devOptionsMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___devOptionsMenu_4;
	// UnityEngine.GameObject WindowHandler::loginElements
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___loginElements_5;
	// UnityEngine.GameObject WindowHandler::loginButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___loginButton_6;
	// UnityEngine.CanvasGroup WindowHandler::loginText
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___loginText_7;
	// UnityEngine.GameObject WindowHandler::startPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___startPanel_8;
	// UnityEngine.GameObject WindowHandler::mainPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___mainPanel_9;
	// TMPro.TextMeshProUGUI WindowHandler::profileNameHolder
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___profileNameHolder_10;
	// UnityEngine.UI.RawImage WindowHandler::pfpHolder
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___pfpHolder_11;
	// UnityEngine.GameObject WindowHandler::modSearchMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___modSearchMenu_12;
	// UnityEngine.GameObject WindowHandler::modSearchPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___modSearchPanel_13;
	// UnityEngine.GameObject WindowHandler::modInfoMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___modInfoMenu_14;
	// InstanceManager WindowHandler::instanceManager
	InstanceManager_tFB5E3E616F12DB413A972248B9E569042BCDCEE0* ___instanceManager_15;
	// UnityEngine.GameObject WindowHandler::instanceMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___instanceMenu_16;
	// UnityEngine.GameObject WindowHandler::instanceMainpage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___instanceMainpage_17;
	// UnityEngine.GameObject WindowHandler::instanceCreator
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___instanceCreator_18;
	// UnityEngine.GameObject WindowHandler::instanceInfo
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___instanceInfo_19;
	// UnityEngine.GameObject WindowHandler::instanceDeleteWarning
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___instanceDeleteWarning_20;
	// UnityEngine.GameObject WindowHandler::logoutWindow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___logoutWindow_21;
	// UnityEngine.GameObject WindowHandler::errorWindow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___errorWindow_22;
	// UnityEngine.GameObject WindowHandler::githubLogToggle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___githubLogToggle_23;
	// UnityEngine.GameObject WindowHandler::needHelpPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___needHelpPanel_24;
	// SkinHandler WindowHandler::skinHandler
	SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* ___skinHandler_25;
	// System.Boolean WindowHandler::githubLogAnimating
	bool ___githubLogAnimating_26;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_Dropdown
struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform TMPro.TMP_Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// TMPro.TMP_Text TMPro.TMP_Dropdown::m_CaptionText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_CaptionText_21;
	// UnityEngine.UI.Image TMPro.TMP_Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Graphic TMPro.TMP_Dropdown::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_23;
	// TMPro.TMP_Text TMPro.TMP_Dropdown::m_ItemText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_ItemText_24;
	// UnityEngine.UI.Image TMPro.TMP_Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_25;
	// System.Int32 TMPro.TMP_Dropdown::m_Value
	int32_t ___m_Value_26;
	// TMPro.TMP_Dropdown/OptionDataList TMPro.TMP_Dropdown::m_Options
	OptionDataList_tF66EA4801BFA499F010E6EFF89ED760BF4F0BEE1* ___m_Options_27;
	// TMPro.TMP_Dropdown/DropdownEvent TMPro.TMP_Dropdown::m_OnValueChanged
	DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91* ___m_OnValueChanged_28;
	// System.Single TMPro.TMP_Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_29;
	// UnityEngine.GameObject TMPro.TMP_Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_30;
	// UnityEngine.GameObject TMPro.TMP_Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_31;
	// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/DropdownItem> TMPro.TMP_Dropdown::m_Items
	List_1_tA7EEECF976A6B4957450A4D235070C9324ED1A97* ___m_Items_32;
	// TMPro.TweenRunner`1<TMPro.FloatTween> TMPro.TMP_Dropdown::m_AlphaTweenRunner
	TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E* ___m_AlphaTweenRunner_33;
	// System.Boolean TMPro.TMP_Dropdown::validTemplate
	bool ___validTemplate_34;
	// UnityEngine.Coroutine TMPro.TMP_Dropdown::m_Coroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_Coroutine_35;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_StaticFields
{
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BooleanTypes_4;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___NumberTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BigIntegerTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BigIntegerTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___StringTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___GuidTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___TimeSpanTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___UriTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___CharTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___DateTimeTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BytesTypes_13;
};

// Newtonsoft.Json.Linq.JToken

// LTBezierPath

// LTBezierPath

// LTSeq

// LTSeq

// LTSpline
struct LTSpline_tC934BB65DEF45BC8FBF1F47A99B2D3A7785F3D5D_StaticFields
{
	// System.Int32 LTSpline::DISTANCE_COUNT
	int32_t ___DISTANCE_COUNT_0;
	// System.Int32 LTSpline::SUBLINE_COUNT
	int32_t ___SUBLINE_COUNT_1;
};

// LTSpline

// DentedPixel.LeanDummy

// DentedPixel.LeanDummy

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// System.Version

// System.Version

// LTDescr/<>c
struct U3CU3Ec_t573714D0F4A8020AA5706EF5484FD5F787729F5F_StaticFields
{
	// LTDescr/<>c LTDescr/<>c::<>9
	U3CU3Ec_t573714D0F4A8020AA5706EF5484FD5F787729F5F* ___U3CU3E9_0;
	// LTDescr/ActionMethodDelegate LTDescr/<>c::<>9__113_0
	ActionMethodDelegate_tE88025EB184988CC54961CA0853A56DDA2826048* ___U3CU3E9__113_0_1;
	// LTDescr/ActionMethodDelegate LTDescr/<>c::<>9__114_0
	ActionMethodDelegate_tE88025EB184988CC54961CA0853A56DDA2826048* ___U3CU3E9__114_0_2;
};

// LTDescr/<>c

// Quester/<>c__DisplayClass20_0

// Quester/<>c__DisplayClass20_0

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// UnityEngine.Events.UnityEvent`1<System.Boolean>

// UnityEngine.Events.UnityEvent`1<System.Boolean>

// UnityEngine.Events.UnityEvent`1<System.Int32>

// UnityEngine.Events.UnityEvent`1<System.Int32>

// UnityEngine.AndroidJavaClass

// UnityEngine.AndroidJavaClass

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// System.Runtime.CompilerServices.TaskAwaiter

// System.Runtime.CompilerServices.TaskAwaiter

// System.UInt32

// System.UInt32

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// Unity.Mathematics.float3
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_StaticFields
{
	// Unity.Mathematics.float3 Unity.Mathematics.float3::zero
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___zero_3;
};

// Unity.Mathematics.float3

// Unity.Mathematics.float4
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E_StaticFields
{
	// Unity.Mathematics.float4 Unity.Mathematics.float4::zero
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___zero_4;
};

// Unity.Mathematics.float4

// UnityEngine.AnimationCurve

// UnityEngine.AnimationCurve

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder

// UnityEngine.Collision2D

// UnityEngine.Collision2D

// System.Delegate

// System.Delegate

// UnityEngine.Networking.DownloadHandler

// UnityEngine.Networking.DownloadHandler

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.FilterMode

// UnityEngine.FilterMode

// UnityEngine.ForceMode2D

// UnityEngine.ForceMode2D

// Newtonsoft.Json.Linq.JObject

// Newtonsoft.Json.Linq.JObject

// LTDescrOptional

// LTDescrOptional

// LeanTweenType

// LeanTweenType

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Unity.Mathematics.quaternion
struct quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_StaticFields
{
	// Unity.Mathematics.quaternion Unity.Mathematics.quaternion::identity
	quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___identity_1;
};

// Unity.Mathematics.quaternion

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// TMPro.TMP_Dropdown/DropdownEvent

// TMPro.TMP_Dropdown/DropdownEvent

// UnityEngine.UI.Toggle/ToggleEvent

// UnityEngine.UI.Toggle/ToggleEvent

// UnityEngine.Networking.UnityWebRequest/Result

// UnityEngine.Networking.UnityWebRequest/Result

// Unity.Mathematics.math/RotationOrder

// Unity.Mathematics.math/RotationOrder

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// LTDescr
struct LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696_StaticFields
{
	// System.Single LTDescr::val
	float ___val_45;
	// System.Single LTDescr::dt
	float ___dt_46;
	// UnityEngine.Vector3 LTDescr::newVect
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___newVect_47;
};

// LTDescr

// LTRect
struct LTRect_tE59D1029540FDC2C553CB986B1E93E4EFF88B58D_StaticFields
{
	// System.Boolean LTRect::colorTouched
	bool ___colorTouched_20;
};

// LTRect

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// WindowHandler/<LoadAv>d__23

// WindowHandler/<LoadAv>d__23

// System.Action`1<UnityEngine.Color>

// System.Action`1<UnityEngine.Color>

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`1<System.Single>

// System.Action`1<System.Single>

// System.Action`1<UnityEngine.Vector2>

// System.Action`1<UnityEngine.Vector2>

// System.Action`1<UnityEngine.Vector3>

// System.Action`1<UnityEngine.Vector3>

// System.Action`2<UnityEngine.Color,System.Object>

// System.Action`2<UnityEngine.Color,System.Object>

// System.Action`2<System.Single,System.Object>

// System.Action`2<System.Single,System.Object>

// System.Action`2<System.Single,System.Single>

// System.Action`2<System.Single,System.Single>

// System.Action`2<UnityEngine.Vector3,System.Object>

// System.Action`2<UnityEngine.Vector3,System.Object>

// UnityEngine.Events.UnityAction`1<System.Boolean>

// UnityEngine.Events.UnityAction`1<System.Boolean>

// UnityEngine.Events.UnityAction`1<System.Int32>

// UnityEngine.Events.UnityAction`1<System.Int32>

// System.Action

// System.Action

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Networking.DownloadHandlerTexture

// UnityEngine.Networking.DownloadHandlerTexture

// UnityEngine.InputSystem.InputActionReference

// UnityEngine.InputSystem.InputActionReference

// UnityEngine.Rigidbody2D

// UnityEngine.Rigidbody2D

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// LTDescr/ActionMethodDelegate

// LTDescr/ActionMethodDelegate

// LTDescr/EaseTypeDelegate

// LTDescr/EaseTypeDelegate

// SkinHandler/<<LoadSkin>g__LoadImage|11_0>d

// SkinHandler/<<LoadSkin>g__LoadImage|11_0>d

// SkinHandler/<<LoadSkin>g__SetSkinType|11_1>d

// SkinHandler/<<LoadSkin>g__SetSkinType|11_1>d

// UIHandler/<GetName>d__15

// UIHandler/<GetName>d__15

// UnityEngine.CanvasGroup

// UnityEngine.CanvasGroup

// UnityEngine.Collider2D

// UnityEngine.Collider2D

// UnityEngine.InputSystem.InputAction

// UnityEngine.InputSystem.InputAction

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// InstanceManager

// InstanceManager

// JNIStorage
struct JNIStorage_t375A1F8724CA5D597A2FE2AD654C0A9059F8851D_StaticFields
{
	// UnityEngine.AndroidJavaClass JNIStorage::apiClass
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___apiClass_4;
	// UnityEngine.AndroidJavaObject JNIStorage::accountObj
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___accountObj_5;
	// UnityEngine.AndroidJavaObject JNIStorage::activity
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___activity_6;
	// UnityEngine.AndroidJavaObject JNIStorage::instancesObj
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___instancesObj_7;
	// JNIStorage JNIStorage::instance
	JNIStorage_t375A1F8724CA5D597A2FE2AD654C0A9059F8851D* ___instance_8;
};

// JNIStorage

// ModManager

// ModManager

// Quester

// Quester

// QuesterGameEnder

// QuesterGameEnder

// ScoreAdder

// ScoreAdder

// SkinHandler

// SkinHandler

// UIHandler
struct UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_StaticFields
{
	// System.Int32 UIHandler::selectedInstance
	int32_t ___selectedInstance_13;
	// System.String UIHandler::pfpUrl
	String_t* ___pfpUrl_14;
	// System.String UIHandler::profileName
	String_t* ___profileName_15;
};

// UIHandler

// UiRedocker

// UiRedocker

// VersionChecker

// VersionChecker

// WindowHandler

// WindowHandler

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// TMPro.TMP_Dropdown
struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504_StaticFields
{
	// TMPro.TMP_Dropdown/OptionData TMPro.TMP_Dropdown::s_NoOptionData
	OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* ___s_NoOptionData_36;
};

// TMPro.TMP_Dropdown

// UnityEngine.UI.Toggle

// UnityEngine.UI.Toggle

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};

// TMPro.TextMeshProUGUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.UI.Toggle[]
struct ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098  : public RuntimeArray
{
	ALIGN_FIELD (8) Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* m_Items[1];

	inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* value)
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


// System.Void System.Action`1<System.Single>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Single,System.Single>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m50A62593A87E11ED31B47FE46E633AB3B9A7666C_gshared_inline (Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* __this, float ___0_arg1, float ___1_arg2, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Single,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m9E7863E85E4D6B6D0C7F731513A8ECC8139FE626_gshared_inline (Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* __this, float ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) ;
// System.Void System.Action`2<UnityEngine.Vector3,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m719475FEF89235EA7C17D75BF384DE2B9545839B_gshared_inline (Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Vector3>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m211AB6C2AA7326F6BFC8338EC888360A219AFF41_gshared_inline (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Vector2>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m3C60C84018CAD36C0EC956A14935394A7DD116C6_gshared_inline (Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_obj, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mE9E1859293BB35881CCC94B4A6E0A0E9997E046C_gshared (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<SkinHandler/<<LoadSkin>g__LoadImage|11_0>d>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8_mBF21D74187524A3ECD455BD0AB4E864C027F0521_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<SkinHandler/<<LoadSkin>g__SetSkinType|11_1>d>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45_m6D99AAA288CE89C97C004F600ABCAE36A1EB5898_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,SkinHandler/<<LoadSkin>g__LoadImage|11_0>d>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8_m7B848906E9892F16BB907E5F7BD0A2189060A9C4_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,SkinHandler/<<LoadSkin>g__SetSkinType|11_1>d>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45_m503E617FC27E5B5E700185DF654EC4C05B3BD57A_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___0_call, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B_gshared (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_gshared (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* ___0_call, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<UIHandler/<GetName>d__15>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CGetNameU3Ed__15_t8DED562071A15F853BEC4FF4B6C13B63DFC33E33_m9E5AC078FF66579C1B9DA64C4E996F0BDA848255_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CGetNameU3Ed__15_t8DED562071A15F853BEC4FF4B6C13B63DFC33E33* ___0_stateMachine, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WindowHandler/<LoadAv>d__23>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A_mB7C9A2B6CBA531F6AEB08A3FCC1B4AE7F55F8D76_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859_gshared (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WindowHandler/<LoadAv>d__23>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A_m96408582444873AD97A8B3230DA560BFEC270EA3_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A* ___1_stateMachine, const RuntimeMethod* method) ;

// System.Void LTDescr/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDF258EA3C7981050CC81303BFDD2F304E803F728 (U3CU3Ec_t573714D0F4A8020AA5706EF5484FD5F787729F5F* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void LTDescrOptional::set_onUpdateFloat(System.Action`1<System.Single>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateFloat_m60C1527D8CD4CDB790CEEA8A9C4DABA66FCED416_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___0_value, const RuntimeMethod* method) ;
// System.Void LTDescrOptional::set_onUpdateFloatRatio(System.Action`2<System.Single,System.Single>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateFloatRatio_m7FDCD87889C4E0CF748252718BD369258C20B7F7_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* ___0_value, const RuntimeMethod* method) ;
// System.Void LTDescrOptional::set_onUpdateVector2(System.Action`1<UnityEngine.Vector2>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateVector2_mE23EA8009F7B359E6E34D97E4E605EDC8614A76D_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* ___0_value, const RuntimeMethod* method) ;
// System.Void LTDescrOptional::set_onUpdateVector3(System.Action`1<UnityEngine.Vector3>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateVector3_m4006C4EB660AF5B6A885813692D9F2BD2A6163A7_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* ___0_value, const RuntimeMethod* method) ;
// System.Void LTDescrOptional::set_onUpdateFloatObject(System.Action`2<System.Single,System.Object>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateFloatObject_m822C5CD1005334071D7193BA3A0C5F347618A698_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* ___0_value, const RuntimeMethod* method) ;
// System.Void LTDescrOptional::set_onUpdateVector3Object(System.Action`2<UnityEngine.Vector3,System.Object>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateVector3Object_m06C50A94386A9BC2E70F8F2C7EC716E38365FD8C_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* ___0_value, const RuntimeMethod* method) ;
// System.Void LTDescrOptional::set_onUpdateColor(System.Action`1<UnityEngine.Color>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateColor_m66C10CCCC8A25105F394CF69E3642B7E9A743246_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22* ___0_value, const RuntimeMethod* method) ;
// System.Void LTDescrOptional::set_onComplete(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onComplete_mFCBAF9050ACCE710820E46B2D8A2464B8D05DF7B_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// System.Void LTDescrOptional::set_onCompleteObject(System.Action`1<System.Object>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onCompleteObject_m022D536BBC07E52DD29D4F2FDE40833711BAC1A7_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_value, const RuntimeMethod* method) ;
// System.Void LTDescrOptional::set_onCompleteParam(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onCompleteParam_m5320FE5FF67B3356DBFFBAED783C7128C85C6138_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void LTDescrOptional::set_onStart(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onStart_mC981CE15440DB9DB464ECFF6FCC1D5651C8BB0F7_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void LTDescrOptional::set_point(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_point_m8118FB8ACBCDB57858243C919EDF6CADD7B63280_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Action`1<System.Single> LTDescrOptional::get_onUpdateFloat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* LTDescrOptional_get_onUpdateFloat_m262BF995B9678367E2D7235324D8B924B802636F_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::Invoke(T)
inline void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, float, const RuntimeMethod*))Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline)(__this, ___0_obj, method);
}
// System.Action`2<System.Single,System.Single> LTDescrOptional::get_onUpdateFloatRatio()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* LTDescrOptional_get_onUpdateFloatRatio_m90F38461C54B50E72F8D082FFBF5A86F92ECBC4C_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Single,System.Single>::Invoke(T1,T2)
inline void Action_2_Invoke_m50A62593A87E11ED31B47FE46E633AB3B9A7666C_inline (Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* __this, float ___0_arg1, float ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132*, float, float, const RuntimeMethod*))Action_2_Invoke_m50A62593A87E11ED31B47FE46E633AB3B9A7666C_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// System.Action`2<System.Single,System.Object> LTDescrOptional::get_onUpdateFloatObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* LTDescrOptional_get_onUpdateFloatObject_m0620EBFB83B5F0177BB73092DF04BA3185BA52D6_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) ;
// System.Object LTDescrOptional::get_onUpdateParam()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LTDescrOptional_get_onUpdateParam_mED66593FCE15D7358FD5AD9EFC9CBE45FED8E29C_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Single,System.Object>::Invoke(T1,T2)
inline void Action_2_Invoke_m9E7863E85E4D6B6D0C7F731513A8ECC8139FE626_inline (Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* __this, float ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10*, float, RuntimeObject*, const RuntimeMethod*))Action_2_Invoke_m9E7863E85E4D6B6D0C7F731513A8ECC8139FE626_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// System.Action`2<UnityEngine.Vector3,System.Object> LTDescrOptional::get_onUpdateVector3Object()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* LTDescrOptional_get_onUpdateVector3Object_m8208D4E77FFAA9929E6C356CD4EF9129DFE9BE1B_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<UnityEngine.Vector3,System.Object>::Invoke(T1,T2)
inline void Action_2_Invoke_m719475FEF89235EA7C17D75BF384DE2B9545839B_inline (Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, RuntimeObject*, const RuntimeMethod*))Action_2_Invoke_m719475FEF89235EA7C17D75BF384DE2B9545839B_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// System.Action`1<UnityEngine.Vector3> LTDescrOptional::get_onUpdateVector3()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* LTDescrOptional_get_onUpdateVector3_mDF6048FB81A1B05487E41E7591B4C8D4058D7492_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Vector3>::Invoke(T)
inline void Action_1_Invoke_m211AB6C2AA7326F6BFC8338EC888360A219AFF41_inline (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))Action_1_Invoke_m211AB6C2AA7326F6BFC8338EC888360A219AFF41_gshared_inline)(__this, ___0_obj, method);
}
// System.Action`1<UnityEngine.Vector2> LTDescrOptional::get_onUpdateVector2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* LTDescrOptional_get_onUpdateVector2_m64A0AFC164DE5C28CA403075CD77D707AEE75ABB_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Vector2>::Invoke(T)
inline void Action_1_Invoke_m3C60C84018CAD36C0EC956A14935394A7DD116C6_inline (Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))Action_1_Invoke_m3C60C84018CAD36C0EC956A14935394A7DD116C6_gshared_inline)(__this, ___0_obj, method);
}
// System.Void LTSeq::reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTSeq_reset_m64DB3F421BCCF6E11A00ED1F289CB13EF565B19C (LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* __this, const RuntimeMethod* method) ;
// LTSeq LeanTween::sequence(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* LeanTween_sequence_m893486F8A5DA89C467BAF7404814FBED083D6A68 (bool ___0_initSequence, const RuntimeMethod* method) ;
// LTDescr LeanTween::delayedCall(System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* LeanTween_delayedCall_m3C250C5B05FCD31473BE22E2A91F8AF157479B5E (float ___0_delayTime, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_callback, const RuntimeMethod* method) ;
// LTSeq LTSeq::append(LTDescr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* LTSeq_append_m30B44A2CC0056476631A7727FBB708014123D985 (LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* __this, LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* ___0_tween, const RuntimeMethod* method) ;
// LTDescr LeanTween::delayedCall(System.Single,System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* LeanTween_delayedCall_mFE5B108186F140D0B0375DE7C44AAECD9AA4B926 (float ___0_delayTime, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_callback, const RuntimeMethod* method) ;
// LTDescr LTDescr::setOnCompleteParam(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* LTDescr_setOnCompleteParam_m95419B3DE63D0B7BAA98DABFAE815A17F693A7AE (LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* __this, RuntimeObject* ___0_onCompleteParam, const RuntimeMethod* method) ;
// LTSeq LTSeq::addOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* LTSeq_addOn_m273AAC407884D5AEF02782FC25FED28CFA049A35 (LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* __this, const RuntimeMethod* method) ;
// LTDescr LeanTween::delayedCall(UnityEngine.GameObject,System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* LeanTween_delayedCall_mB277AD7C889E2A2C250A3DE182293D1EFCB3EA00 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, float ___1_delayTime, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___2_callback, const RuntimeMethod* method) ;
// LTDescr LeanTween::delayedCall(UnityEngine.GameObject,System.Single,System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* LeanTween_delayedCall_m9668A8B0169DF0E0FCCA88C593B94D9F301C39A1 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, float ___1_delayTime, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___2_callback, const RuntimeMethod* method) ;
// System.Single LTSeq::addPreviousDelays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LTSeq_addPreviousDelays_mE86B727E7613DFAEBA120D42839F9BA322E387C6 (LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* __this, const RuntimeMethod* method) ;
// LTDescr LTDescr::setDelay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* LTDescr_setDelay_mC124A2BE2B598FA4EB8E7801E796C4B600EE5459 (LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* __this, float ___0_delay, const RuntimeMethod* method) ;
// System.Void LTSeq::setScaleRecursive(LTSeq,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTSeq_setScaleRecursive_mE3612D8EA414AAE553E97A18A197DE9B409B24A6 (LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* __this, LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* ___0_seq, float ___1_timeScale, int32_t ___2_count, const RuntimeMethod* method) ;
// LTDescr LTDescr::setTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* LTDescr_setTime_m74D5ED525D99F4418E0BC4DC1EAFF417DE9735A2 (LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* __this, float ___0_time, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_Enable_mB3897C0741409C033656E4566EC49135C3C8BC68 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_Disable_m72D1982F82457C6E003440BADD06989D399BDE50 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Int32 Quester::get_score()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Quester_get_score_m1AC0974107BBC66B5ECAEB48D1539222D5041658_inline (Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void LeanTween::cancel(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTween_cancel_mD16E6D2B29E547FEF03D37E4289F29605AB377A8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody2D::set_angularVelocity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_angularVelocity_mFC06FB14E69DD4847F27E614900D22317AA5A390 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_isKinematic_m7C68AB4CFB6D301F0EDF0BFF66FB121ED3CC7853 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// LTDescr LeanTween::value(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* LeanTween_value_m58B70EAEC22B8B27CFD01000A56285D3464E47B2 (float ___0_from, float ___1_to, float ___2_time, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// LTDescr LTDescr::setOnComplete(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* LTDescr_setOnComplete_m71532B82E69D79F08953DFCECE0E2F024F4A06E4 (LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_onComplete, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Quester/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_mA7336F98048B064E439B6DA56E9E4465F2DB1973 (U3CU3Ec__DisplayClass20_0_t861E900D6FF2354B4096105C4D34E500F2EC8D0F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// LTDescr LeanTween::value(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* LeanTween_value_m51BDE5739C61EA00CDF63A6F207299EEA41BAB42 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_to, float ___3_time, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mE9E1859293BB35881CCC94B4A6E0A0E9997E046C (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mE9E1859293BB35881CCC94B4A6E0A0E9997E046C_gshared)(__this, ___0_object, ___1_method, method);
}
// LTDescr LTDescr::setOnUpdate(System.Action`1<UnityEngine.Vector3>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* LTDescr_setOnUpdate_m885E4DD3596845E89C5004C3C3786B09330576C7 (LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* __this, Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* ___0_onUpdate, RuntimeObject* ___1_onUpdateParam, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void Quester::set_score(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quester_set_score_mAA95F1C83BD06FE11AF7C551699F764FE54ADBE4 (Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Quester::loopbg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quester_loopbg_mD8B8AFC7124FA4FC0B5D5E471C6E4140E55CB4A2 (Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* __this, const RuntimeMethod* method) ;
// System.Void Quester::GenerateObstacles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quester_GenerateObstacles_mD8FBDEA29C7EF91E374E072AC2A07852CB98BD3E (Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputAction::IsPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void Quester::Startgame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quester_Startgame_m1161B0B1A24DEEAB7FBF626F6498F7C2B6855DE9 (Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_force, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void Quester::Gameover()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quester_Gameover_m34AF24A274F5BC780DDFE829E7C7713198AD22B1 (Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* __this, const RuntimeMethod* method) ;
// System.Void SkinHandler::LoadSkin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinHandler_LoadSkin_m1702A8F5967C169CE129F06A7B61B4A0D2CD78CD (SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* __this, String_t* ___0_username, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task SkinHandler::<LoadSkin>g__LoadImage|11_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* SkinHandler_U3CLoadSkinU3Eg__LoadImageU7C11_0_m94F41761F4A610A526B9E8A2E509073FD37D597B (SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* __this, String_t* ___0_username, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task SkinHandler::<LoadSkin>g__SetSkinType|11_1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* SkinHandler_U3CLoadSkinU3Eg__SetSkinTypeU7C11_1_m7E90E2F3919C2D5765FEB2EF886DEBA5F587E2BB (SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* __this, String_t* ___0_username, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<SkinHandler/<<LoadSkin>g__LoadImage|11_0>d>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8_mBF21D74187524A3ECD455BD0AB4E864C027F0521 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8_mBF21D74187524A3ECD455BD0AB4E864C027F0521_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<SkinHandler/<<LoadSkin>g__SetSkinType|11_1>d>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45_m6D99AAA288CE89C97C004F600ABCAE36A1EB5898 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45_m6D99AAA288CE89C97C004F600ABCAE36A1EB5898_gshared)(__this, ___0_stateMachine, method);
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestTexture::GetTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestTexture_GetTexture_mEEC74BBC5190D4012A0B87C5D439AF59E22EF2EF (String_t* ___0_uri, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_version_m9CC0E94F12493682C1A2CA803083F6F01BA43124 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___0_name, String_t* ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_Delay_m4B84654B4DAADEC41096D9F01C099CCEA9927A48 (int32_t ___0_millisecondsDelay, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,SkinHandler/<<LoadSkin>g__LoadImage|11_0>d>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8_m7B848906E9892F16BB907E5F7BD0A2189060A9C4 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8_m7B848906E9892F16BB907E5F7BD0A2189060A9C4_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isDone_m3079B53A1CAFD8D5B334C635761E7B7E10B14123 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DownloadHandlerTexture_get_texture_m170B5539995EB5984E98E426F52983589F7BEB7C (DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void SkinHandler/<<LoadSkin>g__LoadImage|11_0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_MoveNext_m9157138EAEA6CE102D7860F58045C855C3D57899 (U3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void SkinHandler/<<LoadSkin>g__LoadImage|11_0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_SetStateMachine_mEBED7B8E1BBF1CC71B8B3427A83F67E3C61A3510 (U3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Get_m1A332EE069BB5052368307F254A5A7627BB5FD86 (String_t* ___0_uri, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,SkinHandler/<<LoadSkin>g__SetSkinType|11_1>d>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45_m503E617FC27E5B5E700185DF654EC4C05B3BD57A (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45_m503E617FC27E5B5E700185DF654EC4C05B3BD57A_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* JObject_Parse_mBC884661DD2708BA92BCE45E8C104924542A2D43 (String_t* ___0_json, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* JObject_get_Item_m889A29E8FCEA531AF829407F208DD05F0108C50B (JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* __this, String_t* ___0_propertyName, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Linq.JToken::op_Explicit(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JToken_op_Explicit_mA435B5A6C389220DF41F02E1CAE6AEA4EEFBCFF3 (JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void SkinHandler/<<LoadSkin>g__SetSkinType|11_1>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_MoveNext_mEC7811AFF6C4BFFCDA515A09D4CCFD63CC73D967 (U3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45* __this, const RuntimeMethod* method) ;
// System.Void SkinHandler/<<LoadSkin>g__SetSkinType|11_1>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_SetStateMachine_mA8C1883E158AB871E39D986B9F75D19E1D7A00BF (U3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, const RuntimeMethod*))UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared)(__this, ___0_call, method);
}
// TMPro.TMP_Dropdown/DropdownEvent TMPro.TMP_Dropdown::get_onValueChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91* TMP_Dropdown_get_onValueChanged_mC5A65068BFDC48C26FAC4B6FB2C0983633168BFF_inline (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A*, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*, const RuntimeMethod*))UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_gshared)(__this, ___0_call, method);
}
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<UIHandler/<GetName>d__15>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CGetNameU3Ed__15_t8DED562071A15F853BEC4FF4B6C13B63DFC33E33_m9E5AC078FF66579C1B9DA64C4E996F0BDA848255 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CGetNameU3Ed__15_t8DED562071A15F853BEC4FF4B6C13B63DFC33E33* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CGetNameU3Ed__15_t8DED562071A15F853BEC4FF4B6C13B63DFC33E33*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CGetNameU3Ed__15_t8DED562071A15F853BEC4FF4B6C13B63DFC33E33_m9E5AC078FF66579C1B9DA64C4E996F0BDA848255_gshared)(__this, ___0_stateMachine, method);
}
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void ModManager::SearchMods()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModManager_SearchMods_m4024319194739757C7BDDA0D6905CE9AA0F23166 (ModManager_tB0092BDBA384CFCF9A3294DA37FD13BFA499D27C* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Dropdown::AddOptions(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Dropdown_AddOptions_m6EB4E175FE6B5555BDC2C31EFBCC3B115DE85FF5 (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_options, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Dropdown::SetValueWithoutNotify(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Dropdown_SetValueWithoutNotify_m619A7D38D1EBCCA60EB1F5891FAD9FD0FB4839FD (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, int32_t ___0_input, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Dropdown::ClearOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Dropdown_ClearOptions_m9888C23BC3033268E5C2D8613C0854661E7BDEB5 (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Void UIHandler::OnToggleClicked(System.Boolean,UnityEngine.UI.Toggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHandler_OnToggleClicked_mE6FA448788F4E922D4617E10309B0DF2D812A091 (UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016* __this, bool ___0_value, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___1_clickedToggle, const RuntimeMethod* method) ;
// System.Int32 TMPro.TMP_Dropdown::get_value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TMP_Dropdown_get_value_m5916A6D1897431E8ED789FEC24551A311D1B5C70_inline (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, const RuntimeMethod* method) ;
// System.Void UIHandler::UpdateDropdowns(System.Boolean,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHandler_UpdateDropdowns_m5A572FF88B2C023B07959735A6092B1F4D7CB502 (UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016* __this, bool ___0_init, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___1_list, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.String>(System.String)
inline String_t* AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___0_fieldName, method);
}
// System.Void UIHandler/<GetName>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNameU3Ed__15_MoveNext_mC70AC862DCB6FD39474F3F0C90619A9F7588D1C7 (U3CGetNameU3Ed__15_t8DED562071A15F853BEC4FF4B6C13B63DFC33E33* __this, const RuntimeMethod* method) ;
// System.Void UIHandler/<GetName>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNameU3Ed__15_SetStateMachine_m70626F1206616FAF4F8C97805060B764D72D954C (U3CGetNameU3Ed__15_t8DED562071A15F853BEC4FF4B6C13B63DFC33E33* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.float3::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Implicit_mE1831A3AC179B7EB3236F8202EC8DD5CE05376AB (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// Unity.Mathematics.quaternion Unity.Mathematics.quaternion::Euler(Unity.Mathematics.float3,Unity.Mathematics.math/RotationOrder)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 quaternion_Euler_m8CBB7FB5BC25727DF15AC03C3B77DDD9816CC42F_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_xyz, uint8_t ___1_order, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Unity.Mathematics.quaternion::op_Implicit(Unity.Mathematics.quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 quaternion_op_Implicit_m78F07E28F5AB9C26F0EE997B2F12AF4A209FCD41 (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___0_q, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void UiRedocker::Transition(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UiRedocker_Transition_m4E41CC9795EFFF6A716906AD32B3EA94F76BBFFE (UiRedocker_t50EC979A33241C3E6655D1C4CC036F115662EFDC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_transitionObject, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Version System.Version::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* Version_Parse_m4E65C2149814B8BDEE731FA5E3D90EF75039D30E (String_t* ___0_input, const RuntimeMethod* method) ;
// System.Boolean System.Version::op_GreaterThanOrEqual(System.Version,System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___0_v1, Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___1_v2, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WindowHandler/<LoadAv>d__23>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A_mB7C9A2B6CBA531F6AEB08A3FCC1B4AE7F55F8D76 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A_mB7C9A2B6CBA531F6AEB08A3FCC1B4AE7F55F8D76_gshared)(__this, ___0_stateMachine, method);
}
// System.Void InstanceManager::CreateInstanceArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstanceManager_CreateInstanceArray_mFDD56DE2B76BEB63E4434CD2525F495B8DC73871 (InstanceManager_tFB5E3E616F12DB413A972248B9E569042BCDCEE0* __this, const RuntimeMethod* method) ;
// System.Void JNIStorage::UpdateInstances()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JNIStorage_UpdateInstances_mDFAE6C5FA767D83F9F9F0F15994CE77C0CF4F67E (JNIStorage_t375A1F8724CA5D597A2FE2AD654C0A9059F8851D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// LTDescr LeanTween::value(UnityEngine.GameObject,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* LeanTween_value_m4861DD35827C49BB547059303D4F6B1F414655BF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, float ___1_from, float ___2_to, float ___3_time, const RuntimeMethod* method) ;
// LTDescr LTDescr::setEase(LeanTweenType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* LTDescr_setEase_m095FF057D085E9426DDA13E665D6EF3F0704F60C (LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* __this, int32_t ___0_easeType, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859 (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859_gshared)(__this, ___0_object, ___1_method, method);
}
// LTDescr LTDescr::setOnUpdate(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* LTDescr_setOnUpdate_mCEDAAF707297D0F7ADF0476652E188A91505551C (LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___0_onUpdate, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task UIHandler::GetName(TMPro.TextMeshProUGUI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* UIHandler_GetName_m5931410BCB87EFCFEC92C31E2FA9B0D2DE6054AD (TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___0_profileNameHolder, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WindowHandler/<LoadAv>d__23>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A_m96408582444873AD97A8B3230DA560BFEC270EA3 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A_m96408582444873AD97A8B3230DA560BFEC270EA3_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void WindowHandler/<LoadAv>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAvU3Ed__23_MoveNext_m5B01BB290F2A2AE149614E8C491291DF04809158 (U3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void WindowHandler/<LoadAv>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAvU3Ed__23_SetStateMachine_m40675A60746604EDB991A54A72A6FCA6BEAEEC19 (U3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// Unity.Mathematics.quaternion Unity.Mathematics.quaternion::EulerXYZ(Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 quaternion_EulerXYZ_m0AD608E878C0F5683DD56F636D10C75071C50E83_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_xyz, const RuntimeMethod* method) ;
// Unity.Mathematics.quaternion Unity.Mathematics.quaternion::EulerXZY(Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 quaternion_EulerXZY_m26440D15BEDC82C128C37089E3288057827813F4_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_xyz, const RuntimeMethod* method) ;
// Unity.Mathematics.quaternion Unity.Mathematics.quaternion::EulerYXZ(Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 quaternion_EulerYXZ_m0EF0816E8382D05FA816EFCAA904AD894252750E_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_xyz, const RuntimeMethod* method) ;
// Unity.Mathematics.quaternion Unity.Mathematics.quaternion::EulerYZX(Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 quaternion_EulerYZX_m83C2E3AE9BBAF6BC8158EE1B18ECEC43A334B191_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_xyz, const RuntimeMethod* method) ;
// Unity.Mathematics.quaternion Unity.Mathematics.quaternion::EulerZXY(Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 quaternion_EulerZXY_mB4AA3C34723ED7FA7ABCF56A8078D606EB835597_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_xyz, const RuntimeMethod* method) ;
// Unity.Mathematics.quaternion Unity.Mathematics.quaternion::EulerZYX(Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 quaternion_EulerZYX_m3005B4219207CB181E5EC8DB3F82FC8280A5BB55_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_xyz, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.float3::op_Multiply(System.Single,Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Multiply_m38F52B61F8E5636955A1A6DF3A75BD0724148350_inline (float ___0_lhs, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_rhs, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.math::sincos(Unity.Mathematics.float3,Unity.Mathematics.float3&,Unity.Mathematics.float3&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void math_sincos_m28D7C74E99CF12DE35172DC6F26C77FD4D46D1B7_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_x, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___1_s, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___2_c, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.float3::get_xyz()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_get_xyz_m720A862AA512BE0B0B1089527A43EEF2B6766BEF_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, const RuntimeMethod* method) ;
// Unity.Mathematics.float4 Unity.Mathematics.math::float4(Unity.Mathematics.float3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E math_float4_mE54104D60E6B9A358C75CB6F378118AB4914BFC4_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_xyz, float ___1_w, const RuntimeMethod* method) ;
// Unity.Mathematics.float4 Unity.Mathematics.float3::get_yxxy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float3_get_yxxy_mF003E86CB17AE3175090DEF37A636AD75087AF81_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, const RuntimeMethod* method) ;
// Unity.Mathematics.float4 Unity.Mathematics.float4::op_Multiply(Unity.Mathematics.float4,Unity.Mathematics.float4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_lhs, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_rhs, const RuntimeMethod* method) ;
// Unity.Mathematics.float4 Unity.Mathematics.float3::get_zzyz()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float3_get_zzyz_m78B967EBE527FA5705C0E7B38563D1E33BB992C1_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, const RuntimeMethod* method) ;
// Unity.Mathematics.float4 Unity.Mathematics.math::float4(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E math_float4_m16697C284FA0C25A84F3DC3E99F3D4C306B6BFBF_inline (float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// Unity.Mathematics.float4 Unity.Mathematics.float4::op_Addition(Unity.Mathematics.float4,Unity.Mathematics.float4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Addition_m2CF2E1B2DAD4996DE3C5B6DFB90185E4CC8F0F44_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_lhs, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_rhs, const RuntimeMethod* method) ;
// Unity.Mathematics.quaternion Unity.Mathematics.math::quaternion(Unity.Mathematics.float4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 math_quaternion_m315B4CA2F8475CC33F3C73187F00AC8B64BBF939_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.math::sin(Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E math_sin_m43618973AB0574A29896B4479E1F72A829644A33_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_x, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.math::cos(Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E math_cos_m42275E85C55A660ABC711D07B4349A82F4BBCBC4_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_x, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float4::.ctor(Unity.Mathematics.float3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_m2A21052EF06884F609D1CDA9A2C2ED84A7584345_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_xyz, float ___1_w, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.quaternion::.ctor(Unity.Mathematics.float4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void quaternion__ctor_m2F6A34CCFD1150A326CB4CE108260A8BD8B1D75F_inline (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* __this, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_value, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::sin(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_sin_m231F847C28B88B17BDAD7F49A7A38E46DF12D3FF_inline (float ___0_x, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::cos(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_cos_m28B6228E047D552B1312CCFADB8AE95DDD94A6AF_inline (float ___0_x, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 EaseTypeDelegate_Invoke_mADAFEB8098102EFC769B4BD508DD216104B1EF93_Multicast(EaseTypeDelegate_t731A985425250B1DB3EC8DD69CA4644BD2DCF7CC* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EaseTypeDelegate_t731A985425250B1DB3EC8DD69CA4644BD2DCF7CC* currentDelegate = reinterpret_cast<EaseTypeDelegate_t731A985425250B1DB3EC8DD69CA4644BD2DCF7CC*>(delegatesToInvoke[i]);
		typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 EaseTypeDelegate_Invoke_mADAFEB8098102EFC769B4BD508DD216104B1EF93_OpenInst(EaseTypeDelegate_t731A985425250B1DB3EC8DD69CA4644BD2DCF7CC* __this, const RuntimeMethod* method)
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 EaseTypeDelegate_Invoke_mADAFEB8098102EFC769B4BD508DD216104B1EF93_OpenStatic(EaseTypeDelegate_t731A985425250B1DB3EC8DD69CA4644BD2DCF7CC* __this, const RuntimeMethod* method)
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 EaseTypeDelegate_Invoke_mADAFEB8098102EFC769B4BD508DD216104B1EF93_OpenStaticInvoker(EaseTypeDelegate_t731A985425250B1DB3EC8DD69CA4644BD2DCF7CC* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 EaseTypeDelegate_Invoke_mADAFEB8098102EFC769B4BD508DD216104B1EF93_ClosedStaticInvoker(EaseTypeDelegate_t731A985425250B1DB3EC8DD69CA4644BD2DCF7CC* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DelegatePInvokeWrapper_EaseTypeDelegate_t731A985425250B1DB3EC8DD69CA4644BD2DCF7CC (EaseTypeDelegate_t731A985425250B1DB3EC8DD69CA4644BD2DCF7CC* __this, const RuntimeMethod* method)
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void LTDescr/EaseTypeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaseTypeDelegate__ctor_mA9210B308AA0816BA20162651D24E2100803A5B8 (EaseTypeDelegate_t731A985425250B1DB3EC8DD69CA4644BD2DCF7CC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EaseTypeDelegate_Invoke_mADAFEB8098102EFC769B4BD508DD216104B1EF93_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EaseTypeDelegate_Invoke_mADAFEB8098102EFC769B4BD508DD216104B1EF93_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EaseTypeDelegate_Invoke_mADAFEB8098102EFC769B4BD508DD216104B1EF93_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&EaseTypeDelegate_Invoke_mADAFEB8098102EFC769B4BD508DD216104B1EF93_Multicast;
}
// UnityEngine.Vector3 LTDescr/EaseTypeDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 EaseTypeDelegate_Invoke_mADAFEB8098102EFC769B4BD508DD216104B1EF93 (EaseTypeDelegate_t731A985425250B1DB3EC8DD69CA4644BD2DCF7CC* __this, const RuntimeMethod* method) 
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult LTDescr/EaseTypeDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EaseTypeDelegate_BeginInvoke_m368A660003C755F899689372ADACF96E2E30E429 (EaseTypeDelegate_t731A985425250B1DB3EC8DD69CA4644BD2DCF7CC* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// UnityEngine.Vector3 LTDescr/EaseTypeDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 EaseTypeDelegate_EndInvoke_m563E12031DBA5E2124237B9C4320C2CACE43407D (EaseTypeDelegate_t731A985425250B1DB3EC8DD69CA4644BD2DCF7CC* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ActionMethodDelegate_Invoke_m14364D9F2C25CDCF27D21755648573D2EAC0057D_Multicast(ActionMethodDelegate_tE88025EB184988CC54961CA0853A56DDA2826048* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ActionMethodDelegate_tE88025EB184988CC54961CA0853A56DDA2826048* currentDelegate = reinterpret_cast<ActionMethodDelegate_tE88025EB184988CC54961CA0853A56DDA2826048*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ActionMethodDelegate_Invoke_m14364D9F2C25CDCF27D21755648573D2EAC0057D_OpenInst(ActionMethodDelegate_tE88025EB184988CC54961CA0853A56DDA2826048* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void ActionMethodDelegate_Invoke_m14364D9F2C25CDCF27D21755648573D2EAC0057D_OpenStatic(ActionMethodDelegate_tE88025EB184988CC54961CA0853A56DDA2826048* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void ActionMethodDelegate_Invoke_m14364D9F2C25CDCF27D21755648573D2EAC0057D_OpenStaticInvoker(ActionMethodDelegate_tE88025EB184988CC54961CA0853A56DDA2826048* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
void ActionMethodDelegate_Invoke_m14364D9F2C25CDCF27D21755648573D2EAC0057D_ClosedStaticInvoker(ActionMethodDelegate_tE88025EB184988CC54961CA0853A56DDA2826048* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ActionMethodDelegate_tE88025EB184988CC54961CA0853A56DDA2826048 (ActionMethodDelegate_tE88025EB184988CC54961CA0853A56DDA2826048* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void LTDescr/ActionMethodDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionMethodDelegate__ctor_m181572F206E8932F1B7E7D351C501061F8BAF966 (ActionMethodDelegate_tE88025EB184988CC54961CA0853A56DDA2826048* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ActionMethodDelegate_Invoke_m14364D9F2C25CDCF27D21755648573D2EAC0057D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ActionMethodDelegate_Invoke_m14364D9F2C25CDCF27D21755648573D2EAC0057D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ActionMethodDelegate_Invoke_m14364D9F2C25CDCF27D21755648573D2EAC0057D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ActionMethodDelegate_Invoke_m14364D9F2C25CDCF27D21755648573D2EAC0057D_Multicast;
}
// System.Void LTDescr/ActionMethodDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionMethodDelegate_Invoke_m14364D9F2C25CDCF27D21755648573D2EAC0057D (ActionMethodDelegate_tE88025EB184988CC54961CA0853A56DDA2826048* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult LTDescr/ActionMethodDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ActionMethodDelegate_BeginInvoke_mCBCD3C8AA9E7F5DDE0CAE1C2BC3BBB321BE2C863 (ActionMethodDelegate_tE88025EB184988CC54961CA0853A56DDA2826048* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void LTDescr/ActionMethodDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionMethodDelegate_EndInvoke_mDA4A3C87572BF0D012B9FFDD3E92CE698D6F9192 (ActionMethodDelegate_tE88025EB184988CC54961CA0853A56DDA2826048* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LTDescr/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m13C12494A70A75105D7B1E8D4A127195270308DF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t573714D0F4A8020AA5706EF5484FD5F787729F5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t573714D0F4A8020AA5706EF5484FD5F787729F5F* L_0 = (U3CU3Ec_t573714D0F4A8020AA5706EF5484FD5F787729F5F*)il2cpp_codegen_object_new(U3CU3Ec_t573714D0F4A8020AA5706EF5484FD5F787729F5F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mDF258EA3C7981050CC81303BFDD2F304E803F728(L_0, NULL);
		((U3CU3Ec_t573714D0F4A8020AA5706EF5484FD5F787729F5F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t573714D0F4A8020AA5706EF5484FD5F787729F5F_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t573714D0F4A8020AA5706EF5484FD5F787729F5F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t573714D0F4A8020AA5706EF5484FD5F787729F5F_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void LTDescr/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDF258EA3C7981050CC81303BFDD2F304E803F728 (U3CU3Ec_t573714D0F4A8020AA5706EF5484FD5F787729F5F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void LTDescr/<>c::<setCallback>b__113_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CsetCallbackU3Eb__113_0_m98CA9F7456B5CA92855949BA2BFEE36581A64282 (U3CU3Ec_t573714D0F4A8020AA5706EF5484FD5F787729F5F* __this, const RuntimeMethod* method) 
{
	{
		// this.initInternal = ()=>{};
		return;
	}
}
// System.Void LTDescr/<>c::<setValue3>b__114_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CsetValue3U3Eb__114_0_mB517CBB88995202947B970DF619E8F0C9EACBD31 (U3CU3Ec_t573714D0F4A8020AA5706EF5484FD5F787729F5F* __this, const RuntimeMethod* method) 
{
	{
		// this.initInternal = ()=>{};
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
// UnityEngine.Transform LTDescrOptional::get_toTrans()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* LTDescrOptional_get_toTrans_m6103EEFDD6884DB5B1E45618E00EE837DD339ECA (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
{
	{
		// public Transform toTrans { get; set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CtoTransU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void LTDescrOptional::set_toTrans(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_toTrans_mA27B49164E6A4A4A5F34CE01A0699F67C66AC85E (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Transform toTrans { get; set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_value;
		__this->___U3CtoTransU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtoTransU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// UnityEngine.Vector3 LTDescrOptional::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LTDescrOptional_get_point_m283E80EC79367991616FB82689D4D3EE79C1D718 (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 point { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CpointU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void LTDescrOptional::set_point(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_point_m8118FB8ACBCDB57858243C919EDF6CADD7B63280 (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 point { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CpointU3Ek__BackingField_1 = L_0;
		return;
	}
}
// UnityEngine.Vector3 LTDescrOptional::get_axis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LTDescrOptional_get_axis_m596B339DE3B1E86022B61BF1A5432EC96C413EB1 (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 axis { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CaxisU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void LTDescrOptional::set_axis(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_axis_m93413DE64D9A4FE44B89C32703794E2E4267BB27 (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 axis { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CaxisU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Single LTDescrOptional::get_lastVal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LTDescrOptional_get_lastVal_mF341992A63BD0C385A4F7DE078F526C1405759FF (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
{
	{
		// public float lastVal{ get; set; }
		float L_0 = __this->___U3ClastValU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void LTDescrOptional::set_lastVal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_lastVal_m1384C195D7DA08486595828AEBA5342C2310A344 (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float lastVal{ get; set; }
		float L_0 = ___0_value;
		__this->___U3ClastValU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Quaternion LTDescrOptional::get_origRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 LTDescrOptional_get_origRotation_mA0AC512191F823AF2CC7D96ADBE3A13258A17134 (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
{
	{
		// public Quaternion origRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CorigRotationU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void LTDescrOptional::set_origRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_origRotation_m657BF14D92B9EA0682F864F162D008E0A271300F (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Quaternion origRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_value;
		__this->___U3CorigRotationU3Ek__BackingField_4 = L_0;
		return;
	}
}
// LTBezierPath LTDescrOptional::get_path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTBezierPath_t14FA55414C70F430785E94A3E3D1CA9046CD3251* LTDescrOptional_get_path_m9464C87336E6296DF1313B747B72A00BF369C2C0 (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
{
	{
		// public LTBezierPath path { get; set; }
		LTBezierPath_t14FA55414C70F430785E94A3E3D1CA9046CD3251* L_0 = __this->___U3CpathU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void LTDescrOptional::set_path(LTBezierPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_path_m1FEA24637EC9F4A38E7FF10B0FC31E9D2F465099 (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, LTBezierPath_t14FA55414C70F430785E94A3E3D1CA9046CD3251* ___0_value, const RuntimeMethod* method) 
{
	{
		// public LTBezierPath path { get; set; }
		LTBezierPath_t14FA55414C70F430785E94A3E3D1CA9046CD3251* L_0 = ___0_value;
		__this->___U3CpathU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpathU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// LTSpline LTDescrOptional::get_spline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSpline_tC934BB65DEF45BC8FBF1F47A99B2D3A7785F3D5D* LTDescrOptional_get_spline_mCF45EB47709C31C7373757AB8ED44D104B3E601E (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
{
	{
		// public LTSpline spline { get; set; }
		LTSpline_tC934BB65DEF45BC8FBF1F47A99B2D3A7785F3D5D* L_0 = __this->___U3CsplineU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void LTDescrOptional::set_spline(LTSpline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_spline_m34CA7578A56BBC1EAA739AE9A24649EDDD7E0EEC (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, LTSpline_tC934BB65DEF45BC8FBF1F47A99B2D3A7785F3D5D* ___0_value, const RuntimeMethod* method) 
{
	{
		// public LTSpline spline { get; set; }
		LTSpline_tC934BB65DEF45BC8FBF1F47A99B2D3A7785F3D5D* L_0 = ___0_value;
		__this->___U3CsplineU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsplineU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// LTRect LTDescrOptional::get_ltRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTRect_tE59D1029540FDC2C553CB986B1E93E4EFF88B58D* LTDescrOptional_get_ltRect_m6CEE0C13D01C3658A6D0ED12270BDF8579304111 (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
{
	{
		// public LTRect ltRect { get; set; } // maybe get rid of this eventually
		LTRect_tE59D1029540FDC2C553CB986B1E93E4EFF88B58D* L_0 = __this->___U3CltRectU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void LTDescrOptional::set_ltRect(LTRect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_ltRect_mC917E741FA97CD02AB14E1B2D08A9D54DFC43105 (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, LTRect_tE59D1029540FDC2C553CB986B1E93E4EFF88B58D* ___0_value, const RuntimeMethod* method) 
{
	{
		// public LTRect ltRect { get; set; } // maybe get rid of this eventually
		LTRect_tE59D1029540FDC2C553CB986B1E93E4EFF88B58D* L_0 = ___0_value;
		__this->___U3CltRectU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CltRectU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// System.Action`1<System.Single> LTDescrOptional::get_onUpdateFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* LTDescrOptional_get_onUpdateFloat_m262BF995B9678367E2D7235324D8B924B802636F (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
{
	{
		// public Action<float> onUpdateFloat { get; set; }
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = __this->___U3ConUpdateFloatU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void LTDescrOptional::set_onUpdateFloat(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateFloat_m60C1527D8CD4CDB790CEEA8A9C4DABA66FCED416 (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<float> onUpdateFloat { get; set; }
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = ___0_value;
		__this->___U3ConUpdateFloatU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateFloatU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
// System.Action`2<System.Single,System.Single> LTDescrOptional::get_onUpdateFloatRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* LTDescrOptional_get_onUpdateFloatRatio_m90F38461C54B50E72F8D082FFBF5A86F92ECBC4C (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
{
	{
		// public Action<float,float> onUpdateFloatRatio { get; set; }
		Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* L_0 = __this->___U3ConUpdateFloatRatioU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void LTDescrOptional::set_onUpdateFloatRatio(System.Action`2<System.Single,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateFloatRatio_m7FDCD87889C4E0CF748252718BD369258C20B7F7 (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<float,float> onUpdateFloatRatio { get; set; }
		Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* L_0 = ___0_value;
		__this->___U3ConUpdateFloatRatioU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateFloatRatioU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
// System.Action`2<System.Single,System.Object> LTDescrOptional::get_onUpdateFloatObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* LTDescrOptional_get_onUpdateFloatObject_m0620EBFB83B5F0177BB73092DF04BA3185BA52D6 (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
{
	{
		// public Action<float,object> onUpdateFloatObject { get; set; }
		Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* L_0 = __this->___U3ConUpdateFloatObjectU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void LTDescrOptional::set_onUpdateFloatObject(System.Action`2<System.Single,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateFloatObject_m822C5CD1005334071D7193BA3A0C5F347618A698 (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<float,object> onUpdateFloatObject { get; set; }
		Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* L_0 = ___0_value;
		__this->___U3ConUpdateFloatObjectU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateFloatObjectU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
// System.Action`1<UnityEngine.Vector2> LTDescrOptional::get_onUpdateVector2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* LTDescrOptional_get_onUpdateVector2_m64A0AFC164DE5C28CA403075CD77D707AEE75ABB (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
{
	{
		// public Action<Vector2> onUpdateVector2 { get; set; }
		Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* L_0 = __this->___U3ConUpdateVector2U3Ek__BackingField_14;
		return L_0;
	}
}
// System.Void LTDescrOptional::set_onUpdateVector2(System.Action`1<UnityEngine.Vector2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateVector2_mE23EA8009F7B359E6E34D97E4E605EDC8614A76D (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<Vector2> onUpdateVector2 { get; set; }
		Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* L_0 = ___0_value;
		__this->___U3ConUpdateVector2U3Ek__BackingField_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateVector2U3Ek__BackingField_14), (void*)L_0);
		return;
	}
}
// System.Action`1<UnityEngine.Vector3> LTDescrOptional::get_onUpdateVector3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* LTDescrOptional_get_onUpdateVector3_mDF6048FB81A1B05487E41E7591B4C8D4058D7492 (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
{
	{
		// public Action<Vector3> onUpdateVector3 { get; set; }
		Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* L_0 = __this->___U3ConUpdateVector3U3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void LTDescrOptional::set_onUpdateVector3(System.Action`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateVector3_m4006C4EB660AF5B6A885813692D9F2BD2A6163A7 (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<Vector3> onUpdateVector3 { get; set; }
		Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* L_0 = ___0_value;
		__this->___U3ConUpdateVector3U3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateVector3U3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
// System.Action`2<UnityEngine.Vector3,System.Object> LTDescrOptional::get_onUpdateVector3Object()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* LTDescrOptional_get_onUpdateVector3Object_m8208D4E77FFAA9929E6C356CD4EF9129DFE9BE1B (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
{
	{
		// public Action<Vector3,object> onUpdateVector3Object { get; set; }
		Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* L_0 = __this->___U3ConUpdateVector3ObjectU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void LTDescrOptional::set_onUpdateVector3Object(System.Action`2<UnityEngine.Vector3,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateVector3Object_m06C50A94386A9BC2E70F8F2C7EC716E38365FD8C (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<Vector3,object> onUpdateVector3Object { get; set; }
		Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* L_0 = ___0_value;
		__this->___U3ConUpdateVector3ObjectU3Ek__BackingField_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateVector3ObjectU3Ek__BackingField_16), (void*)L_0);
		return;
	}
}
// System.Action`1<UnityEngine.Color> LTDescrOptional::get_onUpdateColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22* LTDescrOptional_get_onUpdateColor_m1099C544E8E85CE0F14591FE5E73776E759FBD58 (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
{
	{
		// public Action<Color> onUpdateColor { get; set; }
		Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22* L_0 = __this->___U3ConUpdateColorU3Ek__BackingField_17;
		return L_0;
	}
}
// System.Void LTDescrOptional::set_onUpdateColor(System.Action`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateColor_m66C10CCCC8A25105F394CF69E3642B7E9A743246 (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<Color> onUpdateColor { get; set; }
		Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22* L_0 = ___0_value;
		__this->___U3ConUpdateColorU3Ek__BackingField_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateColorU3Ek__BackingField_17), (void*)L_0);
		return;
	}
}
// System.Action`2<UnityEngine.Color,System.Object> LTDescrOptional::get_onUpdateColorObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_tA6305A40DF06ED5230D130F9BFFB7DFF81760FF3* LTDescrOptional_get_onUpdateColorObject_mD0DF315FA581203090B61EAE94BE20E3B2F83665 (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
{
	{
		// public Action<Color,object> onUpdateColorObject { get; set; }
		Action_2_tA6305A40DF06ED5230D130F9BFFB7DFF81760FF3* L_0 = __this->___U3ConUpdateColorObjectU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void LTDescrOptional::set_onUpdateColorObject(System.Action`2<UnityEngine.Color,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateColorObject_mB3F565063460E5EB929A3FACEB495032E745830F (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_2_tA6305A40DF06ED5230D130F9BFFB7DFF81760FF3* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<Color,object> onUpdateColorObject { get; set; }
		Action_2_tA6305A40DF06ED5230D130F9BFFB7DFF81760FF3* L_0 = ___0_value;
		__this->___U3ConUpdateColorObjectU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateColorObjectU3Ek__BackingField_18), (void*)L_0);
		return;
	}
}
// System.Action LTDescrOptional::get_onComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* LTDescrOptional_get_onComplete_m239D78488F2E2864F5D14262590B6A73E392241D (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
{
	{
		// public Action onComplete { get; set; }
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___U3ConCompleteU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Void LTDescrOptional::set_onComplete(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_onComplete_mFCBAF9050ACCE710820E46B2D8A2464B8D05DF7B (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action onComplete { get; set; }
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_value;
		__this->___U3ConCompleteU3Ek__BackingField_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConCompleteU3Ek__BackingField_19), (void*)L_0);
		return;
	}
}
// System.Action`1<System.Object> LTDescrOptional::get_onCompleteObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* LTDescrOptional_get_onCompleteObject_m26A316DC0CE331F0B9EE35D44B62724D4749A944 (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
{
	{
		// public Action<object> onCompleteObject { get; set; }
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = __this->___U3ConCompleteObjectU3Ek__BackingField_20;
		return L_0;
	}
}
// System.Void LTDescrOptional::set_onCompleteObject(System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_onCompleteObject_m022D536BBC07E52DD29D4F2FDE40833711BAC1A7 (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<object> onCompleteObject { get; set; }
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_value;
		__this->___U3ConCompleteObjectU3Ek__BackingField_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConCompleteObjectU3Ek__BackingField_20), (void*)L_0);
		return;
	}
}
// System.Object LTDescrOptional::get_onCompleteParam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LTDescrOptional_get_onCompleteParam_m15975C17A10A5F16F7031B8C4F50FE46DA45F617 (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
{
	{
		// public object onCompleteParam { get; set; }
		RuntimeObject* L_0 = __this->___U3ConCompleteParamU3Ek__BackingField_21;
		return L_0;
	}
}
// System.Void LTDescrOptional::set_onCompleteParam(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_onCompleteParam_m5320FE5FF67B3356DBFFBAED783C7128C85C6138 (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public object onCompleteParam { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3ConCompleteParamU3Ek__BackingField_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConCompleteParamU3Ek__BackingField_21), (void*)L_0);
		return;
	}
}
// System.Object LTDescrOptional::get_onUpdateParam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LTDescrOptional_get_onUpdateParam_mED66593FCE15D7358FD5AD9EFC9CBE45FED8E29C (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
{
	{
		// public object onUpdateParam { get; set; }
		RuntimeObject* L_0 = __this->___U3ConUpdateParamU3Ek__BackingField_22;
		return L_0;
	}
}
// System.Void LTDescrOptional::set_onUpdateParam(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateParam_m973E6A1D15E934D99C508B9B2E71C3E1168F9C8A (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public object onUpdateParam { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3ConUpdateParamU3Ek__BackingField_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateParamU3Ek__BackingField_22), (void*)L_0);
		return;
	}
}
// System.Action LTDescrOptional::get_onStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* LTDescrOptional_get_onStart_m38BBE9E4BBC2CBF2C98F218FA95EC51E526E9D29 (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
{
	{
		// public Action onStart { get; set; }
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___U3ConStartU3Ek__BackingField_23;
		return L_0;
	}
}
// System.Void LTDescrOptional::set_onStart(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_set_onStart_mC981CE15440DB9DB464ECFF6FCC1D5651C8BB0F7 (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action onStart { get; set; }
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_value;
		__this->___U3ConStartU3Ek__BackingField_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConStartU3Ek__BackingField_23), (void*)L_0);
		return;
	}
}
// System.Void LTDescrOptional::reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_reset_m4F4705B7CB5EA6C1193EABEC4D163C7FA2A57109 (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
{
	{
		// animationCurve = null;
		__this->___animationCurve_7 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animationCurve_7), (void*)(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)NULL);
		// this.onUpdateFloat = null;
		LTDescrOptional_set_onUpdateFloat_m60C1527D8CD4CDB790CEEA8A9C4DABA66FCED416_inline(__this, (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)NULL, NULL);
		// this.onUpdateFloatRatio = null;
		LTDescrOptional_set_onUpdateFloatRatio_m7FDCD87889C4E0CF748252718BD369258C20B7F7_inline(__this, (Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132*)NULL, NULL);
		// this.onUpdateVector2 = null;
		LTDescrOptional_set_onUpdateVector2_mE23EA8009F7B359E6E34D97E4E605EDC8614A76D_inline(__this, (Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81*)NULL, NULL);
		// this.onUpdateVector3 = null;
		LTDescrOptional_set_onUpdateVector3_m4006C4EB660AF5B6A885813692D9F2BD2A6163A7_inline(__this, (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2*)NULL, NULL);
		// this.onUpdateFloatObject = null;
		LTDescrOptional_set_onUpdateFloatObject_m822C5CD1005334071D7193BA3A0C5F347618A698_inline(__this, (Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10*)NULL, NULL);
		// this.onUpdateVector3Object = null;
		LTDescrOptional_set_onUpdateVector3Object_m06C50A94386A9BC2E70F8F2C7EC716E38365FD8C_inline(__this, (Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C*)NULL, NULL);
		// this.onUpdateColor = null;
		LTDescrOptional_set_onUpdateColor_m66C10CCCC8A25105F394CF69E3642B7E9A743246_inline(__this, (Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22*)NULL, NULL);
		// this.onComplete = null;
		LTDescrOptional_set_onComplete_mFCBAF9050ACCE710820E46B2D8A2464B8D05DF7B_inline(__this, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		// this.onCompleteObject = null;
		LTDescrOptional_set_onCompleteObject_m022D536BBC07E52DD29D4F2FDE40833711BAC1A7_inline(__this, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, NULL);
		// this.onCompleteParam = null;
		LTDescrOptional_set_onCompleteParam_m5320FE5FF67B3356DBFFBAED783C7128C85C6138_inline(__this, NULL, NULL);
		// this.onStart = null;
		LTDescrOptional_set_onStart_mC981CE15440DB9DB464ECFF6FCC1D5651C8BB0F7_inline(__this, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		// this.point = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		LTDescrOptional_set_point_m8118FB8ACBCDB57858243C919EDF6CADD7B63280_inline(__this, L_0, NULL);
		// this.initFrameCount = 0;
		__this->___initFrameCount_8 = 0;
		// }
		return;
	}
}
// System.Void LTDescrOptional::callOnUpdate(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional_callOnUpdate_mD7D026D0C5495E54DA6EEEB133F3299457E2DDF0 (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, float ___0_val, float ___1_ratioPassed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(this.onUpdateFloat!=null)
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0;
		L_0 = LTDescrOptional_get_onUpdateFloat_m262BF995B9678367E2D7235324D8B924B802636F_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// this.onUpdateFloat(val);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1;
		L_1 = LTDescrOptional_get_onUpdateFloat_m262BF995B9678367E2D7235324D8B924B802636F_inline(__this, NULL);
		float L_2 = ___0_val;
		NullCheck(L_1);
		Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline(L_1, L_2, NULL);
	}

IL_0014:
	{
		// if (this.onUpdateFloatRatio != null){
		Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* L_3;
		L_3 = LTDescrOptional_get_onUpdateFloatRatio_m90F38461C54B50E72F8D082FFBF5A86F92ECBC4C_inline(__this, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// this.onUpdateFloatRatio(val,ratioPassed);
		Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* L_4;
		L_4 = LTDescrOptional_get_onUpdateFloatRatio_m90F38461C54B50E72F8D082FFBF5A86F92ECBC4C_inline(__this, NULL);
		float L_5 = ___0_val;
		float L_6 = ___1_ratioPassed;
		NullCheck(L_4);
		Action_2_Invoke_m50A62593A87E11ED31B47FE46E633AB3B9A7666C_inline(L_4, L_5, L_6, NULL);
		return;
	}

IL_002a:
	{
		// }else if(this.onUpdateFloatObject!=null){
		Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* L_7;
		L_7 = LTDescrOptional_get_onUpdateFloatObject_m0620EBFB83B5F0177BB73092DF04BA3185BA52D6_inline(__this, NULL);
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		// this.onUpdateFloatObject(val, this.onUpdateParam);
		Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* L_8;
		L_8 = LTDescrOptional_get_onUpdateFloatObject_m0620EBFB83B5F0177BB73092DF04BA3185BA52D6_inline(__this, NULL);
		float L_9 = ___0_val;
		RuntimeObject* L_10;
		L_10 = LTDescrOptional_get_onUpdateParam_mED66593FCE15D7358FD5AD9EFC9CBE45FED8E29C_inline(__this, NULL);
		NullCheck(L_8);
		Action_2_Invoke_m9E7863E85E4D6B6D0C7F731513A8ECC8139FE626_inline(L_8, L_9, L_10, NULL);
		return;
	}

IL_0045:
	{
		// }else if(this.onUpdateVector3Object!=null){
		Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* L_11;
		L_11 = LTDescrOptional_get_onUpdateVector3Object_m8208D4E77FFAA9929E6C356CD4EF9129DFE9BE1B_inline(__this, NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// this.onUpdateVector3Object(LTDescr.newVect, this.onUpdateParam);
		Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* L_12;
		L_12 = LTDescrOptional_get_onUpdateVector3Object_m8208D4E77FFAA9929E6C356CD4EF9129DFE9BE1B_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ((LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696_StaticFields*)il2cpp_codegen_static_fields_for(LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696_il2cpp_TypeInfo_var))->___newVect_47;
		RuntimeObject* L_14;
		L_14 = LTDescrOptional_get_onUpdateParam_mED66593FCE15D7358FD5AD9EFC9CBE45FED8E29C_inline(__this, NULL);
		NullCheck(L_12);
		Action_2_Invoke_m719475FEF89235EA7C17D75BF384DE2B9545839B_inline(L_12, L_13, L_14, NULL);
		return;
	}

IL_0064:
	{
		// }else if(this.onUpdateVector3!=null){
		Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* L_15;
		L_15 = LTDescrOptional_get_onUpdateVector3_mDF6048FB81A1B05487E41E7591B4C8D4058D7492_inline(__this, NULL);
		if (!L_15)
		{
			goto IL_007d;
		}
	}
	{
		// this.onUpdateVector3(LTDescr.newVect);
		Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* L_16;
		L_16 = LTDescrOptional_get_onUpdateVector3_mDF6048FB81A1B05487E41E7591B4C8D4058D7492_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ((LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696_StaticFields*)il2cpp_codegen_static_fields_for(LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696_il2cpp_TypeInfo_var))->___newVect_47;
		NullCheck(L_16);
		Action_1_Invoke_m211AB6C2AA7326F6BFC8338EC888360A219AFF41_inline(L_16, L_17, NULL);
		return;
	}

IL_007d:
	{
		// }else if(this.onUpdateVector2!=null){
		Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* L_18;
		L_18 = LTDescrOptional_get_onUpdateVector2_m64A0AFC164DE5C28CA403075CD77D707AEE75ABB_inline(__this, NULL);
		if (!L_18)
		{
			goto IL_00a9;
		}
	}
	{
		// this.onUpdateVector2(new Vector2(LTDescr.newVect.x,LTDescr.newVect.y));
		Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* L_19;
		L_19 = LTDescrOptional_get_onUpdateVector2_m64A0AFC164DE5C28CA403075CD77D707AEE75ABB_inline(__this, NULL);
		float L_20 = (&((LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696_StaticFields*)il2cpp_codegen_static_fields_for(LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696_il2cpp_TypeInfo_var))->___newVect_47)->___x_2;
		float L_21 = (&((LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696_StaticFields*)il2cpp_codegen_static_fields_for(LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696_il2cpp_TypeInfo_var))->___newVect_47)->___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_22), L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_19);
		Action_1_Invoke_m3C60C84018CAD36C0EC956A14935394A7DD116C6_inline(L_19, L_22, NULL);
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void LTDescrOptional::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTDescrOptional__ctor_mE4F6D09FF0A13244BC3F5AA34B343B959159F77B (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
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
// System.Int32 LTSeq::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LTSeq_get_id_m1158371EAABC8FE1A78A848238540782A97270F3 (LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* __this, const RuntimeMethod* method) 
{
	{
		// uint toId = _id | counter << 16;
		uint32_t L_0 = __this->____id_8;
		uint32_t L_1 = __this->___counter_6;
		// return (int)toId;
		return ((int32_t)((int32_t)L_0|((int32_t)((int32_t)L_1<<((int32_t)16)))));
	}
}
// System.Void LTSeq::reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTSeq_reset_m64DB3F421BCCF6E11A00ED1F289CB13EF565B19C (LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* __this, const RuntimeMethod* method) 
{
	{
		// previous = null;
		__this->___previous_0 = (LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___previous_0), (void*)(LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21*)NULL);
		// tween = null;
		__this->___tween_2 = (LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tween_2), (void*)(LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696*)NULL);
		// totalDelay = 0f;
		__this->___totalDelay_3 = (0.0f);
		// }
		return;
	}
}
// System.Void LTSeq::init(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTSeq_init_m77A95562E184E5FA522680B9CE699C504084D04D (LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* __this, uint32_t ___0_id, uint32_t ___1_global_counter, const RuntimeMethod* method) 
{
	{
		// reset();
		LTSeq_reset_m64DB3F421BCCF6E11A00ED1F289CB13EF565B19C(__this, NULL);
		// _id = id;
		uint32_t L_0 = ___0_id;
		__this->____id_8 = L_0;
		// counter = global_counter;
		uint32_t L_1 = ___1_global_counter;
		__this->___counter_6 = L_1;
		// this.current = this;
		__this->___current_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___current_1), (void*)__this);
		// }
		return;
	}
}
// LTSeq LTSeq::addOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* LTSeq_addOn_m273AAC407884D5AEF02782FC25FED28CFA049A35 (LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* V_0 = NULL;
	{
		// this.current.toggle = true;
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_0 = __this->___current_1;
		NullCheck(L_0);
		L_0->___toggle_7 = (bool)1;
		// LTSeq lastCurrent = this.current;
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_1 = __this->___current_1;
		V_0 = L_1;
		// this.current = LeanTween.sequence(true);
		il2cpp_codegen_runtime_class_init_inline(LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var);
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_2;
		L_2 = LeanTween_sequence_m893486F8A5DA89C467BAF7404814FBED083D6A68((bool)1, NULL);
		__this->___current_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___current_1), (void*)L_2);
		// this.current.previous = lastCurrent;
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_3 = __this->___current_1;
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_4 = V_0;
		NullCheck(L_3);
		L_3->___previous_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___previous_0), (void*)L_4);
		// lastCurrent.toggle = false;
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_5 = V_0;
		NullCheck(L_5);
		L_5->___toggle_7 = (bool)0;
		// this.current.totalDelay = lastCurrent.totalDelay;
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_6 = __this->___current_1;
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_7 = V_0;
		NullCheck(L_7);
		float L_8 = L_7->___totalDelay_3;
		NullCheck(L_6);
		L_6->___totalDelay_3 = L_8;
		// this.current.debugIter = lastCurrent.debugIter + 1;
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_9 = __this->___current_1;
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___debugIter_5;
		NullCheck(L_9);
		L_9->___debugIter_5 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		// return current;
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_12 = __this->___current_1;
		return L_12;
	}
}
// System.Single LTSeq::addPreviousDelays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LTSeq_addPreviousDelays_mE86B727E7613DFAEBA120D42839F9BA322E387C6 (LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* __this, const RuntimeMethod* method) 
{
	LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* V_0 = NULL;
	{
		// LTSeq prev = this.current.previous;
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_0 = __this->___current_1;
		NullCheck(L_0);
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_1 = L_0->___previous_0;
		V_0 = L_1;
		// if (prev != null && prev.tween!=null) {
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_3 = V_0;
		NullCheck(L_3);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_4 = L_3->___tween_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// return this.current.totalDelay + prev.tween.time;
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_5 = __this->___current_1;
		NullCheck(L_5);
		float L_6 = L_5->___totalDelay_3;
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_7 = V_0;
		NullCheck(L_7);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_8 = L_7->___tween_2;
		NullCheck(L_8);
		float L_9 = L_8->___time_14;
		return ((float)il2cpp_codegen_add(L_6, L_9));
	}

IL_002f:
	{
		// return this.current.totalDelay;
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_10 = __this->___current_1;
		NullCheck(L_10);
		float L_11 = L_10->___totalDelay_3;
		return L_11;
	}
}
// LTSeq LTSeq::append(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* LTSeq_append_m7D03F311090A737DB34691A9A19EF4D49B7FB12E (LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* __this, float ___0_delay, const RuntimeMethod* method) 
{
	{
		// this.current.totalDelay += delay;
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_0 = __this->___current_1;
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_1 = L_0;
		NullCheck(L_1);
		float L_2 = L_1->___totalDelay_3;
		float L_3 = ___0_delay;
		NullCheck(L_1);
		L_1->___totalDelay_3 = ((float)il2cpp_codegen_add(L_2, L_3));
		// return this.current;
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_4 = __this->___current_1;
		return L_4;
	}
}
// LTSeq LTSeq::append(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* LTSeq_append_m828C1883E6BC7F2FF620C35ECAC4909A32831ED3 (LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* V_0 = NULL;
	{
		// LTDescr newTween = LeanTween.delayedCall(0f, callback);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_callback;
		il2cpp_codegen_runtime_class_init_inline(LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_1;
		L_1 = LeanTween_delayedCall_m3C250C5B05FCD31473BE22E2A91F8AF157479B5E((0.0f), L_0, NULL);
		V_0 = L_1;
		// return append(newTween);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_2 = V_0;
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_3;
		L_3 = LTSeq_append_m30B44A2CC0056476631A7727FBB708014123D985(__this, L_2, NULL);
		return L_3;
	}
}
// LTSeq LTSeq::append(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* LTSeq_append_m367BA639B32F39720F027B3DA27F822D2CA3278B (LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_callback, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// append(LeanTween.delayedCall(0f, callback).setOnCompleteParam(obj));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_callback;
		il2cpp_codegen_runtime_class_init_inline(LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_1;
		L_1 = LeanTween_delayedCall_mFE5B108186F140D0B0375DE7C44AAECD9AA4B926((0.0f), L_0, NULL);
		RuntimeObject* L_2 = ___1_obj;
		NullCheck(L_1);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_3;
		L_3 = LTDescr_setOnCompleteParam_m95419B3DE63D0B7BAA98DABFAE815A17F693A7AE(L_1, L_2, NULL);
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_4;
		L_4 = LTSeq_append_m30B44A2CC0056476631A7727FBB708014123D985(__this, L_3, NULL);
		// return addOn();
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_5;
		L_5 = LTSeq_addOn_m273AAC407884D5AEF02782FC25FED28CFA049A35(__this, NULL);
		return L_5;
	}
}
// LTSeq LTSeq::append(UnityEngine.GameObject,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* LTSeq_append_mA4CB2E00DA81A049626A692E0DB5F8C90F7F1A84 (LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// append(LeanTween.delayedCall(gameObject, 0f, callback));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_gameObject;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___1_callback;
		il2cpp_codegen_runtime_class_init_inline(LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_2;
		L_2 = LeanTween_delayedCall_mB277AD7C889E2A2C250A3DE182293D1EFCB3EA00(L_0, (0.0f), L_1, NULL);
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_3;
		L_3 = LTSeq_append_m30B44A2CC0056476631A7727FBB708014123D985(__this, L_2, NULL);
		// return addOn();
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_4;
		L_4 = LTSeq_addOn_m273AAC407884D5AEF02782FC25FED28CFA049A35(__this, NULL);
		return L_4;
	}
}
// LTSeq LTSeq::append(UnityEngine.GameObject,System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* LTSeq_append_mC6E470CB6ADF58CDBFF2D72A521E23C7CF61D1C2 (LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_callback, RuntimeObject* ___2_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// append(LeanTween.delayedCall(gameObject, 0f, callback).setOnCompleteParam(obj));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_gameObject;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = ___1_callback;
		il2cpp_codegen_runtime_class_init_inline(LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_2;
		L_2 = LeanTween_delayedCall_m9668A8B0169DF0E0FCCA88C593B94D9F301C39A1(L_0, (0.0f), L_1, NULL);
		RuntimeObject* L_3 = ___2_obj;
		NullCheck(L_2);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_4;
		L_4 = LTDescr_setOnCompleteParam_m95419B3DE63D0B7BAA98DABFAE815A17F693A7AE(L_2, L_3, NULL);
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_5;
		L_5 = LTSeq_append_m30B44A2CC0056476631A7727FBB708014123D985(__this, L_4, NULL);
		// return addOn();
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_6;
		L_6 = LTSeq_addOn_m273AAC407884D5AEF02782FC25FED28CFA049A35(__this, NULL);
		return L_6;
	}
}
// LTSeq LTSeq::append(LTDescr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* LTSeq_append_m30B44A2CC0056476631A7727FBB708014123D985 (LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* __this, LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* ___0_tween, const RuntimeMethod* method) 
{
	{
		// this.current.tween = tween;
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_0 = __this->___current_1;
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_1 = ___0_tween;
		NullCheck(L_0);
		L_0->___tween_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___tween_2), (void*)L_1);
		// this.current.totalDelay = addPreviousDelays();
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_2 = __this->___current_1;
		float L_3;
		L_3 = LTSeq_addPreviousDelays_mE86B727E7613DFAEBA120D42839F9BA322E387C6(__this, NULL);
		NullCheck(L_2);
		L_2->___totalDelay_3 = L_3;
		// tween.setDelay( this.current.totalDelay );
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_4 = ___0_tween;
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_5 = __this->___current_1;
		NullCheck(L_5);
		float L_6 = L_5->___totalDelay_3;
		NullCheck(L_4);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_7;
		L_7 = LTDescr_setDelay_mC124A2BE2B598FA4EB8E7801E796C4B600EE5459(L_4, L_6, NULL);
		// return addOn();
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_8;
		L_8 = LTSeq_addOn_m273AAC407884D5AEF02782FC25FED28CFA049A35(__this, NULL);
		return L_8;
	}
}
// LTSeq LTSeq::insert(LTDescr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* LTSeq_insert_mB2B8B68E2F1C1A2D7249727E04B18AE9498CF8C3 (LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* __this, LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* ___0_tween, const RuntimeMethod* method) 
{
	{
		// this.current.tween = tween;
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_0 = __this->___current_1;
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_1 = ___0_tween;
		NullCheck(L_0);
		L_0->___tween_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___tween_2), (void*)L_1);
		// tween.setDelay( addPreviousDelays() );
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_2 = ___0_tween;
		float L_3;
		L_3 = LTSeq_addPreviousDelays_mE86B727E7613DFAEBA120D42839F9BA322E387C6(__this, NULL);
		NullCheck(L_2);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_4;
		L_4 = LTDescr_setDelay_mC124A2BE2B598FA4EB8E7801E796C4B600EE5459(L_2, L_3, NULL);
		// return addOn();
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_5;
		L_5 = LTSeq_addOn_m273AAC407884D5AEF02782FC25FED28CFA049A35(__this, NULL);
		return L_5;
	}
}
// LTSeq LTSeq::setScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* LTSeq_setScale_m23F24EECF12B946B3E1A29BDCC4AF116F3826CB7 (LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* __this, float ___0_timeScale, const RuntimeMethod* method) 
{
	{
		// setScaleRecursive(this.current, timeScale, 500);
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_0 = __this->___current_1;
		float L_1 = ___0_timeScale;
		LTSeq_setScaleRecursive_mE3612D8EA414AAE553E97A18A197DE9B409B24A6(__this, L_0, L_1, ((int32_t)500), NULL);
		// return addOn();
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_2;
		L_2 = LTSeq_addOn_m273AAC407884D5AEF02782FC25FED28CFA049A35(__this, NULL);
		return L_2;
	}
}
// System.Void LTSeq::setScaleRecursive(LTSeq,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTSeq_setScaleRecursive_mE3612D8EA414AAE553E97A18A197DE9B409B24A6 (LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* __this, LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* ___0_seq, float ___1_timeScale, int32_t ___2_count, const RuntimeMethod* method) 
{
	{
		// if (count > 0) {
		int32_t L_0 = ___2_count;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		// this.timeScale = timeScale;
		float L_1 = ___1_timeScale;
		__this->___timeScale_4 = L_1;
		// seq.totalDelay *= timeScale;
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_2 = ___0_seq;
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_3 = L_2;
		NullCheck(L_3);
		float L_4 = L_3->___totalDelay_3;
		float L_5 = ___1_timeScale;
		NullCheck(L_3);
		L_3->___totalDelay_3 = ((float)il2cpp_codegen_multiply(L_4, L_5));
		// if (seq.tween != null) {
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_6 = ___0_seq;
		NullCheck(L_6);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_7 = L_6->___tween_2;
		if (!L_7)
		{
			goto IL_0065;
		}
	}
	{
		// if (seq.tween.time != 0f)
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_8 = ___0_seq;
		NullCheck(L_8);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_9 = L_8->___tween_2;
		NullCheck(L_9);
		float L_10 = L_9->___time_14;
		if ((((float)L_10) == ((float)(0.0f))))
		{
			goto IL_004c;
		}
	}
	{
		// seq.tween.setTime(seq.tween.time * timeScale);
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_11 = ___0_seq;
		NullCheck(L_11);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_12 = L_11->___tween_2;
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_13 = ___0_seq;
		NullCheck(L_13);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_14 = L_13->___tween_2;
		NullCheck(L_14);
		float L_15 = L_14->___time_14;
		float L_16 = ___1_timeScale;
		NullCheck(L_12);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_17;
		L_17 = LTDescr_setTime_m74D5ED525D99F4418E0BC4DC1EAFF417DE9735A2(L_12, ((float)il2cpp_codegen_multiply(L_15, L_16)), NULL);
	}

IL_004c:
	{
		// seq.tween.setDelay(seq.tween.delay * timeScale);
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_18 = ___0_seq;
		NullCheck(L_18);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_19 = L_18->___tween_2;
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_20 = ___0_seq;
		NullCheck(L_20);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_21 = L_20->___tween_2;
		NullCheck(L_21);
		float L_22 = L_21->___delay_13;
		float L_23 = ___1_timeScale;
		NullCheck(L_19);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_24;
		L_24 = LTDescr_setDelay_mC124A2BE2B598FA4EB8E7801E796C4B600EE5459(L_19, ((float)il2cpp_codegen_multiply(L_22, L_23)), NULL);
	}

IL_0065:
	{
		// if (seq.previous != null)
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_25 = ___0_seq;
		NullCheck(L_25);
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_26 = L_25->___previous_0;
		if (!L_26)
		{
			goto IL_007d;
		}
	}
	{
		// setScaleRecursive(seq.previous, timeScale, count - 1);
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_27 = ___0_seq;
		NullCheck(L_27);
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_28 = L_27->___previous_0;
		float L_29 = ___1_timeScale;
		int32_t L_30 = ___2_count;
		LTSeq_setScaleRecursive_mE3612D8EA414AAE553E97A18A197DE9B409B24A6(__this, L_28, L_29, ((int32_t)il2cpp_codegen_subtract(L_30, 1)), NULL);
	}

IL_007d:
	{
		// }
		return;
	}
}
// LTSeq LTSeq::reverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* LTSeq_reverse_m2552A8EED4373662E88665C1E9F94635DA32D4D9 (LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* __this, const RuntimeMethod* method) 
{
	{
		// return addOn();
		LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* L_0;
		L_0 = LTSeq_addOn_m273AAC407884D5AEF02782FC25FED28CFA049A35(__this, NULL);
		return L_0;
	}
}
// System.Void LTSeq::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTSeq__ctor_m5A0AF9F9E7DEE8E3BEC50A815AEA70ABBF7C6F35 (LTSeq_tB1D12581B22BF7D92E91EFF65EE485DE8C8C6F21* __this, const RuntimeMethod* method) 
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
// System.Int32 Quester::get_score()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Quester_get_score_m1AC0974107BBC66B5ECAEB48D1539222D5041658 (Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* __this, const RuntimeMethod* method) 
{
	{
		// get => _score;
		int32_t L_0 = __this->____score_16;
		return L_0;
	}
}
// System.Void Quester::set_score(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quester_set_score_mAA95F1C83BD06FE11AF7C551699F764FE54ADBE4 (Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA33A162928EC5E0A13A9E319200B92BB73A5C838);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _score = value;
		int32_t L_0 = ___0_value;
		__this->____score_16 = L_0;
		// ScoreBox.text = "Score:\n" + _score;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___ScoreBox_13;
		int32_t* L_2 = (int32_t*)(&__this->____score_16);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA33A162928EC5E0A13A9E319200B92BB73A5C838, L_3, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void Quester::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quester_Start_m1A85B61E132DFE3F07C8B900F4CA2DC951C0985E (Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* __this, const RuntimeMethod* method) 
{
	{
		// BackGroundOriginalPosition = background.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___background_9;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		__this->___BackGroundOriginalPosition_10 = L_2;
		// QuestOriginalPosition = quest.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___quest_5;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		__this->___QuestOriginalPosition_11 = L_5;
		// }
		return;
	}
}
// System.Void Quester::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quester_OnEnable_mF407C2D341DDB4F0E123F7181892218A1C15C189 (Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* __this, const RuntimeMethod* method) 
{
	{
		// ToggleGame.action.Enable();
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___ToggleGame_6;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_0, NULL);
		NullCheck(L_1);
		InputAction_Enable_mB3897C0741409C033656E4566EC49135C3C8BC68(L_1, NULL);
		// Act.action.Enable();
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2 = __this->___Act_7;
		NullCheck(L_2);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_2, NULL);
		NullCheck(L_3);
		InputAction_Enable_mB3897C0741409C033656E4566EC49135C3C8BC68(L_3, NULL);
		// }
		return;
	}
}
// System.Void Quester::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quester_OnDisable_mB3E1716092172521DACD4008EEC09217E89D9F67 (Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* __this, const RuntimeMethod* method) 
{
	{
		// ToggleGame.action.Disable();
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___ToggleGame_6;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_0, NULL);
		NullCheck(L_1);
		InputAction_Disable_m72D1982F82457C6E003440BADD06989D399BDE50(L_1, NULL);
		// Act.action.Disable();
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2 = __this->___Act_7;
		NullCheck(L_2);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_2, NULL);
		NullCheck(L_3);
		InputAction_Disable_m72D1982F82457C6E003440BADD06989D399BDE50(L_3, NULL);
		// }
		return;
	}
}
// System.Void Quester::Gameover()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quester_Gameover_m34AF24A274F5BC780DDFE829E7C7713198AD22B1 (Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quester_U3CGameoverU3Eb__19_0_m4B9434A8D73329D29901DD862F23801A16A667F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C89C7E575A511555596297CE0CBB44752563AE5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// Title.text = "Game Over!\nScore: " + score;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___Title_12;
		int32_t L_1;
		L_1 = Quester_get_score_m1AC0974107BBC66B5ECAEB48D1539222D5041658_inline(__this, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9C89C7E575A511555596297CE0CBB44752563AE5, L_2, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_3);
		// ScoreBox.gameObject.SetActive(false);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = __this->___ScoreBox_13;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// Title.gameObject.SetActive(true);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = __this->___Title_12;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// LeanTween.cancel(background);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___background_9;
		il2cpp_codegen_runtime_class_init_inline(LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var);
		LeanTween_cancel_mD16E6D2B29E547FEF03D37E4289F29605AB377A8(L_8, NULL);
		// quest.GetComponent<Rigidbody2D>().angularVelocity = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___quest_5;
		NullCheck(L_9);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_10;
		L_10 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_9, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		NullCheck(L_10);
		Rigidbody2D_set_angularVelocity_mFC06FB14E69DD4847F27E614900D22317AA5A390(L_10, (0.0f), NULL);
		// quest.GetComponent<Rigidbody2D>().velocity = Vector2.zero;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___quest_5;
		NullCheck(L_11);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_12;
		L_12 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_11, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_12);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_12, L_13, NULL);
		// quest.GetComponent<Rigidbody2D>().isKinematic = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___quest_5;
		NullCheck(L_14);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_15;
		L_15 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_14, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		NullCheck(L_15);
		Rigidbody2D_set_isKinematic_m7C68AB4CFB6D301F0EDF0BFF66FB121ED3CC7853(L_15, (bool)1, NULL);
		// background.transform.position = BackGroundOriginalPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___background_9;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___BackGroundOriginalPosition_10;
		NullCheck(L_17);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_17, L_18, NULL);
		// LeanTween.value(1, 1, 2).setOnComplete(() => gameon = false);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_19;
		L_19 = LeanTween_value_m58B70EAEC22B8B27CFD01000A56285D3464E47B2((1.0f), (1.0f), (2.0f), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_20 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_20, __this, (intptr_t)((void*)Quester_U3CGameoverU3Eb__19_0_m4B9434A8D73329D29901DD862F23801A16A667F4_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_21;
		L_21 = LTDescr_setOnComplete_m71532B82E69D79F08953DFCECE0E2F024F4A06E4(L_19, L_20, NULL);
		// foreach (GameObject obstacle in Obstacles)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_22 = __this->___Obstacles_15;
		NullCheck(L_22);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_23;
		L_23 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_22, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_1 = L_23;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f7:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_1), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ec_1;
			}

IL_00d5_1:
			{
				// foreach (GameObject obstacle in Obstacles)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
				L_24 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_1), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_2 = L_24;
				// if (obstacle != null)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_26;
				L_26 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_25, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_26)
				{
					goto IL_00ec_1;
				}
			}
			{
				// LeanTween.cancel(obstacle);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_2;
				il2cpp_codegen_runtime_class_init_inline(LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var);
				LeanTween_cancel_mD16E6D2B29E547FEF03D37E4289F29605AB377A8(L_27, NULL);
			}

IL_00ec_1:
			{
				// foreach (GameObject obstacle in Obstacles)
				bool L_28;
				L_28 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_1), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_28)
				{
					goto IL_00d5_1;
				}
			}
			{
				goto IL_0105;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0105:
	{
		// }
		return;
	}
}
// System.Void Quester::GenerateObstacles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quester_GenerateObstacles_mD8FBDEA29C7EF91E374E072AC2A07852CB98BD3E (Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_U3CGenerateObstaclesU3Eb__0_mF8675CBCE3A6DDFCBB8FBA58DFACE63BE79242AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_U3CGenerateObstaclesU3Eb__1_m46D09D08B5EEE082ACDBF9C4083FB64A6484671F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_t861E900D6FF2354B4096105C4D34E500F2EC8D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass20_0_t861E900D6FF2354B4096105C4D34E500F2EC8D0F* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass20_0_t861E900D6FF2354B4096105C4D34E500F2EC8D0F* L_0 = (U3CU3Ec__DisplayClass20_0_t861E900D6FF2354B4096105C4D34E500F2EC8D0F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass20_0_t861E900D6FF2354B4096105C4D34E500F2EC8D0F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass20_0__ctor_mA7336F98048B064E439B6DA56E9E4465F2DB1973(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass20_0_t861E900D6FF2354B4096105C4D34E500F2EC8D0F* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_1), (void*)__this);
		// GameObject newObstacle = Instantiate(Obsticle);
		U3CU3Ec__DisplayClass20_0_t861E900D6FF2354B4096105C4D34E500F2EC8D0F* L_2 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___Obsticle_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->___newObstacle_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___newObstacle_0), (void*)L_4);
		// Obstacles.Add(newObstacle);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->___Obstacles_15;
		U3CU3Ec__DisplayClass20_0_t861E900D6FF2354B4096105C4D34E500F2EC8D0F* L_6 = V_0;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___newObstacle_0;
		NullCheck(L_5);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_5, L_7, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// newObstacle.transform.position = Obsticle.transform.position;
		U3CU3Ec__DisplayClass20_0_t861E900D6FF2354B4096105C4D34E500F2EC8D0F* L_8 = V_0;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___newObstacle_0;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___Obsticle_14;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		NullCheck(L_10);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_13, NULL);
		// newObstacle.transform.position += Vector3.up * UnityEngine.Random.Range(-1.64f, 1.43f);
		U3CU3Ec__DisplayClass20_0_t861E900D6FF2354B4096105C4D34E500F2EC8D0F* L_14 = V_0;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = L_14->___newObstacle_0;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = L_16;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_20;
		L_20 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-1.63999999f), (1.42999995f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_18, L_21, NULL);
		NullCheck(L_17);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_17, L_22, NULL);
		// LeanTween.value(newObstacle, newObstacle.transform.position, newObstacle.transform.position - (Vector3.right * 5f), 5)
		//     .setOnUpdate((Vector3 value) => newObstacle.transform.position = value)
		//     .setOnComplete(() =>
		//     {
		//         //delete it and generate a new one
		//         Destroy(newObstacle);
		//         GenerateObstacles();
		//     });
		U3CU3Ec__DisplayClass20_0_t861E900D6FF2354B4096105C4D34E500F2EC8D0F* L_23 = V_0;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = L_23->___newObstacle_0;
		U3CU3Ec__DisplayClass20_0_t861E900D6FF2354B4096105C4D34E500F2EC8D0F* L_25 = V_0;
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = L_25->___newObstacle_0;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		U3CU3Ec__DisplayClass20_0_t861E900D6FF2354B4096105C4D34E500F2EC8D0F* L_29 = V_0;
		NullCheck(L_29);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = L_29->___newObstacle_0;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_33, (5.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_32, L_34, NULL);
		il2cpp_codegen_runtime_class_init_inline(LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_36;
		L_36 = LeanTween_value_m51BDE5739C61EA00CDF63A6F207299EEA41BAB42(L_24, L_28, L_35, (5.0f), NULL);
		U3CU3Ec__DisplayClass20_0_t861E900D6FF2354B4096105C4D34E500F2EC8D0F* L_37 = V_0;
		Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* L_38 = (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2*)il2cpp_codegen_object_new(Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		Action_1__ctor_mE9E1859293BB35881CCC94B4A6E0A0E9997E046C(L_38, L_37, (intptr_t)((void*)U3CU3Ec__DisplayClass20_0_U3CGenerateObstaclesU3Eb__0_mF8675CBCE3A6DDFCBB8FBA58DFACE63BE79242AB_RuntimeMethod_var), NULL);
		NullCheck(L_36);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_39;
		L_39 = LTDescr_setOnUpdate_m885E4DD3596845E89C5004C3C3786B09330576C7(L_36, L_38, NULL, NULL);
		U3CU3Ec__DisplayClass20_0_t861E900D6FF2354B4096105C4D34E500F2EC8D0F* L_40 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_41 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_41, L_40, (intptr_t)((void*)U3CU3Ec__DisplayClass20_0_U3CGenerateObstaclesU3Eb__1_m46D09D08B5EEE082ACDBF9C4083FB64A6484671F_RuntimeMethod_var), NULL);
		NullCheck(L_39);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_42;
		L_42 = LTDescr_setOnComplete_m71532B82E69D79F08953DFCECE0E2F024F4A06E4(L_39, L_41, NULL);
		// }
		return;
	}
}
// System.Void Quester::Startgame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quester_Startgame_m1161B0B1A24DEEAB7FBF626F6498F7C2B6855DE9 (Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// foreach (GameObject obstacle in Obstacles)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___Obstacles_15;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0025_1;
			}

IL_000e_1:
			{
				// foreach (GameObject obstacle in Obstacles)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_1 = L_2;
				// if (obstacle != null)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_4;
				L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_4)
				{
					goto IL_0025_1;
				}
			}
			{
				// Destroy(obstacle);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
			}

IL_0025_1:
			{
				// foreach (GameObject obstacle in Obstacles)
				bool L_6;
				L_6 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// Obstacles.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = __this->___Obstacles_15;
		NullCheck(L_7);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_7, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// Title.gameObject.SetActive(false);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = __this->___Title_12;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// gameon = true;
		__this->___gameon_8 = (bool)1;
		// quest.GetComponent<Rigidbody2D>().isKinematic = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___quest_5;
		NullCheck(L_10);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_11;
		L_11 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_10, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		NullCheck(L_11);
		Rigidbody2D_set_isKinematic_m7C68AB4CFB6D301F0EDF0BFF66FB121ED3CC7853(L_11, (bool)0, NULL);
		// quest.transform.position = QuestOriginalPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___quest_5;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___QuestOriginalPosition_11;
		NullCheck(L_13);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_13, L_14, NULL);
		// score = 0;
		Quester_set_score_mAA95F1C83BD06FE11AF7C551699F764FE54ADBE4(__this, 0, NULL);
		// ScoreBox.gameObject.SetActive(true);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_15 = __this->___ScoreBox_13;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)1, NULL);
		// loopbg();
		Quester_loopbg_mD8B8AFC7124FA4FC0B5D5E471C6E4140E55CB4A2(__this, NULL);
		// GenerateObstacles();
		Quester_GenerateObstacles_mD8FBDEA29C7EF91E374E072AC2A07852CB98BD3E(__this, NULL);
		// }
		return;
	}
}
// System.Void Quester::loopbg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quester_loopbg_mD8B8AFC7124FA4FC0B5D5E471C6E4140E55CB4A2 (Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quester_U3CloopbgU3Eb__22_0_m4B69B0302642D32BDA29BBC6A50973CAC8876502_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quester_U3CloopbgU3Eb__22_1_m029E1A222DA31D5919C17C23C58DE5256B95E822_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LeanTween.value(background, BackGroundOriginalPosition, BackGroundOriginalPosition - (Vector3.right * 0.576f), 1)
		//     .setOnUpdate((Vector3 value) => background.transform.position = value)
		//     .setOnComplete(() => loopbg());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___background_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___BackGroundOriginalPosition_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___BackGroundOriginalPosition_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.575999975f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_6;
		L_6 = LeanTween_value_m51BDE5739C61EA00CDF63A6F207299EEA41BAB42(L_0, L_1, L_5, (1.0f), NULL);
		Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* L_7 = (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2*)il2cpp_codegen_object_new(Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_mE9E1859293BB35881CCC94B4A6E0A0E9997E046C(L_7, __this, (intptr_t)((void*)Quester_U3CloopbgU3Eb__22_0_m4B69B0302642D32BDA29BBC6A50973CAC8876502_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_8;
		L_8 = LTDescr_setOnUpdate_m885E4DD3596845E89C5004C3C3786B09330576C7(L_6, L_7, NULL, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_9, __this, (intptr_t)((void*)Quester_U3CloopbgU3Eb__22_1_m029E1A222DA31D5919C17C23C58DE5256B95E822_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_10;
		L_10 = LTDescr_setOnComplete_m71532B82E69D79F08953DFCECE0E2F024F4A06E4(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void Quester::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quester_Update_m7450CA10CDDFD1C07DE668C0DF082C50B5BD6FDB (Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// questerBox.SetActive(ToggleGame.action.IsPressed());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___questerBox_4;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_1 = __this->___ToggleGame_6;
		NullCheck(L_1);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_1, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301(L_2, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_3, NULL);
		// if (!gameon)
		bool L_4 = __this->___gameon_8;
		if (L_4)
		{
			goto IL_004e;
		}
	}
	{
		// if (ToggleGame.action.IsPressed() && Act.action.IsPressed())
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_5 = __this->___ToggleGame_6;
		NullCheck(L_5);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6;
		L_6 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_5, NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301(L_6, NULL);
		if (!L_7)
		{
			goto IL_008b;
		}
	}
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_8 = __this->___Act_7;
		NullCheck(L_8);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_9;
		L_9 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_8, NULL);
		NullCheck(L_9);
		bool L_10;
		L_10 = InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301(L_9, NULL);
		if (!L_10)
		{
			goto IL_008b;
		}
	}
	{
		// Startgame();
		Quester_Startgame_m1161B0B1A24DEEAB7FBF626F6498F7C2B6855DE9(__this, NULL);
		return;
	}

IL_004e:
	{
		// if (Act.action.IsPressed())
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_11 = __this->___Act_7;
		NullCheck(L_11);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_12;
		L_12 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_11, NULL);
		NullCheck(L_12);
		bool L_13;
		L_13 = InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301(L_12, NULL);
		if (!L_13)
		{
			goto IL_008b;
		}
	}
	{
		// quest.GetComponent<Rigidbody2D>().AddForce(32 * Time.deltaTime * Vector3.up, ForceMode2D.Impulse);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___quest_5;
		NullCheck(L_14);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_15;
		L_15 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_14, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		float L_16;
		L_16 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply((32.0f), L_16)), L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_18, NULL);
		NullCheck(L_15);
		Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B(L_15, L_19, 1, NULL);
	}

IL_008b:
	{
		// }
		return;
	}
}
// System.Void Quester::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quester__ctor_mF266999D51434E743DECE7B400C9EDA773CA25D2 (Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Quester::<Gameover>b__19_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quester_U3CGameoverU3Eb__19_0_m4B9434A8D73329D29901DD862F23801A16A667F4 (Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* __this, const RuntimeMethod* method) 
{
	{
		// LeanTween.value(1, 1, 2).setOnComplete(() => gameon = false);
		__this->___gameon_8 = (bool)0;
		return;
	}
}
// System.Void Quester::<loopbg>b__22_0(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quester_U3CloopbgU3Eb__22_0_m4B69B0302642D32BDA29BBC6A50973CAC8876502 (Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// .setOnUpdate((Vector3 value) => background.transform.position = value)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___background_9;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_value;
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_2, NULL);
		return;
	}
}
// System.Void Quester::<loopbg>b__22_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quester_U3CloopbgU3Eb__22_1_m029E1A222DA31D5919C17C23C58DE5256B95E822 (Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* __this, const RuntimeMethod* method) 
{
	{
		// .setOnComplete(() => loopbg());
		Quester_loopbg_mD8B8AFC7124FA4FC0B5D5E471C6E4140E55CB4A2(__this, NULL);
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
// System.Void Quester/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_mA7336F98048B064E439B6DA56E9E4465F2DB1973 (U3CU3Ec__DisplayClass20_0_t861E900D6FF2354B4096105C4D34E500F2EC8D0F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Quester/<>c__DisplayClass20_0::<GenerateObstacles>b__0(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0_U3CGenerateObstaclesU3Eb__0_mF8675CBCE3A6DDFCBB8FBA58DFACE63BE79242AB (U3CU3Ec__DisplayClass20_0_t861E900D6FF2354B4096105C4D34E500F2EC8D0F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// .setOnUpdate((Vector3 value) => newObstacle.transform.position = value)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___newObstacle_0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_value;
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_2, NULL);
		return;
	}
}
// System.Void Quester/<>c__DisplayClass20_0::<GenerateObstacles>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0_U3CGenerateObstaclesU3Eb__1_m46D09D08B5EEE082ACDBF9C4083FB64A6484671F (U3CU3Ec__DisplayClass20_0_t861E900D6FF2354B4096105C4D34E500F2EC8D0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(newObstacle);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___newObstacle_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// GenerateObstacles();
		Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* L_1 = __this->___U3CU3E4__this_1;
		NullCheck(L_1);
		Quester_GenerateObstacles_mD8FBDEA29C7EF91E374E072AC2A07852CB98BD3E(L_1, NULL);
		// });
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
// System.Void QuesterGameEnder::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuesterGameEnder_OnCollisionEnter2D_m4911C5DB6583BFC1F46DF5BAEA8E9B86397CFB03 (QuesterGameEnder_t24D8E5F96401555996F4D08FCDB2145ADCC0D4AD* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject == GameManager.quest)
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* L_2 = __this->___GameManager_4;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2->___quest_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// GameManager.Gameover();
		Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* L_5 = __this->___GameManager_4;
		NullCheck(L_5);
		Quester_Gameover_m34AF24A274F5BC780DDFE829E7C7713198AD22B1(L_5, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void QuesterGameEnder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuesterGameEnder__ctor_m0A9BB65C3D97156947091BAB18A206F42743E845 (QuesterGameEnder_t24D8E5F96401555996F4D08FCDB2145ADCC0D4AD* __this, const RuntimeMethod* method) 
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
// System.Void ScoreAdder::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreAdder_OnTriggerExit2D_mAB54BB68110D98857CC02072582B46C5E47BD8E4 (ScoreAdder_tFB64CF27DECC982630854B5EF4B2997164B7BB1E* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (other.gameObject == GameManager.quest)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_other;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* L_2 = __this->___GameManager_4;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2->___quest_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// GameManager.score++;
		Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* L_5 = __this->___GameManager_4;
		Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* L_6 = L_5;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Quester_get_score_m1AC0974107BBC66B5ECAEB48D1539222D5041658_inline(L_6, NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		NullCheck(L_6);
		Quester_set_score_mAA95F1C83BD06FE11AF7C551699F764FE54ADBE4(L_6, ((int32_t)il2cpp_codegen_add(L_8, 1)), NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void ScoreAdder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreAdder__ctor_mA3C768114E9E1EFA90D62DFA99758F377BE45824 (ScoreAdder_tFB64CF27DECC982630854B5EF4B2997164B7BB1E* __this, const RuntimeMethod* method) 
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
// System.Void SkinHandler::DEBUGFETCH()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinHandler_DEBUGFETCH_mBFADBECBC9D04C664EF43E0E98BB313793843CAF (SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* __this, const RuntimeMethod* method) 
{
	{
		// LoadSkin(FETCHINGUSERNAME);
		String_t* L_0 = __this->___FETCHINGUSERNAME_13;
		SkinHandler_LoadSkin_m1702A8F5967C169CE129F06A7B61B4A0D2CD78CD(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void SkinHandler::LoadSkin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinHandler_LoadSkin_m1702A8F5967C169CE129F06A7B61B4A0D2CD78CD (SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* __this, String_t* ___0_username, const RuntimeMethod* method) 
{
	{
		// LoadImage(username);
		String_t* L_0 = ___0_username;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = SkinHandler_U3CLoadSkinU3Eg__LoadImageU7C11_0_m94F41761F4A610A526B9E8A2E509073FD37D597B(__this, L_0, NULL);
		// SetSkinType(username);
		String_t* L_2 = ___0_username;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = SkinHandler_U3CLoadSkinU3Eg__SetSkinTypeU7C11_1_m7E90E2F3919C2D5765FEB2EF886DEBA5F587E2BB(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void SkinHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinHandler__ctor_m76B70CC24F6A450AB807E1B5E9C5B4290C485278 (SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Threading.Tasks.Task SkinHandler::<LoadSkin>g__LoadImage|11_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* SkinHandler_U3CLoadSkinU3Eg__LoadImageU7C11_0_m94F41761F4A610A526B9E8A2E509073FD37D597B (SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* __this, String_t* ___0_username, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8_mBF21D74187524A3ECD455BD0AB4E864C027F0521_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		String_t* L_1 = ___0_username;
		(&V_0)->___username_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___username_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8_mBF21D74187524A3ECD455BD0AB4E864C027F0521(L_2, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8_mBF21D74187524A3ECD455BD0AB4E864C027F0521_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_3, NULL);
		return L_4;
	}
}
// System.Threading.Tasks.Task SkinHandler::<LoadSkin>g__SetSkinType|11_1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* SkinHandler_U3CLoadSkinU3Eg__SetSkinTypeU7C11_1_m7E90E2F3919C2D5765FEB2EF886DEBA5F587E2BB (SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* __this, String_t* ___0_username, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45_m6D99AAA288CE89C97C004F600ABCAE36A1EB5898_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		String_t* L_1 = ___0_username;
		(&V_0)->___username_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___username_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45_m6D99AAA288CE89C97C004F600ABCAE36A1EB5898(L_2, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45_m6D99AAA288CE89C97C004F600ABCAE36A1EB5898_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_3, NULL);
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
// System.Void SkinHandler/<<LoadSkin>g__LoadImage|11_0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_MoveNext_m9157138EAEA6CE102D7860F58045C855C3D57899 (U3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8_m7B848906E9892F16BB907E5F7BD0A2189060A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral365AE998E5D9C5133ADDC184FF9BC53499F0A7D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D22D0B0296DBC3D55BC016EA2FB23A731ABB73E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9603EBC95E85A2172EEF77747F2D4A88853CAFC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4D936E3CEDD1EFB5DD76C014BB756DB2FF8510A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_009a_1;
			}
		}
		{
			// UnityWebRequest request = UnityWebRequestTexture.GetTexture("https://minotar.net/skin/" + username);
			String_t* L_3 = __this->___username_2;
			String_t* L_4;
			L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral365AE998E5D9C5133ADDC184FF9BC53499F0A7D1, L_3, NULL);
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5;
			L_5 = UnityWebRequestTexture_GetTexture_mEEC74BBC5190D4012A0B87C5D439AF59E22EF2EF(L_4, NULL);
			__this->___U3CrequestU3E5__2_4 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__2_4), (void*)L_5);
			// request.SetRequestHeader("User-Agent", "QuestCraftPlusPlus/QuestCraft/" + Application.version + " (discord.gg/questcraft)");
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = __this->___U3CrequestU3E5__2_4;
			String_t* L_7;
			L_7 = Application_get_version_m9CC0E94F12493682C1A2CA803083F6F01BA43124(NULL);
			String_t* L_8;
			L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral9603EBC95E85A2172EEF77747F2D4A88853CAFC7, L_7, _stringLiteral6D22D0B0296DBC3D55BC016EA2FB23A731ABB73E, NULL);
			NullCheck(L_6);
			UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_6, _stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF, L_8, NULL);
			// request.SendWebRequest();
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_9 = __this->___U3CrequestU3E5__2_4;
			NullCheck(L_9);
			UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_10;
			L_10 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_9, NULL);
			goto IL_00bd_1;
		}

IL_0061_1:
		{
			// await Task.Delay(16);
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_11;
			L_11 = Task_Delay_m4B84654B4DAADEC41096D9F01C099CCEA9927A48(((int32_t)16), NULL);
			NullCheck(L_11);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_12;
			L_12 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_11, NULL);
			V_2 = L_12;
			bool L_13;
			L_13 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_13)
			{
				goto IL_00b6_1;
			}
		}
		{
			int32_t L_14 = 0;
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_15 = V_2;
			__this->___U3CU3Eu__1_5 = L_15;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_16 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8_m7B848906E9892F16BB907E5F7BD0A2189060A9C4(L_16, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8_m7B848906E9892F16BB907E5F7BD0A2189060A9C4_RuntimeMethod_var);
			goto IL_0190;
		}

IL_009a_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_17 = __this->___U3CU3Eu__1_5;
			V_2 = L_17;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_18 = (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*)(&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_18, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_19 = (-1);
			V_0 = L_19;
			__this->___U3CU3E1__state_0 = L_19;
		}

IL_00b6_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
		}

IL_00bd_1:
		{
			// while (!request.isDone)
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_20 = __this->___U3CrequestU3E5__2_4;
			NullCheck(L_20);
			bool L_21;
			L_21 = UnityWebRequest_get_isDone_m3079B53A1CAFD8D5B334C635761E7B7E10B14123(L_20, NULL);
			if (!L_21)
			{
				goto IL_0061_1;
			}
		}
		{
			// if (request.result != UnityWebRequest.Result.Success)
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_22 = __this->___U3CrequestU3E5__2_4;
			NullCheck(L_22);
			int32_t L_23;
			L_23 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_22, NULL);
			if ((((int32_t)L_23) == ((int32_t)1)))
			{
				goto IL_00ea_1;
			}
		}
		{
			// Debug.Log(request.error);
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_24 = __this->___U3CrequestU3E5__2_4;
			NullCheck(L_24);
			String_t* L_25;
			L_25 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_24, NULL);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_25, NULL);
			goto IL_0156_1;
		}

IL_00ea_1:
		{
			// Debug.Log("Loading skin");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralB4D936E3CEDD1EFB5DD76C014BB756DB2FF8510A, NULL);
			// skin.mainTexture = ((DownloadHandlerTexture)request.downloadHandler).texture;
			SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* L_26 = V_1;
			NullCheck(L_26);
			Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = L_26->___skin_4;
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_28 = __this->___U3CrequestU3E5__2_4;
			NullCheck(L_28);
			DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_29;
			L_29 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_28, NULL);
			NullCheck(((DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C*)CastclassSealed((RuntimeObject*)L_29, DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_il2cpp_TypeInfo_var)));
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_30;
			L_30 = DownloadHandlerTexture_get_texture_m170B5539995EB5984E98E426F52983589F7BEB7C(((DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C*)CastclassSealed((RuntimeObject*)L_29, DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_il2cpp_TypeInfo_var)), NULL);
			NullCheck(L_27);
			Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_27, L_30, NULL);
			// skin.mainTexture.filterMode = FilterMode.Point;
			SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* L_31 = V_1;
			NullCheck(L_31);
			Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = L_31->___skin_4;
			NullCheck(L_32);
			Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_33;
			L_33 = Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D(L_32, NULL);
			NullCheck(L_33);
			Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_33, 0, NULL);
			// profilePicture.mainTexture = ((DownloadHandlerTexture)request.downloadHandler).texture;
			SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* L_34 = V_1;
			NullCheck(L_34);
			Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = L_34->___profilePicture_5;
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_36 = __this->___U3CrequestU3E5__2_4;
			NullCheck(L_36);
			DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_37;
			L_37 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_36, NULL);
			NullCheck(((DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C*)CastclassSealed((RuntimeObject*)L_37, DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_il2cpp_TypeInfo_var)));
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_38;
			L_38 = DownloadHandlerTexture_get_texture_m170B5539995EB5984E98E426F52983589F7BEB7C(((DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C*)CastclassSealed((RuntimeObject*)L_37, DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_il2cpp_TypeInfo_var)), NULL);
			NullCheck(L_35);
			Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_35, L_38, NULL);
			// profilePicture.mainTexture.filterMode = FilterMode.Point;
			SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* L_39 = V_1;
			NullCheck(L_39);
			Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = L_39->___profilePicture_5;
			NullCheck(L_40);
			Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_41;
			L_41 = Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D(L_40, NULL);
			NullCheck(L_41);
			Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_41, 0, NULL);
		}

IL_0156_1:
		{
			goto IL_0176;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0158;
		}
		throw e;
	}

CATCH_0158:
	{// begin catch(System.Exception)
		Exception_t* L_42 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_3 = L_42;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CrequestU3E5__2_4 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__2_4), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_43 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_44 = V_3;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var)));
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_43, L_44, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0190;
	}// end catch (depth: 1)

IL_0176:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CrequestU3E5__2_4 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__2_4), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_45 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_45, NULL);
	}

IL_0190:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_MoveNext_m9157138EAEA6CE102D7860F58045C855C3D57899_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8*>(__this + _offset);
	U3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_MoveNext_m9157138EAEA6CE102D7860F58045C855C3D57899(_thisAdjusted, method);
}
// System.Void SkinHandler/<<LoadSkin>g__LoadImage|11_0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_SetStateMachine_mEBED7B8E1BBF1CC71B8B3427A83F67E3C61A3510 (U3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_SetStateMachine_mEBED7B8E1BBF1CC71B8B3427A83F67E3C61A3510_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_tAD0E60C478D7DAB6B7DBBAA0BC5FC6EC4FD2AAC8*>(__this + _offset);
	U3CU3CLoadSkinU3Eg__LoadImageU7C11_0U3Ed_SetStateMachine_mEBED7B8E1BBF1CC71B8B3427A83F67E3C61A3510(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SkinHandler/<<LoadSkin>g__SetSkinType|11_1>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_MoveNext_mEC7811AFF6C4BFFCDA515A09D4CCFD63CC73D967 (U3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45_m503E617FC27E5B5E700185DF654EC4C05B3BD57A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19AB9E6C5E0A67C98B6590610E27E5BD8B979978);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29234851D18F1D30FBFCF592D0C23BCB54FEE683);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D22D0B0296DBC3D55BC016EA2FB23A731ABB73E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C7AC9D789A4D59768B2EDE94AF1A1E1D3430374);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9603EBC95E85A2172EEF77747F2D4A88853CAFC7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_009a_1;
			}
		}
		{
			// UnityWebRequest www = UnityWebRequest.Get("https://starlightskins.lunareclipse.studio/info/user/" + username);
			String_t* L_3 = __this->___username_2;
			String_t* L_4;
			L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral29234851D18F1D30FBFCF592D0C23BCB54FEE683, L_3, NULL);
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5;
			L_5 = UnityWebRequest_Get_m1A332EE069BB5052368307F254A5A7627BB5FD86(L_4, NULL);
			__this->___U3CwwwU3E5__2_4 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwwwU3E5__2_4), (void*)L_5);
			// www.SetRequestHeader("User-Agent", "QuestCraftPlusPlus/QuestCraft/" + Application.version + " (discord.gg/questcraft)");
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = __this->___U3CwwwU3E5__2_4;
			String_t* L_7;
			L_7 = Application_get_version_m9CC0E94F12493682C1A2CA803083F6F01BA43124(NULL);
			String_t* L_8;
			L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral9603EBC95E85A2172EEF77747F2D4A88853CAFC7, L_7, _stringLiteral6D22D0B0296DBC3D55BC016EA2FB23A731ABB73E, NULL);
			NullCheck(L_6);
			UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_6, _stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF, L_8, NULL);
			// www.SendWebRequest();
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_9 = __this->___U3CwwwU3E5__2_4;
			NullCheck(L_9);
			UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_10;
			L_10 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_9, NULL);
			goto IL_00bd_1;
		}

IL_0061_1:
		{
			// await Task.Delay(16);
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_11;
			L_11 = Task_Delay_m4B84654B4DAADEC41096D9F01C099CCEA9927A48(((int32_t)16), NULL);
			NullCheck(L_11);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_12;
			L_12 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_11, NULL);
			V_2 = L_12;
			bool L_13;
			L_13 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_13)
			{
				goto IL_00b6_1;
			}
		}
		{
			int32_t L_14 = 0;
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_15 = V_2;
			__this->___U3CU3Eu__1_5 = L_15;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_16 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45_m503E617FC27E5B5E700185DF654EC4C05B3BD57A(L_16, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45_m503E617FC27E5B5E700185DF654EC4C05B3BD57A_RuntimeMethod_var);
			goto IL_0201;
		}

IL_009a_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_17 = __this->___U3CU3Eu__1_5;
			V_2 = L_17;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_18 = (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*)(&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_18, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_19 = (-1);
			V_0 = L_19;
			__this->___U3CU3E1__state_0 = L_19;
		}

IL_00b6_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
		}

IL_00bd_1:
		{
			// while (!www.isDone)
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_20 = __this->___U3CwwwU3E5__2_4;
			NullCheck(L_20);
			bool L_21;
			L_21 = UnityWebRequest_get_isDone_m3079B53A1CAFD8D5B334C635761E7B7E10B14123(L_20, NULL);
			if (!L_21)
			{
				goto IL_0061_1;
			}
		}
		{
			// if (www.result != UnityWebRequest.Result.Success)
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_22 = __this->___U3CwwwU3E5__2_4;
			NullCheck(L_22);
			int32_t L_23;
			L_23 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_22, NULL);
			if ((((int32_t)L_23) == ((int32_t)1)))
			{
				goto IL_00ea_1;
			}
		}
		{
			// Debug.Log(www.error);
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_24 = __this->___U3CwwwU3E5__2_4;
			NullCheck(L_24);
			String_t* L_25;
			L_25 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_24, NULL);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_25, NULL);
			goto IL_0121_1;
		}

IL_00ea_1:
		{
			// JObject SkinType = JObject.Parse(www.downloadHandler.text);
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_26 = __this->___U3CwwwU3E5__2_4;
			NullCheck(L_26);
			DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_27;
			L_27 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_26, NULL);
			NullCheck(L_27);
			String_t* L_28;
			L_28 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_27, NULL);
			JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_29;
			L_29 = JObject_Parse_mBC884661DD2708BA92BCE45E8C104924542A2D43(L_28, NULL);
			V_3 = L_29;
			// skinType = (string)SkinType["skinType"];
			SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* L_30 = V_1;
			JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_31 = V_3;
			NullCheck(L_31);
			JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_32;
			L_32 = JObject_get_Item_m889A29E8FCEA531AF829407F208DD05F0108C50B(L_31, _stringLiteral19AB9E6C5E0A67C98B6590610E27E5BD8B979978, NULL);
			il2cpp_codegen_runtime_class_init_inline(JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_il2cpp_TypeInfo_var);
			String_t* L_33;
			L_33 = JToken_op_Explicit_mA435B5A6C389220DF41F02E1CAE6AEA4EEFBCFF3(L_32, NULL);
			NullCheck(L_30);
			L_30->___skinType_6 = L_33;
			Il2CppCodeGenWriteBarrier((void**)(&L_30->___skinType_6), (void*)L_33);
			// Debug.Log(skinType);
			SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* L_34 = V_1;
			NullCheck(L_34);
			String_t* L_35 = L_34->___skinType_6;
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_35, NULL);
		}

IL_0121_1:
		{
			// if (skinType != "wide")
			SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* L_36 = V_1;
			NullCheck(L_36);
			String_t* L_37 = L_36->___skinType_6;
			bool L_38;
			L_38 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_37, _stringLiteral7C7AC9D789A4D59768B2EDE94AF1A1E1D3430374, NULL);
			if (!L_38)
			{
				goto IL_017d_1;
			}
		}
		{
			// rSlim.SetActive(true);
			SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* L_39 = V_1;
			NullCheck(L_39);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = L_39->___rSlim_7;
			NullCheck(L_40);
			GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_40, (bool)1, NULL);
			// lSlim.SetActive(true);
			SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* L_41 = V_1;
			NullCheck(L_41);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = L_41->___lSlim_9;
			NullCheck(L_42);
			GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_42, (bool)1, NULL);
			// figurineSlim.SetActive(true);
			SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* L_43 = V_1;
			NullCheck(L_43);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = L_43->___figurineSlim_11;
			NullCheck(L_44);
			GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_44, (bool)1, NULL);
			// rClassic.SetActive(false);
			SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* L_45 = V_1;
			NullCheck(L_45);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = L_45->___rClassic_8;
			NullCheck(L_46);
			GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_46, (bool)0, NULL);
			// lClassic.SetActive(false);
			SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* L_47 = V_1;
			NullCheck(L_47);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = L_47->___lClassic_10;
			NullCheck(L_48);
			GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_48, (bool)0, NULL);
			// figurineClassic.SetActive(false);
			SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* L_49 = V_1;
			NullCheck(L_49);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = L_49->___figurineClassic_12;
			NullCheck(L_50);
			GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_50, (bool)0, NULL);
			goto IL_01c5_1;
		}

IL_017d_1:
		{
			// rSlim.SetActive(false);
			SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* L_51 = V_1;
			NullCheck(L_51);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = L_51->___rSlim_7;
			NullCheck(L_52);
			GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_52, (bool)0, NULL);
			// lSlim.SetActive(false);
			SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* L_53 = V_1;
			NullCheck(L_53);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = L_53->___lSlim_9;
			NullCheck(L_54);
			GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_54, (bool)0, NULL);
			// figurineSlim.SetActive(false);
			SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* L_55 = V_1;
			NullCheck(L_55);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = L_55->___figurineSlim_11;
			NullCheck(L_56);
			GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_56, (bool)0, NULL);
			// rClassic.SetActive(true);
			SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* L_57 = V_1;
			NullCheck(L_57);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = L_57->___rClassic_8;
			NullCheck(L_58);
			GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_58, (bool)1, NULL);
			// lClassic.SetActive(true);
			SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* L_59 = V_1;
			NullCheck(L_59);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60 = L_59->___lClassic_10;
			NullCheck(L_60);
			GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_60, (bool)1, NULL);
			// figurineClassic.SetActive(true);
			SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* L_61 = V_1;
			NullCheck(L_61);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = L_61->___figurineClassic_12;
			NullCheck(L_62);
			GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_62, (bool)1, NULL);
		}

IL_01c5_1:
		{
			goto IL_01e7;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01c7;
		}
		throw e;
	}

CATCH_01c7:
	{// begin catch(System.Exception)
		Exception_t* L_63 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_4 = L_63;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CwwwU3E5__2_4 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwwwU3E5__2_4), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_64 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_65 = V_4;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var)));
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_64, L_65, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0201;
	}// end catch (depth: 1)

IL_01e7:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CwwwU3E5__2_4 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwwwU3E5__2_4), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_66 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_66, NULL);
	}

IL_0201:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_MoveNext_mEC7811AFF6C4BFFCDA515A09D4CCFD63CC73D967_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45*>(__this + _offset);
	U3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_MoveNext_mEC7811AFF6C4BFFCDA515A09D4CCFD63CC73D967(_thisAdjusted, method);
}
// System.Void SkinHandler/<<LoadSkin>g__SetSkinType|11_1>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_SetStateMachine_mA8C1883E158AB871E39D986B9F75D19E1D7A00BF (U3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_SetStateMachine_mA8C1883E158AB871E39D986B9F75D19E1D7A00BF_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_tDB839557E29CA41371E298836FC4D4E73DDD1A45*>(__this + _offset);
	U3CU3CLoadSkinU3Eg__SetSkinTypeU7C11_1U3Ed_SetStateMachine_mA8C1883E158AB871E39D986B9F75D19E1D7A00BF(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHandler_Start_mE8CBF6D736A0AE23F76A555AD6EA940D3A46C7F2 (UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIHandler_U3CStartU3Eb__13_0_m0F2FC96D643A192ED83B80445A067C08176CCE33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIHandler_U3CStartU3Eb__13_1_m5D47FFA0B81EB594EC4769CB2FC5C7F3DD181F62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIHandler_U3CStartU3Eb__13_2_m8112435F3E660E7813195BABF0C5A6D0B168E7E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIHandler_U3CStartU3Eb__13_3_mE2FA2B5D34A5653D5C035881F9A0471409969BCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIHandler_U3CStartU3Eb__13_4_mDCE7E1C65296504AF0D56E74520D9998FE5DD54C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIHandler_U3CStartU3Eb__13_5_m8A6460A227D6AB7C47A01B3E92C31BDA23334695_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIHandler_U3CStartU3Eb__13_6_m248601F3CFCD21971CDD44779162B796F6CF1556_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// modToggle.onValueChanged.AddListener((value) => OnToggleClicked(value, modToggle));
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___modToggle_10;
		NullCheck(L_0);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_1 = L_0->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_2 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_2, __this, (intptr_t)((void*)UIHandler_U3CStartU3Eb__13_0_m0F2FC96D643A192ED83B80445A067C08176CCE33_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_1, L_2, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// modpacksToggle.onValueChanged.AddListener((value) => OnToggleClicked(value, modpacksToggle));
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_3 = __this->___modpacksToggle_11;
		NullCheck(L_3);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_4 = L_3->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_5 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_5, __this, (intptr_t)((void*)UIHandler_U3CStartU3Eb__13_1_m5D47FFA0B81EB594EC4769CB2FC5C7F3DD181F62_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_4, L_5, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// resourcePacksToggle.onValueChanged.AddListener((value) => OnToggleClicked(value, resourcePacksToggle));
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_6 = __this->___resourcePacksToggle_12;
		NullCheck(L_6);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_7 = L_6->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_8 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_8, __this, (intptr_t)((void*)UIHandler_U3CStartU3Eb__13_2_m8112435F3E660E7813195BABF0C5A6D0B168E7E3_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_7, L_8, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// dropdownMain.onValueChanged.AddListener(delegate
		// {
		//     selectedInstance = dropdownMain.value;
		//     UpdateDropdowns(false, null);
		// });
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_9 = __this->___dropdownMain_5;
		NullCheck(L_9);
		DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91* L_10;
		L_10 = TMP_Dropdown_get_onValueChanged_mC5A65068BFDC48C26FAC4B6FB2C0983633168BFF_inline(L_9, NULL);
		UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* L_11 = (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*)il2cpp_codegen_object_new(UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B(L_11, __this, (intptr_t)((void*)UIHandler_U3CStartU3Eb__13_3_mE2FA2B5D34A5653D5C035881F9A0471409969BCA_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE(L_10, L_11, UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		// dropdownInstanceCreator.onValueChanged.AddListener(delegate
		// {
		//     selectedInstance = dropdownInstanceCreator.value;
		//     UpdateDropdowns(false, null);
		// });
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_12 = __this->___dropdownInstanceCreator_8;
		NullCheck(L_12);
		DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91* L_13;
		L_13 = TMP_Dropdown_get_onValueChanged_mC5A65068BFDC48C26FAC4B6FB2C0983633168BFF_inline(L_12, NULL);
		UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* L_14 = (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*)il2cpp_codegen_object_new(UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B(L_14, __this, (intptr_t)((void*)UIHandler_U3CStartU3Eb__13_4_mDCE7E1C65296504AF0D56E74520D9998FE5DD54C_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE(L_13, L_14, UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		// dropdownModInfo.onValueChanged.AddListener(delegate
		// {
		//     selectedInstance = dropdownModInfo.value;
		//     UpdateDropdowns(false, null);
		// });
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_15 = __this->___dropdownModInfo_7;
		NullCheck(L_15);
		DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91* L_16;
		L_16 = TMP_Dropdown_get_onValueChanged_mC5A65068BFDC48C26FAC4B6FB2C0983633168BFF_inline(L_15, NULL);
		UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* L_17 = (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*)il2cpp_codegen_object_new(UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B(L_17, __this, (intptr_t)((void*)UIHandler_U3CStartU3Eb__13_5_m8A6460A227D6AB7C47A01B3E92C31BDA23334695_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE(L_16, L_17, UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		// dropdownModSearch.onValueChanged.AddListener(delegate
		// {
		//     selectedInstance = dropdownModSearch.value;
		//     UpdateDropdowns(false, null);
		// });
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_18 = __this->___dropdownModSearch_6;
		NullCheck(L_18);
		DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91* L_19;
		L_19 = TMP_Dropdown_get_onValueChanged_mC5A65068BFDC48C26FAC4B6FB2C0983633168BFF_inline(L_18, NULL);
		UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* L_20 = (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*)il2cpp_codegen_object_new(UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B(L_20, __this, (intptr_t)((void*)UIHandler_U3CStartU3Eb__13_6_m248601F3CFCD21971CDD44779162B796F6CF1556_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE(L_19, L_20, UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UIHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHandler_Update_mD4C7A2CA207E1276A54D5E56554804654A9D2A87 (UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D624BE517893410AA118931741AD1D74FB8703B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// string time = DateTime.Now.ToString("hh:mm tt");
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_1), _stringLiteral0D624BE517893410AA118931741AD1D74FB8703B, NULL);
		V_0 = L_1;
		// minuteHourText.text = time;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___minuteHourText_4;
		String_t* L_3 = V_0;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_3);
		// }
		return;
	}
}
// System.Threading.Tasks.Task UIHandler::GetName(TMPro.TextMeshProUGUI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* UIHandler_GetName_m5931410BCB87EFCFEC92C31E2FA9B0D2DE6054AD (TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___0_profileNameHolder, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CGetNameU3Ed__15_t8DED562071A15F853BEC4FF4B6C13B63DFC33E33_m9E5AC078FF66579C1B9DA64C4E996F0BDA848255_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetNameU3Ed__15_t8DED562071A15F853BEC4FF4B6C13B63DFC33E33 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = ___0_profileNameHolder;
		(&V_0)->___profileNameHolder_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___profileNameHolder_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CGetNameU3Ed__15_t8DED562071A15F853BEC4FF4B6C13B63DFC33E33_m9E5AC078FF66579C1B9DA64C4E996F0BDA848255(L_2, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CGetNameU3Ed__15_t8DED562071A15F853BEC4FF4B6C13B63DFC33E33_m9E5AC078FF66579C1B9DA64C4E996F0BDA848255_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_3, NULL);
		return L_4;
	}
}
// System.Void UIHandler::OnToggleClicked(System.Boolean,UnityEngine.UI.Toggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHandler_OnToggleClicked_mE6FA448788F4E922D4617E10309B0DF2D812A091 (UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016* __this, bool ___0_value, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___1_clickedToggle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (modManager.isSearching)
		ModManager_tB0092BDBA384CFCF9A3294DA37FD13BFA499D27C* L_0 = __this->___modManager_16;
		NullCheck(L_0);
		bool L_1 = L_0->___isSearching_31;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// clickedToggle.isOn = false;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_2 = ___1_clickedToggle;
		NullCheck(L_2);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_2, (bool)0, NULL);
		// return;
		return;
	}

IL_0015:
	{
		// if (value)
		bool L_3 = ___0_value;
		if (!L_3)
		{
			goto IL_006a;
		}
	}
	{
		// Toggle[] allToggles = { modToggle, modpacksToggle, resourcePacksToggle };
		ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* L_4 = (ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098*)(ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098*)SZArrayNew(ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098_il2cpp_TypeInfo_var, (uint32_t)3);
		ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* L_5 = L_4;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_6 = __this->___modToggle_10;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)L_6);
		ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* L_7 = L_5;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_8 = __this->___modpacksToggle_11;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)L_8);
		ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* L_9 = L_7;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_10 = __this->___resourcePacksToggle_12;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)L_10);
		// foreach (Toggle toggle in allToggles)
		V_0 = L_9;
		V_1 = 0;
		goto IL_004b;
	}

IL_003e:
	{
		// foreach (Toggle toggle in allToggles)
		ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		// toggle.interactable = true;
		NullCheck(L_14);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_14, (bool)1, NULL);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_004b:
	{
		// foreach (Toggle toggle in allToggles)
		int32_t L_16 = V_1;
		ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_003e;
		}
	}
	{
		// clickedToggle.isOn = false;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_18 = ___1_clickedToggle;
		NullCheck(L_18);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_18, (bool)0, NULL);
		// clickedToggle.interactable = false;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_19 = ___1_clickedToggle;
		NullCheck(L_19);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_19, (bool)0, NULL);
		// modManager.SearchMods();
		ModManager_tB0092BDBA384CFCF9A3294DA37FD13BFA499D27C* L_20 = __this->___modManager_16;
		NullCheck(L_20);
		ModManager_SearchMods_m4024319194739757C7BDDA0D6905CE9AA0F23166(L_20, NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void UIHandler::UpdateDropdowns(System.Boolean,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHandler_UpdateDropdowns_m5A572FF88B2C023B07959735A6092B1F4D7CB502 (UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016* __this, bool ___0_init, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___1_list, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (init)
		bool L_0 = ___0_init;
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		// dropdownMain.AddOptions(list);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_1 = __this->___dropdownMain_5;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = ___1_list;
		NullCheck(L_1);
		TMP_Dropdown_AddOptions_m6EB4E175FE6B5555BDC2C31EFBCC3B115DE85FF5(L_1, L_2, NULL);
		// dropdownInstanceCreator.AddOptions(list);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_3 = __this->___dropdownInstanceCreator_8;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = ___1_list;
		NullCheck(L_3);
		TMP_Dropdown_AddOptions_m6EB4E175FE6B5555BDC2C31EFBCC3B115DE85FF5(L_3, L_4, NULL);
		// dropdownModInfo.AddOptions(list);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_5 = __this->___dropdownModInfo_7;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = ___1_list;
		NullCheck(L_5);
		TMP_Dropdown_AddOptions_m6EB4E175FE6B5555BDC2C31EFBCC3B115DE85FF5(L_5, L_6, NULL);
		// dropdownModSearch.AddOptions(list);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_7 = __this->___dropdownModSearch_6;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = ___1_list;
		NullCheck(L_7);
		TMP_Dropdown_AddOptions_m6EB4E175FE6B5555BDC2C31EFBCC3B115DE85FF5(L_7, L_8, NULL);
		return;
	}

IL_0034:
	{
		// dropdownMain.SetValueWithoutNotify(selectedInstance);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_9 = __this->___dropdownMain_5;
		int32_t L_10 = ((UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_StaticFields*)il2cpp_codegen_static_fields_for(UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_il2cpp_TypeInfo_var))->___selectedInstance_13;
		NullCheck(L_9);
		TMP_Dropdown_SetValueWithoutNotify_m619A7D38D1EBCCA60EB1F5891FAD9FD0FB4839FD(L_9, L_10, NULL);
		// dropdownInstanceCreator.SetValueWithoutNotify(selectedInstance);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_11 = __this->___dropdownInstanceCreator_8;
		int32_t L_12 = ((UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_StaticFields*)il2cpp_codegen_static_fields_for(UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_il2cpp_TypeInfo_var))->___selectedInstance_13;
		NullCheck(L_11);
		TMP_Dropdown_SetValueWithoutNotify_m619A7D38D1EBCCA60EB1F5891FAD9FD0FB4839FD(L_11, L_12, NULL);
		// dropdownModInfo.SetValueWithoutNotify(selectedInstance);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_13 = __this->___dropdownModInfo_7;
		int32_t L_14 = ((UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_StaticFields*)il2cpp_codegen_static_fields_for(UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_il2cpp_TypeInfo_var))->___selectedInstance_13;
		NullCheck(L_13);
		TMP_Dropdown_SetValueWithoutNotify_m619A7D38D1EBCCA60EB1F5891FAD9FD0FB4839FD(L_13, L_14, NULL);
		// dropdownModSearch.SetValueWithoutNotify(selectedInstance);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_15 = __this->___dropdownModSearch_6;
		int32_t L_16 = ((UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_StaticFields*)il2cpp_codegen_static_fields_for(UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_il2cpp_TypeInfo_var))->___selectedInstance_13;
		NullCheck(L_15);
		TMP_Dropdown_SetValueWithoutNotify_m619A7D38D1EBCCA60EB1F5891FAD9FD0FB4839FD(L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void UIHandler::ClearDropdowns()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHandler_ClearDropdowns_m219B25A79001FBBF543936B600264DDE58BBE400 (UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016* __this, const RuntimeMethod* method) 
{
	{
		// dropdownMain.ClearOptions();
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_0 = __this->___dropdownMain_5;
		NullCheck(L_0);
		TMP_Dropdown_ClearOptions_m9888C23BC3033268E5C2D8613C0854661E7BDEB5(L_0, NULL);
		// dropdownInstanceCreator.ClearOptions();
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_1 = __this->___dropdownInstanceCreator_8;
		NullCheck(L_1);
		TMP_Dropdown_ClearOptions_m9888C23BC3033268E5C2D8613C0854661E7BDEB5(L_1, NULL);
		// dropdownModInfo.ClearOptions();
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_2 = __this->___dropdownModInfo_7;
		NullCheck(L_2);
		TMP_Dropdown_ClearOptions_m9888C23BC3033268E5C2D8613C0854661E7BDEB5(L_2, NULL);
		// dropdownModSearch.ClearOptions();
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_3 = __this->___dropdownModSearch_6;
		NullCheck(L_3);
		TMP_Dropdown_ClearOptions_m9888C23BC3033268E5C2D8613C0854661E7BDEB5(L_3, NULL);
		// }
		return;
	}
}
// System.Void UIHandler::SetAndShowError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHandler_SetAndShowError_mA40391F85D06E653168CC79C1B0FA21C9F35A7DB (UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016* __this, String_t* ___0_errorMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// errorMenu.GetComponentInChildren<TextMeshProUGUI>().text = errorMessage;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___errorMenu_9;
		NullCheck(L_0);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1;
		L_1 = GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB(L_0, GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB_RuntimeMethod_var);
		String_t* L_2 = ___0_errorMessage;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_2);
		// errorMenu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___errorMenu_9;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UIHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHandler__ctor_m546C9899F081C7913F3360DA872417C6B96CF1EE (UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void UIHandler::<Start>b__13_0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHandler_U3CStartU3Eb__13_0_m0F2FC96D643A192ED83B80445A067C08176CCE33 (UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// modToggle.onValueChanged.AddListener((value) => OnToggleClicked(value, modToggle));
		bool L_0 = ___0_value;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1 = __this->___modToggle_10;
		UIHandler_OnToggleClicked_mE6FA448788F4E922D4617E10309B0DF2D812A091(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UIHandler::<Start>b__13_1(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHandler_U3CStartU3Eb__13_1_m5D47FFA0B81EB594EC4769CB2FC5C7F3DD181F62 (UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// modpacksToggle.onValueChanged.AddListener((value) => OnToggleClicked(value, modpacksToggle));
		bool L_0 = ___0_value;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1 = __this->___modpacksToggle_11;
		UIHandler_OnToggleClicked_mE6FA448788F4E922D4617E10309B0DF2D812A091(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UIHandler::<Start>b__13_2(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHandler_U3CStartU3Eb__13_2_m8112435F3E660E7813195BABF0C5A6D0B168E7E3 (UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// resourcePacksToggle.onValueChanged.AddListener((value) => OnToggleClicked(value, resourcePacksToggle));
		bool L_0 = ___0_value;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1 = __this->___resourcePacksToggle_12;
		UIHandler_OnToggleClicked_mE6FA448788F4E922D4617E10309B0DF2D812A091(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UIHandler::<Start>b__13_3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHandler_U3CStartU3Eb__13_3_mE2FA2B5D34A5653D5C035881F9A0471409969BCA (UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016* __this, int32_t ___0_U3Cp0U3E, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectedInstance = dropdownMain.value;
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_0 = __this->___dropdownMain_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TMP_Dropdown_get_value_m5916A6D1897431E8ED789FEC24551A311D1B5C70_inline(L_0, NULL);
		((UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_StaticFields*)il2cpp_codegen_static_fields_for(UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_il2cpp_TypeInfo_var))->___selectedInstance_13 = L_1;
		// UpdateDropdowns(false, null);
		UIHandler_UpdateDropdowns_m5A572FF88B2C023B07959735A6092B1F4D7CB502(__this, (bool)0, (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL, NULL);
		// });
		return;
	}
}
// System.Void UIHandler::<Start>b__13_4(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHandler_U3CStartU3Eb__13_4_mDCE7E1C65296504AF0D56E74520D9998FE5DD54C (UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016* __this, int32_t ___0_U3Cp0U3E, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectedInstance = dropdownInstanceCreator.value;
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_0 = __this->___dropdownInstanceCreator_8;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TMP_Dropdown_get_value_m5916A6D1897431E8ED789FEC24551A311D1B5C70_inline(L_0, NULL);
		((UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_StaticFields*)il2cpp_codegen_static_fields_for(UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_il2cpp_TypeInfo_var))->___selectedInstance_13 = L_1;
		// UpdateDropdowns(false, null);
		UIHandler_UpdateDropdowns_m5A572FF88B2C023B07959735A6092B1F4D7CB502(__this, (bool)0, (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL, NULL);
		// });
		return;
	}
}
// System.Void UIHandler::<Start>b__13_5(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHandler_U3CStartU3Eb__13_5_m8A6460A227D6AB7C47A01B3E92C31BDA23334695 (UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016* __this, int32_t ___0_U3Cp0U3E, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectedInstance = dropdownModInfo.value;
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_0 = __this->___dropdownModInfo_7;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TMP_Dropdown_get_value_m5916A6D1897431E8ED789FEC24551A311D1B5C70_inline(L_0, NULL);
		((UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_StaticFields*)il2cpp_codegen_static_fields_for(UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_il2cpp_TypeInfo_var))->___selectedInstance_13 = L_1;
		// UpdateDropdowns(false, null);
		UIHandler_UpdateDropdowns_m5A572FF88B2C023B07959735A6092B1F4D7CB502(__this, (bool)0, (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL, NULL);
		// });
		return;
	}
}
// System.Void UIHandler::<Start>b__13_6(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHandler_U3CStartU3Eb__13_6_m248601F3CFCD21971CDD44779162B796F6CF1556 (UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016* __this, int32_t ___0_U3Cp0U3E, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectedInstance = dropdownModSearch.value;
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_0 = __this->___dropdownModSearch_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TMP_Dropdown_get_value_m5916A6D1897431E8ED789FEC24551A311D1B5C70_inline(L_0, NULL);
		((UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_StaticFields*)il2cpp_codegen_static_fields_for(UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_il2cpp_TypeInfo_var))->___selectedInstance_13 = L_1;
		// UpdateDropdowns(false, null);
		UIHandler_UpdateDropdowns_m5A572FF88B2C023B07959735A6092B1F4D7CB502(__this, (bool)0, (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL, NULL);
		// });
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
// System.Void UIHandler/<GetName>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNameU3Ed__15_MoveNext_mC70AC862DCB6FD39474F3F0C90619A9F7588D1C7 (U3CGetNameU3Ed__15_t8DED562071A15F853BEC4FF4B6C13B63DFC33E33* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIStorage_t375A1F8724CA5D597A2FE2AD654C0A9059F8851D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0AA5F478AE4FF95463D3D0F92BAF8FBADEB4BDC);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// if (JNIStorage.accountObj != null)
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((JNIStorage_t375A1F8724CA5D597A2FE2AD654C0A9059F8851D_StaticFields*)il2cpp_codegen_static_fields_for(JNIStorage_t375A1F8724CA5D597A2FE2AD654C0A9059F8851D_il2cpp_TypeInfo_var))->___accountObj_5;
			if (!L_0)
			{
				goto IL_0032_1;
			}
		}
		{
			// profileName ??= JNIStorage.apiClass.GetStatic<string>("profileName");
			String_t* L_1 = ((UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_StaticFields*)il2cpp_codegen_static_fields_for(UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_il2cpp_TypeInfo_var))->___profileName_15;
			if (L_1)
			{
				goto IL_0022_1;
			}
		}
		{
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = ((JNIStorage_t375A1F8724CA5D597A2FE2AD654C0A9059F8851D_StaticFields*)il2cpp_codegen_static_fields_for(JNIStorage_t375A1F8724CA5D597A2FE2AD654C0A9059F8851D_il2cpp_TypeInfo_var))->___apiClass_4;
			NullCheck(L_2);
			String_t* L_3;
			L_3 = AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE(L_2, _stringLiteralC0AA5F478AE4FF95463D3D0F92BAF8FBADEB4BDC, AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
			((UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_StaticFields*)il2cpp_codegen_static_fields_for(UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_il2cpp_TypeInfo_var))->___profileName_15 = L_3;
			Il2CppCodeGenWriteBarrier((void**)(&((UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_StaticFields*)il2cpp_codegen_static_fields_for(UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_il2cpp_TypeInfo_var))->___profileName_15), (void*)L_3);
		}

IL_0022_1:
		{
			// profileNameHolder.text = profileName;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = __this->___profileNameHolder_2;
			String_t* L_5 = ((UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_StaticFields*)il2cpp_codegen_static_fields_for(UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016_il2cpp_TypeInfo_var))->___profileName_15;
			NullCheck(L_4);
			VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_5);
		}

IL_0032_1:
		{
			goto IL_004b;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0034;
		}
		throw e;
	}

CATCH_0034:
	{// begin catch(System.Exception)
		Exception_t* L_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_0 = L_6;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_7 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var)));
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_7, L_8, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_005e;
	}// end catch (depth: 1)

IL_004b:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_9 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_9, NULL);
	}

IL_005e:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetNameU3Ed__15_MoveNext_mC70AC862DCB6FD39474F3F0C90619A9F7588D1C7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetNameU3Ed__15_t8DED562071A15F853BEC4FF4B6C13B63DFC33E33* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetNameU3Ed__15_t8DED562071A15F853BEC4FF4B6C13B63DFC33E33*>(__this + _offset);
	U3CGetNameU3Ed__15_MoveNext_mC70AC862DCB6FD39474F3F0C90619A9F7588D1C7(_thisAdjusted, method);
}
// System.Void UIHandler/<GetName>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNameU3Ed__15_SetStateMachine_m70626F1206616FAF4F8C97805060B764D72D954C (U3CGetNameU3Ed__15_t8DED562071A15F853BEC4FF4B6C13B63DFC33E33* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetNameU3Ed__15_SetStateMachine_m70626F1206616FAF4F8C97805060B764D72D954C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CGetNameU3Ed__15_t8DED562071A15F853BEC4FF4B6C13B63DFC33E33* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetNameU3Ed__15_t8DED562071A15F853BEC4FF4B6C13B63DFC33E33*>(__this + _offset);
	U3CGetNameU3Ed__15_SetStateMachine_m70626F1206616FAF4F8C97805060B764D72D954C(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UiRedocker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UiRedocker_Start_m44661D5718F1DEA70EA8CFA90D43E59FF6A2CE89 (UiRedocker_t50EC979A33241C3E6655D1C4CC036F115662EFDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UiRedocker_U3CStartU3Eb__5_0_m3EAF1AAB8CEE15B353D9DA6156F8A9E588C219C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// redockButton.onClick.AddListener(() =>
		// {
		//     if (main)
		//         Transition(watchDisplay);
		//     else
		//         Transition(mainScreen);
		// 
		//     main = !main;
		// });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___redockButton_7;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)UiRedocker_U3CStartU3Eb__5_0_m3EAF1AAB8CEE15B353D9DA6156F8A9E588C219C4_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// return;
		return;
	}
}
// System.Void UiRedocker::Transition(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UiRedocker_Transition_m4E41CC9795EFFF6A716906AD32B3EA94F76BBFFE (UiRedocker_t50EC979A33241C3E6655D1C4CC036F115662EFDC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_transitionObject, const RuntimeMethod* method) 
{
	{
		// ui.transform.parent = transitionObject.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___ui_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___0_transitionObject;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_1);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_1, L_3, NULL);
		// ui.transform.localScale = new Vector3(-1, 1 ,-1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___ui_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (-1.0f), (1.0f), (-1.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_6, NULL);
		// ui.transform.localPosition = Vector3.zero;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___ui_4;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_8);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_8, L_9, NULL);
		// ui.transform.localRotation = quaternion.Euler(Vector3.zero);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___ui_4;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		L_13 = float3_op_Implicit_mE1831A3AC179B7EB3236F8202EC8DD5CE05376AB(L_12, NULL);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_14;
		L_14 = quaternion_Euler_m8CBB7FB5BC25727DF15AC03C3B77DDD9816CC42F_inline(L_13, 4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = quaternion_op_Implicit_m78F07E28F5AB9C26F0EE997B2F12AF4A209FCD41(L_14, NULL);
		NullCheck(L_11);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_11, L_15, NULL);
		// }
		return;
	}
}
// System.Void UiRedocker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UiRedocker__ctor_m895732F4F73C45B9F7B83AE77A51B0E092DACC8A (UiRedocker_t50EC979A33241C3E6655D1C4CC036F115662EFDC* __this, const RuntimeMethod* method) 
{
	{
		// private bool main = true;
		__this->___main_8 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void UiRedocker::<Start>b__5_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UiRedocker_U3CStartU3Eb__5_0_m3EAF1AAB8CEE15B353D9DA6156F8A9E588C219C4 (UiRedocker_t50EC979A33241C3E6655D1C4CC036F115662EFDC* __this, const RuntimeMethod* method) 
{
	{
		// if (main)
		bool L_0 = __this->___main_8;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// Transition(watchDisplay);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___watchDisplay_6;
		UiRedocker_Transition_m4E41CC9795EFFF6A716906AD32B3EA94F76BBFFE(__this, L_1, NULL);
		goto IL_0022;
	}

IL_0016:
	{
		// Transition(mainScreen);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___mainScreen_5;
		UiRedocker_Transition_m4E41CC9795EFFF6A716906AD32B3EA94F76BBFFE(__this, L_2, NULL);
	}

IL_0022:
	{
		// main = !main;
		bool L_3 = __this->___main_8;
		__this->___main_8 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		// });
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
// System.Void VersionChecker::CheckVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionChecker_CheckVersion_m8FCF9F74CB30A8048A3CFE50759027D1D38077FB (VersionChecker_tEE09B71014356A251DC3C5B82392DF9316DBA06F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FE4D81F6F37F82D827D08351F38C3ABC599BC04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5777562C5A66004DCA7A3C381A9DCE6BFBAFCB40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64F455E67CB67B0F18309B34D910267A9D8C1589);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFFE67E8BE3AB2B6F5D2420E0CA4D06D3DB65DC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE847CC353B5CDC3EE77874FD153F49593B7E381A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string currentVersion = Application.version;
		String_t* L_0;
		L_0 = Application_get_version_m9CC0E94F12493682C1A2CA803083F6F01BA43124(NULL);
		V_0 = L_0;
		// Debug.Log($"Comparing Current version: {currentVersion} with Latest:{currentPublicVersion}");
		String_t* L_1 = V_0;
		String_t* L_2 = __this->___currentPublicVersion_4;
		String_t* L_3;
		L_3 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral3FE4D81F6F37F82D827D08351F38C3ABC599BC04, L_1, _stringLiteral64F455E67CB67B0F18309B34D910267A9D8C1589, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// if (Version.Parse(currentVersion) >= Version.Parse(currentPublicVersion))
		String_t* L_4 = V_0;
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_5;
		L_5 = Version_Parse_m4E65C2149814B8BDEE731FA5E3D90EF75039D30E(L_4, NULL);
		String_t* L_6 = __this->___currentPublicVersion_4;
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_7;
		L_7 = Version_Parse_m4E65C2149814B8BDEE731FA5E3D90EF75039D30E(L_6, NULL);
		bool L_8;
		L_8 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		// Debug.Log("Up to date.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralAFFE67E8BE3AB2B6F5D2420E0CA4D06D3DB65DC1, NULL);
		// return;
		return;
	}

IL_0044:
	{
		// Debug.Log("QuestCraft update available.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralE847CC353B5CDC3EE77874FD153F49593B7E381A, NULL);
		// updateText.text += " <color=#D70A53>| Update Available!</color>";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_9 = __this->___updateText_5;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_10 = L_9;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_10);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_11, _stringLiteral5777562C5A66004DCA7A3C381A9DCE6BFBAFCB40, NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_10, L_12);
		// }
		return;
	}
}
// System.Void VersionChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionChecker__ctor_m165861FA94DA18A164C05AE8CD83D734BCB41505 (VersionChecker_tEE09B71014356A251DC3C5B82392DF9316DBA06F* __this, const RuntimeMethod* method) 
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
// System.Void WindowHandler::MainPanelSwitch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowHandler_MainPanelSwitch_m4E2590B791B0E0555EC5227A4C13885CEDC3AAFA (WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* __this, const RuntimeMethod* method) 
{
	{
		// startPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___startPanel_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// mainPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___mainPanel_9;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void WindowHandler::LoadAv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowHandler_LoadAv_mC52FDA23774808AEA73AF7EB37FF3E2D47A7AF7D (WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A_mB7C9A2B6CBA531F6AEB08A3FCC1B4AE7F55F8D76_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A_mB7C9A2B6CBA531F6AEB08A3FCC1B4AE7F55F8D76(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A_mB7C9A2B6CBA531F6AEB08A3FCC1B4AE7F55F8D76_RuntimeMethod_var);
		return;
	}
}
// System.Void WindowHandler::DevMenuSetter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowHandler_DevMenuSetter_m287496178677F13AAE869F995C070814E93F3F5F (WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* __this, const RuntimeMethod* method) 
{
	{
		// loginElements.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___loginElements_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// devOptionsMenu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___devOptionsMenu_4;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void WindowHandler::DevMenuUnsetter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowHandler_DevMenuUnsetter_mCB0D8BA4427563874B8E42B71AF2EA1B71182F86 (WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* __this, const RuntimeMethod* method) 
{
	{
		// loginElements.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___loginElements_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// devOptionsMenu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___devOptionsMenu_4;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void WindowHandler::ModManagerButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowHandler_ModManagerButton_mF6FCCFC0027FE2DFB71D90CDAF20774253CBF3E5 (WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* __this, const RuntimeMethod* method) 
{
	{
		// modSearchMenu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___modSearchMenu_12;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// mainPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___mainPanel_9;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// modInfoMenu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___modInfoMenu_14;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void WindowHandler::ModSearchButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowHandler_ModSearchButton_m82AAB689FC907B045D19C94D2E4ACBD6E76C2EBE (WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* __this, const RuntimeMethod* method) 
{
	{
		// instanceMenu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___instanceMenu_16;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// modInfoMenu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___modInfoMenu_14;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// modSearchMenu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___modSearchMenu_12;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// modSearchPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___modSearchPanel_13;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// mainPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___mainPanel_9;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void WindowHandler::InstanceManagerSetter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowHandler_InstanceManagerSetter_m3E61F43F0587625A19763308554FC676FA489CFC (WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* __this, const RuntimeMethod* method) 
{
	{
		// instanceManager.CreateInstanceArray();
		InstanceManager_tFB5E3E616F12DB413A972248B9E569042BCDCEE0* L_0 = __this->___instanceManager_15;
		NullCheck(L_0);
		InstanceManager_CreateInstanceArray_mFDD56DE2B76BEB63E4434CD2525F495B8DC73871(L_0, NULL);
		// instanceMenu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___instanceMenu_16;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// mainPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___mainPanel_9;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void WindowHandler::InstanceManagerUnsetter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowHandler_InstanceManagerUnsetter_m72EBF3022B9EEC8D3A2EFBB48C8F55E6E8E1C63D (WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* __this, const RuntimeMethod* method) 
{
	{
		// instanceMenu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___instanceMenu_16;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// mainPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___mainPanel_9;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void WindowHandler::InstanceCreatorSetter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowHandler_InstanceCreatorSetter_mFF93A161D3538A8CF6C8A5A5D903A771EAC620CF (WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* __this, const RuntimeMethod* method) 
{
	{
		// instanceMainpage.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___instanceMainpage_17;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// instanceCreator.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___instanceCreator_18;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void WindowHandler::InstanceCreatorUnsetter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowHandler_InstanceCreatorUnsetter_mD06CF7A3C997B8EF4B8101F6C3A6E7C87E94F8C3 (WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* __this, const RuntimeMethod* method) 
{
	{
		// instanceCreator.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___instanceCreator_18;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// instanceMainpage.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___instanceMainpage_17;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// instanceManager.CreateInstanceArray();
		InstanceManager_tFB5E3E616F12DB413A972248B9E569042BCDCEE0* L_2 = __this->___instanceManager_15;
		NullCheck(L_2);
		InstanceManager_CreateInstanceArray_mFDD56DE2B76BEB63E4434CD2525F495B8DC73871(L_2, NULL);
		// }
		return;
	}
}
// System.Void WindowHandler::InstanceInfoSetter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowHandler_InstanceInfoSetter_m8ED40DDFE7646E897EE75ACA4ABD4BD2BBFBAE23 (WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* __this, const RuntimeMethod* method) 
{
	{
		// instanceInfo.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___instanceInfo_19;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// instanceMainpage.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___instanceMainpage_17;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void WindowHandler::InstanceInfoUnsetter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowHandler_InstanceInfoUnsetter_m98765364AB9E335D372423894C85E94A9C11AD15 (WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIStorage_t375A1F8724CA5D597A2FE2AD654C0A9059F8851D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instanceInfo.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___instanceInfo_19;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// instanceMainpage.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___instanceMainpage_17;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// instanceManager.CreateInstanceArray();
		InstanceManager_tFB5E3E616F12DB413A972248B9E569042BCDCEE0* L_2 = __this->___instanceManager_15;
		NullCheck(L_2);
		InstanceManager_CreateInstanceArray_mFDD56DE2B76BEB63E4434CD2525F495B8DC73871(L_2, NULL);
		// JNIStorage.instance.UpdateInstances();
		JNIStorage_t375A1F8724CA5D597A2FE2AD654C0A9059F8851D* L_3 = ((JNIStorage_t375A1F8724CA5D597A2FE2AD654C0A9059F8851D_StaticFields*)il2cpp_codegen_static_fields_for(JNIStorage_t375A1F8724CA5D597A2FE2AD654C0A9059F8851D_il2cpp_TypeInfo_var))->___instance_8;
		NullCheck(L_3);
		JNIStorage_UpdateInstances_mDFAE6C5FA767D83F9F9F0F15994CE77C0CF4F67E(L_3, NULL);
		// }
		return;
	}
}
// System.Void WindowHandler::LogoutWindowSetter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowHandler_LogoutWindowSetter_m9B894A337A778ACF7D2F48D8D7494C21F0DFF23E (WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* __this, const RuntimeMethod* method) 
{
	{
		// logoutWindow.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___logoutWindow_21;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void WindowHandler::LogoutWindowUnsetter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowHandler_LogoutWindowUnsetter_mF60578CD01775691B1DE919630974EAA5189AE7E (WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* __this, const RuntimeMethod* method) 
{
	{
		// logoutWindow.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___logoutWindow_21;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void WindowHandler::InstanceDeleteWarningSetter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowHandler_InstanceDeleteWarningSetter_m82310C08EC0B9B5D96A7A7801003E575B61EBE69 (WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* __this, const RuntimeMethod* method) 
{
	{
		// instanceDeleteWarning.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___instanceDeleteWarning_20;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void WindowHandler::InstanceDeleteWarningUnsetter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowHandler_InstanceDeleteWarningUnsetter_m9BEA205D5A6A681CC7D5E919A2DAABD25E0989BF (WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* __this, const RuntimeMethod* method) 
{
	{
		// instanceDeleteWarning.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___instanceDeleteWarning_20;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// instanceManager.CreateInstanceArray();
		InstanceManager_tFB5E3E616F12DB413A972248B9E569042BCDCEE0* L_1 = __this->___instanceManager_15;
		NullCheck(L_1);
		InstanceManager_CreateInstanceArray_mFDD56DE2B76BEB63E4434CD2525F495B8DC73871(L_1, NULL);
		// }
		return;
	}
}
// System.Void WindowHandler::ErrorMenuSetter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowHandler_ErrorMenuSetter_mD622C4E8D8A74ECE37538E6D3C0CAA75ECD93B22 (WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* __this, const RuntimeMethod* method) 
{
	{
		// errorWindow.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___errorWindow_22;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void WindowHandler::ErrorMenuUnsetter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowHandler_ErrorMenuUnsetter_m9B241C9E099BA7E2E9E8B7F4E2A0457B1143C465 (WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* __this, const RuntimeMethod* method) 
{
	{
		// errorWindow.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___errorWindow_22;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void WindowHandler::AnimateLogin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowHandler_AnimateLogin_mF616B4B748D2FFF8B2E25C97B45728A1C0EB16BC (WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowHandler_U3CAnimateLoginU3Eb__40_0_mDA5F2018A2A4181973C708A4D6224476687E4B09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowHandler_U3CAnimateLoginU3Eb__40_1_m3E50BC1AD73EFC85F71B97185A5099AE987859FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LeanTween.value(loginButton, loginButton.transform.localPosition.x, 0, 1).setEase(LeanTweenType.easeInOutCubic).setOnUpdate(newX =>
		// {
		//     loginButton.transform.localPosition = new Vector3(newX, loginButton.transform.localPosition.y, 0);
		//     loginText.gameObject.transform.localPosition = new Vector3(newX + 500, loginText.transform.localPosition.y, 0);
		// });
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___loginButton_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___loginButton_6;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_2, NULL);
		float L_4 = L_3.___x_2;
		il2cpp_codegen_runtime_class_init_inline(LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_5;
		L_5 = LeanTween_value_m4861DD35827C49BB547059303D4F6B1F414655BF(L_0, L_4, (0.0f), (1.0f), NULL);
		NullCheck(L_5);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_6;
		L_6 = LTDescr_setEase_m095FF057D085E9426DDA13E665D6EF3F0704F60C(L_5, 7, NULL);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_7 = (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)il2cpp_codegen_object_new(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859(L_7, __this, (intptr_t)((void*)WindowHandler_U3CAnimateLoginU3Eb__40_0_mDA5F2018A2A4181973C708A4D6224476687E4B09_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_8;
		L_8 = LTDescr_setOnUpdate_mCEDAAF707297D0F7ADF0476652E188A91505551C(L_6, L_7, NULL);
		// LeanTween.delayedCall(0.5f, () =>
		//     LeanTween.value(loginText.gameObject, 0, 1, 0.5f).setEase(LeanTweenType.easeInOutCubic)
		//         .setOnUpdate(opacity => loginText.alpha = opacity));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_9, __this, (intptr_t)((void*)WindowHandler_U3CAnimateLoginU3Eb__40_1_m3E50BC1AD73EFC85F71B97185A5099AE987859FC_RuntimeMethod_var), NULL);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_10;
		L_10 = LeanTween_delayedCall_m3C250C5B05FCD31473BE22E2A91F8AF157479B5E((0.5f), L_9, NULL);
		// }
		return;
	}
}
// System.Void WindowHandler::GithugLogSetter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowHandler_GithugLogSetter_mF53F165676636C1D2DAB539B46F196C8C495CDC0 (WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowHandler_U3CGithugLogSetterU3Eb__42_0_mE2615FF7E4411FE2F204AF2C882397282F5D10E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowHandler_U3CGithugLogSetterU3Eb__42_1_mDC450FCA890DA4021606843B7474E5249BD65D87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowHandler_U3CGithugLogSetterU3Eb__42_2_m9D414019873150E7E6A268DA2A26980E4EFC911C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowHandler_U3CGithugLogSetterU3Eb__42_3_m815E63D8F0D07A9C3336C12C41E6224627A9529C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(githubLogToggle.transform.localPosition);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___githubLogToggle_23;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2;
		RuntimeObject* L_4 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_3);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// if (githubLogAnimating)
		bool L_5 = __this->___githubLogAnimating_26;
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		// return;
		return;
	}

IL_0023:
	{
		// githubLogAnimating = true;
		__this->___githubLogAnimating_26 = (bool)1;
		// if (githubLogToggle.transform.localPosition.x == -131.93f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___githubLogToggle_23;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_7, NULL);
		float L_9 = L_8.___x_2;
		if ((!(((float)L_9) == ((float)(-131.929993f)))))
		{
			goto IL_00b5;
		}
	}
	{
		// LeanTween.value(githubLogToggle.gameObject, githubLogToggle.transform.localPosition, new(132.70f, githubLogToggle.transform.localPosition.y), 0.75f).setEase(LeanTweenType.easeInOutCubic).setOnUpdate((Vector3 loc) => githubLogToggle.transform.localPosition = loc).setOnComplete(() => githubLogAnimating = false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___githubLogToggle_23;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_10, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___githubLogToggle_23;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_13, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___githubLogToggle_23;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_16, NULL);
		float L_18 = L_17.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_19), (132.699997f), L_18, /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_20;
		L_20 = LeanTween_value_m51BDE5739C61EA00CDF63A6F207299EEA41BAB42(L_11, L_14, L_19, (0.75f), NULL);
		NullCheck(L_20);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_21;
		L_21 = LTDescr_setEase_m095FF057D085E9426DDA13E665D6EF3F0704F60C(L_20, 7, NULL);
		Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* L_22 = (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2*)il2cpp_codegen_object_new(Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Action_1__ctor_mE9E1859293BB35881CCC94B4A6E0A0E9997E046C(L_22, __this, (intptr_t)((void*)WindowHandler_U3CGithugLogSetterU3Eb__42_0_mE2615FF7E4411FE2F204AF2C882397282F5D10E8_RuntimeMethod_var), NULL);
		NullCheck(L_21);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_23;
		L_23 = LTDescr_setOnUpdate_m885E4DD3596845E89C5004C3C3786B09330576C7(L_21, L_22, NULL, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_24 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_24, __this, (intptr_t)((void*)WindowHandler_U3CGithugLogSetterU3Eb__42_1_mDC450FCA890DA4021606843B7474E5249BD65D87_RuntimeMethod_var), NULL);
		NullCheck(L_23);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_25;
		L_25 = LTDescr_setOnComplete_m71532B82E69D79F08953DFCECE0E2F024F4A06E4(L_23, L_24, NULL);
		return;
	}

IL_00b5:
	{
		// LeanTween.value(githubLogToggle.gameObject, githubLogToggle.transform.localPosition, new Vector3(-131.93f, githubLogToggle.transform.localPosition.y), 0.75f).setEase(LeanTweenType.easeInOutCubic).setOnUpdate((Vector3 loc) => githubLogToggle.transform.localPosition = loc).setOnComplete(() => githubLogAnimating = false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___githubLogToggle_23;
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_26, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___githubLogToggle_23;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_29, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___githubLogToggle_23;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_32, NULL);
		float L_34 = L_33.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_35), (-131.929993f), L_34, /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_36;
		L_36 = LeanTween_value_m51BDE5739C61EA00CDF63A6F207299EEA41BAB42(L_27, L_30, L_35, (0.75f), NULL);
		NullCheck(L_36);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_37;
		L_37 = LTDescr_setEase_m095FF057D085E9426DDA13E665D6EF3F0704F60C(L_36, 7, NULL);
		Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* L_38 = (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2*)il2cpp_codegen_object_new(Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		Action_1__ctor_mE9E1859293BB35881CCC94B4A6E0A0E9997E046C(L_38, __this, (intptr_t)((void*)WindowHandler_U3CGithugLogSetterU3Eb__42_2_m9D414019873150E7E6A268DA2A26980E4EFC911C_RuntimeMethod_var), NULL);
		NullCheck(L_37);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_39;
		L_39 = LTDescr_setOnUpdate_m885E4DD3596845E89C5004C3C3786B09330576C7(L_37, L_38, NULL, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_40 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_40, __this, (intptr_t)((void*)WindowHandler_U3CGithugLogSetterU3Eb__42_3_m815E63D8F0D07A9C3336C12C41E6224627A9529C_RuntimeMethod_var), NULL);
		NullCheck(L_39);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_41;
		L_41 = LTDescr_setOnComplete_m71532B82E69D79F08953DFCECE0E2F024F4A06E4(L_39, L_40, NULL);
		// }
		return;
	}
}
// System.Void WindowHandler::NeedHelpSetter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowHandler_NeedHelpSetter_mC7F3795B6C1785E7CFB9D5B1AFC69132C2E61A6E (WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* __this, const RuntimeMethod* method) 
{
	{
		// needHelpPanel.SetActive(!needHelpPanel.activeSelf);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___needHelpPanel_24;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___needHelpPanel_24;
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_1, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void WindowHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowHandler__ctor_m82AECBC74A14E0D10338227EAD75C9C3688F804F (WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void WindowHandler::<AnimateLogin>b__40_0(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowHandler_U3CAnimateLoginU3Eb__40_0_mDA5F2018A2A4181973C708A4D6224476687E4B09 (WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* __this, float ___0_newX, const RuntimeMethod* method) 
{
	{
		// loginButton.transform.localPosition = new Vector3(newX, loginButton.transform.localPosition.y, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___loginButton_6;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		float L_2 = ___0_newX;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___loginButton_6;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_4, NULL);
		float L_6 = L_5.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), L_2, L_6, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_7, NULL);
		// loginText.gameObject.transform.localPosition = new Vector3(newX + 500, loginText.transform.localPosition.y, 0);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_8 = __this->___loginText_7;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		float L_11 = ___0_newX;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_12 = __this->___loginText_7;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_13, NULL);
		float L_15 = L_14.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), ((float)il2cpp_codegen_add(L_11, (500.0f))), L_15, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_10, L_16, NULL);
		// });
		return;
	}
}
// System.Void WindowHandler::<AnimateLogin>b__40_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowHandler_U3CAnimateLoginU3Eb__40_1_m3E50BC1AD73EFC85F71B97185A5099AE987859FC (WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowHandler_U3CAnimateLoginU3Eb__40_2_m92675FBCC104CEC19D59253A7C1100028F2E7997_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LeanTween.value(loginText.gameObject, 0, 1, 0.5f).setEase(LeanTweenType.easeInOutCubic)
		//     .setOnUpdate(opacity => loginText.alpha = opacity));
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_0 = __this->___loginText_7;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_2;
		L_2 = LeanTween_value_m4861DD35827C49BB547059303D4F6B1F414655BF(L_1, (0.0f), (1.0f), (0.5f), NULL);
		NullCheck(L_2);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_3;
		L_3 = LTDescr_setEase_m095FF057D085E9426DDA13E665D6EF3F0704F60C(L_2, 7, NULL);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_4 = (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)il2cpp_codegen_object_new(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859(L_4, __this, (intptr_t)((void*)WindowHandler_U3CAnimateLoginU3Eb__40_2_m92675FBCC104CEC19D59253A7C1100028F2E7997_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_5;
		L_5 = LTDescr_setOnUpdate_mCEDAAF707297D0F7ADF0476652E188A91505551C(L_3, L_4, NULL);
		return;
	}
}
// System.Void WindowHandler::<AnimateLogin>b__40_2(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowHandler_U3CAnimateLoginU3Eb__40_2_m92675FBCC104CEC19D59253A7C1100028F2E7997 (WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* __this, float ___0_opacity, const RuntimeMethod* method) 
{
	{
		// .setOnUpdate(opacity => loginText.alpha = opacity));
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_0 = __this->___loginText_7;
		float L_1 = ___0_opacity;
		NullCheck(L_0);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_0, L_1, NULL);
		return;
	}
}
// System.Void WindowHandler::<GithugLogSetter>b__42_0(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowHandler_U3CGithugLogSetterU3Eb__42_0_mE2615FF7E4411FE2F204AF2C882397282F5D10E8 (WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_loc, const RuntimeMethod* method) 
{
	{
		// LeanTween.value(githubLogToggle.gameObject, githubLogToggle.transform.localPosition, new(132.70f, githubLogToggle.transform.localPosition.y), 0.75f).setEase(LeanTweenType.easeInOutCubic).setOnUpdate((Vector3 loc) => githubLogToggle.transform.localPosition = loc).setOnComplete(() => githubLogAnimating = false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___githubLogToggle_23;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_loc;
		NullCheck(L_1);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_2, NULL);
		return;
	}
}
// System.Void WindowHandler::<GithugLogSetter>b__42_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowHandler_U3CGithugLogSetterU3Eb__42_1_mDC450FCA890DA4021606843B7474E5249BD65D87 (WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* __this, const RuntimeMethod* method) 
{
	{
		// LeanTween.value(githubLogToggle.gameObject, githubLogToggle.transform.localPosition, new(132.70f, githubLogToggle.transform.localPosition.y), 0.75f).setEase(LeanTweenType.easeInOutCubic).setOnUpdate((Vector3 loc) => githubLogToggle.transform.localPosition = loc).setOnComplete(() => githubLogAnimating = false);
		__this->___githubLogAnimating_26 = (bool)0;
		return;
	}
}
// System.Void WindowHandler::<GithugLogSetter>b__42_2(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowHandler_U3CGithugLogSetterU3Eb__42_2_m9D414019873150E7E6A268DA2A26980E4EFC911C (WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_loc, const RuntimeMethod* method) 
{
	{
		// LeanTween.value(githubLogToggle.gameObject, githubLogToggle.transform.localPosition, new Vector3(-131.93f, githubLogToggle.transform.localPosition.y), 0.75f).setEase(LeanTweenType.easeInOutCubic).setOnUpdate((Vector3 loc) => githubLogToggle.transform.localPosition = loc).setOnComplete(() => githubLogAnimating = false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___githubLogToggle_23;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_loc;
		NullCheck(L_1);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_2, NULL);
		return;
	}
}
// System.Void WindowHandler::<GithugLogSetter>b__42_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowHandler_U3CGithugLogSetterU3Eb__42_3_m815E63D8F0D07A9C3336C12C41E6224627A9529C (WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* __this, const RuntimeMethod* method) 
{
	{
		// LeanTween.value(githubLogToggle.gameObject, githubLogToggle.transform.localPosition, new Vector3(-131.93f, githubLogToggle.transform.localPosition.y), 0.75f).setEase(LeanTweenType.easeInOutCubic).setOnUpdate((Vector3 loc) => githubLogToggle.transform.localPosition = loc).setOnComplete(() => githubLogAnimating = false);
		__this->___githubLogAnimating_26 = (bool)0;
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
// System.Void WindowHandler/<LoadAv>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAvU3Ed__23_MoveNext_m5B01BB290F2A2AE149614E8C491291DF04809158 (U3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A_m96408582444873AD97A8B3230DA560BFEC270EA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9769331E0E83A6E8CCBDF9FD5074978CCE6A226C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0055_1;
			}
		}
		{
			// Debug.Log("QCXR: Getting PFP and Username.");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9769331E0E83A6E8CCBDF9FD5074978CCE6A226C, NULL);
			// await UIHandler.GetName(profileNameHolder);
			WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* L_3 = V_1;
			NullCheck(L_3);
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = L_3->___profileNameHolder_10;
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
			L_5 = UIHandler_GetName_m5931410BCB87EFCFEC92C31E2FA9B0D2DE6054AD(L_4, NULL);
			NullCheck(L_5);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_6;
			L_6 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_5, NULL);
			V_2 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_7)
			{
				goto IL_0071_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_9 = V_2;
			__this->___U3CU3Eu__1_3 = L_9;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_10 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A_m96408582444873AD97A8B3230DA560BFEC270EA3(L_10, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A_m96408582444873AD97A8B3230DA560BFEC270EA3_RuntimeMethod_var);
			goto IL_00ba;
		}

IL_0055_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_11 = __this->___U3CU3Eu__1_3;
			V_2 = L_11;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_12 = (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_0071_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			// skinHandler.LoadSkin(profileNameHolder.text);
			WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* L_14 = V_1;
			NullCheck(L_14);
			SkinHandler_t743F260FC792381BB16C3C65F2089E33F39BDB0D* L_15 = L_14->___skinHandler_25;
			WindowHandler_t84707B63AAD9C4C5D1343D23851D57FA13D2B1E7* L_16 = V_1;
			NullCheck(L_16);
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_17 = L_16->___profileNameHolder_10;
			NullCheck(L_17);
			String_t* L_18;
			L_18 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_17);
			NullCheck(L_15);
			SkinHandler_LoadSkin_m1702A8F5967C169CE129F06A7B61B4A0D2CD78CD(L_15, L_18, NULL);
			goto IL_00a7;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0090;
		}
		throw e;
	}

CATCH_0090:
	{// begin catch(System.Exception)
		Exception_t* L_19 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_3 = L_19;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_20 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_21 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_20, L_21, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00ba;
	}// end catch (depth: 1)

IL_00a7:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_22 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_22, NULL);
	}

IL_00ba:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadAvU3Ed__23_MoveNext_m5B01BB290F2A2AE149614E8C491291DF04809158_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A*>(__this + _offset);
	U3CLoadAvU3Ed__23_MoveNext_m5B01BB290F2A2AE149614E8C491291DF04809158(_thisAdjusted, method);
}
// System.Void WindowHandler/<LoadAv>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAvU3Ed__23_SetStateMachine_m40675A60746604EDB991A54A72A6FCA6BEAEEC19 (U3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadAvU3Ed__23_SetStateMachine_m40675A60746604EDB991A54A72A6FCA6BEAEEC19_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadAvU3Ed__23_tC359BA4D606364D12370521A6192504F8B05CE0A*>(__this + _offset);
	U3CLoadAvU3Ed__23_SetStateMachine_m40675A60746604EDB991A54A72A6FCA6BEAEEC19(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DentedPixel.LeanDummy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanDummy__ctor_mAD97A9FAAAF771BEC38CA22F2CBA2DBA31E609CC (LeanDummy_tC93FBA95B1799B72C5A4B8FF57357E65EBD9BCC3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateFloat_m60C1527D8CD4CDB790CEEA8A9C4DABA66FCED416_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<float> onUpdateFloat { get; set; }
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = ___0_value;
		__this->___U3ConUpdateFloatU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateFloatU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateFloatRatio_m7FDCD87889C4E0CF748252718BD369258C20B7F7_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<float,float> onUpdateFloatRatio { get; set; }
		Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* L_0 = ___0_value;
		__this->___U3ConUpdateFloatRatioU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateFloatRatioU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateVector2_mE23EA8009F7B359E6E34D97E4E605EDC8614A76D_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<Vector2> onUpdateVector2 { get; set; }
		Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* L_0 = ___0_value;
		__this->___U3ConUpdateVector2U3Ek__BackingField_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateVector2U3Ek__BackingField_14), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateVector3_m4006C4EB660AF5B6A885813692D9F2BD2A6163A7_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<Vector3> onUpdateVector3 { get; set; }
		Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* L_0 = ___0_value;
		__this->___U3ConUpdateVector3U3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateVector3U3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateFloatObject_m822C5CD1005334071D7193BA3A0C5F347618A698_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<float,object> onUpdateFloatObject { get; set; }
		Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* L_0 = ___0_value;
		__this->___U3ConUpdateFloatObjectU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateFloatObjectU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateVector3Object_m06C50A94386A9BC2E70F8F2C7EC716E38365FD8C_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<Vector3,object> onUpdateVector3Object { get; set; }
		Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* L_0 = ___0_value;
		__this->___U3ConUpdateVector3ObjectU3Ek__BackingField_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateVector3ObjectU3Ek__BackingField_16), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onUpdateColor_m66C10CCCC8A25105F394CF69E3642B7E9A743246_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<Color> onUpdateColor { get; set; }
		Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22* L_0 = ___0_value;
		__this->___U3ConUpdateColorU3Ek__BackingField_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConUpdateColorU3Ek__BackingField_17), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onComplete_mFCBAF9050ACCE710820E46B2D8A2464B8D05DF7B_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action onComplete { get; set; }
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_value;
		__this->___U3ConCompleteU3Ek__BackingField_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConCompleteU3Ek__BackingField_19), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onCompleteObject_m022D536BBC07E52DD29D4F2FDE40833711BAC1A7_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<object> onCompleteObject { get; set; }
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_value;
		__this->___U3ConCompleteObjectU3Ek__BackingField_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConCompleteObjectU3Ek__BackingField_20), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onCompleteParam_m5320FE5FF67B3356DBFFBAED783C7128C85C6138_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public object onCompleteParam { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3ConCompleteParamU3Ek__BackingField_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConCompleteParamU3Ek__BackingField_21), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_onStart_mC981CE15440DB9DB464ECFF6FCC1D5651C8BB0F7_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action onStart { get; set; }
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_value;
		__this->___U3ConStartU3Ek__BackingField_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ConStartU3Ek__BackingField_23), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LTDescrOptional_set_point_m8118FB8ACBCDB57858243C919EDF6CADD7B63280_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 point { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CpointU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* LTDescrOptional_get_onUpdateFloat_m262BF995B9678367E2D7235324D8B924B802636F_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
{
	{
		// public Action<float> onUpdateFloat { get; set; }
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = __this->___U3ConUpdateFloatU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* LTDescrOptional_get_onUpdateFloatRatio_m90F38461C54B50E72F8D082FFBF5A86F92ECBC4C_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
{
	{
		// public Action<float,float> onUpdateFloatRatio { get; set; }
		Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* L_0 = __this->___U3ConUpdateFloatRatioU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* LTDescrOptional_get_onUpdateFloatObject_m0620EBFB83B5F0177BB73092DF04BA3185BA52D6_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
{
	{
		// public Action<float,object> onUpdateFloatObject { get; set; }
		Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* L_0 = __this->___U3ConUpdateFloatObjectU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LTDescrOptional_get_onUpdateParam_mED66593FCE15D7358FD5AD9EFC9CBE45FED8E29C_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
{
	{
		// public object onUpdateParam { get; set; }
		RuntimeObject* L_0 = __this->___U3ConUpdateParamU3Ek__BackingField_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* LTDescrOptional_get_onUpdateVector3Object_m8208D4E77FFAA9929E6C356CD4EF9129DFE9BE1B_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
{
	{
		// public Action<Vector3,object> onUpdateVector3Object { get; set; }
		Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* L_0 = __this->___U3ConUpdateVector3ObjectU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* LTDescrOptional_get_onUpdateVector3_mDF6048FB81A1B05487E41E7591B4C8D4058D7492_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
{
	{
		// public Action<Vector3> onUpdateVector3 { get; set; }
		Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* L_0 = __this->___U3ConUpdateVector3U3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* LTDescrOptional_get_onUpdateVector2_m64A0AFC164DE5C28CA403075CD77D707AEE75ABB_inline (LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* __this, const RuntimeMethod* method) 
{
	{
		// public Action<Vector2> onUpdateVector2 { get; set; }
		Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* L_0 = __this->___U3ConUpdateVector2U3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Quester_get_score_m1AC0974107BBC66B5ECAEB48D1539222D5041658_inline (Quester_t87B1E92029E6DF0F0BE30112533966FBC4B04F98* __this, const RuntimeMethod* method) 
{
	{
		// get => _score;
		int32_t L_0 = __this->____score_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91* TMP_Dropdown_get_onValueChanged_mC5A65068BFDC48C26FAC4B6FB2C0983633168BFF_inline (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, const RuntimeMethod* method) 
{
	{
		// public DropdownEvent onValueChanged { get { return m_OnValueChanged; } set { m_OnValueChanged = value; } }
		DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91* L_0 = __this->___m_OnValueChanged_28;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TMP_Dropdown_get_value_m5916A6D1897431E8ED789FEC24551A311D1B5C70_inline (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, const RuntimeMethod* method) 
{
	{
		// return m_Value;
		int32_t L_0 = __this->___m_Value_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 quaternion_Euler_m8CBB7FB5BC25727DF15AC03C3B77DDD9816CC42F_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_xyz, uint8_t ___1_order, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = ___1_order;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0020;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_002e;
			}
			case 3:
			{
				goto IL_0035;
			}
			case 4:
			{
				goto IL_003c;
			}
			case 5:
			{
				goto IL_0043;
			}
		}
	}
	{
		goto IL_004a;
	}

IL_0020:
	{
		// return EulerXYZ(xyz);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1 = ___0_xyz;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_2;
		L_2 = quaternion_EulerXYZ_m0AD608E878C0F5683DD56F636D10C75071C50E83_inline(L_1, NULL);
		return L_2;
	}

IL_0027:
	{
		// return EulerXZY(xyz);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3 = ___0_xyz;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_4;
		L_4 = quaternion_EulerXZY_m26440D15BEDC82C128C37089E3288057827813F4_inline(L_3, NULL);
		return L_4;
	}

IL_002e:
	{
		// return EulerYXZ(xyz);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_5 = ___0_xyz;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_6;
		L_6 = quaternion_EulerYXZ_m0EF0816E8382D05FA816EFCAA904AD894252750E_inline(L_5, NULL);
		return L_6;
	}

IL_0035:
	{
		// return EulerYZX(xyz);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_7 = ___0_xyz;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_8;
		L_8 = quaternion_EulerYZX_m83C2E3AE9BBAF6BC8158EE1B18ECEC43A334B191_inline(L_7, NULL);
		return L_8;
	}

IL_003c:
	{
		// return EulerZXY(xyz);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_9 = ___0_xyz;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_10;
		L_10 = quaternion_EulerZXY_mB4AA3C34723ED7FA7ABCF56A8078D606EB835597_inline(L_9, NULL);
		return L_10;
	}

IL_0043:
	{
		// return EulerZYX(xyz);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_11 = ___0_xyz;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_12;
		L_12 = quaternion_EulerZYX_m3005B4219207CB181E5EC8DB3F82FC8280A5BB55_inline(L_11, NULL);
		return L_12;
	}

IL_004a:
	{
		// return quaternion.identity;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_13 = ((quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_StaticFields*)il2cpp_codegen_static_fields_for(quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_il2cpp_TypeInfo_var))->___identity_1;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m50A62593A87E11ED31B47FE46E633AB3B9A7666C_gshared_inline (Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* __this, float ___0_arg1, float ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m9E7863E85E4D6B6D0C7F731513A8ECC8139FE626_gshared_inline (Action_2_t25A8547AFC85E4914143093EDA11AE27C97D9E10* __this, float ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m719475FEF89235EA7C17D75BF384DE2B9545839B_gshared_inline (Action_2_t7493708BA3F87F84FAB65917DE69C3FD00878E6C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m211AB6C2AA7326F6BFC8338EC888360A219AFF41_gshared_inline (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m3C60C84018CAD36C0EC956A14935394A7DD116C6_gshared_inline (Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
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
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 quaternion_EulerXYZ_m0AD608E878C0F5683DD56F636D10C75071C50E83_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_xyz, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_0;
	memset((&V_0), 0, sizeof(V_0));
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// sincos(0.5f * xyz, out s, out c);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_xyz;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1;
		L_1 = float3_op_Multiply_m38F52B61F8E5636955A1A6DF3A75BD0724148350_inline((0.5f), L_0, NULL);
		math_sincos_m28D7C74E99CF12DE35172DC6F26C77FD4D46D1B7_inline(L_1, (&V_0), (&V_1), NULL);
		// return quaternion(
		//     // s.x * c.y * c.z - s.y * s.z * c.x,
		//     // s.y * c.x * c.z + s.x * s.z * c.y,
		//     // s.z * c.x * c.y - s.x * s.y * c.z,
		//     // c.x * c.y * c.z + s.y * s.z * s.x
		//     float4(s.xyz, c.x) * c.yxxy * c.zzyz + s.yxxy * s.zzyz * float4(c.xyz, s.x) * float4(-1.0f, 1.0f, -1.0f, 1.0f)
		//     );
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2;
		L_2 = float3_get_xyz_m720A862AA512BE0B0B1089527A43EEF2B6766BEF_inline((&V_0), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3 = V_1;
		float L_4 = L_3.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_5;
		L_5 = math_float4_mE54104D60E6B9A358C75CB6F378118AB4914BFC4_inline(L_2, L_4, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6;
		L_6 = float3_get_yxxy_mF003E86CB17AE3175090DEF37A636AD75087AF81_inline((&V_1), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_7;
		L_7 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_5, L_6, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8;
		L_8 = float3_get_zzyz_m78B967EBE527FA5705C0E7B38563D1E33BB992C1_inline((&V_1), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_9;
		L_9 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_7, L_8, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_10;
		L_10 = float3_get_yxxy_mF003E86CB17AE3175090DEF37A636AD75087AF81_inline((&V_0), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_11;
		L_11 = float3_get_zzyz_m78B967EBE527FA5705C0E7B38563D1E33BB992C1_inline((&V_0), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12;
		L_12 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_10, L_11, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		L_13 = float3_get_xyz_m720A862AA512BE0B0B1089527A43EEF2B6766BEF_inline((&V_1), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_14 = V_0;
		float L_15 = L_14.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_16;
		L_16 = math_float4_mE54104D60E6B9A358C75CB6F378118AB4914BFC4_inline(L_13, L_15, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_17;
		L_17 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_12, L_16, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_18;
		L_18 = math_float4_m16697C284FA0C25A84F3DC3E99F3D4C306B6BFBF_inline((-1.0f), (1.0f), (-1.0f), (1.0f), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_19;
		L_19 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_17, L_18, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_20;
		L_20 = float4_op_Addition_m2CF2E1B2DAD4996DE3C5B6DFB90185E4CC8F0F44_inline(L_9, L_19, NULL);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_21;
		L_21 = math_quaternion_m315B4CA2F8475CC33F3C73187F00AC8B64BBF939_inline(L_20, NULL);
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 quaternion_EulerXZY_m26440D15BEDC82C128C37089E3288057827813F4_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_xyz, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_0;
	memset((&V_0), 0, sizeof(V_0));
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// sincos(0.5f * xyz, out s, out c);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_xyz;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1;
		L_1 = float3_op_Multiply_m38F52B61F8E5636955A1A6DF3A75BD0724148350_inline((0.5f), L_0, NULL);
		math_sincos_m28D7C74E99CF12DE35172DC6F26C77FD4D46D1B7_inline(L_1, (&V_0), (&V_1), NULL);
		// return quaternion(
		//     // s.x * c.y * c.z + s.y * s.z * c.x,
		//     // s.y * c.x * c.z + s.x * s.z * c.y,
		//     // s.z * c.x * c.y - s.x * s.y * c.z,
		//     // c.x * c.y * c.z - s.y * s.z * s.x
		//     float4(s.xyz, c.x) * c.yxxy * c.zzyz + s.yxxy * s.zzyz * float4(c.xyz, s.x) * float4(1.0f, 1.0f, -1.0f, -1.0f)
		//     );
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2;
		L_2 = float3_get_xyz_m720A862AA512BE0B0B1089527A43EEF2B6766BEF_inline((&V_0), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3 = V_1;
		float L_4 = L_3.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_5;
		L_5 = math_float4_mE54104D60E6B9A358C75CB6F378118AB4914BFC4_inline(L_2, L_4, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6;
		L_6 = float3_get_yxxy_mF003E86CB17AE3175090DEF37A636AD75087AF81_inline((&V_1), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_7;
		L_7 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_5, L_6, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8;
		L_8 = float3_get_zzyz_m78B967EBE527FA5705C0E7B38563D1E33BB992C1_inline((&V_1), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_9;
		L_9 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_7, L_8, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_10;
		L_10 = float3_get_yxxy_mF003E86CB17AE3175090DEF37A636AD75087AF81_inline((&V_0), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_11;
		L_11 = float3_get_zzyz_m78B967EBE527FA5705C0E7B38563D1E33BB992C1_inline((&V_0), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12;
		L_12 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_10, L_11, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		L_13 = float3_get_xyz_m720A862AA512BE0B0B1089527A43EEF2B6766BEF_inline((&V_1), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_14 = V_0;
		float L_15 = L_14.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_16;
		L_16 = math_float4_mE54104D60E6B9A358C75CB6F378118AB4914BFC4_inline(L_13, L_15, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_17;
		L_17 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_12, L_16, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_18;
		L_18 = math_float4_m16697C284FA0C25A84F3DC3E99F3D4C306B6BFBF_inline((1.0f), (1.0f), (-1.0f), (-1.0f), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_19;
		L_19 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_17, L_18, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_20;
		L_20 = float4_op_Addition_m2CF2E1B2DAD4996DE3C5B6DFB90185E4CC8F0F44_inline(L_9, L_19, NULL);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_21;
		L_21 = math_quaternion_m315B4CA2F8475CC33F3C73187F00AC8B64BBF939_inline(L_20, NULL);
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 quaternion_EulerYXZ_m0EF0816E8382D05FA816EFCAA904AD894252750E_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_xyz, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_0;
	memset((&V_0), 0, sizeof(V_0));
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// sincos(0.5f * xyz, out s, out c);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_xyz;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1;
		L_1 = float3_op_Multiply_m38F52B61F8E5636955A1A6DF3A75BD0724148350_inline((0.5f), L_0, NULL);
		math_sincos_m28D7C74E99CF12DE35172DC6F26C77FD4D46D1B7_inline(L_1, (&V_0), (&V_1), NULL);
		// return quaternion(
		//     // s.x * c.y * c.z - s.y * s.z * c.x,
		//     // s.y * c.x * c.z + s.x * s.z * c.y,
		//     // s.z * c.x * c.y + s.x * s.y * c.z,
		//     // c.x * c.y * c.z - s.y * s.z * s.x
		//     float4(s.xyz, c.x) * c.yxxy * c.zzyz + s.yxxy * s.zzyz * float4(c.xyz, s.x) * float4(-1.0f, 1.0f, 1.0f, -1.0f)
		//     );
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2;
		L_2 = float3_get_xyz_m720A862AA512BE0B0B1089527A43EEF2B6766BEF_inline((&V_0), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3 = V_1;
		float L_4 = L_3.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_5;
		L_5 = math_float4_mE54104D60E6B9A358C75CB6F378118AB4914BFC4_inline(L_2, L_4, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6;
		L_6 = float3_get_yxxy_mF003E86CB17AE3175090DEF37A636AD75087AF81_inline((&V_1), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_7;
		L_7 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_5, L_6, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8;
		L_8 = float3_get_zzyz_m78B967EBE527FA5705C0E7B38563D1E33BB992C1_inline((&V_1), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_9;
		L_9 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_7, L_8, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_10;
		L_10 = float3_get_yxxy_mF003E86CB17AE3175090DEF37A636AD75087AF81_inline((&V_0), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_11;
		L_11 = float3_get_zzyz_m78B967EBE527FA5705C0E7B38563D1E33BB992C1_inline((&V_0), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12;
		L_12 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_10, L_11, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		L_13 = float3_get_xyz_m720A862AA512BE0B0B1089527A43EEF2B6766BEF_inline((&V_1), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_14 = V_0;
		float L_15 = L_14.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_16;
		L_16 = math_float4_mE54104D60E6B9A358C75CB6F378118AB4914BFC4_inline(L_13, L_15, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_17;
		L_17 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_12, L_16, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_18;
		L_18 = math_float4_m16697C284FA0C25A84F3DC3E99F3D4C306B6BFBF_inline((-1.0f), (1.0f), (1.0f), (-1.0f), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_19;
		L_19 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_17, L_18, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_20;
		L_20 = float4_op_Addition_m2CF2E1B2DAD4996DE3C5B6DFB90185E4CC8F0F44_inline(L_9, L_19, NULL);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_21;
		L_21 = math_quaternion_m315B4CA2F8475CC33F3C73187F00AC8B64BBF939_inline(L_20, NULL);
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 quaternion_EulerYZX_m83C2E3AE9BBAF6BC8158EE1B18ECEC43A334B191_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_xyz, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_0;
	memset((&V_0), 0, sizeof(V_0));
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// sincos(0.5f * xyz, out s, out c);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_xyz;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1;
		L_1 = float3_op_Multiply_m38F52B61F8E5636955A1A6DF3A75BD0724148350_inline((0.5f), L_0, NULL);
		math_sincos_m28D7C74E99CF12DE35172DC6F26C77FD4D46D1B7_inline(L_1, (&V_0), (&V_1), NULL);
		// return quaternion(
		//     // s.x * c.y * c.z - s.y * s.z * c.x,
		//     // s.y * c.x * c.z - s.x * s.z * c.y,
		//     // s.z * c.x * c.y + s.x * s.y * c.z,
		//     // c.x * c.y * c.z + s.y * s.z * s.x
		//     float4(s.xyz, c.x) * c.yxxy * c.zzyz + s.yxxy * s.zzyz * float4(c.xyz, s.x) * float4(-1.0f, -1.0f, 1.0f, 1.0f)
		//     );
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2;
		L_2 = float3_get_xyz_m720A862AA512BE0B0B1089527A43EEF2B6766BEF_inline((&V_0), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3 = V_1;
		float L_4 = L_3.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_5;
		L_5 = math_float4_mE54104D60E6B9A358C75CB6F378118AB4914BFC4_inline(L_2, L_4, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6;
		L_6 = float3_get_yxxy_mF003E86CB17AE3175090DEF37A636AD75087AF81_inline((&V_1), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_7;
		L_7 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_5, L_6, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8;
		L_8 = float3_get_zzyz_m78B967EBE527FA5705C0E7B38563D1E33BB992C1_inline((&V_1), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_9;
		L_9 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_7, L_8, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_10;
		L_10 = float3_get_yxxy_mF003E86CB17AE3175090DEF37A636AD75087AF81_inline((&V_0), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_11;
		L_11 = float3_get_zzyz_m78B967EBE527FA5705C0E7B38563D1E33BB992C1_inline((&V_0), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12;
		L_12 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_10, L_11, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		L_13 = float3_get_xyz_m720A862AA512BE0B0B1089527A43EEF2B6766BEF_inline((&V_1), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_14 = V_0;
		float L_15 = L_14.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_16;
		L_16 = math_float4_mE54104D60E6B9A358C75CB6F378118AB4914BFC4_inline(L_13, L_15, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_17;
		L_17 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_12, L_16, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_18;
		L_18 = math_float4_m16697C284FA0C25A84F3DC3E99F3D4C306B6BFBF_inline((-1.0f), (-1.0f), (1.0f), (1.0f), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_19;
		L_19 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_17, L_18, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_20;
		L_20 = float4_op_Addition_m2CF2E1B2DAD4996DE3C5B6DFB90185E4CC8F0F44_inline(L_9, L_19, NULL);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_21;
		L_21 = math_quaternion_m315B4CA2F8475CC33F3C73187F00AC8B64BBF939_inline(L_20, NULL);
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 quaternion_EulerZXY_mB4AA3C34723ED7FA7ABCF56A8078D606EB835597_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_xyz, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_0;
	memset((&V_0), 0, sizeof(V_0));
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// sincos(0.5f * xyz, out s, out c);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_xyz;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1;
		L_1 = float3_op_Multiply_m38F52B61F8E5636955A1A6DF3A75BD0724148350_inline((0.5f), L_0, NULL);
		math_sincos_m28D7C74E99CF12DE35172DC6F26C77FD4D46D1B7_inline(L_1, (&V_0), (&V_1), NULL);
		// return quaternion(
		//     // s.x * c.y * c.z + s.y * s.z * c.x,
		//     // s.y * c.x * c.z - s.x * s.z * c.y,
		//     // s.z * c.x * c.y - s.x * s.y * c.z,
		//     // c.x * c.y * c.z + s.y * s.z * s.x
		//     float4(s.xyz, c.x) * c.yxxy * c.zzyz + s.yxxy * s.zzyz * float4(c.xyz, s.x) * float4(1.0f, -1.0f, -1.0f, 1.0f)
		//     );
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2;
		L_2 = float3_get_xyz_m720A862AA512BE0B0B1089527A43EEF2B6766BEF_inline((&V_0), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3 = V_1;
		float L_4 = L_3.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_5;
		L_5 = math_float4_mE54104D60E6B9A358C75CB6F378118AB4914BFC4_inline(L_2, L_4, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6;
		L_6 = float3_get_yxxy_mF003E86CB17AE3175090DEF37A636AD75087AF81_inline((&V_1), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_7;
		L_7 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_5, L_6, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8;
		L_8 = float3_get_zzyz_m78B967EBE527FA5705C0E7B38563D1E33BB992C1_inline((&V_1), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_9;
		L_9 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_7, L_8, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_10;
		L_10 = float3_get_yxxy_mF003E86CB17AE3175090DEF37A636AD75087AF81_inline((&V_0), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_11;
		L_11 = float3_get_zzyz_m78B967EBE527FA5705C0E7B38563D1E33BB992C1_inline((&V_0), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12;
		L_12 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_10, L_11, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		L_13 = float3_get_xyz_m720A862AA512BE0B0B1089527A43EEF2B6766BEF_inline((&V_1), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_14 = V_0;
		float L_15 = L_14.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_16;
		L_16 = math_float4_mE54104D60E6B9A358C75CB6F378118AB4914BFC4_inline(L_13, L_15, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_17;
		L_17 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_12, L_16, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_18;
		L_18 = math_float4_m16697C284FA0C25A84F3DC3E99F3D4C306B6BFBF_inline((1.0f), (-1.0f), (-1.0f), (1.0f), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_19;
		L_19 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_17, L_18, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_20;
		L_20 = float4_op_Addition_m2CF2E1B2DAD4996DE3C5B6DFB90185E4CC8F0F44_inline(L_9, L_19, NULL);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_21;
		L_21 = math_quaternion_m315B4CA2F8475CC33F3C73187F00AC8B64BBF939_inline(L_20, NULL);
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 quaternion_EulerZYX_m3005B4219207CB181E5EC8DB3F82FC8280A5BB55_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_xyz, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_0;
	memset((&V_0), 0, sizeof(V_0));
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// sincos(0.5f * xyz, out s, out c);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_xyz;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1;
		L_1 = float3_op_Multiply_m38F52B61F8E5636955A1A6DF3A75BD0724148350_inline((0.5f), L_0, NULL);
		math_sincos_m28D7C74E99CF12DE35172DC6F26C77FD4D46D1B7_inline(L_1, (&V_0), (&V_1), NULL);
		// return quaternion(
		//     // s.x * c.y * c.z + s.y * s.z * c.x,
		//     // s.y * c.x * c.z - s.x * s.z * c.y,
		//     // s.z * c.x * c.y + s.x * s.y * c.z,
		//     // c.x * c.y * c.z - s.y * s.x * s.z
		//     float4(s.xyz, c.x) * c.yxxy * c.zzyz + s.yxxy * s.zzyz * float4(c.xyz, s.x) * float4(1.0f, -1.0f, 1.0f, -1.0f)
		//     );
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2;
		L_2 = float3_get_xyz_m720A862AA512BE0B0B1089527A43EEF2B6766BEF_inline((&V_0), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3 = V_1;
		float L_4 = L_3.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_5;
		L_5 = math_float4_mE54104D60E6B9A358C75CB6F378118AB4914BFC4_inline(L_2, L_4, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6;
		L_6 = float3_get_yxxy_mF003E86CB17AE3175090DEF37A636AD75087AF81_inline((&V_1), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_7;
		L_7 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_5, L_6, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8;
		L_8 = float3_get_zzyz_m78B967EBE527FA5705C0E7B38563D1E33BB992C1_inline((&V_1), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_9;
		L_9 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_7, L_8, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_10;
		L_10 = float3_get_yxxy_mF003E86CB17AE3175090DEF37A636AD75087AF81_inline((&V_0), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_11;
		L_11 = float3_get_zzyz_m78B967EBE527FA5705C0E7B38563D1E33BB992C1_inline((&V_0), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12;
		L_12 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_10, L_11, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		L_13 = float3_get_xyz_m720A862AA512BE0B0B1089527A43EEF2B6766BEF_inline((&V_1), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_14 = V_0;
		float L_15 = L_14.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_16;
		L_16 = math_float4_mE54104D60E6B9A358C75CB6F378118AB4914BFC4_inline(L_13, L_15, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_17;
		L_17 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_12, L_16, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_18;
		L_18 = math_float4_m16697C284FA0C25A84F3DC3E99F3D4C306B6BFBF_inline((1.0f), (-1.0f), (1.0f), (-1.0f), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_19;
		L_19 = float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline(L_17, L_18, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_20;
		L_20 = float4_op_Addition_m2CF2E1B2DAD4996DE3C5B6DFB90185E4CC8F0F44_inline(L_9, L_19, NULL);
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_21;
		L_21 = math_quaternion_m315B4CA2F8475CC33F3C73187F00AC8B64BBF939_inline(L_20, NULL);
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Multiply_m38F52B61F8E5636955A1A6DF3A75BD0724148350_inline (float ___0_lhs, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static float3 operator * (float lhs, float3 rhs) { return new float3 (lhs * rhs.x, lhs * rhs.y, lhs * rhs.z); }
		float L_0 = ___0_lhs;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1 = ___1_rhs;
		float L_2 = L_1.___x_0;
		float L_3 = ___0_lhs;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___1_rhs;
		float L_5 = L_4.___y_1;
		float L_6 = ___0_lhs;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_7 = ___1_rhs;
		float L_8 = L_7.___z_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_9;
		memset((&L_9), 0, sizeof(L_9));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_9), ((float)il2cpp_codegen_multiply(L_0, L_2)), ((float)il2cpp_codegen_multiply(L_3, L_5)), ((float)il2cpp_codegen_multiply(L_6, L_8)), /*hidden argument*/NULL);
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void math_sincos_m28D7C74E99CF12DE35172DC6F26C77FD4D46D1B7_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_x, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___1_s, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___2_c, const RuntimeMethod* method) 
{
	{
		// public static void sincos(float3 x, out float3 s, out float3 c) { s = sin(x); c = cos(x); }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = ___1_s;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1 = ___0_x;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2;
		L_2 = math_sin_m43618973AB0574A29896B4479E1F72A829644A33_inline(L_1, NULL);
		*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_0 = L_2;
		// public static void sincos(float3 x, out float3 s, out float3 c) { s = sin(x); c = cos(x); }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_3 = ___2_c;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___0_x;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_5;
		L_5 = math_cos_m42275E85C55A660ABC711D07B4349A82F4BBCBC4_inline(L_4, NULL);
		*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_3 = L_5;
		// public static void sincos(float3 x, out float3 s, out float3 c) { s = sin(x); c = cos(x); }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_get_xyz_m720A862AA512BE0B0B1089527A43EEF2B6766BEF_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, const RuntimeMethod* method) 
{
	{
		// get { return new float3(x, y, z); }
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		float L_2 = __this->___z_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3;
		memset((&L_3), 0, sizeof(L_3));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E math_float4_mE54104D60E6B9A358C75CB6F378118AB4914BFC4_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_xyz, float ___1_w, const RuntimeMethod* method) 
{
	{
		// public static float4 float4(float3 xyz, float w) { return new float4(xyz, w); }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_xyz;
		float L_1 = ___1_w;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_2;
		memset((&L_2), 0, sizeof(L_2));
		float4__ctor_m2A21052EF06884F609D1CDA9A2C2ED84A7584345_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float3_get_yxxy_mF003E86CB17AE3175090DEF37A636AD75087AF81_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, const RuntimeMethod* method) 
{
	{
		// get { return new float4(y, x, x, y); }
		float L_0 = __this->___y_1;
		float L_1 = __this->___x_0;
		float L_2 = __this->___x_0;
		float L_3 = __this->___y_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4;
		memset((&L_4), 0, sizeof(L_4));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_4), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Multiply_m0E98338FB7DFF55B101EBCD78A8703ADB9C08667_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_lhs, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static float4 operator * (float4 lhs, float4 rhs) { return new float4 (lhs.x * rhs.x, lhs.y * rhs.y, lhs.z * rhs.z, lhs.w * rhs.w); }
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___0_lhs;
		float L_1 = L_0.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4 = ___0_lhs;
		float L_5 = L_4.___y_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6 = ___1_rhs;
		float L_7 = L_6.___y_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8 = ___0_lhs;
		float L_9 = L_8.___z_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_10 = ___1_rhs;
		float L_11 = L_10.___z_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12 = ___0_lhs;
		float L_13 = L_12.___w_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_14 = ___1_rhs;
		float L_15 = L_14.___w_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_16;
		memset((&L_16), 0, sizeof(L_16));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_16), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)), /*hidden argument*/NULL);
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float3_get_zzyz_m78B967EBE527FA5705C0E7B38563D1E33BB992C1_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, const RuntimeMethod* method) 
{
	{
		// get { return new float4(z, z, y, z); }
		float L_0 = __this->___z_2;
		float L_1 = __this->___z_2;
		float L_2 = __this->___y_1;
		float L_3 = __this->___z_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4;
		memset((&L_4), 0, sizeof(L_4));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_4), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E math_float4_m16697C284FA0C25A84F3DC3E99F3D4C306B6BFBF_inline (float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		// public static float4 float4(float x, float y, float z, float w) { return new float4(x, y, z, w); }
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		float L_3 = ___3_w;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4;
		memset((&L_4), 0, sizeof(L_4));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_4), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Addition_m2CF2E1B2DAD4996DE3C5B6DFB90185E4CC8F0F44_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_lhs, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static float4 operator + (float4 lhs, float4 rhs) { return new float4 (lhs.x + rhs.x, lhs.y + rhs.y, lhs.z + rhs.z, lhs.w + rhs.w); }
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___0_lhs;
		float L_1 = L_0.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4 = ___0_lhs;
		float L_5 = L_4.___y_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6 = ___1_rhs;
		float L_7 = L_6.___y_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8 = ___0_lhs;
		float L_9 = L_8.___z_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_10 = ___1_rhs;
		float L_11 = L_10.___z_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12 = ___0_lhs;
		float L_13 = L_12.___w_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_14 = ___1_rhs;
		float L_15 = L_14.___w_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_16;
		memset((&L_16), 0, sizeof(L_16));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_16), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), ((float)il2cpp_codegen_add(L_13, L_15)), /*hidden argument*/NULL);
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 math_quaternion_m315B4CA2F8475CC33F3C73187F00AC8B64BBF939_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_value, const RuntimeMethod* method) 
{
	{
		// public static quaternion quaternion(float4 value) { return new quaternion(value); }
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___0_value;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		quaternion__ctor_m2F6A34CCFD1150A326CB4CE108260A8BD8B1D75F_inline((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		// this.y = y;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		// this.z = z;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E math_sin_m43618973AB0574A29896B4479E1F72A829644A33_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_x, const RuntimeMethod* method) 
{
	{
		// public static float3 sin(float3 x) { return new float3(sin(x.x), sin(x.y), sin(x.z)); }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_x;
		float L_1 = L_0.___x_0;
		float L_2;
		L_2 = math_sin_m231F847C28B88B17BDAD7F49A7A38E46DF12D3FF_inline(L_1, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3 = ___0_x;
		float L_4 = L_3.___y_1;
		float L_5;
		L_5 = math_sin_m231F847C28B88B17BDAD7F49A7A38E46DF12D3FF_inline(L_4, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6 = ___0_x;
		float L_7 = L_6.___z_2;
		float L_8;
		L_8 = math_sin_m231F847C28B88B17BDAD7F49A7A38E46DF12D3FF_inline(L_7, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_9;
		memset((&L_9), 0, sizeof(L_9));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E math_cos_m42275E85C55A660ABC711D07B4349A82F4BBCBC4_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_x, const RuntimeMethod* method) 
{
	{
		// public static float3 cos(float3 x) { return new float3(cos(x.x), cos(x.y), cos(x.z)); }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_x;
		float L_1 = L_0.___x_0;
		float L_2;
		L_2 = math_cos_m28B6228E047D552B1312CCFADB8AE95DDD94A6AF_inline(L_1, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3 = ___0_x;
		float L_4 = L_3.___y_1;
		float L_5;
		L_5 = math_cos_m28B6228E047D552B1312CCFADB8AE95DDD94A6AF_inline(L_4, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6 = ___0_x;
		float L_7 = L_6.___z_2;
		float L_8;
		L_8 = math_cos_m28B6228E047D552B1312CCFADB8AE95DDD94A6AF_inline(L_7, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_9;
		memset((&L_9), 0, sizeof(L_9));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_m2A21052EF06884F609D1CDA9A2C2ED84A7584345_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_xyz, float ___1_w, const RuntimeMethod* method) 
{
	{
		// this.x = xyz.x;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_xyz;
		float L_1 = L_0.___x_0;
		__this->___x_0 = L_1;
		// this.y = xyz.y;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2 = ___0_xyz;
		float L_3 = L_2.___y_1;
		__this->___y_1 = L_3;
		// this.z = xyz.z;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___0_xyz;
		float L_5 = L_4.___z_2;
		__this->___z_2 = L_5;
		// this.w = w;
		float L_6 = ___1_w;
		__this->___w_3 = L_6;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		// this.y = y;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		// this.z = z;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		// this.w = w;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void quaternion__ctor_m2F6A34CCFD1150A326CB4CE108260A8BD8B1D75F_inline (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* __this, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_value, const RuntimeMethod* method) 
{
	{
		// public quaternion(float4 value) { this.value = value; }
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___0_value;
		__this->___value_0 = L_0;
		// public quaternion(float4 value) { this.value = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_sin_m231F847C28B88B17BDAD7F49A7A38E46DF12D3FF_inline (float ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float sin(float x) { return (float)System.Math.Sin((float)x); }
		float L_0 = ___0_x;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = sin(((double)((float)L_0)));
		return ((float)L_1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_cos_m28B6228E047D552B1312CCFADB8AE95DDD94A6AF_inline (float ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float cos(float x) { return (float)System.Math.Cos(x); }
		float L_0 = ___0_x;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = cos(((double)L_0));
		return ((float)L_1);
	}
}
