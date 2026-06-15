#include "pch-cpp.hpp"





struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker;
template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker<T1, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[2] = { &p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3Invoker<T1, T2, T3*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3* p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[3] = { &p1, &p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
template <typename R>
struct InterfaceFuncInvoker0Invoker
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, &ret);
		return ret;
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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3)
	{
		void* params[3] = { &p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
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
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct U3CU3Ec__DisplayClass43_0_t4965B3656AA79DFE264F9A96D120A71C10B8014C;
struct U3CU3Ec__DisplayClass43_0_t8771AA89681E509F3350521C3D77176D1B5594A6;
struct U3CU3Ec__DisplayClass44_0_t6A0C8B0CA3A320F594208A5AD134A51627BA9F7E;
struct U3CU3Ec__DisplayClass44_0_tB336F0DF1F0A988A640A5631BBAB5294D006A321;
struct U3CEnumerateU3Ed__37_t93049FFB7DC8BB1601CC2551A214194BB81334D1;
struct U3CEnumerateIndexedU3Ed__38_tA89A937237B9981999181608DBE354921C1C9DB4;
struct U3CEnumerateNonZeroIndexedU3Ed__40_t0A55259DFDA9280208BD3619451068681076F306;
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF;
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812;
struct ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605;
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
struct DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3;
struct DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3;
struct DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6;
struct DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195;
struct DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9;
struct DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A;
struct DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934;
struct Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432;
struct Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A;
struct Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6;
struct Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C;
struct Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51;
struct EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4;
struct EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3;
struct EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5;
struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE;
struct EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66;
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
struct Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF;
struct Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF;
struct Func_2_t49E998685259ADE759F9329BF66F20DE8667006E;
struct Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2;
struct Func_2_tF7A25DDCCE46126D52529733C258011C5F441155;
struct Func_2_tDDC415B0A5306A4473D2ADD7C4E25824337698DB;
struct Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A;
struct Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B;
struct ICollection_1_tB1B4E5C5F2A09018BFFF33895D877551D5A5A504;
struct ICollection_1_t06B02EB1384AC34288B7D93BFBF9BF93EF1FD6C6;
struct ICollection_1_t17FFBF649DB8ACB74006A1CE0DDBEC67EC2EF9C1;
struct ICollection_1_t1AB5E7AA7512C5101B732371385CF057B149F3A3;
struct ICollection_1_t7BCDA9E5FD4A76E5AF6EE73237E620480B3AE555;
struct IDictionary_2_t5588543B8255F32779640C33F999DFB9F8F9D750;
struct IDictionary_2_tBC14A785035E1DA03AAD10029BD2353B2B64C979;
struct IDictionary_2_t87FE7C320472A9B284D1C22AA021ADB7F3848469;
struct IDictionary_2_t308D96B41575DA9A6921B80416D43AD9912F6258;
struct IDictionary_2_tA2330C7C8777A06DFEF91DA17F3C4618D7F1FA63;
struct IEnumerable_1_t662A7A2B5775AEEC230B90F3EBF5C4259D13CFEB;
struct IEnumerable_1_t9BE8859FCB454647898E49A706E45354EF0C0347;
struct IEnumerable_1_t69788D9AFD26197778A6CF8425B646BA5D20AD19;
struct IEnumerable_1_t588E71A0A868D650612A1C90C9A04E4C7B2081FA;
struct IEnumerable_1_t352FDDEA001ABE8E1D67849D2E2F3D1D75B03D41;
struct IEnumerable_1_tD0D8450750D79E79921A2475183B8C80CB58B578;
struct IEnumerator_1_t3748DDAECC7AEBE62D2A738F5E8865330BBE8532;
struct IEnumerator_1_t702EEB1CD49E32FFA185A4ADF5987E727496F897;
struct IEnumerator_1_tB911D3203476F60A7B3EC5F4B998768AF9BDC1BF;
struct IEnumerator_1_tFD44A2DA99404B229D5546B577A47551A84AD8D9;
struct IEnumerator_1_tAA9E173D47F9A415DBE8F74E8C3F53E27F513950;
struct IEnumerator_1_t327FF232159D9644239A65F54312F684DB7BE375;
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
struct IEnumerator_1_t785B1F88FC3C53564207F9B20CC4D3A7B0A03114;
struct IEnumerator_1_tE22515FA7B8CD58A14F0E258730FADE338D22973;
struct IEqualityComparer_1_t70B4AAA18830D58BB1710894036FB47010297104;
struct IEqualityComparer_1_t7E0865D3C94824B70E9446CB2829E99961341A72;
struct IEqualityComparer_1_t7B9144633093FF69C651B8EA9D6B8EA86E1AF68E;
struct IEqualityComparer_1_t09057139BDD0714353BF93A2BEAE1A754B82D07D;
struct IEqualityComparer_1_tDACC7D28FFD11A83A9FC39CC18863F52A3E7E88F;
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct KeyCollection_tBDE02C86CB927BE5F0AD48A994FBFCD41C94E41B;
struct KeyCollection_t7E7196E6A4A5AFC08256519394C16724F4BBD5A9;
struct KeyCollection_tE9ABD5491C3D5C24C16FC448528C4591E251D510;
struct KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2;
struct KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct KeyValuePairProperty_tE883A6048C21550261A3176050C59520BBE08A85;
struct MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA;
struct MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84;
struct ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4;
struct SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A;
struct SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED;
struct Stack_1_t27BF66C1EF60140B55713EA795B1064F2DD2F5EA;
struct Tables_t14D3B197594232ACFA76B87EB205EB3661F6EAA6;
struct Tables_tD895B223685217918C345ED5D52074F7E29E5F95;
struct Tuple_2_tA643EAA39FD2F76EB29A374D247F8459A083D862;
struct Tuple_2_tF4742C2244C83467B58D32CD8112595658903434;
struct Tuple_3_t7106CDFB2B2326E134E1DF811085D3747450F102;
struct Tuple_3_t20F25688E39A3114C8F25BD61ECD39F09F9CA2E0;
struct UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB;
struct ValueCollection_t88DA5C0BF61D7BE6C9C73CB2824415E7B3A6E6A5;
struct ValueCollection_t4672341F0C4C6F948F1710882A1490638DF13B57;
struct ValueCollection_t12673C4B427EECCBDDDC7DE4131D59D6B014845A;
struct ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688;
struct ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct VectorStorage_1_t947AEAF03DE0B67E9E8E10E19843B80E5188A99C;
struct VectorStorage_1_t343CC0AC98F29550CFC428324EB3D4394C4A88A6;
struct EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725;
struct EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6;
struct EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5;
struct EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41;
struct EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED;
struct KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2;
struct KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8;
struct KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38;
struct KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460;
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4;
struct __Il2CppFullySharedGenericStructTypeU5BU5DU5BU5D_t042D120258AA36B8D13568AB794A5BFBB7A72C7C;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct EnumU5BU5D_t6106A94708E3435454078BF14FA50152B7301912;
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4;
struct __Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
IL2CPP_EXTERN_C String_t* _stringLiteral188FDFEEC711300DC0BEB0CF62178DC1005B840E;
IL2CPP_EXTERN_C String_t* _stringLiteral356F04C6F728140A864A3C017EC37B728F823C71;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725;
struct EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6;
struct EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5;
struct EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41;
struct EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9;
struct KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED;
struct KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2;
struct KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8;
struct KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38;
struct KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460;
struct SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4;
struct __Il2CppFullySharedGenericStructTypeU5BU5DU5BU5D_t042D120258AA36B8D13568AB794A5BFBB7A72C7C;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4;
struct __Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec_t51AC25DA92EA86210A36C438C27EE3A800BA4D6D  : public RuntimeObject
{
};
struct U3CU3Ec_t11414E7EC73BB0E71FF17854867DF975619186C4  : public RuntimeObject
{
};
struct U3CU3Ec_t902A621328286C9036E2E6B6ED8B3FA0AAD9D1DD  : public RuntimeObject
{
};
struct U3CU3Ec__DisplayClass43_0_t4965B3656AA79DFE264F9A96D120A71C10B8014C  : public RuntimeObject
{
	DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* ___U3CU3E4__this;
	Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___f;
};
struct U3CU3Ec__DisplayClass43_0_t8771AA89681E509F3350521C3D77176D1B5594A6  : public RuntimeObject
{
	DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* ___U3CU3E4__this;
	Func_2_tDDC415B0A5306A4473D2ADD7C4E25824337698DB* ___f;
};
struct U3CU3Ec__DisplayClass44_0_t6A0C8B0CA3A320F594208A5AD134A51627BA9F7E  : public RuntimeObject
{
	DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* ___U3CU3E4__this;
	Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* ___f;
};
struct U3CU3Ec__DisplayClass44_0_tB336F0DF1F0A988A640A5631BBAB5294D006A321  : public RuntimeObject
{
	DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* ___U3CU3E4__this;
	Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B* ___f;
};
struct U3CEnumerateU3Ed__37_t93049FFB7DC8BB1601CC2551A214194BB81334D1  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	float ___U3CU3E2__current;
	int32_t ___U3CU3El__initialThreadId;
	DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* ___U3CU3E4__this;
	int32_t ___U3CjU3E5__2;
	int32_t ___U3CiU3E5__3;
};
struct U3CEnumerateU3Ed__37_t905E0DE63EB3EEEBE5FAD7DC9DFCA381DE194955 : public RuntimeObject {};
struct U3CEnumerateIndexedU3Ed__38_tA89A937237B9981999181608DBE354921C1C9DB4  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	Tuple_3_t7106CDFB2B2326E134E1DF811085D3747450F102* ___U3CU3E2__current;
	int32_t ___U3CU3El__initialThreadId;
	DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* ___U3CU3E4__this;
	int32_t ___U3CjU3E5__2;
	int32_t ___U3CiU3E5__3;
};
struct U3CEnumerateIndexedU3Ed__38_tCAC26C837D327CAFB94F4D81BDFCC010A43CD564  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	Tuple_3_t20F25688E39A3114C8F25BD61ECD39F09F9CA2E0* ___U3CU3E2__current;
	int32_t ___U3CU3El__initialThreadId;
	DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* ___U3CU3E4__this;
	int32_t ___U3CjU3E5__2;
	int32_t ___U3CiU3E5__3;
};
struct U3CEnumerateNonZeroIndexedU3Ed__40_t0A55259DFDA9280208BD3619451068681076F306  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	Tuple_3_t7106CDFB2B2326E134E1DF811085D3747450F102* ___U3CU3E2__current;
	int32_t ___U3CU3El__initialThreadId;
	DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* ___U3CU3E4__this;
	int32_t ___U3CiU3E5__2;
};
struct U3CEnumerateNonZeroIndexedU3Ed__40_t4B071F4E218177691AF3CB7F2C4B51AFEE076478  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	Tuple_3_t20F25688E39A3114C8F25BD61ECD39F09F9CA2E0* ___U3CU3E2__current;
	int32_t ___U3CU3El__initialThreadId;
	DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* ___U3CU3E4__this;
	int32_t ___U3CiU3E5__2;
};
struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF  : public RuntimeObject
{
	Tables_t14D3B197594232ACFA76B87EB205EB3661F6EAA6* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812  : public RuntimeObject
{
	Tables_tD895B223685217918C345ED5D52074F7E29E5F95* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data;
	RuntimeObject* ____lock;
	int32_t ___size;
};
struct DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9  : public RuntimeObject
{
	RuntimeObject* ____enumerator;
};
struct DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A  : public RuntimeObject
{
	RuntimeObject* ____enumerator;
};
struct DictionaryKeyCollectionDebugView_2_t11025E5862E2C4D0FD8923B7995FF3CA72AEC4B1  : public RuntimeObject
{
};
struct DictionaryKeyCollectionDebugView_2_tA967A5CC2E1F95032AE886F39B1005E56173D9D2  : public RuntimeObject
{
};
struct DictionaryPool_2_t97724CC612D346D7297B29FD225022206773E7FB  : public RuntimeObject
{
};
struct DictionaryValueCollectionDebugView_2_t6086817CC98620510D98FB742382358DA92C2D4C  : public RuntimeObject
{
};
struct DictionaryValueCollectionDebugView_2_tE2C8C453C326A08B63223B59D5D010EFFE30BEF3  : public RuntimeObject
{
};
struct Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tBDE02C86CB927BE5F0AD48A994FBFCD41C94E41B* ____keys;
	ValueCollection_t88DA5C0BF61D7BE6C9C73CB2824415E7B3A6E6A5* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t7E7196E6A4A5AFC08256519394C16724F4BBD5A9* ____keys;
	ValueCollection_t4672341F0C4C6F948F1710882A1490638DF13B57* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tE9ABD5491C3D5C24C16FC448528C4591E251D510* ____keys;
	ValueCollection_t12673C4B427EECCBDDDC7DE4131D59D6B014845A* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2* ____keys;
	ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* ____keys;
	ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* ____keys;
	ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* ____values;
	RuntimeObject* ____syncRoot;
};
struct EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51  : public RuntimeObject
{
};
struct EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4  : public RuntimeObject
{
};
struct EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3  : public RuntimeObject
{
};
struct EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5  : public RuntimeObject
{
};
struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE  : public RuntimeObject
{
};
struct EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66  : public RuntimeObject
{
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};
struct KeyCollection_tBDE02C86CB927BE5F0AD48A994FBFCD41C94E41B  : public RuntimeObject
{
	Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* ____dictionary;
};
struct KeyCollection_t7E7196E6A4A5AFC08256519394C16724F4BBD5A9  : public RuntimeObject
{
	Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* ____dictionary;
};
struct KeyCollection_tE9ABD5491C3D5C24C16FC448528C4591E251D510  : public RuntimeObject
{
	Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* ____dictionary;
};
struct KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2  : public RuntimeObject
{
	Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* ____dictionary;
};
struct KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123  : public RuntimeObject
{
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ____dictionary;
};
struct MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA  : public RuntimeObject
{
	int32_t ___RowCount;
	int32_t ___ColumnCount;
};
struct MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84  : public RuntimeObject
{
	int32_t ___RowCount;
	int32_t ___ColumnCount;
};
struct ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4  : public RuntimeObject
{
	Stack_1_t27BF66C1EF60140B55713EA795B1064F2DD2F5EA* ___m_Stack;
	UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB* ___m_ActionOnGet;
	UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB* ___m_ActionOnRelease;
	bool ___m_CollectionCheck;
	int32_t ___U3CcountAllU3Ek__BackingField;
};
struct Tuple_2_tA643EAA39FD2F76EB29A374D247F8459A083D862  : public RuntimeObject
{
	int32_t ___m_Item1;
	float ___m_Item2;
};
struct Tuple_2_tF4742C2244C83467B58D32CD8112595658903434 : public RuntimeObject {};
struct Tuple_3_t7106CDFB2B2326E134E1DF811085D3747450F102  : public RuntimeObject
{
	int32_t ___m_Item1;
	int32_t ___m_Item2;
	float ___m_Item3;
};
struct Tuple_3_t20F25688E39A3114C8F25BD61ECD39F09F9CA2E0 : public RuntimeObject {};
struct ValueCollection_t88DA5C0BF61D7BE6C9C73CB2824415E7B3A6E6A5  : public RuntimeObject
{
	Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* ____dictionary;
};
struct ValueCollection_t4672341F0C4C6F948F1710882A1490638DF13B57  : public RuntimeObject
{
	Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* ____dictionary;
};
struct ValueCollection_t12673C4B427EECCBDDDC7DE4131D59D6B014845A  : public RuntimeObject
{
	Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* ____dictionary;
};
struct ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688  : public RuntimeObject
{
	Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* ____dictionary;
};
struct ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F  : public RuntimeObject
{
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ____dictionary;
};
struct VectorStorage_1_t947AEAF03DE0B67E9E8E10E19843B80E5188A99C  : public RuntimeObject
{
	int32_t ___Length;
};
struct VectorStorage_1_t343CC0AC98F29550CFC428324EB3D4394C4A88A6  : public RuntimeObject
{
	int32_t ___Length;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
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
struct DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3  : public MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___Data;
};
struct DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3  : public MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___Data;
};
struct DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6  : public MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___Data;
};
struct DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195  : public MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___Data;
};
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	RuntimeObject* ___key;
	RuntimeObject* ___value;
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct PooledObject_t31ACF1A657D21FBFAE625A226831F45F0B2B7E42 
{
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___m_ToReturn;
	ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4* ___m_Pool;
};
struct SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A  : public MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___RowPointers;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ColumnIndices;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___Values;
};
struct SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED  : public MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___RowPointers;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ColumnIndices;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___Values;
};
struct ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D 
{
	int32_t ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC 
{
	RuntimeObject* ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A 
{
	RuntimeObject* ___Item1;
	RuntimeObject* ___Item2;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	RuntimeObject* ____key;
	RuntimeObject* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
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
struct EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 
{
	EnumU5BU5D_t6106A94708E3435454078BF14FA50152B7301912* ___values;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___flagValues;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___displayNames;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___names;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tooltip;
	bool ___flags;
	Type_t* ___underlyingType;
	bool ___unsigned;
	bool ___serializable;
};
struct EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_marshaled_pinvoke
{
	EnumU5BU5D_t6106A94708E3435454078BF14FA50152B7301912* ___values;
	Il2CppSafeArray* ___flagValues;
	char** ___displayNames;
	char** ___names;
	char** ___tooltip;
	int32_t ___flags;
	Type_t* ___underlyingType;
	int32_t ___unsigned;
	int32_t ___serializable;
};
struct EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_marshaled_com
{
	EnumU5BU5D_t6106A94708E3435454078BF14FA50152B7301912* ___values;
	Il2CppSafeArray* ___flagValues;
	Il2CppChar** ___displayNames;
	Il2CppChar** ___names;
	Il2CppChar** ___tooltip;
	int32_t ___flags;
	Type_t* ___underlyingType;
	int32_t ___unsigned;
	int32_t ___serializable;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
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
struct Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB 
{
	int32_t ___hashCode;
	int32_t ___next;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___key;
	RuntimeObject* ___value;
};
struct Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3 
{
	int32_t ___hashCode;
	int32_t ___next;
	ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key;
	RuntimeObject* ___value;
};
struct Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 
{
	int32_t ___hashCode;
	int32_t ___next;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2 
{
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE 
{
	ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 
{
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key;
	RuntimeObject* ___value;
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
struct ExceptionResource_t609A85E253A4E615583553D91D839E2E79FDFBD9 
{
	int32_t ___value__;
};
struct ExistingData_t886C8F837902474160E8A9556387EDB83CB0E2BE 
{
	int32_t ___value__;
};
struct InsertionBehavior_tAD0393881947C559238D7041A36917BEE6E2C7B1 
{
	uint8_t ___value__;
};
struct InstantiationKind_t9B77929786BCA193B4A916F2F25793598CF0DF7D 
{
	int32_t ___value__;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct Zeros_t7B0225904B94C97E1F4CFFBAF67C60B7D136348D 
{
	int32_t ___value__;
};
struct Enumerator_tC96082965BF7CE6E965D8A62AD147F5136330601 
{
	Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t7EAB54A47683A7B8AF6A7BAA32CD9FF5C3E01DBC 
{
	Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 
{
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ____current;
	int32_t ____getEnumeratorRetType;
};
struct PropertyBag_1_tEB280A6B1E6B2014C69D7F69938160F85728FAB1  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 
{
	int32_t ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 
{
	int32_t ___Item1;
	RuntimeObject* ___Item2;
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
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8  : public MulticastDelegate_t
{
};
struct Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1 
{
	int32_t ___hashCode;
	int32_t ___next;
	ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___key;
	RuntimeObject* ___value;
};
struct Entry_t087349F3AE170AB56B4363B52E225A982E89F930 
{
	int32_t ___hashCode;
	int32_t ___next;
	ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___key;
	EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___value;
};
struct Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF  : public MulticastDelegate_t
{
};
struct Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF  : public MulticastDelegate_t
{
};
struct Func_2_t49E998685259ADE759F9329BF66F20DE8667006E  : public MulticastDelegate_t
{
};
struct Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2  : public MulticastDelegate_t
{
};
struct Func_2_tF7A25DDCCE46126D52529733C258011C5F441155  : public MulticastDelegate_t
{
};
struct Func_2_tDDC415B0A5306A4473D2ADD7C4E25824337698DB  : public MulticastDelegate_t
{
};
struct Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A  : public MulticastDelegate_t
{
};
struct Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B  : public MulticastDelegate_t
{
};
struct KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08  : public PropertyBag_1_tEB280A6B1E6B2014C69D7F69938160F85728FAB1
{
	KeyValuePairProperty_tE883A6048C21550261A3176050C59520BBE08A85* ___m_KeyValuePairProperty;
};
struct KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943 
{
	ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 
{
	ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___key;
	EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___value;
};
struct UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934  : public KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08
{
};
struct Enumerator_t61F243054F6EB45C0FCD96307049DB3BCBDDC2E2 
{
	Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t4CF721A1BA2DC9E20AD58DFB10A094DA874F2424 
{
	Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 ____current;
	int32_t ____getEnumeratorRetType;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct U3CU3Ec_t51AC25DA92EA86210A36C438C27EE3A800BA4D6D_StaticFields
{
	U3CU3Ec_t51AC25DA92EA86210A36C438C27EE3A800BA4D6D* ___U3CU3E9;
	Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___U3CU3E9__26_0;
	Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___U3CU3E9__39_0;
};
struct U3CU3Ec_t11414E7EC73BB0E71FF17854867DF975619186C4_StaticFields
{
	U3CU3Ec_t11414E7EC73BB0E71FF17854867DF975619186C4* ___U3CU3E9;
	Func_2_tF7A25DDCCE46126D52529733C258011C5F441155* ___U3CU3E9__26_0;
	Func_2_tF7A25DDCCE46126D52529733C258011C5F441155* ___U3CU3E9__39_0;
};
struct U3CU3Ec_t902A621328286C9036E2E6B6ED8B3FA0AAD9D1DD_StaticFields
{
	U3CU3Ec_t902A621328286C9036E2E6B6ED8B3FA0AAD9D1DD* ___U3CU3E9;
};
struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct DictionaryPool_2_t97724CC612D346D7297B29FD225022206773E7FB_StaticFields
{
	ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4* ___s_Pool;
};
struct EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51_StaticFields
{
	EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* ___defaultComparer;
};
struct EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4_StaticFields
{
	EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* ___defaultComparer;
};
struct EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3_StaticFields
{
	EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* ___defaultComparer;
};
struct EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5_StaticFields
{
	EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* ___defaultComparer;
};
struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields
{
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* ___defaultComparer;
};
struct EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66_StaticFields
{
	EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* ___defaultComparer;
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer;
};
struct MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields
{
	float ___Zero;
};
struct VectorStorage_1_t947AEAF03DE0B67E9E8E10E19843B80E5188A99C_StaticFields
{
	float ___Zero;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
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
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
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
struct SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
	inline float GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, float value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, float value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
struct SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4  : public RuntimeArray
{
	ALIGN_FIELD (8) SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* m_Items[1];

	inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct __Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = il2cpp_array_calc_byte_offset(this, i * jBound + j);
		return m_Items + index;
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = il2cpp_array_calc_byte_offset(this, i * jBound + j);
		return m_Items + index;
	}
};
struct __Il2CppFullySharedGenericStructTypeU5BU5DU5BU5D_t042D120258AA36B8D13568AB794A5BFBB7A72C7C  : public RuntimeArray
{
	ALIGN_FIELD (8) __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* m_Items[1];

	inline __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB m_Items[1];

	inline Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2 m_Items[1];

	inline KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533  : public RuntimeArray
{
	ALIGN_FIELD (8) DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB m_Items[1];

	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
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
struct EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1 m_Items[1];

	inline Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943 m_Items[1];

	inline KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t087349F3AE170AB56B4363B52E225A982E89F930 m_Items[1];

	inline Entry_t087349F3AE170AB56B4363B52E225A982E89F930 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t087349F3AE170AB56B4363B52E225A982E89F930* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t087349F3AE170AB56B4363B52E225A982E89F930 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___values), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___flagValues), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___displayNames), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___names), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___tooltip), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___underlyingType), (void*)NULL);
		#endif
	}
	inline Entry_t087349F3AE170AB56B4363B52E225A982E89F930 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t087349F3AE170AB56B4363B52E225A982E89F930* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t087349F3AE170AB56B4363B52E225A982E89F930 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___values), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___flagValues), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___displayNames), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___names), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___tooltip), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___underlyingType), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 m_Items[1];

	inline KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___values), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___flagValues), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___displayNames), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___names), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___tooltip), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___underlyingType), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___values), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___flagValues), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___displayNames), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___names), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___tooltip), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___underlyingType), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3 m_Items[1];

	inline Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE m_Items[1];

	inline KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 m_Items[1];

	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 m_Items[1];

	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixStorage_1__ctor_mDE03DDFCE7EE0B20F683D5F9D84827911F6FD2A6_gshared (MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* __this, int32_t ___0_rowCount, int32_t ___1_columnCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1__ctor_mB811B51C4CB1F797C65A6E0198C0B4B367E5CFE7_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, int32_t ___0_rows, int32_t ___1_columns, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_m494DACD125AFD0F19BDF6B982BC3BDFCAC2D9AB2_gshared_inline (Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1__ctor_m3EF04D9E6A93FA324C3CAF04B1A2394E50E975BE_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, int32_t ___0_rows, int32_t ___1_columns, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Enumerable_ToArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF0AED1993946FF775115C47514B29636472220A1_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tuple_2_get_Item1_m655CE727F147B3B44D01EB099FE00D3C7A67E185_gshared_inline (Tuple_2_tA643EAA39FD2F76EB29A374D247F8459A083D862* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tuple_2_get_Item2_m9F36DBD554BD25351AFC5BA854DDA4C9C73C86CD_gshared_inline (Tuple_2_tA643EAA39FD2F76EB29A374D247F8459A083D862* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_CopyToUnchecked_mE893B4C44AEEA700465D9556194E75BE779CCD7E_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* ___0_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_CopyToUnchecked_m0EDC1AF741D1AA9E673B354DB4DA90C11820E0D5_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3* ___0_target, int32_t ___1_existingData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_CopyToUnchecked_m284C889B6F9A206D7BF31C1478CA395952670781_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* ___0_target, int32_t ___1_existingData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_CopySubMatrixToUnchecked_m1BEC76621B391D08006F7A5E1D046BB13034F6C6_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3* ___0_target, int32_t ___1_sourceRowIndex, int32_t ___2_targetRowIndex, int32_t ___3_rowCount, int32_t ___4_sourceColumnIndex, int32_t ___5_targetColumnIndex, int32_t ___6_columnCount, int32_t ___7_existingData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_CopySubMatrixToUnchecked_m3493F9038B5DE68DBBFEA3E7085D029E1B9ED738_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* ___0_target, int32_t ___1_sourceRowIndex, int32_t ___2_targetRowIndex, int32_t ___3_rowCount, int32_t ___4_sourceColumnIndex, int32_t ___5_targetColumnIndex, int32_t ___6_columnCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m03E06C4CC75B5D767310B9AAF6151183593E7A02_gshared (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m415D5E077869D73B39C0262E4033717E6D928977_gshared (RuntimeObject* ___0_source, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__37__ctor_m1DCE6C212916AABAE32107CAB795035E54F8D6E5_gshared (U3CEnumerateU3Ed__37_t93049FFB7DC8BB1601CC2551A214194BB81334D1* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateIndexedU3Ed__38__ctor_m251718C89DC57069B876749698EC238945526157_gshared (U3CEnumerateIndexedU3Ed__38_tA89A937237B9981999181608DBE354921C1C9DB4* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m62B5CE88FE63A951D90D4B83ECC5594BA7C9E2DB_gshared (RuntimeObject* ___0_source, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateNonZeroIndexedU3Ed__40__ctor_m5793455E9EDCA9F585A97DCEF815F27281CD2D7D_gshared (U3CEnumerateNonZeroIndexedU3Ed__40_t0A55259DFDA9280208BD3619451068681076F306* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_gshared_inline (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* __this, float ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_3__ctor_mC2E06904C87AEE70C646612D9DB328C2722B34B7_gshared (Tuple_3_t7106CDFB2B2326E134E1DF811085D3747450F102* __this, int32_t ___0_item1, int32_t ___1_item2, float ___2_item3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass43_0__ctor_mFDB68FA636884A76182D0F040A1571F08AA1CAAC_gshared (U3CU3Ec__DisplayClass43_0_t4965B3656AA79DFE264F9A96D120A71C10B8014C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m83CEE170A5B9427B596A04F9F50676B044223927_gshared (Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass44_0__ctor_m8A09FCEBA91D16639238CCFE2FA98F886C609506_gshared (U3CU3Ec__DisplayClass44_0_t6A0C8B0CA3A320F594208A5AD134A51627BA9F7E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m12EC3080C7512F05099338965FD8626ACB343320_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m3D603D6F0FFDE77F0366C90242C43563CEBB3257_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1C63FB06894D15B15547CF7029BE85DE0C1460D6_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mEB41CDA358BAD634BDFCEF250C9A5B979F0E89EA_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* EqualityComparer_1_get_Default_m88BF68F306BE3C19A1C91BC23EFF142E26C9B85A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8597D9D2227425280CCF1B76FC1CD89617EFF002_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m967CE6C9C7408304B7C5AA6A317DACB90125C759_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D KeyValuePair_2_get_Key_m7AA488818685C42D571C272B06AA080A4A94CE52_gshared_inline (KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m34BF87EEF62B064087D91704FBD86D030C93FDF1_gshared_inline (KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m8A37BEE0EBC802F95747414B29E4622D9CC81C32_gshared (KeyCollection_tBDE02C86CB927BE5F0AD48A994FBFCD41C94E41B* __this, Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m7CA6E23FAA18D8DA058FF3A0A38F80B8F49577C6_gshared (ValueCollection_t88DA5C0BF61D7BE6C9C73CB2824415E7B3A6E6A5* __this, Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m2AA3F8E242DCA98EF2E0396858583EB5AE74B6A4_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mD9AA18205863DAD672D211A62E6E4444680A5E5B_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m6C10EF6133F6C97C365004EC9BE98819F4D925DA_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m16CB87005622A0A8AFCA4950F14A27E96C3F24C2_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m634AA9A45ACF99CC9BF9149FB3300189769D3A7E_gshared (KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m0801ADFA3085DD98E30831190B3122F7D373DC4A_gshared (Enumerator_tC96082965BF7CE6E965D8A62AD147F5136330601* __this, Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mE695D6450E168F387CC9C57F55837038398BDBCF_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m9D4E10761077AC6288F37B5F730ED598FF1A4361_gshared (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD2C56C1A0AF99BA060A133BFAFCB651E96EA768B_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m028ADA52ECE2DB82AF684988FACE4F54B3E9AB14_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mCEF7E07C2E50E97AD5A4C6C8461A8F2A605B83A0_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m730E0B496C5F2ABD37BC67DBD1B44A4CB8838C8D_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAFA6F8A9E9C78527392AD791F77B96531FA53D2C_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mCFE85DE62B322280478F36364C3DA7B344D6495A_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* EqualityComparer_1_get_Default_m498FCACFE5907C8C933172C063DE2B2E92337C75_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3EE8F30003C4ED1D46ED86E6C691B3441FB934B0_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mF3A4F88B6F47A5DD325BA8CE35A20D72C6C53DB7_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 KeyValuePair_2_get_Key_m7A1E1F02D02A1410C8C44388F12D3AE99F8F54EA_gshared_inline (KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m9DE90B4E3E3E77B8FE9AB8135016F683EA8F7245_gshared_inline (KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m419CD793E6DE2E5B79D9F1D73884DB139901441D_gshared (KeyCollection_t7E7196E6A4A5AFC08256519394C16724F4BBD5A9* __this, Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mBB8818B37A546079F6FBC1122974F235266A1992_gshared (ValueCollection_t4672341F0C4C6F948F1710882A1490638DF13B57* __this, Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m375C9D05F7DE488AB4FDDDC17B88E838AB25DA6B_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m91C3A3261465EA4841303EB9EFACD314F58ABACA_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mFFB57AB1433517E4B327B2033BBE052B9DEC3DB1_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mFFEB2041DE3A23C12F428C0A3C60676D97D54F95_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mC3CBE203AC422E430989220E3353F0DC4DD87E2C_gshared (KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943* __this, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m99EA64FAA44C860E7FC1D3C261A379693860773D_gshared (Enumerator_t61F243054F6EB45C0FCD96307049DB3BCBDDC2E2* __this, Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mB8BC533E1136B890605968B9F1515C594D6581B6_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m0E3CC862486E5A11C86EA662EE9217A9F1D3ED54_gshared (ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m0103F0F8CB0CB6178D35C272AE4D976BB776B2DB_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5DE9E82F29C0A4BC42CFAD134EA3ADF625663D13_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m24EA68FA7D4EB14A072B804C5145722796B74A5E_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mFE7382FE1EBCE28398803134394B206903FF6FB4_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m790A94FEDBA59298850A853DB853EABBBB3C109A_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m23D64FF7893AA34F8D360AD7198C5572A626DFAA_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* EqualityComparer_1_get_Default_mAFB5B2D452EC18AD23D703AD4D62747981D07BBD_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4B8B43A29F37C828AC628B828E71DA451A41257C_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m8A1AC9112B4AD9C869607D9C99BCFB7721EFABCB_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 KeyValuePair_2_get_Key_m584FB46DED2BD72F121617E86B3A3B44C36EF655_gshared_inline (KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 KeyValuePair_2_get_Value_mDC37BD68F776E2567B63FFC79622D4E2E1370191_gshared_inline (KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m9EB9EAF293C25B19D013B8D20953FC0EE6F4D1E9_gshared (KeyCollection_tE9ABD5491C3D5C24C16FC448528C4591E251D510* __this, Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m2E207A3EE3295538D81E11F03E01989AAD959A39_gshared (ValueCollection_t12673C4B427EECCBDDDC7DE4131D59D6B014845A* __this, Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m8EFF178525517781C69B333CABC2FC4985AE3059_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m47E10493832E752B0DBE984480281058507A6622_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* EqualityComparer_1_get_Default_m969C3F84F0E9B115126FA2458426DBFFF23DBC31_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2F068E9587C451B4EF5A91596CBEE4FF413B1E02_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mDF627516C52BCA15EC73D69F46F52EAFFFF96477_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mF23DF720149D9D13A547F08E017D056CD5465AFF_gshared (KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m0030D0B8AB9E107228FCD8C1859FA4EC37E2ABA0_gshared (Enumerator_t4CF721A1BA2DC9E20AD58DFB10A094DA874F2424* __this, Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mA4CCABA94814AA3B6ABE21E6A173200A93B75066_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m460EFE4CF658838C31DB4D6985FE82C682503238_gshared (ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2FB7681B01D79E97179A80F9B3587C7E41558D22_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m23A4B1183AFD9B68BCE14FD61B289CFC5CB81F18_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m22777EF9899A117FD4B4882FCF64C1E720A4DA4B_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_m3E05CB11F79CC8E4B9C1AEBEEA0F26308A3AC74D_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m88B6E3FDD04EEC0A70475E014FDE5E789AA0B311_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAD1F9B3D2A64D21E9DA3E15E88744BBF85DE1017_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mD960B50F81DCA87E24E061FC9DA5B2151ECBB382_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* EqualityComparer_1_get_Default_m50F560DEA8CA55EC57A79EEDB8854DDF4D57FBB9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m583A6681DC5B78409EC9FB2EDFC626E5C0199BAC_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mACAF0EE7EE714DF2595B05436D77537666A0C6D9_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC KeyValuePair_2_get_Key_m9B59C3D37C7C818FF05ECDE0F838AED96E61BC45_gshared_inline (KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m38109C806FEFB7E767CE81AF51B4BFA73290373F_gshared_inline (KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m30B8C5FC4D3410D7F34089BBEE6A0D0E643ACA07_gshared (KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2* __this, Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m98DFD7626BBC5EAD0F8FCEA62A8916BDE6814ED9_gshared (ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688* __this, Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m819C1332D27457D24A0ED3E7717940BB8E21051C_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m62A333274ABAE54603BB6722560A597B14E8FF6B_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m7374D4D0AD631F1A3E7E79DF42EC554ECE929F8C_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mF4341C4DF11233D7CFBF1A7F938DD547355CBA61_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0DE3BB49226AC2E739C1A011B5EC8519B3C81A24_gshared (KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m67A9BA2AFA1466EDD3CE765040A79D6B5D675DC3_gshared (Enumerator_t7EAB54A47683A7B8AF6A7BAA32CD9FF5C3E01DBC* __this, Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m4C993EA8C719C28732C182E8829AC5B88678C7A6_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_mF7FA5CF72DC54DA323EC57EE3128528591862157_gshared (ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mCC7A0761D252A4C9C881862C832093CBA0938BBC_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m12E987B2CC0263A69255B1F085ECEB74F11B78C9_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mB4452727B38328570F7018F15F00FEDAD04BB927_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m7DBF08E208AC4899227D4EC7DE2B40CDCB308496_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7A61548B3B1ACAA1527C5C5E21965656EA2C14B5_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_gshared_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_gshared_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6_gshared (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7_gshared (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1_gshared (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164_gshared (Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7_gshared (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* EqualityComparer_1_CreateComparer_m98B8A4A80C7607630936A0CD427BF897A9F786C8_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* EqualityComparer_1_CreateComparer_mBDF2F327322F82C5C6946301DBBCAADF475C4CE8_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* EqualityComparer_1_CreateComparer_mE0A7C7D719A999F27B2C6C94F581C2A9B5FF3133_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* EqualityComparer_1_CreateComparer_mA2F00D10E67D114ECAD52D68868F85E6B706A9FE_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* EqualityComparer_1_CreateComparer_m2F55975C1EE571640B2F505FBA95C2D028B95AF9_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_CreateComparer_mE9DC7CAF58EE3B2D235851CCFF895CD1C51F3E6B_gshared (const RuntimeMethod* method) ;

inline void MatrixStorage_1__ctor_mDE03DDFCE7EE0B20F683D5F9D84827911F6FD2A6 (MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* __this, int32_t ___0_rowCount, int32_t ___1_columnCount, const RuntimeMethod* method)
{
	((  void (*) (MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*, int32_t, int32_t, const RuntimeMethod*))MatrixStorage_1__ctor_mDE03DDFCE7EE0B20F683D5F9D84827911F6FD2A6_gshared)(__this, ___0_rowCount, ___1_columnCount, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Resources_get_ArgumentArrayWrongLength_m6C5C083F9D6EC1F92F81EFBEAD86C0D72E4D1A95 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9 (float* __this, float ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2 (float* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
inline void DiagonalMatrixStorage_1__ctor_mB811B51C4CB1F797C65A6E0198C0B4B367E5CFE7 (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, int32_t ___0_rows, int32_t ___1_columns, const RuntimeMethod* method)
{
	((  void (*) (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6*, int32_t, int32_t, const RuntimeMethod*))DiagonalMatrixStorage_1__ctor_mB811B51C4CB1F797C65A6E0198C0B4B367E5CFE7_gshared)(__this, ___0_rows, ___1_columns, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935 (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline float Func_2_Invoke_m494DACD125AFD0F19BDF6B982BC3BDFCAC2D9AB2_inline (Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* __this, int32_t ___0_arg, const RuntimeMethod* method)
{
	return ((  float (*) (Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF*, int32_t, const RuntimeMethod*))Func_2_Invoke_m494DACD125AFD0F19BDF6B982BC3BDFCAC2D9AB2_gshared_inline)(__this, ___0_arg, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
inline void DiagonalMatrixStorage_1__ctor_m3EF04D9E6A93FA324C3CAF04B1A2394E50E975BE (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, int32_t ___0_rows, int32_t ___1_columns, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_data, const RuntimeMethod* method)
{
	((  void (*) (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6*, int32_t, int32_t, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*))DiagonalMatrixStorage_1__ctor_m3EF04D9E6A93FA324C3CAF04B1A2394E50E975BE_gshared)(__this, ___0_rows, ___1_columns, ___2_data, method);
}
inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Enumerable_ToArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF0AED1993946FF775115C47514B29636472220A1 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF0AED1993946FF775115C47514B29636472220A1_gshared)(___0_source, method);
}
inline int32_t Tuple_2_get_Item1_m655CE727F147B3B44D01EB099FE00D3C7A67E185_inline (Tuple_2_tA643EAA39FD2F76EB29A374D247F8459A083D862* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Tuple_2_tA643EAA39FD2F76EB29A374D247F8459A083D862*, const RuntimeMethod*))Tuple_2_get_Item1_m655CE727F147B3B44D01EB099FE00D3C7A67E185_gshared_inline)(__this, method);
}
inline float Tuple_2_get_Item2_m9F36DBD554BD25351AFC5BA854DDA4C9C73C86CD_inline (Tuple_2_tA643EAA39FD2F76EB29A374D247F8459A083D862* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Tuple_2_tA643EAA39FD2F76EB29A374D247F8459A083D862*, const RuntimeMethod*))Tuple_2_get_Item2_m9F36DBD554BD25351AFC5BA854DDA4C9C73C86CD_gshared_inline)(__this, method);
}
inline void DiagonalMatrixStorage_1_CopyToUnchecked_mE893B4C44AEEA700465D9556194E75BE779CCD7E (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* ___0_target, const RuntimeMethod* method)
{
	((  void (*) (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6*, DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6*, const RuntimeMethod*))DiagonalMatrixStorage_1_CopyToUnchecked_mE893B4C44AEEA700465D9556194E75BE779CCD7E_gshared)(__this, ___0_target, method);
}
inline void DiagonalMatrixStorage_1_CopyToUnchecked_m0EDC1AF741D1AA9E673B354DB4DA90C11820E0D5 (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3* ___0_target, int32_t ___1_existingData, const RuntimeMethod* method)
{
	((  void (*) (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6*, DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3*, int32_t, const RuntimeMethod*))DiagonalMatrixStorage_1_CopyToUnchecked_m0EDC1AF741D1AA9E673B354DB4DA90C11820E0D5_gshared)(__this, ___0_target, ___1_existingData, method);
}
inline void DiagonalMatrixStorage_1_CopyToUnchecked_m284C889B6F9A206D7BF31C1478CA395952670781 (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* ___0_target, int32_t ___1_existingData, const RuntimeMethod* method)
{
	((  void (*) (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6*, SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A*, int32_t, const RuntimeMethod*))DiagonalMatrixStorage_1_CopyToUnchecked_m284C889B6F9A206D7BF31C1478CA395952670781_gshared)(__this, ___0_target, ___1_existingData, method);
}
inline void DiagonalMatrixStorage_1_CopySubMatrixToUnchecked_m1BEC76621B391D08006F7A5E1D046BB13034F6C6 (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3* ___0_target, int32_t ___1_sourceRowIndex, int32_t ___2_targetRowIndex, int32_t ___3_rowCount, int32_t ___4_sourceColumnIndex, int32_t ___5_targetColumnIndex, int32_t ___6_columnCount, int32_t ___7_existingData, const RuntimeMethod* method)
{
	((  void (*) (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6*, DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))DiagonalMatrixStorage_1_CopySubMatrixToUnchecked_m1BEC76621B391D08006F7A5E1D046BB13034F6C6_gshared)(__this, ___0_target, ___1_sourceRowIndex, ___2_targetRowIndex, ___3_rowCount, ___4_sourceColumnIndex, ___5_targetColumnIndex, ___6_columnCount, ___7_existingData, method);
}
inline void DiagonalMatrixStorage_1_CopySubMatrixToUnchecked_m3493F9038B5DE68DBBFEA3E7085D029E1B9ED738 (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* ___0_target, int32_t ___1_sourceRowIndex, int32_t ___2_targetRowIndex, int32_t ___3_rowCount, int32_t ___4_sourceColumnIndex, int32_t ___5_targetColumnIndex, int32_t ___6_columnCount, const RuntimeMethod* method)
{
	((  void (*) (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6*, DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))DiagonalMatrixStorage_1_CopySubMatrixToUnchecked_m3493F9038B5DE68DBBFEA3E7085D029E1B9ED738_gshared)(__this, ___0_target, ___1_sourceRowIndex, ___2_targetRowIndex, ___3_rowCount, ___4_sourceColumnIndex, ___5_targetColumnIndex, ___6_columnCount, method);
}
inline void Func_2__ctor_m03E06C4CC75B5D767310B9AAF6151183593E7A02 (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m03E06C4CC75B5D767310B9AAF6151183593E7A02_gshared)(__this, ___0_object, ___1_method, method);
}
inline bool Enumerable_Any_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m415D5E077869D73B39C0262E4033717E6D928977 (RuntimeObject* ___0_source, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___1_predicate, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*, const RuntimeMethod*))Enumerable_Any_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m415D5E077869D73B39C0262E4033717E6D928977_gshared)(___0_source, ___1_predicate, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
inline void U3CEnumerateU3Ed__37__ctor_m1DCE6C212916AABAE32107CAB795035E54F8D6E5 (U3CEnumerateU3Ed__37_t93049FFB7DC8BB1601CC2551A214194BB81334D1* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CEnumerateU3Ed__37_t93049FFB7DC8BB1601CC2551A214194BB81334D1*, int32_t, const RuntimeMethod*))U3CEnumerateU3Ed__37__ctor_m1DCE6C212916AABAE32107CAB795035E54F8D6E5_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline void U3CEnumerateIndexedU3Ed__38__ctor_m251718C89DC57069B876749698EC238945526157 (U3CEnumerateIndexedU3Ed__38_tA89A937237B9981999181608DBE354921C1C9DB4* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CEnumerateIndexedU3Ed__38_tA89A937237B9981999181608DBE354921C1C9DB4*, int32_t, const RuntimeMethod*))U3CEnumerateIndexedU3Ed__38__ctor_m251718C89DC57069B876749698EC238945526157_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline RuntimeObject* Enumerable_Where_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m62B5CE88FE63A951D90D4B83ECC5594BA7C9E2DB (RuntimeObject* ___0_source, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*, const RuntimeMethod*))Enumerable_Where_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m62B5CE88FE63A951D90D4B83ECC5594BA7C9E2DB_gshared)(___0_source, ___1_predicate, method);
}
inline void U3CEnumerateNonZeroIndexedU3Ed__40__ctor_m5793455E9EDCA9F585A97DCEF815F27281CD2D7D (U3CEnumerateNonZeroIndexedU3Ed__40_t0A55259DFDA9280208BD3619451068681076F306* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CEnumerateNonZeroIndexedU3Ed__40_t0A55259DFDA9280208BD3619451068681076F306*, int32_t, const RuntimeMethod*))U3CEnumerateNonZeroIndexedU3Ed__40__ctor_m5793455E9EDCA9F585A97DCEF815F27281CD2D7D_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline bool Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_inline (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* __this, float ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*, float, const RuntimeMethod*))Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_gshared_inline)(__this, ___0_arg, method);
}
inline void Tuple_3__ctor_mC2E06904C87AEE70C646612D9DB328C2722B34B7 (Tuple_3_t7106CDFB2B2326E134E1DF811085D3747450F102* __this, int32_t ___0_item1, int32_t ___1_item2, float ___2_item3, const RuntimeMethod* method)
{
	((  void (*) (Tuple_3_t7106CDFB2B2326E134E1DF811085D3747450F102*, int32_t, int32_t, float, const RuntimeMethod*))Tuple_3__ctor_mC2E06904C87AEE70C646612D9DB328C2722B34B7_gshared)(__this, ___0_item1, ___1_item2, ___2_item3, method);
}
inline void U3CU3Ec__DisplayClass43_0__ctor_mFDB68FA636884A76182D0F040A1571F08AA1CAAC (U3CU3Ec__DisplayClass43_0_t4965B3656AA79DFE264F9A96D120A71C10B8014C* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ec__DisplayClass43_0_t4965B3656AA79DFE264F9A96D120A71C10B8014C*, const RuntimeMethod*))U3CU3Ec__DisplayClass43_0__ctor_mFDB68FA636884A76182D0F040A1571F08AA1CAAC_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void Action_2__ctor_m83CEE170A5B9427B596A04F9F50676B044223927 (Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m83CEE170A5B9427B596A04F9F50676B044223927_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonParallel_For_m1C8AF2732DD4541FD7F86DEE1BB47B5EDEF5876E (int32_t ___0_fromInclusive, int32_t ___1_toExclusive, int32_t ___2_rangeSize, Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___3_body, const RuntimeMethod* method) ;
inline void U3CU3Ec__DisplayClass44_0__ctor_m8A09FCEBA91D16639238CCFE2FA98F886C609506 (U3CU3Ec__DisplayClass44_0_t6A0C8B0CA3A320F594208A5AD134A51627BA9F7E* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ec__DisplayClass44_0_t6A0C8B0CA3A320F594208A5AD134A51627BA9F7E*, const RuntimeMethod*))U3CU3Ec__DisplayClass44_0__ctor_m8A09FCEBA91D16639238CCFE2FA98F886C609506_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m12EC3080C7512F05099338965FD8626ACB343320 (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF*, const RuntimeMethod*))ConcurrentDictionary_2_GetEnumerator_m12EC3080C7512F05099338965FD8626ACB343320_gshared)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m3D603D6F0FFDE77F0366C90242C43563CEBB3257 (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method)
{
	return ((  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB (*) (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9*, const RuntimeMethod*))DictionaryEnumerator_get_Entry_m3D603D6F0FFDE77F0366C90242C43563CEBB3257_gshared)(__this, method);
}
inline void Dictionary_2__ctor_m1C63FB06894D15B15547CF7029BE85DE0C1460D6 (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m1C63FB06894D15B15547CF7029BE85DE0C1460D6_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___0_argument, const RuntimeMethod* method) ;
inline int32_t Dictionary_2_Initialize_mEB41CDA358BAD634BDFCEF250C9A5B979F0E89EA (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mEB41CDA358BAD634BDFCEF250C9A5B979F0E89EA_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* EqualityComparer_1_get_Default_m88BF68F306BE3C19A1C91BC23EFF142E26C9B85A_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m88BF68F306BE3C19A1C91BC23EFF142E26C9B85A_gshared_inline)(method);
}
inline void Dictionary_2__ctor_m8597D9D2227425280CCF1B76FC1CD89617EFF002 (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m8597D9D2227425280CCF1B76FC1CD89617EFF002_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline void Dictionary_2_Add_m967CE6C9C7408304B7C5AA6A317DACB90125C759 (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432*, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m967CE6C9C7408304B7C5AA6A317DACB90125C759_gshared)(__this, ___0_key, ___1_value, method);
}
inline ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D KeyValuePair_2_get_Key_m7AA488818685C42D571C272B06AA080A4A94CE52_inline (KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D (*) (KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2*, const RuntimeMethod*))KeyValuePair_2_get_Key_m7AA488818685C42D571C272B06AA080A4A94CE52_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_m34BF87EEF62B064087D91704FBD86D030C93FDF1_inline (KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2*, const RuntimeMethod*))KeyValuePair_2_get_Value_m34BF87EEF62B064087D91704FBD86D030C93FDF1_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F (const RuntimeMethod* method) ;
inline void ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, const RuntimeMethod*))ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared)(__this, ___0_key, ___1_value, method);
}
inline void KeyCollection__ctor_m8A37BEE0EBC802F95747414B29E4622D9CC81C32 (KeyCollection_tBDE02C86CB927BE5F0AD48A994FBFCD41C94E41B* __this, Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tBDE02C86CB927BE5F0AD48A994FBFCD41C94E41B*, Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432*, const RuntimeMethod*))KeyCollection__ctor_m8A37BEE0EBC802F95747414B29E4622D9CC81C32_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m7CA6E23FAA18D8DA058FF3A0A38F80B8F49577C6 (ValueCollection_t88DA5C0BF61D7BE6C9C73CB2824415E7B3A6E6A5* __this, Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t88DA5C0BF61D7BE6C9C73CB2824415E7B3A6E6A5*, Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432*, const RuntimeMethod*))ValueCollection__ctor_m7CA6E23FAA18D8DA058FF3A0A38F80B8F49577C6_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m2AA3F8E242DCA98EF2E0396858583EB5AE74B6A4 (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432*, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D, const RuntimeMethod*))Dictionary_2_FindEntry_m2AA3F8E242DCA98EF2E0396858583EB5AE74B6A4_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryInsert_mD9AA18205863DAD672D211A62E6E4444680A5E5B (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432*, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mD9AA18205863DAD672D211A62E6E4444680A5E5B_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m6C10EF6133F6C97C365004EC9BE98819F4D925DA (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432*, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D, const RuntimeMethod*))Dictionary_2_Remove_m6C10EF6133F6C97C365004EC9BE98819F4D925DA_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_m16CB87005622A0A8AFCA4950F14A27E96C3F24C2 (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432*, const RuntimeMethod*))Dictionary_2_get_Count_m16CB87005622A0A8AFCA4950F14A27E96C3F24C2_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_m634AA9A45ACF99CC9BF9149FB3300189769D3A7E (KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2*, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m634AA9A45ACF99CC9BF9149FB3300189769D3A7E_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m0801ADFA3085DD98E30831190B3122F7D373DC4A (Enumerator_tC96082965BF7CE6E965D8A62AD147F5136330601* __this, Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC96082965BF7CE6E965D8A62AD147F5136330601*, Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432*, int32_t, const RuntimeMethod*))Enumerator__ctor_m0801ADFA3085DD98E30831190B3122F7D373DC4A_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
inline void Dictionary_2_CopyTo_mE695D6450E168F387CC9C57F55837038398BDBCF (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432*, KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mE695D6450E168F387CC9C57F55837038398BDBCF_gshared)(__this, ___0_array, ___1_index, method);
}
inline int32_t ValueTuple_2_GetHashCode_m9D4E10761077AC6288F37B5F730ED598FF1A4361 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D*, const RuntimeMethod*))ValueTuple_2_GetHashCode_m9D4E10761077AC6288F37B5F730ED598FF1A4361_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_mD2C56C1A0AF99BA060A133BFAFCB651E96EA768B (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432*, const RuntimeMethod*))Dictionary_2_Resize_mD2C56C1A0AF99BA060A133BFAFCB651E96EA768B_gshared)(__this, method);
}
inline bool ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16 (int32_t ___0_resource, const RuntimeMethod* method) ;
inline bool ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m028ADA52ECE2DB82AF684988FACE4F54B3E9AB14 (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m028ADA52ECE2DB82AF684988FACE4F54B3E9AB14_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline bool Dictionary_2_IsCompatibleKey_mCEF7E07C2E50E97AD5A4C6C8461A8F2A605B83A0 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mCEF7E07C2E50E97AD5A4C6C8461A8F2A605B83A0_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m730E0B496C5F2ABD37BC67DBD1B44A4CB8838C8D (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432*, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m730E0B496C5F2ABD37BC67DBD1B44A4CB8838C8D_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982 (RuntimeObject* ___0_key, Type_t* ___1_targetType, const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_mAFA6F8A9E9C78527392AD791F77B96531FA53D2C (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mAFA6F8A9E9C78527392AD791F77B96531FA53D2C_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_mCFE85DE62B322280478F36364C3DA7B344D6495A (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mCFE85DE62B322280478F36364C3DA7B344D6495A_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* EqualityComparer_1_get_Default_m498FCACFE5907C8C933172C063DE2B2E92337C75_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m498FCACFE5907C8C933172C063DE2B2E92337C75_gshared_inline)(method);
}
inline void Dictionary_2__ctor_m3EE8F30003C4ED1D46ED86E6C691B3441FB934B0 (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m3EE8F30003C4ED1D46ED86E6C691B3441FB934B0_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_mF3A4F88B6F47A5DD325BA8CE35A20D72C6C53DB7 (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A*, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mF3A4F88B6F47A5DD325BA8CE35A20D72C6C53DB7_gshared)(__this, ___0_key, ___1_value, method);
}
inline ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 KeyValuePair_2_get_Key_m7A1E1F02D02A1410C8C44388F12D3AE99F8F54EA_inline (KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 (*) (KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943*, const RuntimeMethod*))KeyValuePair_2_get_Key_m7A1E1F02D02A1410C8C44388F12D3AE99F8F54EA_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_m9DE90B4E3E3E77B8FE9AB8135016F683EA8F7245_inline (KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943*, const RuntimeMethod*))KeyValuePair_2_get_Value_m9DE90B4E3E3E77B8FE9AB8135016F683EA8F7245_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m419CD793E6DE2E5B79D9F1D73884DB139901441D (KeyCollection_t7E7196E6A4A5AFC08256519394C16724F4BBD5A9* __this, Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t7E7196E6A4A5AFC08256519394C16724F4BBD5A9*, Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A*, const RuntimeMethod*))KeyCollection__ctor_m419CD793E6DE2E5B79D9F1D73884DB139901441D_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mBB8818B37A546079F6FBC1122974F235266A1992 (ValueCollection_t4672341F0C4C6F948F1710882A1490638DF13B57* __this, Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t4672341F0C4C6F948F1710882A1490638DF13B57*, Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A*, const RuntimeMethod*))ValueCollection__ctor_mBB8818B37A546079F6FBC1122974F235266A1992_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m375C9D05F7DE488AB4FDDDC17B88E838AB25DA6B (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A*, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119, const RuntimeMethod*))Dictionary_2_FindEntry_m375C9D05F7DE488AB4FDDDC17B88E838AB25DA6B_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m91C3A3261465EA4841303EB9EFACD314F58ABACA (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A*, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m91C3A3261465EA4841303EB9EFACD314F58ABACA_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline bool Dictionary_2_Remove_mFFB57AB1433517E4B327B2033BBE052B9DEC3DB1 (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A*, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119, const RuntimeMethod*))Dictionary_2_Remove_mFFB57AB1433517E4B327B2033BBE052B9DEC3DB1_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mFFEB2041DE3A23C12F428C0A3C60676D97D54F95 (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A*, const RuntimeMethod*))Dictionary_2_get_Count_mFFEB2041DE3A23C12F428C0A3C60676D97D54F95_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mC3CBE203AC422E430989220E3353F0DC4DD87E2C (KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943* __this, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943*, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_mC3CBE203AC422E430989220E3353F0DC4DD87E2C_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m99EA64FAA44C860E7FC1D3C261A379693860773D (Enumerator_t61F243054F6EB45C0FCD96307049DB3BCBDDC2E2* __this, Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t61F243054F6EB45C0FCD96307049DB3BCBDDC2E2*, Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A*, int32_t, const RuntimeMethod*))Enumerator__ctor_m99EA64FAA44C860E7FC1D3C261A379693860773D_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mB8BC533E1136B890605968B9F1515C594D6581B6 (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A*, KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mB8BC533E1136B890605968B9F1515C594D6581B6_gshared)(__this, ___0_array, ___1_index, method);
}
inline int32_t ValueTuple_2_GetHashCode_m0E3CC862486E5A11C86EA662EE9217A9F1D3ED54 (ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119*, const RuntimeMethod*))ValueTuple_2_GetHashCode_m0E3CC862486E5A11C86EA662EE9217A9F1D3ED54_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m0103F0F8CB0CB6178D35C272AE4D976BB776B2DB (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A*, const RuntimeMethod*))Dictionary_2_Resize_m0103F0F8CB0CB6178D35C272AE4D976BB776B2DB_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m5DE9E82F29C0A4BC42CFAD134EA3ADF625663D13 (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m5DE9E82F29C0A4BC42CFAD134EA3ADF625663D13_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_m24EA68FA7D4EB14A072B804C5145722796B74A5E (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m24EA68FA7D4EB14A072B804C5145722796B74A5E_gshared)(___0_key, method);
}
inline void Dictionary_2_set_Item_mFE7382FE1EBCE28398803134394B206903FF6FB4 (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A*, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_mFE7382FE1EBCE28398803134394B206903FF6FB4_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Dictionary_2__ctor_m790A94FEDBA59298850A853DB853EABBBB3C109A (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m790A94FEDBA59298850A853DB853EABBBB3C109A_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m23D64FF7893AA34F8D360AD7198C5572A626DFAA (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m23D64FF7893AA34F8D360AD7198C5572A626DFAA_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* EqualityComparer_1_get_Default_mAFB5B2D452EC18AD23D703AD4D62747981D07BBD_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mAFB5B2D452EC18AD23D703AD4D62747981D07BBD_gshared_inline)(method);
}
inline void Dictionary_2__ctor_m4B8B43A29F37C828AC628B828E71DA451A41257C (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m4B8B43A29F37C828AC628B828E71DA451A41257C_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_m8A1AC9112B4AD9C869607D9C99BCFB7721EFABCB (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8, const RuntimeMethod*))Dictionary_2_Add_m8A1AC9112B4AD9C869607D9C99BCFB7721EFABCB_gshared)(__this, ___0_key, ___1_value, method);
}
inline ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 KeyValuePair_2_get_Key_m584FB46DED2BD72F121617E86B3A3B44C36EF655_inline (KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 (*) (KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37*, const RuntimeMethod*))KeyValuePair_2_get_Key_m584FB46DED2BD72F121617E86B3A3B44C36EF655_gshared_inline)(__this, method);
}
inline EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 KeyValuePair_2_get_Value_mDC37BD68F776E2567B63FFC79622D4E2E1370191_inline (KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37* __this, const RuntimeMethod* method)
{
	return ((  EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 (*) (KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37*, const RuntimeMethod*))KeyValuePair_2_get_Value_mDC37BD68F776E2567B63FFC79622D4E2E1370191_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m9EB9EAF293C25B19D013B8D20953FC0EE6F4D1E9 (KeyCollection_tE9ABD5491C3D5C24C16FC448528C4591E251D510* __this, Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tE9ABD5491C3D5C24C16FC448528C4591E251D510*, Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, const RuntimeMethod*))KeyCollection__ctor_m9EB9EAF293C25B19D013B8D20953FC0EE6F4D1E9_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m2E207A3EE3295538D81E11F03E01989AAD959A39 (ValueCollection_t12673C4B427EECCBDDDC7DE4131D59D6B014845A* __this, Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t12673C4B427EECCBDDDC7DE4131D59D6B014845A*, Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, const RuntimeMethod*))ValueCollection__ctor_m2E207A3EE3295538D81E11F03E01989AAD959A39_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m8EFF178525517781C69B333CABC2FC4985AE3059 (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, const RuntimeMethod*))Dictionary_2_FindEntry_m8EFF178525517781C69B333CABC2FC4985AE3059_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m47E10493832E752B0DBE984480281058507A6622 (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m47E10493832E752B0DBE984480281058507A6622_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* EqualityComparer_1_get_Default_m969C3F84F0E9B115126FA2458426DBFFF23DBC31_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m969C3F84F0E9B115126FA2458426DBFFF23DBC31_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m2F068E9587C451B4EF5A91596CBEE4FF413B1E02 (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, const RuntimeMethod*))Dictionary_2_Remove_m2F068E9587C451B4EF5A91596CBEE4FF413B1E02_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mDF627516C52BCA15EC73D69F46F52EAFFFF96477 (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, const RuntimeMethod*))Dictionary_2_get_Count_mDF627516C52BCA15EC73D69F46F52EAFFFF96477_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mF23DF720149D9D13A547F08E017D056CD5465AFF (KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37*, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8, const RuntimeMethod*))KeyValuePair_2__ctor_mF23DF720149D9D13A547F08E017D056CD5465AFF_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m0030D0B8AB9E107228FCD8C1859FA4EC37E2ABA0 (Enumerator_t4CF721A1BA2DC9E20AD58DFB10A094DA874F2424* __this, Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4CF721A1BA2DC9E20AD58DFB10A094DA874F2424*, Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, int32_t, const RuntimeMethod*))Enumerator__ctor_m0030D0B8AB9E107228FCD8C1859FA4EC37E2ABA0_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mA4CCABA94814AA3B6ABE21E6A173200A93B75066 (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mA4CCABA94814AA3B6ABE21E6A173200A93B75066_gshared)(__this, ___0_array, ___1_index, method);
}
inline int32_t ValueTuple_2_GetHashCode_m460EFE4CF658838C31DB4D6985FE82C682503238 (ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9*, const RuntimeMethod*))ValueTuple_2_GetHashCode_m460EFE4CF658838C31DB4D6985FE82C682503238_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m2FB7681B01D79E97179A80F9B3587C7E41558D22 (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, const RuntimeMethod*))Dictionary_2_Resize_m2FB7681B01D79E97179A80F9B3587C7E41558D22_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m23A4B1183AFD9B68BCE14FD61B289CFC5CB81F18 (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m23A4B1183AFD9B68BCE14FD61B289CFC5CB81F18_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_m22777EF9899A117FD4B4882FCF64C1E720A4DA4B (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m22777EF9899A117FD4B4882FCF64C1E720A4DA4B_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_m3E05CB11F79CC8E4B9C1AEBEEA0F26308A3AC74D (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_m3E05CB11F79CC8E4B9C1AEBEEA0F26308A3AC74D_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m88B6E3FDD04EEC0A70475E014FDE5E789AA0B311 (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8, const RuntimeMethod*))Dictionary_2_set_Item_m88B6E3FDD04EEC0A70475E014FDE5E789AA0B311_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Dictionary_2__ctor_mAD1F9B3D2A64D21E9DA3E15E88744BBF85DE1017 (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mAD1F9B3D2A64D21E9DA3E15E88744BBF85DE1017_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_mD960B50F81DCA87E24E061FC9DA5B2151ECBB382 (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mD960B50F81DCA87E24E061FC9DA5B2151ECBB382_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* EqualityComparer_1_get_Default_m50F560DEA8CA55EC57A79EEDB8854DDF4D57FBB9_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m50F560DEA8CA55EC57A79EEDB8854DDF4D57FBB9_gshared_inline)(method);
}
inline void Dictionary_2__ctor_m583A6681DC5B78409EC9FB2EDFC626E5C0199BAC (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m583A6681DC5B78409EC9FB2EDFC626E5C0199BAC_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_mACAF0EE7EE714DF2595B05436D77537666A0C6D9 (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mACAF0EE7EE714DF2595B05436D77537666A0C6D9_gshared)(__this, ___0_key, ___1_value, method);
}
inline ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC KeyValuePair_2_get_Key_m9B59C3D37C7C818FF05ECDE0F838AED96E61BC45_inline (KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC (*) (KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE*, const RuntimeMethod*))KeyValuePair_2_get_Key_m9B59C3D37C7C818FF05ECDE0F838AED96E61BC45_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_m38109C806FEFB7E767CE81AF51B4BFA73290373F_inline (KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE*, const RuntimeMethod*))KeyValuePair_2_get_Value_m38109C806FEFB7E767CE81AF51B4BFA73290373F_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m30B8C5FC4D3410D7F34089BBEE6A0D0E643ACA07 (KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2* __this, Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2*, Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, const RuntimeMethod*))KeyCollection__ctor_m30B8C5FC4D3410D7F34089BBEE6A0D0E643ACA07_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m98DFD7626BBC5EAD0F8FCEA62A8916BDE6814ED9 (ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688* __this, Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688*, Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, const RuntimeMethod*))ValueCollection__ctor_m98DFD7626BBC5EAD0F8FCEA62A8916BDE6814ED9_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m819C1332D27457D24A0ED3E7717940BB8E21051C (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, const RuntimeMethod*))Dictionary_2_FindEntry_m819C1332D27457D24A0ED3E7717940BB8E21051C_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m62A333274ABAE54603BB6722560A597B14E8FF6B (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m62A333274ABAE54603BB6722560A597B14E8FF6B_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline bool Dictionary_2_Remove_m7374D4D0AD631F1A3E7E79DF42EC554ECE929F8C (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, const RuntimeMethod*))Dictionary_2_Remove_m7374D4D0AD631F1A3E7E79DF42EC554ECE929F8C_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mF4341C4DF11233D7CFBF1A7F938DD547355CBA61 (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, const RuntimeMethod*))Dictionary_2_get_Count_mF4341C4DF11233D7CFBF1A7F938DD547355CBA61_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m0DE3BB49226AC2E739C1A011B5EC8519B3C81A24 (KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE*, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m0DE3BB49226AC2E739C1A011B5EC8519B3C81A24_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m67A9BA2AFA1466EDD3CE765040A79D6B5D675DC3 (Enumerator_t7EAB54A47683A7B8AF6A7BAA32CD9FF5C3E01DBC* __this, Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7EAB54A47683A7B8AF6A7BAA32CD9FF5C3E01DBC*, Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, int32_t, const RuntimeMethod*))Enumerator__ctor_m67A9BA2AFA1466EDD3CE765040A79D6B5D675DC3_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m4C993EA8C719C28732C182E8829AC5B88678C7A6 (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m4C993EA8C719C28732C182E8829AC5B88678C7A6_gshared)(__this, ___0_array, ___1_index, method);
}
inline int32_t ValueTuple_2_GetHashCode_mF7FA5CF72DC54DA323EC57EE3128528591862157 (ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*, const RuntimeMethod*))ValueTuple_2_GetHashCode_mF7FA5CF72DC54DA323EC57EE3128528591862157_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mCC7A0761D252A4C9C881862C832093CBA0938BBC (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, const RuntimeMethod*))Dictionary_2_Resize_mCC7A0761D252A4C9C881862C832093CBA0938BBC_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m12E987B2CC0263A69255B1F085ECEB74F11B78C9 (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m12E987B2CC0263A69255B1F085ECEB74F11B78C9_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_mB4452727B38328570F7018F15F00FEDAD04BB927 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mB4452727B38328570F7018F15F00FEDAD04BB927_gshared)(___0_key, method);
}
inline void Dictionary_2_set_Item_m7DBF08E208AC4899227D4EC7DE2B40CDCB308496 (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m7DBF08E208AC4899227D4EC7DE2B40CDCB308496_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_gshared_inline)(method);
}
inline void Dictionary_2__ctor_m7A61548B3B1ACAA1527C5C5E21965656EA2C14B5 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m7A61548B3B1ACAA1527C5C5E21965656EA2C14B5_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E_gshared)(__this, ___0_key, ___1_value, method);
}
inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14*, const RuntimeMethod*))KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14*, const RuntimeMethod*))KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6 (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123*, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7 (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F*, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline bool Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1 (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164 (Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9*, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, const RuntimeMethod*))Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3_gshared)(__this, ___0_array, ___1_index, method);
}
inline int32_t ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7 (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*, const RuntimeMethod*))ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861_gshared)(___0_key, method);
}
inline void Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* EqualityComparer_1_CreateComparer_m98B8A4A80C7607630936A0CD427BF897A9F786C8 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m98B8A4A80C7607630936A0CD427BF897A9F786C8_gshared)(method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared)(method);
}
inline EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* EqualityComparer_1_CreateComparer_mBDF2F327322F82C5C6946301DBBCAADF475C4CE8 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mBDF2F327322F82C5C6946301DBBCAADF475C4CE8_gshared)(method);
}
inline EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* EqualityComparer_1_CreateComparer_mE0A7C7D719A999F27B2C6C94F581C2A9B5FF3133 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mE0A7C7D719A999F27B2C6C94F581C2A9B5FF3133_gshared)(method);
}
inline EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* EqualityComparer_1_CreateComparer_mA2F00D10E67D114ECAD52D68868F85E6B706A9FE (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mA2F00D10E67D114ECAD52D68868F85E6B706A9FE_gshared)(method);
}
inline EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* EqualityComparer_1_CreateComparer_m2F55975C1EE571640B2F505FBA95C2D028B95AF9 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m2F55975C1EE571640B2F505FBA95C2D028B95AF9_gshared)(method);
}
inline EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_CreateComparer_mE9DC7CAF58EE3B2D235851CCFF895CD1C51F3E6B (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mE9DC7CAF58EE3B2D235851CCFF895CD1C51F3E6B_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 29051
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1__ctor_mB811B51C4CB1F797C65A6E0198C0B4B367E5CFE7_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, int32_t ___0_rows, int32_t ___1_columns, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_rows;
		int32_t L_1 = ___1_columns;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		MatrixStorage_1__ctor_mDE03DDFCE7EE0B20F683D5F9D84827911F6FD2A6((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		int32_t L_2 = ___0_rows;
		int32_t L_3 = ___1_columns;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_2, L_3, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)L_4);
		__this->___Data = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Data), (void*)L_5);
		return;
	}
}
// Method Definition Index: 29052
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1__ctor_m3EF04D9E6A93FA324C3CAF04B1A2394E50E975BE_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, int32_t ___0_rows, int32_t ___1_columns, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_rows;
		int32_t L_1 = ___1_columns;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		MatrixStorage_1__ctor_mDE03DDFCE7EE0B20F683D5F9D84827911F6FD2A6((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___2_data;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0016:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = ___2_data;
		NullCheck(L_4);
		int32_t L_5 = ___0_rows;
		int32_t L_6 = ___1_columns;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_5, L_6, NULL);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)L_7)))
		{
			goto IL_0043;
		}
	}
	{
		String_t* L_8;
		L_8 = Resources_get_ArgumentArrayWrongLength_m6C5C083F9D6EC1F92F81EFBEAD86C0D72E4D1A95(NULL);
		int32_t L_9 = ___0_rows;
		int32_t L_10 = ___1_columns;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var)));
		int32_t L_11;
		L_11 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_9, L_10, NULL);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_defaults.int32_class, &L_12);
		String_t* L_14;
		L_14 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_8, L_13, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469)), L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0043:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = ___2_data;
		__this->___Data = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Data), (void*)L_16);
		return;
	}
}
// Method Definition Index: 29053
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DiagonalMatrixStorage_1_get_IsDense_m1A3431588A94FDAA205E113AEC155DB7348217ED_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// Method Definition Index: 29054
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DiagonalMatrixStorage_1_get_IsFullyMutable_m59D738D08BE6DD6F81D15BBCDE145C7D4F95584B_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// Method Definition Index: 29055
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DiagonalMatrixStorage_1_IsMutableAt_m3C6F49019436984CAC93E2681605EADEEBA3F772_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, int32_t ___0_row, int32_t ___1_column, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_row;
		int32_t L_1 = ___1_column;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// Method Definition Index: 29056
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DiagonalMatrixStorage_1_At_m39F4F950373A1BA5EFE7E30B50244CBFC303B425_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, int32_t ___0_row, int32_t ___1_column, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_row;
		int32_t L_1 = ___1_column;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		float L_2 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 1)))->___Zero;
		return L_2;
	}

