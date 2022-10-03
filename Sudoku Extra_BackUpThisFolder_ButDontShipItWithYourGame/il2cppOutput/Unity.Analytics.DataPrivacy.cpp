#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Analytics.DataPrivacy
struct DataPrivacy_t89E770CB5F8373BCD71C32F638200295665C843A;
// UnityEngine.Analytics.DataPrivacyButton
struct DataPrivacyButton_tAC1F51193967F462A13D0345B0D232A8EB74E95E;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
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
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Analytics.DataPrivacy/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tC28507578ECFB8F4683C878ECD399516AF9B174A;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_tC28507578ECFB8F4683C878ECD399516AF9B174A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserPostData_tBFE90AD10460E3B60B624DAB7F8575FDD6F34511_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral397656BA4EC7DE25E0F25AE3965CF8CDE8D9E453;
IL2CPP_EXTERN_C String_t* _stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF;
IL2CPP_EXTERN_C String_t* _stringLiteral63FDB2B42E98A1FB9ECC337E74B03FB4E421C6A4;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral6D897FF10CFE58AED1AE6C3DA7438C6558918D6D;
IL2CPP_EXTERN_C String_t* _stringLiteral929079632773DFA8E4031711D852B323BB8E14D6;
IL2CPP_EXTERN_C String_t* _stringLiteral9FBB5FB40CBBD5DA86403E50B9C2950D19EDCF83;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF05E4C8B879E4DA2B1683F9936B61542BE8F7BF3;
IL2CPP_EXTERN_C const RuntimeMethod* DataPrivacyButton_OnFailure_mE421E815E33CFC22140AAF9940CD81D0EDAE852F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataPrivacyButton_OpenDataPrivacyUrl_m987477882B2CB5261507ED52038C64BEE0A1E421_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataPrivacyButton_OpenUrl_m965D22C79AD57A5580997D57D2072384A330D730_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisTokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6_mE0BF1ABC4E25C0E45D685BD0DFC55696193AE17B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CFetchPrivacyUrlU3Eb__0_m8A8C39F0E05D91A9911C7BCDB9144E0DFB4F6B26_RuntimeMethod_var;
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
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t45E2E92AAD7220D62B035D221177E4A5447BF12A 
{
};
struct Il2CppArrayBounds;

// UnityEngine.Analytics.DataPrivacy
struct DataPrivacy_t89E770CB5F8373BCD71C32F638200295665C843A  : public RuntimeObject
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

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// UnityEngine.Analytics.DataPrivacy/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tC28507578ECFB8F4683C878ECD399516AF9B174A  : public RuntimeObject
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Analytics.DataPrivacy/<>c__DisplayClass9_0::www
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___www_0;
	// System.Action`1<System.String> UnityEngine.Analytics.DataPrivacy/<>c__DisplayClass9_0::failure
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___failure_1;
	// System.Action`1<System.String> UnityEngine.Analytics.DataPrivacy/<>c__DisplayClass9_0::success
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___success_2;
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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
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

