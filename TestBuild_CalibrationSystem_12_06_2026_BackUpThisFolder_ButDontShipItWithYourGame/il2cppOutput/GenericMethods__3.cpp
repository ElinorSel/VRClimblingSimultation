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
template <typename T1>
struct VirtualActionInvoker1Invoker;
template <typename T1>
struct VirtualActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1, T2, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3, T4* p4)
	{
		void* params[4] = { &p1, &p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3*, T4, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4, T5* p5)
	{
		void* params[5] = { p1, p2, p3, &p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, params[4]);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
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

struct U3CU3Ec__DisplayClass36_0_1_t2C5B9D7458115446C9A0D593702BFB9922362065;
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
struct DenseColumnMajorMatrixStorage_1_t40B734AE3552360F9DB18FBAB254662781575F34;
struct DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3;
struct DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3;
struct DenseVectorStorage_1_t39D7EA7246F962E568174CBE3098F949DAAC2130;
struct DiagonalMatrixStorage_1_t5344E9E2E5D0A4B73C813227A55CF657BBD38F10;
struct DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6;
struct DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195;
struct Func_2_t48D86A9B41898CE26FC7F83BBEF3A99BE49F3FA7;
struct Func_2_t61463E95451501F9CA32136BA5E229D4318256F5;
struct Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D;
struct Func_2_t4C40E8255CD677D8102C7DF0D02FF06A36B97E3F;
struct Func_2_tE9000208843AA6F26314783210E61A8D532C107D;
struct Func_2_t30CC93434BF7EFA66AF4592260CCDBC8BFC5DD87;
struct Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2;
struct Func_2_tDDC415B0A5306A4473D2ADD7C4E25824337698DB;
struct Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581;
struct Func_3_t2A705431F31EECAEC279195AA760991DB3B4104C;
struct Func_3_t4A84D23D01C9E182A3CFA36E5B7F3F13F9B82367;
struct Func_3_t20B200D5023868E2C8AC4AD483D5EAED48292795;
struct Func_3_t7DF558CDF3A397FBD485092EFFBE9AD6E1CA4609;
struct Func_3_t0744D898EC5655214925A3300C859FF93F955FA4;
struct Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E;
struct Func_3_t112E81BD9C60E0186076895800369606BCF590FB;
struct Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40;
struct Func_3_t2413D1285C5A0990717706292249644F402CA43E;
struct Func_3_t906280BC31C3487A17B208593B4BF9EB1E856FE7;
struct Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873;
struct Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A;
struct Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B;
struct Func_4_t5F0A87A44991D8E9A8456476BBFAE18585857490;
struct List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356;
struct List_1_tF537CE97143B8527EF8CAFE68B92E728B2719A1D;
struct List_1_t495F03F47D827883530F951D563C0BB7340E5995;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4;
struct MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A;
struct MatrixBuilder_1_t0F650529E702FB36E2E68B644CCBA95789BBF833;
struct MatrixStorage_1_tBCE5AA23E7860892C6021E3826C678EC7D17AF51;
struct MatrixStorage_1_t00388877416BC546B45044A69B130118E6A0BB89;
struct MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D;
struct MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA;
struct MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84;
struct SparseCompressedRowMatrixStorage_1_t979FCD0F3A8F54F31AF30451262BE9FD5F61FDFF;
struct SparseCompressedRowMatrixStorage_1_tC611E0EB4F27406B83E11E799C64ECC5DC6969DB;
struct SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF;
struct SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A;
struct SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED;
struct SparseVectorStorage_1_t35483992AC2CC01D40A77AB616C4F41E78E61669;
struct Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A;
struct Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919;
struct Tuple_4_t525CC23B24BA81F0495B34F5299118E2643B3CD8;
struct VectorStorage_1_tF8A7768F27A8844C4940AB0DC813D597FAD84286;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ComplexU5BU5D_tC7E7960A9C8E43F8AA1EE7CEA249DF1C8E3A1E3E;
struct Complex32U5BU5D_t3AF6B5A9024ABEE3CE5B1717BFAE078BD682EB69;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct MethodInfo_t;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ComplexU5BU5D_tC7E7960A9C8E43F8AA1EE7CEA249DF1C8E3A1E3E;
struct Complex32U5BU5D_t3AF6B5A9024ABEE3CE5B1717BFAE078BD682EB69;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec__DisplayClass36_0_1_t2C5B9D7458115446C9A0D593702BFB9922362065  : public RuntimeObject
{
	DenseVectorStorage_1_t39D7EA7246F962E568174CBE3098F949DAAC2130* ___denseTarget;
	SparseVectorStorage_1_t35483992AC2CC01D40A77AB616C4F41E78E61669* ___U3CU3E4__this;
	Func_3_t7DF558CDF3A397FBD485092EFFBE9AD6E1CA4609* ___f;
};
struct List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356  : public RuntimeObject
{
	ComplexU5BU5D_tC7E7960A9C8E43F8AA1EE7CEA249DF1C8E3A1E3E* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tF537CE97143B8527EF8CAFE68B92E728B2719A1D  : public RuntimeObject
{
	Complex32U5BU5D_t3AF6B5A9024ABEE3CE5B1717BFAE078BD682EB69* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t495F03F47D827883530F951D563C0BB7340E5995  : public RuntimeObject
{
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918  : public RuntimeObject
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4  : public RuntimeObject
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A  : public RuntimeObject
{
};
struct MatrixBuilder_1_t0F650529E702FB36E2E68B644CCBA95789BBF833  : public RuntimeObject
{
};
struct MatrixBuilder_1_t1930CB8DAD403B2CA9A900B703DC372CF4ED998E  : public RuntimeObject
{
};
struct MatrixStorage_1_tBCE5AA23E7860892C6021E3826C678EC7D17AF51  : public RuntimeObject
{
	int32_t ___RowCount;
	int32_t ___ColumnCount;
};
struct MatrixStorage_1_t00388877416BC546B45044A69B130118E6A0BB89  : public RuntimeObject
{
	int32_t ___RowCount;
	int32_t ___ColumnCount;
};
struct MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D  : public RuntimeObject
{
	int32_t ___RowCount;
	int32_t ___ColumnCount;
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
struct MatrixStorage_1_t5B00CE52A1D9B672F4367555D6977F743D95D563  : public RuntimeObject
{
	int32_t ___RowCount;
	int32_t ___ColumnCount;
};
struct Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9  : public RuntimeObject
{
	MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* ___U3CStorageU3Ek__BackingField;
	int32_t ___U3CColumnCountU3Ek__BackingField;
	int32_t ___U3CRowCountU3Ek__BackingField;
};
struct Matrix_1_tB5E7D4D987619C0CD4F6906C456D0DB7E49BC836  : public RuntimeObject
{
	MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* ___U3CStorageU3Ek__BackingField;
	int32_t ___U3CColumnCountU3Ek__BackingField;
	int32_t ___U3CRowCountU3Ek__BackingField;
};
struct Matrix_1_tBC8DB902C426A6F1CE404CF8083842ADF3C73BD5  : public RuntimeObject
{
	MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* ___U3CStorageU3Ek__BackingField;
	int32_t ___U3CColumnCountU3Ek__BackingField;
	int32_t ___U3CRowCountU3Ek__BackingField;
};
struct Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A  : public RuntimeObject
{
	int32_t ___m_Item1;
	int32_t ___m_Item2;
	double ___m_Item3;
	double ___m_Item4;
};
struct Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919  : public RuntimeObject
{
	int32_t ___m_Item1;
	int32_t ___m_Item2;
	float ___m_Item3;
	float ___m_Item4;
};
struct Tuple_4_t525CC23B24BA81F0495B34F5299118E2643B3CD8 : public RuntimeObject {};
struct VectorStorage_1_tF8A7768F27A8844C4940AB0DC813D597FAD84286  : public RuntimeObject
{
	int32_t ___Length;
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
struct DenseColumnMajorMatrixStorage_1_t40B734AE3552360F9DB18FBAB254662781575F34  : public MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D
{
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___Data;
};
struct DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3  : public MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___Data;
};
struct DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3  : public MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___Data;
};
struct DenseVectorStorage_1_t39D7EA7246F962E568174CBE3098F949DAAC2130  : public VectorStorage_1_tF8A7768F27A8844C4940AB0DC813D597FAD84286
{
	ComplexU5BU5D_tC7E7960A9C8E43F8AA1EE7CEA249DF1C8E3A1E3E* ___Data;
};
struct DiagonalMatrixStorage_1_t5344E9E2E5D0A4B73C813227A55CF657BBD38F10  : public MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D
{
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___Data;
};
struct DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6  : public MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___Data;
};
struct DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195  : public MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___Data;
};
struct SparseCompressedRowMatrixStorage_1_t979FCD0F3A8F54F31AF30451262BE9FD5F61FDFF  : public MatrixStorage_1_tBCE5AA23E7860892C6021E3826C678EC7D17AF51
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___RowPointers;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ColumnIndices;
	ComplexU5BU5D_tC7E7960A9C8E43F8AA1EE7CEA249DF1C8E3A1E3E* ___Values;
};
struct SparseCompressedRowMatrixStorage_1_tC611E0EB4F27406B83E11E799C64ECC5DC6969DB  : public MatrixStorage_1_t00388877416BC546B45044A69B130118E6A0BB89
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___RowPointers;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ColumnIndices;
	Complex32U5BU5D_t3AF6B5A9024ABEE3CE5B1717BFAE078BD682EB69* ___Values;
};
struct SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF  : public MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___RowPointers;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ColumnIndices;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___Values;
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
struct SparseCompressedRowMatrixStorage_1_t93E695AE52C882631080A327AFEA3CBEAE0FE817  : public MatrixStorage_1_t5B00CE52A1D9B672F4367555D6977F743D95D563
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___RowPointers;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ColumnIndices;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___Values;
};
struct SparseVectorStorage_1_t35483992AC2CC01D40A77AB616C4F41E78E61669  : public VectorStorage_1_tF8A7768F27A8844C4940AB0DC813D597FAD84286
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Indices;
	ComplexU5BU5D_tC7E7960A9C8E43F8AA1EE7CEA249DF1C8E3A1E3E* ___Values;
	int32_t ___ValueCount;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 
{
	double ___m_real;
	double ___m_imaginary;
};
struct Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 
{
	float ____real;
	float ____imag;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
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
struct ExistingData_t886C8F837902474160E8A9556387EDB83CB0E2BE 
{
	int32_t ___value__;
};
struct Zeros_t7B0225904B94C97E1F4CFFBAF67C60B7D136348D 
{
	int32_t ___value__;
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
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8  : public MulticastDelegate_t
{
};
struct Func_2_t48D86A9B41898CE26FC7F83BBEF3A99BE49F3FA7  : public MulticastDelegate_t
{
};
struct Func_2_t61463E95451501F9CA32136BA5E229D4318256F5  : public MulticastDelegate_t
{
};
struct Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D  : public MulticastDelegate_t
{
};
struct Func_2_t4C40E8255CD677D8102C7DF0D02FF06A36B97E3F  : public MulticastDelegate_t
{
};
struct Func_2_tE9000208843AA6F26314783210E61A8D532C107D  : public MulticastDelegate_t
{
};
struct Func_2_t30CC93434BF7EFA66AF4592260CCDBC8BFC5DD87  : public MulticastDelegate_t
{
};
struct Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2  : public MulticastDelegate_t
{
};
struct Func_2_tDDC415B0A5306A4473D2ADD7C4E25824337698DB  : public MulticastDelegate_t
{
};
struct Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581  : public MulticastDelegate_t
{
};
struct Func_3_t2A705431F31EECAEC279195AA760991DB3B4104C  : public MulticastDelegate_t
{
};
struct Func_3_t4A84D23D01C9E182A3CFA36E5B7F3F13F9B82367  : public MulticastDelegate_t
{
};
struct Func_3_t20B200D5023868E2C8AC4AD483D5EAED48292795  : public MulticastDelegate_t
{
};
struct Func_3_t7DF558CDF3A397FBD485092EFFBE9AD6E1CA4609  : public MulticastDelegate_t
{
};
struct Func_3_t0744D898EC5655214925A3300C859FF93F955FA4  : public MulticastDelegate_t
{
};
struct Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E  : public MulticastDelegate_t
{
};
struct Func_3_t112E81BD9C60E0186076895800369606BCF590FB  : public MulticastDelegate_t
{
};
struct Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40  : public MulticastDelegate_t
{
};
struct Func_3_t2413D1285C5A0990717706292249644F402CA43E  : public MulticastDelegate_t
{
};
struct Func_3_t906280BC31C3487A17B208593B4BF9EB1E856FE7  : public MulticastDelegate_t
{
};
struct Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873  : public MulticastDelegate_t
{
};
struct Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A  : public MulticastDelegate_t
{
};
struct Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B  : public MulticastDelegate_t
{
};
struct Func_4_t5F0A87A44991D8E9A8456476BBFAE18585857490  : public MulticastDelegate_t
{
};
struct List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356_StaticFields
{
	ComplexU5BU5D_tC7E7960A9C8E43F8AA1EE7CEA249DF1C8E3A1E3E* ___s_emptyArray;
};
struct List_1_tF537CE97143B8527EF8CAFE68B92E728B2719A1D_StaticFields
{
	Complex32U5BU5D_t3AF6B5A9024ABEE3CE5B1717BFAE078BD682EB69* ___s_emptyArray;
};
struct List_1_t495F03F47D827883530F951D563C0BB7340E5995_StaticFields
{
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___s_emptyArray;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray;
};
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_StaticFields
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_emptyArray;
};
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4_StaticFields
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___s_emptyArray;
};
struct MatrixStorage_1_tBCE5AA23E7860892C6021E3826C678EC7D17AF51_StaticFields
{
	Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 ___Zero;
};
struct MatrixStorage_1_t00388877416BC546B45044A69B130118E6A0BB89_StaticFields
{
	Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 ___Zero;
};
struct MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields
{
	double ___Zero;
};
struct MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields
{
	float ___Zero;
};
struct Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_StaticFields
{
	double ___One;
	double ___Zero;
	MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* ___Build;
};
struct Matrix_1_tB5E7D4D987619C0CD4F6906C456D0DB7E49BC836_StaticFields
{
	float ___One;
	float ___Zero;
	MatrixBuilder_1_t0F650529E702FB36E2E68B644CCBA95789BBF833* ___Build;
};
struct VectorStorage_1_tF8A7768F27A8844C4940AB0DC813D597FAD84286_StaticFields
{
	Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 ___Zero;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_StaticFields
{
	Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 ___Zero;
	Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 ___One;
	Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 ___ImaginaryOne;
	double ___s_sqrtRescaleThreshold;
	double ___s_asinOverflowThreshold;
	double ___s_log2;
};
struct Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06_StaticFields
{
	Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 ___Zero;
	Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 ___One;
	Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 ___ImaginaryOne;
	Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 ___PositiveInfinity;
	Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 ___NaN;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct Complex32U5BU5D_t3AF6B5A9024ABEE3CE5B1717BFAE078BD682EB69  : public RuntimeArray
{
	ALIGN_FIELD (8) Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 m_Items[1];

	inline Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 value)
	{
		m_Items[index] = value;
	}
};
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
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
struct ComplexU5BU5D_tC7E7960A9C8E43F8AA1EE7CEA249DF1C8E3A1E3E  : public RuntimeArray
{
	ALIGN_FIELD (8) Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 m_Items[1];

	inline Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 value)
	{
		m_Items[index] = value;
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
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_mF825F58A763BF03B1208794140423A52C6CAE4D4_gshared_inline (Func_2_t48D86A9B41898CE26FC7F83BBEF3A99BE49F3FA7* __this, Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mD19FC87E6CCC1D0C477B598DDB4A09F2A75E3E12_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* List_1_ToArray_m7A70CC060DF87F0CCC73317BC6DE68C5D970C658_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_m127C1C290796AE2BF1A9B1204C0BC11BF46CF789_gshared_inline (Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* __this, double ___0_arg1, double ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_4__ctor_mD969D72DF189D5714E730649E89173F59EBC98E6_gshared (Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A* __this, int32_t ___0_item1, int32_t ___1_item2, double ___2_item3, double ___3_item4, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* BuilderInstance_1_get_Matrix_mE221BA4603134EE148087541D40B0F7F98EF940C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A* MatrixStorage_1_Find2Unchecked_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m2BFC33530A0F593FDCB121576C2D9449BF14349A_gshared (MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* __this, MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* ___0_other, Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* ___1_predicate, int32_t ___2_zeros, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Func_3_Invoke_mD0BA1A9413189754CCE96821856EA02124D54E94_gshared_inline (Func_3_t2A705431F31EECAEC279195AA760991DB3B4104C* __this, double ___0_arg1, double ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Func_3_Invoke_mF642F653D2CBBFA1FB0FA506D21B79C6C4AFAC87_gshared_inline (Func_3_t4A84D23D01C9E182A3CFA36E5B7F3F13F9B82367* __this, double ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Func_4_Invoke_m83336576648301FCB069A1930FEB8AD0B3FA5AE8_gshared_inline (Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873* __this, int32_t ___0_arg1, int32_t ___1_arg2, double ___2_arg3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3B40D7C96D362514EEA8DF87AF83D34EE5AAE421_gshared (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_gshared_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_gshared_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, double ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3_gshared (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_MapSubMatrixIndexedToUnchecked_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m96F104FD9D284E4E6265E97045765B92BBBE485A_gshared (SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* __this, SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* ___0_target, Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873* ___1_f, int32_t ___2_sourceRowIndex, int32_t ___3_targetRowIndex, int32_t ___4_rowCount, int32_t ___5_sourceColumnIndex, int32_t ___6_targetColumnIndex, int32_t ___7_columnCount, int32_t ___8_zeros, int32_t ___9_existingData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparseCompressedRowMatrixStorage_1_get_ValueCount_m66AB4B6107E0F71105BA13C9BDF29FB0D1A39CD5_gshared (SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 Func_2_Invoke_mE1FB1490FA2CE19857F94C0511EA55F5E8402925_gshared_inline (Func_2_t61463E95451501F9CA32136BA5E229D4318256F5* __this, double ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m2966311E08E4604AEDCA2222BD7B4B5E5C867D6F_gshared (List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m53C6591DADDBD6ABD3B8EA7FE009E5D1F293A28B_gshared_inline (List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m8B3C68D214DA6E1733B5EBBD4608FA2C41A4A195_gshared_inline (List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356* __this, Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComplexU5BU5D_tC7E7960A9C8E43F8AA1EE7CEA249DF1C8E3A1E3E* List_1_ToArray_mC595AC03D204CA387F8597B44E85F7289589142E_gshared (List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Func_2_Invoke_m762147834B46FC6B99180328AD303FC3F47CCD62_gshared_inline (Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D* __this, double ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_m662ABB8CB9CD647FB749C77F475250C61939D1BA_gshared_inline (Func_2_t4C40E8255CD677D8102C7DF0D02FF06A36B97E3F* __this, double ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_mCC1FDB4D5C9B18027021CB0AA0957A57B49E7472_gshared_inline (Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* __this, float ___0_arg1, float ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_4__ctor_mB6DA61396DFEF00EAC44CB306FE51D013715426B_gshared (Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919* __this, int32_t ___0_item1, int32_t ___1_item2, float ___2_item3, float ___3_item4, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MatrixBuilder_1_t0F650529E702FB36E2E68B644CCBA95789BBF833* BuilderInstance_1_get_Matrix_m19E05D6F353ACBE92666B04F37484A5AC10E616F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919* MatrixStorage_1_Find2Unchecked_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m45FECAA6BB36E8B37A52BF604126ACD0A634964C_gshared (MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* __this, MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* ___0_other, Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* ___1_predicate, int32_t ___2_zeros, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Func_3_Invoke_mE2A19EB0A945F418CEAAFD50E287168BF1DEC2A9_gshared_inline (Func_3_t20B200D5023868E2C8AC4AD483D5EAED48292795* __this, double ___0_arg1, float ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_3_Invoke_mC8193F9BE436AD10B0F1279771862679CB5813AD_gshared_inline (Func_3_t112E81BD9C60E0186076895800369606BCF590FB* __this, float ___0_arg1, float ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_3_Invoke_mF98107D070CE400E936ECB9F66287FFB15A0B338_gshared_inline (Func_3_t0744D898EC5655214925A3300C859FF93F955FA4* __this, float ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_4_Invoke_m849FAAA1541A8D85C4C145B47FB24BEBB4A21036_gshared_inline (Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* __this, int32_t ___0_arg1, int32_t ___1_arg2, float ___2_arg3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_MapSubMatrixIndexedToUnchecked_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA767D3AC07D72D095A461665419121749C9FD84D_gshared (SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* __this, SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* ___0_target, Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* ___1_f, int32_t ___2_sourceRowIndex, int32_t ___3_targetRowIndex, int32_t ___4_rowCount, int32_t ___5_sourceColumnIndex, int32_t ___6_targetColumnIndex, int32_t ___7_columnCount, int32_t ___8_zeros, int32_t ___9_existingData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparseCompressedRowMatrixStorage_1_get_ValueCount_m41F542490776D25FC8B48FE4FC34BCCD319EEC56_gshared (SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 Func_2_Invoke_mE072E7729652470833DBFDE6DC64E8F2ABE5A917_gshared_inline (Func_2_tE9000208843AA6F26314783210E61A8D532C107D* __this, float ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m2EAD0DC00F34F3529C759FC83DE7E68BC81326C2_gshared (List_1_tF537CE97143B8527EF8CAFE68B92E728B2719A1D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mC9190727BD57B042AC64759CFDFA481065898B12_gshared_inline (List_1_tF537CE97143B8527EF8CAFE68B92E728B2719A1D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m69399AFDAF357EE75291EF91E57AE6C1B27207CD_gshared_inline (List_1_tF537CE97143B8527EF8CAFE68B92E728B2719A1D* __this, Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Complex32U5BU5D_t3AF6B5A9024ABEE3CE5B1717BFAE078BD682EB69* List_1_ToArray_m9B2E3345A7E2592815CB0AD451BC4699A79CCE71_gshared (List_1_tF537CE97143B8527EF8CAFE68B92E728B2719A1D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Func_2_Invoke_mA111ABF54B39A261C7CEE454A6ADD73635731444_gshared_inline (Func_2_t30CC93434BF7EFA66AF4592260CCDBC8BFC5DD87* __this, float ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_m5728ECFB038CFC6FEF889DC2D566EEF49D0E24B9_gshared_inline (Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* __this, float ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0_1__ctor_m3BCE350B48B9CB0CFE388D8418B908BBB09BF46B_gshared (U3CU3Ec__DisplayClass36_0_1_t2C5B9D7458115446C9A0D593702BFB9922362065* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6F9E6B90C1D67B29D26A28EA9028F1D8B7DF5B48_gshared (List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 Func_3_Invoke_m1C4589F4095AF37D5D89D0F28627AF835E4B4B9B_gshared_inline (Func_3_t7DF558CDF3A397FBD485092EFFBE9AD6E1CA4609* __this, int32_t ___0_arg1, Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m83CEE170A5B9427B596A04F9F50676B044223927_gshared (Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorStorage_1_MapIndexedToUnchecked_TisComplex_tC7518465FEAE5F5138E1653314A611EEC09467A2_m0336B7CF0C031D5C84C438BB16EF0184C09A7CD7_gshared (VectorStorage_1_tF8A7768F27A8844C4940AB0DC813D597FAD84286* __this, VectorStorage_1_tF8A7768F27A8844C4940AB0DC813D597FAD84286* ___0_target, Func_3_t7DF558CDF3A397FBD485092EFFBE9AD6E1CA4609* ___1_f, int32_t ___2_zeros, int32_t ___3_existingData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m446487BF7F55E757E7D552B2436AD74AC354EA99_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m4D19394DC3062D1A564AD12233B16F7C80936C18_gshared (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, double ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mD6D812073E5BEC0634036BEF8020570DBF04F4DA_gshared (List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356* __this, Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m2B58B88CD47DE15F57483A64CDC1A36C9629690B_gshared (List_1_tF537CE97143B8527EF8CAFE68B92E728B2719A1D* __this, Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 ___0_item, const RuntimeMethod* method) ;

inline float Func_2_Invoke_mF825F58A763BF03B1208794140423A52C6CAE4D4_inline (Func_2_t48D86A9B41898CE26FC7F83BBEF3A99BE49F3FA7* __this, Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 ___0_arg, const RuntimeMethod* method)
{
	return ((  float (*) (Func_2_t48D86A9B41898CE26FC7F83BBEF3A99BE49F3FA7*, Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06, const RuntimeMethod*))Func_2_Invoke_mF825F58A763BF03B1208794140423A52C6CAE4D4_gshared_inline)(__this, ___0_arg, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Complex32_Equals_m9DB699232BCA445FBA4C3D1724713481A2C4573D (Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
inline void List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_gshared)(__this, ___0_capacity, method);
}
inline void List_1__ctor_mD19FC87E6CCC1D0C477B598DDB4A09F2A75E3E12 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, int32_t, const RuntimeMethod*))List_1__ctor_mD19FC87E6CCC1D0C477B598DDB4A09F2A75E3E12_gshared)(__this, ___0_capacity, method);
}
inline int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline)(__this, method);
}
inline void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline)(__this, ___0_item, method);
}
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___0_item, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_gshared)(__this, method);
}
inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* List_1_ToArray_m7A70CC060DF87F0CCC73317BC6DE68C5D970C658 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1_ToArray_m7A70CC060DF87F0CCC73317BC6DE68C5D970C658_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
inline bool Func_3_Invoke_m127C1C290796AE2BF1A9B1204C0BC11BF46CF789_inline (Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* __this, double ___0_arg1, double ___1_arg2, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581*, double, double, const RuntimeMethod*))Func_3_Invoke_m127C1C290796AE2BF1A9B1204C0BC11BF46CF789_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline void Tuple_4__ctor_mD969D72DF189D5714E730649E89173F59EBC98E6 (Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A* __this, int32_t ___0_item1, int32_t ___1_item2, double ___2_item3, double ___3_item4, const RuntimeMethod* method)
{
	((  void (*) (Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A*, int32_t, int32_t, double, double, const RuntimeMethod*))Tuple_4__ctor_mD969D72DF189D5714E730649E89173F59EBC98E6_gshared)(__this, ___0_item1, ___1_item2, ___2_item3, ___3_item4, method);
}
inline MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* BuilderInstance_1_get_Matrix_mE221BA4603134EE148087541D40B0F7F98EF940C (const RuntimeMethod* method)
{
	return ((  MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* (*) (const RuntimeMethod*))BuilderInstance_1_get_Matrix_mE221BA4603134EE148087541D40B0F7F98EF940C_gshared)(method);
}
inline Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A* MatrixStorage_1_Find2Unchecked_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m2BFC33530A0F593FDCB121576C2D9449BF14349A (MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* __this, MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* ___0_other, Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* ___1_predicate, int32_t ___2_zeros, const RuntimeMethod* method)
{
	return ((  Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A* (*) (MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*, MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*, Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581*, int32_t, const RuntimeMethod*))MatrixStorage_1_Find2Unchecked_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m2BFC33530A0F593FDCB121576C2D9449BF14349A_gshared)(__this, ___0_other, ___1_predicate, ___2_zeros, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
inline double Func_3_Invoke_mD0BA1A9413189754CCE96821856EA02124D54E94_inline (Func_3_t2A705431F31EECAEC279195AA760991DB3B4104C* __this, double ___0_arg1, double ___1_arg2, const RuntimeMethod* method)
{
	return ((  double (*) (Func_3_t2A705431F31EECAEC279195AA760991DB3B4104C*, double, double, const RuntimeMethod*))Func_3_Invoke_mD0BA1A9413189754CCE96821856EA02124D54E94_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline double Func_3_Invoke_mF642F653D2CBBFA1FB0FA506D21B79C6C4AFAC87_inline (Func_3_t4A84D23D01C9E182A3CFA36E5B7F3F13F9B82367* __this, double ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method)
{
	return ((  double (*) (Func_3_t4A84D23D01C9E182A3CFA36E5B7F3F13F9B82367*, double, int32_t, const RuntimeMethod*))Func_3_Invoke_mF642F653D2CBBFA1FB0FA506D21B79C6C4AFAC87_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline double Func_4_Invoke_m83336576648301FCB069A1930FEB8AD0B3FA5AE8_inline (Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873* __this, int32_t ___0_arg1, int32_t ___1_arg2, double ___2_arg3, const RuntimeMethod* method)
{
	return ((  double (*) (Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873*, int32_t, int32_t, double, const RuntimeMethod*))Func_4_Invoke_m83336576648301FCB069A1930FEB8AD0B3FA5AE8_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_Equals_m342E8F178661ABF8306D58D5F2130C58E0601DA3 (double* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
inline void List_1__ctor_m3B40D7C96D362514EEA8DF87AF83D34EE5AAE421 (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, int32_t, const RuntimeMethod*))List_1__ctor_m3B40D7C96D362514EEA8DF87AF83D34EE5AAE421_gshared)(__this, ___0_capacity, method);
}
inline int32_t List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, const RuntimeMethod*))List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_gshared_inline)(__this, method);
}
inline void List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, double ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, double, const RuntimeMethod*))List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_gshared_inline)(__this, ___0_item, method);
}
inline DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3 (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method)
{
	return ((  DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, const RuntimeMethod*))List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3_gshared)(__this, method);
}
inline void SparseCompressedRowMatrixStorage_1_MapSubMatrixIndexedToUnchecked_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m96F104FD9D284E4E6265E97045765B92BBBE485A (SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* __this, SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* ___0_target, Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873* ___1_f, int32_t ___2_sourceRowIndex, int32_t ___3_targetRowIndex, int32_t ___4_rowCount, int32_t ___5_sourceColumnIndex, int32_t ___6_targetColumnIndex, int32_t ___7_columnCount, int32_t ___8_zeros, int32_t ___9_existingData, const RuntimeMethod* method)
{
	((  void (*) (SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF*, SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF*, Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))SparseCompressedRowMatrixStorage_1_MapSubMatrixIndexedToUnchecked_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m96F104FD9D284E4E6265E97045765B92BBBE485A_gshared)(__this, ___0_target, ___1_f, ___2_sourceRowIndex, ___3_targetRowIndex, ___4_rowCount, ___5_sourceColumnIndex, ___6_targetColumnIndex, ___7_columnCount, ___8_zeros, ___9_existingData, method);
}
inline int32_t SparseCompressedRowMatrixStorage_1_get_ValueCount_m66AB4B6107E0F71105BA13C9BDF29FB0D1A39CD5 (SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF*, const RuntimeMethod*))SparseCompressedRowMatrixStorage_1_get_ValueCount_m66AB4B6107E0F71105BA13C9BDF29FB0D1A39CD5_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_Equals_mAB526D98719C44EA42107A297B23A739F2E14138 (double* __this, double ___0_obj, const RuntimeMethod* method) ;
inline Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 Func_2_Invoke_mE1FB1490FA2CE19857F94C0511EA55F5E8402925_inline (Func_2_t61463E95451501F9CA32136BA5E229D4318256F5* __this, double ___0_arg, const RuntimeMethod* method)
{
	return ((  Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 (*) (Func_2_t61463E95451501F9CA32136BA5E229D4318256F5*, double, const RuntimeMethod*))Func_2_Invoke_mE1FB1490FA2CE19857F94C0511EA55F5E8402925_gshared_inline)(__this, ___0_arg, method);
}
inline void List_1__ctor_m2966311E08E4604AEDCA2222BD7B4B5E5C867D6F (List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356*, int32_t, const RuntimeMethod*))List_1__ctor_m2966311E08E4604AEDCA2222BD7B4B5E5C867D6F_gshared)(__this, ___0_capacity, method);
}
inline int32_t List_1_get_Count_m53C6591DADDBD6ABD3B8EA7FE009E5D1F293A28B_inline (List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356*, const RuntimeMethod*))List_1_get_Count_m53C6591DADDBD6ABD3B8EA7FE009E5D1F293A28B_gshared_inline)(__this, method);
}
inline void List_1_Add_m8B3C68D214DA6E1733B5EBBD4608FA2C41A4A195_inline (List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356* __this, Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356*, Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2, const RuntimeMethod*))List_1_Add_m8B3C68D214DA6E1733B5EBBD4608FA2C41A4A195_gshared_inline)(__this, ___0_item, method);
}
inline ComplexU5BU5D_tC7E7960A9C8E43F8AA1EE7CEA249DF1C8E3A1E3E* List_1_ToArray_mC595AC03D204CA387F8597B44E85F7289589142E (List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356* __this, const RuntimeMethod* method)
{
	return ((  ComplexU5BU5D_tC7E7960A9C8E43F8AA1EE7CEA249DF1C8E3A1E3E* (*) (List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356*, const RuntimeMethod*))List_1_ToArray_mC595AC03D204CA387F8597B44E85F7289589142E_gshared)(__this, method);
}
inline double Func_2_Invoke_m762147834B46FC6B99180328AD303FC3F47CCD62_inline (Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D* __this, double ___0_arg, const RuntimeMethod* method)
{
	return ((  double (*) (Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D*, double, const RuntimeMethod*))Func_2_Invoke_m762147834B46FC6B99180328AD303FC3F47CCD62_gshared_inline)(__this, ___0_arg, method);
}
inline float Func_2_Invoke_m662ABB8CB9CD647FB749C77F475250C61939D1BA_inline (Func_2_t4C40E8255CD677D8102C7DF0D02FF06A36B97E3F* __this, double ___0_arg, const RuntimeMethod* method)
{
	return ((  float (*) (Func_2_t4C40E8255CD677D8102C7DF0D02FF06A36B97E3F*, double, const RuntimeMethod*))Func_2_Invoke_m662ABB8CB9CD647FB749C77F475250C61939D1BA_gshared_inline)(__this, ___0_arg, method);
}
inline bool Func_3_Invoke_mCC1FDB4D5C9B18027021CB0AA0957A57B49E7472_inline (Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* __this, float ___0_arg1, float ___1_arg2, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E*, float, float, const RuntimeMethod*))Func_3_Invoke_mCC1FDB4D5C9B18027021CB0AA0957A57B49E7472_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline void Tuple_4__ctor_mB6DA61396DFEF00EAC44CB306FE51D013715426B (Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919* __this, int32_t ___0_item1, int32_t ___1_item2, float ___2_item3, float ___3_item4, const RuntimeMethod* method)
{
	((  void (*) (Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919*, int32_t, int32_t, float, float, const RuntimeMethod*))Tuple_4__ctor_mB6DA61396DFEF00EAC44CB306FE51D013715426B_gshared)(__this, ___0_item1, ___1_item2, ___2_item3, ___3_item4, method);
}
inline MatrixBuilder_1_t0F650529E702FB36E2E68B644CCBA95789BBF833* BuilderInstance_1_get_Matrix_m19E05D6F353ACBE92666B04F37484A5AC10E616F (const RuntimeMethod* method)
{
	return ((  MatrixBuilder_1_t0F650529E702FB36E2E68B644CCBA95789BBF833* (*) (const RuntimeMethod*))BuilderInstance_1_get_Matrix_m19E05D6F353ACBE92666B04F37484A5AC10E616F_gshared)(method);
}
inline Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919* MatrixStorage_1_Find2Unchecked_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m45FECAA6BB36E8B37A52BF604126ACD0A634964C (MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* __this, MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* ___0_other, Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* ___1_predicate, int32_t ___2_zeros, const RuntimeMethod* method)
{
	return ((  Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919* (*) (MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*, MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*, Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E*, int32_t, const RuntimeMethod*))MatrixStorage_1_Find2Unchecked_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m45FECAA6BB36E8B37A52BF604126ACD0A634964C_gshared)(__this, ___0_other, ___1_predicate, ___2_zeros, method);
}
inline double Func_3_Invoke_mE2A19EB0A945F418CEAAFD50E287168BF1DEC2A9_inline (Func_3_t20B200D5023868E2C8AC4AD483D5EAED48292795* __this, double ___0_arg1, float ___1_arg2, const RuntimeMethod* method)
{
	return ((  double (*) (Func_3_t20B200D5023868E2C8AC4AD483D5EAED48292795*, double, float, const RuntimeMethod*))Func_3_Invoke_mE2A19EB0A945F418CEAAFD50E287168BF1DEC2A9_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline float Func_3_Invoke_mC8193F9BE436AD10B0F1279771862679CB5813AD_inline (Func_3_t112E81BD9C60E0186076895800369606BCF590FB* __this, float ___0_arg1, float ___1_arg2, const RuntimeMethod* method)
{
	return ((  float (*) (Func_3_t112E81BD9C60E0186076895800369606BCF590FB*, float, float, const RuntimeMethod*))Func_3_Invoke_mC8193F9BE436AD10B0F1279771862679CB5813AD_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline float Func_3_Invoke_mF98107D070CE400E936ECB9F66287FFB15A0B338_inline (Func_3_t0744D898EC5655214925A3300C859FF93F955FA4* __this, float ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method)
{
	return ((  float (*) (Func_3_t0744D898EC5655214925A3300C859FF93F955FA4*, float, int32_t, const RuntimeMethod*))Func_3_Invoke_mF98107D070CE400E936ECB9F66287FFB15A0B338_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline float Func_4_Invoke_m849FAAA1541A8D85C4C145B47FB24BEBB4A21036_inline (Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* __this, int32_t ___0_arg1, int32_t ___1_arg2, float ___2_arg3, const RuntimeMethod* method)
{
	return ((  float (*) (Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A*, int32_t, int32_t, float, const RuntimeMethod*))Func_4_Invoke_m849FAAA1541A8D85C4C145B47FB24BEBB4A21036_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F (float* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
inline void SparseCompressedRowMatrixStorage_1_MapSubMatrixIndexedToUnchecked_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA767D3AC07D72D095A461665419121749C9FD84D (SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* __this, SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* ___0_target, Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* ___1_f, int32_t ___2_sourceRowIndex, int32_t ___3_targetRowIndex, int32_t ___4_rowCount, int32_t ___5_sourceColumnIndex, int32_t ___6_targetColumnIndex, int32_t ___7_columnCount, int32_t ___8_zeros, int32_t ___9_existingData, const RuntimeMethod* method)
{
	((  void (*) (SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A*, SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A*, Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))SparseCompressedRowMatrixStorage_1_MapSubMatrixIndexedToUnchecked_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA767D3AC07D72D095A461665419121749C9FD84D_gshared)(__this, ___0_target, ___1_f, ___2_sourceRowIndex, ___3_targetRowIndex, ___4_rowCount, ___5_sourceColumnIndex, ___6_targetColumnIndex, ___7_columnCount, ___8_zeros, ___9_existingData, method);
}
inline int32_t SparseCompressedRowMatrixStorage_1_get_ValueCount_m41F542490776D25FC8B48FE4FC34BCCD319EEC56 (SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A*, const RuntimeMethod*))SparseCompressedRowMatrixStorage_1_get_ValueCount_m41F542490776D25FC8B48FE4FC34BCCD319EEC56_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9 (float* __this, float ___0_obj, const RuntimeMethod* method) ;
inline Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 Func_2_Invoke_mE072E7729652470833DBFDE6DC64E8F2ABE5A917_inline (Func_2_tE9000208843AA6F26314783210E61A8D532C107D* __this, float ___0_arg, const RuntimeMethod* method)
{
	return ((  Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 (*) (Func_2_tE9000208843AA6F26314783210E61A8D532C107D*, float, const RuntimeMethod*))Func_2_Invoke_mE072E7729652470833DBFDE6DC64E8F2ABE5A917_gshared_inline)(__this, ___0_arg, method);
}
inline void List_1__ctor_m2EAD0DC00F34F3529C759FC83DE7E68BC81326C2 (List_1_tF537CE97143B8527EF8CAFE68B92E728B2719A1D* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF537CE97143B8527EF8CAFE68B92E728B2719A1D*, int32_t, const RuntimeMethod*))List_1__ctor_m2EAD0DC00F34F3529C759FC83DE7E68BC81326C2_gshared)(__this, ___0_capacity, method);
}
inline int32_t List_1_get_Count_mC9190727BD57B042AC64759CFDFA481065898B12_inline (List_1_tF537CE97143B8527EF8CAFE68B92E728B2719A1D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF537CE97143B8527EF8CAFE68B92E728B2719A1D*, const RuntimeMethod*))List_1_get_Count_mC9190727BD57B042AC64759CFDFA481065898B12_gshared_inline)(__this, method);
}
inline void List_1_Add_m69399AFDAF357EE75291EF91E57AE6C1B27207CD_inline (List_1_tF537CE97143B8527EF8CAFE68B92E728B2719A1D* __this, Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF537CE97143B8527EF8CAFE68B92E728B2719A1D*, Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06, const RuntimeMethod*))List_1_Add_m69399AFDAF357EE75291EF91E57AE6C1B27207CD_gshared_inline)(__this, ___0_item, method);
}
inline Complex32U5BU5D_t3AF6B5A9024ABEE3CE5B1717BFAE078BD682EB69* List_1_ToArray_m9B2E3345A7E2592815CB0AD451BC4699A79CCE71 (List_1_tF537CE97143B8527EF8CAFE68B92E728B2719A1D* __this, const RuntimeMethod* method)
{
	return ((  Complex32U5BU5D_t3AF6B5A9024ABEE3CE5B1717BFAE078BD682EB69* (*) (List_1_tF537CE97143B8527EF8CAFE68B92E728B2719A1D*, const RuntimeMethod*))List_1_ToArray_m9B2E3345A7E2592815CB0AD451BC4699A79CCE71_gshared)(__this, method);
}
inline double Func_2_Invoke_mA111ABF54B39A261C7CEE454A6ADD73635731444_inline (Func_2_t30CC93434BF7EFA66AF4592260CCDBC8BFC5DD87* __this, float ___0_arg, const RuntimeMethod* method)
{
	return ((  double (*) (Func_2_t30CC93434BF7EFA66AF4592260CCDBC8BFC5DD87*, float, const RuntimeMethod*))Func_2_Invoke_mA111ABF54B39A261C7CEE454A6ADD73635731444_gshared_inline)(__this, ___0_arg, method);
}
inline float Func_2_Invoke_m5728ECFB038CFC6FEF889DC2D566EEF49D0E24B9_inline (Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* __this, float ___0_arg, const RuntimeMethod* method)
{
	return ((  float (*) (Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2*, float, const RuntimeMethod*))Func_2_Invoke_m5728ECFB038CFC6FEF889DC2D566EEF49D0E24B9_gshared_inline)(__this, ___0_arg, method);
}
inline void U3CU3Ec__DisplayClass36_0_1__ctor_m3BCE350B48B9CB0CFE388D8418B908BBB09BF46B (U3CU3Ec__DisplayClass36_0_1_t2C5B9D7458115446C9A0D593702BFB9922362065* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ec__DisplayClass36_0_1_t2C5B9D7458115446C9A0D593702BFB9922362065*, const RuntimeMethod*))U3CU3Ec__DisplayClass36_0_1__ctor_m3BCE350B48B9CB0CFE388D8418B908BBB09BF46B_gshared)(__this, method);
}
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
inline void List_1__ctor_m6F9E6B90C1D67B29D26A28EA9028F1D8B7DF5B48 (List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356*, const RuntimeMethod*))List_1__ctor_m6F9E6B90C1D67B29D26A28EA9028F1D8B7DF5B48_gshared)(__this, method);
}
inline Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 Func_3_Invoke_m1C4589F4095AF37D5D89D0F28627AF835E4B4B9B_inline (Func_3_t7DF558CDF3A397FBD485092EFFBE9AD6E1CA4609* __this, int32_t ___0_arg1, Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 ___1_arg2, const RuntimeMethod* method)
{
	return ((  Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 (*) (Func_3_t7DF558CDF3A397FBD485092EFFBE9AD6E1CA4609*, int32_t, Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2, const RuntimeMethod*))Func_3_Invoke_m1C4589F4095AF37D5D89D0F28627AF835E4B4B9B_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Complex_Equals_mB64F111EF60ABC9D8BDD94D258145CFB5D7D4995 (Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
inline void Action_2__ctor_m83CEE170A5B9427B596A04F9F50676B044223927 (Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m83CEE170A5B9427B596A04F9F50676B044223927_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonParallel_For_m1C8AF2732DD4541FD7F86DEE1BB47B5EDEF5876E (int32_t ___0_fromInclusive, int32_t ___1_toExclusive, int32_t ___2_rangeSize, Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___3_body, const RuntimeMethod* method) ;
inline void VectorStorage_1_MapIndexedToUnchecked_TisComplex_tC7518465FEAE5F5138E1653314A611EEC09467A2_m0336B7CF0C031D5C84C438BB16EF0184C09A7CD7 (VectorStorage_1_tF8A7768F27A8844C4940AB0DC813D597FAD84286* __this, VectorStorage_1_tF8A7768F27A8844C4940AB0DC813D597FAD84286* ___0_target, Func_3_t7DF558CDF3A397FBD485092EFFBE9AD6E1CA4609* ___1_f, int32_t ___2_zeros, int32_t ___3_existingData, const RuntimeMethod* method)
{
	((  void (*) (VectorStorage_1_tF8A7768F27A8844C4940AB0DC813D597FAD84286*, VectorStorage_1_tF8A7768F27A8844C4940AB0DC813D597FAD84286*, Func_3_t7DF558CDF3A397FBD485092EFFBE9AD6E1CA4609*, int32_t, int32_t, const RuntimeMethod*))VectorStorage_1_MapIndexedToUnchecked_TisComplex_tC7518465FEAE5F5138E1653314A611EEC09467A2_m0336B7CF0C031D5C84C438BB16EF0184C09A7CD7_gshared)(__this, ___0_target, ___1_f, ___2_zeros, ___3_existingData, method);
}
inline void List_1_AddWithResize_m446487BF7F55E757E7D552B2436AD74AC354EA99 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))List_1_AddWithResize_m446487BF7F55E757E7D552B2436AD74AC354EA99_gshared)(__this, ___0_item, method);
}
inline void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8_gshared)(__this, ___0_item, method);
}
inline void List_1_AddWithResize_m4D19394DC3062D1A564AD12233B16F7C80936C18 (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, double ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, double, const RuntimeMethod*))List_1_AddWithResize_m4D19394DC3062D1A564AD12233B16F7C80936C18_gshared)(__this, ___0_item, method);
}
inline void List_1_AddWithResize_mD6D812073E5BEC0634036BEF8020570DBF04F4DA (List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356* __this, Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356*, Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2, const RuntimeMethod*))List_1_AddWithResize_mD6D812073E5BEC0634036BEF8020570DBF04F4DA_gshared)(__this, ___0_item, method);
}
inline void List_1_AddWithResize_m2B58B88CD47DE15F57483A64CDC1A36C9629690B (List_1_tF537CE97143B8527EF8CAFE68B92E728B2719A1D* __this, Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF537CE97143B8527EF8CAFE68B92E728B2719A1D*, Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06, const RuntimeMethod*))List_1_AddWithResize_m2B58B88CD47DE15F57483A64CDC1A36C9629690B_gshared)(__this, ___0_item, method);
}
// Method Definition Index: 29303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_MapToUnchecked_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m26DC9093F061F5A286B59791B7A97986B201EFA1_gshared (SparseCompressedRowMatrixStorage_1_tC611E0EB4F27406B83E11E799C64ECC5DC6969DB* __this, MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* ___0_target, Func_2_t48D86A9B41898CE26FC7F83BBEF3A99BE49F3FA7* ___1_f, int32_t ___2_zeros, int32_t ___3_existingData, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* V_1 = NULL;
	Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_4 = NULL;
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	float V_13 = 0.0f;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t G_B3_0 = 0;
	float G_B11_0 = 0.0f;
	{
		int32_t L_0 = ___2_zeros;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 L_1 = ((MatrixStorage_1_t00388877416BC546B45044A69B130118E6A0BB89_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_2 = L_1;
		Func_2_t48D86A9B41898CE26FC7F83BBEF3A99BE49F3FA7* L_2 = ___1_f;
		Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 L_3 = ((MatrixStorage_1_t00388877416BC546B45044A69B130118E6A0BB89_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_2);
		float L_4;
		L_4 = Func_2_Invoke_mF825F58A763BF03B1208794140423A52C6CAE4D4_inline(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_5);
		il2cpp_codegen_runtime_class_init_inline(Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Complex32_Equals_m9DB699232BCA445FBA4C3D1724713481A2C4573D((&V_2), L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B3_0 = 1;
	}

IL_002d:
	{
		V_0 = (bool)G_B3_0;
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_8 = ___0_target;
		V_1 = ((SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 4)));
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_9 = V_1;
		if (!L_9)
		{
			goto IL_01dd;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_10 = V_1;
		NullCheck(L_10);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = L_10->___RowPointers;
		V_3 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___ColumnIndices;
		NullCheck(L_12);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98(L_13, ((int32_t)(((RuntimeArray*)L_12)->max_length)), List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		V_4 = L_13;
		Complex32U5BU5D_t3AF6B5A9024ABEE3CE5B1717BFAE078BD682EB69* L_14 = __this->___Values;
		NullCheck(L_14);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_15 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 5));
		List_1__ctor_mD19FC87E6CCC1D0C477B598DDB4A09F2A75E3E12(L_15, ((int32_t)(((RuntimeArray*)L_14)->max_length)), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_5 = L_15;
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_011d;
		}
	}
	{
		V_6 = 0;
		V_7 = 0;
		goto IL_010b;
	}

IL_0071:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_3;
		int32_t L_18 = V_7;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_19 = V_5;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_19, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (int32_t)L_20);
		V_8 = 0;
		goto IL_00f8;
	}

IL_0081:
	{
		int32_t L_21 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->___RowPointers;
		int32_t L_23 = V_7;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if ((((int32_t)L_21) >= ((int32_t)L_25)))
		{
			goto IL_009d;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = __this->___ColumnIndices;
		int32_t L_27 = V_6;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = V_8;
		if ((((int32_t)L_29) == ((int32_t)L_30)))
		{
			goto IL_00aa;
		}
	}

IL_009d:
	{
		Func_2_t48D86A9B41898CE26FC7F83BBEF3A99BE49F3FA7* L_31 = ___1_f;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 L_32 = ((MatrixStorage_1_t00388877416BC546B45044A69B130118E6A0BB89_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_31);
		float L_33;
		L_33 = Func_2_Invoke_mF825F58A763BF03B1208794140423A52C6CAE4D4_inline(L_31, L_32, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B11_0 = L_33;
		goto IL_00c2;
	}

IL_00aa:
	{
		Func_2_t48D86A9B41898CE26FC7F83BBEF3A99BE49F3FA7* L_34 = ___1_f;
		Complex32U5BU5D_t3AF6B5A9024ABEE3CE5B1717BFAE078BD682EB69* L_35 = __this->___Values;
		int32_t L_36 = V_6;
		int32_t L_37 = L_36;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		NullCheck(L_35);
		int32_t L_38 = L_37;
		Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 L_39 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_34);
		float L_40;
		L_40 = Func_2_Invoke_mF825F58A763BF03B1208794140423A52C6CAE4D4_inline(L_34, L_39, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B11_0 = L_40;
	}

IL_00c2:
	{
		V_9 = G_B11_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 L_41 = ((MatrixStorage_1_t00388877416BC546B45044A69B130118E6A0BB89_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_2 = L_41;
		float L_42 = V_9;
		float L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_43);
		il2cpp_codegen_runtime_class_init_inline(Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Complex32_Equals_m9DB699232BCA445FBA4C3D1724713481A2C4573D((&V_2), L_44, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		if (L_45)
		{
			goto IL_00f2;
		}
	}
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_46 = V_5;
		float L_47 = V_9;
		NullCheck(L_46);
		List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_46, L_47, il2cpp_rgctx_method(method->rgctx_data, 8));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_48 = V_4;
		int32_t L_49 = V_8;
		NullCheck(L_48);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_48, L_49, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_00f2:
	{
		int32_t L_50 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00f8:
	{
		int32_t L_51 = V_8;
		int32_t L_52 = ((MatrixStorage_1_t00388877416BC546B45044A69B130118E6A0BB89*)__this)->___ColumnCount;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_53 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_010b:
	{
		int32_t L_54 = V_7;
		int32_t L_55 = ((MatrixStorage_1_t00388877416BC546B45044A69B130118E6A0BB89*)__this)->___RowCount;
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_0071;
		}
	}
	{
		goto IL_01b3;
	}

IL_011d:
	{
		V_10 = 0;
		goto IL_01a6;
	}

IL_0125:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_3;
		int32_t L_57 = V_10;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_58 = V_5;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_58, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (int32_t)L_59);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = __this->___RowPointers;
		int32_t L_61 = V_10;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		int32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = __this->___RowPointers;
		int32_t L_65 = V_10;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add(L_65, 1));
		int32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_11 = L_67;
		V_12 = L_63;
		goto IL_019a;
	}

IL_014a:
	{
		Func_2_t48D86A9B41898CE26FC7F83BBEF3A99BE49F3FA7* L_68 = ___1_f;
		Complex32U5BU5D_t3AF6B5A9024ABEE3CE5B1717BFAE078BD682EB69* L_69 = __this->___Values;
		int32_t L_70 = V_12;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_68);
		float L_73;
		L_73 = Func_2_Invoke_mF825F58A763BF03B1208794140423A52C6CAE4D4_inline(L_68, L_72, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_13 = L_73;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 L_74 = ((MatrixStorage_1_t00388877416BC546B45044A69B130118E6A0BB89_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_2 = L_74;
		float L_75 = V_13;
		float L_76 = L_75;
		RuntimeObject* L_77 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_76);
		il2cpp_codegen_runtime_class_init_inline(Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06_il2cpp_TypeInfo_var);
		bool L_78;
		L_78 = Complex32_Equals_m9DB699232BCA445FBA4C3D1724713481A2C4573D((&V_2), L_77, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		if (L_78)
		{
			goto IL_0194;
		}
	}
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_79 = V_5;
		float L_80 = V_13;
		NullCheck(L_79);
		List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_79, L_80, il2cpp_rgctx_method(method->rgctx_data, 8));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_81 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = __this->___ColumnIndices;
		int32_t L_83 = V_12;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		int32_t L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_81);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_81, L_85, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_0194:
	{
		int32_t L_86 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_86, 1));
	}

IL_019a:
	{
		int32_t L_87 = V_12;
		int32_t L_88 = V_11;
		if ((((int32_t)L_87) < ((int32_t)L_88)))
		{
			goto IL_014a;
		}
	}
	{
		int32_t L_89 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_01a6:
	{
		int32_t L_90 = V_10;
		int32_t L_91 = ((MatrixStorage_1_t00388877416BC546B45044A69B130118E6A0BB89*)__this)->___RowCount;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_0125;
		}
	}

IL_01b3:
	{
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_92 = V_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_93 = V_4;
		NullCheck(L_93);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_94;
		L_94 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_93, List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		NullCheck(L_92);
		L_92->___ColumnIndices = L_94;
		Il2CppCodeGenWriteBarrier((void**)(&L_92->___ColumnIndices), (void*)L_94);
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_95 = V_1;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_96 = V_5;
		NullCheck(L_96);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_97;
		L_97 = List_1_ToArray_m7A70CC060DF87F0CCC73317BC6DE68C5D970C658(L_96, il2cpp_rgctx_method(method->rgctx_data, 9));
		NullCheck(L_95);
		L_95->___Values = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_95->___Values), (void*)L_97);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_98 = V_3;
		int32_t L_99 = ((MatrixStorage_1_t00388877416BC546B45044A69B130118E6A0BB89*)__this)->___RowCount;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_100 = V_5;
		NullCheck(L_100);
		int32_t L_101;
		L_101 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(L_99), (int32_t)L_101);
		return;
	}

IL_01dd:
	{
		int32_t L_102 = ___3_existingData;
		if (L_102)
		{
			goto IL_01ea;
		}
	}
	{
		bool L_103 = V_0;
		if (L_103)
		{
			goto IL_01ea;
		}
	}
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_104 = ___0_target;
		NullCheck(L_104);
		VirtualActionInvoker0::Invoke(10, L_104);
	}

IL_01ea:
	{
		bool L_105 = V_0;
		if (!L_105)
		{
			goto IL_028d;
		}
	}
	{
		V_14 = 0;
		goto IL_027f;
	}

IL_01f8:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_106 = __this->___RowPointers;
		int32_t L_107 = V_14;
		NullCheck(L_106);
		int32_t L_108 = L_107;
		int32_t L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		V_15 = L_109;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->___RowPointers;
		int32_t L_111 = V_14;
		NullCheck(L_110);
		int32_t L_112 = ((int32_t)il2cpp_codegen_add(L_111, 1));
		int32_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		V_16 = L_113;
		V_17 = 0;
		goto IL_026f;
	}

IL_0215:
	{
		int32_t L_114 = V_15;
		int32_t L_115 = V_16;
		if ((((int32_t)L_114) >= ((int32_t)L_115)))
		{
			goto IL_0254;
		}
	}
	{
		int32_t L_116 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_117 = __this->___ColumnIndices;
		int32_t L_118 = V_15;
		NullCheck(L_117);
		int32_t L_119 = L_118;
		int32_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		if ((!(((uint32_t)L_116) == ((uint32_t)L_120))))
		{
			goto IL_0254;
		}
	}
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_121 = ___0_target;
		int32_t L_122 = V_14;
		int32_t L_123 = V_17;
		Func_2_t48D86A9B41898CE26FC7F83BBEF3A99BE49F3FA7* L_124 = ___1_f;
		Complex32U5BU5D_t3AF6B5A9024ABEE3CE5B1717BFAE078BD682EB69* L_125 = __this->___Values;
		int32_t L_126 = V_15;
		NullCheck(L_125);
		int32_t L_127 = L_126;
		Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 L_128 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		NullCheck(L_124);
		float L_129;
		L_129 = Func_2_Invoke_mF825F58A763BF03B1208794140423A52C6CAE4D4_inline(L_124, L_128, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_121);
		VirtualActionInvoker3< int32_t, int32_t, float >::Invoke(9, L_121, L_122, L_123, L_129);
		int32_t L_130 = V_15;
		int32_t L_131 = V_16;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_132;
		L_132 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_130, 1)), L_131, NULL);
		V_15 = L_132;
		goto IL_0269;
	}

IL_0254:
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_133 = ___0_target;
		int32_t L_134 = V_14;
		int32_t L_135 = V_17;
		Func_2_t48D86A9B41898CE26FC7F83BBEF3A99BE49F3FA7* L_136 = ___1_f;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 L_137 = ((MatrixStorage_1_t00388877416BC546B45044A69B130118E6A0BB89_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_136);
		float L_138;
		L_138 = Func_2_Invoke_mF825F58A763BF03B1208794140423A52C6CAE4D4_inline(L_136, L_137, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_133);
		VirtualActionInvoker3< int32_t, int32_t, float >::Invoke(9, L_133, L_134, L_135, L_138);
	}

IL_0269:
	{
		int32_t L_139 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_139, 1));
	}

IL_026f:
	{
		int32_t L_140 = V_17;
		int32_t L_141 = ((MatrixStorage_1_t00388877416BC546B45044A69B130118E6A0BB89*)__this)->___ColumnCount;
		if ((((int32_t)L_140) < ((int32_t)L_141)))
		{
			goto IL_0215;
		}
	}
	{
		int32_t L_142 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_142, 1));
	}

IL_027f:
	{
		int32_t L_143 = V_14;
		int32_t L_144 = ((MatrixStorage_1_t00388877416BC546B45044A69B130118E6A0BB89*)__this)->___RowCount;
		if ((((int32_t)L_143) < ((int32_t)L_144)))
		{
			goto IL_01f8;
		}
	}
	{
		return;
	}

IL_028d:
	{
		V_18 = 0;
		goto IL_02e2;
	}

IL_0292:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_145 = __this->___RowPointers;
		int32_t L_146 = V_18;
		NullCheck(L_145);
		int32_t L_147 = L_146;
		int32_t L_148 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_149 = __this->___RowPointers;
		int32_t L_150 = V_18;
		NullCheck(L_149);
		int32_t L_151 = ((int32_t)il2cpp_codegen_add(L_150, 1));
		int32_t L_152 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		V_19 = L_152;
		V_20 = L_148;
		goto IL_02d6;
	}

IL_02ac:
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_153 = ___0_target;
		int32_t L_154 = V_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_155 = __this->___ColumnIndices;
		int32_t L_156 = V_20;
		NullCheck(L_155);
		int32_t L_157 = L_156;
		int32_t L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		Func_2_t48D86A9B41898CE26FC7F83BBEF3A99BE49F3FA7* L_159 = ___1_f;
		Complex32U5BU5D_t3AF6B5A9024ABEE3CE5B1717BFAE078BD682EB69* L_160 = __this->___Values;
		int32_t L_161 = V_20;
		NullCheck(L_160);
		int32_t L_162 = L_161;
		Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		NullCheck(L_159);
		float L_164;
		L_164 = Func_2_Invoke_mF825F58A763BF03B1208794140423A52C6CAE4D4_inline(L_159, L_163, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_153);
		VirtualActionInvoker3< int32_t, int32_t, float >::Invoke(9, L_153, L_154, L_158, L_164);
		int32_t L_165 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_165, 1));
	}

IL_02d6:
	{
		int32_t L_166 = V_20;
		int32_t L_167 = V_19;
		if ((((int32_t)L_166) < ((int32_t)L_167)))
		{
			goto IL_02ac;
		}
	}
	{
		int32_t L_168 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_168, 1));
	}

IL_02e2:
	{
		int32_t L_169 = V_18;
		int32_t L_170 = ((MatrixStorage_1_t00388877416BC546B45044A69B130118E6A0BB89*)__this)->___RowCount;
		if ((((int32_t)L_169) < ((int32_t)L_170)))
		{
			goto IL_0292;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A* SparseCompressedRowMatrixStorage_1_Find2Unchecked_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF26C7BB1CDBBE0DA829A47878BF25A6D8294C397_gshared (SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* __this, MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* ___0_other, Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* ___1_predicate, int32_t ___2_zeros, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DenseColumnMajorMatrixStorage_1_t40B734AE3552360F9DB18FBAB254662781575F34* V_0 = NULL;
	DiagonalMatrixStorage_1_t5344E9E2E5D0A4B73C813227A55CF657BBD38F10* V_1 = NULL;
	SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* V_2 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_8 = NULL;
	double V_9 = 0.0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	int32_t V_14 = 0;
	bool V_15 = false;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_18 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_19 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_20 = NULL;
	double V_21 = 0.0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	bool V_26 = false;
	bool V_27 = false;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	int32_t V_32 = 0;
	int32_t G_B6_0 = 0;
	Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* G_B8_0 = NULL;
	Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* G_B7_0 = NULL;
	double G_B9_0 = 0.0;
	Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* G_B9_1 = NULL;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	double G_B13_0 = 0.0;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	int32_t G_B27_0 = 0;
	Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* G_B29_0 = NULL;
	Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* G_B28_0 = NULL;
	double G_B30_0 = 0.0;
	Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* G_B30_1 = NULL;
	double G_B32_0 = 0.0;
	Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* G_B32_1 = NULL;
	double G_B31_0 = 0.0;
	Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* G_B31_1 = NULL;
	double G_B33_0 = 0.0;
	double G_B33_1 = 0.0;
	Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* G_B33_2 = NULL;
	int32_t G_B36_0 = 0;
	int32_t G_B36_1 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B35_1 = 0;
	double G_B37_0 = 0.0;
	int32_t G_B37_1 = 0;
	int32_t G_B37_2 = 0;
	double G_B39_0 = 0.0;
	int32_t G_B39_1 = 0;
	int32_t G_B39_2 = 0;
	double G_B38_0 = 0.0;
	int32_t G_B38_1 = 0;
	int32_t G_B38_2 = 0;
	double G_B40_0 = 0.0;
	double G_B40_1 = 0.0;
	int32_t G_B40_2 = 0;
	int32_t G_B40_3 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B72_0 = 0;
	Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* G_B74_0 = NULL;
	Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* G_B73_0 = NULL;
	double G_B75_0 = 0.0;
	Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* G_B75_1 = NULL;
	double G_B77_0 = 0.0;
	Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* G_B77_1 = NULL;
	double G_B76_0 = 0.0;
	Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* G_B76_1 = NULL;
	double G_B78_0 = 0.0;
	double G_B78_1 = 0.0;
	Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* G_B78_2 = NULL;
	int32_t G_B81_0 = 0;
	int32_t G_B81_1 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B80_1 = 0;
	double G_B82_0 = 0.0;
	int32_t G_B82_1 = 0;
	int32_t G_B82_2 = 0;
	double G_B84_0 = 0.0;
	int32_t G_B84_1 = 0;
	int32_t G_B84_2 = 0;
	double G_B83_0 = 0.0;
	int32_t G_B83_1 = 0;
	int32_t G_B83_2 = 0;
	double G_B85_0 = 0.0;
	double G_B85_1 = 0.0;
	int32_t G_B85_2 = 0;
	int32_t G_B85_3 = 0;
	{
		MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* L_0 = ___0_other;
		V_0 = ((DenseColumnMajorMatrixStorage_1_t40B734AE3552360F9DB18FBAB254662781575F34*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 1)));
		DenseColumnMajorMatrixStorage_1_t40B734AE3552360F9DB18FBAB254662781575F34* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00dd;
		}
	}
	{
		DenseColumnMajorMatrixStorage_1_t40B734AE3552360F9DB18FBAB254662781575F34* L_2 = V_0;
		NullCheck(L_2);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = L_2->___Data;
		V_3 = L_3;
		V_4 = 0;
		V_5 = 0;
		goto IL_00ce;
	}

IL_001f:
	{
		V_6 = 0;
		goto IL_00bb;
	}

IL_0027:
	{
		int32_t L_4 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___RowPointers;
		int32_t L_6 = V_5;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if ((((int32_t)L_4) >= ((int32_t)L_8)))
		{
			goto IL_0045;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___ColumnIndices;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13 = V_6;
		G_B6_0 = ((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B6_0 = 0;
	}

IL_0046:
	{
		V_7 = (bool)G_B6_0;
		Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* L_14 = ___1_predicate;
		bool L_15 = V_7;
		if (L_15)
		{
			G_B8_0 = L_14;
			goto IL_0054;
		}
		G_B7_0 = L_14;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_16 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		G_B9_0 = L_16;
		G_B9_1 = G_B7_0;
		goto IL_0066;
	}

IL_0054:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_17 = __this->___Values;
		int32_t L_18 = V_4;
		int32_t L_19 = L_18;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		NullCheck(L_17);
		int32_t L_20 = L_19;
		double L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		G_B9_0 = L_21;
		G_B9_1 = G_B8_0;
	}

IL_0066:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_22 = V_3;
		int32_t L_23 = V_6;
		int32_t L_24 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		int32_t L_25 = V_5;
		NullCheck(L_22);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_23, L_24)), L_25));
		double L_27 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(G_B9_1);
		bool L_28;
		L_28 = Func_3_Invoke_m127C1C290796AE2BF1A9B1204C0BC11BF46CF789_inline(G_B9_1, G_B9_0, L_27, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_28)
		{
			goto IL_00b5;
		}
	}
	{
		int32_t L_29 = V_5;
		int32_t L_30 = V_6;
		bool L_31 = V_7;
		if (L_31)
		{
			G_B12_0 = L_30;
			G_B12_1 = L_29;
			goto IL_008e;
		}
		G_B11_0 = L_30;
		G_B11_1 = L_29;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_32 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		G_B13_0 = L_32;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_009d;
	}

IL_008e:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_33 = __this->___Values;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		double L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		G_B13_0 = L_36;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_009d:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_37 = V_3;
		int32_t L_38 = V_6;
		int32_t L_39 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		int32_t L_40 = V_5;
		NullCheck(L_37);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_38, L_39)), L_40));
		double L_42 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A* L_43 = (Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		Tuple_4__ctor_mD969D72DF189D5714E730649E89173F59EBC98E6(L_43, G_B13_2, G_B13_1, G_B13_0, L_42, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_43;
	}

IL_00b5:
	{
		int32_t L_44 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00bb:
	{
		int32_t L_45 = V_6;
		int32_t L_46 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___ColumnCount;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_47 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00ce:
	{
		int32_t L_48 = V_5;
		int32_t L_49 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_001f;
		}
	}
	{
		return (Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A*)NULL;
	}

IL_00dd:
	{
		MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* L_50 = ___0_other;
		V_1 = ((DiagonalMatrixStorage_1_t5344E9E2E5D0A4B73C813227A55CF657BBD38F10*)IsInstClass((RuntimeObject*)L_50, il2cpp_rgctx_data(method->rgctx_data, 8)));
		DiagonalMatrixStorage_1_t5344E9E2E5D0A4B73C813227A55CF657BBD38F10* L_51 = V_1;
		if (!L_51)
		{
			goto IL_02ef;
		}
	}
	{
		DiagonalMatrixStorage_1_t5344E9E2E5D0A4B73C813227A55CF657BBD38F10* L_52 = V_1;
		NullCheck(L_52);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53 = L_52->___Data;
		V_8 = L_53;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 10));
		MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* L_54;
		L_54 = BuilderInstance_1_get_Matrix_mE221BA4603134EE148087541D40B0F7F98EF940C(il2cpp_rgctx_method(method->rgctx_data, 9));
		NullCheck(L_54);
		double L_55;
		L_55 = VirtualFuncInvoker0< double >::Invoke(4, L_54);
		V_9 = L_55;
		int32_t L_56 = ___2_zeros;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01e2;
		}
	}
	{
		Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* L_57 = ___1_predicate;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_58 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		double L_59 = V_9;
		NullCheck(L_57);
		bool L_60;
		L_60 = Func_3_Invoke_m127C1C290796AE2BF1A9B1204C0BC11BF46CF789_inline(L_57, L_58, L_59, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_60)
		{
			goto IL_01e2;
		}
	}
	{
		V_10 = 0;
		V_11 = 0;
		goto IL_01d3;
	}

IL_0122:
	{
		V_12 = 0;
		goto IL_01c0;
	}

IL_012a:
	{
		int32_t L_61 = V_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = __this->___RowPointers;
		int32_t L_63 = V_11;
		NullCheck(L_62);
		int32_t L_64 = ((int32_t)il2cpp_codegen_add(L_63, 1));
		int32_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		if ((((int32_t)L_61) >= ((int32_t)L_65)))
		{
			goto IL_0148;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = __this->___ColumnIndices;
		int32_t L_67 = V_10;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		int32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		int32_t L_70 = V_12;
		G_B27_0 = ((((int32_t)L_69) == ((int32_t)L_70))? 1 : 0);
		goto IL_0149;
	}

IL_0148:
	{
		G_B27_0 = 0;
	}

IL_0149:
	{
		V_13 = (bool)G_B27_0;
		Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* L_71 = ___1_predicate;
		bool L_72 = V_13;
		if (L_72)
		{
			G_B29_0 = L_71;
			goto IL_0157;
		}
		G_B28_0 = L_71;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_73 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		G_B30_0 = L_73;
		G_B30_1 = G_B28_0;
		goto IL_0169;
	}

IL_0157:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_74 = __this->___Values;
		int32_t L_75 = V_10;
		int32_t L_76 = L_75;
		V_10 = ((int32_t)il2cpp_codegen_add(L_76, 1));
		NullCheck(L_74);
		int32_t L_77 = L_76;
		double L_78 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		G_B30_0 = L_78;
		G_B30_1 = G_B29_0;
	}

IL_0169:
	{
		int32_t L_79 = V_11;
		int32_t L_80 = V_12;
		if ((((int32_t)L_79) == ((int32_t)L_80)))
		{
			G_B32_0 = G_B30_0;
			G_B32_1 = G_B30_1;
			goto IL_0173;
		}
		G_B31_0 = G_B30_0;
		G_B31_1 = G_B30_1;
	}
	{
		double L_81 = V_9;
		G_B33_0 = L_81;
		G_B33_1 = G_B31_0;
		G_B33_2 = G_B31_1;
		goto IL_017c;
	}

IL_0173:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_82 = V_8;
		int32_t L_83 = V_11;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		double L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		G_B33_0 = L_85;
		G_B33_1 = G_B32_0;
		G_B33_2 = G_B32_1;
	}

IL_017c:
	{
		NullCheck(G_B33_2);
		bool L_86;
		L_86 = Func_3_Invoke_m127C1C290796AE2BF1A9B1204C0BC11BF46CF789_inline(G_B33_2, G_B33_1, G_B33_0, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_86)
		{
			goto IL_01ba;
		}
	}
	{
		int32_t L_87 = V_11;
		int32_t L_88 = V_12;
		bool L_89 = V_13;
		if (L_89)
		{
			G_B36_0 = L_88;
			G_B36_1 = L_87;
			goto IL_0192;
		}
		G_B35_0 = L_88;
		G_B35_1 = L_87;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_90 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		G_B37_0 = L_90;
		G_B37_1 = G_B35_0;
		G_B37_2 = G_B35_1;
		goto IL_01a1;
	}

IL_0192:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_91 = __this->___Values;
		int32_t L_92 = V_10;
		NullCheck(L_91);
		int32_t L_93 = ((int32_t)il2cpp_codegen_subtract(L_92, 1));
		double L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		G_B37_0 = L_94;
		G_B37_1 = G_B36_0;
		G_B37_2 = G_B36_1;
	}

IL_01a1:
	{
		int32_t L_95 = V_11;
		int32_t L_96 = V_12;
		if ((((int32_t)L_95) == ((int32_t)L_96)))
		{
			G_B39_0 = G_B37_0;
			G_B39_1 = G_B37_1;
			G_B39_2 = G_B37_2;
			goto IL_01ab;
		}
		G_B38_0 = G_B37_0;
		G_B38_1 = G_B37_1;
		G_B38_2 = G_B37_2;
	}
	{
		double L_97 = V_9;
		G_B40_0 = L_97;
		G_B40_1 = G_B38_0;
		G_B40_2 = G_B38_1;
		G_B40_3 = G_B38_2;
		goto IL_01b4;
	}

IL_01ab:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_98 = V_8;
		int32_t L_99 = V_11;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		double L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		G_B40_0 = L_101;
		G_B40_1 = G_B39_0;
		G_B40_2 = G_B39_1;
		G_B40_3 = G_B39_2;
	}

IL_01b4:
	{
		Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A* L_102 = (Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		Tuple_4__ctor_mD969D72DF189D5714E730649E89173F59EBC98E6(L_102, G_B40_3, G_B40_2, G_B40_1, G_B40_0, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_102;
	}

IL_01ba:
	{
		int32_t L_103 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_103, 1));
	}

IL_01c0:
	{
		int32_t L_104 = V_12;
		int32_t L_105 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___ColumnCount;
		if ((((int32_t)L_104) < ((int32_t)L_105)))
		{
			goto IL_012a;
		}
	}
	{
		int32_t L_106 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_106, 1));
	}

IL_01d3:
	{
		int32_t L_107 = V_11;
		int32_t L_108 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		if ((((int32_t)L_107) < ((int32_t)L_108)))
		{
			goto IL_0122;
		}
	}
	{
		return (Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A*)NULL;
	}

IL_01e2:
	{
		V_14 = 0;
		goto IL_02e0;
	}

IL_01ea:
	{
		V_15 = (bool)0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_109 = __this->___RowPointers;
		int32_t L_110 = V_14;
		NullCheck(L_109);
		int32_t L_111 = L_110;
		int32_t L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_113 = __this->___RowPointers;
		int32_t L_114 = V_14;
		NullCheck(L_113);
		int32_t L_115 = ((int32_t)il2cpp_codegen_add(L_114, 1));
		int32_t L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		V_16 = L_116;
		V_17 = L_112;
		goto IL_0295;
	}

IL_020a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_117 = __this->___ColumnIndices;
		int32_t L_118 = V_17;
		NullCheck(L_117);
		int32_t L_119 = L_118;
		int32_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		int32_t L_121 = V_14;
		if ((!(((uint32_t)L_120) == ((uint32_t)L_121))))
		{
			goto IL_0258;
		}
	}
	{
		V_15 = (bool)1;
		Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* L_122 = ___1_predicate;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_123 = __this->___Values;
		int32_t L_124 = V_17;
		NullCheck(L_123);
		int32_t L_125 = L_124;
		double L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_127 = V_8;
		int32_t L_128 = V_14;
		NullCheck(L_127);
		int32_t L_129 = L_128;
		double L_130 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		NullCheck(L_122);
		bool L_131;
		L_131 = Func_3_Invoke_m127C1C290796AE2BF1A9B1204C0BC11BF46CF789_inline(L_122, L_126, L_130, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_131)
		{
			goto IL_028f;
		}
	}
	{
		int32_t L_132 = V_14;
		int32_t L_133 = V_14;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_134 = __this->___Values;
		int32_t L_135 = V_17;
		NullCheck(L_134);
		int32_t L_136 = L_135;
		double L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_138 = V_8;
		int32_t L_139 = V_14;
		NullCheck(L_138);
		int32_t L_140 = L_139;
		double L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A* L_142 = (Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		Tuple_4__ctor_mD969D72DF189D5714E730649E89173F59EBC98E6(L_142, L_132, L_133, L_137, L_141, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_142;
	}

IL_0258:
	{
		Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* L_143 = ___1_predicate;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_144 = __this->___Values;
		int32_t L_145 = V_17;
		NullCheck(L_144);
		int32_t L_146 = L_145;
		double L_147 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		double L_148 = V_9;
		NullCheck(L_143);
		bool L_149;
		L_149 = Func_3_Invoke_m127C1C290796AE2BF1A9B1204C0BC11BF46CF789_inline(L_143, L_147, L_148, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_149)
		{
			goto IL_028f;
		}
	}
	{
		int32_t L_150 = V_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_151 = __this->___ColumnIndices;
		int32_t L_152 = V_17;
		NullCheck(L_151);
		int32_t L_153 = L_152;
		int32_t L_154 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_155 = __this->___Values;
		int32_t L_156 = V_17;
		NullCheck(L_155);
		int32_t L_157 = L_156;
		double L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		double L_159 = V_9;
		Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A* L_160 = (Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		Tuple_4__ctor_mD969D72DF189D5714E730649E89173F59EBC98E6(L_160, L_150, L_154, L_158, L_159, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_160;
	}

IL_028f:
	{
		int32_t L_161 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_161, 1));
	}

IL_0295:
	{
		int32_t L_162 = V_17;
		int32_t L_163 = V_16;
		if ((((int32_t)L_162) < ((int32_t)L_163)))
		{
			goto IL_020a;
		}
	}
	{
		bool L_164 = V_15;
		if (L_164)
		{
			goto IL_02da;
		}
	}
	{
		int32_t L_165 = V_14;
		int32_t L_166 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___ColumnCount;
		if ((((int32_t)L_165) >= ((int32_t)L_166)))
		{
			goto IL_02da;
		}
	}
	{
		Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* L_167 = ___1_predicate;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_168 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_169 = V_8;
		int32_t L_170 = V_14;
		NullCheck(L_169);
		int32_t L_171 = L_170;
		double L_172 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_171));
		NullCheck(L_167);
		bool L_173;
		L_173 = Func_3_Invoke_m127C1C290796AE2BF1A9B1204C0BC11BF46CF789_inline(L_167, L_168, L_172, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_173)
		{
			goto IL_02da;
		}
	}
	{
		int32_t L_174 = V_14;
		int32_t L_175 = V_14;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_176 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_177 = V_8;
		int32_t L_178 = V_14;
		NullCheck(L_177);
		int32_t L_179 = L_178;
		double L_180 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A* L_181 = (Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		Tuple_4__ctor_mD969D72DF189D5714E730649E89173F59EBC98E6(L_181, L_174, L_175, L_176, L_180, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_181;
	}

IL_02da:
	{
		int32_t L_182 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_182, 1));
	}

IL_02e0:
	{
		int32_t L_183 = V_14;
		int32_t L_184 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		if ((((int32_t)L_183) < ((int32_t)L_184)))
		{
			goto IL_01ea;
		}
	}
	{
		return (Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A*)NULL;
	}

IL_02ef:
	{
		MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* L_185 = ___0_other;
		V_2 = ((SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF*)IsInstClass((RuntimeObject*)L_185, il2cpp_rgctx_data(method->rgctx_data, 13)));
		SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* L_186 = V_2;
		if (!L_186)
		{
			goto IL_0571;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* L_187 = V_2;
		NullCheck(L_187);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_188 = L_187->___RowPointers;
		V_18 = L_188;
		SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* L_189 = V_2;
		NullCheck(L_189);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_190 = L_189->___ColumnIndices;
		V_19 = L_190;
		SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* L_191 = V_2;
		NullCheck(L_191);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_192 = L_191->___Values;
		V_20 = L_192;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 10));
		MatrixBuilder_1_tB265D6E40F33E9A311724A5F2EDB8C5F71621C2A* L_193;
		L_193 = BuilderInstance_1_get_Matrix_mE221BA4603134EE148087541D40B0F7F98EF940C(il2cpp_rgctx_method(method->rgctx_data, 9));
		NullCheck(L_193);
		double L_194;
		L_194 = VirtualFuncInvoker0< double >::Invoke(4, L_193);
		V_21 = L_194;
		int32_t L_195 = ___2_zeros;
		if ((!(((uint32_t)L_195) == ((uint32_t)1))))
		{
			goto IL_0411;
		}
	}
	{
		V_22 = 0;
		V_23 = 0;
		V_24 = 0;
		goto IL_0402;
	}

IL_0335:
	{
		V_25 = 0;
		goto IL_03ef;
	}

IL_033d:
	{
		int32_t L_196 = V_22;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_197 = __this->___RowPointers;
		int32_t L_198 = V_24;
		NullCheck(L_197);
		int32_t L_199 = ((int32_t)il2cpp_codegen_add(L_198, 1));
		int32_t L_200 = (L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		if ((((int32_t)L_196) >= ((int32_t)L_200)))
		{
			goto IL_035b;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_201 = __this->___ColumnIndices;
		int32_t L_202 = V_22;
		NullCheck(L_201);
		int32_t L_203 = L_202;
		int32_t L_204 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		int32_t L_205 = V_25;
		G_B69_0 = ((((int32_t)L_204) == ((int32_t)L_205))? 1 : 0);
		goto IL_035c;
	}

IL_035b:
	{
		G_B69_0 = 0;
	}

IL_035c:
	{
		V_26 = (bool)G_B69_0;
		int32_t L_206 = V_23;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_207 = V_18;
		int32_t L_208 = V_24;
		NullCheck(L_207);
		int32_t L_209 = ((int32_t)il2cpp_codegen_add(L_208, 1));
		int32_t L_210 = (L_207)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		if ((((int32_t)L_206) >= ((int32_t)L_210)))
		{
			goto IL_0374;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_211 = V_19;
		int32_t L_212 = V_23;
		NullCheck(L_211);
		int32_t L_213 = L_212;
		int32_t L_214 = (L_211)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		int32_t L_215 = V_25;
		G_B72_0 = ((((int32_t)L_214) == ((int32_t)L_215))? 1 : 0);
		goto IL_0375;
	}

IL_0374:
	{
		G_B72_0 = 0;
	}

IL_0375:
	{
		V_27 = (bool)G_B72_0;
		Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* L_216 = ___1_predicate;
		bool L_217 = V_26;
		if (L_217)
		{
			G_B74_0 = L_216;
			goto IL_0383;
		}
		G_B73_0 = L_216;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_218 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		G_B75_0 = L_218;
		G_B75_1 = G_B73_0;
		goto IL_0395;
	}

IL_0383:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_219 = __this->___Values;
		int32_t L_220 = V_22;
		int32_t L_221 = L_220;
		V_22 = ((int32_t)il2cpp_codegen_add(L_221, 1));
		NullCheck(L_219);
		int32_t L_222 = L_221;
		double L_223 = (L_219)->GetAt(static_cast<il2cpp_array_size_t>(L_222));
		G_B75_0 = L_223;
		G_B75_1 = G_B74_0;
	}

IL_0395:
	{
		bool L_224 = V_27;
		if (L_224)
		{
			G_B77_0 = G_B75_0;
			G_B77_1 = G_B75_1;
			goto IL_039d;
		}
		G_B76_0 = G_B75_0;
		G_B76_1 = G_B75_1;
	}
	{
		double L_225 = V_21;
		G_B78_0 = L_225;
		G_B78_1 = G_B76_0;
		G_B78_2 = G_B76_1;
		goto IL_03ab;
	}

IL_039d:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_226 = V_20;
		int32_t L_227 = V_23;
		int32_t L_228 = L_227;
		V_23 = ((int32_t)il2cpp_codegen_add(L_228, 1));
		NullCheck(L_226);
		int32_t L_229 = L_228;
		double L_230 = (L_226)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		G_B78_0 = L_230;
		G_B78_1 = G_B77_0;
		G_B78_2 = G_B77_1;
	}

IL_03ab:
	{
		NullCheck(G_B78_2);
		bool L_231;
		L_231 = Func_3_Invoke_m127C1C290796AE2BF1A9B1204C0BC11BF46CF789_inline(G_B78_2, G_B78_1, G_B78_0, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_231)
		{
			goto IL_03e9;
		}
	}
	{
		int32_t L_232 = V_24;
		int32_t L_233 = V_25;
		bool L_234 = V_26;
		if (L_234)
		{
			G_B81_0 = L_233;
			G_B81_1 = L_232;
			goto IL_03c1;
		}
		G_B80_0 = L_233;
		G_B80_1 = L_232;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_235 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		G_B82_0 = L_235;
		G_B82_1 = G_B80_0;
		G_B82_2 = G_B80_1;
		goto IL_03d0;
	}

IL_03c1:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_236 = __this->___Values;
		int32_t L_237 = V_22;
		NullCheck(L_236);
		int32_t L_238 = ((int32_t)il2cpp_codegen_subtract(L_237, 1));
		double L_239 = (L_236)->GetAt(static_cast<il2cpp_array_size_t>(L_238));
		G_B82_0 = L_239;
		G_B82_1 = G_B81_0;
		G_B82_2 = G_B81_1;
	}

IL_03d0:
	{
		bool L_240 = V_27;
		if (L_240)
		{
			G_B84_0 = G_B82_0;
			G_B84_1 = G_B82_1;
			G_B84_2 = G_B82_2;
			goto IL_03d8;
		}
		G_B83_0 = G_B82_0;
		G_B83_1 = G_B82_1;
		G_B83_2 = G_B82_2;
	}
	{
		double L_241 = V_21;
		G_B85_0 = L_241;
		G_B85_1 = G_B83_0;
		G_B85_2 = G_B83_1;
		G_B85_3 = G_B83_2;
		goto IL_03e3;
	}

IL_03d8:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_242 = V_20;
		int32_t L_243 = V_23;
		NullCheck(L_242);
		int32_t L_244 = ((int32_t)il2cpp_codegen_subtract(L_243, 1));
		double L_245 = (L_242)->GetAt(static_cast<il2cpp_array_size_t>(L_244));
		G_B85_0 = L_245;
		G_B85_1 = G_B84_0;
		G_B85_2 = G_B84_1;
		G_B85_3 = G_B84_2;
	}

IL_03e3:
	{
		Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A* L_246 = (Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		Tuple_4__ctor_mD969D72DF189D5714E730649E89173F59EBC98E6(L_246, G_B85_3, G_B85_2, G_B85_1, G_B85_0, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_246;
	}

IL_03e9:
	{
		int32_t L_247 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add(L_247, 1));
	}

IL_03ef:
	{
		int32_t L_248 = V_25;
		int32_t L_249 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___ColumnCount;
		if ((((int32_t)L_248) < ((int32_t)L_249)))
		{
			goto IL_033d;
		}
	}
	{
		int32_t L_250 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add(L_250, 1));
	}

IL_0402:
	{
		int32_t L_251 = V_24;
		int32_t L_252 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		if ((((int32_t)L_251) < ((int32_t)L_252)))
		{
			goto IL_0335;
		}
	}
	{
		return (Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A*)NULL;
	}

IL_0411:
	{
		V_28 = 0;
		goto IL_0562;
	}

IL_0419:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_253 = __this->___RowPointers;
		int32_t L_254 = V_28;
		NullCheck(L_253);
		int32_t L_255 = ((int32_t)il2cpp_codegen_add(L_254, 1));
		int32_t L_256 = (L_253)->GetAt(static_cast<il2cpp_array_size_t>(L_255));
		V_29 = L_256;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_257 = V_18;
		int32_t L_258 = V_28;
		NullCheck(L_257);
		int32_t L_259 = ((int32_t)il2cpp_codegen_add(L_258, 1));
		int32_t L_260 = (L_257)->GetAt(static_cast<il2cpp_array_size_t>(L_259));
		V_30 = L_260;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_261 = __this->___RowPointers;
		int32_t L_262 = V_28;
		NullCheck(L_261);
		int32_t L_263 = L_262;
		int32_t L_264 = (L_261)->GetAt(static_cast<il2cpp_array_size_t>(L_263));
		V_31 = L_264;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_265 = V_18;
		int32_t L_266 = V_28;
		NullCheck(L_265);
		int32_t L_267 = L_266;
		int32_t L_268 = (L_265)->GetAt(static_cast<il2cpp_array_size_t>(L_267));
		V_32 = L_268;
		goto IL_054a;
	}

IL_0446:
	{
		int32_t L_269 = V_31;
		int32_t L_270 = V_29;
		if ((((int32_t)L_269) == ((int32_t)L_270)))
		{
			goto IL_0462;
		}
	}
	{
		int32_t L_271 = V_32;
		int32_t L_272 = V_30;
		if ((((int32_t)L_271) >= ((int32_t)L_272)))
		{
			goto IL_049f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_273 = __this->___ColumnIndices;
		int32_t L_274 = V_31;
		NullCheck(L_273);
		int32_t L_275 = L_274;
		int32_t L_276 = (L_273)->GetAt(static_cast<il2cpp_array_size_t>(L_275));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_277 = V_19;
		int32_t L_278 = V_32;
		NullCheck(L_277);
		int32_t L_279 = L_278;
		int32_t L_280 = (L_277)->GetAt(static_cast<il2cpp_array_size_t>(L_279));
		if ((((int32_t)L_276) <= ((int32_t)L_280)))
		{
			goto IL_049f;
		}
	}

IL_0462:
	{
		Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* L_281 = ___1_predicate;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_282 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_283 = V_20;
		int32_t L_284 = V_32;
		int32_t L_285 = L_284;
		V_32 = ((int32_t)il2cpp_codegen_add(L_285, 1));
		NullCheck(L_283);
		int32_t L_286 = L_285;
		double L_287 = (L_283)->GetAt(static_cast<il2cpp_array_size_t>(L_286));
		NullCheck(L_281);
		bool L_288;
		L_288 = Func_3_Invoke_m127C1C290796AE2BF1A9B1204C0BC11BF46CF789_inline(L_281, L_282, L_287, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_288)
		{
			goto IL_054a;
		}
	}
	{
		int32_t L_289 = V_28;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_290 = V_19;
		int32_t L_291 = V_32;
		NullCheck(L_290);
		int32_t L_292 = ((int32_t)il2cpp_codegen_subtract(L_291, 1));
		int32_t L_293 = (L_290)->GetAt(static_cast<il2cpp_array_size_t>(L_292));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_294 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_295 = V_20;
		int32_t L_296 = V_32;
		NullCheck(L_295);
		int32_t L_297 = ((int32_t)il2cpp_codegen_subtract(L_296, 1));
		double L_298 = (L_295)->GetAt(static_cast<il2cpp_array_size_t>(L_297));
		Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A* L_299 = (Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		Tuple_4__ctor_mD969D72DF189D5714E730649E89173F59EBC98E6(L_299, L_289, L_293, L_294, L_298, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_299;
	}

IL_049f:
	{
		int32_t L_300 = V_32;
		int32_t L_301 = V_30;
		if ((((int32_t)L_300) == ((int32_t)L_301)))
		{
			goto IL_04b5;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_302 = __this->___ColumnIndices;
		int32_t L_303 = V_31;
		NullCheck(L_302);
		int32_t L_304 = L_303;
		int32_t L_305 = (L_302)->GetAt(static_cast<il2cpp_array_size_t>(L_304));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_306 = V_19;
		int32_t L_307 = V_32;
		NullCheck(L_306);
		int32_t L_308 = L_307;
		int32_t L_309 = (L_306)->GetAt(static_cast<il2cpp_array_size_t>(L_308));
		if ((((int32_t)L_305) >= ((int32_t)L_309)))
		{
			goto IL_04f5;
		}
	}

IL_04b5:
	{
		Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* L_310 = ___1_predicate;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_311 = __this->___Values;
		int32_t L_312 = V_31;
		int32_t L_313 = L_312;
		V_31 = ((int32_t)il2cpp_codegen_add(L_313, 1));
		NullCheck(L_311);
		int32_t L_314 = L_313;
		double L_315 = (L_311)->GetAt(static_cast<il2cpp_array_size_t>(L_314));
		double L_316 = V_21;
		NullCheck(L_310);
		bool L_317;
		L_317 = Func_3_Invoke_m127C1C290796AE2BF1A9B1204C0BC11BF46CF789_inline(L_310, L_315, L_316, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_317)
		{
			goto IL_054a;
		}
	}
	{
		int32_t L_318 = V_28;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_319 = __this->___ColumnIndices;
		int32_t L_320 = V_31;
		NullCheck(L_319);
		int32_t L_321 = ((int32_t)il2cpp_codegen_subtract(L_320, 1));
		int32_t L_322 = (L_319)->GetAt(static_cast<il2cpp_array_size_t>(L_321));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_323 = __this->___Values;
		int32_t L_324 = V_31;
		NullCheck(L_323);
		int32_t L_325 = ((int32_t)il2cpp_codegen_subtract(L_324, 1));
		double L_326 = (L_323)->GetAt(static_cast<il2cpp_array_size_t>(L_325));
		double L_327 = V_21;
		Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A* L_328 = (Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		Tuple_4__ctor_mD969D72DF189D5714E730649E89173F59EBC98E6(L_328, L_318, L_322, L_326, L_327, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_328;
	}

IL_04f5:
	{
		Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* L_329 = ___1_predicate;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_330 = __this->___Values;
		int32_t L_331 = V_31;
		int32_t L_332 = L_331;
		V_31 = ((int32_t)il2cpp_codegen_add(L_332, 1));
		NullCheck(L_330);
		int32_t L_333 = L_332;
		double L_334 = (L_330)->GetAt(static_cast<il2cpp_array_size_t>(L_333));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_335 = V_20;
		int32_t L_336 = V_32;
		int32_t L_337 = L_336;
		V_32 = ((int32_t)il2cpp_codegen_add(L_337, 1));
		NullCheck(L_335);
		int32_t L_338 = L_337;
		double L_339 = (L_335)->GetAt(static_cast<il2cpp_array_size_t>(L_338));
		NullCheck(L_329);
		bool L_340;
		L_340 = Func_3_Invoke_m127C1C290796AE2BF1A9B1204C0BC11BF46CF789_inline(L_329, L_334, L_339, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_340)
		{
			goto IL_054a;
		}
	}
	{
		int32_t L_341 = V_28;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_342 = __this->___ColumnIndices;
		int32_t L_343 = V_31;
		NullCheck(L_342);
		int32_t L_344 = ((int32_t)il2cpp_codegen_subtract(L_343, 1));
		int32_t L_345 = (L_342)->GetAt(static_cast<il2cpp_array_size_t>(L_344));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_346 = __this->___Values;
		int32_t L_347 = V_31;
		NullCheck(L_346);
		int32_t L_348 = ((int32_t)il2cpp_codegen_subtract(L_347, 1));
		double L_349 = (L_346)->GetAt(static_cast<il2cpp_array_size_t>(L_348));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_350 = V_20;
		int32_t L_351 = V_32;
		NullCheck(L_350);
		int32_t L_352 = ((int32_t)il2cpp_codegen_subtract(L_351, 1));
		double L_353 = (L_350)->GetAt(static_cast<il2cpp_array_size_t>(L_352));
		Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A* L_354 = (Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		Tuple_4__ctor_mD969D72DF189D5714E730649E89173F59EBC98E6(L_354, L_341, L_345, L_349, L_353, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_354;
	}

IL_054a:
	{
		int32_t L_355 = V_31;
		int32_t L_356 = V_29;
		if ((((int32_t)L_355) < ((int32_t)L_356)))
		{
			goto IL_0446;
		}
	}
	{
		int32_t L_357 = V_32;
		int32_t L_358 = V_30;
		if ((((int32_t)L_357) < ((int32_t)L_358)))
		{
			goto IL_0446;
		}
	}
	{
		int32_t L_359 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add(L_359, 1));
	}

IL_0562:
	{
		int32_t L_360 = V_28;
		int32_t L_361 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		if ((((int32_t)L_360) < ((int32_t)L_361)))
		{
			goto IL_0419;
		}
	}
	{
		return (Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A*)NULL;
	}

IL_0571:
	{
		MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* L_362 = ___0_other;
		Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* L_363 = ___1_predicate;
		int32_t L_364 = ___2_zeros;
		NullCheck((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this);
		Tuple_4_t34BDBCAA2CFBFD27B74F2799A102783A8519614A* L_365;
		L_365 = MatrixStorage_1_Find2Unchecked_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m2BFC33530A0F593FDCB121576C2D9449BF14349A((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this, L_362, L_363, L_364, il2cpp_rgctx_method(method->rgctx_data, 14));
		return L_365;
	}
}
// Method Definition Index: 29308
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_FoldByColumnUnchecked_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF77D7C1581FE72DFE95F94A632D7EE6C13AA67F8_gshared (SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___0_target, Func_3_t2A705431F31EECAEC279195AA760991DB3B4104C* ___1_f, Func_3_t4A84D23D01C9E182A3CFA36E5B7F3F13F9B82367* ___2_finalize, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___3_state, int32_t ___4_zeros, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
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
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___3_state;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = ___0_target;
		if ((((RuntimeObject*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)L_0) == ((RuntimeObject*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)L_1)))
		{
			goto IL_0013;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = ___3_state;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = ___0_target;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = ___3_state;
		NullCheck(L_4);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
	}

IL_0013:
	{
		int32_t L_5 = ___4_zeros;
		if (L_5)
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_6 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___ColumnCount;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_0 = L_7;
		V_1 = 0;
		goto IL_0085;
	}

IL_002a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___RowPointers;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___RowPointers;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_2 = L_15;
		V_3 = L_11;
		goto IL_007d;
	}

IL_0040:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->___ColumnIndices;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = L_19;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_20 = ___0_target;
		int32_t L_21 = V_4;
		Func_3_t2A705431F31EECAEC279195AA760991DB3B4104C* L_22 = ___1_f;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_23 = ___0_target;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		double L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_27 = __this->___Values;
		int32_t L_28 = V_3;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		double L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_22);
		double L_31;
		L_31 = Func_3_Invoke_mD0BA1A9413189754CCE96821856EA02124D54E94_inline(L_22, L_26, L_30, il2cpp_rgctx_method(method->rgctx_data, 3));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (double)L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_0;
		int32_t L_33 = V_4;
		NullCheck(L_32);
		int32_t* L_34 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)));
		int32_t L_35 = *((int32_t*)L_34);
		*((int32_t*)L_34) = (int32_t)((int32_t)il2cpp_codegen_add(L_35, 1));
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_007d:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = V_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_0085:
	{
		int32_t L_40 = V_1;
		int32_t L_41 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_002a;
		}
	}
	{
		V_5 = 0;
		goto IL_00b3;
	}

IL_0093:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_42 = ___0_target;
		int32_t L_43 = V_5;
		Func_3_t4A84D23D01C9E182A3CFA36E5B7F3F13F9B82367* L_44 = ___2_finalize;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_45 = ___0_target;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		double L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = V_0;
		int32_t L_50 = V_5;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_44);
		double L_53;
		L_53 = Func_3_Invoke_mF642F653D2CBBFA1FB0FA506D21B79C6C4AFAC87_inline(L_44, L_48, L_52, il2cpp_rgctx_method(method->rgctx_data, 5));
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (double)L_53);
		int32_t L_54 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_00b3:
	{
		int32_t L_55 = V_5;
		int32_t L_56 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___ColumnCount;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_0093;
		}
	}
	{
		return;
	}

IL_00be:
	{
		V_6 = 0;
		goto IL_0159;
	}

IL_00c6:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->___RowPointers;
		int32_t L_58 = V_6;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		int32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_7 = L_60;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = __this->___RowPointers;
		int32_t L_62 = V_6;
		NullCheck(L_61);
		int32_t L_63 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		int32_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		V_8 = L_64;
		V_9 = 0;
		goto IL_0149;
	}

IL_00e3:
	{
		int32_t L_65 = V_7;
		int32_t L_66 = V_8;
		if ((((int32_t)L_65) >= ((int32_t)L_66)))
		{
			goto IL_0128;
		}
	}
	{
		int32_t L_67 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = __this->___ColumnIndices;
		int32_t L_69 = V_7;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		int32_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		if ((!(((uint32_t)L_67) == ((uint32_t)L_71))))
		{
			goto IL_0128;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_72 = ___0_target;
		int32_t L_73 = V_9;
		Func_3_t2A705431F31EECAEC279195AA760991DB3B4104C* L_74 = ___1_f;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_75 = ___0_target;
		int32_t L_76 = V_9;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		double L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_79 = __this->___Values;
		int32_t L_80 = V_7;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		double L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_74);
		double L_83;
		L_83 = Func_3_Invoke_mD0BA1A9413189754CCE96821856EA02124D54E94_inline(L_74, L_78, L_82, il2cpp_rgctx_method(method->rgctx_data, 3));
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(L_73), (double)L_83);
		int32_t L_84 = V_7;
		int32_t L_85 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_86;
		L_86 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_84, 1)), L_85, NULL);
		V_7 = L_86;
		goto IL_0143;
	}

IL_0128:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_87 = ___0_target;
		int32_t L_88 = V_9;
		Func_3_t2A705431F31EECAEC279195AA760991DB3B4104C* L_89 = ___1_f;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_90 = ___0_target;
		int32_t L_91 = V_9;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		double L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_94 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_89);
		double L_95;
		L_95 = Func_3_Invoke_mD0BA1A9413189754CCE96821856EA02124D54E94_inline(L_89, L_93, L_94, il2cpp_rgctx_method(method->rgctx_data, 3));
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(L_88), (double)L_95);
	}

IL_0143:
	{
		int32_t L_96 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_96, 1));
	}

IL_0149:
	{
		int32_t L_97 = V_9;
		int32_t L_98 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___ColumnCount;
		if ((((int32_t)L_97) < ((int32_t)L_98)))
		{
			goto IL_00e3;
		}
	}
	{
		int32_t L_99 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_99, 1));
	}

IL_0159:
	{
		int32_t L_100 = V_6;
		int32_t L_101 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		if ((((int32_t)L_100) < ((int32_t)L_101)))
		{
			goto IL_00c6;
		}
	}
	{
		V_10 = 0;
		goto IL_018d;
	}

IL_016b:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_102 = ___0_target;
		int32_t L_103 = V_10;
		Func_3_t4A84D23D01C9E182A3CFA36E5B7F3F13F9B82367* L_104 = ___2_finalize;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_105 = ___0_target;
		int32_t L_106 = V_10;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		double L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		int32_t L_109 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		NullCheck(L_104);
		double L_110;
		L_110 = Func_3_Invoke_mF642F653D2CBBFA1FB0FA506D21B79C6C4AFAC87_inline(L_104, L_108, L_109, il2cpp_rgctx_method(method->rgctx_data, 5));
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(L_103), (double)L_110);
		int32_t L_111 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_018d:
	{
		int32_t L_112 = V_10;
		int32_t L_113 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___ColumnCount;
		if ((((int32_t)L_112) < ((int32_t)L_113)))
		{
			goto IL_016b;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29307
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_FoldByRowUnchecked_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m0B0AB08052BC6E911BB6AE818AD8DA3AAE58665E_gshared (SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___0_target, Func_3_t2A705431F31EECAEC279195AA760991DB3B4104C* ___1_f, Func_3_t4A84D23D01C9E182A3CFA36E5B7F3F13F9B82367* ___2_finalize, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___3_state, int32_t ___4_zeros, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	double V_8 = 0.0;
	int32_t V_9 = 0;
	{
		int32_t L_0 = ___4_zeros;
		if (L_0)
		{
			goto IL_0069;
		}
	}
	{
		V_0 = 0;
		goto IL_005f;
	}

IL_0008:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___RowPointers;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___RowPointers;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_9 = ___3_state;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		double L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		int32_t L_13 = V_1;
		V_4 = L_13;
		goto IL_0045;
	}

IL_002a:
	{
		Func_3_t2A705431F31EECAEC279195AA760991DB3B4104C* L_14 = ___1_f;
		double L_15 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_16 = __this->___Values;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		double L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		double L_20;
		L_20 = Func_3_Invoke_mD0BA1A9413189754CCE96821856EA02124D54E94_inline(L_14, L_15, L_19, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_3 = L_20;
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0045:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002a;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_24 = ___0_target;
		int32_t L_25 = V_0;
		Func_3_t4A84D23D01C9E182A3CFA36E5B7F3F13F9B82367* L_26 = ___2_finalize;
		double L_27 = V_3;
		int32_t L_28 = V_2;
		int32_t L_29 = V_1;
		NullCheck(L_26);
		double L_30;
		L_30 = Func_3_Invoke_mF642F653D2CBBFA1FB0FA506D21B79C6C4AFAC87_inline(L_26, L_27, ((int32_t)il2cpp_codegen_subtract(L_28, L_29)), il2cpp_rgctx_method(method->rgctx_data, 5));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (double)L_30);
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_005f:
	{
		int32_t L_32 = V_0;
		int32_t L_33 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_0069:
	{
		V_5 = 0;
		goto IL_010d;
	}

IL_0071:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = __this->___RowPointers;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		int32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_6 = L_37;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->___RowPointers;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		int32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_7 = L_41;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_42 = ___3_state;
		int32_t L_43 = V_5;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		double L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_8 = L_45;
		V_9 = 0;
		goto IL_00e7;
	}

IL_0099:
	{
		int32_t L_46 = V_6;
		int32_t L_47 = V_7;
		if ((((int32_t)L_46) >= ((int32_t)L_47)))
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_48 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->___ColumnIndices;
		int32_t L_50 = V_6;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		if ((!(((uint32_t)L_48) == ((uint32_t)L_52))))
		{
			goto IL_00d2;
		}
	}
	{
		Func_3_t2A705431F31EECAEC279195AA760991DB3B4104C* L_53 = ___1_f;
		double L_54 = V_8;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_55 = __this->___Values;
		int32_t L_56 = V_6;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		double L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_53);
		double L_59;
		L_59 = Func_3_Invoke_mD0BA1A9413189754CCE96821856EA02124D54E94_inline(L_53, L_54, L_58, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_8 = L_59;
		int32_t L_60 = V_6;
		int32_t L_61 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_62;
		L_62 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_60, 1)), L_61, NULL);
		V_6 = L_62;
		goto IL_00e1;
	}

IL_00d2:
	{
		Func_3_t2A705431F31EECAEC279195AA760991DB3B4104C* L_63 = ___1_f;
		double L_64 = V_8;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_65 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_63);
		double L_66;
		L_66 = Func_3_Invoke_mD0BA1A9413189754CCE96821856EA02124D54E94_inline(L_63, L_64, L_65, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_8 = L_66;
	}

IL_00e1:
	{
		int32_t L_67 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_00e7:
	{
		int32_t L_68 = V_9;
		int32_t L_69 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___ColumnCount;
		if ((((int32_t)L_68) < ((int32_t)L_69)))
		{
			goto IL_0099;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_70 = ___0_target;
		int32_t L_71 = V_5;
		Func_3_t4A84D23D01C9E182A3CFA36E5B7F3F13F9B82367* L_72 = ___2_finalize;
		double L_73 = V_8;
		int32_t L_74 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___ColumnCount;
		NullCheck(L_72);
		double L_75;
		L_75 = Func_3_Invoke_mF642F653D2CBBFA1FB0FA506D21B79C6C4AFAC87_inline(L_72, L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 5));
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(L_71), (double)L_75);
		int32_t L_76 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_010d:
	{
		int32_t L_77 = V_5;
		int32_t L_78 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		if ((((int32_t)L_77) < ((int32_t)L_78)))
		{
			goto IL_0071;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29304
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_MapIndexedToUnchecked_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF904C3A93546E91796B05FF0BF8047635576DE9C_gshared (SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* __this, MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* ___0_target, Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873* ___1_f, int32_t ___2_zeros, int32_t ___3_existingData, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* V_1 = NULL;
	double V_2 = 0.0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_4 = NULL;
	List_1_t495F03F47D827883530F951D563C0BB7340E5995* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	double V_9 = 0.0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	double V_13 = 0.0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t G_B3_0 = 0;
	double G_B11_0 = 0.0;
	{
		int32_t L_0 = ___2_zeros;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_002e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_1 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_2 = L_1;
		Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873* L_2 = ___1_f;
		double L_3 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_2);
		double L_4;
		L_4 = Func_4_Invoke_m83336576648301FCB069A1930FEB8AD0B3FA5AE8_inline(L_2, 0, 1, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		double L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_5);
		bool L_7;
		L_7 = Double_Equals_m342E8F178661ABF8306D58D5F2130C58E0601DA3((&V_2), L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_002f;
	}

IL_002e:
	{
		G_B3_0 = 1;
	}

IL_002f:
	{
		V_0 = (bool)G_B3_0;
		MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* L_8 = ___0_target;
		V_1 = ((SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 4)));
		SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* L_9 = V_1;
		if (!L_9)
		{
			goto IL_01f2;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* L_10 = V_1;
		NullCheck(L_10);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = L_10->___RowPointers;
		V_3 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___ColumnIndices;
		NullCheck(L_12);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98(L_13, ((int32_t)(((RuntimeArray*)L_12)->max_length)), List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		V_4 = L_13;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_14 = __this->___Values;
		NullCheck(L_14);
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_15 = (List_1_t495F03F47D827883530F951D563C0BB7340E5995*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 5));
		List_1__ctor_m3B40D7C96D362514EEA8DF87AF83D34EE5AAE421(L_15, ((int32_t)(((RuntimeArray*)L_14)->max_length)), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_5 = L_15;
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_0127;
		}
	}
	{
		V_6 = 0;
		V_7 = 0;
		goto IL_0115;
	}

IL_0073:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_3;
		int32_t L_18 = V_7;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_19 = V_5;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_inline(L_19, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (int32_t)L_20);
		V_8 = 0;
		goto IL_0102;
	}

IL_0083:
	{
		int32_t L_21 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->___RowPointers;
		int32_t L_23 = V_7;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if ((((int32_t)L_21) >= ((int32_t)L_25)))
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = __this->___ColumnIndices;
		int32_t L_27 = V_6;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = V_8;
		if ((((int32_t)L_29) == ((int32_t)L_30)))
		{
			goto IL_00b0;
		}
	}

IL_009f:
	{
		Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873* L_31 = ___1_f;
		int32_t L_32 = V_7;
		int32_t L_33 = V_8;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_34 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_31);
		double L_35;
		L_35 = Func_4_Invoke_m83336576648301FCB069A1930FEB8AD0B3FA5AE8_inline(L_31, L_32, L_33, L_34, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B11_0 = L_35;
		goto IL_00cc;
	}

IL_00b0:
	{
		Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873* L_36 = ___1_f;
		int32_t L_37 = V_7;
		int32_t L_38 = V_8;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_39 = __this->___Values;
		int32_t L_40 = V_6;
		int32_t L_41 = L_40;
		V_6 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		NullCheck(L_39);
		int32_t L_42 = L_41;
		double L_43 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_36);
		double L_44;
		L_44 = Func_4_Invoke_m83336576648301FCB069A1930FEB8AD0B3FA5AE8_inline(L_36, L_37, L_38, L_43, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B11_0 = L_44;
	}

IL_00cc:
	{
		V_9 = G_B11_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_45 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_2 = L_45;
		double L_46 = V_9;
		double L_47 = L_46;
		RuntimeObject* L_48 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_47);
		bool L_49;
		L_49 = Double_Equals_m342E8F178661ABF8306D58D5F2130C58E0601DA3((&V_2), L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		if (L_49)
		{
			goto IL_00fc;
		}
	}
	{
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_50 = V_5;
		double L_51 = V_9;
		NullCheck(L_50);
		List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_inline(L_50, L_51, il2cpp_rgctx_method(method->rgctx_data, 8));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_52 = V_4;
		int32_t L_53 = V_8;
		NullCheck(L_52);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_52, L_53, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_00fc:
	{
		int32_t L_54 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0102:
	{
		int32_t L_55 = V_8;
		int32_t L_56 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___ColumnCount;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_57 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_0115:
	{
		int32_t L_58 = V_7;
		int32_t L_59 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		if ((((int32_t)L_58) < ((int32_t)L_59)))
		{
			goto IL_0073;
		}
	}
	{
		goto IL_01c8;
	}

IL_0127:
	{
		V_10 = 0;
		goto IL_01bb;
	}

IL_012f:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_3;
		int32_t L_61 = V_10;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_62 = V_5;
		NullCheck(L_62);
		int32_t L_63;
		L_63 = List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_inline(L_62, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (int32_t)L_63);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = __this->___RowPointers;
		int32_t L_65 = V_10;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		int32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = __this->___RowPointers;
		int32_t L_69 = V_10;
		NullCheck(L_68);
		int32_t L_70 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		int32_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		V_11 = L_71;
		V_12 = L_67;
		goto IL_01af;
	}

IL_0154:
	{
		Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873* L_72 = ___1_f;
		int32_t L_73 = V_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = __this->___ColumnIndices;
		int32_t L_75 = V_12;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		int32_t L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_78 = __this->___Values;
		int32_t L_79 = V_12;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		double L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		NullCheck(L_72);
		double L_82;
		L_82 = Func_4_Invoke_m83336576648301FCB069A1930FEB8AD0B3FA5AE8_inline(L_72, L_73, L_77, L_81, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_13 = L_82;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_83 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_2 = L_83;
		double L_84 = V_13;
		double L_85 = L_84;
		RuntimeObject* L_86 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_85);
		bool L_87;
		L_87 = Double_Equals_m342E8F178661ABF8306D58D5F2130C58E0601DA3((&V_2), L_86, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		if (L_87)
		{
			goto IL_01a9;
		}
	}
	{
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_88 = V_5;
		double L_89 = V_13;
		NullCheck(L_88);
		List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_inline(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 8));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_90 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = __this->___ColumnIndices;
		int32_t L_92 = V_12;
		NullCheck(L_91);
		int32_t L_93 = L_92;
		int32_t L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		NullCheck(L_90);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_90, L_94, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_01a9:
	{
		int32_t L_95 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_95, 1));
	}

IL_01af:
	{
		int32_t L_96 = V_12;
		int32_t L_97 = V_11;
		if ((((int32_t)L_96) < ((int32_t)L_97)))
		{
			goto IL_0154;
		}
	}
	{
		int32_t L_98 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_01bb:
	{
		int32_t L_99 = V_10;
		int32_t L_100 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		if ((((int32_t)L_99) < ((int32_t)L_100)))
		{
			goto IL_012f;
		}
	}

IL_01c8:
	{
		SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* L_101 = V_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_102 = V_4;
		NullCheck(L_102);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_103;
		L_103 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_102, List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		NullCheck(L_101);
		L_101->___ColumnIndices = L_103;
		Il2CppCodeGenWriteBarrier((void**)(&L_101->___ColumnIndices), (void*)L_103);
		SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* L_104 = V_1;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_105 = V_5;
		NullCheck(L_105);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_106;
		L_106 = List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3(L_105, il2cpp_rgctx_method(method->rgctx_data, 9));
		NullCheck(L_104);
		L_104->___Values = L_106;
		Il2CppCodeGenWriteBarrier((void**)(&L_104->___Values), (void*)L_106);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_107 = V_3;
		int32_t L_108 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_109 = V_5;
		NullCheck(L_109);
		int32_t L_110;
		L_110 = List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_inline(L_109, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_107);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(L_108), (int32_t)L_110);
		return;
	}

IL_01f2:
	{
		int32_t L_111 = ___3_existingData;
		if (L_111)
		{
			goto IL_01ff;
		}
	}
	{
		bool L_112 = V_0;
		if (L_112)
		{
			goto IL_01ff;
		}
	}
	{
		MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* L_113 = ___0_target;
		NullCheck(L_113);
		VirtualActionInvoker0::Invoke(10, L_113);
	}

IL_01ff:
	{
		bool L_114 = V_0;
		if (!L_114)
		{
			goto IL_02aa;
		}
	}
	{
		V_14 = 0;
		goto IL_029c;
	}

IL_020d:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_115 = __this->___RowPointers;
		int32_t L_116 = V_14;
		NullCheck(L_115);
		int32_t L_117 = L_116;
		int32_t L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		V_15 = L_118;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_119 = __this->___RowPointers;
		int32_t L_120 = V_14;
		NullCheck(L_119);
		int32_t L_121 = ((int32_t)il2cpp_codegen_add(L_120, 1));
		int32_t L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		V_16 = L_122;
		V_17 = 0;
		goto IL_028c;
	}

IL_022a:
	{
		int32_t L_123 = V_15;
		int32_t L_124 = V_16;
		if ((((int32_t)L_123) >= ((int32_t)L_124)))
		{
			goto IL_026d;
		}
	}
	{
		int32_t L_125 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_126 = __this->___ColumnIndices;
		int32_t L_127 = V_15;
		NullCheck(L_126);
		int32_t L_128 = L_127;
		int32_t L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		if ((!(((uint32_t)L_125) == ((uint32_t)L_129))))
		{
			goto IL_026d;
		}
	}
	{
		MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* L_130 = ___0_target;
		int32_t L_131 = V_14;
		int32_t L_132 = V_17;
		Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873* L_133 = ___1_f;
		int32_t L_134 = V_14;
		int32_t L_135 = V_17;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_136 = __this->___Values;
		int32_t L_137 = V_15;
		NullCheck(L_136);
		int32_t L_138 = L_137;
		double L_139 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		NullCheck(L_133);
		double L_140;
		L_140 = Func_4_Invoke_m83336576648301FCB069A1930FEB8AD0B3FA5AE8_inline(L_133, L_134, L_135, L_139, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_130);
		VirtualActionInvoker3< int32_t, int32_t, double >::Invoke(9, L_130, L_131, L_132, L_140);
		int32_t L_141 = V_15;
		int32_t L_142 = V_16;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_143;
		L_143 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_141, 1)), L_142, NULL);
		V_15 = L_143;
		goto IL_0286;
	}

IL_026d:
	{
		MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* L_144 = ___0_target;
		int32_t L_145 = V_14;
		int32_t L_146 = V_17;
		Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873* L_147 = ___1_f;
		int32_t L_148 = V_14;
		int32_t L_149 = V_17;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_150 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_147);
		double L_151;
		L_151 = Func_4_Invoke_m83336576648301FCB069A1930FEB8AD0B3FA5AE8_inline(L_147, L_148, L_149, L_150, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_144);
		VirtualActionInvoker3< int32_t, int32_t, double >::Invoke(9, L_144, L_145, L_146, L_151);
	}

IL_0286:
	{
		int32_t L_152 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_152, 1));
	}

IL_028c:
	{
		int32_t L_153 = V_17;
		int32_t L_154 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___ColumnCount;
		if ((((int32_t)L_153) < ((int32_t)L_154)))
		{
			goto IL_022a;
		}
	}
	{
		int32_t L_155 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_155, 1));
	}

IL_029c:
	{
		int32_t L_156 = V_14;
		int32_t L_157 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		if ((((int32_t)L_156) < ((int32_t)L_157)))
		{
			goto IL_020d;
		}
	}
	{
		return;
	}

IL_02aa:
	{
		V_18 = 0;
		goto IL_030a;
	}

IL_02af:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_158 = __this->___RowPointers;
		int32_t L_159 = V_18;
		NullCheck(L_158);
		int32_t L_160 = L_159;
		int32_t L_161 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_162 = __this->___RowPointers;
		int32_t L_163 = V_18;
		NullCheck(L_162);
		int32_t L_164 = ((int32_t)il2cpp_codegen_add(L_163, 1));
		int32_t L_165 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		V_19 = L_165;
		V_20 = L_161;
		goto IL_02fe;
	}

IL_02c9:
	{
		MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* L_166 = ___0_target;
		int32_t L_167 = V_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_168 = __this->___ColumnIndices;
		int32_t L_169 = V_20;
		NullCheck(L_168);
		int32_t L_170 = L_169;
		int32_t L_171 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873* L_172 = ___1_f;
		int32_t L_173 = V_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_174 = __this->___ColumnIndices;
		int32_t L_175 = V_20;
		NullCheck(L_174);
		int32_t L_176 = L_175;
		int32_t L_177 = (L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_178 = __this->___Values;
		int32_t L_179 = V_20;
		NullCheck(L_178);
		int32_t L_180 = L_179;
		double L_181 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		NullCheck(L_172);
		double L_182;
		L_182 = Func_4_Invoke_m83336576648301FCB069A1930FEB8AD0B3FA5AE8_inline(L_172, L_173, L_177, L_181, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_166);
		VirtualActionInvoker3< int32_t, int32_t, double >::Invoke(9, L_166, L_167, L_171, L_182);
		int32_t L_183 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_183, 1));
	}

IL_02fe:
	{
		int32_t L_184 = V_20;
		int32_t L_185 = V_19;
		if ((((int32_t)L_184) < ((int32_t)L_185)))
		{
			goto IL_02c9;
		}
	}
	{
		int32_t L_186 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_186, 1));
	}

IL_030a:
	{
		int32_t L_187 = V_18;
		int32_t L_188 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		if ((((int32_t)L_187) < ((int32_t)L_188)))
		{
			goto IL_02af;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29305
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_MapSubMatrixIndexedToUnchecked_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mC991014C0663D639A1F8100B45D26B51B6C70F73_gshared (SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* __this, MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* ___0_target, Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873* ___1_f, int32_t ___2_sourceRowIndex, int32_t ___3_targetRowIndex, int32_t ___4_rowCount, int32_t ___5_sourceColumnIndex, int32_t ___6_targetColumnIndex, int32_t ___7_columnCount, int32_t ___8_zeros, int32_t ___9_existingData, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* V_0 = NULL;
	bool V_1 = false;
	double V_2 = 0.0;
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
	int32_t V_14 = 0;
	int32_t G_B5_0 = 0;
	{
		MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* L_0 = ___0_target;
		V_0 = ((SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 1)));
		SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* L_2 = V_0;
		Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873* L_3 = ___1_f;
		int32_t L_4 = ___2_sourceRowIndex;
		int32_t L_5 = ___3_targetRowIndex;
		int32_t L_6 = ___4_rowCount;
		int32_t L_7 = ___5_sourceColumnIndex;
		int32_t L_8 = ___6_targetColumnIndex;
		int32_t L_9 = ___7_columnCount;
		int32_t L_10 = ___8_zeros;
		int32_t L_11 = ___9_existingData;
		SparseCompressedRowMatrixStorage_1_MapSubMatrixIndexedToUnchecked_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m96F104FD9D284E4E6265E97045765B92BBBE485A(__this, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}

IL_0022:
	{
		int32_t L_12 = ___8_zeros;
		if ((((int32_t)L_12) == ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_13 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_2 = L_13;
		Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873* L_14 = ___1_f;
		double L_15 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_14);
		double L_16;
		L_16 = Func_4_Invoke_m83336576648301FCB069A1930FEB8AD0B3FA5AE8_inline(L_14, 0, 1, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		double L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 5), &L_17);
		bool L_19;
		L_19 = Double_Equals_m342E8F178661ABF8306D58D5F2130C58E0601DA3((&V_2), L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		G_B5_0 = ((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		goto IL_0052;
	}

IL_0051:
	{
		G_B5_0 = 1;
	}

IL_0052:
	{
		V_1 = (bool)G_B5_0;
		int32_t L_20 = ___9_existingData;
		if (L_20)
		{
			goto IL_0068;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_0068;
		}
	}
	{
		MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* L_22 = ___0_target;
		int32_t L_23 = ___3_targetRowIndex;
		int32_t L_24 = ___4_rowCount;
		int32_t L_25 = ___6_targetColumnIndex;
		int32_t L_26 = ___7_columnCount;
		NullCheck(L_22);
		VirtualActionInvoker4< int32_t, int32_t, int32_t, int32_t >::Invoke(11, L_22, L_23, L_24, L_25, L_26);
	}

IL_0068:
	{
		bool L_27 = V_1;
		if (!L_27)
		{
			goto IL_013a;
		}
	}
	{
		int32_t L_28 = ___2_sourceRowIndex;
		V_3 = L_28;
		int32_t L_29 = ___3_targetRowIndex;
		V_4 = L_29;
		goto IL_012f;
	}

IL_0079:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->___RowPointers;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		int32_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_5 = L_33;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = __this->___RowPointers;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		int32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_6 = L_37;
		goto IL_0097;
	}

IL_0091:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_0097:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = __this->___ColumnIndices;
		int32_t L_40 = V_5;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		int32_t L_43 = ___5_sourceColumnIndex;
		if ((((int32_t)L_42) >= ((int32_t)L_43)))
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_44 = V_5;
		int32_t L_45 = V_6;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_0091;
		}
	}

IL_00aa:
	{
		int32_t L_46 = ___5_sourceColumnIndex;
		V_7 = L_46;
		int32_t L_47 = ___6_targetColumnIndex;
		V_8 = L_47;
		goto IL_011c;
	}

IL_00b4:
	{
		int32_t L_48 = V_5;
		int32_t L_49 = V_6;
		if ((((int32_t)L_48) >= ((int32_t)L_49)))
		{
			goto IL_00f7;
		}
	}
	{
		int32_t L_50 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = __this->___ColumnIndices;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		int32_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		if ((!(((uint32_t)L_50) == ((uint32_t)L_54))))
		{
			goto IL_00f7;
		}
	}
	{
		MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* L_55 = ___0_target;
		int32_t L_56 = V_4;
		int32_t L_57 = V_8;
		Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873* L_58 = ___1_f;
		int32_t L_59 = V_4;
		int32_t L_60 = V_8;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_61 = __this->___Values;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		double L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_58);
		double L_65;
		L_65 = Func_4_Invoke_m83336576648301FCB069A1930FEB8AD0B3FA5AE8_inline(L_58, L_59, L_60, L_64, il2cpp_rgctx_method(method->rgctx_data, 4));
		NullCheck(L_55);
		VirtualActionInvoker3< int32_t, int32_t, double >::Invoke(9, L_55, L_56, L_57, L_65);
		int32_t L_66 = V_5;
		int32_t L_67 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_68;
		L_68 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_66, 1)), L_67, NULL);
		V_5 = L_68;
		goto IL_0110;
	}

IL_00f7:
	{
		MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* L_69 = ___0_target;
		int32_t L_70 = V_4;
		int32_t L_71 = V_8;
		Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873* L_72 = ___1_f;
		int32_t L_73 = V_4;
		int32_t L_74 = V_8;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_75 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_72);
		double L_76;
		L_76 = Func_4_Invoke_m83336576648301FCB069A1930FEB8AD0B3FA5AE8_inline(L_72, L_73, L_74, L_75, il2cpp_rgctx_method(method->rgctx_data, 4));
		NullCheck(L_69);
		VirtualActionInvoker3< int32_t, int32_t, double >::Invoke(9, L_69, L_70, L_71, L_76);
	}

IL_0110:
	{
		int32_t L_77 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		int32_t L_78 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_011c:
	{
		int32_t L_79 = V_7;
		int32_t L_80 = ___5_sourceColumnIndex;
		int32_t L_81 = ___7_columnCount;
		if ((((int32_t)L_79) < ((int32_t)((int32_t)il2cpp_codegen_add(L_80, L_81)))))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_82 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_82, 1));
		int32_t L_83 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_83, 1));
	}

IL_012f:
	{
		int32_t L_84 = V_3;
		int32_t L_85 = ___2_sourceRowIndex;
		int32_t L_86 = ___4_rowCount;
		if ((((int32_t)L_84) < ((int32_t)((int32_t)il2cpp_codegen_add(L_85, L_86)))))
		{
			goto IL_0079;
		}
	}
	{
		return;
	}

IL_013a:
	{
		int32_t L_87 = ___6_targetColumnIndex;
		int32_t L_88 = ___5_sourceColumnIndex;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_87, L_88));
		int32_t L_89 = ___2_sourceRowIndex;
		V_10 = L_89;
		int32_t L_90 = ___3_targetRowIndex;
		V_11 = L_90;
		goto IL_01c8;
	}

IL_014a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = __this->___RowPointers;
		int32_t L_92 = V_10;
		NullCheck(L_91);
		int32_t L_93 = L_92;
		int32_t L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_95 = __this->___RowPointers;
		int32_t L_96 = V_10;
		NullCheck(L_95);
		int32_t L_97 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		int32_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		V_12 = L_98;
		V_13 = L_94;
		goto IL_01b6;
	}

IL_0164:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_99 = __this->___ColumnIndices;
		int32_t L_100 = V_13;
		NullCheck(L_99);
		int32_t L_101 = L_100;
		int32_t L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		int32_t L_103 = ___5_sourceColumnIndex;
		if ((((int32_t)L_102) < ((int32_t)L_103)))
		{
			goto IL_01b0;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = __this->___ColumnIndices;
		int32_t L_105 = V_13;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		int32_t L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		int32_t L_108 = ___5_sourceColumnIndex;
		int32_t L_109 = ___7_columnCount;
		if ((((int32_t)L_107) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_108, L_109)))))
		{
			goto IL_01b0;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->___ColumnIndices;
		int32_t L_111 = V_13;
		NullCheck(L_110);
		int32_t L_112 = L_111;
		int32_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		int32_t L_114 = V_9;
		V_14 = ((int32_t)il2cpp_codegen_add(L_113, L_114));
		MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* L_115 = ___0_target;
		int32_t L_116 = V_11;
		int32_t L_117 = V_14;
		Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873* L_118 = ___1_f;
		int32_t L_119 = V_11;
		int32_t L_120 = V_14;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_121 = __this->___Values;
		int32_t L_122 = V_13;
		NullCheck(L_121);
		int32_t L_123 = L_122;
		double L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		NullCheck(L_118);
		double L_125;
		L_125 = Func_4_Invoke_m83336576648301FCB069A1930FEB8AD0B3FA5AE8_inline(L_118, L_119, L_120, L_124, il2cpp_rgctx_method(method->rgctx_data, 4));
		NullCheck(L_115);
		VirtualActionInvoker3< int32_t, int32_t, double >::Invoke(9, L_115, L_116, L_117, L_125);
	}

IL_01b0:
	{
		int32_t L_126 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_126, 1));
	}

IL_01b6:
	{
		int32_t L_127 = V_13;
		int32_t L_128 = V_12;
		if ((((int32_t)L_127) < ((int32_t)L_128)))
		{
			goto IL_0164;
		}
	}
	{
		int32_t L_129 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_129, 1));
		int32_t L_130 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_130, 1));
	}

IL_01c8:
	{
		int32_t L_131 = V_10;
		int32_t L_132 = ___2_sourceRowIndex;
		int32_t L_133 = ___4_rowCount;
		if ((((int32_t)L_131) < ((int32_t)((int32_t)il2cpp_codegen_add(L_132, L_133)))))
		{
			goto IL_014a;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29306
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_MapSubMatrixIndexedToUnchecked_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m96F104FD9D284E4E6265E97045765B92BBBE485A_gshared (SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* __this, SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* ___0_target, Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873* ___1_f, int32_t ___2_sourceRowIndex, int32_t ___3_targetRowIndex, int32_t ___4_rowCount, int32_t ___5_sourceColumnIndex, int32_t ___6_targetColumnIndex, int32_t ___7_columnCount, int32_t ___8_zeros, int32_t ___9_existingData, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	List_1_t495F03F47D827883530F951D563C0BB7340E5995* V_5 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_6 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	double V_14 = 0.0;
	double V_15 = 0.0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	double V_21 = 0.0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	int32_t V_32 = 0;
	int32_t V_33 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___8_zeros;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_1 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_4 = L_1;
		Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873* L_2 = ___1_f;
		double L_3 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_2);
		double L_4;
		L_4 = Func_4_Invoke_m83336576648301FCB069A1930FEB8AD0B3FA5AE8_inline(L_2, 0, 1, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		double L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_5);
		bool L_7;
		L_7 = Double_Equals_m342E8F178661ABF8306D58D5F2130C58E0601DA3((&V_4), L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B3_0 = 1;
	}

IL_0031:
	{
		V_0 = (bool)G_B3_0;
		int32_t L_8 = ___9_existingData;
		if (L_8)
		{
			goto IL_0047;
		}
	}
	{
		bool L_9 = V_0;
		if (L_9)
		{
			goto IL_0047;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* L_10 = ___0_target;
		int32_t L_11 = ___3_targetRowIndex;
		int32_t L_12 = ___4_rowCount;
		int32_t L_13 = ___6_targetColumnIndex;
		int32_t L_14 = ___7_columnCount;
		NullCheck((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)L_10);
		VirtualActionInvoker4< int32_t, int32_t, int32_t, int32_t >::Invoke(11, (MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)L_10, L_11, L_12, L_13, L_14);
	}

IL_0047:
	{
		int32_t L_15 = ___3_targetRowIndex;
		int32_t L_16 = ___2_sourceRowIndex;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_15, L_16));
		int32_t L_17 = ___6_targetColumnIndex;
		int32_t L_18 = ___5_sourceColumnIndex;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_17, L_18));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 7));
		double L_19 = ((Matrix_1_t0FF8F8B6CEFB2DEA1D3A91F538DB2510E2AC37D9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 7)))->___Zero;
		V_3 = L_19;
		SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* L_20 = ___0_target;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = SparseCompressedRowMatrixStorage_1_get_ValueCount_m66AB4B6107E0F71105BA13C9BDF29FB0D1A39CD5(L_20, il2cpp_rgctx_method(method->rgctx_data, 8));
		if (L_21)
		{
			goto IL_02ae;
		}
	}
	{
		int32_t L_22;
		L_22 = SparseCompressedRowMatrixStorage_1_get_ValueCount_m66AB4B6107E0F71105BA13C9BDF29FB0D1A39CD5(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_23 = (List_1_t495F03F47D827883530F951D563C0BB7340E5995*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 9));
		List_1__ctor_m3B40D7C96D362514EEA8DF87AF83D34EE5AAE421(L_23, L_22, il2cpp_rgctx_method(method->rgctx_data, 10));
		V_5 = L_23;
		int32_t L_24;
		L_24 = SparseCompressedRowMatrixStorage_1_get_ValueCount_m66AB4B6107E0F71105BA13C9BDF29FB0D1A39CD5(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_25 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98(L_25, L_24, List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		V_6 = L_25;
		SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* L_26 = ___0_target;
		NullCheck(L_26);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = L_26->___RowPointers;
		V_7 = L_27;
		bool L_28 = V_0;
		if (!L_28)
		{
			goto IL_01a5;
		}
	}
	{
		int32_t L_29 = ___2_sourceRowIndex;
		V_8 = L_29;
		goto IL_0195;
	}

IL_0093:
	{
		int32_t L_30 = V_8;
		int32_t L_31 = V_1;
		V_9 = ((int32_t)il2cpp_codegen_add(L_30, L_31));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_7;
		int32_t L_33 = V_9;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_34 = V_5;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_inline(L_34, il2cpp_rgctx_method(method->rgctx_data, 11));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (int32_t)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = __this->___RowPointers;
		int32_t L_37 = V_8;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		int32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_10 = L_39;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = __this->___RowPointers;
		int32_t L_41 = V_8;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_11 = L_43;
		goto IL_00c5;
	}

IL_00bf:
	{
		int32_t L_44 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00c5:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = __this->___ColumnIndices;
		int32_t L_46 = V_10;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		int32_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		int32_t L_49 = ___5_sourceColumnIndex;
		if ((((int32_t)L_48) >= ((int32_t)L_49)))
		{
			goto IL_00d8;
		}
	}
	{
		int32_t L_50 = V_10;
		int32_t L_51 = V_11;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_00bf;
		}
	}

IL_00d8:
	{
		int32_t L_52 = ___5_sourceColumnIndex;
		V_12 = L_52;
		int32_t L_53 = ___6_targetColumnIndex;
		V_13 = L_53;
		goto IL_0183;
	}

IL_00e5:
	{
		int32_t L_54 = V_10;
		int32_t L_55 = V_11;
		if ((((int32_t)L_54) >= ((int32_t)L_55)))
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_56 = V_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->___ColumnIndices;
		int32_t L_58 = V_10;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		int32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		if ((!(((uint32_t)L_56) == ((uint32_t)L_60))))
		{
			goto IL_0143;
		}
	}
	{
		Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873* L_61 = ___1_f;
		int32_t L_62 = V_9;
		int32_t L_63 = V_13;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_64 = __this->___Values;
		int32_t L_65 = V_10;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		double L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		NullCheck(L_61);
		double L_68;
		L_68 = Func_4_Invoke_m83336576648301FCB069A1930FEB8AD0B3FA5AE8_inline(L_61, L_62, L_63, L_67, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_14 = L_68;
		double L_69 = V_14;
		bool L_70;
		L_70 = Double_Equals_mAB526D98719C44EA42107A297B23A739F2E14138((&V_3), L_69, il2cpp_rgctx_method(method->rgctx_data, 13));
		if (L_70)
		{
			goto IL_0134;
		}
	}
	{
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_71 = V_5;
		double L_72 = V_14;
		NullCheck(L_71);
		List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_inline(L_71, L_72, il2cpp_rgctx_method(method->rgctx_data, 14));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_73 = V_6;
		int32_t L_74 = V_13;
		NullCheck(L_73);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_73, L_74, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_0134:
	{
		int32_t L_75 = V_10;
		int32_t L_76 = V_11;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_77;
		L_77 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_75, 1)), L_76, NULL);
		V_10 = L_77;
		goto IL_0177;
	}

IL_0143:
	{
		Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873* L_78 = ___1_f;
		int32_t L_79 = V_9;
		int32_t L_80 = V_13;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_81 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_78);
		double L_82;
		L_82 = Func_4_Invoke_m83336576648301FCB069A1930FEB8AD0B3FA5AE8_inline(L_78, L_79, L_80, L_81, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_15 = L_82;
		double L_83 = V_15;
		bool L_84;
		L_84 = Double_Equals_mAB526D98719C44EA42107A297B23A739F2E14138((&V_3), L_83, il2cpp_rgctx_method(method->rgctx_data, 13));
		if (L_84)
		{
			goto IL_0177;
		}
	}
	{
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_85 = V_5;
		double L_86 = V_15;
		NullCheck(L_85);
		List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_inline(L_85, L_86, il2cpp_rgctx_method(method->rgctx_data, 14));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_87 = V_6;
		int32_t L_88 = V_13;
		NullCheck(L_87);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_87, L_88, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_0177:
	{
		int32_t L_89 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_89, 1));
		int32_t L_90 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_90, 1));
	}

IL_0183:
	{
		int32_t L_91 = V_12;
		int32_t L_92 = ___5_sourceColumnIndex;
		int32_t L_93 = ___7_columnCount;
		if ((((int32_t)L_91) < ((int32_t)((int32_t)il2cpp_codegen_add(L_92, L_93)))))
		{
			goto IL_00e5;
		}
	}
	{
		int32_t L_94 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_0195:
	{
		int32_t L_95 = V_8;
		int32_t L_96 = ___2_sourceRowIndex;
		int32_t L_97 = ___4_rowCount;
		if ((((int32_t)L_95) < ((int32_t)((int32_t)il2cpp_codegen_add(L_96, L_97)))))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_025c;
	}

IL_01a5:
	{
		int32_t L_98 = ___2_sourceRowIndex;
		V_16 = L_98;
		goto IL_0251;
	}

IL_01ad:
	{
		int32_t L_99 = V_16;
		int32_t L_100 = V_1;
		V_17 = ((int32_t)il2cpp_codegen_add(L_99, L_100));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = V_7;
		int32_t L_102 = V_17;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_103 = V_5;
		NullCheck(L_103);
		int32_t L_104;
		L_104 = List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_inline(L_103, il2cpp_rgctx_method(method->rgctx_data, 11));
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(L_102), (int32_t)L_104);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = __this->___RowPointers;
		int32_t L_106 = V_16;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		int32_t L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_109 = __this->___RowPointers;
		int32_t L_110 = V_16;
		NullCheck(L_109);
		int32_t L_111 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		int32_t L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		V_18 = L_112;
		V_19 = L_108;
		goto IL_0245;
	}

IL_01d9:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_113 = __this->___ColumnIndices;
		int32_t L_114 = V_19;
		NullCheck(L_113);
		int32_t L_115 = L_114;
		int32_t L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		int32_t L_117 = ___5_sourceColumnIndex;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_023f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_118 = __this->___ColumnIndices;
		int32_t L_119 = V_19;
		NullCheck(L_118);
		int32_t L_120 = L_119;
		int32_t L_121 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		int32_t L_122 = ___5_sourceColumnIndex;
		int32_t L_123 = ___7_columnCount;
		if ((((int32_t)L_121) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_122, L_123)))))
		{
			goto IL_023f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_124 = __this->___ColumnIndices;
		int32_t L_125 = V_19;
		NullCheck(L_124);
		int32_t L_126 = L_125;
		int32_t L_127 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		int32_t L_128 = V_2;
		V_20 = ((int32_t)il2cpp_codegen_add(L_127, L_128));
		Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873* L_129 = ___1_f;
		int32_t L_130 = V_17;
		int32_t L_131 = V_20;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_132 = __this->___Values;
		int32_t L_133 = V_19;
		NullCheck(L_132);
		int32_t L_134 = L_133;
		double L_135 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		NullCheck(L_129);
		double L_136;
		L_136 = Func_4_Invoke_m83336576648301FCB069A1930FEB8AD0B3FA5AE8_inline(L_129, L_130, L_131, L_135, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_21 = L_136;
		double L_137 = V_21;
		bool L_138;
		L_138 = Double_Equals_mAB526D98719C44EA42107A297B23A739F2E14138((&V_3), L_137, il2cpp_rgctx_method(method->rgctx_data, 13));
		if (L_138)
		{
			goto IL_023f;
		}
	}
	{
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_139 = V_5;
		double L_140 = V_21;
		NullCheck(L_139);
		List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_inline(L_139, L_140, il2cpp_rgctx_method(method->rgctx_data, 14));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_141 = V_6;
		int32_t L_142 = V_20;
		NullCheck(L_141);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_141, L_142, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_023f:
	{
		int32_t L_143 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_0245:
	{
		int32_t L_144 = V_19;
		int32_t L_145 = V_18;
		if ((((int32_t)L_144) < ((int32_t)L_145)))
		{
			goto IL_01d9;
		}
	}
	{
		int32_t L_146 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_146, 1));
	}

IL_0251:
	{
		int32_t L_147 = V_16;
		int32_t L_148 = ___2_sourceRowIndex;
		int32_t L_149 = ___4_rowCount;
		if ((((int32_t)L_147) < ((int32_t)((int32_t)il2cpp_codegen_add(L_148, L_149)))))
		{
			goto IL_01ad;
		}
	}

IL_025c:
	{
		int32_t L_150 = ___3_targetRowIndex;
		int32_t L_151 = ___4_rowCount;
		V_22 = ((int32_t)il2cpp_codegen_add(L_150, L_151));
		goto IL_0277;
	}

IL_0265:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_152 = V_7;
		int32_t L_153 = V_22;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_154 = V_5;
		NullCheck(L_154);
		int32_t L_155;
		L_155 = List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_inline(L_154, il2cpp_rgctx_method(method->rgctx_data, 11));
		NullCheck(L_152);
		(L_152)->SetAt(static_cast<il2cpp_array_size_t>(L_153), (int32_t)L_155);
		int32_t L_156 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add(L_156, 1));
	}

IL_0277:
	{
		int32_t L_157 = V_22;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_158 = V_7;
		NullCheck(L_158);
		if ((((int32_t)L_157) < ((int32_t)((int32_t)(((RuntimeArray*)L_158)->max_length)))))
		{
			goto IL_0265;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* L_159 = ___0_target;
		NullCheck(L_159);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_160 = L_159->___RowPointers;
		SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* L_161 = ___0_target;
		NullCheck(L_161);
		int32_t L_162 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)L_161)->___RowCount;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_163 = V_5;
		NullCheck(L_163);
		int32_t L_164;
		L_164 = List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_inline(L_163, il2cpp_rgctx_method(method->rgctx_data, 11));
		NullCheck(L_160);
		(L_160)->SetAt(static_cast<il2cpp_array_size_t>(L_162), (int32_t)L_164);
		SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* L_165 = ___0_target;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_166 = V_5;
		NullCheck(L_166);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_167;
		L_167 = List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3(L_166, il2cpp_rgctx_method(method->rgctx_data, 15));
		NullCheck(L_165);
		L_165->___Values = L_167;
		Il2CppCodeGenWriteBarrier((void**)(&L_165->___Values), (void*)L_167);
		SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* L_168 = ___0_target;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_169 = V_6;
		NullCheck(L_169);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_170;
		L_170 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_169, List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		NullCheck(L_168);
		L_168->___ColumnIndices = L_170;
		Il2CppCodeGenWriteBarrier((void**)(&L_168->___ColumnIndices), (void*)L_170);
		return;
	}

IL_02ae:
	{
		bool L_171 = V_0;
		if (!L_171)
		{
			goto IL_0386;
		}
	}
	{
		int32_t L_172 = ___2_sourceRowIndex;
		V_23 = L_172;
		int32_t L_173 = ___3_targetRowIndex;
		V_24 = L_173;
		goto IL_037a;
	}

IL_02c0:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_174 = __this->___RowPointers;
		int32_t L_175 = V_23;
		NullCheck(L_174);
		int32_t L_176 = L_175;
		int32_t L_177 = (L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		V_25 = L_177;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_178 = __this->___RowPointers;
		int32_t L_179 = V_23;
		NullCheck(L_178);
		int32_t L_180 = ((int32_t)il2cpp_codegen_add(L_179, 1));
		int32_t L_181 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		V_26 = L_181;
		goto IL_02e0;
	}

IL_02da:
	{
		int32_t L_182 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add(L_182, 1));
	}

IL_02e0:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_183 = __this->___ColumnIndices;
		int32_t L_184 = V_25;
		NullCheck(L_183);
		int32_t L_185 = L_184;
		int32_t L_186 = (L_183)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
		int32_t L_187 = ___5_sourceColumnIndex;
		if ((((int32_t)L_186) >= ((int32_t)L_187)))
		{
			goto IL_02f3;
		}
	}
	{
		int32_t L_188 = V_25;
		int32_t L_189 = V_26;
		if ((((int32_t)L_188) < ((int32_t)L_189)))
		{
			goto IL_02da;
		}
	}

IL_02f3:
	{
		int32_t L_190 = ___5_sourceColumnIndex;
		V_27 = L_190;
		int32_t L_191 = ___6_targetColumnIndex;
		V_28 = L_191;
		goto IL_0365;
	}

IL_02fd:
	{
		int32_t L_192 = V_25;
		int32_t L_193 = V_26;
		if ((((int32_t)L_192) >= ((int32_t)L_193)))
		{
			goto IL_0340;
		}
	}
	{
		int32_t L_194 = V_27;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_195 = __this->___ColumnIndices;
		int32_t L_196 = V_25;
		NullCheck(L_195);
		int32_t L_197 = L_196;
		int32_t L_198 = (L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_197));
		if ((!(((uint32_t)L_194) == ((uint32_t)L_198))))
		{
			goto IL_0340;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* L_199 = ___0_target;
		int32_t L_200 = V_24;
		int32_t L_201 = V_28;
		Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873* L_202 = ___1_f;
		int32_t L_203 = V_24;
		int32_t L_204 = V_28;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_205 = __this->___Values;
		int32_t L_206 = V_25;
		NullCheck(L_205);
		int32_t L_207 = L_206;
		double L_208 = (L_205)->GetAt(static_cast<il2cpp_array_size_t>(L_207));
		NullCheck(L_202);
		double L_209;
		L_209 = Func_4_Invoke_m83336576648301FCB069A1930FEB8AD0B3FA5AE8_inline(L_202, L_203, L_204, L_208, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)L_199);
		VirtualActionInvoker3< int32_t, int32_t, double >::Invoke(9, (MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)L_199, L_200, L_201, L_209);
		int32_t L_210 = V_25;
		int32_t L_211 = V_26;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_212;
		L_212 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_210, 1)), L_211, NULL);
		V_25 = L_212;
		goto IL_0359;
	}

IL_0340:
	{
		SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* L_213 = ___0_target;
		int32_t L_214 = V_24;
		int32_t L_215 = V_28;
		Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873* L_216 = ___1_f;
		int32_t L_217 = V_24;
		int32_t L_218 = V_28;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_219 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_216);
		double L_220;
		L_220 = Func_4_Invoke_m83336576648301FCB069A1930FEB8AD0B3FA5AE8_inline(L_216, L_217, L_218, L_219, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)L_213);
		VirtualActionInvoker3< int32_t, int32_t, double >::Invoke(9, (MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)L_213, L_214, L_215, L_220);
	}

IL_0359:
	{
		int32_t L_221 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_221, 1));
		int32_t L_222 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add(L_222, 1));
	}

IL_0365:
	{
		int32_t L_223 = V_27;
		int32_t L_224 = ___5_sourceColumnIndex;
		int32_t L_225 = ___7_columnCount;
		if ((((int32_t)L_223) < ((int32_t)((int32_t)il2cpp_codegen_add(L_224, L_225)))))
		{
			goto IL_02fd;
		}
	}
	{
		int32_t L_226 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_226, 1));
		int32_t L_227 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add(L_227, 1));
	}

IL_037a:
	{
		int32_t L_228 = V_23;
		int32_t L_229 = ___2_sourceRowIndex;
		int32_t L_230 = ___4_rowCount;
		if ((((int32_t)L_228) < ((int32_t)((int32_t)il2cpp_codegen_add(L_229, L_230)))))
		{
			goto IL_02c0;
		}
	}
	{
		return;
	}

IL_0386:
	{
		int32_t L_231 = ___2_sourceRowIndex;
		V_29 = L_231;
		int32_t L_232 = ___3_targetRowIndex;
		V_30 = L_232;
		goto IL_040c;
	}

IL_038f:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_233 = __this->___RowPointers;
		int32_t L_234 = V_29;
		NullCheck(L_233);
		int32_t L_235 = L_234;
		int32_t L_236 = (L_233)->GetAt(static_cast<il2cpp_array_size_t>(L_235));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_237 = __this->___RowPointers;
		int32_t L_238 = V_29;
		NullCheck(L_237);
		int32_t L_239 = ((int32_t)il2cpp_codegen_add(L_238, 1));
		int32_t L_240 = (L_237)->GetAt(static_cast<il2cpp_array_size_t>(L_239));
		V_31 = L_240;
		V_32 = L_236;
		goto IL_03fa;
	}

IL_03a9:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_241 = __this->___ColumnIndices;
		int32_t L_242 = V_32;
		NullCheck(L_241);
		int32_t L_243 = L_242;
		int32_t L_244 = (L_241)->GetAt(static_cast<il2cpp_array_size_t>(L_243));
		int32_t L_245 = ___5_sourceColumnIndex;
		if ((((int32_t)L_244) < ((int32_t)L_245)))
		{
			goto IL_03f4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_246 = __this->___ColumnIndices;
		int32_t L_247 = V_32;
		NullCheck(L_246);
		int32_t L_248 = L_247;
		int32_t L_249 = (L_246)->GetAt(static_cast<il2cpp_array_size_t>(L_248));
		int32_t L_250 = ___5_sourceColumnIndex;
		int32_t L_251 = ___7_columnCount;
		if ((((int32_t)L_249) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_250, L_251)))))
		{
			goto IL_03f4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_252 = __this->___ColumnIndices;
		int32_t L_253 = V_32;
		NullCheck(L_252);
		int32_t L_254 = L_253;
		int32_t L_255 = (L_252)->GetAt(static_cast<il2cpp_array_size_t>(L_254));
		int32_t L_256 = V_2;
		V_33 = ((int32_t)il2cpp_codegen_add(L_255, L_256));
		SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* L_257 = ___0_target;
		int32_t L_258 = V_30;
		int32_t L_259 = V_33;
		Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873* L_260 = ___1_f;
		int32_t L_261 = V_30;
		int32_t L_262 = V_33;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_263 = __this->___Values;
		int32_t L_264 = V_32;
		NullCheck(L_263);
		int32_t L_265 = L_264;
		double L_266 = (L_263)->GetAt(static_cast<il2cpp_array_size_t>(L_265));
		NullCheck(L_260);
		double L_267;
		L_267 = Func_4_Invoke_m83336576648301FCB069A1930FEB8AD0B3FA5AE8_inline(L_260, L_261, L_262, L_266, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)L_257);
		VirtualActionInvoker3< int32_t, int32_t, double >::Invoke(9, (MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)L_257, L_258, L_259, L_267);
	}

IL_03f4:
	{
		int32_t L_268 = V_32;
		V_32 = ((int32_t)il2cpp_codegen_add(L_268, 1));
	}

IL_03fa:
	{
		int32_t L_269 = V_32;
		int32_t L_270 = V_31;
		if ((((int32_t)L_269) < ((int32_t)L_270)))
		{
			goto IL_03a9;
		}
	}
	{
		int32_t L_271 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add(L_271, 1));
		int32_t L_272 = V_30;
		V_30 = ((int32_t)il2cpp_codegen_add(L_272, 1));
	}

IL_040c:
	{
		int32_t L_273 = V_29;
		int32_t L_274 = ___2_sourceRowIndex;
		int32_t L_275 = ___4_rowCount;
		if ((((int32_t)L_273) < ((int32_t)((int32_t)il2cpp_codegen_add(L_274, L_275)))))
		{
			goto IL_038f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_MapToUnchecked_TisComplex_tC7518465FEAE5F5138E1653314A611EEC09467A2_mDDCBD897CD0AA567387006B33FBE69557229EE53_gshared (SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* __this, MatrixStorage_1_tBCE5AA23E7860892C6021E3826C678EC7D17AF51* ___0_target, Func_2_t61463E95451501F9CA32136BA5E229D4318256F5* ___1_f, int32_t ___2_zeros, int32_t ___3_existingData, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	SparseCompressedRowMatrixStorage_1_t979FCD0F3A8F54F31AF30451262BE9FD5F61FDFF* V_1 = NULL;
	double V_2 = 0.0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_4 = NULL;
	List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t G_B3_0 = 0;
	Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	{
		int32_t L_0 = ___2_zeros;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_1 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_2 = L_1;
		Func_2_t61463E95451501F9CA32136BA5E229D4318256F5* L_2 = ___1_f;
		double L_3 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_2);
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_4;
		L_4 = Func_2_Invoke_mE1FB1490FA2CE19857F94C0511EA55F5E8402925_inline(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_5);
		bool L_7;
		L_7 = Double_Equals_m342E8F178661ABF8306D58D5F2130C58E0601DA3((&V_2), L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B3_0 = 1;
	}

IL_002d:
	{
		V_0 = (bool)G_B3_0;
		MatrixStorage_1_tBCE5AA23E7860892C6021E3826C678EC7D17AF51* L_8 = ___0_target;
		V_1 = ((SparseCompressedRowMatrixStorage_1_t979FCD0F3A8F54F31AF30451262BE9FD5F61FDFF*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 4)));
		SparseCompressedRowMatrixStorage_1_t979FCD0F3A8F54F31AF30451262BE9FD5F61FDFF* L_9 = V_1;
		if (!L_9)
		{
			goto IL_01dd;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_t979FCD0F3A8F54F31AF30451262BE9FD5F61FDFF* L_10 = V_1;
		NullCheck(L_10);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = L_10->___RowPointers;
		V_3 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___ColumnIndices;
		NullCheck(L_12);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98(L_13, ((int32_t)(((RuntimeArray*)L_12)->max_length)), List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		V_4 = L_13;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_14 = __this->___Values;
		NullCheck(L_14);
		List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356* L_15 = (List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 5));
		List_1__ctor_m2966311E08E4604AEDCA2222BD7B4B5E5C867D6F(L_15, ((int32_t)(((RuntimeArray*)L_14)->max_length)), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_5 = L_15;
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_011d;
		}
	}
	{
		V_6 = 0;
		V_7 = 0;
		goto IL_010b;
	}

IL_0071:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_3;
		int32_t L_18 = V_7;
		List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356* L_19 = V_5;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_m53C6591DADDBD6ABD3B8EA7FE009E5D1F293A28B_inline(L_19, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (int32_t)L_20);
		V_8 = 0;
		goto IL_00f8;
	}

IL_0081:
	{
		int32_t L_21 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->___RowPointers;
		int32_t L_23 = V_7;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if ((((int32_t)L_21) >= ((int32_t)L_25)))
		{
			goto IL_009d;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = __this->___ColumnIndices;
		int32_t L_27 = V_6;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = V_8;
		if ((((int32_t)L_29) == ((int32_t)L_30)))
		{
			goto IL_00aa;
		}
	}

IL_009d:
	{
		Func_2_t61463E95451501F9CA32136BA5E229D4318256F5* L_31 = ___1_f;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_32 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_31);
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_33;
		L_33 = Func_2_Invoke_mE1FB1490FA2CE19857F94C0511EA55F5E8402925_inline(L_31, L_32, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B11_0 = L_33;
		goto IL_00c2;
	}

IL_00aa:
	{
		Func_2_t61463E95451501F9CA32136BA5E229D4318256F5* L_34 = ___1_f;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_35 = __this->___Values;
		int32_t L_36 = V_6;
		int32_t L_37 = L_36;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		NullCheck(L_35);
		int32_t L_38 = L_37;
		double L_39 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_34);
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_40;
		L_40 = Func_2_Invoke_mE1FB1490FA2CE19857F94C0511EA55F5E8402925_inline(L_34, L_39, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B11_0 = L_40;
	}

IL_00c2:
	{
		V_9 = G_B11_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_41 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_2 = L_41;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_42 = V_9;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_43);
		bool L_45;
		L_45 = Double_Equals_m342E8F178661ABF8306D58D5F2130C58E0601DA3((&V_2), L_44, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		if (L_45)
		{
			goto IL_00f2;
		}
	}
	{
		List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356* L_46 = V_5;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_47 = V_9;
		NullCheck(L_46);
		List_1_Add_m8B3C68D214DA6E1733B5EBBD4608FA2C41A4A195_inline(L_46, L_47, il2cpp_rgctx_method(method->rgctx_data, 8));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_48 = V_4;
		int32_t L_49 = V_8;
		NullCheck(L_48);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_48, L_49, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_00f2:
	{
		int32_t L_50 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00f8:
	{
		int32_t L_51 = V_8;
		int32_t L_52 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___ColumnCount;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_53 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_010b:
	{
		int32_t L_54 = V_7;
		int32_t L_55 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_0071;
		}
	}
	{
		goto IL_01b3;
	}

IL_011d:
	{
		V_10 = 0;
		goto IL_01a6;
	}

IL_0125:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_3;
		int32_t L_57 = V_10;
		List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356* L_58 = V_5;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = List_1_get_Count_m53C6591DADDBD6ABD3B8EA7FE009E5D1F293A28B_inline(L_58, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (int32_t)L_59);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = __this->___RowPointers;
		int32_t L_61 = V_10;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		int32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = __this->___RowPointers;
		int32_t L_65 = V_10;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add(L_65, 1));
		int32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_11 = L_67;
		V_12 = L_63;
		goto IL_019a;
	}

IL_014a:
	{
		Func_2_t61463E95451501F9CA32136BA5E229D4318256F5* L_68 = ___1_f;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_69 = __this->___Values;
		int32_t L_70 = V_12;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		double L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_68);
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_73;
		L_73 = Func_2_Invoke_mE1FB1490FA2CE19857F94C0511EA55F5E8402925_inline(L_68, L_72, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_13 = L_73;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_74 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_2 = L_74;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_75 = V_13;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_76 = L_75;
		RuntimeObject* L_77 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_76);
		bool L_78;
		L_78 = Double_Equals_m342E8F178661ABF8306D58D5F2130C58E0601DA3((&V_2), L_77, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		if (L_78)
		{
			goto IL_0194;
		}
	}
	{
		List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356* L_79 = V_5;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_80 = V_13;
		NullCheck(L_79);
		List_1_Add_m8B3C68D214DA6E1733B5EBBD4608FA2C41A4A195_inline(L_79, L_80, il2cpp_rgctx_method(method->rgctx_data, 8));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_81 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = __this->___ColumnIndices;
		int32_t L_83 = V_12;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		int32_t L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_81);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_81, L_85, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_0194:
	{
		int32_t L_86 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_86, 1));
	}

IL_019a:
	{
		int32_t L_87 = V_12;
		int32_t L_88 = V_11;
		if ((((int32_t)L_87) < ((int32_t)L_88)))
		{
			goto IL_014a;
		}
	}
	{
		int32_t L_89 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_01a6:
	{
		int32_t L_90 = V_10;
		int32_t L_91 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_0125;
		}
	}

IL_01b3:
	{
		SparseCompressedRowMatrixStorage_1_t979FCD0F3A8F54F31AF30451262BE9FD5F61FDFF* L_92 = V_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_93 = V_4;
		NullCheck(L_93);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_94;
		L_94 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_93, List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		NullCheck(L_92);
		L_92->___ColumnIndices = L_94;
		Il2CppCodeGenWriteBarrier((void**)(&L_92->___ColumnIndices), (void*)L_94);
		SparseCompressedRowMatrixStorage_1_t979FCD0F3A8F54F31AF30451262BE9FD5F61FDFF* L_95 = V_1;
		List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356* L_96 = V_5;
		NullCheck(L_96);
		ComplexU5BU5D_tC7E7960A9C8E43F8AA1EE7CEA249DF1C8E3A1E3E* L_97;
		L_97 = List_1_ToArray_mC595AC03D204CA387F8597B44E85F7289589142E(L_96, il2cpp_rgctx_method(method->rgctx_data, 9));
		NullCheck(L_95);
		L_95->___Values = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_95->___Values), (void*)L_97);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_98 = V_3;
		int32_t L_99 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356* L_100 = V_5;
		NullCheck(L_100);
		int32_t L_101;
		L_101 = List_1_get_Count_m53C6591DADDBD6ABD3B8EA7FE009E5D1F293A28B_inline(L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(L_99), (int32_t)L_101);
		return;
	}

IL_01dd:
	{
		int32_t L_102 = ___3_existingData;
		if (L_102)
		{
			goto IL_01ea;
		}
	}
	{
		bool L_103 = V_0;
		if (L_103)
		{
			goto IL_01ea;
		}
	}
	{
		MatrixStorage_1_tBCE5AA23E7860892C6021E3826C678EC7D17AF51* L_104 = ___0_target;
		NullCheck(L_104);
		VirtualActionInvoker0::Invoke(10, L_104);
	}

IL_01ea:
	{
		bool L_105 = V_0;
		if (!L_105)
		{
			goto IL_028d;
		}
	}
	{
		V_14 = 0;
		goto IL_027f;
	}

IL_01f8:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_106 = __this->___RowPointers;
		int32_t L_107 = V_14;
		NullCheck(L_106);
		int32_t L_108 = L_107;
		int32_t L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		V_15 = L_109;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->___RowPointers;
		int32_t L_111 = V_14;
		NullCheck(L_110);
		int32_t L_112 = ((int32_t)il2cpp_codegen_add(L_111, 1));
		int32_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		V_16 = L_113;
		V_17 = 0;
		goto IL_026f;
	}

IL_0215:
	{
		int32_t L_114 = V_15;
		int32_t L_115 = V_16;
		if ((((int32_t)L_114) >= ((int32_t)L_115)))
		{
			goto IL_0254;
		}
	}
	{
		int32_t L_116 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_117 = __this->___ColumnIndices;
		int32_t L_118 = V_15;
		NullCheck(L_117);
		int32_t L_119 = L_118;
		int32_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		if ((!(((uint32_t)L_116) == ((uint32_t)L_120))))
		{
			goto IL_0254;
		}
	}
	{
		MatrixStorage_1_tBCE5AA23E7860892C6021E3826C678EC7D17AF51* L_121 = ___0_target;
		int32_t L_122 = V_14;
		int32_t L_123 = V_17;
		Func_2_t61463E95451501F9CA32136BA5E229D4318256F5* L_124 = ___1_f;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_125 = __this->___Values;
		int32_t L_126 = V_15;
		NullCheck(L_125);
		int32_t L_127 = L_126;
		double L_128 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		NullCheck(L_124);
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_129;
		L_129 = Func_2_Invoke_mE1FB1490FA2CE19857F94C0511EA55F5E8402925_inline(L_124, L_128, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_121);
		VirtualActionInvoker3< int32_t, int32_t, Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 >::Invoke(9, L_121, L_122, L_123, L_129);
		int32_t L_130 = V_15;
		int32_t L_131 = V_16;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_132;
		L_132 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_130, 1)), L_131, NULL);
		V_15 = L_132;
		goto IL_0269;
	}

IL_0254:
	{
		MatrixStorage_1_tBCE5AA23E7860892C6021E3826C678EC7D17AF51* L_133 = ___0_target;
		int32_t L_134 = V_14;
		int32_t L_135 = V_17;
		Func_2_t61463E95451501F9CA32136BA5E229D4318256F5* L_136 = ___1_f;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_137 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_136);
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_138;
		L_138 = Func_2_Invoke_mE1FB1490FA2CE19857F94C0511EA55F5E8402925_inline(L_136, L_137, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_133);
		VirtualActionInvoker3< int32_t, int32_t, Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 >::Invoke(9, L_133, L_134, L_135, L_138);
	}

IL_0269:
	{
		int32_t L_139 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_139, 1));
	}

IL_026f:
	{
		int32_t L_140 = V_17;
		int32_t L_141 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___ColumnCount;
		if ((((int32_t)L_140) < ((int32_t)L_141)))
		{
			goto IL_0215;
		}
	}
	{
		int32_t L_142 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_142, 1));
	}

IL_027f:
	{
		int32_t L_143 = V_14;
		int32_t L_144 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		if ((((int32_t)L_143) < ((int32_t)L_144)))
		{
			goto IL_01f8;
		}
	}
	{
		return;
	}

IL_028d:
	{
		V_18 = 0;
		goto IL_02e2;
	}

IL_0292:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_145 = __this->___RowPointers;
		int32_t L_146 = V_18;
		NullCheck(L_145);
		int32_t L_147 = L_146;
		int32_t L_148 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_149 = __this->___RowPointers;
		int32_t L_150 = V_18;
		NullCheck(L_149);
		int32_t L_151 = ((int32_t)il2cpp_codegen_add(L_150, 1));
		int32_t L_152 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		V_19 = L_152;
		V_20 = L_148;
		goto IL_02d6;
	}

IL_02ac:
	{
		MatrixStorage_1_tBCE5AA23E7860892C6021E3826C678EC7D17AF51* L_153 = ___0_target;
		int32_t L_154 = V_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_155 = __this->___ColumnIndices;
		int32_t L_156 = V_20;
		NullCheck(L_155);
		int32_t L_157 = L_156;
		int32_t L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		Func_2_t61463E95451501F9CA32136BA5E229D4318256F5* L_159 = ___1_f;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_160 = __this->___Values;
		int32_t L_161 = V_20;
		NullCheck(L_160);
		int32_t L_162 = L_161;
		double L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		NullCheck(L_159);
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_164;
		L_164 = Func_2_Invoke_mE1FB1490FA2CE19857F94C0511EA55F5E8402925_inline(L_159, L_163, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_153);
		VirtualActionInvoker3< int32_t, int32_t, Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 >::Invoke(9, L_153, L_154, L_158, L_164);
		int32_t L_165 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_165, 1));
	}

IL_02d6:
	{
		int32_t L_166 = V_20;
		int32_t L_167 = V_19;
		if ((((int32_t)L_166) < ((int32_t)L_167)))
		{
			goto IL_02ac;
		}
	}
	{
		int32_t L_168 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_168, 1));
	}

IL_02e2:
	{
		int32_t L_169 = V_18;
		int32_t L_170 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		if ((((int32_t)L_169) < ((int32_t)L_170)))
		{
			goto IL_0292;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_MapToUnchecked_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mC2724106D123D17BF82DCECE606A2573F4D2440A_gshared (SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* __this, MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* ___0_target, Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D* ___1_f, int32_t ___2_zeros, int32_t ___3_existingData, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* V_1 = NULL;
	double V_2 = 0.0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_4 = NULL;
	List_1_t495F03F47D827883530F951D563C0BB7340E5995* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	double V_9 = 0.0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	double V_13 = 0.0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t G_B3_0 = 0;
	double G_B11_0 = 0.0;
	{
		int32_t L_0 = ___2_zeros;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_1 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_2 = L_1;
		Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D* L_2 = ___1_f;
		double L_3 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_2);
		double L_4;
		L_4 = Func_2_Invoke_m762147834B46FC6B99180328AD303FC3F47CCD62_inline(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		double L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_5);
		bool L_7;
		L_7 = Double_Equals_m342E8F178661ABF8306D58D5F2130C58E0601DA3((&V_2), L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B3_0 = 1;
	}

IL_002d:
	{
		V_0 = (bool)G_B3_0;
		MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* L_8 = ___0_target;
		V_1 = ((SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 4)));
		SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* L_9 = V_1;
		if (!L_9)
		{
			goto IL_01dd;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* L_10 = V_1;
		NullCheck(L_10);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = L_10->___RowPointers;
		V_3 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___ColumnIndices;
		NullCheck(L_12);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98(L_13, ((int32_t)(((RuntimeArray*)L_12)->max_length)), List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		V_4 = L_13;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_14 = __this->___Values;
		NullCheck(L_14);
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_15 = (List_1_t495F03F47D827883530F951D563C0BB7340E5995*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 5));
		List_1__ctor_m3B40D7C96D362514EEA8DF87AF83D34EE5AAE421(L_15, ((int32_t)(((RuntimeArray*)L_14)->max_length)), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_5 = L_15;
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_011d;
		}
	}
	{
		V_6 = 0;
		V_7 = 0;
		goto IL_010b;
	}

IL_0071:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_3;
		int32_t L_18 = V_7;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_19 = V_5;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_inline(L_19, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (int32_t)L_20);
		V_8 = 0;
		goto IL_00f8;
	}

IL_0081:
	{
		int32_t L_21 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->___RowPointers;
		int32_t L_23 = V_7;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if ((((int32_t)L_21) >= ((int32_t)L_25)))
		{
			goto IL_009d;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = __this->___ColumnIndices;
		int32_t L_27 = V_6;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = V_8;
		if ((((int32_t)L_29) == ((int32_t)L_30)))
		{
			goto IL_00aa;
		}
	}

IL_009d:
	{
		Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D* L_31 = ___1_f;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_32 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_31);
		double L_33;
		L_33 = Func_2_Invoke_m762147834B46FC6B99180328AD303FC3F47CCD62_inline(L_31, L_32, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B11_0 = L_33;
		goto IL_00c2;
	}

IL_00aa:
	{
		Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D* L_34 = ___1_f;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_35 = __this->___Values;
		int32_t L_36 = V_6;
		int32_t L_37 = L_36;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		NullCheck(L_35);
		int32_t L_38 = L_37;
		double L_39 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_34);
		double L_40;
		L_40 = Func_2_Invoke_m762147834B46FC6B99180328AD303FC3F47CCD62_inline(L_34, L_39, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B11_0 = L_40;
	}

IL_00c2:
	{
		V_9 = G_B11_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_41 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_2 = L_41;
		double L_42 = V_9;
		double L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_43);
		bool L_45;
		L_45 = Double_Equals_m342E8F178661ABF8306D58D5F2130C58E0601DA3((&V_2), L_44, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		if (L_45)
		{
			goto IL_00f2;
		}
	}
	{
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_46 = V_5;
		double L_47 = V_9;
		NullCheck(L_46);
		List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_inline(L_46, L_47, il2cpp_rgctx_method(method->rgctx_data, 8));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_48 = V_4;
		int32_t L_49 = V_8;
		NullCheck(L_48);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_48, L_49, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_00f2:
	{
		int32_t L_50 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00f8:
	{
		int32_t L_51 = V_8;
		int32_t L_52 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___ColumnCount;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_53 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_010b:
	{
		int32_t L_54 = V_7;
		int32_t L_55 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_0071;
		}
	}
	{
		goto IL_01b3;
	}

IL_011d:
	{
		V_10 = 0;
		goto IL_01a6;
	}

IL_0125:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_3;
		int32_t L_57 = V_10;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_58 = V_5;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_inline(L_58, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (int32_t)L_59);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = __this->___RowPointers;
		int32_t L_61 = V_10;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		int32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = __this->___RowPointers;
		int32_t L_65 = V_10;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add(L_65, 1));
		int32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_11 = L_67;
		V_12 = L_63;
		goto IL_019a;
	}

IL_014a:
	{
		Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D* L_68 = ___1_f;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_69 = __this->___Values;
		int32_t L_70 = V_12;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		double L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_68);
		double L_73;
		L_73 = Func_2_Invoke_m762147834B46FC6B99180328AD303FC3F47CCD62_inline(L_68, L_72, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_13 = L_73;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_74 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_2 = L_74;
		double L_75 = V_13;
		double L_76 = L_75;
		RuntimeObject* L_77 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_76);
		bool L_78;
		L_78 = Double_Equals_m342E8F178661ABF8306D58D5F2130C58E0601DA3((&V_2), L_77, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		if (L_78)
		{
			goto IL_0194;
		}
	}
	{
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_79 = V_5;
		double L_80 = V_13;
		NullCheck(L_79);
		List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_inline(L_79, L_80, il2cpp_rgctx_method(method->rgctx_data, 8));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_81 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = __this->___ColumnIndices;
		int32_t L_83 = V_12;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		int32_t L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_81);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_81, L_85, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_0194:
	{
		int32_t L_86 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_86, 1));
	}

IL_019a:
	{
		int32_t L_87 = V_12;
		int32_t L_88 = V_11;
		if ((((int32_t)L_87) < ((int32_t)L_88)))
		{
			goto IL_014a;
		}
	}
	{
		int32_t L_89 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_01a6:
	{
		int32_t L_90 = V_10;
		int32_t L_91 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_0125;
		}
	}

IL_01b3:
	{
		SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* L_92 = V_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_93 = V_4;
		NullCheck(L_93);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_94;
		L_94 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_93, List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		NullCheck(L_92);
		L_92->___ColumnIndices = L_94;
		Il2CppCodeGenWriteBarrier((void**)(&L_92->___ColumnIndices), (void*)L_94);
		SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* L_95 = V_1;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_96 = V_5;
		NullCheck(L_96);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_97;
		L_97 = List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3(L_96, il2cpp_rgctx_method(method->rgctx_data, 9));
		NullCheck(L_95);
		L_95->___Values = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_95->___Values), (void*)L_97);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_98 = V_3;
		int32_t L_99 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_100 = V_5;
		NullCheck(L_100);
		int32_t L_101;
		L_101 = List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_inline(L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(L_99), (int32_t)L_101);
		return;
	}

IL_01dd:
	{
		int32_t L_102 = ___3_existingData;
		if (L_102)
		{
			goto IL_01ea;
		}
	}
	{
		bool L_103 = V_0;
		if (L_103)
		{
			goto IL_01ea;
		}
	}
	{
		MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* L_104 = ___0_target;
		NullCheck(L_104);
		VirtualActionInvoker0::Invoke(10, L_104);
	}

IL_01ea:
	{
		bool L_105 = V_0;
		if (!L_105)
		{
			goto IL_028d;
		}
	}
	{
		V_14 = 0;
		goto IL_027f;
	}

IL_01f8:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_106 = __this->___RowPointers;
		int32_t L_107 = V_14;
		NullCheck(L_106);
		int32_t L_108 = L_107;
		int32_t L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		V_15 = L_109;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->___RowPointers;
		int32_t L_111 = V_14;
		NullCheck(L_110);
		int32_t L_112 = ((int32_t)il2cpp_codegen_add(L_111, 1));
		int32_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		V_16 = L_113;
		V_17 = 0;
		goto IL_026f;
	}

IL_0215:
	{
		int32_t L_114 = V_15;
		int32_t L_115 = V_16;
		if ((((int32_t)L_114) >= ((int32_t)L_115)))
		{
			goto IL_0254;
		}
	}
	{
		int32_t L_116 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_117 = __this->___ColumnIndices;
		int32_t L_118 = V_15;
		NullCheck(L_117);
		int32_t L_119 = L_118;
		int32_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		if ((!(((uint32_t)L_116) == ((uint32_t)L_120))))
		{
			goto IL_0254;
		}
	}
	{
		MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* L_121 = ___0_target;
		int32_t L_122 = V_14;
		int32_t L_123 = V_17;
		Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D* L_124 = ___1_f;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_125 = __this->___Values;
		int32_t L_126 = V_15;
		NullCheck(L_125);
		int32_t L_127 = L_126;
		double L_128 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		NullCheck(L_124);
		double L_129;
		L_129 = Func_2_Invoke_m762147834B46FC6B99180328AD303FC3F47CCD62_inline(L_124, L_128, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_121);
		VirtualActionInvoker3< int32_t, int32_t, double >::Invoke(9, L_121, L_122, L_123, L_129);
		int32_t L_130 = V_15;
		int32_t L_131 = V_16;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_132;
		L_132 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_130, 1)), L_131, NULL);
		V_15 = L_132;
		goto IL_0269;
	}

IL_0254:
	{
		MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* L_133 = ___0_target;
		int32_t L_134 = V_14;
		int32_t L_135 = V_17;
		Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D* L_136 = ___1_f;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_137 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_136);
		double L_138;
		L_138 = Func_2_Invoke_m762147834B46FC6B99180328AD303FC3F47CCD62_inline(L_136, L_137, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_133);
		VirtualActionInvoker3< int32_t, int32_t, double >::Invoke(9, L_133, L_134, L_135, L_138);
	}

IL_0269:
	{
		int32_t L_139 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_139, 1));
	}

IL_026f:
	{
		int32_t L_140 = V_17;
		int32_t L_141 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___ColumnCount;
		if ((((int32_t)L_140) < ((int32_t)L_141)))
		{
			goto IL_0215;
		}
	}
	{
		int32_t L_142 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_142, 1));
	}

IL_027f:
	{
		int32_t L_143 = V_14;
		int32_t L_144 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		if ((((int32_t)L_143) < ((int32_t)L_144)))
		{
			goto IL_01f8;
		}
	}
	{
		return;
	}

IL_028d:
	{
		V_18 = 0;
		goto IL_02e2;
	}

IL_0292:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_145 = __this->___RowPointers;
		int32_t L_146 = V_18;
		NullCheck(L_145);
		int32_t L_147 = L_146;
		int32_t L_148 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_149 = __this->___RowPointers;
		int32_t L_150 = V_18;
		NullCheck(L_149);
		int32_t L_151 = ((int32_t)il2cpp_codegen_add(L_150, 1));
		int32_t L_152 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		V_19 = L_152;
		V_20 = L_148;
		goto IL_02d6;
	}

IL_02ac:
	{
		MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* L_153 = ___0_target;
		int32_t L_154 = V_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_155 = __this->___ColumnIndices;
		int32_t L_156 = V_20;
		NullCheck(L_155);
		int32_t L_157 = L_156;
		int32_t L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D* L_159 = ___1_f;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_160 = __this->___Values;
		int32_t L_161 = V_20;
		NullCheck(L_160);
		int32_t L_162 = L_161;
		double L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		NullCheck(L_159);
		double L_164;
		L_164 = Func_2_Invoke_m762147834B46FC6B99180328AD303FC3F47CCD62_inline(L_159, L_163, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_153);
		VirtualActionInvoker3< int32_t, int32_t, double >::Invoke(9, L_153, L_154, L_158, L_164);
		int32_t L_165 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_165, 1));
	}

IL_02d6:
	{
		int32_t L_166 = V_20;
		int32_t L_167 = V_19;
		if ((((int32_t)L_166) < ((int32_t)L_167)))
		{
			goto IL_02ac;
		}
	}
	{
		int32_t L_168 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_168, 1));
	}

IL_02e2:
	{
		int32_t L_169 = V_18;
		int32_t L_170 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		if ((((int32_t)L_169) < ((int32_t)L_170)))
		{
			goto IL_0292;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_MapToUnchecked_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3C73AB4CF97D76CB78D5447471980710B79444BB_gshared (SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* __this, MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* ___0_target, Func_2_t4C40E8255CD677D8102C7DF0D02FF06A36B97E3F* ___1_f, int32_t ___2_zeros, int32_t ___3_existingData, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* V_1 = NULL;
	double V_2 = 0.0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_4 = NULL;
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	float V_13 = 0.0f;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t G_B3_0 = 0;
	float G_B11_0 = 0.0f;
	{
		int32_t L_0 = ___2_zeros;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_1 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_2 = L_1;
		Func_2_t4C40E8255CD677D8102C7DF0D02FF06A36B97E3F* L_2 = ___1_f;
		double L_3 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_2);
		float L_4;
		L_4 = Func_2_Invoke_m662ABB8CB9CD647FB749C77F475250C61939D1BA_inline(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_5);
		bool L_7;
		L_7 = Double_Equals_m342E8F178661ABF8306D58D5F2130C58E0601DA3((&V_2), L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B3_0 = 1;
	}

IL_002d:
	{
		V_0 = (bool)G_B3_0;
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_8 = ___0_target;
		V_1 = ((SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 4)));
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_9 = V_1;
		if (!L_9)
		{
			goto IL_01dd;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_10 = V_1;
		NullCheck(L_10);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = L_10->___RowPointers;
		V_3 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___ColumnIndices;
		NullCheck(L_12);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98(L_13, ((int32_t)(((RuntimeArray*)L_12)->max_length)), List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		V_4 = L_13;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_14 = __this->___Values;
		NullCheck(L_14);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_15 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 5));
		List_1__ctor_mD19FC87E6CCC1D0C477B598DDB4A09F2A75E3E12(L_15, ((int32_t)(((RuntimeArray*)L_14)->max_length)), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_5 = L_15;
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_011d;
		}
	}
	{
		V_6 = 0;
		V_7 = 0;
		goto IL_010b;
	}

IL_0071:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_3;
		int32_t L_18 = V_7;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_19 = V_5;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_19, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (int32_t)L_20);
		V_8 = 0;
		goto IL_00f8;
	}

IL_0081:
	{
		int32_t L_21 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->___RowPointers;
		int32_t L_23 = V_7;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if ((((int32_t)L_21) >= ((int32_t)L_25)))
		{
			goto IL_009d;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = __this->___ColumnIndices;
		int32_t L_27 = V_6;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = V_8;
		if ((((int32_t)L_29) == ((int32_t)L_30)))
		{
			goto IL_00aa;
		}
	}

IL_009d:
	{
		Func_2_t4C40E8255CD677D8102C7DF0D02FF06A36B97E3F* L_31 = ___1_f;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_32 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_31);
		float L_33;
		L_33 = Func_2_Invoke_m662ABB8CB9CD647FB749C77F475250C61939D1BA_inline(L_31, L_32, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B11_0 = L_33;
		goto IL_00c2;
	}

IL_00aa:
	{
		Func_2_t4C40E8255CD677D8102C7DF0D02FF06A36B97E3F* L_34 = ___1_f;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_35 = __this->___Values;
		int32_t L_36 = V_6;
		int32_t L_37 = L_36;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		NullCheck(L_35);
		int32_t L_38 = L_37;
		double L_39 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_34);
		float L_40;
		L_40 = Func_2_Invoke_m662ABB8CB9CD647FB749C77F475250C61939D1BA_inline(L_34, L_39, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B11_0 = L_40;
	}

IL_00c2:
	{
		V_9 = G_B11_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_41 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_2 = L_41;
		float L_42 = V_9;
		float L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_43);
		bool L_45;
		L_45 = Double_Equals_m342E8F178661ABF8306D58D5F2130C58E0601DA3((&V_2), L_44, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		if (L_45)
		{
			goto IL_00f2;
		}
	}
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_46 = V_5;
		float L_47 = V_9;
		NullCheck(L_46);
		List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_46, L_47, il2cpp_rgctx_method(method->rgctx_data, 8));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_48 = V_4;
		int32_t L_49 = V_8;
		NullCheck(L_48);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_48, L_49, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_00f2:
	{
		int32_t L_50 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00f8:
	{
		int32_t L_51 = V_8;
		int32_t L_52 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___ColumnCount;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_53 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_010b:
	{
		int32_t L_54 = V_7;
		int32_t L_55 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_0071;
		}
	}
	{
		goto IL_01b3;
	}

IL_011d:
	{
		V_10 = 0;
		goto IL_01a6;
	}

IL_0125:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_3;
		int32_t L_57 = V_10;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_58 = V_5;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_58, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (int32_t)L_59);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = __this->___RowPointers;
		int32_t L_61 = V_10;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		int32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = __this->___RowPointers;
		int32_t L_65 = V_10;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add(L_65, 1));
		int32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_11 = L_67;
		V_12 = L_63;
		goto IL_019a;
	}

IL_014a:
	{
		Func_2_t4C40E8255CD677D8102C7DF0D02FF06A36B97E3F* L_68 = ___1_f;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_69 = __this->___Values;
		int32_t L_70 = V_12;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		double L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_68);
		float L_73;
		L_73 = Func_2_Invoke_m662ABB8CB9CD647FB749C77F475250C61939D1BA_inline(L_68, L_72, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_13 = L_73;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_74 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_2 = L_74;
		float L_75 = V_13;
		float L_76 = L_75;
		RuntimeObject* L_77 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_76);
		bool L_78;
		L_78 = Double_Equals_m342E8F178661ABF8306D58D5F2130C58E0601DA3((&V_2), L_77, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		if (L_78)
		{
			goto IL_0194;
		}
	}
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_79 = V_5;
		float L_80 = V_13;
		NullCheck(L_79);
		List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_79, L_80, il2cpp_rgctx_method(method->rgctx_data, 8));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_81 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = __this->___ColumnIndices;
		int32_t L_83 = V_12;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		int32_t L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_81);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_81, L_85, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_0194:
	{
		int32_t L_86 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_86, 1));
	}

IL_019a:
	{
		int32_t L_87 = V_12;
		int32_t L_88 = V_11;
		if ((((int32_t)L_87) < ((int32_t)L_88)))
		{
			goto IL_014a;
		}
	}
	{
		int32_t L_89 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_01a6:
	{
		int32_t L_90 = V_10;
		int32_t L_91 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_0125;
		}
	}

IL_01b3:
	{
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_92 = V_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_93 = V_4;
		NullCheck(L_93);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_94;
		L_94 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_93, List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		NullCheck(L_92);
		L_92->___ColumnIndices = L_94;
		Il2CppCodeGenWriteBarrier((void**)(&L_92->___ColumnIndices), (void*)L_94);
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_95 = V_1;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_96 = V_5;
		NullCheck(L_96);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_97;
		L_97 = List_1_ToArray_m7A70CC060DF87F0CCC73317BC6DE68C5D970C658(L_96, il2cpp_rgctx_method(method->rgctx_data, 9));
		NullCheck(L_95);
		L_95->___Values = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_95->___Values), (void*)L_97);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_98 = V_3;
		int32_t L_99 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_100 = V_5;
		NullCheck(L_100);
		int32_t L_101;
		L_101 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(L_99), (int32_t)L_101);
		return;
	}

IL_01dd:
	{
		int32_t L_102 = ___3_existingData;
		if (L_102)
		{
			goto IL_01ea;
		}
	}
	{
		bool L_103 = V_0;
		if (L_103)
		{
			goto IL_01ea;
		}
	}
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_104 = ___0_target;
		NullCheck(L_104);
		VirtualActionInvoker0::Invoke(10, L_104);
	}

IL_01ea:
	{
		bool L_105 = V_0;
		if (!L_105)
		{
			goto IL_028d;
		}
	}
	{
		V_14 = 0;
		goto IL_027f;
	}

IL_01f8:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_106 = __this->___RowPointers;
		int32_t L_107 = V_14;
		NullCheck(L_106);
		int32_t L_108 = L_107;
		int32_t L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		V_15 = L_109;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->___RowPointers;
		int32_t L_111 = V_14;
		NullCheck(L_110);
		int32_t L_112 = ((int32_t)il2cpp_codegen_add(L_111, 1));
		int32_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		V_16 = L_113;
		V_17 = 0;
		goto IL_026f;
	}

IL_0215:
	{
		int32_t L_114 = V_15;
		int32_t L_115 = V_16;
		if ((((int32_t)L_114) >= ((int32_t)L_115)))
		{
			goto IL_0254;
		}
	}
	{
		int32_t L_116 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_117 = __this->___ColumnIndices;
		int32_t L_118 = V_15;
		NullCheck(L_117);
		int32_t L_119 = L_118;
		int32_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		if ((!(((uint32_t)L_116) == ((uint32_t)L_120))))
		{
			goto IL_0254;
		}
	}
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_121 = ___0_target;
		int32_t L_122 = V_14;
		int32_t L_123 = V_17;
		Func_2_t4C40E8255CD677D8102C7DF0D02FF06A36B97E3F* L_124 = ___1_f;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_125 = __this->___Values;
		int32_t L_126 = V_15;
		NullCheck(L_125);
		int32_t L_127 = L_126;
		double L_128 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		NullCheck(L_124);
		float L_129;
		L_129 = Func_2_Invoke_m662ABB8CB9CD647FB749C77F475250C61939D1BA_inline(L_124, L_128, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_121);
		VirtualActionInvoker3< int32_t, int32_t, float >::Invoke(9, L_121, L_122, L_123, L_129);
		int32_t L_130 = V_15;
		int32_t L_131 = V_16;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_132;
		L_132 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_130, 1)), L_131, NULL);
		V_15 = L_132;
		goto IL_0269;
	}

IL_0254:
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_133 = ___0_target;
		int32_t L_134 = V_14;
		int32_t L_135 = V_17;
		Func_2_t4C40E8255CD677D8102C7DF0D02FF06A36B97E3F* L_136 = ___1_f;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		double L_137 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_136);
		float L_138;
		L_138 = Func_2_Invoke_m662ABB8CB9CD647FB749C77F475250C61939D1BA_inline(L_136, L_137, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_133);
		VirtualActionInvoker3< int32_t, int32_t, float >::Invoke(9, L_133, L_134, L_135, L_138);
	}

IL_0269:
	{
		int32_t L_139 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_139, 1));
	}

IL_026f:
	{
		int32_t L_140 = V_17;
		int32_t L_141 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___ColumnCount;
		if ((((int32_t)L_140) < ((int32_t)L_141)))
		{
			goto IL_0215;
		}
	}
	{
		int32_t L_142 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_142, 1));
	}

IL_027f:
	{
		int32_t L_143 = V_14;
		int32_t L_144 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		if ((((int32_t)L_143) < ((int32_t)L_144)))
		{
			goto IL_01f8;
		}
	}
	{
		return;
	}

IL_028d:
	{
		V_18 = 0;
		goto IL_02e2;
	}

IL_0292:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_145 = __this->___RowPointers;
		int32_t L_146 = V_18;
		NullCheck(L_145);
		int32_t L_147 = L_146;
		int32_t L_148 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_149 = __this->___RowPointers;
		int32_t L_150 = V_18;
		NullCheck(L_149);
		int32_t L_151 = ((int32_t)il2cpp_codegen_add(L_150, 1));
		int32_t L_152 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		V_19 = L_152;
		V_20 = L_148;
		goto IL_02d6;
	}

IL_02ac:
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_153 = ___0_target;
		int32_t L_154 = V_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_155 = __this->___ColumnIndices;
		int32_t L_156 = V_20;
		NullCheck(L_155);
		int32_t L_157 = L_156;
		int32_t L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		Func_2_t4C40E8255CD677D8102C7DF0D02FF06A36B97E3F* L_159 = ___1_f;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_160 = __this->___Values;
		int32_t L_161 = V_20;
		NullCheck(L_160);
		int32_t L_162 = L_161;
		double L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		NullCheck(L_159);
		float L_164;
		L_164 = Func_2_Invoke_m662ABB8CB9CD647FB749C77F475250C61939D1BA_inline(L_159, L_163, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_153);
		VirtualActionInvoker3< int32_t, int32_t, float >::Invoke(9, L_153, L_154, L_158, L_164);
		int32_t L_165 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_165, 1));
	}

IL_02d6:
	{
		int32_t L_166 = V_20;
		int32_t L_167 = V_19;
		if ((((int32_t)L_166) < ((int32_t)L_167)))
		{
			goto IL_02ac;
		}
	}
	{
		int32_t L_168 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_168, 1));
	}

IL_02e2:
	{
		int32_t L_169 = V_18;
		int32_t L_170 = ((MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D*)__this)->___RowCount;
		if ((((int32_t)L_169) < ((int32_t)L_170)))
		{
			goto IL_0292;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919* SparseCompressedRowMatrixStorage_1_Find2Unchecked_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m52FD204A85AAB3F1BDDDEFF1AC7EA297E3AB833B_gshared (SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* __this, MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* ___0_other, Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* ___1_predicate, int32_t ___2_zeros, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3* V_0 = NULL;
	DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* V_1 = NULL;
	SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* V_2 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_8 = NULL;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	int32_t V_14 = 0;
	bool V_15 = false;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_18 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_19 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_20 = NULL;
	float V_21 = 0.0f;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	bool V_26 = false;
	bool V_27 = false;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	int32_t V_32 = 0;
	int32_t G_B6_0 = 0;
	Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* G_B8_0 = NULL;
	Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* G_B7_0 = NULL;
	float G_B9_0 = 0.0f;
	Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* G_B9_1 = NULL;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	float G_B13_0 = 0.0f;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	int32_t G_B27_0 = 0;
	Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* G_B29_0 = NULL;
	Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* G_B28_0 = NULL;
	float G_B30_0 = 0.0f;
	Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* G_B30_1 = NULL;
	float G_B32_0 = 0.0f;
	Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* G_B32_1 = NULL;
	float G_B31_0 = 0.0f;
	Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* G_B31_1 = NULL;
	float G_B33_0 = 0.0f;
	float G_B33_1 = 0.0f;
	Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* G_B33_2 = NULL;
	int32_t G_B36_0 = 0;
	int32_t G_B36_1 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B35_1 = 0;
	float G_B37_0 = 0.0f;
	int32_t G_B37_1 = 0;
	int32_t G_B37_2 = 0;
	float G_B39_0 = 0.0f;
	int32_t G_B39_1 = 0;
	int32_t G_B39_2 = 0;
	float G_B38_0 = 0.0f;
	int32_t G_B38_1 = 0;
	int32_t G_B38_2 = 0;
	float G_B40_0 = 0.0f;
	float G_B40_1 = 0.0f;
	int32_t G_B40_2 = 0;
	int32_t G_B40_3 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B72_0 = 0;
	Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* G_B74_0 = NULL;
	Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* G_B73_0 = NULL;
	float G_B75_0 = 0.0f;
	Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* G_B75_1 = NULL;
	float G_B77_0 = 0.0f;
	Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* G_B77_1 = NULL;
	float G_B76_0 = 0.0f;
	Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* G_B76_1 = NULL;
	float G_B78_0 = 0.0f;
	float G_B78_1 = 0.0f;
	Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* G_B78_2 = NULL;
	int32_t G_B81_0 = 0;
	int32_t G_B81_1 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B80_1 = 0;
	float G_B82_0 = 0.0f;
	int32_t G_B82_1 = 0;
	int32_t G_B82_2 = 0;
	float G_B84_0 = 0.0f;
	int32_t G_B84_1 = 0;
	int32_t G_B84_2 = 0;
	float G_B83_0 = 0.0f;
	int32_t G_B83_1 = 0;
	int32_t G_B83_2 = 0;
	float G_B85_0 = 0.0f;
	float G_B85_1 = 0.0f;
	int32_t G_B85_2 = 0;
	int32_t G_B85_3 = 0;
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_0 = ___0_other;
		V_0 = ((DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 1)));
		DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00dd;
		}
	}
	{
		DenseColumnMajorMatrixStorage_1_t0DB133617B121791FD1C98AD7A88AC3AC21A66F3* L_2 = V_0;
		NullCheck(L_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = L_2->___Data;
		V_3 = L_3;
		V_4 = 0;
		V_5 = 0;
		goto IL_00ce;
	}

IL_001f:
	{
		V_6 = 0;
		goto IL_00bb;
	}

IL_0027:
	{
		int32_t L_4 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___RowPointers;
		int32_t L_6 = V_5;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if ((((int32_t)L_4) >= ((int32_t)L_8)))
		{
			goto IL_0045;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___ColumnIndices;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13 = V_6;
		G_B6_0 = ((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B6_0 = 0;
	}

IL_0046:
	{
		V_7 = (bool)G_B6_0;
		Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* L_14 = ___1_predicate;
		bool L_15 = V_7;
		if (L_15)
		{
			G_B8_0 = L_14;
			goto IL_0054;
		}
		G_B7_0 = L_14;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_16 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		G_B9_0 = L_16;
		G_B9_1 = G_B7_0;
		goto IL_0066;
	}

IL_0054:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = __this->___Values;
		int32_t L_18 = V_4;
		int32_t L_19 = L_18;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		NullCheck(L_17);
		int32_t L_20 = L_19;
		float L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		G_B9_0 = L_21;
		G_B9_1 = G_B8_0;
	}

IL_0066:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = V_3;
		int32_t L_23 = V_6;
		int32_t L_24 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		int32_t L_25 = V_5;
		NullCheck(L_22);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_23, L_24)), L_25));
		float L_27 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(G_B9_1);
		bool L_28;
		L_28 = Func_3_Invoke_mCC1FDB4D5C9B18027021CB0AA0957A57B49E7472_inline(G_B9_1, G_B9_0, L_27, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_28)
		{
			goto IL_00b5;
		}
	}
	{
		int32_t L_29 = V_5;
		int32_t L_30 = V_6;
		bool L_31 = V_7;
		if (L_31)
		{
			G_B12_0 = L_30;
			G_B12_1 = L_29;
			goto IL_008e;
		}
		G_B11_0 = L_30;
		G_B11_1 = L_29;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_32 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		G_B13_0 = L_32;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_009d;
	}

IL_008e:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_33 = __this->___Values;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		float L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		G_B13_0 = L_36;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_009d:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_37 = V_3;
		int32_t L_38 = V_6;
		int32_t L_39 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		int32_t L_40 = V_5;
		NullCheck(L_37);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_38, L_39)), L_40));
		float L_42 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919* L_43 = (Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		Tuple_4__ctor_mB6DA61396DFEF00EAC44CB306FE51D013715426B(L_43, G_B13_2, G_B13_1, G_B13_0, L_42, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_43;
	}

IL_00b5:
	{
		int32_t L_44 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00bb:
	{
		int32_t L_45 = V_6;
		int32_t L_46 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_47 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00ce:
	{
		int32_t L_48 = V_5;
		int32_t L_49 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_001f;
		}
	}
	{
		return (Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919*)NULL;
	}

IL_00dd:
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_50 = ___0_other;
		V_1 = ((DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6*)IsInstClass((RuntimeObject*)L_50, il2cpp_rgctx_data(method->rgctx_data, 8)));
		DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_51 = V_1;
		if (!L_51)
		{
			goto IL_02ef;
		}
	}
	{
		DiagonalMatrixStorage_1_tDD3C1BD055F4425C7ECA3341A4EF0F8326AB1FA6* L_52 = V_1;
		NullCheck(L_52);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_53 = L_52->___Data;
		V_8 = L_53;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 10));
		MatrixBuilder_1_t0F650529E702FB36E2E68B644CCBA95789BBF833* L_54;
		L_54 = BuilderInstance_1_get_Matrix_m19E05D6F353ACBE92666B04F37484A5AC10E616F(il2cpp_rgctx_method(method->rgctx_data, 9));
		NullCheck(L_54);
		float L_55;
		L_55 = VirtualFuncInvoker0< float >::Invoke(4, L_54);
		V_9 = L_55;
		int32_t L_56 = ___2_zeros;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01e2;
		}
	}
	{
		Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* L_57 = ___1_predicate;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_58 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		float L_59 = V_9;
		NullCheck(L_57);
		bool L_60;
		L_60 = Func_3_Invoke_mCC1FDB4D5C9B18027021CB0AA0957A57B49E7472_inline(L_57, L_58, L_59, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_60)
		{
			goto IL_01e2;
		}
	}
	{
		V_10 = 0;
		V_11 = 0;
		goto IL_01d3;
	}

IL_0122:
	{
		V_12 = 0;
		goto IL_01c0;
	}

IL_012a:
	{
		int32_t L_61 = V_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = __this->___RowPointers;
		int32_t L_63 = V_11;
		NullCheck(L_62);
		int32_t L_64 = ((int32_t)il2cpp_codegen_add(L_63, 1));
		int32_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		if ((((int32_t)L_61) >= ((int32_t)L_65)))
		{
			goto IL_0148;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = __this->___ColumnIndices;
		int32_t L_67 = V_10;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		int32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		int32_t L_70 = V_12;
		G_B27_0 = ((((int32_t)L_69) == ((int32_t)L_70))? 1 : 0);
		goto IL_0149;
	}

IL_0148:
	{
		G_B27_0 = 0;
	}

IL_0149:
	{
		V_13 = (bool)G_B27_0;
		Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* L_71 = ___1_predicate;
		bool L_72 = V_13;
		if (L_72)
		{
			G_B29_0 = L_71;
			goto IL_0157;
		}
		G_B28_0 = L_71;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_73 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		G_B30_0 = L_73;
		G_B30_1 = G_B28_0;
		goto IL_0169;
	}

IL_0157:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_74 = __this->___Values;
		int32_t L_75 = V_10;
		int32_t L_76 = L_75;
		V_10 = ((int32_t)il2cpp_codegen_add(L_76, 1));
		NullCheck(L_74);
		int32_t L_77 = L_76;
		float L_78 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		G_B30_0 = L_78;
		G_B30_1 = G_B29_0;
	}

IL_0169:
	{
		int32_t L_79 = V_11;
		int32_t L_80 = V_12;
		if ((((int32_t)L_79) == ((int32_t)L_80)))
		{
			G_B32_0 = G_B30_0;
			G_B32_1 = G_B30_1;
			goto IL_0173;
		}
		G_B31_0 = G_B30_0;
		G_B31_1 = G_B30_1;
	}
	{
		float L_81 = V_9;
		G_B33_0 = L_81;
		G_B33_1 = G_B31_0;
		G_B33_2 = G_B31_1;
		goto IL_017c;
	}

IL_0173:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_82 = V_8;
		int32_t L_83 = V_11;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		float L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		G_B33_0 = L_85;
		G_B33_1 = G_B32_0;
		G_B33_2 = G_B32_1;
	}

IL_017c:
	{
		NullCheck(G_B33_2);
		bool L_86;
		L_86 = Func_3_Invoke_mCC1FDB4D5C9B18027021CB0AA0957A57B49E7472_inline(G_B33_2, G_B33_1, G_B33_0, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_86)
		{
			goto IL_01ba;
		}
	}
	{
		int32_t L_87 = V_11;
		int32_t L_88 = V_12;
		bool L_89 = V_13;
		if (L_89)
		{
			G_B36_0 = L_88;
			G_B36_1 = L_87;
			goto IL_0192;
		}
		G_B35_0 = L_88;
		G_B35_1 = L_87;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_90 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		G_B37_0 = L_90;
		G_B37_1 = G_B35_0;
		G_B37_2 = G_B35_1;
		goto IL_01a1;
	}

IL_0192:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_91 = __this->___Values;
		int32_t L_92 = V_10;
		NullCheck(L_91);
		int32_t L_93 = ((int32_t)il2cpp_codegen_subtract(L_92, 1));
		float L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		G_B37_0 = L_94;
		G_B37_1 = G_B36_0;
		G_B37_2 = G_B36_1;
	}

IL_01a1:
	{
		int32_t L_95 = V_11;
		int32_t L_96 = V_12;
		if ((((int32_t)L_95) == ((int32_t)L_96)))
		{
			G_B39_0 = G_B37_0;
			G_B39_1 = G_B37_1;
			G_B39_2 = G_B37_2;
			goto IL_01ab;
		}
		G_B38_0 = G_B37_0;
		G_B38_1 = G_B37_1;
		G_B38_2 = G_B37_2;
	}
	{
		float L_97 = V_9;
		G_B40_0 = L_97;
		G_B40_1 = G_B38_0;
		G_B40_2 = G_B38_1;
		G_B40_3 = G_B38_2;
		goto IL_01b4;
	}

IL_01ab:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_98 = V_8;
		int32_t L_99 = V_11;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		float L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		G_B40_0 = L_101;
		G_B40_1 = G_B39_0;
		G_B40_2 = G_B39_1;
		G_B40_3 = G_B39_2;
	}

IL_01b4:
	{
		Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919* L_102 = (Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		Tuple_4__ctor_mB6DA61396DFEF00EAC44CB306FE51D013715426B(L_102, G_B40_3, G_B40_2, G_B40_1, G_B40_0, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_102;
	}

IL_01ba:
	{
		int32_t L_103 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_103, 1));
	}

IL_01c0:
	{
		int32_t L_104 = V_12;
		int32_t L_105 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		if ((((int32_t)L_104) < ((int32_t)L_105)))
		{
			goto IL_012a;
		}
	}
	{
		int32_t L_106 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_106, 1));
	}

IL_01d3:
	{
		int32_t L_107 = V_11;
		int32_t L_108 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_107) < ((int32_t)L_108)))
		{
			goto IL_0122;
		}
	}
	{
		return (Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919*)NULL;
	}

IL_01e2:
	{
		V_14 = 0;
		goto IL_02e0;
	}

IL_01ea:
	{
		V_15 = (bool)0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_109 = __this->___RowPointers;
		int32_t L_110 = V_14;
		NullCheck(L_109);
		int32_t L_111 = L_110;
		int32_t L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_113 = __this->___RowPointers;
		int32_t L_114 = V_14;
		NullCheck(L_113);
		int32_t L_115 = ((int32_t)il2cpp_codegen_add(L_114, 1));
		int32_t L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		V_16 = L_116;
		V_17 = L_112;
		goto IL_0295;
	}

IL_020a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_117 = __this->___ColumnIndices;
		int32_t L_118 = V_17;
		NullCheck(L_117);
		int32_t L_119 = L_118;
		int32_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		int32_t L_121 = V_14;
		if ((!(((uint32_t)L_120) == ((uint32_t)L_121))))
		{
			goto IL_0258;
		}
	}
	{
		V_15 = (bool)1;
		Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* L_122 = ___1_predicate;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_123 = __this->___Values;
		int32_t L_124 = V_17;
		NullCheck(L_123);
		int32_t L_125 = L_124;
		float L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_127 = V_8;
		int32_t L_128 = V_14;
		NullCheck(L_127);
		int32_t L_129 = L_128;
		float L_130 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		NullCheck(L_122);
		bool L_131;
		L_131 = Func_3_Invoke_mCC1FDB4D5C9B18027021CB0AA0957A57B49E7472_inline(L_122, L_126, L_130, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_131)
		{
			goto IL_028f;
		}
	}
	{
		int32_t L_132 = V_14;
		int32_t L_133 = V_14;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_134 = __this->___Values;
		int32_t L_135 = V_17;
		NullCheck(L_134);
		int32_t L_136 = L_135;
		float L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_138 = V_8;
		int32_t L_139 = V_14;
		NullCheck(L_138);
		int32_t L_140 = L_139;
		float L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919* L_142 = (Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		Tuple_4__ctor_mB6DA61396DFEF00EAC44CB306FE51D013715426B(L_142, L_132, L_133, L_137, L_141, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_142;
	}

IL_0258:
	{
		Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* L_143 = ___1_predicate;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_144 = __this->___Values;
		int32_t L_145 = V_17;
		NullCheck(L_144);
		int32_t L_146 = L_145;
		float L_147 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		float L_148 = V_9;
		NullCheck(L_143);
		bool L_149;
		L_149 = Func_3_Invoke_mCC1FDB4D5C9B18027021CB0AA0957A57B49E7472_inline(L_143, L_147, L_148, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_149)
		{
			goto IL_028f;
		}
	}
	{
		int32_t L_150 = V_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_151 = __this->___ColumnIndices;
		int32_t L_152 = V_17;
		NullCheck(L_151);
		int32_t L_153 = L_152;
		int32_t L_154 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_155 = __this->___Values;
		int32_t L_156 = V_17;
		NullCheck(L_155);
		int32_t L_157 = L_156;
		float L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		float L_159 = V_9;
		Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919* L_160 = (Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		Tuple_4__ctor_mB6DA61396DFEF00EAC44CB306FE51D013715426B(L_160, L_150, L_154, L_158, L_159, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_160;
	}

IL_028f:
	{
		int32_t L_161 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_161, 1));
	}

IL_0295:
	{
		int32_t L_162 = V_17;
		int32_t L_163 = V_16;
		if ((((int32_t)L_162) < ((int32_t)L_163)))
		{
			goto IL_020a;
		}
	}
	{
		bool L_164 = V_15;
		if (L_164)
		{
			goto IL_02da;
		}
	}
	{
		int32_t L_165 = V_14;
		int32_t L_166 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		if ((((int32_t)L_165) >= ((int32_t)L_166)))
		{
			goto IL_02da;
		}
	}
	{
		Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* L_167 = ___1_predicate;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_168 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_169 = V_8;
		int32_t L_170 = V_14;
		NullCheck(L_169);
		int32_t L_171 = L_170;
		float L_172 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_171));
		NullCheck(L_167);
		bool L_173;
		L_173 = Func_3_Invoke_mCC1FDB4D5C9B18027021CB0AA0957A57B49E7472_inline(L_167, L_168, L_172, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_173)
		{
			goto IL_02da;
		}
	}
	{
		int32_t L_174 = V_14;
		int32_t L_175 = V_14;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_176 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_177 = V_8;
		int32_t L_178 = V_14;
		NullCheck(L_177);
		int32_t L_179 = L_178;
		float L_180 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919* L_181 = (Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		Tuple_4__ctor_mB6DA61396DFEF00EAC44CB306FE51D013715426B(L_181, L_174, L_175, L_176, L_180, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_181;
	}

IL_02da:
	{
		int32_t L_182 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_182, 1));
	}

IL_02e0:
	{
		int32_t L_183 = V_14;
		int32_t L_184 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_183) < ((int32_t)L_184)))
		{
			goto IL_01ea;
		}
	}
	{
		return (Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919*)NULL;
	}

IL_02ef:
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_185 = ___0_other;
		V_2 = ((SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A*)IsInstClass((RuntimeObject*)L_185, il2cpp_rgctx_data(method->rgctx_data, 13)));
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_186 = V_2;
		if (!L_186)
		{
			goto IL_0571;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_187 = V_2;
		NullCheck(L_187);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_188 = L_187->___RowPointers;
		V_18 = L_188;
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_189 = V_2;
		NullCheck(L_189);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_190 = L_189->___ColumnIndices;
		V_19 = L_190;
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_191 = V_2;
		NullCheck(L_191);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_192 = L_191->___Values;
		V_20 = L_192;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 10));
		MatrixBuilder_1_t0F650529E702FB36E2E68B644CCBA95789BBF833* L_193;
		L_193 = BuilderInstance_1_get_Matrix_m19E05D6F353ACBE92666B04F37484A5AC10E616F(il2cpp_rgctx_method(method->rgctx_data, 9));
		NullCheck(L_193);
		float L_194;
		L_194 = VirtualFuncInvoker0< float >::Invoke(4, L_193);
		V_21 = L_194;
		int32_t L_195 = ___2_zeros;
		if ((!(((uint32_t)L_195) == ((uint32_t)1))))
		{
			goto IL_0411;
		}
	}
	{
		V_22 = 0;
		V_23 = 0;
		V_24 = 0;
		goto IL_0402;
	}

IL_0335:
	{
		V_25 = 0;
		goto IL_03ef;
	}

IL_033d:
	{
		int32_t L_196 = V_22;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_197 = __this->___RowPointers;
		int32_t L_198 = V_24;
		NullCheck(L_197);
		int32_t L_199 = ((int32_t)il2cpp_codegen_add(L_198, 1));
		int32_t L_200 = (L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		if ((((int32_t)L_196) >= ((int32_t)L_200)))
		{
			goto IL_035b;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_201 = __this->___ColumnIndices;
		int32_t L_202 = V_22;
		NullCheck(L_201);
		int32_t L_203 = L_202;
		int32_t L_204 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		int32_t L_205 = V_25;
		G_B69_0 = ((((int32_t)L_204) == ((int32_t)L_205))? 1 : 0);
		goto IL_035c;
	}

IL_035b:
	{
		G_B69_0 = 0;
	}

IL_035c:
	{
		V_26 = (bool)G_B69_0;
		int32_t L_206 = V_23;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_207 = V_18;
		int32_t L_208 = V_24;
		NullCheck(L_207);
		int32_t L_209 = ((int32_t)il2cpp_codegen_add(L_208, 1));
		int32_t L_210 = (L_207)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		if ((((int32_t)L_206) >= ((int32_t)L_210)))
		{
			goto IL_0374;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_211 = V_19;
		int32_t L_212 = V_23;
		NullCheck(L_211);
		int32_t L_213 = L_212;
		int32_t L_214 = (L_211)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		int32_t L_215 = V_25;
		G_B72_0 = ((((int32_t)L_214) == ((int32_t)L_215))? 1 : 0);
		goto IL_0375;
	}

IL_0374:
	{
		G_B72_0 = 0;
	}

IL_0375:
	{
		V_27 = (bool)G_B72_0;
		Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* L_216 = ___1_predicate;
		bool L_217 = V_26;
		if (L_217)
		{
			G_B74_0 = L_216;
			goto IL_0383;
		}
		G_B73_0 = L_216;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_218 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		G_B75_0 = L_218;
		G_B75_1 = G_B73_0;
		goto IL_0395;
	}

IL_0383:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_219 = __this->___Values;
		int32_t L_220 = V_22;
		int32_t L_221 = L_220;
		V_22 = ((int32_t)il2cpp_codegen_add(L_221, 1));
		NullCheck(L_219);
		int32_t L_222 = L_221;
		float L_223 = (L_219)->GetAt(static_cast<il2cpp_array_size_t>(L_222));
		G_B75_0 = L_223;
		G_B75_1 = G_B74_0;
	}

IL_0395:
	{
		bool L_224 = V_27;
		if (L_224)
		{
			G_B77_0 = G_B75_0;
			G_B77_1 = G_B75_1;
			goto IL_039d;
		}
		G_B76_0 = G_B75_0;
		G_B76_1 = G_B75_1;
	}
	{
		float L_225 = V_21;
		G_B78_0 = L_225;
		G_B78_1 = G_B76_0;
		G_B78_2 = G_B76_1;
		goto IL_03ab;
	}

IL_039d:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_226 = V_20;
		int32_t L_227 = V_23;
		int32_t L_228 = L_227;
		V_23 = ((int32_t)il2cpp_codegen_add(L_228, 1));
		NullCheck(L_226);
		int32_t L_229 = L_228;
		float L_230 = (L_226)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		G_B78_0 = L_230;
		G_B78_1 = G_B77_0;
		G_B78_2 = G_B77_1;
	}

IL_03ab:
	{
		NullCheck(G_B78_2);
		bool L_231;
		L_231 = Func_3_Invoke_mCC1FDB4D5C9B18027021CB0AA0957A57B49E7472_inline(G_B78_2, G_B78_1, G_B78_0, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_231)
		{
			goto IL_03e9;
		}
	}
	{
		int32_t L_232 = V_24;
		int32_t L_233 = V_25;
		bool L_234 = V_26;
		if (L_234)
		{
			G_B81_0 = L_233;
			G_B81_1 = L_232;
			goto IL_03c1;
		}
		G_B80_0 = L_233;
		G_B80_1 = L_232;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_235 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		G_B82_0 = L_235;
		G_B82_1 = G_B80_0;
		G_B82_2 = G_B80_1;
		goto IL_03d0;
	}

IL_03c1:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_236 = __this->___Values;
		int32_t L_237 = V_22;
		NullCheck(L_236);
		int32_t L_238 = ((int32_t)il2cpp_codegen_subtract(L_237, 1));
		float L_239 = (L_236)->GetAt(static_cast<il2cpp_array_size_t>(L_238));
		G_B82_0 = L_239;
		G_B82_1 = G_B81_0;
		G_B82_2 = G_B81_1;
	}

IL_03d0:
	{
		bool L_240 = V_27;
		if (L_240)
		{
			G_B84_0 = G_B82_0;
			G_B84_1 = G_B82_1;
			G_B84_2 = G_B82_2;
			goto IL_03d8;
		}
		G_B83_0 = G_B82_0;
		G_B83_1 = G_B82_1;
		G_B83_2 = G_B82_2;
	}
	{
		float L_241 = V_21;
		G_B85_0 = L_241;
		G_B85_1 = G_B83_0;
		G_B85_2 = G_B83_1;
		G_B85_3 = G_B83_2;
		goto IL_03e3;
	}

IL_03d8:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_242 = V_20;
		int32_t L_243 = V_23;
		NullCheck(L_242);
		int32_t L_244 = ((int32_t)il2cpp_codegen_subtract(L_243, 1));
		float L_245 = (L_242)->GetAt(static_cast<il2cpp_array_size_t>(L_244));
		G_B85_0 = L_245;
		G_B85_1 = G_B84_0;
		G_B85_2 = G_B84_1;
		G_B85_3 = G_B84_2;
	}

IL_03e3:
	{
		Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919* L_246 = (Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		Tuple_4__ctor_mB6DA61396DFEF00EAC44CB306FE51D013715426B(L_246, G_B85_3, G_B85_2, G_B85_1, G_B85_0, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_246;
	}

IL_03e9:
	{
		int32_t L_247 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add(L_247, 1));
	}

IL_03ef:
	{
		int32_t L_248 = V_25;
		int32_t L_249 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		if ((((int32_t)L_248) < ((int32_t)L_249)))
		{
			goto IL_033d;
		}
	}
	{
		int32_t L_250 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add(L_250, 1));
	}

IL_0402:
	{
		int32_t L_251 = V_24;
		int32_t L_252 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_251) < ((int32_t)L_252)))
		{
			goto IL_0335;
		}
	}
	{
		return (Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919*)NULL;
	}

IL_0411:
	{
		V_28 = 0;
		goto IL_0562;
	}

IL_0419:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_253 = __this->___RowPointers;
		int32_t L_254 = V_28;
		NullCheck(L_253);
		int32_t L_255 = ((int32_t)il2cpp_codegen_add(L_254, 1));
		int32_t L_256 = (L_253)->GetAt(static_cast<il2cpp_array_size_t>(L_255));
		V_29 = L_256;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_257 = V_18;
		int32_t L_258 = V_28;
		NullCheck(L_257);
		int32_t L_259 = ((int32_t)il2cpp_codegen_add(L_258, 1));
		int32_t L_260 = (L_257)->GetAt(static_cast<il2cpp_array_size_t>(L_259));
		V_30 = L_260;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_261 = __this->___RowPointers;
		int32_t L_262 = V_28;
		NullCheck(L_261);
		int32_t L_263 = L_262;
		int32_t L_264 = (L_261)->GetAt(static_cast<il2cpp_array_size_t>(L_263));
		V_31 = L_264;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_265 = V_18;
		int32_t L_266 = V_28;
		NullCheck(L_265);
		int32_t L_267 = L_266;
		int32_t L_268 = (L_265)->GetAt(static_cast<il2cpp_array_size_t>(L_267));
		V_32 = L_268;
		goto IL_054a;
	}

IL_0446:
	{
		int32_t L_269 = V_31;
		int32_t L_270 = V_29;
		if ((((int32_t)L_269) == ((int32_t)L_270)))
		{
			goto IL_0462;
		}
	}
	{
		int32_t L_271 = V_32;
		int32_t L_272 = V_30;
		if ((((int32_t)L_271) >= ((int32_t)L_272)))
		{
			goto IL_049f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_273 = __this->___ColumnIndices;
		int32_t L_274 = V_31;
		NullCheck(L_273);
		int32_t L_275 = L_274;
		int32_t L_276 = (L_273)->GetAt(static_cast<il2cpp_array_size_t>(L_275));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_277 = V_19;
		int32_t L_278 = V_32;
		NullCheck(L_277);
		int32_t L_279 = L_278;
		int32_t L_280 = (L_277)->GetAt(static_cast<il2cpp_array_size_t>(L_279));
		if ((((int32_t)L_276) <= ((int32_t)L_280)))
		{
			goto IL_049f;
		}
	}

IL_0462:
	{
		Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* L_281 = ___1_predicate;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_282 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_283 = V_20;
		int32_t L_284 = V_32;
		int32_t L_285 = L_284;
		V_32 = ((int32_t)il2cpp_codegen_add(L_285, 1));
		NullCheck(L_283);
		int32_t L_286 = L_285;
		float L_287 = (L_283)->GetAt(static_cast<il2cpp_array_size_t>(L_286));
		NullCheck(L_281);
		bool L_288;
		L_288 = Func_3_Invoke_mCC1FDB4D5C9B18027021CB0AA0957A57B49E7472_inline(L_281, L_282, L_287, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_288)
		{
			goto IL_054a;
		}
	}
	{
		int32_t L_289 = V_28;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_290 = V_19;
		int32_t L_291 = V_32;
		NullCheck(L_290);
		int32_t L_292 = ((int32_t)il2cpp_codegen_subtract(L_291, 1));
		int32_t L_293 = (L_290)->GetAt(static_cast<il2cpp_array_size_t>(L_292));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_294 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_295 = V_20;
		int32_t L_296 = V_32;
		NullCheck(L_295);
		int32_t L_297 = ((int32_t)il2cpp_codegen_subtract(L_296, 1));
		float L_298 = (L_295)->GetAt(static_cast<il2cpp_array_size_t>(L_297));
		Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919* L_299 = (Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		Tuple_4__ctor_mB6DA61396DFEF00EAC44CB306FE51D013715426B(L_299, L_289, L_293, L_294, L_298, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_299;
	}

IL_049f:
	{
		int32_t L_300 = V_32;
		int32_t L_301 = V_30;
		if ((((int32_t)L_300) == ((int32_t)L_301)))
		{
			goto IL_04b5;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_302 = __this->___ColumnIndices;
		int32_t L_303 = V_31;
		NullCheck(L_302);
		int32_t L_304 = L_303;
		int32_t L_305 = (L_302)->GetAt(static_cast<il2cpp_array_size_t>(L_304));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_306 = V_19;
		int32_t L_307 = V_32;
		NullCheck(L_306);
		int32_t L_308 = L_307;
		int32_t L_309 = (L_306)->GetAt(static_cast<il2cpp_array_size_t>(L_308));
		if ((((int32_t)L_305) >= ((int32_t)L_309)))
		{
			goto IL_04f5;
		}
	}

IL_04b5:
	{
		Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* L_310 = ___1_predicate;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_311 = __this->___Values;
		int32_t L_312 = V_31;
		int32_t L_313 = L_312;
		V_31 = ((int32_t)il2cpp_codegen_add(L_313, 1));
		NullCheck(L_311);
		int32_t L_314 = L_313;
		float L_315 = (L_311)->GetAt(static_cast<il2cpp_array_size_t>(L_314));
		float L_316 = V_21;
		NullCheck(L_310);
		bool L_317;
		L_317 = Func_3_Invoke_mCC1FDB4D5C9B18027021CB0AA0957A57B49E7472_inline(L_310, L_315, L_316, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_317)
		{
			goto IL_054a;
		}
	}
	{
		int32_t L_318 = V_28;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_319 = __this->___ColumnIndices;
		int32_t L_320 = V_31;
		NullCheck(L_319);
		int32_t L_321 = ((int32_t)il2cpp_codegen_subtract(L_320, 1));
		int32_t L_322 = (L_319)->GetAt(static_cast<il2cpp_array_size_t>(L_321));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_323 = __this->___Values;
		int32_t L_324 = V_31;
		NullCheck(L_323);
		int32_t L_325 = ((int32_t)il2cpp_codegen_subtract(L_324, 1));
		float L_326 = (L_323)->GetAt(static_cast<il2cpp_array_size_t>(L_325));
		float L_327 = V_21;
		Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919* L_328 = (Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		Tuple_4__ctor_mB6DA61396DFEF00EAC44CB306FE51D013715426B(L_328, L_318, L_322, L_326, L_327, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_328;
	}

IL_04f5:
	{
		Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* L_329 = ___1_predicate;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_330 = __this->___Values;
		int32_t L_331 = V_31;
		int32_t L_332 = L_331;
		V_31 = ((int32_t)il2cpp_codegen_add(L_332, 1));
		NullCheck(L_330);
		int32_t L_333 = L_332;
		float L_334 = (L_330)->GetAt(static_cast<il2cpp_array_size_t>(L_333));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_335 = V_20;
		int32_t L_336 = V_32;
		int32_t L_337 = L_336;
		V_32 = ((int32_t)il2cpp_codegen_add(L_337, 1));
		NullCheck(L_335);
		int32_t L_338 = L_337;
		float L_339 = (L_335)->GetAt(static_cast<il2cpp_array_size_t>(L_338));
		NullCheck(L_329);
		bool L_340;
		L_340 = Func_3_Invoke_mCC1FDB4D5C9B18027021CB0AA0957A57B49E7472_inline(L_329, L_334, L_339, il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_340)
		{
			goto IL_054a;
		}
	}
	{
		int32_t L_341 = V_28;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_342 = __this->___ColumnIndices;
		int32_t L_343 = V_31;
		NullCheck(L_342);
		int32_t L_344 = ((int32_t)il2cpp_codegen_subtract(L_343, 1));
		int32_t L_345 = (L_342)->GetAt(static_cast<il2cpp_array_size_t>(L_344));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_346 = __this->___Values;
		int32_t L_347 = V_31;
		NullCheck(L_346);
		int32_t L_348 = ((int32_t)il2cpp_codegen_subtract(L_347, 1));
		float L_349 = (L_346)->GetAt(static_cast<il2cpp_array_size_t>(L_348));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_350 = V_20;
		int32_t L_351 = V_32;
		NullCheck(L_350);
		int32_t L_352 = ((int32_t)il2cpp_codegen_subtract(L_351, 1));
		float L_353 = (L_350)->GetAt(static_cast<il2cpp_array_size_t>(L_352));
		Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919* L_354 = (Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		Tuple_4__ctor_mB6DA61396DFEF00EAC44CB306FE51D013715426B(L_354, L_341, L_345, L_349, L_353, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_354;
	}

IL_054a:
	{
		int32_t L_355 = V_31;
		int32_t L_356 = V_29;
		if ((((int32_t)L_355) < ((int32_t)L_356)))
		{
			goto IL_0446;
		}
	}
	{
		int32_t L_357 = V_32;
		int32_t L_358 = V_30;
		if ((((int32_t)L_357) < ((int32_t)L_358)))
		{
			goto IL_0446;
		}
	}
	{
		int32_t L_359 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add(L_359, 1));
	}

IL_0562:
	{
		int32_t L_360 = V_28;
		int32_t L_361 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_360) < ((int32_t)L_361)))
		{
			goto IL_0419;
		}
	}
	{
		return (Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919*)NULL;
	}

IL_0571:
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_362 = ___0_other;
		Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* L_363 = ___1_predicate;
		int32_t L_364 = ___2_zeros;
		NullCheck((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this);
		Tuple_4_t465BD5D23FE3BE0E8D1C23C2DAB13105EB1F8919* L_365;
		L_365 = MatrixStorage_1_Find2Unchecked_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m45FECAA6BB36E8B37A52BF604126ACD0A634964C((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this, L_362, L_363, L_364, il2cpp_rgctx_method(method->rgctx_data, 14));
		return L_365;
	}
}
// Method Definition Index: 29308
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_FoldByColumnUnchecked_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mE0ED4255AF64C4473C7CAC1368E56D7DBAC089EF_gshared (SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___0_target, Func_3_t20B200D5023868E2C8AC4AD483D5EAED48292795* ___1_f, Func_3_t4A84D23D01C9E182A3CFA36E5B7F3F13F9B82367* ___2_finalize, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___3_state, int32_t ___4_zeros, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
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
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___3_state;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = ___0_target;
		if ((((RuntimeObject*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)L_0) == ((RuntimeObject*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)L_1)))
		{
			goto IL_0013;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = ___3_state;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = ___0_target;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = ___3_state;
		NullCheck(L_4);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
	}

IL_0013:
	{
		int32_t L_5 = ___4_zeros;
		if (L_5)
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_6 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_0 = L_7;
		V_1 = 0;
		goto IL_0085;
	}

IL_002a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___RowPointers;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___RowPointers;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_2 = L_15;
		V_3 = L_11;
		goto IL_007d;
	}

IL_0040:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->___ColumnIndices;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = L_19;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_20 = ___0_target;
		int32_t L_21 = V_4;
		Func_3_t20B200D5023868E2C8AC4AD483D5EAED48292795* L_22 = ___1_f;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_23 = ___0_target;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		double L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = __this->___Values;
		int32_t L_28 = V_3;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		float L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_22);
		double L_31;
		L_31 = Func_3_Invoke_mE2A19EB0A945F418CEAAFD50E287168BF1DEC2A9_inline(L_22, L_26, L_30, il2cpp_rgctx_method(method->rgctx_data, 3));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (double)L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_0;
		int32_t L_33 = V_4;
		NullCheck(L_32);
		int32_t* L_34 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)));
		int32_t L_35 = *((int32_t*)L_34);
		*((int32_t*)L_34) = (int32_t)((int32_t)il2cpp_codegen_add(L_35, 1));
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_007d:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = V_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_0085:
	{
		int32_t L_40 = V_1;
		int32_t L_41 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_002a;
		}
	}
	{
		V_5 = 0;
		goto IL_00b3;
	}

IL_0093:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_42 = ___0_target;
		int32_t L_43 = V_5;
		Func_3_t4A84D23D01C9E182A3CFA36E5B7F3F13F9B82367* L_44 = ___2_finalize;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_45 = ___0_target;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		double L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = V_0;
		int32_t L_50 = V_5;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_44);
		double L_53;
		L_53 = Func_3_Invoke_mF642F653D2CBBFA1FB0FA506D21B79C6C4AFAC87_inline(L_44, L_48, L_52, il2cpp_rgctx_method(method->rgctx_data, 5));
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (double)L_53);
		int32_t L_54 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_00b3:
	{
		int32_t L_55 = V_5;
		int32_t L_56 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_0093;
		}
	}
	{
		return;
	}

IL_00be:
	{
		V_6 = 0;
		goto IL_0159;
	}

IL_00c6:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->___RowPointers;
		int32_t L_58 = V_6;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		int32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_7 = L_60;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = __this->___RowPointers;
		int32_t L_62 = V_6;
		NullCheck(L_61);
		int32_t L_63 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		int32_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		V_8 = L_64;
		V_9 = 0;
		goto IL_0149;
	}

IL_00e3:
	{
		int32_t L_65 = V_7;
		int32_t L_66 = V_8;
		if ((((int32_t)L_65) >= ((int32_t)L_66)))
		{
			goto IL_0128;
		}
	}
	{
		int32_t L_67 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = __this->___ColumnIndices;
		int32_t L_69 = V_7;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		int32_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		if ((!(((uint32_t)L_67) == ((uint32_t)L_71))))
		{
			goto IL_0128;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_72 = ___0_target;
		int32_t L_73 = V_9;
		Func_3_t20B200D5023868E2C8AC4AD483D5EAED48292795* L_74 = ___1_f;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_75 = ___0_target;
		int32_t L_76 = V_9;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		double L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_79 = __this->___Values;
		int32_t L_80 = V_7;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		float L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_74);
		double L_83;
		L_83 = Func_3_Invoke_mE2A19EB0A945F418CEAAFD50E287168BF1DEC2A9_inline(L_74, L_78, L_82, il2cpp_rgctx_method(method->rgctx_data, 3));
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(L_73), (double)L_83);
		int32_t L_84 = V_7;
		int32_t L_85 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_86;
		L_86 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_84, 1)), L_85, NULL);
		V_7 = L_86;
		goto IL_0143;
	}

IL_0128:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_87 = ___0_target;
		int32_t L_88 = V_9;
		Func_3_t20B200D5023868E2C8AC4AD483D5EAED48292795* L_89 = ___1_f;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_90 = ___0_target;
		int32_t L_91 = V_9;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		double L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_94 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_89);
		double L_95;
		L_95 = Func_3_Invoke_mE2A19EB0A945F418CEAAFD50E287168BF1DEC2A9_inline(L_89, L_93, L_94, il2cpp_rgctx_method(method->rgctx_data, 3));
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(L_88), (double)L_95);
	}

IL_0143:
	{
		int32_t L_96 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_96, 1));
	}

IL_0149:
	{
		int32_t L_97 = V_9;
		int32_t L_98 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		if ((((int32_t)L_97) < ((int32_t)L_98)))
		{
			goto IL_00e3;
		}
	}
	{
		int32_t L_99 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_99, 1));
	}

IL_0159:
	{
		int32_t L_100 = V_6;
		int32_t L_101 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_100) < ((int32_t)L_101)))
		{
			goto IL_00c6;
		}
	}
	{
		V_10 = 0;
		goto IL_018d;
	}

IL_016b:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_102 = ___0_target;
		int32_t L_103 = V_10;
		Func_3_t4A84D23D01C9E182A3CFA36E5B7F3F13F9B82367* L_104 = ___2_finalize;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_105 = ___0_target;
		int32_t L_106 = V_10;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		double L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		int32_t L_109 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		NullCheck(L_104);
		double L_110;
		L_110 = Func_3_Invoke_mF642F653D2CBBFA1FB0FA506D21B79C6C4AFAC87_inline(L_104, L_108, L_109, il2cpp_rgctx_method(method->rgctx_data, 5));
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(L_103), (double)L_110);
		int32_t L_111 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_018d:
	{
		int32_t L_112 = V_10;
		int32_t L_113 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		if ((((int32_t)L_112) < ((int32_t)L_113)))
		{
			goto IL_016b;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29308
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_FoldByColumnUnchecked_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m0616B1E425E0648CD75134CA5E6BF4464FF690B3_gshared (SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_target, Func_3_t112E81BD9C60E0186076895800369606BCF590FB* ___1_f, Func_3_t0744D898EC5655214925A3300C859FF93F955FA4* ___2_finalize, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___3_state, int32_t ___4_zeros, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
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
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___3_state;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___0_target;
		if ((((RuntimeObject*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)L_0) == ((RuntimeObject*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)L_1)))
		{
			goto IL_0013;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___3_state;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___0_target;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = ___3_state;
		NullCheck(L_4);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
	}

IL_0013:
	{
		int32_t L_5 = ___4_zeros;
		if (L_5)
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_6 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_0 = L_7;
		V_1 = 0;
		goto IL_0085;
	}

IL_002a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___RowPointers;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___RowPointers;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_2 = L_15;
		V_3 = L_11;
		goto IL_007d;
	}

IL_0040:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->___ColumnIndices;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = L_19;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_20 = ___0_target;
		int32_t L_21 = V_4;
		Func_3_t112E81BD9C60E0186076895800369606BCF590FB* L_22 = ___1_f;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = ___0_target;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		float L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = __this->___Values;
		int32_t L_28 = V_3;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		float L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_22);
		float L_31;
		L_31 = Func_3_Invoke_mC8193F9BE436AD10B0F1279771862679CB5813AD_inline(L_22, L_26, L_30, il2cpp_rgctx_method(method->rgctx_data, 3));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (float)L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_0;
		int32_t L_33 = V_4;
		NullCheck(L_32);
		int32_t* L_34 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)));
		int32_t L_35 = *((int32_t*)L_34);
		*((int32_t*)L_34) = (int32_t)((int32_t)il2cpp_codegen_add(L_35, 1));
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_007d:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = V_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_0085:
	{
		int32_t L_40 = V_1;
		int32_t L_41 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_002a;
		}
	}
	{
		V_5 = 0;
		goto IL_00b3;
	}

IL_0093:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = ___0_target;
		int32_t L_43 = V_5;
		Func_3_t0744D898EC5655214925A3300C859FF93F955FA4* L_44 = ___2_finalize;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_45 = ___0_target;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		float L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = V_0;
		int32_t L_50 = V_5;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_44);
		float L_53;
		L_53 = Func_3_Invoke_mF98107D070CE400E936ECB9F66287FFB15A0B338_inline(L_44, L_48, L_52, il2cpp_rgctx_method(method->rgctx_data, 5));
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (float)L_53);
		int32_t L_54 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_00b3:
	{
		int32_t L_55 = V_5;
		int32_t L_56 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_0093;
		}
	}
	{
		return;
	}

IL_00be:
	{
		V_6 = 0;
		goto IL_0159;
	}

IL_00c6:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->___RowPointers;
		int32_t L_58 = V_6;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		int32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_7 = L_60;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = __this->___RowPointers;
		int32_t L_62 = V_6;
		NullCheck(L_61);
		int32_t L_63 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		int32_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		V_8 = L_64;
		V_9 = 0;
		goto IL_0149;
	}

IL_00e3:
	{
		int32_t L_65 = V_7;
		int32_t L_66 = V_8;
		if ((((int32_t)L_65) >= ((int32_t)L_66)))
		{
			goto IL_0128;
		}
	}
	{
		int32_t L_67 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = __this->___ColumnIndices;
		int32_t L_69 = V_7;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		int32_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		if ((!(((uint32_t)L_67) == ((uint32_t)L_71))))
		{
			goto IL_0128;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_72 = ___0_target;
		int32_t L_73 = V_9;
		Func_3_t112E81BD9C60E0186076895800369606BCF590FB* L_74 = ___1_f;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_75 = ___0_target;
		int32_t L_76 = V_9;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		float L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_79 = __this->___Values;
		int32_t L_80 = V_7;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		float L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_74);
		float L_83;
		L_83 = Func_3_Invoke_mC8193F9BE436AD10B0F1279771862679CB5813AD_inline(L_74, L_78, L_82, il2cpp_rgctx_method(method->rgctx_data, 3));
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(L_73), (float)L_83);
		int32_t L_84 = V_7;
		int32_t L_85 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_86;
		L_86 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_84, 1)), L_85, NULL);
		V_7 = L_86;
		goto IL_0143;
	}

IL_0128:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_87 = ___0_target;
		int32_t L_88 = V_9;
		Func_3_t112E81BD9C60E0186076895800369606BCF590FB* L_89 = ___1_f;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_90 = ___0_target;
		int32_t L_91 = V_9;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		float L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_94 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_89);
		float L_95;
		L_95 = Func_3_Invoke_mC8193F9BE436AD10B0F1279771862679CB5813AD_inline(L_89, L_93, L_94, il2cpp_rgctx_method(method->rgctx_data, 3));
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(L_88), (float)L_95);
	}

IL_0143:
	{
		int32_t L_96 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_96, 1));
	}

IL_0149:
	{
		int32_t L_97 = V_9;
		int32_t L_98 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		if ((((int32_t)L_97) < ((int32_t)L_98)))
		{
			goto IL_00e3;
		}
	}
	{
		int32_t L_99 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_99, 1));
	}

IL_0159:
	{
		int32_t L_100 = V_6;
		int32_t L_101 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_100) < ((int32_t)L_101)))
		{
			goto IL_00c6;
		}
	}
	{
		V_10 = 0;
		goto IL_018d;
	}

IL_016b:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_102 = ___0_target;
		int32_t L_103 = V_10;
		Func_3_t0744D898EC5655214925A3300C859FF93F955FA4* L_104 = ___2_finalize;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_105 = ___0_target;
		int32_t L_106 = V_10;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		float L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		int32_t L_109 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		NullCheck(L_104);
		float L_110;
		L_110 = Func_3_Invoke_mF98107D070CE400E936ECB9F66287FFB15A0B338_inline(L_104, L_108, L_109, il2cpp_rgctx_method(method->rgctx_data, 5));
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(L_103), (float)L_110);
		int32_t L_111 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_018d:
	{
		int32_t L_112 = V_10;
		int32_t L_113 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		if ((((int32_t)L_112) < ((int32_t)L_113)))
		{
			goto IL_016b;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29307
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_FoldByRowUnchecked_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m17F8C06626BC14B13AED79A5D1D8BE5242651908_gshared (SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___0_target, Func_3_t20B200D5023868E2C8AC4AD483D5EAED48292795* ___1_f, Func_3_t4A84D23D01C9E182A3CFA36E5B7F3F13F9B82367* ___2_finalize, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___3_state, int32_t ___4_zeros, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	double V_8 = 0.0;
	int32_t V_9 = 0;
	{
		int32_t L_0 = ___4_zeros;
		if (L_0)
		{
			goto IL_0069;
		}
	}
	{
		V_0 = 0;
		goto IL_005f;
	}

IL_0008:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___RowPointers;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___RowPointers;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_9 = ___3_state;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		double L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		int32_t L_13 = V_1;
		V_4 = L_13;
		goto IL_0045;
	}

IL_002a:
	{
		Func_3_t20B200D5023868E2C8AC4AD483D5EAED48292795* L_14 = ___1_f;
		double L_15 = V_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = __this->___Values;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		float L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		double L_20;
		L_20 = Func_3_Invoke_mE2A19EB0A945F418CEAAFD50E287168BF1DEC2A9_inline(L_14, L_15, L_19, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_3 = L_20;
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0045:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002a;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_24 = ___0_target;
		int32_t L_25 = V_0;
		Func_3_t4A84D23D01C9E182A3CFA36E5B7F3F13F9B82367* L_26 = ___2_finalize;
		double L_27 = V_3;
		int32_t L_28 = V_2;
		int32_t L_29 = V_1;
		NullCheck(L_26);
		double L_30;
		L_30 = Func_3_Invoke_mF642F653D2CBBFA1FB0FA506D21B79C6C4AFAC87_inline(L_26, L_27, ((int32_t)il2cpp_codegen_subtract(L_28, L_29)), il2cpp_rgctx_method(method->rgctx_data, 5));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (double)L_30);
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_005f:
	{
		int32_t L_32 = V_0;
		int32_t L_33 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_0069:
	{
		V_5 = 0;
		goto IL_010d;
	}

IL_0071:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = __this->___RowPointers;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		int32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_6 = L_37;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->___RowPointers;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		int32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_7 = L_41;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_42 = ___3_state;
		int32_t L_43 = V_5;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		double L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_8 = L_45;
		V_9 = 0;
		goto IL_00e7;
	}

IL_0099:
	{
		int32_t L_46 = V_6;
		int32_t L_47 = V_7;
		if ((((int32_t)L_46) >= ((int32_t)L_47)))
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_48 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->___ColumnIndices;
		int32_t L_50 = V_6;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		if ((!(((uint32_t)L_48) == ((uint32_t)L_52))))
		{
			goto IL_00d2;
		}
	}
	{
		Func_3_t20B200D5023868E2C8AC4AD483D5EAED48292795* L_53 = ___1_f;
		double L_54 = V_8;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_55 = __this->___Values;
		int32_t L_56 = V_6;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		float L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_53);
		double L_59;
		L_59 = Func_3_Invoke_mE2A19EB0A945F418CEAAFD50E287168BF1DEC2A9_inline(L_53, L_54, L_58, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_8 = L_59;
		int32_t L_60 = V_6;
		int32_t L_61 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_62;
		L_62 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_60, 1)), L_61, NULL);
		V_6 = L_62;
		goto IL_00e1;
	}

IL_00d2:
	{
		Func_3_t20B200D5023868E2C8AC4AD483D5EAED48292795* L_63 = ___1_f;
		double L_64 = V_8;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_65 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_63);
		double L_66;
		L_66 = Func_3_Invoke_mE2A19EB0A945F418CEAAFD50E287168BF1DEC2A9_inline(L_63, L_64, L_65, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_8 = L_66;
	}

IL_00e1:
	{
		int32_t L_67 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_00e7:
	{
		int32_t L_68 = V_9;
		int32_t L_69 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		if ((((int32_t)L_68) < ((int32_t)L_69)))
		{
			goto IL_0099;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_70 = ___0_target;
		int32_t L_71 = V_5;
		Func_3_t4A84D23D01C9E182A3CFA36E5B7F3F13F9B82367* L_72 = ___2_finalize;
		double L_73 = V_8;
		int32_t L_74 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		NullCheck(L_72);
		double L_75;
		L_75 = Func_3_Invoke_mF642F653D2CBBFA1FB0FA506D21B79C6C4AFAC87_inline(L_72, L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 5));
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(L_71), (double)L_75);
		int32_t L_76 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_010d:
	{
		int32_t L_77 = V_5;
		int32_t L_78 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_77) < ((int32_t)L_78)))
		{
			goto IL_0071;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29307
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_FoldByRowUnchecked_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mFCAE921C797D025D07098B7C13D7972978C3C6B1_gshared (SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_target, Func_3_t112E81BD9C60E0186076895800369606BCF590FB* ___1_f, Func_3_t0744D898EC5655214925A3300C859FF93F955FA4* ___2_finalize, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___3_state, int32_t ___4_zeros, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	int32_t V_9 = 0;
	{
		int32_t L_0 = ___4_zeros;
		if (L_0)
		{
			goto IL_0069;
		}
	}
	{
		V_0 = 0;
		goto IL_005f;
	}

IL_0008:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___RowPointers;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___RowPointers;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ___3_state;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		float L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		int32_t L_13 = V_1;
		V_4 = L_13;
		goto IL_0045;
	}

IL_002a:
	{
		Func_3_t112E81BD9C60E0186076895800369606BCF590FB* L_14 = ___1_f;
		float L_15 = V_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = __this->___Values;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		float L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		float L_20;
		L_20 = Func_3_Invoke_mC8193F9BE436AD10B0F1279771862679CB5813AD_inline(L_14, L_15, L_19, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_3 = L_20;
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0045:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002a;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = ___0_target;
		int32_t L_25 = V_0;
		Func_3_t0744D898EC5655214925A3300C859FF93F955FA4* L_26 = ___2_finalize;
		float L_27 = V_3;
		int32_t L_28 = V_2;
		int32_t L_29 = V_1;
		NullCheck(L_26);
		float L_30;
		L_30 = Func_3_Invoke_mF98107D070CE400E936ECB9F66287FFB15A0B338_inline(L_26, L_27, ((int32_t)il2cpp_codegen_subtract(L_28, L_29)), il2cpp_rgctx_method(method->rgctx_data, 5));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (float)L_30);
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_005f:
	{
		int32_t L_32 = V_0;
		int32_t L_33 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_0069:
	{
		V_5 = 0;
		goto IL_010d;
	}

IL_0071:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = __this->___RowPointers;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		int32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_6 = L_37;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->___RowPointers;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		int32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_7 = L_41;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = ___3_state;
		int32_t L_43 = V_5;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		float L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_8 = L_45;
		V_9 = 0;
		goto IL_00e7;
	}

IL_0099:
	{
		int32_t L_46 = V_6;
		int32_t L_47 = V_7;
		if ((((int32_t)L_46) >= ((int32_t)L_47)))
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_48 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->___ColumnIndices;
		int32_t L_50 = V_6;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		if ((!(((uint32_t)L_48) == ((uint32_t)L_52))))
		{
			goto IL_00d2;
		}
	}
	{
		Func_3_t112E81BD9C60E0186076895800369606BCF590FB* L_53 = ___1_f;
		float L_54 = V_8;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_55 = __this->___Values;
		int32_t L_56 = V_6;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		float L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_53);
		float L_59;
		L_59 = Func_3_Invoke_mC8193F9BE436AD10B0F1279771862679CB5813AD_inline(L_53, L_54, L_58, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_8 = L_59;
		int32_t L_60 = V_6;
		int32_t L_61 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_62;
		L_62 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_60, 1)), L_61, NULL);
		V_6 = L_62;
		goto IL_00e1;
	}

IL_00d2:
	{
		Func_3_t112E81BD9C60E0186076895800369606BCF590FB* L_63 = ___1_f;
		float L_64 = V_8;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_65 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_63);
		float L_66;
		L_66 = Func_3_Invoke_mC8193F9BE436AD10B0F1279771862679CB5813AD_inline(L_63, L_64, L_65, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_8 = L_66;
	}

IL_00e1:
	{
		int32_t L_67 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_00e7:
	{
		int32_t L_68 = V_9;
		int32_t L_69 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		if ((((int32_t)L_68) < ((int32_t)L_69)))
		{
			goto IL_0099;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_70 = ___0_target;
		int32_t L_71 = V_5;
		Func_3_t0744D898EC5655214925A3300C859FF93F955FA4* L_72 = ___2_finalize;
		float L_73 = V_8;
		int32_t L_74 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		NullCheck(L_72);
		float L_75;
		L_75 = Func_3_Invoke_mF98107D070CE400E936ECB9F66287FFB15A0B338_inline(L_72, L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 5));
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(L_71), (float)L_75);
		int32_t L_76 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_010d:
	{
		int32_t L_77 = V_5;
		int32_t L_78 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_77) < ((int32_t)L_78)))
		{
			goto IL_0071;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29304
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_MapIndexedToUnchecked_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8730A183908FE439F14EF9CF9D8F1CE58D72DB04_gshared (SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* __this, MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* ___0_target, Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* ___1_f, int32_t ___2_zeros, int32_t ___3_existingData, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* V_1 = NULL;
	float V_2 = 0.0f;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_4 = NULL;
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	float V_13 = 0.0f;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t G_B3_0 = 0;
	float G_B11_0 = 0.0f;
	{
		int32_t L_0 = ___2_zeros;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_002e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_1 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_2 = L_1;
		Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* L_2 = ___1_f;
		float L_3 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_2);
		float L_4;
		L_4 = Func_4_Invoke_m849FAAA1541A8D85C4C145B47FB24BEBB4A21036_inline(L_2, 0, 1, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_5);
		bool L_7;
		L_7 = Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F((&V_2), L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_002f;
	}

IL_002e:
	{
		G_B3_0 = 1;
	}

IL_002f:
	{
		V_0 = (bool)G_B3_0;
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_8 = ___0_target;
		V_1 = ((SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 4)));
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_9 = V_1;
		if (!L_9)
		{
			goto IL_01f2;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_10 = V_1;
		NullCheck(L_10);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = L_10->___RowPointers;
		V_3 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___ColumnIndices;
		NullCheck(L_12);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98(L_13, ((int32_t)(((RuntimeArray*)L_12)->max_length)), List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		V_4 = L_13;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = __this->___Values;
		NullCheck(L_14);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_15 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 5));
		List_1__ctor_mD19FC87E6CCC1D0C477B598DDB4A09F2A75E3E12(L_15, ((int32_t)(((RuntimeArray*)L_14)->max_length)), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_5 = L_15;
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_0127;
		}
	}
	{
		V_6 = 0;
		V_7 = 0;
		goto IL_0115;
	}

IL_0073:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_3;
		int32_t L_18 = V_7;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_19 = V_5;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_19, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (int32_t)L_20);
		V_8 = 0;
		goto IL_0102;
	}

IL_0083:
	{
		int32_t L_21 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->___RowPointers;
		int32_t L_23 = V_7;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if ((((int32_t)L_21) >= ((int32_t)L_25)))
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = __this->___ColumnIndices;
		int32_t L_27 = V_6;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = V_8;
		if ((((int32_t)L_29) == ((int32_t)L_30)))
		{
			goto IL_00b0;
		}
	}

IL_009f:
	{
		Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* L_31 = ___1_f;
		int32_t L_32 = V_7;
		int32_t L_33 = V_8;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_34 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_31);
		float L_35;
		L_35 = Func_4_Invoke_m849FAAA1541A8D85C4C145B47FB24BEBB4A21036_inline(L_31, L_32, L_33, L_34, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B11_0 = L_35;
		goto IL_00cc;
	}

IL_00b0:
	{
		Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* L_36 = ___1_f;
		int32_t L_37 = V_7;
		int32_t L_38 = V_8;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_39 = __this->___Values;
		int32_t L_40 = V_6;
		int32_t L_41 = L_40;
		V_6 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		NullCheck(L_39);
		int32_t L_42 = L_41;
		float L_43 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_36);
		float L_44;
		L_44 = Func_4_Invoke_m849FAAA1541A8D85C4C145B47FB24BEBB4A21036_inline(L_36, L_37, L_38, L_43, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B11_0 = L_44;
	}

IL_00cc:
	{
		V_9 = G_B11_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_45 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_2 = L_45;
		float L_46 = V_9;
		float L_47 = L_46;
		RuntimeObject* L_48 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_47);
		bool L_49;
		L_49 = Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F((&V_2), L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		if (L_49)
		{
			goto IL_00fc;
		}
	}
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_50 = V_5;
		float L_51 = V_9;
		NullCheck(L_50);
		List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_50, L_51, il2cpp_rgctx_method(method->rgctx_data, 8));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_52 = V_4;
		int32_t L_53 = V_8;
		NullCheck(L_52);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_52, L_53, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_00fc:
	{
		int32_t L_54 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0102:
	{
		int32_t L_55 = V_8;
		int32_t L_56 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_57 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_0115:
	{
		int32_t L_58 = V_7;
		int32_t L_59 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_58) < ((int32_t)L_59)))
		{
			goto IL_0073;
		}
	}
	{
		goto IL_01c8;
	}

IL_0127:
	{
		V_10 = 0;
		goto IL_01bb;
	}

IL_012f:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_3;
		int32_t L_61 = V_10;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_62 = V_5;
		NullCheck(L_62);
		int32_t L_63;
		L_63 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_62, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (int32_t)L_63);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = __this->___RowPointers;
		int32_t L_65 = V_10;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		int32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = __this->___RowPointers;
		int32_t L_69 = V_10;
		NullCheck(L_68);
		int32_t L_70 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		int32_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		V_11 = L_71;
		V_12 = L_67;
		goto IL_01af;
	}

IL_0154:
	{
		Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* L_72 = ___1_f;
		int32_t L_73 = V_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = __this->___ColumnIndices;
		int32_t L_75 = V_12;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		int32_t L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_78 = __this->___Values;
		int32_t L_79 = V_12;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		float L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		NullCheck(L_72);
		float L_82;
		L_82 = Func_4_Invoke_m849FAAA1541A8D85C4C145B47FB24BEBB4A21036_inline(L_72, L_73, L_77, L_81, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_13 = L_82;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_83 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_2 = L_83;
		float L_84 = V_13;
		float L_85 = L_84;
		RuntimeObject* L_86 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_85);
		bool L_87;
		L_87 = Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F((&V_2), L_86, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		if (L_87)
		{
			goto IL_01a9;
		}
	}
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_88 = V_5;
		float L_89 = V_13;
		NullCheck(L_88);
		List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_88, L_89, il2cpp_rgctx_method(method->rgctx_data, 8));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_90 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = __this->___ColumnIndices;
		int32_t L_92 = V_12;
		NullCheck(L_91);
		int32_t L_93 = L_92;
		int32_t L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		NullCheck(L_90);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_90, L_94, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_01a9:
	{
		int32_t L_95 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_95, 1));
	}

IL_01af:
	{
		int32_t L_96 = V_12;
		int32_t L_97 = V_11;
		if ((((int32_t)L_96) < ((int32_t)L_97)))
		{
			goto IL_0154;
		}
	}
	{
		int32_t L_98 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_01bb:
	{
		int32_t L_99 = V_10;
		int32_t L_100 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_99) < ((int32_t)L_100)))
		{
			goto IL_012f;
		}
	}

IL_01c8:
	{
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_101 = V_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_102 = V_4;
		NullCheck(L_102);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_103;
		L_103 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_102, List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		NullCheck(L_101);
		L_101->___ColumnIndices = L_103;
		Il2CppCodeGenWriteBarrier((void**)(&L_101->___ColumnIndices), (void*)L_103);
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_104 = V_1;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_105 = V_5;
		NullCheck(L_105);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_106;
		L_106 = List_1_ToArray_m7A70CC060DF87F0CCC73317BC6DE68C5D970C658(L_105, il2cpp_rgctx_method(method->rgctx_data, 9));
		NullCheck(L_104);
		L_104->___Values = L_106;
		Il2CppCodeGenWriteBarrier((void**)(&L_104->___Values), (void*)L_106);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_107 = V_3;
		int32_t L_108 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_109 = V_5;
		NullCheck(L_109);
		int32_t L_110;
		L_110 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_109, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_107);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(L_108), (int32_t)L_110);
		return;
	}

IL_01f2:
	{
		int32_t L_111 = ___3_existingData;
		if (L_111)
		{
			goto IL_01ff;
		}
	}
	{
		bool L_112 = V_0;
		if (L_112)
		{
			goto IL_01ff;
		}
	}
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_113 = ___0_target;
		NullCheck(L_113);
		VirtualActionInvoker0::Invoke(10, L_113);
	}

IL_01ff:
	{
		bool L_114 = V_0;
		if (!L_114)
		{
			goto IL_02aa;
		}
	}
	{
		V_14 = 0;
		goto IL_029c;
	}

IL_020d:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_115 = __this->___RowPointers;
		int32_t L_116 = V_14;
		NullCheck(L_115);
		int32_t L_117 = L_116;
		int32_t L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		V_15 = L_118;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_119 = __this->___RowPointers;
		int32_t L_120 = V_14;
		NullCheck(L_119);
		int32_t L_121 = ((int32_t)il2cpp_codegen_add(L_120, 1));
		int32_t L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		V_16 = L_122;
		V_17 = 0;
		goto IL_028c;
	}

IL_022a:
	{
		int32_t L_123 = V_15;
		int32_t L_124 = V_16;
		if ((((int32_t)L_123) >= ((int32_t)L_124)))
		{
			goto IL_026d;
		}
	}
	{
		int32_t L_125 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_126 = __this->___ColumnIndices;
		int32_t L_127 = V_15;
		NullCheck(L_126);
		int32_t L_128 = L_127;
		int32_t L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		if ((!(((uint32_t)L_125) == ((uint32_t)L_129))))
		{
			goto IL_026d;
		}
	}
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_130 = ___0_target;
		int32_t L_131 = V_14;
		int32_t L_132 = V_17;
		Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* L_133 = ___1_f;
		int32_t L_134 = V_14;
		int32_t L_135 = V_17;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_136 = __this->___Values;
		int32_t L_137 = V_15;
		NullCheck(L_136);
		int32_t L_138 = L_137;
		float L_139 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		NullCheck(L_133);
		float L_140;
		L_140 = Func_4_Invoke_m849FAAA1541A8D85C4C145B47FB24BEBB4A21036_inline(L_133, L_134, L_135, L_139, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_130);
		VirtualActionInvoker3< int32_t, int32_t, float >::Invoke(9, L_130, L_131, L_132, L_140);
		int32_t L_141 = V_15;
		int32_t L_142 = V_16;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_143;
		L_143 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_141, 1)), L_142, NULL);
		V_15 = L_143;
		goto IL_0286;
	}

IL_026d:
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_144 = ___0_target;
		int32_t L_145 = V_14;
		int32_t L_146 = V_17;
		Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* L_147 = ___1_f;
		int32_t L_148 = V_14;
		int32_t L_149 = V_17;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_150 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_147);
		float L_151;
		L_151 = Func_4_Invoke_m849FAAA1541A8D85C4C145B47FB24BEBB4A21036_inline(L_147, L_148, L_149, L_150, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_144);
		VirtualActionInvoker3< int32_t, int32_t, float >::Invoke(9, L_144, L_145, L_146, L_151);
	}

IL_0286:
	{
		int32_t L_152 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_152, 1));
	}

IL_028c:
	{
		int32_t L_153 = V_17;
		int32_t L_154 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		if ((((int32_t)L_153) < ((int32_t)L_154)))
		{
			goto IL_022a;
		}
	}
	{
		int32_t L_155 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_155, 1));
	}

IL_029c:
	{
		int32_t L_156 = V_14;
		int32_t L_157 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_156) < ((int32_t)L_157)))
		{
			goto IL_020d;
		}
	}
	{
		return;
	}

IL_02aa:
	{
		V_18 = 0;
		goto IL_030a;
	}

IL_02af:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_158 = __this->___RowPointers;
		int32_t L_159 = V_18;
		NullCheck(L_158);
		int32_t L_160 = L_159;
		int32_t L_161 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_162 = __this->___RowPointers;
		int32_t L_163 = V_18;
		NullCheck(L_162);
		int32_t L_164 = ((int32_t)il2cpp_codegen_add(L_163, 1));
		int32_t L_165 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		V_19 = L_165;
		V_20 = L_161;
		goto IL_02fe;
	}

IL_02c9:
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_166 = ___0_target;
		int32_t L_167 = V_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_168 = __this->___ColumnIndices;
		int32_t L_169 = V_20;
		NullCheck(L_168);
		int32_t L_170 = L_169;
		int32_t L_171 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* L_172 = ___1_f;
		int32_t L_173 = V_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_174 = __this->___ColumnIndices;
		int32_t L_175 = V_20;
		NullCheck(L_174);
		int32_t L_176 = L_175;
		int32_t L_177 = (L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_178 = __this->___Values;
		int32_t L_179 = V_20;
		NullCheck(L_178);
		int32_t L_180 = L_179;
		float L_181 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		NullCheck(L_172);
		float L_182;
		L_182 = Func_4_Invoke_m849FAAA1541A8D85C4C145B47FB24BEBB4A21036_inline(L_172, L_173, L_177, L_181, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_166);
		VirtualActionInvoker3< int32_t, int32_t, float >::Invoke(9, L_166, L_167, L_171, L_182);
		int32_t L_183 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_183, 1));
	}

IL_02fe:
	{
		int32_t L_184 = V_20;
		int32_t L_185 = V_19;
		if ((((int32_t)L_184) < ((int32_t)L_185)))
		{
			goto IL_02c9;
		}
	}
	{
		int32_t L_186 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_186, 1));
	}

IL_030a:
	{
		int32_t L_187 = V_18;
		int32_t L_188 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_187) < ((int32_t)L_188)))
		{
			goto IL_02af;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29305
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_MapSubMatrixIndexedToUnchecked_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBD31515F659A5B1A787CF9FC30196386E8C2348F_gshared (SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* __this, MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* ___0_target, Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* ___1_f, int32_t ___2_sourceRowIndex, int32_t ___3_targetRowIndex, int32_t ___4_rowCount, int32_t ___5_sourceColumnIndex, int32_t ___6_targetColumnIndex, int32_t ___7_columnCount, int32_t ___8_zeros, int32_t ___9_existingData, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* V_0 = NULL;
	bool V_1 = false;
	float V_2 = 0.0f;
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
	int32_t V_14 = 0;
	int32_t G_B5_0 = 0;
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_0 = ___0_target;
		V_0 = ((SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 1)));
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_2 = V_0;
		Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* L_3 = ___1_f;
		int32_t L_4 = ___2_sourceRowIndex;
		int32_t L_5 = ___3_targetRowIndex;
		int32_t L_6 = ___4_rowCount;
		int32_t L_7 = ___5_sourceColumnIndex;
		int32_t L_8 = ___6_targetColumnIndex;
		int32_t L_9 = ___7_columnCount;
		int32_t L_10 = ___8_zeros;
		int32_t L_11 = ___9_existingData;
		SparseCompressedRowMatrixStorage_1_MapSubMatrixIndexedToUnchecked_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA767D3AC07D72D095A461665419121749C9FD84D(__this, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}

IL_0022:
	{
		int32_t L_12 = ___8_zeros;
		if ((((int32_t)L_12) == ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_13 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_2 = L_13;
		Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* L_14 = ___1_f;
		float L_15 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_14);
		float L_16;
		L_16 = Func_4_Invoke_m849FAAA1541A8D85C4C145B47FB24BEBB4A21036_inline(L_14, 0, 1, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		float L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 5), &L_17);
		bool L_19;
		L_19 = Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F((&V_2), L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		G_B5_0 = ((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		goto IL_0052;
	}

IL_0051:
	{
		G_B5_0 = 1;
	}

IL_0052:
	{
		V_1 = (bool)G_B5_0;
		int32_t L_20 = ___9_existingData;
		if (L_20)
		{
			goto IL_0068;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_0068;
		}
	}
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_22 = ___0_target;
		int32_t L_23 = ___3_targetRowIndex;
		int32_t L_24 = ___4_rowCount;
		int32_t L_25 = ___6_targetColumnIndex;
		int32_t L_26 = ___7_columnCount;
		NullCheck(L_22);
		VirtualActionInvoker4< int32_t, int32_t, int32_t, int32_t >::Invoke(11, L_22, L_23, L_24, L_25, L_26);
	}

IL_0068:
	{
		bool L_27 = V_1;
		if (!L_27)
		{
			goto IL_013a;
		}
	}
	{
		int32_t L_28 = ___2_sourceRowIndex;
		V_3 = L_28;
		int32_t L_29 = ___3_targetRowIndex;
		V_4 = L_29;
		goto IL_012f;
	}

IL_0079:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->___RowPointers;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		int32_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_5 = L_33;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = __this->___RowPointers;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		int32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_6 = L_37;
		goto IL_0097;
	}

IL_0091:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_0097:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = __this->___ColumnIndices;
		int32_t L_40 = V_5;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		int32_t L_43 = ___5_sourceColumnIndex;
		if ((((int32_t)L_42) >= ((int32_t)L_43)))
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_44 = V_5;
		int32_t L_45 = V_6;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_0091;
		}
	}

IL_00aa:
	{
		int32_t L_46 = ___5_sourceColumnIndex;
		V_7 = L_46;
		int32_t L_47 = ___6_targetColumnIndex;
		V_8 = L_47;
		goto IL_011c;
	}

IL_00b4:
	{
		int32_t L_48 = V_5;
		int32_t L_49 = V_6;
		if ((((int32_t)L_48) >= ((int32_t)L_49)))
		{
			goto IL_00f7;
		}
	}
	{
		int32_t L_50 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = __this->___ColumnIndices;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		int32_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		if ((!(((uint32_t)L_50) == ((uint32_t)L_54))))
		{
			goto IL_00f7;
		}
	}
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_55 = ___0_target;
		int32_t L_56 = V_4;
		int32_t L_57 = V_8;
		Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* L_58 = ___1_f;
		int32_t L_59 = V_4;
		int32_t L_60 = V_8;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_61 = __this->___Values;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		float L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_58);
		float L_65;
		L_65 = Func_4_Invoke_m849FAAA1541A8D85C4C145B47FB24BEBB4A21036_inline(L_58, L_59, L_60, L_64, il2cpp_rgctx_method(method->rgctx_data, 4));
		NullCheck(L_55);
		VirtualActionInvoker3< int32_t, int32_t, float >::Invoke(9, L_55, L_56, L_57, L_65);
		int32_t L_66 = V_5;
		int32_t L_67 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_68;
		L_68 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_66, 1)), L_67, NULL);
		V_5 = L_68;
		goto IL_0110;
	}

IL_00f7:
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_69 = ___0_target;
		int32_t L_70 = V_4;
		int32_t L_71 = V_8;
		Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* L_72 = ___1_f;
		int32_t L_73 = V_4;
		int32_t L_74 = V_8;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_75 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_72);
		float L_76;
		L_76 = Func_4_Invoke_m849FAAA1541A8D85C4C145B47FB24BEBB4A21036_inline(L_72, L_73, L_74, L_75, il2cpp_rgctx_method(method->rgctx_data, 4));
		NullCheck(L_69);
		VirtualActionInvoker3< int32_t, int32_t, float >::Invoke(9, L_69, L_70, L_71, L_76);
	}

IL_0110:
	{
		int32_t L_77 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		int32_t L_78 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_011c:
	{
		int32_t L_79 = V_7;
		int32_t L_80 = ___5_sourceColumnIndex;
		int32_t L_81 = ___7_columnCount;
		if ((((int32_t)L_79) < ((int32_t)((int32_t)il2cpp_codegen_add(L_80, L_81)))))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_82 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_82, 1));
		int32_t L_83 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_83, 1));
	}

IL_012f:
	{
		int32_t L_84 = V_3;
		int32_t L_85 = ___2_sourceRowIndex;
		int32_t L_86 = ___4_rowCount;
		if ((((int32_t)L_84) < ((int32_t)((int32_t)il2cpp_codegen_add(L_85, L_86)))))
		{
			goto IL_0079;
		}
	}
	{
		return;
	}

IL_013a:
	{
		int32_t L_87 = ___6_targetColumnIndex;
		int32_t L_88 = ___5_sourceColumnIndex;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_87, L_88));
		int32_t L_89 = ___2_sourceRowIndex;
		V_10 = L_89;
		int32_t L_90 = ___3_targetRowIndex;
		V_11 = L_90;
		goto IL_01c8;
	}

IL_014a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = __this->___RowPointers;
		int32_t L_92 = V_10;
		NullCheck(L_91);
		int32_t L_93 = L_92;
		int32_t L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_95 = __this->___RowPointers;
		int32_t L_96 = V_10;
		NullCheck(L_95);
		int32_t L_97 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		int32_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		V_12 = L_98;
		V_13 = L_94;
		goto IL_01b6;
	}

IL_0164:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_99 = __this->___ColumnIndices;
		int32_t L_100 = V_13;
		NullCheck(L_99);
		int32_t L_101 = L_100;
		int32_t L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		int32_t L_103 = ___5_sourceColumnIndex;
		if ((((int32_t)L_102) < ((int32_t)L_103)))
		{
			goto IL_01b0;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = __this->___ColumnIndices;
		int32_t L_105 = V_13;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		int32_t L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		int32_t L_108 = ___5_sourceColumnIndex;
		int32_t L_109 = ___7_columnCount;
		if ((((int32_t)L_107) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_108, L_109)))))
		{
			goto IL_01b0;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->___ColumnIndices;
		int32_t L_111 = V_13;
		NullCheck(L_110);
		int32_t L_112 = L_111;
		int32_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		int32_t L_114 = V_9;
		V_14 = ((int32_t)il2cpp_codegen_add(L_113, L_114));
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_115 = ___0_target;
		int32_t L_116 = V_11;
		int32_t L_117 = V_14;
		Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* L_118 = ___1_f;
		int32_t L_119 = V_11;
		int32_t L_120 = V_14;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_121 = __this->___Values;
		int32_t L_122 = V_13;
		NullCheck(L_121);
		int32_t L_123 = L_122;
		float L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		NullCheck(L_118);
		float L_125;
		L_125 = Func_4_Invoke_m849FAAA1541A8D85C4C145B47FB24BEBB4A21036_inline(L_118, L_119, L_120, L_124, il2cpp_rgctx_method(method->rgctx_data, 4));
		NullCheck(L_115);
		VirtualActionInvoker3< int32_t, int32_t, float >::Invoke(9, L_115, L_116, L_117, L_125);
	}

IL_01b0:
	{
		int32_t L_126 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_126, 1));
	}

IL_01b6:
	{
		int32_t L_127 = V_13;
		int32_t L_128 = V_12;
		if ((((int32_t)L_127) < ((int32_t)L_128)))
		{
			goto IL_0164;
		}
	}
	{
		int32_t L_129 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_129, 1));
		int32_t L_130 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_130, 1));
	}

IL_01c8:
	{
		int32_t L_131 = V_10;
		int32_t L_132 = ___2_sourceRowIndex;
		int32_t L_133 = ___4_rowCount;
		if ((((int32_t)L_131) < ((int32_t)((int32_t)il2cpp_codegen_add(L_132, L_133)))))
		{
			goto IL_014a;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29306
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_MapSubMatrixIndexedToUnchecked_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA767D3AC07D72D095A461665419121749C9FD84D_gshared (SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* __this, SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* ___0_target, Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* ___1_f, int32_t ___2_sourceRowIndex, int32_t ___3_targetRowIndex, int32_t ___4_rowCount, int32_t ___5_sourceColumnIndex, int32_t ___6_targetColumnIndex, int32_t ___7_columnCount, int32_t ___8_zeros, int32_t ___9_existingData, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* V_5 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_6 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	float V_21 = 0.0f;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	int32_t V_32 = 0;
	int32_t V_33 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___8_zeros;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_1 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_4 = L_1;
		Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* L_2 = ___1_f;
		float L_3 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_2);
		float L_4;
		L_4 = Func_4_Invoke_m849FAAA1541A8D85C4C145B47FB24BEBB4A21036_inline(L_2, 0, 1, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_5);
		bool L_7;
		L_7 = Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F((&V_4), L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B3_0 = 1;
	}

IL_0031:
	{
		V_0 = (bool)G_B3_0;
		int32_t L_8 = ___9_existingData;
		if (L_8)
		{
			goto IL_0047;
		}
	}
	{
		bool L_9 = V_0;
		if (L_9)
		{
			goto IL_0047;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_10 = ___0_target;
		int32_t L_11 = ___3_targetRowIndex;
		int32_t L_12 = ___4_rowCount;
		int32_t L_13 = ___6_targetColumnIndex;
		int32_t L_14 = ___7_columnCount;
		NullCheck((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)L_10);
		VirtualActionInvoker4< int32_t, int32_t, int32_t, int32_t >::Invoke(11, (MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)L_10, L_11, L_12, L_13, L_14);
	}

IL_0047:
	{
		int32_t L_15 = ___3_targetRowIndex;
		int32_t L_16 = ___2_sourceRowIndex;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_15, L_16));
		int32_t L_17 = ___6_targetColumnIndex;
		int32_t L_18 = ___5_sourceColumnIndex;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_17, L_18));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 7));
		float L_19 = ((Matrix_1_tB5E7D4D987619C0CD4F6906C456D0DB7E49BC836_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 7)))->___Zero;
		V_3 = L_19;
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_20 = ___0_target;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = SparseCompressedRowMatrixStorage_1_get_ValueCount_m41F542490776D25FC8B48FE4FC34BCCD319EEC56(L_20, il2cpp_rgctx_method(method->rgctx_data, 8));
		if (L_21)
		{
			goto IL_02ae;
		}
	}
	{
		int32_t L_22;
		L_22 = SparseCompressedRowMatrixStorage_1_get_ValueCount_m41F542490776D25FC8B48FE4FC34BCCD319EEC56(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_23 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 9));
		List_1__ctor_mD19FC87E6CCC1D0C477B598DDB4A09F2A75E3E12(L_23, L_22, il2cpp_rgctx_method(method->rgctx_data, 10));
		V_5 = L_23;
		int32_t L_24;
		L_24 = SparseCompressedRowMatrixStorage_1_get_ValueCount_m41F542490776D25FC8B48FE4FC34BCCD319EEC56(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_25 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98(L_25, L_24, List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		V_6 = L_25;
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_26 = ___0_target;
		NullCheck(L_26);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = L_26->___RowPointers;
		V_7 = L_27;
		bool L_28 = V_0;
		if (!L_28)
		{
			goto IL_01a5;
		}
	}
	{
		int32_t L_29 = ___2_sourceRowIndex;
		V_8 = L_29;
		goto IL_0195;
	}

IL_0093:
	{
		int32_t L_30 = V_8;
		int32_t L_31 = V_1;
		V_9 = ((int32_t)il2cpp_codegen_add(L_30, L_31));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_7;
		int32_t L_33 = V_9;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_34 = V_5;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_34, il2cpp_rgctx_method(method->rgctx_data, 11));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (int32_t)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = __this->___RowPointers;
		int32_t L_37 = V_8;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		int32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_10 = L_39;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = __this->___RowPointers;
		int32_t L_41 = V_8;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_11 = L_43;
		goto IL_00c5;
	}

IL_00bf:
	{
		int32_t L_44 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00c5:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = __this->___ColumnIndices;
		int32_t L_46 = V_10;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		int32_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		int32_t L_49 = ___5_sourceColumnIndex;
		if ((((int32_t)L_48) >= ((int32_t)L_49)))
		{
			goto IL_00d8;
		}
	}
	{
		int32_t L_50 = V_10;
		int32_t L_51 = V_11;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_00bf;
		}
	}

IL_00d8:
	{
		int32_t L_52 = ___5_sourceColumnIndex;
		V_12 = L_52;
		int32_t L_53 = ___6_targetColumnIndex;
		V_13 = L_53;
		goto IL_0183;
	}

IL_00e5:
	{
		int32_t L_54 = V_10;
		int32_t L_55 = V_11;
		if ((((int32_t)L_54) >= ((int32_t)L_55)))
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_56 = V_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->___ColumnIndices;
		int32_t L_58 = V_10;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		int32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		if ((!(((uint32_t)L_56) == ((uint32_t)L_60))))
		{
			goto IL_0143;
		}
	}
	{
		Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* L_61 = ___1_f;
		int32_t L_62 = V_9;
		int32_t L_63 = V_13;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_64 = __this->___Values;
		int32_t L_65 = V_10;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		float L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		NullCheck(L_61);
		float L_68;
		L_68 = Func_4_Invoke_m849FAAA1541A8D85C4C145B47FB24BEBB4A21036_inline(L_61, L_62, L_63, L_67, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_14 = L_68;
		float L_69 = V_14;
		bool L_70;
		L_70 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_3), L_69, il2cpp_rgctx_method(method->rgctx_data, 13));
		if (L_70)
		{
			goto IL_0134;
		}
	}
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_71 = V_5;
		float L_72 = V_14;
		NullCheck(L_71);
		List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_71, L_72, il2cpp_rgctx_method(method->rgctx_data, 14));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_73 = V_6;
		int32_t L_74 = V_13;
		NullCheck(L_73);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_73, L_74, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_0134:
	{
		int32_t L_75 = V_10;
		int32_t L_76 = V_11;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_77;
		L_77 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_75, 1)), L_76, NULL);
		V_10 = L_77;
		goto IL_0177;
	}

IL_0143:
	{
		Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* L_78 = ___1_f;
		int32_t L_79 = V_9;
		int32_t L_80 = V_13;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_81 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_78);
		float L_82;
		L_82 = Func_4_Invoke_m849FAAA1541A8D85C4C145B47FB24BEBB4A21036_inline(L_78, L_79, L_80, L_81, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_15 = L_82;
		float L_83 = V_15;
		bool L_84;
		L_84 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_3), L_83, il2cpp_rgctx_method(method->rgctx_data, 13));
		if (L_84)
		{
			goto IL_0177;
		}
	}
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_85 = V_5;
		float L_86 = V_15;
		NullCheck(L_85);
		List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_85, L_86, il2cpp_rgctx_method(method->rgctx_data, 14));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_87 = V_6;
		int32_t L_88 = V_13;
		NullCheck(L_87);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_87, L_88, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_0177:
	{
		int32_t L_89 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_89, 1));
		int32_t L_90 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_90, 1));
	}

IL_0183:
	{
		int32_t L_91 = V_12;
		int32_t L_92 = ___5_sourceColumnIndex;
		int32_t L_93 = ___7_columnCount;
		if ((((int32_t)L_91) < ((int32_t)((int32_t)il2cpp_codegen_add(L_92, L_93)))))
		{
			goto IL_00e5;
		}
	}
	{
		int32_t L_94 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_0195:
	{
		int32_t L_95 = V_8;
		int32_t L_96 = ___2_sourceRowIndex;
		int32_t L_97 = ___4_rowCount;
		if ((((int32_t)L_95) < ((int32_t)((int32_t)il2cpp_codegen_add(L_96, L_97)))))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_025c;
	}

IL_01a5:
	{
		int32_t L_98 = ___2_sourceRowIndex;
		V_16 = L_98;
		goto IL_0251;
	}

IL_01ad:
	{
		int32_t L_99 = V_16;
		int32_t L_100 = V_1;
		V_17 = ((int32_t)il2cpp_codegen_add(L_99, L_100));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = V_7;
		int32_t L_102 = V_17;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_103 = V_5;
		NullCheck(L_103);
		int32_t L_104;
		L_104 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_103, il2cpp_rgctx_method(method->rgctx_data, 11));
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(L_102), (int32_t)L_104);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = __this->___RowPointers;
		int32_t L_106 = V_16;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		int32_t L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_109 = __this->___RowPointers;
		int32_t L_110 = V_16;
		NullCheck(L_109);
		int32_t L_111 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		int32_t L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		V_18 = L_112;
		V_19 = L_108;
		goto IL_0245;
	}

IL_01d9:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_113 = __this->___ColumnIndices;
		int32_t L_114 = V_19;
		NullCheck(L_113);
		int32_t L_115 = L_114;
		int32_t L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		int32_t L_117 = ___5_sourceColumnIndex;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_023f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_118 = __this->___ColumnIndices;
		int32_t L_119 = V_19;
		NullCheck(L_118);
		int32_t L_120 = L_119;
		int32_t L_121 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		int32_t L_122 = ___5_sourceColumnIndex;
		int32_t L_123 = ___7_columnCount;
		if ((((int32_t)L_121) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_122, L_123)))))
		{
			goto IL_023f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_124 = __this->___ColumnIndices;
		int32_t L_125 = V_19;
		NullCheck(L_124);
		int32_t L_126 = L_125;
		int32_t L_127 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		int32_t L_128 = V_2;
		V_20 = ((int32_t)il2cpp_codegen_add(L_127, L_128));
		Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* L_129 = ___1_f;
		int32_t L_130 = V_17;
		int32_t L_131 = V_20;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_132 = __this->___Values;
		int32_t L_133 = V_19;
		NullCheck(L_132);
		int32_t L_134 = L_133;
		float L_135 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		NullCheck(L_129);
		float L_136;
		L_136 = Func_4_Invoke_m849FAAA1541A8D85C4C145B47FB24BEBB4A21036_inline(L_129, L_130, L_131, L_135, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_21 = L_136;
		float L_137 = V_21;
		bool L_138;
		L_138 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_3), L_137, il2cpp_rgctx_method(method->rgctx_data, 13));
		if (L_138)
		{
			goto IL_023f;
		}
	}
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_139 = V_5;
		float L_140 = V_21;
		NullCheck(L_139);
		List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_139, L_140, il2cpp_rgctx_method(method->rgctx_data, 14));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_141 = V_6;
		int32_t L_142 = V_20;
		NullCheck(L_141);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_141, L_142, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_023f:
	{
		int32_t L_143 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_0245:
	{
		int32_t L_144 = V_19;
		int32_t L_145 = V_18;
		if ((((int32_t)L_144) < ((int32_t)L_145)))
		{
			goto IL_01d9;
		}
	}
	{
		int32_t L_146 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_146, 1));
	}

IL_0251:
	{
		int32_t L_147 = V_16;
		int32_t L_148 = ___2_sourceRowIndex;
		int32_t L_149 = ___4_rowCount;
		if ((((int32_t)L_147) < ((int32_t)((int32_t)il2cpp_codegen_add(L_148, L_149)))))
		{
			goto IL_01ad;
		}
	}

IL_025c:
	{
		int32_t L_150 = ___3_targetRowIndex;
		int32_t L_151 = ___4_rowCount;
		V_22 = ((int32_t)il2cpp_codegen_add(L_150, L_151));
		goto IL_0277;
	}

IL_0265:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_152 = V_7;
		int32_t L_153 = V_22;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_154 = V_5;
		NullCheck(L_154);
		int32_t L_155;
		L_155 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_154, il2cpp_rgctx_method(method->rgctx_data, 11));
		NullCheck(L_152);
		(L_152)->SetAt(static_cast<il2cpp_array_size_t>(L_153), (int32_t)L_155);
		int32_t L_156 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add(L_156, 1));
	}

IL_0277:
	{
		int32_t L_157 = V_22;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_158 = V_7;
		NullCheck(L_158);
		if ((((int32_t)L_157) < ((int32_t)((int32_t)(((RuntimeArray*)L_158)->max_length)))))
		{
			goto IL_0265;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_159 = ___0_target;
		NullCheck(L_159);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_160 = L_159->___RowPointers;
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_161 = ___0_target;
		NullCheck(L_161);
		int32_t L_162 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)L_161)->___RowCount;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_163 = V_5;
		NullCheck(L_163);
		int32_t L_164;
		L_164 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_163, il2cpp_rgctx_method(method->rgctx_data, 11));
		NullCheck(L_160);
		(L_160)->SetAt(static_cast<il2cpp_array_size_t>(L_162), (int32_t)L_164);
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_165 = ___0_target;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_166 = V_5;
		NullCheck(L_166);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_167;
		L_167 = List_1_ToArray_m7A70CC060DF87F0CCC73317BC6DE68C5D970C658(L_166, il2cpp_rgctx_method(method->rgctx_data, 15));
		NullCheck(L_165);
		L_165->___Values = L_167;
		Il2CppCodeGenWriteBarrier((void**)(&L_165->___Values), (void*)L_167);
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_168 = ___0_target;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_169 = V_6;
		NullCheck(L_169);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_170;
		L_170 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_169, List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		NullCheck(L_168);
		L_168->___ColumnIndices = L_170;
		Il2CppCodeGenWriteBarrier((void**)(&L_168->___ColumnIndices), (void*)L_170);
		return;
	}

IL_02ae:
	{
		bool L_171 = V_0;
		if (!L_171)
		{
			goto IL_0386;
		}
	}
	{
		int32_t L_172 = ___2_sourceRowIndex;
		V_23 = L_172;
		int32_t L_173 = ___3_targetRowIndex;
		V_24 = L_173;
		goto IL_037a;
	}

IL_02c0:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_174 = __this->___RowPointers;
		int32_t L_175 = V_23;
		NullCheck(L_174);
		int32_t L_176 = L_175;
		int32_t L_177 = (L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		V_25 = L_177;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_178 = __this->___RowPointers;
		int32_t L_179 = V_23;
		NullCheck(L_178);
		int32_t L_180 = ((int32_t)il2cpp_codegen_add(L_179, 1));
		int32_t L_181 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		V_26 = L_181;
		goto IL_02e0;
	}

IL_02da:
	{
		int32_t L_182 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add(L_182, 1));
	}

IL_02e0:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_183 = __this->___ColumnIndices;
		int32_t L_184 = V_25;
		NullCheck(L_183);
		int32_t L_185 = L_184;
		int32_t L_186 = (L_183)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
		int32_t L_187 = ___5_sourceColumnIndex;
		if ((((int32_t)L_186) >= ((int32_t)L_187)))
		{
			goto IL_02f3;
		}
	}
	{
		int32_t L_188 = V_25;
		int32_t L_189 = V_26;
		if ((((int32_t)L_188) < ((int32_t)L_189)))
		{
			goto IL_02da;
		}
	}

IL_02f3:
	{
		int32_t L_190 = ___5_sourceColumnIndex;
		V_27 = L_190;
		int32_t L_191 = ___6_targetColumnIndex;
		V_28 = L_191;
		goto IL_0365;
	}

IL_02fd:
	{
		int32_t L_192 = V_25;
		int32_t L_193 = V_26;
		if ((((int32_t)L_192) >= ((int32_t)L_193)))
		{
			goto IL_0340;
		}
	}
	{
		int32_t L_194 = V_27;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_195 = __this->___ColumnIndices;
		int32_t L_196 = V_25;
		NullCheck(L_195);
		int32_t L_197 = L_196;
		int32_t L_198 = (L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_197));
		if ((!(((uint32_t)L_194) == ((uint32_t)L_198))))
		{
			goto IL_0340;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_199 = ___0_target;
		int32_t L_200 = V_24;
		int32_t L_201 = V_28;
		Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* L_202 = ___1_f;
		int32_t L_203 = V_24;
		int32_t L_204 = V_28;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_205 = __this->___Values;
		int32_t L_206 = V_25;
		NullCheck(L_205);
		int32_t L_207 = L_206;
		float L_208 = (L_205)->GetAt(static_cast<il2cpp_array_size_t>(L_207));
		NullCheck(L_202);
		float L_209;
		L_209 = Func_4_Invoke_m849FAAA1541A8D85C4C145B47FB24BEBB4A21036_inline(L_202, L_203, L_204, L_208, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)L_199);
		VirtualActionInvoker3< int32_t, int32_t, float >::Invoke(9, (MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)L_199, L_200, L_201, L_209);
		int32_t L_210 = V_25;
		int32_t L_211 = V_26;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_212;
		L_212 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_210, 1)), L_211, NULL);
		V_25 = L_212;
		goto IL_0359;
	}

IL_0340:
	{
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_213 = ___0_target;
		int32_t L_214 = V_24;
		int32_t L_215 = V_28;
		Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* L_216 = ___1_f;
		int32_t L_217 = V_24;
		int32_t L_218 = V_28;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_219 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_216);
		float L_220;
		L_220 = Func_4_Invoke_m849FAAA1541A8D85C4C145B47FB24BEBB4A21036_inline(L_216, L_217, L_218, L_219, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)L_213);
		VirtualActionInvoker3< int32_t, int32_t, float >::Invoke(9, (MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)L_213, L_214, L_215, L_220);
	}

IL_0359:
	{
		int32_t L_221 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_221, 1));
		int32_t L_222 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add(L_222, 1));
	}

IL_0365:
	{
		int32_t L_223 = V_27;
		int32_t L_224 = ___5_sourceColumnIndex;
		int32_t L_225 = ___7_columnCount;
		if ((((int32_t)L_223) < ((int32_t)((int32_t)il2cpp_codegen_add(L_224, L_225)))))
		{
			goto IL_02fd;
		}
	}
	{
		int32_t L_226 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_226, 1));
		int32_t L_227 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add(L_227, 1));
	}

IL_037a:
	{
		int32_t L_228 = V_23;
		int32_t L_229 = ___2_sourceRowIndex;
		int32_t L_230 = ___4_rowCount;
		if ((((int32_t)L_228) < ((int32_t)((int32_t)il2cpp_codegen_add(L_229, L_230)))))
		{
			goto IL_02c0;
		}
	}
	{
		return;
	}

IL_0386:
	{
		int32_t L_231 = ___2_sourceRowIndex;
		V_29 = L_231;
		int32_t L_232 = ___3_targetRowIndex;
		V_30 = L_232;
		goto IL_040c;
	}

IL_038f:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_233 = __this->___RowPointers;
		int32_t L_234 = V_29;
		NullCheck(L_233);
		int32_t L_235 = L_234;
		int32_t L_236 = (L_233)->GetAt(static_cast<il2cpp_array_size_t>(L_235));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_237 = __this->___RowPointers;
		int32_t L_238 = V_29;
		NullCheck(L_237);
		int32_t L_239 = ((int32_t)il2cpp_codegen_add(L_238, 1));
		int32_t L_240 = (L_237)->GetAt(static_cast<il2cpp_array_size_t>(L_239));
		V_31 = L_240;
		V_32 = L_236;
		goto IL_03fa;
	}

IL_03a9:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_241 = __this->___ColumnIndices;
		int32_t L_242 = V_32;
		NullCheck(L_241);
		int32_t L_243 = L_242;
		int32_t L_244 = (L_241)->GetAt(static_cast<il2cpp_array_size_t>(L_243));
		int32_t L_245 = ___5_sourceColumnIndex;
		if ((((int32_t)L_244) < ((int32_t)L_245)))
		{
			goto IL_03f4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_246 = __this->___ColumnIndices;
		int32_t L_247 = V_32;
		NullCheck(L_246);
		int32_t L_248 = L_247;
		int32_t L_249 = (L_246)->GetAt(static_cast<il2cpp_array_size_t>(L_248));
		int32_t L_250 = ___5_sourceColumnIndex;
		int32_t L_251 = ___7_columnCount;
		if ((((int32_t)L_249) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_250, L_251)))))
		{
			goto IL_03f4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_252 = __this->___ColumnIndices;
		int32_t L_253 = V_32;
		NullCheck(L_252);
		int32_t L_254 = L_253;
		int32_t L_255 = (L_252)->GetAt(static_cast<il2cpp_array_size_t>(L_254));
		int32_t L_256 = V_2;
		V_33 = ((int32_t)il2cpp_codegen_add(L_255, L_256));
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_257 = ___0_target;
		int32_t L_258 = V_30;
		int32_t L_259 = V_33;
		Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* L_260 = ___1_f;
		int32_t L_261 = V_30;
		int32_t L_262 = V_33;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_263 = __this->___Values;
		int32_t L_264 = V_32;
		NullCheck(L_263);
		int32_t L_265 = L_264;
		float L_266 = (L_263)->GetAt(static_cast<il2cpp_array_size_t>(L_265));
		NullCheck(L_260);
		float L_267;
		L_267 = Func_4_Invoke_m849FAAA1541A8D85C4C145B47FB24BEBB4A21036_inline(L_260, L_261, L_262, L_266, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)L_257);
		VirtualActionInvoker3< int32_t, int32_t, float >::Invoke(9, (MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)L_257, L_258, L_259, L_267);
	}

IL_03f4:
	{
		int32_t L_268 = V_32;
		V_32 = ((int32_t)il2cpp_codegen_add(L_268, 1));
	}

IL_03fa:
	{
		int32_t L_269 = V_32;
		int32_t L_270 = V_31;
		if ((((int32_t)L_269) < ((int32_t)L_270)))
		{
			goto IL_03a9;
		}
	}
	{
		int32_t L_271 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add(L_271, 1));
		int32_t L_272 = V_30;
		V_30 = ((int32_t)il2cpp_codegen_add(L_272, 1));
	}

IL_040c:
	{
		int32_t L_273 = V_29;
		int32_t L_274 = ___2_sourceRowIndex;
		int32_t L_275 = ___4_rowCount;
		if ((((int32_t)L_273) < ((int32_t)((int32_t)il2cpp_codegen_add(L_274, L_275)))))
		{
			goto IL_038f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_MapToUnchecked_TisComplex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06_m4891EF9ACAFA3CCDDCE532E97D9A3230FCF117A4_gshared (SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* __this, MatrixStorage_1_t00388877416BC546B45044A69B130118E6A0BB89* ___0_target, Func_2_tE9000208843AA6F26314783210E61A8D532C107D* ___1_f, int32_t ___2_zeros, int32_t ___3_existingData, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	SparseCompressedRowMatrixStorage_1_tC611E0EB4F27406B83E11E799C64ECC5DC6969DB* V_1 = NULL;
	float V_2 = 0.0f;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_4 = NULL;
	List_1_tF537CE97143B8527EF8CAFE68B92E728B2719A1D* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t G_B3_0 = 0;
	Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	{
		int32_t L_0 = ___2_zeros;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_1 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_2 = L_1;
		Func_2_tE9000208843AA6F26314783210E61A8D532C107D* L_2 = ___1_f;
		float L_3 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_2);
		Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 L_4;
		L_4 = Func_2_Invoke_mE072E7729652470833DBFDE6DC64E8F2ABE5A917_inline(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_5);
		bool L_7;
		L_7 = Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F((&V_2), L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B3_0 = 1;
	}

IL_002d:
	{
		V_0 = (bool)G_B3_0;
		MatrixStorage_1_t00388877416BC546B45044A69B130118E6A0BB89* L_8 = ___0_target;
		V_1 = ((SparseCompressedRowMatrixStorage_1_tC611E0EB4F27406B83E11E799C64ECC5DC6969DB*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 4)));
		SparseCompressedRowMatrixStorage_1_tC611E0EB4F27406B83E11E799C64ECC5DC6969DB* L_9 = V_1;
		if (!L_9)
		{
			goto IL_01dd;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tC611E0EB4F27406B83E11E799C64ECC5DC6969DB* L_10 = V_1;
		NullCheck(L_10);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = L_10->___RowPointers;
		V_3 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___ColumnIndices;
		NullCheck(L_12);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98(L_13, ((int32_t)(((RuntimeArray*)L_12)->max_length)), List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		V_4 = L_13;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = __this->___Values;
		NullCheck(L_14);
		List_1_tF537CE97143B8527EF8CAFE68B92E728B2719A1D* L_15 = (List_1_tF537CE97143B8527EF8CAFE68B92E728B2719A1D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 5));
		List_1__ctor_m2EAD0DC00F34F3529C759FC83DE7E68BC81326C2(L_15, ((int32_t)(((RuntimeArray*)L_14)->max_length)), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_5 = L_15;
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_011d;
		}
	}
	{
		V_6 = 0;
		V_7 = 0;
		goto IL_010b;
	}

IL_0071:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_3;
		int32_t L_18 = V_7;
		List_1_tF537CE97143B8527EF8CAFE68B92E728B2719A1D* L_19 = V_5;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_mC9190727BD57B042AC64759CFDFA481065898B12_inline(L_19, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (int32_t)L_20);
		V_8 = 0;
		goto IL_00f8;
	}

IL_0081:
	{
		int32_t L_21 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->___RowPointers;
		int32_t L_23 = V_7;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if ((((int32_t)L_21) >= ((int32_t)L_25)))
		{
			goto IL_009d;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = __this->___ColumnIndices;
		int32_t L_27 = V_6;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = V_8;
		if ((((int32_t)L_29) == ((int32_t)L_30)))
		{
			goto IL_00aa;
		}
	}

IL_009d:
	{
		Func_2_tE9000208843AA6F26314783210E61A8D532C107D* L_31 = ___1_f;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_32 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_31);
		Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 L_33;
		L_33 = Func_2_Invoke_mE072E7729652470833DBFDE6DC64E8F2ABE5A917_inline(L_31, L_32, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B11_0 = L_33;
		goto IL_00c2;
	}

IL_00aa:
	{
		Func_2_tE9000208843AA6F26314783210E61A8D532C107D* L_34 = ___1_f;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_35 = __this->___Values;
		int32_t L_36 = V_6;
		int32_t L_37 = L_36;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		NullCheck(L_35);
		int32_t L_38 = L_37;
		float L_39 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_34);
		Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 L_40;
		L_40 = Func_2_Invoke_mE072E7729652470833DBFDE6DC64E8F2ABE5A917_inline(L_34, L_39, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B11_0 = L_40;
	}

IL_00c2:
	{
		V_9 = G_B11_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_41 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_2 = L_41;
		Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 L_42 = V_9;
		Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_43);
		bool L_45;
		L_45 = Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F((&V_2), L_44, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		if (L_45)
		{
			goto IL_00f2;
		}
	}
	{
		List_1_tF537CE97143B8527EF8CAFE68B92E728B2719A1D* L_46 = V_5;
		Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 L_47 = V_9;
		NullCheck(L_46);
		List_1_Add_m69399AFDAF357EE75291EF91E57AE6C1B27207CD_inline(L_46, L_47, il2cpp_rgctx_method(method->rgctx_data, 8));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_48 = V_4;
		int32_t L_49 = V_8;
		NullCheck(L_48);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_48, L_49, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_00f2:
	{
		int32_t L_50 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00f8:
	{
		int32_t L_51 = V_8;
		int32_t L_52 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_53 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_010b:
	{
		int32_t L_54 = V_7;
		int32_t L_55 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_0071;
		}
	}
	{
		goto IL_01b3;
	}

IL_011d:
	{
		V_10 = 0;
		goto IL_01a6;
	}

IL_0125:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_3;
		int32_t L_57 = V_10;
		List_1_tF537CE97143B8527EF8CAFE68B92E728B2719A1D* L_58 = V_5;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = List_1_get_Count_mC9190727BD57B042AC64759CFDFA481065898B12_inline(L_58, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (int32_t)L_59);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = __this->___RowPointers;
		int32_t L_61 = V_10;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		int32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = __this->___RowPointers;
		int32_t L_65 = V_10;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add(L_65, 1));
		int32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_11 = L_67;
		V_12 = L_63;
		goto IL_019a;
	}

IL_014a:
	{
		Func_2_tE9000208843AA6F26314783210E61A8D532C107D* L_68 = ___1_f;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_69 = __this->___Values;
		int32_t L_70 = V_12;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		float L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_68);
		Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 L_73;
		L_73 = Func_2_Invoke_mE072E7729652470833DBFDE6DC64E8F2ABE5A917_inline(L_68, L_72, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_13 = L_73;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_74 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_2 = L_74;
		Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 L_75 = V_13;
		Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 L_76 = L_75;
		RuntimeObject* L_77 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_76);
		bool L_78;
		L_78 = Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F((&V_2), L_77, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		if (L_78)
		{
			goto IL_0194;
		}
	}
	{
		List_1_tF537CE97143B8527EF8CAFE68B92E728B2719A1D* L_79 = V_5;
		Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 L_80 = V_13;
		NullCheck(L_79);
		List_1_Add_m69399AFDAF357EE75291EF91E57AE6C1B27207CD_inline(L_79, L_80, il2cpp_rgctx_method(method->rgctx_data, 8));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_81 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = __this->___ColumnIndices;
		int32_t L_83 = V_12;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		int32_t L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_81);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_81, L_85, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_0194:
	{
		int32_t L_86 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_86, 1));
	}

IL_019a:
	{
		int32_t L_87 = V_12;
		int32_t L_88 = V_11;
		if ((((int32_t)L_87) < ((int32_t)L_88)))
		{
			goto IL_014a;
		}
	}
	{
		int32_t L_89 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_01a6:
	{
		int32_t L_90 = V_10;
		int32_t L_91 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_0125;
		}
	}

IL_01b3:
	{
		SparseCompressedRowMatrixStorage_1_tC611E0EB4F27406B83E11E799C64ECC5DC6969DB* L_92 = V_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_93 = V_4;
		NullCheck(L_93);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_94;
		L_94 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_93, List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		NullCheck(L_92);
		L_92->___ColumnIndices = L_94;
		Il2CppCodeGenWriteBarrier((void**)(&L_92->___ColumnIndices), (void*)L_94);
		SparseCompressedRowMatrixStorage_1_tC611E0EB4F27406B83E11E799C64ECC5DC6969DB* L_95 = V_1;
		List_1_tF537CE97143B8527EF8CAFE68B92E728B2719A1D* L_96 = V_5;
		NullCheck(L_96);
		Complex32U5BU5D_t3AF6B5A9024ABEE3CE5B1717BFAE078BD682EB69* L_97;
		L_97 = List_1_ToArray_m9B2E3345A7E2592815CB0AD451BC4699A79CCE71(L_96, il2cpp_rgctx_method(method->rgctx_data, 9));
		NullCheck(L_95);
		L_95->___Values = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_95->___Values), (void*)L_97);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_98 = V_3;
		int32_t L_99 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		List_1_tF537CE97143B8527EF8CAFE68B92E728B2719A1D* L_100 = V_5;
		NullCheck(L_100);
		int32_t L_101;
		L_101 = List_1_get_Count_mC9190727BD57B042AC64759CFDFA481065898B12_inline(L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(L_99), (int32_t)L_101);
		return;
	}

IL_01dd:
	{
		int32_t L_102 = ___3_existingData;
		if (L_102)
		{
			goto IL_01ea;
		}
	}
	{
		bool L_103 = V_0;
		if (L_103)
		{
			goto IL_01ea;
		}
	}
	{
		MatrixStorage_1_t00388877416BC546B45044A69B130118E6A0BB89* L_104 = ___0_target;
		NullCheck(L_104);
		VirtualActionInvoker0::Invoke(10, L_104);
	}

IL_01ea:
	{
		bool L_105 = V_0;
		if (!L_105)
		{
			goto IL_028d;
		}
	}
	{
		V_14 = 0;
		goto IL_027f;
	}

IL_01f8:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_106 = __this->___RowPointers;
		int32_t L_107 = V_14;
		NullCheck(L_106);
		int32_t L_108 = L_107;
		int32_t L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		V_15 = L_109;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->___RowPointers;
		int32_t L_111 = V_14;
		NullCheck(L_110);
		int32_t L_112 = ((int32_t)il2cpp_codegen_add(L_111, 1));
		int32_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		V_16 = L_113;
		V_17 = 0;
		goto IL_026f;
	}

IL_0215:
	{
		int32_t L_114 = V_15;
		int32_t L_115 = V_16;
		if ((((int32_t)L_114) >= ((int32_t)L_115)))
		{
			goto IL_0254;
		}
	}
	{
		int32_t L_116 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_117 = __this->___ColumnIndices;
		int32_t L_118 = V_15;
		NullCheck(L_117);
		int32_t L_119 = L_118;
		int32_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		if ((!(((uint32_t)L_116) == ((uint32_t)L_120))))
		{
			goto IL_0254;
		}
	}
	{
		MatrixStorage_1_t00388877416BC546B45044A69B130118E6A0BB89* L_121 = ___0_target;
		int32_t L_122 = V_14;
		int32_t L_123 = V_17;
		Func_2_tE9000208843AA6F26314783210E61A8D532C107D* L_124 = ___1_f;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_125 = __this->___Values;
		int32_t L_126 = V_15;
		NullCheck(L_125);
		int32_t L_127 = L_126;
		float L_128 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		NullCheck(L_124);
		Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 L_129;
		L_129 = Func_2_Invoke_mE072E7729652470833DBFDE6DC64E8F2ABE5A917_inline(L_124, L_128, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_121);
		VirtualActionInvoker3< int32_t, int32_t, Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 >::Invoke(9, L_121, L_122, L_123, L_129);
		int32_t L_130 = V_15;
		int32_t L_131 = V_16;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_132;
		L_132 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_130, 1)), L_131, NULL);
		V_15 = L_132;
		goto IL_0269;
	}

IL_0254:
	{
		MatrixStorage_1_t00388877416BC546B45044A69B130118E6A0BB89* L_133 = ___0_target;
		int32_t L_134 = V_14;
		int32_t L_135 = V_17;
		Func_2_tE9000208843AA6F26314783210E61A8D532C107D* L_136 = ___1_f;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_137 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_136);
		Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 L_138;
		L_138 = Func_2_Invoke_mE072E7729652470833DBFDE6DC64E8F2ABE5A917_inline(L_136, L_137, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_133);
		VirtualActionInvoker3< int32_t, int32_t, Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 >::Invoke(9, L_133, L_134, L_135, L_138);
	}

IL_0269:
	{
		int32_t L_139 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_139, 1));
	}

IL_026f:
	{
		int32_t L_140 = V_17;
		int32_t L_141 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		if ((((int32_t)L_140) < ((int32_t)L_141)))
		{
			goto IL_0215;
		}
	}
	{
		int32_t L_142 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_142, 1));
	}

IL_027f:
	{
		int32_t L_143 = V_14;
		int32_t L_144 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_143) < ((int32_t)L_144)))
		{
			goto IL_01f8;
		}
	}
	{
		return;
	}

IL_028d:
	{
		V_18 = 0;
		goto IL_02e2;
	}

IL_0292:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_145 = __this->___RowPointers;
		int32_t L_146 = V_18;
		NullCheck(L_145);
		int32_t L_147 = L_146;
		int32_t L_148 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_149 = __this->___RowPointers;
		int32_t L_150 = V_18;
		NullCheck(L_149);
		int32_t L_151 = ((int32_t)il2cpp_codegen_add(L_150, 1));
		int32_t L_152 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		V_19 = L_152;
		V_20 = L_148;
		goto IL_02d6;
	}

IL_02ac:
	{
		MatrixStorage_1_t00388877416BC546B45044A69B130118E6A0BB89* L_153 = ___0_target;
		int32_t L_154 = V_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_155 = __this->___ColumnIndices;
		int32_t L_156 = V_20;
		NullCheck(L_155);
		int32_t L_157 = L_156;
		int32_t L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		Func_2_tE9000208843AA6F26314783210E61A8D532C107D* L_159 = ___1_f;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_160 = __this->___Values;
		int32_t L_161 = V_20;
		NullCheck(L_160);
		int32_t L_162 = L_161;
		float L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		NullCheck(L_159);
		Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 L_164;
		L_164 = Func_2_Invoke_mE072E7729652470833DBFDE6DC64E8F2ABE5A917_inline(L_159, L_163, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_153);
		VirtualActionInvoker3< int32_t, int32_t, Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 >::Invoke(9, L_153, L_154, L_158, L_164);
		int32_t L_165 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_165, 1));
	}

IL_02d6:
	{
		int32_t L_166 = V_20;
		int32_t L_167 = V_19;
		if ((((int32_t)L_166) < ((int32_t)L_167)))
		{
			goto IL_02ac;
		}
	}
	{
		int32_t L_168 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_168, 1));
	}

IL_02e2:
	{
		int32_t L_169 = V_18;
		int32_t L_170 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_169) < ((int32_t)L_170)))
		{
			goto IL_0292;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_MapToUnchecked_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF3D52A7AB23DE6F7C6288AE7270F7EBB66FA91B3_gshared (SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* __this, MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* ___0_target, Func_2_t30CC93434BF7EFA66AF4592260CCDBC8BFC5DD87* ___1_f, int32_t ___2_zeros, int32_t ___3_existingData, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* V_1 = NULL;
	float V_2 = 0.0f;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_4 = NULL;
	List_1_t495F03F47D827883530F951D563C0BB7340E5995* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	double V_9 = 0.0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	double V_13 = 0.0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t G_B3_0 = 0;
	double G_B11_0 = 0.0;
	{
		int32_t L_0 = ___2_zeros;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_1 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_2 = L_1;
		Func_2_t30CC93434BF7EFA66AF4592260CCDBC8BFC5DD87* L_2 = ___1_f;
		float L_3 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_2);
		double L_4;
		L_4 = Func_2_Invoke_mA111ABF54B39A261C7CEE454A6ADD73635731444_inline(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		double L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_5);
		bool L_7;
		L_7 = Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F((&V_2), L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B3_0 = 1;
	}

IL_002d:
	{
		V_0 = (bool)G_B3_0;
		MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* L_8 = ___0_target;
		V_1 = ((SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 4)));
		SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* L_9 = V_1;
		if (!L_9)
		{
			goto IL_01dd;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* L_10 = V_1;
		NullCheck(L_10);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = L_10->___RowPointers;
		V_3 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___ColumnIndices;
		NullCheck(L_12);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98(L_13, ((int32_t)(((RuntimeArray*)L_12)->max_length)), List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		V_4 = L_13;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = __this->___Values;
		NullCheck(L_14);
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_15 = (List_1_t495F03F47D827883530F951D563C0BB7340E5995*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 5));
		List_1__ctor_m3B40D7C96D362514EEA8DF87AF83D34EE5AAE421(L_15, ((int32_t)(((RuntimeArray*)L_14)->max_length)), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_5 = L_15;
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_011d;
		}
	}
	{
		V_6 = 0;
		V_7 = 0;
		goto IL_010b;
	}

IL_0071:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_3;
		int32_t L_18 = V_7;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_19 = V_5;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_inline(L_19, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (int32_t)L_20);
		V_8 = 0;
		goto IL_00f8;
	}

IL_0081:
	{
		int32_t L_21 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->___RowPointers;
		int32_t L_23 = V_7;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if ((((int32_t)L_21) >= ((int32_t)L_25)))
		{
			goto IL_009d;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = __this->___ColumnIndices;
		int32_t L_27 = V_6;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = V_8;
		if ((((int32_t)L_29) == ((int32_t)L_30)))
		{
			goto IL_00aa;
		}
	}

IL_009d:
	{
		Func_2_t30CC93434BF7EFA66AF4592260CCDBC8BFC5DD87* L_31 = ___1_f;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_32 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_31);
		double L_33;
		L_33 = Func_2_Invoke_mA111ABF54B39A261C7CEE454A6ADD73635731444_inline(L_31, L_32, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B11_0 = L_33;
		goto IL_00c2;
	}

IL_00aa:
	{
		Func_2_t30CC93434BF7EFA66AF4592260CCDBC8BFC5DD87* L_34 = ___1_f;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_35 = __this->___Values;
		int32_t L_36 = V_6;
		int32_t L_37 = L_36;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		NullCheck(L_35);
		int32_t L_38 = L_37;
		float L_39 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_34);
		double L_40;
		L_40 = Func_2_Invoke_mA111ABF54B39A261C7CEE454A6ADD73635731444_inline(L_34, L_39, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B11_0 = L_40;
	}

IL_00c2:
	{
		V_9 = G_B11_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_41 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_2 = L_41;
		double L_42 = V_9;
		double L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_43);
		bool L_45;
		L_45 = Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F((&V_2), L_44, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		if (L_45)
		{
			goto IL_00f2;
		}
	}
	{
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_46 = V_5;
		double L_47 = V_9;
		NullCheck(L_46);
		List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_inline(L_46, L_47, il2cpp_rgctx_method(method->rgctx_data, 8));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_48 = V_4;
		int32_t L_49 = V_8;
		NullCheck(L_48);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_48, L_49, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_00f2:
	{
		int32_t L_50 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00f8:
	{
		int32_t L_51 = V_8;
		int32_t L_52 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_53 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_010b:
	{
		int32_t L_54 = V_7;
		int32_t L_55 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_0071;
		}
	}
	{
		goto IL_01b3;
	}

IL_011d:
	{
		V_10 = 0;
		goto IL_01a6;
	}

IL_0125:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_3;
		int32_t L_57 = V_10;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_58 = V_5;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_inline(L_58, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (int32_t)L_59);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = __this->___RowPointers;
		int32_t L_61 = V_10;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		int32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = __this->___RowPointers;
		int32_t L_65 = V_10;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add(L_65, 1));
		int32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_11 = L_67;
		V_12 = L_63;
		goto IL_019a;
	}

IL_014a:
	{
		Func_2_t30CC93434BF7EFA66AF4592260CCDBC8BFC5DD87* L_68 = ___1_f;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_69 = __this->___Values;
		int32_t L_70 = V_12;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		float L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_68);
		double L_73;
		L_73 = Func_2_Invoke_mA111ABF54B39A261C7CEE454A6ADD73635731444_inline(L_68, L_72, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_13 = L_73;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_74 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_2 = L_74;
		double L_75 = V_13;
		double L_76 = L_75;
		RuntimeObject* L_77 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_76);
		bool L_78;
		L_78 = Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F((&V_2), L_77, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		if (L_78)
		{
			goto IL_0194;
		}
	}
	{
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_79 = V_5;
		double L_80 = V_13;
		NullCheck(L_79);
		List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_inline(L_79, L_80, il2cpp_rgctx_method(method->rgctx_data, 8));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_81 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = __this->___ColumnIndices;
		int32_t L_83 = V_12;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		int32_t L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_81);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_81, L_85, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_0194:
	{
		int32_t L_86 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_86, 1));
	}

IL_019a:
	{
		int32_t L_87 = V_12;
		int32_t L_88 = V_11;
		if ((((int32_t)L_87) < ((int32_t)L_88)))
		{
			goto IL_014a;
		}
	}
	{
		int32_t L_89 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_01a6:
	{
		int32_t L_90 = V_10;
		int32_t L_91 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_0125;
		}
	}

IL_01b3:
	{
		SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* L_92 = V_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_93 = V_4;
		NullCheck(L_93);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_94;
		L_94 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_93, List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		NullCheck(L_92);
		L_92->___ColumnIndices = L_94;
		Il2CppCodeGenWriteBarrier((void**)(&L_92->___ColumnIndices), (void*)L_94);
		SparseCompressedRowMatrixStorage_1_tDD963041E9497738EC6E5521FBF61D833FF484CF* L_95 = V_1;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_96 = V_5;
		NullCheck(L_96);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_97;
		L_97 = List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3(L_96, il2cpp_rgctx_method(method->rgctx_data, 9));
		NullCheck(L_95);
		L_95->___Values = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_95->___Values), (void*)L_97);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_98 = V_3;
		int32_t L_99 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_100 = V_5;
		NullCheck(L_100);
		int32_t L_101;
		L_101 = List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_inline(L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(L_99), (int32_t)L_101);
		return;
	}

IL_01dd:
	{
		int32_t L_102 = ___3_existingData;
		if (L_102)
		{
			goto IL_01ea;
		}
	}
	{
		bool L_103 = V_0;
		if (L_103)
		{
			goto IL_01ea;
		}
	}
	{
		MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* L_104 = ___0_target;
		NullCheck(L_104);
		VirtualActionInvoker0::Invoke(10, L_104);
	}

IL_01ea:
	{
		bool L_105 = V_0;
		if (!L_105)
		{
			goto IL_028d;
		}
	}
	{
		V_14 = 0;
		goto IL_027f;
	}

IL_01f8:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_106 = __this->___RowPointers;
		int32_t L_107 = V_14;
		NullCheck(L_106);
		int32_t L_108 = L_107;
		int32_t L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		V_15 = L_109;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->___RowPointers;
		int32_t L_111 = V_14;
		NullCheck(L_110);
		int32_t L_112 = ((int32_t)il2cpp_codegen_add(L_111, 1));
		int32_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		V_16 = L_113;
		V_17 = 0;
		goto IL_026f;
	}

IL_0215:
	{
		int32_t L_114 = V_15;
		int32_t L_115 = V_16;
		if ((((int32_t)L_114) >= ((int32_t)L_115)))
		{
			goto IL_0254;
		}
	}
	{
		int32_t L_116 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_117 = __this->___ColumnIndices;
		int32_t L_118 = V_15;
		NullCheck(L_117);
		int32_t L_119 = L_118;
		int32_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		if ((!(((uint32_t)L_116) == ((uint32_t)L_120))))
		{
			goto IL_0254;
		}
	}
	{
		MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* L_121 = ___0_target;
		int32_t L_122 = V_14;
		int32_t L_123 = V_17;
		Func_2_t30CC93434BF7EFA66AF4592260CCDBC8BFC5DD87* L_124 = ___1_f;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_125 = __this->___Values;
		int32_t L_126 = V_15;
		NullCheck(L_125);
		int32_t L_127 = L_126;
		float L_128 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		NullCheck(L_124);
		double L_129;
		L_129 = Func_2_Invoke_mA111ABF54B39A261C7CEE454A6ADD73635731444_inline(L_124, L_128, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_121);
		VirtualActionInvoker3< int32_t, int32_t, double >::Invoke(9, L_121, L_122, L_123, L_129);
		int32_t L_130 = V_15;
		int32_t L_131 = V_16;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_132;
		L_132 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_130, 1)), L_131, NULL);
		V_15 = L_132;
		goto IL_0269;
	}

IL_0254:
	{
		MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* L_133 = ___0_target;
		int32_t L_134 = V_14;
		int32_t L_135 = V_17;
		Func_2_t30CC93434BF7EFA66AF4592260CCDBC8BFC5DD87* L_136 = ___1_f;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_137 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_136);
		double L_138;
		L_138 = Func_2_Invoke_mA111ABF54B39A261C7CEE454A6ADD73635731444_inline(L_136, L_137, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_133);
		VirtualActionInvoker3< int32_t, int32_t, double >::Invoke(9, L_133, L_134, L_135, L_138);
	}

IL_0269:
	{
		int32_t L_139 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_139, 1));
	}

IL_026f:
	{
		int32_t L_140 = V_17;
		int32_t L_141 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		if ((((int32_t)L_140) < ((int32_t)L_141)))
		{
			goto IL_0215;
		}
	}
	{
		int32_t L_142 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_142, 1));
	}

IL_027f:
	{
		int32_t L_143 = V_14;
		int32_t L_144 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_143) < ((int32_t)L_144)))
		{
			goto IL_01f8;
		}
	}
	{
		return;
	}

IL_028d:
	{
		V_18 = 0;
		goto IL_02e2;
	}

IL_0292:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_145 = __this->___RowPointers;
		int32_t L_146 = V_18;
		NullCheck(L_145);
		int32_t L_147 = L_146;
		int32_t L_148 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_149 = __this->___RowPointers;
		int32_t L_150 = V_18;
		NullCheck(L_149);
		int32_t L_151 = ((int32_t)il2cpp_codegen_add(L_150, 1));
		int32_t L_152 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		V_19 = L_152;
		V_20 = L_148;
		goto IL_02d6;
	}

IL_02ac:
	{
		MatrixStorage_1_t3274677608F0D866A33A7F6CB795B2C43D750C6D* L_153 = ___0_target;
		int32_t L_154 = V_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_155 = __this->___ColumnIndices;
		int32_t L_156 = V_20;
		NullCheck(L_155);
		int32_t L_157 = L_156;
		int32_t L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		Func_2_t30CC93434BF7EFA66AF4592260CCDBC8BFC5DD87* L_159 = ___1_f;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_160 = __this->___Values;
		int32_t L_161 = V_20;
		NullCheck(L_160);
		int32_t L_162 = L_161;
		float L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		NullCheck(L_159);
		double L_164;
		L_164 = Func_2_Invoke_mA111ABF54B39A261C7CEE454A6ADD73635731444_inline(L_159, L_163, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_153);
		VirtualActionInvoker3< int32_t, int32_t, double >::Invoke(9, L_153, L_154, L_158, L_164);
		int32_t L_165 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_165, 1));
	}

IL_02d6:
	{
		int32_t L_166 = V_20;
		int32_t L_167 = V_19;
		if ((((int32_t)L_166) < ((int32_t)L_167)))
		{
			goto IL_02ac;
		}
	}
	{
		int32_t L_168 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_168, 1));
	}

IL_02e2:
	{
		int32_t L_169 = V_18;
		int32_t L_170 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_169) < ((int32_t)L_170)))
		{
			goto IL_0292;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_MapToUnchecked_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6A5542034BA16FD96D379063E3DE89149BFAA03E_gshared (SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* __this, MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* ___0_target, Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___1_f, int32_t ___2_zeros, int32_t ___3_existingData, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* V_1 = NULL;
	float V_2 = 0.0f;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_4 = NULL;
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	float V_13 = 0.0f;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t G_B3_0 = 0;
	float G_B11_0 = 0.0f;
	{
		int32_t L_0 = ___2_zeros;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_1 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_2 = L_1;
		Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* L_2 = ___1_f;
		float L_3 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_2);
		float L_4;
		L_4 = Func_2_Invoke_m5728ECFB038CFC6FEF889DC2D566EEF49D0E24B9_inline(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_5);
		bool L_7;
		L_7 = Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F((&V_2), L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B3_0 = 1;
	}

IL_002d:
	{
		V_0 = (bool)G_B3_0;
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_8 = ___0_target;
		V_1 = ((SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 4)));
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_9 = V_1;
		if (!L_9)
		{
			goto IL_01dd;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_10 = V_1;
		NullCheck(L_10);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = L_10->___RowPointers;
		V_3 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___ColumnIndices;
		NullCheck(L_12);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98(L_13, ((int32_t)(((RuntimeArray*)L_12)->max_length)), List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		V_4 = L_13;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = __this->___Values;
		NullCheck(L_14);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_15 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 5));
		List_1__ctor_mD19FC87E6CCC1D0C477B598DDB4A09F2A75E3E12(L_15, ((int32_t)(((RuntimeArray*)L_14)->max_length)), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_5 = L_15;
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_011d;
		}
	}
	{
		V_6 = 0;
		V_7 = 0;
		goto IL_010b;
	}

IL_0071:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_3;
		int32_t L_18 = V_7;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_19 = V_5;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_19, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (int32_t)L_20);
		V_8 = 0;
		goto IL_00f8;
	}

IL_0081:
	{
		int32_t L_21 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->___RowPointers;
		int32_t L_23 = V_7;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if ((((int32_t)L_21) >= ((int32_t)L_25)))
		{
			goto IL_009d;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = __this->___ColumnIndices;
		int32_t L_27 = V_6;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = V_8;
		if ((((int32_t)L_29) == ((int32_t)L_30)))
		{
			goto IL_00aa;
		}
	}

IL_009d:
	{
		Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* L_31 = ___1_f;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_32 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_31);
		float L_33;
		L_33 = Func_2_Invoke_m5728ECFB038CFC6FEF889DC2D566EEF49D0E24B9_inline(L_31, L_32, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B11_0 = L_33;
		goto IL_00c2;
	}

IL_00aa:
	{
		Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* L_34 = ___1_f;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_35 = __this->___Values;
		int32_t L_36 = V_6;
		int32_t L_37 = L_36;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		NullCheck(L_35);
		int32_t L_38 = L_37;
		float L_39 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_34);
		float L_40;
		L_40 = Func_2_Invoke_m5728ECFB038CFC6FEF889DC2D566EEF49D0E24B9_inline(L_34, L_39, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B11_0 = L_40;
	}

IL_00c2:
	{
		V_9 = G_B11_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_41 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_2 = L_41;
		float L_42 = V_9;
		float L_43 = L_42;
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_43);
		bool L_45;
		L_45 = Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F((&V_2), L_44, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		if (L_45)
		{
			goto IL_00f2;
		}
	}
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_46 = V_5;
		float L_47 = V_9;
		NullCheck(L_46);
		List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_46, L_47, il2cpp_rgctx_method(method->rgctx_data, 8));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_48 = V_4;
		int32_t L_49 = V_8;
		NullCheck(L_48);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_48, L_49, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_00f2:
	{
		int32_t L_50 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00f8:
	{
		int32_t L_51 = V_8;
		int32_t L_52 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_53 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_010b:
	{
		int32_t L_54 = V_7;
		int32_t L_55 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_0071;
		}
	}
	{
		goto IL_01b3;
	}

IL_011d:
	{
		V_10 = 0;
		goto IL_01a6;
	}

IL_0125:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_3;
		int32_t L_57 = V_10;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_58 = V_5;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_58, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (int32_t)L_59);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = __this->___RowPointers;
		int32_t L_61 = V_10;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		int32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = __this->___RowPointers;
		int32_t L_65 = V_10;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add(L_65, 1));
		int32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_11 = L_67;
		V_12 = L_63;
		goto IL_019a;
	}

IL_014a:
	{
		Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* L_68 = ___1_f;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_69 = __this->___Values;
		int32_t L_70 = V_12;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		float L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_68);
		float L_73;
		L_73 = Func_2_Invoke_m5728ECFB038CFC6FEF889DC2D566EEF49D0E24B9_inline(L_68, L_72, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_13 = L_73;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_74 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		V_2 = L_74;
		float L_75 = V_13;
		float L_76 = L_75;
		RuntimeObject* L_77 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_76);
		bool L_78;
		L_78 = Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F((&V_2), L_77, il2cpp_rgctx_method(method->klass->rgctx_data, 115));
		if (L_78)
		{
			goto IL_0194;
		}
	}
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_79 = V_5;
		float L_80 = V_13;
		NullCheck(L_79);
		List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_79, L_80, il2cpp_rgctx_method(method->rgctx_data, 8));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_81 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = __this->___ColumnIndices;
		int32_t L_83 = V_12;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		int32_t L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_81);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_81, L_85, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_0194:
	{
		int32_t L_86 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_86, 1));
	}

IL_019a:
	{
		int32_t L_87 = V_12;
		int32_t L_88 = V_11;
		if ((((int32_t)L_87) < ((int32_t)L_88)))
		{
			goto IL_014a;
		}
	}
	{
		int32_t L_89 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_01a6:
	{
		int32_t L_90 = V_10;
		int32_t L_91 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_0125;
		}
	}

IL_01b3:
	{
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_92 = V_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_93 = V_4;
		NullCheck(L_93);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_94;
		L_94 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_93, List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		NullCheck(L_92);
		L_92->___ColumnIndices = L_94;
		Il2CppCodeGenWriteBarrier((void**)(&L_92->___ColumnIndices), (void*)L_94);
		SparseCompressedRowMatrixStorage_1_tD1F084FBE7C0F0ABF90326A79D3DC21B4374BC7A* L_95 = V_1;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_96 = V_5;
		NullCheck(L_96);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_97;
		L_97 = List_1_ToArray_m7A70CC060DF87F0CCC73317BC6DE68C5D970C658(L_96, il2cpp_rgctx_method(method->rgctx_data, 9));
		NullCheck(L_95);
		L_95->___Values = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_95->___Values), (void*)L_97);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_98 = V_3;
		int32_t L_99 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_100 = V_5;
		NullCheck(L_100);
		int32_t L_101;
		L_101 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(L_99), (int32_t)L_101);
		return;
	}

IL_01dd:
	{
		int32_t L_102 = ___3_existingData;
		if (L_102)
		{
			goto IL_01ea;
		}
	}
	{
		bool L_103 = V_0;
		if (L_103)
		{
			goto IL_01ea;
		}
	}
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_104 = ___0_target;
		NullCheck(L_104);
		VirtualActionInvoker0::Invoke(10, L_104);
	}

IL_01ea:
	{
		bool L_105 = V_0;
		if (!L_105)
		{
			goto IL_028d;
		}
	}
	{
		V_14 = 0;
		goto IL_027f;
	}

IL_01f8:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_106 = __this->___RowPointers;
		int32_t L_107 = V_14;
		NullCheck(L_106);
		int32_t L_108 = L_107;
		int32_t L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		V_15 = L_109;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->___RowPointers;
		int32_t L_111 = V_14;
		NullCheck(L_110);
		int32_t L_112 = ((int32_t)il2cpp_codegen_add(L_111, 1));
		int32_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		V_16 = L_113;
		V_17 = 0;
		goto IL_026f;
	}

IL_0215:
	{
		int32_t L_114 = V_15;
		int32_t L_115 = V_16;
		if ((((int32_t)L_114) >= ((int32_t)L_115)))
		{
			goto IL_0254;
		}
	}
	{
		int32_t L_116 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_117 = __this->___ColumnIndices;
		int32_t L_118 = V_15;
		NullCheck(L_117);
		int32_t L_119 = L_118;
		int32_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		if ((!(((uint32_t)L_116) == ((uint32_t)L_120))))
		{
			goto IL_0254;
		}
	}
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_121 = ___0_target;
		int32_t L_122 = V_14;
		int32_t L_123 = V_17;
		Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* L_124 = ___1_f;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_125 = __this->___Values;
		int32_t L_126 = V_15;
		NullCheck(L_125);
		int32_t L_127 = L_126;
		float L_128 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		NullCheck(L_124);
		float L_129;
		L_129 = Func_2_Invoke_m5728ECFB038CFC6FEF889DC2D566EEF49D0E24B9_inline(L_124, L_128, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_121);
		VirtualActionInvoker3< int32_t, int32_t, float >::Invoke(9, L_121, L_122, L_123, L_129);
		int32_t L_130 = V_15;
		int32_t L_131 = V_16;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_132;
		L_132 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_130, 1)), L_131, NULL);
		V_15 = L_132;
		goto IL_0269;
	}

IL_0254:
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_133 = ___0_target;
		int32_t L_134 = V_14;
		int32_t L_135 = V_17;
		Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* L_136 = ___1_f;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		float L_137 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 3)))->___Zero;
		NullCheck(L_136);
		float L_138;
		L_138 = Func_2_Invoke_m5728ECFB038CFC6FEF889DC2D566EEF49D0E24B9_inline(L_136, L_137, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_133);
		VirtualActionInvoker3< int32_t, int32_t, float >::Invoke(9, L_133, L_134, L_135, L_138);
	}

IL_0269:
	{
		int32_t L_139 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_139, 1));
	}

IL_026f:
	{
		int32_t L_140 = V_17;
		int32_t L_141 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___ColumnCount;
		if ((((int32_t)L_140) < ((int32_t)L_141)))
		{
			goto IL_0215;
		}
	}
	{
		int32_t L_142 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_142, 1));
	}

IL_027f:
	{
		int32_t L_143 = V_14;
		int32_t L_144 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_143) < ((int32_t)L_144)))
		{
			goto IL_01f8;
		}
	}
	{
		return;
	}

IL_028d:
	{
		V_18 = 0;
		goto IL_02e2;
	}

IL_0292:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_145 = __this->___RowPointers;
		int32_t L_146 = V_18;
		NullCheck(L_145);
		int32_t L_147 = L_146;
		int32_t L_148 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_149 = __this->___RowPointers;
		int32_t L_150 = V_18;
		NullCheck(L_149);
		int32_t L_151 = ((int32_t)il2cpp_codegen_add(L_150, 1));
		int32_t L_152 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		V_19 = L_152;
		V_20 = L_148;
		goto IL_02d6;
	}

IL_02ac:
	{
		MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA* L_153 = ___0_target;
		int32_t L_154 = V_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_155 = __this->___ColumnIndices;
		int32_t L_156 = V_20;
		NullCheck(L_155);
		int32_t L_157 = L_156;
		int32_t L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* L_159 = ___1_f;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_160 = __this->___Values;
		int32_t L_161 = V_20;
		NullCheck(L_160);
		int32_t L_162 = L_161;
		float L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		NullCheck(L_159);
		float L_164;
		L_164 = Func_2_Invoke_m5728ECFB038CFC6FEF889DC2D566EEF49D0E24B9_inline(L_159, L_163, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_153);
		VirtualActionInvoker3< int32_t, int32_t, float >::Invoke(9, L_153, L_154, L_158, L_164);
		int32_t L_165 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_165, 1));
	}

IL_02d6:
	{
		int32_t L_166 = V_20;
		int32_t L_167 = V_19;
		if ((((int32_t)L_166) < ((int32_t)L_167)))
		{
			goto IL_02ac;
		}
	}
	{
		int32_t L_168 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_168, 1));
	}

IL_02e2:
	{
		int32_t L_169 = V_18;
		int32_t L_170 = ((MatrixStorage_1_tA858BBF2C22ED5A279DBDC514EDDB2453DBC81DA*)__this)->___RowCount;
		if ((((int32_t)L_169) < ((int32_t)L_170)))
		{
			goto IL_0292;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_4_t525CC23B24BA81F0495B34F5299118E2643B3CD8* SparseCompressedRowMatrixStorage_1_Find2Unchecked_TisIl2CppFullySharedGenericStruct_m8648F8E2ED392DC8EDD8E066BFB3AAF41468A63C_gshared (SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* __this, MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* ___0_other, Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40* ___1_predicate, int32_t ___2_zeros, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const uint32_t SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericStruct L_27 = alloca(SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
	const Il2CppFullySharedGenericStruct L_42 = L_27;
	const Il2CppFullySharedGenericStruct L_55 = L_27;
	const Il2CppFullySharedGenericStruct L_59 = L_27;
	const Il2CppFullySharedGenericStruct L_81 = L_27;
	const Il2CppFullySharedGenericStruct L_85 = L_27;
	const Il2CppFullySharedGenericStruct L_97 = L_27;
	const Il2CppFullySharedGenericStruct L_101 = L_27;
	const Il2CppFullySharedGenericStruct L_130 = L_27;
	const Il2CppFullySharedGenericStruct L_141 = L_27;
	const Il2CppFullySharedGenericStruct L_148 = L_27;
	const Il2CppFullySharedGenericStruct L_159 = L_27;
	const Il2CppFullySharedGenericStruct L_172 = L_27;
	const Il2CppFullySharedGenericStruct L_180 = L_27;
	const Il2CppFullySharedGenericStruct L_194 = L_27;
	const Il2CppFullySharedGenericStruct L_225 = L_27;
	const Il2CppFullySharedGenericStruct L_230 = L_27;
	const Il2CppFullySharedGenericStruct L_241 = L_27;
	const Il2CppFullySharedGenericStruct L_245 = L_27;
	const Il2CppFullySharedGenericStruct L_287 = L_27;
	const Il2CppFullySharedGenericStruct L_298 = L_27;
	const Il2CppFullySharedGenericStruct L_316 = L_27;
	const Il2CppFullySharedGenericStruct L_327 = L_27;
	const Il2CppFullySharedGenericStruct L_339 = L_27;
	const Il2CppFullySharedGenericStruct L_353 = L_27;
	const Il2CppFullySharedGenericStruct L_16 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	const Il2CppFullySharedGenericStruct L_21 = L_16;
	const Il2CppFullySharedGenericStruct L_32 = L_16;
	const Il2CppFullySharedGenericStruct L_36 = L_16;
	const Il2CppFullySharedGenericStruct L_58 = L_16;
	const Il2CppFullySharedGenericStruct L_73 = L_16;
	const Il2CppFullySharedGenericStruct L_78 = L_16;
	const Il2CppFullySharedGenericStruct L_90 = L_16;
	const Il2CppFullySharedGenericStruct L_94 = L_16;
	const Il2CppFullySharedGenericStruct L_126 = L_16;
	const Il2CppFullySharedGenericStruct L_137 = L_16;
	const Il2CppFullySharedGenericStruct L_147 = L_16;
	const Il2CppFullySharedGenericStruct L_158 = L_16;
	const Il2CppFullySharedGenericStruct L_168 = L_16;
	const Il2CppFullySharedGenericStruct L_176 = L_16;
	const Il2CppFullySharedGenericStruct L_218 = L_16;
	const Il2CppFullySharedGenericStruct L_223 = L_16;
	const Il2CppFullySharedGenericStruct L_235 = L_16;
	const Il2CppFullySharedGenericStruct L_239 = L_16;
	const Il2CppFullySharedGenericStruct L_282 = L_16;
	const Il2CppFullySharedGenericStruct L_294 = L_16;
	const Il2CppFullySharedGenericStruct L_315 = L_16;
	const Il2CppFullySharedGenericStruct L_326 = L_16;
	const Il2CppFullySharedGenericStruct L_334 = L_16;
	const Il2CppFullySharedGenericStruct L_349 = L_16;
	DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3* V_0 = NULL;
	DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* V_1 = NULL;
	SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* V_2 = NULL;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_8 = NULL;
	Il2CppFullySharedGenericStruct V_9 = alloca(SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
	memset(V_9, 0, SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	int32_t V_14 = 0;
	bool V_15 = false;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_18 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_19 = NULL;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_20 = NULL;
	Il2CppFullySharedGenericStruct V_21 = alloca(SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
	memset(V_21, 0, SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	bool V_26 = false;
	bool V_27 = false;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	int32_t V_32 = 0;
	int32_t G_B6_0 = 0;
	Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40* G_B8_0 = NULL;
	Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40* G_B7_0 = NULL;
	Il2CppFullySharedGenericStruct G_B9_0 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(G_B9_0, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40* G_B9_1 = NULL;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	Il2CppFullySharedGenericStruct G_B13_0 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(G_B13_0, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	int32_t G_B27_0 = 0;
	Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40* G_B29_0 = NULL;
	Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40* G_B28_0 = NULL;
	Il2CppFullySharedGenericStruct G_B30_0 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(G_B30_0, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40* G_B30_1 = NULL;
	Il2CppFullySharedGenericStruct G_B32_0 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(G_B32_0, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40* G_B32_1 = NULL;
	Il2CppFullySharedGenericStruct G_B31_0 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(G_B31_0, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40* G_B31_1 = NULL;
	Il2CppFullySharedGenericStruct G_B33_0 = alloca(SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
	memset(G_B33_0, 0, SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
	Il2CppFullySharedGenericStruct G_B33_1 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(G_B33_1, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40* G_B33_2 = NULL;
	int32_t G_B36_0 = 0;
	int32_t G_B36_1 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B35_1 = 0;
	Il2CppFullySharedGenericStruct G_B37_0 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(G_B37_0, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	int32_t G_B37_1 = 0;
	int32_t G_B37_2 = 0;
	Il2CppFullySharedGenericStruct G_B39_0 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(G_B39_0, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	int32_t G_B39_1 = 0;
	int32_t G_B39_2 = 0;
	Il2CppFullySharedGenericStruct G_B38_0 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(G_B38_0, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	int32_t G_B38_1 = 0;
	int32_t G_B38_2 = 0;
	Il2CppFullySharedGenericStruct G_B40_0 = alloca(SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
	memset(G_B40_0, 0, SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
	Il2CppFullySharedGenericStruct G_B40_1 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(G_B40_1, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	int32_t G_B40_2 = 0;
	int32_t G_B40_3 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B72_0 = 0;
	Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40* G_B74_0 = NULL;
	Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40* G_B73_0 = NULL;
	Il2CppFullySharedGenericStruct G_B75_0 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(G_B75_0, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40* G_B75_1 = NULL;
	Il2CppFullySharedGenericStruct G_B77_0 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(G_B77_0, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40* G_B77_1 = NULL;
	Il2CppFullySharedGenericStruct G_B76_0 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(G_B76_0, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40* G_B76_1 = NULL;
	Il2CppFullySharedGenericStruct G_B78_0 = alloca(SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
	memset(G_B78_0, 0, SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
	Il2CppFullySharedGenericStruct G_B78_1 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(G_B78_1, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40* G_B78_2 = NULL;
	int32_t G_B81_0 = 0;
	int32_t G_B81_1 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B80_1 = 0;
	Il2CppFullySharedGenericStruct G_B82_0 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(G_B82_0, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	int32_t G_B82_1 = 0;
	int32_t G_B82_2 = 0;
	Il2CppFullySharedGenericStruct G_B84_0 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(G_B84_0, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	int32_t G_B84_1 = 0;
	int32_t G_B84_2 = 0;
	Il2CppFullySharedGenericStruct G_B83_0 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(G_B83_0, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	int32_t G_B83_1 = 0;
	int32_t G_B83_2 = 0;
	Il2CppFullySharedGenericStruct G_B85_0 = alloca(SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
	memset(G_B85_0, 0, SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
	Il2CppFullySharedGenericStruct G_B85_1 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(G_B85_1, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	int32_t G_B85_2 = 0;
	int32_t G_B85_3 = 0;
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_0 = ___0_other;
		V_0 = ((DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 1)));
		DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00dd;
		}
	}
	{
		DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3* L_2 = V_0;
		NullCheck(L_2);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_3 = L_2->___Data;
		V_3 = L_3;
		V_4 = 0;
		V_5 = 0;
		goto IL_00ce;
	}

IL_001f:
	{
		V_6 = 0;
		goto IL_00bb;
	}

IL_0027:
	{
		int32_t L_4 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___RowPointers;
		int32_t L_6 = V_5;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if ((((int32_t)L_4) >= ((int32_t)L_8)))
		{
			goto IL_0045;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___ColumnIndices;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13 = V_6;
		G_B6_0 = ((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B6_0 = 0;
	}

IL_0046:
	{
		V_7 = (bool)G_B6_0;
		Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40* L_14 = ___1_predicate;
		bool L_15 = V_7;
		if (L_15)
		{
			G_B8_0 = L_14;
			goto IL_0054;
		}
		G_B7_0 = L_14;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B9_0, L_16, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		G_B9_1 = G_B7_0;
		goto IL_0066;
	}

IL_0054:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_17 = __this->___Values;
		int32_t L_18 = V_4;
		int32_t L_19 = L_18;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		NullCheck(L_17);
		int32_t L_20 = L_19;
		il2cpp_codegen_memcpy(L_21, (L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B9_0, L_21, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		G_B9_1 = G_B8_0;
	}

IL_0066:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_22 = V_3;
		int32_t L_23 = V_6;
		int32_t L_24 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		int32_t L_25 = V_5;
		NullCheck(L_22);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_23, L_24)), L_25));
		il2cpp_codegen_memcpy(L_27, (L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)), SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		NullCheck(G_B9_1);
		bool L_28;
		L_28 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), G_B9_1, G_B9_0, L_27);
		if (!L_28)
		{
			goto IL_00b5;
		}
	}
	{
		int32_t L_29 = V_5;
		int32_t L_30 = V_6;
		bool L_31 = V_7;
		if (L_31)
		{
			G_B12_0 = L_30;
			G_B12_1 = L_29;
			goto IL_008e;
		}
		G_B11_0 = L_30;
		G_B11_1 = L_29;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_32, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B13_0, L_32, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_009d;
	}

IL_008e:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_33 = __this->___Values;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		il2cpp_codegen_memcpy(L_36, (L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B13_0, L_36, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_009d:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_37 = V_3;
		int32_t L_38 = V_6;
		int32_t L_39 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		int32_t L_40 = V_5;
		NullCheck(L_37);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_38, L_39)), L_40));
		il2cpp_codegen_memcpy(L_42, (L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)), SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		Tuple_4_t525CC23B24BA81F0495B34F5299118E2643B3CD8* L_43 = (Tuple_4_t525CC23B24BA81F0495B34F5299118E2643B3CD8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		InvokerActionInvoker4< int32_t, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), L_43, G_B13_2, G_B13_1, G_B13_0, L_42);
		return L_43;
	}

IL_00b5:
	{
		int32_t L_44 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00bb:
	{
		int32_t L_45 = V_6;
		int32_t L_46 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___ColumnCount;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_47 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00ce:
	{
		int32_t L_48 = V_5;
		int32_t L_49 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_001f;
		}
	}
	{
		return (Tuple_4_t525CC23B24BA81F0495B34F5299118E2643B3CD8*)NULL;
	}

IL_00dd:
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_50 = ___0_other;
		V_1 = ((DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195*)IsInstClass((RuntimeObject*)L_50, il2cpp_rgctx_data(method->rgctx_data, 8)));
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_51 = V_1;
		if (!L_51)
		{
			goto IL_02ef;
		}
	}
	{
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_52 = V_1;
		NullCheck(L_52);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_53 = L_52->___Data;
		V_8 = L_53;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 10));
		MatrixBuilder_1_t1930CB8DAD403B2CA9A900B703DC372CF4ED998E* L_54;
		L_54 = ((  MatrixBuilder_1_t1930CB8DAD403B2CA9A900B703DC372CF4ED998E* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)))(il2cpp_rgctx_method(method->rgctx_data, 9));
		NullCheck(L_54);
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericStruct* >::Invoke(4, L_54, (Il2CppFullySharedGenericStruct*)L_55);
		il2cpp_codegen_memcpy(V_9, L_55, SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		int32_t L_56 = ___2_zeros;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01e2;
		}
	}
	{
		Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40* L_57 = ___1_predicate;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_58, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(L_59, V_9, SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		NullCheck(L_57);
		bool L_60;
		L_60 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_57, L_58, L_59);
		if (!L_60)
		{
			goto IL_01e2;
		}
	}
	{
		V_10 = 0;
		V_11 = 0;
		goto IL_01d3;
	}

IL_0122:
	{
		V_12 = 0;
		goto IL_01c0;
	}

IL_012a:
	{
		int32_t L_61 = V_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = __this->___RowPointers;
		int32_t L_63 = V_11;
		NullCheck(L_62);
		int32_t L_64 = ((int32_t)il2cpp_codegen_add(L_63, 1));
		int32_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		if ((((int32_t)L_61) >= ((int32_t)L_65)))
		{
			goto IL_0148;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = __this->___ColumnIndices;
		int32_t L_67 = V_10;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		int32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		int32_t L_70 = V_12;
		G_B27_0 = ((((int32_t)L_69) == ((int32_t)L_70))? 1 : 0);
		goto IL_0149;
	}

IL_0148:
	{
		G_B27_0 = 0;
	}

IL_0149:
	{
		V_13 = (bool)G_B27_0;
		Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40* L_71 = ___1_predicate;
		bool L_72 = V_13;
		if (L_72)
		{
			G_B29_0 = L_71;
			goto IL_0157;
		}
		G_B28_0 = L_71;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_73, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B30_0, L_73, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		G_B30_1 = G_B28_0;
		goto IL_0169;
	}

IL_0157:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_74 = __this->___Values;
		int32_t L_75 = V_10;
		int32_t L_76 = L_75;
		V_10 = ((int32_t)il2cpp_codegen_add(L_76, 1));
		NullCheck(L_74);
		int32_t L_77 = L_76;
		il2cpp_codegen_memcpy(L_78, (L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_77)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B30_0, L_78, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		G_B30_1 = G_B29_0;
	}

IL_0169:
	{
		int32_t L_79 = V_11;
		int32_t L_80 = V_12;
		if ((((int32_t)L_79) == ((int32_t)L_80)))
		{
			il2cpp_codegen_memcpy(G_B32_0, G_B30_0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
			G_B32_1 = G_B30_1;
			goto IL_0173;
		}
		il2cpp_codegen_memcpy(G_B31_0, G_B30_0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		G_B31_1 = G_B30_1;
	}
	{
		il2cpp_codegen_memcpy(L_81, V_9, SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		il2cpp_codegen_memcpy(G_B33_0, L_81, SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		il2cpp_codegen_memcpy(G_B33_1, G_B31_0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		G_B33_2 = G_B31_1;
		goto IL_017c;
	}

IL_0173:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_82 = V_8;
		int32_t L_83 = V_11;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		il2cpp_codegen_memcpy(L_85, (L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_84)), SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		il2cpp_codegen_memcpy(G_B33_0, L_85, SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		il2cpp_codegen_memcpy(G_B33_1, G_B32_0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		G_B33_2 = G_B32_1;
	}

IL_017c:
	{
		NullCheck(G_B33_2);
		bool L_86;
		L_86 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), G_B33_2, G_B33_1, G_B33_0);
		if (!L_86)
		{
			goto IL_01ba;
		}
	}
	{
		int32_t L_87 = V_11;
		int32_t L_88 = V_12;
		bool L_89 = V_13;
		if (L_89)
		{
			G_B36_0 = L_88;
			G_B36_1 = L_87;
			goto IL_0192;
		}
		G_B35_0 = L_88;
		G_B35_1 = L_87;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_90, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B37_0, L_90, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		G_B37_1 = G_B35_0;
		G_B37_2 = G_B35_1;
		goto IL_01a1;
	}

IL_0192:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_91 = __this->___Values;
		int32_t L_92 = V_10;
		NullCheck(L_91);
		int32_t L_93 = ((int32_t)il2cpp_codegen_subtract(L_92, 1));
		il2cpp_codegen_memcpy(L_94, (L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_93)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B37_0, L_94, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		G_B37_1 = G_B36_0;
		G_B37_2 = G_B36_1;
	}

IL_01a1:
	{
		int32_t L_95 = V_11;
		int32_t L_96 = V_12;
		if ((((int32_t)L_95) == ((int32_t)L_96)))
		{
			il2cpp_codegen_memcpy(G_B39_0, G_B37_0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
			G_B39_1 = G_B37_1;
			G_B39_2 = G_B37_2;
			goto IL_01ab;
		}
		il2cpp_codegen_memcpy(G_B38_0, G_B37_0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		G_B38_1 = G_B37_1;
		G_B38_2 = G_B37_2;
	}
	{
		il2cpp_codegen_memcpy(L_97, V_9, SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		il2cpp_codegen_memcpy(G_B40_0, L_97, SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		il2cpp_codegen_memcpy(G_B40_1, G_B38_0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		G_B40_2 = G_B38_1;
		G_B40_3 = G_B38_2;
		goto IL_01b4;
	}

IL_01ab:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_98 = V_8;
		int32_t L_99 = V_11;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		il2cpp_codegen_memcpy(L_101, (L_98)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_100)), SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		il2cpp_codegen_memcpy(G_B40_0, L_101, SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		il2cpp_codegen_memcpy(G_B40_1, G_B39_0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		G_B40_2 = G_B39_1;
		G_B40_3 = G_B39_2;
	}

IL_01b4:
	{
		Tuple_4_t525CC23B24BA81F0495B34F5299118E2643B3CD8* L_102 = (Tuple_4_t525CC23B24BA81F0495B34F5299118E2643B3CD8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		InvokerActionInvoker4< int32_t, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), L_102, G_B40_3, G_B40_2, G_B40_1, G_B40_0);
		return L_102;
	}

IL_01ba:
	{
		int32_t L_103 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_103, 1));
	}

IL_01c0:
	{
		int32_t L_104 = V_12;
		int32_t L_105 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___ColumnCount;
		if ((((int32_t)L_104) < ((int32_t)L_105)))
		{
			goto IL_012a;
		}
	}
	{
		int32_t L_106 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_106, 1));
	}

IL_01d3:
	{
		int32_t L_107 = V_11;
		int32_t L_108 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		if ((((int32_t)L_107) < ((int32_t)L_108)))
		{
			goto IL_0122;
		}
	}
	{
		return (Tuple_4_t525CC23B24BA81F0495B34F5299118E2643B3CD8*)NULL;
	}

IL_01e2:
	{
		V_14 = 0;
		goto IL_02e0;
	}

IL_01ea:
	{
		V_15 = (bool)0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_109 = __this->___RowPointers;
		int32_t L_110 = V_14;
		NullCheck(L_109);
		int32_t L_111 = L_110;
		int32_t L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_113 = __this->___RowPointers;
		int32_t L_114 = V_14;
		NullCheck(L_113);
		int32_t L_115 = ((int32_t)il2cpp_codegen_add(L_114, 1));
		int32_t L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		V_16 = L_116;
		V_17 = L_112;
		goto IL_0295;
	}

IL_020a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_117 = __this->___ColumnIndices;
		int32_t L_118 = V_17;
		NullCheck(L_117);
		int32_t L_119 = L_118;
		int32_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		int32_t L_121 = V_14;
		if ((!(((uint32_t)L_120) == ((uint32_t)L_121))))
		{
			goto IL_0258;
		}
	}
	{
		V_15 = (bool)1;
		Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40* L_122 = ___1_predicate;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_123 = __this->___Values;
		int32_t L_124 = V_17;
		NullCheck(L_123);
		int32_t L_125 = L_124;
		il2cpp_codegen_memcpy(L_126, (L_123)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_125)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_127 = V_8;
		int32_t L_128 = V_14;
		NullCheck(L_127);
		int32_t L_129 = L_128;
		il2cpp_codegen_memcpy(L_130, (L_127)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_129)), SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		NullCheck(L_122);
		bool L_131;
		L_131 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_122, L_126, L_130);
		if (!L_131)
		{
			goto IL_028f;
		}
	}
	{
		int32_t L_132 = V_14;
		int32_t L_133 = V_14;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_134 = __this->___Values;
		int32_t L_135 = V_17;
		NullCheck(L_134);
		int32_t L_136 = L_135;
		il2cpp_codegen_memcpy(L_137, (L_134)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_136)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_138 = V_8;
		int32_t L_139 = V_14;
		NullCheck(L_138);
		int32_t L_140 = L_139;
		il2cpp_codegen_memcpy(L_141, (L_138)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_140)), SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		Tuple_4_t525CC23B24BA81F0495B34F5299118E2643B3CD8* L_142 = (Tuple_4_t525CC23B24BA81F0495B34F5299118E2643B3CD8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		InvokerActionInvoker4< int32_t, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), L_142, L_132, L_133, L_137, L_141);
		return L_142;
	}

IL_0258:
	{
		Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40* L_143 = ___1_predicate;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_144 = __this->___Values;
		int32_t L_145 = V_17;
		NullCheck(L_144);
		int32_t L_146 = L_145;
		il2cpp_codegen_memcpy(L_147, (L_144)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_146)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(L_148, V_9, SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		NullCheck(L_143);
		bool L_149;
		L_149 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_143, L_147, L_148);
		if (!L_149)
		{
			goto IL_028f;
		}
	}
	{
		int32_t L_150 = V_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_151 = __this->___ColumnIndices;
		int32_t L_152 = V_17;
		NullCheck(L_151);
		int32_t L_153 = L_152;
		int32_t L_154 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_155 = __this->___Values;
		int32_t L_156 = V_17;
		NullCheck(L_155);
		int32_t L_157 = L_156;
		il2cpp_codegen_memcpy(L_158, (L_155)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_157)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(L_159, V_9, SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		Tuple_4_t525CC23B24BA81F0495B34F5299118E2643B3CD8* L_160 = (Tuple_4_t525CC23B24BA81F0495B34F5299118E2643B3CD8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		InvokerActionInvoker4< int32_t, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), L_160, L_150, L_154, L_158, L_159);
		return L_160;
	}

IL_028f:
	{
		int32_t L_161 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_161, 1));
	}

IL_0295:
	{
		int32_t L_162 = V_17;
		int32_t L_163 = V_16;
		if ((((int32_t)L_162) < ((int32_t)L_163)))
		{
			goto IL_020a;
		}
	}
	{
		bool L_164 = V_15;
		if (L_164)
		{
			goto IL_02da;
		}
	}
	{
		int32_t L_165 = V_14;
		int32_t L_166 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___ColumnCount;
		if ((((int32_t)L_165) >= ((int32_t)L_166)))
		{
			goto IL_02da;
		}
	}
	{
		Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40* L_167 = ___1_predicate;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_168, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_169 = V_8;
		int32_t L_170 = V_14;
		NullCheck(L_169);
		int32_t L_171 = L_170;
		il2cpp_codegen_memcpy(L_172, (L_169)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_171)), SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		NullCheck(L_167);
		bool L_173;
		L_173 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_167, L_168, L_172);
		if (!L_173)
		{
			goto IL_02da;
		}
	}
	{
		int32_t L_174 = V_14;
		int32_t L_175 = V_14;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_176, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_177 = V_8;
		int32_t L_178 = V_14;
		NullCheck(L_177);
		int32_t L_179 = L_178;
		il2cpp_codegen_memcpy(L_180, (L_177)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_179)), SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		Tuple_4_t525CC23B24BA81F0495B34F5299118E2643B3CD8* L_181 = (Tuple_4_t525CC23B24BA81F0495B34F5299118E2643B3CD8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		InvokerActionInvoker4< int32_t, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), L_181, L_174, L_175, L_176, L_180);
		return L_181;
	}

IL_02da:
	{
		int32_t L_182 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_182, 1));
	}

IL_02e0:
	{
		int32_t L_183 = V_14;
		int32_t L_184 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		if ((((int32_t)L_183) < ((int32_t)L_184)))
		{
			goto IL_01ea;
		}
	}
	{
		return (Tuple_4_t525CC23B24BA81F0495B34F5299118E2643B3CD8*)NULL;
	}

IL_02ef:
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_185 = ___0_other;
		V_2 = ((SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED*)IsInstClass((RuntimeObject*)L_185, il2cpp_rgctx_data(method->rgctx_data, 13)));
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_186 = V_2;
		if (!L_186)
		{
			goto IL_0571;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_187 = V_2;
		NullCheck(L_187);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_188 = L_187->___RowPointers;
		V_18 = L_188;
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_189 = V_2;
		NullCheck(L_189);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_190 = L_189->___ColumnIndices;
		V_19 = L_190;
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_191 = V_2;
		NullCheck(L_191);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_192 = L_191->___Values;
		V_20 = L_192;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 10));
		MatrixBuilder_1_t1930CB8DAD403B2CA9A900B703DC372CF4ED998E* L_193;
		L_193 = ((  MatrixBuilder_1_t1930CB8DAD403B2CA9A900B703DC372CF4ED998E* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)))(il2cpp_rgctx_method(method->rgctx_data, 9));
		NullCheck(L_193);
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericStruct* >::Invoke(4, L_193, (Il2CppFullySharedGenericStruct*)L_194);
		il2cpp_codegen_memcpy(V_21, L_194, SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		int32_t L_195 = ___2_zeros;
		if ((!(((uint32_t)L_195) == ((uint32_t)1))))
		{
			goto IL_0411;
		}
	}
	{
		V_22 = 0;
		V_23 = 0;
		V_24 = 0;
		goto IL_0402;
	}

IL_0335:
	{
		V_25 = 0;
		goto IL_03ef;
	}

IL_033d:
	{
		int32_t L_196 = V_22;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_197 = __this->___RowPointers;
		int32_t L_198 = V_24;
		NullCheck(L_197);
		int32_t L_199 = ((int32_t)il2cpp_codegen_add(L_198, 1));
		int32_t L_200 = (L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		if ((((int32_t)L_196) >= ((int32_t)L_200)))
		{
			goto IL_035b;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_201 = __this->___ColumnIndices;
		int32_t L_202 = V_22;
		NullCheck(L_201);
		int32_t L_203 = L_202;
		int32_t L_204 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		int32_t L_205 = V_25;
		G_B69_0 = ((((int32_t)L_204) == ((int32_t)L_205))? 1 : 0);
		goto IL_035c;
	}

IL_035b:
	{
		G_B69_0 = 0;
	}

IL_035c:
	{
		V_26 = (bool)G_B69_0;
		int32_t L_206 = V_23;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_207 = V_18;
		int32_t L_208 = V_24;
		NullCheck(L_207);
		int32_t L_209 = ((int32_t)il2cpp_codegen_add(L_208, 1));
		int32_t L_210 = (L_207)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		if ((((int32_t)L_206) >= ((int32_t)L_210)))
		{
			goto IL_0374;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_211 = V_19;
		int32_t L_212 = V_23;
		NullCheck(L_211);
		int32_t L_213 = L_212;
		int32_t L_214 = (L_211)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		int32_t L_215 = V_25;
		G_B72_0 = ((((int32_t)L_214) == ((int32_t)L_215))? 1 : 0);
		goto IL_0375;
	}

IL_0374:
	{
		G_B72_0 = 0;
	}

IL_0375:
	{
		V_27 = (bool)G_B72_0;
		Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40* L_216 = ___1_predicate;
		bool L_217 = V_26;
		if (L_217)
		{
			G_B74_0 = L_216;
			goto IL_0383;
		}
		G_B73_0 = L_216;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_218, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B75_0, L_218, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		G_B75_1 = G_B73_0;
		goto IL_0395;
	}

IL_0383:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_219 = __this->___Values;
		int32_t L_220 = V_22;
		int32_t L_221 = L_220;
		V_22 = ((int32_t)il2cpp_codegen_add(L_221, 1));
		NullCheck(L_219);
		int32_t L_222 = L_221;
		il2cpp_codegen_memcpy(L_223, (L_219)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_222)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B75_0, L_223, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		G_B75_1 = G_B74_0;
	}

IL_0395:
	{
		bool L_224 = V_27;
		if (L_224)
		{
			il2cpp_codegen_memcpy(G_B77_0, G_B75_0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
			G_B77_1 = G_B75_1;
			goto IL_039d;
		}
		il2cpp_codegen_memcpy(G_B76_0, G_B75_0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		G_B76_1 = G_B75_1;
	}
	{
		il2cpp_codegen_memcpy(L_225, V_21, SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		il2cpp_codegen_memcpy(G_B78_0, L_225, SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		il2cpp_codegen_memcpy(G_B78_1, G_B76_0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		G_B78_2 = G_B76_1;
		goto IL_03ab;
	}

IL_039d:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_226 = V_20;
		int32_t L_227 = V_23;
		int32_t L_228 = L_227;
		V_23 = ((int32_t)il2cpp_codegen_add(L_228, 1));
		NullCheck(L_226);
		int32_t L_229 = L_228;
		il2cpp_codegen_memcpy(L_230, (L_226)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_229)), SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		il2cpp_codegen_memcpy(G_B78_0, L_230, SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		il2cpp_codegen_memcpy(G_B78_1, G_B77_0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		G_B78_2 = G_B77_1;
	}

IL_03ab:
	{
		NullCheck(G_B78_2);
		bool L_231;
		L_231 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), G_B78_2, G_B78_1, G_B78_0);
		if (!L_231)
		{
			goto IL_03e9;
		}
	}
	{
		int32_t L_232 = V_24;
		int32_t L_233 = V_25;
		bool L_234 = V_26;
		if (L_234)
		{
			G_B81_0 = L_233;
			G_B81_1 = L_232;
			goto IL_03c1;
		}
		G_B80_0 = L_233;
		G_B80_1 = L_232;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_235, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B82_0, L_235, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		G_B82_1 = G_B80_0;
		G_B82_2 = G_B80_1;
		goto IL_03d0;
	}

IL_03c1:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_236 = __this->___Values;
		int32_t L_237 = V_22;
		NullCheck(L_236);
		int32_t L_238 = ((int32_t)il2cpp_codegen_subtract(L_237, 1));
		il2cpp_codegen_memcpy(L_239, (L_236)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_238)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B82_0, L_239, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		G_B82_1 = G_B81_0;
		G_B82_2 = G_B81_1;
	}

IL_03d0:
	{
		bool L_240 = V_27;
		if (L_240)
		{
			il2cpp_codegen_memcpy(G_B84_0, G_B82_0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
			G_B84_1 = G_B82_1;
			G_B84_2 = G_B82_2;
			goto IL_03d8;
		}
		il2cpp_codegen_memcpy(G_B83_0, G_B82_0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		G_B83_1 = G_B82_1;
		G_B83_2 = G_B82_2;
	}
	{
		il2cpp_codegen_memcpy(L_241, V_21, SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		il2cpp_codegen_memcpy(G_B85_0, L_241, SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		il2cpp_codegen_memcpy(G_B85_1, G_B83_0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		G_B85_2 = G_B83_1;
		G_B85_3 = G_B83_2;
		goto IL_03e3;
	}

IL_03d8:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_242 = V_20;
		int32_t L_243 = V_23;
		NullCheck(L_242);
		int32_t L_244 = ((int32_t)il2cpp_codegen_subtract(L_243, 1));
		il2cpp_codegen_memcpy(L_245, (L_242)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_244)), SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		il2cpp_codegen_memcpy(G_B85_0, L_245, SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		il2cpp_codegen_memcpy(G_B85_1, G_B84_0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		G_B85_2 = G_B84_1;
		G_B85_3 = G_B84_2;
	}

IL_03e3:
	{
		Tuple_4_t525CC23B24BA81F0495B34F5299118E2643B3CD8* L_246 = (Tuple_4_t525CC23B24BA81F0495B34F5299118E2643B3CD8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		InvokerActionInvoker4< int32_t, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), L_246, G_B85_3, G_B85_2, G_B85_1, G_B85_0);
		return L_246;
	}

IL_03e9:
	{
		int32_t L_247 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add(L_247, 1));
	}

IL_03ef:
	{
		int32_t L_248 = V_25;
		int32_t L_249 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___ColumnCount;
		if ((((int32_t)L_248) < ((int32_t)L_249)))
		{
			goto IL_033d;
		}
	}
	{
		int32_t L_250 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add(L_250, 1));
	}

IL_0402:
	{
		int32_t L_251 = V_24;
		int32_t L_252 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		if ((((int32_t)L_251) < ((int32_t)L_252)))
		{
			goto IL_0335;
		}
	}
	{
		return (Tuple_4_t525CC23B24BA81F0495B34F5299118E2643B3CD8*)NULL;
	}

IL_0411:
	{
		V_28 = 0;
		goto IL_0562;
	}

IL_0419:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_253 = __this->___RowPointers;
		int32_t L_254 = V_28;
		NullCheck(L_253);
		int32_t L_255 = ((int32_t)il2cpp_codegen_add(L_254, 1));
		int32_t L_256 = (L_253)->GetAt(static_cast<il2cpp_array_size_t>(L_255));
		V_29 = L_256;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_257 = V_18;
		int32_t L_258 = V_28;
		NullCheck(L_257);
		int32_t L_259 = ((int32_t)il2cpp_codegen_add(L_258, 1));
		int32_t L_260 = (L_257)->GetAt(static_cast<il2cpp_array_size_t>(L_259));
		V_30 = L_260;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_261 = __this->___RowPointers;
		int32_t L_262 = V_28;
		NullCheck(L_261);
		int32_t L_263 = L_262;
		int32_t L_264 = (L_261)->GetAt(static_cast<il2cpp_array_size_t>(L_263));
		V_31 = L_264;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_265 = V_18;
		int32_t L_266 = V_28;
		NullCheck(L_265);
		int32_t L_267 = L_266;
		int32_t L_268 = (L_265)->GetAt(static_cast<il2cpp_array_size_t>(L_267));
		V_32 = L_268;
		goto IL_054a;
	}

IL_0446:
	{
		int32_t L_269 = V_31;
		int32_t L_270 = V_29;
		if ((((int32_t)L_269) == ((int32_t)L_270)))
		{
			goto IL_0462;
		}
	}
	{
		int32_t L_271 = V_32;
		int32_t L_272 = V_30;
		if ((((int32_t)L_271) >= ((int32_t)L_272)))
		{
			goto IL_049f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_273 = __this->___ColumnIndices;
		int32_t L_274 = V_31;
		NullCheck(L_273);
		int32_t L_275 = L_274;
		int32_t L_276 = (L_273)->GetAt(static_cast<il2cpp_array_size_t>(L_275));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_277 = V_19;
		int32_t L_278 = V_32;
		NullCheck(L_277);
		int32_t L_279 = L_278;
		int32_t L_280 = (L_277)->GetAt(static_cast<il2cpp_array_size_t>(L_279));
		if ((((int32_t)L_276) <= ((int32_t)L_280)))
		{
			goto IL_049f;
		}
	}

IL_0462:
	{
		Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40* L_281 = ___1_predicate;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_282, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_283 = V_20;
		int32_t L_284 = V_32;
		int32_t L_285 = L_284;
		V_32 = ((int32_t)il2cpp_codegen_add(L_285, 1));
		NullCheck(L_283);
		int32_t L_286 = L_285;
		il2cpp_codegen_memcpy(L_287, (L_283)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_286)), SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		NullCheck(L_281);
		bool L_288;
		L_288 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_281, L_282, L_287);
		if (!L_288)
		{
			goto IL_054a;
		}
	}
	{
		int32_t L_289 = V_28;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_290 = V_19;
		int32_t L_291 = V_32;
		NullCheck(L_290);
		int32_t L_292 = ((int32_t)il2cpp_codegen_subtract(L_291, 1));
		int32_t L_293 = (L_290)->GetAt(static_cast<il2cpp_array_size_t>(L_292));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_294, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_295 = V_20;
		int32_t L_296 = V_32;
		NullCheck(L_295);
		int32_t L_297 = ((int32_t)il2cpp_codegen_subtract(L_296, 1));
		il2cpp_codegen_memcpy(L_298, (L_295)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_297)), SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		Tuple_4_t525CC23B24BA81F0495B34F5299118E2643B3CD8* L_299 = (Tuple_4_t525CC23B24BA81F0495B34F5299118E2643B3CD8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		InvokerActionInvoker4< int32_t, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), L_299, L_289, L_293, L_294, L_298);
		return L_299;
	}

IL_049f:
	{
		int32_t L_300 = V_32;
		int32_t L_301 = V_30;
		if ((((int32_t)L_300) == ((int32_t)L_301)))
		{
			goto IL_04b5;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_302 = __this->___ColumnIndices;
		int32_t L_303 = V_31;
		NullCheck(L_302);
		int32_t L_304 = L_303;
		int32_t L_305 = (L_302)->GetAt(static_cast<il2cpp_array_size_t>(L_304));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_306 = V_19;
		int32_t L_307 = V_32;
		NullCheck(L_306);
		int32_t L_308 = L_307;
		int32_t L_309 = (L_306)->GetAt(static_cast<il2cpp_array_size_t>(L_308));
		if ((((int32_t)L_305) >= ((int32_t)L_309)))
		{
			goto IL_04f5;
		}
	}

IL_04b5:
	{
		Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40* L_310 = ___1_predicate;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_311 = __this->___Values;
		int32_t L_312 = V_31;
		int32_t L_313 = L_312;
		V_31 = ((int32_t)il2cpp_codegen_add(L_313, 1));
		NullCheck(L_311);
		int32_t L_314 = L_313;
		il2cpp_codegen_memcpy(L_315, (L_311)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_314)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(L_316, V_21, SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		NullCheck(L_310);
		bool L_317;
		L_317 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_310, L_315, L_316);
		if (!L_317)
		{
			goto IL_054a;
		}
	}
	{
		int32_t L_318 = V_28;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_319 = __this->___ColumnIndices;
		int32_t L_320 = V_31;
		NullCheck(L_319);
		int32_t L_321 = ((int32_t)il2cpp_codegen_subtract(L_320, 1));
		int32_t L_322 = (L_319)->GetAt(static_cast<il2cpp_array_size_t>(L_321));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_323 = __this->___Values;
		int32_t L_324 = V_31;
		NullCheck(L_323);
		int32_t L_325 = ((int32_t)il2cpp_codegen_subtract(L_324, 1));
		il2cpp_codegen_memcpy(L_326, (L_323)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_325)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(L_327, V_21, SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		Tuple_4_t525CC23B24BA81F0495B34F5299118E2643B3CD8* L_328 = (Tuple_4_t525CC23B24BA81F0495B34F5299118E2643B3CD8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		InvokerActionInvoker4< int32_t, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), L_328, L_318, L_322, L_326, L_327);
		return L_328;
	}

IL_04f5:
	{
		Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40* L_329 = ___1_predicate;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_330 = __this->___Values;
		int32_t L_331 = V_31;
		int32_t L_332 = L_331;
		V_31 = ((int32_t)il2cpp_codegen_add(L_332, 1));
		NullCheck(L_330);
		int32_t L_333 = L_332;
		il2cpp_codegen_memcpy(L_334, (L_330)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_333)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_335 = V_20;
		int32_t L_336 = V_32;
		int32_t L_337 = L_336;
		V_32 = ((int32_t)il2cpp_codegen_add(L_337, 1));
		NullCheck(L_335);
		int32_t L_338 = L_337;
		il2cpp_codegen_memcpy(L_339, (L_335)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_338)), SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		NullCheck(L_329);
		bool L_340;
		L_340 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_329, L_334, L_339);
		if (!L_340)
		{
			goto IL_054a;
		}
	}
	{
		int32_t L_341 = V_28;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_342 = __this->___ColumnIndices;
		int32_t L_343 = V_31;
		NullCheck(L_342);
		int32_t L_344 = ((int32_t)il2cpp_codegen_subtract(L_343, 1));
		int32_t L_345 = (L_342)->GetAt(static_cast<il2cpp_array_size_t>(L_344));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_346 = __this->___Values;
		int32_t L_347 = V_31;
		NullCheck(L_346);
		int32_t L_348 = ((int32_t)il2cpp_codegen_subtract(L_347, 1));
		il2cpp_codegen_memcpy(L_349, (L_346)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_348)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_350 = V_20;
		int32_t L_351 = V_32;
		NullCheck(L_350);
		int32_t L_352 = ((int32_t)il2cpp_codegen_subtract(L_351, 1));
		il2cpp_codegen_memcpy(L_353, (L_350)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_352)), SizeOf_TOther_t0519D442A2369A8E0966B09B3D3D37A216AC7295);
		Tuple_4_t525CC23B24BA81F0495B34F5299118E2643B3CD8* L_354 = (Tuple_4_t525CC23B24BA81F0495B34F5299118E2643B3CD8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		InvokerActionInvoker4< int32_t, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), L_354, L_341, L_345, L_349, L_353);
		return L_354;
	}

IL_054a:
	{
		int32_t L_355 = V_31;
		int32_t L_356 = V_29;
		if ((((int32_t)L_355) < ((int32_t)L_356)))
		{
			goto IL_0446;
		}
	}
	{
		int32_t L_357 = V_32;
		int32_t L_358 = V_30;
		if ((((int32_t)L_357) < ((int32_t)L_358)))
		{
			goto IL_0446;
		}
	}
	{
		int32_t L_359 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add(L_359, 1));
	}

IL_0562:
	{
		int32_t L_360 = V_28;
		int32_t L_361 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		if ((((int32_t)L_360) < ((int32_t)L_361)))
		{
			goto IL_0419;
		}
	}
	{
		return (Tuple_4_t525CC23B24BA81F0495B34F5299118E2643B3CD8*)NULL;
	}

IL_0571:
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_362 = ___0_other;
		Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40* L_363 = ___1_predicate;
		int32_t L_364 = ___2_zeros;
		NullCheck((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this);
		Tuple_4_t525CC23B24BA81F0495B34F5299118E2643B3CD8* L_365;
		L_365 = ((  Tuple_4_t525CC23B24BA81F0495B34F5299118E2643B3CD8* (*) (MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*, MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*, Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 14)))((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this, L_362, L_363, L_364, il2cpp_rgctx_method(method->rgctx_data, 14));
		return L_365;
	}
}
// Method Definition Index: 29309
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_Fold2Unchecked_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mFA2FE76309F575FE490FD572E19A320DEB3D01BF_gshared (SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* __this, MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* ___0_other, Func_4_t5F0A87A44991D8E9A8456476BBFAE18585857490* ___1_f, Il2CppFullySharedGenericAny ___2_state, int32_t ___3_zeros, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TOther_t4563AE371467C01BD47092FC0CE906734C62AD17 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const uint32_t SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const uint32_t SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericStruct L_28 = alloca(SizeOf_TOther_t4563AE371467C01BD47092FC0CE906734C62AD17);
	const Il2CppFullySharedGenericStruct L_42 = L_28;
	const Il2CppFullySharedGenericStruct L_65 = L_28;
	const Il2CppFullySharedGenericStruct L_69 = L_28;
	const Il2CppFullySharedGenericStruct L_100 = L_28;
	const Il2CppFullySharedGenericStruct L_108 = L_28;
	const Il2CppFullySharedGenericStruct L_122 = L_28;
	const Il2CppFullySharedGenericStruct L_137 = L_28;
	const Il2CppFullySharedGenericStruct L_169 = L_28;
	const Il2CppFullySharedGenericStruct L_174 = L_28;
	const Il2CppFullySharedGenericStruct L_219 = L_28;
	const Il2CppFullySharedGenericStruct L_238 = L_28;
	const Il2CppFullySharedGenericStruct L_251 = L_28;
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	const Il2CppFullySharedGenericStruct L_22 = L_17;
	const Il2CppFullySharedGenericStruct L_57 = L_17;
	const Il2CppFullySharedGenericStruct L_62 = L_17;
	const Il2CppFullySharedGenericStruct L_96 = L_17;
	const Il2CppFullySharedGenericStruct L_107 = L_17;
	const Il2CppFullySharedGenericStruct L_118 = L_17;
	const Il2CppFullySharedGenericStruct L_162 = L_17;
	const Il2CppFullySharedGenericStruct L_167 = L_17;
	const Il2CppFullySharedGenericStruct L_214 = L_17;
	const Il2CppFullySharedGenericStruct L_237 = L_17;
	const Il2CppFullySharedGenericStruct L_246 = L_17;
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	const Il2CppFullySharedGenericAny L_29 = L_15;
	const Il2CppFullySharedGenericAny L_36 = L_15;
	const Il2CppFullySharedGenericAny L_55 = L_15;
	const Il2CppFullySharedGenericAny L_70 = L_15;
	const Il2CppFullySharedGenericAny L_77 = L_15;
	const Il2CppFullySharedGenericAny L_92 = L_15;
	const Il2CppFullySharedGenericAny L_103 = L_15;
	const Il2CppFullySharedGenericAny L_117 = L_15;
	const Il2CppFullySharedGenericAny L_127 = L_15;
	const Il2CppFullySharedGenericAny L_160 = L_15;
	const Il2CppFullySharedGenericAny L_175 = L_15;
	const Il2CppFullySharedGenericAny L_182 = L_15;
	const Il2CppFullySharedGenericAny L_213 = L_15;
	const Il2CppFullySharedGenericAny L_232 = L_15;
	const Il2CppFullySharedGenericAny L_241 = L_15;
	const Il2CppFullySharedGenericAny L_260 = L_15;
	const Il2CppFullySharedGenericAny L_263 = L_15;
	const Il2CppFullySharedGenericAny L_101 = alloca(SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	const Il2CppFullySharedGenericAny L_109 = L_101;
	const Il2CppFullySharedGenericAny L_123 = L_101;
	const Il2CppFullySharedGenericAny L_220 = L_101;
	const Il2CppFullySharedGenericAny L_239 = L_101;
	const Il2CppFullySharedGenericAny L_252 = L_101;
	const Il2CppFullySharedGenericAny L_265 = L_101;
	DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3* V_0 = NULL;
	DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* V_1 = NULL;
	SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* V_2 = NULL;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_8 = NULL;
	Il2CppFullySharedGenericStruct V_9 = alloca(SizeOf_TOther_t4563AE371467C01BD47092FC0CE906734C62AD17);
	memset(V_9, 0, SizeOf_TOther_t4563AE371467C01BD47092FC0CE906734C62AD17);
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	int32_t V_14 = 0;
	bool V_15 = false;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_18 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_19 = NULL;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_20 = NULL;
	Il2CppFullySharedGenericStruct V_21 = alloca(SizeOf_TOther_t4563AE371467C01BD47092FC0CE906734C62AD17);
	memset(V_21, 0, SizeOf_TOther_t4563AE371467C01BD47092FC0CE906734C62AD17);
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	bool V_26 = false;
	bool V_27 = false;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	int32_t V_32 = 0;
	int32_t V_33 = 0;
	int32_t G_B6_0 = 0;
	Il2CppFullySharedGenericAny G_B8_0 = alloca(SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	memset(G_B8_0, 0, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	Func_4_t5F0A87A44991D8E9A8456476BBFAE18585857490* G_B8_1 = NULL;
	Il2CppFullySharedGenericAny G_B7_0 = alloca(SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	memset(G_B7_0, 0, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	Func_4_t5F0A87A44991D8E9A8456476BBFAE18585857490* G_B7_1 = NULL;
	Il2CppFullySharedGenericStruct G_B9_0 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(G_B9_0, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	Il2CppFullySharedGenericAny G_B9_1 = alloca(SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	memset(G_B9_1, 0, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	Func_4_t5F0A87A44991D8E9A8456476BBFAE18585857490* G_B9_2 = NULL;
	int32_t G_B21_0 = 0;
	Il2CppFullySharedGenericAny G_B23_0 = alloca(SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	memset(G_B23_0, 0, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	Func_4_t5F0A87A44991D8E9A8456476BBFAE18585857490* G_B23_1 = NULL;
	Il2CppFullySharedGenericAny G_B22_0 = alloca(SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	memset(G_B22_0, 0, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	Func_4_t5F0A87A44991D8E9A8456476BBFAE18585857490* G_B22_1 = NULL;
	Il2CppFullySharedGenericStruct G_B24_0 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(G_B24_0, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	Il2CppFullySharedGenericAny G_B24_1 = alloca(SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	memset(G_B24_1, 0, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	Func_4_t5F0A87A44991D8E9A8456476BBFAE18585857490* G_B24_2 = NULL;
	Il2CppFullySharedGenericStruct G_B26_0 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(G_B26_0, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	Il2CppFullySharedGenericAny G_B26_1 = alloca(SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	memset(G_B26_1, 0, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	Func_4_t5F0A87A44991D8E9A8456476BBFAE18585857490* G_B26_2 = NULL;
	Il2CppFullySharedGenericStruct G_B25_0 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(G_B25_0, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	Il2CppFullySharedGenericAny G_B25_1 = alloca(SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	memset(G_B25_1, 0, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	Func_4_t5F0A87A44991D8E9A8456476BBFAE18585857490* G_B25_2 = NULL;
	Il2CppFullySharedGenericStruct G_B27_0 = alloca(SizeOf_TOther_t4563AE371467C01BD47092FC0CE906734C62AD17);
	memset(G_B27_0, 0, SizeOf_TOther_t4563AE371467C01BD47092FC0CE906734C62AD17);
	Il2CppFullySharedGenericStruct G_B27_1 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(G_B27_1, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	Il2CppFullySharedGenericAny G_B27_2 = alloca(SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	memset(G_B27_2, 0, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	Func_4_t5F0A87A44991D8E9A8456476BBFAE18585857490* G_B27_3 = NULL;
	int32_t G_B52_0 = 0;
	int32_t G_B55_0 = 0;
	Il2CppFullySharedGenericAny G_B57_0 = alloca(SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	memset(G_B57_0, 0, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	Func_4_t5F0A87A44991D8E9A8456476BBFAE18585857490* G_B57_1 = NULL;
	Il2CppFullySharedGenericAny G_B56_0 = alloca(SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	memset(G_B56_0, 0, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	Func_4_t5F0A87A44991D8E9A8456476BBFAE18585857490* G_B56_1 = NULL;
	Il2CppFullySharedGenericStruct G_B58_0 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(G_B58_0, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	Il2CppFullySharedGenericAny G_B58_1 = alloca(SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	memset(G_B58_1, 0, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	Func_4_t5F0A87A44991D8E9A8456476BBFAE18585857490* G_B58_2 = NULL;
	Il2CppFullySharedGenericStruct G_B60_0 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(G_B60_0, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	Il2CppFullySharedGenericAny G_B60_1 = alloca(SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	memset(G_B60_1, 0, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	Func_4_t5F0A87A44991D8E9A8456476BBFAE18585857490* G_B60_2 = NULL;
	Il2CppFullySharedGenericStruct G_B59_0 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(G_B59_0, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	Il2CppFullySharedGenericAny G_B59_1 = alloca(SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	memset(G_B59_1, 0, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	Func_4_t5F0A87A44991D8E9A8456476BBFAE18585857490* G_B59_2 = NULL;
	Il2CppFullySharedGenericStruct G_B61_0 = alloca(SizeOf_TOther_t4563AE371467C01BD47092FC0CE906734C62AD17);
	memset(G_B61_0, 0, SizeOf_TOther_t4563AE371467C01BD47092FC0CE906734C62AD17);
	Il2CppFullySharedGenericStruct G_B61_1 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(G_B61_1, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	Il2CppFullySharedGenericAny G_B61_2 = alloca(SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	memset(G_B61_2, 0, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	Func_4_t5F0A87A44991D8E9A8456476BBFAE18585857490* G_B61_3 = NULL;
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_0 = ___0_other;
		V_0 = ((DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 1)));
		DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3* L_1 = V_0;
		if (!L_1)
		{
			goto IL_009c;
		}
	}
	{
		DenseColumnMajorMatrixStorage_1_tDC901A8393BEFF20E7B9843EF8C26586ED905CB3* L_2 = V_0;
		NullCheck(L_2);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_3 = L_2->___Data;
		V_3 = L_3;
		V_4 = 0;
		V_5 = 0;
		goto IL_0090;
	}

IL_001c:
	{
		V_6 = 0;
		goto IL_0080;
	}

IL_0021:
	{
		int32_t L_4 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___RowPointers;
		int32_t L_6 = V_5;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if ((((int32_t)L_4) >= ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___ColumnIndices;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13 = V_6;
		G_B6_0 = ((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0);
		goto IL_0040;
	}

IL_003f:
	{
		G_B6_0 = 0;
	}

IL_0040:
	{
		V_7 = (bool)G_B6_0;
		Func_4_t5F0A87A44991D8E9A8456476BBFAE18585857490* L_14 = ___1_f;
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___2_state : &___2_state), SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		bool L_16 = V_7;
		if (L_16)
		{
			il2cpp_codegen_memcpy(G_B8_0, L_15, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
			G_B8_1 = L_14;
			goto IL_004f;
		}
		il2cpp_codegen_memcpy(G_B7_0, L_15, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		G_B7_1 = L_14;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B9_0, L_17, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B9_1, G_B7_0, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		G_B9_2 = G_B7_1;
		goto IL_0061;
	}

IL_004f:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_18 = __this->___Values;
		int32_t L_19 = V_4;
		int32_t L_20 = L_19;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		NullCheck(L_18);
		int32_t L_21 = L_20;
		il2cpp_codegen_memcpy(L_22, (L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B9_0, L_22, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B9_1, G_B8_0, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		G_B9_2 = G_B8_1;
	}

IL_0061:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_23 = V_3;
		int32_t L_24 = V_6;
		int32_t L_25 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		int32_t L_26 = V_5;
		NullCheck(L_23);
		int32_t L_27 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_24, L_25)), L_26));
		il2cpp_codegen_memcpy(L_28, (L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)), SizeOf_TOther_t4563AE371467C01BD47092FC0CE906734C62AD17);
		NullCheck(G_B9_2);
		InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), G_B9_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? G_B9_1: *(void**)G_B9_1), G_B9_0, L_28, (Il2CppFullySharedGenericAny*)L_29);
		il2cpp_codegen_memcpy((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___2_state : &___2_state), L_29, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		int32_t L_30 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0080:
	{
		int32_t L_31 = V_6;
		int32_t L_32 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___ColumnCount;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_33 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0090:
	{
		int32_t L_34 = V_5;
		int32_t L_35 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___2_state : &___2_state), SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		il2cpp_codegen_memcpy(il2cppRetVal, L_36, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		return;
	}

IL_009c:
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_37 = ___0_other;
		V_1 = ((DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195*)IsInstClass((RuntimeObject*)L_37, il2cpp_rgctx_data(method->rgctx_data, 7)));
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_38 = V_1;
		if (!L_38)
		{
			goto IL_0202;
		}
	}
	{
		DiagonalMatrixStorage_1_t71D857F487C8F1F664D54AB9BB2D3CAF45ED0195* L_39 = V_1;
		NullCheck(L_39);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_40 = L_39->___Data;
		V_8 = L_40;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		MatrixBuilder_1_t1930CB8DAD403B2CA9A900B703DC372CF4ED998E* L_41;
		L_41 = ((  MatrixBuilder_1_t1930CB8DAD403B2CA9A900B703DC372CF4ED998E* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)))(il2cpp_rgctx_method(method->rgctx_data, 8));
		NullCheck(L_41);
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericStruct* >::Invoke(4, L_41, (Il2CppFullySharedGenericStruct*)L_42);
		il2cpp_codegen_memcpy(V_9, L_42, SizeOf_TOther_t4563AE371467C01BD47092FC0CE906734C62AD17);
		int32_t L_43 = ___3_zeros;
		if ((!(((uint32_t)L_43) == ((uint32_t)1))))
		{
			goto IL_014e;
		}
	}
	{
		V_10 = 0;
		V_11 = 0;
		goto IL_0142;
	}

IL_00cd:
	{
		V_12 = 0;
		goto IL_0132;
	}

IL_00d2:
	{
		int32_t L_44 = V_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = __this->___RowPointers;
		int32_t L_46 = V_11;
		NullCheck(L_45);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		if ((((int32_t)L_44) >= ((int32_t)L_48)))
		{
			goto IL_00f0;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->___ColumnIndices;
		int32_t L_50 = V_10;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		int32_t L_53 = V_12;
		G_B21_0 = ((((int32_t)L_52) == ((int32_t)L_53))? 1 : 0);
		goto IL_00f1;
	}

IL_00f0:
	{
		G_B21_0 = 0;
	}

IL_00f1:
	{
		V_13 = (bool)G_B21_0;
		Func_4_t5F0A87A44991D8E9A8456476BBFAE18585857490* L_54 = ___1_f;
		il2cpp_codegen_memcpy(L_55, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___2_state : &___2_state), SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		bool L_56 = V_13;
		if (L_56)
		{
			il2cpp_codegen_memcpy(G_B23_0, L_55, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
			G_B23_1 = L_54;
			goto IL_0100;
		}
		il2cpp_codegen_memcpy(G_B22_0, L_55, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		G_B22_1 = L_54;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_57, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B24_0, L_57, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B24_1, G_B22_0, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		G_B24_2 = G_B22_1;
		goto IL_0112;
	}

IL_0100:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_58 = __this->___Values;
		int32_t L_59 = V_10;
		int32_t L_60 = L_59;
		V_10 = ((int32_t)il2cpp_codegen_add(L_60, 1));
		NullCheck(L_58);
		int32_t L_61 = L_60;
		il2cpp_codegen_memcpy(L_62, (L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B24_0, L_62, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B24_1, G_B23_0, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		G_B24_2 = G_B23_1;
	}

IL_0112:
	{
		int32_t L_63 = V_11;
		int32_t L_64 = V_12;
		if ((((int32_t)L_63) == ((int32_t)L_64)))
		{
			il2cpp_codegen_memcpy(G_B26_0, G_B24_0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
			il2cpp_codegen_memcpy(G_B26_1, G_B24_1, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
			G_B26_2 = G_B24_2;
			goto IL_011c;
		}
		il2cpp_codegen_memcpy(G_B25_0, G_B24_0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B25_1, G_B24_1, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		G_B25_2 = G_B24_2;
	}
	{
		il2cpp_codegen_memcpy(L_65, V_9, SizeOf_TOther_t4563AE371467C01BD47092FC0CE906734C62AD17);
		il2cpp_codegen_memcpy(G_B27_0, L_65, SizeOf_TOther_t4563AE371467C01BD47092FC0CE906734C62AD17);
		il2cpp_codegen_memcpy(G_B27_1, G_B25_0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B27_2, G_B25_1, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		G_B27_3 = G_B25_2;
		goto IL_0125;
	}

IL_011c:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_66 = V_8;
		int32_t L_67 = V_11;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		il2cpp_codegen_memcpy(L_69, (L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68)), SizeOf_TOther_t4563AE371467C01BD47092FC0CE906734C62AD17);
		il2cpp_codegen_memcpy(G_B27_0, L_69, SizeOf_TOther_t4563AE371467C01BD47092FC0CE906734C62AD17);
		il2cpp_codegen_memcpy(G_B27_1, G_B26_0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B27_2, G_B26_1, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		G_B27_3 = G_B26_2;
	}

IL_0125:
	{
		NullCheck(G_B27_3);
		InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), G_B27_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? G_B27_2: *(void**)G_B27_2), G_B27_1, G_B27_0, (Il2CppFullySharedGenericAny*)L_70);
		il2cpp_codegen_memcpy((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___2_state : &___2_state), L_70, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		int32_t L_71 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_71, 1));
	}

IL_0132:
	{
		int32_t L_72 = V_12;
		int32_t L_73 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___ColumnCount;
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_74 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_0142:
	{
		int32_t L_75 = V_11;
		int32_t L_76 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_00cd;
		}
	}
	{
		il2cpp_codegen_memcpy(L_77, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___2_state : &___2_state), SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		il2cpp_codegen_memcpy(il2cppRetVal, L_77, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		return;
	}

IL_014e:
	{
		V_14 = 0;
		goto IL_01f3;
	}

IL_0156:
	{
		V_15 = (bool)0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_78 = __this->___RowPointers;
		int32_t L_79 = V_14;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		int32_t L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = __this->___RowPointers;
		int32_t L_83 = V_14;
		NullCheck(L_82);
		int32_t L_84 = ((int32_t)il2cpp_codegen_add(L_83, 1));
		int32_t L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		V_16 = L_85;
		V_17 = L_81;
		goto IL_01c2;
	}

IL_0173:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_86 = __this->___ColumnIndices;
		int32_t L_87 = V_17;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		int32_t L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		int32_t L_90 = V_14;
		if ((!(((uint32_t)L_89) == ((uint32_t)L_90))))
		{
			goto IL_01a4;
		}
	}
	{
		V_15 = (bool)1;
		Func_4_t5F0A87A44991D8E9A8456476BBFAE18585857490* L_91 = ___1_f;
		il2cpp_codegen_memcpy(L_92, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___2_state : &___2_state), SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_93 = __this->___Values;
		int32_t L_94 = V_17;
		NullCheck(L_93);
		int32_t L_95 = L_94;
		il2cpp_codegen_memcpy(L_96, (L_93)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_95)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_97 = V_8;
		int32_t L_98 = V_14;
		NullCheck(L_97);
		int32_t L_99 = L_98;
		il2cpp_codegen_memcpy(L_100, (L_97)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_99)), SizeOf_TOther_t4563AE371467C01BD47092FC0CE906734C62AD17);
		NullCheck(L_91);
		InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_91, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_92: *(void**)L_92), L_96, L_100, (Il2CppFullySharedGenericAny*)L_101);
		il2cpp_codegen_memcpy((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___2_state : &___2_state), L_101, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		goto IL_01bc;
	}

IL_01a4:
	{
		Func_4_t5F0A87A44991D8E9A8456476BBFAE18585857490* L_102 = ___1_f;
		il2cpp_codegen_memcpy(L_103, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___2_state : &___2_state), SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_104 = __this->___Values;
		int32_t L_105 = V_17;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		il2cpp_codegen_memcpy(L_107, (L_104)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_106)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(L_108, V_9, SizeOf_TOther_t4563AE371467C01BD47092FC0CE906734C62AD17);
		NullCheck(L_102);
		InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_102, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_103: *(void**)L_103), L_107, L_108, (Il2CppFullySharedGenericAny*)L_109);
		il2cpp_codegen_memcpy((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___2_state : &___2_state), L_109, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	}

IL_01bc:
	{
		int32_t L_110 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_110, 1));
	}

IL_01c2:
	{
		int32_t L_111 = V_17;
		int32_t L_112 = V_16;
		if ((((int32_t)L_111) < ((int32_t)L_112)))
		{
			goto IL_0173;
		}
	}
	{
		bool L_113 = V_15;
		if (L_113)
		{
			goto IL_01ed;
		}
	}
	{
		int32_t L_114 = V_14;
		int32_t L_115 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___ColumnCount;
		if ((((int32_t)L_114) >= ((int32_t)L_115)))
		{
			goto IL_01ed;
		}
	}
	{
		Func_4_t5F0A87A44991D8E9A8456476BBFAE18585857490* L_116 = ___1_f;
		il2cpp_codegen_memcpy(L_117, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___2_state : &___2_state), SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_118, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_119 = V_8;
		int32_t L_120 = V_14;
		NullCheck(L_119);
		int32_t L_121 = L_120;
		il2cpp_codegen_memcpy(L_122, (L_119)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_121)), SizeOf_TOther_t4563AE371467C01BD47092FC0CE906734C62AD17);
		NullCheck(L_116);
		InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_116, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_117: *(void**)L_117), L_118, L_122, (Il2CppFullySharedGenericAny*)L_123);
		il2cpp_codegen_memcpy((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___2_state : &___2_state), L_123, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	}

IL_01ed:
	{
		int32_t L_124 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_124, 1));
	}

IL_01f3:
	{
		int32_t L_125 = V_14;
		int32_t L_126 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		if ((((int32_t)L_125) < ((int32_t)L_126)))
		{
			goto IL_0156;
		}
	}
	{
		il2cpp_codegen_memcpy(L_127, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___2_state : &___2_state), SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		il2cpp_codegen_memcpy(il2cppRetVal, L_127, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		return;
	}

IL_0202:
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_128 = ___0_other;
		V_2 = ((SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED*)IsInstClass((RuntimeObject*)L_128, il2cpp_rgctx_data(method->rgctx_data, 12)));
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_129 = V_2;
		if (!L_129)
		{
			goto IL_03e4;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_130 = V_2;
		NullCheck(L_130);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_131 = L_130->___RowPointers;
		V_18 = L_131;
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_132 = V_2;
		NullCheck(L_132);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_133 = L_132->___ColumnIndices;
		V_19 = L_133;
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_134 = V_2;
		NullCheck(L_134);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_135 = L_134->___Values;
		V_20 = L_135;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		MatrixBuilder_1_t1930CB8DAD403B2CA9A900B703DC372CF4ED998E* L_136;
		L_136 = ((  MatrixBuilder_1_t1930CB8DAD403B2CA9A900B703DC372CF4ED998E* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)))(il2cpp_rgctx_method(method->rgctx_data, 8));
		NullCheck(L_136);
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericStruct* >::Invoke(4, L_136, (Il2CppFullySharedGenericStruct*)L_137);
		il2cpp_codegen_memcpy(V_21, L_137, SizeOf_TOther_t4563AE371467C01BD47092FC0CE906734C62AD17);
		int32_t L_138 = ___3_zeros;
		if ((!(((uint32_t)L_138) == ((uint32_t)1))))
		{
			goto IL_02ec;
		}
	}
	{
		V_22 = 0;
		V_23 = 0;
		V_24 = 0;
		goto IL_02dd;
	}

IL_0249:
	{
		V_25 = 0;
		goto IL_02ca;
	}

IL_024e:
	{
		int32_t L_139 = V_22;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_140 = __this->___RowPointers;
		int32_t L_141 = V_24;
		NullCheck(L_140);
		int32_t L_142 = ((int32_t)il2cpp_codegen_add(L_141, 1));
		int32_t L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		if ((((int32_t)L_139) >= ((int32_t)L_143)))
		{
			goto IL_026c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_144 = __this->___ColumnIndices;
		int32_t L_145 = V_22;
		NullCheck(L_144);
		int32_t L_146 = L_145;
		int32_t L_147 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		int32_t L_148 = V_25;
		G_B52_0 = ((((int32_t)L_147) == ((int32_t)L_148))? 1 : 0);
		goto IL_026d;
	}

IL_026c:
	{
		G_B52_0 = 0;
	}

IL_026d:
	{
		V_26 = (bool)G_B52_0;
		int32_t L_149 = V_23;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_150 = V_18;
		int32_t L_151 = V_24;
		NullCheck(L_150);
		int32_t L_152 = ((int32_t)il2cpp_codegen_add(L_151, 1));
		int32_t L_153 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		if ((((int32_t)L_149) >= ((int32_t)L_153)))
		{
			goto IL_0285;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_154 = V_19;
		int32_t L_155 = V_23;
		NullCheck(L_154);
		int32_t L_156 = L_155;
		int32_t L_157 = (L_154)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		int32_t L_158 = V_25;
		G_B55_0 = ((((int32_t)L_157) == ((int32_t)L_158))? 1 : 0);
		goto IL_0286;
	}

IL_0285:
	{
		G_B55_0 = 0;
	}

IL_0286:
	{
		V_27 = (bool)G_B55_0;
		Func_4_t5F0A87A44991D8E9A8456476BBFAE18585857490* L_159 = ___1_f;
		il2cpp_codegen_memcpy(L_160, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___2_state : &___2_state), SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		bool L_161 = V_26;
		if (L_161)
		{
			il2cpp_codegen_memcpy(G_B57_0, L_160, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
			G_B57_1 = L_159;
			goto IL_0295;
		}
		il2cpp_codegen_memcpy(G_B56_0, L_160, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		G_B56_1 = L_159;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_162, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B58_0, L_162, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B58_1, G_B56_0, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		G_B58_2 = G_B56_1;
		goto IL_02a7;
	}

IL_0295:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_163 = __this->___Values;
		int32_t L_164 = V_22;
		int32_t L_165 = L_164;
		V_22 = ((int32_t)il2cpp_codegen_add(L_165, 1));
		NullCheck(L_163);
		int32_t L_166 = L_165;
		il2cpp_codegen_memcpy(L_167, (L_163)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_166)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B58_0, L_167, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B58_1, G_B57_0, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		G_B58_2 = G_B57_1;
	}

IL_02a7:
	{
		bool L_168 = V_27;
		if (L_168)
		{
			il2cpp_codegen_memcpy(G_B60_0, G_B58_0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
			il2cpp_codegen_memcpy(G_B60_1, G_B58_1, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
			G_B60_2 = G_B58_2;
			goto IL_02af;
		}
		il2cpp_codegen_memcpy(G_B59_0, G_B58_0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B59_1, G_B58_1, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		G_B59_2 = G_B58_2;
	}
	{
		il2cpp_codegen_memcpy(L_169, V_21, SizeOf_TOther_t4563AE371467C01BD47092FC0CE906734C62AD17);
		il2cpp_codegen_memcpy(G_B61_0, L_169, SizeOf_TOther_t4563AE371467C01BD47092FC0CE906734C62AD17);
		il2cpp_codegen_memcpy(G_B61_1, G_B59_0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B61_2, G_B59_1, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		G_B61_3 = G_B59_2;
		goto IL_02bd;
	}

IL_02af:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_170 = V_20;
		int32_t L_171 = V_23;
		int32_t L_172 = L_171;
		V_23 = ((int32_t)il2cpp_codegen_add(L_172, 1));
		NullCheck(L_170);
		int32_t L_173 = L_172;
		il2cpp_codegen_memcpy(L_174, (L_170)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_173)), SizeOf_TOther_t4563AE371467C01BD47092FC0CE906734C62AD17);
		il2cpp_codegen_memcpy(G_B61_0, L_174, SizeOf_TOther_t4563AE371467C01BD47092FC0CE906734C62AD17);
		il2cpp_codegen_memcpy(G_B61_1, G_B60_0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(G_B61_2, G_B60_1, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		G_B61_3 = G_B60_2;
	}

IL_02bd:
	{
		NullCheck(G_B61_3);
		InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), G_B61_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? G_B61_2: *(void**)G_B61_2), G_B61_1, G_B61_0, (Il2CppFullySharedGenericAny*)L_175);
		il2cpp_codegen_memcpy((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___2_state : &___2_state), L_175, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		int32_t L_176 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add(L_176, 1));
	}

IL_02ca:
	{
		int32_t L_177 = V_25;
		int32_t L_178 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___ColumnCount;
		if ((((int32_t)L_177) < ((int32_t)L_178)))
		{
			goto IL_024e;
		}
	}
	{
		int32_t L_179 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add(L_179, 1));
	}

IL_02dd:
	{
		int32_t L_180 = V_24;
		int32_t L_181 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		if ((((int32_t)L_180) < ((int32_t)L_181)))
		{
			goto IL_0249;
		}
	}
	{
		il2cpp_codegen_memcpy(L_182, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___2_state : &___2_state), SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		il2cpp_codegen_memcpy(il2cppRetVal, L_182, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		return;
	}

IL_02ec:
	{
		V_28 = 0;
		goto IL_03d5;
	}

IL_02f4:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_183 = __this->___RowPointers;
		int32_t L_184 = V_28;
		NullCheck(L_183);
		int32_t L_185 = L_184;
		int32_t L_186 = (L_183)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
		V_29 = L_186;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_187 = __this->___RowPointers;
		int32_t L_188 = V_28;
		NullCheck(L_187);
		int32_t L_189 = ((int32_t)il2cpp_codegen_add(L_188, 1));
		int32_t L_190 = (L_187)->GetAt(static_cast<il2cpp_array_size_t>(L_189));
		V_30 = L_190;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_191 = V_18;
		int32_t L_192 = V_28;
		NullCheck(L_191);
		int32_t L_193 = L_192;
		int32_t L_194 = (L_191)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_195 = V_18;
		int32_t L_196 = V_28;
		NullCheck(L_195);
		int32_t L_197 = ((int32_t)il2cpp_codegen_add(L_196, 1));
		int32_t L_198 = (L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_197));
		V_31 = L_198;
		int32_t L_199 = V_29;
		V_32 = L_199;
		V_33 = L_194;
		goto IL_03bd;
	}

IL_0325:
	{
		int32_t L_200 = V_32;
		int32_t L_201 = V_30;
		if ((((int32_t)L_200) == ((int32_t)L_201)))
		{
			goto IL_0341;
		}
	}
	{
		int32_t L_202 = V_33;
		int32_t L_203 = V_31;
		if ((((int32_t)L_202) >= ((int32_t)L_203)))
		{
			goto IL_035f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_204 = __this->___ColumnIndices;
		int32_t L_205 = V_32;
		NullCheck(L_204);
		int32_t L_206 = L_205;
		int32_t L_207 = (L_204)->GetAt(static_cast<il2cpp_array_size_t>(L_206));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_208 = V_19;
		int32_t L_209 = V_33;
		NullCheck(L_208);
		int32_t L_210 = L_209;
		int32_t L_211 = (L_208)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		if ((((int32_t)L_207) <= ((int32_t)L_211)))
		{
			goto IL_035f;
		}
	}

IL_0341:
	{
		Func_4_t5F0A87A44991D8E9A8456476BBFAE18585857490* L_212 = ___1_f;
		il2cpp_codegen_memcpy(L_213, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___2_state : &___2_state), SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_214, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_215 = V_20;
		int32_t L_216 = V_33;
		int32_t L_217 = L_216;
		V_33 = ((int32_t)il2cpp_codegen_add(L_217, 1));
		NullCheck(L_215);
		int32_t L_218 = L_217;
		il2cpp_codegen_memcpy(L_219, (L_215)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_218)), SizeOf_TOther_t4563AE371467C01BD47092FC0CE906734C62AD17);
		NullCheck(L_212);
		InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_212, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_213: *(void**)L_213), L_214, L_219, (Il2CppFullySharedGenericAny*)L_220);
		il2cpp_codegen_memcpy((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___2_state : &___2_state), L_220, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		goto IL_03bd;
	}

IL_035f:
	{
		int32_t L_221 = V_33;
		int32_t L_222 = V_31;
		if ((((int32_t)L_221) == ((int32_t)L_222)))
		{
			goto IL_0375;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_223 = __this->___ColumnIndices;
		int32_t L_224 = V_32;
		NullCheck(L_223);
		int32_t L_225 = L_224;
		int32_t L_226 = (L_223)->GetAt(static_cast<il2cpp_array_size_t>(L_225));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_227 = V_19;
		int32_t L_228 = V_33;
		NullCheck(L_227);
		int32_t L_229 = L_228;
		int32_t L_230 = (L_227)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		if ((((int32_t)L_226) >= ((int32_t)L_230)))
		{
			goto IL_0394;
		}
	}

IL_0375:
	{
		Func_4_t5F0A87A44991D8E9A8456476BBFAE18585857490* L_231 = ___1_f;
		il2cpp_codegen_memcpy(L_232, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___2_state : &___2_state), SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_233 = __this->___Values;
		int32_t L_234 = V_32;
		int32_t L_235 = L_234;
		V_32 = ((int32_t)il2cpp_codegen_add(L_235, 1));
		NullCheck(L_233);
		int32_t L_236 = L_235;
		il2cpp_codegen_memcpy(L_237, (L_233)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_236)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(L_238, V_21, SizeOf_TOther_t4563AE371467C01BD47092FC0CE906734C62AD17);
		NullCheck(L_231);
		InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_231, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_232: *(void**)L_232), L_237, L_238, (Il2CppFullySharedGenericAny*)L_239);
		il2cpp_codegen_memcpy((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___2_state : &___2_state), L_239, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		goto IL_03bd;
	}

IL_0394:
	{
		Func_4_t5F0A87A44991D8E9A8456476BBFAE18585857490* L_240 = ___1_f;
		il2cpp_codegen_memcpy(L_241, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___2_state : &___2_state), SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_242 = __this->___Values;
		int32_t L_243 = V_32;
		int32_t L_244 = L_243;
		V_32 = ((int32_t)il2cpp_codegen_add(L_244, 1));
		NullCheck(L_242);
		int32_t L_245 = L_244;
		il2cpp_codegen_memcpy(L_246, (L_242)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_245)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_247 = V_20;
		int32_t L_248 = V_33;
		int32_t L_249 = L_248;
		V_33 = ((int32_t)il2cpp_codegen_add(L_249, 1));
		NullCheck(L_247);
		int32_t L_250 = L_249;
		il2cpp_codegen_memcpy(L_251, (L_247)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_250)), SizeOf_TOther_t4563AE371467C01BD47092FC0CE906734C62AD17);
		NullCheck(L_240);
		InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_240, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_241: *(void**)L_241), L_246, L_251, (Il2CppFullySharedGenericAny*)L_252);
		il2cpp_codegen_memcpy((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___2_state : &___2_state), L_252, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
	}

IL_03bd:
	{
		int32_t L_253 = V_32;
		int32_t L_254 = V_30;
		if ((((int32_t)L_253) < ((int32_t)L_254)))
		{
			goto IL_0325;
		}
	}
	{
		int32_t L_255 = V_33;
		int32_t L_256 = V_31;
		if ((((int32_t)L_255) < ((int32_t)L_256)))
		{
			goto IL_0325;
		}
	}
	{
		int32_t L_257 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add(L_257, 1));
	}

IL_03d5:
	{
		int32_t L_258 = V_28;
		int32_t L_259 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		if ((((int32_t)L_258) < ((int32_t)L_259)))
		{
			goto IL_02f4;
		}
	}
	{
		il2cpp_codegen_memcpy(L_260, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___2_state : &___2_state), SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		il2cpp_codegen_memcpy(il2cppRetVal, L_260, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		return;
	}

IL_03e4:
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_261 = ___0_other;
		Func_4_t5F0A87A44991D8E9A8456476BBFAE18585857490* L_262 = ___1_f;
		il2cpp_codegen_memcpy(L_263, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___2_state : &___2_state), SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		int32_t L_264 = ___3_zeros;
		NullCheck((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this);
		InvokerActionInvoker5< MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*, Func_4_t5F0A87A44991D8E9A8456476BBFAE18585857490*, Il2CppFullySharedGenericAny, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 13)), il2cpp_rgctx_method(method->rgctx_data, 13), (MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this, L_261, L_262, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_263: *(void**)L_263), L_264, (Il2CppFullySharedGenericAny*)L_265);
		il2cpp_codegen_memcpy(il2cppRetVal, L_265, SizeOf_TState_t74DDB44A61F102F04C997CC13C4C316B494FD662);
		return;
	}
}
// Method Definition Index: 29308
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_FoldByColumnUnchecked_TisIl2CppFullySharedGenericAny_m46F2C6754C60A82E853A69EB8C54CDBB2FEC0D21_gshared (SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_target, Func_3_t906280BC31C3487A17B208593B4BF9EB1E856FE7* ___1_f, Func_3_t2413D1285C5A0990717706292249644F402CA43E* ___2_finalize, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___3_state, int32_t ___4_zeros, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TU_t9CD89470EFAC8C80BF2E534D827402955EBAA0B5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const uint32_t SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_TU_t9CD89470EFAC8C80BF2E534D827402955EBAA0B5);
	const Il2CppFullySharedGenericAny L_48 = L_26;
	const Il2CppFullySharedGenericAny L_78 = L_26;
	const Il2CppFullySharedGenericAny L_93 = L_26;
	const Il2CppFullySharedGenericAny L_108 = L_26;
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_TU_t9CD89470EFAC8C80BF2E534D827402955EBAA0B5);
	const Il2CppFullySharedGenericAny L_53 = L_31;
	const Il2CppFullySharedGenericAny L_83 = L_31;
	const Il2CppFullySharedGenericAny L_95 = L_31;
	const Il2CppFullySharedGenericAny L_110 = L_31;
	const Il2CppFullySharedGenericStruct L_30 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	const Il2CppFullySharedGenericStruct L_82 = L_30;
	const Il2CppFullySharedGenericStruct L_94 = L_30;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
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
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___3_state;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_target;
		if ((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_0) == ((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_1)))
		{
			goto IL_0013;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___3_state;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_target;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___3_state;
		NullCheck(L_4);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
	}

IL_0013:
	{
		int32_t L_5 = ___4_zeros;
		if (L_5)
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_6 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___ColumnCount;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_0 = L_7;
		V_1 = 0;
		goto IL_0085;
	}

IL_002a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___RowPointers;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___RowPointers;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_2 = L_15;
		V_3 = L_11;
		goto IL_007d;
	}

IL_0040:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->___ColumnIndices;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = L_19;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = ___0_target;
		int32_t L_21 = V_4;
		Func_3_t906280BC31C3487A17B208593B4BF9EB1E856FE7* L_22 = ___1_f;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = ___0_target;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		il2cpp_codegen_memcpy(L_26, (L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)), SizeOf_TU_t9CD89470EFAC8C80BF2E534D827402955EBAA0B5);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_27 = __this->___Values;
		int32_t L_28 = V_3;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		il2cpp_codegen_memcpy(L_30, (L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_22);
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_26: *(void**)L_26), L_30, (Il2CppFullySharedGenericAny*)L_31);
		NullCheck(L_20);
		il2cpp_codegen_memcpy((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)), L_31, SizeOf_TU_t9CD89470EFAC8C80BF2E534D827402955EBAA0B5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)), (void*)L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_0;
		int32_t L_33 = V_4;
		NullCheck(L_32);
		int32_t* L_34 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)));
		int32_t L_35 = *((int32_t*)L_34);
		*((int32_t*)L_34) = (int32_t)((int32_t)il2cpp_codegen_add(L_35, 1));
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_007d:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = V_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_0085:
	{
		int32_t L_40 = V_1;
		int32_t L_41 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_002a;
		}
	}
	{
		V_5 = 0;
		goto IL_00b3;
	}

IL_0093:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_42 = ___0_target;
		int32_t L_43 = V_5;
		Func_3_t2413D1285C5A0990717706292249644F402CA43E* L_44 = ___2_finalize;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_45 = ___0_target;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		il2cpp_codegen_memcpy(L_48, (L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)), SizeOf_TU_t9CD89470EFAC8C80BF2E534D827402955EBAA0B5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = V_0;
		int32_t L_50 = V_5;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_44);
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_44, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_48: *(void**)L_48), L_52, (Il2CppFullySharedGenericAny*)L_53);
		NullCheck(L_42);
		il2cpp_codegen_memcpy((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43)), L_53, SizeOf_TU_t9CD89470EFAC8C80BF2E534D827402955EBAA0B5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43)), (void*)L_53);
		int32_t L_54 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_00b3:
	{
		int32_t L_55 = V_5;
		int32_t L_56 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___ColumnCount;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_0093;
		}
	}
	{
		return;
	}

IL_00be:
	{
		V_6 = 0;
		goto IL_0159;
	}

IL_00c6:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->___RowPointers;
		int32_t L_58 = V_6;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		int32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_7 = L_60;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = __this->___RowPointers;
		int32_t L_62 = V_6;
		NullCheck(L_61);
		int32_t L_63 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		int32_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		V_8 = L_64;
		V_9 = 0;
		goto IL_0149;
	}

IL_00e3:
	{
		int32_t L_65 = V_7;
		int32_t L_66 = V_8;
		if ((((int32_t)L_65) >= ((int32_t)L_66)))
		{
			goto IL_0128;
		}
	}
	{
		int32_t L_67 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = __this->___ColumnIndices;
		int32_t L_69 = V_7;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		int32_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		if ((!(((uint32_t)L_67) == ((uint32_t)L_71))))
		{
			goto IL_0128;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_72 = ___0_target;
		int32_t L_73 = V_9;
		Func_3_t906280BC31C3487A17B208593B4BF9EB1E856FE7* L_74 = ___1_f;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_75 = ___0_target;
		int32_t L_76 = V_9;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		il2cpp_codegen_memcpy(L_78, (L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_77)), SizeOf_TU_t9CD89470EFAC8C80BF2E534D827402955EBAA0B5);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_79 = __this->___Values;
		int32_t L_80 = V_7;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		il2cpp_codegen_memcpy(L_82, (L_79)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_74);
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_74, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_78: *(void**)L_78), L_82, (Il2CppFullySharedGenericAny*)L_83);
		NullCheck(L_72);
		il2cpp_codegen_memcpy((L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_73)), L_83, SizeOf_TU_t9CD89470EFAC8C80BF2E534D827402955EBAA0B5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_73)), (void*)L_83);
		int32_t L_84 = V_7;
		int32_t L_85 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_86;
		L_86 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_84, 1)), L_85, NULL);
		V_7 = L_86;
		goto IL_0143;
	}

IL_0128:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_87 = ___0_target;
		int32_t L_88 = V_9;
		Func_3_t906280BC31C3487A17B208593B4BF9EB1E856FE7* L_89 = ___1_f;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_90 = ___0_target;
		int32_t L_91 = V_9;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		il2cpp_codegen_memcpy(L_93, (L_90)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)), SizeOf_TU_t9CD89470EFAC8C80BF2E534D827402955EBAA0B5);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_94, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_89);
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_89, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_93: *(void**)L_93), L_94, (Il2CppFullySharedGenericAny*)L_95);
		NullCheck(L_87);
		il2cpp_codegen_memcpy((L_87)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_88)), L_95, SizeOf_TU_t9CD89470EFAC8C80BF2E534D827402955EBAA0B5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(L_87)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_88)), (void*)L_95);
	}

IL_0143:
	{
		int32_t L_96 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_96, 1));
	}

IL_0149:
	{
		int32_t L_97 = V_9;
		int32_t L_98 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___ColumnCount;
		if ((((int32_t)L_97) < ((int32_t)L_98)))
		{
			goto IL_00e3;
		}
	}
	{
		int32_t L_99 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_99, 1));
	}

IL_0159:
	{
		int32_t L_100 = V_6;
		int32_t L_101 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		if ((((int32_t)L_100) < ((int32_t)L_101)))
		{
			goto IL_00c6;
		}
	}
	{
		V_10 = 0;
		goto IL_018d;
	}

IL_016b:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_102 = ___0_target;
		int32_t L_103 = V_10;
		Func_3_t2413D1285C5A0990717706292249644F402CA43E* L_104 = ___2_finalize;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_105 = ___0_target;
		int32_t L_106 = V_10;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		il2cpp_codegen_memcpy(L_108, (L_105)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_107)), SizeOf_TU_t9CD89470EFAC8C80BF2E534D827402955EBAA0B5);
		int32_t L_109 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		NullCheck(L_104);
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_104, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_108: *(void**)L_108), L_109, (Il2CppFullySharedGenericAny*)L_110);
		NullCheck(L_102);
		il2cpp_codegen_memcpy((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_103)), L_110, SizeOf_TU_t9CD89470EFAC8C80BF2E534D827402955EBAA0B5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_103)), (void*)L_110);
		int32_t L_111 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_018d:
	{
		int32_t L_112 = V_10;
		int32_t L_113 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___ColumnCount;
		if ((((int32_t)L_112) < ((int32_t)L_113)))
		{
			goto IL_016b;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29307
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_FoldByRowUnchecked_TisIl2CppFullySharedGenericAny_mFDE764B359A7C71CD211A268B016D74916A7A63B_gshared (SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_target, Func_3_t906280BC31C3487A17B208593B4BF9EB1E856FE7* ___1_f, Func_3_t2413D1285C5A0990717706292249644F402CA43E* ___2_finalize, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___3_state, int32_t ___4_zeros, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TU_t0E621E951F4500F8AFC2B4516812A74F43227864 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const uint32_t SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TU_t0E621E951F4500F8AFC2B4516812A74F43227864);
	const Il2CppFullySharedGenericAny L_15 = L_12;
	const Il2CppFullySharedGenericAny L_27 = L_12;
	const Il2CppFullySharedGenericAny L_45 = L_12;
	const Il2CppFullySharedGenericAny L_54 = L_12;
	const Il2CppFullySharedGenericAny L_64 = L_12;
	const Il2CppFullySharedGenericAny L_73 = L_12;
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TU_t0E621E951F4500F8AFC2B4516812A74F43227864);
	const Il2CppFullySharedGenericAny L_30 = L_20;
	const Il2CppFullySharedGenericAny L_59 = L_20;
	const Il2CppFullySharedGenericAny L_66 = L_20;
	const Il2CppFullySharedGenericAny L_75 = L_20;
	const Il2CppFullySharedGenericStruct L_19 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	const Il2CppFullySharedGenericStruct L_58 = L_19;
	const Il2CppFullySharedGenericStruct L_65 = L_19;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_TU_t0E621E951F4500F8AFC2B4516812A74F43227864);
	memset(V_3, 0, SizeOf_TU_t0E621E951F4500F8AFC2B4516812A74F43227864);
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Il2CppFullySharedGenericAny V_8 = alloca(SizeOf_TU_t0E621E951F4500F8AFC2B4516812A74F43227864);
	memset(V_8, 0, SizeOf_TU_t0E621E951F4500F8AFC2B4516812A74F43227864);
	int32_t V_9 = 0;
	{
		int32_t L_0 = ___4_zeros;
		if (L_0)
		{
			goto IL_0069;
		}
	}
	{
		V_0 = 0;
		goto IL_005f;
	}

IL_0008:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___RowPointers;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___RowPointers;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = ___3_state;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		il2cpp_codegen_memcpy(L_12, (L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), SizeOf_TU_t0E621E951F4500F8AFC2B4516812A74F43227864);
		il2cpp_codegen_memcpy(V_3, L_12, SizeOf_TU_t0E621E951F4500F8AFC2B4516812A74F43227864);
		int32_t L_13 = V_1;
		V_4 = L_13;
		goto IL_0045;
	}

IL_002a:
	{
		Func_3_t906280BC31C3487A17B208593B4BF9EB1E856FE7* L_14 = ___1_f;
		il2cpp_codegen_memcpy(L_15, V_3, SizeOf_TU_t0E621E951F4500F8AFC2B4516812A74F43227864);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_16 = __this->___Values;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		il2cpp_codegen_memcpy(L_19, (L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_14);
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_15: *(void**)L_15), L_19, (Il2CppFullySharedGenericAny*)L_20);
		il2cpp_codegen_memcpy(V_3, L_20, SizeOf_TU_t0E621E951F4500F8AFC2B4516812A74F43227864);
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0045:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002a;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_24 = ___0_target;
		int32_t L_25 = V_0;
		Func_3_t2413D1285C5A0990717706292249644F402CA43E* L_26 = ___2_finalize;
		il2cpp_codegen_memcpy(L_27, V_3, SizeOf_TU_t0E621E951F4500F8AFC2B4516812A74F43227864);
		int32_t L_28 = V_2;
		int32_t L_29 = V_1;
		NullCheck(L_26);
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_27: *(void**)L_27), ((int32_t)il2cpp_codegen_subtract(L_28, L_29)), (Il2CppFullySharedGenericAny*)L_30);
		NullCheck(L_24);
		il2cpp_codegen_memcpy((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)), L_30, SizeOf_TU_t0E621E951F4500F8AFC2B4516812A74F43227864);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)), (void*)L_30);
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_005f:
	{
		int32_t L_32 = V_0;
		int32_t L_33 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_0069:
	{
		V_5 = 0;
		goto IL_010d;
	}

IL_0071:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = __this->___RowPointers;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		int32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_6 = L_37;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->___RowPointers;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		int32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_7 = L_41;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_42 = ___3_state;
		int32_t L_43 = V_5;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		il2cpp_codegen_memcpy(L_45, (L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)), SizeOf_TU_t0E621E951F4500F8AFC2B4516812A74F43227864);
		il2cpp_codegen_memcpy(V_8, L_45, SizeOf_TU_t0E621E951F4500F8AFC2B4516812A74F43227864);
		V_9 = 0;
		goto IL_00e7;
	}

IL_0099:
	{
		int32_t L_46 = V_6;
		int32_t L_47 = V_7;
		if ((((int32_t)L_46) >= ((int32_t)L_47)))
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_48 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->___ColumnIndices;
		int32_t L_50 = V_6;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		if ((!(((uint32_t)L_48) == ((uint32_t)L_52))))
		{
			goto IL_00d2;
		}
	}
	{
		Func_3_t906280BC31C3487A17B208593B4BF9EB1E856FE7* L_53 = ___1_f;
		il2cpp_codegen_memcpy(L_54, V_8, SizeOf_TU_t0E621E951F4500F8AFC2B4516812A74F43227864);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_55 = __this->___Values;
		int32_t L_56 = V_6;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		il2cpp_codegen_memcpy(L_58, (L_55)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_53);
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_53, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_54: *(void**)L_54), L_58, (Il2CppFullySharedGenericAny*)L_59);
		il2cpp_codegen_memcpy(V_8, L_59, SizeOf_TU_t0E621E951F4500F8AFC2B4516812A74F43227864);
		int32_t L_60 = V_6;
		int32_t L_61 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_62;
		L_62 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_60, 1)), L_61, NULL);
		V_6 = L_62;
		goto IL_00e1;
	}

IL_00d2:
	{
		Func_3_t906280BC31C3487A17B208593B4BF9EB1E856FE7* L_63 = ___1_f;
		il2cpp_codegen_memcpy(L_64, V_8, SizeOf_TU_t0E621E951F4500F8AFC2B4516812A74F43227864);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_65, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_63);
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_63, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_64: *(void**)L_64), L_65, (Il2CppFullySharedGenericAny*)L_66);
		il2cpp_codegen_memcpy(V_8, L_66, SizeOf_TU_t0E621E951F4500F8AFC2B4516812A74F43227864);
	}

IL_00e1:
	{
		int32_t L_67 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_00e7:
	{
		int32_t L_68 = V_9;
		int32_t L_69 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___ColumnCount;
		if ((((int32_t)L_68) < ((int32_t)L_69)))
		{
			goto IL_0099;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_70 = ___0_target;
		int32_t L_71 = V_5;
		Func_3_t2413D1285C5A0990717706292249644F402CA43E* L_72 = ___2_finalize;
		il2cpp_codegen_memcpy(L_73, V_8, SizeOf_TU_t0E621E951F4500F8AFC2B4516812A74F43227864);
		int32_t L_74 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___ColumnCount;
		NullCheck(L_72);
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_72, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_73: *(void**)L_73), L_74, (Il2CppFullySharedGenericAny*)L_75);
		NullCheck(L_70);
		il2cpp_codegen_memcpy((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)), L_75, SizeOf_TU_t0E621E951F4500F8AFC2B4516812A74F43227864);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)), (void*)L_75);
		int32_t L_76 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_010d:
	{
		int32_t L_77 = V_5;
		int32_t L_78 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		if ((((int32_t)L_77) < ((int32_t)L_78)))
		{
			goto IL_0071;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29304
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_MapIndexedToUnchecked_TisIl2CppFullySharedGenericStruct_mE6FAC864457BD67EE09C5F3D4CDD46987796BB77_gshared (SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* __this, MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* ___0_target, Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B* ___1_f, int32_t ___2_zeros, int32_t ___3_existingData, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const uint32_t SizeOf_TU_tFEC5B390837775F9E7262A1876A8DC0CAD12E422 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 7)));
	void* L_48 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 7)));
	void* L_86 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 7)));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_TU_tFEC5B390837775F9E7262A1876A8DC0CAD12E422);
	const Il2CppFullySharedGenericStruct L_35 = L_4;
	const Il2CppFullySharedGenericStruct L_44 = L_4;
	const Il2CppFullySharedGenericStruct L_46 = L_4;
	const Il2CppFullySharedGenericStruct L_51 = L_4;
	const Il2CppFullySharedGenericStruct L_82 = L_4;
	const Il2CppFullySharedGenericStruct L_89 = L_4;
	const Il2CppFullySharedGenericStruct L_140 = L_4;
	const Il2CppFullySharedGenericStruct L_151 = L_4;
	const Il2CppFullySharedGenericStruct L_182 = L_4;
	const Il2CppFullySharedGenericStruct L_84 = alloca(SizeOf_TU_tFEC5B390837775F9E7262A1876A8DC0CAD12E422);
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	const Il2CppFullySharedGenericStruct L_34 = L_1;
	const Il2CppFullySharedGenericStruct L_43 = L_1;
	const Il2CppFullySharedGenericStruct L_45 = L_1;
	const Il2CppFullySharedGenericStruct L_81 = L_1;
	const Il2CppFullySharedGenericStruct L_139 = L_1;
	const Il2CppFullySharedGenericStruct L_150 = L_1;
	const Il2CppFullySharedGenericStruct L_181 = L_1;
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	const Il2CppFullySharedGenericStruct L_83 = L_3;
	bool V_0 = false;
	SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* V_1 = NULL;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(V_2, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_4 = NULL;
	List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Il2CppFullySharedGenericStruct V_9 = alloca(SizeOf_TU_tFEC5B390837775F9E7262A1876A8DC0CAD12E422);
	memset(V_9, 0, SizeOf_TU_tFEC5B390837775F9E7262A1876A8DC0CAD12E422);
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	Il2CppFullySharedGenericStruct V_13 = alloca(SizeOf_TU_tFEC5B390837775F9E7262A1876A8DC0CAD12E422);
	memset(V_13, 0, SizeOf_TU_tFEC5B390837775F9E7262A1876A8DC0CAD12E422);
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t G_B3_0 = 0;
	Il2CppFullySharedGenericStruct G_B11_0 = alloca(SizeOf_TU_tFEC5B390837775F9E7262A1876A8DC0CAD12E422);
	memset(G_B11_0, 0, SizeOf_TU_tFEC5B390837775F9E7262A1876A8DC0CAD12E422);
	{
		int32_t L_0 = ___2_zeros;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_002e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(V_2, L_1, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B* L_2 = ___1_f;
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_2);
		InvokerActionInvoker4< int32_t, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_2, 0, 1, L_3, (Il2CppFullySharedGenericStruct*)L_4);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), L_4);
		bool L_7;
		L_7 = ConstrainedFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 7), il2cpp_rgctx_method(method->klass->rgctx_data, 115), L_6, (void*)(Il2CppFullySharedGenericStruct*)V_2, L_5);
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_002f;
	}

IL_002e:
	{
		G_B3_0 = 1;
	}

IL_002f:
	{
		V_0 = (bool)G_B3_0;
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_8 = ___0_target;
		V_1 = ((SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 4)));
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_9 = V_1;
		if (!L_9)
		{
			goto IL_01f2;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_10 = V_1;
		NullCheck(L_10);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = L_10->___RowPointers;
		V_3 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___ColumnIndices;
		NullCheck(L_12);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98(L_13, ((int32_t)(((RuntimeArray*)L_12)->max_length)), List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		V_4 = L_13;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_14 = __this->___Values;
		NullCheck(L_14);
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_15 = (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 5));
		((  void (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_15, ((int32_t)(((RuntimeArray*)L_14)->max_length)), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_5 = L_15;
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_0127;
		}
	}
	{
		V_6 = 0;
		V_7 = 0;
		goto IL_0115;
	}

IL_0073:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_3;
		int32_t L_18 = V_7;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_19 = V_5;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = ((  int32_t (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(L_19, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (int32_t)L_20);
		V_8 = 0;
		goto IL_0102;
	}

IL_0083:
	{
		int32_t L_21 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->___RowPointers;
		int32_t L_23 = V_7;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if ((((int32_t)L_21) >= ((int32_t)L_25)))
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = __this->___ColumnIndices;
		int32_t L_27 = V_6;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = V_8;
		if ((((int32_t)L_29) == ((int32_t)L_30)))
		{
			goto IL_00b0;
		}
	}

IL_009f:
	{
		Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B* L_31 = ___1_f;
		int32_t L_32 = V_7;
		int32_t L_33 = V_8;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_34, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_31);
		InvokerActionInvoker4< int32_t, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_31, L_32, L_33, L_34, (Il2CppFullySharedGenericStruct*)L_35);
		il2cpp_codegen_memcpy(G_B11_0, L_35, SizeOf_TU_tFEC5B390837775F9E7262A1876A8DC0CAD12E422);
		goto IL_00cc;
	}

IL_00b0:
	{
		Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B* L_36 = ___1_f;
		int32_t L_37 = V_7;
		int32_t L_38 = V_8;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_39 = __this->___Values;
		int32_t L_40 = V_6;
		int32_t L_41 = L_40;
		V_6 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		NullCheck(L_39);
		int32_t L_42 = L_41;
		il2cpp_codegen_memcpy(L_43, (L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_36);
		InvokerActionInvoker4< int32_t, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_36, L_37, L_38, L_43, (Il2CppFullySharedGenericStruct*)L_44);
		il2cpp_codegen_memcpy(G_B11_0, L_44, SizeOf_TU_tFEC5B390837775F9E7262A1876A8DC0CAD12E422);
	}

IL_00cc:
	{
		il2cpp_codegen_memcpy(V_9, G_B11_0, SizeOf_TU_tFEC5B390837775F9E7262A1876A8DC0CAD12E422);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_45, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(V_2, L_45, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(L_46, V_9, SizeOf_TU_tFEC5B390837775F9E7262A1876A8DC0CAD12E422);
		RuntimeObject* L_47 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), L_46);
		bool L_49;
		L_49 = ConstrainedFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 7), il2cpp_rgctx_method(method->klass->rgctx_data, 115), L_48, (void*)(Il2CppFullySharedGenericStruct*)V_2, L_47);
		if (L_49)
		{
			goto IL_00fc;
		}
	}
	{
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_50 = V_5;
		il2cpp_codegen_memcpy(L_51, V_9, SizeOf_TU_tFEC5B390837775F9E7262A1876A8DC0CAD12E422);
		NullCheck(L_50);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)), il2cpp_rgctx_method(method->rgctx_data, 8), L_50, L_51);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_52 = V_4;
		int32_t L_53 = V_8;
		NullCheck(L_52);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_52, L_53, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_00fc:
	{
		int32_t L_54 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0102:
	{
		int32_t L_55 = V_8;
		int32_t L_56 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___ColumnCount;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_57 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_0115:
	{
		int32_t L_58 = V_7;
		int32_t L_59 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		if ((((int32_t)L_58) < ((int32_t)L_59)))
		{
			goto IL_0073;
		}
	}
	{
		goto IL_01c8;
	}

IL_0127:
	{
		V_10 = 0;
		goto IL_01bb;
	}

IL_012f:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_3;
		int32_t L_61 = V_10;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_62 = V_5;
		NullCheck(L_62);
		int32_t L_63;
		L_63 = ((  int32_t (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(L_62, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (int32_t)L_63);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = __this->___RowPointers;
		int32_t L_65 = V_10;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		int32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = __this->___RowPointers;
		int32_t L_69 = V_10;
		NullCheck(L_68);
		int32_t L_70 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		int32_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		V_11 = L_71;
		V_12 = L_67;
		goto IL_01af;
	}

IL_0154:
	{
		Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B* L_72 = ___1_f;
		int32_t L_73 = V_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = __this->___ColumnIndices;
		int32_t L_75 = V_12;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		int32_t L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_78 = __this->___Values;
		int32_t L_79 = V_12;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		il2cpp_codegen_memcpy(L_81, (L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_80)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_72);
		InvokerActionInvoker4< int32_t, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_72, L_73, L_77, L_81, (Il2CppFullySharedGenericStruct*)L_82);
		il2cpp_codegen_memcpy(V_13, L_82, SizeOf_TU_tFEC5B390837775F9E7262A1876A8DC0CAD12E422);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_83, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(V_2, L_83, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(L_84, V_13, SizeOf_TU_tFEC5B390837775F9E7262A1876A8DC0CAD12E422);
		RuntimeObject* L_85 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), L_84);
		bool L_87;
		L_87 = ConstrainedFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 7), il2cpp_rgctx_method(method->klass->rgctx_data, 115), L_86, (void*)(Il2CppFullySharedGenericStruct*)V_2, L_85);
		if (L_87)
		{
			goto IL_01a9;
		}
	}
	{
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_88 = V_5;
		il2cpp_codegen_memcpy(L_89, V_13, SizeOf_TU_tFEC5B390837775F9E7262A1876A8DC0CAD12E422);
		NullCheck(L_88);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)), il2cpp_rgctx_method(method->rgctx_data, 8), L_88, L_89);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_90 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = __this->___ColumnIndices;
		int32_t L_92 = V_12;
		NullCheck(L_91);
		int32_t L_93 = L_92;
		int32_t L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		NullCheck(L_90);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_90, L_94, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_01a9:
	{
		int32_t L_95 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_95, 1));
	}

IL_01af:
	{
		int32_t L_96 = V_12;
		int32_t L_97 = V_11;
		if ((((int32_t)L_96) < ((int32_t)L_97)))
		{
			goto IL_0154;
		}
	}
	{
		int32_t L_98 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_01bb:
	{
		int32_t L_99 = V_10;
		int32_t L_100 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		if ((((int32_t)L_99) < ((int32_t)L_100)))
		{
			goto IL_012f;
		}
	}

IL_01c8:
	{
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_101 = V_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_102 = V_4;
		NullCheck(L_102);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_103;
		L_103 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_102, List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		NullCheck(L_101);
		L_101->___ColumnIndices = L_103;
		Il2CppCodeGenWriteBarrier((void**)(&L_101->___ColumnIndices), (void*)L_103);
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_104 = V_1;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_105 = V_5;
		NullCheck(L_105);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_106;
		L_106 = ((  __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)))(L_105, il2cpp_rgctx_method(method->rgctx_data, 9));
		NullCheck(L_104);
		L_104->___Values = L_106;
		Il2CppCodeGenWriteBarrier((void**)(&L_104->___Values), (void*)L_106);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_107 = V_3;
		int32_t L_108 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_109 = V_5;
		NullCheck(L_109);
		int32_t L_110;
		L_110 = ((  int32_t (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(L_109, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_107);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(L_108), (int32_t)L_110);
		return;
	}

IL_01f2:
	{
		int32_t L_111 = ___3_existingData;
		if (L_111)
		{
			goto IL_01ff;
		}
	}
	{
		bool L_112 = V_0;
		if (L_112)
		{
			goto IL_01ff;
		}
	}
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_113 = ___0_target;
		NullCheck(L_113);
		VirtualActionInvoker0::Invoke(10, L_113);
	}

IL_01ff:
	{
		bool L_114 = V_0;
		if (!L_114)
		{
			goto IL_02aa;
		}
	}
	{
		V_14 = 0;
		goto IL_029c;
	}

IL_020d:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_115 = __this->___RowPointers;
		int32_t L_116 = V_14;
		NullCheck(L_115);
		int32_t L_117 = L_116;
		int32_t L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		V_15 = L_118;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_119 = __this->___RowPointers;
		int32_t L_120 = V_14;
		NullCheck(L_119);
		int32_t L_121 = ((int32_t)il2cpp_codegen_add(L_120, 1));
		int32_t L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		V_16 = L_122;
		V_17 = 0;
		goto IL_028c;
	}

IL_022a:
	{
		int32_t L_123 = V_15;
		int32_t L_124 = V_16;
		if ((((int32_t)L_123) >= ((int32_t)L_124)))
		{
			goto IL_026d;
		}
	}
	{
		int32_t L_125 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_126 = __this->___ColumnIndices;
		int32_t L_127 = V_15;
		NullCheck(L_126);
		int32_t L_128 = L_127;
		int32_t L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		if ((!(((uint32_t)L_125) == ((uint32_t)L_129))))
		{
			goto IL_026d;
		}
	}
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_130 = ___0_target;
		int32_t L_131 = V_14;
		int32_t L_132 = V_17;
		Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B* L_133 = ___1_f;
		int32_t L_134 = V_14;
		int32_t L_135 = V_17;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_136 = __this->___Values;
		int32_t L_137 = V_15;
		NullCheck(L_136);
		int32_t L_138 = L_137;
		il2cpp_codegen_memcpy(L_139, (L_136)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_138)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_133);
		InvokerActionInvoker4< int32_t, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_133, L_134, L_135, L_139, (Il2CppFullySharedGenericStruct*)L_140);
		NullCheck(L_130);
		VirtualActionInvoker3Invoker< int32_t, int32_t, Il2CppFullySharedGenericStruct >::Invoke(9, L_130, L_131, L_132, L_140);
		int32_t L_141 = V_15;
		int32_t L_142 = V_16;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_143;
		L_143 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_141, 1)), L_142, NULL);
		V_15 = L_143;
		goto IL_0286;
	}

IL_026d:
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_144 = ___0_target;
		int32_t L_145 = V_14;
		int32_t L_146 = V_17;
		Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B* L_147 = ___1_f;
		int32_t L_148 = V_14;
		int32_t L_149 = V_17;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_150, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_147);
		InvokerActionInvoker4< int32_t, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_147, L_148, L_149, L_150, (Il2CppFullySharedGenericStruct*)L_151);
		NullCheck(L_144);
		VirtualActionInvoker3Invoker< int32_t, int32_t, Il2CppFullySharedGenericStruct >::Invoke(9, L_144, L_145, L_146, L_151);
	}

IL_0286:
	{
		int32_t L_152 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_152, 1));
	}

IL_028c:
	{
		int32_t L_153 = V_17;
		int32_t L_154 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___ColumnCount;
		if ((((int32_t)L_153) < ((int32_t)L_154)))
		{
			goto IL_022a;
		}
	}
	{
		int32_t L_155 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_155, 1));
	}

IL_029c:
	{
		int32_t L_156 = V_14;
		int32_t L_157 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		if ((((int32_t)L_156) < ((int32_t)L_157)))
		{
			goto IL_020d;
		}
	}
	{
		return;
	}

IL_02aa:
	{
		V_18 = 0;
		goto IL_030a;
	}

IL_02af:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_158 = __this->___RowPointers;
		int32_t L_159 = V_18;
		NullCheck(L_158);
		int32_t L_160 = L_159;
		int32_t L_161 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_162 = __this->___RowPointers;
		int32_t L_163 = V_18;
		NullCheck(L_162);
		int32_t L_164 = ((int32_t)il2cpp_codegen_add(L_163, 1));
		int32_t L_165 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		V_19 = L_165;
		V_20 = L_161;
		goto IL_02fe;
	}

IL_02c9:
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_166 = ___0_target;
		int32_t L_167 = V_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_168 = __this->___ColumnIndices;
		int32_t L_169 = V_20;
		NullCheck(L_168);
		int32_t L_170 = L_169;
		int32_t L_171 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B* L_172 = ___1_f;
		int32_t L_173 = V_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_174 = __this->___ColumnIndices;
		int32_t L_175 = V_20;
		NullCheck(L_174);
		int32_t L_176 = L_175;
		int32_t L_177 = (L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_178 = __this->___Values;
		int32_t L_179 = V_20;
		NullCheck(L_178);
		int32_t L_180 = L_179;
		il2cpp_codegen_memcpy(L_181, (L_178)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_180)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_172);
		InvokerActionInvoker4< int32_t, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_172, L_173, L_177, L_181, (Il2CppFullySharedGenericStruct*)L_182);
		NullCheck(L_166);
		VirtualActionInvoker3Invoker< int32_t, int32_t, Il2CppFullySharedGenericStruct >::Invoke(9, L_166, L_167, L_171, L_182);
		int32_t L_183 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_183, 1));
	}

IL_02fe:
	{
		int32_t L_184 = V_20;
		int32_t L_185 = V_19;
		if ((((int32_t)L_184) < ((int32_t)L_185)))
		{
			goto IL_02c9;
		}
	}
	{
		int32_t L_186 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_186, 1));
	}

IL_030a:
	{
		int32_t L_187 = V_18;
		int32_t L_188 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		if ((((int32_t)L_187) < ((int32_t)L_188)))
		{
			goto IL_02af;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29305
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_MapSubMatrixIndexedToUnchecked_TisIl2CppFullySharedGenericStruct_m66D9C934A0B60207AB144CA492090BF8DBDC768E_gshared (SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* __this, MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* ___0_target, Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B* ___1_f, int32_t ___2_sourceRowIndex, int32_t ___3_targetRowIndex, int32_t ___4_rowCount, int32_t ___5_sourceColumnIndex, int32_t ___6_targetColumnIndex, int32_t ___7_columnCount, int32_t ___8_zeros, int32_t ___9_existingData, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	void* L_18 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 7)));
	const uint32_t SizeOf_TU_t83F1341952A083CB634F3634BD9F6F7B20823626 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericStruct L_16 = alloca(SizeOf_TU_t83F1341952A083CB634F3634BD9F6F7B20823626);
	const Il2CppFullySharedGenericStruct L_65 = L_16;
	const Il2CppFullySharedGenericStruct L_76 = L_16;
	const Il2CppFullySharedGenericStruct L_125 = L_16;
	const Il2CppFullySharedGenericStruct L_13 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	const Il2CppFullySharedGenericStruct L_64 = L_13;
	const Il2CppFullySharedGenericStruct L_75 = L_13;
	const Il2CppFullySharedGenericStruct L_124 = L_13;
	const Il2CppFullySharedGenericStruct L_15 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* V_0 = NULL;
	bool V_1 = false;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(V_2, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
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
	int32_t V_14 = 0;
	int32_t G_B5_0 = 0;
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_0 = ___0_target;
		V_0 = ((SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 1)));
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_2 = V_0;
		Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B* L_3 = ___1_f;
		int32_t L_4 = ___2_sourceRowIndex;
		int32_t L_5 = ___3_targetRowIndex;
		int32_t L_6 = ___4_rowCount;
		int32_t L_7 = ___5_sourceColumnIndex;
		int32_t L_8 = ___6_targetColumnIndex;
		int32_t L_9 = ___7_columnCount;
		int32_t L_10 = ___8_zeros;
		int32_t L_11 = ___9_existingData;
		((  void (*) (SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED*, SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED*, Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(__this, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}

IL_0022:
	{
		int32_t L_12 = ___8_zeros;
		if ((((int32_t)L_12) == ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(V_2, L_13, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B* L_14 = ___1_f;
		il2cpp_codegen_memcpy(L_15, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_14);
		InvokerActionInvoker4< int32_t, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_14, 0, 1, L_15, (Il2CppFullySharedGenericStruct*)L_16);
		RuntimeObject* L_17 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 5), L_16);
		bool L_19;
		L_19 = ConstrainedFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 7), il2cpp_rgctx_method(method->klass->rgctx_data, 115), L_18, (void*)(Il2CppFullySharedGenericStruct*)V_2, L_17);
		G_B5_0 = ((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		goto IL_0052;
	}

IL_0051:
	{
		G_B5_0 = 1;
	}

IL_0052:
	{
		V_1 = (bool)G_B5_0;
		int32_t L_20 = ___9_existingData;
		if (L_20)
		{
			goto IL_0068;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_0068;
		}
	}
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_22 = ___0_target;
		int32_t L_23 = ___3_targetRowIndex;
		int32_t L_24 = ___4_rowCount;
		int32_t L_25 = ___6_targetColumnIndex;
		int32_t L_26 = ___7_columnCount;
		NullCheck(L_22);
		VirtualActionInvoker4< int32_t, int32_t, int32_t, int32_t >::Invoke(11, L_22, L_23, L_24, L_25, L_26);
	}

IL_0068:
	{
		bool L_27 = V_1;
		if (!L_27)
		{
			goto IL_013a;
		}
	}
	{
		int32_t L_28 = ___2_sourceRowIndex;
		V_3 = L_28;
		int32_t L_29 = ___3_targetRowIndex;
		V_4 = L_29;
		goto IL_012f;
	}

IL_0079:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->___RowPointers;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		int32_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_5 = L_33;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = __this->___RowPointers;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		int32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_6 = L_37;
		goto IL_0097;
	}

IL_0091:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_0097:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = __this->___ColumnIndices;
		int32_t L_40 = V_5;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		int32_t L_43 = ___5_sourceColumnIndex;
		if ((((int32_t)L_42) >= ((int32_t)L_43)))
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_44 = V_5;
		int32_t L_45 = V_6;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_0091;
		}
	}

IL_00aa:
	{
		int32_t L_46 = ___5_sourceColumnIndex;
		V_7 = L_46;
		int32_t L_47 = ___6_targetColumnIndex;
		V_8 = L_47;
		goto IL_011c;
	}

IL_00b4:
	{
		int32_t L_48 = V_5;
		int32_t L_49 = V_6;
		if ((((int32_t)L_48) >= ((int32_t)L_49)))
		{
			goto IL_00f7;
		}
	}
	{
		int32_t L_50 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = __this->___ColumnIndices;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		int32_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		if ((!(((uint32_t)L_50) == ((uint32_t)L_54))))
		{
			goto IL_00f7;
		}
	}
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_55 = ___0_target;
		int32_t L_56 = V_4;
		int32_t L_57 = V_8;
		Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B* L_58 = ___1_f;
		int32_t L_59 = V_4;
		int32_t L_60 = V_8;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_61 = __this->___Values;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		il2cpp_codegen_memcpy(L_64, (L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_58);
		InvokerActionInvoker4< int32_t, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_58, L_59, L_60, L_64, (Il2CppFullySharedGenericStruct*)L_65);
		NullCheck(L_55);
		VirtualActionInvoker3Invoker< int32_t, int32_t, Il2CppFullySharedGenericStruct >::Invoke(9, L_55, L_56, L_57, L_65);
		int32_t L_66 = V_5;
		int32_t L_67 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_68;
		L_68 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_66, 1)), L_67, NULL);
		V_5 = L_68;
		goto IL_0110;
	}

IL_00f7:
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_69 = ___0_target;
		int32_t L_70 = V_4;
		int32_t L_71 = V_8;
		Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B* L_72 = ___1_f;
		int32_t L_73 = V_4;
		int32_t L_74 = V_8;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_75, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_72);
		InvokerActionInvoker4< int32_t, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_72, L_73, L_74, L_75, (Il2CppFullySharedGenericStruct*)L_76);
		NullCheck(L_69);
		VirtualActionInvoker3Invoker< int32_t, int32_t, Il2CppFullySharedGenericStruct >::Invoke(9, L_69, L_70, L_71, L_76);
	}

IL_0110:
	{
		int32_t L_77 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		int32_t L_78 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_011c:
	{
		int32_t L_79 = V_7;
		int32_t L_80 = ___5_sourceColumnIndex;
		int32_t L_81 = ___7_columnCount;
		if ((((int32_t)L_79) < ((int32_t)((int32_t)il2cpp_codegen_add(L_80, L_81)))))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_82 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_82, 1));
		int32_t L_83 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_83, 1));
	}

IL_012f:
	{
		int32_t L_84 = V_3;
		int32_t L_85 = ___2_sourceRowIndex;
		int32_t L_86 = ___4_rowCount;
		if ((((int32_t)L_84) < ((int32_t)((int32_t)il2cpp_codegen_add(L_85, L_86)))))
		{
			goto IL_0079;
		}
	}
	{
		return;
	}

IL_013a:
	{
		int32_t L_87 = ___6_targetColumnIndex;
		int32_t L_88 = ___5_sourceColumnIndex;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_87, L_88));
		int32_t L_89 = ___2_sourceRowIndex;
		V_10 = L_89;
		int32_t L_90 = ___3_targetRowIndex;
		V_11 = L_90;
		goto IL_01c8;
	}

IL_014a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = __this->___RowPointers;
		int32_t L_92 = V_10;
		NullCheck(L_91);
		int32_t L_93 = L_92;
		int32_t L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_95 = __this->___RowPointers;
		int32_t L_96 = V_10;
		NullCheck(L_95);
		int32_t L_97 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		int32_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		V_12 = L_98;
		V_13 = L_94;
		goto IL_01b6;
	}

IL_0164:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_99 = __this->___ColumnIndices;
		int32_t L_100 = V_13;
		NullCheck(L_99);
		int32_t L_101 = L_100;
		int32_t L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		int32_t L_103 = ___5_sourceColumnIndex;
		if ((((int32_t)L_102) < ((int32_t)L_103)))
		{
			goto IL_01b0;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = __this->___ColumnIndices;
		int32_t L_105 = V_13;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		int32_t L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		int32_t L_108 = ___5_sourceColumnIndex;
		int32_t L_109 = ___7_columnCount;
		if ((((int32_t)L_107) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_108, L_109)))))
		{
			goto IL_01b0;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->___ColumnIndices;
		int32_t L_111 = V_13;
		NullCheck(L_110);
		int32_t L_112 = L_111;
		int32_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		int32_t L_114 = V_9;
		V_14 = ((int32_t)il2cpp_codegen_add(L_113, L_114));
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_115 = ___0_target;
		int32_t L_116 = V_11;
		int32_t L_117 = V_14;
		Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B* L_118 = ___1_f;
		int32_t L_119 = V_11;
		int32_t L_120 = V_14;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_121 = __this->___Values;
		int32_t L_122 = V_13;
		NullCheck(L_121);
		int32_t L_123 = L_122;
		il2cpp_codegen_memcpy(L_124, (L_121)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_123)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_118);
		InvokerActionInvoker4< int32_t, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_118, L_119, L_120, L_124, (Il2CppFullySharedGenericStruct*)L_125);
		NullCheck(L_115);
		VirtualActionInvoker3Invoker< int32_t, int32_t, Il2CppFullySharedGenericStruct >::Invoke(9, L_115, L_116, L_117, L_125);
	}

IL_01b0:
	{
		int32_t L_126 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_126, 1));
	}

IL_01b6:
	{
		int32_t L_127 = V_13;
		int32_t L_128 = V_12;
		if ((((int32_t)L_127) < ((int32_t)L_128)))
		{
			goto IL_0164;
		}
	}
	{
		int32_t L_129 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_129, 1));
		int32_t L_130 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_130, 1));
	}

IL_01c8:
	{
		int32_t L_131 = V_10;
		int32_t L_132 = ___2_sourceRowIndex;
		int32_t L_133 = ___4_rowCount;
		if ((((int32_t)L_131) < ((int32_t)((int32_t)il2cpp_codegen_add(L_132, L_133)))))
		{
			goto IL_014a;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29306
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_MapSubMatrixIndexedToUnchecked_TisIl2CppFullySharedGenericStruct_m95A71E04A71D645631946F6B6A346F9A29C7DDF2_gshared (SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* __this, SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* ___0_target, Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B* ___1_f, int32_t ___2_sourceRowIndex, int32_t ___3_targetRowIndex, int32_t ___4_rowCount, int32_t ___5_sourceColumnIndex, int32_t ___6_targetColumnIndex, int32_t ___7_columnCount, int32_t ___8_zeros, int32_t ___9_existingData, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TU_tF74BE1C58145ABACC028973557C449B14F77F90A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const uint32_t SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 7)));
	void* L_70 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_85 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_140 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_TU_tF74BE1C58145ABACC028973557C449B14F77F90A);
	const Il2CppFullySharedGenericStruct L_19 = L_4;
	const Il2CppFullySharedGenericStruct L_68 = L_4;
	const Il2CppFullySharedGenericStruct L_73 = L_4;
	const Il2CppFullySharedGenericStruct L_83 = L_4;
	const Il2CppFullySharedGenericStruct L_88 = L_4;
	const Il2CppFullySharedGenericStruct L_138 = L_4;
	const Il2CppFullySharedGenericStruct L_143 = L_4;
	const Il2CppFullySharedGenericStruct L_212 = L_4;
	const Il2CppFullySharedGenericStruct L_223 = L_4;
	const Il2CppFullySharedGenericStruct L_270 = L_4;
	const Il2CppFullySharedGenericStruct L_69 = alloca(SizeOf_TU_tF74BE1C58145ABACC028973557C449B14F77F90A);
	const Il2CppFullySharedGenericStruct L_84 = L_69;
	const Il2CppFullySharedGenericStruct L_139 = L_69;
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	const Il2CppFullySharedGenericStruct L_67 = L_1;
	const Il2CppFullySharedGenericStruct L_82 = L_1;
	const Il2CppFullySharedGenericStruct L_137 = L_1;
	const Il2CppFullySharedGenericStruct L_211 = L_1;
	const Il2CppFullySharedGenericStruct L_222 = L_1;
	const Il2CppFullySharedGenericStruct L_269 = L_1;
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericStruct V_3 = alloca(SizeOf_TU_tF74BE1C58145ABACC028973557C449B14F77F90A);
	memset(V_3, 0, SizeOf_TU_tF74BE1C58145ABACC028973557C449B14F77F90A);
	Il2CppFullySharedGenericStruct V_4 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(V_4, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* V_5 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_6 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	Il2CppFullySharedGenericStruct V_14 = alloca(SizeOf_TU_tF74BE1C58145ABACC028973557C449B14F77F90A);
	memset(V_14, 0, SizeOf_TU_tF74BE1C58145ABACC028973557C449B14F77F90A);
	Il2CppFullySharedGenericStruct V_15 = alloca(SizeOf_TU_tF74BE1C58145ABACC028973557C449B14F77F90A);
	memset(V_15, 0, SizeOf_TU_tF74BE1C58145ABACC028973557C449B14F77F90A);
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	Il2CppFullySharedGenericStruct V_21 = alloca(SizeOf_TU_tF74BE1C58145ABACC028973557C449B14F77F90A);
	memset(V_21, 0, SizeOf_TU_tF74BE1C58145ABACC028973557C449B14F77F90A);
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	int32_t V_32 = 0;
	int32_t V_33 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___8_zeros;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(V_4, L_1, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B* L_2 = ___1_f;
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_2);
		InvokerActionInvoker4< int32_t, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_2, 0, 1, L_3, (Il2CppFullySharedGenericStruct*)L_4);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), L_4);
		bool L_7;
		L_7 = ConstrainedFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 7), il2cpp_rgctx_method(method->klass->rgctx_data, 115), L_6, (void*)(Il2CppFullySharedGenericStruct*)V_4, L_5);
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B3_0 = 1;
	}

IL_0031:
	{
		V_0 = (bool)G_B3_0;
		int32_t L_8 = ___9_existingData;
		if (L_8)
		{
			goto IL_0047;
		}
	}
	{
		bool L_9 = V_0;
		if (L_9)
		{
			goto IL_0047;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_10 = ___0_target;
		int32_t L_11 = ___3_targetRowIndex;
		int32_t L_12 = ___4_rowCount;
		int32_t L_13 = ___6_targetColumnIndex;
		int32_t L_14 = ___7_columnCount;
		NullCheck((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)L_10);
		VirtualActionInvoker4< int32_t, int32_t, int32_t, int32_t >::Invoke(11, (MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)L_10, L_11, L_12, L_13, L_14);
	}

IL_0047:
	{
		int32_t L_15 = ___3_targetRowIndex;
		int32_t L_16 = ___2_sourceRowIndex;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_15, L_16));
		int32_t L_17 = ___6_targetColumnIndex;
		int32_t L_18 = ___5_sourceColumnIndex;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_17, L_18));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 7));
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 6),1)), SizeOf_TU_tF74BE1C58145ABACC028973557C449B14F77F90A);
		il2cpp_codegen_memcpy(V_3, L_19, SizeOf_TU_tF74BE1C58145ABACC028973557C449B14F77F90A);
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_20 = ___0_target;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 8));
		if (L_21)
		{
			goto IL_02ae;
		}
	}
	{
		int32_t L_22;
		L_22 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_23 = (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 9));
		((  void (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 10)))(L_23, L_22, il2cpp_rgctx_method(method->rgctx_data, 10));
		V_5 = L_23;
		int32_t L_24;
		L_24 = ((  int32_t (*) (SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_25 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98(L_25, L_24, List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		V_6 = L_25;
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_26 = ___0_target;
		NullCheck(L_26);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = L_26->___RowPointers;
		V_7 = L_27;
		bool L_28 = V_0;
		if (!L_28)
		{
			goto IL_01a5;
		}
	}
	{
		int32_t L_29 = ___2_sourceRowIndex;
		V_8 = L_29;
		goto IL_0195;
	}

IL_0093:
	{
		int32_t L_30 = V_8;
		int32_t L_31 = V_1;
		V_9 = ((int32_t)il2cpp_codegen_add(L_30, L_31));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_7;
		int32_t L_33 = V_9;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_34 = V_5;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = ((  int32_t (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)))(L_34, il2cpp_rgctx_method(method->rgctx_data, 11));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (int32_t)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = __this->___RowPointers;
		int32_t L_37 = V_8;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		int32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_10 = L_39;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = __this->___RowPointers;
		int32_t L_41 = V_8;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_11 = L_43;
		goto IL_00c5;
	}

IL_00bf:
	{
		int32_t L_44 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00c5:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = __this->___ColumnIndices;
		int32_t L_46 = V_10;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		int32_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		int32_t L_49 = ___5_sourceColumnIndex;
		if ((((int32_t)L_48) >= ((int32_t)L_49)))
		{
			goto IL_00d8;
		}
	}
	{
		int32_t L_50 = V_10;
		int32_t L_51 = V_11;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_00bf;
		}
	}

IL_00d8:
	{
		int32_t L_52 = ___5_sourceColumnIndex;
		V_12 = L_52;
		int32_t L_53 = ___6_targetColumnIndex;
		V_13 = L_53;
		goto IL_0183;
	}

IL_00e5:
	{
		int32_t L_54 = V_10;
		int32_t L_55 = V_11;
		if ((((int32_t)L_54) >= ((int32_t)L_55)))
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_56 = V_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->___ColumnIndices;
		int32_t L_58 = V_10;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		int32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		if ((!(((uint32_t)L_56) == ((uint32_t)L_60))))
		{
			goto IL_0143;
		}
	}
	{
		Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B* L_61 = ___1_f;
		int32_t L_62 = V_9;
		int32_t L_63 = V_13;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_64 = __this->___Values;
		int32_t L_65 = V_10;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		il2cpp_codegen_memcpy(L_67, (L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_61);
		InvokerActionInvoker4< int32_t, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_61, L_62, L_63, L_67, (Il2CppFullySharedGenericStruct*)L_68);
		il2cpp_codegen_memcpy(V_14, L_68, SizeOf_TU_tF74BE1C58145ABACC028973557C449B14F77F90A);
		il2cpp_codegen_memcpy(L_69, V_14, SizeOf_TU_tF74BE1C58145ABACC028973557C449B14F77F90A);
		bool L_71;
		L_71 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 13), L_70, (void*)(Il2CppFullySharedGenericStruct*)V_3, L_69);
		if (L_71)
		{
			goto IL_0134;
		}
	}
	{
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_72 = V_5;
		il2cpp_codegen_memcpy(L_73, V_14, SizeOf_TU_tF74BE1C58145ABACC028973557C449B14F77F90A);
		NullCheck(L_72);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 14)), il2cpp_rgctx_method(method->rgctx_data, 14), L_72, L_73);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_74 = V_6;
		int32_t L_75 = V_13;
		NullCheck(L_74);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_74, L_75, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_0134:
	{
		int32_t L_76 = V_10;
		int32_t L_77 = V_11;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_78;
		L_78 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_76, 1)), L_77, NULL);
		V_10 = L_78;
		goto IL_0177;
	}

IL_0143:
	{
		Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B* L_79 = ___1_f;
		int32_t L_80 = V_9;
		int32_t L_81 = V_13;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_82, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_79);
		InvokerActionInvoker4< int32_t, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_79, L_80, L_81, L_82, (Il2CppFullySharedGenericStruct*)L_83);
		il2cpp_codegen_memcpy(V_15, L_83, SizeOf_TU_tF74BE1C58145ABACC028973557C449B14F77F90A);
		il2cpp_codegen_memcpy(L_84, V_15, SizeOf_TU_tF74BE1C58145ABACC028973557C449B14F77F90A);
		bool L_86;
		L_86 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 13), L_85, (void*)(Il2CppFullySharedGenericStruct*)V_3, L_84);
		if (L_86)
		{
			goto IL_0177;
		}
	}
	{
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_87 = V_5;
		il2cpp_codegen_memcpy(L_88, V_15, SizeOf_TU_tF74BE1C58145ABACC028973557C449B14F77F90A);
		NullCheck(L_87);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 14)), il2cpp_rgctx_method(method->rgctx_data, 14), L_87, L_88);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_89 = V_6;
		int32_t L_90 = V_13;
		NullCheck(L_89);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_89, L_90, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_0177:
	{
		int32_t L_91 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_91, 1));
		int32_t L_92 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0183:
	{
		int32_t L_93 = V_12;
		int32_t L_94 = ___5_sourceColumnIndex;
		int32_t L_95 = ___7_columnCount;
		if ((((int32_t)L_93) < ((int32_t)((int32_t)il2cpp_codegen_add(L_94, L_95)))))
		{
			goto IL_00e5;
		}
	}
	{
		int32_t L_96 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_96, 1));
	}

IL_0195:
	{
		int32_t L_97 = V_8;
		int32_t L_98 = ___2_sourceRowIndex;
		int32_t L_99 = ___4_rowCount;
		if ((((int32_t)L_97) < ((int32_t)((int32_t)il2cpp_codegen_add(L_98, L_99)))))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_025c;
	}

IL_01a5:
	{
		int32_t L_100 = ___2_sourceRowIndex;
		V_16 = L_100;
		goto IL_0251;
	}

IL_01ad:
	{
		int32_t L_101 = V_16;
		int32_t L_102 = V_1;
		V_17 = ((int32_t)il2cpp_codegen_add(L_101, L_102));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_103 = V_7;
		int32_t L_104 = V_17;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_105 = V_5;
		NullCheck(L_105);
		int32_t L_106;
		L_106 = ((  int32_t (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)))(L_105, il2cpp_rgctx_method(method->rgctx_data, 11));
		NullCheck(L_103);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(L_104), (int32_t)L_106);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_107 = __this->___RowPointers;
		int32_t L_108 = V_16;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		int32_t L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_111 = __this->___RowPointers;
		int32_t L_112 = V_16;
		NullCheck(L_111);
		int32_t L_113 = ((int32_t)il2cpp_codegen_add(L_112, 1));
		int32_t L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		V_18 = L_114;
		V_19 = L_110;
		goto IL_0245;
	}

IL_01d9:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_115 = __this->___ColumnIndices;
		int32_t L_116 = V_19;
		NullCheck(L_115);
		int32_t L_117 = L_116;
		int32_t L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		int32_t L_119 = ___5_sourceColumnIndex;
		if ((((int32_t)L_118) < ((int32_t)L_119)))
		{
			goto IL_023f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_120 = __this->___ColumnIndices;
		int32_t L_121 = V_19;
		NullCheck(L_120);
		int32_t L_122 = L_121;
		int32_t L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		int32_t L_124 = ___5_sourceColumnIndex;
		int32_t L_125 = ___7_columnCount;
		if ((((int32_t)L_123) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_124, L_125)))))
		{
			goto IL_023f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_126 = __this->___ColumnIndices;
		int32_t L_127 = V_19;
		NullCheck(L_126);
		int32_t L_128 = L_127;
		int32_t L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		int32_t L_130 = V_2;
		V_20 = ((int32_t)il2cpp_codegen_add(L_129, L_130));
		Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B* L_131 = ___1_f;
		int32_t L_132 = V_17;
		int32_t L_133 = V_20;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_134 = __this->___Values;
		int32_t L_135 = V_19;
		NullCheck(L_134);
		int32_t L_136 = L_135;
		il2cpp_codegen_memcpy(L_137, (L_134)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_136)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_131);
		InvokerActionInvoker4< int32_t, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_131, L_132, L_133, L_137, (Il2CppFullySharedGenericStruct*)L_138);
		il2cpp_codegen_memcpy(V_21, L_138, SizeOf_TU_tF74BE1C58145ABACC028973557C449B14F77F90A);
		il2cpp_codegen_memcpy(L_139, V_21, SizeOf_TU_tF74BE1C58145ABACC028973557C449B14F77F90A);
		bool L_141;
		L_141 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 13), L_140, (void*)(Il2CppFullySharedGenericStruct*)V_3, L_139);
		if (L_141)
		{
			goto IL_023f;
		}
	}
	{
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_142 = V_5;
		il2cpp_codegen_memcpy(L_143, V_21, SizeOf_TU_tF74BE1C58145ABACC028973557C449B14F77F90A);
		NullCheck(L_142);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 14)), il2cpp_rgctx_method(method->rgctx_data, 14), L_142, L_143);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_144 = V_6;
		int32_t L_145 = V_20;
		NullCheck(L_144);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_144, L_145, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_023f:
	{
		int32_t L_146 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_146, 1));
	}

IL_0245:
	{
		int32_t L_147 = V_19;
		int32_t L_148 = V_18;
		if ((((int32_t)L_147) < ((int32_t)L_148)))
		{
			goto IL_01d9;
		}
	}
	{
		int32_t L_149 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_149, 1));
	}

IL_0251:
	{
		int32_t L_150 = V_16;
		int32_t L_151 = ___2_sourceRowIndex;
		int32_t L_152 = ___4_rowCount;
		if ((((int32_t)L_150) < ((int32_t)((int32_t)il2cpp_codegen_add(L_151, L_152)))))
		{
			goto IL_01ad;
		}
	}

IL_025c:
	{
		int32_t L_153 = ___3_targetRowIndex;
		int32_t L_154 = ___4_rowCount;
		V_22 = ((int32_t)il2cpp_codegen_add(L_153, L_154));
		goto IL_0277;
	}

IL_0265:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_155 = V_7;
		int32_t L_156 = V_22;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_157 = V_5;
		NullCheck(L_157);
		int32_t L_158;
		L_158 = ((  int32_t (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)))(L_157, il2cpp_rgctx_method(method->rgctx_data, 11));
		NullCheck(L_155);
		(L_155)->SetAt(static_cast<il2cpp_array_size_t>(L_156), (int32_t)L_158);
		int32_t L_159 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add(L_159, 1));
	}

IL_0277:
	{
		int32_t L_160 = V_22;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_161 = V_7;
		NullCheck(L_161);
		if ((((int32_t)L_160) < ((int32_t)((int32_t)(((RuntimeArray*)L_161)->max_length)))))
		{
			goto IL_0265;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_162 = ___0_target;
		NullCheck(L_162);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_163 = L_162->___RowPointers;
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_164 = ___0_target;
		NullCheck(L_164);
		int32_t L_165 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)L_164)->___RowCount;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_166 = V_5;
		NullCheck(L_166);
		int32_t L_167;
		L_167 = ((  int32_t (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)))(L_166, il2cpp_rgctx_method(method->rgctx_data, 11));
		NullCheck(L_163);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(L_165), (int32_t)L_167);
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_168 = ___0_target;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_169 = V_5;
		NullCheck(L_169);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_170;
		L_170 = ((  __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 15)))(L_169, il2cpp_rgctx_method(method->rgctx_data, 15));
		NullCheck(L_168);
		L_168->___Values = L_170;
		Il2CppCodeGenWriteBarrier((void**)(&L_168->___Values), (void*)L_170);
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_171 = ___0_target;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_172 = V_6;
		NullCheck(L_172);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_173;
		L_173 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_172, List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		NullCheck(L_171);
		L_171->___ColumnIndices = L_173;
		Il2CppCodeGenWriteBarrier((void**)(&L_171->___ColumnIndices), (void*)L_173);
		return;
	}

IL_02ae:
	{
		bool L_174 = V_0;
		if (!L_174)
		{
			goto IL_0386;
		}
	}
	{
		int32_t L_175 = ___2_sourceRowIndex;
		V_23 = L_175;
		int32_t L_176 = ___3_targetRowIndex;
		V_24 = L_176;
		goto IL_037a;
	}

IL_02c0:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_177 = __this->___RowPointers;
		int32_t L_178 = V_23;
		NullCheck(L_177);
		int32_t L_179 = L_178;
		int32_t L_180 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		V_25 = L_180;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_181 = __this->___RowPointers;
		int32_t L_182 = V_23;
		NullCheck(L_181);
		int32_t L_183 = ((int32_t)il2cpp_codegen_add(L_182, 1));
		int32_t L_184 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_183));
		V_26 = L_184;
		goto IL_02e0;
	}

IL_02da:
	{
		int32_t L_185 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add(L_185, 1));
	}

IL_02e0:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_186 = __this->___ColumnIndices;
		int32_t L_187 = V_25;
		NullCheck(L_186);
		int32_t L_188 = L_187;
		int32_t L_189 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		int32_t L_190 = ___5_sourceColumnIndex;
		if ((((int32_t)L_189) >= ((int32_t)L_190)))
		{
			goto IL_02f3;
		}
	}
	{
		int32_t L_191 = V_25;
		int32_t L_192 = V_26;
		if ((((int32_t)L_191) < ((int32_t)L_192)))
		{
			goto IL_02da;
		}
	}

IL_02f3:
	{
		int32_t L_193 = ___5_sourceColumnIndex;
		V_27 = L_193;
		int32_t L_194 = ___6_targetColumnIndex;
		V_28 = L_194;
		goto IL_0365;
	}

IL_02fd:
	{
		int32_t L_195 = V_25;
		int32_t L_196 = V_26;
		if ((((int32_t)L_195) >= ((int32_t)L_196)))
		{
			goto IL_0340;
		}
	}
	{
		int32_t L_197 = V_27;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_198 = __this->___ColumnIndices;
		int32_t L_199 = V_25;
		NullCheck(L_198);
		int32_t L_200 = L_199;
		int32_t L_201 = (L_198)->GetAt(static_cast<il2cpp_array_size_t>(L_200));
		if ((!(((uint32_t)L_197) == ((uint32_t)L_201))))
		{
			goto IL_0340;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_202 = ___0_target;
		int32_t L_203 = V_24;
		int32_t L_204 = V_28;
		Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B* L_205 = ___1_f;
		int32_t L_206 = V_24;
		int32_t L_207 = V_28;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_208 = __this->___Values;
		int32_t L_209 = V_25;
		NullCheck(L_208);
		int32_t L_210 = L_209;
		il2cpp_codegen_memcpy(L_211, (L_208)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_210)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_205);
		InvokerActionInvoker4< int32_t, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_205, L_206, L_207, L_211, (Il2CppFullySharedGenericStruct*)L_212);
		NullCheck((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)L_202);
		VirtualActionInvoker3Invoker< int32_t, int32_t, Il2CppFullySharedGenericStruct >::Invoke(9, (MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)L_202, L_203, L_204, L_212);
		int32_t L_213 = V_25;
		int32_t L_214 = V_26;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_215;
		L_215 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_213, 1)), L_214, NULL);
		V_25 = L_215;
		goto IL_0359;
	}

IL_0340:
	{
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_216 = ___0_target;
		int32_t L_217 = V_24;
		int32_t L_218 = V_28;
		Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B* L_219 = ___1_f;
		int32_t L_220 = V_24;
		int32_t L_221 = V_28;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_222, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_219);
		InvokerActionInvoker4< int32_t, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_219, L_220, L_221, L_222, (Il2CppFullySharedGenericStruct*)L_223);
		NullCheck((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)L_216);
		VirtualActionInvoker3Invoker< int32_t, int32_t, Il2CppFullySharedGenericStruct >::Invoke(9, (MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)L_216, L_217, L_218, L_223);
	}

IL_0359:
	{
		int32_t L_224 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_224, 1));
		int32_t L_225 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add(L_225, 1));
	}

IL_0365:
	{
		int32_t L_226 = V_27;
		int32_t L_227 = ___5_sourceColumnIndex;
		int32_t L_228 = ___7_columnCount;
		if ((((int32_t)L_226) < ((int32_t)((int32_t)il2cpp_codegen_add(L_227, L_228)))))
		{
			goto IL_02fd;
		}
	}
	{
		int32_t L_229 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_229, 1));
		int32_t L_230 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add(L_230, 1));
	}

IL_037a:
	{
		int32_t L_231 = V_23;
		int32_t L_232 = ___2_sourceRowIndex;
		int32_t L_233 = ___4_rowCount;
		if ((((int32_t)L_231) < ((int32_t)((int32_t)il2cpp_codegen_add(L_232, L_233)))))
		{
			goto IL_02c0;
		}
	}
	{
		return;
	}

IL_0386:
	{
		int32_t L_234 = ___2_sourceRowIndex;
		V_29 = L_234;
		int32_t L_235 = ___3_targetRowIndex;
		V_30 = L_235;
		goto IL_040c;
	}

IL_038f:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_236 = __this->___RowPointers;
		int32_t L_237 = V_29;
		NullCheck(L_236);
		int32_t L_238 = L_237;
		int32_t L_239 = (L_236)->GetAt(static_cast<il2cpp_array_size_t>(L_238));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_240 = __this->___RowPointers;
		int32_t L_241 = V_29;
		NullCheck(L_240);
		int32_t L_242 = ((int32_t)il2cpp_codegen_add(L_241, 1));
		int32_t L_243 = (L_240)->GetAt(static_cast<il2cpp_array_size_t>(L_242));
		V_31 = L_243;
		V_32 = L_239;
		goto IL_03fa;
	}

IL_03a9:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_244 = __this->___ColumnIndices;
		int32_t L_245 = V_32;
		NullCheck(L_244);
		int32_t L_246 = L_245;
		int32_t L_247 = (L_244)->GetAt(static_cast<il2cpp_array_size_t>(L_246));
		int32_t L_248 = ___5_sourceColumnIndex;
		if ((((int32_t)L_247) < ((int32_t)L_248)))
		{
			goto IL_03f4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_249 = __this->___ColumnIndices;
		int32_t L_250 = V_32;
		NullCheck(L_249);
		int32_t L_251 = L_250;
		int32_t L_252 = (L_249)->GetAt(static_cast<il2cpp_array_size_t>(L_251));
		int32_t L_253 = ___5_sourceColumnIndex;
		int32_t L_254 = ___7_columnCount;
		if ((((int32_t)L_252) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_253, L_254)))))
		{
			goto IL_03f4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_255 = __this->___ColumnIndices;
		int32_t L_256 = V_32;
		NullCheck(L_255);
		int32_t L_257 = L_256;
		int32_t L_258 = (L_255)->GetAt(static_cast<il2cpp_array_size_t>(L_257));
		int32_t L_259 = V_2;
		V_33 = ((int32_t)il2cpp_codegen_add(L_258, L_259));
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_260 = ___0_target;
		int32_t L_261 = V_30;
		int32_t L_262 = V_33;
		Func_4_tBEDB6B92E1FF324D3E7A62BE36284C0D7923380B* L_263 = ___1_f;
		int32_t L_264 = V_30;
		int32_t L_265 = V_33;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_266 = __this->___Values;
		int32_t L_267 = V_32;
		NullCheck(L_266);
		int32_t L_268 = L_267;
		il2cpp_codegen_memcpy(L_269, (L_266)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_268)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_263);
		InvokerActionInvoker4< int32_t, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_263, L_264, L_265, L_269, (Il2CppFullySharedGenericStruct*)L_270);
		NullCheck((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)L_260);
		VirtualActionInvoker3Invoker< int32_t, int32_t, Il2CppFullySharedGenericStruct >::Invoke(9, (MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)L_260, L_261, L_262, L_270);
	}

IL_03f4:
	{
		int32_t L_271 = V_32;
		V_32 = ((int32_t)il2cpp_codegen_add(L_271, 1));
	}

IL_03fa:
	{
		int32_t L_272 = V_32;
		int32_t L_273 = V_31;
		if ((((int32_t)L_272) < ((int32_t)L_273)))
		{
			goto IL_03a9;
		}
	}
	{
		int32_t L_274 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add(L_274, 1));
		int32_t L_275 = V_30;
		V_30 = ((int32_t)il2cpp_codegen_add(L_275, 1));
	}

IL_040c:
	{
		int32_t L_276 = V_29;
		int32_t L_277 = ___2_sourceRowIndex;
		int32_t L_278 = ___4_rowCount;
		if ((((int32_t)L_276) < ((int32_t)((int32_t)il2cpp_codegen_add(L_277, L_278)))))
		{
			goto IL_038f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseCompressedRowMatrixStorage_1_MapToUnchecked_TisIl2CppFullySharedGenericStruct_m04A66E3E4B293D0115D6B7D2561ACDADF6E33D66_gshared (SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* __this, MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* ___0_target, Func_2_tDDC415B0A5306A4473D2ADD7C4E25824337698DB* ___1_f, int32_t ___2_zeros, int32_t ___3_existingData, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const uint32_t SizeOf_TU_t19343E546F9315CC22E79484F8052981FAFFA866 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 7)));
	void* L_44 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 7)));
	void* L_77 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 7)));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_TU_t19343E546F9315CC22E79484F8052981FAFFA866);
	const Il2CppFullySharedGenericStruct L_33 = L_4;
	const Il2CppFullySharedGenericStruct L_40 = L_4;
	const Il2CppFullySharedGenericStruct L_42 = L_4;
	const Il2CppFullySharedGenericStruct L_47 = L_4;
	const Il2CppFullySharedGenericStruct L_73 = L_4;
	const Il2CppFullySharedGenericStruct L_80 = L_4;
	const Il2CppFullySharedGenericStruct L_129 = L_4;
	const Il2CppFullySharedGenericStruct L_138 = L_4;
	const Il2CppFullySharedGenericStruct L_164 = L_4;
	const Il2CppFullySharedGenericStruct L_75 = alloca(SizeOf_TU_t19343E546F9315CC22E79484F8052981FAFFA866);
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	const Il2CppFullySharedGenericStruct L_32 = L_1;
	const Il2CppFullySharedGenericStruct L_39 = L_1;
	const Il2CppFullySharedGenericStruct L_41 = L_1;
	const Il2CppFullySharedGenericStruct L_72 = L_1;
	const Il2CppFullySharedGenericStruct L_128 = L_1;
	const Il2CppFullySharedGenericStruct L_137 = L_1;
	const Il2CppFullySharedGenericStruct L_163 = L_1;
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	const Il2CppFullySharedGenericStruct L_74 = L_3;
	bool V_0 = false;
	SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* V_1 = NULL;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	memset(V_2, 0, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_4 = NULL;
	List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Il2CppFullySharedGenericStruct V_9 = alloca(SizeOf_TU_t19343E546F9315CC22E79484F8052981FAFFA866);
	memset(V_9, 0, SizeOf_TU_t19343E546F9315CC22E79484F8052981FAFFA866);
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	Il2CppFullySharedGenericStruct V_13 = alloca(SizeOf_TU_t19343E546F9315CC22E79484F8052981FAFFA866);
	memset(V_13, 0, SizeOf_TU_t19343E546F9315CC22E79484F8052981FAFFA866);
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t G_B3_0 = 0;
	Il2CppFullySharedGenericStruct G_B11_0 = alloca(SizeOf_TU_t19343E546F9315CC22E79484F8052981FAFFA866);
	memset(G_B11_0, 0, SizeOf_TU_t19343E546F9315CC22E79484F8052981FAFFA866);
	{
		int32_t L_0 = ___2_zeros;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(V_2, L_1, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		Func_2_tDDC415B0A5306A4473D2ADD7C4E25824337698DB* L_2 = ___1_f;
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_2);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_2, L_3, (Il2CppFullySharedGenericStruct*)L_4);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), L_4);
		bool L_7;
		L_7 = ConstrainedFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 7), il2cpp_rgctx_method(method->klass->rgctx_data, 115), L_6, (void*)(Il2CppFullySharedGenericStruct*)V_2, L_5);
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B3_0 = 1;
	}

IL_002d:
	{
		V_0 = (bool)G_B3_0;
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_8 = ___0_target;
		V_1 = ((SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 4)));
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_9 = V_1;
		if (!L_9)
		{
			goto IL_01dd;
		}
	}
	{
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_10 = V_1;
		NullCheck(L_10);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = L_10->___RowPointers;
		V_3 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___ColumnIndices;
		NullCheck(L_12);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98(L_13, ((int32_t)(((RuntimeArray*)L_12)->max_length)), List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		V_4 = L_13;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_14 = __this->___Values;
		NullCheck(L_14);
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_15 = (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 5));
		((  void (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_15, ((int32_t)(((RuntimeArray*)L_14)->max_length)), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_5 = L_15;
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_011d;
		}
	}
	{
		V_6 = 0;
		V_7 = 0;
		goto IL_010b;
	}

IL_0071:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_3;
		int32_t L_18 = V_7;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_19 = V_5;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = ((  int32_t (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(L_19, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (int32_t)L_20);
		V_8 = 0;
		goto IL_00f8;
	}

IL_0081:
	{
		int32_t L_21 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->___RowPointers;
		int32_t L_23 = V_7;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if ((((int32_t)L_21) >= ((int32_t)L_25)))
		{
			goto IL_009d;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = __this->___ColumnIndices;
		int32_t L_27 = V_6;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = V_8;
		if ((((int32_t)L_29) == ((int32_t)L_30)))
		{
			goto IL_00aa;
		}
	}

IL_009d:
	{
		Func_2_tDDC415B0A5306A4473D2ADD7C4E25824337698DB* L_31 = ___1_f;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_32, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_31);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_31, L_32, (Il2CppFullySharedGenericStruct*)L_33);
		il2cpp_codegen_memcpy(G_B11_0, L_33, SizeOf_TU_t19343E546F9315CC22E79484F8052981FAFFA866);
		goto IL_00c2;
	}

IL_00aa:
	{
		Func_2_tDDC415B0A5306A4473D2ADD7C4E25824337698DB* L_34 = ___1_f;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_35 = __this->___Values;
		int32_t L_36 = V_6;
		int32_t L_37 = L_36;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		NullCheck(L_35);
		int32_t L_38 = L_37;
		il2cpp_codegen_memcpy(L_39, (L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_34);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_34, L_39, (Il2CppFullySharedGenericStruct*)L_40);
		il2cpp_codegen_memcpy(G_B11_0, L_40, SizeOf_TU_t19343E546F9315CC22E79484F8052981FAFFA866);
	}

IL_00c2:
	{
		il2cpp_codegen_memcpy(V_9, G_B11_0, SizeOf_TU_t19343E546F9315CC22E79484F8052981FAFFA866);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_41, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(V_2, L_41, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(L_42, V_9, SizeOf_TU_t19343E546F9315CC22E79484F8052981FAFFA866);
		RuntimeObject* L_43 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), L_42);
		bool L_45;
		L_45 = ConstrainedFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 7), il2cpp_rgctx_method(method->klass->rgctx_data, 115), L_44, (void*)(Il2CppFullySharedGenericStruct*)V_2, L_43);
		if (L_45)
		{
			goto IL_00f2;
		}
	}
	{
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_46 = V_5;
		il2cpp_codegen_memcpy(L_47, V_9, SizeOf_TU_t19343E546F9315CC22E79484F8052981FAFFA866);
		NullCheck(L_46);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)), il2cpp_rgctx_method(method->rgctx_data, 8), L_46, L_47);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_48 = V_4;
		int32_t L_49 = V_8;
		NullCheck(L_48);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_48, L_49, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_00f2:
	{
		int32_t L_50 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00f8:
	{
		int32_t L_51 = V_8;
		int32_t L_52 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___ColumnCount;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_53 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_010b:
	{
		int32_t L_54 = V_7;
		int32_t L_55 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_0071;
		}
	}
	{
		goto IL_01b3;
	}

IL_011d:
	{
		V_10 = 0;
		goto IL_01a6;
	}

IL_0125:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_3;
		int32_t L_57 = V_10;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_58 = V_5;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = ((  int32_t (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(L_58, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (int32_t)L_59);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = __this->___RowPointers;
		int32_t L_61 = V_10;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		int32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = __this->___RowPointers;
		int32_t L_65 = V_10;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add(L_65, 1));
		int32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_11 = L_67;
		V_12 = L_63;
		goto IL_019a;
	}

IL_014a:
	{
		Func_2_tDDC415B0A5306A4473D2ADD7C4E25824337698DB* L_68 = ___1_f;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_69 = __this->___Values;
		int32_t L_70 = V_12;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		il2cpp_codegen_memcpy(L_72, (L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_68);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_68, L_72, (Il2CppFullySharedGenericStruct*)L_73);
		il2cpp_codegen_memcpy(V_13, L_73, SizeOf_TU_t19343E546F9315CC22E79484F8052981FAFFA866);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_74, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(V_2, L_74, SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		il2cpp_codegen_memcpy(L_75, V_13, SizeOf_TU_t19343E546F9315CC22E79484F8052981FAFFA866);
		RuntimeObject* L_76 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), L_75);
		bool L_78;
		L_78 = ConstrainedFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 7), il2cpp_rgctx_method(method->klass->rgctx_data, 115), L_77, (void*)(Il2CppFullySharedGenericStruct*)V_2, L_76);
		if (L_78)
		{
			goto IL_0194;
		}
	}
	{
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_79 = V_5;
		il2cpp_codegen_memcpy(L_80, V_13, SizeOf_TU_t19343E546F9315CC22E79484F8052981FAFFA866);
		NullCheck(L_79);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)), il2cpp_rgctx_method(method->rgctx_data, 8), L_79, L_80);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_81 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = __this->___ColumnIndices;
		int32_t L_83 = V_12;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		int32_t L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_81);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_81, L_85, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_0194:
	{
		int32_t L_86 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_86, 1));
	}

IL_019a:
	{
		int32_t L_87 = V_12;
		int32_t L_88 = V_11;
		if ((((int32_t)L_87) < ((int32_t)L_88)))
		{
			goto IL_014a;
		}
	}
	{
		int32_t L_89 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_01a6:
	{
		int32_t L_90 = V_10;
		int32_t L_91 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_0125;
		}
	}

IL_01b3:
	{
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_92 = V_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_93 = V_4;
		NullCheck(L_93);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_94;
		L_94 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_93, List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		NullCheck(L_92);
		L_92->___ColumnIndices = L_94;
		Il2CppCodeGenWriteBarrier((void**)(&L_92->___ColumnIndices), (void*)L_94);
		SparseCompressedRowMatrixStorage_1_tA2B6F4693F900FEB4BCF78041BAC491E34171EED* L_95 = V_1;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_96 = V_5;
		NullCheck(L_96);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_97;
		L_97 = ((  __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)))(L_96, il2cpp_rgctx_method(method->rgctx_data, 9));
		NullCheck(L_95);
		L_95->___Values = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_95->___Values), (void*)L_97);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_98 = V_3;
		int32_t L_99 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_100 = V_5;
		NullCheck(L_100);
		int32_t L_101;
		L_101 = ((  int32_t (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(L_100, il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(L_99), (int32_t)L_101);
		return;
	}

IL_01dd:
	{
		int32_t L_102 = ___3_existingData;
		if (L_102)
		{
			goto IL_01ea;
		}
	}
	{
		bool L_103 = V_0;
		if (L_103)
		{
			goto IL_01ea;
		}
	}
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_104 = ___0_target;
		NullCheck(L_104);
		VirtualActionInvoker0::Invoke(10, L_104);
	}

IL_01ea:
	{
		bool L_105 = V_0;
		if (!L_105)
		{
			goto IL_028d;
		}
	}
	{
		V_14 = 0;
		goto IL_027f;
	}

IL_01f8:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_106 = __this->___RowPointers;
		int32_t L_107 = V_14;
		NullCheck(L_106);
		int32_t L_108 = L_107;
		int32_t L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		V_15 = L_109;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->___RowPointers;
		int32_t L_111 = V_14;
		NullCheck(L_110);
		int32_t L_112 = ((int32_t)il2cpp_codegen_add(L_111, 1));
		int32_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		V_16 = L_113;
		V_17 = 0;
		goto IL_026f;
	}

IL_0215:
	{
		int32_t L_114 = V_15;
		int32_t L_115 = V_16;
		if ((((int32_t)L_114) >= ((int32_t)L_115)))
		{
			goto IL_0254;
		}
	}
	{
		int32_t L_116 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_117 = __this->___ColumnIndices;
		int32_t L_118 = V_15;
		NullCheck(L_117);
		int32_t L_119 = L_118;
		int32_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		if ((!(((uint32_t)L_116) == ((uint32_t)L_120))))
		{
			goto IL_0254;
		}
	}
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_121 = ___0_target;
		int32_t L_122 = V_14;
		int32_t L_123 = V_17;
		Func_2_tDDC415B0A5306A4473D2ADD7C4E25824337698DB* L_124 = ___1_f;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_125 = __this->___Values;
		int32_t L_126 = V_15;
		NullCheck(L_125);
		int32_t L_127 = L_126;
		il2cpp_codegen_memcpy(L_128, (L_125)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_127)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_124);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_124, L_128, (Il2CppFullySharedGenericStruct*)L_129);
		NullCheck(L_121);
		VirtualActionInvoker3Invoker< int32_t, int32_t, Il2CppFullySharedGenericStruct >::Invoke(9, L_121, L_122, L_123, L_129);
		int32_t L_130 = V_15;
		int32_t L_131 = V_16;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_132;
		L_132 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_130, 1)), L_131, NULL);
		V_15 = L_132;
		goto IL_0269;
	}

IL_0254:
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_133 = ___0_target;
		int32_t L_134 = V_14;
		int32_t L_135 = V_17;
		Func_2_tDDC415B0A5306A4473D2ADD7C4E25824337698DB* L_136 = ___1_f;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		il2cpp_codegen_memcpy(L_137, il2cpp_codegen_get_static_field_data_pointer(il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_136);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_136, L_137, (Il2CppFullySharedGenericStruct*)L_138);
		NullCheck(L_133);
		VirtualActionInvoker3Invoker< int32_t, int32_t, Il2CppFullySharedGenericStruct >::Invoke(9, L_133, L_134, L_135, L_138);
	}

IL_0269:
	{
		int32_t L_139 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_139, 1));
	}

IL_026f:
	{
		int32_t L_140 = V_17;
		int32_t L_141 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___ColumnCount;
		if ((((int32_t)L_140) < ((int32_t)L_141)))
		{
			goto IL_0215;
		}
	}
	{
		int32_t L_142 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_142, 1));
	}

IL_027f:
	{
		int32_t L_143 = V_14;
		int32_t L_144 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		if ((((int32_t)L_143) < ((int32_t)L_144)))
		{
			goto IL_01f8;
		}
	}
	{
		return;
	}

IL_028d:
	{
		V_18 = 0;
		goto IL_02e2;
	}

IL_0292:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_145 = __this->___RowPointers;
		int32_t L_146 = V_18;
		NullCheck(L_145);
		int32_t L_147 = L_146;
		int32_t L_148 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_149 = __this->___RowPointers;
		int32_t L_150 = V_18;
		NullCheck(L_149);
		int32_t L_151 = ((int32_t)il2cpp_codegen_add(L_150, 1));
		int32_t L_152 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		V_19 = L_152;
		V_20 = L_148;
		goto IL_02d6;
	}

IL_02ac:
	{
		MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84* L_153 = ___0_target;
		int32_t L_154 = V_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_155 = __this->___ColumnIndices;
		int32_t L_156 = V_20;
		NullCheck(L_155);
		int32_t L_157 = L_156;
		int32_t L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		Func_2_tDDC415B0A5306A4473D2ADD7C4E25824337698DB* L_159 = ___1_f;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_160 = __this->___Values;
		int32_t L_161 = V_20;
		NullCheck(L_160);
		int32_t L_162 = L_161;
		il2cpp_codegen_memcpy(L_163, (L_160)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_162)), SizeOf_T_tBC076955863D43CDAAA345D349547D44781BE6DB);
		NullCheck(L_159);
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_159, L_163, (Il2CppFullySharedGenericStruct*)L_164);
		NullCheck(L_153);
		VirtualActionInvoker3Invoker< int32_t, int32_t, Il2CppFullySharedGenericStruct >::Invoke(9, L_153, L_154, L_158, L_164);
		int32_t L_165 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_165, 1));
	}

IL_02d6:
	{
		int32_t L_166 = V_20;
		int32_t L_167 = V_19;
		if ((((int32_t)L_166) < ((int32_t)L_167)))
		{
			goto IL_02ac;
		}
	}
	{
		int32_t L_168 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_168, 1));
	}

IL_02e2:
	{
		int32_t L_169 = V_18;
		int32_t L_170 = ((MatrixStorage_1_t99A5CB3887790945C0251972DD643B0B64EF3E84*)__this)->___RowCount;
		if ((((int32_t)L_169) < ((int32_t)L_170)))
		{
			goto IL_0292;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 29300
// Method Definition Index: 29309
// Method Definition Index: 29308
// Method Definition Index: 29307
// Method Definition Index: 29304
// Method Definition Index: 29305
// Method Definition Index: 29303
// Method Definition Index: 29374
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseVectorStorage_1_MapIndexedToUnchecked_TisComplex_tC7518465FEAE5F5138E1653314A611EEC09467A2_mCB8B76C1544B131EA1E9C2FF7DADBCB6B4882190_gshared (SparseVectorStorage_1_t35483992AC2CC01D40A77AB616C4F41E78E61669* __this, VectorStorage_1_tF8A7768F27A8844C4940AB0DC813D597FAD84286* ___0_target, Func_3_t7DF558CDF3A397FBD485092EFFBE9AD6E1CA4609* ___1_f, int32_t ___2_zeros, int32_t ___3_existingData, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	U3CU3Ec__DisplayClass36_0_1_t2C5B9D7458115446C9A0D593702BFB9922362065* V_0 = NULL;
	SparseVectorStorage_1_t35483992AC2CC01D40A77AB616C4F41E78E61669* V_1 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_2 = NULL;
	List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356* V_3 = NULL;
	Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	int32_t G_B27_0 = 0;
	ComplexU5BU5D_tC7E7960A9C8E43F8AA1EE7CEA249DF1C8E3A1E3E* G_B27_1 = NULL;
	int32_t G_B26_0 = 0;
	ComplexU5BU5D_tC7E7960A9C8E43F8AA1EE7CEA249DF1C8E3A1E3E* G_B26_1 = NULL;
	int32_t G_B28_0 = 0;
	ComplexU5BU5D_tC7E7960A9C8E43F8AA1EE7CEA249DF1C8E3A1E3E* G_B28_1 = NULL;
	Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 G_B29_0;
	memset((&G_B29_0), 0, sizeof(G_B29_0));
	int32_t G_B29_1 = 0;
	ComplexU5BU5D_tC7E7960A9C8E43F8AA1EE7CEA249DF1C8E3A1E3E* G_B29_2 = NULL;
	{
		U3CU3Ec__DisplayClass36_0_1_t2C5B9D7458115446C9A0D593702BFB9922362065* L_0 = (U3CU3Ec__DisplayClass36_0_1_t2C5B9D7458115446C9A0D593702BFB9922362065*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		U3CU3Ec__DisplayClass36_0_1__ctor_m3BCE350B48B9CB0CFE388D8418B908BBB09BF46B(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		U3CU3Ec__DisplayClass36_0_1_t2C5B9D7458115446C9A0D593702BFB9922362065* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CU3Ec__DisplayClass36_0_1_t2C5B9D7458115446C9A0D593702BFB9922362065* L_2 = V_0;
		Func_3_t7DF558CDF3A397FBD485092EFFBE9AD6E1CA4609* L_3 = ___1_f;
		NullCheck(L_2);
		L_2->___f = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___f), (void*)L_3);
		VectorStorage_1_tF8A7768F27A8844C4940AB0DC813D597FAD84286* L_4 = ___0_target;
		V_1 = ((SparseVectorStorage_1_t35483992AC2CC01D40A77AB616C4F41E78E61669*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 4)));
		SparseVectorStorage_1_t35483992AC2CC01D40A77AB616C4F41E78E61669* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0187;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_6, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		V_2 = L_6;
		List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356* L_7 = (List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 5));
		List_1__ctor_m6F9E6B90C1D67B29D26A28EA9028F1D8B7DF5B48(L_7, il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_7;
		int32_t L_8 = ___2_zeros;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_0060;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_9 = ((VectorStorage_1_tF8A7768F27A8844C4940AB0DC813D597FAD84286_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 1)))->___Zero;
		V_4 = L_9;
		U3CU3Ec__DisplayClass36_0_1_t2C5B9D7458115446C9A0D593702BFB9922362065* L_10 = V_0;
		NullCheck(L_10);
		Func_3_t7DF558CDF3A397FBD485092EFFBE9AD6E1CA4609* L_11 = L_10->___f;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_12 = ((VectorStorage_1_tF8A7768F27A8844C4940AB0DC813D597FAD84286_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 1)))->___Zero;
		NullCheck(L_11);
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_13;
		L_13 = Func_3_Invoke_m1C4589F4095AF37D5D89D0F28627AF835E4B4B9B_inline(L_11, 0, L_12, il2cpp_rgctx_method(method->rgctx_data, 7));
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 8), &L_14);
		il2cpp_codegen_runtime_class_init_inline(Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Complex_Equals_mB64F111EF60ABC9D8BDD94D258145CFB5D7D4995((&V_4), L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		if (L_16)
		{
			goto IL_00f6;
		}
	}

IL_0060:
	{
		V_5 = 0;
		V_6 = 0;
		goto IL_00e7;
	}

IL_0068:
	{
		int32_t L_17 = V_5;
		int32_t L_18 = __this->___ValueCount;
		if ((((int32_t)L_17) >= ((int32_t)L_18)))
		{
			goto IL_007f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->___Indices;
		int32_t L_20 = V_5;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = V_6;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			goto IL_0093;
		}
	}

IL_007f:
	{
		U3CU3Ec__DisplayClass36_0_1_t2C5B9D7458115446C9A0D593702BFB9922362065* L_24 = V_0;
		NullCheck(L_24);
		Func_3_t7DF558CDF3A397FBD485092EFFBE9AD6E1CA4609* L_25 = L_24->___f;
		int32_t L_26 = V_6;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_27 = ((VectorStorage_1_tF8A7768F27A8844C4940AB0DC813D597FAD84286_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 1)))->___Zero;
		NullCheck(L_25);
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_28;
		L_28 = Func_3_Invoke_m1C4589F4095AF37D5D89D0F28627AF835E4B4B9B_inline(L_25, L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 7));
		G_B8_0 = L_28;
		goto IL_00b2;
	}

IL_0093:
	{
		U3CU3Ec__DisplayClass36_0_1_t2C5B9D7458115446C9A0D593702BFB9922362065* L_29 = V_0;
		NullCheck(L_29);
		Func_3_t7DF558CDF3A397FBD485092EFFBE9AD6E1CA4609* L_30 = L_29->___f;
		int32_t L_31 = V_6;
		ComplexU5BU5D_tC7E7960A9C8E43F8AA1EE7CEA249DF1C8E3A1E3E* L_32 = __this->___Values;
		int32_t L_33 = V_5;
		int32_t L_34 = L_33;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		NullCheck(L_32);
		int32_t L_35 = L_34;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_30);
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_37;
		L_37 = Func_3_Invoke_m1C4589F4095AF37D5D89D0F28627AF835E4B4B9B_inline(L_30, L_31, L_36, il2cpp_rgctx_method(method->rgctx_data, 7));
		G_B8_0 = L_37;
	}

IL_00b2:
	{
		V_7 = G_B8_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_38 = ((VectorStorage_1_tF8A7768F27A8844C4940AB0DC813D597FAD84286_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 1)))->___Zero;
		V_4 = L_38;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_39 = V_7;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 8), &L_40);
		il2cpp_codegen_runtime_class_init_inline(Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = Complex_Equals_mB64F111EF60ABC9D8BDD94D258145CFB5D7D4995((&V_4), L_41, il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		if (L_42)
		{
			goto IL_00e1;
		}
	}
	{
		List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356* L_43 = V_3;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_44 = V_7;
		NullCheck(L_43);
		List_1_Add_m8B3C68D214DA6E1733B5EBBD4608FA2C41A4A195_inline(L_43, L_44, il2cpp_rgctx_method(method->rgctx_data, 9));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_45 = V_2;
		int32_t L_46 = V_6;
		NullCheck(L_45);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_45, L_46, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_00e1:
	{
		int32_t L_47 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00e7:
	{
		int32_t L_48 = V_6;
		int32_t L_49 = ((VectorStorage_1_tF8A7768F27A8844C4940AB0DC813D597FAD84286*)__this)->___Length;
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_0068;
		}
	}
	{
		goto IL_0162;
	}

IL_00f6:
	{
		V_8 = 0;
		goto IL_0158;
	}

IL_00fb:
	{
		U3CU3Ec__DisplayClass36_0_1_t2C5B9D7458115446C9A0D593702BFB9922362065* L_50 = V_0;
		NullCheck(L_50);
		Func_3_t7DF558CDF3A397FBD485092EFFBE9AD6E1CA4609* L_51 = L_50->___f;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = __this->___Indices;
		int32_t L_53 = V_8;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		int32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		ComplexU5BU5D_tC7E7960A9C8E43F8AA1EE7CEA249DF1C8E3A1E3E* L_56 = __this->___Values;
		int32_t L_57 = V_8;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_51);
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_60;
		L_60 = Func_3_Invoke_m1C4589F4095AF37D5D89D0F28627AF835E4B4B9B_inline(L_51, L_55, L_59, il2cpp_rgctx_method(method->rgctx_data, 7));
		V_9 = L_60;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_61 = ((VectorStorage_1_tF8A7768F27A8844C4940AB0DC813D597FAD84286_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 1)))->___Zero;
		V_4 = L_61;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_62 = V_9;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 8), &L_63);
		il2cpp_codegen_runtime_class_init_inline(Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_il2cpp_TypeInfo_var);
		bool L_65;
		L_65 = Complex_Equals_mB64F111EF60ABC9D8BDD94D258145CFB5D7D4995((&V_4), L_64, il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		if (L_65)
		{
			goto IL_0152;
		}
	}
	{
		List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356* L_66 = V_3;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_67 = V_9;
		NullCheck(L_66);
		List_1_Add_m8B3C68D214DA6E1733B5EBBD4608FA2C41A4A195_inline(L_66, L_67, il2cpp_rgctx_method(method->rgctx_data, 9));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_68 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = __this->___Indices;
		int32_t L_70 = V_8;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		int32_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_68);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_68, L_72, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_0152:
	{
		int32_t L_73 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_0158:
	{
		int32_t L_74 = V_8;
		int32_t L_75 = __this->___ValueCount;
		if ((((int32_t)L_74) < ((int32_t)L_75)))
		{
			goto IL_00fb;
		}
	}

IL_0162:
	{
		SparseVectorStorage_1_t35483992AC2CC01D40A77AB616C4F41E78E61669* L_76 = V_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_77 = V_2;
		NullCheck(L_77);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_78;
		L_78 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_77, List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		NullCheck(L_76);
		L_76->___Indices = L_78;
		Il2CppCodeGenWriteBarrier((void**)(&L_76->___Indices), (void*)L_78);
		SparseVectorStorage_1_t35483992AC2CC01D40A77AB616C4F41E78E61669* L_79 = V_1;
		List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356* L_80 = V_3;
		NullCheck(L_80);
		ComplexU5BU5D_tC7E7960A9C8E43F8AA1EE7CEA249DF1C8E3A1E3E* L_81;
		L_81 = List_1_ToArray_mC595AC03D204CA387F8597B44E85F7289589142E(L_80, il2cpp_rgctx_method(method->rgctx_data, 10));
		NullCheck(L_79);
		L_79->___Values = L_81;
		Il2CppCodeGenWriteBarrier((void**)(&L_79->___Values), (void*)L_81);
		SparseVectorStorage_1_t35483992AC2CC01D40A77AB616C4F41E78E61669* L_82 = V_1;
		List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356* L_83 = V_3;
		NullCheck(L_83);
		int32_t L_84;
		L_84 = List_1_get_Count_m53C6591DADDBD6ABD3B8EA7FE009E5D1F293A28B_inline(L_83, il2cpp_rgctx_method(method->rgctx_data, 12));
		NullCheck(L_82);
		L_82->___ValueCount = L_84;
		return;
	}

IL_0187:
	{
		U3CU3Ec__DisplayClass36_0_1_t2C5B9D7458115446C9A0D593702BFB9922362065* L_85 = V_0;
		VectorStorage_1_tF8A7768F27A8844C4940AB0DC813D597FAD84286* L_86 = ___0_target;
		NullCheck(L_85);
		L_85->___denseTarget = ((DenseVectorStorage_1_t39D7EA7246F962E568174CBE3098F949DAAC2130*)IsInstClass((RuntimeObject*)L_86, il2cpp_rgctx_data(method->rgctx_data, 13)));
		Il2CppCodeGenWriteBarrier((void**)(&L_85->___denseTarget), (void*)((DenseVectorStorage_1_t39D7EA7246F962E568174CBE3098F949DAAC2130*)IsInstClass((RuntimeObject*)L_86, il2cpp_rgctx_data(method->rgctx_data, 13))));
		U3CU3Ec__DisplayClass36_0_1_t2C5B9D7458115446C9A0D593702BFB9922362065* L_87 = V_0;
		NullCheck(L_87);
		DenseVectorStorage_1_t39D7EA7246F962E568174CBE3098F949DAAC2130* L_88 = L_87->___denseTarget;
		if (!L_88)
		{
			goto IL_0270;
		}
	}
	{
		int32_t L_89 = ___3_existingData;
		if (L_89)
		{
			goto IL_01ad;
		}
	}
	{
		U3CU3Ec__DisplayClass36_0_1_t2C5B9D7458115446C9A0D593702BFB9922362065* L_90 = V_0;
		NullCheck(L_90);
		DenseVectorStorage_1_t39D7EA7246F962E568174CBE3098F949DAAC2130* L_91 = L_90->___denseTarget;
		NullCheck((VectorStorage_1_tF8A7768F27A8844C4940AB0DC813D597FAD84286*)L_91);
		VirtualActionInvoker0::Invoke(9, (VectorStorage_1_tF8A7768F27A8844C4940AB0DC813D597FAD84286*)L_91);
	}

IL_01ad:
	{
		int32_t L_92 = ___2_zeros;
		if ((((int32_t)L_92) == ((int32_t)1)))
		{
			goto IL_01dd;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_93 = ((VectorStorage_1_tF8A7768F27A8844C4940AB0DC813D597FAD84286_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 1)))->___Zero;
		V_4 = L_93;
		U3CU3Ec__DisplayClass36_0_1_t2C5B9D7458115446C9A0D593702BFB9922362065* L_94 = V_0;
		NullCheck(L_94);
		Func_3_t7DF558CDF3A397FBD485092EFFBE9AD6E1CA4609* L_95 = L_94->___f;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_96 = ((VectorStorage_1_tF8A7768F27A8844C4940AB0DC813D597FAD84286_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 1)))->___Zero;
		NullCheck(L_95);
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_97;
		L_97 = Func_3_Invoke_m1C4589F4095AF37D5D89D0F28627AF835E4B4B9B_inline(L_95, 0, L_96, il2cpp_rgctx_method(method->rgctx_data, 7));
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 8), &L_98);
		il2cpp_codegen_runtime_class_init_inline(Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_il2cpp_TypeInfo_var);
		bool L_100;
		L_100 = Complex_Equals_mB64F111EF60ABC9D8BDD94D258145CFB5D7D4995((&V_4), L_99, il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		if (L_100)
		{
			goto IL_0252;
		}
	}

IL_01dd:
	{
		V_10 = 0;
		V_11 = 0;
		goto IL_0247;
	}

IL_01e5:
	{
		U3CU3Ec__DisplayClass36_0_1_t2C5B9D7458115446C9A0D593702BFB9922362065* L_101 = V_0;
		NullCheck(L_101);
		DenseVectorStorage_1_t39D7EA7246F962E568174CBE3098F949DAAC2130* L_102 = L_101->___denseTarget;
		NullCheck(L_102);
		ComplexU5BU5D_tC7E7960A9C8E43F8AA1EE7CEA249DF1C8E3A1E3E* L_103 = L_102->___Data;
		int32_t L_104 = V_11;
		int32_t L_105 = V_10;
		int32_t L_106 = __this->___ValueCount;
		if ((((int32_t)L_105) >= ((int32_t)L_106)))
		{
			G_B27_0 = L_104;
			G_B27_1 = L_103;
			goto IL_0209;
		}
		G_B26_0 = L_104;
		G_B26_1 = L_103;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_107 = __this->___Indices;
		int32_t L_108 = V_10;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		int32_t L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		int32_t L_111 = V_11;
		if ((((int32_t)L_110) == ((int32_t)L_111)))
		{
			G_B28_0 = G_B26_0;
			G_B28_1 = G_B26_1;
			goto IL_021d;
		}
		G_B27_0 = G_B26_0;
		G_B27_1 = G_B26_1;
	}

IL_0209:
	{
		U3CU3Ec__DisplayClass36_0_1_t2C5B9D7458115446C9A0D593702BFB9922362065* L_112 = V_0;
		NullCheck(L_112);
		Func_3_t7DF558CDF3A397FBD485092EFFBE9AD6E1CA4609* L_113 = L_112->___f;
		int32_t L_114 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_115 = ((VectorStorage_1_tF8A7768F27A8844C4940AB0DC813D597FAD84286_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 1)))->___Zero;
		NullCheck(L_113);
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_116;
		L_116 = Func_3_Invoke_m1C4589F4095AF37D5D89D0F28627AF835E4B4B9B_inline(L_113, L_114, L_115, il2cpp_rgctx_method(method->rgctx_data, 7));
		G_B29_0 = L_116;
		G_B29_1 = G_B27_0;
		G_B29_2 = G_B27_1;
		goto IL_023c;
	}

IL_021d:
	{
		U3CU3Ec__DisplayClass36_0_1_t2C5B9D7458115446C9A0D593702BFB9922362065* L_117 = V_0;
		NullCheck(L_117);
		Func_3_t7DF558CDF3A397FBD485092EFFBE9AD6E1CA4609* L_118 = L_117->___f;
		int32_t L_119 = V_11;
		ComplexU5BU5D_tC7E7960A9C8E43F8AA1EE7CEA249DF1C8E3A1E3E* L_120 = __this->___Values;
		int32_t L_121 = V_10;
		int32_t L_122 = L_121;
		V_10 = ((int32_t)il2cpp_codegen_add(L_122, 1));
		NullCheck(L_120);
		int32_t L_123 = L_122;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_124 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		NullCheck(L_118);
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_125;
		L_125 = Func_3_Invoke_m1C4589F4095AF37D5D89D0F28627AF835E4B4B9B_inline(L_118, L_119, L_124, il2cpp_rgctx_method(method->rgctx_data, 7));
		G_B29_0 = L_125;
		G_B29_1 = G_B28_0;
		G_B29_2 = G_B28_1;
	}

IL_023c:
	{
		NullCheck(G_B29_2);
		(G_B29_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B29_1), (Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2)G_B29_0);
		int32_t L_126 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_126, 1));
	}

IL_0247:
	{
		int32_t L_127 = V_11;
		int32_t L_128 = ((VectorStorage_1_tF8A7768F27A8844C4940AB0DC813D597FAD84286*)__this)->___Length;
		if ((((int32_t)L_127) < ((int32_t)L_128)))
		{
			goto IL_01e5;
		}
	}
	{
		return;
	}

IL_0252:
	{
		int32_t L_129 = __this->___ValueCount;
		U3CU3Ec__DisplayClass36_0_1_t2C5B9D7458115446C9A0D593702BFB9922362065* L_130 = V_0;
		Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* L_131 = (Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8*)il2cpp_codegen_object_new(Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8_il2cpp_TypeInfo_var);
		Action_2__ctor_m83CEE170A5B9427B596A04F9F50676B044223927(L_131, (RuntimeObject*)L_130, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 15)), NULL);
		CommonParallel_For_m1C8AF2732DD4541FD7F86DEE1BB47B5EDEF5876E(0, L_129, ((int32_t)4096), L_131, NULL);
		return;
	}

IL_0270:
	{
		VectorStorage_1_tF8A7768F27A8844C4940AB0DC813D597FAD84286* L_132 = ___0_target;
		U3CU3Ec__DisplayClass36_0_1_t2C5B9D7458115446C9A0D593702BFB9922362065* L_133 = V_0;
		NullCheck(L_133);
		Func_3_t7DF558CDF3A397FBD485092EFFBE9AD6E1CA4609* L_134 = L_133->___f;
		int32_t L_135 = ___2_zeros;
		int32_t L_136 = ___3_existingData;
		NullCheck((VectorStorage_1_tF8A7768F27A8844C4940AB0DC813D597FAD84286*)__this);
		VectorStorage_1_MapIndexedToUnchecked_TisComplex_tC7518465FEAE5F5138E1653314A611EEC09467A2_m0336B7CF0C031D5C84C438BB16EF0184C09A7CD7((VectorStorage_1_tF8A7768F27A8844C4940AB0DC813D597FAD84286*)__this, L_132, L_134, L_135, L_136, il2cpp_rgctx_method(method->rgctx_data, 16));
		return;
	}
}
// Method Definition Index: 922
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_mF825F58A763BF03B1208794140423A52C6CAE4D4_gshared_inline (Func_2_t48D86A9B41898CE26FC7F83BBEF3A99BE49F3FA7* __this, Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 ___0_arg, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 10847
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 10858
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___0_item, const RuntimeMethod* method) 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		int32_t L_7 = V_1;
		float L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (float)L_8);
		return;
	}

IL_0034:
	{
		float L_9 = ___0_item;
		List_1_AddWithResize_m446487BF7F55E757E7D552B2436AD74AC354EA99(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
// Method Definition Index: 10858
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
// Method Definition Index: 924
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_m127C1C290796AE2BF1A9B1204C0BC11BF46CF789_gshared_inline (Func_3_tE638DA3BE0D778CE23E4548BE33FE024E8A7D581* __this, double ___0_arg1, double ___1_arg2, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, double, double, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 924
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Func_3_Invoke_mD0BA1A9413189754CCE96821856EA02124D54E94_gshared_inline (Func_3_t2A705431F31EECAEC279195AA760991DB3B4104C* __this, double ___0_arg1, double ___1_arg2, const RuntimeMethod* method) 
{
	typedef double (*FunctionPointerType) (RuntimeObject*, double, double, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 924
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Func_3_Invoke_mF642F653D2CBBFA1FB0FA506D21B79C6C4AFAC87_gshared_inline (Func_3_t4A84D23D01C9E182A3CFA36E5B7F3F13F9B82367* __this, double ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) 
{
	typedef double (*FunctionPointerType) (RuntimeObject*, double, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 926
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Func_4_Invoke_m83336576648301FCB069A1930FEB8AD0B3FA5AE8_gshared_inline (Func_4_t5427DCD8C08CB2127476315E2E8F5406C6AF0873* __this, int32_t ___0_arg1, int32_t ___1_arg2, double ___2_arg3, const RuntimeMethod* method) 
{
	typedef double (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, double, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 10847
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_gshared_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 10858
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_gshared_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, double ___0_item, const RuntimeMethod* method) 
{
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_6 = V_0;
		int32_t L_7 = V_1;
		double L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (double)L_8);
		return;
	}

IL_0034:
	{
		double L_9 = ___0_item;
		List_1_AddWithResize_m4D19394DC3062D1A564AD12233B16F7C80936C18(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
// Method Definition Index: 922
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 Func_2_Invoke_mE1FB1490FA2CE19857F94C0511EA55F5E8402925_gshared_inline (Func_2_t61463E95451501F9CA32136BA5E229D4318256F5* __this, double ___0_arg, const RuntimeMethod* method) 
{
	typedef Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 (*FunctionPointerType) (RuntimeObject*, double, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 10847
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m53C6591DADDBD6ABD3B8EA7FE009E5D1F293A28B_gshared_inline (List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 10858
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m8B3C68D214DA6E1733B5EBBD4608FA2C41A4A195_gshared_inline (List_1_t022CD1DD9CC33C9D30F00B4045F5922712CF9356* __this, Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 ___0_item, const RuntimeMethod* method) 
{
	ComplexU5BU5D_tC7E7960A9C8E43F8AA1EE7CEA249DF1C8E3A1E3E* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ComplexU5BU5D_tC7E7960A9C8E43F8AA1EE7CEA249DF1C8E3A1E3E* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ComplexU5BU5D_tC7E7960A9C8E43F8AA1EE7CEA249DF1C8E3A1E3E* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ComplexU5BU5D_tC7E7960A9C8E43F8AA1EE7CEA249DF1C8E3A1E3E* L_6 = V_0;
		int32_t L_7 = V_1;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2)L_8);
		return;
	}

IL_0034:
	{
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_9 = ___0_item;
		List_1_AddWithResize_mD6D812073E5BEC0634036BEF8020570DBF04F4DA(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
// Method Definition Index: 922
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Func_2_Invoke_m762147834B46FC6B99180328AD303FC3F47CCD62_gshared_inline (Func_2_t0221E9CE1FF8B8FE59AED052D562790B96F13B3D* __this, double ___0_arg, const RuntimeMethod* method) 
{
	typedef double (*FunctionPointerType) (RuntimeObject*, double, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 922
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_m662ABB8CB9CD647FB749C77F475250C61939D1BA_gshared_inline (Func_2_t4C40E8255CD677D8102C7DF0D02FF06A36B97E3F* __this, double ___0_arg, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, double, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 924
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_mCC1FDB4D5C9B18027021CB0AA0957A57B49E7472_gshared_inline (Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* __this, float ___0_arg1, float ___1_arg2, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 924
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Func_3_Invoke_mE2A19EB0A945F418CEAAFD50E287168BF1DEC2A9_gshared_inline (Func_3_t20B200D5023868E2C8AC4AD483D5EAED48292795* __this, double ___0_arg1, float ___1_arg2, const RuntimeMethod* method) 
{
	typedef double (*FunctionPointerType) (RuntimeObject*, double, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 924
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_3_Invoke_mC8193F9BE436AD10B0F1279771862679CB5813AD_gshared_inline (Func_3_t112E81BD9C60E0186076895800369606BCF590FB* __this, float ___0_arg1, float ___1_arg2, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 924
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_3_Invoke_mF98107D070CE400E936ECB9F66287FFB15A0B338_gshared_inline (Func_3_t0744D898EC5655214925A3300C859FF93F955FA4* __this, float ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, float, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 926
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_4_Invoke_m849FAAA1541A8D85C4C145B47FB24BEBB4A21036_gshared_inline (Func_4_t0A1570471FB7D7E0FF3DA1CA73C96374211D533A* __this, int32_t ___0_arg1, int32_t ___1_arg2, float ___2_arg3, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 922
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 Func_2_Invoke_mE072E7729652470833DBFDE6DC64E8F2ABE5A917_gshared_inline (Func_2_tE9000208843AA6F26314783210E61A8D532C107D* __this, float ___0_arg, const RuntimeMethod* method) 
{
	typedef Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 10847
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mC9190727BD57B042AC64759CFDFA481065898B12_gshared_inline (List_1_tF537CE97143B8527EF8CAFE68B92E728B2719A1D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 10858
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m69399AFDAF357EE75291EF91E57AE6C1B27207CD_gshared_inline (List_1_tF537CE97143B8527EF8CAFE68B92E728B2719A1D* __this, Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 ___0_item, const RuntimeMethod* method) 
{
	Complex32U5BU5D_t3AF6B5A9024ABEE3CE5B1717BFAE078BD682EB69* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Complex32U5BU5D_t3AF6B5A9024ABEE3CE5B1717BFAE078BD682EB69* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Complex32U5BU5D_t3AF6B5A9024ABEE3CE5B1717BFAE078BD682EB69* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Complex32U5BU5D_t3AF6B5A9024ABEE3CE5B1717BFAE078BD682EB69* L_6 = V_0;
		int32_t L_7 = V_1;
		Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06)L_8);
		return;
	}

IL_0034:
	{
		Complex32_t656BEA76332727B3CE1694E8FE1C49CBAC9E6C06 L_9 = ___0_item;
		List_1_AddWithResize_m2B58B88CD47DE15F57483A64CDC1A36C9629690B(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
// Method Definition Index: 922
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Func_2_Invoke_mA111ABF54B39A261C7CEE454A6ADD73635731444_gshared_inline (Func_2_t30CC93434BF7EFA66AF4592260CCDBC8BFC5DD87* __this, float ___0_arg, const RuntimeMethod* method) 
{
	typedef double (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 922
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_m5728ECFB038CFC6FEF889DC2D566EEF49D0E24B9_gshared_inline (Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* __this, float ___0_arg, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 924
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 Func_3_Invoke_m1C4589F4095AF37D5D89D0F28627AF835E4B4B9B_gshared_inline (Func_3_t7DF558CDF3A397FBD485092EFFBE9AD6E1CA4609* __this, int32_t ___0_arg1, Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 ___1_arg2, const RuntimeMethod* method) 
{
	typedef Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 (*FunctionPointerType) (RuntimeObject*, int32_t, Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