IL_000a:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___Data;
		int32_t L_4 = ___0_row;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		float L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}
}
// Method Definition Index: 29057
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_At_m5BABECC49509A3677E9362A45DC79F366ADD34C8_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, int32_t ___0_row, int32_t ___1_column, float ___2_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___0_row;
		int32_t L_1 = ___1_column;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = __this->___Data;
		int32_t L_3 = ___0_row;
		float L_4 = ___2_value;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (float)L_4);
		return;
	}

IL_0012:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		float L_5 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 1)))->___Zero;
		V_0 = L_5;
		float L_6 = ___2_value;
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (L_7)
		{
			goto IL_0033;
		}
	}
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_8 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral356F04C6F728140A864A3C017EC37B728F823C71)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0033:
	{
		return;
	}
}
// Method Definition Index: 29058
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiagonalMatrixStorage_1_GetHashCode_mB363D387F6F6303F2DDBB5A363418CC828964DF8_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___Data;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)(((RuntimeArray*)L_0)->max_length)), ((int32_t)25), NULL);
		V_0 = L_1;
		V_1 = ((int32_t)17);
		V_2 = 0;
		goto IL_003a;
	}

IL_0017:
	{
		int32_t L_2 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___Data;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)31))), L_5));
		int32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_003a:
	{
		int32_t L_7 = V_2;
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29059
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_Clear_m386BD0FDD737FE6DC602C6B259515362F158F9BB_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___Data;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___Data;
		NullCheck(L_1);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		return;
	}
}
// Method Definition Index: 29060
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_ClearUnchecked_mDB4DA9A99A16EAFAC44BF249C33C40798AD7793A_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, int32_t ___0_rowIndex, int32_t ___1_rowCount, int32_t ___2_columnIndex, int32_t ___3_columnCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_rowIndex;
		int32_t L_1 = ___2_columnIndex;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = ___0_rowIndex;
		int32_t L_4 = ___1_rowCount;
		int32_t L_5 = ___2_columnIndex;
		int32_t L_6 = ___3_columnCount;
		int32_t L_7;
		L_7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_3, L_4)), ((int32_t)il2cpp_codegen_add(L_5, L_6)), NULL);
		V_1 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) <= ((int32_t)L_9)))
		{
			goto IL_0028;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = __this->___Data;
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, L_11, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
	}