// UnityEngine.Analytics.DataPrivacy/TokenData
struct TokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6 
{
	// System.String UnityEngine.Analytics.DataPrivacy/TokenData::url
	String_t* ___url_0;
	// System.String UnityEngine.Analytics.DataPrivacy/TokenData::token
	String_t* ___token_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Analytics.DataPrivacy/TokenData
struct TokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6_marshaled_pinvoke
{
	char* ___url_0;
	char* ___token_1;
};
// Native definition for COM marshalling of UnityEngine.Analytics.DataPrivacy/TokenData
struct TokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6_marshaled_com
{
	Il2CppChar* ___url_0;
	Il2CppChar* ___token_1;
};

// UnityEngine.Analytics.DataPrivacy/UserPostData
struct UserPostData_tBFE90AD10460E3B60B624DAB7F8575FDD6F34511 
{
	// System.String UnityEngine.Analytics.DataPrivacy/UserPostData::appid
	String_t* ___appid_0;
	// System.String UnityEngine.Analytics.DataPrivacy/UserPostData::userid
	String_t* ___userid_1;
	// System.Int64 UnityEngine.Analytics.DataPrivacy/UserPostData::sessionid
	int64_t ___sessionid_2;
	// System.String UnityEngine.Analytics.DataPrivacy/UserPostData::platform
	String_t* ___platform_3;
	// System.UInt32 UnityEngine.Analytics.DataPrivacy/UserPostData::platformid
	uint32_t ___platformid_4;
	// System.String UnityEngine.Analytics.DataPrivacy/UserPostData::sdk_ver
	String_t* ___sdk_ver_5;
	// System.Boolean UnityEngine.Analytics.DataPrivacy/UserPostData::debug_device
	bool ___debug_device_6;
	// System.String UnityEngine.Analytics.DataPrivacy/UserPostData::deviceid
	String_t* ___deviceid_7;
	// System.String UnityEngine.Analytics.DataPrivacy/UserPostData::plugin_ver
	String_t* ___plugin_ver_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Analytics.DataPrivacy/UserPostData
struct UserPostData_tBFE90AD10460E3B60B624DAB7F8575FDD6F34511_marshaled_pinvoke
{
	char* ___appid_0;
	char* ___userid_1;
	int64_t ___sessionid_2;
	char* ___platform_3;
	uint32_t ___platformid_4;
	char* ___sdk_ver_5;
	int32_t ___debug_device_6;
	char* ___deviceid_7;
	char* ___plugin_ver_8;
};
// Native definition for COM marshalling of UnityEngine.Analytics.DataPrivacy/UserPostData
struct UserPostData_tBFE90AD10460E3B60B624DAB7F8575FDD6F34511_marshaled_com
{
	Il2CppChar* ___appid_0;
	Il2CppChar* ___userid_1;
	int64_t ___sessionid_2;
	Il2CppChar* ___platform_3;
	uint32_t ___platformid_4;
	Il2CppChar* ___sdk_ver_5;
	int32_t ___debug_device_6;
	Il2CppChar* ___deviceid_7;
	Il2CppChar* ___plugin_ver_8;
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

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A  : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.UploadHandlerRaw::m_Payload
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_pinvoke : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_com : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.Analytics.DataPrivacyButton
struct DataPrivacyButton_tAC1F51193967F462A13D0345B0D232A8EB74E95E  : public Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098
{
	// System.Boolean UnityEngine.Analytics.DataPrivacyButton::urlOpened
	bool ___urlOpened_21;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<UnityEngine.Analytics.DataPrivacy/TokenData>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6 JsonUtility_FromJson_TisTokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6_mE0BF1ABC4E25C0E45D685BD0DFC55696193AE17B_gshared (String_t* ___json0, const RuntimeMethod* method) ;

// System.String UnityEngine.Application::get_cloudProjectId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_cloudProjectId_m84C5E847485178EEDA2E56E5EF72B0A740453EF9 (const RuntimeMethod* method) ;
// System.String UnityEngine.Analytics.AnalyticsSessionInfo::get_userId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnalyticsSessionInfo_get_userId_m4CD30B7A030EBE80357D1A5FF3836E77E0CFC196 (const RuntimeMethod* method) ;
// System.Int64 UnityEngine.Analytics.AnalyticsSessionInfo::get_sessionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AnalyticsSessionInfo_get_sessionId_m2022F1F0127FBBB17BC8B77CA5FCBEFF3FA2A4CA (const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01 (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_deviceUniqueIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceUniqueIdentifier_m61BA4CB77ADA09730B8B575700D85027EFDB4EFC (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Analytics.DataPrivacy/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mFA2B6204215E65DDA7A904F4B9D16BA3DD469FF3 (U3CU3Ec__DisplayClass9_0_tC28507578ECFB8F4683C878ECD399516AF9B174A* __this, const RuntimeMethod* method) ;
// UnityEngine.Analytics.DataPrivacy/UserPostData UnityEngine.Analytics.DataPrivacy::GetUserData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UserPostData_tBFE90AD10460E3B60B624DAB7F8575FDD6F34511 DataPrivacy_GetUserData_mC20249BD53B847B0E3514121389F5F5DDD9FD96F (const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7 (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UploadHandler::set_contentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_set_contentType_mEFF2D2512996DFFF2BFC013388B702078BDC73F3 (UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Post_mB8907F79799A156087D46500958E06FEEEC509DB (String_t* ___uri0, String_t* ___postData1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Analytics.DataPrivacy::GetUserAgent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataPrivacy_GetUserAgent_mEFA241C1D5A5468B274D9F5E7E3D2B35C36C8185 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.AsyncOperation>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.AsyncOperation::add_completed(System.Action`1<UnityEngine.AsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Analytics.DataPrivacy::getErrorString(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataPrivacy_getErrorString_m04917D5646DB378482EBFCC67B5DEACF73405FE1 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___www0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// T UnityEngine.JsonUtility::FromJson<UnityEngine.Analytics.DataPrivacy/TokenData>(System.String)
inline TokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6 JsonUtility_FromJson_TisTokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6_mE0BF1ABC4E25C0E45D685BD0DFC55696193AE17B (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  TokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6 (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisTokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6_mE0BF1ABC4E25C0E45D685BD0DFC55696193AE17B_gshared)(___json0, method);
}
// System.Void UnityEngine.UI.Button::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button__ctor_m0A1FC265F589989085C1909BC8D93E33A698D8E5 (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89 (String_t* ___url0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Analytics.DataPrivacy::FetchPrivacyUrl(System.Action`1<System.String>,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPrivacy_FetchPrivacyUrl_m0F1CB6E111A355F16589358A202EAD8D4A7DA1E6 (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___success0, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___failure1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RemoteSettings::ForceUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_ForceUpdate_m05A437FF0CB7552AF872FF999106AD795F7A9BEB (const RuntimeMethod* method) ;
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
// UnityEngine.Analytics.DataPrivacy/UserPostData UnityEngine.Analytics.DataPrivacy::GetUserData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UserPostData_tBFE90AD10460E3B60B624DAB7F8575FDD6F34511 DataPrivacy_GetUserData_mC20249BD53B847B0E3514121389F5F5DDD9FD96F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral397656BA4EC7DE25E0F25AE3965CF8CDE8D9E453);
		s_Il2CppMethodInitialized = true;
	}
	UserPostData_tBFE90AD10460E3B60B624DAB7F8575FDD6F34511 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// var postData = new UserPostData
		// {
		//     appid = Application.cloudProjectId,
		//     userid = AnalyticsSessionInfo.userId,
		//     sessionid = AnalyticsSessionInfo.sessionId,
		//     platform = Application.platform.ToString(),
		//     platformid = (UInt32)Application.platform,
		//     sdk_ver = Application.unityVersion,
		//     debug_device = Debug.isDebugBuild,
		//     deviceid = SystemInfo.deviceUniqueIdentifier,
		//     plugin_ver = kVersionString
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(UserPostData_tBFE90AD10460E3B60B624DAB7F8575FDD6F34511));
		String_t* L_0;
		L_0 = Application_get_cloudProjectId_m84C5E847485178EEDA2E56E5EF72B0A740453EF9(NULL);
		(&V_0)->___appid_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___appid_0), (void*)L_0);
		String_t* L_1;
		L_1 = AnalyticsSessionInfo_get_userId_m4CD30B7A030EBE80357D1A5FF3836E77E0CFC196(NULL);
		(&V_0)->___userid_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___userid_1), (void*)L_1);
		int64_t L_2;
		L_2 = AnalyticsSessionInfo_get_sessionId_m2022F1F0127FBBB17BC8B77CA5FCBEFF3FA2A4CA(NULL);
		(&V_0)->___sessionid_2 = L_2;
		int32_t L_3;
		L_3 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		V_1 = L_3;
		Il2CppFakeBox<int32_t> L_4(RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_5;
		L_5 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_4), NULL);
		(&V_0)->___platform_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___platform_3), (void*)L_5);
		int32_t L_6;
		L_6 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		(&V_0)->___platformid_4 = L_6;
		String_t* L_7;
		L_7 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		(&V_0)->___sdk_ver_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___sdk_ver_5), (void*)L_7);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01(NULL);
		(&V_0)->___debug_device_6 = L_8;
		String_t* L_9;
		L_9 = SystemInfo_get_deviceUniqueIdentifier_m61BA4CB77ADA09730B8B575700D85027EFDB4EFC(NULL);
		(&V_0)->___deviceid_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___deviceid_7), (void*)L_9);
		(&V_0)->___plugin_ver_8 = _stringLiteral397656BA4EC7DE25E0F25AE3965CF8CDE8D9E453;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___plugin_ver_8), (void*)_stringLiteral397656BA4EC7DE25E0F25AE3965CF8CDE8D9E453);
		UserPostData_tBFE90AD10460E3B60B624DAB7F8575FDD6F34511 L_10 = V_0;
		// return postData;
		return L_10;
	}
}
// System.String UnityEngine.Analytics.DataPrivacy::GetUserAgent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataPrivacy_GetUserAgent_mEFA241C1D5A5468B274D9F5E7E3D2B35C36C8185 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral397656BA4EC7DE25E0F25AE3965CF8CDE8D9E453);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63FDB2B42E98A1FB9ECC337E74B03FB4E421C6A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral929079632773DFA8E4031711D852B323BB8E14D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	{
		// var message = "UnityPlayer/{0} ({1}/{2}{3} {4})";
		// return String.Format(message,
		//     Application.unityVersion,
		//     Application.platform.ToString(),
		//     (UInt32)Application.platform,
		//     Debug.isDebugBuild ? "-dev" : "",
		//     kVersionString);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2;
		L_2 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		int32_t L_4;
		L_4 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		V_0 = L_4;
		Il2CppFakeBox<int32_t> L_5(RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_6;
		L_6 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_5), NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_3;
		int32_t L_8;
		L_8 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		uint32_t L_9 = ((uint32_t)L_8);
		RuntimeObject* L_10 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01(NULL);
		G_B1_0 = 3;
		G_B1_1 = L_11;
		G_B1_2 = L_11;
		G_B1_3 = _stringLiteral929079632773DFA8E4031711D852B323BB8E14D6;
		if (L_12)
		{
			G_B2_0 = 3;
			G_B2_1 = L_11;
			G_B2_2 = L_11;
			G_B2_3 = _stringLiteral929079632773DFA8E4031711D852B323BB8E14D6;
			goto IL_0046;
		}
	}
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_004b;
	}

