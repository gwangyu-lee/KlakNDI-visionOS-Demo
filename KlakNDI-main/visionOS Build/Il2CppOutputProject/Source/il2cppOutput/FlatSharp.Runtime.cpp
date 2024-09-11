#include "pch-cpp.hpp"

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
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
struct FinalizationHelper_t6A7EE58097989550DC3D66D88F72696041214C2E;
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
struct Func_1_tBBC90CF9AFB875F8983669DF095BABF81040D7B8;
struct IdManager_t728666C8957101D56A73E17AF80A7E8342FDCDD2;
struct LinkedSlot_t2B112B3DADBCD80198FFCD115DC350A85E03FD88;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_t27B768AC089986FAE389AC96023E04AFE9D70345;
struct ThreadLocal_1_t0A6D0A6BF9E4E91F90BDE2B21EA8B16C622BFEAD;
struct ThreadLocal_1_t3388F8171818211101296675E793A2D98611E503;
struct LinkedSlotVolatileU5BU5D_t133F47F9AF70086A2DE06B4C31AECE4E5EBB8622;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct PostSerializeActionU5BU5D_tB6F922E6043056E182E7A475A5534A711B158AC1;
struct WriteCacheEntryU5BU5D_t08976F7D99C9C7774BF844284EDCF0EFEA4827B3;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct BufferTooSmallException_tE059BE36152522CE8BFF8A31EC58DB76298A95F4;
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EmbeddedAttribute_t81ACDE3308B60AFC81C37BDDD8C35230776FFE5E;
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct Exception_t;
struct FlatBufferEnumAttribute_tA3A8E1AB4B5B8C6A3F847CF356A39388821772E3;
struct FlatBufferItemAttribute_t4590267358F6B47FF669BA8EFFCE1BF210AF67D7;
struct FlatBufferMetadataAttribute_t7720FBAA30BEDCC9739D240B0503C792217BFE74;
struct FlatBufferStructAttribute_t984D41F40D0116E24CEFBD1E2503F3229A8C1EAA;
struct FlatBufferTableAttribute_t70CF5AC81692EB1E82AD7DF51DF1682134689794;
struct FlatSharpInternalException_t582A03DA9A8F1C29DF1CCDA3DAEC2EC0CADC1877;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct ISharedStringWriter_t03B56AEECAEA15AAC79D4C2544629ECADD214378;
struct InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct IsUnmanagedAttribute_tFA828FA80698273AD8BDEB182C1F698A6D8042A1;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NativeIntegerAttribute_t4F3670ABA66D219D12CC2BF8698D43ACBBFCF757;
struct NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3;
struct NullableAttribute_t202B8DE841520D20906BCFFB35ACE850BF9F009D;
struct NullableContextAttribute_tC1D6D6F3F65188A7A3FD39A3C077E1663D195C41;
struct RefSafetyRulesAttribute_tFAE6213660C59C554397D49B556E890C2BC88CED;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8;
struct SharedStringWriter_tC8125A04EB9B588A00E05949A87D8BBE1E3DE690;
struct String_t;
struct TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED;
struct Type_t;
struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132;
struct MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019;
struct MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB;
struct U3CU3Ec_t18E4CC5A0F6B97FF95D258EE3B9580BECEFBD239;
struct PostSerializeAction_t24986B772136F5445F4DDACD441710C972B014E6;
struct UTF8EncodingSealed_tF97A34F40CABE9CE1C168967D60396F51C43DD36;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BufferTooSmallException_tE059BE36152522CE8BFF8A31EC58DB76298A95F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FlatSharpInternalException_t582A03DA9A8F1C29DF1CCDA3DAEC2EC0CADC1877_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tBBC90CF9AFB875F8983669DF095BABF81040D7B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t27B768AC089986FAE389AC96023E04AFE9D70345_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPool_t7B559096B246CD2C2556FDEB0EAC2276896FE497_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationHelpers_t6B4CA19FBCA6530D0EA7619C289F98186436D4DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadLocal_1_t3388F8171818211101296675E793A2D98611E503_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t18E4CC5A0F6B97FF95D258EE3B9580BECEFBD239_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WriteCacheEntryU5BU5D_t08976F7D99C9C7774BF844284EDCF0EFEA4827B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral044D821692202A1093103505D65C44608093EA38;
IL2CPP_EXTERN_C String_t* _stringLiteral0AFA6FBF40798D231134E3D4E604368A88587B8D;
IL2CPP_EXTERN_C String_t* _stringLiteral0FFA6B73394079E103E54D5D25F19DF4EAC7985A;
IL2CPP_EXTERN_C String_t* _stringLiteral208C4FF0AD572EE9C8497508B814F02C8C8CADB5;
IL2CPP_EXTERN_C String_t* _stringLiteral2A985F0896AE66204545A5EE47F76FBD22AC0D99;
IL2CPP_EXTERN_C String_t* _stringLiteral2D0803957DB1AD222FA7468A71A7B4D9B446975A;
IL2CPP_EXTERN_C String_t* _stringLiteral6026C236576EF7497E64A6509FBD52A322838D8B;
IL2CPP_EXTERN_C String_t* _stringLiteral72C99E8901458D21B629558BBEFF75E1AE98D5F8;
IL2CPP_EXTERN_C String_t* _stringLiteralB1EE3EFCBE7281AC46640126CB00EC710251A257;
IL2CPP_EXTERN_C String_t* _stringLiteralBA25869D243676A5E02614C1D63A7E7D7E97624C;
IL2CPP_EXTERN_C String_t* _stringLiteralBAD6318B5E5BFC109A7426FE409578C7D1B86788;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlatSharpInternal_AssertLittleEndian_m081A518A971D65938BCB69ECD048E08D84135751_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlatSharpInternal_ThrowAssertFailed_m08FF69C55D973A7E704FFC306689774D91077B57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ISharedStringWriter_FlushWrites_TisSpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB_m3C8AF02DC38DAA9B4DC4B0A63FACDFEA14E3AFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputBufferExtensions_ThrowInvalidVtableException_mF0B26A1F6EECE4030EAB9F1940A256AA2B9EAB35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputBufferExtensions_ThrowUOffsetLessThanMinimumException_mFB1BF22CE762CE8BD8B7159538B383217AFE481D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m8B230FBF8A4EFC492FE21823E487E2F52DBE2F8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6C7F9D5295A0F6F1D9A9EA6F710012EDC72E849C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m318592409A425596B36D48B3FE209C2F8DD53BBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFFD5464C4B443B9EF1223A071F800F55E30B8AA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryExtensions_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEFFCB2E665C23D1B7B12CA86B0BB0A5680004DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3371E1C3FCD5027463EFFC4C6F31FE983579F335_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m610B098B008105D72394F56BF309D3A9F0F12ABC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA9F67C05F53E72F623261F3811072B33F3B522EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Read_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE522E06A28DD43DAED8B42666149274B433F5317_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m56C749731FAD055AC5894D97F107FF8E5C6A13AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Read_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4B7CEC36F79FB7BE35EB5ADC5B3F9B03A427FAD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Write_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m433300E1EAC29F2055D3E28298B3E33AA41629C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Write_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEF660B60FA28FE8C12E8B08463FBB2E302DBF3D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Write_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m16D93984D1D3FD0F0742D660AAB4626FF45A1C50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Write_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1CB9CA69ED7F15E1AED66F7E98D918E1DF0CB96A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m2BD505F8011143B77CB9A048F4C97C64130CB6DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_Write_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m369E3011D17AFC47FE8EBD775DA05E3F136D3EA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyMemoryInputBuffer_GetSpan_m9807C4808301D524E529AF4F4BD6383A56C9A176_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyMemory_1_get_Length_m2E20B5DC76A91D078F8827624C654EB90EFD5392_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_op_Implicit_m48A199CEDDD841168C5A680589A3C8AB9E61C128_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializationContext_AllocateSpace_mE037A7DC50D641E02A3710BAC31B8567B0095CAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializationContext_AllocateVector_m8410EE60C2BF058697669A6E35BC7A05D948ADBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializationContext_FinishVTable_m46D4622DAC23B615B0CA62BE807FAF079F30EB12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializationHelpers_GetMaxSize_m34C550D4375E690D3736C7577359A7B79E6B9F47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializationHelpers_ThrowNonNullException_m97DA93AFF00A194067AB3784C65636D11AF46D36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SharedStringWriter__ctor_m353639F69E99F1A495E768A2EA8ADF616C9254A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_m1C77B8E0782305F18B37839AF212ACD631E09AE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadLocal_1__ctor_mDEE379223752F62AA7CD1A6D98D13C783784B72D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__21_0_mC5EE893893D64A0F4C74704610CD0C42E4EC9A83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct WriteCacheEntryU5BU5D_t08976F7D99C9C7774BF844284EDCF0EFEA4827B3;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t66118FCBC58B57ADE73450816AE1D94C7B2FCB81 
{
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t27B768AC089986FAE389AC96023E04AFE9D70345  : public RuntimeObject
{
	PostSerializeActionU5BU5D_tB6F922E6043056E182E7A475A5534A711B158AC1* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E  : public RuntimeObject
{
};
struct ThreadLocal_1_t3388F8171818211101296675E793A2D98611E503  : public RuntimeObject
{
	Func_1_tBBC90CF9AFB875F8983669DF095BABF81040D7B8* ___m_valueFactory;
	int32_t ___m_idComplement;
	bool ___m_initialized;
	LinkedSlot_t2B112B3DADBCD80198FFCD115DC350A85E03FD88* ___m_linkedSlot;
	bool ___m_trackAllValues;
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27  : public RuntimeObject
{
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	int32_t ___m_codePage;
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem;
	bool ___m_deserializedFromEverett;
	bool ___m_isReadOnly;
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback;
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback;
};
struct FlatSharpInternal_tEC76546021E3D5859CA959842FEE5AA5000B18EA  : public RuntimeObject
{
};
struct ISerializerExtensions_t2B7FBBFE43E0AFAA9FA938F0C75FE9ABCF0B5F79  : public RuntimeObject
{
};
struct InputBufferExtensions_tBEF67420C5B902DAEE6BB9EDF9B75F0CED75BEFF  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct ObjectPool_t7B559096B246CD2C2556FDEB0EAC2276896FE497  : public RuntimeObject
{
};
struct ObjectPoolDisposalState_t07B94B8535CCF007D0C59D59372A2B7E1E15789E  : public RuntimeObject
{
};
struct ScalarSpanReader_t0C6AA07FC8FB90B48940FF14A463DB153FFFD67B  : public RuntimeObject
{
};
struct SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8  : public RuntimeObject
{
	int32_t ___offset;
	int32_t ___capacity;
	List_1_t27B768AC089986FAE389AC96023E04AFE9D70345* ___postSerializeActions;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___vtableOffsets;
	RuntimeObject* ___U3CSharedStringWriterU3Ek__BackingField;
};
struct SerializationHelpers_t6B4CA19FBCA6530D0EA7619C289F98186436D4DD  : public RuntimeObject
{
};
struct SharedStringWriter_tC8125A04EB9B588A00E05949A87D8BBE1E3DE690  : public RuntimeObject
{
	WriteCacheEntryU5BU5D_t08976F7D99C9C7774BF844284EDCF0EFEA4827B3* ___sharedStringOffsetCache;
	bool ___U3CIsDirtyU3Ek__BackingField;
};
struct SpanWriterExtensions_t12CB0E3B5697C6AC934096FE1584664CBA9E00B6  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED  : public RuntimeObject
{
	String_t* ___FullName;
	bool ___SharedString;
	bool ___WriteThrough;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct VectorCloneHelpers_tA73A79FFFC5E4B0C88F7989E76F0BD78D191595F  : public RuntimeObject
{
};
struct U3CU3Ec_t18E4CC5A0F6B97FF95D258EE3B9580BECEFBD239  : public RuntimeObject
{
};
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array;
	int32_t ____offset;
	int32_t ____count;
};
struct Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	bool ___hasValue;
	int32_t ___value;
};
struct ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___memory;
};
struct ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_marshaled_pinvoke
{
	Il2CppSafeArray* ___memory;
};
struct ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_marshaled_com
{
	Il2CppSafeArray* ___memory;
};
struct ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562 
{
	ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* ___pointer;
};
struct ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_marshaled_pinvoke
{
	ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* ___pointer;
};
struct ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_marshaled_com
{
	ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* ___pointer;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct EmbeddedAttribute_t81ACDE3308B60AFC81C37BDDD8C35230776FFE5E  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct FlatBufferEnumAttribute_tA3A8E1AB4B5B8C6A3F847CF356A39388821772E3  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	Type_t* ___U3CDeclaredUnderlyingTypeU3Ek__BackingField;
};
struct FlatBufferItemAttribute_t4590267358F6B47FF669BA8EFFCE1BF210AF67D7  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	uint16_t ___U3CIndexU3Ek__BackingField;
	bool ___U3CRequiredU3Ek__BackingField;
};
struct FlatBufferTableAttribute_t70CF5AC81692EB1E82AD7DF51DF1682134689794  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct GeneratedSerializerParseArguments_tA62665BC0CD65EF69B688A96B836271FD900BBBC 
{
	int32_t ___U3COffsetU3Ek__BackingField;
	int16_t ___U3CDepthLimitU3Ek__BackingField;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct IsUnmanagedAttribute_tFA828FA80698273AD8BDEB182C1F698A6D8042A1  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C 
{
	MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* ___pointer;
};
struct MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_marshaled_pinvoke
{
	MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* ___pointer;
};
struct MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_marshaled_com
{
	MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* ___pointer;
};
struct NativeIntegerAttribute_t4F3670ABA66D219D12CC2BF8698D43ACBBFCF757  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___TransformFlags;
};
struct NullableAttribute_t202B8DE841520D20906BCFFB35ACE850BF9F009D  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___NullableFlags;
};
struct NullableContextAttribute_tC1D6D6F3F65188A7A3FD39A3C077E1663D195C41  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	uint8_t ___Flag;
};
struct ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 
{
	MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* ___pointer;
};
struct ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_marshaled_pinvoke
{
	MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* ___pointer;
};
struct ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_marshaled_com
{
	MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* ___pointer;
};
struct RefSafetyRulesAttribute_tFAE6213660C59C554397D49B556E890C2BC88CED  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	int32_t ___Version;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB 
{
	union
	{
		struct
		{
		};
		uint8_t SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB__padding[1];
	};
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
};
struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE  : public Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095
{
	bool ____emitUTF8Identifier;
	bool ____isThrowException;
};
#pragma pack(push, tp, 1)
struct VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint16_t ___offset0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint16_t ___offset0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2_OffsetPadding[2];
					uint16_t ___offset2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2_OffsetPadding_forAlignmentOnly[2];
					uint16_t ___offset2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4_OffsetPadding[4];
					uint16_t ___offset4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4_OffsetPadding_forAlignmentOnly[4];
					uint16_t ___offset4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset6_OffsetPadding[6];
					uint16_t ___offset6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset6_OffsetPadding_forAlignmentOnly[6];
					uint16_t ___offset6_forAlignmentOnly;
				};
			};
		};
		uint8_t VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42__padding[8];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint16_t ___offset0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint16_t ___offset0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2_OffsetPadding[2];
					uint16_t ___offset2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2_OffsetPadding_forAlignmentOnly[2];
					uint16_t ___offset2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4_OffsetPadding[4];
					uint16_t ___offset4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4_OffsetPadding_forAlignmentOnly[4];
					uint16_t ___offset4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset6_OffsetPadding[6];
					uint16_t ___offset6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset6_OffsetPadding_forAlignmentOnly[6];
					uint16_t ___offset6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset8_OffsetPadding[8];
					uint16_t ___offset8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset8_OffsetPadding_forAlignmentOnly[8];
					uint16_t ___offset8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset10_OffsetPadding[10];
					uint16_t ___offset10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset10_OffsetPadding_forAlignmentOnly[10];
					uint16_t ___offset10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset12_OffsetPadding[12];
					uint16_t ___offset12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset12_OffsetPadding_forAlignmentOnly[12];
					uint16_t ___offset12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset14_OffsetPadding[14];
					uint16_t ___offset14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset14_OffsetPadding_forAlignmentOnly[14];
					uint16_t ___offset14_forAlignmentOnly;
				};
			};
		};
		uint8_t VTable8_t16767E6A452F79A47F1BE274D9282A4E34039A67__padding[16];
	};
};
#pragma pack(pop, tp)
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
struct FloatLayout_tE533D6E84874B88011CA98CFF136647D72B8E5C6 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___bytes;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___bytes_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___value;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___value_forAlignmentOnly;
		};
	};
};
struct WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE 
{
	String_t* ___String;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___Offsets;
};
struct WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE_marshaled_pinvoke
{
	char* ___String;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___Offsets;
};
struct WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE_marshaled_com
{
	Il2CppChar* ___String;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___Offsets;
};
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	intptr_t ____value;
};
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	intptr_t ____value;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct FlatBufferDeserializationOption_tB957A515173AD5B19DF2CBBD617732622867EA06 
{
	int32_t ___value__;
};
struct FlatBufferMetadataKind_tE56941079FFDF0CA82FABFA01ECB6F851A809FD6 
{
	int32_t ___value__;
};
struct MemoryMarshalBehavior_tA19CC46C3DD5EE469B3570FB4E7A18270C1B1FD7 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct VTableGeneric_t51932C12066E5B22C20516B9E0253EC4A351BC25 
{
	int32_t ___offset;
	uintptr_t ___count;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132  : public RuntimeObject
{
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___segment;
};
struct MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019  : public RuntimeObject
{
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___memory;
	bool ___isPinned;
};
struct MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB  : public RuntimeObject
{
	ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___memory;
	bool ___isPinned;
};
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct BufferTooSmallException_tE059BE36152522CE8BFF8A31EC58DB76298A95F4  : public Exception_t
{
	int32_t ___U3CSizeNeededU3Ek__BackingField;
};
struct FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 
{
	int32_t ___U3CDeserializationOptionU3Ek__BackingField;
};
struct FlatBufferMetadataAttribute_t7720FBAA30BEDCC9739D240B0503C792217BFE74  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	String_t* ___U3CValueU3Ek__BackingField;
	int32_t ___U3CKindU3Ek__BackingField;
};
struct FlatBufferStructAttribute_t984D41F40D0116E24CEFBD1E2503F3229A8C1EAA  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	int32_t ___U3CMemoryMarshalBehaviorU3Ek__BackingField;
};
struct FlatSharpInternalException_t582A03DA9A8F1C29DF1CCDA3DAEC2EC0CADC1877  : public Exception_t
{
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3  : public Exception_t
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Func_1_tBBC90CF9AFB875F8983669DF095BABF81040D7B8  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct PostSerializeAction_t24986B772136F5445F4DDACD441710C972B014E6  : public MulticastDelegate_t
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_t27B768AC089986FAE389AC96023E04AFE9D70345_StaticFields
{
	PostSerializeActionU5BU5D_tB6F922E6043056E182E7A475A5534A711B158AC1* ___s_emptyArray;
};
struct ThreadLocal_1_t3388F8171818211101296675E793A2D98611E503_StaticFields
{
	IdManager_t728666C8957101D56A73E17AF80A7E8342FDCDD2* ___s_idManager;
};
struct ThreadLocal_1_t3388F8171818211101296675E793A2D98611E503_ThreadStaticFields
{
	LinkedSlotVolatileU5BU5D_t133F47F9AF70086A2DE06B4C31AECE4E5EBB8622* ___ts_slotArray;
	FinalizationHelper_t6A7EE58097989550DC3D66D88F72696041214C2E* ___ts_finalizationHelper;
};
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields
{
	bool ___IsLittleEndian;
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding;
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings;
	RuntimeObject* ___s_InternalSyncObject;
};
struct ObjectPool_t7B559096B246CD2C2556FDEB0EAC2276896FE497_StaticFields
{
	int32_t ___U3CMaxToRetainU3Ek__BackingField;
};
struct SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8_StaticFields
{
	ThreadLocal_1_t3388F8171818211101296675E793A2D98611E503* ___ThreadLocalContext;
};
struct SerializationHelpers_t6B4CA19FBCA6530D0EA7619C289F98186436D4DD_StaticFields
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___Encoding;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct U3CU3Ec_t18E4CC5A0F6B97FF95D258EE3B9580BECEFBD239_StaticFields
{
	U3CU3Ec_t18E4CC5A0F6B97FF95D258EE3B9580BECEFBD239* ___U3CU3E9;
};
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_StaticFields
{
	UTF8EncodingSealed_tF97A34F40CABE9CE1C168967D60396F51C43DD36* ___s_default;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_preamble;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
struct WriteCacheEntryU5BU5D_t08976F7D99C9C7774BF844284EDCF0EFEA4827B3  : public RuntimeArray
{
	ALIGN_FIELD (8) WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE m_Items[1];

	inline WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___String), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Offsets), (void*)NULL);
		#endif
	}
	inline WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___String), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Offsets), (void*)NULL);
		#endif
	}
};
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_gshared_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_segment, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_op_Implicit_m48A199CEDDD841168C5A680589A3C8AB9E61C128_gshared (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_segment, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_op_Implicit_m1C77B8E0782305F18B37839AF212ACD631E09AE2_gshared (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_segment, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_gshared (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyMemory_1_get_Length_m2E20B5DC76A91D078F8827624C654EB90EFD5392_gshared (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_gshared_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MemoryExtensions_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEFFCB2E665C23D1B7B12CA86B0BB0A5680004DC_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___1_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadLocal_1__ctor_mCD5FA1833EFC84CB7F38DEC8AB92B84CC4116BE2_gshared (ThreadLocal_1_t0A6D0A6BF9E4E91F90BDE2B21EA8B16C622BFEAD* __this, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___0_valueFactory, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1CB9CA69ED7F15E1AED66F7E98D918E1DF0CB96A_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, uint16_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m433300E1EAC29F2055D3E28298B3E33AA41629C8_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, int16_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m2BD505F8011143B77CB9A048F4C97C64130CB6DB_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, uint32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEF660B60FA28FE8C12E8B08463FBB2E302DBF3D6_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, int32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m369E3011D17AFC47FE8EBD775DA05E3F136D3EA3_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, uint64_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m16D93984D1D3FD0F0742D660AAB4626FF45A1C50_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, int64_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t MemoryMarshal_Read_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE522E06A28DD43DAED8B42666149274B433F5317_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t MemoryMarshal_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3371E1C3FCD5027463EFFC4C6F31FE983579F335_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m56C749731FAD055AC5894D97F107FF8E5C6A13AE_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MemoryMarshal_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m610B098B008105D72394F56BF309D3A9F0F12ABC_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t MemoryMarshal_Read_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4B7CEC36F79FB7BE35EB5ADC5B3F9B03A427FAD0_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t MemoryMarshal_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA9F67C05F53E72F623261F3811072B33F3B522EA_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MemoryExtensions_IsTypeComparableAsBytes_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mFEF14F6D259CEA196C71A21BCB83EBC94ABB3FFA_gshared_inline (uint64_t* ___0_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mFD8AD32B5F2EBF9489593A1FA99B57E7764E6735_gshared (uint8_t* ___0_first, uint8_t* ___1_second, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlatBufferDeserializationContext__ctor_mCE64F5AA052E21BEA0998F0E00BEA24AE3A1C590_inline (FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9* __this, int32_t ___0_deserializationOption, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayInputBuffer_get_IsPinned_m432D9A8B615DA39CDBBD304AAB0F8FD4D1FB954E (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayInputBuffer_get_Length_mBCB782DB796615B897C06FBB8BF28FEA56EB9934 (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, const RuntimeMethod* method) ;
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_gshared_inline)(___0_array, method);
}
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, int32_t, const RuntimeMethod*))Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline)(__this, ___0_start, method);
}
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84 (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_gshared)(___0_span, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ScalarSpanReader_ReadByte_m1075027AAC4CD98D86A85CD284489B586B69EC7A_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ArrayInputBuffer_ReadByte_m74E87606AA17E0FFFCB1FD34F4D25096A27F169C_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t ScalarSpanReader_ReadSByte_mDCDF03A71770C9116EFF00C89E5FB1B6E8169BBB_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t ArrayInputBuffer_ReadSByte_m09BCC49B001681DE7D3A1D3E902B61FCAEC52F04_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ScalarSpanReader_ReadUShort_m327796534738A7AF6BC3FA7A8838AC0427076483_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ArrayInputBuffer_ReadUShort_m88F1A806D08427132A221D6446FC3C314E201888_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t ScalarSpanReader_ReadShort_mF811261B1B8D3E2F468440430FDFB3116A8411AF_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t ArrayInputBuffer_ReadShort_mCE5A0DB0CB702F2F82800B7CBDD3AEE1DDBAFDB2_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ScalarSpanReader_ReadUInt_m5A2AA7E6CF46CE633A8F4CC1ABDE9E465C37A948_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ArrayInputBuffer_ReadUInt_m83E360B2D464701419F0D5069DF285DA834D2113_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScalarSpanReader_ReadInt_mE9DF8741A87BC7857ED46834E76D7AE354FCCFF1_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArrayInputBuffer_ReadInt_m8798ED218FA815A8FA0FAF9B47D6FDFA056F0AD0_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ScalarSpanReader_ReadULong_m6EE8443BA6A3D6E60DB079A1614B1437470450B3_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ArrayInputBuffer_ReadULong_m6F115B2AFD0E8DC9E16DF24B4D0B70AFA8757334_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ScalarSpanReader_ReadLong_m43F728FDBAA68DAE3FB9034156AC1BDC51312FD1_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ArrayInputBuffer_ReadLong_m283D051B53D017F491B08AB46FFE27D6F0A05346_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ScalarSpanReader_ReadFloat_m32F827D9BF154056E0D037EBF64A022D78946EDA_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ArrayInputBuffer_ReadFloat_m9B0FF87A5566AC4B5C07F53D1E0125E9DEFCD2DD_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ScalarSpanReader_ReadDouble_m61D5C204BA9E81DA538C2A4489E038F5A5310A01_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ArrayInputBuffer_ReadDouble_mE49F23F20EE13B5CB2232C1E097344E7C21CBDD1_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, int32_t, int32_t, const RuntimeMethod*))Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared_inline)(__this, ___0_start, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ScalarSpanReader_ReadString_m3BCFF4018AAEB11379DF79D99125EFC2F8A564A7_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_encoding, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ArrayInputBuffer_ReadString_m82A09E526BADBC7DEC84E7D73EAC51A6327491E8_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, int32_t ___1_byteLength, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_encoding, const RuntimeMethod* method) ;
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_gshared)(___0_array, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ArrayInputBuffer_GetReadOnlySpan_m320ED7EBDE610A64E2ABEB8080519D91C9FD21FE_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, const RuntimeMethod* method) ;
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_gshared)(___0_array, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ArrayInputBuffer_GetSpan_m72708F5F93A279BE3AC8C4A5B2BB7BD3969A28DD_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArraySegmentInputBuffer_get_IsPinned_mF7B25B4F3A00477049F9CD81A71B84C9C871B75C (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, const RuntimeMethod* method) ;
inline int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySegmentInputBuffer_get_Length_m99EDA79ED5DBD18BA92470D0D8A6DB2AD82C30E3 (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, const RuntimeMethod* method) ;
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_segment, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, const RuntimeMethod*))MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_gshared_inline)(___0_segment, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ArraySegmentInputBuffer_ReadByte_m7E37513F3F57E08FCFDAA753AF11120EFC8AF818_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t ArraySegmentInputBuffer_ReadSByte_m9C2A6B1AAFC3AEF9CEBCBEE4CE92B2BA154BB93E_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ArraySegmentInputBuffer_ReadUShort_mE4C77EEA5D3D9AC6F73F6419850EC9D4DE92D1CA_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t ArraySegmentInputBuffer_ReadShort_m880A3A21EDEC280A3DA7D7054CD0F8561F1E5C58_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ArraySegmentInputBuffer_ReadUInt_mEE74C1FC1AAE0AFF3DD00922FD2CB889C367E8A7_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegmentInputBuffer_ReadInt_m4F323987A5C2D1F29D8A6CD37E259EBC50306C0F_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ArraySegmentInputBuffer_ReadULong_m8574AF1F6ED1AB9006C497C6ECA1835502C7E836_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ArraySegmentInputBuffer_ReadLong_mD4CD75A94CF698300B50E7E0679EDEE1AFDC05BA_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ArraySegmentInputBuffer_ReadFloat_m06E15A309EA25FC6EF488FA845130DA282612254_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ArraySegmentInputBuffer_ReadDouble_m062ADB6C0500D3D3E67012381AA599426450365F_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ArraySegmentInputBuffer_ReadString_mC26F768826139BEBB789EE2BF27E73952EDBBEE3_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, int32_t ___1_byteLength, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_encoding, const RuntimeMethod* method) ;
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_op_Implicit_m48A199CEDDD841168C5A680589A3C8AB9E61C128 (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_segment, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, const RuntimeMethod*))ReadOnlySpan_1_op_Implicit_m48A199CEDDD841168C5A680589A3C8AB9E61C128_gshared)(___0_segment, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ArraySegmentInputBuffer_GetReadOnlySpan_m3A095A2CB4F5D3EA5A46D752EE4EFE9E1ABE72D6_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, const RuntimeMethod* method) ;
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_op_Implicit_m1C77B8E0782305F18B37839AF212ACD631E09AE2 (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_segment, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, const RuntimeMethod*))Span_1_op_Implicit_m1C77B8E0782305F18B37839AF212ACD631E09AE2_gshared)(___0_segment, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ArraySegmentInputBuffer_GetSpan_m46A8AF8426BFB7C5B7433F0F31FAA7022B181095_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryInputBuffer_get_IsPinned_mF8F1547CA4201417CDC0322BC674230A3D79D34D (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, const RuntimeMethod* method) ;
inline int32_t Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714 (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*, const RuntimeMethod*))Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MemoryInputBuffer_get_Length_mDCC29A6C6733C644F995358E0F459B93BA072053_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, const RuntimeMethod* method) ;
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*, const RuntimeMethod*))Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t MemoryInputBuffer_ReadByte_mAE61AEAC2D8D4A8F0284B1F2A02ABF9ADD16819F_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t MemoryInputBuffer_ReadSByte_mCBECC514B84B07D133A095893D14F1A89E10933B_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t MemoryInputBuffer_ReadUShort_m1546FF5B687CB6826A21C6D93E6F10FD82942BF3_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t MemoryInputBuffer_ReadShort_mE6F02BDFB8AA45B54993EB04581EF3284B186B5A_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MemoryInputBuffer_ReadUInt_mE5BFC176016B8B284F46D972723ADE80B1C57D88_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MemoryInputBuffer_ReadInt_m9C14BEA8289A5075368F08DEC78C43E3F13D0B8F_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t MemoryInputBuffer_ReadULong_m9FFDF78DD1FD7AE02D86D0ED1D83154C9BAD95C0_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t MemoryInputBuffer_ReadLong_mEF6C6258FA00B06BD9FC9C915D2FD88782F189EE_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MemoryInputBuffer_ReadFloat_mE14AA2102E038B4F1EFDB62E542175F4F71D807D_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double MemoryInputBuffer_ReadDouble_mD94B0BA360DF3893C26D078EC27373F539B430F9_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MemoryInputBuffer_ReadString_m1225E36CFDEFC37E0F5EE651BFB80C9609850116_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, int32_t ___1_byteLength, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_encoding, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryInputBuffer_GetReadOnlySpan_m6228ECF82D2E49ADE8DE631392C33291EA411C92_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryInputBuffer_GetSpan_m4375D749C94959D15F4B179D6CF52A4E7D851721_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyMemoryInputBuffer_get_IsPinned_m2696AF9A78AEDAD37862169DF4C96783CC508986 (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, const RuntimeMethod* method) ;
inline int32_t ReadOnlyMemory_1_get_Length_m2E20B5DC76A91D078F8827624C654EB90EFD5392 (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*, const RuntimeMethod*))ReadOnlyMemory_1_get_Length_m2E20B5DC76A91D078F8827624C654EB90EFD5392_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlyMemoryInputBuffer_get_Length_m480302BEB2727674B285D42252D3B065561D6B0A_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, const RuntimeMethod* method) ;
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*, const RuntimeMethod*))ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_gshared_inline)(__this, method);
}
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_gshared_inline)(__this, ___0_start, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ReadOnlyMemoryInputBuffer_ReadByte_m262C244E65D77C5F29F13D205E3351E5235975A7_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t ReadOnlyMemoryInputBuffer_ReadSByte_m78A0BC6139E18D75BA9B5CA65260DF6E9DF1D0AA_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ReadOnlyMemoryInputBuffer_ReadUShort_m069C27639C0D50A597C1DC5084464873F4D28FF3_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t ReadOnlyMemoryInputBuffer_ReadShort_mBBC035DAD7241C150E74DC0E869ED2C6246E440D_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ReadOnlyMemoryInputBuffer_ReadUInt_m59972C86C98665CE9E7DE63806C2C76D3A6F34CB_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlyMemoryInputBuffer_ReadInt_m8A10C08D7D59D34CB8E64ADFD4BCC78E981D2F64_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ReadOnlyMemoryInputBuffer_ReadULong_m61778DB525B36509D1B86EFDE502BBFA23C72BD9_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ReadOnlyMemoryInputBuffer_ReadLong_m2F8BDA46BCC46D5B0763617163EA0064E8B43E06_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ReadOnlyMemoryInputBuffer_ReadFloat_m7B47901E475D0552B0A0EDE09DE783842F74BF0F_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ReadOnlyMemoryInputBuffer_ReadDouble_mDA89B186B08BE02407275845601944816131C5F8_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_gshared_inline)(__this, ___0_start, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ReadOnlyMemoryInputBuffer_ReadString_m51ED754CCE3ACE126E4B772CA97CDC55AA3725D2_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, int32_t ___1_byteLength, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_encoding, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlyMemoryInputBuffer_GetReadOnlySpan_m60CF9ECA3455FCFAED2BF9AC0432782D1E4A23B3_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ReadOnlyMemoryInputBuffer_GetSpan_m9807C4808301D524E529AF4F4BD6383A56C9A176 (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedStringWriter__ctor_m353639F69E99F1A495E768A2EA8ADF616C9254A1 (SharedStringWriter_tC8125A04EB9B588A00E05949A87D8BBE1E3DE690* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_hashTableCapacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline)(__this, method);
}
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedStringWriter_set_IsDirty_m6F68088942550C0846B803596AC0005B22BCAF34_inline (SharedStringWriter_tC8125A04EB9B588A00E05949A87D8BBE1E3DE690* __this, bool ___0_value, const RuntimeMethod* method) ;
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
inline void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanWriter_WriteByte_m177A8891B785A25CB0FCE3D4A22A222CF69FCB30_inline (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, uint8_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanWriter_WriteSByte_m648F97C38FD37A164FDFA88FAC4E1357F3ACBC88_inline (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, int8_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BinaryPrimitives_WriteUInt16LittleEndian_mEA236B05E65D485C1934CCC155A6AF8A5C66773A_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, uint16_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanWriter_WriteUShort_m7CAA151E73A283CBB0089697DA7D4C75B0208B11_inline (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, uint16_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BinaryPrimitives_WriteInt16LittleEndian_m5604129106AB8E5E79BE8089862A6AAFE8822FFD_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, int16_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanWriter_WriteShort_m021B686064D7C48EAB1836B55C30CAA885D2E2B4_inline (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, int16_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BinaryPrimitives_WriteUInt32LittleEndian_mF5A685773CF1618F130D77F5072BDB7C389793B1_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, uint32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanWriter_WriteUInt_m21541B40F8BBCCD84DBF0C5EAFE90972670A6547_inline (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, uint32_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BinaryPrimitives_WriteInt32LittleEndian_m216AF52C3BA0D7502D9D60E8900B3A9DC3915DDF_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanWriter_WriteInt_m5A076175E293EF6FE718200016C8C7C031E1AAFF_inline (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, int32_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BinaryPrimitives_WriteUInt64LittleEndian_mCC039600290A6A5201532593AF3BE095D74C1625_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, uint64_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanWriter_WriteULong_m543231470494BFDCAC017B3F7EB7D9755F6429F6_inline (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, uint64_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BinaryPrimitives_WriteInt64LittleEndian_m7EDA06941AC97EBE8B8B74FA461F3EF4C2C99884_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, int64_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanWriter_WriteLong_mDDA7CD000FF9CD99719C6B501A47318977D9CF3F_inline (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, int64_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanWriter_WriteFloat_m864B613E37DC12AB1EDF476A135E493FDF67F619_inline (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, float ___1_value, int32_t ___2_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanWriter_WriteDouble_m3BB3E0F21FAD388378CCE0BCBDEB31DA48152FF6_inline (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, double ___1_value, int32_t ___2_offset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 String_op_Implicit_m7D7FE0449303AF92D8B2A85A06ADC6933B2ECC3A_inline (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpanWriter_GetStringBytes_m464D526E005D9A6C88E98D2BA3EAC2B4388A6A52_inline (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, String_t* ___1_value, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_encoding, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanWriter_FlushSharedStrings_mF99C3A89CBF026A31FBBDC9E5BBF2B562CDF5ED3 (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, RuntimeObject* ___0_writer, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_destination, SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8* ___2_context, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void FlatSharpInternal_ThrowAssertFailed_m08FF69C55D973A7E704FFC306689774D91077B57 (String_t* ___0_message, String_t* ___1_memberName, String_t* ___2_fileName, int32_t ___3_lineNumber, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatSharpInternalException__ctor_m98D1ACB853DD1A7DFF9C2F12F4EDC1E448BDA500 (FlatSharpInternalException_t582A03DA9A8F1C29DF1CCDA3DAEC2EC0CADC1877* __this, String_t* ___0_message, String_t* ___1_memberName, String_t* ___2_fileName, int32_t ___3_lineNumber, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileName_mB1A8CE314EE250B06E3D33142315E2BD3A75D1D6 (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedSerializerParseArguments__ctor_m8C3376E97B135A40406E6C18E3E8810579F3807E (GeneratedSerializerParseArguments_tA62665BC0CD65EF69B688A96B836271FD900BBBC* __this, int32_t ___0_offset, int16_t ___1_depthLimit, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GeneratedSerializerParseArguments_get_Offset_mF6FA3C2698A3C2413400B276CB0A511010ED97AD_inline (GeneratedSerializerParseArguments_tA62665BC0CD65EF69B688A96B836271FD900BBBC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t GeneratedSerializerParseArguments_get_DepthLimit_mC6311EEAE451CB544CF735FC34618D31F6CC645F_inline (GeneratedSerializerParseArguments_tA62665BC0CD65EF69B688A96B836271FD900BBBC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidDataException__ctor_m514879053D89E3C8229A01AA8970237FA5409532 (InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t BinaryPrimitives_ReadUInt16LittleEndian_m6233B916B888350309C273E87ED2C3F787260889_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t BinaryPrimitives_ReadInt16LittleEndian_mD2220A9E387CCFF63A818DABC6A35C92B240BDC4_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReadUInt32LittleEndian_m1D2A6AA323C53D511E84C677D1F8F17077F3B070_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BinaryPrimitives_ReadInt32LittleEndian_m8FF3A5E10E26FEC7EA2FF160B17D0BB51B4A8AC5_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t BinaryPrimitives_ReadUInt64LittleEndian_m9F91B7C963E163D3064EA52D2C3A4075A33FB32B_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BinaryPrimitives_ReadInt64LittleEndian_mE8A837185C132F5DCFA81A9D0F5CDB92000B6CF9_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double BitConverter_Int64BitsToDouble_m0471A5DA68629692DE031E855EB537CBB4CA9A55_inline (int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Encoding_GetString_m6FE2707C33758C7F10750B79FCA7767F4C2CA008 (Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_bytes, const RuntimeMethod* method) ;
inline void List_1__ctor_m6C7F9D5295A0F6F1D9A9EA6F710012EDC72E849C (List_1_t27B768AC089986FAE389AC96023E04AFE9D70345* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t27B768AC089986FAE389AC96023E04AFE9D70345*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SerializationContext_set_SharedStringWriter_m2AA6B0B83D021A882258C9A824F33E5B4EFC87ED_inline (SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
inline void List_1_Clear_m8B230FBF8A4EFC492FE21823E487E2F52DBE2F8F_inline (List_1_t27B768AC089986FAE389AC96023E04AFE9D70345* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t27B768AC089986FAE389AC96023E04AFE9D70345*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
inline int32_t List_1_get_Count_m318592409A425596B36D48B3FE209C2F8DD53BBD_inline (List_1_t27B768AC089986FAE389AC96023E04AFE9D70345* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t27B768AC089986FAE389AC96023E04AFE9D70345*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
inline PostSerializeAction_t24986B772136F5445F4DDACD441710C972B014E6* List_1_get_Item_mFFD5464C4B443B9EF1223A071F800F55E30B8AA4 (List_1_t27B768AC089986FAE389AC96023E04AFE9D70345* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  PostSerializeAction_t24986B772136F5445F4DDACD441710C972B014E6* (*) (List_1_t27B768AC089986FAE389AC96023E04AFE9D70345*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PostSerializeAction_Invoke_m4E114361E43216F3776DCAA90C66A0C774C902DD_inline (PostSerializeAction_t24986B772136F5445F4DDACD441710C972B014E6* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8* ___1_context, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SerializationHelpers_GetAlignmentError_m3B884AE1FD7C9A00AF91F88687AA875D9C59758E_inline (int32_t ___0_offset, int32_t ___1_alignment, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationContext_AllocateSpace_mE037A7DC50D641E02A3710BAC31B8567B0095CAC (SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8* __this, int32_t ___0_bytesNeeded, int32_t ___1_alignment, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferTooSmallException__ctor_m4C22E0CB12143D122518F39CDA65D3CAB9E733BF (BufferTooSmallException_tE059BE36152522CE8BFF8A31EC58DB76298A95F4* __this, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___0_index, method);
}
inline int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline)(__this, method);
}
inline int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, const RuntimeMethod*))Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline)(__this, method);
}
inline bool MemoryExtensions_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEFFCB2E665C23D1B7B12CA86B0BB0A5680004DC_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___1_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))MemoryExtensions_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEFFCB2E665C23D1B7B12CA86B0BB0A5680004DC_gshared_inline)(___0_span, ___1_other, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SerializationContext_Promote_mD40D2894D0027045F4B4A8ECE1F69783A3FEAEC3_inline (int32_t ___0_i, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___1_offsets, const RuntimeMethod* method) ;
inline void Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542 (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_gshared)(__this, ___0_destination, method);
}
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___0_item, method);
}
inline void List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, int32_t, const RuntimeMethod*))List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_gshared)(__this, ___0_index, ___1_value, method);
}
inline void Func_1__ctor_mC183AC51DD2EB09BAF43DD36688B6D472F7C90D3 (Func_1_tBBC90CF9AFB875F8983669DF095BABF81040D7B8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tBBC90CF9AFB875F8983669DF095BABF81040D7B8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ThreadLocal_1__ctor_mDEE379223752F62AA7CD1A6D98D13C783784B72D (ThreadLocal_1_t3388F8171818211101296675E793A2D98611E503* __this, Func_1_tBBC90CF9AFB875F8983669DF095BABF81040D7B8* ___0_valueFactory, const RuntimeMethod* method)
{
	((  void (*) (ThreadLocal_1_t3388F8171818211101296675E793A2D98611E503*, Func_1_tBBC90CF9AFB875F8983669DF095BABF81040D7B8*, const RuntimeMethod*))ThreadLocal_1__ctor_mCD5FA1833EFC84CB7F38DEC8AB92B84CC4116BE2_gshared)(__this, ___0_valueFactory, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB415A80D0E549E78EB2FFA7435C122C5D6740689 (U3CU3Ec_t18E4CC5A0F6B97FF95D258EE3B9580BECEFBD239* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationContext__ctor_m95DA37319F0F61EFF1F21508875CF0C4E4F98651 (SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SerializationHelpers_GetMaxPadding_mEF14DCAAB41606B289530D5776304C2123DA6363_inline (int32_t ___0_alignment, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoding__ctor_mBCC79DB57729512321FA4F0E17342F0D1A43EA34 (UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* __this, bool ___0_encoderShouldEmitUTF8Identifier, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t BinaryPrimitives_ReverseEndianness_mDBF226C2D52CAFF6DE538F8245444B5CF87A02D0_inline (uint16_t ___0_value, const RuntimeMethod* method) ;
inline void MemoryMarshal_Write_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1CB9CA69ED7F15E1AED66F7E98D918E1DF0CB96A_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, uint16_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, uint16_t*, const RuntimeMethod*))MemoryMarshal_Write_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1CB9CA69ED7F15E1AED66F7E98D918E1DF0CB96A_gshared_inline)(___0_destination, ___1_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t BinaryPrimitives_ReverseEndianness_m3D9424412C7D16FB3AFE244BC344BBECB291838B_inline (int16_t ___0_value, const RuntimeMethod* method) ;
inline void MemoryMarshal_Write_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m433300E1EAC29F2055D3E28298B3E33AA41629C8_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, int16_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, int16_t*, const RuntimeMethod*))MemoryMarshal_Write_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m433300E1EAC29F2055D3E28298B3E33AA41629C8_gshared_inline)(___0_destination, ___1_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_mCCA2099164ECA9672968898DD996A9F04B392FFF_inline (uint32_t ___0_value, const RuntimeMethod* method) ;
inline void MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m2BD505F8011143B77CB9A048F4C97C64130CB6DB_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, uint32_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, uint32_t*, const RuntimeMethod*))MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m2BD505F8011143B77CB9A048F4C97C64130CB6DB_gshared_inline)(___0_destination, ___1_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BinaryPrimitives_ReverseEndianness_mF7B5C36D507C0D85537E18A1141554A99093BD78_inline (int32_t ___0_value, const RuntimeMethod* method) ;
inline void MemoryMarshal_Write_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEF660B60FA28FE8C12E8B08463FBB2E302DBF3D6_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, int32_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, int32_t*, const RuntimeMethod*))MemoryMarshal_Write_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEF660B60FA28FE8C12E8B08463FBB2E302DBF3D6_gshared_inline)(___0_destination, ___1_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t BinaryPrimitives_ReverseEndianness_mA698702D91EF4E47FF6F682E4B48F173FF376BDF_inline (uint64_t ___0_value, const RuntimeMethod* method) ;
inline void MemoryMarshal_Write_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m369E3011D17AFC47FE8EBD775DA05E3F136D3EA3_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, uint64_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, uint64_t*, const RuntimeMethod*))MemoryMarshal_Write_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m369E3011D17AFC47FE8EBD775DA05E3F136D3EA3_gshared_inline)(___0_destination, ___1_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BinaryPrimitives_ReverseEndianness_mCD5293727A7525EE7AD81584DBBBE43478F40A8D_inline (int64_t ___0_value, const RuntimeMethod* method) ;
inline void MemoryMarshal_Write_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m16D93984D1D3FD0F0742D660AAB4626FF45A1C50_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, int64_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, int64_t*, const RuntimeMethod*))MemoryMarshal_Write_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m16D93984D1D3FD0F0742D660AAB4626FF45A1C50_gshared_inline)(___0_destination, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Il2CppChar*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline uint16_t MemoryMarshal_Read_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE522E06A28DD43DAED8B42666149274B433F5317_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method)
{
	return ((  uint16_t (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))MemoryMarshal_Read_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE522E06A28DD43DAED8B42666149274B433F5317_gshared_inline)(___0_source, method);
}
inline int16_t MemoryMarshal_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3371E1C3FCD5027463EFFC4C6F31FE983579F335_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method)
{
	return ((  int16_t (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))MemoryMarshal_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3371E1C3FCD5027463EFFC4C6F31FE983579F335_gshared_inline)(___0_source, method);
}
inline uint32_t MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m56C749731FAD055AC5894D97F107FF8E5C6A13AE_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m56C749731FAD055AC5894D97F107FF8E5C6A13AE_gshared_inline)(___0_source, method);
}
inline int32_t MemoryMarshal_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m610B098B008105D72394F56BF309D3A9F0F12ABC_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))MemoryMarshal_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m610B098B008105D72394F56BF309D3A9F0F12ABC_gshared_inline)(___0_source, method);
}
inline uint64_t MemoryMarshal_Read_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4B7CEC36F79FB7BE35EB5ADC5B3F9B03A427FAD0_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))MemoryMarshal_Read_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4B7CEC36F79FB7BE35EB5ADC5B3F9B03A427FAD0_gshared_inline)(___0_source, method);
}
inline int64_t MemoryMarshal_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA9F67C05F53E72F623261F3811072B33F3B522EA_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method)
{
	return ((  int64_t (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))MemoryMarshal_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA9F67C05F53E72F623261F3811072B33F3B522EA_gshared_inline)(___0_source, method);
}
inline void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline)(__this, ___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
inline void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, uint8_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline)(__this, method);
}
inline int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline)(__this, method);
}
inline void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, uint8_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_gshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline bool MemoryExtensions_IsTypeComparableAsBytes_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mFEF14F6D259CEA196C71A21BCB83EBC94ABB3FFA_inline (uint64_t* ___0_size, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t*, const RuntimeMethod*))MemoryExtensions_IsTypeComparableAsBytes_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mFEF14F6D259CEA196C71A21BCB83EBC94ABB3FFA_gshared_inline)(___0_size, method);
}
inline uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_gshared)(___0_span, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_m69781B64721462BCA1ED200A1BB853E9B7026F2E (uint8_t* ___0_first, uint8_t* ___1_second, uint64_t ___2_length, const RuntimeMethod* method) ;
inline bool SpanHelpers_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mFD8AD32B5F2EBF9489593A1FA99B57E7764E6735 (uint8_t* ___0_first, uint8_t* ___1_second, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  bool (*) (uint8_t*, uint8_t*, int32_t, const RuntimeMethod*))SpanHelpers_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mFD8AD32B5F2EBF9489593A1FA99B57E7764E6735_gshared)(___0_first, ___1_second, ___2_length, method);
}
inline void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___0_argument, const RuntimeMethod* method) ;
inline uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6 (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_gshared)(___0_span, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m924ADB66B67C4CACF581B9957BA3D76B38C9C247 (EmbeddedAttribute_t81ACDE3308B60AFC81C37BDDD8C35230776FFE5E* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsUnmanagedAttribute__ctor_mF84719DC0D2C0A068E60826CFA7CE51C6BE14706 (IsUnmanagedAttribute_tFA828FA80698273AD8BDEB182C1F698A6D8042A1* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_mA161720B2711E9AA02BE05C309CA3024D4E6CB1E (NullableAttribute_t202B8DE841520D20906BCFFB35ACE850BF9F009D* __this, uint8_t ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		uint8_t L_2 = ___0_p;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		__this->___NullableFlags = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NullableFlags), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_mA1D8224F09506B6F7814DAFE9757072893B74914 (NullableAttribute_t202B8DE841520D20906BCFFB35ACE850BF9F009D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_p, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_p;
		__this->___NullableFlags = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NullableFlags), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableContextAttribute__ctor_m9322291E022CE82B34D44762A47B3B1ABD27390B (NullableContextAttribute_tC1D6D6F3F65188A7A3FD39A3C077E1663D195C41* __this, uint8_t ___0_p, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		uint8_t L_0 = ___0_p;
		__this->___Flag = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeIntegerAttribute__ctor_m56D7FD93C1E0FF9D957D9C56626FE48DF01176D8 (NativeIntegerAttribute_t4F3670ABA66D219D12CC2BF8698D43ACBBFCF757* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)1);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (bool)1);
		__this->___TransformFlags = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TransformFlags), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefSafetyRulesAttribute__ctor_m2A2EDA54A41503B1730D65070669261D5CF6A67C (RefSafetyRulesAttribute_tFAE6213660C59C554397D49B556E890C2BC88CED* __this, int32_t ___0_p, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int32_t L_0 = ___0_p;
		__this->___Version = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferTooSmallException__ctor_m4C22E0CB12143D122518F39CDA65D3CAB9E733BF (BufferTooSmallException_tE059BE36152522CE8BFF8A31EC58DB76298A95F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FFA6B73394079E103E54D5D25F19DF4EAC7985A);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, _stringLiteral0FFA6B73394079E103E54D5D25F19DF4EAC7985A, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferTooSmallException_set_SizeNeeded_m26CB966AC6AC627A81679BF6C25D2C88FE04D8E8 (BufferTooSmallException_tE059BE36152522CE8BFF8A31EC58DB76298A95F4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CSizeNeededU3Ek__BackingField = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferDeserializationContext__ctor_mCE64F5AA052E21BEA0998F0E00BEA24AE3A1C590 (FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9* __this, int32_t ___0_deserializationOption, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_deserializationOption;
		__this->___U3CDeserializationOptionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void FlatBufferDeserializationContext__ctor_mCE64F5AA052E21BEA0998F0E00BEA24AE3A1C590_AdjustorThunk (RuntimeObject* __this, int32_t ___0_deserializationOption, const RuntimeMethod* method)
{
	FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9*>(__this + _offset);
	FlatBufferDeserializationContext__ctor_mCE64F5AA052E21BEA0998F0E00BEA24AE3A1C590_inline(_thisAdjusted, ___0_deserializationOption, method);
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
IL2CPP_EXTERN_C void ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_marshal_pinvoke(const ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F& unmarshaled, ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_marshaled_pinvoke& marshaled)
{
	marshaled.___memory = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___memory);
}
IL2CPP_EXTERN_C void ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_marshal_pinvoke_back(const ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_marshaled_pinvoke& marshaled, ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___memory = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___memory);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___memory), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___memory));
}
IL2CPP_EXTERN_C void ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_marshal_pinvoke_cleanup(ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___memory);
	marshaled.___memory = NULL;
}
IL2CPP_EXTERN_C void ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_marshal_com(const ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F& unmarshaled, ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_marshaled_com& marshaled)
{
	marshaled.___memory = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___memory);
}
IL2CPP_EXTERN_C void ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_marshal_com_back(const ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_marshaled_com& marshaled, ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___memory = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___memory);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___memory), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___memory));
}
IL2CPP_EXTERN_C void ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_marshal_com_cleanup(ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___memory);
	marshaled.___memory = NULL;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayInputBuffer_get_IsPinned_m432D9A8B615DA39CDBBD304AAB0F8FD4D1FB954E (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ArrayInputBuffer_get_IsPinned_m432D9A8B615DA39CDBBD304AAB0F8FD4D1FB954E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F*>(__this + _offset);
	bool _returnValue;
	_returnValue = ArrayInputBuffer_get_IsPinned_m432D9A8B615DA39CDBBD304AAB0F8FD4D1FB954E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayInputBuffer_get_Length_mBCB782DB796615B897C06FBB8BF28FEA56EB9934 (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___memory;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C  int32_t ArrayInputBuffer_get_Length_mBCB782DB796615B897C06FBB8BF28FEA56EB9934_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ArrayInputBuffer_get_Length_mBCB782DB796615B897C06FBB8BF28FEA56EB9934(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ArrayInputBuffer_ReadByte_m74E87606AA17E0FFFCB1FD34F4D25096A27F169C (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___memory;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_inline(L_0, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_2, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_3, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		uint8_t L_5;
		L_5 = ScalarSpanReader_ReadByte_m1075027AAC4CD98D86A85CD284489B586B69EC7A_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  uint8_t ArrayInputBuffer_ReadByte_m74E87606AA17E0FFFCB1FD34F4D25096A27F169C_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F*>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = ArrayInputBuffer_ReadByte_m74E87606AA17E0FFFCB1FD34F4D25096A27F169C_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t ArrayInputBuffer_ReadSByte_m09BCC49B001681DE7D3A1D3E902B61FCAEC52F04 (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___memory;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_inline(L_0, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_2, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_3, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		int8_t L_5;
		L_5 = ScalarSpanReader_ReadSByte_mDCDF03A71770C9116EFF00C89E5FB1B6E8169BBB_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  int8_t ArrayInputBuffer_ReadSByte_m09BCC49B001681DE7D3A1D3E902B61FCAEC52F04_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F*>(__this + _offset);
	int8_t _returnValue;
	_returnValue = ArrayInputBuffer_ReadSByte_m09BCC49B001681DE7D3A1D3E902B61FCAEC52F04_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ArrayInputBuffer_ReadUShort_m88F1A806D08427132A221D6446FC3C314E201888 (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___memory;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_inline(L_0, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_2, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_3, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		uint16_t L_5;
		L_5 = ScalarSpanReader_ReadUShort_m327796534738A7AF6BC3FA7A8838AC0427076483_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  uint16_t ArrayInputBuffer_ReadUShort_m88F1A806D08427132A221D6446FC3C314E201888_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F*>(__this + _offset);
	uint16_t _returnValue;
	_returnValue = ArrayInputBuffer_ReadUShort_m88F1A806D08427132A221D6446FC3C314E201888_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ArrayInputBuffer_ReadShort_mCE5A0DB0CB702F2F82800B7CBDD3AEE1DDBAFDB2 (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___memory;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_inline(L_0, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_2, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_3, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		int16_t L_5;
		L_5 = ScalarSpanReader_ReadShort_mF811261B1B8D3E2F468440430FDFB3116A8411AF_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  int16_t ArrayInputBuffer_ReadShort_mCE5A0DB0CB702F2F82800B7CBDD3AEE1DDBAFDB2_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F*>(__this + _offset);
	int16_t _returnValue;
	_returnValue = ArrayInputBuffer_ReadShort_mCE5A0DB0CB702F2F82800B7CBDD3AEE1DDBAFDB2_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ArrayInputBuffer_ReadUInt_m83E360B2D464701419F0D5069DF285DA834D2113 (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___memory;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_inline(L_0, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_2, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_3, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		uint32_t L_5;
		L_5 = ScalarSpanReader_ReadUInt_m5A2AA7E6CF46CE633A8F4CC1ABDE9E465C37A948_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  uint32_t ArrayInputBuffer_ReadUInt_m83E360B2D464701419F0D5069DF285DA834D2113_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = ArrayInputBuffer_ReadUInt_m83E360B2D464701419F0D5069DF285DA834D2113_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayInputBuffer_ReadInt_m8798ED218FA815A8FA0FAF9B47D6FDFA056F0AD0 (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___memory;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_inline(L_0, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_2, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_3, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		int32_t L_5;
		L_5 = ScalarSpanReader_ReadInt_mE9DF8741A87BC7857ED46834E76D7AE354FCCFF1_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  int32_t ArrayInputBuffer_ReadInt_m8798ED218FA815A8FA0FAF9B47D6FDFA056F0AD0_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ArrayInputBuffer_ReadInt_m8798ED218FA815A8FA0FAF9B47D6FDFA056F0AD0_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ArrayInputBuffer_ReadULong_m6F115B2AFD0E8DC9E16DF24B4D0B70AFA8757334 (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___memory;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_inline(L_0, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_2, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_3, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		uint64_t L_5;
		L_5 = ScalarSpanReader_ReadULong_m6EE8443BA6A3D6E60DB079A1614B1437470450B3_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  uint64_t ArrayInputBuffer_ReadULong_m6F115B2AFD0E8DC9E16DF24B4D0B70AFA8757334_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F*>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = ArrayInputBuffer_ReadULong_m6F115B2AFD0E8DC9E16DF24B4D0B70AFA8757334_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ArrayInputBuffer_ReadLong_m283D051B53D017F491B08AB46FFE27D6F0A05346 (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___memory;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_inline(L_0, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_2, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_3, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		int64_t L_5;
		L_5 = ScalarSpanReader_ReadLong_m43F728FDBAA68DAE3FB9034156AC1BDC51312FD1_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  int64_t ArrayInputBuffer_ReadLong_m283D051B53D017F491B08AB46FFE27D6F0A05346_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = ArrayInputBuffer_ReadLong_m283D051B53D017F491B08AB46FFE27D6F0A05346_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ArrayInputBuffer_ReadFloat_m9B0FF87A5566AC4B5C07F53D1E0125E9DEFCD2DD (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___memory;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_inline(L_0, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_2, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_3, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		float L_5;
		L_5 = ScalarSpanReader_ReadFloat_m32F827D9BF154056E0D037EBF64A022D78946EDA_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  float ArrayInputBuffer_ReadFloat_m9B0FF87A5566AC4B5C07F53D1E0125E9DEFCD2DD_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F*>(__this + _offset);
	float _returnValue;
	_returnValue = ArrayInputBuffer_ReadFloat_m9B0FF87A5566AC4B5C07F53D1E0125E9DEFCD2DD_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ArrayInputBuffer_ReadDouble_mE49F23F20EE13B5CB2232C1E097344E7C21CBDD1 (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___memory;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_inline(L_0, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_2, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_3, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		double L_5;
		L_5 = ScalarSpanReader_ReadDouble_m61D5C204BA9E81DA538C2A4489E038F5A5310A01_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  double ArrayInputBuffer_ReadDouble_mE49F23F20EE13B5CB2232C1E097344E7C21CBDD1_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F*>(__this + _offset);
	double _returnValue;
	_returnValue = ArrayInputBuffer_ReadDouble_mE49F23F20EE13B5CB2232C1E097344E7C21CBDD1_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArrayInputBuffer_ReadString_m82A09E526BADBC7DEC84E7D73EAC51A6327491E8 (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, int32_t ___1_byteLength, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_encoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___memory;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_inline(L_0, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___0_offset;
		int32_t L_3 = ___1_byteLength;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_0), L_2, L_3, Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6 = ___2_encoding;
		String_t* L_7;
		L_7 = ScalarSpanReader_ReadString_m3BCFF4018AAEB11379DF79D99125EFC2F8A564A7_inline(L_5, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  String_t* ArrayInputBuffer_ReadString_m82A09E526BADBC7DEC84E7D73EAC51A6327491E8_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, int32_t ___1_byteLength, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_encoding, const RuntimeMethod* method)
{
	ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ArrayInputBuffer_ReadString_m82A09E526BADBC7DEC84E7D73EAC51A6327491E8_inline(_thisAdjusted, ___0_offset, ___1_byteLength, ___2_encoding, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ArrayInputBuffer_GetReadOnlySpan_m320ED7EBDE610A64E2ABEB8080519D91C9FD21FE (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___memory;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1;
		L_1 = ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644(L_0, ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ArrayInputBuffer_GetReadOnlySpan_m320ED7EBDE610A64E2ABEB8080519D91C9FD21FE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F*>(__this + _offset);
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D _returnValue;
	_returnValue = ArrayInputBuffer_GetReadOnlySpan_m320ED7EBDE610A64E2ABEB8080519D91C9FD21FE_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ArrayInputBuffer_GetSpan_m72708F5F93A279BE3AC8C4A5B2BB7BD3969A28DD (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___memory;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91(L_0, Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ArrayInputBuffer_GetSpan_m72708F5F93A279BE3AC8C4A5B2BB7BD3969A28DD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F*>(__this + _offset);
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 _returnValue;
	_returnValue = ArrayInputBuffer_GetSpan_m72708F5F93A279BE3AC8C4A5B2BB7BD3969A28DD_inline(_thisAdjusted, method);
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
IL2CPP_EXTERN_C void ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_marshal_pinvoke(const ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562& unmarshaled, ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_marshaled_pinvoke& marshaled)
{
	Exception_t* ___pointerException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'pointer' of type 'ArraySegmentInputBuffer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___pointerException, NULL);
}
IL2CPP_EXTERN_C void ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_marshal_pinvoke_back(const ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_marshaled_pinvoke& marshaled, ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562& unmarshaled)
{
	Exception_t* ___pointerException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'pointer' of type 'ArraySegmentInputBuffer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___pointerException, NULL);
}
IL2CPP_EXTERN_C void ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_marshal_pinvoke_cleanup(ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_marshal_com(const ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562& unmarshaled, ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_marshaled_com& marshaled)
{
	Exception_t* ___pointerException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'pointer' of type 'ArraySegmentInputBuffer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___pointerException, NULL);
}
IL2CPP_EXTERN_C void ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_marshal_com_back(const ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_marshaled_com& marshaled, ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562& unmarshaled)
{
	Exception_t* ___pointerException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'pointer' of type 'ArraySegmentInputBuffer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___pointerException, NULL);
}
IL2CPP_EXTERN_C void ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_marshal_com_cleanup(ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArraySegmentInputBuffer_get_IsPinned_mF7B25B4F3A00477049F9CD81A71B84C9C871B75C (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ArraySegmentInputBuffer_get_IsPinned_mF7B25B4F3A00477049F9CD81A71B84C9C871B75C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562*>(__this + _offset);
	bool _returnValue;
	_returnValue = ArraySegmentInputBuffer_get_IsPinned_mF7B25B4F3A00477049F9CD81A71B84C9C871B75C(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySegmentInputBuffer_get_Length_m99EDA79ED5DBD18BA92470D0D8A6DB2AD82C30E3 (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* L_0 = __this->___pointer;
		NullCheck(L_0);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_1 = (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)(&L_0->___segment);
		il2cpp_codegen_runtime_class_init_inline(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline(L_1, ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t ArraySegmentInputBuffer_get_Length_m99EDA79ED5DBD18BA92470D0D8A6DB2AD82C30E3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ArraySegmentInputBuffer_get_Length_m99EDA79ED5DBD18BA92470D0D8A6DB2AD82C30E3(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ArraySegmentInputBuffer_ReadByte_m7E37513F3F57E08FCFDAA753AF11120EFC8AF818 (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* L_0 = __this->___pointer;
		NullCheck(L_0);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = L_0->___segment;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_inline(L_1, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		uint8_t L_6;
		L_6 = ScalarSpanReader_ReadByte_m1075027AAC4CD98D86A85CD284489B586B69EC7A_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  uint8_t ArraySegmentInputBuffer_ReadByte_m7E37513F3F57E08FCFDAA753AF11120EFC8AF818_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562*>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = ArraySegmentInputBuffer_ReadByte_m7E37513F3F57E08FCFDAA753AF11120EFC8AF818_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t ArraySegmentInputBuffer_ReadSByte_m9C2A6B1AAFC3AEF9CEBCBEE4CE92B2BA154BB93E (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* L_0 = __this->___pointer;
		NullCheck(L_0);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = L_0->___segment;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_inline(L_1, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		int8_t L_6;
		L_6 = ScalarSpanReader_ReadSByte_mDCDF03A71770C9116EFF00C89E5FB1B6E8169BBB_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  int8_t ArraySegmentInputBuffer_ReadSByte_m9C2A6B1AAFC3AEF9CEBCBEE4CE92B2BA154BB93E_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562*>(__this + _offset);
	int8_t _returnValue;
	_returnValue = ArraySegmentInputBuffer_ReadSByte_m9C2A6B1AAFC3AEF9CEBCBEE4CE92B2BA154BB93E_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ArraySegmentInputBuffer_ReadUShort_mE4C77EEA5D3D9AC6F73F6419850EC9D4DE92D1CA (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* L_0 = __this->___pointer;
		NullCheck(L_0);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = L_0->___segment;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_inline(L_1, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		uint16_t L_6;
		L_6 = ScalarSpanReader_ReadUShort_m327796534738A7AF6BC3FA7A8838AC0427076483_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  uint16_t ArraySegmentInputBuffer_ReadUShort_mE4C77EEA5D3D9AC6F73F6419850EC9D4DE92D1CA_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562*>(__this + _offset);
	uint16_t _returnValue;
	_returnValue = ArraySegmentInputBuffer_ReadUShort_mE4C77EEA5D3D9AC6F73F6419850EC9D4DE92D1CA_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ArraySegmentInputBuffer_ReadShort_m880A3A21EDEC280A3DA7D7054CD0F8561F1E5C58 (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* L_0 = __this->___pointer;
		NullCheck(L_0);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = L_0->___segment;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_inline(L_1, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		int16_t L_6;
		L_6 = ScalarSpanReader_ReadShort_mF811261B1B8D3E2F468440430FDFB3116A8411AF_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  int16_t ArraySegmentInputBuffer_ReadShort_m880A3A21EDEC280A3DA7D7054CD0F8561F1E5C58_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562*>(__this + _offset);
	int16_t _returnValue;
	_returnValue = ArraySegmentInputBuffer_ReadShort_m880A3A21EDEC280A3DA7D7054CD0F8561F1E5C58_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ArraySegmentInputBuffer_ReadUInt_mEE74C1FC1AAE0AFF3DD00922FD2CB889C367E8A7 (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* L_0 = __this->___pointer;
		NullCheck(L_0);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = L_0->___segment;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_inline(L_1, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		uint32_t L_6;
		L_6 = ScalarSpanReader_ReadUInt_m5A2AA7E6CF46CE633A8F4CC1ABDE9E465C37A948_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  uint32_t ArraySegmentInputBuffer_ReadUInt_mEE74C1FC1AAE0AFF3DD00922FD2CB889C367E8A7_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = ArraySegmentInputBuffer_ReadUInt_mEE74C1FC1AAE0AFF3DD00922FD2CB889C367E8A7_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySegmentInputBuffer_ReadInt_m4F323987A5C2D1F29D8A6CD37E259EBC50306C0F (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* L_0 = __this->___pointer;
		NullCheck(L_0);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = L_0->___segment;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_inline(L_1, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		int32_t L_6;
		L_6 = ScalarSpanReader_ReadInt_mE9DF8741A87BC7857ED46834E76D7AE354FCCFF1_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  int32_t ArraySegmentInputBuffer_ReadInt_m4F323987A5C2D1F29D8A6CD37E259EBC50306C0F_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ArraySegmentInputBuffer_ReadInt_m4F323987A5C2D1F29D8A6CD37E259EBC50306C0F_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ArraySegmentInputBuffer_ReadULong_m8574AF1F6ED1AB9006C497C6ECA1835502C7E836 (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* L_0 = __this->___pointer;
		NullCheck(L_0);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = L_0->___segment;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_inline(L_1, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		uint64_t L_6;
		L_6 = ScalarSpanReader_ReadULong_m6EE8443BA6A3D6E60DB079A1614B1437470450B3_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  uint64_t ArraySegmentInputBuffer_ReadULong_m8574AF1F6ED1AB9006C497C6ECA1835502C7E836_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562*>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = ArraySegmentInputBuffer_ReadULong_m8574AF1F6ED1AB9006C497C6ECA1835502C7E836_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ArraySegmentInputBuffer_ReadLong_mD4CD75A94CF698300B50E7E0679EDEE1AFDC05BA (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* L_0 = __this->___pointer;
		NullCheck(L_0);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = L_0->___segment;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_inline(L_1, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		int64_t L_6;
		L_6 = ScalarSpanReader_ReadLong_m43F728FDBAA68DAE3FB9034156AC1BDC51312FD1_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  int64_t ArraySegmentInputBuffer_ReadLong_mD4CD75A94CF698300B50E7E0679EDEE1AFDC05BA_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = ArraySegmentInputBuffer_ReadLong_mD4CD75A94CF698300B50E7E0679EDEE1AFDC05BA_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ArraySegmentInputBuffer_ReadFloat_m06E15A309EA25FC6EF488FA845130DA282612254 (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* L_0 = __this->___pointer;
		NullCheck(L_0);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = L_0->___segment;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_inline(L_1, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		float L_6;
		L_6 = ScalarSpanReader_ReadFloat_m32F827D9BF154056E0D037EBF64A022D78946EDA_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  float ArraySegmentInputBuffer_ReadFloat_m06E15A309EA25FC6EF488FA845130DA282612254_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562*>(__this + _offset);
	float _returnValue;
	_returnValue = ArraySegmentInputBuffer_ReadFloat_m06E15A309EA25FC6EF488FA845130DA282612254_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ArraySegmentInputBuffer_ReadDouble_m062ADB6C0500D3D3E67012381AA599426450365F (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* L_0 = __this->___pointer;
		NullCheck(L_0);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = L_0->___segment;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_inline(L_1, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		double L_6;
		L_6 = ScalarSpanReader_ReadDouble_m61D5C204BA9E81DA538C2A4489E038F5A5310A01_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  double ArraySegmentInputBuffer_ReadDouble_m062ADB6C0500D3D3E67012381AA599426450365F_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562*>(__this + _offset);
	double _returnValue;
	_returnValue = ArraySegmentInputBuffer_ReadDouble_m062ADB6C0500D3D3E67012381AA599426450365F_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArraySegmentInputBuffer_ReadString_mC26F768826139BEBB789EE2BF27E73952EDBBEE3 (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, int32_t ___1_byteLength, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_encoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* L_0 = __this->___pointer;
		NullCheck(L_0);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = L_0->___segment;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_inline(L_1, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		int32_t L_4 = ___1_byteLength;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5;
		L_5 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_0), L_3, L_4, Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_6;
		L_6 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_5, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_7 = ___2_encoding;
		String_t* L_8;
		L_8 = ScalarSpanReader_ReadString_m3BCFF4018AAEB11379DF79D99125EFC2F8A564A7_inline(L_6, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  String_t* ArraySegmentInputBuffer_ReadString_mC26F768826139BEBB789EE2BF27E73952EDBBEE3_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, int32_t ___1_byteLength, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_encoding, const RuntimeMethod* method)
{
	ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ArraySegmentInputBuffer_ReadString_mC26F768826139BEBB789EE2BF27E73952EDBBEE3_inline(_thisAdjusted, ___0_offset, ___1_byteLength, ___2_encoding, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ArraySegmentInputBuffer_GetReadOnlySpan_m3A095A2CB4F5D3EA5A46D752EE4EFE9E1ABE72D6 (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_m48A199CEDDD841168C5A680589A3C8AB9E61C128_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* L_0 = __this->___pointer;
		NullCheck(L_0);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = L_0->___segment;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = ReadOnlySpan_1_op_Implicit_m48A199CEDDD841168C5A680589A3C8AB9E61C128(L_1, ReadOnlySpan_1_op_Implicit_m48A199CEDDD841168C5A680589A3C8AB9E61C128_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ArraySegmentInputBuffer_GetReadOnlySpan_m3A095A2CB4F5D3EA5A46D752EE4EFE9E1ABE72D6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562*>(__this + _offset);
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D _returnValue;
	_returnValue = ArraySegmentInputBuffer_GetReadOnlySpan_m3A095A2CB4F5D3EA5A46D752EE4EFE9E1ABE72D6_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ArraySegmentInputBuffer_GetSpan_m46A8AF8426BFB7C5B7433F0F31FAA7022B181095 (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m1C77B8E0782305F18B37839AF212ACD631E09AE2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* L_0 = __this->___pointer;
		NullCheck(L_0);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = L_0->___segment;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Span_1_op_Implicit_m1C77B8E0782305F18B37839AF212ACD631E09AE2(L_1, Span_1_op_Implicit_m1C77B8E0782305F18B37839AF212ACD631E09AE2_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ArraySegmentInputBuffer_GetSpan_m46A8AF8426BFB7C5B7433F0F31FAA7022B181095_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562*>(__this + _offset);
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 _returnValue;
	_returnValue = ArraySegmentInputBuffer_GetSpan_m46A8AF8426BFB7C5B7433F0F31FAA7022B181095_inline(_thisAdjusted, method);
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
IL2CPP_EXTERN_C void MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_marshal_pinvoke(const MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C& unmarshaled, MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_marshaled_pinvoke& marshaled)
{
	Exception_t* ___pointerException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'pointer' of type 'MemoryInputBuffer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___pointerException, NULL);
}
IL2CPP_EXTERN_C void MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_marshal_pinvoke_back(const MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_marshaled_pinvoke& marshaled, MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C& unmarshaled)
{
	Exception_t* ___pointerException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'pointer' of type 'MemoryInputBuffer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___pointerException, NULL);
}
IL2CPP_EXTERN_C void MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_marshal_pinvoke_cleanup(MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_marshal_com(const MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C& unmarshaled, MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_marshaled_com& marshaled)
{
	Exception_t* ___pointerException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'pointer' of type 'MemoryInputBuffer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___pointerException, NULL);
}
IL2CPP_EXTERN_C void MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_marshal_com_back(const MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_marshaled_com& marshaled, MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C& unmarshaled)
{
	Exception_t* ___pointerException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'pointer' of type 'MemoryInputBuffer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___pointerException, NULL);
}
IL2CPP_EXTERN_C void MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_marshal_com_cleanup(MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryInputBuffer_get_IsPinned_mF8F1547CA4201417CDC0322BC674230A3D79D34D (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, const RuntimeMethod* method) 
{
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		bool L_1 = L_0->___isPinned;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool MemoryInputBuffer_get_IsPinned_mF8F1547CA4201417CDC0322BC674230A3D79D34D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C*>(__this + _offset);
	bool _returnValue;
	_returnValue = MemoryInputBuffer_get_IsPinned_mF8F1547CA4201417CDC0322BC674230A3D79D34D(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryInputBuffer_get_Length_mDCC29A6C6733C644F995358E0F459B93BA072053 (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		int32_t L_2;
		L_2 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_1, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t MemoryInputBuffer_get_Length_mDCC29A6C6733C644F995358E0F459B93BA072053_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MemoryInputBuffer_get_Length_mDCC29A6C6733C644F995358E0F459B93BA072053_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t MemoryInputBuffer_ReadByte_mAE61AEAC2D8D4A8F0284B1F2A02ABF9ADD16819F (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_1, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		uint8_t L_6;
		L_6 = ScalarSpanReader_ReadByte_m1075027AAC4CD98D86A85CD284489B586B69EC7A_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  uint8_t MemoryInputBuffer_ReadByte_mAE61AEAC2D8D4A8F0284B1F2A02ABF9ADD16819F_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C*>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = MemoryInputBuffer_ReadByte_mAE61AEAC2D8D4A8F0284B1F2A02ABF9ADD16819F_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t MemoryInputBuffer_ReadSByte_mCBECC514B84B07D133A095893D14F1A89E10933B (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_1, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		int8_t L_6;
		L_6 = ScalarSpanReader_ReadSByte_mDCDF03A71770C9116EFF00C89E5FB1B6E8169BBB_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  int8_t MemoryInputBuffer_ReadSByte_mCBECC514B84B07D133A095893D14F1A89E10933B_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C*>(__this + _offset);
	int8_t _returnValue;
	_returnValue = MemoryInputBuffer_ReadSByte_mCBECC514B84B07D133A095893D14F1A89E10933B_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t MemoryInputBuffer_ReadUShort_m1546FF5B687CB6826A21C6D93E6F10FD82942BF3 (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_1, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		uint16_t L_6;
		L_6 = ScalarSpanReader_ReadUShort_m327796534738A7AF6BC3FA7A8838AC0427076483_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  uint16_t MemoryInputBuffer_ReadUShort_m1546FF5B687CB6826A21C6D93E6F10FD82942BF3_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C*>(__this + _offset);
	uint16_t _returnValue;
	_returnValue = MemoryInputBuffer_ReadUShort_m1546FF5B687CB6826A21C6D93E6F10FD82942BF3_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t MemoryInputBuffer_ReadShort_mE6F02BDFB8AA45B54993EB04581EF3284B186B5A (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_1, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		int16_t L_6;
		L_6 = ScalarSpanReader_ReadShort_mF811261B1B8D3E2F468440430FDFB3116A8411AF_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  int16_t MemoryInputBuffer_ReadShort_mE6F02BDFB8AA45B54993EB04581EF3284B186B5A_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C*>(__this + _offset);
	int16_t _returnValue;
	_returnValue = MemoryInputBuffer_ReadShort_mE6F02BDFB8AA45B54993EB04581EF3284B186B5A_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MemoryInputBuffer_ReadUInt_mE5BFC176016B8B284F46D972723ADE80B1C57D88 (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_1, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		uint32_t L_6;
		L_6 = ScalarSpanReader_ReadUInt_m5A2AA7E6CF46CE633A8F4CC1ABDE9E465C37A948_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  uint32_t MemoryInputBuffer_ReadUInt_mE5BFC176016B8B284F46D972723ADE80B1C57D88_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = MemoryInputBuffer_ReadUInt_mE5BFC176016B8B284F46D972723ADE80B1C57D88_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryInputBuffer_ReadInt_m9C14BEA8289A5075368F08DEC78C43E3F13D0B8F (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_1, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		int32_t L_6;
		L_6 = ScalarSpanReader_ReadInt_mE9DF8741A87BC7857ED46834E76D7AE354FCCFF1_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  int32_t MemoryInputBuffer_ReadInt_m9C14BEA8289A5075368F08DEC78C43E3F13D0B8F_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MemoryInputBuffer_ReadInt_m9C14BEA8289A5075368F08DEC78C43E3F13D0B8F_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MemoryInputBuffer_ReadULong_m9FFDF78DD1FD7AE02D86D0ED1D83154C9BAD95C0 (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_1, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		uint64_t L_6;
		L_6 = ScalarSpanReader_ReadULong_m6EE8443BA6A3D6E60DB079A1614B1437470450B3_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  uint64_t MemoryInputBuffer_ReadULong_m9FFDF78DD1FD7AE02D86D0ED1D83154C9BAD95C0_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C*>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = MemoryInputBuffer_ReadULong_m9FFDF78DD1FD7AE02D86D0ED1D83154C9BAD95C0_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t MemoryInputBuffer_ReadLong_mEF6C6258FA00B06BD9FC9C915D2FD88782F189EE (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_1, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		int64_t L_6;
		L_6 = ScalarSpanReader_ReadLong_m43F728FDBAA68DAE3FB9034156AC1BDC51312FD1_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  int64_t MemoryInputBuffer_ReadLong_mEF6C6258FA00B06BD9FC9C915D2FD88782F189EE_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = MemoryInputBuffer_ReadLong_mEF6C6258FA00B06BD9FC9C915D2FD88782F189EE_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MemoryInputBuffer_ReadFloat_mE14AA2102E038B4F1EFDB62E542175F4F71D807D (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_1, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		float L_6;
		L_6 = ScalarSpanReader_ReadFloat_m32F827D9BF154056E0D037EBF64A022D78946EDA_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  float MemoryInputBuffer_ReadFloat_mE14AA2102E038B4F1EFDB62E542175F4F71D807D_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C*>(__this + _offset);
	float _returnValue;
	_returnValue = MemoryInputBuffer_ReadFloat_mE14AA2102E038B4F1EFDB62E542175F4F71D807D_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double MemoryInputBuffer_ReadDouble_mD94B0BA360DF3893C26D078EC27373F539B430F9 (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_1, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		double L_6;
		L_6 = ScalarSpanReader_ReadDouble_m61D5C204BA9E81DA538C2A4489E038F5A5310A01_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  double MemoryInputBuffer_ReadDouble_mD94B0BA360DF3893C26D078EC27373F539B430F9_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C*>(__this + _offset);
	double _returnValue;
	_returnValue = MemoryInputBuffer_ReadDouble_mD94B0BA360DF3893C26D078EC27373F539B430F9_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemoryInputBuffer_ReadString_m1225E36CFDEFC37E0F5EE651BFB80C9609850116 (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, int32_t ___1_byteLength, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_encoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_1, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		int32_t L_4 = ___1_byteLength;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5;
		L_5 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_0), L_3, L_4, Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_6;
		L_6 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_5, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_7 = ___2_encoding;
		String_t* L_8;
		L_8 = ScalarSpanReader_ReadString_m3BCFF4018AAEB11379DF79D99125EFC2F8A564A7_inline(L_6, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  String_t* MemoryInputBuffer_ReadString_m1225E36CFDEFC37E0F5EE651BFB80C9609850116_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, int32_t ___1_byteLength, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_encoding, const RuntimeMethod* method)
{
	MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = MemoryInputBuffer_ReadString_m1225E36CFDEFC37E0F5EE651BFB80C9609850116_inline(_thisAdjusted, ___0_offset, ___1_byteLength, ___2_encoding, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryInputBuffer_GetReadOnlySpan_m6228ECF82D2E49ADE8DE631392C33291EA411C92 (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_1, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_3;
		L_3 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_2, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryInputBuffer_GetReadOnlySpan_m6228ECF82D2E49ADE8DE631392C33291EA411C92_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C*>(__this + _offset);
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D _returnValue;
	_returnValue = MemoryInputBuffer_GetReadOnlySpan_m6228ECF82D2E49ADE8DE631392C33291EA411C92_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryInputBuffer_GetSpan_m4375D749C94959D15F4B179D6CF52A4E7D851721 (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_1, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryInputBuffer_GetSpan_m4375D749C94959D15F4B179D6CF52A4E7D851721_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C*>(__this + _offset);
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 _returnValue;
	_returnValue = MemoryInputBuffer_GetSpan_m4375D749C94959D15F4B179D6CF52A4E7D851721_inline(_thisAdjusted, method);
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
IL2CPP_EXTERN_C void ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_marshal_pinvoke(const ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434& unmarshaled, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_marshaled_pinvoke& marshaled)
{
	Exception_t* ___pointerException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'pointer' of type 'ReadOnlyMemoryInputBuffer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___pointerException, NULL);
}
IL2CPP_EXTERN_C void ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_marshal_pinvoke_back(const ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_marshaled_pinvoke& marshaled, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434& unmarshaled)
{
	Exception_t* ___pointerException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'pointer' of type 'ReadOnlyMemoryInputBuffer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___pointerException, NULL);
}
IL2CPP_EXTERN_C void ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_marshal_pinvoke_cleanup(ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_marshal_com(const ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434& unmarshaled, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_marshaled_com& marshaled)
{
	Exception_t* ___pointerException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'pointer' of type 'ReadOnlyMemoryInputBuffer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___pointerException, NULL);
}
IL2CPP_EXTERN_C void ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_marshal_com_back(const ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_marshaled_com& marshaled, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434& unmarshaled)
{
	Exception_t* ___pointerException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'pointer' of type 'ReadOnlyMemoryInputBuffer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___pointerException, NULL);
}
IL2CPP_EXTERN_C void ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_marshal_com_cleanup(ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyMemoryInputBuffer_get_IsPinned_m2696AF9A78AEDAD37862169DF4C96783CC508986 (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, const RuntimeMethod* method) 
{
	{
		MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* L_0 = __this->___pointer;
		NullCheck(L_0);
		bool L_1 = L_0->___isPinned;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool ReadOnlyMemoryInputBuffer_get_IsPinned_m2696AF9A78AEDAD37862169DF4C96783CC508986_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434*>(__this + _offset);
	bool _returnValue;
	_returnValue = ReadOnlyMemoryInputBuffer_get_IsPinned_m2696AF9A78AEDAD37862169DF4C96783CC508986(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyMemoryInputBuffer_get_Length_m480302BEB2727674B285D42252D3B065561D6B0A (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Length_m2E20B5DC76A91D078F8827624C654EB90EFD5392_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* L_0 = __this->___pointer;
		NullCheck(L_0);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_1 = (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(&L_0->___memory);
		int32_t L_2;
		L_2 = ReadOnlyMemory_1_get_Length_m2E20B5DC76A91D078F8827624C654EB90EFD5392(L_1, ReadOnlyMemory_1_get_Length_m2E20B5DC76A91D078F8827624C654EB90EFD5392_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t ReadOnlyMemoryInputBuffer_get_Length_m480302BEB2727674B285D42252D3B065561D6B0A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ReadOnlyMemoryInputBuffer_get_Length_m480302BEB2727674B285D42252D3B065561D6B0A_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ReadOnlyMemoryInputBuffer_ReadByte_m262C244E65D77C5F29F13D205E3351E5235975A7 (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* L_0 = __this->___pointer;
		NullCheck(L_0);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_1 = (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(&L_0->___memory);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline(L_1, ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&V_0), L_3, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		uint8_t L_5;
		L_5 = ScalarSpanReader_ReadByte_m1075027AAC4CD98D86A85CD284489B586B69EC7A_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  uint8_t ReadOnlyMemoryInputBuffer_ReadByte_m262C244E65D77C5F29F13D205E3351E5235975A7_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434*>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = ReadOnlyMemoryInputBuffer_ReadByte_m262C244E65D77C5F29F13D205E3351E5235975A7_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t ReadOnlyMemoryInputBuffer_ReadSByte_m78A0BC6139E18D75BA9B5CA65260DF6E9DF1D0AA (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* L_0 = __this->___pointer;
		NullCheck(L_0);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_1 = (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(&L_0->___memory);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline(L_1, ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&V_0), L_3, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		int8_t L_5;
		L_5 = ScalarSpanReader_ReadSByte_mDCDF03A71770C9116EFF00C89E5FB1B6E8169BBB_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  int8_t ReadOnlyMemoryInputBuffer_ReadSByte_m78A0BC6139E18D75BA9B5CA65260DF6E9DF1D0AA_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434*>(__this + _offset);
	int8_t _returnValue;
	_returnValue = ReadOnlyMemoryInputBuffer_ReadSByte_m78A0BC6139E18D75BA9B5CA65260DF6E9DF1D0AA_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ReadOnlyMemoryInputBuffer_ReadUShort_m069C27639C0D50A597C1DC5084464873F4D28FF3 (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* L_0 = __this->___pointer;
		NullCheck(L_0);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_1 = (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(&L_0->___memory);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline(L_1, ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&V_0), L_3, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		uint16_t L_5;
		L_5 = ScalarSpanReader_ReadUShort_m327796534738A7AF6BC3FA7A8838AC0427076483_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  uint16_t ReadOnlyMemoryInputBuffer_ReadUShort_m069C27639C0D50A597C1DC5084464873F4D28FF3_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434*>(__this + _offset);
	uint16_t _returnValue;
	_returnValue = ReadOnlyMemoryInputBuffer_ReadUShort_m069C27639C0D50A597C1DC5084464873F4D28FF3_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ReadOnlyMemoryInputBuffer_ReadShort_mBBC035DAD7241C150E74DC0E869ED2C6246E440D (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* L_0 = __this->___pointer;
		NullCheck(L_0);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_1 = (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(&L_0->___memory);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline(L_1, ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&V_0), L_3, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		int16_t L_5;
		L_5 = ScalarSpanReader_ReadShort_mF811261B1B8D3E2F468440430FDFB3116A8411AF_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  int16_t ReadOnlyMemoryInputBuffer_ReadShort_mBBC035DAD7241C150E74DC0E869ED2C6246E440D_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434*>(__this + _offset);
	int16_t _returnValue;
	_returnValue = ReadOnlyMemoryInputBuffer_ReadShort_mBBC035DAD7241C150E74DC0E869ED2C6246E440D_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ReadOnlyMemoryInputBuffer_ReadUInt_m59972C86C98665CE9E7DE63806C2C76D3A6F34CB (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* L_0 = __this->___pointer;
		NullCheck(L_0);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_1 = (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(&L_0->___memory);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline(L_1, ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&V_0), L_3, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		uint32_t L_5;
		L_5 = ScalarSpanReader_ReadUInt_m5A2AA7E6CF46CE633A8F4CC1ABDE9E465C37A948_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  uint32_t ReadOnlyMemoryInputBuffer_ReadUInt_m59972C86C98665CE9E7DE63806C2C76D3A6F34CB_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = ReadOnlyMemoryInputBuffer_ReadUInt_m59972C86C98665CE9E7DE63806C2C76D3A6F34CB_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyMemoryInputBuffer_ReadInt_m8A10C08D7D59D34CB8E64ADFD4BCC78E981D2F64 (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* L_0 = __this->___pointer;
		NullCheck(L_0);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_1 = (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(&L_0->___memory);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline(L_1, ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&V_0), L_3, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		int32_t L_5;
		L_5 = ScalarSpanReader_ReadInt_mE9DF8741A87BC7857ED46834E76D7AE354FCCFF1_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  int32_t ReadOnlyMemoryInputBuffer_ReadInt_m8A10C08D7D59D34CB8E64ADFD4BCC78E981D2F64_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ReadOnlyMemoryInputBuffer_ReadInt_m8A10C08D7D59D34CB8E64ADFD4BCC78E981D2F64_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ReadOnlyMemoryInputBuffer_ReadULong_m61778DB525B36509D1B86EFDE502BBFA23C72BD9 (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* L_0 = __this->___pointer;
		NullCheck(L_0);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_1 = (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(&L_0->___memory);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline(L_1, ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&V_0), L_3, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		uint64_t L_5;
		L_5 = ScalarSpanReader_ReadULong_m6EE8443BA6A3D6E60DB079A1614B1437470450B3_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  uint64_t ReadOnlyMemoryInputBuffer_ReadULong_m61778DB525B36509D1B86EFDE502BBFA23C72BD9_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434*>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = ReadOnlyMemoryInputBuffer_ReadULong_m61778DB525B36509D1B86EFDE502BBFA23C72BD9_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ReadOnlyMemoryInputBuffer_ReadLong_m2F8BDA46BCC46D5B0763617163EA0064E8B43E06 (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* L_0 = __this->___pointer;
		NullCheck(L_0);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_1 = (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(&L_0->___memory);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline(L_1, ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&V_0), L_3, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		int64_t L_5;
		L_5 = ScalarSpanReader_ReadLong_m43F728FDBAA68DAE3FB9034156AC1BDC51312FD1_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  int64_t ReadOnlyMemoryInputBuffer_ReadLong_m2F8BDA46BCC46D5B0763617163EA0064E8B43E06_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = ReadOnlyMemoryInputBuffer_ReadLong_m2F8BDA46BCC46D5B0763617163EA0064E8B43E06_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ReadOnlyMemoryInputBuffer_ReadFloat_m7B47901E475D0552B0A0EDE09DE783842F74BF0F (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* L_0 = __this->___pointer;
		NullCheck(L_0);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_1 = (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(&L_0->___memory);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline(L_1, ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&V_0), L_3, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		float L_5;
		L_5 = ScalarSpanReader_ReadFloat_m32F827D9BF154056E0D037EBF64A022D78946EDA_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  float ReadOnlyMemoryInputBuffer_ReadFloat_m7B47901E475D0552B0A0EDE09DE783842F74BF0F_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434*>(__this + _offset);
	float _returnValue;
	_returnValue = ReadOnlyMemoryInputBuffer_ReadFloat_m7B47901E475D0552B0A0EDE09DE783842F74BF0F_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ReadOnlyMemoryInputBuffer_ReadDouble_mDA89B186B08BE02407275845601944816131C5F8 (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* L_0 = __this->___pointer;
		NullCheck(L_0);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_1 = (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(&L_0->___memory);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline(L_1, ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&V_0), L_3, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		double L_5;
		L_5 = ScalarSpanReader_ReadDouble_m61D5C204BA9E81DA538C2A4489E038F5A5310A01_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  double ReadOnlyMemoryInputBuffer_ReadDouble_mDA89B186B08BE02407275845601944816131C5F8_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434*>(__this + _offset);
	double _returnValue;
	_returnValue = ReadOnlyMemoryInputBuffer_ReadDouble_mDA89B186B08BE02407275845601944816131C5F8_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyMemoryInputBuffer_ReadString_m51ED754CCE3ACE126E4B772CA97CDC55AA3725D2 (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, int32_t ___1_byteLength, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_encoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* L_0 = __this->___pointer;
		NullCheck(L_0);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_1 = (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(&L_0->___memory);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline(L_1, ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		int32_t L_4 = ___1_byteLength;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_inline((&V_0), L_3, L_4, ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_RuntimeMethod_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6 = ___2_encoding;
		String_t* L_7;
		L_7 = ScalarSpanReader_ReadString_m3BCFF4018AAEB11379DF79D99125EFC2F8A564A7_inline(L_5, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  String_t* ReadOnlyMemoryInputBuffer_ReadString_m51ED754CCE3ACE126E4B772CA97CDC55AA3725D2_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, int32_t ___1_byteLength, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_encoding, const RuntimeMethod* method)
{
	ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ReadOnlyMemoryInputBuffer_ReadString_m51ED754CCE3ACE126E4B772CA97CDC55AA3725D2_inline(_thisAdjusted, ___0_offset, ___1_byteLength, ___2_encoding, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlyMemoryInputBuffer_GetReadOnlySpan_m60CF9ECA3455FCFAED2BF9AC0432782D1E4A23B3 (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* L_0 = __this->___pointer;
		NullCheck(L_0);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_1 = (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(&L_0->___memory);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline(L_1, ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlyMemoryInputBuffer_GetReadOnlySpan_m60CF9ECA3455FCFAED2BF9AC0432782D1E4A23B3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434*>(__this + _offset);
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D _returnValue;
	_returnValue = ReadOnlyMemoryInputBuffer_GetReadOnlySpan_m60CF9ECA3455FCFAED2BF9AC0432782D1E4A23B3_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ReadOnlyMemoryInputBuffer_GetSpan_m9807C4808301D524E529AF4F4BD6383A56C9A176 (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral72C99E8901458D21B629558BBEFF75E1AE98D5F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyMemoryInputBuffer_GetSpan_m9807C4808301D524E529AF4F4BD6383A56C9A176_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ReadOnlyMemoryInputBuffer_GetSpan_m9807C4808301D524E529AF4F4BD6383A56C9A176_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434*>(__this + _offset);
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 _returnValue;
	_returnValue = ReadOnlyMemoryInputBuffer_GetSpan_m9807C4808301D524E529AF4F4BD6383A56C9A176(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedStringWriter__ctor_mA2677DA863A266DCB183EE3CB84AF4659725C87C (SharedStringWriter_tC8125A04EB9B588A00E05949A87D8BBE1E3DE690* __this, const RuntimeMethod* method) 
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = V_0;
		SharedStringWriter__ctor_m353639F69E99F1A495E768A2EA8ADF616C9254A1(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedStringWriter__ctor_m353639F69E99F1A495E768A2EA8ADF616C9254A1 (SharedStringWriter_tC8125A04EB9B588A00E05949A87D8BBE1E3DE690* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_hashTableCapacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriteCacheEntryU5BU5D_t08976F7D99C9C7774BF844284EDCF0EFEA4827B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	SharedStringWriter_tC8125A04EB9B588A00E05949A87D8BBE1E3DE690* G_B4_0 = NULL;
	SharedStringWriter_tC8125A04EB9B588A00E05949A87D8BBE1E3DE690* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	SharedStringWriter_tC8125A04EB9B588A00E05949A87D8BBE1E3DE690* G_B5_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___0_hashTableCapacity;
		V_0 = L_0;
		V_1 = 0;
		int32_t L_1;
		L_1 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_0), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		int32_t L_2 = V_1;
		bool L_3;
		L_3 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_0), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!((int32_t)(((((int32_t)((((int32_t)L_1) > ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0)&(int32_t)L_3)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6026C236576EF7497E64A6509FBD52A322838D8B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SharedStringWriter__ctor_m353639F69E99F1A495E768A2EA8ADF616C9254A1_RuntimeMethod_var)));
	}

IL_002c:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_5 = ___0_hashTableCapacity;
		V_0 = L_5;
		bool L_6;
		L_6 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_0), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (L_6)
		{
			G_B4_0 = __this;
			goto IL_003f;
		}
		G_B3_0 = __this;
	}
	{
		G_B5_0 = ((int32_t)1019);
		G_B5_1 = G_B3_0;
		goto IL_0046;
	}

IL_003f:
	{
		int32_t L_7;
		L_7 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_0), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		G_B5_0 = L_7;
		G_B5_1 = G_B4_0;
	}

IL_0046:
	{
		WriteCacheEntryU5BU5D_t08976F7D99C9C7774BF844284EDCF0EFEA4827B3* L_8 = (WriteCacheEntryU5BU5D_t08976F7D99C9C7774BF844284EDCF0EFEA4827B3*)(WriteCacheEntryU5BU5D_t08976F7D99C9C7774BF844284EDCF0EFEA4827B3*)SZArrayNew(WriteCacheEntryU5BU5D_t08976F7D99C9C7774BF844284EDCF0EFEA4827B3_il2cpp_TypeInfo_var, (uint32_t)G_B5_0);
		NullCheck(G_B5_1);
		G_B5_1->___sharedStringOffsetCache = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&G_B5_1->___sharedStringOffsetCache), (void*)L_8);
		SharedStringWriter_set_IsDirty_m6F68088942550C0846B803596AC0005B22BCAF34_inline(__this, (bool)1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SharedStringWriter_get_IsDirty_m1AD1FEF076C15CBE4211A8EE0A370DFB60DBD8ED (SharedStringWriter_tC8125A04EB9B588A00E05949A87D8BBE1E3DE690* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsDirtyU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedStringWriter_set_IsDirty_m6F68088942550C0846B803596AC0005B22BCAF34 (SharedStringWriter_tC8125A04EB9B588A00E05949A87D8BBE1E3DE690* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsDirtyU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedStringWriter_Reset_mD435845143030891CC67989628D4C78579E518CA (SharedStringWriter_tC8125A04EB9B588A00E05949A87D8BBE1E3DE690* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WriteCacheEntryU5BU5D_t08976F7D99C9C7774BF844284EDCF0EFEA4827B3* V_0 = NULL;
	int32_t V_1 = 0;
	WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE* V_2 = NULL;
	{
		WriteCacheEntryU5BU5D_t08976F7D99C9C7774BF844284EDCF0EFEA4827B3* L_0 = __this->___sharedStringOffsetCache;
		V_0 = L_0;
		V_1 = 0;
		goto IL_003c;
	}

IL_000b:
	{
		WriteCacheEntryU5BU5D_t08976F7D99C9C7774BF844284EDCF0EFEA4827B3* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		V_2 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)));
		WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE* L_3 = V_2;
		L_3->___String = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___String), (void*)(String_t*)NULL);
		WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE* L_4 = V_2;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = L_4->___Offsets;
		if (L_5)
		{
			goto IL_002d;
		}
	}
	{
		WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE* L_6 = V_2;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_7 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_7, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		L_6->___Offsets = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___Offsets), (void*)L_7);
	}

IL_002d:
	{
		WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE* L_8 = V_2;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_9 = L_8->___Offsets;
		NullCheck(L_9);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_9, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003c:
	{
		int32_t L_11 = V_1;
		WriteCacheEntryU5BU5D_t08976F7D99C9C7774BF844284EDCF0EFEA4827B3* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		SharedStringWriter_set_IsDirty_m6F68088942550C0846B803596AC0005B22BCAF34_inline(__this, (bool)0, NULL);
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
IL2CPP_EXTERN_C void WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE_marshal_pinvoke(const WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE& unmarshaled, WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE_marshaled_pinvoke& marshaled)
{
	Exception_t* ___OffsetsException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Offsets' of type 'WriteCacheEntry'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___OffsetsException, NULL);
}
IL2CPP_EXTERN_C void WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE_marshal_pinvoke_back(const WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE_marshaled_pinvoke& marshaled, WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE& unmarshaled)
{
	Exception_t* ___OffsetsException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Offsets' of type 'WriteCacheEntry'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___OffsetsException, NULL);
}
IL2CPP_EXTERN_C void WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE_marshal_pinvoke_cleanup(WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE_marshal_com(const WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE& unmarshaled, WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE_marshaled_com& marshaled)
{
	Exception_t* ___OffsetsException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Offsets' of type 'WriteCacheEntry'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___OffsetsException, NULL);
}
IL2CPP_EXTERN_C void WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE_marshal_com_back(const WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE_marshaled_com& marshaled, WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE& unmarshaled)
{
	Exception_t* ___OffsetsException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Offsets' of type 'WriteCacheEntry'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___OffsetsException, NULL);
}
IL2CPP_EXTERN_C void WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE_marshal_com_cleanup(WriteCacheEntry_t18A46E734E24E0B26934132778187104292949FE_marshaled_com& marshaled)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanWriter_WriteByte_m177A8891B785A25CB0FCE3D4A22A222CF69FCB30 (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, uint8_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___2_offset;
		uint8_t* L_1;
		L_1 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_span))->____pointer))->value, (L_0), ((&___0_span))->____length);
		uint8_t L_2 = ___1_value;
		*((int8_t*)L_1) = (int8_t)L_2;
		return;
	}
}
IL2CPP_EXTERN_C  void SpanWriter_WriteByte_m177A8891B785A25CB0FCE3D4A22A222CF69FCB30_AdjustorThunk (RuntimeObject* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, uint8_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method)
{
	SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB*>(__this + _offset);
	SpanWriter_WriteByte_m177A8891B785A25CB0FCE3D4A22A222CF69FCB30_inline(_thisAdjusted, ___0_span, ___1_value, ___2_offset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanWriter_WriteSByte_m648F97C38FD37A164FDFA88FAC4E1357F3ACBC88 (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, int8_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___2_offset;
		uint8_t* L_1;
		L_1 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_span))->____pointer))->value, (L_0), ((&___0_span))->____length);
		int8_t L_2 = ___1_value;
		*((int8_t*)L_1) = (int8_t)((int32_t)(uint8_t)L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void SpanWriter_WriteSByte_m648F97C38FD37A164FDFA88FAC4E1357F3ACBC88_AdjustorThunk (RuntimeObject* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, int8_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method)
{
	SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB*>(__this + _offset);
	SpanWriter_WriteSByte_m648F97C38FD37A164FDFA88FAC4E1357F3ACBC88_inline(_thisAdjusted, ___0_span, ___1_value, ___2_offset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanWriter_WriteUShort_m7CAA151E73A283CBB0089697DA7D4C75B0208B11 (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, uint16_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___2_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___0_span), L_0, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		uint16_t L_2 = ___1_value;
		BinaryPrimitives_WriteUInt16LittleEndian_mEA236B05E65D485C1934CCC155A6AF8A5C66773A_inline(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void SpanWriter_WriteUShort_m7CAA151E73A283CBB0089697DA7D4C75B0208B11_AdjustorThunk (RuntimeObject* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, uint16_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method)
{
	SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB*>(__this + _offset);
	SpanWriter_WriteUShort_m7CAA151E73A283CBB0089697DA7D4C75B0208B11_inline(_thisAdjusted, ___0_span, ___1_value, ___2_offset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanWriter_WriteShort_m021B686064D7C48EAB1836B55C30CAA885D2E2B4 (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, int16_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___2_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___0_span), L_0, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		int16_t L_2 = ___1_value;
		BinaryPrimitives_WriteInt16LittleEndian_m5604129106AB8E5E79BE8089862A6AAFE8822FFD_inline(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void SpanWriter_WriteShort_m021B686064D7C48EAB1836B55C30CAA885D2E2B4_AdjustorThunk (RuntimeObject* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, int16_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method)
{
	SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB*>(__this + _offset);
	SpanWriter_WriteShort_m021B686064D7C48EAB1836B55C30CAA885D2E2B4_inline(_thisAdjusted, ___0_span, ___1_value, ___2_offset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanWriter_WriteUInt_m21541B40F8BBCCD84DBF0C5EAFE90972670A6547 (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, uint32_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___2_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___0_span), L_0, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		uint32_t L_2 = ___1_value;
		BinaryPrimitives_WriteUInt32LittleEndian_mF5A685773CF1618F130D77F5072BDB7C389793B1_inline(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void SpanWriter_WriteUInt_m21541B40F8BBCCD84DBF0C5EAFE90972670A6547_AdjustorThunk (RuntimeObject* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, uint32_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method)
{
	SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB*>(__this + _offset);
	SpanWriter_WriteUInt_m21541B40F8BBCCD84DBF0C5EAFE90972670A6547_inline(_thisAdjusted, ___0_span, ___1_value, ___2_offset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanWriter_WriteInt_m5A076175E293EF6FE718200016C8C7C031E1AAFF (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, int32_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___2_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___0_span), L_0, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		int32_t L_2 = ___1_value;
		BinaryPrimitives_WriteInt32LittleEndian_m216AF52C3BA0D7502D9D60E8900B3A9DC3915DDF_inline(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void SpanWriter_WriteInt_m5A076175E293EF6FE718200016C8C7C031E1AAFF_AdjustorThunk (RuntimeObject* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, int32_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method)
{
	SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB*>(__this + _offset);
	SpanWriter_WriteInt_m5A076175E293EF6FE718200016C8C7C031E1AAFF_inline(_thisAdjusted, ___0_span, ___1_value, ___2_offset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanWriter_WriteULong_m543231470494BFDCAC017B3F7EB7D9755F6429F6 (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, uint64_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___2_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___0_span), L_0, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		uint64_t L_2 = ___1_value;
		BinaryPrimitives_WriteUInt64LittleEndian_mCC039600290A6A5201532593AF3BE095D74C1625_inline(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void SpanWriter_WriteULong_m543231470494BFDCAC017B3F7EB7D9755F6429F6_AdjustorThunk (RuntimeObject* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, uint64_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method)
{
	SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB*>(__this + _offset);
	SpanWriter_WriteULong_m543231470494BFDCAC017B3F7EB7D9755F6429F6_inline(_thisAdjusted, ___0_span, ___1_value, ___2_offset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanWriter_WriteLong_mDDA7CD000FF9CD99719C6B501A47318977D9CF3F (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, int64_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___2_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___0_span), L_0, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		int64_t L_2 = ___1_value;
		BinaryPrimitives_WriteInt64LittleEndian_m7EDA06941AC97EBE8B8B74FA461F3EF4C2C99884_inline(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void SpanWriter_WriteLong_mDDA7CD000FF9CD99719C6B501A47318977D9CF3F_AdjustorThunk (RuntimeObject* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, int64_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method)
{
	SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB*>(__this + _offset);
	SpanWriter_WriteLong_mDDA7CD000FF9CD99719C6B501A47318977D9CF3F_inline(_thisAdjusted, ___0_span, ___1_value, ___2_offset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanWriter_WriteFloat_m864B613E37DC12AB1EDF476A135E493FDF67F619 (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, float ___1_value, int32_t ___2_offset, const RuntimeMethod* method) 
{
	FloatLayout_tE533D6E84874B88011CA98CFF136647D72B8E5C6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	FloatLayout_tE533D6E84874B88011CA98CFF136647D72B8E5C6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(FloatLayout_tE533D6E84874B88011CA98CFF136647D72B8E5C6));
		float L_0 = ___1_value;
		(&V_1)->___value = L_0;
		FloatLayout_tE533D6E84874B88011CA98CFF136647D72B8E5C6 L_1 = V_1;
		V_0 = L_1;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_span;
		FloatLayout_tE533D6E84874B88011CA98CFF136647D72B8E5C6 L_3 = V_0;
		uint32_t L_4 = L_3.___bytes;
		int32_t L_5 = ___2_offset;
		SpanWriter_WriteUInt_m21541B40F8BBCCD84DBF0C5EAFE90972670A6547_inline(__this, L_2, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void SpanWriter_WriteFloat_m864B613E37DC12AB1EDF476A135E493FDF67F619_AdjustorThunk (RuntimeObject* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, float ___1_value, int32_t ___2_offset, const RuntimeMethod* method)
{
	SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB*>(__this + _offset);
	SpanWriter_WriteFloat_m864B613E37DC12AB1EDF476A135E493FDF67F619_inline(_thisAdjusted, ___0_span, ___1_value, ___2_offset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanWriter_WriteDouble_m3BB3E0F21FAD388378CCE0BCBDEB31DA48152FF6 (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, double ___1_value, int32_t ___2_offset, const RuntimeMethod* method) 
{
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_0 = ___0_span;
		double L_1 = ___1_value;
		int64_t L_2;
		L_2 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_1, NULL);
		int32_t L_3 = ___2_offset;
		SpanWriter_WriteLong_mDDA7CD000FF9CD99719C6B501A47318977D9CF3F_inline(__this, L_0, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void SpanWriter_WriteDouble_m3BB3E0F21FAD388378CCE0BCBDEB31DA48152FF6_AdjustorThunk (RuntimeObject* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, double ___1_value, int32_t ___2_offset, const RuntimeMethod* method)
{
	SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB*>(__this + _offset);
	SpanWriter_WriteDouble_m3BB3E0F21FAD388378CCE0BCBDEB31DA48152FF6_inline(_thisAdjusted, ___0_span, ___1_value, ___2_offset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanWriter_GetStringBytes_m464D526E005D9A6C88E98D2BA3EAC2B4388A6A52 (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, String_t* ___1_value, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_encoding, const RuntimeMethod* method) 
{
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0 = ___2_encoding;
		String_t* L_1 = ___1_value;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2;
		L_2 = String_op_Implicit_m7D7FE0449303AF92D8B2A85A06ADC6933B2ECC3A_inline(L_1, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3 = ___0_destination;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtualFuncInvoker2< int32_t, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 >::Invoke(38, L_0, L_2, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t SpanWriter_GetStringBytes_m464D526E005D9A6C88E98D2BA3EAC2B4388A6A52_AdjustorThunk (RuntimeObject* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, String_t* ___1_value, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_encoding, const RuntimeMethod* method)
{
	SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SpanWriter_GetStringBytes_m464D526E005D9A6C88E98D2BA3EAC2B4388A6A52_inline(_thisAdjusted, ___0_destination, ___1_value, ___2_encoding, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanWriter_FlushSharedStrings_mF99C3A89CBF026A31FBBDC9E5BBF2B562CDF5ED3 (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, RuntimeObject* ___0_writer, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_destination, SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8* ___2_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISharedStringWriter_FlushWrites_TisSpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB_m3C8AF02DC38DAA9B4DC4B0A63FACDFEA14E3AFA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_writer;
		SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB L_1 = (*(SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB*)__this);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___1_destination;
		SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8* L_3 = ___2_context;
		NullCheck(L_0);
		GenericInterfaceActionInvoker3< SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8* >::Invoke(ISharedStringWriter_FlushWrites_TisSpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB_m3C8AF02DC38DAA9B4DC4B0A63FACDFEA14E3AFA4_RuntimeMethod_var, L_0, L_1, L_2, L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void SpanWriter_FlushSharedStrings_mF99C3A89CBF026A31FBBDC9E5BBF2B562CDF5ED3_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_writer, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_destination, SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8* ___2_context, const RuntimeMethod* method)
{
	SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB*>(__this + _offset);
	SpanWriter_FlushSharedStrings_mF99C3A89CBF026A31FBBDC9E5BBF2B562CDF5ED3(_thisAdjusted, ___0_writer, ___1_destination, ___2_context, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotMutableException__ctor_m758F9E586587908EDA1B599A3A3B7899BBC4F3B1 (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_get_MaxToRetain_mA6905DC0FC0E0E6F3C90A17F5176E348172E4C63 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_t7B559096B246CD2C2556FDEB0EAC2276896FE497_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ((ObjectPool_t7B559096B246CD2C2556FDEB0EAC2276896FE497_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPool_t7B559096B246CD2C2556FDEB0EAC2276896FE497_il2cpp_TypeInfo_var))->___U3CMaxToRetainU3Ek__BackingField;
		return L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferEnumAttribute__ctor_mADD23F4511EA318AD4F2DFB7A83F10B477AA3D42 (FlatBufferEnumAttribute_tA3A8E1AB4B5B8C6A3F847CF356A39388821772E3* __this, Type_t* ___0_underlyingType, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		Type_t* L_0 = ___0_underlyingType;
		__this->___U3CDeclaredUnderlyingTypeU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDeclaredUnderlyingTypeU3Ek__BackingField), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferItemAttribute__ctor_m250BDBC94E10D950D7AFAFE9662D33ED3A34F098 (FlatBufferItemAttribute_t4590267358F6B47FF669BA8EFFCE1BF210AF67D7* __this, uint16_t ___0_index, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		uint16_t L_0 = ___0_index;
		__this->___U3CIndexU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferItemAttribute_set_Required_m68EE5C24F71078823417C798EE513C1ADD648858 (FlatBufferItemAttribute_t4590267358F6B47FF669BA8EFFCE1BF210AF67D7* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CRequiredU3Ek__BackingField = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferMetadataAttribute__ctor_m16E6C3D7DB8834DF6968276EF1E6A7827219981B (FlatBufferMetadataAttribute_t7720FBAA30BEDCC9739D240B0503C792217BFE74* __this, int32_t ___0_kind, String_t* ___1_value, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int32_t L_0 = ___0_kind;
		__this->___U3CKindU3Ek__BackingField = L_0;
		String_t* L_1 = ___1_value;
		__this->___U3CValueU3Ek__BackingField = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferStructAttribute__ctor_m4FAEA32DCAF8DFCF4472C4BCF83A2221F9041EBB (FlatBufferStructAttribute_t984D41F40D0116E24CEFBD1E2503F3229A8C1EAA* __this, const RuntimeMethod* method) 
{
	{
		__this->___U3CMemoryMarshalBehaviorU3Ek__BackingField = 1;
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatBufferTableAttribute__ctor_mF029E178F4F719E2374086E9250453181C4D4F7C (FlatBufferTableAttribute_t70CF5AC81692EB1E82AD7DF51DF1682134689794* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatSharpInternal_Assert_m0870D2EC3754A310199E51C7B6C776569CF436FE (bool ___0_condition, String_t* ___1_message, String_t* ___2_memberName, String_t* ___3_fileName, int32_t ___4_lineNumber, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_condition;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___1_message;
		String_t* L_2 = ___2_memberName;
		String_t* L_3 = ___3_fileName;
		int32_t L_4 = ___4_lineNumber;
		FlatSharpInternal_ThrowAssertFailed_m08FF69C55D973A7E704FFC306689774D91077B57(L_1, L_2, L_3, L_4, NULL);
	}

IL_000d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void FlatSharpInternal_ThrowAssertFailed_m08FF69C55D973A7E704FFC306689774D91077B57 (String_t* ___0_message, String_t* ___1_memberName, String_t* ___2_fileName, int32_t ___3_lineNumber, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_message;
		String_t* L_1 = ___1_memberName;
		String_t* L_2 = ___2_fileName;
		int32_t L_3 = ___3_lineNumber;
		FlatSharpInternalException_t582A03DA9A8F1C29DF1CCDA3DAEC2EC0CADC1877* L_4 = (FlatSharpInternalException_t582A03DA9A8F1C29DF1CCDA3DAEC2EC0CADC1877*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlatSharpInternalException_t582A03DA9A8F1C29DF1CCDA3DAEC2EC0CADC1877_il2cpp_TypeInfo_var)));
		FlatSharpInternalException__ctor_m98D1ACB853DD1A7DFF9C2F12F4EDC1E448BDA500(L_4, L_0, L_1, L_2, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlatSharpInternal_ThrowAssertFailed_m08FF69C55D973A7E704FFC306689774D91077B57_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatSharpInternal_AssertLittleEndian_m081A518A971D65938BCB69ECD048E08D84135751 (const RuntimeMethod* method) 
{
	{
		if (il2cpp_codegen_is_little_endian())
		{
			goto IL_001e;
		}
	}
	{
		FlatSharpInternalException_t582A03DA9A8F1C29DF1CCDA3DAEC2EC0CADC1877* L_0 = (FlatSharpInternalException_t582A03DA9A8F1C29DF1CCDA3DAEC2EC0CADC1877*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlatSharpInternalException_t582A03DA9A8F1C29DF1CCDA3DAEC2EC0CADC1877_il2cpp_TypeInfo_var)));
		FlatSharpInternalException__ctor_m98D1ACB853DD1A7DFF9C2F12F4EDC1E448BDA500(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2A985F0896AE66204545A5EE47F76FBD22AC0D99)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral208C4FF0AD572EE9C8497508B814F02C8C8CADB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral044D821692202A1093103505D65C44608093EA38)), ((int32_t)71), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlatSharpInternal_AssertLittleEndian_m081A518A971D65938BCB69ECD048E08D84135751_RuntimeMethod_var)));
	}

IL_001e:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlatSharpInternalException__ctor_m98D1ACB853DD1A7DFF9C2F12F4EDC1E448BDA500 (FlatSharpInternalException_t582A03DA9A8F1C29DF1CCDA3DAEC2EC0CADC1877* __this, String_t* ___0_message, String_t* ___1_memberName, String_t* ___2_fileName, int32_t ___3_lineNumber, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA25869D243676A5E02614C1D63A7E7D7E97624C);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___0_message;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4 = ___2_fileName;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = Path_GetFileName_mB1A8CE314EE250B06E3D33142315E2BD3A75D1D6(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_3;
		String_t* L_7 = ___1_memberName;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		int32_t L_9 = ___3_lineNumber;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_11);
		String_t* L_12;
		L_12 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralBA25869D243676A5E02614C1D63A7E7D7E97624C, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_12, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedSerializerParseArguments__ctor_m8C3376E97B135A40406E6C18E3E8810579F3807E (GeneratedSerializerParseArguments_tA62665BC0CD65EF69B688A96B836271FD900BBBC* __this, int32_t ___0_offset, int16_t ___1_depthLimit, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_offset;
		__this->___U3COffsetU3Ek__BackingField = L_0;
		int16_t L_1 = ___1_depthLimit;
		__this->___U3CDepthLimitU3Ek__BackingField = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void GeneratedSerializerParseArguments__ctor_m8C3376E97B135A40406E6C18E3E8810579F3807E_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, int16_t ___1_depthLimit, const RuntimeMethod* method)
{
	GeneratedSerializerParseArguments_tA62665BC0CD65EF69B688A96B836271FD900BBBC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GeneratedSerializerParseArguments_tA62665BC0CD65EF69B688A96B836271FD900BBBC*>(__this + _offset);
	GeneratedSerializerParseArguments__ctor_m8C3376E97B135A40406E6C18E3E8810579F3807E(_thisAdjusted, ___0_offset, ___1_depthLimit, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GeneratedSerializerParseArguments_get_Offset_mF6FA3C2698A3C2413400B276CB0A511010ED97AD (GeneratedSerializerParseArguments_tA62665BC0CD65EF69B688A96B836271FD900BBBC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3COffsetU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t GeneratedSerializerParseArguments_get_Offset_mF6FA3C2698A3C2413400B276CB0A511010ED97AD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GeneratedSerializerParseArguments_tA62665BC0CD65EF69B688A96B836271FD900BBBC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GeneratedSerializerParseArguments_tA62665BC0CD65EF69B688A96B836271FD900BBBC*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = GeneratedSerializerParseArguments_get_Offset_mF6FA3C2698A3C2413400B276CB0A511010ED97AD_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t GeneratedSerializerParseArguments_get_DepthLimit_mC6311EEAE451CB544CF735FC34618D31F6CC645F (GeneratedSerializerParseArguments_tA62665BC0CD65EF69B688A96B836271FD900BBBC* __this, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = __this->___U3CDepthLimitU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int16_t GeneratedSerializerParseArguments_get_DepthLimit_mC6311EEAE451CB544CF735FC34618D31F6CC645F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GeneratedSerializerParseArguments_tA62665BC0CD65EF69B688A96B836271FD900BBBC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GeneratedSerializerParseArguments_tA62665BC0CD65EF69B688A96B836271FD900BBBC*>(__this + _offset);
	int16_t _returnValue;
	_returnValue = GeneratedSerializerParseArguments_get_DepthLimit_mC6311EEAE451CB544CF735FC34618D31F6CC645F_inline(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void InputBufferExtensions_ThrowUOffsetLessThanMinimumException_mFB1BF22CE762CE8BD8B7159538B383217AFE481D (uint32_t ___0_uoffset, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = 4;
		RuntimeObject* L_1 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_0);
		uint32_t L_2 = ___0_uoffset;
		uint32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_3);
		String_t* L_5;
		L_5 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB1EE3EFCBE7281AC46640126CB00EC710251A257)), L_1, L_4, NULL);
		InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1* L_6 = (InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m514879053D89E3C8229A01AA8970237FA5409532(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InputBufferExtensions_ThrowUOffsetLessThanMinimumException_mFB1BF22CE762CE8BD8B7159538B383217AFE481D_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void InputBufferExtensions_ThrowInvalidVtableException_mF0B26A1F6EECE4030EAB9F1940A256AA2B9EAB35 (const RuntimeMethod* method) 
{
	{
		InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1* L_0 = (InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m514879053D89E3C8229A01AA8970237FA5409532(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBAD6318B5E5BFC109A7426FE409578C7D1B86788)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InputBufferExtensions_ThrowInvalidVtableException_mF0B26A1F6EECE4030EAB9F1940A256AA2B9EAB35_RuntimeMethod_var)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ScalarSpanReader_ReadByte_m1075027AAC4CD98D86A85CD284489B586B69EC7A (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0;
		L_0 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_span))->____pointer))->value, (0), ((&___0_span))->____length);
		int32_t L_1 = *((uint8_t*)L_0);
		return (uint8_t)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t ScalarSpanReader_ReadSByte_mDCDF03A71770C9116EFF00C89E5FB1B6E8169BBB (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0;
		L_0 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_span))->____pointer))->value, (0), ((&___0_span))->____length);
		int32_t L_1 = *((uint8_t*)L_0);
		return ((int8_t)L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ScalarSpanReader_ReadUShort_m327796534738A7AF6BC3FA7A8838AC0427076483 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_span;
		uint16_t L_1;
		L_1 = BinaryPrimitives_ReadUInt16LittleEndian_m6233B916B888350309C273E87ED2C3F787260889_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ScalarSpanReader_ReadShort_mF811261B1B8D3E2F468440430FDFB3116A8411AF (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_span;
		int16_t L_1;
		L_1 = BinaryPrimitives_ReadInt16LittleEndian_mD2220A9E387CCFF63A818DABC6A35C92B240BDC4_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ScalarSpanReader_ReadUInt_m5A2AA7E6CF46CE633A8F4CC1ABDE9E465C37A948 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_span;
		uint32_t L_1;
		L_1 = BinaryPrimitives_ReadUInt32LittleEndian_m1D2A6AA323C53D511E84C677D1F8F17077F3B070_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScalarSpanReader_ReadInt_mE9DF8741A87BC7857ED46834E76D7AE354FCCFF1 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_span;
		int32_t L_1;
		L_1 = BinaryPrimitives_ReadInt32LittleEndian_m8FF3A5E10E26FEC7EA2FF160B17D0BB51B4A8AC5_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ScalarSpanReader_ReadULong_m6EE8443BA6A3D6E60DB079A1614B1437470450B3 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_span;
		uint64_t L_1;
		L_1 = BinaryPrimitives_ReadUInt64LittleEndian_m9F91B7C963E163D3064EA52D2C3A4075A33FB32B_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ScalarSpanReader_ReadLong_m43F728FDBAA68DAE3FB9034156AC1BDC51312FD1 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_span;
		int64_t L_1;
		L_1 = BinaryPrimitives_ReadInt64LittleEndian_mE8A837185C132F5DCFA81A9D0F5CDB92000B6CF9_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScalarSpanReader_ReadFloat_m32F827D9BF154056E0D037EBF64A022D78946EDA (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) 
{
	FloatLayout_tE533D6E84874B88011CA98CFF136647D72B8E5C6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(FloatLayout_tE533D6E84874B88011CA98CFF136647D72B8E5C6));
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_span;
		uint32_t L_1;
		L_1 = ScalarSpanReader_ReadUInt_m5A2AA7E6CF46CE633A8F4CC1ABDE9E465C37A948_inline(L_0, NULL);
		(&V_0)->___bytes = L_1;
		FloatLayout_tE533D6E84874B88011CA98CFF136647D72B8E5C6 L_2 = V_0;
		float L_3 = L_2.___value;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ScalarSpanReader_ReadDouble_m61D5C204BA9E81DA538C2A4489E038F5A5310A01 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_span;
		int64_t L_1;
		L_1 = ScalarSpanReader_ReadLong_m43F728FDBAA68DAE3FB9034156AC1BDC51312FD1_inline(L_0, NULL);
		double L_2;
		L_2 = BitConverter_Int64BitsToDouble_m0471A5DA68629692DE031E855EB537CBB4CA9A55_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ScalarSpanReader_ReadString_m3BCFF4018AAEB11379DF79D99125EFC2F8A564A7 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_encoding, const RuntimeMethod* method) 
{
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0 = ___1_encoding;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1 = ___0_span;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = Encoding_GetString_m6FE2707C33758C7F10750B79FCA7767F4C2CA008(L_0, L_1, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ObjectPoolDisposalState_ShouldReturnToPool_m1E86323509ADB2D42B62F6728224CFE05A814B40 (int32_t ___0_option, bool ___1_force, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___1_force;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___0_option;
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_0008:
	{
		return (bool)1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationContext__ctor_m95DA37319F0F61EFF1F21508875CF0C4E4F98651 (SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6C7F9D5295A0F6F1D9A9EA6F710012EDC72E849C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t27B768AC089986FAE389AC96023E04AFE9D70345_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		List_1_t27B768AC089986FAE389AC96023E04AFE9D70345* L_0 = (List_1_t27B768AC089986FAE389AC96023E04AFE9D70345*)il2cpp_codegen_object_new(List_1_t27B768AC089986FAE389AC96023E04AFE9D70345_il2cpp_TypeInfo_var);
		List_1__ctor_m6C7F9D5295A0F6F1D9A9EA6F710012EDC72E849C(L_0, List_1__ctor_m6C7F9D5295A0F6F1D9A9EA6F710012EDC72E849C_RuntimeMethod_var);
		__this->___postSerializeActions = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___postSerializeActions), (void*)L_0);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_1, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___vtableOffsets = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vtableOffsets), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationContext_get_Offset_m50B0563DD7D5ABF423FE66D599784EDA53E7C6D6 (SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___offset;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationContext_set_Offset_mB6840776408B00CBCBEB8C844B092B70EF5742EB (SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___offset = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationContext_set_SharedStringWriter_m2AA6B0B83D021A882258C9A824F33E5B4EFC87ED (SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CSharedStringWriterU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSharedStringWriterU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationContext_Reset_mBF3B4DFC52506672971835CE91B86CD1A7C30748 (SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m8B230FBF8A4EFC492FE21823E487E2F52DBE2F8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___offset = 0;
		int32_t L_0 = ___0_capacity;
		__this->___capacity = L_0;
		SerializationContext_set_SharedStringWriter_m2AA6B0B83D021A882258C9A824F33E5B4EFC87ED_inline(__this, (RuntimeObject*)NULL, NULL);
		List_1_t27B768AC089986FAE389AC96023E04AFE9D70345* L_1 = __this->___postSerializeActions;
		NullCheck(L_1);
		List_1_Clear_m8B230FBF8A4EFC492FE21823E487E2F52DBE2F8F_inline(L_1, List_1_Clear_m8B230FBF8A4EFC492FE21823E487E2F52DBE2F8F_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = __this->___vtableOffsets;
		NullCheck(L_2);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_2, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationContext_InvokePostSerializeActions_mECD59429415ABF1176204AC7303EEED1296E7089 (SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m318592409A425596B36D48B3FE209C2F8DD53BBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFFD5464C4B443B9EF1223A071F800F55E30B8AA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t27B768AC089986FAE389AC96023E04AFE9D70345* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		List_1_t27B768AC089986FAE389AC96023E04AFE9D70345* L_0 = __this->___postSerializeActions;
		V_0 = L_0;
		List_1_t27B768AC089986FAE389AC96023E04AFE9D70345* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m318592409A425596B36D48B3FE209C2F8DD53BBD_inline(L_1, List_1_get_Count_m318592409A425596B36D48B3FE209C2F8DD53BBD_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		goto IL_0024;
	}

IL_0012:
	{
		List_1_t27B768AC089986FAE389AC96023E04AFE9D70345* L_3 = V_0;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		PostSerializeAction_t24986B772136F5445F4DDACD441710C972B014E6* L_5;
		L_5 = List_1_get_Item_mFFD5464C4B443B9EF1223A071F800F55E30B8AA4(L_3, L_4, List_1_get_Item_mFFD5464C4B443B9EF1223A071F800F55E30B8AA4_RuntimeMethod_var);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_6 = ___0_span;
		NullCheck(L_5);
		PostSerializeAction_Invoke_m4E114361E43216F3776DCAA90C66A0C774C902DD_inline(L_5, L_6, __this, NULL);
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0024:
	{
		int32_t L_8 = V_2;
		int32_t L_9 = V_1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationContext_AllocateVector_m8410EE60C2BF058697669A6E35BC7A05D948ADBF (SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8* __this, int32_t ___0_itemAlignment, int32_t ___1_numberOfItems, int32_t ___2_sizePerItem, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationContext_AllocateVector_m8410EE60C2BF058697669A6E35BC7A05D948ADBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationHelpers_t6B4CA19FBCA6530D0EA7619C289F98186436D4DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___1_numberOfItems;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2D0803957DB1AD222FA7468A71A7B4D9B446975A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationContext_AllocateVector_m8410EE60C2BF058697669A6E35BC7A05D948ADBF_RuntimeMethod_var)));
	}

IL_000f:
	{
		int32_t L_2 = ___1_numberOfItems;
		int32_t L_3 = ___2_sizePerItem;
		if (((int64_t)L_2 * (int64_t)L_3 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_2 * (int64_t)L_3 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SerializationContext_AllocateVector_m8410EE60C2BF058697669A6E35BC7A05D948ADBF_RuntimeMethod_var);
		if (((int64_t)((int32_t)il2cpp_codegen_multiply(L_2, L_3)) + (int64_t)4 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)il2cpp_codegen_multiply(L_2, L_3)) + (int64_t)4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SerializationContext_AllocateVector_m8410EE60C2BF058697669A6E35BC7A05D948ADBF_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2, L_3)), 4));
		int32_t L_4 = __this->___offset;
		V_1 = L_4;
		int32_t L_5 = V_1;
		int32_t L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(SerializationHelpers_t6B4CA19FBCA6530D0EA7619C289F98186436D4DD_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = SerializationHelpers_GetAlignmentError_m3B884AE1FD7C9A00AF91F88687AA875D9C59758E_inline(L_6, 4, NULL);
		if (((int64_t)L_5 + (int64_t)L_7 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_5 + (int64_t)L_7 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SerializationContext_AllocateVector_m8410EE60C2BF058697669A6E35BC7A05D948ADBF_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, L_7));
		int32_t L_8 = V_1;
		int32_t L_9 = V_1;
		if (((int64_t)L_9 + (int64_t)4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_9 + (int64_t)4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SerializationContext_AllocateVector_m8410EE60C2BF058697669A6E35BC7A05D948ADBF_RuntimeMethod_var);
		int32_t L_10 = ___0_itemAlignment;
		int32_t L_11;
		L_11 = SerializationHelpers_GetAlignmentError_m3B884AE1FD7C9A00AF91F88687AA875D9C59758E_inline(((int32_t)il2cpp_codegen_add(L_9, 4)), L_10, NULL);
		if (((int64_t)L_8 + (int64_t)L_11 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_8 + (int64_t)L_11 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SerializationContext_AllocateVector_m8410EE60C2BF058697669A6E35BC7A05D948ADBF_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, L_11));
		int32_t L_12 = V_1;
		__this->___offset = L_12;
		int32_t L_13 = V_0;
		int32_t L_14;
		L_14 = SerializationContext_AllocateSpace_mE037A7DC50D641E02A3710BAC31B8567B0095CAC(__this, L_13, 4, NULL);
		V_1 = L_14;
		int32_t L_15 = V_1;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationContext_AllocateSpace_mE037A7DC50D641E02A3710BAC31B8567B0095CAC (SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8* __this, int32_t ___0_bytesNeeded, int32_t ___1_alignment, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationContext_AllocateSpace_mE037A7DC50D641E02A3710BAC31B8567B0095CAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationHelpers_t6B4CA19FBCA6530D0EA7619C289F98186436D4DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		int32_t L_0 = __this->___offset;
		int32_t L_1 = L_0;
		int32_t L_2 = ___1_alignment;
		il2cpp_codegen_runtime_class_init_inline(SerializationHelpers_t6B4CA19FBCA6530D0EA7619C289F98186436D4DD_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = SerializationHelpers_GetAlignmentError_m3B884AE1FD7C9A00AF91F88687AA875D9C59758E_inline(L_1, L_2, NULL);
		if (((int64_t)L_1 + (int64_t)L_3 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_1 + (int64_t)L_3 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SerializationContext_AllocateSpace_mE037A7DC50D641E02A3710BAC31B8567B0095CAC_RuntimeMethod_var);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_1, L_3));
		int32_t L_5 = ___0_bytesNeeded;
		if (((int64_t)L_4 + (int64_t)L_5 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_4 + (int64_t)L_5 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SerializationContext_AllocateSpace_mE037A7DC50D641E02A3710BAC31B8567B0095CAC_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		int32_t L_6 = V_0;
		int32_t L_7 = __this->___capacity;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			G_B2_0 = L_4;
			goto IL_0021;
		}
		G_B1_0 = L_4;
	}
	{
		BufferTooSmallException_tE059BE36152522CE8BFF8A31EC58DB76298A95F4* L_8 = (BufferTooSmallException_tE059BE36152522CE8BFF8A31EC58DB76298A95F4*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BufferTooSmallException_tE059BE36152522CE8BFF8A31EC58DB76298A95F4_il2cpp_TypeInfo_var)));
		BufferTooSmallException__ctor_m4C22E0CB12143D122518F39CDA65D3CAB9E733BF(L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationContext_AllocateSpace_mE037A7DC50D641E02A3710BAC31B8567B0095CAC_RuntimeMethod_var)));
	}

IL_0021:
	{
		int32_t L_9 = V_0;
		__this->___offset = L_9;
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationContext_FinishVTable_m46D4622DAC23B615B0CA62BE807FAF079F30EB12 (SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_buffer, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_vtable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEFFCB2E665C23D1B7B12CA86B0BB0A5680004DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationContext_FinishVTable_m46D4622DAC23B615B0CA62BE807FAF079F30EB12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___vtableOffsets;
		V_0 = L_0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_1, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		V_1 = L_2;
		V_3 = 0;
		goto IL_006c;
	}

IL_0012:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_3, L_4, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		V_4 = L_5;
		int32_t L_6 = V_4;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_7;
		L_7 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___0_buffer), L_6, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_8;
		L_8 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_7, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		V_5 = L_8;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_9 = V_5;
		uint16_t L_10;
		L_10 = ScalarSpanReader_ReadUShort_m327796534738A7AF6BC3FA7A8838AC0427076483_inline(L_9, NULL);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_11;
		L_11 = ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_inline((&V_5), 0, L_10, ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_RuntimeMethod_var);
		V_5 = L_11;
		int32_t L_12;
		L_12 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&V_5), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		int32_t L_13;
		L_13 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___1_vtable), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0068;
		}
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_14 = V_5;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_15 = ___1_vtable;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_16;
		L_16 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_15, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		bool L_17;
		L_17 = MemoryExtensions_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEFFCB2E665C23D1B7B12CA86B0BB0A5680004DC_inline(L_14, L_16, MemoryExtensions_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEFFCB2E665C23D1B7B12CA86B0BB0A5680004DC_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_18 = V_3;
		if (!L_18)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_19 = V_3;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_20 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8_il2cpp_TypeInfo_var);
		SerializationContext_Promote_mD40D2894D0027045F4B4A8ECE1F69783A3FEAEC3_inline(L_19, L_20, NULL);
	}

IL_0065:
	{
		int32_t L_21 = V_4;
		return L_21;
	}

IL_0068:
	{
		int32_t L_22 = V_3;
		if (((int64_t)L_22 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_22 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SerializationContext_FinishVTable_m46D4622DAC23B615B0CA62BE807FAF079F30EB12_RuntimeMethod_var);
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_006c:
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_1;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_25;
		L_25 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___1_vtable), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		int32_t L_26;
		L_26 = SerializationContext_AllocateSpace_mE037A7DC50D641E02A3710BAC31B8567B0095CAC(__this, L_25, 2, NULL);
		V_2 = L_26;
		int32_t L_27 = V_2;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_28;
		L_28 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___0_buffer), L_27, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542((&___1_vtable), L_28, Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_29 = V_0;
		int32_t L_30 = V_2;
		NullCheck(L_29);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_29, L_30, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_31, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if (((int64_t)L_32 - (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_32 - (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SerializationContext_FinishVTable_m46D4622DAC23B615B0CA62BE807FAF079F30EB12_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_33 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8_il2cpp_TypeInfo_var);
		SerializationContext_Promote_mD40D2894D0027045F4B4A8ECE1F69783A3FEAEC3_inline(((int32_t)il2cpp_codegen_subtract(L_32, 1)), L_33, NULL);
		int32_t L_34 = V_2;
		return L_34;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationContext_Promote_mD40D2894D0027045F4B4A8ECE1F69783A3FEAEC3 (int32_t ___0_i, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___1_offsets, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_i;
		V_0 = ((int32_t)(L_0/2));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = ___1_offsets;
		int32_t L_2 = ___0_i;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_1, L_2, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		V_1 = L_3;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = ___1_offsets;
		int32_t L_5 = ___0_i;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6 = ___1_offsets;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_6, L_7, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_4);
		List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587(L_4, L_5, L_8, List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_9 = ___1_offsets;
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_9);
		List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587(L_9, L_10, L_11, List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationContext__cctor_mFD9EE58FB17146605E75D4C1FE0D1CBB8C925492 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tBBC90CF9AFB875F8983669DF095BABF81040D7B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadLocal_1__ctor_mDEE379223752F62AA7CD1A6D98D13C783784B72D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadLocal_1_t3388F8171818211101296675E793A2D98611E503_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__21_0_mC5EE893893D64A0F4C74704610CD0C42E4EC9A83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t18E4CC5A0F6B97FF95D258EE3B9580BECEFBD239_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t18E4CC5A0F6B97FF95D258EE3B9580BECEFBD239_il2cpp_TypeInfo_var);
		U3CU3Ec_t18E4CC5A0F6B97FF95D258EE3B9580BECEFBD239* L_0 = ((U3CU3Ec_t18E4CC5A0F6B97FF95D258EE3B9580BECEFBD239_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t18E4CC5A0F6B97FF95D258EE3B9580BECEFBD239_il2cpp_TypeInfo_var))->___U3CU3E9;
		Func_1_tBBC90CF9AFB875F8983669DF095BABF81040D7B8* L_1 = (Func_1_tBBC90CF9AFB875F8983669DF095BABF81040D7B8*)il2cpp_codegen_object_new(Func_1_tBBC90CF9AFB875F8983669DF095BABF81040D7B8_il2cpp_TypeInfo_var);
		Func_1__ctor_mC183AC51DD2EB09BAF43DD36688B6D472F7C90D3(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__21_0_mC5EE893893D64A0F4C74704610CD0C42E4EC9A83_RuntimeMethod_var), NULL);
		ThreadLocal_1_t3388F8171818211101296675E793A2D98611E503* L_2 = (ThreadLocal_1_t3388F8171818211101296675E793A2D98611E503*)il2cpp_codegen_object_new(ThreadLocal_1_t3388F8171818211101296675E793A2D98611E503_il2cpp_TypeInfo_var);
		ThreadLocal_1__ctor_mDEE379223752F62AA7CD1A6D98D13C783784B72D(L_2, L_1, ThreadLocal_1__ctor_mDEE379223752F62AA7CD1A6D98D13C783784B72D_RuntimeMethod_var);
		((SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8_StaticFields*)il2cpp_codegen_static_fields_for(SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8_il2cpp_TypeInfo_var))->___ThreadLocalContext = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8_StaticFields*)il2cpp_codegen_static_fields_for(SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8_il2cpp_TypeInfo_var))->___ThreadLocalContext), (void*)L_2);
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
void PostSerializeAction_Invoke_m4E114361E43216F3776DCAA90C66A0C774C902DD_Multicast(PostSerializeAction_t24986B772136F5445F4DDACD441710C972B014E6* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8* ___1_context, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PostSerializeAction_t24986B772136F5445F4DDACD441710C972B014E6* currentDelegate = reinterpret_cast<PostSerializeAction_t24986B772136F5445F4DDACD441710C972B014E6*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_context, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void PostSerializeAction_Invoke_m4E114361E43216F3776DCAA90C66A0C774C902DD_OpenInst(PostSerializeAction_t24986B772136F5445F4DDACD441710C972B014E6* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8* ___1_context, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_context, method);
}
void PostSerializeAction_Invoke_m4E114361E43216F3776DCAA90C66A0C774C902DD_OpenStatic(PostSerializeAction_t24986B772136F5445F4DDACD441710C972B014E6* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8* ___1_context, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_context, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostSerializeAction__ctor_m63945C79982C6D8ECDF7E4B2C84922230BA6377E (PostSerializeAction_t24986B772136F5445F4DDACD441710C972B014E6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&PostSerializeAction_Invoke_m4E114361E43216F3776DCAA90C66A0C774C902DD_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&PostSerializeAction_Invoke_m4E114361E43216F3776DCAA90C66A0C774C902DD_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostSerializeAction_Invoke_m4E114361E43216F3776DCAA90C66A0C774C902DD (PostSerializeAction_t24986B772136F5445F4DDACD441710C972B014E6* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8* ___1_context, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_context, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1A4B075B10D4A00692024A9749A7C77F05CC5C95 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t18E4CC5A0F6B97FF95D258EE3B9580BECEFBD239_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t18E4CC5A0F6B97FF95D258EE3B9580BECEFBD239* L_0 = (U3CU3Ec_t18E4CC5A0F6B97FF95D258EE3B9580BECEFBD239*)il2cpp_codegen_object_new(U3CU3Ec_t18E4CC5A0F6B97FF95D258EE3B9580BECEFBD239_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mB415A80D0E549E78EB2FFA7435C122C5D6740689(L_0, NULL);
		((U3CU3Ec_t18E4CC5A0F6B97FF95D258EE3B9580BECEFBD239_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t18E4CC5A0F6B97FF95D258EE3B9580BECEFBD239_il2cpp_TypeInfo_var))->___U3CU3E9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t18E4CC5A0F6B97FF95D258EE3B9580BECEFBD239_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t18E4CC5A0F6B97FF95D258EE3B9580BECEFBD239_il2cpp_TypeInfo_var))->___U3CU3E9), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB415A80D0E549E78EB2FFA7435C122C5D6740689 (U3CU3Ec_t18E4CC5A0F6B97FF95D258EE3B9580BECEFBD239* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8* U3CU3Ec_U3C_cctorU3Eb__21_0_mC5EE893893D64A0F4C74704610CD0C42E4EC9A83 (U3CU3Ec_t18E4CC5A0F6B97FF95D258EE3B9580BECEFBD239* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8* L_0 = (SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8*)il2cpp_codegen_object_new(SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8_il2cpp_TypeInfo_var);
		SerializationContext__ctor_m95DA37319F0F61EFF1F21508875CF0C4E4F98651(L_0, NULL);
		return L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationHelpers_GetMaxSize_m34C550D4375E690D3736C7577359A7B79E6B9F47 (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationHelpers_GetMaxSize_m34C550D4375E690D3736C7577359A7B79E6B9F47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationHelpers_t6B4CA19FBCA6530D0EA7619C289F98186436D4DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializationHelpers_t6B4CA19FBCA6530D0EA7619C289F98186436D4DD_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = SerializationHelpers_GetMaxPadding_mEF14DCAAB41606B289530D5776304C2123DA6363_inline(4, NULL);
		if (((int64_t)4 + (int64_t)L_0 < (int64_t)kIl2CppInt32Min) || ((int64_t)4 + (int64_t)L_0 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SerializationHelpers_GetMaxSize_m34C550D4375E690D3736C7577359A7B79E6B9F47_RuntimeMethod_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1 = ((SerializationHelpers_t6B4CA19FBCA6530D0EA7619C289F98186436D4DD_StaticFields*)il2cpp_codegen_static_fields_for(SerializationHelpers_t6B4CA19FBCA6530D0EA7619C289F98186436D4DD_il2cpp_TypeInfo_var))->___Encoding;
		String_t* L_2 = ___0_value;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		NullCheck(L_1);
		int32_t L_4;
		L_4 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(32, L_1, L_3);
		if (((int64_t)((int32_t)il2cpp_codegen_add(4, L_0)) + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)il2cpp_codegen_add(4, L_0)) + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SerializationHelpers_GetMaxSize_m34C550D4375E690D3736C7577359A7B79E6B9F47_RuntimeMethod_var);
		if (((int64_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(4, L_0)), L_4)) + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(4, L_0)), L_4)) + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SerializationHelpers_GetMaxSize_m34C550D4375E690D3736C7577359A7B79E6B9F47_RuntimeMethod_var);
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(4, L_0)), L_4)), 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationHelpers_GetMaxPadding_mEF14DCAAB41606B289530D5776304C2123DA6363 (int32_t ___0_alignment, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_alignment;
		return ((int32_t)il2cpp_codegen_subtract(L_0, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationHelpers_GetAlignmentError_m3B884AE1FD7C9A00AF91F88687AA875D9C59758E (int32_t ___0_offset, int32_t ___1_alignment, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_offset;
		int32_t L_1 = ___1_alignment;
		return ((int32_t)(((-L_0))&((int32_t)il2cpp_codegen_subtract(L_1, 1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void SerializationHelpers_ThrowNonNullException_m97DA93AFF00A194067AB3784C65636D11AF46D36 (const RuntimeMethod* method) 
{
	{
		InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1* L_0 = (InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1_il2cpp_TypeInfo_var)));
		InvalidDataException__ctor_m514879053D89E3C8229A01AA8970237FA5409532(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0AFA6FBF40798D231134E3D4E604368A88587B8D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationHelpers_ThrowNonNullException_m97DA93AFF00A194067AB3784C65636D11AF46D36_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationHelpers__cctor_mC1F3CDB911E3FEC121A8F3EB8B8424D2FBA0A5B5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationHelpers_t6B4CA19FBCA6530D0EA7619C289F98186436D4DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* L_0 = (UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE*)il2cpp_codegen_object_new(UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_mBCC79DB57729512321FA4F0E17342F0D1A43EA34(L_0, (bool)0, NULL);
		((SerializationHelpers_t6B4CA19FBCA6530D0EA7619C289F98186436D4DD_StaticFields*)il2cpp_codegen_static_fields_for(SerializationHelpers_t6B4CA19FBCA6530D0EA7619C289F98186436D4DD_il2cpp_TypeInfo_var))->___Encoding = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SerializationHelpers_t6B4CA19FBCA6530D0EA7619C289F98186436D4DD_StaticFields*)il2cpp_codegen_static_fields_for(SerializationHelpers_t6B4CA19FBCA6530D0EA7619C289F98186436D4DD_il2cpp_TypeInfo_var))->___Encoding), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableFieldContext__ctor_m45312A22DC8AE98003DA0EBD8ECC473E6D916634 (TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* __this, String_t* ___0_fullName, bool ___1_sharedString, bool ___2_writeThrough, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_fullName;
		__this->___FullName = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FullName), (void*)L_0);
		bool L_1 = ___1_sharedString;
		__this->___SharedString = L_1;
		bool L_2 = ___2_writeThrough;
		__this->___WriteThrough = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TableFieldContext_Equals_mFD72373B079F91EC57819044E152D6EF4A5C7709 (TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = ((TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED*)IsInstSealed((RuntimeObject*)L_0, TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED_il2cpp_TypeInfo_var));
		TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* L_1 = V_0;
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_2 = __this->___FullName;
		TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->___FullName;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		bool L_6 = __this->___SharedString;
		TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = L_7->___SharedString;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_003a;
		}
	}
	{
		bool L_9 = __this->___WriteThrough;
		TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* L_10 = V_0;
		NullCheck(L_10);
		bool L_11 = L_10->___WriteThrough;
		return (bool)((((int32_t)L_9) == ((int32_t)L_11))? 1 : 0);
	}

IL_003a:
	{
		return (bool)0;
	}

IL_003c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TableFieldContext_GetHashCode_m9F5BD51A10196882A7B4CDCE3022F3D3140BACA7 (TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___FullName;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_0);
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlatBufferDeserializationContext__ctor_mCE64F5AA052E21BEA0998F0E00BEA24AE3A1C590_inline (FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9* __this, int32_t ___0_deserializationOption, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_deserializationOption;
		__this->___U3CDeserializationOptionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ScalarSpanReader_ReadByte_m1075027AAC4CD98D86A85CD284489B586B69EC7A_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0;
		L_0 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_span))->____pointer))->value, (0), ((&___0_span))->____length);
		int32_t L_1 = *((uint8_t*)L_0);
		return (uint8_t)L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ArrayInputBuffer_ReadByte_m74E87606AA17E0FFFCB1FD34F4D25096A27F169C_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___memory;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_inline(L_0, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_2, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_3, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		uint8_t L_5;
		L_5 = ScalarSpanReader_ReadByte_m1075027AAC4CD98D86A85CD284489B586B69EC7A_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t ScalarSpanReader_ReadSByte_mDCDF03A71770C9116EFF00C89E5FB1B6E8169BBB_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0;
		L_0 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_span))->____pointer))->value, (0), ((&___0_span))->____length);
		int32_t L_1 = *((uint8_t*)L_0);
		return ((int8_t)L_1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t ArrayInputBuffer_ReadSByte_m09BCC49B001681DE7D3A1D3E902B61FCAEC52F04_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___memory;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_inline(L_0, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_2, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_3, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		int8_t L_5;
		L_5 = ScalarSpanReader_ReadSByte_mDCDF03A71770C9116EFF00C89E5FB1B6E8169BBB_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ScalarSpanReader_ReadUShort_m327796534738A7AF6BC3FA7A8838AC0427076483_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_span;
		uint16_t L_1;
		L_1 = BinaryPrimitives_ReadUInt16LittleEndian_m6233B916B888350309C273E87ED2C3F787260889_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ArrayInputBuffer_ReadUShort_m88F1A806D08427132A221D6446FC3C314E201888_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___memory;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_inline(L_0, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_2, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_3, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		uint16_t L_5;
		L_5 = ScalarSpanReader_ReadUShort_m327796534738A7AF6BC3FA7A8838AC0427076483_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t ScalarSpanReader_ReadShort_mF811261B1B8D3E2F468440430FDFB3116A8411AF_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_span;
		int16_t L_1;
		L_1 = BinaryPrimitives_ReadInt16LittleEndian_mD2220A9E387CCFF63A818DABC6A35C92B240BDC4_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t ArrayInputBuffer_ReadShort_mCE5A0DB0CB702F2F82800B7CBDD3AEE1DDBAFDB2_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___memory;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_inline(L_0, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_2, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_3, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		int16_t L_5;
		L_5 = ScalarSpanReader_ReadShort_mF811261B1B8D3E2F468440430FDFB3116A8411AF_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ScalarSpanReader_ReadUInt_m5A2AA7E6CF46CE633A8F4CC1ABDE9E465C37A948_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_span;
		uint32_t L_1;
		L_1 = BinaryPrimitives_ReadUInt32LittleEndian_m1D2A6AA323C53D511E84C677D1F8F17077F3B070_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ArrayInputBuffer_ReadUInt_m83E360B2D464701419F0D5069DF285DA834D2113_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___memory;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_inline(L_0, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_2, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_3, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		uint32_t L_5;
		L_5 = ScalarSpanReader_ReadUInt_m5A2AA7E6CF46CE633A8F4CC1ABDE9E465C37A948_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScalarSpanReader_ReadInt_mE9DF8741A87BC7857ED46834E76D7AE354FCCFF1_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_span;
		int32_t L_1;
		L_1 = BinaryPrimitives_ReadInt32LittleEndian_m8FF3A5E10E26FEC7EA2FF160B17D0BB51B4A8AC5_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArrayInputBuffer_ReadInt_m8798ED218FA815A8FA0FAF9B47D6FDFA056F0AD0_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___memory;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_inline(L_0, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_2, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_3, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		int32_t L_5;
		L_5 = ScalarSpanReader_ReadInt_mE9DF8741A87BC7857ED46834E76D7AE354FCCFF1_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ScalarSpanReader_ReadULong_m6EE8443BA6A3D6E60DB079A1614B1437470450B3_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_span;
		uint64_t L_1;
		L_1 = BinaryPrimitives_ReadUInt64LittleEndian_m9F91B7C963E163D3064EA52D2C3A4075A33FB32B_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ArrayInputBuffer_ReadULong_m6F115B2AFD0E8DC9E16DF24B4D0B70AFA8757334_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___memory;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_inline(L_0, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_2, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_3, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		uint64_t L_5;
		L_5 = ScalarSpanReader_ReadULong_m6EE8443BA6A3D6E60DB079A1614B1437470450B3_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ScalarSpanReader_ReadLong_m43F728FDBAA68DAE3FB9034156AC1BDC51312FD1_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_span;
		int64_t L_1;
		L_1 = BinaryPrimitives_ReadInt64LittleEndian_mE8A837185C132F5DCFA81A9D0F5CDB92000B6CF9_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ArrayInputBuffer_ReadLong_m283D051B53D017F491B08AB46FFE27D6F0A05346_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___memory;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_inline(L_0, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_2, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_3, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		int64_t L_5;
		L_5 = ScalarSpanReader_ReadLong_m43F728FDBAA68DAE3FB9034156AC1BDC51312FD1_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ScalarSpanReader_ReadFloat_m32F827D9BF154056E0D037EBF64A022D78946EDA_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) 
{
	FloatLayout_tE533D6E84874B88011CA98CFF136647D72B8E5C6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(FloatLayout_tE533D6E84874B88011CA98CFF136647D72B8E5C6));
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_span;
		uint32_t L_1;
		L_1 = ScalarSpanReader_ReadUInt_m5A2AA7E6CF46CE633A8F4CC1ABDE9E465C37A948_inline(L_0, NULL);
		(&V_0)->___bytes = L_1;
		FloatLayout_tE533D6E84874B88011CA98CFF136647D72B8E5C6 L_2 = V_0;
		float L_3 = L_2.___value;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ArrayInputBuffer_ReadFloat_m9B0FF87A5566AC4B5C07F53D1E0125E9DEFCD2DD_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___memory;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_inline(L_0, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_2, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_3, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		float L_5;
		L_5 = ScalarSpanReader_ReadFloat_m32F827D9BF154056E0D037EBF64A022D78946EDA_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ScalarSpanReader_ReadDouble_m61D5C204BA9E81DA538C2A4489E038F5A5310A01_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_span;
		int64_t L_1;
		L_1 = ScalarSpanReader_ReadLong_m43F728FDBAA68DAE3FB9034156AC1BDC51312FD1_inline(L_0, NULL);
		double L_2;
		L_2 = BitConverter_Int64BitsToDouble_m0471A5DA68629692DE031E855EB537CBB4CA9A55_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ArrayInputBuffer_ReadDouble_mE49F23F20EE13B5CB2232C1E097344E7C21CBDD1_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___memory;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_inline(L_0, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_2, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_3, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		double L_5;
		L_5 = ScalarSpanReader_ReadDouble_m61D5C204BA9E81DA538C2A4489E038F5A5310A01_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ScalarSpanReader_ReadString_m3BCFF4018AAEB11379DF79D99125EFC2F8A564A7_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_encoding, const RuntimeMethod* method) 
{
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0 = ___1_encoding;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1 = ___0_span;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = Encoding_GetString_m6FE2707C33758C7F10750B79FCA7767F4C2CA008(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ArrayInputBuffer_ReadString_m82A09E526BADBC7DEC84E7D73EAC51A6327491E8_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, int32_t ___0_offset, int32_t ___1_byteLength, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_encoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___memory;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_inline(L_0, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___0_offset;
		int32_t L_3 = ___1_byteLength;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_0), L_2, L_3, Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6 = ___2_encoding;
		String_t* L_7;
		L_7 = ScalarSpanReader_ReadString_m3BCFF4018AAEB11379DF79D99125EFC2F8A564A7_inline(L_5, L_6, NULL);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ArrayInputBuffer_GetReadOnlySpan_m320ED7EBDE610A64E2ABEB8080519D91C9FD21FE_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___memory;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1;
		L_1 = ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644(L_0, ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ArrayInputBuffer_GetSpan_m72708F5F93A279BE3AC8C4A5B2BB7BD3969A28DD_inline (ArrayInputBuffer_t6D688B6E300F120D8B044796EB51D414790E158F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___memory;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91(L_0, Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ArraySegmentInputBuffer_ReadByte_m7E37513F3F57E08FCFDAA753AF11120EFC8AF818_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* L_0 = __this->___pointer;
		NullCheck(L_0);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = L_0->___segment;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_inline(L_1, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		uint8_t L_6;
		L_6 = ScalarSpanReader_ReadByte_m1075027AAC4CD98D86A85CD284489B586B69EC7A_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t ArraySegmentInputBuffer_ReadSByte_m9C2A6B1AAFC3AEF9CEBCBEE4CE92B2BA154BB93E_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* L_0 = __this->___pointer;
		NullCheck(L_0);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = L_0->___segment;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_inline(L_1, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		int8_t L_6;
		L_6 = ScalarSpanReader_ReadSByte_mDCDF03A71770C9116EFF00C89E5FB1B6E8169BBB_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ArraySegmentInputBuffer_ReadUShort_mE4C77EEA5D3D9AC6F73F6419850EC9D4DE92D1CA_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* L_0 = __this->___pointer;
		NullCheck(L_0);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = L_0->___segment;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_inline(L_1, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		uint16_t L_6;
		L_6 = ScalarSpanReader_ReadUShort_m327796534738A7AF6BC3FA7A8838AC0427076483_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t ArraySegmentInputBuffer_ReadShort_m880A3A21EDEC280A3DA7D7054CD0F8561F1E5C58_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* L_0 = __this->___pointer;
		NullCheck(L_0);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = L_0->___segment;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_inline(L_1, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		int16_t L_6;
		L_6 = ScalarSpanReader_ReadShort_mF811261B1B8D3E2F468440430FDFB3116A8411AF_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ArraySegmentInputBuffer_ReadUInt_mEE74C1FC1AAE0AFF3DD00922FD2CB889C367E8A7_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* L_0 = __this->___pointer;
		NullCheck(L_0);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = L_0->___segment;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_inline(L_1, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		uint32_t L_6;
		L_6 = ScalarSpanReader_ReadUInt_m5A2AA7E6CF46CE633A8F4CC1ABDE9E465C37A948_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegmentInputBuffer_ReadInt_m4F323987A5C2D1F29D8A6CD37E259EBC50306C0F_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* L_0 = __this->___pointer;
		NullCheck(L_0);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = L_0->___segment;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_inline(L_1, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		int32_t L_6;
		L_6 = ScalarSpanReader_ReadInt_mE9DF8741A87BC7857ED46834E76D7AE354FCCFF1_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ArraySegmentInputBuffer_ReadULong_m8574AF1F6ED1AB9006C497C6ECA1835502C7E836_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* L_0 = __this->___pointer;
		NullCheck(L_0);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = L_0->___segment;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_inline(L_1, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		uint64_t L_6;
		L_6 = ScalarSpanReader_ReadULong_m6EE8443BA6A3D6E60DB079A1614B1437470450B3_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ArraySegmentInputBuffer_ReadLong_mD4CD75A94CF698300B50E7E0679EDEE1AFDC05BA_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* L_0 = __this->___pointer;
		NullCheck(L_0);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = L_0->___segment;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_inline(L_1, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		int64_t L_6;
		L_6 = ScalarSpanReader_ReadLong_m43F728FDBAA68DAE3FB9034156AC1BDC51312FD1_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ArraySegmentInputBuffer_ReadFloat_m06E15A309EA25FC6EF488FA845130DA282612254_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* L_0 = __this->___pointer;
		NullCheck(L_0);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = L_0->___segment;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_inline(L_1, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		float L_6;
		L_6 = ScalarSpanReader_ReadFloat_m32F827D9BF154056E0D037EBF64A022D78946EDA_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ArraySegmentInputBuffer_ReadDouble_m062ADB6C0500D3D3E67012381AA599426450365F_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* L_0 = __this->___pointer;
		NullCheck(L_0);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = L_0->___segment;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_inline(L_1, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		double L_6;
		L_6 = ScalarSpanReader_ReadDouble_m61D5C204BA9E81DA538C2A4489E038F5A5310A01_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ArraySegmentInputBuffer_ReadString_mC26F768826139BEBB789EE2BF27E73952EDBBEE3_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, int32_t ___0_offset, int32_t ___1_byteLength, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_encoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* L_0 = __this->___pointer;
		NullCheck(L_0);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = L_0->___segment;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_inline(L_1, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		int32_t L_4 = ___1_byteLength;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5;
		L_5 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_0), L_3, L_4, Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_6;
		L_6 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_5, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_7 = ___2_encoding;
		String_t* L_8;
		L_8 = ScalarSpanReader_ReadString_m3BCFF4018AAEB11379DF79D99125EFC2F8A564A7_inline(L_6, L_7, NULL);
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ArraySegmentInputBuffer_GetReadOnlySpan_m3A095A2CB4F5D3EA5A46D752EE4EFE9E1ABE72D6_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_m48A199CEDDD841168C5A680589A3C8AB9E61C128_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* L_0 = __this->___pointer;
		NullCheck(L_0);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = L_0->___segment;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = ReadOnlySpan_1_op_Implicit_m48A199CEDDD841168C5A680589A3C8AB9E61C128(L_1, ReadOnlySpan_1_op_Implicit_m48A199CEDDD841168C5A680589A3C8AB9E61C128_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ArraySegmentInputBuffer_GetSpan_m46A8AF8426BFB7C5B7433F0F31FAA7022B181095_inline (ArraySegmentInputBuffer_t7E751224A642A29A7A283A25405F862B07820562* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m1C77B8E0782305F18B37839AF212ACD631E09AE2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArraySegmentPointer_tBB1DD05622EDAD883C600BE0FA711ED57BCE2132* L_0 = __this->___pointer;
		NullCheck(L_0);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = L_0->___segment;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Span_1_op_Implicit_m1C77B8E0782305F18B37839AF212ACD631E09AE2(L_1, Span_1_op_Implicit_m1C77B8E0782305F18B37839AF212ACD631E09AE2_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MemoryInputBuffer_get_Length_mDCC29A6C6733C644F995358E0F459B93BA072053_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		int32_t L_2;
		L_2 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_1, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t MemoryInputBuffer_ReadByte_mAE61AEAC2D8D4A8F0284B1F2A02ABF9ADD16819F_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_1, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		uint8_t L_6;
		L_6 = ScalarSpanReader_ReadByte_m1075027AAC4CD98D86A85CD284489B586B69EC7A_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t MemoryInputBuffer_ReadSByte_mCBECC514B84B07D133A095893D14F1A89E10933B_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_1, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		int8_t L_6;
		L_6 = ScalarSpanReader_ReadSByte_mDCDF03A71770C9116EFF00C89E5FB1B6E8169BBB_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t MemoryInputBuffer_ReadUShort_m1546FF5B687CB6826A21C6D93E6F10FD82942BF3_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_1, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		uint16_t L_6;
		L_6 = ScalarSpanReader_ReadUShort_m327796534738A7AF6BC3FA7A8838AC0427076483_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t MemoryInputBuffer_ReadShort_mE6F02BDFB8AA45B54993EB04581EF3284B186B5A_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_1, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		int16_t L_6;
		L_6 = ScalarSpanReader_ReadShort_mF811261B1B8D3E2F468440430FDFB3116A8411AF_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MemoryInputBuffer_ReadUInt_mE5BFC176016B8B284F46D972723ADE80B1C57D88_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_1, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		uint32_t L_6;
		L_6 = ScalarSpanReader_ReadUInt_m5A2AA7E6CF46CE633A8F4CC1ABDE9E465C37A948_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MemoryInputBuffer_ReadInt_m9C14BEA8289A5075368F08DEC78C43E3F13D0B8F_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_1, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		int32_t L_6;
		L_6 = ScalarSpanReader_ReadInt_mE9DF8741A87BC7857ED46834E76D7AE354FCCFF1_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t MemoryInputBuffer_ReadULong_m9FFDF78DD1FD7AE02D86D0ED1D83154C9BAD95C0_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_1, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		uint64_t L_6;
		L_6 = ScalarSpanReader_ReadULong_m6EE8443BA6A3D6E60DB079A1614B1437470450B3_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t MemoryInputBuffer_ReadLong_mEF6C6258FA00B06BD9FC9C915D2FD88782F189EE_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_1, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		int64_t L_6;
		L_6 = ScalarSpanReader_ReadLong_m43F728FDBAA68DAE3FB9034156AC1BDC51312FD1_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MemoryInputBuffer_ReadFloat_mE14AA2102E038B4F1EFDB62E542175F4F71D807D_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_1, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		float L_6;
		L_6 = ScalarSpanReader_ReadFloat_m32F827D9BF154056E0D037EBF64A022D78946EDA_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double MemoryInputBuffer_ReadDouble_mD94B0BA360DF3893C26D078EC27373F539B430F9_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_1, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_0), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_4, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		double L_6;
		L_6 = ScalarSpanReader_ReadDouble_m61D5C204BA9E81DA538C2A4489E038F5A5310A01_inline(L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MemoryInputBuffer_ReadString_m1225E36CFDEFC37E0F5EE651BFB80C9609850116_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, int32_t ___0_offset, int32_t ___1_byteLength, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_encoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_1, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		int32_t L_4 = ___1_byteLength;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5;
		L_5 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_0), L_3, L_4, Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_6;
		L_6 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_5, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_7 = ___2_encoding;
		String_t* L_8;
		L_8 = ScalarSpanReader_ReadString_m3BCFF4018AAEB11379DF79D99125EFC2F8A564A7_inline(L_6, L_7, NULL);
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryInputBuffer_GetReadOnlySpan_m6228ECF82D2E49ADE8DE631392C33291EA411C92_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_1, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_3;
		L_3 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_2, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryInputBuffer_GetSpan_m4375D749C94959D15F4B179D6CF52A4E7D851721_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* L_0 = __this->___pointer;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&L_0->___memory);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_1, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlyMemoryInputBuffer_get_Length_m480302BEB2727674B285D42252D3B065561D6B0A_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Length_m2E20B5DC76A91D078F8827624C654EB90EFD5392_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* L_0 = __this->___pointer;
		NullCheck(L_0);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_1 = (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(&L_0->___memory);
		int32_t L_2;
		L_2 = ReadOnlyMemory_1_get_Length_m2E20B5DC76A91D078F8827624C654EB90EFD5392(L_1, ReadOnlyMemory_1_get_Length_m2E20B5DC76A91D078F8827624C654EB90EFD5392_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ReadOnlyMemoryInputBuffer_ReadByte_m262C244E65D77C5F29F13D205E3351E5235975A7_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* L_0 = __this->___pointer;
		NullCheck(L_0);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_1 = (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(&L_0->___memory);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline(L_1, ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&V_0), L_3, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		uint8_t L_5;
		L_5 = ScalarSpanReader_ReadByte_m1075027AAC4CD98D86A85CD284489B586B69EC7A_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t ReadOnlyMemoryInputBuffer_ReadSByte_m78A0BC6139E18D75BA9B5CA65260DF6E9DF1D0AA_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* L_0 = __this->___pointer;
		NullCheck(L_0);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_1 = (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(&L_0->___memory);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline(L_1, ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&V_0), L_3, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		int8_t L_5;
		L_5 = ScalarSpanReader_ReadSByte_mDCDF03A71770C9116EFF00C89E5FB1B6E8169BBB_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ReadOnlyMemoryInputBuffer_ReadUShort_m069C27639C0D50A597C1DC5084464873F4D28FF3_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* L_0 = __this->___pointer;
		NullCheck(L_0);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_1 = (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(&L_0->___memory);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline(L_1, ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&V_0), L_3, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		uint16_t L_5;
		L_5 = ScalarSpanReader_ReadUShort_m327796534738A7AF6BC3FA7A8838AC0427076483_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t ReadOnlyMemoryInputBuffer_ReadShort_mBBC035DAD7241C150E74DC0E869ED2C6246E440D_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* L_0 = __this->___pointer;
		NullCheck(L_0);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_1 = (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(&L_0->___memory);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline(L_1, ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&V_0), L_3, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		int16_t L_5;
		L_5 = ScalarSpanReader_ReadShort_mF811261B1B8D3E2F468440430FDFB3116A8411AF_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ReadOnlyMemoryInputBuffer_ReadUInt_m59972C86C98665CE9E7DE63806C2C76D3A6F34CB_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* L_0 = __this->___pointer;
		NullCheck(L_0);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_1 = (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(&L_0->___memory);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline(L_1, ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&V_0), L_3, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		uint32_t L_5;
		L_5 = ScalarSpanReader_ReadUInt_m5A2AA7E6CF46CE633A8F4CC1ABDE9E465C37A948_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlyMemoryInputBuffer_ReadInt_m8A10C08D7D59D34CB8E64ADFD4BCC78E981D2F64_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* L_0 = __this->___pointer;
		NullCheck(L_0);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_1 = (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(&L_0->___memory);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline(L_1, ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&V_0), L_3, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		int32_t L_5;
		L_5 = ScalarSpanReader_ReadInt_mE9DF8741A87BC7857ED46834E76D7AE354FCCFF1_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ReadOnlyMemoryInputBuffer_ReadULong_m61778DB525B36509D1B86EFDE502BBFA23C72BD9_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* L_0 = __this->___pointer;
		NullCheck(L_0);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_1 = (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(&L_0->___memory);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline(L_1, ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&V_0), L_3, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		uint64_t L_5;
		L_5 = ScalarSpanReader_ReadULong_m6EE8443BA6A3D6E60DB079A1614B1437470450B3_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ReadOnlyMemoryInputBuffer_ReadLong_m2F8BDA46BCC46D5B0763617163EA0064E8B43E06_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* L_0 = __this->___pointer;
		NullCheck(L_0);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_1 = (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(&L_0->___memory);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline(L_1, ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&V_0), L_3, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		int64_t L_5;
		L_5 = ScalarSpanReader_ReadLong_m43F728FDBAA68DAE3FB9034156AC1BDC51312FD1_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ReadOnlyMemoryInputBuffer_ReadFloat_m7B47901E475D0552B0A0EDE09DE783842F74BF0F_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* L_0 = __this->___pointer;
		NullCheck(L_0);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_1 = (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(&L_0->___memory);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline(L_1, ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&V_0), L_3, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		float L_5;
		L_5 = ScalarSpanReader_ReadFloat_m32F827D9BF154056E0D037EBF64A022D78946EDA_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ReadOnlyMemoryInputBuffer_ReadDouble_mDA89B186B08BE02407275845601944816131C5F8_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* L_0 = __this->___pointer;
		NullCheck(L_0);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_1 = (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(&L_0->___memory);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline(L_1, ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4;
		L_4 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&V_0), L_3, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		double L_5;
		L_5 = ScalarSpanReader_ReadDouble_m61D5C204BA9E81DA538C2A4489E038F5A5310A01_inline(L_4, NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ReadOnlyMemoryInputBuffer_ReadString_m51ED754CCE3ACE126E4B772CA97CDC55AA3725D2_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, int32_t ___0_offset, int32_t ___1_byteLength, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_encoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* L_0 = __this->___pointer;
		NullCheck(L_0);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_1 = (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(&L_0->___memory);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline(L_1, ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = ___0_offset;
		int32_t L_4 = ___1_byteLength;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		L_5 = ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_inline((&V_0), L_3, L_4, ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_RuntimeMethod_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6 = ___2_encoding;
		String_t* L_7;
		L_7 = ScalarSpanReader_ReadString_m3BCFF4018AAEB11379DF79D99125EFC2F8A564A7_inline(L_5, L_6, NULL);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlyMemoryInputBuffer_GetReadOnlySpan_m60CF9ECA3455FCFAED2BF9AC0432782D1E4A23B3_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* L_0 = __this->___pointer;
		NullCheck(L_0);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_1 = (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(&L_0->___memory);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline(L_1, ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedStringWriter_set_IsDirty_m6F68088942550C0846B803596AC0005B22BCAF34_inline (SharedStringWriter_tC8125A04EB9B588A00E05949A87D8BBE1E3DE690* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsDirtyU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanWriter_WriteByte_m177A8891B785A25CB0FCE3D4A22A222CF69FCB30_inline (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, uint8_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___2_offset;
		uint8_t* L_1;
		L_1 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_span))->____pointer))->value, (L_0), ((&___0_span))->____length);
		uint8_t L_2 = ___1_value;
		*((int8_t*)L_1) = (int8_t)L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanWriter_WriteSByte_m648F97C38FD37A164FDFA88FAC4E1357F3ACBC88_inline (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, int8_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___2_offset;
		uint8_t* L_1;
		L_1 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_span))->____pointer))->value, (L_0), ((&___0_span))->____length);
		int8_t L_2 = ___1_value;
		*((int8_t*)L_1) = (int8_t)((int32_t)(uint8_t)L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BinaryPrimitives_WriteUInt16LittleEndian_mEA236B05E65D485C1934CCC155A6AF8A5C66773A_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, uint16_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Write_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1CB9CA69ED7F15E1AED66F7E98D918E1DF0CB96A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (il2cpp_codegen_is_little_endian())
		{
			goto IL_000f;
		}
	}
	{
		uint16_t L_0 = ___1_value;
		uint16_t L_1;
		L_1 = BinaryPrimitives_ReverseEndianness_mDBF226C2D52CAFF6DE538F8245444B5CF87A02D0_inline(L_0, NULL);
		___1_value = L_1;
	}

IL_000f:
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		MemoryMarshal_Write_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1CB9CA69ED7F15E1AED66F7E98D918E1DF0CB96A_inline(L_2, (&___1_value), MemoryMarshal_Write_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1CB9CA69ED7F15E1AED66F7E98D918E1DF0CB96A_RuntimeMethod_var);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanWriter_WriteUShort_m7CAA151E73A283CBB0089697DA7D4C75B0208B11_inline (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, uint16_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___2_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___0_span), L_0, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		uint16_t L_2 = ___1_value;
		BinaryPrimitives_WriteUInt16LittleEndian_mEA236B05E65D485C1934CCC155A6AF8A5C66773A_inline(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BinaryPrimitives_WriteInt16LittleEndian_m5604129106AB8E5E79BE8089862A6AAFE8822FFD_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, int16_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Write_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m433300E1EAC29F2055D3E28298B3E33AA41629C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (il2cpp_codegen_is_little_endian())
		{
			goto IL_000f;
		}
	}
	{
		int16_t L_0 = ___1_value;
		int16_t L_1;
		L_1 = BinaryPrimitives_ReverseEndianness_m3D9424412C7D16FB3AFE244BC344BBECB291838B_inline(L_0, NULL);
		___1_value = L_1;
	}

IL_000f:
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		MemoryMarshal_Write_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m433300E1EAC29F2055D3E28298B3E33AA41629C8_inline(L_2, (&___1_value), MemoryMarshal_Write_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m433300E1EAC29F2055D3E28298B3E33AA41629C8_RuntimeMethod_var);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanWriter_WriteShort_m021B686064D7C48EAB1836B55C30CAA885D2E2B4_inline (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, int16_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___2_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___0_span), L_0, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		int16_t L_2 = ___1_value;
		BinaryPrimitives_WriteInt16LittleEndian_m5604129106AB8E5E79BE8089862A6AAFE8822FFD_inline(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BinaryPrimitives_WriteUInt32LittleEndian_mF5A685773CF1618F130D77F5072BDB7C389793B1_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, uint32_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m2BD505F8011143B77CB9A048F4C97C64130CB6DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (il2cpp_codegen_is_little_endian())
		{
			goto IL_000f;
		}
	}
	{
		uint32_t L_0 = ___1_value;
		uint32_t L_1;
		L_1 = BinaryPrimitives_ReverseEndianness_mCCA2099164ECA9672968898DD996A9F04B392FFF_inline(L_0, NULL);
		___1_value = L_1;
	}

IL_000f:
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m2BD505F8011143B77CB9A048F4C97C64130CB6DB_inline(L_2, (&___1_value), MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m2BD505F8011143B77CB9A048F4C97C64130CB6DB_RuntimeMethod_var);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanWriter_WriteUInt_m21541B40F8BBCCD84DBF0C5EAFE90972670A6547_inline (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, uint32_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___2_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___0_span), L_0, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		uint32_t L_2 = ___1_value;
		BinaryPrimitives_WriteUInt32LittleEndian_mF5A685773CF1618F130D77F5072BDB7C389793B1_inline(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BinaryPrimitives_WriteInt32LittleEndian_m216AF52C3BA0D7502D9D60E8900B3A9DC3915DDF_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, int32_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Write_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEF660B60FA28FE8C12E8B08463FBB2E302DBF3D6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (il2cpp_codegen_is_little_endian())
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_0 = ___1_value;
		int32_t L_1;
		L_1 = BinaryPrimitives_ReverseEndianness_mF7B5C36D507C0D85537E18A1141554A99093BD78_inline(L_0, NULL);
		___1_value = L_1;
	}

IL_000f:
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		MemoryMarshal_Write_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEF660B60FA28FE8C12E8B08463FBB2E302DBF3D6_inline(L_2, (&___1_value), MemoryMarshal_Write_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEF660B60FA28FE8C12E8B08463FBB2E302DBF3D6_RuntimeMethod_var);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanWriter_WriteInt_m5A076175E293EF6FE718200016C8C7C031E1AAFF_inline (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, int32_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___2_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___0_span), L_0, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		int32_t L_2 = ___1_value;
		BinaryPrimitives_WriteInt32LittleEndian_m216AF52C3BA0D7502D9D60E8900B3A9DC3915DDF_inline(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BinaryPrimitives_WriteUInt64LittleEndian_mCC039600290A6A5201532593AF3BE095D74C1625_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, uint64_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Write_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m369E3011D17AFC47FE8EBD775DA05E3F136D3EA3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (il2cpp_codegen_is_little_endian())
		{
			goto IL_000f;
		}
	}
	{
		uint64_t L_0 = ___1_value;
		uint64_t L_1;
		L_1 = BinaryPrimitives_ReverseEndianness_mA698702D91EF4E47FF6F682E4B48F173FF376BDF_inline(L_0, NULL);
		___1_value = L_1;
	}

IL_000f:
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		MemoryMarshal_Write_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m369E3011D17AFC47FE8EBD775DA05E3F136D3EA3_inline(L_2, (&___1_value), MemoryMarshal_Write_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m369E3011D17AFC47FE8EBD775DA05E3F136D3EA3_RuntimeMethod_var);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanWriter_WriteULong_m543231470494BFDCAC017B3F7EB7D9755F6429F6_inline (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, uint64_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___2_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___0_span), L_0, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		uint64_t L_2 = ___1_value;
		BinaryPrimitives_WriteUInt64LittleEndian_mCC039600290A6A5201532593AF3BE095D74C1625_inline(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BinaryPrimitives_WriteInt64LittleEndian_m7EDA06941AC97EBE8B8B74FA461F3EF4C2C99884_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, int64_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Write_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m16D93984D1D3FD0F0742D660AAB4626FF45A1C50_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (il2cpp_codegen_is_little_endian())
		{
			goto IL_000f;
		}
	}
	{
		int64_t L_0 = ___1_value;
		int64_t L_1;
		L_1 = BinaryPrimitives_ReverseEndianness_mCD5293727A7525EE7AD81584DBBBE43478F40A8D_inline(L_0, NULL);
		___1_value = L_1;
	}

IL_000f:
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		MemoryMarshal_Write_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m16D93984D1D3FD0F0742D660AAB4626FF45A1C50_inline(L_2, (&___1_value), MemoryMarshal_Write_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m16D93984D1D3FD0F0742D660AAB4626FF45A1C50_RuntimeMethod_var);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanWriter_WriteLong_mDDA7CD000FF9CD99719C6B501A47318977D9CF3F_inline (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, int64_t ___1_value, int32_t ___2_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___2_offset;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___0_span), L_0, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		int64_t L_2 = ___1_value;
		BinaryPrimitives_WriteInt64LittleEndian_m7EDA06941AC97EBE8B8B74FA461F3EF4C2C99884_inline(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanWriter_WriteFloat_m864B613E37DC12AB1EDF476A135E493FDF67F619_inline (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, float ___1_value, int32_t ___2_offset, const RuntimeMethod* method) 
{
	FloatLayout_tE533D6E84874B88011CA98CFF136647D72B8E5C6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	FloatLayout_tE533D6E84874B88011CA98CFF136647D72B8E5C6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(FloatLayout_tE533D6E84874B88011CA98CFF136647D72B8E5C6));
		float L_0 = ___1_value;
		(&V_1)->___value = L_0;
		FloatLayout_tE533D6E84874B88011CA98CFF136647D72B8E5C6 L_1 = V_1;
		V_0 = L_1;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_span;
		FloatLayout_tE533D6E84874B88011CA98CFF136647D72B8E5C6 L_3 = V_0;
		uint32_t L_4 = L_3.___bytes;
		int32_t L_5 = ___2_offset;
		SpanWriter_WriteUInt_m21541B40F8BBCCD84DBF0C5EAFE90972670A6547_inline(__this, L_2, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanWriter_WriteDouble_m3BB3E0F21FAD388378CCE0BCBDEB31DA48152FF6_inline (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, double ___1_value, int32_t ___2_offset, const RuntimeMethod* method) 
{
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_0 = ___0_span;
		double L_1 = ___1_value;
		int64_t L_2;
		L_2 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_1, NULL);
		int32_t L_3 = ___2_offset;
		SpanWriter_WriteLong_mDDA7CD000FF9CD99719C6B501A47318977D9CF3F_inline(__this, L_0, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 String_op_Implicit_m7D7FE0449303AF92D8B2A85A06ADC6933B2ECC3A_inline (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		String_t* L_2 = ___0_value;
		NullCheck(L_2);
		Il2CppChar* L_3;
		L_3 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_2, NULL);
		String_t* L_4 = ___0_value;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_6;
		memset((&L_6), 0, sizeof(L_6));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_6), L_3, L_5, ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpanWriter_GetStringBytes_m464D526E005D9A6C88E98D2BA3EAC2B4388A6A52_inline (SpanWriter_tF5EC5039E891DB8058C98DFE5CD5B51F42249FFB* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, String_t* ___1_value, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_encoding, const RuntimeMethod* method) 
{
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0 = ___2_encoding;
		String_t* L_1 = ___1_value;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2;
		L_2 = String_op_Implicit_m7D7FE0449303AF92D8B2A85A06ADC6933B2ECC3A_inline(L_1, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3 = ___0_destination;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtualFuncInvoker2< int32_t, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 >::Invoke(38, L_0, L_2, L_3);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GeneratedSerializerParseArguments_get_Offset_mF6FA3C2698A3C2413400B276CB0A511010ED97AD_inline (GeneratedSerializerParseArguments_tA62665BC0CD65EF69B688A96B836271FD900BBBC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3COffsetU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t GeneratedSerializerParseArguments_get_DepthLimit_mC6311EEAE451CB544CF735FC34618D31F6CC645F_inline (GeneratedSerializerParseArguments_tA62665BC0CD65EF69B688A96B836271FD900BBBC* __this, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = __this->___U3CDepthLimitU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t BinaryPrimitives_ReadUInt16LittleEndian_m6233B916B888350309C273E87ED2C3F787260889_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Read_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE522E06A28DD43DAED8B42666149274B433F5317_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_source;
		uint16_t L_1;
		L_1 = MemoryMarshal_Read_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE522E06A28DD43DAED8B42666149274B433F5317_inline(L_0, MemoryMarshal_Read_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE522E06A28DD43DAED8B42666149274B433F5317_RuntimeMethod_var);
		V_0 = L_1;
		if (il2cpp_codegen_is_little_endian())
		{
			goto IL_0015;
		}
	}
	{
		uint16_t L_2 = V_0;
		uint16_t L_3;
		L_3 = BinaryPrimitives_ReverseEndianness_mDBF226C2D52CAFF6DE538F8245444B5CF87A02D0_inline(L_2, NULL);
		V_0 = L_3;
	}

IL_0015:
	{
		uint16_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t BinaryPrimitives_ReadInt16LittleEndian_mD2220A9E387CCFF63A818DABC6A35C92B240BDC4_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3371E1C3FCD5027463EFFC4C6F31FE983579F335_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int16_t V_0 = 0;
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_source;
		int16_t L_1;
		L_1 = MemoryMarshal_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3371E1C3FCD5027463EFFC4C6F31FE983579F335_inline(L_0, MemoryMarshal_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3371E1C3FCD5027463EFFC4C6F31FE983579F335_RuntimeMethod_var);
		V_0 = L_1;
		if (il2cpp_codegen_is_little_endian())
		{
			goto IL_0015;
		}
	}
	{
		int16_t L_2 = V_0;
		int16_t L_3;
		L_3 = BinaryPrimitives_ReverseEndianness_m3D9424412C7D16FB3AFE244BC344BBECB291838B_inline(L_2, NULL);
		V_0 = L_3;
	}

IL_0015:
	{
		int16_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReadUInt32LittleEndian_m1D2A6AA323C53D511E84C677D1F8F17077F3B070_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m56C749731FAD055AC5894D97F107FF8E5C6A13AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_source;
		uint32_t L_1;
		L_1 = MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m56C749731FAD055AC5894D97F107FF8E5C6A13AE_inline(L_0, MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m56C749731FAD055AC5894D97F107FF8E5C6A13AE_RuntimeMethod_var);
		V_0 = L_1;
		if (il2cpp_codegen_is_little_endian())
		{
			goto IL_0015;
		}
	}
	{
		uint32_t L_2 = V_0;
		uint32_t L_3;
		L_3 = BinaryPrimitives_ReverseEndianness_mCCA2099164ECA9672968898DD996A9F04B392FFF_inline(L_2, NULL);
		V_0 = L_3;
	}

IL_0015:
	{
		uint32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BinaryPrimitives_ReadInt32LittleEndian_m8FF3A5E10E26FEC7EA2FF160B17D0BB51B4A8AC5_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m610B098B008105D72394F56BF309D3A9F0F12ABC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_source;
		int32_t L_1;
		L_1 = MemoryMarshal_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m610B098B008105D72394F56BF309D3A9F0F12ABC_inline(L_0, MemoryMarshal_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m610B098B008105D72394F56BF309D3A9F0F12ABC_RuntimeMethod_var);
		V_0 = L_1;
		if (il2cpp_codegen_is_little_endian())
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = BinaryPrimitives_ReverseEndianness_mF7B5C36D507C0D85537E18A1141554A99093BD78_inline(L_2, NULL);
		V_0 = L_3;
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t BinaryPrimitives_ReadUInt64LittleEndian_m9F91B7C963E163D3064EA52D2C3A4075A33FB32B_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Read_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4B7CEC36F79FB7BE35EB5ADC5B3F9B03A427FAD0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_source;
		uint64_t L_1;
		L_1 = MemoryMarshal_Read_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4B7CEC36F79FB7BE35EB5ADC5B3F9B03A427FAD0_inline(L_0, MemoryMarshal_Read_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4B7CEC36F79FB7BE35EB5ADC5B3F9B03A427FAD0_RuntimeMethod_var);
		V_0 = L_1;
		if (il2cpp_codegen_is_little_endian())
		{
			goto IL_0015;
		}
	}
	{
		uint64_t L_2 = V_0;
		uint64_t L_3;
		L_3 = BinaryPrimitives_ReverseEndianness_mA698702D91EF4E47FF6F682E4B48F173FF376BDF_inline(L_2, NULL);
		V_0 = L_3;
	}

IL_0015:
	{
		uint64_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BinaryPrimitives_ReadInt64LittleEndian_mE8A837185C132F5DCFA81A9D0F5CDB92000B6CF9_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA9F67C05F53E72F623261F3811072B33F3B522EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_source;
		int64_t L_1;
		L_1 = MemoryMarshal_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA9F67C05F53E72F623261F3811072B33F3B522EA_inline(L_0, MemoryMarshal_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA9F67C05F53E72F623261F3811072B33F3B522EA_RuntimeMethod_var);
		V_0 = L_1;
		if (il2cpp_codegen_is_little_endian())
		{
			goto IL_0015;
		}
	}
	{
		int64_t L_2 = V_0;
		int64_t L_3;
		L_3 = BinaryPrimitives_ReverseEndianness_mCD5293727A7525EE7AD81584DBBBE43478F40A8D_inline(L_2, NULL);
		V_0 = L_3;
	}

IL_0015:
	{
		int64_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double BitConverter_Int64BitsToDouble_m0471A5DA68629692DE031E855EB537CBB4CA9A55_inline (int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = *((double*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SerializationContext_set_SharedStringWriter_m2AA6B0B83D021A882258C9A824F33E5B4EFC87ED_inline (SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CSharedStringWriterU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSharedStringWriterU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PostSerializeAction_Invoke_m4E114361E43216F3776DCAA90C66A0C774C902DD_inline (PostSerializeAction_t24986B772136F5445F4DDACD441710C972B014E6* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8* ___1_context, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, SerializationContext_tF7793B7C0D632A753672D56ED829C65E18A441B8*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_context, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SerializationHelpers_GetAlignmentError_m3B884AE1FD7C9A00AF91F88687AA875D9C59758E_inline (int32_t ___0_offset, int32_t ___1_alignment, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_offset;
		int32_t L_1 = ___1_alignment;
		return ((int32_t)(((-L_0))&((int32_t)il2cpp_codegen_subtract(L_1, 1))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SerializationContext_Promote_mD40D2894D0027045F4B4A8ECE1F69783A3FEAEC3_inline (int32_t ___0_i, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___1_offsets, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_i;
		V_0 = ((int32_t)(L_0/2));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = ___1_offsets;
		int32_t L_2 = ___0_i;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_1, L_2, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		V_1 = L_3;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = ___1_offsets;
		int32_t L_5 = ___0_i;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6 = ___1_offsets;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_6, L_7, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_4);
		List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587(L_4, L_5, L_8, List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_9 = ___1_offsets;
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_9);
		List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587(L_9, L_10, L_11, List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SerializationHelpers_GetMaxPadding_mEF14DCAAB41606B289530D5776304C2123DA6363_inline (int32_t ___0_alignment, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_alignment;
		return ((int32_t)il2cpp_codegen_subtract(L_0, 1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBCE30232D474E79CB7F5C723174D4BC22D93094A_gshared_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_inline((&L_1), L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m47EDC54D818CF366232744C45AE176C7D9AE43DA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_segment, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___0_segment), il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_1;
		L_1 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&___0_segment), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_2;
		L_2 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___0_segment), il2cpp_rgctx_method(method->rgctx_data, 5));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		int32_t L_0 = __this->____index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_1 = __this->____object;
		NullCheck(((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14))));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = VirtualFuncInvoker0< Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 >::Invoke(4, ((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14))));
		V_0 = L_2;
		int32_t L_3 = __this->____index;
		int32_t L_4 = __this->____length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5;
		L_5 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_0), ((int32_t)(L_3&((int32_t)2147483647LL))), L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_5;
	}

IL_0034:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 8)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_11 = __this->____object;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var));
		String_t* L_12 = V_1;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_13 = V_1;
		NullCheck(L_13);
		Il2CppChar* L_14;
		L_14 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_13, NULL);
		uint8_t* L_15;
		L_15 = il2cpp_unsafe_as_ref<uint8_t>(L_14);
		String_t* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_18), L_15, L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		V_0 = L_18;
		int32_t L_19 = __this->____index;
		int32_t L_20 = __this->____length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_21;
		L_21 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_0), L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_21;
	}

IL_0089:
	{
		RuntimeObject* L_22 = __this->____object;
		if (!L_22)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject* L_23 = __this->____object;
		int32_t L_24 = __this->____index;
		int32_t L_25 = __this->____length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline((&L_26), ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_23, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))), L_24, ((int32_t)(L_25&((int32_t)2147483647LL))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_26;
	}

IL_00b4:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_27 = V_0;
		return L_27;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_gshared_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_1 = __this->____object;
		NullCheck(((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = VirtualFuncInvoker0< Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 >::Invoke(4, ((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
		V_0 = L_2;
		int32_t L_3 = __this->____index;
		int32_t L_4 = __this->____length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5;
		L_5 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_0), ((int32_t)(L_3&((int32_t)2147483647LL))), L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_6;
		L_6 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_6;
	}

IL_0039:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_008e;
		}
	}
	{
		RuntimeObject* L_12 = __this->____object;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_12, String_t_il2cpp_TypeInfo_var));
		String_t* L_13 = V_1;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		String_t* L_14 = V_1;
		NullCheck(L_14);
		Il2CppChar* L_15;
		L_15 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_14, NULL);
		uint8_t* L_16;
		L_16 = il2cpp_unsafe_as_ref<uint8_t>(L_15);
		String_t* L_17 = V_1;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_17, NULL);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_19;
		memset((&L_19), 0, sizeof(L_19));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_19), L_16, L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		V_2 = L_19;
		int32_t L_20 = __this->____index;
		int32_t L_21 = __this->____length;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_22;
		L_22 = ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_inline((&V_2), L_20, L_21, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_22;
	}

IL_008e:
	{
		RuntimeObject* L_23 = __this->____object;
		if (!L_23)
		{
			goto IL_00b9;
		}
	}
	{
		RuntimeObject* L_24 = __this->____object;
		int32_t L_25 = __this->____index;
		int32_t L_26 = __this->____length;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_27;
		memset((&L_27), 0, sizeof(L_27));
		ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_inline((&L_27), ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_24, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))), L_25, ((int32_t)(L_26&((int32_t)2147483647LL))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_27;
	}

IL_00b9:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D));
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_28 = V_2;
		return L_28;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MemoryExtensions_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEFFCB2E665C23D1B7B12CA86B0BB0A5680004DC_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		il2cpp_codegen_initobj((&V_2), sizeof(uint8_t));
	}
	{
		bool L_2;
		L_2 = MemoryExtensions_IsTypeComparableAsBytes_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mFEF14F6D259CEA196C71A21BCB83EBC94ABB3FFA_inline((&V_1), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___1_other), il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_004b;
		}
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5 = ___0_span;
		uint8_t* L_6;
		L_6 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_5, il2cpp_rgctx_method(method->rgctx_data, 5));
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>(L_6);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_8 = ___1_other;
		uint8_t* L_9;
		L_9 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_8, il2cpp_rgctx_method(method->rgctx_data, 5));
		uint8_t* L_10;
		L_10 = il2cpp_unsafe_as_ref<uint8_t>(L_9);
		int32_t L_11 = V_0;
		uint64_t L_12 = V_1;
		bool L_13;
		L_13 = SpanHelpers_SequenceEqual_m69781B64721462BCA1ED200A1BB853E9B7026F2E(L_7, L_10, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_11), (int64_t)L_12)), NULL);
		return L_13;
	}

IL_004b:
	{
		return (bool)0;
	}

IL_004d:
	{
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___1_other), il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_006a;
		}
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_16 = ___0_span;
		uint8_t* L_17;
		L_17 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_16, il2cpp_rgctx_method(method->rgctx_data, 5));
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_18 = ___1_other;
		uint8_t* L_19;
		L_19 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_18, il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_20 = V_0;
		bool L_21;
		L_21 = SpanHelpers_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mFD8AD32B5F2EBF9489593A1FA99B57E7764E6735(L_17, L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_21;
	}

IL_006a:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t BinaryPrimitives_ReverseEndianness_mDBF226C2D52CAFF6DE538F8245444B5CF87A02D0_inline (uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		uint16_t L_1 = ___0_value;
		return (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_0>>8)), ((int32_t)((int32_t)L_1<<8)))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t BinaryPrimitives_ReverseEndianness_m3D9424412C7D16FB3AFE244BC344BBECB291838B_inline (int16_t ___0_value, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_value;
		int16_t L_1 = ___0_value;
		return ((int16_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_0&((int32_t)255)))<<8))|((int32_t)(((int32_t)((int32_t)L_1&((int32_t)65280)))>>8)))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_mCCA2099164ECA9672968898DD996A9F04B392FFF_inline (uint32_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___0_value;
		V_0 = ((int32_t)((int32_t)L_0&((int32_t)16711935)));
		uint32_t L_1 = ___0_value;
		V_1 = ((int32_t)((int32_t)L_1&((int32_t)-16711936)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = V_1;
		uint32_t L_5 = V_1;
		return ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((uint32_t)L_2>>8))|((int32_t)((int32_t)L_3<<((int32_t)24))))), ((int32_t)(((int32_t)((int32_t)L_4<<8))|((int32_t)((uint32_t)L_5>>((int32_t)24)))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BinaryPrimitives_ReverseEndianness_mF7B5C36D507C0D85537E18A1141554A99093BD78_inline (int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		uint32_t L_1;
		L_1 = BinaryPrimitives_ReverseEndianness_mCCA2099164ECA9672968898DD996A9F04B392FFF_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t BinaryPrimitives_ReverseEndianness_mA698702D91EF4E47FF6F682E4B48F173FF376BDF_inline (uint64_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_value;
		uint32_t L_1;
		L_1 = BinaryPrimitives_ReverseEndianness_mCCA2099164ECA9672968898DD996A9F04B392FFF_inline(((int32_t)(uint32_t)L_0), NULL);
		uint64_t L_2 = ___0_value;
		uint32_t L_3;
		L_3 = BinaryPrimitives_ReverseEndianness_mCCA2099164ECA9672968898DD996A9F04B392FFF_inline(((int32_t)(uint32_t)((int64_t)((uint64_t)L_2>>((int32_t)32)))), NULL);
		return ((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)(uint64_t)L_1)<<((int32_t)32))), ((int64_t)(uint64_t)L_3)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BinaryPrimitives_ReverseEndianness_mCD5293727A7525EE7AD81584DBBBE43478F40A8D_inline (int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		uint64_t L_1;
		L_1 = BinaryPrimitives_ReverseEndianness_mA698702D91EF4E47FF6F682E4B48F173FF376BDF_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1CB9CA69ED7F15E1AED66F7E98D918E1DF0CB96A_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, uint16_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<uint16_t>();
		int32_t L_1;
		L_1 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_destination), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)28), NULL);
	}

IL_002b:
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		uint8_t* L_3;
		L_3 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6(L_2, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		uint16_t* L_4 = ___1_value;
		uint16_t L_5 = (*(uint16_t*)L_4);
		il2cpp_unsafe_write_unaligned(L_3, L_5);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m433300E1EAC29F2055D3E28298B3E33AA41629C8_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, int16_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<int16_t>();
		int32_t L_1;
		L_1 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_destination), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)28), NULL);
	}

IL_002b:
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		uint8_t* L_3;
		L_3 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6(L_2, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		int16_t* L_4 = ___1_value;
		int16_t L_5 = (*(int16_t*)L_4);
		il2cpp_unsafe_write_unaligned(L_3, L_5);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m2BD505F8011143B77CB9A048F4C97C64130CB6DB_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, uint32_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<uint32_t>();
		int32_t L_1;
		L_1 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_destination), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)28), NULL);
	}

IL_002b:
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		uint8_t* L_3;
		L_3 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6(L_2, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		uint32_t* L_4 = ___1_value;
		uint32_t L_5 = (*(uint32_t*)L_4);
		il2cpp_unsafe_write_unaligned(L_3, L_5);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEF660B60FA28FE8C12E8B08463FBB2E302DBF3D6_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, int32_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<int32_t>();
		int32_t L_1;
		L_1 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_destination), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)28), NULL);
	}

IL_002b:
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		uint8_t* L_3;
		L_3 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6(L_2, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		int32_t* L_4 = ___1_value;
		int32_t L_5 = (*(int32_t*)L_4);
		il2cpp_unsafe_write_unaligned(L_3, L_5);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m369E3011D17AFC47FE8EBD775DA05E3F136D3EA3_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, uint64_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<uint64_t>();
		int32_t L_1;
		L_1 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_destination), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)28), NULL);
	}

IL_002b:
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		uint8_t* L_3;
		L_3 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6(L_2, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		uint64_t* L_4 = ___1_value;
		uint64_t L_5 = (*(uint64_t*)L_4);
		il2cpp_unsafe_write_unaligned(L_3, L_5);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryMarshal_Write_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m16D93984D1D3FD0F0742D660AAB4626FF45A1C50_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, int64_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<int64_t>();
		int32_t L_1;
		L_1 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_destination), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)28), NULL);
	}

IL_002b:
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		uint8_t* L_3;
		L_3 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6(L_2, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		int64_t* L_4 = ___1_value;
		int64_t L_5 = (*(int64_t*)L_4);
		il2cpp_unsafe_write_unaligned(L_3, L_5);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t MemoryMarshal_Read_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE522E06A28DD43DAED8B42666149274B433F5317_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<uint16_t>();
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_source), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)28), NULL);
	}

IL_002b:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2 = ___0_source;
		uint8_t* L_3;
		L_3 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_2, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		uint16_t L_4;
		L_4 = il2cpp_unsafe_read_unaligned<uint16_t>(L_3);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t MemoryMarshal_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3371E1C3FCD5027463EFFC4C6F31FE983579F335_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<int16_t>();
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_source), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)28), NULL);
	}

IL_002b:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2 = ___0_source;
		uint8_t* L_3;
		L_3 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_2, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		int16_t L_4;
		L_4 = il2cpp_unsafe_read_unaligned<int16_t>(L_3);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MemoryMarshal_Read_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m56C749731FAD055AC5894D97F107FF8E5C6A13AE_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<uint32_t>();
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_source), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)28), NULL);
	}

IL_002b:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2 = ___0_source;
		uint8_t* L_3;
		L_3 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_2, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		uint32_t L_4;
		L_4 = il2cpp_unsafe_read_unaligned<uint32_t>(L_3);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MemoryMarshal_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m610B098B008105D72394F56BF309D3A9F0F12ABC_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<int32_t>();
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_source), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)28), NULL);
	}

IL_002b:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2 = ___0_source;
		uint8_t* L_3;
		L_3 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_2, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		int32_t L_4;
		L_4 = il2cpp_unsafe_read_unaligned<int32_t>(L_3);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t MemoryMarshal_Read_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4B7CEC36F79FB7BE35EB5ADC5B3F9B03A427FAD0_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<uint64_t>();
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_source), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)28), NULL);
	}

IL_002b:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2 = ___0_source;
		uint8_t* L_3;
		L_3 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_2, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		uint64_t L_4;
		L_4 = il2cpp_unsafe_read_unaligned<uint64_t>(L_3);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t MemoryMarshal_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA9F67C05F53E72F623261F3811072B33F3B522EA_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<int64_t>();
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_source), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)28), NULL);
	}

IL_002b:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2 = ___0_source;
		uint8_t* L_3;
		L_3 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_2, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		int64_t L_4;
		L_4 = il2cpp_unsafe_read_unaligned<int64_t>(L_3);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0037;
	}

IL_0037:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____array;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____offset;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		uint8_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint8_t>(L_10);
		int32_t L_12 = ___1_start;
		uint8_t* L_13;
		L_13 = il2cpp_unsafe_add<uint8_t,int32_t>(L_11, L_12);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_array;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = ___1_start;
		if ((!(((uint32_t)L_5) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_array;
		NullCheck((RuntimeArray*)L_8);
		uint8_t* L_9;
		L_9 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_8, NULL);
		uint8_t* L_10;
		L_10 = il2cpp_unsafe_as_ref<uint8_t>(L_9);
		int32_t L_11 = ___1_start;
		uint8_t* L_12;
		L_12 = il2cpp_unsafe_add<uint8_t,int32_t>(L_10, L_11);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_13;
		memset((&L_13), 0, sizeof(L_13));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_13), L_12);
		__this->____pointer = L_13;
		int32_t L_14 = ___2_length;
		__this->____length = L_14;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MemoryExtensions_IsTypeComparableAsBytes_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mFEF14F6D259CEA196C71A21BCB83EBC94ABB3FFA_gshared_inline (uint64_t* ___0_size, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003c;
		}
	}

IL_0036:
	{
		uint64_t* L_10 = ___0_size;
		*((int64_t*)L_10) = (int64_t)((int64_t)1);
		return (bool)1;
	}

IL_003c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_12, L_14, NULL);
		if (L_15)
		{
			goto IL_008d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (L_20)
		{
			goto IL_008d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		if (!L_25)
		{
			goto IL_0093;
		}
	}

IL_008d:
	{
		uint64_t* L_26 = ___0_size;
		*((int64_t*)L_26) = (int64_t)((int64_t)2);
		return (bool)1;
	}

IL_0093:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		bool L_31;
		L_31 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_28, L_30, NULL);
		if (L_31)
		{
			goto IL_00c9;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
		bool L_36;
		L_36 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_33, L_35, NULL);
		if (!L_36)
		{
			goto IL_00cf;
		}
	}

IL_00c9:
	{
		uint64_t* L_37 = ___0_size;
		*((int64_t*)L_37) = (int64_t)((int64_t)4);
		return (bool)1;
	}

IL_00cf:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		bool L_42;
		L_42 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_39, L_41, NULL);
		if (L_42)
		{
			goto IL_0105;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		bool L_47;
		L_47 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_44, L_46, NULL);
		if (!L_47)
		{
			goto IL_010b;
		}
	}

IL_0105:
	{
		uint64_t* L_48 = ___0_size;
		*((int64_t*)L_48) = (int64_t)((int64_t)8);
		return (bool)1;
	}

IL_010b:
	{
		uint64_t* L_49 = ___0_size;
		*((int64_t*)L_49) = (int64_t)((int64_t)0);
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (uint8_t*)(&L_0->___Data);
		return L_1;
	}
}