IL_0028:
	{
		return;
	}
}
// Method Definition Index: 29061
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_ClearRowsUnchecked_mBA6412CA9ED42DB222095420A6FFD5F55D026A2F_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_rowIndices, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001b;
	}

IL_0004:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___Data;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___0_rowIndices;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		float L_5 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 1)))->___Zero;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (float)L_5);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001b:
	{
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___0_rowIndices;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29062
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_ClearColumnsUnchecked_m926C5D51AA8086A8A0BE9C72F11B1C3A702A4380_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_columnIndices, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001b;
	}

IL_0004:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___Data;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___0_columnIndices;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		float L_5 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 1)))->___Zero;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (float)L_5);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001b:
	{
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___0_columnIndices;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29063
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* DiagonalMatrixStorage_1_OfMatrix_m8EDE79A30EE962660BDAFA04F44452CBF874A872_gshared (MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* ___0_matrix, const RuntimeMethod* method) 
{
	DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* V_0 = NULL;
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_0 = ___0_matrix;
		NullCheck(L_0);
		int32_t L_1 = L_0->___RowCount;
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_2 = ___0_matrix;
		NullCheck(L_2);
		int32_t L_3 = L_2->___ColumnCount;
		DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_4 = (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		DiagonalMatrixStorage_1__ctor_mB811B51C4CB1F797C65A6E0198C0B4B367E5CFE7(L_4, L_1, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_0 = L_4;
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_5 = ___0_matrix;
		DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_6 = V_0;
		NullCheck(L_5);
		VirtualActionInvoker2< MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*, int32_t >::Invoke(14, L_5, (MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)L_6, (int32_t)1);
		DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_7 = V_0;
		return L_7;
	}
}
// Method Definition Index: 29064
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* DiagonalMatrixStorage_1_OfArray_m2DE11C256E201053003E893A2D653AE7A3F48B88_gshared (SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ___0_array, const RuntimeMethod* method) 
{
	DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	{
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_0 = ___0_array;
		NullCheck((RuntimeArray*)L_0);
		int32_t L_1;
		L_1 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_0, 0, NULL);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		int32_t L_3;
		L_3 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_2, 1, NULL);
		DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_4 = (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		DiagonalMatrixStorage_1__ctor_mB811B51C4CB1F797C65A6E0198C0B4B367E5CFE7(L_4, L_1, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_0 = L_4;
		V_1 = 0;
		goto IL_006f;
	}

IL_0018:
	{
		V_2 = 0;
		goto IL_0062;
	}

IL_001c:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = V_2;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0036;
		}
	}
	{
		DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_7 = V_0;
		NullCheck(L_7);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = L_7->___Data;
		int32_t L_9 = V_1;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_10 = ___0_array;
		int32_t L_11 = V_1;
		int32_t L_12 = V_2;
		NullCheck(L_10);
		float L_13;
		L_13 = (L_10)->GetAt(L_11, L_12);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (float)L_13);
		goto IL_005e;
	}

IL_0036:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		float L_14 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___Zero;
		V_3 = L_14;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_15 = ___0_array;
		int32_t L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_15);
		float L_18;
		L_18 = (L_15)->GetAt(L_16, L_17);
		bool L_19;
		L_19 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_3), L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		if (L_19)
		{
			goto IL_005e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral356F04C6F728140A864A3C017EC37B728F823C71)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_005e:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0062:
	{
		int32_t L_22 = V_2;
		DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_23 = V_0;
		NullCheck(L_23);
		int32_t L_24 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)L_23)->___ColumnCount;
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_006f:
	{
		int32_t L_26 = V_1;
		DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)L_27)->___RowCount;
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_0018;
		}
	}
	{
		DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_29 = V_0;
		return L_29;
	}
}
// Method Definition Index: 29065
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* DiagonalMatrixStorage_1_OfValue_mFE7ACB1444C15D59F90E11ED7DF3D4E7442341D8_gshared (int32_t ___0_rows, int32_t ___1_columns, float ___2_diagonalValue, const RuntimeMethod* method) 
{
	DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_rows;
		int32_t L_1 = ___1_columns;
		DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_2 = (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		DiagonalMatrixStorage_1__ctor_mB811B51C4CB1F797C65A6E0198C0B4B367E5CFE7(L_2, L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_0 = L_2;
		V_1 = 0;
		goto IL_001d;
	}

IL_000c:
	{
		DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_3 = V_0;
		NullCheck(L_3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = L_3->___Data;
		int32_t L_5 = V_1;
		float L_6 = ___2_diagonalValue;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (float)L_6);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001d:
	{
		int32_t L_8 = V_1;
		DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_9 = V_0;
		NullCheck(L_9);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = L_9->___Data;
		NullCheck(L_10);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_11 = V_0;
		return L_11;
	}
}
// Method Definition Index: 29066
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* DiagonalMatrixStorage_1_OfInit_m40A4585819DED4928118A4B3E1688BD0C9DAC94A_gshared (int32_t ___0_rows, int32_t ___1_columns, Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* ___2_init, const RuntimeMethod* method) 
{
	DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_rows;
		int32_t L_1 = ___1_columns;
		DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_2 = (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		DiagonalMatrixStorage_1__ctor_mB811B51C4CB1F797C65A6E0198C0B4B367E5CFE7(L_2, L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_0 = L_2;
		V_1 = 0;
		goto IL_0023;
	}

IL_000c:
	{
		DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_3 = V_0;
		NullCheck(L_3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = L_3->___Data;
		int32_t L_5 = V_1;
		Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* L_6 = ___2_init;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		float L_8;
		L_8 = Func_2_Invoke_m494DACD125AFD0F19BDF6B982BC3BDFCAC2D9AB2_inline(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (float)L_8);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0023:
	{
		int32_t L_10 = V_1;
		DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_11 = V_0;
		NullCheck(L_11);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = L_11->___Data;
		NullCheck(L_12);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_13 = V_0;
		return L_13;
	}
}
// Method Definition Index: 29067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* DiagonalMatrixStorage_1_OfEnumerable_mC240D3A1F3EFC2DA79E5D1D7B6D56CDA1BC29DE1_gshared (int32_t ___0_rows, int32_t ___1_columns, RuntimeObject* ___2_data, const RuntimeMethod* method) 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___2_data;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___2_data;
		V_0 = ((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4)));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		NullCheck(L_4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		V_1 = L_5;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = V_0;
		NullCheck(L_8);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, 0, (RuntimeArray*)L_7, 0, ((int32_t)(((RuntimeArray*)L_8)->max_length)), NULL);
		int32_t L_9 = ___0_rows;
		int32_t L_10 = ___1_columns;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = V_1;
		DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_12 = (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		DiagonalMatrixStorage_1__ctor_m3EF04D9E6A93FA324C3CAF04B1A2394E50E975BE(L_12, L_9, L_10, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_12;
	}

IL_0036:
	{
		int32_t L_13 = ___0_rows;
		int32_t L_14 = ___1_columns;
		RuntimeObject* L_15 = ___2_data;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16;
		L_16 = Enumerable_ToArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF0AED1993946FF775115C47514B29636472220A1(L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_17 = (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		DiagonalMatrixStorage_1__ctor_m3EF04D9E6A93FA324C3CAF04B1A2394E50E975BE(L_17, L_13, L_14, L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_17;
	}
}
// Method Definition Index: 29068
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* DiagonalMatrixStorage_1_OfIndexedEnumerable_mC89AF75E8A6386CB8A67FD38F84D32B5EEA456E0_gshared (int32_t ___0_rows, int32_t ___1_columns, RuntimeObject* ___2_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Tuple_2_tA643EAA39FD2F76EB29A374D247F8459A083D862* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___2_data;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___0_rows;
		int32_t L_3 = ___1_columns;
		DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_4 = (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		DiagonalMatrixStorage_1__ctor_mB811B51C4CB1F797C65A6E0198C0B4B367E5CFE7(L_4, L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_0 = L_4;
		RuntimeObject* L_5 = ___2_data;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 18), L_5);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0047:
			{
				{
					RuntimeObject* L_7 = V_1;
					if (!L_7)
					{
						goto IL_0050;
					}
				}
				{
					RuntimeObject* L_8 = V_1;
					NullCheck((RuntimeObject*)L_8);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				}

IL_0050:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003d_1;
			}

IL_001f_1:
			{
				RuntimeObject* L_9 = V_1;
				NullCheck(L_9);
				Tuple_2_tA643EAA39FD2F76EB29A374D247F8459A083D862* L_10;
				L_10 = InterfaceFuncInvoker0< Tuple_2_tA643EAA39FD2F76EB29A374D247F8459A083D862* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), L_9);
				V_2 = L_10;
				DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_11 = V_0;
				NullCheck(L_11);
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = L_11->___Data;
				Tuple_2_tA643EAA39FD2F76EB29A374D247F8459A083D862* L_13 = V_2;
				NullCheck(L_13);
				int32_t L_14;
				L_14 = Tuple_2_get_Item1_m655CE727F147B3B44D01EB099FE00D3C7A67E185_inline(L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
				Tuple_2_tA643EAA39FD2F76EB29A374D247F8459A083D862* L_15 = V_2;
				NullCheck(L_15);
				float L_16;
				L_16 = Tuple_2_get_Item2_m9F36DBD554BD25351AFC5BA854DDA4C9C73C86CD_inline(L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24));
				NullCheck(L_12);
				(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (float)L_16);
			}

IL_003d_1:
			{
				RuntimeObject* L_17 = V_1;
				NullCheck((RuntimeObject*)L_17);
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
				if (L_18)
				{
					goto IL_001f_1;
				}
			}
			{
				goto IL_0051;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0051:
	{
		DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_19 = V_0;
		return L_19;
	}
}
// Method Definition Index: 29069
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_CopyToUnchecked_mFD786E51091042015D88C3441835673C31A7E777_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* ___0_target, int32_t ___1_existingData, const RuntimeMethod* method) 
{
	DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* V_0 = NULL;
	DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3* V_1 = NULL;
	SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* V_2 = NULL;
	int32_t V_3 = 0;
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_0 = ___0_target;
		V_0 = ((DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 3)));
		DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_2 = V_0;
		DiagonalMatrixStorage_1_CopyToUnchecked_mE893B4C44AEEA700465D9556194E75BE779CCD7E(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}

IL_0012:
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_3 = ___0_target;
		V_1 = ((DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3* L_5 = V_1;
		int32_t L_6 = ___1_existingData;
		DiagonalMatrixStorage_1_CopyToUnchecked_m0EDC1AF741D1AA9E673B354DB4DA90C11820E0D5(__this, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return;
	}

IL_0025:
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_7 = ___0_target;
		V_2 = ((SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A*)IsInstClass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 28)));
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_8 = V_2;
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_9 = V_2;
		int32_t L_10 = ___1_existingData;
		DiagonalMatrixStorage_1_CopyToUnchecked_m284C889B6F9A206D7BF31C1478CA395952670781(__this, L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return;
	}

IL_0038:
	{
		int32_t L_11 = ___1_existingData;
		if (L_11)
		{
			goto IL_0041;
		}
	}
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_12 = ___0_target;
		NullCheck(L_12);
		VirtualActionInvoker0::Invoke(10, L_12);
	}

IL_0041:
	{
		V_3 = 0;
		goto IL_005d;
	}

IL_0045:
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_13 = ___0_target;
		int32_t L_14 = V_3;
		int32_t L_15 = V_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = __this->___Data;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		float L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_13);
		VirtualActionInvoker3< int32_t, int32_t, float >::Invoke(9, L_13, L_14, L_15, L_19);
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005d:
	{
		int32_t L_21 = V_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = __this->___Data;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0045;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29070
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_CopyToUnchecked_mE893B4C44AEEA700465D9556194E75BE779CCD7E_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* ___0_target, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___Data;
		DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_1 = ___0_target;
		NullCheck(L_1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = L_1->___Data;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___Data;
		NullCheck(L_3);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		return;
	}
}
// Method Definition Index: 29071
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_CopyToUnchecked_m284C889B6F9A206D7BF31C1478CA395952670781_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* ___0_target, int32_t ___1_existingData, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_existingData;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_1 = ___0_target;
		NullCheck((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)L_1);
		VirtualActionInvoker0::Invoke(10, (MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)L_1);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0025;
	}

IL_000d:
	{
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_2 = ___0_target;
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = __this->___Data;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		float L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)L_2);
		VirtualActionInvoker3< int32_t, int32_t, float >::Invoke(9, (MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)L_2, L_3, L_4, L_8);
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0025:
	{
		int32_t L_10 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = __this->___Data;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29072
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_CopyToUnchecked_m0EDC1AF741D1AA9E673B354DB4DA90C11820E0D5_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3* ___0_target, int32_t ___1_existingData, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_existingData;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3* L_1 = ___0_target;
		NullCheck((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)L_1);
		VirtualActionInvoker0::Invoke(10, (MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)L_1);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0032;
	}

IL_000d:
	{
		DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3* L_2 = ___0_target;
		NullCheck(L_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = L_2->___Data;
		int32_t L_4 = V_0;
		DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3* L_5 = ___0_target;
		NullCheck(L_5);
		int32_t L_6 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)L_5)->___RowCount;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = __this->___Data;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		float L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)il2cpp_codegen_add(L_6, 1))))), (float)L_10);
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		int32_t L_12 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = __this->___Data;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29073
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_CopySubMatrixToUnchecked_mFFE08968F9F977FE153BA9A7D288F57AE8F76217_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* ___0_target, int32_t ___1_sourceRowIndex, int32_t ___2_targetRowIndex, int32_t ___3_rowCount, int32_t ___4_sourceColumnIndex, int32_t ___5_targetColumnIndex, int32_t ___6_columnCount, int32_t ___7_existingData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3* V_0 = NULL;
	DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_0 = ___0_target;
		V_0 = ((DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3* L_2 = V_0;
		int32_t L_3 = ___1_sourceRowIndex;
		int32_t L_4 = ___2_targetRowIndex;
		int32_t L_5 = ___3_rowCount;
		int32_t L_6 = ___4_sourceColumnIndex;
		int32_t L_7 = ___5_targetColumnIndex;
		int32_t L_8 = ___6_columnCount;
		int32_t L_9 = ___7_existingData;
		DiagonalMatrixStorage_1_CopySubMatrixToUnchecked_m1BEC76621B391D08006F7A5E1D046BB13034F6C6(__this, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}

IL_001e:
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_10 = ___0_target;
		V_1 = ((DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6*)IsInstClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 3)));
		DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_11 = V_1;
		if (!L_11)
		{
			goto IL_003a;
		}
	}
	{
		DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_12 = V_1;
		int32_t L_13 = ___1_sourceRowIndex;
		int32_t L_14 = ___2_targetRowIndex;
		int32_t L_15 = ___3_rowCount;
		int32_t L_16 = ___4_sourceColumnIndex;
		int32_t L_17 = ___5_targetColumnIndex;
		int32_t L_18 = ___6_columnCount;
		DiagonalMatrixStorage_1_CopySubMatrixToUnchecked_m3493F9038B5DE68DBBFEA3E7085D029E1B9ED738(__this, L_12, L_13, L_14, L_15, L_16, L_17, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return;
	}

IL_003a:
	{
		int32_t L_19 = ___7_existingData;
		if (L_19)
		{
			goto IL_004b;
		}
	}
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_20 = ___0_target;
		int32_t L_21 = ___2_targetRowIndex;
		int32_t L_22 = ___3_rowCount;
		int32_t L_23 = ___5_targetColumnIndex;
		int32_t L_24 = ___6_columnCount;
		NullCheck(L_20);
		VirtualActionInvoker4< int32_t, int32_t, int32_t, int32_t >::Invoke(11, L_20, L_21, L_22, L_23, L_24);
	}

IL_004b:
	{
		int32_t L_25 = ___1_sourceRowIndex;
		int32_t L_26 = ___4_sourceColumnIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_0080;
		}
	}
	{
		V_2 = 0;
		goto IL_0073;
	}

IL_0054:
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_27 = ___0_target;
		int32_t L_28 = ___2_targetRowIndex;
		int32_t L_29 = V_2;
		int32_t L_30 = ___5_targetColumnIndex;
		int32_t L_31 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = __this->___Data;
		int32_t L_33 = ___1_sourceRowIndex;
		int32_t L_34 = V_2;
		NullCheck(L_32);
		int32_t L_35 = ((int32_t)il2cpp_codegen_add(L_33, L_34));
		float L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_27);
		VirtualActionInvoker3< int32_t, int32_t, float >::Invoke(9, L_27, ((int32_t)il2cpp_codegen_add(L_28, L_29)), ((int32_t)il2cpp_codegen_add(L_30, L_31)), L_36);
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_0073:
	{
		int32_t L_38 = V_2;
		int32_t L_39 = ___6_columnCount;
		int32_t L_40 = ___3_rowCount;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_41;
		L_41 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_39, L_40, NULL);
		if ((((int32_t)L_38) < ((int32_t)L_41)))
		{
			goto IL_0054;
		}
	}
	{
		return;
	}

IL_0080:
	{
		int32_t L_42 = ___1_sourceRowIndex;
		int32_t L_43 = ___4_sourceColumnIndex;
		if ((((int32_t)L_42) <= ((int32_t)L_43)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_44 = ___4_sourceColumnIndex;
		int32_t L_45 = ___6_columnCount;
		int32_t L_46 = ___1_sourceRowIndex;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_44, L_45))) <= ((int32_t)L_46)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_47 = ___1_sourceRowIndex;
		int32_t L_48 = ___4_sourceColumnIndex;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_47, L_48));
		V_4 = 0;
		goto IL_00bd;
	}

IL_0097:
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_49 = ___0_target;
		int32_t L_50 = ___2_targetRowIndex;
		int32_t L_51 = V_4;
		int32_t L_52 = V_3;
		int32_t L_53 = ___5_targetColumnIndex;
		int32_t L_54 = V_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_55 = __this->___Data;
		int32_t L_56 = ___1_sourceRowIndex;
		int32_t L_57 = V_4;
		NullCheck(L_55);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(L_56, L_57));
		float L_59 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_49);
		VirtualActionInvoker3< int32_t, int32_t, float >::Invoke(9, L_49, ((int32_t)il2cpp_codegen_add(L_50, L_51)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_52, L_53)), L_54)), L_59);
		int32_t L_60 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_00bd:
	{
		int32_t L_61 = V_4;
		int32_t L_62 = ___6_columnCount;
		int32_t L_63 = V_3;
		int32_t L_64 = ___3_rowCount;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_65;
		L_65 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(L_62, L_63)), L_64, NULL);
		if ((((int32_t)L_61) < ((int32_t)L_65)))
		{
			goto IL_0097;
		}
	}
	{
		return;
	}

IL_00cd:
	{
		int32_t L_66 = ___1_sourceRowIndex;
		int32_t L_67 = ___4_sourceColumnIndex;
		if ((((int32_t)L_66) >= ((int32_t)L_67)))
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_68 = ___1_sourceRowIndex;
		int32_t L_69 = ___3_rowCount;
		int32_t L_70 = ___4_sourceColumnIndex;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_68, L_69))) <= ((int32_t)L_70)))
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_71 = ___4_sourceColumnIndex;
		int32_t L_72 = ___1_sourceRowIndex;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_71, L_72));
		V_6 = 0;
		goto IL_010d;
	}

IL_00e5:
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_73 = ___0_target;
		int32_t L_74 = V_5;
		int32_t L_75 = ___2_targetRowIndex;
		int32_t L_76 = V_6;
		int32_t L_77 = ___5_targetColumnIndex;
		int32_t L_78 = V_6;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_79 = __this->___Data;
		int32_t L_80 = ___4_sourceColumnIndex;
		int32_t L_81 = V_6;
		NullCheck(L_79);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_80, L_81));
		float L_83 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NullCheck(L_73);
		VirtualActionInvoker3< int32_t, int32_t, float >::Invoke(9, L_73, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_74, L_75)), L_76)), ((int32_t)il2cpp_codegen_add(L_77, L_78)), L_83);
		int32_t L_84 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_84, 1));
	}

IL_010d:
	{
		int32_t L_85 = V_6;
		int32_t L_86 = ___6_columnCount;
		int32_t L_87 = ___3_rowCount;
		int32_t L_88 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_89;
		L_89 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_86, ((int32_t)il2cpp_codegen_subtract(L_87, L_88)), NULL);
		if ((((int32_t)L_85) < ((int32_t)L_89)))
		{
			goto IL_00e5;
		}
	}

IL_011d:
	{
		return;
	}
}
// Method Definition Index: 29074
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_CopySubMatrixToUnchecked_m3493F9038B5DE68DBBFEA3E7085D029E1B9ED738_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* ___0_target, int32_t ___1_sourceRowIndex, int32_t ___2_targetRowIndex, int32_t ___3_rowCount, int32_t ___4_sourceColumnIndex, int32_t ___5_targetColumnIndex, int32_t ___6_columnCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* G_B3_0 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* G_B3_1 = NULL;
	Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* G_B2_0 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* G_B2_1 = NULL;
	{
		int32_t L_0 = ___1_sourceRowIndex;
		int32_t L_1 = ___4_sourceColumnIndex;
		int32_t L_2 = ___2_targetRowIndex;
		int32_t L_3 = ___5_targetColumnIndex;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_0, L_1))) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3)))))
		{
			goto IL_004a;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = __this->___Data;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 37));
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_5 = ((U3CU3Ec_t51AC25DA92EA86210A36C438C27EE3A800BA4D6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 37)))->___U3CU3E9__26_0;
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_6 = L_5;
		if (L_6)
		{
			G_B3_0 = L_6;
			G_B3_1 = L_4;
			goto IL_002f;
		}
		G_B2_0 = L_6;
		G_B2_1 = L_4;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 37));
		U3CU3Ec_t51AC25DA92EA86210A36C438C27EE3A800BA4D6D* L_7 = ((U3CU3Ec_t51AC25DA92EA86210A36C438C27EE3A800BA4D6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 37)))->___U3CU3E9;
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_8 = (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 36));
		Func_2__ctor_m03E06C4CC75B5D767310B9AAF6151183593E7A02(L_8, (RuntimeObject*)L_7, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 38)), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_9 = L_8;
		((U3CU3Ec_t51AC25DA92EA86210A36C438C27EE3A800BA4D6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 37)))->___U3CU3E9__26_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t51AC25DA92EA86210A36C438C27EE3A800BA4D6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 37)))->___U3CU3E9__26_0), (void*)L_9);
		G_B3_0 = L_9;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		bool L_10;
		L_10 = Enumerable_Any_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m415D5E077869D73B39C0262E4033717E6D928977((RuntimeObject*)G_B3_1, G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_10)
		{
			goto IL_003c;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_11 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003c:
	{
		DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_12 = ___0_target;
		int32_t L_13 = ___2_targetRowIndex;
		int32_t L_14 = ___3_rowCount;
		int32_t L_15 = ___5_targetColumnIndex;
		int32_t L_16 = ___6_columnCount;
		NullCheck((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)L_12);
		VirtualActionInvoker4< int32_t, int32_t, int32_t, int32_t >::Invoke(11, (MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)L_12, L_13, L_14, L_15, L_16);
		return;
	}

IL_004a:
	{
		int32_t L_17 = ___1_sourceRowIndex;
		int32_t L_18 = ___4_sourceColumnIndex;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_19;
		L_19 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_17, L_18, NULL);
		V_0 = L_19;
		int32_t L_20 = ___1_sourceRowIndex;
		int32_t L_21 = ___3_rowCount;
		int32_t L_22 = ___4_sourceColumnIndex;
		int32_t L_23 = ___6_columnCount;
		int32_t L_24;
		L_24 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_20, L_21)), ((int32_t)il2cpp_codegen_add(L_22, L_23)), NULL);
		V_1 = L_24;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		if ((((int32_t)L_25) <= ((int32_t)L_26)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_27 = ___2_targetRowIndex;
		int32_t L_28 = ___5_targetColumnIndex;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_29;
		L_29 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_27, L_28, NULL);
		V_2 = L_29;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_30 = __this->___Data;
		int32_t L_31 = V_0;
		DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_32 = ___0_target;
		NullCheck(L_32);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_33 = L_32->___Data;
		int32_t L_34 = V_2;
		int32_t L_35 = V_1;
		int32_t L_36 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_30, L_31, (RuntimeArray*)L_33, L_34, ((int32_t)il2cpp_codegen_subtract(L_35, L_36)), NULL);
	}