IL_0046:
	{
		G_B3_0 = _stringLiteral63FDB2B42E98A1FB9ECC337E74B03FB4E421C6A4;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_004b:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject*)G_B3_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = G_B3_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral397656BA4EC7DE25E0F25AE3965CF8CDE8D9E453);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteral397656BA4EC7DE25E0F25AE3965CF8CDE8D9E453);
		String_t* L_14;
		L_14 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(G_B3_4, L_13, NULL);
		return L_14;
	}
}
// System.String UnityEngine.Analytics.DataPrivacy::getErrorString(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataPrivacy_getErrorString_m04917D5646DB378482EBFCC67B5DEACF73405FE1 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___www0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF05E4C8B879E4DA2B1683F9936B61542BE8F7BF3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// var json = www.downloadHandler.text;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___www0;
		NullCheck(L_0);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_1;
		L_1 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_1, NULL);
		V_0 = L_2;
		// var error = www.error;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3 = ___www0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_3, NULL);
		V_1 = L_4;
		// if (String.IsNullOrEmpty(error))
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		if (!L_6)
		{
			goto IL_0021;
		}
	}
	{
		// error = "Empty response";
		V_1 = _stringLiteralF05E4C8B879E4DA2B1683F9936B61542BE8F7BF3;
	}