IL_0085:
	{
		return;
	}
}
// Method Definition Index: 29075
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_CopySubMatrixToUnchecked_m1BEC76621B391D08006F7A5E1D046BB13034F6C6_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3* ___0_target, int32_t ___1_sourceRowIndex, int32_t ___2_targetRowIndex, int32_t ___3_rowCount, int32_t ___4_sourceColumnIndex, int32_t ___5_targetColumnIndex, int32_t ___6_columnCount, int32_t ___7_existingData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	{
		int32_t L_0 = ___7_existingData;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3* L_1 = ___0_target;
		int32_t L_2 = ___2_targetRowIndex;
		int32_t L_3 = ___3_rowCount;
		int32_t L_4 = ___5_targetColumnIndex;
		int32_t L_5 = ___6_columnCount;
		NullCheck((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)L_1);
		VirtualActionInvoker4< int32_t, int32_t, int32_t, int32_t >::Invoke(11, (MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)L_1, L_2, L_3, L_4, L_5);
	}

IL_0011:
	{
		int32_t L_6 = ___1_sourceRowIndex;
		int32_t L_7 = ___4_sourceColumnIndex;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_8 = ___4_sourceColumnIndex;
		int32_t L_9 = ___6_columnCount;
		int32_t L_10 = ___1_sourceRowIndex;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_8, L_9))) <= ((int32_t)L_10)))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_11 = ___1_sourceRowIndex;
		int32_t L_12 = ___4_sourceColumnIndex;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, L_12));
		int32_t L_13 = V_0;
		int32_t L_14 = ___5_targetColumnIndex;
		DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3* L_15 = ___0_target;
		NullCheck(L_15);
		int32_t L_16 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)L_15)->___RowCount;
		int32_t L_17 = ___2_targetRowIndex;
		DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3* L_18 = ___0_target;
		NullCheck(L_18);
		int32_t L_19 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)L_18)->___RowCount;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = ___6_columnCount;
		int32_t L_21 = V_0;
		int32_t L_22 = ___3_rowCount;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_23;
		L_23 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(L_20, L_21)), L_22, NULL);
		int32_t L_24 = ___1_sourceRowIndex;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, L_24));
		int32_t L_25 = ___1_sourceRowIndex;
		V_3 = L_25;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_13, L_14)), L_16)), L_17));
		goto IL_0070;
	}

IL_004d:
	{
		DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3* L_26 = ___0_target;
		NullCheck(L_26);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = L_26->___Data;
		int32_t L_28 = V_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = __this->___Data;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		float L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (float)L_32);
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		int32_t L_34 = V_4;
		int32_t L_35 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, L_35));
	}

IL_0070:
	{
		int32_t L_36 = V_3;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_004d;
		}
	}
	{
		return;
	}

IL_0075:
	{
		int32_t L_38 = ___1_sourceRowIndex;
		int32_t L_39 = ___4_sourceColumnIndex;
		if ((((int32_t)L_38) >= ((int32_t)L_39)))
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_40 = ___1_sourceRowIndex;
		int32_t L_41 = ___3_rowCount;
		int32_t L_42 = ___4_sourceColumnIndex;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_40, L_41))) <= ((int32_t)L_42)))
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_43 = ___4_sourceColumnIndex;
		int32_t L_44 = ___1_sourceRowIndex;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_43, L_44));
		int32_t L_45 = ___5_targetColumnIndex;
		DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3* L_46 = ___0_target;
		NullCheck(L_46);
		int32_t L_47 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)L_46)->___RowCount;
		int32_t L_48 = V_5;
		int32_t L_49 = ___2_targetRowIndex;
		DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3* L_50 = ___0_target;
		NullCheck(L_50);
		int32_t L_51 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)L_50)->___RowCount;
		V_6 = ((int32_t)il2cpp_codegen_add(L_51, 1));
		int32_t L_52 = ___6_columnCount;
		int32_t L_53 = ___3_rowCount;
		int32_t L_54 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_55;
		L_55 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_52, ((int32_t)il2cpp_codegen_subtract(L_53, L_54)), NULL);
		int32_t L_56 = ___4_sourceColumnIndex;
		V_7 = ((int32_t)il2cpp_codegen_add(L_55, L_56));
		int32_t L_57 = ___4_sourceColumnIndex;
		V_8 = L_57;
		V_9 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_45, L_47)), L_48)), L_49));
		goto IL_00e0;
	}

IL_00b9:
	{
		DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3* L_58 = ___0_target;
		NullCheck(L_58);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_59 = L_58->___Data;
		int32_t L_60 = V_9;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_61 = __this->___Data;
		int32_t L_62 = V_8;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		float L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (float)L_64);
		int32_t L_65 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_65, 1));
		int32_t L_66 = V_9;
		int32_t L_67 = V_6;
		V_9 = ((int32_t)il2cpp_codegen_add(L_66, L_67));
	}

IL_00e0:
	{
		int32_t L_68 = V_8;
		int32_t L_69 = V_7;
		if ((((int32_t)L_68) < ((int32_t)L_69)))
		{
			goto IL_00b9;
		}
	}
	{
		return;
	}

IL_00e7:
	{
		int32_t L_70 = ___5_targetColumnIndex;
		DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3* L_71 = ___0_target;
		NullCheck(L_71);
		int32_t L_72 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)L_71)->___RowCount;
		int32_t L_73 = ___2_targetRowIndex;
		DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3* L_74 = ___0_target;
		NullCheck(L_74);
		int32_t L_75 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)L_74)->___RowCount;
		V_10 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		int32_t L_76 = ___6_columnCount;
		int32_t L_77 = ___3_rowCount;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_78;
		L_78 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_76, L_77, NULL);
		int32_t L_79 = ___1_sourceRowIndex;
		V_11 = ((int32_t)il2cpp_codegen_add(L_78, L_79));
		int32_t L_80 = ___1_sourceRowIndex;
		V_12 = L_80;
		V_13 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_70, L_72)), L_73));
		goto IL_0137;
	}

IL_0110:
	{
		DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3* L_81 = ___0_target;
		NullCheck(L_81);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_82 = L_81->___Data;
		int32_t L_83 = V_13;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_84 = __this->___Data;
		int32_t L_85 = V_12;
		NullCheck(L_84);
		int32_t L_86 = L_85;
		float L_87 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(L_83), (float)L_87);
		int32_t L_88 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_88, 1));
		int32_t L_89 = V_13;
		int32_t L_90 = V_10;
		V_13 = ((int32_t)il2cpp_codegen_add(L_89, L_90));
	}

IL_0137:
	{
		int32_t L_91 = V_12;
		int32_t L_92 = V_11;
		if ((((int32_t)L_91) < ((int32_t)L_92)))
		{
			goto IL_0110;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29076
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_CopySubRowToUnchecked_m64AE71516E45C5E778E2D4AB805C08E9EE668B4D_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, VectorStorage_1_t947AEAF03DE0B67E9E8E10E19843B80E5188A99C* ___0_target, int32_t ___1_rowIndex, int32_t ___2_sourceColumnIndex, int32_t ___3_targetColumnIndex, int32_t ___4_columnCount, int32_t ___5_existingData, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___5_existingData;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		VectorStorage_1_t947AEAF03DE0B67E9E8E10E19843B80E5188A99C* L_1 = ___0_target;
		int32_t L_2 = ___3_targetColumnIndex;
		int32_t L_3 = ___4_columnCount;
		NullCheck(L_1);
		VirtualActionInvoker2< int32_t, int32_t >::Invoke(10, L_1, L_2, L_3);
	}

IL_000e:
	{
		int32_t L_4 = ___1_rowIndex;
		int32_t L_5 = ___2_sourceColumnIndex;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_6 = ___1_rowIndex;
		int32_t L_7 = ___2_sourceColumnIndex;
		int32_t L_8 = ___4_columnCount;
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_7, L_8)))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_9 = ___1_rowIndex;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = __this->___Data;
		NullCheck(L_10);
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_003c;
		}
	}
	{
		VectorStorage_1_t947AEAF03DE0B67E9E8E10E19843B80E5188A99C* L_11 = ___0_target;
		int32_t L_12 = ___1_rowIndex;
		int32_t L_13 = ___2_sourceColumnIndex;
		int32_t L_14 = ___3_targetColumnIndex;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = __this->___Data;
		int32_t L_16 = ___1_rowIndex;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		float L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_11);
		VirtualActionInvoker2< int32_t, float >::Invoke(7, L_11, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_12, L_13)), L_14)), L_18);
	}

IL_003c:
	{
		return;
	}
}
// Method Definition Index: 29077
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_CopySubColumnToUnchecked_m26C349FD54D0E68BE2EBE0D9DA9D5BC476A6A186_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, VectorStorage_1_t947AEAF03DE0B67E9E8E10E19843B80E5188A99C* ___0_target, int32_t ___1_columnIndex, int32_t ___2_sourceRowIndex, int32_t ___3_targetRowIndex, int32_t ___4_rowCount, int32_t ___5_existingData, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___5_existingData;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		VectorStorage_1_t947AEAF03DE0B67E9E8E10E19843B80E5188A99C* L_1 = ___0_target;
		int32_t L_2 = ___3_targetRowIndex;
		int32_t L_3 = ___4_rowCount;
		NullCheck(L_1);
		VirtualActionInvoker2< int32_t, int32_t >::Invoke(10, L_1, L_2, L_3);
	}

IL_000e:
	{
		int32_t L_4 = ___1_columnIndex;
		int32_t L_5 = ___2_sourceRowIndex;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_6 = ___1_columnIndex;
		int32_t L_7 = ___2_sourceRowIndex;
		int32_t L_8 = ___4_rowCount;
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_7, L_8)))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_9 = ___1_columnIndex;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = __this->___Data;
		NullCheck(L_10);
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_003c;
		}
	}
	{
		VectorStorage_1_t947AEAF03DE0B67E9E8E10E19843B80E5188A99C* L_11 = ___0_target;
		int32_t L_12 = ___1_columnIndex;
		int32_t L_13 = ___2_sourceRowIndex;
		int32_t L_14 = ___3_targetRowIndex;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = __this->___Data;
		int32_t L_16 = ___1_columnIndex;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		float L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_11);
		VirtualActionInvoker2< int32_t, float >::Invoke(7, L_11, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_12, L_13)), L_14)), L_18);
	}

IL_003c:
	{
		return;
	}
}
// Method Definition Index: 29078
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_TransposeToUnchecked_m69C0EB6588914EDF188DAF82C6B7858DC3848A89_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* ___0_target, int32_t ___1_existingData, const RuntimeMethod* method) 
{
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_0 = ___0_target;
		int32_t L_1 = ___1_existingData;
		NullCheck((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this);
		VirtualActionInvoker2< MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*, int32_t >::Invoke(14, (MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this, L_0, L_1);
		return;
	}
}
// Method Definition Index: 29079
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_TransposeSquareInplaceUnchecked_mC066A6FF1E368F68D0C766EAA425621CC44A7C94_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// Method Definition Index: 29080
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* DiagonalMatrixStorage_1_ToRowMajorArray_m0259B698A9B79A0D8D4A0678AAEFE09F1F0ABC69_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, const RuntimeMethod* method) 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		int32_t L_1 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)((int32_t)il2cpp_codegen_multiply(L_0, L_1)));
		V_0 = L_2;
		int32_t L_3 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		V_2 = 0;
		goto IL_0039;
	}

IL_0020:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		int32_t L_5 = V_2;
		int32_t L_6 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = __this->___Data;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		float L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_5, L_6))), (float)L_10);
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0039:
	{
		int32_t L_12 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = __this->___Data;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = V_0;
		return L_14;
	}
}
// Method Definition Index: 29081
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* DiagonalMatrixStorage_1_ToColumnMajorArray_m7C42DD0D980E3424B117BB2AC486DCD7F691F28D_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, const RuntimeMethod* method) 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		int32_t L_1 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)((int32_t)il2cpp_codegen_multiply(L_0, L_1)));
		V_0 = L_2;
		int32_t L_3 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		V_2 = 0;
		goto IL_0039;
	}

IL_0020:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		int32_t L_5 = V_2;
		int32_t L_6 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = __this->___Data;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		float L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_5, L_6))), (float)L_10);
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0039:
	{
		int32_t L_12 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = __this->___Data;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = V_0;
		return L_14;
	}
}
// Method Definition Index: 29082
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* DiagonalMatrixStorage_1_ToRowArrays_m9462047501825FEFF809FFC6533F9F26EBA0A54E_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, const RuntimeMethod* method) 
{
	SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_1 = (SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4*)(SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0022;
	}

IL_0010:
	{
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)L_4);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)L_5);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0022:
	{
		int32_t L_7 = V_1;
		int32_t L_8 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0010;
		}
	}
	{
		V_2 = 0;
		goto IL_0048;
	}

IL_002f:
	{
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = __this->___Data;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		float L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (float)L_17);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0048:
	{
		int32_t L_19 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_20 = __this->___Data;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_002f;
		}
	}
	{
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_21 = V_0;
		return L_21;
	}
}
// Method Definition Index: 29083
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* DiagonalMatrixStorage_1_ToColumnArrays_m9C3643776823C35DBFD9A45DB78A51143CCA0C58_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, const RuntimeMethod* method) 
{
	SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_1 = (SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4*)(SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0022;
	}

IL_0010:
	{
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)L_4);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)L_5);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0022:
	{
		int32_t L_7 = V_1;
		int32_t L_8 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0010;
		}
	}
	{
		V_2 = 0;
		goto IL_0048;
	}

IL_002f:
	{
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = __this->___Data;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		float L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (float)L_17);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0048:
	{
		int32_t L_19 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_20 = __this->___Data;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_002f;
		}
	}
	{
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_21 = V_0;
		return L_21;
	}
}
// Method Definition Index: 29084
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* DiagonalMatrixStorage_1_ToArray_mB82883644F0B7C8FE63EDED9B00B21C9153FA450_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, const RuntimeMethod* method) 
{
	SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		int32_t L_1 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)L_1 };
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_2 = (SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4*)GenArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_3);
		V_0 = L_2;
		V_1 = 0;
		goto IL_002e;
	}

IL_0016:
	{
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = __this->___Data;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		float L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_4);
		(L_4)->SetAt(L_5, L_6, L_10);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002e:
	{
		int32_t L_12 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = __this->___Data;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_14 = V_0;
		return L_14;
	}
}
// Method Definition Index: 29085
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DiagonalMatrixStorage_1_Enumerate_m6E9E45FFA32A87C8B25096D04B13E1FA39F69006_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, const RuntimeMethod* method) 
{
	{
		U3CEnumerateU3Ed__37_t93049FFB7DC8BB1601CC2551A214194BB81334D1* L_0 = (U3CEnumerateU3Ed__37_t93049FFB7DC8BB1601CC2551A214194BB81334D1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 46));
		U3CEnumerateU3Ed__37__ctor_m1DCE6C212916AABAE32107CAB795035E54F8D6E5(L_0, ((int32_t)-2), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		U3CEnumerateU3Ed__37_t93049FFB7DC8BB1601CC2551A214194BB81334D1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 29086
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DiagonalMatrixStorage_1_EnumerateIndexed_m88DEADB8C485E68A8C46990C3596654813806970_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, const RuntimeMethod* method) 
{
	{
		U3CEnumerateIndexedU3Ed__38_tA89A937237B9981999181608DBE354921C1C9DB4* L_0 = (U3CEnumerateIndexedU3Ed__38_tA89A937237B9981999181608DBE354921C1C9DB4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 48));
		U3CEnumerateIndexedU3Ed__38__ctor_m251718C89DC57069B876749698EC238945526157(L_0, ((int32_t)-2), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		U3CEnumerateIndexedU3Ed__38_tA89A937237B9981999181608DBE354921C1C9DB4* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 29087
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DiagonalMatrixStorage_1_EnumerateNonZero_m5516C895823A328837257FA7E3222A69C13B3387_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, const RuntimeMethod* method) 
{
	Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* G_B2_0 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* G_B2_1 = NULL;
	Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* G_B1_0 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* G_B1_1 = NULL;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___Data;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 37));
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_1 = ((U3CU3Ec_t51AC25DA92EA86210A36C438C27EE3A800BA4D6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 37)))->___U3CU3E9__39_0;
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
		G_B1_0 = L_2;
		G_B1_1 = L_0;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 37));
		U3CU3Ec_t51AC25DA92EA86210A36C438C27EE3A800BA4D6D* L_3 = ((U3CU3Ec_t51AC25DA92EA86210A36C438C27EE3A800BA4D6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 37)))->___U3CU3E9;
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_4 = (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 36));
		Func_2__ctor_m03E06C4CC75B5D767310B9AAF6151183593E7A02(L_4, (RuntimeObject*)L_3, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 51)), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_5 = L_4;
		((U3CU3Ec_t51AC25DA92EA86210A36C438C27EE3A800BA4D6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 37)))->___U3CU3E9__39_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t51AC25DA92EA86210A36C438C27EE3A800BA4D6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 37)))->___U3CU3E9__39_0), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Where_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m62B5CE88FE63A951D90D4B83ECC5594BA7C9E2DB((RuntimeObject*)G_B2_1, G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		return L_6;
	}
}
// Method Definition Index: 29088
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DiagonalMatrixStorage_1_EnumerateNonZeroIndexed_m4D46FE8CFE6947260AF41032102038B59585E3E7_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, const RuntimeMethod* method) 
{
	{
		U3CEnumerateNonZeroIndexedU3Ed__40_t0A55259DFDA9280208BD3619451068681076F306* L_0 = (U3CEnumerateNonZeroIndexedU3Ed__40_t0A55259DFDA9280208BD3619451068681076F306*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 53));
		U3CEnumerateNonZeroIndexedU3Ed__40__ctor_m5793455E9EDCA9F585A97DCEF815F27281CD2D7D(L_0, ((int32_t)-2), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		U3CEnumerateNonZeroIndexedU3Ed__40_t0A55259DFDA9280208BD3619451068681076F306* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 29089
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_3_t7106CDFB2B2326E134E1DF811085D3747450F102* DiagonalMatrixStorage_1_Find_mB47F781F10C3C921E89A5F198D0A5BFC8E802295_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___0_predicate, int32_t ___1_zeros, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	{
		V_0 = 0;
		goto IL_0030;
	}

IL_0004:
	{
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_0 = ___0_predicate;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___Data;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		float L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_0);
		bool L_5;
		L_5 = Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_inline(L_0, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = __this->___Data;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		float L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Tuple_3_t7106CDFB2B2326E134E1DF811085D3747450F102* L_12 = (Tuple_3_t7106CDFB2B2326E134E1DF811085D3747450F102*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 56));
		Tuple_3__ctor_mC2E06904C87AEE70C646612D9DB328C2722B34B7(L_12, L_6, L_7, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		return L_12;
	}

IL_002c:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0030:
	{
		int32_t L_14 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = __this->___Data;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_16 = ___1_zeros;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_17 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_17) > ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_18 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		if ((((int32_t)L_18) <= ((int32_t)1)))
		{
			goto IL_0083;
		}
	}

IL_0051:
	{
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_19 = ___0_predicate;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		float L_20 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 1)))->___Zero;
		NullCheck(L_19);
		bool L_21;
		L_21 = Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_inline(L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		if (!L_21)
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_22 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_22) > ((int32_t)1)))
		{
			goto IL_006a;
		}
	}
	{
		G_B12_0 = 0;
		goto IL_006b;
	}

IL_006a:
	{
		G_B12_0 = 1;
	}

IL_006b:
	{
		int32_t L_23 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_23) > ((int32_t)1)))
		{
			G_B14_0 = G_B12_0;
			goto IL_0077;
		}
		G_B13_0 = G_B12_0;
	}
	{
		G_B15_0 = 1;
		G_B15_1 = G_B13_0;
		goto IL_0078;
	}

IL_0077:
	{
		G_B15_0 = 0;
		G_B15_1 = G_B14_0;
	}

IL_0078:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		float L_24 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 1)))->___Zero;
		Tuple_3_t7106CDFB2B2326E134E1DF811085D3747450F102* L_25 = (Tuple_3_t7106CDFB2B2326E134E1DF811085D3747450F102*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 56));
		Tuple_3__ctor_mC2E06904C87AEE70C646612D9DB328C2722B34B7(L_25, G_B15_1, G_B15_0, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		return L_25;
	}

IL_0083:
	{
		return (Tuple_3_t7106CDFB2B2326E134E1DF811085D3747450F102*)NULL;
	}
}
// Method Definition Index: 29091
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_MapInplace_mC663E29B09E505B4C1E8F8D207A10703ABF80DB7_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___0_f, int32_t ___1_zeros, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass43_0_t4965B3656AA79DFE264F9A96D120A71C10B8014C* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass43_0_t4965B3656AA79DFE264F9A96D120A71C10B8014C* L_0 = (U3CU3Ec__DisplayClass43_0_t4965B3656AA79DFE264F9A96D120A71C10B8014C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 58));
		U3CU3Ec__DisplayClass43_0__ctor_mFDB68FA636884A76182D0F040A1571F08AA1CAAC(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		V_0 = L_0;
		U3CU3Ec__DisplayClass43_0_t4965B3656AA79DFE264F9A96D120A71C10B8014C* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CU3Ec__DisplayClass43_0_t4965B3656AA79DFE264F9A96D120A71C10B8014C* L_2 = V_0;
		Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* L_3 = ___0_f;
		NullCheck(L_2);
		L_2->___f = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___f), (void*)L_3);
		int32_t L_4 = ___1_zeros;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0023;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_5 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral188FDFEEC711300DC0BEB0CF62178DC1005B840E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0023:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = __this->___Data;
		NullCheck(L_6);
		U3CU3Ec__DisplayClass43_0_t4965B3656AA79DFE264F9A96D120A71C10B8014C* L_7 = V_0;
		Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* L_8 = (Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8*)il2cpp_codegen_object_new(Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8_il2cpp_TypeInfo_var);
		Action_2__ctor_m83CEE170A5B9427B596A04F9F50676B044223927(L_8, (RuntimeObject*)L_7, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 61)), NULL);
		CommonParallel_For_m1C8AF2732DD4541FD7F86DEE1BB47B5EDEF5876E(0, ((int32_t)(((RuntimeArray*)L_6)->max_length)), ((int32_t)4096), L_8, NULL);
		return;
	}
}
// Method Definition Index: 29092
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_MapIndexedInplace_m03BD2B7D8E8BDC5BE15C1D7F425E110EC864516B_gshared (DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* __this, Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* ___0_f, int32_t ___1_zeros, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass44_0_t6A0C8B0CA3A320F594208A5AD134A51627BA9F7E* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass44_0_t6A0C8B0CA3A320F594208A5AD134A51627BA9F7E* L_0 = (U3CU3Ec__DisplayClass44_0_t6A0C8B0CA3A320F594208A5AD134A51627BA9F7E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 62));
		U3CU3Ec__DisplayClass44_0__ctor_m8A09FCEBA91D16639238CCFE2FA98F886C609506(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 63));
		V_0 = L_0;
		U3CU3Ec__DisplayClass44_0_t6A0C8B0CA3A320F594208A5AD134A51627BA9F7E* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CU3Ec__DisplayClass44_0_t6A0C8B0CA3A320F594208A5AD134A51627BA9F7E* L_2 = V_0;
		Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* L_3 = ___0_f;
		NullCheck(L_2);
		L_2->___f = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___f), (void*)L_3);
		int32_t L_4 = ___1_zeros;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0023;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_5 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral188FDFEEC711300DC0BEB0CF62178DC1005B840E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0023:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = __this->___Data;
		NullCheck(L_6);
		U3CU3Ec__DisplayClass44_0_t6A0C8B0CA3A320F594208A5AD134A51627BA9F7E* L_7 = V_0;
		Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* L_8 = (Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8*)il2cpp_codegen_object_new(Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8_il2cpp_TypeInfo_var);
		Action_2__ctor_m83CEE170A5B9427B596A04F9F50676B044223927(L_8, (RuntimeObject*)L_7, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 65)), NULL);
		CommonParallel_For_m1C8AF2732DD4541FD7F86DEE1BB47B5EDEF5876E(0, ((int32_t)(((RuntimeArray*)L_6)->max_length)), ((int32_t)4096), L_8, NULL);
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
// Method Definition Index: 29051
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1__ctor_m56DA9EF2D6B6E9B0DD9BAF710DE9772ACD57A07A_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, int32_t ___0_rows, int32_t ___1_columns, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_rows;
		int32_t L_1 = ___1_columns;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		int32_t L_2 = ___0_rows;
		int32_t L_3 = ___1_columns;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_2, L_3, NULL);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_5 = (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)(__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)L_4);
		__this->___Data = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Data), (void*)L_5);
		return;
	}
}
// Method Definition Index: 29052
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1__ctor_mF1B36A16DDCF6A81A7F55F73CE5A56008C4E5CD2_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, int32_t ___0_rows, int32_t ___1_columns, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___2_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_rows;
		int32_t L_1 = ___1_columns;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_2 = ___2_data;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0016:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_4 = ___2_data;
		NullCheck(L_4);
		int32_t L_5 = ___0_rows;
		int32_t L_6 = ___1_columns;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_5, L_6, NULL);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)L_7)))
		{
			goto IL_0043;
		}
	}
	{
		String_t* L_8;
		L_8 = Resources_get_ArgumentArrayWrongLength_m6C5C083F9D6EC1F92F81EFBEAD86C0D72E4D1A95(NULL);
		int32_t L_9 = ___0_rows;
		int32_t L_10 = ___1_columns;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var)));
		int32_t L_11;
		L_11 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_9, L_10, NULL);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_defaults.int32_class, &L_12);
		String_t* L_14;
		L_14 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_8, L_13, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469)), L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0043:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_16 = ___2_data;
		__this->___Data = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Data), (void*)L_16);
		return;
	}
}
// Method Definition Index: 29053
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DiagonalMatrixStorage_1_get_IsDense_mC69E9682E98D4B84B61BEF884538AE64BD365169_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// Method Definition Index: 29054
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DiagonalMatrixStorage_1_get_IsFullyMutable_m99E52FC55AAC3C0254EE8A253F208020AFA738E0_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// Method Definition Index: 29055
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DiagonalMatrixStorage_1_IsMutableAt_m7C54FEB5579F169C83703A803D9FF9C5D8F51197_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, int32_t ___0_row, int32_t ___1_column, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_row;
		int32_t L_1 = ___1_column;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// Method Definition Index: 29056
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_At_mBF4065105E64D125851A6FFD5D5659B9A3DE27D2_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, int32_t ___0_row, int32_t ___1_column, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
	const Il2CppFullySharedGenericStruct L_6 = L_2;
	{
		int32_t L_0 = ___0_row;
		int32_t L_1 = ___1_column;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_2, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),0)), SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		return;
	}

IL_000a:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_3 = __this->___Data;
		int32_t L_4 = ___0_row;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		return;
	}
}
// Method Definition Index: 29057
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_At_mF22B8E6753EAED50DE9845EA9D16E83146DD4B19_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, int32_t ___0_row, int32_t ___1_column, Il2CppFullySharedGenericStruct ___2_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
	const Il2CppFullySharedGenericStruct L_5 = L_4;
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
	memset(V_0, 0, SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
	{
		int32_t L_0 = ___0_row;
		int32_t L_1 = ___1_column;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_2 = __this->___Data;
		int32_t L_3 = ___0_row;
		il2cpp_codegen_memcpy(L_4, ___2_value, SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		NullCheck(L_2);
		il2cpp_codegen_memcpy((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), L_4, SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), (void*)L_4);
		return;
	}

IL_0012:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),0)), SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		il2cpp_codegen_memcpy(L_6, ___2_value, SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		bool L_8;
		L_8 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 6), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_7, (void*)(Il2CppFullySharedGenericStruct*)V_0, L_6);
		if (L_8)
		{
			goto IL_0033;
		}
	}
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_9 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral356F04C6F728140A864A3C017EC37B728F823C71)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0033:
	{
		return;
	}
}
// Method Definition Index: 29058
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiagonalMatrixStorage_1_GetHashCode_m4932D296A842F4FF8BFB86DD797A6A51E95F148B_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_0 = __this->___Data;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)(((RuntimeArray*)L_0)->max_length)), ((int32_t)25), NULL);
		V_0 = L_1;
		V_1 = ((int32_t)17);
		V_2 = 0;
		goto IL_003a;
	}

IL_0017:
	{
		int32_t L_2 = V_1;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_3 = __this->___Data;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_6;
		L_6 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 6), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_5, (void*)((Il2CppFullySharedGenericStruct*)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))));
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)31))), L_6));
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_003a:
	{
		int32_t L_8 = V_2;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_10 = V_1;
		return L_10;
	}
}
// Method Definition Index: 29059
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_Clear_m7EBC6FF07689A2DD63F2A84515BEE015648F4B40_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_0 = __this->___Data;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_1 = __this->___Data;
		NullCheck(L_1);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		return;
	}
}
// Method Definition Index: 29060
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_ClearUnchecked_m66B1FB2326E59925F88DDBB5931B619178771E44_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, int32_t ___0_rowIndex, int32_t ___1_rowCount, int32_t ___2_columnIndex, int32_t ___3_columnCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_rowIndex;
		int32_t L_1 = ___2_columnIndex;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = ___0_rowIndex;
		int32_t L_4 = ___1_rowCount;
		int32_t L_5 = ___2_columnIndex;
		int32_t L_6 = ___3_columnCount;
		int32_t L_7;
		L_7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_3, L_4)), ((int32_t)il2cpp_codegen_add(L_5, L_6)), NULL);
		V_1 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) <= ((int32_t)L_9)))
		{
			goto IL_0028;
		}
	}
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_10 = __this->___Data;
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, L_11, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
	}

IL_0028:
	{
		return;
	}
}
// Method Definition Index: 29061
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_ClearRowsUnchecked_mE5115238C050D10E983168455E7F93C76CE4663D_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_rowIndices, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001b;
	}

IL_0004:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_0 = __this->___Data;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___0_rowIndices;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),0)), SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		NullCheck(L_0);
		il2cpp_codegen_memcpy((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), L_5, SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), (void*)L_5);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001b:
	{
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___0_rowIndices;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29062
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_ClearColumnsUnchecked_m7DEDF09CD674A26A3422060A92C19AB237D6711E_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_columnIndices, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001b;
	}

IL_0004:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_0 = __this->___Data;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___0_columnIndices;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),0)), SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		NullCheck(L_0);
		il2cpp_codegen_memcpy((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), L_5, SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), (void*)L_5);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001b:
	{
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___0_columnIndices;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29063
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* DiagonalMatrixStorage_1_OfMatrix_m86D3CC6FCFFF7F18AD23BA4BD30FF3406AD8D8FE_gshared (MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* ___0_matrix, const RuntimeMethod* method) 
{
	DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* V_0 = NULL;
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_0 = ___0_matrix;
		NullCheck(L_0);
		int32_t L_1 = L_0->___RowCount;
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_2 = ___0_matrix;
		NullCheck(L_2);
		int32_t L_3 = L_2->___ColumnCount;
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_4 = (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)))(L_4, L_1, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_0 = L_4;
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_5 = ___0_matrix;
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_6 = V_0;
		NullCheck(L_5);
		VirtualActionInvoker2< MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*, int32_t >::Invoke(14, L_5, (MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)L_6, (int32_t)1);
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_7 = V_0;
		return L_7;
	}
}
// Method Definition Index: 29064
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* DiagonalMatrixStorage_1_OfArray_m2617ADC843BC3991DB85DA7452319B1BA5808AC7_gshared (__Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11* ___0_array, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	void* L_19 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 6)));
	const Il2CppFullySharedGenericStruct L_13 = alloca(SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
	const Il2CppFullySharedGenericStruct L_14 = L_13;
	const Il2CppFullySharedGenericStruct L_18 = alloca(SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
	DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericStruct V_3 = alloca(SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
	memset(V_3, 0, SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
	{
		__Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11* L_0 = ___0_array;
		NullCheck((RuntimeArray*)L_0);
		int32_t L_1;
		L_1 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_0, 0, NULL);
		__Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		int32_t L_3;
		L_3 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_2, 1, NULL);
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_4 = (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)))(L_4, L_1, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_0 = L_4;
		V_1 = 0;
		goto IL_006f;
	}

IL_0018:
	{
		V_2 = 0;
		goto IL_0062;
	}

IL_001c:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = V_2;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0036;
		}
	}
	{
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_7 = V_0;
		NullCheck(L_7);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_8 = L_7->___Data;
		int32_t L_9 = V_1;
		__Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11* L_10 = ___0_array;
		int32_t L_11 = V_1;
		int32_t L_12 = V_2;
		NullCheck(L_10);
		il2cpp_codegen_memcpy(L_13, (L_10)->GetAddressAt(L_11, L_12), SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		NullCheck(L_8);
		il2cpp_codegen_memcpy((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), L_13, SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 6), (void**)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), (void*)L_13);
		goto IL_005e;
	}

IL_0036:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5),0)), SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		il2cpp_codegen_memcpy(V_3, L_14, SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		__Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11* L_15 = ___0_array;
		int32_t L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_15);
		il2cpp_codegen_memcpy(L_18, (L_15)->GetAddressAt(L_16, L_17), SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		bool L_20;
		L_20 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 6), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_19, (void*)(Il2CppFullySharedGenericStruct*)V_3, L_18);
		if (L_20)
		{
			goto IL_005e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_21 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral356F04C6F728140A864A3C017EC37B728F823C71)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_005e:
	{
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0062:
	{
		int32_t L_23 = V_2;
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)L_24)->___ColumnCount;
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_006f:
	{
		int32_t L_27 = V_1;
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)L_28)->___RowCount;
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0018;
		}
	}
	{
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_30 = V_0;
		return L_30;
	}
}
// Method Definition Index: 29065
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* DiagonalMatrixStorage_1_OfValue_m15051DDB2F7C30248A1ECBD6386AB5C7E544ACFA_gshared (int32_t ___0_rows, int32_t ___1_columns, Il2CppFullySharedGenericStruct ___2_diagonalValue, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
	DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_rows;
		int32_t L_1 = ___1_columns;
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_2 = (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)))(L_2, L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_0 = L_2;
		V_1 = 0;
		goto IL_001d;
	}

IL_000c:
	{
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_3 = V_0;
		NullCheck(L_3);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_4 = L_3->___Data;
		int32_t L_5 = V_1;
		il2cpp_codegen_memcpy(L_6, ___2_diagonalValue, SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_6, SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 6), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_6);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001d:
	{
		int32_t L_8 = V_1;
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_9 = V_0;
		NullCheck(L_9);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_10 = L_9->___Data;
		NullCheck(L_10);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_11 = V_0;
		return L_11;
	}
}
// Method Definition Index: 29066
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* DiagonalMatrixStorage_1_OfInit_m5848362A12C5C84B79C62A96FBE5862536FCF2A8_gshared (int32_t ___0_rows, int32_t ___1_columns, Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF* ___2_init, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
	DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_rows;
		int32_t L_1 = ___1_columns;
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_2 = (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)))(L_2, L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_0 = L_2;
		V_1 = 0;
		goto IL_0023;
	}

IL_000c:
	{
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_3 = V_0;
		NullCheck(L_3);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_4 = L_3->___Data;
		int32_t L_5 = V_1;
		Func_2_tAF4942C91972F149838CE9CD2ADD190F38F7D6BF* L_6 = ___2_init;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14), L_6, L_7, (Il2CppFullySharedGenericStruct*)L_8);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_8, SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 6), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_8);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0023:
	{
		int32_t L_10 = V_1;
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_11 = V_0;
		NullCheck(L_11);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_12 = L_11->___Data;
		NullCheck(L_12);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_13 = V_0;
		return L_13;
	}
}
// Method Definition Index: 29067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* DiagonalMatrixStorage_1_OfEnumerable_m2B9CE3F41633AEAD709D4665BAF139DB33863C99_gshared (int32_t ___0_rows, int32_t ___1_columns, RuntimeObject* ___2_data, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_0 = NULL;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___2_data;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___2_data;
		V_0 = ((__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4)));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_4 = V_0;
		NullCheck(L_4);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_5 = (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)(__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		V_1 = L_5;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_6 = V_0;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_7 = V_1;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_8 = V_0;
		NullCheck(L_8);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, 0, (RuntimeArray*)L_7, 0, ((int32_t)(((RuntimeArray*)L_8)->max_length)), NULL);
		int32_t L_9 = ___0_rows;
		int32_t L_10 = ___1_columns;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_11 = V_1;
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_12 = (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195*, int32_t, int32_t, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16)))(L_12, L_9, L_10, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_12;
	}

IL_0036:
	{
		int32_t L_13 = ___0_rows;
		int32_t L_14 = ___1_columns;
		RuntimeObject* L_15 = ___2_data;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_16;
		L_16 = ((  __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17)))(L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_17 = (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195*, int32_t, int32_t, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16)))(L_17, L_13, L_14, L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_17;
	}
}
// Method Definition Index: 29068
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* DiagonalMatrixStorage_1_OfIndexedEnumerable_m79057ADD022F30A42822BFF57291FE30E0443B64_gshared (int32_t ___0_rows, int32_t ___1_columns, RuntimeObject* ___2_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	const Il2CppFullySharedGenericStruct L_16 = alloca(SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
	DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Tuple_2_tF4742C2244C83467B58D32CD8112595658903434* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___2_data;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___0_rows;
		int32_t L_3 = ___1_columns;
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_4 = (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)))(L_4, L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_0 = L_4;
		RuntimeObject* L_5 = ___2_data;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 18), L_5);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0047:
			{
				{
					RuntimeObject* L_7 = V_1;
					if (!L_7)
					{
						goto IL_0050;
					}
				}
				{
					RuntimeObject* L_8 = V_1;
					NullCheck((RuntimeObject*)L_8);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				}

IL_0050:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003d_1;
			}

IL_001f_1:
			{
				RuntimeObject* L_9 = V_1;
				NullCheck(L_9);
				Tuple_2_tF4742C2244C83467B58D32CD8112595658903434* L_10;
				L_10 = InterfaceFuncInvoker0Invoker< Tuple_2_tF4742C2244C83467B58D32CD8112595658903434* >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), L_9);
				V_2 = L_10;
				DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_11 = V_0;
				NullCheck(L_11);
				__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_12 = L_11->___Data;
				Tuple_2_tF4742C2244C83467B58D32CD8112595658903434* L_13 = V_2;
				NullCheck(L_13);
				int32_t L_14;
				L_14 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23), L_13);
				Tuple_2_tF4742C2244C83467B58D32CD8112595658903434* L_15 = V_2;
				NullCheck(L_15);
				InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24), L_15, (Il2CppFullySharedGenericStruct*)L_16);
				NullCheck(L_12);
				il2cpp_codegen_memcpy((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)), L_16, SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 6), (void**)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)), (void*)L_16);
			}

IL_003d_1:
			{
				RuntimeObject* L_17 = V_1;
				NullCheck((RuntimeObject*)L_17);
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
				if (L_18)
				{
					goto IL_001f_1;
				}
			}
			{
				goto IL_0051;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0051:
	{
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_19 = V_0;
		return L_19;
	}
}
// Method Definition Index: 29069
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_CopyToUnchecked_m43D9AE5D89B32E5F5D123AAEC6278661A24E8F67_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* ___0_target, int32_t ___1_existingData, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericStruct L_19 = alloca(SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
	DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* V_0 = NULL;
	DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3* V_1 = NULL;
	SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* V_2 = NULL;
	int32_t V_3 = 0;
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_0 = ___0_target;
		V_0 = ((DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 3)));
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_2 = V_0;
		((  void (*) (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195*, DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}

IL_0012:
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_3 = ___0_target;
		V_1 = ((DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3* L_5 = V_1;
		int32_t L_6 = ___1_existingData;
		((  void (*) (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195*, DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return;
	}

IL_0025:
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_7 = ___0_target;
		V_2 = ((SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED*)IsInstClass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 28)));
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_8 = V_2;
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_9 = V_2;
		int32_t L_10 = ___1_existingData;
		((  void (*) (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195*, SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return;
	}

IL_0038:
	{
		int32_t L_11 = ___1_existingData;
		if (L_11)
		{
			goto IL_0041;
		}
	}
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_12 = ___0_target;
		NullCheck(L_12);
		VirtualActionInvoker0::Invoke(10, L_12);
	}

IL_0041:
	{
		V_3 = 0;
		goto IL_005d;
	}

IL_0045:
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_13 = ___0_target;
		int32_t L_14 = V_3;
		int32_t L_15 = V_3;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_16 = __this->___Data;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		il2cpp_codegen_memcpy(L_19, (L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)), SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		NullCheck(L_13);
		VirtualActionInvoker3Invoker< int32_t, int32_t, Il2CppFullySharedGenericStruct >::Invoke(9, L_13, L_14, L_15, L_19);
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005d:
	{
		int32_t L_21 = V_3;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_22 = __this->___Data;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0045;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29070
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_CopyToUnchecked_m85B3CF21CAD6B77EE1F60C2D60E1DAE0AD61F201_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* ___0_target, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_0 = __this->___Data;
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_1 = ___0_target;
		NullCheck(L_1);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_2 = L_1->___Data;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_3 = __this->___Data;
		NullCheck(L_3);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		return;
	}
}
// Method Definition Index: 29071
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_CopyToUnchecked_m67B8A6549558FA7DB2631CE8343E810448C6CD8D_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* ___0_target, int32_t ___1_existingData, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_existingData;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_1 = ___0_target;
		NullCheck((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)L_1);
		VirtualActionInvoker0::Invoke(10, (MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)L_1);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0025;
	}

IL_000d:
	{
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_2 = ___0_target;
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_5 = __this->___Data;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		il2cpp_codegen_memcpy(L_8, (L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		NullCheck((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)L_2);
		VirtualActionInvoker3Invoker< int32_t, int32_t, Il2CppFullySharedGenericStruct >::Invoke(9, (MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)L_2, L_3, L_4, L_8);
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0025:
	{
		int32_t L_10 = V_0;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_11 = __this->___Data;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29072
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_CopyToUnchecked_m99AA88B00D2C11A5D788168ED6BEA739A3491FA6_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3* ___0_target, int32_t ___1_existingData, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_existingData;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3* L_1 = ___0_target;
		NullCheck((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)L_1);
		VirtualActionInvoker0::Invoke(10, (MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)L_1);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0032;
	}

IL_000d:
	{
		DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3* L_2 = ___0_target;
		NullCheck(L_2);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_3 = L_2->___Data;
		int32_t L_4 = V_0;
		DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3* L_5 = ___0_target;
		NullCheck(L_5);
		int32_t L_6 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)L_5)->___RowCount;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_7 = __this->___Data;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		il2cpp_codegen_memcpy(L_10, (L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		NullCheck(L_3);
		il2cpp_codegen_memcpy((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)il2cpp_codegen_add(L_6, 1)))))), L_10, SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)il2cpp_codegen_add(L_6, 1)))))), (void*)L_10);
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		int32_t L_12 = V_0;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_13 = __this->___Data;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29073
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_CopySubMatrixToUnchecked_m946B4992C682E7BFBB752349C9CC5D2E21833578_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* ___0_target, int32_t ___1_sourceRowIndex, int32_t ___2_targetRowIndex, int32_t ___3_rowCount, int32_t ___4_sourceColumnIndex, int32_t ___5_targetColumnIndex, int32_t ___6_columnCount, int32_t ___7_existingData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericStruct L_36 = alloca(SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
	const Il2CppFullySharedGenericStruct L_59 = L_36;
	const Il2CppFullySharedGenericStruct L_83 = L_36;
	DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3* V_0 = NULL;
	DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_0 = ___0_target;
		V_0 = ((DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3* L_2 = V_0;
		int32_t L_3 = ___1_sourceRowIndex;
		int32_t L_4 = ___2_targetRowIndex;
		int32_t L_5 = ___3_rowCount;
		int32_t L_6 = ___4_sourceColumnIndex;
		int32_t L_7 = ___5_targetColumnIndex;
		int32_t L_8 = ___6_columnCount;
		int32_t L_9 = ___7_existingData;
		((  void (*) (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195*, DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}

IL_001e:
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_10 = ___0_target;
		V_1 = ((DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195*)IsInstClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 3)));
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_11 = V_1;
		if (!L_11)
		{
			goto IL_003a;
		}
	}
	{
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_12 = V_1;
		int32_t L_13 = ___1_sourceRowIndex;
		int32_t L_14 = ___2_targetRowIndex;
		int32_t L_15 = ___3_rowCount;
		int32_t L_16 = ___4_sourceColumnIndex;
		int32_t L_17 = ___5_targetColumnIndex;
		int32_t L_18 = ___6_columnCount;
		((  void (*) (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195*, DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_12, L_13, L_14, L_15, L_16, L_17, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return;
	}

IL_003a:
	{
		int32_t L_19 = ___7_existingData;
		if (L_19)
		{
			goto IL_004b;
		}
	}
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_20 = ___0_target;
		int32_t L_21 = ___2_targetRowIndex;
		int32_t L_22 = ___3_rowCount;
		int32_t L_23 = ___5_targetColumnIndex;
		int32_t L_24 = ___6_columnCount;
		NullCheck(L_20);
		VirtualActionInvoker4< int32_t, int32_t, int32_t, int32_t >::Invoke(11, L_20, L_21, L_22, L_23, L_24);
	}

IL_004b:
	{
		int32_t L_25 = ___1_sourceRowIndex;
		int32_t L_26 = ___4_sourceColumnIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_0080;
		}
	}
	{
		V_2 = 0;
		goto IL_0073;
	}

IL_0054:
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_27 = ___0_target;
		int32_t L_28 = ___2_targetRowIndex;
		int32_t L_29 = V_2;
		int32_t L_30 = ___5_targetColumnIndex;
		int32_t L_31 = V_2;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_32 = __this->___Data;
		int32_t L_33 = ___1_sourceRowIndex;
		int32_t L_34 = V_2;
		NullCheck(L_32);
		int32_t L_35 = ((int32_t)il2cpp_codegen_add(L_33, L_34));
		il2cpp_codegen_memcpy(L_36, (L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)), SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		NullCheck(L_27);
		VirtualActionInvoker3Invoker< int32_t, int32_t, Il2CppFullySharedGenericStruct >::Invoke(9, L_27, ((int32_t)il2cpp_codegen_add(L_28, L_29)), ((int32_t)il2cpp_codegen_add(L_30, L_31)), L_36);
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_0073:
	{
		int32_t L_38 = V_2;
		int32_t L_39 = ___6_columnCount;
		int32_t L_40 = ___3_rowCount;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_41;
		L_41 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_39, L_40, NULL);
		if ((((int32_t)L_38) < ((int32_t)L_41)))
		{
			goto IL_0054;
		}
	}
	{
		return;
	}

IL_0080:
	{
		int32_t L_42 = ___1_sourceRowIndex;
		int32_t L_43 = ___4_sourceColumnIndex;
		if ((((int32_t)L_42) <= ((int32_t)L_43)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_44 = ___4_sourceColumnIndex;
		int32_t L_45 = ___6_columnCount;
		int32_t L_46 = ___1_sourceRowIndex;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_44, L_45))) <= ((int32_t)L_46)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_47 = ___1_sourceRowIndex;
		int32_t L_48 = ___4_sourceColumnIndex;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_47, L_48));
		V_4 = 0;
		goto IL_00bd;
	}

IL_0097:
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_49 = ___0_target;
		int32_t L_50 = ___2_targetRowIndex;
		int32_t L_51 = V_4;
		int32_t L_52 = V_3;
		int32_t L_53 = ___5_targetColumnIndex;
		int32_t L_54 = V_4;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_55 = __this->___Data;
		int32_t L_56 = ___1_sourceRowIndex;
		int32_t L_57 = V_4;
		NullCheck(L_55);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(L_56, L_57));
		il2cpp_codegen_memcpy(L_59, (L_55)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)), SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		NullCheck(L_49);
		VirtualActionInvoker3Invoker< int32_t, int32_t, Il2CppFullySharedGenericStruct >::Invoke(9, L_49, ((int32_t)il2cpp_codegen_add(L_50, L_51)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_52, L_53)), L_54)), L_59);
		int32_t L_60 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_00bd:
	{
		int32_t L_61 = V_4;
		int32_t L_62 = ___6_columnCount;
		int32_t L_63 = V_3;
		int32_t L_64 = ___3_rowCount;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_65;
		L_65 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(L_62, L_63)), L_64, NULL);
		if ((((int32_t)L_61) < ((int32_t)L_65)))
		{
			goto IL_0097;
		}
	}
	{
		return;
	}

IL_00cd:
	{
		int32_t L_66 = ___1_sourceRowIndex;
		int32_t L_67 = ___4_sourceColumnIndex;
		if ((((int32_t)L_66) >= ((int32_t)L_67)))
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_68 = ___1_sourceRowIndex;
		int32_t L_69 = ___3_rowCount;
		int32_t L_70 = ___4_sourceColumnIndex;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_68, L_69))) <= ((int32_t)L_70)))
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_71 = ___4_sourceColumnIndex;
		int32_t L_72 = ___1_sourceRowIndex;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_71, L_72));
		V_6 = 0;
		goto IL_010d;
	}

IL_00e5:
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_73 = ___0_target;
		int32_t L_74 = V_5;
		int32_t L_75 = ___2_targetRowIndex;
		int32_t L_76 = V_6;
		int32_t L_77 = ___5_targetColumnIndex;
		int32_t L_78 = V_6;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_79 = __this->___Data;
		int32_t L_80 = ___4_sourceColumnIndex;
		int32_t L_81 = V_6;
		NullCheck(L_79);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_80, L_81));
		il2cpp_codegen_memcpy(L_83, (L_79)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_82)), SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		NullCheck(L_73);
		VirtualActionInvoker3Invoker< int32_t, int32_t, Il2CppFullySharedGenericStruct >::Invoke(9, L_73, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_74, L_75)), L_76)), ((int32_t)il2cpp_codegen_add(L_77, L_78)), L_83);
		int32_t L_84 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_84, 1));
	}

IL_010d:
	{
		int32_t L_85 = V_6;
		int32_t L_86 = ___6_columnCount;
		int32_t L_87 = ___3_rowCount;
		int32_t L_88 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_89;
		L_89 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_86, ((int32_t)il2cpp_codegen_subtract(L_87, L_88)), NULL);
		if ((((int32_t)L_85) < ((int32_t)L_89)))
		{
			goto IL_00e5;
		}
	}

IL_011d:
	{
		return;
	}
}
// Method Definition Index: 29074
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_CopySubMatrixToUnchecked_mF7B1175D3C4BFEA8A008FC91C5E472050AE91344_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* ___0_target, int32_t ___1_sourceRowIndex, int32_t ___2_targetRowIndex, int32_t ___3_rowCount, int32_t ___4_sourceColumnIndex, int32_t ___5_targetColumnIndex, int32_t ___6_columnCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Func_2_tF7A25DDCCE46126D52529733C258011C5F441155* G_B3_0 = NULL;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* G_B3_1 = NULL;
	Func_2_tF7A25DDCCE46126D52529733C258011C5F441155* G_B2_0 = NULL;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* G_B2_1 = NULL;
	{
		int32_t L_0 = ___1_sourceRowIndex;
		int32_t L_1 = ___4_sourceColumnIndex;
		int32_t L_2 = ___2_targetRowIndex;
		int32_t L_3 = ___5_targetColumnIndex;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_0, L_1))) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3)))))
		{
			goto IL_004a;
		}
	}
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_4 = __this->___Data;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 37));
		Func_2_tF7A25DDCCE46126D52529733C258011C5F441155* L_5 = ((U3CU3Ec_t11414E7EC73BB0E71FF17854867DF975619186C4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 37)))->___U3CU3E9__26_0;
		Func_2_tF7A25DDCCE46126D52529733C258011C5F441155* L_6 = L_5;
		if (L_6)
		{
			G_B3_0 = L_6;
			G_B3_1 = L_4;
			goto IL_002f;
		}
		G_B2_0 = L_6;
		G_B2_1 = L_4;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 37));
		U3CU3Ec_t11414E7EC73BB0E71FF17854867DF975619186C4* L_7 = ((U3CU3Ec_t11414E7EC73BB0E71FF17854867DF975619186C4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 37)))->___U3CU3E9;
		Func_2_tF7A25DDCCE46126D52529733C258011C5F441155* L_8 = (Func_2_tF7A25DDCCE46126D52529733C258011C5F441155*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 36));
		((  void (*) (Func_2_tF7A25DDCCE46126D52529733C258011C5F441155*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(L_8, (RuntimeObject*)L_7, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 38)), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Func_2_tF7A25DDCCE46126D52529733C258011C5F441155* L_9 = L_8;
		((U3CU3Ec_t11414E7EC73BB0E71FF17854867DF975619186C4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 37)))->___U3CU3E9__26_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t11414E7EC73BB0E71FF17854867DF975619186C4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 37)))->___U3CU3E9__26_0), (void*)L_9);
		G_B3_0 = L_9;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		bool L_10;
		L_10 = ((  bool (*) (RuntimeObject*, Func_2_tF7A25DDCCE46126D52529733C258011C5F441155*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))((RuntimeObject*)G_B3_1, G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_10)
		{
			goto IL_003c;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_11 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003c:
	{
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_12 = ___0_target;
		int32_t L_13 = ___2_targetRowIndex;
		int32_t L_14 = ___3_rowCount;
		int32_t L_15 = ___5_targetColumnIndex;
		int32_t L_16 = ___6_columnCount;
		NullCheck((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)L_12);
		VirtualActionInvoker4< int32_t, int32_t, int32_t, int32_t >::Invoke(11, (MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)L_12, L_13, L_14, L_15, L_16);
		return;
	}

IL_004a:
	{
		int32_t L_17 = ___1_sourceRowIndex;
		int32_t L_18 = ___4_sourceColumnIndex;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_19;
		L_19 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_17, L_18, NULL);
		V_0 = L_19;
		int32_t L_20 = ___1_sourceRowIndex;
		int32_t L_21 = ___3_rowCount;
		int32_t L_22 = ___4_sourceColumnIndex;
		int32_t L_23 = ___6_columnCount;
		int32_t L_24;
		L_24 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_20, L_21)), ((int32_t)il2cpp_codegen_add(L_22, L_23)), NULL);
		V_1 = L_24;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		if ((((int32_t)L_25) <= ((int32_t)L_26)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_27 = ___2_targetRowIndex;
		int32_t L_28 = ___5_targetColumnIndex;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_29;
		L_29 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_27, L_28, NULL);
		V_2 = L_29;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_30 = __this->___Data;
		int32_t L_31 = V_0;
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_32 = ___0_target;
		NullCheck(L_32);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_33 = L_32->___Data;
		int32_t L_34 = V_2;
		int32_t L_35 = V_1;
		int32_t L_36 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_30, L_31, (RuntimeArray*)L_33, L_34, ((int32_t)il2cpp_codegen_subtract(L_35, L_36)), NULL);
	}

IL_0085:
	{
		return;
	}
}
// Method Definition Index: 29075
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_CopySubMatrixToUnchecked_mDC4BA13631ED140B597467FE80E3192D1B2CB066_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3* ___0_target, int32_t ___1_sourceRowIndex, int32_t ___2_targetRowIndex, int32_t ___3_rowCount, int32_t ___4_sourceColumnIndex, int32_t ___5_targetColumnIndex, int32_t ___6_columnCount, int32_t ___7_existingData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericStruct L_32 = alloca(SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
	const Il2CppFullySharedGenericStruct L_64 = L_32;
	const Il2CppFullySharedGenericStruct L_87 = L_32;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	{
		int32_t L_0 = ___7_existingData;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3* L_1 = ___0_target;
		int32_t L_2 = ___2_targetRowIndex;
		int32_t L_3 = ___3_rowCount;
		int32_t L_4 = ___5_targetColumnIndex;
		int32_t L_5 = ___6_columnCount;
		NullCheck((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)L_1);
		VirtualActionInvoker4< int32_t, int32_t, int32_t, int32_t >::Invoke(11, (MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)L_1, L_2, L_3, L_4, L_5);
	}

IL_0011:
	{
		int32_t L_6 = ___1_sourceRowIndex;
		int32_t L_7 = ___4_sourceColumnIndex;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_8 = ___4_sourceColumnIndex;
		int32_t L_9 = ___6_columnCount;
		int32_t L_10 = ___1_sourceRowIndex;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_8, L_9))) <= ((int32_t)L_10)))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_11 = ___1_sourceRowIndex;
		int32_t L_12 = ___4_sourceColumnIndex;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, L_12));
		int32_t L_13 = V_0;
		int32_t L_14 = ___5_targetColumnIndex;
		DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3* L_15 = ___0_target;
		NullCheck(L_15);
		int32_t L_16 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)L_15)->___RowCount;
		int32_t L_17 = ___2_targetRowIndex;
		DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3* L_18 = ___0_target;
		NullCheck(L_18);
		int32_t L_19 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)L_18)->___RowCount;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = ___6_columnCount;
		int32_t L_21 = V_0;
		int32_t L_22 = ___3_rowCount;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_23;
		L_23 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(L_20, L_21)), L_22, NULL);
		int32_t L_24 = ___1_sourceRowIndex;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, L_24));
		int32_t L_25 = ___1_sourceRowIndex;
		V_3 = L_25;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_13, L_14)), L_16)), L_17));
		goto IL_0070;
	}

IL_004d:
	{
		DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3* L_26 = ___0_target;
		NullCheck(L_26);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_27 = L_26->___Data;
		int32_t L_28 = V_4;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_29 = __this->___Data;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		il2cpp_codegen_memcpy(L_32, (L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)), SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		NullCheck(L_27);
		il2cpp_codegen_memcpy((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)), L_32, SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)), (void*)L_32);
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		int32_t L_34 = V_4;
		int32_t L_35 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, L_35));
	}

IL_0070:
	{
		int32_t L_36 = V_3;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_004d;
		}
	}
	{
		return;
	}

IL_0075:
	{
		int32_t L_38 = ___1_sourceRowIndex;
		int32_t L_39 = ___4_sourceColumnIndex;
		if ((((int32_t)L_38) >= ((int32_t)L_39)))
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_40 = ___1_sourceRowIndex;
		int32_t L_41 = ___3_rowCount;
		int32_t L_42 = ___4_sourceColumnIndex;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_40, L_41))) <= ((int32_t)L_42)))
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_43 = ___4_sourceColumnIndex;
		int32_t L_44 = ___1_sourceRowIndex;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_43, L_44));
		int32_t L_45 = ___5_targetColumnIndex;
		DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3* L_46 = ___0_target;
		NullCheck(L_46);
		int32_t L_47 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)L_46)->___RowCount;
		int32_t L_48 = V_5;
		int32_t L_49 = ___2_targetRowIndex;
		DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3* L_50 = ___0_target;
		NullCheck(L_50);
		int32_t L_51 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)L_50)->___RowCount;
		V_6 = ((int32_t)il2cpp_codegen_add(L_51, 1));
		int32_t L_52 = ___6_columnCount;
		int32_t L_53 = ___3_rowCount;
		int32_t L_54 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_55;
		L_55 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_52, ((int32_t)il2cpp_codegen_subtract(L_53, L_54)), NULL);
		int32_t L_56 = ___4_sourceColumnIndex;
		V_7 = ((int32_t)il2cpp_codegen_add(L_55, L_56));
		int32_t L_57 = ___4_sourceColumnIndex;
		V_8 = L_57;
		V_9 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_45, L_47)), L_48)), L_49));
		goto IL_00e0;
	}

IL_00b9:
	{
		DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3* L_58 = ___0_target;
		NullCheck(L_58);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_59 = L_58->___Data;
		int32_t L_60 = V_9;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_61 = __this->___Data;
		int32_t L_62 = V_8;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		il2cpp_codegen_memcpy(L_64, (L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63)), SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		NullCheck(L_59);
		il2cpp_codegen_memcpy((L_59)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_60)), L_64, SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(L_59)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_60)), (void*)L_64);
		int32_t L_65 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_65, 1));
		int32_t L_66 = V_9;
		int32_t L_67 = V_6;
		V_9 = ((int32_t)il2cpp_codegen_add(L_66, L_67));
	}

IL_00e0:
	{
		int32_t L_68 = V_8;
		int32_t L_69 = V_7;
		if ((((int32_t)L_68) < ((int32_t)L_69)))
		{
			goto IL_00b9;
		}
	}
	{
		return;
	}

IL_00e7:
	{
		int32_t L_70 = ___5_targetColumnIndex;
		DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3* L_71 = ___0_target;
		NullCheck(L_71);
		int32_t L_72 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)L_71)->___RowCount;
		int32_t L_73 = ___2_targetRowIndex;
		DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3* L_74 = ___0_target;
		NullCheck(L_74);
		int32_t L_75 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)L_74)->___RowCount;
		V_10 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		int32_t L_76 = ___6_columnCount;
		int32_t L_77 = ___3_rowCount;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_78;
		L_78 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_76, L_77, NULL);
		int32_t L_79 = ___1_sourceRowIndex;
		V_11 = ((int32_t)il2cpp_codegen_add(L_78, L_79));
		int32_t L_80 = ___1_sourceRowIndex;
		V_12 = L_80;
		V_13 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_70, L_72)), L_73));
		goto IL_0137;
	}

IL_0110:
	{
		DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3* L_81 = ___0_target;
		NullCheck(L_81);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_82 = L_81->___Data;
		int32_t L_83 = V_13;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_84 = __this->___Data;
		int32_t L_85 = V_12;
		NullCheck(L_84);
		int32_t L_86 = L_85;
		il2cpp_codegen_memcpy(L_87, (L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)), SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		NullCheck(L_82);
		il2cpp_codegen_memcpy((L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_83)), L_87, SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_83)), (void*)L_87);
		int32_t L_88 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_88, 1));
		int32_t L_89 = V_13;
		int32_t L_90 = V_10;
		V_13 = ((int32_t)il2cpp_codegen_add(L_89, L_90));
	}

IL_0137:
	{
		int32_t L_91 = V_12;
		int32_t L_92 = V_11;
		if ((((int32_t)L_91) < ((int32_t)L_92)))
		{
			goto IL_0110;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29076
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_CopySubRowToUnchecked_m9353E758B84542B9B0CD9555D3C84A0BBC9C5CDD_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, VectorStorage_1_t343CC0AC98F29550CFC428324EB3D4394C4A88A6* ___0_target, int32_t ___1_rowIndex, int32_t ___2_sourceColumnIndex, int32_t ___3_targetColumnIndex, int32_t ___4_columnCount, int32_t ___5_existingData, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericStruct L_18 = alloca(SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
	{
		int32_t L_0 = ___5_existingData;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		VectorStorage_1_t343CC0AC98F29550CFC428324EB3D4394C4A88A6* L_1 = ___0_target;
		int32_t L_2 = ___3_targetColumnIndex;
		int32_t L_3 = ___4_columnCount;
		NullCheck(L_1);
		VirtualActionInvoker2< int32_t, int32_t >::Invoke(10, L_1, L_2, L_3);
	}

IL_000e:
	{
		int32_t L_4 = ___1_rowIndex;
		int32_t L_5 = ___2_sourceColumnIndex;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_6 = ___1_rowIndex;
		int32_t L_7 = ___2_sourceColumnIndex;
		int32_t L_8 = ___4_columnCount;
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_7, L_8)))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_9 = ___1_rowIndex;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_10 = __this->___Data;
		NullCheck(L_10);
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_003c;
		}
	}
	{
		VectorStorage_1_t343CC0AC98F29550CFC428324EB3D4394C4A88A6* L_11 = ___0_target;
		int32_t L_12 = ___1_rowIndex;
		int32_t L_13 = ___2_sourceColumnIndex;
		int32_t L_14 = ___3_targetColumnIndex;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_15 = __this->___Data;
		int32_t L_16 = ___1_rowIndex;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		il2cpp_codegen_memcpy(L_18, (L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)), SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		NullCheck(L_11);
		VirtualActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct >::Invoke(7, L_11, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_12, L_13)), L_14)), L_18);
	}

IL_003c:
	{
		return;
	}
}
// Method Definition Index: 29077
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_CopySubColumnToUnchecked_m361F992AA53DA82109509AD3CE2C85FC535DFCA3_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, VectorStorage_1_t343CC0AC98F29550CFC428324EB3D4394C4A88A6* ___0_target, int32_t ___1_columnIndex, int32_t ___2_sourceRowIndex, int32_t ___3_targetRowIndex, int32_t ___4_rowCount, int32_t ___5_existingData, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericStruct L_18 = alloca(SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
	{
		int32_t L_0 = ___5_existingData;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		VectorStorage_1_t343CC0AC98F29550CFC428324EB3D4394C4A88A6* L_1 = ___0_target;
		int32_t L_2 = ___3_targetRowIndex;
		int32_t L_3 = ___4_rowCount;
		NullCheck(L_1);
		VirtualActionInvoker2< int32_t, int32_t >::Invoke(10, L_1, L_2, L_3);
	}

IL_000e:
	{
		int32_t L_4 = ___1_columnIndex;
		int32_t L_5 = ___2_sourceRowIndex;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_6 = ___1_columnIndex;
		int32_t L_7 = ___2_sourceRowIndex;
		int32_t L_8 = ___4_rowCount;
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_7, L_8)))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_9 = ___1_columnIndex;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_10 = __this->___Data;
		NullCheck(L_10);
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_003c;
		}
	}
	{
		VectorStorage_1_t343CC0AC98F29550CFC428324EB3D4394C4A88A6* L_11 = ___0_target;
		int32_t L_12 = ___1_columnIndex;
		int32_t L_13 = ___2_sourceRowIndex;
		int32_t L_14 = ___3_targetRowIndex;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_15 = __this->___Data;
		int32_t L_16 = ___1_columnIndex;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		il2cpp_codegen_memcpy(L_18, (L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)), SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		NullCheck(L_11);
		VirtualActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct >::Invoke(7, L_11, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_12, L_13)), L_14)), L_18);
	}