IL_0021:
	{
		// if (!String.IsNullOrEmpty(json))
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_7, NULL);
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		// error += ": " + json;
		String_t* L_9 = V_1;
		String_t* L_10 = V_0;
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_9, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, L_10, NULL);
		V_1 = L_11;
	}

IL_0036:
	{
		// return error;
		String_t* L_12 = V_1;
		return L_12;
	}
}
// System.Void UnityEngine.Analytics.DataPrivacy::FetchPrivacyUrl(System.Action`1<System.String>,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPrivacy_FetchPrivacyUrl_m0F1CB6E111A355F16589358A202EAD8D4A7DA1E6 (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___success0, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___failure1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CFetchPrivacyUrlU3Eb__0_m8A8C39F0E05D91A9911C7BCDB9144E0DFB4F6B26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_tC28507578ECFB8F4683C878ECD399516AF9B174A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserPostData_tBFE90AD10460E3B60B624DAB7F8575FDD6F34511_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D897FF10CFE58AED1AE6C3DA7438C6558918D6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_tC28507578ECFB8F4683C878ECD399516AF9B174A* V_0 = NULL;
	String_t* V_1 = NULL;
	UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* V_2 = NULL;
	{
		U3CU3Ec__DisplayClass9_0_tC28507578ECFB8F4683C878ECD399516AF9B174A* L_0 = (U3CU3Ec__DisplayClass9_0_tC28507578ECFB8F4683C878ECD399516AF9B174A*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_tC28507578ECFB8F4683C878ECD399516AF9B174A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass9_0__ctor_mFA2B6204215E65DDA7A904F4B9D16BA3DD469FF3(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass9_0_tC28507578ECFB8F4683C878ECD399516AF9B174A* L_1 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = ___failure1;
		NullCheck(L_1);
		L_1->___failure_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___failure_1), (void*)L_2);
		U3CU3Ec__DisplayClass9_0_tC28507578ECFB8F4683C878ECD399516AF9B174A* L_3 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_4 = ___success0;
		NullCheck(L_3);
		L_3->___success_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___success_2), (void*)L_4);
		// string postJson = JsonUtility.ToJson(GetUserData());
		UserPostData_tBFE90AD10460E3B60B624DAB7F8575FDD6F34511 L_5;
		L_5 = DataPrivacy_GetUserData_mC20249BD53B847B0E3514121389F5F5DDD9FD96F(NULL);
		UserPostData_tBFE90AD10460E3B60B624DAB7F8575FDD6F34511 L_6 = L_5;
		RuntimeObject* L_7 = Box(UserPostData_tBFE90AD10460E3B60B624DAB7F8575FDD6F34511_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_7, NULL);
		V_1 = L_8;
		// byte[] bytes = Encoding.UTF8.GetBytes(postJson);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_9;
		L_9 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_10 = V_1;
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_9, L_10);
		// var uploadHandler = new UploadHandlerRaw(bytes);
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_12 = (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A*)il2cpp_codegen_object_new(UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7(L_12, L_11, NULL);
		V_2 = L_12;
		// uploadHandler.contentType = "application/json";
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_13 = V_2;
		NullCheck(L_13);
		UploadHandler_set_contentType_mEFF2D2512996DFFF2BFC013388B702078BDC73F3(L_13, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, NULL);
		// var www = UnityWebRequest.Post(kTokenUrl, "");
		U3CU3Ec__DisplayClass9_0_tC28507578ECFB8F4683C878ECD399516AF9B174A* L_14 = V_0;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_15;
		L_15 = UnityWebRequest_Post_mB8907F79799A156087D46500958E06FEEEC509DB(_stringLiteral6D897FF10CFE58AED1AE6C3DA7438C6558918D6D, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		NullCheck(L_14);
		L_14->___www_0 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___www_0), (void*)L_15);
		// www.uploadHandler = uploadHandler;
		U3CU3Ec__DisplayClass9_0_tC28507578ECFB8F4683C878ECD399516AF9B174A* L_16 = V_0;
		NullCheck(L_16);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_17 = L_16->___www_0;
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_18 = V_2;
		NullCheck(L_17);
		UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE(L_17, L_18, NULL);
		// www.SetRequestHeader("User-Agent", GetUserAgent());
		U3CU3Ec__DisplayClass9_0_tC28507578ECFB8F4683C878ECD399516AF9B174A* L_19 = V_0;
		NullCheck(L_19);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_20 = L_19->___www_0;
		String_t* L_21;
		L_21 = DataPrivacy_GetUserAgent_mEFA241C1D5A5468B274D9F5E7E3D2B35C36C8185(NULL);
		NullCheck(L_20);
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_20, _stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF, L_21, NULL);
		// var async = www.SendWebRequest();
		U3CU3Ec__DisplayClass9_0_tC28507578ECFB8F4683C878ECD399516AF9B174A* L_22 = V_0;
		NullCheck(L_22);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_23 = L_22->___www_0;
		NullCheck(L_23);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_24;
		L_24 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_23, NULL);
		// async.completed += (AsyncOperation async2) =>
		//     {
		//         var json = www.downloadHandler.text;
		//         if (!String.IsNullOrEmpty(www.error) || String.IsNullOrEmpty(json))
		//         {
		//             var error = getErrorString(www);
		//             if (failure != null)
		//             {
		//                 failure(error);
		//             }
		//         }
		//         else
		//         {
		//             TokenData tokenData;
		//             tokenData.url = ""; // Just to quell "possibly unassigned" error
		//             try
		//             {
		//                 tokenData = JsonUtility.FromJson<TokenData>(json);
		//             }
		//             catch (Exception e)
		//             {
		//                 if (failure != null)
		//                 {
		//                     failure(e.ToString());
		//                 }
		//             }
		// 
		//             success(tokenData.url);
		//         }
		//     };
		U3CU3Ec__DisplayClass9_0_tC28507578ECFB8F4683C878ECD399516AF9B174A* L_25 = V_0;
		Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* L_26 = (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*)il2cpp_codegen_object_new(Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D(L_26, L_25, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CFetchPrivacyUrlU3Eb__0_m8A8C39F0E05D91A9911C7BCDB9144E0DFB4F6B26_RuntimeMethod_var), NULL);
		NullCheck(L_24);
		AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793(L_24, L_26, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Analytics.DataPrivacy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPrivacy__ctor_mAECBAC0B6D09948BF07A5B099129FD68B781C508 (DataPrivacy_t89E770CB5F8373BCD71C32F638200295665C843A* __this, const RuntimeMethod* method) 
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
// Conversion methods for marshalling of: UnityEngine.Analytics.DataPrivacy/UserPostData
IL2CPP_EXTERN_C void UserPostData_tBFE90AD10460E3B60B624DAB7F8575FDD6F34511_marshal_pinvoke(const UserPostData_tBFE90AD10460E3B60B624DAB7F8575FDD6F34511& unmarshaled, UserPostData_tBFE90AD10460E3B60B624DAB7F8575FDD6F34511_marshaled_pinvoke& marshaled)
{
	marshaled.___appid_0 = il2cpp_codegen_marshal_string(unmarshaled.___appid_0);
	marshaled.___userid_1 = il2cpp_codegen_marshal_string(unmarshaled.___userid_1);
	marshaled.___sessionid_2 = unmarshaled.___sessionid_2;
	marshaled.___platform_3 = il2cpp_codegen_marshal_string(unmarshaled.___platform_3);
	marshaled.___platformid_4 = unmarshaled.___platformid_4;
	marshaled.___sdk_ver_5 = il2cpp_codegen_marshal_string(unmarshaled.___sdk_ver_5);
	marshaled.___debug_device_6 = static_cast<int32_t>(unmarshaled.___debug_device_6);
	marshaled.___deviceid_7 = il2cpp_codegen_marshal_string(unmarshaled.___deviceid_7);
	marshaled.___plugin_ver_8 = il2cpp_codegen_marshal_string(unmarshaled.___plugin_ver_8);
}
IL2CPP_EXTERN_C void UserPostData_tBFE90AD10460E3B60B624DAB7F8575FDD6F34511_marshal_pinvoke_back(const UserPostData_tBFE90AD10460E3B60B624DAB7F8575FDD6F34511_marshaled_pinvoke& marshaled, UserPostData_tBFE90AD10460E3B60B624DAB7F8575FDD6F34511& unmarshaled)
{
	unmarshaled.___appid_0 = il2cpp_codegen_marshal_string_result(marshaled.___appid_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___appid_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___appid_0));
	unmarshaled.___userid_1 = il2cpp_codegen_marshal_string_result(marshaled.___userid_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___userid_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___userid_1));
	int64_t unmarshaledsessionid_temp_2 = 0;
	unmarshaledsessionid_temp_2 = marshaled.___sessionid_2;
	unmarshaled.___sessionid_2 = unmarshaledsessionid_temp_2;
	unmarshaled.___platform_3 = il2cpp_codegen_marshal_string_result(marshaled.___platform_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___platform_3), (void*)il2cpp_codegen_marshal_string_result(marshaled.___platform_3));
	uint32_t unmarshaledplatformid_temp_4 = 0;
	unmarshaledplatformid_temp_4 = marshaled.___platformid_4;
	unmarshaled.___platformid_4 = unmarshaledplatformid_temp_4;
	unmarshaled.___sdk_ver_5 = il2cpp_codegen_marshal_string_result(marshaled.___sdk_ver_5);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___sdk_ver_5), (void*)il2cpp_codegen_marshal_string_result(marshaled.___sdk_ver_5));
	bool unmarshaleddebug_device_temp_6 = false;
	unmarshaleddebug_device_temp_6 = static_cast<bool>(marshaled.___debug_device_6);
	unmarshaled.___debug_device_6 = unmarshaleddebug_device_temp_6;
	unmarshaled.___deviceid_7 = il2cpp_codegen_marshal_string_result(marshaled.___deviceid_7);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___deviceid_7), (void*)il2cpp_codegen_marshal_string_result(marshaled.___deviceid_7));
	unmarshaled.___plugin_ver_8 = il2cpp_codegen_marshal_string_result(marshaled.___plugin_ver_8);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___plugin_ver_8), (void*)il2cpp_codegen_marshal_string_result(marshaled.___plugin_ver_8));
}
// Conversion method for clean up from marshalling of: UnityEngine.Analytics.DataPrivacy/UserPostData
IL2CPP_EXTERN_C void UserPostData_tBFE90AD10460E3B60B624DAB7F8575FDD6F34511_marshal_pinvoke_cleanup(UserPostData_tBFE90AD10460E3B60B624DAB7F8575FDD6F34511_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___appid_0);
	marshaled.___appid_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___userid_1);
	marshaled.___userid_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___platform_3);
	marshaled.___platform_3 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___sdk_ver_5);
	marshaled.___sdk_ver_5 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___deviceid_7);
	marshaled.___deviceid_7 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___plugin_ver_8);
	marshaled.___plugin_ver_8 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.Analytics.DataPrivacy/UserPostData