IL_003c:
	{
		return;
	}
}
// Method Definition Index: 29078
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_TransposeToUnchecked_mD949F268E02BE6420A9980E27E2549D4AF197A46_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* ___0_target, int32_t ___1_existingData, const RuntimeMethod* method) 
{
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_0 = ___0_target;
		int32_t L_1 = ___1_existingData;
		NullCheck((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this);
		VirtualActionInvoker2< MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*, int32_t >::Invoke(14, (MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this, L_0, L_1);
		return;
	}
}
// Method Definition Index: 29079
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_TransposeSquareInplaceUnchecked_mA9125A0388B473DC0EB1D14AA851C88ABE71DDB2_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// Method Definition Index: 29080
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* DiagonalMatrixStorage_1_ToRowMajorArray_m16211833C7837A1A95D60429AF9D45F69D9ED2FC_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		int32_t L_1 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___ColumnCount;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_2 = (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)(__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)((int32_t)il2cpp_codegen_multiply(L_0, L_1)));
		V_0 = L_2;
		int32_t L_3 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___ColumnCount;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		V_2 = 0;
		goto IL_0039;
	}

IL_0020:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_4 = V_0;
		int32_t L_5 = V_2;
		int32_t L_6 = V_1;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_7 = __this->___Data;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		il2cpp_codegen_memcpy(L_10, (L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_5, L_6)))), L_10, SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_5, L_6)))), (void*)L_10);
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0039:
	{
		int32_t L_12 = V_2;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_13 = __this->___Data;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_14 = V_0;
		return L_14;
	}
}
// Method Definition Index: 29081
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* DiagonalMatrixStorage_1_ToColumnMajorArray_m305817E000230E1657C66A0772E712387E8F4C93_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		int32_t L_1 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___ColumnCount;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_2 = (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)(__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)((int32_t)il2cpp_codegen_multiply(L_0, L_1)));
		V_0 = L_2;
		int32_t L_3 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		V_2 = 0;
		goto IL_0039;
	}

IL_0020:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_4 = V_0;
		int32_t L_5 = V_2;
		int32_t L_6 = V_1;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_7 = __this->___Data;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		il2cpp_codegen_memcpy(L_10, (L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_5, L_6)))), L_10, SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_5, L_6)))), (void*)L_10);
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0039:
	{
		int32_t L_12 = V_2;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_13 = __this->___Data;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_14 = V_0;
		return L_14;
	}
}
// Method Definition Index: 29082
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericStructTypeU5BU5DU5BU5D_t042D120258AA36B8D13568AB794A5BFBB7A72C7C* DiagonalMatrixStorage_1_ToRowArrays_mDD8240666C2DBA07364AE4C6AA1DACBF9C033252_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
	__Il2CppFullySharedGenericStructTypeU5BU5DU5BU5D_t042D120258AA36B8D13568AB794A5BFBB7A72C7C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		__Il2CppFullySharedGenericStructTypeU5BU5DU5BU5D_t042D120258AA36B8D13568AB794A5BFBB7A72C7C* L_1 = (__Il2CppFullySharedGenericStructTypeU5BU5DU5BU5D_t042D120258AA36B8D13568AB794A5BFBB7A72C7C*)(__Il2CppFullySharedGenericStructTypeU5BU5DU5BU5D_t042D120258AA36B8D13568AB794A5BFBB7A72C7C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0022;
	}

IL_0010:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5DU5BU5D_t042D120258AA36B8D13568AB794A5BFBB7A72C7C* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___ColumnCount;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_5 = (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)(__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)L_5);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0022:
	{
		int32_t L_7 = V_1;
		int32_t L_8 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0010;
		}
	}
	{
		V_2 = 0;
		goto IL_0048;
	}

IL_002f:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5DU5BU5D_t042D120258AA36B8D13568AB794A5BFBB7A72C7C* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13 = V_2;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_14 = __this->___Data;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		il2cpp_codegen_memcpy(L_17, (L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)), SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		NullCheck(L_12);
		il2cpp_codegen_memcpy((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), L_17, SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_17);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0048:
	{
		int32_t L_19 = V_2;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_20 = __this->___Data;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_002f;
		}
	}
	{
		__Il2CppFullySharedGenericStructTypeU5BU5DU5BU5D_t042D120258AA36B8D13568AB794A5BFBB7A72C7C* L_21 = V_0;
		return L_21;
	}
}
// Method Definition Index: 29083
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericStructTypeU5BU5DU5BU5D_t042D120258AA36B8D13568AB794A5BFBB7A72C7C* DiagonalMatrixStorage_1_ToColumnArrays_mCC34E6B8761C92E1E963BF30AC367AF3895A41EA_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
	__Il2CppFullySharedGenericStructTypeU5BU5DU5BU5D_t042D120258AA36B8D13568AB794A5BFBB7A72C7C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___ColumnCount;
		__Il2CppFullySharedGenericStructTypeU5BU5DU5BU5D_t042D120258AA36B8D13568AB794A5BFBB7A72C7C* L_1 = (__Il2CppFullySharedGenericStructTypeU5BU5DU5BU5D_t042D120258AA36B8D13568AB794A5BFBB7A72C7C*)(__Il2CppFullySharedGenericStructTypeU5BU5DU5BU5D_t042D120258AA36B8D13568AB794A5BFBB7A72C7C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0022;
	}

IL_0010:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5DU5BU5D_t042D120258AA36B8D13568AB794A5BFBB7A72C7C* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_5 = (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)(__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)L_5);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0022:
	{
		int32_t L_7 = V_1;
		int32_t L_8 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___ColumnCount;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0010;
		}
	}
	{
		V_2 = 0;
		goto IL_0048;
	}

IL_002f:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5DU5BU5D_t042D120258AA36B8D13568AB794A5BFBB7A72C7C* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13 = V_2;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_14 = __this->___Data;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		il2cpp_codegen_memcpy(L_17, (L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)), SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		NullCheck(L_12);
		il2cpp_codegen_memcpy((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), L_17, SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_17);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0048:
	{
		int32_t L_19 = V_2;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_20 = __this->___Data;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_002f;
		}
	}
	{
		__Il2CppFullySharedGenericStructTypeU5BU5DU5BU5D_t042D120258AA36B8D13568AB794A5BFBB7A72C7C* L_21 = V_0;
		return L_21;
	}
}
// Method Definition Index: 29084
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11* DiagonalMatrixStorage_1_ToArray_mD17F6E19354D2B65637FD163F69BBE74525EDCAC_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
	__Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		int32_t L_1 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___ColumnCount;
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)L_1 };
		__Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11* L_2 = (__Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11*)GenArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_3);
		V_0 = L_2;
		V_1 = 0;
		goto IL_002e;
	}

IL_0016:
	{
		__Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11* L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = V_1;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_7 = __this->___Data;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		il2cpp_codegen_memcpy(L_10, (L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		NullCheck(L_4);
		il2cpp_codegen_memcpy_with_write_barrier((L_4)->GetAddressAt(L_5, L_6), L_10, SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD, il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002e:
	{
		int32_t L_12 = V_1;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_13 = __this->___Data;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		__Il2CppFullySharedGenericStructTypeU5BU2CU5D_t20F1074B164FDE25AAD83358B3CD53618B34BB11* L_14 = V_0;
		return L_14;
	}
}
// Method Definition Index: 29085
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DiagonalMatrixStorage_1_Enumerate_m54AFD65AAD70915359B2CBB96EFF0C7F61BD9AEF_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, const RuntimeMethod* method) 
{
	{
		U3CEnumerateU3Ed__37_t905E0DE63EB3EEEBE5FAD7DC9DFCA381DE194955* L_0 = (U3CEnumerateU3Ed__37_t905E0DE63EB3EEEBE5FAD7DC9DFCA381DE194955*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 46));
		((  void (*) (U3CEnumerateU3Ed__37_t905E0DE63EB3EEEBE5FAD7DC9DFCA381DE194955*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(L_0, ((int32_t)-2), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		U3CEnumerateU3Ed__37_t905E0DE63EB3EEEBE5FAD7DC9DFCA381DE194955* L_1 = L_0;
		NullCheck(L_1);
		il2cpp_codegen_write_instance_field_data<DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195*>(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 46),3), __this);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 29086
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DiagonalMatrixStorage_1_EnumerateIndexed_m9234575FD3F1CA48F25DC613204E8B251EBD60E9_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, const RuntimeMethod* method) 
{
	{
		U3CEnumerateIndexedU3Ed__38_tCAC26C837D327CAFB94F4D81BDFCC010A43CD564* L_0 = (U3CEnumerateIndexedU3Ed__38_tCAC26C837D327CAFB94F4D81BDFCC010A43CD564*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 48));
		((  void (*) (U3CEnumerateIndexedU3Ed__38_tCAC26C837D327CAFB94F4D81BDFCC010A43CD564*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, ((int32_t)-2), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		U3CEnumerateIndexedU3Ed__38_tCAC26C837D327CAFB94F4D81BDFCC010A43CD564* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 29087
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DiagonalMatrixStorage_1_EnumerateNonZero_m11D9CF98F4A4A9EC4672E73A5F20B819DCF74DAE_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, const RuntimeMethod* method) 
{
	Func_2_tF7A25DDCCE46126D52529733C258011C5F441155* G_B2_0 = NULL;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* G_B2_1 = NULL;
	Func_2_tF7A25DDCCE46126D52529733C258011C5F441155* G_B1_0 = NULL;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* G_B1_1 = NULL;
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_0 = __this->___Data;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 37));
		Func_2_tF7A25DDCCE46126D52529733C258011C5F441155* L_1 = ((U3CU3Ec_t11414E7EC73BB0E71FF17854867DF975619186C4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 37)))->___U3CU3E9__39_0;
		Func_2_tF7A25DDCCE46126D52529733C258011C5F441155* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
		G_B1_0 = L_2;
		G_B1_1 = L_0;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 37));
		U3CU3Ec_t11414E7EC73BB0E71FF17854867DF975619186C4* L_3 = ((U3CU3Ec_t11414E7EC73BB0E71FF17854867DF975619186C4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 37)))->___U3CU3E9;
		Func_2_tF7A25DDCCE46126D52529733C258011C5F441155* L_4 = (Func_2_tF7A25DDCCE46126D52529733C258011C5F441155*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 36));
		((  void (*) (Func_2_tF7A25DDCCE46126D52529733C258011C5F441155*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(L_4, (RuntimeObject*)L_3, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 51)), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Func_2_tF7A25DDCCE46126D52529733C258011C5F441155* L_5 = L_4;
		((U3CU3Ec_t11414E7EC73BB0E71FF17854867DF975619186C4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 37)))->___U3CU3E9__39_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t11414E7EC73BB0E71FF17854867DF975619186C4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 37)))->___U3CU3E9__39_0), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		RuntimeObject* L_6;
		L_6 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tF7A25DDCCE46126D52529733C258011C5F441155*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))((RuntimeObject*)G_B2_1, G_B2_0, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		return L_6;
	}
}
// Method Definition Index: 29088
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DiagonalMatrixStorage_1_EnumerateNonZeroIndexed_mB585159A8C5F8B8F7D2CD2C3896A7BE93BBAE60F_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, const RuntimeMethod* method) 
{
	{
		U3CEnumerateNonZeroIndexedU3Ed__40_t4B071F4E218177691AF3CB7F2C4B51AFEE076478* L_0 = (U3CEnumerateNonZeroIndexedU3Ed__40_t4B071F4E218177691AF3CB7F2C4B51AFEE076478*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 53));
		((  void (*) (U3CEnumerateNonZeroIndexedU3Ed__40_t4B071F4E218177691AF3CB7F2C4B51AFEE076478*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)))(L_0, ((int32_t)-2), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		U3CEnumerateNonZeroIndexedU3Ed__40_t4B071F4E218177691AF3CB7F2C4B51AFEE076478* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 29089
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_3_t20F25688E39A3114C8F25BD61ECD39F09F9CA2E0* DiagonalMatrixStorage_1_Find_m0E1C4F7BBBE34204AE285F59A8F74702294DDDC7_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, Func_2_tF7A25DDCCE46126D52529733C258011C5F441155* ___0_predicate, int32_t ___1_zeros, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
	const Il2CppFullySharedGenericStruct L_11 = L_4;
	const Il2CppFullySharedGenericStruct L_20 = L_4;
	const Il2CppFullySharedGenericStruct L_24 = L_4;
	int32_t V_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	{
		V_0 = 0;
		goto IL_0030;
	}

IL_0004:
	{
		Func_2_tF7A25DDCCE46126D52529733C258011C5F441155* L_0 = ___0_predicate;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_1 = __this->___Data;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		NullCheck(L_0);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)), il2cpp_rgctx_method(method->klass->rgctx_data, 55), L_0, L_4);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = V_0;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_8 = __this->___Data;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		Tuple_3_t20F25688E39A3114C8F25BD61ECD39F09F9CA2E0* L_12 = (Tuple_3_t20F25688E39A3114C8F25BD61ECD39F09F9CA2E0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 56));
		InvokerActionInvoker3< int32_t, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 57)), il2cpp_rgctx_method(method->klass->rgctx_data, 57), L_12, L_6, L_7, L_11);
		return L_12;
	}

IL_002c:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0030:
	{
		int32_t L_14 = V_0;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_15 = __this->___Data;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_16 = ___1_zeros;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_17 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		if ((((int32_t)L_17) > ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_18 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___ColumnCount;
		if ((((int32_t)L_18) <= ((int32_t)1)))
		{
			goto IL_0083;
		}
	}

IL_0051:
	{
		Func_2_tF7A25DDCCE46126D52529733C258011C5F441155* L_19 = ___0_predicate;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_20, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),0)), SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		NullCheck(L_19);
		bool L_21;
		L_21 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)), il2cpp_rgctx_method(method->klass->rgctx_data, 55), L_19, L_20);
		if (!L_21)
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_22 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		if ((((int32_t)L_22) > ((int32_t)1)))
		{
			goto IL_006a;
		}
	}
	{
		G_B12_0 = 0;
		goto IL_006b;
	}

IL_006a:
	{
		G_B12_0 = 1;
	}

IL_006b:
	{
		int32_t L_23 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		if ((((int32_t)L_23) > ((int32_t)1)))
		{
			G_B14_0 = G_B12_0;
			goto IL_0077;
		}
		G_B13_0 = G_B12_0;
	}
	{
		G_B15_0 = 1;
		G_B15_1 = G_B13_0;
		goto IL_0078;
	}

IL_0077:
	{
		G_B15_0 = 0;
		G_B15_1 = G_B14_0;
	}

IL_0078:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_24, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),0)), SizeOf_T_t1B5A614366DD1969714E79842F2FAEFEF1F575FD);
		Tuple_3_t20F25688E39A3114C8F25BD61ECD39F09F9CA2E0* L_25 = (Tuple_3_t20F25688E39A3114C8F25BD61ECD39F09F9CA2E0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 56));
		InvokerActionInvoker3< int32_t, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 57)), il2cpp_rgctx_method(method->klass->rgctx_data, 57), L_25, G_B15_1, G_B15_0, L_24);
		return L_25;
	}