IL2CPP_EXTERN_C void UserPostData_tBFE90AD10460E3B60B624DAB7F8575FDD6F34511_marshal_com(const UserPostData_tBFE90AD10460E3B60B624DAB7F8575FDD6F34511& unmarshaled, UserPostData_tBFE90AD10460E3B60B624DAB7F8575FDD6F34511_marshaled_com& marshaled)
{
	marshaled.___appid_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___appid_0);
	marshaled.___userid_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___userid_1);
	marshaled.___sessionid_2 = unmarshaled.___sessionid_2;
	marshaled.___platform_3 = il2cpp_codegen_marshal_bstring(unmarshaled.___platform_3);
	marshaled.___platformid_4 = unmarshaled.___platformid_4;
	marshaled.___sdk_ver_5 = il2cpp_codegen_marshal_bstring(unmarshaled.___sdk_ver_5);
	marshaled.___debug_device_6 = static_cast<int32_t>(unmarshaled.___debug_device_6);
	marshaled.___deviceid_7 = il2cpp_codegen_marshal_bstring(unmarshaled.___deviceid_7);
	marshaled.___plugin_ver_8 = il2cpp_codegen_marshal_bstring(unmarshaled.___plugin_ver_8);
}
IL2CPP_EXTERN_C void UserPostData_tBFE90AD10460E3B60B624DAB7F8575FDD6F34511_marshal_com_back(const UserPostData_tBFE90AD10460E3B60B624DAB7F8575FDD6F34511_marshaled_com& marshaled, UserPostData_tBFE90AD10460E3B60B624DAB7F8575FDD6F34511& unmarshaled)
{
	unmarshaled.___appid_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___appid_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___appid_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___appid_0));
	unmarshaled.___userid_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___userid_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___userid_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___userid_1));
	int64_t unmarshaledsessionid_temp_2 = 0;
	unmarshaledsessionid_temp_2 = marshaled.___sessionid_2;
	unmarshaled.___sessionid_2 = unmarshaledsessionid_temp_2;
	unmarshaled.___platform_3 = il2cpp_codegen_marshal_bstring_result(marshaled.___platform_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___platform_3), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___platform_3));
	uint32_t unmarshaledplatformid_temp_4 = 0;
	unmarshaledplatformid_temp_4 = marshaled.___platformid_4;
	unmarshaled.___platformid_4 = unmarshaledplatformid_temp_4;
	unmarshaled.___sdk_ver_5 = il2cpp_codegen_marshal_bstring_result(marshaled.___sdk_ver_5);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___sdk_ver_5), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___sdk_ver_5));
	bool unmarshaleddebug_device_temp_6 = false;
	unmarshaleddebug_device_temp_6 = static_cast<bool>(marshaled.___debug_device_6);
	unmarshaled.___debug_device_6 = unmarshaleddebug_device_temp_6;
	unmarshaled.___deviceid_7 = il2cpp_codegen_marshal_bstring_result(marshaled.___deviceid_7);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___deviceid_7), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___deviceid_7));
	unmarshaled.___plugin_ver_8 = il2cpp_codegen_marshal_bstring_result(marshaled.___plugin_ver_8);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___plugin_ver_8), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___plugin_ver_8));
}
// Conversion method for clean up from marshalling of: UnityEngine.Analytics.DataPrivacy/UserPostData
IL2CPP_EXTERN_C void UserPostData_tBFE90AD10460E3B60B624DAB7F8575FDD6F34511_marshal_com_cleanup(UserPostData_tBFE90AD10460E3B60B624DAB7F8575FDD6F34511_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___appid_0);
	marshaled.___appid_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___userid_1);
	marshaled.___userid_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___platform_3);
	marshaled.___platform_3 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___sdk_ver_5);
	marshaled.___sdk_ver_5 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___deviceid_7);
	marshaled.___deviceid_7 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___plugin_ver_8);
	marshaled.___plugin_ver_8 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Analytics.DataPrivacy/TokenData
IL2CPP_EXTERN_C void TokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6_marshal_pinvoke(const TokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6& unmarshaled, TokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6_marshaled_pinvoke& marshaled)
{
	marshaled.___url_0 = il2cpp_codegen_marshal_string(unmarshaled.___url_0);
	marshaled.___token_1 = il2cpp_codegen_marshal_string(unmarshaled.___token_1);
}
IL2CPP_EXTERN_C void TokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6_marshal_pinvoke_back(const TokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6_marshaled_pinvoke& marshaled, TokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6& unmarshaled)
{
	unmarshaled.___url_0 = il2cpp_codegen_marshal_string_result(marshaled.___url_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___url_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___url_0));
	unmarshaled.___token_1 = il2cpp_codegen_marshal_string_result(marshaled.___token_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___token_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___token_1));
}
// Conversion method for clean up from marshalling of: UnityEngine.Analytics.DataPrivacy/TokenData
IL2CPP_EXTERN_C void TokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6_marshal_pinvoke_cleanup(TokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___url_0);
	marshaled.___url_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___token_1);
	marshaled.___token_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.Analytics.DataPrivacy/TokenData
IL2CPP_EXTERN_C void TokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6_marshal_com(const TokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6& unmarshaled, TokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6_marshaled_com& marshaled)
{
	marshaled.___url_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___url_0);
	marshaled.___token_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___token_1);
}
IL2CPP_EXTERN_C void TokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6_marshal_com_back(const TokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6_marshaled_com& marshaled, TokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6& unmarshaled)
{
	unmarshaled.___url_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___url_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___url_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___url_0));
	unmarshaled.___token_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___token_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___token_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___token_1));
}
// Conversion method for clean up from marshalling of: UnityEngine.Analytics.DataPrivacy/TokenData
IL2CPP_EXTERN_C void TokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6_marshal_com_cleanup(TokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___url_0);
	marshaled.___url_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___token_1);
	marshaled.___token_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Analytics.DataPrivacy/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mFA2B6204215E65DDA7A904F4B9D16BA3DD469FF3 (U3CU3Ec__DisplayClass9_0_tC28507578ECFB8F4683C878ECD399516AF9B174A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Analytics.DataPrivacy/<>c__DisplayClass9_0::<FetchPrivacyUrl>b__0(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CFetchPrivacyUrlU3Eb__0_m8A8C39F0E05D91A9911C7BCDB9144E0DFB4F6B26 (U3CU3Ec__DisplayClass9_0_tC28507578ECFB8F4683C878ECD399516AF9B174A* __this, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___async20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisTokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6_mE0BF1ABC4E25C0E45D685BD0DFC55696193AE17B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	TokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var json = www.downloadHandler.text;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___www_0;
		NullCheck(L_0);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_1;
		L_1 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_1, NULL);
		V_0 = L_2;
		// if (!String.IsNullOrEmpty(www.error) || String.IsNullOrEmpty(json))
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3 = __this->___www_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_3, NULL);
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_6, NULL);
		if (!L_7)
		{
			goto IL_004c;
		}
	}