IL_0083:
	{
		return (Tuple_3_t20F25688E39A3114C8F25BD61ECD39F09F9CA2E0*)NULL;
	}
}
// Method Definition Index: 29091
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_MapInplace_mF4793E1AEBDB2E3B3226560DB9CDEEEF300CF1FC_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, Func_2_tDDC415B0A5306A4473D2ADD7C4E25824337698DB* ___0_f, int32_t ___1_zeros, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass43_0_t8771AA89681E509F3350521C3D77176D1B5594A6* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass43_0_t8771AA89681E509F3350521C3D77176D1B5594A6* L_0 = (U3CU3Ec__DisplayClass43_0_t8771AA89681E509F3350521C3D77176D1B5594A6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 58));
		((  void (*) (U3CU3Ec__DisplayClass43_0_t8771AA89681E509F3350521C3D77176D1B5594A6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 59)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		V_0 = L_0;
		U3CU3Ec__DisplayClass43_0_t8771AA89681E509F3350521C3D77176D1B5594A6* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CU3Ec__DisplayClass43_0_t8771AA89681E509F3350521C3D77176D1B5594A6* L_2 = V_0;
		Func_2_tDDC415B0A5306A4473D2ADD7C4E25824337698DB* L_3 = ___0_f;
		NullCheck(L_2);
		L_2->___f = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___f), (void*)L_3);
		int32_t L_4 = ___1_zeros;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0023;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_5 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral188FDFEEC711300DC0BEB0CF62178DC1005B840E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0023:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_6 = __this->___Data;
		NullCheck(L_6);
		U3CU3Ec__DisplayClass43_0_t8771AA89681E509F3350521C3D77176D1B5594A6* L_7 = V_0;
		Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* L_8 = (Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8*)il2cpp_codegen_object_new(Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8_il2cpp_TypeInfo_var);
		Action_2__ctor_m83CEE170A5B9427B596A04F9F50676B044223927(L_8, (RuntimeObject*)L_7, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 61)), NULL);
		CommonParallel_For_m1C8AF2732DD4541FD7F86DEE1BB47B5EDEF5876E(0, ((int32_t)(((RuntimeArray*)L_6)->max_length)), ((int32_t)4096), L_8, NULL);
		return;
	}
}
// Method Definition Index: 29092
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagonalMatrixStorage_1_MapIndexedInplace_m8DB4AC4D04AC9E5E771987799910DF90E5A951DB_gshared (DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* __this, Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B* ___0_f, int32_t ___1_zeros, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass44_0_tB336F0DF1F0A988A640A5631BBAB5294D006A321* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass44_0_tB336F0DF1F0A988A640A5631BBAB5294D006A321* L_0 = (U3CU3Ec__DisplayClass44_0_tB336F0DF1F0A988A640A5631BBAB5294D006A321*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 62));
		((  void (*) (U3CU3Ec__DisplayClass44_0_tB336F0DF1F0A988A640A5631BBAB5294D006A321*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 63)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 63));
		V_0 = L_0;
		U3CU3Ec__DisplayClass44_0_tB336F0DF1F0A988A640A5631BBAB5294D006A321* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CU3Ec__DisplayClass44_0_tB336F0DF1F0A988A640A5631BBAB5294D006A321* L_2 = V_0;
		Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B* L_3 = ___0_f;
		NullCheck(L_2);
		L_2->___f = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___f), (void*)L_3);
		int32_t L_4 = ___1_zeros;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0023;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_5 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral188FDFEEC711300DC0BEB0CF62178DC1005B840E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0023:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_6 = __this->___Data;
		NullCheck(L_6);
		U3CU3Ec__DisplayClass44_0_tB336F0DF1F0A988A640A5631BBAB5294D006A321* L_7 = V_0;
		Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* L_8 = (Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8*)il2cpp_codegen_object_new(Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8_il2cpp_TypeInfo_var);
		Action_2__ctor_m83CEE170A5B9427B596A04F9F50676B044223927(L_8, (RuntimeObject*)L_7, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 65)), NULL);
		CommonParallel_For_m1C8AF2732DD4541FD7F86DEE1BB47B5EDEF5876E(0, ((int32_t)(((RuntimeArray*)L_6)->max_length)), ((int32_t)4096), L_8, NULL);
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
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator__ctor_mED6D481F16E8597DF1F8FD3F1A173ED8F0D4D8E9_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* L_0 = ___0_dictionary;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ConcurrentDictionary_2_GetEnumerator_m12EC3080C7512F05099338965FD8626ACB343320(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____enumerator = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enumerator), (void*)L_1);
		return;
	}
}
// Method Definition Index: 10575
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m3D603D6F0FFDE77F0366C90242C43563CEBB3257_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		RuntimeObject* L_3 = __this->____enumerator;
		NullCheck(L_3);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_4;
		L_4 = InterfaceFuncInvoker0< KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		V_0 = L_4;
		RuntimeObject* L_5;
		L_5 = KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_6;
		memset((&L_6), 0, sizeof(L_6));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_6), L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Key_m8D259867AB5E2DC9BB7842AF3E12D610D928B673_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_2;
	}
}
// Method Definition Index: 10577
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Value_m7EC80AD0D446500C9824A6B681B418A5D0684717_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_2;
	}
}
// Method Definition Index: 10578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Current_m7501DF54C4E255F50E90B671CD323B1CD34C65C8_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_0;
		L_0 = DictionaryEnumerator_get_Entry_m3D603D6F0FFDE77F0366C90242C43563CEBB3257(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_1 = L_0;
		RuntimeObject* L_2 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// Method Definition Index: 10579
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryEnumerator_MoveNext_mB31588BC8CD43AFACC8AA4951D86F21B677419CB_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator_Reset_mB5B330221AC0A9B73F3C3D3297A3E499C6353D10_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker0::Invoke(2, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
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
// Method Definition Index: 10574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator__ctor_mE63FC46E53E46535C7DD59172E65E42BD570D5F3_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* L_0 = ___0_dictionary;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____enumerator = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enumerator), (void*)L_1);
		return;
	}
}
// Method Definition Index: 10575
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m6EB9062A7B59C89B18B6B61214B707BE4AA44086_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const uint32_t SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7);
	const uint32_t SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_5 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), L_2);
		RuntimeObject* L_4 = __this->____enumerator;
		NullCheck(L_4);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_4, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_5);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_6);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), L_6);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_8;
		memset((&L_8), 0, sizeof(L_8));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_8), L_3, L_7, NULL);
		return L_8;
	}
}
// Method Definition Index: 10576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Key_m0990C99F94EA95C5392CA5485B4BFD344BAED6FE_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const uint32_t SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), L_2);
		return L_3;
	}
}
// Method Definition Index: 10577
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Value_mD790494FF5E50257030CC045B516A70513EE98A8_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const uint32_t SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), L_2);
		return L_3;
	}
}
// Method Definition Index: 10578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Current_m84A050320869FF83584304FF56D3BA05368095F2_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_0;
		L_0 = ((  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB (*) (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_1 = L_0;
		RuntimeObject* L_2 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// Method Definition Index: 10579
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryEnumerator_MoveNext_mCD670B5AE8886409051790844BF74853977F5846_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator_Reset_mBAC7702D03B6B7A6496AA713EC06CE6162127B2C_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____enumerator;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker0::Invoke(2, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 43622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* DictionaryPool_2_Get_mEB0AE4A6875B6FF8955F907DA14A422892DD0003_gshared (const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@9a9c0155552c/Runtime/Common/ObjectPools.cs:247>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4* L_0 = ((DictionaryPool_2_t97724CC612D346D7297B29FD225022206773E7FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		NullCheck(L_0);
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_1;
		L_1 = InvokerFuncInvoker0< Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_0);
		return L_1;
	}
}
// Method Definition Index: 43623
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_t31ACF1A657D21FBFAE625A226831F45F0B2B7E42 DictionaryPool_2_Get_mE67FD48FA0C54FD3B783CB3ED89BCBC4C4BB9E2A_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@9a9c0155552c/Runtime/Common/ObjectPools.cs:255>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4* L_0 = ((DictionaryPool_2_t97724CC612D346D7297B29FD225022206773E7FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_t31ACF1A657D21FBFAE625A226831F45F0B2B7E42 L_2;
		L_2 = InvokerFuncInvoker1< PooledObject_t31ACF1A657D21FBFAE625A226831F45F0B2B7E42, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 43624
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryPool_2_Release_mEE88BD2235C60774A51C490CE3550E97C48262B6_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_toRelease, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@9a9c0155552c/Runtime/Common/ObjectPools.cs:261>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4* L_0 = ((DictionaryPool_2_t97724CC612D346D7297B29FD225022206773E7FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_1 = ___0_toRelease;
		NullCheck(L_0);
		InvokerActionInvoker1< Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_0, L_1);
		return;
	}
}
// Method Definition Index: 43625
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryPool_2__cctor_mDA7E85399F499BFD3ECCDFA845F7A6F19627B6C4_gshared (const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@9a9c0155552c/Runtime/Common/ObjectPools.cs:240>
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@9a9c0155552c/Runtime/Common/ObjectPools.cs:241>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_t902A621328286C9036E2E6B6ED8B3FA0AAD9D1DD* L_0 = ((U3CU3Ec_t902A621328286C9036E2E6B6ED8B3FA0AAD9D1DD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB* L_1 = (UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		((  void (*) (UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)))(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4* L_2 = (ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		((  void (*) (ObjectPool_1_tE9FE2DEEE15F4EC19450E374F5F448CB0E0BD9B4*, UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB*, UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)))(L_2, (UnityAction_1_tCE595F295A706100EE7AF203C0E71CB92B8BF4EB*)NULL, L_1, (bool)1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		((DictionaryPool_2_t97724CC612D346D7297B29FD225022206773E7FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((DictionaryPool_2_t97724CC612D346D7297B29FD225022206773E7FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_2);
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
// Method Definition Index: 93796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DictionaryPropertyBag_2_get_InstantiationKind_m641573CD1323CD15A7F099323BA1B2546F063182_gshared (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(1);
	}
}
// Method Definition Index: 93797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* DictionaryPropertyBag_2_Instantiate_m7778199CDF045586687AB5A9F377D8FB3786C1E0_gshared (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		return L_0;
	}
}
// Method Definition Index: 93798
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryPropertyBag_2__ctor_m8FC636BBC54135160381FA25CF825CCC925E5E33_gshared (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10710
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m17BD234613812DE0DAC7913E2A96E92947AC5149_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m1C63FB06894D15B15547CF7029BE85DE0C1460D6(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// Method Definition Index: 10711
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m32BE301F2D879C8AD9ACA0A26EE7F3A22438C21B_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m1C63FB06894D15B15547CF7029BE85DE0C1460D6(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// Method Definition Index: 10712
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBD0510AD55023BE84FF47683B97C1024344DF83C_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m1C63FB06894D15B15547CF7029BE85DE0C1460D6(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// Method Definition Index: 10713
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1C63FB06894D15B15547CF7029BE85DE0C1460D6_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mEB41CDA358BAD634BDFCEF250C9A5B979F0E89EA(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* L_5;
		L_5 = EqualityComparer_1_get_Default_m88BF68F306BE3C19A1C91BC23EFF142E26C9B85A_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// Method Definition Index: 10714
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2D564A3AB657873CDF57CF2AEFE62A45063C16D2_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m8597D9D2227425280CCF1B76FC1CD89617EFF002(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
// Method Definition Index: 10715
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8597D9D2227425280CCF1B76FC1CD89617EFF002_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* G_B2_0 = NULL;
	Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m1C63FB06894D15B15547CF7029BE85DE0C1460D6(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* L_11 = ((Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_m967CE6C9C7408304B7C5AA6A317DACB90125C759(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_32;
				L_32 = KeyValuePair_2_get_Key_m7AA488818685C42D571C272B06AA080A4A94CE52_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_m34BF87EEF62B064087D91704FBD86D030C93FDF1_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_m967CE6C9C7408304B7C5AA6A317DACB90125C759(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// Method Definition Index: 10716
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mEB08D0DFA837BFCA499950386F5462ED4930EC67_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 10717
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m16CB87005622A0A8AFCA4950F14A27E96C3F24C2_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// Method Definition Index: 10718
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tBDE02C86CB927BE5F0AD48A994FBFCD41C94E41B* Dictionary_2_get_Keys_mF63012455307869F3D9ABC1430D1482CCB068586_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tBDE02C86CB927BE5F0AD48A994FBFCD41C94E41B* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tBDE02C86CB927BE5F0AD48A994FBFCD41C94E41B* L_1 = (KeyCollection_tBDE02C86CB927BE5F0AD48A994FBFCD41C94E41B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m8A37BEE0EBC802F95747414B29E4622D9CC81C32(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tBDE02C86CB927BE5F0AD48A994FBFCD41C94E41B* L_2 = __this->____keys;
		return L_2;
	}
}
// Method Definition Index: 10719
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mAA7D4F147596A90F0EBCCD7D83289DFD228C52AC_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tBDE02C86CB927BE5F0AD48A994FBFCD41C94E41B* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tBDE02C86CB927BE5F0AD48A994FBFCD41C94E41B* L_1 = (KeyCollection_tBDE02C86CB927BE5F0AD48A994FBFCD41C94E41B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m8A37BEE0EBC802F95747414B29E4622D9CC81C32(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tBDE02C86CB927BE5F0AD48A994FBFCD41C94E41B* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 10720
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t88DA5C0BF61D7BE6C9C73CB2824415E7B3A6E6A5* Dictionary_2_get_Values_m392D046A26D5C15190EC94D869D8DC877761AE9C_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t88DA5C0BF61D7BE6C9C73CB2824415E7B3A6E6A5* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t88DA5C0BF61D7BE6C9C73CB2824415E7B3A6E6A5* L_1 = (ValueCollection_t88DA5C0BF61D7BE6C9C73CB2824415E7B3A6E6A5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_m7CA6E23FAA18D8DA058FF3A0A38F80B8F49577C6(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t88DA5C0BF61D7BE6C9C73CB2824415E7B3A6E6A5* L_2 = __this->____values;
		return L_2;
	}
}
// Method Definition Index: 10721
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mFA2545ADA7B3D74B1EA13A99DF2ECE50DDDFC29F_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m2AA3F8E242DCA98EF2E0396858583EB5AE74B6A4(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_6 = ___0_key;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 10722
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m730E0B496C5F2ABD37BC67DBD1B44A4CB8838C8D_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mD9AA18205863DAD672D211A62E6E4444680A5E5B(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
// Method Definition Index: 10723
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m967CE6C9C7408304B7C5AA6A317DACB90125C759_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mD9AA18205863DAD672D211A62E6E4444680A5E5B(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
// Method Definition Index: 10724
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mA7251BF751FF885C1FD11AF1C4FB919DD167127C_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_0;
		L_0 = KeyValuePair_2_get_Key_m7AA488818685C42D571C272B06AA080A4A94CE52_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m34BF87EEF62B064087D91704FBD86D030C93FDF1_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m967CE6C9C7408304B7C5AA6A317DACB90125C759(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
// Method Definition Index: 10725
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m4E4CE52BF3BEEAFC9681D303DD0D16CEC8870611_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_0;
		L_0 = KeyValuePair_2_get_Key_m7AA488818685C42D571C272B06AA080A4A94CE52_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m2AA3F8E242DCA98EF2E0396858583EB5AE74B6A4(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m34BF87EEF62B064087D91704FBD86D030C93FDF1_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10726
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mC617B68A90BF7685BF89F6D91D3C36881D70FBB0_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_0;
		L_0 = KeyValuePair_2_get_Key_m7AA488818685C42D571C272B06AA080A4A94CE52_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m2AA3F8E242DCA98EF2E0396858583EB5AE74B6A4(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m34BF87EEF62B064087D91704FBD86D030C93FDF1_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_9;
		L_9 = KeyValuePair_2_get_Key_m7AA488818685C42D571C272B06AA080A4A94CE52_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m6C10EF6133F6C97C365004EC9BE98819F4D925DA(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10727
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mAED5A3BA8513E917B2463435B70B6ECD515862CF_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// Method Definition Index: 10728
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m480CEB342FEC44102C32DF24747C7302D9929DED_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m2AA3F8E242DCA98EF2E0396858583EB5AE74B6A4(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 10729
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m625195A8C5778A4F7B760AE60F6AF03F5DDD5BCC_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10730
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mE695D6450E168F387CC9C57F55837038398BDBCF_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m16CB87005622A0A8AFCA4950F14A27E96C3F24C2(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m634AA9A45ACF99CC9BF9149FB3300189769D3A7E((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 10731
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC96082965BF7CE6E965D8A62AD147F5136330601 Dictionary_2_GetEnumerator_mBC35060B421AE707149CBDFD6722ECFD09B11FA4_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC96082965BF7CE6E965D8A62AD147F5136330601 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0801ADFA3085DD98E30831190B3122F7D373DC4A((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return L_0;
	}
}
// Method Definition Index: 10732
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m835E0FCFFE3470716622EB433087E345D5BE915C_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC96082965BF7CE6E965D8A62AD147F5136330601 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0801ADFA3085DD98E30831190B3122F7D373DC4A((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_tC96082965BF7CE6E965D8A62AD147F5136330601 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 10733
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m8423327C4944D99F05EF73541A7CC54E35B44D79_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* L_6;
		L_6 = EqualityComparer_1_get_Default_m88BF68F306BE3C19A1C91BC23EFF142E26C9B85A_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m16CB87005622A0A8AFCA4950F14A27E96C3F24C2(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED* L_14 = (KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED*)(KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 43), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED* L_15 = V_0;
		Dictionary_2_CopyTo_mE695D6450E168F387CC9C57F55837038398BDBCF(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// Method Definition Index: 10734
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m2AA3F8E242DCA98EF2E0396858583EB5AE74B6A4_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = ValueTuple_2_GetHashCode_m9D4E10761077AC6288F37B5F730ED598FF1A4361((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* L_19;
		L_19 = EqualityComparer_1_get_Default_m88BF68F306BE3C19A1C91BC23EFF142E26C9B85A_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
// Method Definition Index: 10735
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mEB41CDA358BAD634BDFCEF250C9A5B979F0E89EA_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_5 = (EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725*)(EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 10736
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mD9AA18205863DAD672D211A62E6E4444680A5E5B_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB* V_10 = NULL;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mEB41CDA358BAD634BDFCEF250C9A5B979F0E89EA(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = ValueTuple_2_GetHashCode_m9D4E10761077AC6288F37B5F730ED598FF1A4361((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* L_24;
		L_24 = EqualityComparer_1_get_Default_m88BF68F306BE3C19A1C91BC23EFF142E26C9B85A_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_35 = ___0_key;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		RuntimeObject* L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_61 = ___0_key;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mD2C56C1A0AF99BA060A133BFAFCB651E96EA768B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB* L_94 = V_10;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB* L_96 = V_10;
		RuntimeObject* L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
// Method Definition Index: 10737
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mE540FD2144F22F512988D85332DC594E959E3E31_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mEB41CDA358BAD634BDFCEF250C9A5B979F0E89EA(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_21;
		L_21 = KeyValuePair_2_get_Key_m7AA488818685C42D571C272B06AA080A4A94CE52_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_24;
		L_24 = KeyValuePair_2_get_Key_m7AA488818685C42D571C272B06AA080A4A94CE52_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m34BF87EEF62B064087D91704FBD86D030C93FDF1_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m967CE6C9C7408304B7C5AA6A317DACB90125C759(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 10738
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD2C56C1A0AF99BA060A133BFAFCB651E96EA768B_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m028ADA52ECE2DB82AF684988FACE4F54B3E9AB14(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return;
	}
}
// Method Definition Index: 10739
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m028ADA52ECE2DB82AF684988FACE4F54B3E9AB14_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* V_1 = NULL;
	int32_t V_2 = 0;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_3 = (EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725*)(EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_5 = __this->____entries;
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D));
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* L_17 = (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = ValueTuple_2_GetHashCode_m9D4E10761077AC6288F37B5F730ED598FF1A4361(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
// Method Definition Index: 10740
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m6C10EF6133F6C97C365004EC9BE98819F4D925DA_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_m9D4E10761077AC6288F37B5F730ED598FF1A4361((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* L_20;
		L_20 = EqualityComparer_1_get_Default_m88BF68F306BE3C19A1C91BC23EFF142E26C9B85A_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB* L_21 = V_4;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_22 = L_21->___key;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB* L_25 = V_4;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_26 = L_25->___key;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___value);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10741
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mFEC9E0E86C074A9132B4B3E47B89AA0A201926AD_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_m9D4E10761077AC6288F37B5F730ED598FF1A4361((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* L_20;
		L_20 = EqualityComparer_1_get_Default_m88BF68F306BE3C19A1C91BC23EFF142E26C9B85A_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB* L_21 = V_4;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_22 = L_21->___key;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB* L_25 = V_4;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_26 = L_25->___key;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		RuntimeObject** L_38 = ___1_value;
		Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB* L_39 = V_4;
		RuntimeObject* L_40 = L_39->___value;
		*(RuntimeObject**)L_38 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_38, (void*)L_40);
		Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB* L_41 = V_4;
		L_41->___hashCode = (-1);
		Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB* L_42 = V_4;
		int32_t L_43 = __this->____freeList;
		L_42->___next = L_43;
		goto IL_010c;
	}

IL_010c:
	{
	}
	{
		Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB* L_44 = V_4;
		RuntimeObject** L_45 = (RuntimeObject**)(&L_44->___value);
		il2cpp_codegen_initobj(L_45, sizeof(RuntimeObject*));
	}

IL_0120:
	{
		int32_t L_46 = V_3;
		__this->____freeList = L_46;
		int32_t L_47 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_47, 1));
		int32_t L_48 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_48, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_49 = V_3;
		V_2 = L_49;
		Entry_tD455682E9CE55F800F56AB1E6CD209E558A9ACCB* L_50 = V_4;
		int32_t L_51 = L_50->___next;
		V_3 = L_51;
	}

IL_014f:
	{
		int32_t L_52 = V_3;
		if ((((int32_t)L_52) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		RuntimeObject** L_53 = ___1_value;
		il2cpp_codegen_initobj(L_53, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// Method Definition Index: 10742
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m4B52F9378070E7539201BBA60321858AC11FE6EC_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m2AA3F8E242DCA98EF2E0396858583EB5AE74B6A4(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// Method Definition Index: 10743
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m1D3D9F608BD4C308D989714AA3A465DD3D631DC5_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mD9AA18205863DAD672D211A62E6E4444680A5E5B(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_2;
	}
}
// Method Definition Index: 10744
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m7D2C2C6B162CE7C50CE2423BF660EA8E5A85D037_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// Method Definition Index: 10745
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m37462F84EE30B61167541D636D3B23748B3AB16B_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mE695D6450E168F387CC9C57F55837038398BDBCF(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
// Method Definition Index: 10746
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m57FE6BA62D4833AF8041683F1C83589C640C0A62_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m16CB87005622A0A8AFCA4950F14A27E96C3F24C2(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t9932F5E2A40F0F29F5FFB742E5167AB4BADE1BED* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mE695D6450E168F387CC9C57F55837038398BDBCF(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m634AA9A45ACF99CC9BF9149FB3300189769D3A7E((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
			KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
// Method Definition Index: 10747
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m30700E27A4C3BA39D11CC7D561BF3555115C1BEA_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC96082965BF7CE6E965D8A62AD147F5136330601 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0801ADFA3085DD98E30831190B3122F7D373DC4A((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_tC96082965BF7CE6E965D8A62AD147F5136330601 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 10748
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_mB1411756F917DB32868848F990A1CED750C0001E_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_2 = __this->____entries;
		NullCheck(L_2);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_capacity;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = ___0_capacity;
		int32_t L_8;
		L_8 = Dictionary_2_Initialize_mEB41CDA358BAD634BDFCEF250C9A5B979F0E89EA(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_8;
	}

IL_0035:
	{
		int32_t L_9 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_9, NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		Dictionary_2_Resize_m028ADA52ECE2DB82AF684988FACE4F54B3E9AB14(__this, L_11, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		int32_t L_12 = V_1;
		return L_12;
	}
}
// Method Definition Index: 10749
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m986BA433070CDEEDEDF715143A99029D0E69551F_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// Method Definition Index: 10750
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m685E6FD58594CFBF49EEE1CAD98D09D621328AF2_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
// Method Definition Index: 10751
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mF97C93F210AFCC37327A6AE249D9AE9F4DEE13B5_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mCEF7E07C2E50E97AD5A4C6C8461A8F2A605B83A0(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m2AA3F8E242DCA98EF2E0396858583EB5AE74B6A4(__this, ((*(ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t2FD8DB995F20BC863821A948EC5FBE24FA515725* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
// Method Definition Index: 10752
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m030981BF7D1FE1C58731A927F75A4DEABC839875_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))));
		}
		try
		{
			ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m730E0B496C5F2ABD37BC67DBD1B44A4CB8838C8D(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 60));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
			il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 62)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 10753
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mCEF7E07C2E50E97AD5A4C6C8461A8F2A605B83A0_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 10754
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9864E45102ED7A9F85F329DF95AE9220B13FA535_gshared (Dictionary_2_t5887FE20B6476939FAE41CAF24B3AD7856A40432* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC96082965BF7CE6E965D8A62AD147F5136330601 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0801ADFA3085DD98E30831190B3122F7D373DC4A((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_tC96082965BF7CE6E965D8A62AD147F5136330601 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
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
// Method Definition Index: 10710
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m75809138E4D52C0E4A1B8B9EA5404FF308F0C27E_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mAFA6F8A9E9C78527392AD791F77B96531FA53D2C(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// Method Definition Index: 10711
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m55D8FCE1B4739AD8C93BA4E9FB5610B47680C2FD_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mAFA6F8A9E9C78527392AD791F77B96531FA53D2C(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// Method Definition Index: 10712
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB08EF216DB2177FCE3DC68559DA93DDDA9517E9F_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mAFA6F8A9E9C78527392AD791F77B96531FA53D2C(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// Method Definition Index: 10713
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAFA6F8A9E9C78527392AD791F77B96531FA53D2C_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mCFE85DE62B322280478F36364C3DA7B344D6495A(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* L_5;
		L_5 = EqualityComparer_1_get_Default_m498FCACFE5907C8C933172C063DE2B2E92337C75_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// Method Definition Index: 10714
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m34FD3239BC1E4C0E34517C93A5B0C61AFD6CE5F2_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m3EE8F30003C4ED1D46ED86E6C691B3441FB934B0(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
// Method Definition Index: 10715
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3EE8F30003C4ED1D46ED86E6C691B3441FB934B0_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* G_B2_0 = NULL;
	Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mAFA6F8A9E9C78527392AD791F77B96531FA53D2C(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* L_11 = ((Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_mF3A4F88B6F47A5DD325BA8CE35A20D72C6C53DB7(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_32;
				L_32 = KeyValuePair_2_get_Key_m7A1E1F02D02A1410C8C44388F12D3AE99F8F54EA_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_m9DE90B4E3E3E77B8FE9AB8135016F683EA8F7245_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_mF3A4F88B6F47A5DD325BA8CE35A20D72C6C53DB7(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// Method Definition Index: 10716
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAE99D9F6F447BF0B46D71C388E3D754E3EE480E3_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 10717
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mFFEB2041DE3A23C12F428C0A3C60676D97D54F95_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// Method Definition Index: 10718
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t7E7196E6A4A5AFC08256519394C16724F4BBD5A9* Dictionary_2_get_Keys_mF130A58748CD2A227AF3EAEEBE1AD692197604DE_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t7E7196E6A4A5AFC08256519394C16724F4BBD5A9* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t7E7196E6A4A5AFC08256519394C16724F4BBD5A9* L_1 = (KeyCollection_t7E7196E6A4A5AFC08256519394C16724F4BBD5A9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m419CD793E6DE2E5B79D9F1D73884DB139901441D(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t7E7196E6A4A5AFC08256519394C16724F4BBD5A9* L_2 = __this->____keys;
		return L_2;
	}
}
// Method Definition Index: 10719
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mDB6DAAF480511CA35336FFB64889260A7EFC44BA_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t7E7196E6A4A5AFC08256519394C16724F4BBD5A9* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t7E7196E6A4A5AFC08256519394C16724F4BBD5A9* L_1 = (KeyCollection_t7E7196E6A4A5AFC08256519394C16724F4BBD5A9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m419CD793E6DE2E5B79D9F1D73884DB139901441D(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t7E7196E6A4A5AFC08256519394C16724F4BBD5A9* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 10720
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t4672341F0C4C6F948F1710882A1490638DF13B57* Dictionary_2_get_Values_m1742E1CEFCF6D4AE95A77C8128FFABCFA80C2F88_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t4672341F0C4C6F948F1710882A1490638DF13B57* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t4672341F0C4C6F948F1710882A1490638DF13B57* L_1 = (ValueCollection_t4672341F0C4C6F948F1710882A1490638DF13B57*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_mBB8818B37A546079F6FBC1122974F235266A1992(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t4672341F0C4C6F948F1710882A1490638DF13B57* L_2 = __this->____values;
		return L_2;
	}
}
// Method Definition Index: 10721
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m3EE37D6D2B86A74F3953271C177D35B984220694_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m375C9D05F7DE488AB4FDDDC17B88E838AB25DA6B(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_6 = ___0_key;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 10722
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mFE7382FE1EBCE28398803134394B206903FF6FB4_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m91C3A3261465EA4841303EB9EFACD314F58ABACA(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
// Method Definition Index: 10723
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mF3A4F88B6F47A5DD325BA8CE35A20D72C6C53DB7_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m91C3A3261465EA4841303EB9EFACD314F58ABACA(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
// Method Definition Index: 10724
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m67E6949DD786715DDF330F9C6484FD6A21C406B2_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_0;
		L_0 = KeyValuePair_2_get_Key_m7A1E1F02D02A1410C8C44388F12D3AE99F8F54EA_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m9DE90B4E3E3E77B8FE9AB8135016F683EA8F7245_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mF3A4F88B6F47A5DD325BA8CE35A20D72C6C53DB7(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
// Method Definition Index: 10725
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mC960D05816FEB4A83F809724EDBDB4BA3B405AB2_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_0;
		L_0 = KeyValuePair_2_get_Key_m7A1E1F02D02A1410C8C44388F12D3AE99F8F54EA_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m375C9D05F7DE488AB4FDDDC17B88E838AB25DA6B(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m9DE90B4E3E3E77B8FE9AB8135016F683EA8F7245_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10726
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m787EB3915A1D4F420F94429F4C594C806A67C732_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_0;
		L_0 = KeyValuePair_2_get_Key_m7A1E1F02D02A1410C8C44388F12D3AE99F8F54EA_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m375C9D05F7DE488AB4FDDDC17B88E838AB25DA6B(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m9DE90B4E3E3E77B8FE9AB8135016F683EA8F7245_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_9;
		L_9 = KeyValuePair_2_get_Key_m7A1E1F02D02A1410C8C44388F12D3AE99F8F54EA_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_mFFB57AB1433517E4B327B2033BBE052B9DEC3DB1(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10727
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m1E0F2028F592E752C589985EFC1D7C6B8F2E8144_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// Method Definition Index: 10728
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m6F12796227E5A94B715611FA12C9C2F7F0F642E1_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___0_key, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m375C9D05F7DE488AB4FDDDC17B88E838AB25DA6B(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 10729
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m063AF569848E13947DAEA33256A7FD4CBC885B8E_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10730
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mB8BC533E1136B890605968B9F1515C594D6581B6_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mFFEB2041DE3A23C12F428C0A3C60676D97D54F95(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mC3CBE203AC422E430989220E3353F0DC4DD87E2C((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 10731
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t61F243054F6EB45C0FCD96307049DB3BCBDDC2E2 Dictionary_2_GetEnumerator_m97FB9028BA9CA68359EF38C7492C277B4946C902_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t61F243054F6EB45C0FCD96307049DB3BCBDDC2E2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m99EA64FAA44C860E7FC1D3C261A379693860773D((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return L_0;
	}
}
// Method Definition Index: 10732
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45483839FAA6B6373B1C112ABBC1703AEFB2A449_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t61F243054F6EB45C0FCD96307049DB3BCBDDC2E2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m99EA64FAA44C860E7FC1D3C261A379693860773D((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t61F243054F6EB45C0FCD96307049DB3BCBDDC2E2 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 10733
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m4636E51A522A2D567ECE874B7C2CDCC7DEE5B5B0_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* L_6;
		L_6 = EqualityComparer_1_get_Default_m498FCACFE5907C8C933172C063DE2B2E92337C75_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mFFEB2041DE3A23C12F428C0A3C60676D97D54F95(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2* L_14 = (KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2*)(KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 43), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2* L_15 = V_0;
		Dictionary_2_CopyTo_mB8BC533E1136B890605968B9F1515C594D6581B6(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// Method Definition Index: 10734
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m375C9D05F7DE488AB4FDDDC17B88E838AB25DA6B_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = ValueTuple_2_GetHashCode_m0E3CC862486E5A11C86EA662EE9217A9F1D3ED54((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* L_19;
		L_19 = EqualityComparer_1_get_Default_m498FCACFE5907C8C933172C063DE2B2E92337C75_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
// Method Definition Index: 10735
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mCFE85DE62B322280478F36364C3DA7B344D6495A_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_5 = (EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6*)(EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 10736
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m91C3A3261465EA4841303EB9EFACD314F58ABACA_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1* V_10 = NULL;
	ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mCFE85DE62B322280478F36364C3DA7B344D6495A(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = ValueTuple_2_GetHashCode_m0E3CC862486E5A11C86EA662EE9217A9F1D3ED54((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* L_24;
		L_24 = EqualityComparer_1_get_Default_m498FCACFE5907C8C933172C063DE2B2E92337C75_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_35 = ___0_key;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		RuntimeObject* L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_61 = ___0_key;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m0103F0F8CB0CB6178D35C272AE4D976BB776B2DB(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1* L_94 = V_10;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1* L_96 = V_10;
		RuntimeObject* L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
// Method Definition Index: 10737
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mB59A0C34C1A9B8E06F6EEF961052F0059BB8E4EC_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mCFE85DE62B322280478F36364C3DA7B344D6495A(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_21;
		L_21 = KeyValuePair_2_get_Key_m7A1E1F02D02A1410C8C44388F12D3AE99F8F54EA_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_24;
		L_24 = KeyValuePair_2_get_Key_m7A1E1F02D02A1410C8C44388F12D3AE99F8F54EA_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m9DE90B4E3E3E77B8FE9AB8135016F683EA8F7245_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mF3A4F88B6F47A5DD325BA8CE35A20D72C6C53DB7(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 10738
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m0103F0F8CB0CB6178D35C272AE4D976BB776B2DB_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m5DE9E82F29C0A4BC42CFAD134EA3ADF625663D13(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return;
	}
}
// Method Definition Index: 10739
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5DE9E82F29C0A4BC42CFAD134EA3ADF625663D13_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* V_1 = NULL;
	int32_t V_2 = 0;
	ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_3 = (EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6*)(EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_5 = __this->____entries;
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119));
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119* L_17 = (ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = ValueTuple_2_GetHashCode_m0E3CC862486E5A11C86EA662EE9217A9F1D3ED54(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
// Method Definition Index: 10740
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mFFB57AB1433517E4B327B2033BBE052B9DEC3DB1_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_m0E3CC862486E5A11C86EA662EE9217A9F1D3ED54((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* L_20;
		L_20 = EqualityComparer_1_get_Default_m498FCACFE5907C8C933172C063DE2B2E92337C75_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1* L_21 = V_4;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_22 = L_21->___key;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1* L_25 = V_4;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_26 = L_25->___key;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___value);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10741
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m1BFECA332575906818DA6C5828FAFD47E4467AEF_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_m0E3CC862486E5A11C86EA662EE9217A9F1D3ED54((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* L_20;
		L_20 = EqualityComparer_1_get_Default_m498FCACFE5907C8C933172C063DE2B2E92337C75_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1* L_21 = V_4;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_22 = L_21->___key;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1* L_25 = V_4;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_26 = L_25->___key;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		RuntimeObject** L_38 = ___1_value;
		Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1* L_39 = V_4;
		RuntimeObject* L_40 = L_39->___value;
		*(RuntimeObject**)L_38 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_38, (void*)L_40);
		Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1* L_41 = V_4;
		L_41->___hashCode = (-1);
		Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1* L_42 = V_4;
		int32_t L_43 = __this->____freeList;
		L_42->___next = L_43;
		goto IL_010c;
	}

IL_010c:
	{
	}
	{
		Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1* L_44 = V_4;
		RuntimeObject** L_45 = (RuntimeObject**)(&L_44->___value);
		il2cpp_codegen_initobj(L_45, sizeof(RuntimeObject*));
	}

IL_0120:
	{
		int32_t L_46 = V_3;
		__this->____freeList = L_46;
		int32_t L_47 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_47, 1));
		int32_t L_48 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_48, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_49 = V_3;
		V_2 = L_49;
		Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1* L_50 = V_4;
		int32_t L_51 = L_50->___next;
		V_3 = L_51;
	}

IL_014f:
	{
		int32_t L_52 = V_3;
		if ((((int32_t)L_52) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		RuntimeObject** L_53 = ___1_value;
		il2cpp_codegen_initobj(L_53, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// Method Definition Index: 10742
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m85CFAFF188D948BA1B2697CDEFD8DA0B95041F5E_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m375C9D05F7DE488AB4FDDDC17B88E838AB25DA6B(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// Method Definition Index: 10743
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m9240B96FBDF5948CD2A03D94346C24B1FF1B72EC_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m91C3A3261465EA4841303EB9EFACD314F58ABACA(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_2;
	}
}
// Method Definition Index: 10744
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m7B2FD15042B5F39EA01AE086DF3524A79A436D46_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// Method Definition Index: 10745
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m95616A8E1410EF9FF98BA00246BEFEC9E4415BFF_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mB8BC533E1136B890605968B9F1515C594D6581B6(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
// Method Definition Index: 10746
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m65C6DC2CA0773DB0821558BECDACA19E7162B18C_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mFFEB2041DE3A23C12F428C0A3C60676D97D54F95(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tD580BE52E994B71C1391B389039A1AA4A879C3A2* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mB8BC533E1136B890605968B9F1515C594D6581B6(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mC3CBE203AC422E430989220E3353F0DC4DD87E2C((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
			KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
// Method Definition Index: 10747
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m0C47001D43EFCAB54D69365A5F3CD9579C3C56E5_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t61F243054F6EB45C0FCD96307049DB3BCBDDC2E2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m99EA64FAA44C860E7FC1D3C261A379693860773D((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t61F243054F6EB45C0FCD96307049DB3BCBDDC2E2 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 10748
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m6F93A2161459A986FA859A60A571603B5283D85F_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_2 = __this->____entries;
		NullCheck(L_2);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_capacity;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = ___0_capacity;
		int32_t L_8;
		L_8 = Dictionary_2_Initialize_mCFE85DE62B322280478F36364C3DA7B344D6495A(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_8;
	}

IL_0035:
	{
		int32_t L_9 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_9, NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		Dictionary_2_Resize_m5DE9E82F29C0A4BC42CFAD134EA3ADF625663D13(__this, L_11, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		int32_t L_12 = V_1;
		return L_12;
	}
}
// Method Definition Index: 10749
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m5A07D8AC99DCF5FAD2B76935DCC71DB6D5E3C68B_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// Method Definition Index: 10750
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mEF6CDA3BD6107910D44954AD30C67D6D2E5F8704_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
// Method Definition Index: 10751
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m080700860297438B4AECFC257B63B80D4782F1F9_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m24EA68FA7D4EB14A072B804C5145722796B74A5E(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m375C9D05F7DE488AB4FDDDC17B88E838AB25DA6B(__this, ((*(ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tB8F65034E0117E0C624DB4152612A8FD30A0A4C6* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
// Method Definition Index: 10752
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m5B067C9062C0D4C45AA717E2CBD6B9147F85F157_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))));
		}
		try
		{
			ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mFE7382FE1EBCE28398803134394B206903FF6FB4(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 60));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
			il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 62)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 10753
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m24EA68FA7D4EB14A072B804C5145722796B74A5E_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 10754
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mC492CE34CA03980D24EDAD2EF3BC0350D75D5B32_gshared (Dictionary_2_t1032E1650E28EB165B6746710F283881AE1D175A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t61F243054F6EB45C0FCD96307049DB3BCBDDC2E2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m99EA64FAA44C860E7FC1D3C261A379693860773D((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t61F243054F6EB45C0FCD96307049DB3BCBDDC2E2 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
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
// Method Definition Index: 10710
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCD6B31F5B3530186D8E934AFF80D9CBE845A5B69_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m790A94FEDBA59298850A853DB853EABBBB3C109A(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// Method Definition Index: 10711
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA383B1AB0AB2AF250446879D6CB9999B48B1970F_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m790A94FEDBA59298850A853DB853EABBBB3C109A(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// Method Definition Index: 10712
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8950A28C8717073F0609029AF6AD32D5AD6415B7_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m790A94FEDBA59298850A853DB853EABBBB3C109A(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// Method Definition Index: 10713
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m790A94FEDBA59298850A853DB853EABBBB3C109A_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m23D64FF7893AA34F8D360AD7198C5572A626DFAA(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* L_5;
		L_5 = EqualityComparer_1_get_Default_mAFB5B2D452EC18AD23D703AD4D62747981D07BBD_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// Method Definition Index: 10714
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m66AC303D073D85C97B7F908D42D9055FF83FB25B_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m4B8B43A29F37C828AC628B828E71DA451A41257C(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
// Method Definition Index: 10715
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4B8B43A29F37C828AC628B828E71DA451A41257C_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* G_B2_0 = NULL;
	Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m790A94FEDBA59298850A853DB853EABBBB3C109A(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* L_11 = ((Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_m8A1AC9112B4AD9C869607D9C99BCFB7721EFABCB(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_32;
				L_32 = KeyValuePair_2_get_Key_m584FB46DED2BD72F121617E86B3A3B44C36EF655_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_33;
				L_33 = KeyValuePair_2_get_Value_mDC37BD68F776E2567B63FFC79622D4E2E1370191_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_m8A1AC9112B4AD9C869607D9C99BCFB7721EFABCB(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// Method Definition Index: 10716
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8C808E852E1B0AF0459850A00A4A1E0B6EFA6D43_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 10717
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mDF627516C52BCA15EC73D69F46F52EAFFFF96477_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// Method Definition Index: 10718
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tE9ABD5491C3D5C24C16FC448528C4591E251D510* Dictionary_2_get_Keys_m6892B840DB054FDB84D56B64F11C665F25EDE91F_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tE9ABD5491C3D5C24C16FC448528C4591E251D510* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tE9ABD5491C3D5C24C16FC448528C4591E251D510* L_1 = (KeyCollection_tE9ABD5491C3D5C24C16FC448528C4591E251D510*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m9EB9EAF293C25B19D013B8D20953FC0EE6F4D1E9(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tE9ABD5491C3D5C24C16FC448528C4591E251D510* L_2 = __this->____keys;
		return L_2;
	}
}
// Method Definition Index: 10719
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m0A5BA3330623CD2C807CD48467BD646397BD5C87_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tE9ABD5491C3D5C24C16FC448528C4591E251D510* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tE9ABD5491C3D5C24C16FC448528C4591E251D510* L_1 = (KeyCollection_tE9ABD5491C3D5C24C16FC448528C4591E251D510*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m9EB9EAF293C25B19D013B8D20953FC0EE6F4D1E9(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tE9ABD5491C3D5C24C16FC448528C4591E251D510* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 10720
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t12673C4B427EECCBDDDC7DE4131D59D6B014845A* Dictionary_2_get_Values_m7D06C76F0586895C50345F97D546BE08BD8793C1_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t12673C4B427EECCBDDDC7DE4131D59D6B014845A* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t12673C4B427EECCBDDDC7DE4131D59D6B014845A* L_1 = (ValueCollection_t12673C4B427EECCBDDDC7DE4131D59D6B014845A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_m2E207A3EE3295538D81E11F03E01989AAD959A39(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t12673C4B427EECCBDDDC7DE4131D59D6B014845A* L_2 = __this->____values;
		return L_2;
	}
}
// Method Definition Index: 10721
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 Dictionary_2_get_Item_m7A203223AB111056EFE126D4FAD7B549FC19E174_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m8EFF178525517781C69B333CABC2FC4985AE3059(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_6 = ___0_key;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8));
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 10722
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m88B6E3FDD04EEC0A70475E014FDE5E789AA0B311_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_0 = ___0_key;
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m47E10493832E752B0DBE984480281058507A6622(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
// Method Definition Index: 10723
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m8A1AC9112B4AD9C869607D9C99BCFB7721EFABCB_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_0 = ___0_key;
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m47E10493832E752B0DBE984480281058507A6622(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
// Method Definition Index: 10724
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mAF8A90913A6D7FAE06C5C5CD6A02E57D0687641D_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_0;
		L_0 = KeyValuePair_2_get_Key_m584FB46DED2BD72F121617E86B3A3B44C36EF655_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_1;
		L_1 = KeyValuePair_2_get_Value_mDC37BD68F776E2567B63FFC79622D4E2E1370191_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m8A1AC9112B4AD9C869607D9C99BCFB7721EFABCB(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
// Method Definition Index: 10725
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2111CC51CB335F26A8E8271CD2BD28AAA1E023DE_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_0;
		L_0 = KeyValuePair_2_get_Key_m584FB46DED2BD72F121617E86B3A3B44C36EF655_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m8EFF178525517781C69B333CABC2FC4985AE3059(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* L_3;
		L_3 = EqualityComparer_1_get_Default_m969C3F84F0E9B115126FA2458426DBFFF23DBC31_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_7;
		L_7 = KeyValuePair_2_get_Value_mDC37BD68F776E2567B63FFC79622D4E2E1370191_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10726
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m779579499DBFA1ED1D3C6C2190CEE607A02C0E8B_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_0;
		L_0 = KeyValuePair_2_get_Key_m584FB46DED2BD72F121617E86B3A3B44C36EF655_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m8EFF178525517781C69B333CABC2FC4985AE3059(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* L_3;
		L_3 = EqualityComparer_1_get_Default_m969C3F84F0E9B115126FA2458426DBFFF23DBC31_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_7;
		L_7 = KeyValuePair_2_get_Value_mDC37BD68F776E2567B63FFC79622D4E2E1370191_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_9;
		L_9 = KeyValuePair_2_get_Key_m584FB46DED2BD72F121617E86B3A3B44C36EF655_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m2F068E9587C451B4EF5A91596CBEE4FF413B1E02(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10727
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m666FF1131A4EE1BE844E3568A67144431FC82389_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// Method Definition Index: 10728
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m6EED97C7CFEA5AC5ADCD0387ECB28BFBEE2CBB05_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m8EFF178525517781C69B333CABC2FC4985AE3059(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 10729
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m48C03EF5B9EAE214508BFD11B0A41BA403D4AF9E_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* V_0 = NULL;
	int32_t V_1 = 0;
	EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* L_6;
		L_6 = EqualityComparer_1_get_Default_m969C3F84F0E9B115126FA2458426DBFFF23DBC31_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10730
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mA4CCABA94814AA3B6ABE21E6A173200A93B75066_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mDF627516C52BCA15EC73D69F46F52EAFFFF96477(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mF23DF720149D9D13A547F08E017D056CD5465AFF((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 10731
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4CF721A1BA2DC9E20AD58DFB10A094DA874F2424 Dictionary_2_GetEnumerator_m829D47E04BF02E0377F6AAB9AB8639A9591D2AAF_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4CF721A1BA2DC9E20AD58DFB10A094DA874F2424 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0030D0B8AB9E107228FCD8C1859FA4EC37E2ABA0((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return L_0;
	}
}
// Method Definition Index: 10732
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mF12C2719F8351F242E5E9DF1E1C676AAF041564F_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4CF721A1BA2DC9E20AD58DFB10A094DA874F2424 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0030D0B8AB9E107228FCD8C1859FA4EC37E2ABA0((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t4CF721A1BA2DC9E20AD58DFB10A094DA874F2424 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 10733
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mC0EC0EA0B2C931C4DD97CEB77AFEA047AD4D9876_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* L_6;
		L_6 = EqualityComparer_1_get_Default_mAFB5B2D452EC18AD23D703AD4D62747981D07BBD_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mDF627516C52BCA15EC73D69F46F52EAFFFF96477(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_14 = (KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8*)(KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 43), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_15 = V_0;
		Dictionary_2_CopyTo_mA4CCABA94814AA3B6ABE21E6A173200A93B75066(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// Method Definition Index: 10734
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m8EFF178525517781C69B333CABC2FC4985AE3059_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = ValueTuple_2_GetHashCode_m460EFE4CF658838C31DB4D6985FE82C682503238((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* L_19;
		L_19 = EqualityComparer_1_get_Default_mAFB5B2D452EC18AD23D703AD4D62747981D07BBD_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
// Method Definition Index: 10735
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m23D64FF7893AA34F8D360AD7198C5572A626DFAA_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_5 = (EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5*)(EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 10736
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m47E10493832E752B0DBE984480281058507A6622_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t087349F3AE170AB56B4363B52E225A982E89F930* V_10 = NULL;
	ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m23D64FF7893AA34F8D360AD7198C5572A626DFAA(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = ValueTuple_2_GetHashCode_m460EFE4CF658838C31DB4D6985FE82C682503238((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* L_24;
		L_24 = EqualityComparer_1_get_Default_mAFB5B2D452EC18AD23D703AD4D62747981D07BBD_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value))->___values), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value))->___flagValues), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value))->___displayNames), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value))->___names), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value))->___tooltip), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value))->___underlyingType), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_35 = ___0_key;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value))->___values), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value))->___flagValues), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value))->___displayNames), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value))->___names), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value))->___tooltip), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value))->___underlyingType), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_61 = ___0_key;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m2FB7681B01D79E97179A80F9B3587C7E41558D22(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_94 = V_10;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_95 = ___0_key;
		L_94->___key = L_95;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key))->___Item2), (void*)NULL);
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_96 = V_10;
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->___values), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->___flagValues), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->___displayNames), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->___names), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->___tooltip), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->___underlyingType), (void*)NULL);
		#endif
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
// Method Definition Index: 10737
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m52B40F1EE8A13220875F4F8D70C536A30384EC71_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m23D64FF7893AA34F8D360AD7198C5572A626DFAA(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_21;
		L_21 = KeyValuePair_2_get_Key_m584FB46DED2BD72F121617E86B3A3B44C36EF655_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_24;
		L_24 = KeyValuePair_2_get_Key_m584FB46DED2BD72F121617E86B3A3B44C36EF655_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_27;
		L_27 = KeyValuePair_2_get_Value_mDC37BD68F776E2567B63FFC79622D4E2E1370191_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m8A1AC9112B4AD9C869607D9C99BCFB7721EFABCB(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 10738
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2FB7681B01D79E97179A80F9B3587C7E41558D22_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m23A4B1183AFD9B68BCE14FD61B289CFC5CB81F18(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return;
	}
}
// Method Definition Index: 10739
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m23A4B1183AFD9B68BCE14FD61B289CFC5CB81F18_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* V_1 = NULL;
	int32_t V_2 = 0;
	ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_3 = (EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5*)(EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_5 = __this->____entries;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9));
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9* L_17 = (ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = ValueTuple_2_GetHashCode_m460EFE4CF658838C31DB4D6985FE82C682503238(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
// Method Definition Index: 10740
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2F068E9587C451B4EF5A91596CBEE4FF413B1E02_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t087349F3AE170AB56B4363B52E225A982E89F930* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_m460EFE4CF658838C31DB4D6985FE82C682503238((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* L_20;
		L_20 = EqualityComparer_1_get_Default_mAFB5B2D452EC18AD23D703AD4D62747981D07BBD_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_21 = V_4;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_22 = L_21->___key;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_25 = V_4;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_26 = L_25->___key;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
	}
	{
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_41 = V_4;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9* L_42 = (ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9*)(&L_41->___key);
		il2cpp_codegen_initobj(L_42, sizeof(ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9));
	}

IL_00ff:
	{
	}
	{
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_43 = V_4;
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8* L_44 = (EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)(&L_43->___value);
		il2cpp_codegen_initobj(L_44, sizeof(EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList = L_45;
		int32_t L_46 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_49 = V_4;
		int32_t L_50 = L_49->___next;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10741
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mD598BDD6296B34FFFF1DDC20FB2FE7780F6783B2_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t087349F3AE170AB56B4363B52E225A982E89F930* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_m460EFE4CF658838C31DB4D6985FE82C682503238((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* L_20;
		L_20 = EqualityComparer_1_get_Default_mAFB5B2D452EC18AD23D703AD4D62747981D07BBD_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_21 = V_4;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_22 = L_21->___key;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_25 = V_4;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_26 = L_25->___key;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8* L_38 = ___1_value;
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_39 = V_4;
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_40 = L_39->___value;
		*(EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)L_38 = L_40;
		Il2CppCodeGenWriteBarrier((void**)&(((EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)L_38)->___values), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)L_38)->___flagValues), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)L_38)->___displayNames), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)L_38)->___names), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)L_38)->___tooltip), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)L_38)->___underlyingType), (void*)NULL);
		#endif
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_41 = V_4;
		L_41->___hashCode = (-1);
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_42 = V_4;
		int32_t L_43 = __this->____freeList;
		L_42->___next = L_43;
	}
	{
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_44 = V_4;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9* L_45 = (ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9*)(&L_44->___key);
		il2cpp_codegen_initobj(L_45, sizeof(ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9));
	}

IL_010c:
	{
	}
	{
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_46 = V_4;
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8* L_47 = (EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)(&L_46->___value);
		il2cpp_codegen_initobj(L_47, sizeof(EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8));
	}

IL_0120:
	{
		int32_t L_48 = V_3;
		__this->____freeList = L_48;
		int32_t L_49 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_49, 1));
		int32_t L_50 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_50, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_51 = V_3;
		V_2 = L_51;
		Entry_t087349F3AE170AB56B4363B52E225A982E89F930* L_52 = V_4;
		int32_t L_53 = L_52->___next;
		V_3 = L_53;
	}

IL_014f:
	{
		int32_t L_54 = V_3;
		if ((((int32_t)L_54) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8* L_55 = ___1_value;
		il2cpp_codegen_initobj(L_55, sizeof(EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8));
		return (bool)0;
	}
}
// Method Definition Index: 10742
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m00F62CC5B35DEBB8609BEACE26D554224A3EAE31_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m8EFF178525517781C69B333CABC2FC4985AE3059(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8* L_3 = ___1_value;
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)L_3)->___values), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)L_3)->___flagValues), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)L_3)->___displayNames), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)L_3)->___names), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)L_3)->___tooltip), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)L_3)->___underlyingType), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0025:
	{
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8));
		return (bool)0;
	}
}
// Method Definition Index: 10743
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m61C770F026B44F138615EE3C05509245B3A33D17_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_key, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_0 = ___0_key;
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m47E10493832E752B0DBE984480281058507A6622(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_2;
	}
}
// Method Definition Index: 10744
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mF64A2C7E9E56B03C38434B32414E2C0923519595_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// Method Definition Index: 10745
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mFEA470B1AA3B2FF20EC33AB564A5A587DB3BAF86_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mA4CCABA94814AA3B6ABE21E6A173200A93B75066(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
// Method Definition Index: 10746
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mCD7104B8C00067CD53ECCF109E802C63B1BED641_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mDF627516C52BCA15EC73D69F46F52EAFFFF96477(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t87EFB8B68C5988C0416C5DC7DA3A8C0603216FE8* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mA4CCABA94814AA3B6ABE21E6A173200A93B75066(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mF23DF720149D9D13A547F08E017D056CD5465AFF((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
			KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
// Method Definition Index: 10747
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m51810213C244733F6D3B75333DF72441070B8BF5_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4CF721A1BA2DC9E20AD58DFB10A094DA874F2424 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0030D0B8AB9E107228FCD8C1859FA4EC37E2ABA0((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t4CF721A1BA2DC9E20AD58DFB10A094DA874F2424 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 10748
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m47FAB1B6A1A35BA20128BCE70819DAC6B2EA5EAE_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_2 = __this->____entries;
		NullCheck(L_2);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_capacity;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = ___0_capacity;
		int32_t L_8;
		L_8 = Dictionary_2_Initialize_m23D64FF7893AA34F8D360AD7198C5572A626DFAA(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_8;
	}

IL_0035:
	{
		int32_t L_9 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_9, NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		Dictionary_2_Resize_m23A4B1183AFD9B68BCE14FD61B289CFC5CB81F18(__this, L_11, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		int32_t L_12 = V_1;
		return L_12;
	}
}
// Method Definition Index: 10749
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m5326E8E3BD94913BE098C3DA69A766ED72017BCB_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// Method Definition Index: 10750
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m6A88AF53AC16397541B3717BFF35904DC4F09D20_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
// Method Definition Index: 10751
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m679FBC073F96E56CE8BA3F7581021D68756F831D_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m22777EF9899A117FD4B4882FCF64C1E720A4DA4B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m8EFF178525517781C69B333CABC2FC4985AE3059(__this, ((*(ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t009CED360A2FA018311DE3955CB56CDE40CBBBA5* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// Method Definition Index: 10752
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m88599E5C9BE4CC5A6BB7DD9004FFFF199137540F_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_m3E05CB11F79CC8E4B9C1AEBEEA0F26308A3AC74D(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))));
		}
		try
		{
			ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m88B6E3FDD04EEC0A70475E014FDE5E789AA0B311(__this, L_3, ((*(EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15)))), il2cpp_rgctx_method(method->klass->rgctx_data, 60));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
			il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 62)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 10753
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m22777EF9899A117FD4B4882FCF64C1E720A4DA4B_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 10754
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mF4FB4AB9263230A71593F45CACA341B287B98739_gshared (Dictionary_2_t5F612094EFD165ACA0CAF9E2CA18AC945F813FA6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4CF721A1BA2DC9E20AD58DFB10A094DA874F2424 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0030D0B8AB9E107228FCD8C1859FA4EC37E2ABA0((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t4CF721A1BA2DC9E20AD58DFB10A094DA874F2424 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
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
// Method Definition Index: 10710
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m349A1657AA5617B19C3521CE68CF04167BF17791_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mAD1F9B3D2A64D21E9DA3E15E88744BBF85DE1017(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// Method Definition Index: 10711
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m655A5D6611CD093199113EDDDB510B1E612410D9_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mAD1F9B3D2A64D21E9DA3E15E88744BBF85DE1017(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// Method Definition Index: 10712
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mECEFDEB7CCF3B80FD71D917465EFF005506544D6_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mAD1F9B3D2A64D21E9DA3E15E88744BBF85DE1017(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// Method Definition Index: 10713
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAD1F9B3D2A64D21E9DA3E15E88744BBF85DE1017_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mD960B50F81DCA87E24E061FC9DA5B2151ECBB382(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* L_5;
		L_5 = EqualityComparer_1_get_Default_m50F560DEA8CA55EC57A79EEDB8854DDF4D57FBB9_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// Method Definition Index: 10714
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m71A419CD34B4DC1859322E5FA54E90A7D3024AA2_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m583A6681DC5B78409EC9FB2EDFC626E5C0199BAC(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
// Method Definition Index: 10715
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m583A6681DC5B78409EC9FB2EDFC626E5C0199BAC_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* G_B2_0 = NULL;
	Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mAD1F9B3D2A64D21E9DA3E15E88744BBF85DE1017(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* L_11 = ((Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_mACAF0EE7EE714DF2595B05436D77537666A0C6D9(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_32;
				L_32 = KeyValuePair_2_get_Key_m9B59C3D37C7C818FF05ECDE0F838AED96E61BC45_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_m38109C806FEFB7E767CE81AF51B4BFA73290373F_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_mACAF0EE7EE714DF2595B05436D77537666A0C6D9(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// Method Definition Index: 10716
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3D1057721B5A57BDA60BE4CFDC542570933A8E4F_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 10717
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mF4341C4DF11233D7CFBF1A7F938DD547355CBA61_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// Method Definition Index: 10718
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2* Dictionary_2_get_Keys_m46B70ED5840D9C76FA4E8D5E749BDBD0E5911CEC_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2* L_1 = (KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m30B8C5FC4D3410D7F34089BBEE6A0D0E643ACA07(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2* L_2 = __this->____keys;
		return L_2;
	}
}
// Method Definition Index: 10719
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mB47E88A691E5DF49B35909BD540B7EF4CC9BDFB8_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2* L_1 = (KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m30B8C5FC4D3410D7F34089BBEE6A0D0E643ACA07(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t6DBF28D21E30441522E5EA76393F49DD9AF79FE2* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 10720
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688* Dictionary_2_get_Values_m7741081F2D1DCE065925153006B764B2C89E2D6C_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688* L_1 = (ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_m98DFD7626BBC5EAD0F8FCEA62A8916BDE6814ED9(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t00D4AE967AD97F696A7966E98EE601602B3C2688* L_2 = __this->____values;
		return L_2;
	}
}
// Method Definition Index: 10721
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m809934CD0B5D1F1D76B0D2B8B6B282DC447A851C_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m819C1332D27457D24A0ED3E7717940BB8E21051C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_6 = ___0_key;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 10722
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m7DBF08E208AC4899227D4EC7DE2B40CDCB308496_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m62A333274ABAE54603BB6722560A597B14E8FF6B(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
// Method Definition Index: 10723
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mACAF0EE7EE714DF2595B05436D77537666A0C6D9_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m62A333274ABAE54603BB6722560A597B14E8FF6B(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
// Method Definition Index: 10724
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8590030584A62954A2A18A39BF36569A47C04FB5_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_0;
		L_0 = KeyValuePair_2_get_Key_m9B59C3D37C7C818FF05ECDE0F838AED96E61BC45_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m38109C806FEFB7E767CE81AF51B4BFA73290373F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mACAF0EE7EE714DF2595B05436D77537666A0C6D9(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
// Method Definition Index: 10725
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m52BE907447307206771D6D1BE397702E196B4FDE_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_0;
		L_0 = KeyValuePair_2_get_Key_m9B59C3D37C7C818FF05ECDE0F838AED96E61BC45_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m819C1332D27457D24A0ED3E7717940BB8E21051C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m38109C806FEFB7E767CE81AF51B4BFA73290373F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10726
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m4E1FB4679F260BD422A4C235793E2C5D91873A01_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_0;
		L_0 = KeyValuePair_2_get_Key_m9B59C3D37C7C818FF05ECDE0F838AED96E61BC45_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m819C1332D27457D24A0ED3E7717940BB8E21051C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m38109C806FEFB7E767CE81AF51B4BFA73290373F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_9;
		L_9 = KeyValuePair_2_get_Key_m9B59C3D37C7C818FF05ECDE0F838AED96E61BC45_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m7374D4D0AD631F1A3E7E79DF42EC554ECE929F8C(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10727
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mA12C33A8301A59BB42B02EB4307E5732BB0274E9_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// Method Definition Index: 10728
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mC67888CA551CCFC338F3F6F386596D887655E552_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___0_key, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m819C1332D27457D24A0ED3E7717940BB8E21051C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 10729
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mCAECE5D2A423E83EA639A0F58048F4CB554A0048_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10730
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m4C993EA8C719C28732C182E8829AC5B88678C7A6_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mF4341C4DF11233D7CFBF1A7F938DD547355CBA61(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m0DE3BB49226AC2E739C1A011B5EC8519B3C81A24((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 10731
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7EAB54A47683A7B8AF6A7BAA32CD9FF5C3E01DBC Dictionary_2_GetEnumerator_mF2C434EEAC96F517D41086CC36BC784711657317_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t7EAB54A47683A7B8AF6A7BAA32CD9FF5C3E01DBC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m67A9BA2AFA1466EDD3CE765040A79D6B5D675DC3((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return L_0;
	}
}
// Method Definition Index: 10732
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m34CC42342E3C4B1BE3060F3B02594F07C92DD4E4_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t7EAB54A47683A7B8AF6A7BAA32CD9FF5C3E01DBC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m67A9BA2AFA1466EDD3CE765040A79D6B5D675DC3((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t7EAB54A47683A7B8AF6A7BAA32CD9FF5C3E01DBC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 10733
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mFC3EB3940999F225AD3E9C935406C156A91267A8_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* L_6;
		L_6 = EqualityComparer_1_get_Default_m50F560DEA8CA55EC57A79EEDB8854DDF4D57FBB9_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mF4341C4DF11233D7CFBF1A7F938DD547355CBA61(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_14 = (KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38*)(KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 43), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_15 = V_0;
		Dictionary_2_CopyTo_m4C993EA8C719C28732C182E8829AC5B88678C7A6(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// Method Definition Index: 10734
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m819C1332D27457D24A0ED3E7717940BB8E21051C_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = ValueTuple_2_GetHashCode_mF7FA5CF72DC54DA323EC57EE3128528591862157((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* L_19;
		L_19 = EqualityComparer_1_get_Default_m50F560DEA8CA55EC57A79EEDB8854DDF4D57FBB9_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
// Method Definition Index: 10735
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mD960B50F81DCA87E24E061FC9DA5B2151ECBB382_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_5 = (EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41*)(EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 10736
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m62A333274ABAE54603BB6722560A597B14E8FF6B_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* V_10 = NULL;
	ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mD960B50F81DCA87E24E061FC9DA5B2151ECBB382(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = ValueTuple_2_GetHashCode_mF7FA5CF72DC54DA323EC57EE3128528591862157((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* L_24;
		L_24 = EqualityComparer_1_get_Default_m50F560DEA8CA55EC57A79EEDB8854DDF4D57FBB9_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_35 = ___0_key;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		RuntimeObject* L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_61 = ___0_key;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mCC7A0761D252A4C9C881862C832093CBA0938BBC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_94 = V_10;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_95 = ___0_key;
		L_94->___key = L_95;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key))->___Item1), (void*)NULL);
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_96 = V_10;
		RuntimeObject* L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
// Method Definition Index: 10737
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mF76B61495B851801060880CA15998F6445B6CCF6_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mD960B50F81DCA87E24E061FC9DA5B2151ECBB382(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_21;
		L_21 = KeyValuePair_2_get_Key_m9B59C3D37C7C818FF05ECDE0F838AED96E61BC45_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_24;
		L_24 = KeyValuePair_2_get_Key_m9B59C3D37C7C818FF05ECDE0F838AED96E61BC45_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m38109C806FEFB7E767CE81AF51B4BFA73290373F_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mACAF0EE7EE714DF2595B05436D77537666A0C6D9(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 10738
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mCC7A0761D252A4C9C881862C832093CBA0938BBC_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m12E987B2CC0263A69255B1F085ECEB74F11B78C9(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return;
	}
}
// Method Definition Index: 10739
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m12E987B2CC0263A69255B1F085ECEB74F11B78C9_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* V_1 = NULL;
	int32_t V_2 = 0;
	ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_3 = (EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41*)(EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_5 = __this->____entries;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC));
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC* L_17 = (ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = ValueTuple_2_GetHashCode_mF7FA5CF72DC54DA323EC57EE3128528591862157(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
// Method Definition Index: 10740
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m7374D4D0AD631F1A3E7E79DF42EC554ECE929F8C_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_mF7FA5CF72DC54DA323EC57EE3128528591862157((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* L_20;
		L_20 = EqualityComparer_1_get_Default_m50F560DEA8CA55EC57A79EEDB8854DDF4D57FBB9_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_21 = V_4;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_22 = L_21->___key;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_25 = V_4;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_26 = L_25->___key;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
	}
	{
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_41 = V_4;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC* L_42 = (ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)(&L_41->___key);
		il2cpp_codegen_initobj(L_42, sizeof(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC));
	}

IL_00ff:
	{
	}
	{
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_43 = V_4;
		RuntimeObject** L_44 = (RuntimeObject**)(&L_43->___value);
		il2cpp_codegen_initobj(L_44, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList = L_45;
		int32_t L_46 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_49 = V_4;
		int32_t L_50 = L_49->___next;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10741
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mB27D9C32729AFCE8B42924A58C6411BF50FF84BD_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_mF7FA5CF72DC54DA323EC57EE3128528591862157((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* L_20;
		L_20 = EqualityComparer_1_get_Default_m50F560DEA8CA55EC57A79EEDB8854DDF4D57FBB9_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_21 = V_4;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_22 = L_21->___key;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_25 = V_4;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_26 = L_25->___key;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		RuntimeObject** L_38 = ___1_value;
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_39 = V_4;
		RuntimeObject* L_40 = L_39->___value;
		*(RuntimeObject**)L_38 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_38, (void*)L_40);
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_41 = V_4;
		L_41->___hashCode = (-1);
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_42 = V_4;
		int32_t L_43 = __this->____freeList;
		L_42->___next = L_43;
	}
	{
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_44 = V_4;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC* L_45 = (ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)(&L_44->___key);
		il2cpp_codegen_initobj(L_45, sizeof(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC));
	}

IL_010c:
	{
	}
	{
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_46 = V_4;
		RuntimeObject** L_47 = (RuntimeObject**)(&L_46->___value);
		il2cpp_codegen_initobj(L_47, sizeof(RuntimeObject*));
	}

IL_0120:
	{
		int32_t L_48 = V_3;
		__this->____freeList = L_48;
		int32_t L_49 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_49, 1));
		int32_t L_50 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_50, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_51 = V_3;
		V_2 = L_51;
		Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3* L_52 = V_4;
		int32_t L_53 = L_52->___next;
		V_3 = L_53;
	}

IL_014f:
	{
		int32_t L_54 = V_3;
		if ((((int32_t)L_54) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		RuntimeObject** L_55 = ___1_value;
		il2cpp_codegen_initobj(L_55, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// Method Definition Index: 10742
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mE045679667E15DE2368FDC013CFE45675221F677_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m819C1332D27457D24A0ED3E7717940BB8E21051C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// Method Definition Index: 10743
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m032B4F93085A9C7E0A702DA9500FB336BBD13161_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m62A333274ABAE54603BB6722560A597B14E8FF6B(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_2;
	}
}
// Method Definition Index: 10744
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8287C83A739E955ECAFC7497C17E8021EC4D2926_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// Method Definition Index: 10745
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m51FC61B11870D7C4772B1CD187D574C1B2FF1A75_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m4C993EA8C719C28732C182E8829AC5B88678C7A6(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
// Method Definition Index: 10746
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m2A1477125D710CA977DE39C3AB661469D13C39C8_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mF4341C4DF11233D7CFBF1A7F938DD547355CBA61(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t8A7B41F2F10870F5BDD60F2962FE817A4E81BF38* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m4C993EA8C719C28732C182E8829AC5B88678C7A6(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m0DE3BB49226AC2E739C1A011B5EC8519B3C81A24((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
			KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
// Method Definition Index: 10747
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m89DADECC495CB8B2BB1B46C56330AB44B54ED781_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t7EAB54A47683A7B8AF6A7BAA32CD9FF5C3E01DBC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m67A9BA2AFA1466EDD3CE765040A79D6B5D675DC3((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t7EAB54A47683A7B8AF6A7BAA32CD9FF5C3E01DBC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 10748
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m9C6C48FF6494F310630DB6B2D2C3ED63238B65DD_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_2 = __this->____entries;
		NullCheck(L_2);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_capacity;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = ___0_capacity;
		int32_t L_8;
		L_8 = Dictionary_2_Initialize_mD960B50F81DCA87E24E061FC9DA5B2151ECBB382(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_8;
	}

IL_0035:
	{
		int32_t L_9 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_9, NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		Dictionary_2_Resize_m12E987B2CC0263A69255B1F085ECEB74F11B78C9(__this, L_11, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		int32_t L_12 = V_1;
		return L_12;
	}
}
// Method Definition Index: 10749
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m190338D70AC881789F1BFE01534EEEE991F171FE_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// Method Definition Index: 10750
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mA7AC8E23D334E2564FD319667FCFFBB9944F21AB_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
// Method Definition Index: 10751
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mA8ECF31827A7C9633D50586E43AE94AC0C2F1429_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mB4452727B38328570F7018F15F00FEDAD04BB927(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m819C1332D27457D24A0ED3E7717940BB8E21051C(__this, ((*(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t870173E9CEA3FAFF5B4E6A368F22320ADCDEAF41* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
// Method Definition Index: 10752
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mB0DF2FCEA67C1680862B256E5668680ECDE8C7CB_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))));
		}
		try
		{
			ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m7DBF08E208AC4899227D4EC7DE2B40CDCB308496(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 60));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
			il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 62)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 10753
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mB4452727B38328570F7018F15F00FEDAD04BB927_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 10754
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mF23957CF01C70AD8326E6993135E239FBE60D7DC_gshared (Dictionary_2_t28372F4EC39F4F91AF54C2B6902494C299EB408C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t7EAB54A47683A7B8AF6A7BAA32CD9FF5C3E01DBC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m67A9BA2AFA1466EDD3CE765040A79D6B5D675DC3((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t7EAB54A47683A7B8AF6A7BAA32CD9FF5C3E01DBC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
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
// Method Definition Index: 10710
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC25FF6793652922985BFAA4DC8F11A4B0B090CF8_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// Method Definition Index: 10711
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA647361FB5882A25C765F596760030CB84824C97_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// Method Definition Index: 10712
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF092F25D416129BCC755E245CEC88345A7E17540_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// Method Definition Index: 10713
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_5;
		L_5 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// Method Definition Index: 10714
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD64AC3C289EB7ACAB466AD0B5341F3609CB55199_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m7A61548B3B1ACAA1527C5C5E21965656EA2C14B5(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
// Method Definition Index: 10715
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7A61548B3B1ACAA1527C5C5E21965656EA2C14B5_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* G_B2_0 = NULL;
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* L_11 = ((Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_32;
				L_32 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// Method Definition Index: 10716
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1E17FF0178C889BBACDC95DECEB4EF50BB31F65F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 10717
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// Method Definition Index: 10718
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* Dictionary_2_get_Keys_m48AD1CD8EB0B41F2D58FDFA10B92A85DB9933FF2_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_1 = (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_2 = __this->____keys;
		return L_2;
	}
}
// Method Definition Index: 10719
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m7D135859DB08B86A18770C657F0C13E1E5665DB4_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_1 = (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 10720
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* Dictionary_2_get_Values_mC54912268568667F725754EBE2356518610AE832_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* L_1 = (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* L_2 = __this->____values;
		return L_2;
	}
}
// Method Definition Index: 10721
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m04A4017ED4A293A5D3A2164CBCD6A6CB8BCCA116_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_6 = ___0_key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 10722
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
// Method Definition Index: 10723
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
// Method Definition Index: 10724
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m4EEACDC46AD23A0E7FA39004DBEDA017B8687FAF_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0;
		L_0 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
// Method Definition Index: 10725
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mA39A0BE52118902D1EC9ED983321B0D8B415DF24_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0;
		L_0 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10726
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m4DB7A9F0B32B7B8DD0D41B3F6611E7B03B9436CA_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0;
		L_0 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_9;
		L_9 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10727
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m07051E2711DEDC818DC462838A3D89CDD0959D9A_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// Method Definition Index: 10728
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 10729
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m2E1A55234F27A4F98C337C2202E8241F8E42ED04_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10730
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 10731
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 Dictionary_2_GetEnumerator_m1C2674F51BACC5E23084DA0374A70B0EBB20CB1F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return L_0;
	}
}
// Method Definition Index: 10732
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mF90BAD88410B5EEFD79B8D5A86638D03C61B08AC_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 10733
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mE2783EE614A6743CAC1102BE510AF8978CE8C547_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_6;
		L_6 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_14 = (KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*)(KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 43), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_15 = V_0;
		Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// Method Definition Index: 10734
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_19;
		L_19 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
// Method Definition Index: 10735
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)(EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 10736
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* V_10 = NULL;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_24;
		L_24 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_35 = ___0_key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		RuntimeObject* L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_61 = ___0_key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_94 = V_10;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_95 = ___0_key;
		L_94->___key = L_95;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key))->___Item2), (void*)NULL);
		#endif
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_96 = V_10;
		RuntimeObject* L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
// Method Definition Index: 10737
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m40CC8AF5495433361FFFBAE6BF3EB27D6A9C9E05_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_21;
		L_21 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_24;
		L_24 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 10738
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return;
	}
}
// Method Definition Index: 10739
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_1 = NULL;
	int32_t V_2 = 0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_3 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)(EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = __this->____entries;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* L_17 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
// Method Definition Index: 10740
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_20;
		L_20 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_21 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_22 = L_21->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_25 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_26 = L_25->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
	}
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_41 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* L_42 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(&L_41->___key);
		il2cpp_codegen_initobj(L_42, sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
	}

IL_00ff:
	{
	}
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_43 = V_4;
		RuntimeObject** L_44 = (RuntimeObject**)(&L_43->___value);
		il2cpp_codegen_initobj(L_44, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList = L_45;
		int32_t L_46 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_49 = V_4;
		int32_t L_50 = L_49->___next;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10741
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m96B812D216465C79B9E44915B3C794DA060CA7BC_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_20;
		L_20 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_21 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_22 = L_21->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_25 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_26 = L_25->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		RuntimeObject** L_38 = ___1_value;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_39 = V_4;
		RuntimeObject* L_40 = L_39->___value;
		*(RuntimeObject**)L_38 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_38, (void*)L_40);
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_41 = V_4;
		L_41->___hashCode = (-1);
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_42 = V_4;
		int32_t L_43 = __this->____freeList;
		L_42->___next = L_43;
	}
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_44 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* L_45 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(&L_44->___key);
		il2cpp_codegen_initobj(L_45, sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
	}

IL_010c:
	{
	}
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_46 = V_4;
		RuntimeObject** L_47 = (RuntimeObject**)(&L_46->___value);
		il2cpp_codegen_initobj(L_47, sizeof(RuntimeObject*));
	}

IL_0120:
	{
		int32_t L_48 = V_3;
		__this->____freeList = L_48;
		int32_t L_49 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_49, 1));
		int32_t L_50 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_50, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_51 = V_3;
		V_2 = L_51;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_52 = V_4;
		int32_t L_53 = L_52->___next;
		V_3 = L_53;
	}

IL_014f:
	{
		int32_t L_54 = V_3;
		if ((((int32_t)L_54) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		RuntimeObject** L_55 = ___1_value;
		il2cpp_codegen_initobj(L_55, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// Method Definition Index: 10742
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m65316B5BBBCA1E7FA03561A97E22F2860B92FDF5_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// Method Definition Index: 10743
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mCFE3B0F6F63ADFF26FB4623C8EAB4B8920D257EB_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_2;
	}
}
// Method Definition Index: 10744
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m08F8980BA41D175D9D5755E520ECEC499FAECF65_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// Method Definition Index: 10745
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8B6070F6B012031518CAF9D85C4AA0880199C5E9_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
// Method Definition Index: 10746
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m3F00D474C864259E96AE8A127C47D3AA12CBC787_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
			KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
// Method Definition Index: 10747
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m904B76BE6F9CA0FC90A3E300E03FACB2CD5C8BDE_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 10748
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m3CD4CB6A0B13802073E18278194523E52B283A7B_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_2 = __this->____entries;
		NullCheck(L_2);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_capacity;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = ___0_capacity;
		int32_t L_8;
		L_8 = Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_8;
	}

IL_0035:
	{
		int32_t L_9 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_9, NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB(__this, L_11, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		int32_t L_12 = V_1;
		return L_12;
	}
}
// Method Definition Index: 10749
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19ED691E53AF9707F4850E8EC2172B04C2131672_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// Method Definition Index: 10750
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m106E312F89A7FF2E8CF9BF88DA09FD2AD89E9652_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
// Method Definition Index: 10751
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m578F26947EC223AF042037DF6D88F725A17C1CD4_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, ((*(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
// Method Definition Index: 10752
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m36BF55AAF072CC8471B04911DF96474EA3BC8825_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))));
		}
		try
		{
			ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 60));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 61)) };
			il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 62)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 10753
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 10754
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mE7E563DCFA8A83D43D1077B358C6DC613F78738B_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 922
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_m494DACD125AFD0F19BDF6B982BC3BDFCAC2D9AB2_gshared_inline (Func_2_tBBFF35F4EA206696290D8B23ED36491D37219FAF* __this, int32_t ___0_arg, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 2539
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tuple_2_get_Item1_m655CE727F147B3B44D01EB099FE00D3C7A67E185_gshared_inline (Tuple_2_tA643EAA39FD2F76EB29A374D247F8459A083D862* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Item1;
		return L_0;
	}
}
// Method Definition Index: 2540
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tuple_2_get_Item2_m9F36DBD554BD25351AFC5BA854DDA4C9C73C86CD_gshared_inline (Tuple_2_tA643EAA39FD2F76EB29A374D247F8459A083D862* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___m_Item2;
		return L_0;
	}
}
// Method Definition Index: 922
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_gshared_inline (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* __this, float ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 10838
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___key;
		return L_0;
	}
}
// Method Definition Index: 10839
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 11074
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* EqualityComparer_1_get_Default_m88BF68F306BE3C19A1C91BC23EFF142E26C9B85A_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* V_0 = NULL;
	{
		EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* L_0 = ((EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m98B8A4A80C7607630936A0CD427BF897A9F786C8(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 10838
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D KeyValuePair_2_get_Key_m7AA488818685C42D571C272B06AA080A4A94CE52_gshared_inline (KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_0 = __this->___key;
		return L_0;
	}
}
// Method Definition Index: 10839
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m34BF87EEF62B064087D91704FBD86D030C93FDF1_gshared_inline (KeyValuePair_2_t2F7746BBA7FD1F57FC6452A444151363B10DEBE2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 11074
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_0 = NULL;
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0 = ((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 11074
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* EqualityComparer_1_get_Default_m498FCACFE5907C8C933172C063DE2B2E92337C75_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* V_0 = NULL;
	{
		EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* L_0 = ((EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mBDF2F327322F82C5C6946301DBBCAADF475C4CE8(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 10838
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 KeyValuePair_2_get_Key_m7A1E1F02D02A1410C8C44388F12D3AE99F8F54EA_gshared_inline (KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_0 = __this->___key;
		return L_0;
	}
}
// Method Definition Index: 10839
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m9DE90B4E3E3E77B8FE9AB8135016F683EA8F7245_gshared_inline (KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 11074
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* EqualityComparer_1_get_Default_mAFB5B2D452EC18AD23D703AD4D62747981D07BBD_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* V_0 = NULL;
	{
		EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* L_0 = ((EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mE0A7C7D719A999F27B2C6C94F581C2A9B5FF3133(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 10838
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 KeyValuePair_2_get_Key_m584FB46DED2BD72F121617E86B3A3B44C36EF655_gshared_inline (KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_0 = __this->___key;
		return L_0;
	}
}
// Method Definition Index: 10839
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 KeyValuePair_2_get_Value_mDC37BD68F776E2567B63FFC79622D4E2E1370191_gshared_inline (KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37* __this, const RuntimeMethod* method) 
{
	{
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 11074
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* EqualityComparer_1_get_Default_m969C3F84F0E9B115126FA2458426DBFFF23DBC31_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* V_0 = NULL;
	{
		EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* L_0 = ((EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mA2F00D10E67D114ECAD52D68868F85E6B706A9FE(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8FDB8DB4A2C24E5D56ABD85B563670F6962E6C66* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 11074
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* EqualityComparer_1_get_Default_m50F560DEA8CA55EC57A79EEDB8854DDF4D57FBB9_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* V_0 = NULL;
	{
		EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* L_0 = ((EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m2F55975C1EE571640B2F505FBA95C2D028B95AF9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 10838
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC KeyValuePair_2_get_Key_m9B59C3D37C7C818FF05ECDE0F838AED96E61BC45_gshared_inline (KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_0 = __this->___key;
		return L_0;
	}
}
// Method Definition Index: 10839
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m38109C806FEFB7E767CE81AF51B4BFA73290373F_gshared_inline (KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 11074
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* V_0 = NULL;
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_0 = ((EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mE9DC7CAF58EE3B2D235851CCFF895CD1C51F3E6B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 10838
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_gshared_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = __this->___key;
		return L_0;
	}
}
// Method Definition Index: 10839
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_gshared_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