IL_002b:
	{
		// var error = getErrorString(www);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8 = __this->___www_0;
		String_t* L_9;
		L_9 = DataPrivacy_getErrorString_m04917D5646DB378482EBFCC67B5DEACF73405FE1(L_8, NULL);
		V_1 = L_9;
		// if (failure != null)
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_10 = __this->___failure_1;
		if (!L_10)
		{
			goto IL_008e;
		}
	}
	{
		// failure(error);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_11 = __this->___failure_1;
		String_t* L_12 = V_1;
		NullCheck(L_11);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_11, L_12, NULL);
		return;
	}

IL_004c:
	{
		// tokenData.url = ""; // Just to quell "possibly unassigned" error
		(&V_2)->___url_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___url_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
	}
	try
	{// begin try (depth: 1)
		// tokenData = JsonUtility.FromJson<TokenData>(json);
		String_t* L_13 = V_0;
		TokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6 L_14;
		L_14 = JsonUtility_FromJson_TisTokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6_mE0BF1ABC4E25C0E45D685BD0DFC55696193AE17B(L_13, JsonUtility_FromJson_TisTokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6_mE0BF1ABC4E25C0E45D685BD0DFC55696193AE17B_RuntimeMethod_var);
		V_2 = L_14;
		// }
		goto IL_007d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0061;
		}
		throw e;
	}

CATCH_0061:
	{// begin catch(System.Exception)
		{
			// catch (Exception e)
			V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// if (failure != null)
			Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_15 = __this->___failure_1;
			if (!L_15)
			{
				goto IL_007b;
			}
		}
		{
			// failure(e.ToString());
			Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_16 = __this->___failure_1;
			Exception_t* L_17 = V_3;
			NullCheck(L_17);
			String_t* L_18;
			L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
			NullCheck(L_16);
			Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_16, L_18, NULL);
		}

IL_007b:
		{
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_007d;
		}
	}// end catch (depth: 1)

IL_007d:
	{
		// success(tokenData.url);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_19 = __this->___success_2;
		TokenData_tD63689F856275EEDAB7EFB3EA5FF41C26E7FD7B6 L_20 = V_2;
		String_t* L_21 = L_20.___url_0;
		NullCheck(L_19);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_19, L_21, NULL);
	}

IL_008e:
	{
		// };
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
// System.Void UnityEngine.Analytics.DataPrivacyButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPrivacyButton__ctor_mB98782337F11493F10595A57ED6F51200DE4D857 (DataPrivacyButton_tAC1F51193967F462A13D0345B0D232A8EB74E95E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataPrivacyButton_OpenDataPrivacyUrl_m987477882B2CB5261507ED52038C64BEE0A1E421_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DataPrivacyButton()
		Button__ctor_m0A1FC265F589989085C1909BC8D93E33A698D8E5(__this, NULL);
		// onClick.AddListener(OpenDataPrivacyUrl);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0;
		L_0 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(__this, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_1 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_1, __this, (intptr_t)((void*)DataPrivacyButton_OpenDataPrivacyUrl_m987477882B2CB5261507ED52038C64BEE0A1E421_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Analytics.DataPrivacyButton::OnFailure(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPrivacyButton_OnFailure_mE421E815E33CFC22140AAF9940CD81D0EDAE852F (DataPrivacyButton_tAC1F51193967F462A13D0345B0D232A8EB74E95E* __this, String_t* ___reason0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FBB5FB40CBBD5DA86403E50B9C2950D19EDCF83);
		s_Il2CppMethodInitialized = true;
	}
	{
		// interactable = true;
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(__this, (bool)1, NULL);
		// Debug.LogWarning(String.Format("Failed to get data privacy url: {0}", reason));
		String_t* L_0 = ___reason0;
		String_t* L_1;
		L_1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral9FBB5FB40CBBD5DA86403E50B9C2950D19EDCF83, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Analytics.DataPrivacyButton::OpenUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPrivacyButton_OpenUrl_m965D22C79AD57A5580997D57D2072384A330D730 (DataPrivacyButton_tAC1F51193967F462A13D0345B0D232A8EB74E95E* __this, String_t* ___url0, const RuntimeMethod* method) 
{
	{
		// interactable = true;
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(__this, (bool)1, NULL);
		// urlOpened = true;
		__this->___urlOpened_21 = (bool)1;
		// Application.OpenURL(url);
		String_t* L_0 = ___url0;
		Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Analytics.DataPrivacyButton::OpenDataPrivacyUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPrivacyButton_OpenDataPrivacyUrl_m987477882B2CB5261507ED52038C64BEE0A1E421 (DataPrivacyButton_tAC1F51193967F462A13D0345B0D232A8EB74E95E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataPrivacyButton_OnFailure_mE421E815E33CFC22140AAF9940CD81D0EDAE852F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataPrivacyButton_OpenUrl_m965D22C79AD57A5580997D57D2072384A330D730_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// interactable = false;
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(__this, (bool)0, NULL);
		// DataPrivacy.FetchPrivacyUrl(OpenUrl, OnFailure);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_0, __this, (intptr_t)((void*)DataPrivacyButton_OpenUrl_m965D22C79AD57A5580997D57D2072384A330D730_RuntimeMethod_var), NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_1, __this, (intptr_t)((void*)DataPrivacyButton_OnFailure_mE421E815E33CFC22140AAF9940CD81D0EDAE852F_RuntimeMethod_var), NULL);
		DataPrivacy_FetchPrivacyUrl_m0F1CB6E111A355F16589358A202EAD8D4A7DA1E6(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Analytics.DataPrivacyButton::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPrivacyButton_OnApplicationFocus_mCF51120AD53869596C67323A93537DFFDA8558FA (DataPrivacyButton_tAC1F51193967F462A13D0345B0D232A8EB74E95E* __this, bool ___hasFocus0, const RuntimeMethod* method) 
{
	{
		// if (hasFocus && urlOpened)
		bool L_0 = ___hasFocus0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = __this->___urlOpened_21;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// urlOpened = false;
		__this->___urlOpened_21 = (bool)0;
		// RemoteSettings.ForceUpdate();
		RemoteSettings_ForceUpdate_m05A437FF0CB7552AF872FF999106AD795F7A9BEB(NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
