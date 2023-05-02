#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct VirtualActionInvoker8
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
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
struct InvokerActionInvoker3
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		void* params[5] = { &p1, &p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6<T1*, T2, T3, T4, T5, T6>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		void* params[6] = { p1, &p2, &p3, &p4, &p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		R ret;
		void* params[5] = { &p1, &p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2, T3, T4, T5, T6>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		R ret;
		void* params[6] = { p1, &p2, &p3, &p4, &p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379;
// System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>
struct Dictionary_2_t8A4E573D0DD505D003411AB9AF139DF09F555CC9;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Data.DataColumn>
struct Dictionary_2_tA1C46A4AE8BF6F61CE13FCB4610037808EA8AB66;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>
struct Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.EventHandler`1<System.Data.Common.RowUpdatingEventArgs>
struct EventHandler_1_t17051E007455090ECF8C9D97E16866DDBAF479EA;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_tDBA96AAC21C7C21D26B68A9F19E6AE4E015D2316;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>
struct KeyCollection_tE40120A59B27B81B0B3BECD0560B903BE4D490F2;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.String>>
struct KeyCollection_tAF09DE3ACAF1ABD7544A92CFC2787E520703246E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03;
// System.Collections.Generic.List`1<System.Data.DataColumn>
struct List_1_t3F99226F0C691927C5B70A8B7FD8B4ACA817A785;
// System.Collections.Generic.List`1<System.Data.DataView>
struct List_1_t1CDDD861715A83BE1EF98CE75870A483BB5ECC93;
// System.Collections.Generic.List`1<System.Data.DataViewListener>
struct List_1_t73C786BB01E05FA7B2ACAA21DA57002B4503C95F;
// System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification>
struct List_1_t9F4F8EB487AD8634210B33C2FD40A9DB5604EDB3;
// System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification>
struct List_1_t151A1BC1807DD3664F9A0AD5F5D74FF992C57A4C;
// System.Collections.Generic.List`1<System.Data.Index>
struct List_1_tD455920B93EB13CDFF946088629D287A8D3CA973;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunction>
struct List_1_tFA881B9537459575C967B1E246BEBC2C89C04C6B;
// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunctionAttribute>
struct List_1_t17CD056DA36330C0324182AEE6A7248BDEF69733;
// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>
struct List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B;
// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteStatement>
struct List_1_t7D17A1BF1130ACFFA0E9137E8A4A09FD5DCA26C3;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>
struct List_1_tF30A6998C02D085CCD3F4E659A4ED22C2A03173B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>
struct ValueCollection_tE7D4AD6A834D7141A6F99F0C88D74723517A276E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<System.String>>
struct ValueCollection_tBA7D94F600201BDFFC90880B77DA2D76ED7EBB59;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B;
// System.Collections.Generic.Dictionary`2/Entry<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>[]
struct EntryU5BU5D_tBCE46965BA82647884F5C06639EED57EC4894B7C;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<System.String>>[]
struct EntryU5BU5D_t7D363C4258705E5C759DC3C7A84AD08784EEBE95;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Int32>[]
struct EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t4600ECA5C95E7699298FCD6D677AEAD7D9F5F0CA;
// System.Data.DataRelation[]
struct DataRelationU5BU5D_t1640C9372BDC91DAE0359E08BE1E91AE48924FF0;
// System.Data.DataRow[]
struct DataRowU5BU5D_t2A0D4483B27757FE7345A2E7FE5727C7F77DE5D4;
// System.Data.Common.DbSchemaRow[]
struct DbSchemaRowU5BU5D_tAE022046DE269AFA725E6094193CFD7FF7609B5E;
// System.Data.DbType[]
struct DbTypeU5BU5D_t8F694A3F9BA00D6478561BAD979C495A448B8A4C;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Exception[]
struct ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C;
// System.Data.IndexField[]
struct IndexFieldU5BU5D_t2E1FE07C5E6C8080FCF4908199FFDFEBA1EECA3E;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Mono.Data.Sqlite.SQLiteType[]
struct SQLiteTypeU5BU5D_t9577E5DC506B1996F06A2CFA7094F5F7BD8A4EE2;
// Mono.Data.Sqlite.SQLiteTypeNames[]
struct SQLiteTypeNamesU5BU5D_tA4A78A94B161A639509F57C537A3C425AEC4037D;
// System.Data.Common.SchemaInfo[]
struct SchemaInfoU5BU5D_t34DF586B5AEB4D293BA7BB44D2289172A52AEF8D;
// Mono.Data.Sqlite.SqliteFunction[]
struct SqliteFunctionU5BU5D_t4564C20F1EB9BA6808CCD9834FE2D82F87F3ABEC;
// Mono.Data.Sqlite.SqliteFunctionAttribute[]
struct SqliteFunctionAttributeU5BU5D_t411CBB984B2B50B50E53FB8D41B1DA78821FBE2D;
// Mono.Data.Sqlite.SqliteParameter[]
struct SqliteParameterU5BU5D_t9217B066A90F0B292D7927FFC2E64EEC2B88AB43;
// Mono.Data.Sqlite.SqliteStatement[]
struct SqliteStatementU5BU5D_t170497202F6B046FFA0AA263FEB78F3AFA9DB2BB;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Mono.Data.Sqlite.TypeAffinity[]
struct TypeAffinityU5BU5D_t36719C4EE30347BE494A633A1A43DB7696B4F28F;
// Mono.Data.Sqlite.SqliteKeyReader/KeyInfo[]
struct KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.Reflection.Assembly
struct Assembly_t;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2;
// System.Data.AutoIncrementValue
struct AutoIncrementValue_tB454D864DCB48A3C8EB2F806BD0AB284BB735BCE;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t27A05C16B442D16E079F0932D315156EFD82AB1D;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_tEC0AAABD75A4FDAEC5A3E8A0C754AC9A6F692F50;
// Mono.Data.Sqlite.CommitEventArgs
struct CommitEventArgs_tEE8C0ADBE8065ED4483973EF696742D42C372837;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.ComponentModel.Component
struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083;
// System.Data.ConstraintCollection
struct ConstraintCollection_tE6135623B0068FD56F0D15E13FFA1882D36BDD40;
// System.Runtime.InteropServices.CriticalHandle
struct CriticalHandle_t9BAF9AE811FE6EADA3E61F3F04CBB238960CFA52;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Data.DataColumn
struct DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66;
// System.Data.DataColumnChangeEventHandler
struct DataColumnChangeEventHandler_t666070D5D5C9A6CF6E9FA12E6FC15B7DB20C8959;
// System.Data.DataColumnCollection
struct DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E;
// System.Data.DataError
struct DataError_tEE3A28C2A673D369980814389991CD62F45E56A1;
// System.Data.DataExpression
struct DataExpression_t8B426B55556F5C9CD0AADB61EA0AE306F9AD72C6;
// System.Data.DataRelationCollection
struct DataRelationCollection_tA8655ADC9860DD89FDC0317E38C95CB740BC2956;
// System.Data.DataRow
struct DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388;
// System.Data.DataRowBuilder
struct DataRowBuilder_t8EFCEBE1AE55392AAE53DA15D2B334C56BB14566;
// System.Data.DataRowChangeEventHandler
struct DataRowChangeEventHandler_t2F295C9D2283CBF4D109CBDFCD141EF2A58B24BF;
// System.Data.DataRowCollection
struct DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738;
// System.Data.DataSet
struct DataSet_t1F72E9737C995EBFDCF793C87CAC3196EA02411B;
// System.Data.Common.DataStorage
struct DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A;
// System.Data.DataTable
struct DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07;
// System.Data.DataTableClearEventHandler
struct DataTableClearEventHandler_tE15A0F0DEDDCCACFBD4F9F19F462C1FE90746B1B;
// System.Data.DataTableNewRowEventHandler
struct DataTableNewRowEventHandler_t874CE0332A55E1F8A8CF67458AF71CE73975D827;
// System.Data.DataView
struct DataView_t882C19B1455AFCE770D60A43A690096801824A50;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Data.Common.DbCommand
struct DbCommand_tEEC6C32CDC10CB77D2AFFE4565AACDC0C82F516F;
// System.Data.Common.DbDataAdapter
struct DbDataAdapter_tD415D7FBB91AFC7FA1A7E3AEC576203DE550A19B;
// System.Data.Common.DbDataReader
struct DbDataReader_tA1A9729B3ED5125A693F4442984CCE7D721F452F;
// System.Data.Common.DbDataRecord
struct DbDataRecord_t25F58980CADB52F28394B12491BCE02A280FDB29;
// System.Data.Common.DbEnumerator
struct DbEnumerator_tD4CBC5D7C73AFE4F4A92D653239CD007D6919DB8;
// System.Data.Common.DbException
struct DbException_tA8086663706EEDB8867D92FB760DD9B8F57E86A0;
// System.Data.Common.DbParameter
struct DbParameter_tC4DFEE7A3DF97B1D878AAFFFB246188DBB9E0296;
// System.Data.Common.DbParameterCollection
struct DbParameterCollection_tE362E252B1EA5E903A447738C9AA0AB473275391;
// System.Data.Common.DbProviderFactory
struct DbProviderFactory_tB7F32D5FFD3005A63FDC65948C2F9794F02DA80C;
// System.Data.Common.DbTransaction
struct DbTransaction_t2571A7BAE88D10335C418A2061AAA42AD4B32609;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Transactions.Enlistment
struct Enlistment_tDF858DEFBA405B6DF5EF4DC746A92C59DE007552;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8;
// System.Exception
struct Exception_t;
// System.Data.ProviderBase.FieldNameLookup
struct FieldNameLookup_t55538EBEFA726F538EFE7132F0C4F93992275046;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Data.IDataReader
struct IDataReader_t109552004F52225C781EA073D5C5F67BD2DA8D11;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Transactions.IEnlistmentNotification
struct IEnlistmentNotification_tACB7F43A9D736E8B9F4045339E86D063B540EC66;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.Transactions.IPromotableSinglePhaseNotification
struct IPromotableSinglePhaseNotification_t55FA5C677628E609C73561E23A834E464F5B1321;
// System.Resources.IResourceGroveler
struct IResourceGroveler_tDEE701BD41E9E5D260606F79F75427B42C4CC0C0;
// System.ComponentModel.ISite
struct ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93;
// System.Data.Index
struct Index_tB35755A4A90336B5A005AD1320AAF1219DEE2483;
// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA;
// System.Data.PropertyCollection
struct PropertyCollection_t531D3CA9714C3D7818C1B1C139A9C4F04B73EE7C;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_tC4C2FA51126BD032E2E9A0472995F7FCAC6E70DE;
// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906;
// System.Data.RecordManager
struct RecordManager_t5525269209BE5391607F8C811470AC2EC5C8FA4A;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// System.Resources.ResourceManager
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB;
// System.Data.Common.RowUpdatingEventArgs
struct RowUpdatingEventArgs_tF304012D82B5ADFC2E003245608C5204A981FED1;
// System.Reflection.RuntimeAssembly
struct RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF;
// Mono.Data.Sqlite.SQLiteBase
struct SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE;
// Mono.Data.Sqlite.SQLiteCallback
struct SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94;
// Mono.Data.Sqlite.SQLiteCollation
struct SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20;
// Mono.Data.Sqlite.SQLiteCommitCallback
struct SQLiteCommitCallback_tC40586DD8AA664D8BC2E2B5C34F3406DBC953FFD;
// Mono.Data.Sqlite.SQLiteCommitHandler
struct SQLiteCommitHandler_t19C02860BAD4E8E4FC7FD15BBDFC290D5E56EFF2;
// Mono.Data.Sqlite.SQLiteEnlistment
struct SQLiteEnlistment_tD69C41BBAEDD2F8ED9EDD2F9B8690BC4BB4BDAF5;
// Mono.Data.Sqlite.SQLiteFinalCallback
struct SQLiteFinalCallback_t6F84B373BB829BAABB6B9E2FEAF24723743008CD;
// Mono.Data.Sqlite.SQLiteRollbackCallback
struct SQLiteRollbackCallback_t98CA336F8643C59817C9BAF0805D000A3136045F;
// Mono.Data.Sqlite.SQLiteType
struct SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A;
// Mono.Data.Sqlite.SQLiteUpdateCallback
struct SQLiteUpdateCallback_t70BBEEEA989EF27B8FB86F7194729ABDCC2BDFB2;
// Mono.Data.Sqlite.SQLiteUpdateEventHandler
struct SQLiteUpdateEventHandler_t8B66CFE2899681DA8EE4EA7D3166A7D0E3C7F750;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Data.SimpleType
struct SimpleType_tE6F54AF1D35994BBDB2AEB808DB8C87AB7477D14;
// Mono.Data.Sqlite.SqliteCommand
struct SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25;
// Mono.Data.Sqlite.SqliteCommandBuilder
struct SqliteCommandBuilder_t25108064A445081C8B3015A1BF9D6445DC22D247;
// Mono.Data.Sqlite.SqliteConnection
struct SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64;
// Mono.Data.Sqlite.SqliteConnectionHandle
struct SqliteConnectionHandle_tFA3E42C00B09B2E743EFB7FFC30AFA1F20F9EB9B;
// Mono.Data.Sqlite.SqliteConvert
struct SqliteConvert_t981F31162C63D0C2F780C2FC99738D60779F4D2A;
// Mono.Data.Sqlite.SqliteDataAdapter
struct SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78;
// Mono.Data.Sqlite.SqliteDataReader
struct SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835;
// Mono.Data.Sqlite.SqliteException
struct SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2;
// Mono.Data.Sqlite.SqliteFactory
struct SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E;
// Mono.Data.Sqlite.SqliteFunction
struct SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9;
// Mono.Data.Sqlite.SqliteFunctionAttribute
struct SqliteFunctionAttribute_t2923E6115FF388A4F4FAC0BA872F63BEC5D2AC65;
// Mono.Data.Sqlite.SqliteKeyReader
struct SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF;
// Mono.Data.Sqlite.SqliteParameter
struct SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00;
// Mono.Data.Sqlite.SqliteParameterCollection
struct SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334;
// Mono.Data.Sqlite.SqliteStatement
struct SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7;
// Mono.Data.Sqlite.SqliteStatementHandle
struct SqliteStatementHandle_tEDCE828C60B1B7EC9EC59D63D045EF924E6B7788;
// Mono.Data.Sqlite.SqliteTransaction
struct SqliteTransaction_t5CFD0E46CAF0C4FB991C2AD83395F245F6648542;
// System.Data.StateChangeEventHandler
struct StateChangeEventHandler_t0C16938B27C80342B5A7D6645F3DA8F5E4AA71E1;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Transactions.Transaction
struct Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD;
// System.Transactions.TransactionCompletedEventHandler
struct TransactionCompletedEventHandler_tE63F4C59FFEDF5500FAD819D585CBCAE192CE3DB;
// System.Transactions.TransactionInformation
struct TransactionInformation_tFB7D26BBE9CEB8F44CAC3930B739922628AD17EA;
// System.Transactions.TransactionScope
struct TransactionScope_tB6032DAC900A60B7BC491532717C3707414B9BC4;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// System.Data.UniqueConstraint
struct UniqueConstraint_tE48A79D2F7DE0EA4A3F1BF5BB322C383E60465F6;
// Mono.Data.Sqlite.UpdateEventArgs
struct UpdateEventArgs_t42367B915C6324429DF547E0DE821BC2604C56FF;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E;
// System.Data.DataRowCollection/DataRowTree
struct DataRowTree_tE2B5C209F0D2D3B72A2F747AEFD4F76CBDB92AAF;
// System.Data.Common.DbCommandBuilder/ParameterNames
struct ParameterNames_tE3980726E30C2D359F0F54B1DC8EF47DE9E6441A;
// System.ComponentModel.EventHandlerList/ListEntry
struct ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD;
// System.Resources.ResourceManager/CultureNameResourceSetPair
struct CultureNameResourceSetPair_t06C5772C09CA853E70E42C0E8BC57FE0AA2CB674;
// Mono.Data.Sqlite.SqliteFunction/AggregateData
struct AggregateData_t866FCF0E4839C9651D352CC8D81C4F554C695E58;
// Mono.Data.Sqlite.SqliteKeyReader/KeyQuery
struct KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591;

IL2CPP_EXTERN_C RuntimeClass* AggregateData_t866FCF0E4839C9651D352CC8D81C4F554C695E58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DbCommandBuilder_tB2241F4E492F60AAB8E40DEB7EDF1AD89D1C4341_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DbEnumerator_tD4CBC5D7C73AFE4F4A92D653239CD007D6919DB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DbType_tAB317B97F25F156130CA6BD83234551B0937D738_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t595F2F779C256BFDC5AC4905175B8D9D912650E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t17051E007455090ECF8C9D97E16866DDBAF479EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t17CD056DA36330C0324182AEE6A7248BDEF69733_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF30A6998C02D085CCD3F4E659A4ED22C2A03173B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFA881B9537459575C967B1E246BEBC2C89C04C6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionTypeLoadException_tA59A0D2E1F05C20E7C493630343FBC9B7308C475_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SQLiteFinalCallback_t6F84B373BB829BAABB6B9E2FEAF24723743008CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SQLiteTypeU5BU5D_t9577E5DC506B1996F06A2CFA7094F5F7BD8A4EE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SR_tBC19444887A0E555C45E9083E0825A25D537681B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqliteCommandBuilder_t25108064A445081C8B3015A1BF9D6445DC22D247_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqliteConnectionHandle_tFA3E42C00B09B2E743EFB7FFC30AFA1F20F9EB9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqliteConvert_t981F31162C63D0C2F780C2FC99738D60779F4D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqliteFunctionAttribute_t2923E6115FF388A4F4FAC0BA872F63BEC5D2AC65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqliteFunctionEx_t66A15B512D7A425A21434142226E632CE150D10F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqliteFunctionU5BU5D_t4564C20F1EB9BA6808CCD9834FE2D82F87F3ABEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqliteParameterU5BU5D_t9217B066A90F0B292D7927FFC2E64EEC2B88AB43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqliteStatementHandle_tEDCE828C60B1B7EC9EC59D63D045EF924E6B7788_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF6D30A1CAA3B2D80CC8C00B5C5090E61532A0E2F____U24U24fieldU2D1_1_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral092BFAD98655EFE50A6BE04C8CA0A6B3F911BC2B;
IL2CPP_EXTERN_C String_t* _stringLiteral096CF12DBCC6AEE41F38FC7049179C565BB7AF8A;
IL2CPP_EXTERN_C String_t* _stringLiteral0D3DEA7F69B00B4CC1DC603DCB37E82428E4B1B9;
IL2CPP_EXTERN_C String_t* _stringLiteral0EDACA8FD01464BD5942BA77772B86B06EC27DDA;
IL2CPP_EXTERN_C String_t* _stringLiteral11CD6576D2D39281C98ACF615A4A22DB7880A73A;
IL2CPP_EXTERN_C String_t* _stringLiteral17A611734FC02C15EC6FF0EF37AC0A35E2B42279;
IL2CPP_EXTERN_C String_t* _stringLiteral2143043D1C3F0E38C94B32AE02ADA4C9B77C8DD5;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2705B5D75B5A7D4F4971D1C8AB5092E894284DDF;
IL2CPP_EXTERN_C String_t* _stringLiteral27F29081E63F191FEECC19EEACB62C41A53F0145;
IL2CPP_EXTERN_C String_t* _stringLiteral2FFE24DBF860CC54D3362E0F2C5B8E374A53D096;
IL2CPP_EXTERN_C String_t* _stringLiteral31B8EF32EC3BB39A9157DDAE40161D975D0CB6E3;
IL2CPP_EXTERN_C String_t* _stringLiteral3802BFE48EFD0E592FE72A2DB9F0BA60169F279E;
IL2CPP_EXTERN_C String_t* _stringLiteral3A04B66E08FA3C8299F6758BF79D3F909AED7B52;
IL2CPP_EXTERN_C String_t* _stringLiteral3A27ACE1504E7EE8CCCA8D5C51C1ED73C20A1A7C;
IL2CPP_EXTERN_C String_t* _stringLiteral3A4A2FDF76C902421832CE257928AFAF1450ECA6;
IL2CPP_EXTERN_C String_t* _stringLiteral3A4B52649FB9A1CBCE24C379CFC43E7B53DD4E4E;
IL2CPP_EXTERN_C String_t* _stringLiteral3C17C893DB3796C20700D4C1D24CA50A8D81100D;
IL2CPP_EXTERN_C String_t* _stringLiteral3C459290DA0BC5C165717333B050844A9F606FBE;
IL2CPP_EXTERN_C String_t* _stringLiteral3E6F47FA2A413B3D64AC4A42E136CD9A77578E9D;
IL2CPP_EXTERN_C String_t* _stringLiteral3F88B0E463EABBEFBD51CF5AF7B9C967B97916B0;
IL2CPP_EXTERN_C String_t* _stringLiteral4124D02588D591D63431A10D2902793569BB1200;
IL2CPP_EXTERN_C String_t* _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5;
IL2CPP_EXTERN_C String_t* _stringLiteral42F73805878F8235BBEB23B2F5690668A3131E3D;
IL2CPP_EXTERN_C String_t* _stringLiteral47211EF2BDCEF6E87ADFE8F5E627527B1996AE35;
IL2CPP_EXTERN_C String_t* _stringLiteral473447DDFB82E40B2A42B01F455BD8D910D4555B;
IL2CPP_EXTERN_C String_t* _stringLiteral48BE9E1104BCA071E20A26042EF3C149D08FAD30;
IL2CPP_EXTERN_C String_t* _stringLiteral4974B6D93610BFE46F8450FA8035E08CD01E39F9;
IL2CPP_EXTERN_C String_t* _stringLiteral49949E7446022453CD59BFF2D6329A6F58C2D2BD;
IL2CPP_EXTERN_C String_t* _stringLiteral4A575E95D9ED3920D143DB473F19F1F21085A65F;
IL2CPP_EXTERN_C String_t* _stringLiteral4A59B8D91FC4BF33F473B18A7B17634BD1CA6124;
IL2CPP_EXTERN_C String_t* _stringLiteral4B85416C037BF932C56E10E6EFE7189E571F9C1A;
IL2CPP_EXTERN_C String_t* _stringLiteral4D734F2066F3FDFBA2349C35613BDC56CFA8856C;
IL2CPP_EXTERN_C String_t* _stringLiteral50A1EE6189DD9E7015047EE058B68EE66982C5BD;
IL2CPP_EXTERN_C String_t* _stringLiteral54F4AAE0436CBCC0163FCF662535D64F6E0BB00C;
IL2CPP_EXTERN_C String_t* _stringLiteral56EF313ED81DF72F15ECF32471156367026E58DB;
IL2CPP_EXTERN_C String_t* _stringLiteral66471CEAFEB2162893D84AF5B00227F335777AAD;
IL2CPP_EXTERN_C String_t* _stringLiteral6B26E44CAC9AAFEEFB048D6669E784CE58F859A1;
IL2CPP_EXTERN_C String_t* _stringLiteral700F53AE445FB64D7FC5C5A144E7907188DEB24B;
IL2CPP_EXTERN_C String_t* _stringLiteral7245750688F8ABD9E50DA82005D421F8461EC1E6;
IL2CPP_EXTERN_C String_t* _stringLiteral76BA1AFE3DCE550F0CD0C4AC6739113BC80C54B1;
IL2CPP_EXTERN_C String_t* _stringLiteral8172BAC95C9A5BE9FAE6423959034DB348689962;
IL2CPP_EXTERN_C String_t* _stringLiteral839481F78B5DCE81901DCFD34A79C694148FC1F9;
IL2CPP_EXTERN_C String_t* _stringLiteral875AB122E8B446E69297427A5F4087AAAD521399;
IL2CPP_EXTERN_C String_t* _stringLiteral8A575BA2F0B7DA6880319D9AA6AFDA9774B82C3D;
IL2CPP_EXTERN_C String_t* _stringLiteral8DDCC73746EE7D080F817B0E82CBCACE579B6C75;
IL2CPP_EXTERN_C String_t* _stringLiteral8E18DA905AFCA22B37A911B950FEAAC08DBAC4C0;
IL2CPP_EXTERN_C String_t* _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3;
IL2CPP_EXTERN_C String_t* _stringLiteral962B1AB5AF45CFE050C375F3EBA6B679FCC4DE6E;
IL2CPP_EXTERN_C String_t* _stringLiteral96373F17CBFAEA4614E7A3290A7BB4670417A00B;
IL2CPP_EXTERN_C String_t* _stringLiteral974BD364CE180CA6A107168A878CD9F73FA68C95;
IL2CPP_EXTERN_C String_t* _stringLiteral9985360791324B8CF0E915230DB33DE48A6267A8;
IL2CPP_EXTERN_C String_t* _stringLiteral9D3ADA066DEAFCA09355C40B3137C5CA140B0A22;
IL2CPP_EXTERN_C String_t* _stringLiteral9FBA971FF224748F29CAD5F223B35109AAB87172;
IL2CPP_EXTERN_C String_t* _stringLiteralA64D7678290D92C58079B8A51D38C8C9C6C12315;
IL2CPP_EXTERN_C String_t* _stringLiteralA9645E68D6ED9BA60C87E36BE94F61242DF204C9;
IL2CPP_EXTERN_C String_t* _stringLiteralB0A1C47352664275E2D7F477FA4C62FC016B575F;
IL2CPP_EXTERN_C String_t* _stringLiteralB12ED1901A976BC2A3B8A25F5BE6890167C7C629;
IL2CPP_EXTERN_C String_t* _stringLiteralB92D156E4BDBF02723A803214147AA62D90A74F7;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralCB6753C3513A85AA0C591C58631DDAFC59A32786;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralD9E58E131B941EDBC659670BE3C588B512A15329;
IL2CPP_EXTERN_C String_t* _stringLiteralDD1F69DF208EE1D08F928AC2228D76D90CA84260;
IL2CPP_EXTERN_C String_t* _stringLiteralDFDBD46B3379BC15C2627741C05056E0E1273E69;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE476E19E3D8F8866D67DF8D9FD1B14305D877C48;
IL2CPP_EXTERN_C String_t* _stringLiteralE71468ACF7FDE125E89960F904BDDF6F2A4C8D48;
IL2CPP_EXTERN_C String_t* _stringLiteralE757C290683295310C9A9ECC5F63D04A80C905DC;
IL2CPP_EXTERN_C String_t* _stringLiteralE763D72A12952760F58B6A88F7AA955A6CDAD865;
IL2CPP_EXTERN_C String_t* _stringLiteralE92A469260B8CCEEF66ADD89872E7BD2F66E5AD5;
IL2CPP_EXTERN_C String_t* _stringLiteralF68BE93499EBDA525EAB969E88B05907332F6184;
IL2CPP_EXTERN_C String_t* _stringLiteralFB858DF3F2BB98A18F92E8A4AC7E301F1903D719;
IL2CPP_EXTERN_C String_t* _stringLiteralFBA2FCAA8541415BDE4D9DE7257D6242C918AA62;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mFC882976F9C1D377FB9B96AC561BF0301DCC75F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m3B0610A5E0A7404117178543C997384943E58ABD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m994A6496B0ED7177E6D4535A398A7EFFF9684FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mA72C81BD9C5F06AA0449FB2782F4CFF1CAA7394B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m233C00670B0FAC3A270A296E217A881A2243BC9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m7B0E05167CA47611244E25AD67EBCEBDF5DB5EDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mDC4D9DBC45BAC4BAF0317ABBF2377BB286BB2981_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m89183DF299284AB71732DD3FEA89577973142D60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m79EA54A4C736FED8607D6E97BD54974D340AEA82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m8B64E2395E0FED66B5313607CFF79A5C8A46358A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mC15F5EA41180EEBDD45410E77317587527985864_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mC89293544B07CC160B4F2986722AEF120EA6A1A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m45A23BDC11EDDDF1F3A7B567DB2A59D248F54F86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m787C448734F5EC6AE58CEBE8EA7778045B82FF1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m99125209AFF2B9EC8E357CCF4F07D2DD62C3EEFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA71548765692C241BEFB57E80CBC1563829B1656_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyQuery_set_IsValid_mEF4188FC79CD3D2BD9A474B010E6C6F0A2A861BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m86C887F7D86F0A2C7EC60362A55B6A2F3C075780_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA2C174FE89DD752197CA6AE0E89F2A2843411B05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mDF8F150D36D2A349EFF0E8737455E2255718611C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF2DD882B9C7EF34093A5F953234E84854108523D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m192E6E713DC63C1C942969E1CF1F66062E27805C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mCCCAAF31CEAE15CF0F5057603C3E7C2596E75B5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_CopyTo_m0329A9F65500EF5CF9BBA303DB826C8AF16636C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_CopyTo_m45944BA57667FCA9B5B56F9A2168D6D5E5306A0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_CopyTo_m87398D95BED8C0626A669D782ECE31DE73392BDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mEC80C88ED1945C7581BCD0065F5DA094E94A2CAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mFA16DDE53286F33E2F767ACC3AB0F6444084C0CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m015E1C5A3B783666F825288510406C8BBE941222_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_mFFBDF3180F876D5FE1284B1525B18EF6E91F64EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mC76B46919EE3C9C21C2BAE9B79D33DB8D9C021F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m990B3EDDB6900CB0FE1A1B04DB9DF228773601C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m60653FC61EE022D449B504F5476F13192863010C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8E25171C599E4D0A576581C53F0B2A9A586D9430_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE1A4D2EE1311CD43F38BE58C778D0F63CB296813_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEEE5A98E1B8A6846E3590BE97C9A59E6C7D25A3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m4C41298B5C7DB30F5E00C45575A0669039D7E724_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA097CAA69C7966024517933895BB417E34ED37A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mCBCE70D4C328DE1A088C154743D78724A73DB682_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteDataReader_CheckClosed_m7D7D9DFBB00848D65FB18C563730F999322ACFB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteDataReader_CheckValidRow_m0E7986482CDFADC9F549DF61356FA44C3A9113A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteDataReader_VerifyType_m0706F2D4C867B32BBCE6972D98D382C180FF395B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteFactory_GetSQLiteProviderServicesInstance_m2C2BD80DE6A335BF90E765C87A9AA134EFAB24BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteFactory__cctor_m28BA821B43603C0F41BCE78C284396E1D8CDA062_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteFunction_CompareCallback16_mC43973181A65C6A3C59D94853E08BBEFF9B836B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteFunction_CompareCallback_mAC6514B4CE6BB9A1194E6818FFFC9B3A8EC9CEFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteFunction_FinalCallback_mBDADF32683D86DCF3105147F49A386C96DD5C28D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteFunction_ScalarCallback_m5D087CE88A59E466D1B5CD0120CEB3BC4DB9648E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteFunction_StepCallback_m1AFE57219F9E64E3320E1BF2074796643F687064_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteKeyReader_GetBoolean_m826904C49D5C00AFA2784DC3C455A049C8BF4936_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteKeyReader_GetInt32_m54F57976B00F5F7DE432530A7C4147396A867366_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteKeyReader_GetInt64_mEE6952C000B5C9B1FA90A62E55A0ED72C623515D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteKeyReader_GetString_m932CA1988B8E2E4CA5874238E9D7894D8B91A169_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteKeyReader_Sync_m23B27E9B34013F1D860AD14F24A9049EFB0EE4AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteParameterCollection_CopyTo_mCB9B9DC8031D37497C0FD80757A471518C815358_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteParameter_set_Direction_m0D4E338DA6A70038E99AA17A164120D0224B40EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteStatement_BindParameter_mE6CFCD90E7884A0A58D374A485326F025BFCED3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteStatement_SetTypes_mF06D56D7B7634D6F10E77EC3E6A88C7858A2F92E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteTransaction_IsValid_m5AFA33FA4116BC602BF4FE5B786392621E5A1FB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m50BCE4A0EB39D97381431E6CC2576C50DCE69C67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ISQLiteSchemaExtensions_t6DE5E06D86CCDF821F975CEF188D49BDB2697740_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SR_tBC19444887A0E555C45E9083E0825A25D537681B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SqliteFunctionAttribute_t2923E6115FF388A4F4FAC0BA872F63BEC5D2AC65_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Type_t_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
struct AssemblyNameU5BU5D_t1C2CB87B1AD967C0648E960165F31298EA326D5C;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SQLiteTypeU5BU5D_t9577E5DC506B1996F06A2CFA7094F5F7BD8A4EE2;
struct SqliteFunctionU5BU5D_t4564C20F1EB9BA6808CCD9834FE2D82F87F3ABEC;
struct SqliteParameterU5BU5D_t9217B066A90F0B292D7927FFC2E64EEC2B88AB43;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>
struct Dictionary_2_t8A4E573D0DD505D003411AB9AF139DF09F555CC9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tBCE46965BA82647884F5C06639EED57EC4894B7C* ____entries_1;
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
	KeyCollection_tE40120A59B27B81B0B3BECD0560B903BE4D490F2* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE7D4AD6A834D7141A6F99F0C88D74723517A276E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7D363C4258705E5C759DC3C7A84AD08784EEBE95* ____entries_1;
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
	KeyCollection_tAF09DE3ACAF1ABD7544A92CFC2787E520703246E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tBA7D94F600201BDFFC90880B77DA2D76ED7EBB59* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6* ____entries_1;
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
	KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
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

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunction>
struct List_1_tFA881B9537459575C967B1E246BEBC2C89C04C6B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SqliteFunctionU5BU5D_t4564C20F1EB9BA6808CCD9834FE2D82F87F3ABEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFA881B9537459575C967B1E246BEBC2C89C04C6B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SqliteFunctionU5BU5D_t4564C20F1EB9BA6808CCD9834FE2D82F87F3ABEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunctionAttribute>
struct List_1_t17CD056DA36330C0324182AEE6A7248BDEF69733  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SqliteFunctionAttributeU5BU5D_t411CBB984B2B50B50E53FB8D41B1DA78821FBE2D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t17CD056DA36330C0324182AEE6A7248BDEF69733_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SqliteFunctionAttributeU5BU5D_t411CBB984B2B50B50E53FB8D41B1DA78821FBE2D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>
struct List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SqliteParameterU5BU5D_t9217B066A90F0B292D7927FFC2E64EEC2B88AB43* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SqliteParameterU5BU5D_t9217B066A90F0B292D7927FFC2E64EEC2B88AB43* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteStatement>
struct List_1_t7D17A1BF1130ACFFA0E9137E8A4A09FD5DCA26C3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SqliteStatementU5BU5D_t170497202F6B046FFA0AA263FEB78F3AFA9DB2BB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7D17A1BF1130ACFFA0E9137E8A4A09FD5DCA26C3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SqliteStatementU5BU5D_t170497202F6B046FFA0AA263FEB78F3AFA9DB2BB* ___s_emptyArray_5;
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

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>
struct List_1_tF30A6998C02D085CCD3F4E659A4ED22C2A03173B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF30A6998C02D085CCD3F4E659A4ED22C2A03173B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2  : public RuntimeObject
{
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;
	// System.Reflection.AssemblyContentType System.Reflection.AssemblyName::contentType
	int32_t ___contentType_15;
};
// Native definition for P/Invoke marshalling of System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshaled_pinvoke
{
	char* ___name_0;
	char* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};
// Native definition for COM marshalling of System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.DBNull
struct DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC  : public RuntimeObject
{
};

struct DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_StaticFields
{
	// System.DBNull System.DBNull::Value
	DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC* ___Value_0;
};

// System.Data.DataRow
struct DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388  : public RuntimeObject
{
	// System.Data.DataTable System.Data.DataRow::_table
	DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* ____table_0;
	// System.Data.DataColumnCollection System.Data.DataRow::_columns
	DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* ____columns_1;
	// System.Int32 System.Data.DataRow::_oldRecord
	int32_t ____oldRecord_2;
	// System.Int32 System.Data.DataRow::_newRecord
	int32_t ____newRecord_3;
	// System.Int32 System.Data.DataRow::_tempRecord
	int32_t ____tempRecord_4;
	// System.Int64 System.Data.DataRow::_rowID
	int64_t ____rowID_5;
	// System.Data.DataRowAction System.Data.DataRow::_action
	int32_t ____action_6;
	// System.Boolean System.Data.DataRow::_inChangingEvent
	bool ____inChangingEvent_7;
	// System.Boolean System.Data.DataRow::_inDeletingEvent
	bool ____inDeletingEvent_8;
	// System.Boolean System.Data.DataRow::_inCascade
	bool ____inCascade_9;
	// System.Data.DataColumn System.Data.DataRow::_lastChangedColumn
	DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ____lastChangedColumn_10;
	// System.Int32 System.Data.DataRow::_countColumnChange
	int32_t ____countColumnChange_11;
	// System.Data.DataError System.Data.DataRow::_error
	DataError_tEE3A28C2A673D369980814389991CD62F45E56A1* ____error_12;
	// System.Int32 System.Data.DataRow::_rbTreeNodeId
	int32_t ____rbTreeNodeId_13;
	// System.Int32 System.Data.DataRow::_objectID
	int32_t ____objectID_15;
};

struct DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388_StaticFields
{
	// System.Int32 System.Data.DataRow::s_objectTypeCount
	int32_t ___s_objectTypeCount_14;
};

// System.Data.Common.DbEnumerator
struct DbEnumerator_tD4CBC5D7C73AFE4F4A92D653239CD007D6919DB8  : public RuntimeObject
{
	// System.Data.IDataReader System.Data.Common.DbEnumerator::_reader
	RuntimeObject* ____reader_0;
	// System.Data.Common.DbDataRecord System.Data.Common.DbEnumerator::_current
	DbDataRecord_t25F58980CADB52F28394B12491BCE02A280FDB29* ____current_1;
	// System.Data.Common.SchemaInfo[] System.Data.Common.DbEnumerator::_schemaInfo
	SchemaInfoU5BU5D_t34DF586B5AEB4D293BA7BB44D2289172A52AEF8D* ____schemaInfo_2;
	// System.ComponentModel.PropertyDescriptorCollection System.Data.Common.DbEnumerator::_descriptors
	PropertyDescriptorCollection_tC4C2FA51126BD032E2E9A0472995F7FCAC6E70DE* ____descriptors_3;
	// System.Data.ProviderBase.FieldNameLookup System.Data.Common.DbEnumerator::_fieldNameLookup
	FieldNameLookup_t55538EBEFA726F538EFE7132F0C4F93992275046* ____fieldNameLookup_4;
	// System.Boolean System.Data.Common.DbEnumerator::_closeReader
	bool ____closeReader_5;
};

// System.Data.Common.DbProviderFactory
struct DbProviderFactory_tB7F32D5FFD3005A63FDC65948C2F9794F02DA80C  : public RuntimeObject
{
};

// System.Transactions.Enlistment
struct Enlistment_tDF858DEFBA405B6DF5EF4DC746A92C59DE007552  : public RuntimeObject
{
	// System.Boolean System.Transactions.Enlistment::done
	bool ___done_0;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.ComponentModel.EventHandlerList
struct EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8  : public RuntimeObject
{
	// System.ComponentModel.EventHandlerList/ListEntry System.ComponentModel.EventHandlerList::_head
	ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* ____head_0;
	// System.ComponentModel.Component System.ComponentModel.EventHandlerList::_parent
	Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* ____parent_1;
};

// System.Data.InternalDataCollectionBase
struct InternalDataCollectionBase_tDBDE593FD7AB64DA7E3C512E49C0E0B396D3DDB2  : public RuntimeObject
{
};

struct InternalDataCollectionBase_tDBDE593FD7AB64DA7E3C512E49C0E0B396D3DDB2_StaticFields
{
	// System.ComponentModel.CollectionChangeEventArgs System.Data.InternalDataCollectionBase::s_refreshEventArgs
	CollectionChangeEventArgs_t27A05C16B442D16E079F0932D315156EFD82AB1D* ___s_refreshEventArgs_0;
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

// System.ComponentModel.MarshalByValueComponent
struct MarshalByValueComponent_t19E5966D1CE2F9ED341EB16C060BA573F63AEDAA  : public RuntimeObject
{
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::_site
	RuntimeObject* ____site_1;
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::_events
	EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* ____events_2;
};

struct MarshalByValueComponent_t19E5966D1CE2F9ED341EB16C060BA573F63AEDAA_StaticFields
{
	// System.Object System.ComponentModel.MarshalByValueComponent::s_eventDisposed
	RuntimeObject* ___s_eventDisposed_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Resources.ResourceManager
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB  : public RuntimeObject
{
	// System.String System.Resources.ResourceManager::BaseNameField
	String_t* ___BaseNameField_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceSets
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___ResourceSets_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> System.Resources.ResourceManager::_resourceSets
	Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53* ____resourceSets_2;
	// System.String System.Resources.ResourceManager::moduleDir
	String_t* ___moduleDir_3;
	// System.Reflection.Assembly System.Resources.ResourceManager::MainAssembly
	Assembly_t* ___MainAssembly_4;
	// System.Type System.Resources.ResourceManager::_locationInfo
	Type_t* ____locationInfo_5;
	// System.Type System.Resources.ResourceManager::_userResourceSet
	Type_t* ____userResourceSet_6;
	// System.Globalization.CultureInfo System.Resources.ResourceManager::_neutralResourcesCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____neutralResourcesCulture_7;
	// System.Resources.ResourceManager/CultureNameResourceSetPair System.Resources.ResourceManager::_lastUsedResourceCache
	CultureNameResourceSetPair_t06C5772C09CA853E70E42C0E8BC57FE0AA2CB674* ____lastUsedResourceCache_8;
	// System.Boolean System.Resources.ResourceManager::_ignoreCase
	bool ____ignoreCase_9;
	// System.Boolean System.Resources.ResourceManager::UseManifest
	bool ___UseManifest_10;
	// System.Boolean System.Resources.ResourceManager::UseSatelliteAssem
	bool ___UseSatelliteAssem_11;
	// System.Resources.UltimateResourceFallbackLocation System.Resources.ResourceManager::_fallbackLoc
	int32_t ____fallbackLoc_12;
	// System.Version System.Resources.ResourceManager::_satelliteContractVersion
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ____satelliteContractVersion_13;
	// System.Boolean System.Resources.ResourceManager::_lookedForSatelliteContractVersion
	bool ____lookedForSatelliteContractVersion_14;
	// System.Reflection.Assembly System.Resources.ResourceManager::_callingAssembly
	Assembly_t* ____callingAssembly_15;
	// System.Reflection.RuntimeAssembly System.Resources.ResourceManager::m_callingAssembly
	RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF* ___m_callingAssembly_16;
	// System.Resources.IResourceGroveler System.Resources.ResourceManager::resourceGroveler
	RuntimeObject* ___resourceGroveler_17;
};

struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_StaticFields
{
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_18;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_19;
	// System.Type System.Resources.ResourceManager::_minResourceSet
	Type_t* ____minResourceSet_20;
	// System.String System.Resources.ResourceManager::ResReaderTypeName
	String_t* ___ResReaderTypeName_21;
	// System.String System.Resources.ResourceManager::ResSetTypeName
	String_t* ___ResSetTypeName_22;
	// System.String System.Resources.ResourceManager::MscorlibName
	String_t* ___MscorlibName_23;
	// System.Int32 System.Resources.ResourceManager::DEBUG
	int32_t ___DEBUG_24;
};

// Mono.Data.Sqlite.SQLiteEnlistment
struct SQLiteEnlistment_tD69C41BBAEDD2F8ED9EDD2F9B8690BC4BB4BDAF5  : public RuntimeObject
{
	// Mono.Data.Sqlite.SqliteTransaction Mono.Data.Sqlite.SQLiteEnlistment::_transaction
	SqliteTransaction_t5CFD0E46CAF0C4FB991C2AD83395F245F6648542* ____transaction_0;
	// System.Transactions.Transaction Mono.Data.Sqlite.SQLiteEnlistment::_scope
	Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* ____scope_1;
	// System.Boolean Mono.Data.Sqlite.SQLiteEnlistment::_disposeConnection
	bool ____disposeConnection_2;
};

// Mono.Data.Sqlite.SQLiteType
struct SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A  : public RuntimeObject
{
	// System.Data.DbType Mono.Data.Sqlite.SQLiteType::Type
	int32_t ___Type_0;
	// Mono.Data.Sqlite.TypeAffinity Mono.Data.Sqlite.SQLiteType::Affinity
	int32_t ___Affinity_1;
};

// Mono.Data.Sqlite.SR
struct SR_tBC19444887A0E555C45E9083E0825A25D537681B  : public RuntimeObject
{
};

struct SR_tBC19444887A0E555C45E9083E0825A25D537681B_StaticFields
{
	// System.Resources.ResourceManager Mono.Data.Sqlite.SR::resourceMan
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* ___resourceMan_0;
	// System.Globalization.CultureInfo Mono.Data.Sqlite.SR::resourceCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___resourceCulture_1;
};

// System.Data.Common.SchemaTableColumn
struct SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6  : public RuntimeObject
{
};

struct SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields
{
	// System.String System.Data.Common.SchemaTableColumn::ColumnName
	String_t* ___ColumnName_0;
	// System.String System.Data.Common.SchemaTableColumn::ColumnOrdinal
	String_t* ___ColumnOrdinal_1;
	// System.String System.Data.Common.SchemaTableColumn::ColumnSize
	String_t* ___ColumnSize_2;
	// System.String System.Data.Common.SchemaTableColumn::NumericPrecision
	String_t* ___NumericPrecision_3;
	// System.String System.Data.Common.SchemaTableColumn::NumericScale
	String_t* ___NumericScale_4;
	// System.String System.Data.Common.SchemaTableColumn::DataType
	String_t* ___DataType_5;
	// System.String System.Data.Common.SchemaTableColumn::ProviderType
	String_t* ___ProviderType_6;
	// System.String System.Data.Common.SchemaTableColumn::NonVersionedProviderType
	String_t* ___NonVersionedProviderType_7;
	// System.String System.Data.Common.SchemaTableColumn::IsLong
	String_t* ___IsLong_8;
	// System.String System.Data.Common.SchemaTableColumn::AllowDBNull
	String_t* ___AllowDBNull_9;
	// System.String System.Data.Common.SchemaTableColumn::IsAliased
	String_t* ___IsAliased_10;
	// System.String System.Data.Common.SchemaTableColumn::IsExpression
	String_t* ___IsExpression_11;
	// System.String System.Data.Common.SchemaTableColumn::IsKey
	String_t* ___IsKey_12;
	// System.String System.Data.Common.SchemaTableColumn::IsUnique
	String_t* ___IsUnique_13;
	// System.String System.Data.Common.SchemaTableColumn::BaseSchemaName
	String_t* ___BaseSchemaName_14;
	// System.String System.Data.Common.SchemaTableColumn::BaseTableName
	String_t* ___BaseTableName_15;
	// System.String System.Data.Common.SchemaTableColumn::BaseColumnName
	String_t* ___BaseColumnName_16;
};

// System.Data.Common.SchemaTableOptionalColumn
struct SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9  : public RuntimeObject
{
};

struct SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields
{
	// System.String System.Data.Common.SchemaTableOptionalColumn::ProviderSpecificDataType
	String_t* ___ProviderSpecificDataType_0;
	// System.String System.Data.Common.SchemaTableOptionalColumn::IsAutoIncrement
	String_t* ___IsAutoIncrement_1;
	// System.String System.Data.Common.SchemaTableOptionalColumn::IsHidden
	String_t* ___IsHidden_2;
	// System.String System.Data.Common.SchemaTableOptionalColumn::IsReadOnly
	String_t* ___IsReadOnly_3;
	// System.String System.Data.Common.SchemaTableOptionalColumn::IsRowVersion
	String_t* ___IsRowVersion_4;
	// System.String System.Data.Common.SchemaTableOptionalColumn::BaseServerName
	String_t* ___BaseServerName_5;
	// System.String System.Data.Common.SchemaTableOptionalColumn::BaseCatalogName
	String_t* ___BaseCatalogName_6;
	// System.String System.Data.Common.SchemaTableOptionalColumn::AutoIncrementSeed
	String_t* ___AutoIncrementSeed_7;
	// System.String System.Data.Common.SchemaTableOptionalColumn::AutoIncrementStep
	String_t* ___AutoIncrementStep_8;
	// System.String System.Data.Common.SchemaTableOptionalColumn::DefaultValue
	String_t* ___DefaultValue_9;
	// System.String System.Data.Common.SchemaTableOptionalColumn::Expression
	String_t* ___Expression_10;
	// System.String System.Data.Common.SchemaTableOptionalColumn::BaseTableNamespace
	String_t* ___BaseTableNamespace_11;
	// System.String System.Data.Common.SchemaTableOptionalColumn::BaseColumnNamespace
	String_t* ___BaseColumnNamespace_12;
	// System.String System.Data.Common.SchemaTableOptionalColumn::ColumnMapping
	String_t* ___ColumnMapping_13;
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
};

// Mono.Data.Sqlite.SqliteConvert
struct SqliteConvert_t981F31162C63D0C2F780C2FC99738D60779F4D2A  : public RuntimeObject
{
	// Mono.Data.Sqlite.SQLiteDateFormats Mono.Data.Sqlite.SqliteConvert::_datetimeFormat
	int32_t ____datetimeFormat_2;
};

struct SqliteConvert_t981F31162C63D0C2F780C2FC99738D60779F4D2A_StaticFields
{
	// System.String[] Mono.Data.Sqlite.SqliteConvert::_datetimeFormats
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____datetimeFormats_0;
	// System.Text.Encoding Mono.Data.Sqlite.SqliteConvert::_utf8
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____utf8_1;
	// System.Type[] Mono.Data.Sqlite.SqliteConvert::_affinitytotype
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ____affinitytotype_3;
	// System.Data.DbType[] Mono.Data.Sqlite.SqliteConvert::_typetodbtype
	DbTypeU5BU5D_t8F694A3F9BA00D6478561BAD979C495A448B8A4C* ____typetodbtype_4;
	// System.Int32[] Mono.Data.Sqlite.SqliteConvert::_dbtypetocolumnsize
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____dbtypetocolumnsize_5;
	// System.Object[] Mono.Data.Sqlite.SqliteConvert::_dbtypetonumericprecision
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____dbtypetonumericprecision_6;
	// System.Object[] Mono.Data.Sqlite.SqliteConvert::_dbtypetonumericscale
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____dbtypetonumericscale_7;
	// Mono.Data.Sqlite.SQLiteTypeNames[] Mono.Data.Sqlite.SqliteConvert::_dbtypeNames
	SQLiteTypeNamesU5BU5D_tA4A78A94B161A639509F57C537A3C425AEC4037D* ____dbtypeNames_8;
	// System.Type[] Mono.Data.Sqlite.SqliteConvert::_dbtypeToType
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ____dbtypeToType_9;
	// Mono.Data.Sqlite.TypeAffinity[] Mono.Data.Sqlite.SqliteConvert::_typecodeAffinities
	TypeAffinityU5BU5D_t36719C4EE30347BE494A633A1A43DB7696B4F28F* ____typecodeAffinities_10;
	// Mono.Data.Sqlite.SQLiteTypeNames[] Mono.Data.Sqlite.SqliteConvert::_typeNames
	SQLiteTypeNamesU5BU5D_tA4A78A94B161A639509F57C537A3C425AEC4037D* ____typeNames_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Data.Sqlite.SqliteConvert::<>f__switch$map0
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___U3CU3Ef__switchU24map0_12;
};

// Mono.Data.Sqlite.SqliteKeyReader
struct SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF  : public RuntimeObject
{
	// Mono.Data.Sqlite.SqliteKeyReader/KeyInfo[] Mono.Data.Sqlite.SqliteKeyReader::_keyInfo
	KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* ____keyInfo_0;
	// Mono.Data.Sqlite.SqliteStatement Mono.Data.Sqlite.SqliteKeyReader::_stmt
	SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* ____stmt_1;
	// System.Boolean Mono.Data.Sqlite.SqliteKeyReader::_isValid
	bool ____isValid_2;
};

// Mono.Data.Sqlite.SqliteStatement
struct SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7  : public RuntimeObject
{
	// Mono.Data.Sqlite.SQLiteBase Mono.Data.Sqlite.SqliteStatement::_sql
	SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* ____sql_0;
	// System.String Mono.Data.Sqlite.SqliteStatement::_sqlStatement
	String_t* ____sqlStatement_1;
	// Mono.Data.Sqlite.SqliteStatementHandle Mono.Data.Sqlite.SqliteStatement::_sqlite_stmt
	SqliteStatementHandle_tEDCE828C60B1B7EC9EC59D63D045EF924E6B7788* ____sqlite_stmt_2;
	// System.Int32 Mono.Data.Sqlite.SqliteStatement::_unnamedParameters
	int32_t ____unnamedParameters_3;
	// System.String[] Mono.Data.Sqlite.SqliteStatement::_paramNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____paramNames_4;
	// Mono.Data.Sqlite.SqliteParameter[] Mono.Data.Sqlite.SqliteStatement::_paramValues
	SqliteParameterU5BU5D_t9217B066A90F0B292D7927FFC2E64EEC2B88AB43* ____paramValues_5;
	// Mono.Data.Sqlite.SqliteCommand Mono.Data.Sqlite.SqliteStatement::_command
	SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* ____command_6;
	// System.String[] Mono.Data.Sqlite.SqliteStatement::_types
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____types_7;
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

// System.Transactions.Transaction
struct Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD  : public RuntimeObject
{
	// System.Transactions.IsolationLevel System.Transactions.Transaction::level
	int32_t ___level_1;
	// System.Transactions.TransactionInformation System.Transactions.Transaction::info
	TransactionInformation_tFB7D26BBE9CEB8F44CAC3930B739922628AD17EA* ___info_2;
	// System.Collections.ArrayList System.Transactions.Transaction::dependents
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___dependents_3;
	// System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification> System.Transactions.Transaction::volatiles
	List_1_t9F4F8EB487AD8634210B33C2FD40A9DB5604EDB3* ___volatiles_4;
	// System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification> System.Transactions.Transaction::durables
	List_1_t151A1BC1807DD3664F9A0AD5F5D74FF992C57A4C* ___durables_5;
	// System.Transactions.IPromotableSinglePhaseNotification System.Transactions.Transaction::pspe
	RuntimeObject* ___pspe_6;
	// System.Boolean System.Transactions.Transaction::aborted
	bool ___aborted_7;
	// System.Transactions.TransactionScope System.Transactions.Transaction::scope
	TransactionScope_tB6032DAC900A60B7BC491532717C3707414B9BC4* ___scope_8;
	// System.Exception System.Transactions.Transaction::innerException
	Exception_t* ___innerException_9;
	// System.Transactions.TransactionCompletedEventHandler System.Transactions.Transaction::TransactionCompletedInternal
	TransactionCompletedEventHandler_tE63F4C59FFEDF5500FAD819D585CBCAE192CE3DB* ___TransactionCompletedInternal_10;
};

struct Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD_ThreadStaticFields
{
	// System.Transactions.Transaction System.Transactions.Transaction::ambient
	Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* ___ambient_0;
};

// Mono.Data.Sqlite.UnsafeNativeMethods
struct UnsafeNativeMethods_tD600EFE628D01622CEA0EFA884CF3B01161A2212  : public RuntimeObject
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

// Mono.Data.Sqlite.SqliteFunction/AggregateData
struct AggregateData_t866FCF0E4839C9651D352CC8D81C4F554C695E58  : public RuntimeObject
{
	// System.Int32 Mono.Data.Sqlite.SqliteFunction/AggregateData::_count
	int32_t ____count_0;
	// System.Object Mono.Data.Sqlite.SqliteFunction/AggregateData::_data
	RuntimeObject* ____data_1;
};

// Mono.Data.Sqlite.SqliteKeyReader/KeyQuery
struct KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591  : public RuntimeObject
{
	// Mono.Data.Sqlite.SqliteCommand Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::_command
	SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* ____command_0;
	// Mono.Data.Sqlite.SqliteDataReader Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::_reader
	SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* ____reader_1;
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

// System.Collections.Generic.List`1/Enumerator<Mono.Data.Sqlite.SqliteFunctionAttribute>
struct Enumerator_tA4F276F1A8ADAFDD4CE50E4AA214CEA043CC440E 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t17CD056DA36330C0324182AEE6A7248BDEF69733* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	SqliteFunctionAttribute_t2923E6115FF388A4F4FAC0BA872F63BEC5D2AC65* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Mono.Data.Sqlite.SqliteParameter>
struct Enumerator_t595F2F779C256BFDC5AC4905175B8D9D912650E8 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
struct KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int64_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>
struct KeyValuePair_2_tC25BAD211870F3D056A947DAA0B2EF789C5B09FE 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int64_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	AggregateData_t866FCF0E4839C9651D352CC8D81C4F554C695E58* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>
struct KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value_1;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// Mono.Data.Sqlite.CommitEventArgs
struct CommitEventArgs_tEE8C0ADBE8065ED4483973EF696742D42C372837  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
};

// System.ComponentModel.Component
struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* ___events_3;
};

struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_StaticFields
{
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject* ___EventDisposed_1;
};

// System.Data.DataColumn
struct DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66  : public MarshalByValueComponent_t19E5966D1CE2F9ED341EB16C060BA573F63AEDAA
{
	// System.Boolean System.Data.DataColumn::_allowNull
	bool ____allowNull_3;
	// System.String System.Data.DataColumn::_caption
	String_t* ____caption_4;
	// System.String System.Data.DataColumn::_columnName
	String_t* ____columnName_5;
	// System.Type System.Data.DataColumn::_dataType
	Type_t* ____dataType_6;
	// System.Data.Common.StorageType System.Data.DataColumn::_storageType
	int32_t ____storageType_7;
	// System.Object System.Data.DataColumn::_defaultValue
	RuntimeObject* ____defaultValue_8;
	// System.Data.DataSetDateTime System.Data.DataColumn::_dateTimeMode
	int32_t ____dateTimeMode_9;
	// System.Data.DataExpression System.Data.DataColumn::_expression
	DataExpression_t8B426B55556F5C9CD0AADB61EA0AE306F9AD72C6* ____expression_10;
	// System.Int32 System.Data.DataColumn::_maxLength
	int32_t ____maxLength_11;
	// System.Int32 System.Data.DataColumn::_ordinal
	int32_t ____ordinal_12;
	// System.Boolean System.Data.DataColumn::_readOnly
	bool ____readOnly_13;
	// System.Data.Index System.Data.DataColumn::_sortIndex
	Index_tB35755A4A90336B5A005AD1320AAF1219DEE2483* ____sortIndex_14;
	// System.Data.DataTable System.Data.DataColumn::_table
	DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* ____table_15;
	// System.Boolean System.Data.DataColumn::_unique
	bool ____unique_16;
	// System.Data.MappingType System.Data.DataColumn::_columnMapping
	int32_t ____columnMapping_17;
	// System.Int32 System.Data.DataColumn::_hashCode
	int32_t ____hashCode_18;
	// System.Int32 System.Data.DataColumn::_errors
	int32_t ____errors_19;
	// System.Boolean System.Data.DataColumn::_isSqlType
	bool ____isSqlType_20;
	// System.Boolean System.Data.DataColumn::_implementsINullable
	bool ____implementsINullable_21;
	// System.Boolean System.Data.DataColumn::_implementsIChangeTracking
	bool ____implementsIChangeTracking_22;
	// System.Boolean System.Data.DataColumn::_implementsIRevertibleChangeTracking
	bool ____implementsIRevertibleChangeTracking_23;
	// System.Boolean System.Data.DataColumn::_implementsIXMLSerializable
	bool ____implementsIXMLSerializable_24;
	// System.Boolean System.Data.DataColumn::_defaultValueIsNull
	bool ____defaultValueIsNull_25;
	// System.Collections.Generic.List`1<System.Data.DataColumn> System.Data.DataColumn::_dependentColumns
	List_1_t3F99226F0C691927C5B70A8B7FD8B4ACA817A785* ____dependentColumns_26;
	// System.Data.PropertyCollection System.Data.DataColumn::_extendedProperties
	PropertyCollection_t531D3CA9714C3D7818C1B1C139A9C4F04B73EE7C* ____extendedProperties_27;
	// System.Data.Common.DataStorage System.Data.DataColumn::_storage
	DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A* ____storage_28;
	// System.Data.AutoIncrementValue System.Data.DataColumn::_autoInc
	AutoIncrementValue_tB454D864DCB48A3C8EB2F806BD0AB284BB735BCE* ____autoInc_29;
	// System.String System.Data.DataColumn::_columnUri
	String_t* ____columnUri_30;
	// System.String System.Data.DataColumn::_columnPrefix
	String_t* ____columnPrefix_31;
	// System.String System.Data.DataColumn::_encodedColumnName
	String_t* ____encodedColumnName_32;
	// System.Data.SimpleType System.Data.DataColumn::_simpleType
	SimpleType_tE6F54AF1D35994BBDB2AEB808DB8C87AB7477D14* ____simpleType_33;
	// System.Int32 System.Data.DataColumn::_objectID
	int32_t ____objectID_35;
	// System.String System.Data.DataColumn::<XmlDataType>k__BackingField
	String_t* ___U3CXmlDataTypeU3Ek__BackingField_36;
	// System.ComponentModel.PropertyChangedEventHandler System.Data.DataColumn::PropertyChanging
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___PropertyChanging_37;
};

struct DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66_StaticFields
{
	// System.Int32 System.Data.DataColumn::s_objectTypeCount
	int32_t ___s_objectTypeCount_34;
};

// System.Data.DataColumnCollection
struct DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E  : public InternalDataCollectionBase_tDBDE593FD7AB64DA7E3C512E49C0E0B396D3DDB2
{
	// System.Data.DataTable System.Data.DataColumnCollection::_table
	DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* ____table_1;
	// System.Collections.ArrayList System.Data.DataColumnCollection::_list
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____list_2;
	// System.Int32 System.Data.DataColumnCollection::_defaultNameIndex
	int32_t ____defaultNameIndex_3;
	// System.Data.DataColumn[] System.Data.DataColumnCollection::_delayedAddRangeColumns
	DataColumnU5BU5D_t4600ECA5C95E7699298FCD6D677AEAD7D9F5F0CA* ____delayedAddRangeColumns_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Data.DataColumn> System.Data.DataColumnCollection::_columnFromName
	Dictionary_2_tA1C46A4AE8BF6F61CE13FCB4610037808EA8AB66* ____columnFromName_5;
	// System.Boolean System.Data.DataColumnCollection::_fInClear
	bool ____fInClear_6;
	// System.Data.DataColumn[] System.Data.DataColumnCollection::_columnsImplementingIChangeTracking
	DataColumnU5BU5D_t4600ECA5C95E7699298FCD6D677AEAD7D9F5F0CA* ____columnsImplementingIChangeTracking_7;
	// System.Int32 System.Data.DataColumnCollection::_nColumnsImplementingIChangeTracking
	int32_t ____nColumnsImplementingIChangeTracking_8;
	// System.Int32 System.Data.DataColumnCollection::_nColumnsImplementingIRevertibleChangeTracking
	int32_t ____nColumnsImplementingIRevertibleChangeTracking_9;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::CollectionChanged
	CollectionChangeEventHandler_tEC0AAABD75A4FDAEC5A3E8A0C754AC9A6F692F50* ___CollectionChanged_10;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::CollectionChanging
	CollectionChangeEventHandler_tEC0AAABD75A4FDAEC5A3E8A0C754AC9A6F692F50* ___CollectionChanging_11;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::ColumnPropertyChanged
	CollectionChangeEventHandler_tEC0AAABD75A4FDAEC5A3E8A0C754AC9A6F692F50* ___ColumnPropertyChanged_12;
};

// System.Data.DataRowCollection
struct DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738  : public InternalDataCollectionBase_tDBDE593FD7AB64DA7E3C512E49C0E0B396D3DDB2
{
	// System.Data.DataTable System.Data.DataRowCollection::_table
	DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* ____table_1;
	// System.Data.DataRowCollection/DataRowTree System.Data.DataRowCollection::_list
	DataRowTree_tE2B5C209F0D2D3B72A2F747AEFD4F76CBDB92AAF* ____list_2;
	// System.Int32 System.Data.DataRowCollection::_nullInList
	int32_t ____nullInList_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

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

// System.Data.Common.DbDataReader
struct DbDataReader_tA1A9729B3ED5125A693F4442984CCE7D721F452F  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

// System.Data.Common.DbParameter
struct DbParameter_tC4DFEE7A3DF97B1D878AAFFFB246188DBB9E0296  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

// System.Data.Common.DbParameterCollection
struct DbParameterCollection_tE362E252B1EA5E903A447738C9AA0AB473275391  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

// System.Data.Common.DbTransaction
struct DbTransaction_t2571A7BAE88D10335C418A2061AAA42AD4B32609  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
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

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Mono.Data.Sqlite.SQLiteBase
struct SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE  : public SqliteConvert_t981F31162C63D0C2F780C2FC99738D60779F4D2A
{
};

struct SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE_StaticFields
{
	// System.Object Mono.Data.Sqlite.SQLiteBase::_lock
	RuntimeObject* ____lock_13;
};

// Mono.Data.Sqlite.SQLiteTypeNames
struct SQLiteTypeNames_t25356E7BF10B784A648A8C22E9AFF08A4AA94CE2 
{
	// System.String Mono.Data.Sqlite.SQLiteTypeNames::typeName
	String_t* ___typeName_0;
	// System.Data.DbType Mono.Data.Sqlite.SQLiteTypeNames::dataType
	int32_t ___dataType_1;
};
// Native definition for P/Invoke marshalling of Mono.Data.Sqlite.SQLiteTypeNames
struct SQLiteTypeNames_t25356E7BF10B784A648A8C22E9AFF08A4AA94CE2_marshaled_pinvoke
{
	char* ___typeName_0;
	int32_t ___dataType_1;
};
// Native definition for COM marshalling of Mono.Data.Sqlite.SQLiteTypeNames
struct SQLiteTypeNames_t25356E7BF10B784A648A8C22E9AFF08A4AA94CE2_marshaled_com
{
	Il2CppChar* ___typeName_0;
	int32_t ___dataType_1;
};

// Mono.Data.Sqlite.SqliteFactory
struct SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E  : public DbProviderFactory_tB7F32D5FFD3005A63FDC65948C2F9794F02DA80C
{
};

struct SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_StaticFields
{
	// Mono.Data.Sqlite.SqliteFactory Mono.Data.Sqlite.SqliteFactory::Instance
	SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E* ___Instance_0;
	// System.Type Mono.Data.Sqlite.SqliteFactory::_dbProviderServicesType
	Type_t* ____dbProviderServicesType_1;
	// System.Object Mono.Data.Sqlite.SqliteFactory::_sqliteServices
	RuntimeObject* ____sqliteServices_2;
};

// Mono.Data.Sqlite.SqliteFunctionAttribute
struct SqliteFunctionAttribute_t2923E6115FF388A4F4FAC0BA872F63BEC5D2AC65  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Mono.Data.Sqlite.SqliteFunctionAttribute::_name
	String_t* ____name_0;
	// System.Int32 Mono.Data.Sqlite.SqliteFunctionAttribute::_arguments
	int32_t ____arguments_1;
	// Mono.Data.Sqlite.FunctionType Mono.Data.Sqlite.SqliteFunctionAttribute::_functionType
	int32_t ____functionType_2;
	// System.Type Mono.Data.Sqlite.SqliteFunctionAttribute::_instanceType
	Type_t* ____instanceType_3;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// Mono.Data.Sqlite.UpdateEventArgs
struct UpdateEventArgs_t42367B915C6324429DF547E0DE821BC2604C56FF  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
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

// <PrivateImplementationDetails>/$ArrayType$104
#pragma pack(push, tp, 1)
struct U24ArrayTypeU24104_t4B7AE02B5FC5BF87ED2DCB7260871E8FCADA133D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24104_t4B7AE02B5FC5BF87ED2DCB7260871E8FCADA133D__padding[104];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType$8
#pragma pack(push, tp, 1)
struct U24ArrayTypeU248_t99BA1CFAE0D65090C506AFB010ABCB8F9FC621A5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU248_t99BA1CFAE0D65090C506AFB010ABCB8F9FC621A5__padding[8];
	};
};
#pragma pack(pop, tp)

// Mono.Data.Sqlite.SqliteKeyReader/KeyInfo
struct KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D 
{
	// System.String Mono.Data.Sqlite.SqliteKeyReader/KeyInfo::databaseName
	String_t* ___databaseName_0;
	// System.String Mono.Data.Sqlite.SqliteKeyReader/KeyInfo::tableName
	String_t* ___tableName_1;
	// System.String Mono.Data.Sqlite.SqliteKeyReader/KeyInfo::columnName
	String_t* ___columnName_2;
	// System.Int32 Mono.Data.Sqlite.SqliteKeyReader/KeyInfo::database
	int32_t ___database_3;
	// System.Int32 Mono.Data.Sqlite.SqliteKeyReader/KeyInfo::rootPage
	int32_t ___rootPage_4;
	// System.Int32 Mono.Data.Sqlite.SqliteKeyReader/KeyInfo::cursor
	int32_t ___cursor_5;
	// Mono.Data.Sqlite.SqliteKeyReader/KeyQuery Mono.Data.Sqlite.SqliteKeyReader/KeyInfo::query
	KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* ___query_6;
	// System.Int32 Mono.Data.Sqlite.SqliteKeyReader/KeyInfo::column
	int32_t ___column_7;
};
// Native definition for P/Invoke marshalling of Mono.Data.Sqlite.SqliteKeyReader/KeyInfo
struct KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D_marshaled_pinvoke
{
	char* ___databaseName_0;
	char* ___tableName_1;
	char* ___columnName_2;
	int32_t ___database_3;
	int32_t ___rootPage_4;
	int32_t ___cursor_5;
	KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* ___query_6;
	int32_t ___column_7;
};
// Native definition for COM marshalling of Mono.Data.Sqlite.SqliteKeyReader/KeyInfo
struct KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D_marshaled_com
{
	Il2CppChar* ___databaseName_0;
	Il2CppChar* ___tableName_1;
	Il2CppChar* ___columnName_2;
	int32_t ___database_3;
	int32_t ___rootPage_4;
	int32_t ___cursor_5;
	KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* ___query_6;
	int32_t ___column_7;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>
struct Enumerator_t4C4D76999C59C2C8EE1ECB1779C9A5355F666161 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>
struct Enumerator_t5370E3B45A943BBD192EFCB1B0E45B8075188B0F 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t8A4E573D0DD505D003411AB9AF139DF09F555CC9* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tC25BAD211870F3D056A947DAA0B2EF789C5B09FE ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>
struct Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tF6D30A1CAA3B2D80CC8C00B5C5090E61532A0E2F  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tF6D30A1CAA3B2D80CC8C00B5C5090E61532A0E2F_StaticFields
{
	// <PrivateImplementationDetails>/$ArrayType$104 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU24104_t4B7AE02B5FC5BF87ED2DCB7260871E8FCADA133D ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-1
	U24ArrayTypeU248_t99BA1CFAE0D65090C506AFB010ABCB8F9FC621A5 ___U24U24fieldU2D1_1;
};

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject* ____evidence_5;
	// System.Object System.AppDomain::_granted
	RuntimeObject* ____granted_6;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_7;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42* ___AssemblyLoad_8;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___AssemblyResolve_9;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___DomainUnload_10;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ProcessExit_11;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ResourceResolve_12;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___TypeResolve_13;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___UnhandledException_14;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7* ___FirstChanceException_15;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject* ____domain_manager_16;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ReflectionOnlyAssemblyResolve_17;
	// System.Object System.AppDomain::_activation
	RuntimeObject* ____activation_18;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject* ____applicationIdentity_19;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_20;
};

struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_ThreadStaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___type_resolve_in_progress_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_refonly_4;
};
// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_5;
	Il2CppIUnknown* ____granted_6;
	int32_t ____principalPolicy_7;
	Il2CppMethodPointer ___AssemblyLoad_8;
	Il2CppMethodPointer ___AssemblyResolve_9;
	Il2CppMethodPointer ___DomainUnload_10;
	Il2CppMethodPointer ___ProcessExit_11;
	Il2CppMethodPointer ___ResourceResolve_12;
	Il2CppMethodPointer ___TypeResolve_13;
	Il2CppMethodPointer ___UnhandledException_14;
	Il2CppMethodPointer ___FirstChanceException_15;
	Il2CppIUnknown* ____domain_manager_16;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_17;
	Il2CppIUnknown* ____activation_18;
	Il2CppIUnknown* ____applicationIdentity_19;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_20;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_5;
	Il2CppIUnknown* ____granted_6;
	int32_t ____principalPolicy_7;
	Il2CppMethodPointer ___AssemblyLoad_8;
	Il2CppMethodPointer ___AssemblyResolve_9;
	Il2CppMethodPointer ___DomainUnload_10;
	Il2CppMethodPointer ___ProcessExit_11;
	Il2CppMethodPointer ___ResourceResolve_12;
	Il2CppMethodPointer ___TypeResolve_13;
	Il2CppMethodPointer ___UnhandledException_14;
	Il2CppMethodPointer ___FirstChanceException_15;
	Il2CppIUnknown* ____domain_manager_16;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_17;
	Il2CppIUnknown* ____activation_18;
	Il2CppIUnknown* ____applicationIdentity_19;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_20;
};

// System.Runtime.InteropServices.CriticalHandle
struct CriticalHandle_t9BAF9AE811FE6EADA3E61F3F04CBB238960CFA52  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.IntPtr System.Runtime.InteropServices.CriticalHandle::handle
	intptr_t ___handle_0;
	// System.Boolean System.Runtime.InteropServices.CriticalHandle::_isClosed
	bool ____isClosed_1;
};

// System.Data.Common.DataAdapter
struct DataAdapter_tD1630F152366AC3B819B612EFBB9B3BA9F76DA70  : public Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083
{
	// System.Data.MissingMappingAction System.Data.Common.DataAdapter::_missingMappingAction
	int32_t ____missingMappingAction_5;
};

struct DataAdapter_tD1630F152366AC3B819B612EFBB9B3BA9F76DA70_StaticFields
{
	// System.Object System.Data.Common.DataAdapter::s_eventFillError
	RuntimeObject* ___s_eventFillError_4;
};

// System.Data.DataTable
struct DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07  : public MarshalByValueComponent_t19E5966D1CE2F9ED341EB16C060BA573F63AEDAA
{
	// System.Data.DataSet System.Data.DataTable::_dataSet
	DataSet_t1F72E9737C995EBFDCF793C87CAC3196EA02411B* ____dataSet_3;
	// System.Data.DataView System.Data.DataTable::_defaultView
	DataView_t882C19B1455AFCE770D60A43A690096801824A50* ____defaultView_4;
	// System.Int64 System.Data.DataTable::_nextRowID
	int64_t ____nextRowID_5;
	// System.Data.DataRowCollection System.Data.DataTable::_rowCollection
	DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738* ____rowCollection_6;
	// System.Data.DataColumnCollection System.Data.DataTable::_columnCollection
	DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* ____columnCollection_7;
	// System.Data.ConstraintCollection System.Data.DataTable::_constraintCollection
	ConstraintCollection_tE6135623B0068FD56F0D15E13FFA1882D36BDD40* ____constraintCollection_8;
	// System.Int32 System.Data.DataTable::_elementColumnCount
	int32_t ____elementColumnCount_9;
	// System.Data.DataRelationCollection System.Data.DataTable::_parentRelationsCollection
	DataRelationCollection_tA8655ADC9860DD89FDC0317E38C95CB740BC2956* ____parentRelationsCollection_10;
	// System.Data.DataRelationCollection System.Data.DataTable::_childRelationsCollection
	DataRelationCollection_tA8655ADC9860DD89FDC0317E38C95CB740BC2956* ____childRelationsCollection_11;
	// System.Data.RecordManager System.Data.DataTable::_recordManager
	RecordManager_t5525269209BE5391607F8C811470AC2EC5C8FA4A* ____recordManager_12;
	// System.Collections.Generic.List`1<System.Data.Index> System.Data.DataTable::_indexes
	List_1_tD455920B93EB13CDFF946088629D287A8D3CA973* ____indexes_13;
	// System.Collections.Generic.List`1<System.Data.Index> System.Data.DataTable::_shadowIndexes
	List_1_tD455920B93EB13CDFF946088629D287A8D3CA973* ____shadowIndexes_14;
	// System.Int32 System.Data.DataTable::_shadowCount
	int32_t ____shadowCount_15;
	// System.Data.PropertyCollection System.Data.DataTable::_extendedProperties
	PropertyCollection_t531D3CA9714C3D7818C1B1C139A9C4F04B73EE7C* ____extendedProperties_16;
	// System.String System.Data.DataTable::_tableName
	String_t* ____tableName_17;
	// System.String System.Data.DataTable::_tableNamespace
	String_t* ____tableNamespace_18;
	// System.String System.Data.DataTable::_tablePrefix
	String_t* ____tablePrefix_19;
	// System.Data.DataExpression System.Data.DataTable::_displayExpression
	DataExpression_t8B426B55556F5C9CD0AADB61EA0AE306F9AD72C6* ____displayExpression_20;
	// System.Boolean System.Data.DataTable::_fNestedInDataset
	bool ____fNestedInDataset_21;
	// System.Globalization.CultureInfo System.Data.DataTable::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_22;
	// System.Boolean System.Data.DataTable::_cultureUserSet
	bool ____cultureUserSet_23;
	// System.Globalization.CompareInfo System.Data.DataTable::_compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ____compareInfo_24;
	// System.Globalization.CompareOptions System.Data.DataTable::_compareFlags
	int32_t ____compareFlags_25;
	// System.IFormatProvider System.Data.DataTable::_formatProvider
	RuntimeObject* ____formatProvider_26;
	// System.StringComparer System.Data.DataTable::_hashCodeProvider
	StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* ____hashCodeProvider_27;
	// System.Boolean System.Data.DataTable::_caseSensitive
	bool ____caseSensitive_28;
	// System.Boolean System.Data.DataTable::_caseSensitiveUserSet
	bool ____caseSensitiveUserSet_29;
	// System.String System.Data.DataTable::_encodedTableName
	String_t* ____encodedTableName_30;
	// System.Data.DataColumn System.Data.DataTable::_xmlText
	DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ____xmlText_31;
	// System.Data.DataColumn System.Data.DataTable::_colUnique
	DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ____colUnique_32;
	// System.Decimal System.Data.DataTable::_minOccurs
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ____minOccurs_33;
	// System.Decimal System.Data.DataTable::_maxOccurs
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ____maxOccurs_34;
	// System.Boolean System.Data.DataTable::_repeatableElement
	bool ____repeatableElement_35;
	// System.Object System.Data.DataTable::_typeName
	RuntimeObject* ____typeName_36;
	// System.Data.UniqueConstraint System.Data.DataTable::_primaryKey
	UniqueConstraint_tE48A79D2F7DE0EA4A3F1BF5BB322C383E60465F6* ____primaryKey_37;
	// System.Data.IndexField[] System.Data.DataTable::_primaryIndex
	IndexFieldU5BU5D_t2E1FE07C5E6C8080FCF4908199FFDFEBA1EECA3E* ____primaryIndex_38;
	// System.Data.DataColumn[] System.Data.DataTable::_delayedSetPrimaryKey
	DataColumnU5BU5D_t4600ECA5C95E7699298FCD6D677AEAD7D9F5F0CA* ____delayedSetPrimaryKey_39;
	// System.Data.Index System.Data.DataTable::_loadIndex
	Index_tB35755A4A90336B5A005AD1320AAF1219DEE2483* ____loadIndex_40;
	// System.Data.Index System.Data.DataTable::_loadIndexwithOriginalAdded
	Index_tB35755A4A90336B5A005AD1320AAF1219DEE2483* ____loadIndexwithOriginalAdded_41;
	// System.Data.Index System.Data.DataTable::_loadIndexwithCurrentDeleted
	Index_tB35755A4A90336B5A005AD1320AAF1219DEE2483* ____loadIndexwithCurrentDeleted_42;
	// System.Int32 System.Data.DataTable::_suspendIndexEvents
	int32_t ____suspendIndexEvents_43;
	// System.Boolean System.Data.DataTable::_savedEnforceConstraints
	bool ____savedEnforceConstraints_44;
	// System.Boolean System.Data.DataTable::_inDataLoad
	bool ____inDataLoad_45;
	// System.Boolean System.Data.DataTable::_initialLoad
	bool ____initialLoad_46;
	// System.Boolean System.Data.DataTable::_schemaLoading
	bool ____schemaLoading_47;
	// System.Boolean System.Data.DataTable::_enforceConstraints
	bool ____enforceConstraints_48;
	// System.Boolean System.Data.DataTable::_suspendEnforceConstraints
	bool ____suspendEnforceConstraints_49;
	// System.Boolean System.Data.DataTable::fInitInProgress
	bool ___fInitInProgress_50;
	// System.Boolean System.Data.DataTable::_inLoad
	bool ____inLoad_51;
	// System.Boolean System.Data.DataTable::_fInLoadDiffgram
	bool ____fInLoadDiffgram_52;
	// System.Byte System.Data.DataTable::_isTypedDataTable
	uint8_t ____isTypedDataTable_53;
	// System.Data.DataRow[] System.Data.DataTable::_emptyDataRowArray
	DataRowU5BU5D_t2A0D4483B27757FE7345A2E7FE5727C7F77DE5D4* ____emptyDataRowArray_54;
	// System.ComponentModel.PropertyDescriptorCollection System.Data.DataTable::_propertyDescriptorCollectionCache
	PropertyDescriptorCollection_tC4C2FA51126BD032E2E9A0472995F7FCAC6E70DE* ____propertyDescriptorCollectionCache_55;
	// System.Data.DataRelation[] System.Data.DataTable::_nestedParentRelations
	DataRelationU5BU5D_t1640C9372BDC91DAE0359E08BE1E91AE48924FF0* ____nestedParentRelations_56;
	// System.Collections.Generic.List`1<System.Data.DataColumn> System.Data.DataTable::_dependentColumns
	List_1_t3F99226F0C691927C5B70A8B7FD8B4ACA817A785* ____dependentColumns_57;
	// System.Boolean System.Data.DataTable::_mergingData
	bool ____mergingData_58;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::_onRowChangedDelegate
	DataRowChangeEventHandler_t2F295C9D2283CBF4D109CBDFCD141EF2A58B24BF* ____onRowChangedDelegate_59;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::_onRowChangingDelegate
	DataRowChangeEventHandler_t2F295C9D2283CBF4D109CBDFCD141EF2A58B24BF* ____onRowChangingDelegate_60;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::_onRowDeletingDelegate
	DataRowChangeEventHandler_t2F295C9D2283CBF4D109CBDFCD141EF2A58B24BF* ____onRowDeletingDelegate_61;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::_onRowDeletedDelegate
	DataRowChangeEventHandler_t2F295C9D2283CBF4D109CBDFCD141EF2A58B24BF* ____onRowDeletedDelegate_62;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::_onColumnChangedDelegate
	DataColumnChangeEventHandler_t666070D5D5C9A6CF6E9FA12E6FC15B7DB20C8959* ____onColumnChangedDelegate_63;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::_onColumnChangingDelegate
	DataColumnChangeEventHandler_t666070D5D5C9A6CF6E9FA12E6FC15B7DB20C8959* ____onColumnChangingDelegate_64;
	// System.Data.DataTableClearEventHandler System.Data.DataTable::_onTableClearingDelegate
	DataTableClearEventHandler_tE15A0F0DEDDCCACFBD4F9F19F462C1FE90746B1B* ____onTableClearingDelegate_65;
	// System.Data.DataTableClearEventHandler System.Data.DataTable::_onTableClearedDelegate
	DataTableClearEventHandler_tE15A0F0DEDDCCACFBD4F9F19F462C1FE90746B1B* ____onTableClearedDelegate_66;
	// System.Data.DataTableNewRowEventHandler System.Data.DataTable::_onTableNewRowDelegate
	DataTableNewRowEventHandler_t874CE0332A55E1F8A8CF67458AF71CE73975D827* ____onTableNewRowDelegate_67;
	// System.ComponentModel.PropertyChangedEventHandler System.Data.DataTable::_onPropertyChangingDelegate
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ____onPropertyChangingDelegate_68;
	// System.Data.DataRowBuilder System.Data.DataTable::_rowBuilder
	DataRowBuilder_t8EFCEBE1AE55392AAE53DA15D2B334C56BB14566* ____rowBuilder_69;
	// System.Collections.Generic.List`1<System.Data.DataView> System.Data.DataTable::_delayedViews
	List_1_t1CDDD861715A83BE1EF98CE75870A483BB5ECC93* ____delayedViews_70;
	// System.Collections.Generic.List`1<System.Data.DataViewListener> System.Data.DataTable::_dataViewListeners
	List_1_t73C786BB01E05FA7B2ACAA21DA57002B4503C95F* ____dataViewListeners_71;
	// System.Collections.Hashtable System.Data.DataTable::_rowDiffId
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____rowDiffId_72;
	// System.Threading.ReaderWriterLockSlim System.Data.DataTable::_indexesLock
	ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906* ____indexesLock_73;
	// System.Int32 System.Data.DataTable::_ukColumnPositionForInference
	int32_t ____ukColumnPositionForInference_74;
	// System.Data.SerializationFormat System.Data.DataTable::_remotingFormat
	int32_t ____remotingFormat_75;
	// System.Int32 System.Data.DataTable::_objectID
	int32_t ____objectID_77;
};

struct DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07_StaticFields
{
	// System.Int32 System.Data.DataTable::s_objectTypeCount
	int32_t ___s_objectTypeCount_76;
};

// System.Data.Common.DbCommand
struct DbCommand_tEEC6C32CDC10CB77D2AFFE4565AACDC0C82F516F  : public Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083
{
};

// System.Data.Common.DbCommandBuilder
struct DbCommandBuilder_tB2241F4E492F60AAB8E40DEB7EDF1AD89D1C4341  : public Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083
{
	// System.Data.Common.DbDataAdapter System.Data.Common.DbCommandBuilder::_dataAdapter
	DbDataAdapter_tD415D7FBB91AFC7FA1A7E3AEC576203DE550A19B* ____dataAdapter_4;
	// System.Data.Common.DbCommand System.Data.Common.DbCommandBuilder::_insertCommand
	DbCommand_tEEC6C32CDC10CB77D2AFFE4565AACDC0C82F516F* ____insertCommand_5;
	// System.Data.Common.DbCommand System.Data.Common.DbCommandBuilder::_updateCommand
	DbCommand_tEEC6C32CDC10CB77D2AFFE4565AACDC0C82F516F* ____updateCommand_6;
	// System.Data.Common.DbCommand System.Data.Common.DbCommandBuilder::_deleteCommand
	DbCommand_tEEC6C32CDC10CB77D2AFFE4565AACDC0C82F516F* ____deleteCommand_7;
	// System.Data.MissingMappingAction System.Data.Common.DbCommandBuilder::_missingMappingAction
	int32_t ____missingMappingAction_8;
	// System.Data.ConflictOption System.Data.Common.DbCommandBuilder::_conflictDetection
	int32_t ____conflictDetection_9;
	// System.Boolean System.Data.Common.DbCommandBuilder::_setAllValues
	bool ____setAllValues_10;
	// System.Boolean System.Data.Common.DbCommandBuilder::_hasPartialPrimaryKey
	bool ____hasPartialPrimaryKey_11;
	// System.Data.DataTable System.Data.Common.DbCommandBuilder::_dbSchemaTable
	DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* ____dbSchemaTable_12;
	// System.Data.Common.DbSchemaRow[] System.Data.Common.DbCommandBuilder::_dbSchemaRows
	DbSchemaRowU5BU5D_tAE022046DE269AFA725E6094193CFD7FF7609B5E* ____dbSchemaRows_13;
	// System.String[] System.Data.Common.DbCommandBuilder::_sourceColumnNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____sourceColumnNames_14;
	// System.Data.Common.DbCommandBuilder/ParameterNames System.Data.Common.DbCommandBuilder::_parameterNames
	ParameterNames_tE3980726E30C2D359F0F54B1DC8EF47DE9E6441A* ____parameterNames_15;
	// System.String System.Data.Common.DbCommandBuilder::_quotedBaseTableName
	String_t* ____quotedBaseTableName_16;
	// System.Data.Common.CatalogLocation System.Data.Common.DbCommandBuilder::_catalogLocation
	int32_t ____catalogLocation_17;
	// System.String System.Data.Common.DbCommandBuilder::_catalogSeparator
	String_t* ____catalogSeparator_18;
	// System.String System.Data.Common.DbCommandBuilder::_schemaSeparator
	String_t* ____schemaSeparator_19;
	// System.String System.Data.Common.DbCommandBuilder::_quotePrefix
	String_t* ____quotePrefix_20;
	// System.String System.Data.Common.DbCommandBuilder::_quoteSuffix
	String_t* ____quoteSuffix_21;
	// System.String System.Data.Common.DbCommandBuilder::_parameterNamePattern
	String_t* ____parameterNamePattern_22;
	// System.String System.Data.Common.DbCommandBuilder::_parameterMarkerFormat
	String_t* ____parameterMarkerFormat_23;
	// System.Int32 System.Data.Common.DbCommandBuilder::_parameterNameMaxLength
	int32_t ____parameterNameMaxLength_24;
};

// System.Data.Common.DbConnection
struct DbConnection_tC49F5E2144AE2E053E71F1AE2EF1022916AE4662  : public Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083
{
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

// Mono.Data.Sqlite.SqliteDataReader
struct SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835  : public DbDataReader_tA1A9729B3ED5125A693F4442984CCE7D721F452F
{
	// Mono.Data.Sqlite.SqliteCommand Mono.Data.Sqlite.SqliteDataReader::_command
	SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* ____command_1;
	// System.Int32 Mono.Data.Sqlite.SqliteDataReader::_activeStatementIndex
	int32_t ____activeStatementIndex_2;
	// Mono.Data.Sqlite.SqliteStatement Mono.Data.Sqlite.SqliteDataReader::_activeStatement
	SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* ____activeStatement_3;
	// System.Int32 Mono.Data.Sqlite.SqliteDataReader::_readingState
	int32_t ____readingState_4;
	// System.Int32 Mono.Data.Sqlite.SqliteDataReader::_rowsAffected
	int32_t ____rowsAffected_5;
	// System.Int32 Mono.Data.Sqlite.SqliteDataReader::_fieldCount
	int32_t ____fieldCount_6;
	// Mono.Data.Sqlite.SQLiteType[] Mono.Data.Sqlite.SqliteDataReader::_fieldTypeArray
	SQLiteTypeU5BU5D_t9577E5DC506B1996F06A2CFA7094F5F7BD8A4EE2* ____fieldTypeArray_7;
	// System.Data.CommandBehavior Mono.Data.Sqlite.SqliteDataReader::_commandBehavior
	int32_t ____commandBehavior_8;
	// System.Boolean Mono.Data.Sqlite.SqliteDataReader::_disposeCommand
	bool ____disposeCommand_9;
	// Mono.Data.Sqlite.SqliteKeyReader Mono.Data.Sqlite.SqliteDataReader::_keyInfo
	SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* ____keyInfo_10;
	// System.Int64 Mono.Data.Sqlite.SqliteDataReader::_version
	int64_t ____version_11;
};

// Mono.Data.Sqlite.SqliteFunction
struct SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9  : public RuntimeObject
{
	// Mono.Data.Sqlite.SQLiteBase Mono.Data.Sqlite.SqliteFunction::_base
	SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* ____base_0;
	// System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData> Mono.Data.Sqlite.SqliteFunction::_contextDataList
	Dictionary_2_t8A4E573D0DD505D003411AB9AF139DF09F555CC9* ____contextDataList_1;
	// Mono.Data.Sqlite.SQLiteCallback Mono.Data.Sqlite.SqliteFunction::_InvokeFunc
	SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94* ____InvokeFunc_2;
	// Mono.Data.Sqlite.SQLiteCallback Mono.Data.Sqlite.SqliteFunction::_StepFunc
	SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94* ____StepFunc_3;
	// Mono.Data.Sqlite.SQLiteFinalCallback Mono.Data.Sqlite.SqliteFunction::_FinalFunc
	SQLiteFinalCallback_t6F84B373BB829BAABB6B9E2FEAF24723743008CD* ____FinalFunc_4;
	// Mono.Data.Sqlite.SQLiteCollation Mono.Data.Sqlite.SqliteFunction::_CompareFunc
	SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20* ____CompareFunc_5;
	// Mono.Data.Sqlite.SQLiteCollation Mono.Data.Sqlite.SqliteFunction::_CompareFunc16
	SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20* ____CompareFunc16_6;
	// System.IntPtr Mono.Data.Sqlite.SqliteFunction::_context
	intptr_t ____context_7;
};

struct SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9_StaticFields
{
	// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunctionAttribute> Mono.Data.Sqlite.SqliteFunction::_registeredFunctions
	List_1_t17CD056DA36330C0324182AEE6A7248BDEF69733* ____registeredFunctions_8;
};

// Mono.Data.Sqlite.SqliteParameter
struct SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00  : public DbParameter_tC4DFEE7A3DF97B1D878AAFFFB246188DBB9E0296
{
	// System.Int32 Mono.Data.Sqlite.SqliteParameter::_dbType
	int32_t ____dbType_1;
	// System.Data.DataRowVersion Mono.Data.Sqlite.SqliteParameter::_rowVersion
	int32_t ____rowVersion_2;
	// System.Object Mono.Data.Sqlite.SqliteParameter::_objValue
	RuntimeObject* ____objValue_3;
	// System.String Mono.Data.Sqlite.SqliteParameter::_sourceColumn
	String_t* ____sourceColumn_4;
	// System.String Mono.Data.Sqlite.SqliteParameter::_parameterName
	String_t* ____parameterName_5;
	// System.Int32 Mono.Data.Sqlite.SqliteParameter::_dataSize
	int32_t ____dataSize_6;
	// System.Boolean Mono.Data.Sqlite.SqliteParameter::_nullable
	bool ____nullable_7;
	// System.Boolean Mono.Data.Sqlite.SqliteParameter::_nullMapping
	bool ____nullMapping_8;
};

// Mono.Data.Sqlite.SqliteParameterCollection
struct SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334  : public DbParameterCollection_tE362E252B1EA5E903A447738C9AA0AB473275391
{
	// Mono.Data.Sqlite.SqliteCommand Mono.Data.Sqlite.SqliteParameterCollection::_command
	SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* ____command_1;
	// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter> Mono.Data.Sqlite.SqliteParameterCollection::_parameterList
	List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* ____parameterList_2;
	// System.Boolean Mono.Data.Sqlite.SqliteParameterCollection::_unboundFlag
	bool ____unboundFlag_3;
};

// Mono.Data.Sqlite.SqliteTransaction
struct SqliteTransaction_t5CFD0E46CAF0C4FB991C2AD83395F245F6648542  : public DbTransaction_t2571A7BAE88D10335C418A2061AAA42AD4B32609
{
	// Mono.Data.Sqlite.SqliteConnection Mono.Data.Sqlite.SqliteTransaction::_cnn
	SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* ____cnn_1;
	// System.Int64 Mono.Data.Sqlite.SqliteTransaction::_version
	int64_t ____version_2;
	// System.Data.IsolationLevel Mono.Data.Sqlite.SqliteTransaction::_level
	int32_t ____level_3;
};

// System.Data.Common.DbDataAdapter
struct DbDataAdapter_tD415D7FBB91AFC7FA1A7E3AEC576203DE550A19B  : public DataAdapter_tD1630F152366AC3B819B612EFBB9B3BA9F76DA70
{
};

struct DbDataAdapter_tD415D7FBB91AFC7FA1A7E3AEC576203DE550A19B_StaticFields
{
	// System.Object System.Data.Common.DbDataAdapter::s_parameterValueNonNullValue
	RuntimeObject* ___s_parameterValueNonNullValue_6;
	// System.Object System.Data.Common.DbDataAdapter::s_parameterValueNullValue
	RuntimeObject* ___s_parameterValueNullValue_7;
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

// Mono.Data.Sqlite.SqliteCommand
struct SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25  : public DbCommand_tEEC6C32CDC10CB77D2AFFE4565AACDC0C82F516F
{
	// System.String Mono.Data.Sqlite.SqliteCommand::_commandText
	String_t* ____commandText_4;
	// Mono.Data.Sqlite.SqliteConnection Mono.Data.Sqlite.SqliteCommand::_cnn
	SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* ____cnn_5;
	// System.Int64 Mono.Data.Sqlite.SqliteCommand::_version
	int64_t ____version_6;
	// System.WeakReference Mono.Data.Sqlite.SqliteCommand::_activeReader
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ____activeReader_7;
	// System.Int32 Mono.Data.Sqlite.SqliteCommand::_commandTimeout
	int32_t ____commandTimeout_8;
	// System.Boolean Mono.Data.Sqlite.SqliteCommand::_designTimeVisible
	bool ____designTimeVisible_9;
	// System.Data.UpdateRowSource Mono.Data.Sqlite.SqliteCommand::_updateRowSource
	int32_t ____updateRowSource_10;
	// Mono.Data.Sqlite.SqliteParameterCollection Mono.Data.Sqlite.SqliteCommand::_parameterCollection
	SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* ____parameterCollection_11;
	// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteStatement> Mono.Data.Sqlite.SqliteCommand::_statementList
	List_1_t7D17A1BF1130ACFFA0E9137E8A4A09FD5DCA26C3* ____statementList_12;
	// System.String Mono.Data.Sqlite.SqliteCommand::_remainingText
	String_t* ____remainingText_13;
	// Mono.Data.Sqlite.SqliteTransaction Mono.Data.Sqlite.SqliteCommand::_transaction
	SqliteTransaction_t5CFD0E46CAF0C4FB991C2AD83395F245F6648542* ____transaction_14;
};

// Mono.Data.Sqlite.SqliteCommandBuilder
struct SqliteCommandBuilder_t25108064A445081C8B3015A1BF9D6445DC22D247  : public DbCommandBuilder_tB2241F4E492F60AAB8E40DEB7EDF1AD89D1C4341
{
};

// Mono.Data.Sqlite.SqliteConnection
struct SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64  : public DbConnection_tC49F5E2144AE2E053E71F1AE2EF1022916AE4662
{
	// System.Data.ConnectionState Mono.Data.Sqlite.SqliteConnection::_connectionState
	int32_t ____connectionState_4;
	// System.String Mono.Data.Sqlite.SqliteConnection::_connectionString
	String_t* ____connectionString_5;
	// System.Int32 Mono.Data.Sqlite.SqliteConnection::_transactionLevel
	int32_t ____transactionLevel_6;
	// System.Data.IsolationLevel Mono.Data.Sqlite.SqliteConnection::_defaultIsolation
	int32_t ____defaultIsolation_7;
	// Mono.Data.Sqlite.SQLiteEnlistment Mono.Data.Sqlite.SqliteConnection::_enlistment
	SQLiteEnlistment_tD69C41BBAEDD2F8ED9EDD2F9B8690BC4BB4BDAF5* ____enlistment_8;
	// Mono.Data.Sqlite.SQLiteBase Mono.Data.Sqlite.SqliteConnection::_sql
	SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* ____sql_9;
	// System.String Mono.Data.Sqlite.SqliteConnection::_dataSource
	String_t* ____dataSource_10;
	// System.Byte[] Mono.Data.Sqlite.SqliteConnection::_password
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____password_11;
	// System.Int32 Mono.Data.Sqlite.SqliteConnection::_defaultTimeout
	int32_t ____defaultTimeout_12;
	// System.Boolean Mono.Data.Sqlite.SqliteConnection::_binaryGuid
	bool ____binaryGuid_13;
	// System.Int64 Mono.Data.Sqlite.SqliteConnection::_version
	int64_t ____version_14;
	// Mono.Data.Sqlite.SQLiteUpdateCallback Mono.Data.Sqlite.SqliteConnection::_updateCallback
	SQLiteUpdateCallback_t70BBEEEA989EF27B8FB86F7194729ABDCC2BDFB2* ____updateCallback_15;
	// Mono.Data.Sqlite.SQLiteCommitCallback Mono.Data.Sqlite.SqliteConnection::_commitCallback
	SQLiteCommitCallback_tC40586DD8AA664D8BC2E2B5C34F3406DBC953FFD* ____commitCallback_16;
	// Mono.Data.Sqlite.SQLiteRollbackCallback Mono.Data.Sqlite.SqliteConnection::_rollbackCallback
	SQLiteRollbackCallback_t98CA336F8643C59817C9BAF0805D000A3136045F* ____rollbackCallback_17;
	// Mono.Data.Sqlite.SQLiteUpdateEventHandler Mono.Data.Sqlite.SqliteConnection::_updateHandler
	SQLiteUpdateEventHandler_t8B66CFE2899681DA8EE4EA7D3166A7D0E3C7F750* ____updateHandler_18;
	// Mono.Data.Sqlite.SQLiteCommitHandler Mono.Data.Sqlite.SqliteConnection::_commitHandler
	SQLiteCommitHandler_t19C02860BAD4E8E4FC7FD15BBDFC290D5E56EFF2* ____commitHandler_19;
	// System.EventHandler Mono.Data.Sqlite.SqliteConnection::_rollbackHandler
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ____rollbackHandler_20;
	// System.Data.StateChangeEventHandler Mono.Data.Sqlite.SqliteConnection::StateChange
	StateChangeEventHandler_t0C16938B27C80342B5A7D6645F3DA8F5E4AA71E1* ___StateChange_21;
};

struct SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Data.Sqlite.SqliteConnection::<>f__switch$map1
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___U3CU3Ef__switchU24map1_22;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Data.Sqlite.SqliteConnection::<>f__switch$map2
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___U3CU3Ef__switchU24map2_23;
};

// Mono.Data.Sqlite.SqliteConnectionHandle
struct SqliteConnectionHandle_tFA3E42C00B09B2E743EFB7FFC30AFA1F20F9EB9B  : public CriticalHandle_t9BAF9AE811FE6EADA3E61F3F04CBB238960CFA52
{
};

// Mono.Data.Sqlite.SqliteFunctionEx
struct SqliteFunctionEx_t66A15B512D7A425A21434142226E632CE150D10F  : public SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9
{
};

// Mono.Data.Sqlite.SqliteStatementHandle
struct SqliteStatementHandle_tEDCE828C60B1B7EC9EC59D63D045EF924E6B7788  : public CriticalHandle_t9BAF9AE811FE6EADA3E61F3F04CBB238960CFA52
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

// System.EventHandler`1<System.Data.Common.RowUpdatingEventArgs>
struct EventHandler_1_t17051E007455090ECF8C9D97E16866DDBAF479EA  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.Runtime.InteropServices.ExternalException
struct ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Reflection.ReflectionTypeLoadException
struct ReflectionTypeLoadException_tA59A0D2E1F05C20E7C493630343FBC9B7308C475  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.Type[] System.Reflection.ReflectionTypeLoadException::<Types>k__BackingField
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___U3CTypesU3Ek__BackingField_18;
	// System.Exception[] System.Reflection.ReflectionTypeLoadException::<LoaderExceptions>k__BackingField
	ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C* ___U3CLoaderExceptionsU3Ek__BackingField_19;
};

// Mono.Data.Sqlite.SQLiteCallback
struct SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94  : public MulticastDelegate_t
{
};

// Mono.Data.Sqlite.SQLiteCollation
struct SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20  : public MulticastDelegate_t
{
};

// Mono.Data.Sqlite.SQLiteCommitCallback
struct SQLiteCommitCallback_tC40586DD8AA664D8BC2E2B5C34F3406DBC953FFD  : public MulticastDelegate_t
{
};

// Mono.Data.Sqlite.SQLiteCommitHandler
struct SQLiteCommitHandler_t19C02860BAD4E8E4FC7FD15BBDFC290D5E56EFF2  : public MulticastDelegate_t
{
};

// Mono.Data.Sqlite.SQLiteFinalCallback
struct SQLiteFinalCallback_t6F84B373BB829BAABB6B9E2FEAF24723743008CD  : public MulticastDelegate_t
{
};

// Mono.Data.Sqlite.SQLiteRollbackCallback
struct SQLiteRollbackCallback_t98CA336F8643C59817C9BAF0805D000A3136045F  : public MulticastDelegate_t
{
};

// Mono.Data.Sqlite.SQLiteUpdateCallback
struct SQLiteUpdateCallback_t70BBEEEA989EF27B8FB86F7194729ABDCC2BDFB2  : public MulticastDelegate_t
{
};

// Mono.Data.Sqlite.SQLiteUpdateEventHandler
struct SQLiteUpdateEventHandler_t8B66CFE2899681DA8EE4EA7D3166A7D0E3C7F750  : public MulticastDelegate_t
{
};

// Mono.Data.Sqlite.SqliteDataAdapter
struct SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78  : public DbDataAdapter_tD415D7FBB91AFC7FA1A7E3AEC576203DE550A19B
{
};

struct SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78_StaticFields
{
	// System.Object Mono.Data.Sqlite.SqliteDataAdapter::_updatingEventPH
	RuntimeObject* ____updatingEventPH_8;
	// System.Object Mono.Data.Sqlite.SqliteDataAdapter::_updatedEventPH
	RuntimeObject* ____updatedEventPH_9;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.Data.Common.DbException
struct DbException_tA8086663706EEDB8867D92FB760DD9B8F57E86A0  : public ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C
{
};

// Mono.Data.Sqlite.SqliteException
struct SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2  : public DbException_tA8086663706EEDB8867D92FB760DD9B8F57E86A0
{
	// Mono.Data.Sqlite.SQLiteErrorCode Mono.Data.Sqlite.SqliteException::_errorCode
	int32_t ____errorCode_18;
};

struct SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2_StaticFields
{
	// System.String[] Mono.Data.Sqlite.SqliteException::_errorMessages
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____errorMessages_19;
};
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
// Mono.Data.Sqlite.SQLiteType[]
struct SQLiteTypeU5BU5D_t9577E5DC506B1996F06A2CFA7094F5F7BD8A4EE2  : public RuntimeArray
{
	ALIGN_FIELD (8) SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* m_Items[1];

	inline SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* value)
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
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
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
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339  : public RuntimeArray
{
	ALIGN_FIELD (8) Assembly_t* m_Items[1];

	inline Assembly_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Assembly_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Assembly_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Assembly_t* value)
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
// System.Reflection.AssemblyName[]
struct AssemblyNameU5BU5D_t1C2CB87B1AD967C0648E960165F31298EA326D5C  : public RuntimeArray
{
	ALIGN_FIELD (8) AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* m_Items[1];

	inline AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832  : public RuntimeArray
{
	ALIGN_FIELD (8) intptr_t m_Items[1];

	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
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
// Mono.Data.Sqlite.SqliteFunction[]
struct SqliteFunctionU5BU5D_t4564C20F1EB9BA6808CCD9834FE2D82F87F3ABEC  : public RuntimeArray
{
	ALIGN_FIELD (8) SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* m_Items[1];

	inline SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Mono.Data.Sqlite.SqliteKeyReader/KeyInfo[]
struct KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D m_Items[1];

	inline KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___databaseName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tableName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___columnName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___query_6), (void*)NULL);
		#endif
	}
	inline KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___databaseName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tableName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___columnName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___query_6), (void*)NULL);
		#endif
	}
};
// Mono.Data.Sqlite.SqliteParameter[]
struct SqliteParameterU5BU5D_t9217B066A90F0B292D7927FFC2E64EEC2B88AB43  : public RuntimeArray
{
	ALIGN_FIELD (8) SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* m_Items[1];

	inline SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m9A4D60A27A7CAA492BE4A9AC1EB250802FDDF5A4_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, int64_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m23FE82FCBEFBE7F889697ABC4836C193993BCE70_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, int64_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA1BB0DE4E26C51B6E67399D8D563FEDF5A333D36_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, int64_t ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mAC70CA6E8EADDCD67AB1C6BA2417CC7CE49EAF0D_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, int64_t ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m7A61F563F380F740D8288007493B16BB0329146D_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, int64_t ___key0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4C4D76999C59C2C8EE1ECB1779C9A5355F666161 Dictionary_2_GetEnumerator_mF4AA4E7332CB8313AD0FBD9EAB542A952816AD7F_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m881147E85D8BD7007980D4CF9EF837FB62B4FBD3_gshared (Enumerator_t4C4D76999C59C2C8EE1ECB1779C9A5355F666161* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m0D4940D3E4F9E42DC6EB3C1A43CB78241A4EBABF_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m1210D480F3EF1C250A53086148C1204B7A99B931_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m60653FC61EE022D449B504F5476F13192863010C_gshared (List_1_tF30A6998C02D085CCD3F4E659A4ED22C2A03173B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_mA019F7A495B48EF2A6E5D36977DB3EA09A47ECDB_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mDA4751F464411AB4C757C63C6EDBF4891BFD6891_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mA2C174FE89DD752197CA6AE0E89F2A2843411B05_gshared_inline (List_1_tF30A6998C02D085CCD3F4E659A4ED22C2A03173B* __this, KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>::CopyTo(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m0329A9F65500EF5CF9BBA303DB826C8AF16636C6_gshared (List_1_tF30A6998C02D085CCD3F4E659A4ED22C2A03173B* __this, KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* ___array0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___item1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SQLiteTypeNames::.ctor(System.String,System.Data.DbType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteTypeNames__ctor_mD72CED1DB9D7C5C65185D5A6C8FE762051A98FBD (SQLiteTypeNames_t25356E7BF10B784A648A8C22E9AFF08A4AA94CE2* __this, String_t* ___newtypeName0, int32_t ___newdataType1, const RuntimeMethod* method) ;
// System.ComponentModel.EventHandlerList System.ComponentModel.Component::get_Events()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* Component_get_Events_mF9B0F379B2F1AA6B5DD1F3CA449519CD74DA0992 (Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* __this, const RuntimeMethod* method) ;
// System.Delegate System.ComponentModel.EventHandlerList::get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* EventHandlerList_get_Item_m9AD24EA65E3832B81146EC24604BABE4FC3CFCC7 (EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Delegate Mono.Data.Sqlite.SqliteDataAdapter::FindBuilder(System.MulticastDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* SqliteDataAdapter_FindBuilder_mE631FE081F982D61B3393761D6965AD1ADBC6C3D (MulticastDelegate_t* ___mcd0, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.EventHandlerList::RemoveHandler(System.Object,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandlerList_RemoveHandler_m4268AB4FEBEAB018DE6B9F03E7273B71135CF3E2 (EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* __this, RuntimeObject* ___key0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.EventHandlerList::AddHandler(System.Object,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandlerList_AddHandler_mB1FF265C32A4D6DD6F2129B0418308C705C855F0 (EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* __this, RuntimeObject* ___key0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* MulticastDelegate_GetInvocationList_mA712C84A0405C0B90802F03C1658CE3FBF787CA4 (MulticastDelegate_t* __this, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DbDataReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbDataReader__ctor_mB5D597EF61634121B91F137FBE64C283F0434D35 (DbDataReader_tA1A9729B3ED5125A693F4442984CCE7D721F452F* __this, const RuntimeMethod* method) ;
// System.Boolean Mono.Data.Sqlite.SqliteDataReader::NextResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteDataReader_NextResult_m01DB47FE1B604A2F98FA25F601F3632490D661E6 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteKeyReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteKeyReader_Dispose_m51076DAD24F708AE7728F075DA4F040C9B1DA1DF (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.Component::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_Dispose_m7D0C063EA18E1FFA59CB369232131150372DC7B2 (Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* __this, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteConnection::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteConnection_Close_m0AC2EE490D4F63B8004CC1A7AE868E3C2FDAA0B0 (SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* __this, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteCommand::ClearDataReader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteCommand_ClearDataReader_mB9C86DEE91BE0BD60133250CF98873FDA95C8CC1 (SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteException__ctor_mBF16E34A07E29BCBC8E75B28E620A92571560E8D (SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2* __this, int32_t ___errorCode0, String_t* ___extendedInformation1, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DbEnumerator::.ctor(System.Data.IDataReader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbEnumerator__ctor_m3B01C3CB528D9A450CF91C1ADA7E151C1236C041 (DbEnumerator_tD4CBC5D7C73AFE4F4A92D653239CD007D6919DB8* __this, RuntimeObject* ___reader0, bool ___closeReader1, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteDataReader::CheckClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteDataReader_CheckClosed_m7D7D9DFBB00848D65FB18C563730F999322ACFB4 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, const RuntimeMethod* method) ;
// System.Int32 Mono.Data.Sqlite.SqliteKeyReader::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteKeyReader_get_Count_m8B54BE657D583C5FD27E338F5B5E20BD018CDAF3 (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteDataReader::CheckValidRow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteDataReader_CheckValidRow_m0E7986482CDFADC9F549DF61356FA44C3A9113A2 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, const RuntimeMethod* method) ;
// Mono.Data.Sqlite.SQLiteType Mono.Data.Sqlite.SqliteDataReader::GetSQLiteType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* SqliteDataReader_GetSQLiteType_mF30C2D2146437C63F6C241E49BFF92E2707D850D (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void System.InvalidCastException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_mCBC218CE25034242D2EB33B3E59933295CE93C56 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, const RuntimeMethod* method) ;
// System.Int32 Mono.Data.Sqlite.SqliteDataReader::get_VisibleFieldCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteDataReader_get_VisibleFieldCount_mCFD28B01F417A11A6B5A37C90BC60B28ACB82371 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, const RuntimeMethod* method) ;
// System.Boolean Mono.Data.Sqlite.SqliteKeyReader::GetBoolean(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteKeyReader_GetBoolean_m826904C49D5C00AFA2784DC3C455A049C8BF4936 (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, int32_t ___i0, const RuntimeMethod* method) ;
// Mono.Data.Sqlite.TypeAffinity Mono.Data.Sqlite.SqliteDataReader::VerifyType(System.Int32,System.Data.DbType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteDataReader_VerifyType_m0706F2D4C867B32BBCE6972D98D382C180FF395B (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, int32_t ___i0, int32_t ___typ1, const RuntimeMethod* method) ;
// System.Object Mono.Data.Sqlite.SqliteDataReader::GetValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqliteDataReader_GetValue_m597154EDAC65852F5FAC01B2670DB3D02EA73C63 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
// System.Boolean System.Convert::ToBoolean(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m0E8AE169ABC127B0A317EE6312A04BC1F8AB4C63 (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String Mono.Data.Sqlite.SqliteKeyReader::GetDataTypeName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqliteKeyReader_GetDataTypeName_m064478CAFEEAE88D5F8966DCA040BA0024171514 (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Type Mono.Data.Sqlite.SqliteConvert::SQLiteTypeToType(Mono.Data.Sqlite.SQLiteType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* SqliteConvert_SQLiteTypeToType_mF4F712E58010EB9B68233A23A3AEB39398AB14C5 (SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* ___t0, const RuntimeMethod* method) ;
// System.Type Mono.Data.Sqlite.SqliteKeyReader::GetFieldType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* SqliteKeyReader_GetFieldType_mA76D2B279C0CF5280F2A28C80DD434E96DAF850A (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Int32 Mono.Data.Sqlite.SqliteKeyReader::GetInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteKeyReader_GetInt32_m54F57976B00F5F7DE432530A7C4147396A867366 (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Int64 Mono.Data.Sqlite.SqliteKeyReader::GetInt64(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SqliteKeyReader_GetInt64_mEE6952C000B5C9B1FA90A62E55A0ED72C623515D (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.String Mono.Data.Sqlite.SqliteKeyReader::GetName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqliteKeyReader_GetName_mAFD73902068396341141F95CE7F9295707E594D9 (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Data.DataTable Mono.Data.Sqlite.SqliteDataReader::GetSchemaTable(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* SqliteDataReader_GetSchemaTable_mE2492BADB6AEC4ACEC678492C53723F36B53553C (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, bool ___wantUniqueInfo0, bool ___wantDefaultValue1, const RuntimeMethod* method) ;
// System.Void System.Data.DataTable::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataTable__ctor_m8F8624080B0FE8C40F9A7D2A6814673920C86BD3 (DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* __this, String_t* ___tableName0, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Void System.Data.DataTable::set_Locale(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataTable_set_Locale_m7AF00397576C7E63EE5E85F9108624290B2F460F (DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___value0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Data.DataColumn System.Data.DataColumnCollection::Add(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* DataColumnCollection_Add_m13FD034EA642599F062F3311626F07B3C14FCBEF (DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* __this, String_t* ___columnName0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Void System.Data.DataTable::BeginLoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataTable_BeginLoadData_mCCFE3F5AB9F5F7DEC77094BD477458830AE8F65D (DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* __this, const RuntimeMethod* method) ;
// System.Data.DataRow System.Data.DataTable::NewRow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* DataTable_NewRow_m57151CE8F173A66E33B098CB580B5F5DE591CD02 (DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* __this, const RuntimeMethod* method) ;
// System.String Mono.Data.Sqlite.SqliteDataReader::GetName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqliteDataReader_GetName_m6590F7EC7E3191A2E09B2C82D306333750095642 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void System.Data.DataRow::set_Item(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3 (DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* __this, String_t* ___columnName0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Int32 Mono.Data.Sqlite.SqliteConvert::DbTypeToColumnSize(System.Data.DbType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteConvert_DbTypeToColumnSize_m1B6EC860C4F98B3030B170515F04BC1427913280 (int32_t ___typ0, const RuntimeMethod* method) ;
// System.Object Mono.Data.Sqlite.SqliteConvert::DbTypeToNumericPrecision(System.Data.DbType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqliteConvert_DbTypeToNumericPrecision_m19163A4324DD3F7BE564679C6BFC07459EAEECE7 (int32_t ___typ0, const RuntimeMethod* method) ;
// System.Object Mono.Data.Sqlite.SqliteConvert::DbTypeToNumericScale(System.Data.DbType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqliteConvert_DbTypeToNumericScale_m3482414C02952F1D4D9B465852FE3D1186DAFCAE (int32_t ___typ0, const RuntimeMethod* method) ;
// System.Type Mono.Data.Sqlite.SqliteDataReader::GetFieldType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* SqliteDataReader_GetFieldType_mA7E7AB00F68AEC8495D19FC24BB64AD01B0C587E (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_mBD9ED6B35314B34F51A9985E350D33F6F56F85A9 (String_t* ___strA0, String_t* ___strB1, bool ___ignoreCase2, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture3, const RuntimeMethod* method) ;
// System.Object System.Data.DataRow::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647 (DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* __this, String_t* ___columnName0, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m0DED37AC1A3B9B431A9833BDBC4F5B37C2BC407A (String_t* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75 (RuntimeObject* ___provider0, String_t* ___format1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteCommand::.ctor(System.String,Mono.Data.Sqlite.SqliteConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteCommand__ctor_mCC42928C2D28349679B40E9BFFE845FC85A407AF (SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* __this, String_t* ___commandText0, SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* ___connection1, const RuntimeMethod* method) ;
// Mono.Data.Sqlite.SqliteDataReader Mono.Data.Sqlite.SqliteCommand::ExecuteReader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* SqliteCommand_ExecuteReader_m2A6B8B48CE439B09687348450D40506868EB28AB (SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Data.DataTable Mono.Data.Sqlite.SqliteConnection::GetSchema(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* SqliteConnection_GetSchema_m58D119A3F36EF01F6291F4D257A4A0EE133A6A3F (SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* __this, String_t* ___collectionName0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___restrictionValues1, const RuntimeMethod* method) ;
// System.Int32 System.Data.DataRowCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataRowCollection_get_Count_m1EC5C8B103735834509013DB3523A5E9A712A532 (DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738* __this, const RuntimeMethod* method) ;
// System.Void System.Data.DataRowCollection::Add(System.Data.DataRow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataRowCollection_Add_m2A36F7D52ED197BAF8002FECCA560B8AC6A28730 (DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738* __this, DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* ___row0, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteKeyReader::AppendSchemaTable(System.Data.DataTable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteKeyReader_AppendSchemaTable_m5837A0D4BE76E9A87A279FF8605A9F49B563C047 (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* ___tbl0, const RuntimeMethod* method) ;
// System.Void System.Data.DataTable::AcceptChanges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataTable_AcceptChanges_m6E3D96BB76C86F4F15B383F38DC2F98D534C524B (DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* __this, const RuntimeMethod* method) ;
// System.Void System.Data.DataTable::EndLoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataTable_EndLoadData_mEBF53C25014EF5169B128298E62627255D1351F9 (DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* __this, const RuntimeMethod* method) ;
// System.String Mono.Data.Sqlite.SqliteKeyReader::GetString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqliteKeyReader_GetString_m932CA1988B8E2E4CA5874238E9D7894D8B91A169 (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Object Mono.Data.Sqlite.SqliteKeyReader::GetValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqliteKeyReader_GetValue_m5F351FD993D26420B737F569A7AF90971768338C (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Int32 Mono.Data.Sqlite.SqliteDataReader::get_FieldCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteDataReader_get_FieldCount_mB4B0391E5C8BF2762973F77A55B512151EC46239 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, const RuntimeMethod* method) ;
// System.Boolean Mono.Data.Sqlite.SqliteKeyReader::IsDBNull(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteKeyReader_IsDBNull_mACA38F05662BBF09D24C04E98171A2A02F7B4051 (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, int32_t ___i0, const RuntimeMethod* method) ;
// Mono.Data.Sqlite.SqliteStatement Mono.Data.Sqlite.SqliteCommand::GetStatement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* SqliteCommand_GetStatement_mCC30E2C83A67AEAE7FE650D2AE9D4902C297829B (SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteDataReader::LoadKeyInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteDataReader_LoadKeyInfo_m43290426BEB37F77967805DAB660790F75BB736C (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SQLiteType::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteType__ctor_m870B050801321BDF503A0FFBC4A5C997CD489581 (SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* __this, const RuntimeMethod* method) ;
// System.Data.DbType Mono.Data.Sqlite.SqliteConvert::TypeNameToDbType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteConvert_TypeNameToDbType_mD9F9508A66C37C498CBC9A259CE7968A7E57D539 (String_t* ___Name0, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteKeyReader::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteKeyReader_Reset_m77133DC9BEB9F5A64B8B0403B34FD81226E1AB23 (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteKeyReader::.ctor(Mono.Data.Sqlite.SqliteConnection,Mono.Data.Sqlite.SqliteDataReader,Mono.Data.Sqlite.SqliteStatement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteKeyReader__ctor_mC1F70DE7D7E555DC237FE14D7D13E205341E543E (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* ___cnn0, SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* ___reader1, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* ___stmt2, const RuntimeMethod* method) ;
// Mono.Data.Sqlite.SqliteTransaction Mono.Data.Sqlite.SqliteConnection::BeginTransaction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqliteTransaction_t5CFD0E46CAF0C4FB991C2AD83395F245F6648542* SqliteConnection_BeginTransaction_mB9425D9F4D2F42985FA2086F616BB4C135CF8B27 (SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* __this, const RuntimeMethod* method) ;
// System.Transactions.Enlistment System.Transactions.Transaction::EnlistVolatile(System.Transactions.IEnlistmentNotification,System.Transactions.EnlistmentOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enlistment_tDF858DEFBA405B6DF5EF4DC746A92C59DE007552* Transaction_EnlistVolatile_m988B22FDB2386F15912916E43600B19BBADCFF4F (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* __this, RuntimeObject* ___enlistmentNotification0, int32_t ___enlistmentOptions1, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SQLiteEnlistment::Cleanup(Mono.Data.Sqlite.SqliteConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteEnlistment_Cleanup_mACC653D05951092843E0BC5B6682E4238D6F1D71 (SQLiteEnlistment_tD69C41BBAEDD2F8ED9EDD2F9B8690BC4BB4BDAF5* __this, SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* ___cnn0, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteTransaction::Rollback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteTransaction_Rollback_m1574B691808CCDC9C7CA953804DD1B782362E9FD (SqliteTransaction_t5CFD0E46CAF0C4FB991C2AD83395F245F6648542* __this, const RuntimeMethod* method) ;
// System.Void System.Transactions.Enlistment::Done()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enlistment_Done_mA9F7878F361CF3BFE6964A1166939ECE0B39471F (Enlistment_tDF858DEFBA405B6DF5EF4DC746A92C59DE007552* __this, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DbException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbException__ctor_m8790FD79BAB5D0EC6D009CA61C7898D0168169B4 (DbException_tA8086663706EEDB8867D92FB760DD9B8F57E86A0* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.String Mono.Data.Sqlite.SqliteException::GetStockErrorMessage(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqliteException_GetStockErrorMessage_m584AB18829A80EC5DFB75052E61F0CDDCD58442C (int32_t ___errorCode0, String_t* ___errorMessage1, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DbException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbException__ctor_mCB502BADAA1569265CC09F37C5F67D71C195E53C (DbException_tA8086663706EEDB8867D92FB760DD9B8F57E86A0* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DbException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbException__ctor_m4CF67EE7C017E7BD560E9A1ED5652BAA308FF147 (DbException_tA8086663706EEDB8867D92FB760DD9B8F57E86A0* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DbProviderFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbProviderFactory__ctor_mAE263141EFDA24C64DD22647444306439BC7F640 (DbProviderFactory_tB7F32D5FFD3005A63FDC65948C2F9794F02DA80C* __this, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteFactory__ctor_m41153EE18C424A022E204F1553E95EB3575004AF (SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E* __this, const RuntimeMethod* method) ;
// System.Object Mono.Data.Sqlite.SqliteFactory::GetSQLiteProviderServicesInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqliteFactory_GetSQLiteProviderServicesInstance_m2C2BD80DE6A335BF90E765C87A9AA134EFAB24BC (SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunctionAttribute>::.ctor()
inline void List_1__ctor_mEEE5A98E1B8A6846E3590BE97C9A59E6C7D25A3A (List_1_t17CD056DA36330C0324182AEE6A7248BDEF69733* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t17CD056DA36330C0324182AEE6A7248BDEF69733*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667 (const RuntimeMethod* method) ;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, const RuntimeMethod* method) ;
// System.Reflection.Assembly System.Reflection.Assembly::GetCallingAssembly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t* Assembly_GetCallingAssembly_mDA96275EB27A0792D97CF9E45FB7919F39A3F97E (const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunctionAttribute>::Add(T)
inline void List_1_Add_m86C887F7D86F0A2C7EC60362A55B6A2F3C075780_inline (List_1_t17CD056DA36330C0324182AEE6A7248BDEF69733* __this, SqliteFunctionAttribute_t2923E6115FF388A4F4FAC0BA872F63BEC5D2AC65* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t17CD056DA36330C0324182AEE6A7248BDEF69733*, SqliteFunctionAttribute_t2923E6115FF388A4F4FAC0BA872F63BEC5D2AC65*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.IntPtr[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mEA749F87AA97225B0E14A5F533E39D6B1B799E58 (intptr_t ___source0, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method) ;
// System.DateTime Mono.Data.Sqlite.SqliteConvert::ToDateTime(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D SqliteConvert_ToDateTime_mD6664F8C468F8479645ED521492150D08BD33A97 (SqliteConvert_t981F31162C63D0C2F780C2FC99738D60779F4D2A* __this, String_t* ___dateText0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String Mono.Data.Sqlite.SqliteConvert::ToString(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqliteConvert_ToString_mB4EB459EA53F564B0ACA431E6FF4312EECD0B946 (SqliteConvert_t981F31162C63D0C2F780C2FC99738D60779F4D2A* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dateValue0, const RuntimeMethod* method) ;
// Mono.Data.Sqlite.TypeAffinity Mono.Data.Sqlite.SqliteConvert::TypeToAffinity(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteConvert_TypeToAffinity_m241B92ABEEC17AAEB86E2130FCD3DBA49F0C27FB (Type_t* ___typ0, const RuntimeMethod* method) ;
// System.Int64 System.Convert::ToInt64(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m6CA00ABB70FAD8242C62ED9913F7D7C3B811FC31 (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_m8DED60F2E0251A3D389F1DD22AA5AF9CD440ABE8 (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Object[] Mono.Data.Sqlite.SqliteFunction::ConvertParams(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* SqliteFunction_ConvertParams_m4BE80FBE59DDE95B111F89F5A91693C076D58CED (SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* __this, int32_t ___nArgs0, intptr_t ___argsptr1, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteFunction::SetReturnValue(System.IntPtr,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteFunction_SetReturnValue_m923C5E6315F1FBF143F2CE8C78530802DFA6C2DF (SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* __this, intptr_t ___context0, RuntimeObject* ___returnValue1, const RuntimeMethod* method) ;
// System.String Mono.Data.Sqlite.SqliteConvert::UTF8ToString(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqliteConvert_UTF8ToString_mC14771E1395552BD10BE0443347D2400BEAE9A35 (intptr_t ___nativestring0, int32_t ___nativestringlen1, const RuntimeMethod* method) ;
// System.String Mono.Data.Sqlite.SQLite3_UTF16::UTF16ToString(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SQLite3_UTF16_UTF16ToString_m5B35EFBF590A0283AF7364467661F5897F3C3311 (intptr_t ___b0, int32_t ___nbytelen1, const RuntimeMethod* method) ;
// System.Int64 System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m89183DF299284AB71732DD3FEA89577973142D60 (Dictionary_2_t8A4E573D0DD505D003411AB9AF139DF09F555CC9* __this, int64_t ___key0, AggregateData_t866FCF0E4839C9651D352CC8D81C4F554C695E58** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8A4E573D0DD505D003411AB9AF139DF09F555CC9*, int64_t, AggregateData_t866FCF0E4839C9651D352CC8D81C4F554C695E58**, const RuntimeMethod*))Dictionary_2_TryGetValue_m9A4D60A27A7CAA492BE4A9AC1EB250802FDDF5A4_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Mono.Data.Sqlite.SqliteFunction/AggregateData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AggregateData__ctor_m41C280B0A658385B841734F8A0332576D5B03820 (AggregateData_t866FCF0E4839C9651D352CC8D81C4F554C695E58* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mC89293544B07CC160B4F2986722AEF120EA6A1A8 (Dictionary_2_t8A4E573D0DD505D003411AB9AF139DF09F555CC9* __this, int64_t ___key0, AggregateData_t866FCF0E4839C9651D352CC8D81C4F554C695E58* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8A4E573D0DD505D003411AB9AF139DF09F555CC9*, int64_t, AggregateData_t866FCF0E4839C9651D352CC8D81C4F554C695E58*, const RuntimeMethod*))Dictionary_2_set_Item_m23FE82FCBEFBE7F889697ABC4836C193993BCE70_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mA72C81BD9C5F06AA0449FB2782F4CFF1CAA7394B (Dictionary_2_t8A4E573D0DD505D003411AB9AF139DF09F555CC9* __this, int64_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8A4E573D0DD505D003411AB9AF139DF09F555CC9*, int64_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mA1BB0DE4E26C51B6E67399D8D563FEDF5A333D36_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>::get_Item(TKey)
inline AggregateData_t866FCF0E4839C9651D352CC8D81C4F554C695E58* Dictionary_2_get_Item_mC15F5EA41180EEBDD45410E77317587527985864 (Dictionary_2_t8A4E573D0DD505D003411AB9AF139DF09F555CC9* __this, int64_t ___key0, const RuntimeMethod* method)
{
	return ((  AggregateData_t866FCF0E4839C9651D352CC8D81C4F554C695E58* (*) (Dictionary_2_t8A4E573D0DD505D003411AB9AF139DF09F555CC9*, int64_t, const RuntimeMethod*))Dictionary_2_get_Item_mAC70CA6E8EADDCD67AB1C6BA2417CC7CE49EAF0D_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>::Remove(TKey)
inline bool Dictionary_2_Remove_mDC4D9DBC45BAC4BAF0317ABBF2377BB286BB2981 (Dictionary_2_t8A4E573D0DD505D003411AB9AF139DF09F555CC9* __this, int64_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8A4E573D0DD505D003411AB9AF139DF09F555CC9*, int64_t, const RuntimeMethod*))Dictionary_2_Remove_m7A61F563F380F740D8288007493B16BB0329146D_gshared)(__this, ___key0, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>::GetEnumerator()
inline Enumerator_t5370E3B45A943BBD192EFCB1B0E45B8075188B0F Dictionary_2_GetEnumerator_m233C00670B0FAC3A270A296E217A881A2243BC9A (Dictionary_2_t8A4E573D0DD505D003411AB9AF139DF09F555CC9* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5370E3B45A943BBD192EFCB1B0E45B8075188B0F (*) (Dictionary_2_t8A4E573D0DD505D003411AB9AF139DF09F555CC9*, const RuntimeMethod*))Dictionary_2_GetEnumerator_mF4AA4E7332CB8313AD0FBD9EAB542A952816AD7F_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>::MoveNext()
inline bool Enumerator_MoveNext_m45A23BDC11EDDDF1F3A7B567DB2A59D248F54F86 (Enumerator_t5370E3B45A943BBD192EFCB1B0E45B8075188B0F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5370E3B45A943BBD192EFCB1B0E45B8075188B0F*, const RuntimeMethod*))Enumerator_MoveNext_m881147E85D8BD7007980D4CF9EF837FB62B4FBD3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>::Clear()
inline void Dictionary_2_Clear_m3B0610A5E0A7404117178543C997384943E58ABD (Dictionary_2_t8A4E573D0DD505D003411AB9AF139DF09F555CC9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8A4E573D0DD505D003411AB9AF139DF09F555CC9*, const RuntimeMethod*))Dictionary_2_Clear_m0D4940D3E4F9E42DC6EB3C1A43CB78241A4EBABF_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunction>::.ctor()
inline void List_1__ctor_m8E25171C599E4D0A576581C53F0B2A9A586D9430 (List_1_tFA881B9537459575C967B1E246BEBC2C89C04C6B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFA881B9537459575C967B1E246BEBC2C89C04C6B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunctionAttribute>::GetEnumerator()
inline Enumerator_tA4F276F1A8ADAFDD4CE50E4AA214CEA043CC440E List_1_GetEnumerator_mFA16DDE53286F33E2F767ACC3AB0F6444084C0CF (List_1_t17CD056DA36330C0324182AEE6A7248BDEF69733* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA4F276F1A8ADAFDD4CE50E4AA214CEA043CC440E (*) (List_1_t17CD056DA36330C0324182AEE6A7248BDEF69733*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SQLiteCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteCallback__ctor_mC3E071A4BD2C90DD42FBFBEE3B184136C0C092BE (SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SQLiteFinalCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteFinalCallback__ctor_mEF4564763D7BAF6971C73A8411EB90DF4166C245 (SQLiteFinalCallback_t6F84B373BB829BAABB6B9E2FEAF24723743008CD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SQLiteCollation::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteCollation__ctor_mDFA84021A9EB2C5BE1C16ECF9E2D50CFF8D194DF (SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunction>::Add(T)
inline void List_1_Add_mF2DD882B9C7EF34093A5F953234E84854108523D_inline (List_1_tFA881B9537459575C967B1E246BEBC2C89C04C6B* __this, SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFA881B9537459575C967B1E246BEBC2C89C04C6B*, SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Mono.Data.Sqlite.SqliteFunctionAttribute>::MoveNext()
inline bool Enumerator_MoveNext_m787C448734F5EC6AE58CEBE8EA7778045B82FF1C (Enumerator_tA4F276F1A8ADAFDD4CE50E4AA214CEA043CC440E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA4F276F1A8ADAFDD4CE50E4AA214CEA043CC440E*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunction>::CopyTo(T[],System.Int32)
inline void List_1_CopyTo_m45944BA57667FCA9B5B56F9A2168D6D5E5306A0E (List_1_tFA881B9537459575C967B1E246BEBC2C89C04C6B* __this, SqliteFunctionU5BU5D_t4564C20F1EB9BA6808CCD9834FE2D82F87F3ABEC* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFA881B9537459575C967B1E246BEBC2C89C04C6B*, SqliteFunctionU5BU5D_t4564C20F1EB9BA6808CCD9834FE2D82F87F3ABEC*, int32_t, const RuntimeMethod*))List_1_CopyTo_m1210D480F3EF1C250A53086148C1204B7A99B931_gshared)(__this, ___array0, ___arrayIndex1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, const RuntimeMethod*))Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::.ctor()
inline void Dictionary_2__ctor_m79EA54A4C736FED8607D6E97BD54974D340AEA82 (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>::.ctor()
inline void List_1__ctor_m60653FC61EE022D449B504F5476F13192863010C (List_1_tF30A6998C02D085CCD3F4E659A4ED22C2A03173B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF30A6998C02D085CCD3F4E659A4ED22C2A03173B*, const RuntimeMethod*))List_1__ctor_m60653FC61EE022D449B504F5476F13192863010C_gshared)(__this, method);
}
// System.Data.DataTable Mono.Data.Sqlite.SqliteConnection::GetSchema(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* SqliteConnection_GetSchema_m28E05FF3A6FEF10E0AAA5AB13312D67A2E935B34 (SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* __this, String_t* ___collectionName0, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m9FEA65DB96264479B5268014F10754787382D297 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue)
inline void Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m994A6496B0ED7177E6D4535A398A7EFFF9684FE8 (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::Add(TKey,TValue)
inline void Dictionary_2_Add_mFC882976F9C1D377FB9B96AC561BF0301DCC75F5 (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* __this, String_t* ___key0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638*, String_t*, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::get_Item(TKey)
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Dictionary_2_get_Item_m8B64E2395E0FED66B5313607CFF79A5C8A46358A (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
inline bool List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::GetEnumerator()
inline Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250 Dictionary_2_GetEnumerator_m7B0E05167CA47611244E25AD67EBCEBDF5DB5EDE (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250 (*) (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Item(TKey)
inline int32_t Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mA019F7A495B48EF2A6E5D36977DB3EA09A47ECDB_gshared)(__this, ___key0, method);
}
// System.Data.DataRow System.Data.DataRowCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* DataRowCollection_get_Item_mB1499CE772BD95C3FBC29FDCAA56AE101F07BE8B (DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Data.DataRow::IsNull(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataRow_IsNull_m94DCD0C19CEED84641FA0FBC3C837D0A1FD58AD0 (DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* __this, String_t* ___columnName0, const RuntimeMethod* method) ;
// System.Void System.Data.DataRowCollection::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataRowCollection_RemoveAt_m82EF7643A938D6D033B9E4901E5DF0FB51B92BA7 (DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::CopyTo(T[])
inline void List_1_CopyTo_m87398D95BED8C0626A669D782ECE31DE73392BDC (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___array0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*))List_1_CopyTo_mDA4751F464411AB4C757C63C6EDBF4891BFD6891_gshared)(__this, ___array0, method);
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::.ctor(Mono.Data.Sqlite.SqliteConnection,System.String,System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyQuery__ctor_m0C6F1ADAD13F010F8CED8F23BF619A6D5DE486B3 (KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* __this, SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* ___cnn0, String_t* ___database1, String_t* ___table2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___columns3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>::Add(T)
inline void List_1_Add_mA2C174FE89DD752197CA6AE0E89F2A2843411B05_inline (List_1_tF30A6998C02D085CCD3F4E659A4ED22C2A03173B* __this, KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF30A6998C02D085CCD3F4E659A4ED22C2A03173B*, KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D, const RuntimeMethod*))List_1_Add_mA2C174FE89DD752197CA6AE0E89F2A2843411B05_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>::MoveNext()
inline bool Enumerator_MoveNext_mA71548765692C241BEFB57E80CBC1563829B1656 (Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>::CopyTo(T[])
inline void List_1_CopyTo_m0329A9F65500EF5CF9BBA303DB826C8AF16636C6 (List_1_tF30A6998C02D085CCD3F4E659A4ED22C2A03173B* __this, KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* ___array0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF30A6998C02D085CCD3F4E659A4ED22C2A03173B*, KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5*, const RuntimeMethod*))List_1_CopyTo_m0329A9F65500EF5CF9BBA303DB826C8AF16636C6_gshared)(__this, ___array0, method);
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader::Sync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteKeyReader_Sync_m41A43C9CF6AEDBA5514BACFB253CA0A178753CB4 (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::Sync(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyQuery_Sync_mDC26353CACA8F5A31BB77E4DE114897524FE5BCC (KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* __this, int64_t ___rowid0, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::set_IsValid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyQuery_set_IsValid_mEF4188FC79CD3D2BD9A474B010E6C6F0A2A861BF (KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyQuery_Dispose_m3B917CD021934F6904B910A47131A30CE9688304 (KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* __this, const RuntimeMethod* method) ;
// System.String Mono.Data.Sqlite.SqliteDataReader::GetDataTypeName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqliteDataReader_GetDataTypeName_m7E2C4195D3EA89E03474D0986D6C756FAA47CF44 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteKeyReader::Sync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteKeyReader_Sync_m23B27E9B34013F1D860AD14F24A9049EFB0EE4AA (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Boolean Mono.Data.Sqlite.SqliteDataReader::GetBoolean(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteDataReader_GetBoolean_mD498B42DC662C67668A2D16083C64C3AE8CB8DF8 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Int32 Mono.Data.Sqlite.SqliteDataReader::GetInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteDataReader_GetInt32_m17B38209D931C86861D4FC18B8CEC2D239E4F3F7 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mA857F99F1CACB73D7DB85E26638E7CC1A2CD5C78 (int64_t ___value0, const RuntimeMethod* method) ;
// System.Int64 Mono.Data.Sqlite.SqliteDataReader::GetInt64(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SqliteDataReader_GetInt64_mF85122E72E193CCC9FC69B5B942E7D79A28F3A11 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Int64 System.Convert::ToInt64(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m411DDD22EACD1C4635C58B384DC761CF3B3A9B9A (int64_t ___value0, const RuntimeMethod* method) ;
// System.String Mono.Data.Sqlite.SqliteDataReader::GetString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqliteDataReader_GetString_m6E35BA30FDD2D0B313097C79A8132928292248CC (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Boolean Mono.Data.Sqlite.SqliteDataReader::IsDBNull(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteDataReader_IsDBNull_m9ED4003172562339E49335DF953CC67FD9BC8B57 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Data.DataTable Mono.Data.Sqlite.SqliteDataReader::GetSchemaTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* SqliteDataReader_GetSchemaTable_m6ED9773936D1816B46A81B5305D931AE303689F9 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, const RuntimeMethod* method) ;
// System.Object[] System.Data.DataRow::get_ItemArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* DataRow_get_ItemArray_m18D6C8EE4C846875194EF73E6A9EA3789C6A5C6D (DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* __this, const RuntimeMethod* method) ;
// System.Data.DataRow System.Data.DataRowCollection::Add(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* DataRowCollection_Add_m32818F4B45211F162D8190138CF4C1C2B5C44A38 (DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values0, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteCommandBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteCommandBuilder__ctor_m9EBA5054D982A47E30A8F358A75335544F3D0AB6 (SqliteCommandBuilder_t25108064A445081C8B3015A1BF9D6445DC22D247* __this, const RuntimeMethod* method) ;
// Mono.Data.Sqlite.SqliteCommand Mono.Data.Sqlite.SqliteConnection::CreateCommand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* SqliteConnection_CreateCommand_m3BED520F980F2E040D090CD4B06D14731D0E044F (SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* __this, const RuntimeMethod* method) ;
// System.String Mono.Data.Sqlite.SqliteCommandBuilder::QuoteIdentifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqliteCommandBuilder_QuoteIdentifier_m5EEB6FD9A68F182187463805993EFD4E63233269 (SqliteCommandBuilder_t25108064A445081C8B3015A1BF9D6445DC22D247* __this, String_t* ___unquotedIdentifier0, const RuntimeMethod* method) ;
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteCommand::set_CommandText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteCommand_set_CommandText_m64418C5EF651CB297E95D1F58F5D847C3BF94E3C (SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Mono.Data.Sqlite.SqliteParameter Mono.Data.Sqlite.SqliteParameterCollection::AddWithValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* SqliteParameterCollection_AddWithValue_m37B12C8D05C8FE5414C5ED3D37D2F65319A7D196 (SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* __this, String_t* ___parameterName0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DbDataReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbDataReader_Dispose_m556BD6625F7786BF37441539C51A5ED6B0B90711 (DbDataReader_tA1A9729B3ED5125A693F4442984CCE7D721F452F* __this, const RuntimeMethod* method) ;
// Mono.Data.Sqlite.SqliteParameter Mono.Data.Sqlite.SqliteParameterCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* SqliteParameterCollection_get_Item_mFFE2972891BA3401665999BA12FA1833E8BEE795 (SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteParameter::set_Value(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter_set_Value_mA3CC18A4E7FC7188E5E47FA9EC2AB732966D394E (SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Boolean Mono.Data.Sqlite.SqliteDataReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteDataReader_Read_m922887E94EA18EDCEA038E32E49F9F0ADE1BC588 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DbParameterCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbParameterCollection__ctor_m6A4D15B6E170BF15CDA1B9D31B078BA3592F5A63 (DbParameterCollection_tE362E252B1EA5E903A447738C9AA0AB473275391* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::.ctor()
inline void List_1__ctor_mE1A4D2EE1311CD43F38BE58C778D0F63CB296813 (List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::GetEnumerator()
inline Enumerator_t595F2F779C256BFDC5AC4905175B8D9D912650E8 List_1_GetEnumerator_mEC80C88ED1945C7581BCD0065F5DA094E94A2CAB (List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t595F2F779C256BFDC5AC4905175B8D9D912650E8 (*) (List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteParameterCollection_IndexOf_mD024B7044E0C9973EC6289C3382BC356AE9E2866 (SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* __this, String_t* ___parameterName0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::Add(T)
inline void List_1_Add_mDF8F150D36D2A349EFF0E8737455E2255718611C_inline (List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* __this, SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B*, SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::SetParameter(System.Int32,System.Data.Common.DbParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameterCollection_SetParameter_mF2D7F3F8926FBA899808517D8789C67CEFDB8B5A (SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* __this, int32_t ___index0, DbParameter_tC4DFEE7A3DF97B1D878AAFFFB246188DBB9E0296* ___value1, const RuntimeMethod* method) ;
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::Add(Mono.Data.Sqlite.SqliteParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteParameterCollection_Add_mE6915DDABE3BBF525AB7A2EB20789CFEDA5016E2 (SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* __this, SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* ___parameter0, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter__ctor_mF91B41F76D3B4AA302E9AE73CCA0A958CC7B7AA2 (SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* __this, String_t* ___parameterName0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::Clear()
inline void List_1_Clear_m192E6E713DC63C1C942969E1CF1F66062E27805C_inline (List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::Contains(T)
inline bool List_1_Contains_mCCCAAF31CEAE15CF0F5057603C3E7C2596E75B5F (List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* __this, SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B*, SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Data.Common.DbParameter Mono.Data.Sqlite.SqliteParameterCollection::GetParameter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DbParameter_tC4DFEE7A3DF97B1D878AAFFFB246188DBB9E0296* SqliteParameterCollection_GetParameter_m618FEE4DF78B5EA8CFF0A9A67E2D6DFF78EE201E (SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::get_Item(System.Int32)
inline SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* List_1_get_Item_mA097CAA69C7966024517933895BB417E34ED37A3 (List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* (*) (List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.String Mono.Data.Sqlite.SqliteParameter::get_ParameterName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SqliteParameter_get_ParameterName_m46ECE1039C2ED80F529743CC8590777DA150927B_inline (SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::IndexOf(T)
inline int32_t List_1_IndexOf_m015E1C5A3B783666F825288510406C8BBE941222 (List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* __this, SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B*, SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::Insert(System.Int32,T)
inline void List_1_Insert_mFFBDF3180F876D5FE1284B1525B18EF6E91F64EE (List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* __this, int32_t ___index0, SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B*, int32_t, SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00*, const RuntimeMethod*))List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared)(__this, ___index0, ___item1, method);
}
// System.Boolean System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::Remove(T)
inline bool List_1_Remove_m990B3EDDB6900CB0FE1A1B04DB9DF228773601C1 (List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* __this, SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B*, SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mC76B46919EE3C9C21C2BAE9B79D33DB8D9C021F0 (List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::set_Item(System.Int32,T)
inline void List_1_set_Item_mCBCE70D4C328DE1A088C154743D78724A73DB682 (List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* __this, int32_t ___index0, SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B*, int32_t, SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___index0, ___value1, method);
}
// T System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteStatement>::get_Item(System.Int32)
inline SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* List_1_get_Item_m4C41298B5C7DB30F5E00C45575A0669039D7E724 (List_1_t7D17A1BF1130ACFFA0E9137E8A4A09FD5DCA26C3* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* (*) (List_1_t7D17A1BF1130ACFFA0E9137E8A4A09FD5DCA26C3*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean Mono.Data.Sqlite.SqliteStatement::MapParameter(System.String,Mono.Data.Sqlite.SqliteParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteStatement_MapParameter_m1CA754F6BEC29BB34B9A266A333E0B0F2FF8A84D (SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* __this, String_t* ___s0, SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* ___p1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Mono.Data.Sqlite.SqliteParameter>::MoveNext()
inline bool Enumerator_MoveNext_m99125209AFF2B9EC8E357CCF4F07D2DD62C3EEFC (Enumerator_t595F2F779C256BFDC5AC4905175B8D9D912650E8* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t595F2F779C256BFDC5AC4905175B8D9D912650E8*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(System.String,System.Data.DbType,System.Int32,System.String,System.Data.DataRowVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter__ctor_m05E3983C77B23952EA964DDC16652EB7B27478CC (SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* __this, String_t* ___parameterName0, int32_t ___parameterType1, int32_t ___parameterSize2, String_t* ___sourceColumn3, int32_t ___rowVersion4, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DbParameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbParameter__ctor_mF3F5691577DC88D612514B3212755F47C434639F (DbParameter_tC4DFEE7A3DF97B1D878AAFFFB246188DBB9E0296* __this, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(System.String,System.Data.DbType,System.Int32,System.Data.ParameterDirection,System.Boolean,System.Byte,System.Byte,System.String,System.Data.DataRowVersion,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter__ctor_mC0CBB4B7E49693FEB2F263352A75F9AA9D5C0A1E (SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* __this, String_t* ___parameterName0, int32_t ___parameterType1, int32_t ___parameterSize2, int32_t ___direction3, bool ___isNullable4, uint8_t ___precision5, uint8_t ___scale6, String_t* ___sourceColumn7, int32_t ___rowVersion8, RuntimeObject* ___value9, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteParameter::set_Direction(System.Data.ParameterDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter_set_Direction_m0D4E338DA6A70038E99AA17A164120D0224B40EB (SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Data.DbType Mono.Data.Sqlite.SqliteConvert::TypeToDbType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteConvert_TypeToDbType_mDAC84684FD147FA864341A1AF43C101CEF735B8F (Type_t* ___typ0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(Mono.Data.Sqlite.SqliteParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter__ctor_m745C3B6D5DA280B490775788D4DFB7075D2FFA06 (SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* __this, SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* ___source0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32,System.Boolean,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_mF87E5CDECE10B27D36C39BA8B61080F1E22F8D11 (String_t* ___strA0, int32_t ___indexA1, String_t* ___strB2, int32_t ___indexB3, int32_t ___length4, bool ___ignoreCase5, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture6, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.CriticalHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CriticalHandle_Dispose_m873919529E3E7E8E856A78B325CA239EFB437D54 (CriticalHandle_t9BAF9AE811FE6EADA3E61F3F04CBB238960CFA52* __this, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteStatement::BindParameter(System.Int32,Mono.Data.Sqlite.SqliteParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteStatement_BindParameter_mE6CFCD90E7884A0A58D374A485326F025BFCED3D (SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* __this, int32_t ___index0, SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* ___param1, const RuntimeMethod* method) ;
// System.Data.DbType Mono.Data.Sqlite.SqliteParameter::get_DbType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteParameter_get_DbType_mF26376A5080C11784C3CE772A102612E0C3C0E8A (SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* __this, const RuntimeMethod* method) ;
// System.Boolean System.Convert::IsDBNull(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_IsDBNull_m1E6074E36EDA6270CB1C49E33EA4EDF8491DBE45 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.DateTime System.Convert::ToDateTime(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Convert_ToDateTime_m773A330A58097085E94630181F3A77B9F0963327 (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m5C8BF1D45F508E7AEDA393AE72555148527E3ED3 (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Byte[] System.Guid::ToByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Guid_ToByteArray_m6EBFB2F42D3760D9143050A3A8ED03F085F3AFE9 (Guid_t* __this, const RuntimeMethod* method) ;
// System.Decimal System.Convert::ToDecimal(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Convert_ToDecimal_m2A6822B7BCB33F60B9425C58248111D316C3FE4C (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.Decimal::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Decimal_ToString_m08256316312F5D05FE3D099C083A99BC694F4762 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String,System.Int32,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m2DFDE7BD37585BDBCD6F688B4E4A93304235A0B8 (String_t* __this, String_t* ___value0, int32_t ___startIndex1, int32_t ___comparisonType2, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DbTransaction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbTransaction__ctor_mB9DB61625987D44BDC2FF2096664EE2368DD9605 (DbTransaction_t2571A7BAE88D10335C418A2061AAA42AD4B32609* __this, const RuntimeMethod* method) ;
// System.Int32 Mono.Data.Sqlite.SqliteCommand::ExecuteNonQuery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteCommand_ExecuteNonQuery_mBA35F426CEAC97F6CB9AEEC9AFFC9433FAB1888B (SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean Mono.Data.Sqlite.SqliteTransaction::IsValid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteTransaction_IsValid_m5AFA33FA4116BC602BF4FE5B786392621E5A1FB8 (SqliteTransaction_t5CFD0E46CAF0C4FB991C2AD83395F245F6648542* __this, bool ___throwError0, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DbTransaction::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbTransaction_Dispose_m6C09A9CCF6C9E67B93B1D85A9F2EE8D1948C1381 (DbTransaction_t2571A7BAE88D10335C418A2061AAA42AD4B32609* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteTransaction::IssueRollback(Mono.Data.Sqlite.SqliteConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteTransaction_IssueRollback_m73A629F5A0D93A41698B6455471353A7C1FE7DEB (SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* ___cnn0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Resources.ResourceManager::.ctor(System.String,System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ResourceManager__ctor_m69EC71B02DB2B37C2F033C22FCF6972E09B38FB1 (ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* __this, String_t* ___baseName0, Assembly_t* ___assembly1, const RuntimeMethod* method) ;
// System.Resources.ResourceManager Mono.Data.Sqlite.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* SR_get_ResourceManager_mD460D34794585E2C2B770CB50A887CA19DB309FB (const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteConnectionHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteConnectionHandle__ctor_m376261C8740551827FCBE8766A9F659C65F27528 (SqliteConnectionHandle_tFA3E42C00B09B2E743EFB7FFC30AFA1F20F9EB9B* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.CriticalHandle::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CriticalHandle__ctor_m804131843559F93D133DB8ED30F92927BAFBFC1A (CriticalHandle_t9BAF9AE811FE6EADA3E61F3F04CBB238960CFA52* __this, intptr_t ___invalidHandleValue0, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SQLiteBase::CloseConnection(Mono.Data.Sqlite.SqliteConnectionHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteBase_CloseConnection_mFCF506E280B9A229381C503FEE41B4F4A8397477 (SqliteConnectionHandle_tFA3E42C00B09B2E743EFB7FFC30AFA1F20F9EB9B* ___db0, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteConnectionHandle::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteConnectionHandle__ctor_mA1348DB5E1FC86DF4F2BD6D7B54C59518B99C13D (SqliteConnectionHandle_tFA3E42C00B09B2E743EFB7FFC30AFA1F20F9EB9B* __this, intptr_t ___db0, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteStatementHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteStatementHandle__ctor_m73E66047D4D61947703314954838AB13BA13A8B4 (SqliteStatementHandle_tEDCE828C60B1B7EC9EC59D63D045EF924E6B7788* __this, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SQLiteBase::FinalizeStatement(Mono.Data.Sqlite.SqliteStatementHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteBase_FinalizeStatement_m57763AA60AE7DDDAE1C26B70A026273BF1ED9F6B (SqliteStatementHandle_tEDCE828C60B1B7EC9EC59D63D045EF924E6B7788* ___stmt0, const RuntimeMethod* method) ;
// System.Void Mono.Data.Sqlite.SqliteStatementHandle::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteStatementHandle__ctor_mF7FE8C7E8FCF5E1978758F43CFF572BCEC931D97 (SqliteStatementHandle_tEDCE828C60B1B7EC9EC59D63D045EF924E6B7788* __this, intptr_t ___stmt0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_close(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_create_function(intptr_t, uint8_t*, int32_t, int32_t, intptr_t, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_finalize(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_open_v2(uint8_t*, intptr_t*, int32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_open(uint8_t*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_open16(Il2CppChar*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_reset(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_bind_parameter_name(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_database_name(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_database_name16(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_decltype(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_name(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_name16(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_origin_name(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_origin_name16(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_table_name(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_table_name16(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_text(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_text16(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_errmsg(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_prepare(intptr_t, intptr_t, int32_t, intptr_t*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_table_column_metadata(intptr_t, uint8_t*, uint8_t*, uint8_t*, intptr_t*, intptr_t*, int32_t*, int32_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_value_text(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_value_text16(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_libversion();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_changes(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_busy_timeout(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_blob(intptr_t, int32_t, uint8_t*, int32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_double(intptr_t, int32_t, double);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_int(intptr_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_int64(intptr_t, int32_t, int64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_null(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_text(intptr_t, int32_t, uint8_t*, int32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_parameter_count(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_column_count(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_step(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C double CDECL sqlite3_column_double(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_column_int(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int64_t CDECL sqlite3_column_int64(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_blob(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_column_bytes(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_column_type(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_create_collation(intptr_t, uint8_t*, int32_t, intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_value_blob(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_value_bytes(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C double CDECL sqlite3_value_double(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int64_t CDECL sqlite3_value_int64(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_value_type(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_result_blob(intptr_t, uint8_t*, int32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_result_double(intptr_t, double);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_result_error(intptr_t, uint8_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_result_int64(intptr_t, int64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_result_null(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_result_text(intptr_t, uint8_t*, int32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_aggregate_context(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_text16(intptr_t, int32_t, Il2CppChar*, int32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_result_error16(intptr_t, Il2CppChar*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_result_text16(intptr_t, Il2CppChar*, int32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_key(intptr_t, uint8_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_update_hook(intptr_t, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_commit_hook(intptr_t, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_rollback_hook(intptr_t, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_next_stmt(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_exec(intptr_t, uint8_t*, intptr_t, intptr_t, intptr_t*);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Data.Sqlite.SQLiteType::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteType__ctor_m870B050801321BDF503A0FFBC4A5C997CD489581 (SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* __this, const RuntimeMethod* method) 
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
// Conversion methods for marshalling of: Mono.Data.Sqlite.SQLiteTypeNames
IL2CPP_EXTERN_C void SQLiteTypeNames_t25356E7BF10B784A648A8C22E9AFF08A4AA94CE2_marshal_pinvoke(const SQLiteTypeNames_t25356E7BF10B784A648A8C22E9AFF08A4AA94CE2& unmarshaled, SQLiteTypeNames_t25356E7BF10B784A648A8C22E9AFF08A4AA94CE2_marshaled_pinvoke& marshaled)
{
	marshaled.___typeName_0 = il2cpp_codegen_marshal_string(unmarshaled.___typeName_0);
	marshaled.___dataType_1 = unmarshaled.___dataType_1;
}
IL2CPP_EXTERN_C void SQLiteTypeNames_t25356E7BF10B784A648A8C22E9AFF08A4AA94CE2_marshal_pinvoke_back(const SQLiteTypeNames_t25356E7BF10B784A648A8C22E9AFF08A4AA94CE2_marshaled_pinvoke& marshaled, SQLiteTypeNames_t25356E7BF10B784A648A8C22E9AFF08A4AA94CE2& unmarshaled)
{
	unmarshaled.___typeName_0 = il2cpp_codegen_marshal_string_result(marshaled.___typeName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___typeName_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___typeName_0));
	int32_t unmarshaleddataType_temp_1 = 0;
	unmarshaleddataType_temp_1 = marshaled.___dataType_1;
	unmarshaled.___dataType_1 = unmarshaleddataType_temp_1;
}
// Conversion method for clean up from marshalling of: Mono.Data.Sqlite.SQLiteTypeNames
IL2CPP_EXTERN_C void SQLiteTypeNames_t25356E7BF10B784A648A8C22E9AFF08A4AA94CE2_marshal_pinvoke_cleanup(SQLiteTypeNames_t25356E7BF10B784A648A8C22E9AFF08A4AA94CE2_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___typeName_0);
	marshaled.___typeName_0 = NULL;
}
// Conversion methods for marshalling of: Mono.Data.Sqlite.SQLiteTypeNames
IL2CPP_EXTERN_C void SQLiteTypeNames_t25356E7BF10B784A648A8C22E9AFF08A4AA94CE2_marshal_com(const SQLiteTypeNames_t25356E7BF10B784A648A8C22E9AFF08A4AA94CE2& unmarshaled, SQLiteTypeNames_t25356E7BF10B784A648A8C22E9AFF08A4AA94CE2_marshaled_com& marshaled)
{
	marshaled.___typeName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___typeName_0);
	marshaled.___dataType_1 = unmarshaled.___dataType_1;
}
IL2CPP_EXTERN_C void SQLiteTypeNames_t25356E7BF10B784A648A8C22E9AFF08A4AA94CE2_marshal_com_back(const SQLiteTypeNames_t25356E7BF10B784A648A8C22E9AFF08A4AA94CE2_marshaled_com& marshaled, SQLiteTypeNames_t25356E7BF10B784A648A8C22E9AFF08A4AA94CE2& unmarshaled)
{
	unmarshaled.___typeName_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___typeName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___typeName_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___typeName_0));
	int32_t unmarshaleddataType_temp_1 = 0;
	unmarshaleddataType_temp_1 = marshaled.___dataType_1;
	unmarshaled.___dataType_1 = unmarshaleddataType_temp_1;
}
// Conversion method for clean up from marshalling of: Mono.Data.Sqlite.SQLiteTypeNames
IL2CPP_EXTERN_C void SQLiteTypeNames_t25356E7BF10B784A648A8C22E9AFF08A4AA94CE2_marshal_com_cleanup(SQLiteTypeNames_t25356E7BF10B784A648A8C22E9AFF08A4AA94CE2_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___typeName_0);
	marshaled.___typeName_0 = NULL;
}
// System.Void Mono.Data.Sqlite.SQLiteTypeNames::.ctor(System.String,System.Data.DbType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteTypeNames__ctor_mD72CED1DB9D7C5C65185D5A6C8FE762051A98FBD (SQLiteTypeNames_t25356E7BF10B784A648A8C22E9AFF08A4AA94CE2* __this, String_t* ___newtypeName0, int32_t ___newdataType1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___newtypeName0;
		__this->___typeName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___typeName_0), (void*)L_0);
		int32_t L_1 = ___newdataType1;
		__this->___dataType_1 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void SQLiteTypeNames__ctor_mD72CED1DB9D7C5C65185D5A6C8FE762051A98FBD_AdjustorThunk (RuntimeObject* __this, String_t* ___newtypeName0, int32_t ___newdataType1, const RuntimeMethod* method)
{
	SQLiteTypeNames_t25356E7BF10B784A648A8C22E9AFF08A4AA94CE2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SQLiteTypeNames_t25356E7BF10B784A648A8C22E9AFF08A4AA94CE2*>(__this + _offset);
	SQLiteTypeNames__ctor_mD72CED1DB9D7C5C65185D5A6C8FE762051A98FBD(_thisAdjusted, ___newtypeName0, ___newdataType1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Data.Sqlite.SqliteDataAdapter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteDataAdapter__cctor_m0DB195AB22FEA4B454AD135350DB6F4D005C348C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78_StaticFields*)il2cpp_codegen_static_fields_for(SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78_il2cpp_TypeInfo_var))->____updatingEventPH_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78_StaticFields*)il2cpp_codegen_static_fields_for(SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78_il2cpp_TypeInfo_var))->____updatingEventPH_8), (void*)L_0);
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		((SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78_StaticFields*)il2cpp_codegen_static_fields_for(SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78_il2cpp_TypeInfo_var))->____updatedEventPH_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78_StaticFields*)il2cpp_codegen_static_fields_for(SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78_il2cpp_TypeInfo_var))->____updatedEventPH_9), (void*)L_1);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteDataAdapter::add_RowUpdating(System.EventHandler`1<System.Data.Common.RowUpdatingEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteDataAdapter_add_RowUpdating_m2635A1F3ED0E05761A082127224E9FAC8427CACC (SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78* __this, EventHandler_1_t17051E007455090ECF8C9D97E16866DDBAF479EA* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbCommandBuilder_tB2241F4E492F60AAB8E40DEB7EDF1AD89D1C4341_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t17051E007455090ECF8C9D97E16866DDBAF479EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t17051E007455090ECF8C9D97E16866DDBAF479EA* V_0 = NULL;
	EventHandler_1_t17051E007455090ECF8C9D97E16866DDBAF479EA* V_1 = NULL;
	{
		EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* L_0;
		L_0 = Component_get_Events_mF9B0F379B2F1AA6B5DD1F3CA449519CD74DA0992(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78_StaticFields*)il2cpp_codegen_static_fields_for(SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78_il2cpp_TypeInfo_var))->____updatingEventPH_8;
		NullCheck(L_0);
		Delegate_t* L_2;
		L_2 = EventHandlerList_get_Item_m9AD24EA65E3832B81146EC24604BABE4FC3CFCC7(L_0, L_1, NULL);
		V_0 = ((EventHandler_1_t17051E007455090ECF8C9D97E16866DDBAF479EA*)Castclass((RuntimeObject*)L_2, EventHandler_1_t17051E007455090ECF8C9D97E16866DDBAF479EA_il2cpp_TypeInfo_var));
		EventHandler_1_t17051E007455090ECF8C9D97E16866DDBAF479EA* L_3 = V_0;
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		EventHandler_1_t17051E007455090ECF8C9D97E16866DDBAF479EA* L_4 = ___value0;
		NullCheck(L_4);
		RuntimeObject* L_5 = ((Delegate_t*)L_4)->___m_target_2;
		if (!((DbCommandBuilder_tB2241F4E492F60AAB8E40DEB7EDF1AD89D1C4341*)IsInstClass((RuntimeObject*)L_5, DbCommandBuilder_tB2241F4E492F60AAB8E40DEB7EDF1AD89D1C4341_il2cpp_TypeInfo_var)))
		{
			goto IL_004f;
		}
	}
	{
		EventHandler_1_t17051E007455090ECF8C9D97E16866DDBAF479EA* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78_il2cpp_TypeInfo_var);
		Delegate_t* L_7;
		L_7 = SqliteDataAdapter_FindBuilder_mE631FE081F982D61B3393761D6965AD1ADBC6C3D(L_6, NULL);
		V_1 = ((EventHandler_1_t17051E007455090ECF8C9D97E16866DDBAF479EA*)Castclass((RuntimeObject*)L_7, EventHandler_1_t17051E007455090ECF8C9D97E16866DDBAF479EA_il2cpp_TypeInfo_var));
		EventHandler_1_t17051E007455090ECF8C9D97E16866DDBAF479EA* L_8 = V_1;
		if (!L_8)
		{
			goto IL_004f;
		}
	}
	{
		EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* L_9;
		L_9 = Component_get_Events_mF9B0F379B2F1AA6B5DD1F3CA449519CD74DA0992(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78_il2cpp_TypeInfo_var);
		RuntimeObject* L_10 = ((SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78_StaticFields*)il2cpp_codegen_static_fields_for(SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78_il2cpp_TypeInfo_var))->____updatingEventPH_8;
		EventHandler_1_t17051E007455090ECF8C9D97E16866DDBAF479EA* L_11 = V_1;
		NullCheck(L_9);
		EventHandlerList_RemoveHandler_m4268AB4FEBEAB018DE6B9F03E7273B71135CF3E2(L_9, L_10, L_11, NULL);
	}

IL_004f:
	{
		EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* L_12;
		L_12 = Component_get_Events_mF9B0F379B2F1AA6B5DD1F3CA449519CD74DA0992(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78_il2cpp_TypeInfo_var);
		RuntimeObject* L_13 = ((SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78_StaticFields*)il2cpp_codegen_static_fields_for(SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78_il2cpp_TypeInfo_var))->____updatingEventPH_8;
		EventHandler_1_t17051E007455090ECF8C9D97E16866DDBAF479EA* L_14 = ___value0;
		NullCheck(L_12);
		EventHandlerList_AddHandler_mB1FF265C32A4D6DD6F2129B0418308C705C855F0(L_12, L_13, L_14, NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteDataAdapter::remove_RowUpdating(System.EventHandler`1<System.Data.Common.RowUpdatingEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteDataAdapter_remove_RowUpdating_m82BA3599B779D1026841FF10397B288F1A7D194C (SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78* __this, EventHandler_1_t17051E007455090ECF8C9D97E16866DDBAF479EA* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* L_0;
		L_0 = Component_get_Events_mF9B0F379B2F1AA6B5DD1F3CA449519CD74DA0992(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78_StaticFields*)il2cpp_codegen_static_fields_for(SqliteDataAdapter_tE694ADFC9932A464C038E27AFDEBCD3AD0907C78_il2cpp_TypeInfo_var))->____updatingEventPH_8;
		EventHandler_1_t17051E007455090ECF8C9D97E16866DDBAF479EA* L_2 = ___value0;
		NullCheck(L_0);
		EventHandlerList_RemoveHandler_m4268AB4FEBEAB018DE6B9F03E7273B71135CF3E2(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Delegate Mono.Data.Sqlite.SqliteDataAdapter::FindBuilder(System.MulticastDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* SqliteDataAdapter_FindBuilder_mE631FE081F982D61B3393761D6965AD1ADBC6C3D (MulticastDelegate_t* ___mcd0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbCommandBuilder_tB2241F4E492F60AAB8E40DEB7EDF1AD89D1C4341_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* V_0 = NULL;
	int32_t V_1 = 0;
	{
		MulticastDelegate_t* L_0 = ___mcd0;
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		MulticastDelegate_t* L_1 = ___mcd0;
		NullCheck(L_1);
		DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* L_2;
		L_2 = MulticastDelegate_GetInvocationList_mA712C84A0405C0B90802F03C1658CE3FBF787CA4(L_1, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_002e;
	}

IL_0014:
	{
		DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Delegate_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		RuntimeObject* L_7 = L_6->___m_target_2;
		if (!((DbCommandBuilder_tB2241F4E492F60AAB8E40DEB7EDF1AD89D1C4341*)IsInstClass((RuntimeObject*)L_7, DbCommandBuilder_tB2241F4E492F60AAB8E40DEB7EDF1AD89D1C4341_il2cpp_TypeInfo_var)))
		{
			goto IL_002a;
		}
	}
	{
		DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Delegate_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		return L_11;
	}

IL_002a:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_1;
		DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0014;
		}
	}

IL_0037:
	{
		return (Delegate_t*)NULL;
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
// System.Void Mono.Data.Sqlite.SqliteDataReader::.ctor(Mono.Data.Sqlite.SqliteCommand,System.Data.CommandBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteDataReader__ctor_m25D0AD914B1ECAB5AE6F5652D63E47ABC8F9A22E (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* ___cmd0, int32_t ___behave1, const RuntimeMethod* method) 
{
	{
		DbDataReader__ctor_mB5D597EF61634121B91F137FBE64C283F0434D35(__this, NULL);
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_0 = ___cmd0;
		__this->____command_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____command_1), (void*)L_0);
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_1 = __this->____command_1;
		NullCheck(L_1);
		SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_2 = L_1->____cnn_5;
		NullCheck(L_2);
		int64_t L_3 = L_2->____version_14;
		__this->____version_11 = L_3;
		int32_t L_4 = ___behave1;
		__this->____commandBehavior_8 = L_4;
		__this->____activeStatementIndex_2 = (-1);
		__this->____activeStatement_3 = (SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeStatement_3), (void*)(SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*)NULL);
		__this->____rowsAffected_5 = (-1);
		__this->____fieldCount_6 = 0;
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_5 = __this->____command_1;
		if (!L_5)
		{
			goto IL_0058;
		}
	}
	{
		bool L_6;
		L_6 = SqliteDataReader_NextResult_m01DB47FE1B604A2F98FA25F601F3632490D661E6(__this, NULL);
	}

IL_0058:
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteDataReader::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteDataReader_Close_m261EA7CD912F3549D0119C2CE2B51F31D9816366 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a1:
			{// begin finally (depth: 1)
				{
					SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* L_0 = __this->____keyInfo_10;
					if (!L_0)
					{
						goto IL_00be;
					}
				}
				{
					SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* L_1 = __this->____keyInfo_10;
					NullCheck(L_1);
					SqliteKeyReader_Dispose_m51076DAD24F708AE7728F075DA4F040C9B1DA1DF(L_1, NULL);
					__this->____keyInfo_10 = (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF*)NULL;
					Il2CppCodeGenWriteBarrier((void**)(&__this->____keyInfo_10), (void*)(SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF*)NULL);
				}

IL_00be:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_2 = __this->____command_1;
				if (!L_2)
				{
					goto IL_0087_1;
				}
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0070_1:
					{// begin finally (depth: 2)
						{
							bool L_3 = __this->____disposeCommand_9;
							if (!L_3)
							{
								goto IL_0086_1;
							}
						}
						{
							SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_4 = __this->____command_1;
							NullCheck(L_4);
							Component_Dispose_m7D0C063EA18E1FFA59CB369232131150372DC7B2(L_4, NULL);
						}

IL_0086_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_003c_2:
							{// begin finally (depth: 3)
								{
									int32_t L_5 = __this->____commandBehavior_8;
									if (!((int32_t)((int32_t)L_5&((int32_t)32))))
									{
										goto IL_006a_2;
									}
								}
								{
									SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_6 = __this->____command_1;
									NullCheck(L_6);
									SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_7 = L_6->____cnn_5;
									if (!L_7)
									{
										goto IL_006a_2;
									}
								}
								{
									SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_8 = __this->____command_1;
									NullCheck(L_8);
									SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_9 = L_8->____cnn_5;
									NullCheck(L_9);
									SqliteConnection_Close_m0AC2EE490D4F63B8004CC1A7AE868E3C2FDAA0B0(L_9, NULL);
								}

IL_006a_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							{
								int64_t L_10 = __this->____version_11;
								if (!L_10)
								{
									goto IL_002c_3;
								}
							}

IL_0016_3:
							try
							{// begin try (depth: 4)

IL_0016_4:
								{
									bool L_11;
									L_11 = SqliteDataReader_NextResult_m01DB47FE1B604A2F98FA25F601F3632490D661E6(__this, NULL);
									if (L_11)
									{
										goto IL_0016_4;
									}
								}
								{
									goto IL_002c_3;
								}
							}// end try (depth: 4)
							catch(Il2CppExceptionWrapper& e)
							{
								if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
								{
									IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
									goto CATCH_0026_3;
								}
								throw e;
							}

CATCH_0026_3:
							{// begin catch(System.Object)
								IL2CPP_POP_ACTIVE_EXCEPTION();
								goto IL_002c_3;
							}// end catch (depth: 4)

IL_002c_3:
							{
								SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_12 = __this->____command_1;
								NullCheck(L_12);
								SqliteCommand_ClearDataReader_mB9C86DEE91BE0BD60133250CF98873FDA95C8CC1(L_12, NULL);
								goto IL_006b_2;
							}
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_006b_2:
					{
						goto IL_0087_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0087_1:
			{
				__this->____command_1 = (SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____command_1), (void*)(SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25*)NULL);
				__this->____activeStatement_3 = (SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____activeStatement_3), (void*)(SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*)NULL);
				__this->____fieldTypeArray_7 = (SQLiteTypeU5BU5D_t9577E5DC506B1996F06A2CFA7094F5F7BD8A4EE2*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____fieldTypeArray_7), (void*)(SQLiteTypeU5BU5D_t9577E5DC506B1996F06A2CFA7094F5F7BD8A4EE2*)NULL);
				goto IL_00bf;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bf:
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteDataReader::CheckClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteDataReader_CheckClosed_m7D7D9DFBB00848D65FB18C563730F999322ACFB4 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, const RuntimeMethod* method) 
{
	{
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_0 = __this->____command_1;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50A1EE6189DD9E7015047EE058B68EE66982C5BD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqliteDataReader_CheckClosed_m7D7D9DFBB00848D65FB18C563730F999322ACFB4_RuntimeMethod_var)));
	}

IL_0016:
	{
		int64_t L_2 = __this->____version_11;
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2* L_3 = (SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		SqliteException__ctor_mBF16E34A07E29BCBC8E75B28E620A92571560E8D(L_3, 4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB6753C3513A85AA0C591C58631DDAFC59A32786)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqliteDataReader_CheckClosed_m7D7D9DFBB00848D65FB18C563730F999322ACFB4_RuntimeMethod_var)));
	}

IL_002d:
	{
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_4 = __this->____command_1;
		NullCheck(L_4);
		SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_5 = L_4->____cnn_5;
		NullCheck(L_5);
		int32_t L_6 = L_5->____connectionState_4;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_005e;
		}
	}
	{
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_7 = __this->____command_1;
		NullCheck(L_7);
		SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_8 = L_7->____cnn_5;
		NullCheck(L_8);
		int64_t L_9 = L_8->____version_14;
		int64_t L_10 = __this->____version_11;
		if ((((int64_t)L_9) == ((int64_t)L_10)))
		{
			goto IL_0069;
		}
	}

IL_005e:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_11 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral47211EF2BDCEF6E87ADFE8F5E627527B1996AE35)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqliteDataReader_CheckClosed_m7D7D9DFBB00848D65FB18C563730F999322ACFB4_RuntimeMethod_var)));
	}

IL_0069:
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteDataReader::CheckValidRow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteDataReader_CheckValidRow_m0E7986482CDFADC9F549DF61356FA44C3A9113A2 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____readingState_4;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral096CF12DBCC6AEE41F38FC7049179C565BB7AF8A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqliteDataReader_CheckValidRow_m0E7986482CDFADC9F549DF61356FA44C3A9113A2_RuntimeMethod_var)));
	}

IL_0016:
	{
		return;
	}
}
// System.Collections.IEnumerator Mono.Data.Sqlite.SqliteDataReader::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqliteDataReader_GetEnumerator_mA500D8298E65D0A3B3B48E70C92E5399AF57697D (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbEnumerator_tD4CBC5D7C73AFE4F4A92D653239CD007D6919DB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____commandBehavior_8;
		DbEnumerator_tD4CBC5D7C73AFE4F4A92D653239CD007D6919DB8* L_1 = (DbEnumerator_tD4CBC5D7C73AFE4F4A92D653239CD007D6919DB8*)il2cpp_codegen_object_new(DbEnumerator_tD4CBC5D7C73AFE4F4A92D653239CD007D6919DB8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DbEnumerator__ctor_m3B01C3CB528D9A450CF91C1ADA7E151C1236C041(L_1, __this, (bool)((((int32_t)((int32_t)((int32_t)L_0&((int32_t)32)))) == ((int32_t)((int32_t)32)))? 1 : 0), NULL);
		return L_1;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteDataReader::get_FieldCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteDataReader_get_FieldCount_mB4B0391E5C8BF2762973F77A55B512151EC46239 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, const RuntimeMethod* method) 
{
	{
		SqliteDataReader_CheckClosed_m7D7D9DFBB00848D65FB18C563730F999322ACFB4(__this, NULL);
		SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* L_0 = __this->____keyInfo_10;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->____fieldCount_6;
		return L_1;
	}

IL_0018:
	{
		int32_t L_2 = __this->____fieldCount_6;
		SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* L_3 = __this->____keyInfo_10;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SqliteKeyReader_get_Count_m8B54BE657D583C5FD27E338F5B5E20BD018CDAF3(L_3, NULL);
		return ((int32_t)il2cpp_codegen_add(L_2, L_4));
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteDataReader::get_VisibleFieldCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteDataReader_get_VisibleFieldCount_mCFD28B01F417A11A6B5A37C90BC60B28ACB82371 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, const RuntimeMethod* method) 
{
	{
		SqliteDataReader_CheckClosed_m7D7D9DFBB00848D65FB18C563730F999322ACFB4(__this, NULL);
		int32_t L_0 = __this->____fieldCount_6;
		return L_0;
	}
}
// Mono.Data.Sqlite.TypeAffinity Mono.Data.Sqlite.SqliteDataReader::VerifyType(System.Int32,System.Data.DbType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteDataReader_VerifyType_m0706F2D4C867B32BBCE6972D98D382C180FF395B (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, int32_t ___i0, int32_t ___typ1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		SqliteDataReader_CheckClosed_m7D7D9DFBB00848D65FB18C563730F999322ACFB4(__this, NULL);
		SqliteDataReader_CheckValidRow_m0E7986482CDFADC9F549DF61356FA44C3A9113A2(__this, NULL);
		int32_t L_0 = ___i0;
		SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* L_1;
		L_1 = SqliteDataReader_GetSQLiteType_mF30C2D2146437C63F6C241E49BFF92E2707D850D(__this, L_0, NULL);
		NullCheck(L_1);
		int32_t L_2 = L_1->___Affinity_1;
		V_0 = L_2;
		int32_t L_3 = V_0;
		V_1 = L_3;
		int32_t L_4 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 1)))
		{
			case 0:
			{
				goto IL_0038;
			}
			case 1:
			{
				goto IL_0092;
			}
			case 2:
			{
				goto IL_00bc;
			}
			case 3:
			{
				goto IL_00fb;
			}
		}
	}
	{
		goto IL_0118;
	}

IL_0038:
	{
		int32_t L_5 = ___typ1;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0042:
	{
		int32_t L_7 = ___typ1;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_8 = V_0;
		return L_8;
	}

IL_004c:
	{
		int32_t L_9 = ___typ1;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_10 = V_0;
		return L_10;
	}

IL_0056:
	{
		int32_t L_11 = ___typ1;
		if ((!(((uint32_t)L_11) == ((uint32_t)3))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}

IL_005f:
	{
		int32_t L_13 = ___typ1;
		if ((!(((uint32_t)L_13) == ((uint32_t)2))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_14 = V_0;
		return L_14;
	}

IL_0068:
	{
		int32_t L_15 = ___typ1;
		if ((!(((uint32_t)L_15) == ((uint32_t)6))))
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_16 = V_0;
		return L_16;
	}

IL_0071:
	{
		int32_t L_17 = ___typ1;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_007b;
		}
	}
	{
		int32_t L_18 = V_0;
		return L_18;
	}

IL_007b:
	{
		int32_t L_19 = ___typ1;
		if ((!(((uint32_t)L_19) == ((uint32_t)8))))
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_20 = V_0;
		return L_20;
	}

IL_0084:
	{
		int32_t L_21 = ___typ1;
		if ((!(((uint32_t)L_21) == ((uint32_t)7))))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_22 = V_0;
		return L_22;
	}

IL_008d:
	{
		goto IL_0118;
	}

IL_0092:
	{
		int32_t L_23 = ___typ1;
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_24 = V_0;
		return L_24;
	}

IL_009c:
	{
		int32_t L_25 = ___typ1;
		if ((!(((uint32_t)L_25) == ((uint32_t)8))))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_26 = V_0;
		return L_26;
	}

IL_00a5:
	{
		int32_t L_27 = ___typ1;
		if ((!(((uint32_t)L_27) == ((uint32_t)7))))
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_28 = V_0;
		return L_28;
	}

IL_00ae:
	{
		int32_t L_29 = ___typ1;
		if ((!(((uint32_t)L_29) == ((uint32_t)6))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_30 = V_0;
		return L_30;
	}

IL_00b7:
	{
		goto IL_0118;
	}

IL_00bc:
	{
		int32_t L_31 = ___typ1;
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_32 = V_0;
		return L_32;
	}

IL_00c6:
	{
		int32_t L_33 = ___typ1;
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_00d0;
		}
	}
	{
		int32_t L_34 = V_0;
		return L_34;
	}

IL_00d0:
	{
		int32_t L_35 = ___typ1;
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_36 = V_0;
		return L_36;
	}

IL_00da:
	{
		int32_t L_37 = ___typ1;
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00e4;
		}
	}
	{
		int32_t L_38 = V_0;
		return L_38;
	}

IL_00e4:
	{
		int32_t L_39 = ___typ1;
		if ((!(((uint32_t)L_39) == ((uint32_t)6))))
		{
			goto IL_00ed;
		}
	}
	{
		int32_t L_40 = V_0;
		return L_40;
	}

IL_00ed:
	{
		int32_t L_41 = ___typ1;
		if ((!(((uint32_t)L_41) == ((uint32_t)7))))
		{
			goto IL_00f6;
		}
	}
	{
		int32_t L_42 = V_0;
		return L_42;
	}

IL_00f6:
	{
		goto IL_0118;
	}

IL_00fb:
	{
		int32_t L_43 = ___typ1;
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0105;
		}
	}
	{
		int32_t L_44 = V_0;
		return L_44;
	}

IL_0105:
	{
		int32_t L_45 = ___typ1;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_010f;
		}
	}
	{
		int32_t L_46 = V_0;
		return L_46;
	}

IL_010f:
	{
		int32_t L_47 = ___typ1;
		if ((!(((uint32_t)L_47) == ((uint32_t)1))))
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_48 = V_0;
		return L_48;
	}

IL_0118:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_49 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_49);
		InvalidCastException__ctor_mCBC218CE25034242D2EB33B3E59933295CE93C56(L_49, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_49, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqliteDataReader_VerifyType_m0706F2D4C867B32BBCE6972D98D382C180FF395B_RuntimeMethod_var)));
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteDataReader::GetBoolean(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteDataReader_GetBoolean_mD498B42DC662C67668A2D16083C64C3AE8CB8DF8 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___i0;
		int32_t L_1;
		L_1 = SqliteDataReader_get_VisibleFieldCount_mCFD28B01F417A11A6B5A37C90BC60B28ACB82371(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_002b;
		}
	}
	{
		SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* L_2 = __this->____keyInfo_10;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* L_3 = __this->____keyInfo_10;
		int32_t L_4 = ___i0;
		int32_t L_5;
		L_5 = SqliteDataReader_get_VisibleFieldCount_mCFD28B01F417A11A6B5A37C90BC60B28ACB82371(__this, NULL);
		NullCheck(L_3);
		bool L_6;
		L_6 = SqliteKeyReader_GetBoolean_m826904C49D5C00AFA2784DC3C455A049C8BF4936(L_3, ((int32_t)il2cpp_codegen_subtract(L_4, L_5)), NULL);
		return L_6;
	}

IL_002b:
	{
		int32_t L_7 = ___i0;
		int32_t L_8;
		L_8 = SqliteDataReader_VerifyType_m0706F2D4C867B32BBCE6972D98D382C180FF395B(__this, L_7, 3, NULL);
		int32_t L_9 = ___i0;
		RuntimeObject* L_10;
		L_10 = SqliteDataReader_GetValue_m597154EDAC65852F5FAC01B2670DB3D02EA73C63(__this, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_11;
		L_11 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Convert_ToBoolean_m0E8AE169ABC127B0A317EE6312A04BC1F8AB4C63(L_10, L_11, NULL);
		return L_12;
	}
}
// System.String Mono.Data.Sqlite.SqliteDataReader::GetDataTypeName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqliteDataReader_GetDataTypeName_m7E2C4195D3EA89E03474D0986D6C756FAA47CF44 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteConvert_t981F31162C63D0C2F780C2FC99738D60779F4D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* V_0 = NULL;
	{
		int32_t L_0 = ___i0;
		int32_t L_1;
		L_1 = SqliteDataReader_get_VisibleFieldCount_mCFD28B01F417A11A6B5A37C90BC60B28ACB82371(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_002b;
		}
	}
	{
		SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* L_2 = __this->____keyInfo_10;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* L_3 = __this->____keyInfo_10;
		int32_t L_4 = ___i0;
		int32_t L_5;
		L_5 = SqliteDataReader_get_VisibleFieldCount_mCFD28B01F417A11A6B5A37C90BC60B28ACB82371(__this, NULL);
		NullCheck(L_3);
		String_t* L_6;
		L_6 = SqliteKeyReader_GetDataTypeName_m064478CAFEEAE88D5F8966DCA040BA0024171514(L_3, ((int32_t)il2cpp_codegen_subtract(L_4, L_5)), NULL);
		return L_6;
	}

IL_002b:
	{
		int32_t L_7 = ___i0;
		SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* L_8;
		L_8 = SqliteDataReader_GetSQLiteType_mF30C2D2146437C63F6C241E49BFF92E2707D850D(__this, L_7, NULL);
		V_0 = L_8;
		SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->___Type_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_004c;
		}
	}
	{
		SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SqliteConvert_t981F31162C63D0C2F780C2FC99738D60779F4D2A_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = SqliteConvert_SQLiteTypeToType_mF4F712E58010EB9B68233A23A3AEB39398AB14C5(L_11, NULL);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_12);
		return L_13;
	}

IL_004c:
	{
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_14 = __this->____activeStatement_3;
		NullCheck(L_14);
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_15 = L_14->____sql_0;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_16 = __this->____activeStatement_3;
		int32_t L_17 = ___i0;
		SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* L_18 = V_0;
		NullCheck(L_18);
		int32_t* L_19 = (&L_18->___Affinity_1);
		NullCheck(L_15);
		String_t* L_20;
		L_20 = VirtualFuncInvoker3< String_t*, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*, int32_t, int32_t* >::Invoke(27 /* System.String Mono.Data.Sqlite.SQLiteBase::ColumnType(Mono.Data.Sqlite.SqliteStatement,System.Int32,Mono.Data.Sqlite.TypeAffinity&) */, L_15, L_16, L_17, L_19);
		return L_20;
	}
}
// System.Type Mono.Data.Sqlite.SqliteDataReader::GetFieldType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* SqliteDataReader_GetFieldType_mA7E7AB00F68AEC8495D19FC24BB64AD01B0C587E (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteConvert_t981F31162C63D0C2F780C2FC99738D60779F4D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___i0;
		int32_t L_1;
		L_1 = SqliteDataReader_get_VisibleFieldCount_mCFD28B01F417A11A6B5A37C90BC60B28ACB82371(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_002b;
		}
	}
	{
		SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* L_2 = __this->____keyInfo_10;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* L_3 = __this->____keyInfo_10;
		int32_t L_4 = ___i0;
		int32_t L_5;
		L_5 = SqliteDataReader_get_VisibleFieldCount_mCFD28B01F417A11A6B5A37C90BC60B28ACB82371(__this, NULL);
		NullCheck(L_3);
		Type_t* L_6;
		L_6 = SqliteKeyReader_GetFieldType_mA76D2B279C0CF5280F2A28C80DD434E96DAF850A(L_3, ((int32_t)il2cpp_codegen_subtract(L_4, L_5)), NULL);
		return L_6;
	}

IL_002b:
	{
		int32_t L_7 = ___i0;
		SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* L_8;
		L_8 = SqliteDataReader_GetSQLiteType_mF30C2D2146437C63F6C241E49BFF92E2707D850D(__this, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(SqliteConvert_t981F31162C63D0C2F780C2FC99738D60779F4D2A_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = SqliteConvert_SQLiteTypeToType_mF4F712E58010EB9B68233A23A3AEB39398AB14C5(L_8, NULL);
		return L_9;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteDataReader::GetInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteDataReader_GetInt32_m17B38209D931C86861D4FC18B8CEC2D239E4F3F7 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___i0;
		int32_t L_1;
		L_1 = SqliteDataReader_get_VisibleFieldCount_mCFD28B01F417A11A6B5A37C90BC60B28ACB82371(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_002b;
		}
	}
	{
		SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* L_2 = __this->____keyInfo_10;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* L_3 = __this->____keyInfo_10;
		int32_t L_4 = ___i0;
		int32_t L_5;
		L_5 = SqliteDataReader_get_VisibleFieldCount_mCFD28B01F417A11A6B5A37C90BC60B28ACB82371(__this, NULL);
		NullCheck(L_3);
		int32_t L_6;
		L_6 = SqliteKeyReader_GetInt32_m54F57976B00F5F7DE432530A7C4147396A867366(L_3, ((int32_t)il2cpp_codegen_subtract(L_4, L_5)), NULL);
		return L_6;
	}

IL_002b:
	{
		int32_t L_7 = ___i0;
		int32_t L_8;
		L_8 = SqliteDataReader_VerifyType_m0706F2D4C867B32BBCE6972D98D382C180FF395B(__this, L_7, ((int32_t)11), NULL);
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_9 = __this->____activeStatement_3;
		NullCheck(L_9);
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_10 = L_9->____sql_0;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_11 = __this->____activeStatement_3;
		int32_t L_12 = ___i0;
		NullCheck(L_10);
		int32_t L_13;
		L_13 = VirtualFuncInvoker2< int32_t, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*, int32_t >::Invoke(34 /* System.Int32 Mono.Data.Sqlite.SQLiteBase::GetInt32(Mono.Data.Sqlite.SqliteStatement,System.Int32) */, L_10, L_11, L_12);
		return L_13;
	}
}
// System.Int64 Mono.Data.Sqlite.SqliteDataReader::GetInt64(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SqliteDataReader_GetInt64_mF85122E72E193CCC9FC69B5B942E7D79A28F3A11 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___i0;
		int32_t L_1;
		L_1 = SqliteDataReader_get_VisibleFieldCount_mCFD28B01F417A11A6B5A37C90BC60B28ACB82371(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_002b;
		}
	}
	{
		SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* L_2 = __this->____keyInfo_10;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* L_3 = __this->____keyInfo_10;
		int32_t L_4 = ___i0;
		int32_t L_5;
		L_5 = SqliteDataReader_get_VisibleFieldCount_mCFD28B01F417A11A6B5A37C90BC60B28ACB82371(__this, NULL);
		NullCheck(L_3);
		int64_t L_6;
		L_6 = SqliteKeyReader_GetInt64_mEE6952C000B5C9B1FA90A62E55A0ED72C623515D(L_3, ((int32_t)il2cpp_codegen_subtract(L_4, L_5)), NULL);
		return L_6;
	}

IL_002b:
	{
		int32_t L_7 = ___i0;
		int32_t L_8;
		L_8 = SqliteDataReader_VerifyType_m0706F2D4C867B32BBCE6972D98D382C180FF395B(__this, L_7, ((int32_t)12), NULL);
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_9 = __this->____activeStatement_3;
		NullCheck(L_9);
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_10 = L_9->____sql_0;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_11 = __this->____activeStatement_3;
		int32_t L_12 = ___i0;
		NullCheck(L_10);
		int64_t L_13;
		L_13 = VirtualFuncInvoker2< int64_t, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*, int32_t >::Invoke(35 /* System.Int64 Mono.Data.Sqlite.SQLiteBase::GetInt64(Mono.Data.Sqlite.SqliteStatement,System.Int32) */, L_10, L_11, L_12);
		return L_13;
	}
}
// System.String Mono.Data.Sqlite.SqliteDataReader::GetName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqliteDataReader_GetName_m6590F7EC7E3191A2E09B2C82D306333750095642 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___i0;
		int32_t L_1;
		L_1 = SqliteDataReader_get_VisibleFieldCount_mCFD28B01F417A11A6B5A37C90BC60B28ACB82371(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_002b;
		}
	}
	{
		SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* L_2 = __this->____keyInfo_10;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* L_3 = __this->____keyInfo_10;
		int32_t L_4 = ___i0;
		int32_t L_5;
		L_5 = SqliteDataReader_get_VisibleFieldCount_mCFD28B01F417A11A6B5A37C90BC60B28ACB82371(__this, NULL);
		NullCheck(L_3);
		String_t* L_6;
		L_6 = SqliteKeyReader_GetName_mAFD73902068396341141F95CE7F9295707E594D9(L_3, ((int32_t)il2cpp_codegen_subtract(L_4, L_5)), NULL);
		return L_6;
	}

IL_002b:
	{
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_7 = __this->____activeStatement_3;
		NullCheck(L_7);
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_8 = L_7->____sql_0;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_9 = __this->____activeStatement_3;
		int32_t L_10 = ___i0;
		NullCheck(L_8);
		String_t* L_11;
		L_11 = VirtualFuncInvoker2< String_t*, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*, int32_t >::Invoke(25 /* System.String Mono.Data.Sqlite.SQLiteBase::ColumnName(Mono.Data.Sqlite.SqliteStatement,System.Int32) */, L_8, L_9, L_10);
		return L_11;
	}
}
// System.Data.DataTable Mono.Data.Sqlite.SqliteDataReader::GetSchemaTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* SqliteDataReader_GetSchemaTable_m6ED9773936D1816B46A81B5305D931AE303689F9 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, const RuntimeMethod* method) 
{
	{
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_0;
		L_0 = SqliteDataReader_GetSchemaTable_mE2492BADB6AEC4ACEC678492C53723F36B53553C(__this, (bool)1, (bool)0, NULL);
		return L_0;
	}
}
// System.Data.DataTable Mono.Data.Sqlite.SqliteDataReader::GetSchemaTable(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* SqliteDataReader_GetSchemaTable_mE2492BADB6AEC4ACEC678492C53723F36B53553C (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, bool ___wantUniqueInfo0, bool ___wantDefaultValue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbType_tAB317B97F25F156130CA6BD83234551B0937D738_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteConvert_t981F31162C63D0C2F780C2FC99738D60779F4D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27F29081E63F191FEECC19EEACB62C41A53F0145);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A4B52649FB9A1CBCE24C379CFC43E7B53DD4E4E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E6F47FA2A413B3D64AC4A42E136CD9A77578E9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4974B6D93610BFE46F8450FA8035E08CD01E39F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7245750688F8ABD9E50DA82005D421F8461EC1E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A575BA2F0B7DA6880319D9AA6AFDA9774B82C3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral962B1AB5AF45CFE050C375F3EBA6B679FCC4DE6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96373F17CBFAEA4614E7A3290A7BB4670417A00B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0A1C47352664275E2D7F477FA4C62FC016B575F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD1F69DF208EE1D08F928AC2228D76D90CA84260);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE92A469260B8CCEEF66ADD89872E7BD2F66E5AD5);
		s_Il2CppMethodInitialized = true;
	}
	DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* V_0 = NULL;
	DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* V_1 = NULL;
	DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* V_2 = NULL;
	DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	String_t* V_10 = NULL;
	String_t* V_11 = NULL;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_15 = NULL;
	SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* V_16 = NULL;
	DbDataReader_tA1A9729B3ED5125A693F4442984CCE7D721F452F* V_17 = NULL;
	DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* V_18 = NULL;
	RuntimeObject* V_19 = NULL;
	DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* V_20 = NULL;
	RuntimeObject* V_21 = NULL;
	int32_t V_22 = 0;
	RuntimeObject* V_23 = NULL;
	RuntimeObject* V_24 = NULL;
	{
		SqliteDataReader_CheckClosed_m7D7D9DFBB00848D65FB18C563730F999322ACFB4(__this, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_0 = (DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07*)il2cpp_codegen_object_new(DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DataTable__ctor_m8F8624080B0FE8C40F9A7D2A6814673920C86BD3(L_0, _stringLiteral8A575BA2F0B7DA6880319D9AA6AFDA9774B82C3D, NULL);
		V_0 = L_0;
		V_1 = (DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07*)NULL;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_5 = L_1;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_6 = L_2;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_7 = L_3;
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		NullCheck(L_4);
		DataTable_set_Locale_m7AF00397576C7E63EE5E85F9108624290B2F460F(L_4, L_5, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_6 = V_0;
		NullCheck(L_6);
		DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* L_7 = L_6->____columnCollection_7;
		il2cpp_codegen_runtime_class_init_inline(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var);
		String_t* L_8 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___ColumnName_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_7);
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_11;
		L_11 = DataColumnCollection_Add_m13FD034EA642599F062F3311626F07B3C14FCBEF(L_7, L_8, L_10, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_12 = V_0;
		NullCheck(L_12);
		DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* L_13 = L_12->____columnCollection_7;
		String_t* L_14 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___ColumnOrdinal_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_13);
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_17;
		L_17 = DataColumnCollection_Add_m13FD034EA642599F062F3311626F07B3C14FCBEF(L_13, L_14, L_16, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_18 = V_0;
		NullCheck(L_18);
		DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* L_19 = L_18->____columnCollection_7;
		String_t* L_20 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___ColumnSize_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		NullCheck(L_19);
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_23;
		L_23 = DataColumnCollection_Add_m13FD034EA642599F062F3311626F07B3C14FCBEF(L_19, L_20, L_22, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_24 = V_0;
		NullCheck(L_24);
		DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* L_25 = L_24->____columnCollection_7;
		String_t* L_26 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___NumericPrecision_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
		NullCheck(L_25);
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_29;
		L_29 = DataColumnCollection_Add_m13FD034EA642599F062F3311626F07B3C14FCBEF(L_25, L_26, L_28, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_30 = V_0;
		NullCheck(L_30);
		DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* L_31 = L_30->____columnCollection_7;
		String_t* L_32 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___NumericScale_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
		NullCheck(L_31);
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_35;
		L_35 = DataColumnCollection_Add_m13FD034EA642599F062F3311626F07B3C14FCBEF(L_31, L_32, L_34, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_36 = V_0;
		NullCheck(L_36);
		DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* L_37 = L_36->____columnCollection_7;
		String_t* L_38 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___IsUnique_13;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		NullCheck(L_37);
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_41;
		L_41 = DataColumnCollection_Add_m13FD034EA642599F062F3311626F07B3C14FCBEF(L_37, L_38, L_40, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_42 = V_0;
		NullCheck(L_42);
		DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* L_43 = L_42->____columnCollection_7;
		String_t* L_44 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___IsKey_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		NullCheck(L_43);
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_47;
		L_47 = DataColumnCollection_Add_m13FD034EA642599F062F3311626F07B3C14FCBEF(L_43, L_44, L_46, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_48 = V_0;
		NullCheck(L_48);
		DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* L_49 = L_48->____columnCollection_7;
		il2cpp_codegen_runtime_class_init_inline(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var);
		String_t* L_50 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___BaseServerName_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_52;
		L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
		NullCheck(L_49);
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_53;
		L_53 = DataColumnCollection_Add_m13FD034EA642599F062F3311626F07B3C14FCBEF(L_49, L_50, L_52, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_54 = V_0;
		NullCheck(L_54);
		DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* L_55 = L_54->____columnCollection_7;
		String_t* L_56 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___BaseCatalogName_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_57 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_58;
		L_58 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_57, NULL);
		NullCheck(L_55);
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_59;
		L_59 = DataColumnCollection_Add_m13FD034EA642599F062F3311626F07B3C14FCBEF(L_55, L_56, L_58, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_60 = V_0;
		NullCheck(L_60);
		DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* L_61 = L_60->____columnCollection_7;
		String_t* L_62 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___BaseColumnName_16;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_63 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_64;
		L_64 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_63, NULL);
		NullCheck(L_61);
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_65;
		L_65 = DataColumnCollection_Add_m13FD034EA642599F062F3311626F07B3C14FCBEF(L_61, L_62, L_64, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_66 = V_0;
		NullCheck(L_66);
		DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* L_67 = L_66->____columnCollection_7;
		String_t* L_68 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___BaseSchemaName_14;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		NullCheck(L_67);
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_71;
		L_71 = DataColumnCollection_Add_m13FD034EA642599F062F3311626F07B3C14FCBEF(L_67, L_68, L_70, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_72 = V_0;
		NullCheck(L_72);
		DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* L_73 = L_72->____columnCollection_7;
		String_t* L_74 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___BaseTableName_15;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_75 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_76;
		L_76 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_75, NULL);
		NullCheck(L_73);
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_77;
		L_77 = DataColumnCollection_Add_m13FD034EA642599F062F3311626F07B3C14FCBEF(L_73, L_74, L_76, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_78 = V_0;
		NullCheck(L_78);
		DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* L_79 = L_78->____columnCollection_7;
		String_t* L_80 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___DataType_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (Type_t_0_0_0_var) };
		Type_t* L_82;
		L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
		NullCheck(L_79);
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_83;
		L_83 = DataColumnCollection_Add_m13FD034EA642599F062F3311626F07B3C14FCBEF(L_79, L_80, L_82, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_84 = V_0;
		NullCheck(L_84);
		DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* L_85 = L_84->____columnCollection_7;
		String_t* L_86 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___AllowDBNull_9;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_88;
		L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
		NullCheck(L_85);
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_89;
		L_89 = DataColumnCollection_Add_m13FD034EA642599F062F3311626F07B3C14FCBEF(L_85, L_86, L_88, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_90 = V_0;
		NullCheck(L_90);
		DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* L_91 = L_90->____columnCollection_7;
		String_t* L_92 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___ProviderType_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_93 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_94;
		L_94 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_93, NULL);
		NullCheck(L_91);
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_95;
		L_95 = DataColumnCollection_Add_m13FD034EA642599F062F3311626F07B3C14FCBEF(L_91, L_92, L_94, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_96 = V_0;
		NullCheck(L_96);
		DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* L_97 = L_96->____columnCollection_7;
		String_t* L_98 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___IsAliased_10;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
		NullCheck(L_97);
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_101;
		L_101 = DataColumnCollection_Add_m13FD034EA642599F062F3311626F07B3C14FCBEF(L_97, L_98, L_100, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_102 = V_0;
		NullCheck(L_102);
		DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* L_103 = L_102->____columnCollection_7;
		String_t* L_104 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___IsExpression_11;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_105 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_106;
		L_106 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_105, NULL);
		NullCheck(L_103);
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_107;
		L_107 = DataColumnCollection_Add_m13FD034EA642599F062F3311626F07B3C14FCBEF(L_103, L_104, L_106, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_108 = V_0;
		NullCheck(L_108);
		DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* L_109 = L_108->____columnCollection_7;
		String_t* L_110 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___IsAutoIncrement_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_112;
		L_112 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_111, NULL);
		NullCheck(L_109);
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_113;
		L_113 = DataColumnCollection_Add_m13FD034EA642599F062F3311626F07B3C14FCBEF(L_109, L_110, L_112, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_114 = V_0;
		NullCheck(L_114);
		DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* L_115 = L_114->____columnCollection_7;
		String_t* L_116 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___IsRowVersion_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_117 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_118;
		L_118 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_117, NULL);
		NullCheck(L_115);
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_119;
		L_119 = DataColumnCollection_Add_m13FD034EA642599F062F3311626F07B3C14FCBEF(L_115, L_116, L_118, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_120 = V_0;
		NullCheck(L_120);
		DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* L_121 = L_120->____columnCollection_7;
		String_t* L_122 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___IsHidden_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_124;
		L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
		NullCheck(L_121);
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_125;
		L_125 = DataColumnCollection_Add_m13FD034EA642599F062F3311626F07B3C14FCBEF(L_121, L_122, L_124, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_126 = V_0;
		NullCheck(L_126);
		DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* L_127 = L_126->____columnCollection_7;
		String_t* L_128 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___IsLong_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_129 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_130;
		L_130 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_129, NULL);
		NullCheck(L_127);
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_131;
		L_131 = DataColumnCollection_Add_m13FD034EA642599F062F3311626F07B3C14FCBEF(L_127, L_128, L_130, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_132 = V_0;
		NullCheck(L_132);
		DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* L_133 = L_132->____columnCollection_7;
		String_t* L_134 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___IsReadOnly_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_136;
		L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
		NullCheck(L_133);
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_137;
		L_137 = DataColumnCollection_Add_m13FD034EA642599F062F3311626F07B3C14FCBEF(L_133, L_134, L_136, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_138 = V_0;
		NullCheck(L_138);
		DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* L_139 = L_138->____columnCollection_7;
		String_t* L_140 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___ProviderSpecificDataType_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_141 = { reinterpret_cast<intptr_t> (Type_t_0_0_0_var) };
		Type_t* L_142;
		L_142 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_141, NULL);
		NullCheck(L_139);
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_143;
		L_143 = DataColumnCollection_Add_m13FD034EA642599F062F3311626F07B3C14FCBEF(L_139, L_140, L_142, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_144 = V_0;
		NullCheck(L_144);
		DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* L_145 = L_144->____columnCollection_7;
		String_t* L_146 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___DefaultValue_9;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_147 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t* L_148;
		L_148 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_147, NULL);
		NullCheck(L_145);
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_149;
		L_149 = DataColumnCollection_Add_m13FD034EA642599F062F3311626F07B3C14FCBEF(L_145, L_146, L_148, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_150 = V_0;
		NullCheck(L_150);
		DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* L_151 = L_150->____columnCollection_7;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_152 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_153;
		L_153 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_152, NULL);
		NullCheck(L_151);
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_154;
		L_154 = DataColumnCollection_Add_m13FD034EA642599F062F3311626F07B3C14FCBEF(L_151, _stringLiteral962B1AB5AF45CFE050C375F3EBA6B679FCC4DE6E, L_153, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_155 = V_0;
		NullCheck(L_155);
		DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* L_156 = L_155->____columnCollection_7;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_157 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_158;
		L_158 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_157, NULL);
		NullCheck(L_156);
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_159;
		L_159 = DataColumnCollection_Add_m13FD034EA642599F062F3311626F07B3C14FCBEF(L_156, _stringLiteral96373F17CBFAEA4614E7A3290A7BB4670417A00B, L_158, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_160 = V_0;
		NullCheck(L_160);
		DataTable_BeginLoadData_mCCFE3F5AB9F5F7DEC77094BD477458830AE8F65D(L_160, NULL);
		V_8 = 0;
		goto IL_0a04;
	}

IL_02ff:
	{
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_161 = V_0;
		NullCheck(L_161);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_162;
		L_162 = DataTable_NewRow_m57151CE8F173A66E33B098CB580B5F5DE591CD02(L_161, NULL);
		V_3 = L_162;
		int32_t L_163 = V_8;
		SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* L_164;
		L_164 = SqliteDataReader_GetSQLiteType_mF30C2D2146437C63F6C241E49BFF92E2707D850D(__this, L_163, NULL);
		NullCheck(L_164);
		int32_t L_165 = L_164->___Type_0;
		V_9 = L_165;
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_166 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var);
		String_t* L_167 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___ColumnName_0;
		int32_t L_168 = V_8;
		String_t* L_169;
		L_169 = SqliteDataReader_GetName_m6590F7EC7E3191A2E09B2C82D306333750095642(__this, L_168, NULL);
		NullCheck(L_166);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_166, L_167, L_169, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_170 = V_3;
		String_t* L_171 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___ColumnOrdinal_1;
		int32_t L_172 = V_8;
		int32_t L_173 = L_172;
		RuntimeObject* L_174 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_173);
		NullCheck(L_170);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_170, L_171, L_174, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_175 = V_3;
		String_t* L_176 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___ColumnSize_2;
		int32_t L_177 = V_9;
		il2cpp_codegen_runtime_class_init_inline(SqliteConvert_t981F31162C63D0C2F780C2FC99738D60779F4D2A_il2cpp_TypeInfo_var);
		int32_t L_178;
		L_178 = SqliteConvert_DbTypeToColumnSize_m1B6EC860C4F98B3030B170515F04BC1427913280(L_177, NULL);
		int32_t L_179 = L_178;
		RuntimeObject* L_180 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_179);
		NullCheck(L_175);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_175, L_176, L_180, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_181 = V_3;
		String_t* L_182 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___NumericPrecision_3;
		int32_t L_183 = V_9;
		RuntimeObject* L_184;
		L_184 = SqliteConvert_DbTypeToNumericPrecision_m19163A4324DD3F7BE564679C6BFC07459EAEECE7(L_183, NULL);
		NullCheck(L_181);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_181, L_182, L_184, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_185 = V_3;
		String_t* L_186 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___NumericScale_4;
		int32_t L_187 = V_9;
		RuntimeObject* L_188;
		L_188 = SqliteConvert_DbTypeToNumericScale_m3482414C02952F1D4D9B465852FE3D1186DAFCAE(L_187, NULL);
		NullCheck(L_185);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_185, L_186, L_188, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_189 = V_3;
		String_t* L_190 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___ProviderType_6;
		int32_t L_191 = V_8;
		SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* L_192;
		L_192 = SqliteDataReader_GetSQLiteType_mF30C2D2146437C63F6C241E49BFF92E2707D850D(__this, L_191, NULL);
		NullCheck(L_192);
		int32_t L_193 = L_192->___Type_0;
		int32_t L_194 = L_193;
		RuntimeObject* L_195 = Box(DbType_tAB317B97F25F156130CA6BD83234551B0937D738_il2cpp_TypeInfo_var, &L_194);
		NullCheck(L_189);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_189, L_190, L_195, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_196 = V_3;
		String_t* L_197 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___IsLong_8;
		bool L_198 = ((bool)0);
		RuntimeObject* L_199 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_198);
		NullCheck(L_196);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_196, L_197, L_199, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_200 = V_3;
		String_t* L_201 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___AllowDBNull_9;
		bool L_202 = ((bool)1);
		RuntimeObject* L_203 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_202);
		NullCheck(L_200);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_200, L_201, L_203, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_204 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var);
		String_t* L_205 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___IsReadOnly_3;
		bool L_206 = ((bool)0);
		RuntimeObject* L_207 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_206);
		NullCheck(L_204);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_204, L_205, L_207, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_208 = V_3;
		String_t* L_209 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___IsRowVersion_4;
		bool L_210 = ((bool)0);
		RuntimeObject* L_211 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_210);
		NullCheck(L_208);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_208, L_209, L_211, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_212 = V_3;
		String_t* L_213 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___IsUnique_13;
		bool L_214 = ((bool)0);
		RuntimeObject* L_215 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_214);
		NullCheck(L_212);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_212, L_213, L_215, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_216 = V_3;
		String_t* L_217 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___IsKey_12;
		bool L_218 = ((bool)0);
		RuntimeObject* L_219 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_218);
		NullCheck(L_216);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_216, L_217, L_219, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_220 = V_3;
		String_t* L_221 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___IsAutoIncrement_1;
		bool L_222 = ((bool)0);
		RuntimeObject* L_223 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_222);
		NullCheck(L_220);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_220, L_221, L_223, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_224 = V_3;
		String_t* L_225 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___DataType_5;
		int32_t L_226 = V_8;
		Type_t* L_227;
		L_227 = SqliteDataReader_GetFieldType_mA7E7AB00F68AEC8495D19FC24BB64AD01B0C587E(__this, L_226, NULL);
		NullCheck(L_224);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_224, L_225, L_227, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_228 = V_3;
		String_t* L_229 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___IsHidden_2;
		bool L_230 = ((bool)0);
		RuntimeObject* L_231 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_230);
		NullCheck(L_228);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_228, L_229, L_231, NULL);
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_232 = __this->____command_1;
		NullCheck(L_232);
		SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_233 = L_232->____cnn_5;
		NullCheck(L_233);
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_234 = L_233->____sql_9;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_235 = __this->____activeStatement_3;
		int32_t L_236 = V_8;
		NullCheck(L_234);
		String_t* L_237;
		L_237 = VirtualFuncInvoker2< String_t*, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*, int32_t >::Invoke(28 /* System.String Mono.Data.Sqlite.SQLiteBase::ColumnOriginalName(Mono.Data.Sqlite.SqliteStatement,System.Int32) */, L_234, L_235, L_236);
		V_7 = L_237;
		String_t* L_238 = V_7;
		bool L_239;
		L_239 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_238, NULL);
		if (L_239)
		{
			goto IL_0465;
		}
	}
	{
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_240 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var);
		String_t* L_241 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___BaseColumnName_16;
		String_t* L_242 = V_7;
		NullCheck(L_240);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_240, L_241, L_242, NULL);
	}

IL_0465:
	{
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_243 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var);
		String_t* L_244 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___IsExpression_11;
		String_t* L_245 = V_7;
		bool L_246;
		L_246 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_245, NULL);
		bool L_247 = L_246;
		RuntimeObject* L_248 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_247);
		NullCheck(L_243);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_243, L_244, L_248, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_249 = V_3;
		String_t* L_250 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___IsAliased_10;
		int32_t L_251 = V_8;
		String_t* L_252;
		L_252 = SqliteDataReader_GetName_m6590F7EC7E3191A2E09B2C82D306333750095642(__this, L_251, NULL);
		String_t* L_253 = V_7;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_254;
		L_254 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		int32_t L_255;
		L_255 = String_Compare_mBD9ED6B35314B34F51A9985E350D33F6F56F85A9(L_252, L_253, (bool)1, L_254, NULL);
		bool L_256 = ((bool)((((int32_t)((((int32_t)L_255) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0));
		RuntimeObject* L_257 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_256);
		NullCheck(L_249);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_249, L_250, L_257, NULL);
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_258 = __this->____command_1;
		NullCheck(L_258);
		SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_259 = L_258->____cnn_5;
		NullCheck(L_259);
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_260 = L_259->____sql_9;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_261 = __this->____activeStatement_3;
		int32_t L_262 = V_8;
		NullCheck(L_260);
		String_t* L_263;
		L_263 = VirtualFuncInvoker2< String_t*, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*, int32_t >::Invoke(30 /* System.String Mono.Data.Sqlite.SQLiteBase::ColumnTableName(Mono.Data.Sqlite.SqliteStatement,System.Int32) */, L_260, L_261, L_262);
		V_4 = L_263;
		String_t* L_264 = V_4;
		bool L_265;
		L_265 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_264, NULL);
		if (L_265)
		{
			goto IL_04df;
		}
	}
	{
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_266 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var);
		String_t* L_267 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___BaseTableName_15;
		String_t* L_268 = V_4;
		NullCheck(L_266);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_266, L_267, L_268, NULL);
	}

IL_04df:
	{
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_269 = __this->____command_1;
		NullCheck(L_269);
		SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_270 = L_269->____cnn_5;
		NullCheck(L_270);
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_271 = L_270->____sql_9;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_272 = __this->____activeStatement_3;
		int32_t L_273 = V_8;
		NullCheck(L_271);
		String_t* L_274;
		L_274 = VirtualFuncInvoker2< String_t*, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*, int32_t >::Invoke(29 /* System.String Mono.Data.Sqlite.SQLiteBase::ColumnDatabaseName(Mono.Data.Sqlite.SqliteStatement,System.Int32) */, L_271, L_272, L_273);
		V_4 = L_274;
		String_t* L_275 = V_4;
		bool L_276;
		L_276 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_275, NULL);
		if (L_276)
		{
			goto IL_0517;
		}
	}
	{
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_277 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var);
		String_t* L_278 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___BaseCatalogName_6;
		String_t* L_279 = V_4;
		NullCheck(L_277);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_277, L_278, L_279, NULL);
	}

IL_0517:
	{
		V_10 = (String_t*)NULL;
		String_t* L_280 = V_7;
		bool L_281;
		L_281 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_280, NULL);
		if (L_281)
		{
			goto IL_09f2;
		}
	}
	{
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_282 = __this->____command_1;
		NullCheck(L_282);
		SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_283 = L_282->____cnn_5;
		NullCheck(L_283);
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_284 = L_283->____sql_9;
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_285 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var);
		String_t* L_286 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___BaseCatalogName_6;
		NullCheck(L_285);
		RuntimeObject* L_287;
		L_287 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_285, L_286, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_288 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var);
		String_t* L_289 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___BaseTableName_15;
		NullCheck(L_288);
		RuntimeObject* L_290;
		L_290 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_288, L_289, NULL);
		String_t* L_291 = V_7;
		NullCheck(L_284);
		VirtualActionInvoker8< String_t*, String_t*, String_t*, String_t**, String_t**, bool*, bool*, bool* >::Invoke(31 /* System.Void Mono.Data.Sqlite.SQLiteBase::ColumnMetaData(System.String,System.String,System.String,System.String&,System.String&,System.Boolean&,System.Boolean&,System.Boolean&) */, L_284, ((String_t*)CastclassSealed((RuntimeObject*)L_287, String_t_il2cpp_TypeInfo_var)), ((String_t*)CastclassSealed((RuntimeObject*)L_290, String_t_il2cpp_TypeInfo_var)), L_291, (&V_10), (&V_11), (&V_12), (&V_13), (&V_14));
		bool L_292 = V_12;
		if (L_292)
		{
			goto IL_0575;
		}
	}
	{
		bool L_293 = V_13;
		if (!L_293)
		{
			goto IL_0586;
		}
	}

IL_0575:
	{
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_294 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var);
		String_t* L_295 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___AllowDBNull_9;
		bool L_296 = ((bool)0);
		RuntimeObject* L_297 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_296);
		NullCheck(L_294);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_294, L_295, L_297, NULL);
	}

IL_0586:
	{
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_298 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var);
		String_t* L_299 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___IsKey_12;
		bool L_300 = V_13;
		bool L_301 = L_300;
		RuntimeObject* L_302 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_301);
		NullCheck(L_298);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_298, L_299, L_302, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_303 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var);
		String_t* L_304 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___IsAutoIncrement_1;
		bool L_305 = V_14;
		bool L_306 = L_305;
		RuntimeObject* L_307 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_306);
		NullCheck(L_303);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_303, L_304, L_307, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_308 = V_3;
		String_t* L_309 = V_11;
		NullCheck(L_308);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_308, _stringLiteral96373F17CBFAEA4614E7A3290A7BB4670417A00B, L_309, NULL);
		String_t* L_310 = V_10;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_311 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_312 = L_311;
		NullCheck(L_312);
		(L_312)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)40));
		NullCheck(L_310);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_313;
		L_313 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_310, L_312, NULL);
		V_15 = L_313;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_314 = V_15;
		NullCheck(L_314);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_314)->max_length))) <= ((int32_t)1)))
		{
			goto IL_06a6;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_315 = V_15;
		NullCheck(L_315);
		int32_t L_316 = 0;
		String_t* L_317 = (L_315)->GetAt(static_cast<il2cpp_array_size_t>(L_316));
		V_10 = L_317;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_318 = V_15;
		NullCheck(L_318);
		int32_t L_319 = 1;
		String_t* L_320 = (L_318)->GetAt(static_cast<il2cpp_array_size_t>(L_319));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_321 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_322 = L_321;
		NullCheck(L_322);
		(L_322)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)41));
		NullCheck(L_320);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_323;
		L_323 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_320, L_322, NULL);
		V_15 = L_323;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_324 = V_15;
		NullCheck(L_324);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_324)->max_length))) <= ((int32_t)1)))
		{
			goto IL_06a6;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_325 = V_15;
		NullCheck(L_325);
		int32_t L_326 = 0;
		String_t* L_327 = (L_325)->GetAt(static_cast<il2cpp_array_size_t>(L_326));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_328 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_329 = L_328;
		NullCheck(L_329);
		(L_329)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_330 = L_329;
		NullCheck(L_330);
		(L_330)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)46));
		NullCheck(L_327);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_331;
		L_331 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_327, L_330, NULL);
		V_15 = L_331;
		int32_t L_332 = V_8;
		SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* L_333;
		L_333 = SqliteDataReader_GetSQLiteType_mF30C2D2146437C63F6C241E49BFF92E2707D850D(__this, L_332, NULL);
		NullCheck(L_333);
		int32_t L_334 = L_333->___Type_0;
		if ((((int32_t)L_334) == ((int32_t)((int32_t)16))))
		{
			goto IL_063d;
		}
	}
	{
		int32_t L_335 = V_8;
		SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* L_336;
		L_336 = SqliteDataReader_GetSQLiteType_mF30C2D2146437C63F6C241E49BFF92E2707D850D(__this, L_335, NULL);
		NullCheck(L_336);
		int32_t L_337 = L_336->___Type_0;
		if ((!(((uint32_t)L_337) == ((uint32_t)1))))
		{
			goto IL_0660;
		}
	}

IL_063d:
	{
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_338 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var);
		String_t* L_339 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___ColumnSize_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_340 = V_15;
		NullCheck(L_340);
		int32_t L_341 = 0;
		String_t* L_342 = (L_340)->GetAt(static_cast<il2cpp_array_size_t>(L_341));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_343;
		L_343 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_344;
		L_344 = Convert_ToInt32_m0DED37AC1A3B9B431A9833BDBC4F5B37C2BC407A(L_342, L_343, NULL);
		int32_t L_345 = L_344;
		RuntimeObject* L_346 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_345);
		NullCheck(L_338);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_338, L_339, L_346, NULL);
		goto IL_06a6;
	}

IL_0660:
	{
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_347 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var);
		String_t* L_348 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___NumericPrecision_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_349 = V_15;
		NullCheck(L_349);
		int32_t L_350 = 0;
		String_t* L_351 = (L_349)->GetAt(static_cast<il2cpp_array_size_t>(L_350));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_352;
		L_352 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_353;
		L_353 = Convert_ToInt32_m0DED37AC1A3B9B431A9833BDBC4F5B37C2BC407A(L_351, L_352, NULL);
		int32_t L_354 = L_353;
		RuntimeObject* L_355 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_354);
		NullCheck(L_347);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_347, L_348, L_355, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_356 = V_15;
		NullCheck(L_356);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_356)->max_length))) <= ((int32_t)1)))
		{
			goto IL_06a6;
		}
	}
	{
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_357 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var);
		String_t* L_358 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___NumericScale_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_359 = V_15;
		NullCheck(L_359);
		int32_t L_360 = 1;
		String_t* L_361 = (L_359)->GetAt(static_cast<il2cpp_array_size_t>(L_360));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_362;
		L_362 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_363;
		L_363 = Convert_ToInt32_m0DED37AC1A3B9B431A9833BDBC4F5B37C2BC407A(L_361, L_362, NULL);
		int32_t L_364 = L_363;
		RuntimeObject* L_365 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_364);
		NullCheck(L_357);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_357, L_358, L_365, NULL);
	}

IL_06a6:
	{
		bool L_366 = ___wantDefaultValue1;
		if (!L_366)
		{
			goto IL_077e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_367;
		L_367 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_368 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_369 = L_368;
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_370 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var);
		String_t* L_371 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___BaseCatalogName_6;
		NullCheck(L_370);
		RuntimeObject* L_372;
		L_372 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_370, L_371, NULL);
		NullCheck(L_369);
		ArrayElementTypeCheck (L_369, L_372);
		(L_369)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_372);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_373 = L_369;
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_374 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var);
		String_t* L_375 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___BaseTableName_15;
		NullCheck(L_374);
		RuntimeObject* L_376;
		L_376 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_374, L_375, NULL);
		NullCheck(L_373);
		ArrayElementTypeCheck (L_373, L_376);
		(L_373)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_376);
		String_t* L_377;
		L_377 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_367, _stringLiteralDD1F69DF208EE1D08F928AC2228D76D90CA84260, L_373, NULL);
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_378 = __this->____command_1;
		NullCheck(L_378);
		SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_379 = L_378->____cnn_5;
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_380 = (SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25*)il2cpp_codegen_object_new(SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25_il2cpp_TypeInfo_var);
		NullCheck(L_380);
		SqliteCommand__ctor_mCC42928C2D28349679B40E9BFFE845FC85A407AF(L_380, L_377, L_379, NULL);
		V_16 = L_380;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_076f:
			{// begin finally (depth: 1)
				{
					SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_381 = V_16;
					if (!L_381)
					{
						goto IL_077d;
					}
				}
				{
					SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_382 = V_16;
					NullCheck(L_382);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_382);
				}

IL_077d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_383 = V_16;
				NullCheck(L_383);
				SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* L_384;
				L_384 = SqliteCommand_ExecuteReader_m2A6B8B48CE439B09687348450D40506868EB28AB(L_383, NULL);
				V_17 = L_384;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_075b_1:
					{// begin finally (depth: 2)
						{
							DbDataReader_tA1A9729B3ED5125A693F4442984CCE7D721F452F* L_385 = V_17;
							if (!L_385)
							{
								goto IL_0769_1;
							}
						}
						{
							DbDataReader_tA1A9729B3ED5125A693F4442984CCE7D721F452F* L_386 = V_17;
							NullCheck(L_386);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_386);
						}

IL_0769_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_074a_2;
					}

IL_06fd_2:
					{
						DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_387 = V_3;
						il2cpp_codegen_runtime_class_init_inline(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var);
						String_t* L_388 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___BaseColumnName_16;
						NullCheck(L_387);
						RuntimeObject* L_389;
						L_389 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_387, L_388, NULL);
						DbDataReader_tA1A9729B3ED5125A693F4442984CCE7D721F452F* L_390 = V_17;
						NullCheck(L_390);
						String_t* L_391;
						L_391 = VirtualFuncInvoker1< String_t*, int32_t >::Invoke(30 /* System.String System.Data.Common.DbDataReader::GetString(System.Int32) */, L_390, 1);
						il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
						CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_392;
						L_392 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
						int32_t L_393;
						L_393 = String_Compare_mBD9ED6B35314B34F51A9985E350D33F6F56F85A9(((String_t*)CastclassSealed((RuntimeObject*)L_389, String_t_il2cpp_TypeInfo_var)), L_391, (bool)1, L_392, NULL);
						if (L_393)
						{
							goto IL_074a_2;
						}
					}
					{
						DbDataReader_tA1A9729B3ED5125A693F4442984CCE7D721F452F* L_394 = V_17;
						NullCheck(L_394);
						bool L_395;
						L_395 = VirtualFuncInvoker1< bool, int32_t >::Invoke(33 /* System.Boolean System.Data.Common.DbDataReader::IsDBNull(System.Int32) */, L_394, 4);
						if (L_395)
						{
							goto IL_0745_2;
						}
					}
					{
						DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_396 = V_3;
						il2cpp_codegen_runtime_class_init_inline(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var);
						String_t* L_397 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___DefaultValue_9;
						DbDataReader_tA1A9729B3ED5125A693F4442984CCE7D721F452F* L_398 = V_17;
						NullCheck(L_398);
						RuntimeObject* L_399;
						L_399 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(19 /* System.Object System.Data.Common.DbDataReader::get_Item(System.Int32) */, L_398, 4);
						NullCheck(L_396);
						DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_396, L_397, L_399, NULL);
					}

IL_0745_2:
					{
						goto IL_0756_2;
					}

IL_074a_2:
					{
						DbDataReader_tA1A9729B3ED5125A693F4442984CCE7D721F452F* L_400 = V_17;
						NullCheck(L_400);
						bool L_401;
						L_401 = VirtualFuncInvoker0< bool >::Invoke(35 /* System.Boolean System.Data.Common.DbDataReader::Read() */, L_400);
						if (L_401)
						{
							goto IL_06fd_2;
						}
					}

IL_0756_2:
					{
						goto IL_076a_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_076a_1:
			{
				goto IL_077e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_077e:
	{
		bool L_402 = ___wantUniqueInfo0;
		if (!L_402)
		{
			goto IL_09b1;
		}
	}
	{
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_403 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var);
		String_t* L_404 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___BaseCatalogName_6;
		NullCheck(L_403);
		RuntimeObject* L_405;
		L_405 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_403, L_404, NULL);
		String_t* L_406 = V_5;
		bool L_407;
		L_407 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(((String_t*)CastclassSealed((RuntimeObject*)L_405, String_t_il2cpp_TypeInfo_var)), L_406, NULL);
		if (L_407)
		{
			goto IL_07bc;
		}
	}
	{
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_408 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var);
		String_t* L_409 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___BaseTableName_15;
		NullCheck(L_408);
		RuntimeObject* L_410;
		L_410 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_408, L_409, NULL);
		String_t* L_411 = V_6;
		bool L_412;
		L_412 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(((String_t*)CastclassSealed((RuntimeObject*)L_410, String_t_il2cpp_TypeInfo_var)), L_411, NULL);
		if (!L_412)
		{
			goto IL_0822;
		}
	}

IL_07bc:
	{
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_413 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var);
		String_t* L_414 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___BaseCatalogName_6;
		NullCheck(L_413);
		RuntimeObject* L_415;
		L_415 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_413, L_414, NULL);
		V_5 = ((String_t*)CastclassSealed((RuntimeObject*)L_415, String_t_il2cpp_TypeInfo_var));
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_416 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var);
		String_t* L_417 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___BaseTableName_15;
		NullCheck(L_416);
		RuntimeObject* L_418;
		L_418 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_416, L_417, NULL);
		V_6 = ((String_t*)CastclassSealed((RuntimeObject*)L_418, String_t_il2cpp_TypeInfo_var));
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_419 = __this->____command_1;
		NullCheck(L_419);
		SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_420 = L_419->____cnn_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_421 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_422 = L_421;
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_423 = V_3;
		String_t* L_424 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___BaseCatalogName_6;
		NullCheck(L_423);
		RuntimeObject* L_425;
		L_425 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_423, L_424, NULL);
		NullCheck(L_422);
		ArrayElementTypeCheck (L_422, ((String_t*)CastclassSealed((RuntimeObject*)L_425, String_t_il2cpp_TypeInfo_var)));
		(L_422)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)CastclassSealed((RuntimeObject*)L_425, String_t_il2cpp_TypeInfo_var)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_426 = L_422;
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_427 = V_3;
		String_t* L_428 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___BaseTableName_15;
		NullCheck(L_427);
		RuntimeObject* L_429;
		L_429 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_427, L_428, NULL);
		NullCheck(L_426);
		ArrayElementTypeCheck (L_426, ((String_t*)CastclassSealed((RuntimeObject*)L_429, String_t_il2cpp_TypeInfo_var)));
		(L_426)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)CastclassSealed((RuntimeObject*)L_429, String_t_il2cpp_TypeInfo_var)));
		NullCheck(L_420);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_430;
		L_430 = SqliteConnection_GetSchema_m58D119A3F36EF01F6291F4D257A4A0EE133A6A3F(L_420, _stringLiteral3A4B52649FB9A1CBCE24C379CFC43E7B53DD4E4E, L_426, NULL);
		V_1 = L_430;
	}

IL_0822:
	{
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_431 = V_1;
		NullCheck(L_431);
		DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738* L_432 = L_431->____rowCollection_6;
		NullCheck(L_432);
		RuntimeObject* L_433;
		L_433 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(10 /* System.Collections.IEnumerator System.Data.InternalDataCollectionBase::GetEnumerator() */, L_432);
		V_19 = L_433;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_099b:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_434 = V_19;
					V_24 = ((RuntimeObject*)IsInst((RuntimeObject*)L_434, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_435 = V_24;
					if (L_435)
					{
						goto IL_09a9;
					}
				}
				{
					return;
				}

IL_09a9:
				{
					RuntimeObject* L_436 = V_24;
					NullCheck(L_436);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_436);
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_098a_1;
			}

IL_0834_1:
			{
				RuntimeObject* L_437 = V_19;
				NullCheck(L_437);
				RuntimeObject* L_438;
				L_438 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_437);
				V_18 = ((DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388*)CastclassClass((RuntimeObject*)L_438, DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388_il2cpp_TypeInfo_var));
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_439 = __this->____command_1;
				NullCheck(L_439);
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_440 = L_439->____cnn_5;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_441 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_442 = L_441;
				DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_443 = V_3;
				il2cpp_codegen_runtime_class_init_inline(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var);
				String_t* L_444 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___BaseCatalogName_6;
				NullCheck(L_443);
				RuntimeObject* L_445;
				L_445 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_443, L_444, NULL);
				NullCheck(L_442);
				ArrayElementTypeCheck (L_442, ((String_t*)CastclassSealed((RuntimeObject*)L_445, String_t_il2cpp_TypeInfo_var)));
				(L_442)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)CastclassSealed((RuntimeObject*)L_445, String_t_il2cpp_TypeInfo_var)));
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_446 = L_442;
				DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_447 = V_3;
				il2cpp_codegen_runtime_class_init_inline(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var);
				String_t* L_448 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___BaseTableName_15;
				NullCheck(L_447);
				RuntimeObject* L_449;
				L_449 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_447, L_448, NULL);
				NullCheck(L_446);
				ArrayElementTypeCheck (L_446, ((String_t*)CastclassSealed((RuntimeObject*)L_449, String_t_il2cpp_TypeInfo_var)));
				(L_446)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)CastclassSealed((RuntimeObject*)L_449, String_t_il2cpp_TypeInfo_var)));
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_450 = L_446;
				DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_451 = V_18;
				NullCheck(L_451);
				RuntimeObject* L_452;
				L_452 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_451, _stringLiteral3E6F47FA2A413B3D64AC4A42E136CD9A77578E9D, NULL);
				NullCheck(L_450);
				ArrayElementTypeCheck (L_450, ((String_t*)CastclassSealed((RuntimeObject*)L_452, String_t_il2cpp_TypeInfo_var)));
				(L_450)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)((String_t*)CastclassSealed((RuntimeObject*)L_452, String_t_il2cpp_TypeInfo_var)));
				NullCheck(L_440);
				DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_453;
				L_453 = SqliteConnection_GetSchema_m58D119A3F36EF01F6291F4D257A4A0EE133A6A3F(L_440, _stringLiteralE92A469260B8CCEEF66ADD89872E7BD2F66E5AD5, L_450, NULL);
				V_2 = L_453;
				DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_454 = V_2;
				NullCheck(L_454);
				DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738* L_455 = L_454->____rowCollection_6;
				NullCheck(L_455);
				RuntimeObject* L_456;
				L_456 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(10 /* System.Collections.IEnumerator System.Data.InternalDataCollectionBase::GetEnumerator() */, L_455);
				V_21 = L_456;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0974_1:
					{// begin finally (depth: 2)
						{
							RuntimeObject* L_457 = V_21;
							V_23 = ((RuntimeObject*)IsInst((RuntimeObject*)L_457, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
							RuntimeObject* L_458 = V_23;
							if (L_458)
							{
								goto IL_0982_1;
							}
						}
						{
							return;
						}

IL_0982_1:
						{
							RuntimeObject* L_459 = V_23;
							NullCheck(L_459);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_459);
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0963_2;
					}

IL_08aa_2:
					{
						RuntimeObject* L_460 = V_21;
						NullCheck(L_460);
						RuntimeObject* L_461;
						L_461 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_460);
						V_20 = ((DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388*)CastclassClass((RuntimeObject*)L_461, DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388_il2cpp_TypeInfo_var));
						DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_462 = V_20;
						NullCheck(L_462);
						RuntimeObject* L_463;
						L_463 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_462, _stringLiteral27F29081E63F191FEECC19EEACB62C41A53F0145, NULL);
						String_t* L_464 = V_7;
						il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
						CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_465;
						L_465 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
						int32_t L_466;
						L_466 = String_Compare_mBD9ED6B35314B34F51A9985E350D33F6F56F85A9(((String_t*)CastclassSealed((RuntimeObject*)L_463, String_t_il2cpp_TypeInfo_var)), L_464, (bool)1, L_465, NULL);
						if (L_466)
						{
							goto IL_0963_2;
						}
					}
					{
						DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_467 = V_2;
						NullCheck(L_467);
						DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738* L_468 = L_467->____rowCollection_6;
						NullCheck(L_468);
						int32_t L_469;
						L_469 = DataRowCollection_get_Count_m1EC5C8B103735834509013DB3523A5E9A712A532(L_468, NULL);
						if ((!(((uint32_t)L_469) == ((uint32_t)1))))
						{
							goto IL_0918_2;
						}
					}
					{
						DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_470 = V_3;
						il2cpp_codegen_runtime_class_init_inline(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var);
						String_t* L_471 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___AllowDBNull_9;
						NullCheck(L_470);
						RuntimeObject* L_472;
						L_472 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_470, L_471, NULL);
						if (((*(bool*)((bool*)(bool*)UnBox(L_472, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))))
						{
							goto IL_0918_2;
						}
					}
					{
						DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_473 = V_3;
						il2cpp_codegen_runtime_class_init_inline(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var);
						String_t* L_474 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___IsUnique_13;
						DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_475 = V_18;
						NullCheck(L_475);
						RuntimeObject* L_476;
						L_476 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_475, _stringLiteral7245750688F8ABD9E50DA82005D421F8461EC1E6, NULL);
						NullCheck(L_473);
						DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_473, L_474, L_476, NULL);
					}

IL_0918_2:
					{
						DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_477 = V_2;
						NullCheck(L_477);
						DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738* L_478 = L_477->____rowCollection_6;
						NullCheck(L_478);
						int32_t L_479;
						L_479 = DataRowCollection_get_Count_m1EC5C8B103735834509013DB3523A5E9A712A532(L_478, NULL);
						if ((!(((uint32_t)L_479) == ((uint32_t)1))))
						{
							goto IL_095e_2;
						}
					}
					{
						DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_480 = V_18;
						NullCheck(L_480);
						RuntimeObject* L_481;
						L_481 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_480, _stringLiteral4974B6D93610BFE46F8450FA8035E08CD01E39F9, NULL);
						if (!((*(bool*)((bool*)(bool*)UnBox(L_481, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))))
						{
							goto IL_095e_2;
						}
					}
					{
						String_t* L_482 = V_10;
						bool L_483;
						L_483 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_482, NULL);
						if (L_483)
						{
							goto IL_095e_2;
						}
					}
					{
						String_t* L_484 = V_10;
						il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
						CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_485;
						L_485 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
						int32_t L_486;
						L_486 = String_Compare_mBD9ED6B35314B34F51A9985E350D33F6F56F85A9(L_484, _stringLiteralB0A1C47352664275E2D7F477FA4C62FC016B575F, (bool)1, L_485, NULL);
					}

IL_095e_2:
					{
						goto IL_096f_2;
					}

IL_0963_2:
					{
						RuntimeObject* L_487 = V_21;
						NullCheck(L_487);
						bool L_488;
						L_488 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_487);
						if (L_488)
						{
							goto IL_08aa_2;
						}
					}

IL_096f_2:
					{
						goto IL_098a_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_098a_1:
			{
				RuntimeObject* L_489 = V_19;
				NullCheck(L_489);
				bool L_490;
				L_490 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_489);
				if (L_490)
				{
					goto IL_0834_1;
				}
			}
			{
				goto IL_09b1;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_09b1:
	{
		String_t* L_491 = V_10;
		bool L_492;
		L_492 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_491, NULL);
		if (!L_492)
		{
			goto IL_09d9;
		}
	}
	{
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_493 = __this->____activeStatement_3;
		NullCheck(L_493);
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_494 = L_493->____sql_0;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_495 = __this->____activeStatement_3;
		int32_t L_496 = V_8;
		NullCheck(L_494);
		String_t* L_497;
		L_497 = VirtualFuncInvoker3< String_t*, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*, int32_t, int32_t* >::Invoke(27 /* System.String Mono.Data.Sqlite.SQLiteBase::ColumnType(Mono.Data.Sqlite.SqliteStatement,System.Int32,Mono.Data.Sqlite.TypeAffinity&) */, L_494, L_495, L_496, (&V_22));
		V_10 = L_497;
	}

IL_09d9:
	{
		String_t* L_498 = V_10;
		bool L_499;
		L_499 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_498, NULL);
		if (L_499)
		{
			goto IL_09f2;
		}
	}
	{
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_500 = V_3;
		String_t* L_501 = V_10;
		NullCheck(L_500);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_500, _stringLiteral962B1AB5AF45CFE050C375F3EBA6B679FCC4DE6E, L_501, NULL);
	}

IL_09f2:
	{
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_502 = V_0;
		NullCheck(L_502);
		DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738* L_503 = L_502->____rowCollection_6;
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_504 = V_3;
		NullCheck(L_503);
		DataRowCollection_Add_m2A36F7D52ED197BAF8002FECCA560B8AC6A28730(L_503, L_504, NULL);
		int32_t L_505 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_505, 1));
	}

IL_0a04:
	{
		int32_t L_506 = V_8;
		int32_t L_507 = __this->____fieldCount_6;
		if ((((int32_t)L_506) < ((int32_t)L_507)))
		{
			goto IL_02ff;
		}
	}
	{
		SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* L_508 = __this->____keyInfo_10;
		if (!L_508)
		{
			goto IL_0a28;
		}
	}
	{
		SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* L_509 = __this->____keyInfo_10;
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_510 = V_0;
		NullCheck(L_509);
		SqliteKeyReader_AppendSchemaTable_m5837A0D4BE76E9A87A279FF8605A9F49B563C047(L_509, L_510, NULL);
	}

IL_0a28:
	{
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_511 = V_0;
		NullCheck(L_511);
		DataTable_AcceptChanges_m6E3D96BB76C86F4F15B383F38DC2F98D534C524B(L_511, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_512 = V_0;
		NullCheck(L_512);
		DataTable_EndLoadData_mEBF53C25014EF5169B128298E62627255D1351F9(L_512, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_513 = V_0;
		return L_513;
	}
}
// System.String Mono.Data.Sqlite.SqliteDataReader::GetString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqliteDataReader_GetString_m6E35BA30FDD2D0B313097C79A8132928292248CC (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___i0;
		int32_t L_1;
		L_1 = SqliteDataReader_get_VisibleFieldCount_mCFD28B01F417A11A6B5A37C90BC60B28ACB82371(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_002b;
		}
	}
	{
		SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* L_2 = __this->____keyInfo_10;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* L_3 = __this->____keyInfo_10;
		int32_t L_4 = ___i0;
		int32_t L_5;
		L_5 = SqliteDataReader_get_VisibleFieldCount_mCFD28B01F417A11A6B5A37C90BC60B28ACB82371(__this, NULL);
		NullCheck(L_3);
		String_t* L_6;
		L_6 = SqliteKeyReader_GetString_m932CA1988B8E2E4CA5874238E9D7894D8B91A169(L_3, ((int32_t)il2cpp_codegen_subtract(L_4, L_5)), NULL);
		return L_6;
	}

IL_002b:
	{
		int32_t L_7 = ___i0;
		int32_t L_8;
		L_8 = SqliteDataReader_VerifyType_m0706F2D4C867B32BBCE6972D98D382C180FF395B(__this, L_7, ((int32_t)16), NULL);
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_9 = __this->____activeStatement_3;
		NullCheck(L_9);
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_10 = L_9->____sql_0;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_11 = __this->____activeStatement_3;
		int32_t L_12 = ___i0;
		NullCheck(L_10);
		String_t* L_13;
		L_13 = VirtualFuncInvoker2< String_t*, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*, int32_t >::Invoke(36 /* System.String Mono.Data.Sqlite.SQLiteBase::GetText(Mono.Data.Sqlite.SqliteStatement,System.Int32) */, L_10, L_11, L_12);
		return L_13;
	}
}
// System.Object Mono.Data.Sqlite.SqliteDataReader::GetValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqliteDataReader_GetValue_m597154EDAC65852F5FAC01B2670DB3D02EA73C63 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* V_0 = NULL;
	{
		int32_t L_0 = ___i0;
		int32_t L_1;
		L_1 = SqliteDataReader_get_VisibleFieldCount_mCFD28B01F417A11A6B5A37C90BC60B28ACB82371(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_002b;
		}
	}
	{
		SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* L_2 = __this->____keyInfo_10;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* L_3 = __this->____keyInfo_10;
		int32_t L_4 = ___i0;
		int32_t L_5;
		L_5 = SqliteDataReader_get_VisibleFieldCount_mCFD28B01F417A11A6B5A37C90BC60B28ACB82371(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SqliteKeyReader_GetValue_m5F351FD993D26420B737F569A7AF90971768338C(L_3, ((int32_t)il2cpp_codegen_subtract(L_4, L_5)), NULL);
		return L_6;
	}

IL_002b:
	{
		int32_t L_7 = ___i0;
		SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* L_8;
		L_8 = SqliteDataReader_GetSQLiteType_mF30C2D2146437C63F6C241E49BFF92E2707D850D(__this, L_7, NULL);
		V_0 = L_8;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_9 = __this->____activeStatement_3;
		NullCheck(L_9);
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_10 = L_9->____sql_0;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_11 = __this->____activeStatement_3;
		int32_t L_12 = ___i0;
		SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* L_13 = V_0;
		NullCheck(L_10);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*, int32_t, SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* >::Invoke(59 /* System.Object Mono.Data.Sqlite.SQLiteBase::GetValue(Mono.Data.Sqlite.SqliteStatement,System.Int32,Mono.Data.Sqlite.SQLiteType) */, L_10, L_11, L_12, L_13);
		return L_14;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteDataReader::GetValues(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteDataReader_GetValues_m253A2B54339F122B666790A0709BC476BCA3B1AF (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = SqliteDataReader_get_FieldCount_mB4B0391E5C8BF2762973F77A55B512151EC46239(__this, NULL);
		V_0 = L_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___values0;
		NullCheck(L_1);
		int32_t L_2 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) >= ((int32_t)L_2)))
		{
			goto IL_0014;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___values0;
		NullCheck(L_3);
		V_0 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
	}

IL_0014:
	{
		V_1 = 0;
		goto IL_0029;
	}

IL_001b:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___values0;
		int32_t L_5 = V_1;
		int32_t L_6 = V_1;
		RuntimeObject* L_7;
		L_7 = SqliteDataReader_GetValue_m597154EDAC65852F5FAC01B2670DB3D02EA73C63(__this, L_6, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0029:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteDataReader::IsDBNull(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteDataReader_IsDBNull_m9ED4003172562339E49335DF953CC67FD9BC8B57 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___i0;
		int32_t L_1;
		L_1 = SqliteDataReader_get_VisibleFieldCount_mCFD28B01F417A11A6B5A37C90BC60B28ACB82371(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_002b;
		}
	}
	{
		SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* L_2 = __this->____keyInfo_10;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* L_3 = __this->____keyInfo_10;
		int32_t L_4 = ___i0;
		int32_t L_5;
		L_5 = SqliteDataReader_get_VisibleFieldCount_mCFD28B01F417A11A6B5A37C90BC60B28ACB82371(__this, NULL);
		NullCheck(L_3);
		bool L_6;
		L_6 = SqliteKeyReader_IsDBNull_mACA38F05662BBF09D24C04E98171A2A02F7B4051(L_3, ((int32_t)il2cpp_codegen_subtract(L_4, L_5)), NULL);
		return L_6;
	}

IL_002b:
	{
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_7 = __this->____activeStatement_3;
		NullCheck(L_7);
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_8 = L_7->____sql_0;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_9 = __this->____activeStatement_3;
		int32_t L_10 = ___i0;
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*, int32_t >::Invoke(39 /* System.Boolean Mono.Data.Sqlite.SQLiteBase::IsNull(Mono.Data.Sqlite.SqliteStatement,System.Int32) */, L_8, L_9, L_10);
		return L_11;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteDataReader::NextResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteDataReader_NextResult_m01DB47FE1B604A2F98FA25F601F3632490D661E6 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, const RuntimeMethod* method) 
{
	SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* V_0 = NULL;
	int32_t V_1 = 0;
	{
		SqliteDataReader_CheckClosed_m7D7D9DFBB00848D65FB18C563730F999322ACFB4(__this, NULL);
		V_0 = (SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*)NULL;
	}

IL_0008:
	{
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_0 = __this->____activeStatement_3;
		if (!L_0)
		{
			goto IL_00cc;
		}
	}
	{
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_1 = V_0;
		if (L_1)
		{
			goto IL_00cc;
		}
	}
	{
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_2 = __this->____activeStatement_3;
		NullCheck(L_2);
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_3 = L_2->____sql_0;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_4 = __this->____activeStatement_3;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = VirtualFuncInvoker1< int32_t, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* >::Invoke(14 /* System.Int32 Mono.Data.Sqlite.SQLiteBase::Reset(Mono.Data.Sqlite.SqliteStatement) */, L_3, L_4);
		int32_t L_6 = __this->____commandBehavior_8;
		if (!((int32_t)((int32_t)L_6&1)))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_00c5;
	}

IL_0042:
	{
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_7 = __this->____command_1;
		int32_t L_8 = __this->____activeStatementIndex_2;
		NullCheck(L_7);
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_9;
		L_9 = SqliteCommand_GetStatement_mCC30E2C83A67AEAE7FE650D2AE9D4902C297829B(L_7, ((int32_t)il2cpp_codegen_add(L_8, 1)), NULL);
		V_0 = L_9;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_10 = V_0;
		if (L_10)
		{
			goto IL_0061;
		}
	}
	{
		goto IL_00ca;
	}

IL_0061:
	{
		int32_t L_11 = __this->____activeStatementIndex_2;
		__this->____activeStatementIndex_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_12 = V_0;
		NullCheck(L_12);
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_13 = L_12->____sql_0;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_14 = V_0;
		NullCheck(L_13);
		bool L_15;
		L_15 = VirtualFuncInvoker1< bool, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* >::Invoke(13 /* System.Boolean Mono.Data.Sqlite.SQLiteBase::Step(Mono.Data.Sqlite.SqliteStatement) */, L_13, L_14);
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_16 = V_0;
		NullCheck(L_16);
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_17 = L_16->____sql_0;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19;
		L_19 = VirtualFuncInvoker1< int32_t, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* >::Invoke(24 /* System.Int32 Mono.Data.Sqlite.SQLiteBase::ColumnCount(Mono.Data.Sqlite.SqliteStatement) */, L_17, L_18);
		if (L_19)
		{
			goto IL_00b8;
		}
	}
	{
		int32_t L_20 = __this->____rowsAffected_5;
		if ((!(((uint32_t)L_20) == ((uint32_t)(-1)))))
		{
			goto IL_00a0;
		}
	}
	{
		__this->____rowsAffected_5 = 0;
	}

IL_00a0:
	{
		int32_t L_21 = __this->____rowsAffected_5;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_22 = V_0;
		NullCheck(L_22);
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_23 = L_22->____sql_0;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 Mono.Data.Sqlite.SQLiteBase::get_Changes() */, L_23);
		__this->____rowsAffected_5 = ((int32_t)il2cpp_codegen_add(L_21, L_24));
	}

IL_00b8:
	{
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_25 = V_0;
		NullCheck(L_25);
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_26 = L_25->____sql_0;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_27 = V_0;
		NullCheck(L_26);
		int32_t L_28;
		L_28 = VirtualFuncInvoker1< int32_t, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* >::Invoke(14 /* System.Int32 Mono.Data.Sqlite.SQLiteBase::Reset(Mono.Data.Sqlite.SqliteStatement) */, L_26, L_27);
	}

IL_00c5:
	{
		goto IL_0042;
	}

IL_00ca:
	{
		return (bool)0;
	}

IL_00cc:
	{
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_29 = __this->____command_1;
		int32_t L_30 = __this->____activeStatementIndex_2;
		NullCheck(L_29);
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_31;
		L_31 = SqliteCommand_GetStatement_mCC30E2C83A67AEAE7FE650D2AE9D4902C297829B(L_29, ((int32_t)il2cpp_codegen_add(L_30, 1)), NULL);
		V_0 = L_31;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_32 = V_0;
		if (L_32)
		{
			goto IL_00e8;
		}
	}
	{
		return (bool)0;
	}

IL_00e8:
	{
		int32_t L_33 = __this->____readingState_4;
		if ((((int32_t)L_33) >= ((int32_t)1)))
		{
			goto IL_00fb;
		}
	}
	{
		__this->____readingState_4 = 1;
	}

IL_00fb:
	{
		int32_t L_34 = __this->____activeStatementIndex_2;
		__this->____activeStatementIndex_2 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_35 = V_0;
		NullCheck(L_35);
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_36 = L_35->____sql_0;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_37 = V_0;
		NullCheck(L_36);
		int32_t L_38;
		L_38 = VirtualFuncInvoker1< int32_t, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* >::Invoke(24 /* System.Int32 Mono.Data.Sqlite.SQLiteBase::ColumnCount(Mono.Data.Sqlite.SqliteStatement) */, L_36, L_37);
		V_1 = L_38;
		int32_t L_39 = __this->____commandBehavior_8;
		if (!((int32_t)((int32_t)L_39&2)))
		{
			goto IL_0129;
		}
	}
	{
		int32_t L_40 = V_1;
		if (L_40)
		{
			goto IL_0190;
		}
	}

IL_0129:
	{
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_41 = V_0;
		NullCheck(L_41);
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_42 = L_41->____sql_0;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_43 = V_0;
		NullCheck(L_42);
		bool L_44;
		L_44 = VirtualFuncInvoker1< bool, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* >::Invoke(13 /* System.Boolean Mono.Data.Sqlite.SQLiteBase::Step(Mono.Data.Sqlite.SqliteStatement) */, L_42, L_43);
		if (!L_44)
		{
			goto IL_0146;
		}
	}
	{
		__this->____readingState_4 = (-1);
		goto IL_0190;
	}

IL_0146:
	{
		int32_t L_45 = V_1;
		if (L_45)
		{
			goto IL_0189;
		}
	}
	{
		int32_t L_46 = __this->____rowsAffected_5;
		if ((!(((uint32_t)L_46) == ((uint32_t)(-1)))))
		{
			goto IL_015f;
		}
	}
	{
		__this->____rowsAffected_5 = 0;
	}

IL_015f:
	{
		int32_t L_47 = __this->____rowsAffected_5;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_48 = V_0;
		NullCheck(L_48);
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_49 = L_48->____sql_0;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 Mono.Data.Sqlite.SQLiteBase::get_Changes() */, L_49);
		__this->____rowsAffected_5 = ((int32_t)il2cpp_codegen_add(L_47, L_50));
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_51 = V_0;
		NullCheck(L_51);
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_52 = L_51->____sql_0;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_53 = V_0;
		NullCheck(L_52);
		int32_t L_54;
		L_54 = VirtualFuncInvoker1< int32_t, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* >::Invoke(14 /* System.Int32 Mono.Data.Sqlite.SQLiteBase::Reset(Mono.Data.Sqlite.SqliteStatement) */, L_52, L_53);
		goto IL_0008;
	}

IL_0189:
	{
		__this->____readingState_4 = 1;
	}

IL_0190:
	{
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_55 = V_0;
		__this->____activeStatement_3 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeStatement_3), (void*)L_55);
		int32_t L_56 = V_1;
		__this->____fieldCount_6 = L_56;
		__this->____fieldTypeArray_7 = (SQLiteTypeU5BU5D_t9577E5DC506B1996F06A2CFA7094F5F7BD8A4EE2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fieldTypeArray_7), (void*)(SQLiteTypeU5BU5D_t9577E5DC506B1996F06A2CFA7094F5F7BD8A4EE2*)NULL);
		int32_t L_57 = __this->____commandBehavior_8;
		if (!((int32_t)((int32_t)L_57&4)))
		{
			goto IL_01b8;
		}
	}
	{
		SqliteDataReader_LoadKeyInfo_m43290426BEB37F77967805DAB660790F75BB736C(__this, NULL);
	}

IL_01b8:
	{
		return (bool)1;
	}
	{
		goto IL_0008;
	}
}
// Mono.Data.Sqlite.SQLiteType Mono.Data.Sqlite.SqliteDataReader::GetSQLiteType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* SqliteDataReader_GetSQLiteType_mF30C2D2146437C63F6C241E49BFF92E2707D850D (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteTypeU5BU5D_t9577E5DC506B1996F06A2CFA7094F5F7BD8A4EE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteConvert_t981F31162C63D0C2F780C2FC99738D60779F4D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* V_0 = NULL;
	{
		SQLiteTypeU5BU5D_t9577E5DC506B1996F06A2CFA7094F5F7BD8A4EE2* L_0 = __this->____fieldTypeArray_7;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1;
		L_1 = SqliteDataReader_get_VisibleFieldCount_mCFD28B01F417A11A6B5A37C90BC60B28ACB82371(__this, NULL);
		SQLiteTypeU5BU5D_t9577E5DC506B1996F06A2CFA7094F5F7BD8A4EE2* L_2 = (SQLiteTypeU5BU5D_t9577E5DC506B1996F06A2CFA7094F5F7BD8A4EE2*)(SQLiteTypeU5BU5D_t9577E5DC506B1996F06A2CFA7094F5F7BD8A4EE2*)SZArrayNew(SQLiteTypeU5BU5D_t9577E5DC506B1996F06A2CFA7094F5F7BD8A4EE2_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->____fieldTypeArray_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fieldTypeArray_7), (void*)L_2);
	}

IL_001c:
	{
		SQLiteTypeU5BU5D_t9577E5DC506B1996F06A2CFA7094F5F7BD8A4EE2* L_3 = __this->____fieldTypeArray_7;
		int32_t L_4 = ___i0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (L_6)
		{
			goto IL_0036;
		}
	}
	{
		SQLiteTypeU5BU5D_t9577E5DC506B1996F06A2CFA7094F5F7BD8A4EE2* L_7 = __this->____fieldTypeArray_7;
		int32_t L_8 = ___i0;
		SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* L_9 = (SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A*)il2cpp_codegen_object_new(SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		SQLiteType__ctor_m870B050801321BDF503A0FFBC4A5C997CD489581(L_9, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A*)L_9);
	}

IL_0036:
	{
		SQLiteTypeU5BU5D_t9577E5DC506B1996F06A2CFA7094F5F7BD8A4EE2* L_10 = __this->____fieldTypeArray_7;
		int32_t L_11 = ___i0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_0 = L_13;
		SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = L_14->___Affinity_1;
		if (L_15)
		{
			goto IL_0077;
		}
	}
	{
		SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* L_16 = V_0;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_17 = __this->____activeStatement_3;
		NullCheck(L_17);
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_18 = L_17->____sql_0;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_19 = __this->____activeStatement_3;
		int32_t L_20 = ___i0;
		SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* L_21 = V_0;
		NullCheck(L_21);
		int32_t* L_22 = (&L_21->___Affinity_1);
		NullCheck(L_18);
		String_t* L_23;
		L_23 = VirtualFuncInvoker3< String_t*, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*, int32_t, int32_t* >::Invoke(27 /* System.String Mono.Data.Sqlite.SQLiteBase::ColumnType(Mono.Data.Sqlite.SqliteStatement,System.Int32,Mono.Data.Sqlite.TypeAffinity&) */, L_18, L_19, L_20, L_22);
		il2cpp_codegen_runtime_class_init_inline(SqliteConvert_t981F31162C63D0C2F780C2FC99738D60779F4D2A_il2cpp_TypeInfo_var);
		int32_t L_24;
		L_24 = SqliteConvert_TypeNameToDbType_mD9F9508A66C37C498CBC9A259CE7968A7E57D539(L_23, NULL);
		NullCheck(L_16);
		L_16->___Type_0 = L_24;
		goto IL_0094;
	}

IL_0077:
	{
		SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* L_25 = V_0;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_26 = __this->____activeStatement_3;
		NullCheck(L_26);
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_27 = L_26->____sql_0;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_28 = __this->____activeStatement_3;
		int32_t L_29 = ___i0;
		NullCheck(L_27);
		int32_t L_30;
		L_30 = VirtualFuncInvoker2< int32_t, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*, int32_t >::Invoke(26 /* Mono.Data.Sqlite.TypeAffinity Mono.Data.Sqlite.SQLiteBase::ColumnAffinity(Mono.Data.Sqlite.SqliteStatement,System.Int32) */, L_27, L_28, L_29);
		NullCheck(L_25);
		L_25->___Affinity_1 = L_30;
	}

IL_0094:
	{
		SQLiteType_t65948B258798DC3A4D5083CA9B8A0A557593DC3A* L_31 = V_0;
		return L_31;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteDataReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteDataReader_Read_m922887E94EA18EDCEA038E32E49F9F0ADE1BC588 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, const RuntimeMethod* method) 
{
	{
		SqliteDataReader_CheckClosed_m7D7D9DFBB00848D65FB18C563730F999322ACFB4(__this, NULL);
		int32_t L_0 = __this->____readingState_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_001b;
		}
	}
	{
		__this->____readingState_4 = 0;
		return (bool)1;
	}

IL_001b:
	{
		int32_t L_1 = __this->____readingState_4;
		if (L_1)
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_2 = __this->____commandBehavior_8;
		if (((int32_t)((int32_t)L_2&8)))
		{
			goto IL_0066;
		}
	}
	{
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_3 = __this->____activeStatement_3;
		NullCheck(L_3);
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_4 = L_3->____sql_0;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_5 = __this->____activeStatement_3;
		NullCheck(L_4);
		bool L_6;
		L_6 = VirtualFuncInvoker1< bool, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* >::Invoke(13 /* System.Boolean Mono.Data.Sqlite.SQLiteBase::Step(Mono.Data.Sqlite.SqliteStatement) */, L_4, L_5);
		if (!L_6)
		{
			goto IL_0066;
		}
	}
	{
		SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* L_7 = __this->____keyInfo_10;
		if (!L_7)
		{
			goto IL_0064;
		}
	}
	{
		SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* L_8 = __this->____keyInfo_10;
		NullCheck(L_8);
		SqliteKeyReader_Reset_m77133DC9BEB9F5A64B8B0403B34FD81226E1AB23(L_8, NULL);
	}

IL_0064:
	{
		return (bool)1;
	}

IL_0066:
	{
		__this->____readingState_4 = 1;
	}

IL_006d:
	{
		return (bool)0;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteDataReader::get_RecordsAffected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteDataReader_get_RecordsAffected_mB6DF434AFAC14DECCB9F8FBEB4D2806B6E39B2A3 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->____rowsAffected_5;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0018;
	}

IL_0012:
	{
		int32_t L_1 = __this->____rowsAffected_5;
		G_B3_0 = L_1;
	}

IL_0018:
	{
		return G_B3_0;
	}
}
// System.Object Mono.Data.Sqlite.SqliteDataReader::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqliteDataReader_get_Item_mFB7205FF14DBEAA9D31F8857DC861D7F4C4AD826 (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___i0;
		RuntimeObject* L_1;
		L_1 = SqliteDataReader_GetValue_m597154EDAC65852F5FAC01B2670DB3D02EA73C63(__this, L_0, NULL);
		return L_1;
	}
}
// System.Void Mono.Data.Sqlite.SqliteDataReader::LoadKeyInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteDataReader_LoadKeyInfo_m43290426BEB37F77967805DAB660790F75BB736C (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* L_0 = __this->____keyInfo_10;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* L_1 = __this->____keyInfo_10;
		NullCheck(L_1);
		SqliteKeyReader_Dispose_m51076DAD24F708AE7728F075DA4F040C9B1DA1DF(L_1, NULL);
	}

IL_0016:
	{
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_2 = __this->____command_1;
		NullCheck(L_2);
		SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_3 = L_2->____cnn_5;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_4 = __this->____activeStatement_3;
		SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* L_5 = (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF*)il2cpp_codegen_object_new(SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		SqliteKeyReader__ctor_mC1F70DE7D7E555DC237FE14D7D13E205341E543E(L_5, L_3, __this, L_4, NULL);
		__this->____keyInfo_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyInfo_10), (void*)L_5);
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
// System.Void Mono.Data.Sqlite.SQLiteEnlistment::.ctor(Mono.Data.Sqlite.SqliteConnection,System.Transactions.Transaction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteEnlistment__ctor_m0910922EDDB7B1E7F0B740C57E965E8922EA2781 (SQLiteEnlistment_tD69C41BBAEDD2F8ED9EDD2F9B8690BC4BB4BDAF5* __this, SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* ___cnn0, Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* ___scope1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_0 = ___cnn0;
		NullCheck(L_0);
		SqliteTransaction_t5CFD0E46CAF0C4FB991C2AD83395F245F6648542* L_1;
		L_1 = SqliteConnection_BeginTransaction_mB9425D9F4D2F42985FA2086F616BB4C135CF8B27(L_0, NULL);
		__this->____transaction_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____transaction_0), (void*)L_1);
		Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* L_2 = ___scope1;
		__this->____scope_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____scope_1), (void*)L_2);
		__this->____disposeConnection_2 = (bool)0;
		Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* L_3 = __this->____scope_1;
		NullCheck(L_3);
		Enlistment_tDF858DEFBA405B6DF5EF4DC746A92C59DE007552* L_4;
		L_4 = Transaction_EnlistVolatile_m988B22FDB2386F15912916E43600B19BBADCFF4F(L_3, __this, 0, NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SQLiteEnlistment::Cleanup(Mono.Data.Sqlite.SqliteConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteEnlistment_Cleanup_mACC653D05951092843E0BC5B6682E4238D6F1D71 (SQLiteEnlistment_tD69C41BBAEDD2F8ED9EDD2F9B8690BC4BB4BDAF5* __this, SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* ___cnn0, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____disposeConnection_2;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_1 = ___cnn0;
		NullCheck(L_1);
		Component_Dispose_m7D0C063EA18E1FFA59CB369232131150372DC7B2(L_1, NULL);
	}

IL_0011:
	{
		__this->____transaction_0 = (SqliteTransaction_t5CFD0E46CAF0C4FB991C2AD83395F245F6648542*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____transaction_0), (void*)(SqliteTransaction_t5CFD0E46CAF0C4FB991C2AD83395F245F6648542*)NULL);
		__this->____scope_1 = (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____scope_1), (void*)(Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD*)NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SQLiteEnlistment::Rollback(System.Transactions.Enlistment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteEnlistment_Rollback_mEB9BC7C91E0C50D9212F91F11A2E6F101F15EC65 (SQLiteEnlistment_tD69C41BBAEDD2F8ED9EDD2F9B8690BC4BB4BDAF5* __this, Enlistment_tDF858DEFBA405B6DF5EF4DC746A92C59DE007552* ___enlistment0, const RuntimeMethod* method) 
{
	SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* V_0 = NULL;
	{
		SqliteTransaction_t5CFD0E46CAF0C4FB991C2AD83395F245F6648542* L_0 = __this->____transaction_0;
		NullCheck(L_0);
		SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_1 = L_0->____cnn_1;
		V_0 = L_1;
		SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_2 = V_0;
		NullCheck(L_2);
		L_2->____enlistment_8 = (SQLiteEnlistment_tD69C41BBAEDD2F8ED9EDD2F9B8690BC4BB4BDAF5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____enlistment_8), (void*)(SQLiteEnlistment_tD69C41BBAEDD2F8ED9EDD2F9B8690BC4BB4BDAF5*)NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{// begin finally (depth: 1)
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_3 = V_0;
				SQLiteEnlistment_Cleanup_mACC653D05951092843E0BC5B6682E4238D6F1D71(__this, L_3, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			SqliteTransaction_t5CFD0E46CAF0C4FB991C2AD83395F245F6648542* L_4 = __this->____transaction_0;
			NullCheck(L_4);
			SqliteTransaction_Rollback_m1574B691808CCDC9C7CA953804DD1B782362E9FD(L_4, NULL);
			Enlistment_tDF858DEFBA405B6DF5EF4DC746A92C59DE007552* L_5 = ___enlistment0;
			NullCheck(L_5);
			Enlistment_Done_mA9F7878F361CF3BFE6964A1166939ECE0B39471F(L_5, NULL);
			goto IL_0031;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
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
// System.Void Mono.Data.Sqlite.SqliteException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteException__ctor_m337C3852AEF7765C45585CCEAE94D0132AF89FC0 (SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___context1;
		DbException__ctor_m8790FD79BAB5D0EC6D009CA61C7898D0168169B4(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteException__ctor_mBF16E34A07E29BCBC8E75B28E620A92571560E8D (SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2* __this, int32_t ___errorCode0, String_t* ___extendedInformation1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___errorCode0;
		String_t* L_1 = ___extendedInformation1;
		il2cpp_codegen_runtime_class_init_inline(SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = SqliteException_GetStockErrorMessage_m584AB18829A80EC5DFB75052E61F0CDDCD58442C(L_0, L_1, NULL);
		DbException__ctor_mCB502BADAA1569265CC09F37C5F67D71C195E53C(__this, L_2, NULL);
		int32_t L_3 = ___errorCode0;
		__this->____errorCode_18 = L_3;
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteException__ctor_m8EEDACDE5E237E5CECFDA01DEFC2CF2F56911D95 (SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2* __this, const RuntimeMethod* method) 
{
	{
		DbException__ctor_m4CF67EE7C017E7BD560E9A1ED5652BAA308FF147(__this, NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteException::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteException__cctor_m4D5F52003469709C988D1F7DCD7556DF96E843D6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D3DEA7F69B00B4CC1DC603DCB37E82428E4B1B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3802BFE48EFD0E592FE72A2DB9F0BA60169F279E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A04B66E08FA3C8299F6758BF79D3F909AED7B52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A4A2FDF76C902421832CE257928AFAF1450ECA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C17C893DB3796C20700D4C1D24CA50A8D81100D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C459290DA0BC5C165717333B050844A9F606FBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F88B0E463EABBEFBD51CF5AF7B9C967B97916B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42F73805878F8235BBEB23B2F5690668A3131E3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral473447DDFB82E40B2A42B01F455BD8D910D4555B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49949E7446022453CD59BFF2D6329A6F58C2D2BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B85416C037BF932C56E10E6EFE7189E571F9C1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D734F2066F3FDFBA2349C35613BDC56CFA8856C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56EF313ED81DF72F15ECF32471156367026E58DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66471CEAFEB2162893D84AF5B00227F335777AAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B26E44CAC9AAFEEFB048D6669E784CE58F859A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76BA1AFE3DCE550F0CD0C4AC6739113BC80C54B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral839481F78B5DCE81901DCFD34A79C694148FC1F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral875AB122E8B446E69297427A5F4087AAAD521399);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DDCC73746EE7D080F817B0E82CBCACE579B6C75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E18DA905AFCA22B37A911B950FEAAC08DBAC4C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9985360791324B8CF0E915230DB33DE48A6267A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D3ADA066DEAFCA09355C40B3137C5CA140B0A22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FBA971FF224748F29CAD5F223B35109AAB87172);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB12ED1901A976BC2A3B8A25F5BE6890167C7C629);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE476E19E3D8F8866D67DF8D9FD1B14305D877C48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE757C290683295310C9A9ECC5F63D04A80C905DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB858DF3F2BB98A18F92E8A4AC7E301F1903D719);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)27));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral76BA1AFE3DCE550F0CD0C4AC6739113BC80C54B1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral76BA1AFE3DCE550F0CD0C4AC6739113BC80C54B1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral66471CEAFEB2162893D84AF5B00227F335777AAD);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral66471CEAFEB2162893D84AF5B00227F335777AAD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral9D3ADA066DEAFCA09355C40B3137C5CA140B0A22);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral9D3ADA066DEAFCA09355C40B3137C5CA140B0A22);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral4B85416C037BF932C56E10E6EFE7189E571F9C1A);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral4B85416C037BF932C56E10E6EFE7189E571F9C1A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralE757C290683295310C9A9ECC5F63D04A80C905DC);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralE757C290683295310C9A9ECC5F63D04A80C905DC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral3C17C893DB3796C20700D4C1D24CA50A8D81100D);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral3C17C893DB3796C20700D4C1D24CA50A8D81100D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral473447DDFB82E40B2A42B01F455BD8D910D4555B);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral473447DDFB82E40B2A42B01F455BD8D910D4555B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral3C459290DA0BC5C165717333B050844A9F606FBE);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral3C459290DA0BC5C165717333B050844A9F606FBE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral9985360791324B8CF0E915230DB33DE48A6267A8);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral9985360791324B8CF0E915230DB33DE48A6267A8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral6B26E44CAC9AAFEEFB048D6669E784CE58F859A1);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral6B26E44CAC9AAFEEFB048D6669E784CE58F859A1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral3A04B66E08FA3C8299F6758BF79D3F909AED7B52);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral3A04B66E08FA3C8299F6758BF79D3F909AED7B52);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralFB858DF3F2BB98A18F92E8A4AC7E301F1903D719);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteralFB858DF3F2BB98A18F92E8A4AC7E301F1903D719);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral56EF313ED81DF72F15ECF32471156367026E58DB);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral56EF313ED81DF72F15ECF32471156367026E58DB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral839481F78B5DCE81901DCFD34A79C694148FC1F9);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral839481F78B5DCE81901DCFD34A79C694148FC1F9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralB12ED1901A976BC2A3B8A25F5BE6890167C7C629);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteralB12ED1901A976BC2A3B8A25F5BE6890167C7C629);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral49949E7446022453CD59BFF2D6329A6F58C2D2BD);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteral49949E7446022453CD59BFF2D6329A6F58C2D2BD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral3F88B0E463EABBEFBD51CF5AF7B9C967B97916B0);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteral3F88B0E463EABBEFBD51CF5AF7B9C967B97916B0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral0D3DEA7F69B00B4CC1DC603DCB37E82428E4B1B9);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)_stringLiteral0D3DEA7F69B00B4CC1DC603DCB37E82428E4B1B9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteralE476E19E3D8F8866D67DF8D9FD1B14305D877C48);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)_stringLiteralE476E19E3D8F8866D67DF8D9FD1B14305D877C48);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral875AB122E8B446E69297427A5F4087AAAD521399);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (String_t*)_stringLiteral875AB122E8B446E69297427A5F4087AAAD521399);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral8DDCC73746EE7D080F817B0E82CBCACE579B6C75);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (String_t*)_stringLiteral8DDCC73746EE7D080F817B0E82CBCACE579B6C75);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral3802BFE48EFD0E592FE72A2DB9F0BA60169F279E);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (String_t*)_stringLiteral3802BFE48EFD0E592FE72A2DB9F0BA60169F279E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral42F73805878F8235BBEB23B2F5690668A3131E3D);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (String_t*)_stringLiteral42F73805878F8235BBEB23B2F5690668A3131E3D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral9FBA971FF224748F29CAD5F223B35109AAB87172);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (String_t*)_stringLiteral9FBA971FF224748F29CAD5F223B35109AAB87172);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral8E18DA905AFCA22B37A911B950FEAAC08DBAC4C0);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (String_t*)_stringLiteral8E18DA905AFCA22B37A911B950FEAAC08DBAC4C0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral4D734F2066F3FDFBA2349C35613BDC56CFA8856C);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (String_t*)_stringLiteral4D734F2066F3FDFBA2349C35613BDC56CFA8856C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteral3A4A2FDF76C902421832CE257928AFAF1450ECA6);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (String_t*)_stringLiteral3A4A2FDF76C902421832CE257928AFAF1450ECA6);
		((SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2_StaticFields*)il2cpp_codegen_static_fields_for(SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2_il2cpp_TypeInfo_var))->____errorMessages_19 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&((SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2_StaticFields*)il2cpp_codegen_static_fields_for(SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2_il2cpp_TypeInfo_var))->____errorMessages_19), (void*)L_27);
		return;
	}
}
// System.String Mono.Data.Sqlite.SqliteException::GetStockErrorMessage(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqliteException_GetStockErrorMessage_m584AB18829A80EC5DFB75052E61F0CDDCD58442C (int32_t ___errorCode0, String_t* ___errorMessage1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___errorMessage1;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		___errorMessage1 = L_1;
	}

IL_000d:
	{
		String_t* L_2 = ___errorMessage1;
		NullCheck(L_2);
		int32_t L_3 = L_2->____stringLength_4;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_4 = ___errorMessage1;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, L_4, NULL);
		___errorMessage1 = L_5;
	}

IL_0026:
	{
		int32_t L_6 = ___errorCode0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_7 = ___errorCode0;
		il2cpp_codegen_runtime_class_init_inline(SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = ((SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2_StaticFields*)il2cpp_codegen_static_fields_for(SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2_il2cpp_TypeInfo_var))->____errorMessages_19;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_003d;
		}
	}

IL_003a:
	{
		___errorCode0 = 1;
	}

IL_003d:
	{
		il2cpp_codegen_runtime_class_init_inline(SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = ((SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2_StaticFields*)il2cpp_codegen_static_fields_for(SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2_il2cpp_TypeInfo_var))->____errorMessages_19;
		int32_t L_10 = ___errorCode0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		String_t* L_13 = ___errorMessage1;
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_12, L_13, NULL);
		return L_14;
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
// System.Void Mono.Data.Sqlite.SqliteFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteFactory__ctor_m41153EE18C424A022E204F1553E95EB3575004AF (SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E* __this, const RuntimeMethod* method) 
{
	{
		DbProviderFactory__ctor_mAE263141EFDA24C64DD22647444306439BC7F640(__this, NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteFactory::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteFactory__cctor_m28BA821B43603C0F41BCE78C284396E1D8CDA062 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteFactory__cctor_m28BA821B43603C0F41BCE78C284396E1D8CDA062_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m50BCE4A0EB39D97381431E6CC2576C50DCE69C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A27ACE1504E7EE8CCCA8D5C51C1ED73C20A1A7C);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E* L_0 = (SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E*)il2cpp_codegen_object_new(SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SqliteFactory__ctor_m41153EE18C424A022E204F1553E95EB3575004AF(L_0, NULL);
		((SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_il2cpp_TypeInfo_var))->___Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_il2cpp_TypeInfo_var))->___Instance_0), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = il2cpp_codegen_get_type(_stringLiteral3A27ACE1504E7EE8CCCA8D5C51C1ED73C20A1A7C, (bool)0, Type_GetType_m50BCE4A0EB39D97381431E6CC2576C50DCE69C67_RuntimeMethod_var, SqliteFactory__cctor_m28BA821B43603C0F41BCE78C284396E1D8CDA062_RuntimeMethod_var);
		((SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_il2cpp_TypeInfo_var))->____dbProviderServicesType_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_il2cpp_TypeInfo_var))->____dbProviderServicesType_1), (void*)L_1);
		return;
	}
}
// System.Object Mono.Data.Sqlite.SqliteFactory::System.IServiceProvider.GetService(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqliteFactory_System_IServiceProvider_GetService_mF79C0B13A2DA546E96DC9A90AF0A983BB98685FB (SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E* __this, Type_t* ___serviceType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISQLiteSchemaExtensions_t6DE5E06D86CCDF821F975CEF188D49BDB2697740_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___serviceType0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (ISQLiteSchemaExtensions_t6DE5E06D86CCDF821F975CEF188D49BDB2697740_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		if ((((RuntimeObject*)(Type_t*)L_0) == ((RuntimeObject*)(Type_t*)L_2)))
		{
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_il2cpp_TypeInfo_var);
		Type_t* L_3 = ((SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_il2cpp_TypeInfo_var))->____dbProviderServicesType_1;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		Type_t* L_4 = ___serviceType0;
		il2cpp_codegen_runtime_class_init_inline(SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_il2cpp_TypeInfo_var);
		Type_t* L_5 = ((SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_il2cpp_TypeInfo_var))->____dbProviderServicesType_1;
		if ((!(((RuntimeObject*)(Type_t*)L_4) == ((RuntimeObject*)(Type_t*)L_5))))
		{
			goto IL_002c;
		}
	}

IL_0025:
	{
		RuntimeObject* L_6;
		L_6 = SqliteFactory_GetSQLiteProviderServicesInstance_m2C2BD80DE6A335BF90E765C87A9AA134EFAB24BC(__this, NULL);
		return L_6;
	}

IL_002c:
	{
		return NULL;
	}
}
// System.Object Mono.Data.Sqlite.SqliteFactory::GetSQLiteProviderServicesInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqliteFactory_GetSQLiteProviderServicesInstance_m2C2BD80DE6A335BF90E765C87A9AA134EFAB24BC (SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteFactory_GetSQLiteProviderServicesInstance_m2C2BD80DE6A335BF90E765C87A9AA134EFAB24BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m50BCE4A0EB39D97381431E6CC2576C50DCE69C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48BE9E1104BCA071E20A26042EF3C149D08FAD30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8172BAC95C9A5BE9FAE6423959034DB348689962);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	FieldInfo_t* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_il2cpp_TypeInfo_var))->____sqliteServices_2;
		if (L_0)
		{
			goto IL_0036;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = il2cpp_codegen_get_type(_stringLiteral48BE9E1104BCA071E20A26042EF3C149D08FAD30, (bool)0, Type_GetType_m50BCE4A0EB39D97381431E6CC2576C50DCE69C67_RuntimeMethod_var, SqliteFactory_GetSQLiteProviderServicesInstance_m2C2BD80DE6A335BF90E765C87A9AA134EFAB24BC_RuntimeMethod_var);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		Type_t* L_3 = V_0;
		NullCheck(L_3);
		FieldInfo_t* L_4;
		L_4 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(81 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_3, _stringLiteral8172BAC95C9A5BE9FAE6423959034DB348689962, ((int32_t)44));
		V_1 = L_4;
		FieldInfo_t* L_5 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(24 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_il2cpp_TypeInfo_var);
		((SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_il2cpp_TypeInfo_var))->____sqliteServices_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_il2cpp_TypeInfo_var))->____sqliteServices_2), (void*)L_6);
	}

IL_0036:
	{
		il2cpp_codegen_runtime_class_init_inline(SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_il2cpp_TypeInfo_var);
		RuntimeObject* L_7 = ((SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFactory_tAD3F45168C30D1E96367717335ED8BD546B0307E_il2cpp_TypeInfo_var))->____sqliteServices_2;
		return L_7;
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
// System.Void Mono.Data.Sqlite.SqliteFunction::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteFunction__cctor_m52D30E45F82DD8C5339DB7B514DB52E53750C43E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m86C887F7D86F0A2C7EC60362A55B6A2F3C075780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEEE5A98E1B8A6846E3590BE97C9A59E6C7D25A3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t17CD056DA36330C0324182AEE6A7248BDEF69733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteFunctionAttribute_t2923E6115FF388A4F4FAC0BA872F63BEC5D2AC65_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteFunctionAttribute_t2923E6115FF388A4F4FAC0BA872F63BEC5D2AC65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SqliteFunctionAttribute_t2923E6115FF388A4F4FAC0BA872F63BEC5D2AC65* V_0 = NULL;
	AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* V_1 = NULL;
	int32_t V_2 = 0;
	AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* V_3 = NULL;
	int32_t V_4 = 0;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_5 = NULL;
	bool V_6 = false;
	AssemblyNameU5BU5D_t1C2CB87B1AD967C0648E960165F31298EA326D5C* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	ReflectionTypeLoadException_tA59A0D2E1F05C20E7C493630343FBC9B7308C475* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		List_1_t17CD056DA36330C0324182AEE6A7248BDEF69733* L_0 = (List_1_t17CD056DA36330C0324182AEE6A7248BDEF69733*)il2cpp_codegen_object_new(List_1_t17CD056DA36330C0324182AEE6A7248BDEF69733_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mEEE5A98E1B8A6846E3590BE97C9A59E6C7D25A3A(L_0, List_1__ctor_mEEE5A98E1B8A6846E3590BE97C9A59E6C7D25A3A_RuntimeMethod_var);
		((SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9_il2cpp_TypeInfo_var))->____registeredFunctions_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9_il2cpp_TypeInfo_var))->____registeredFunctions_8), (void*)L_0);
	}
	try
	{// begin try (depth: 1)
		{
			AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_1;
			L_1 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
			NullCheck(L_1);
			AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_2;
			L_2 = AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249(L_1, NULL);
			V_1 = L_2;
			AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_3 = V_1;
			NullCheck(L_3);
			V_2 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
			Assembly_t* L_4;
			L_4 = Assembly_GetCallingAssembly_mDA96275EB27A0792D97CF9E45FB7919F39A3F97E(NULL);
			NullCheck(L_4);
			AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* L_5;
			L_5 = VirtualFuncInvoker0< AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* >::Invoke(21 /* System.Reflection.AssemblyName System.Reflection.Assembly::GetName() */, L_4);
			V_3 = L_5;
			V_4 = 0;
			goto IL_0132_1;
		}

IL_002c_1:
		{
			V_6 = (bool)0;
		}
		try
		{// begin try (depth: 2)
			{
				AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_6 = V_1;
				int32_t L_7 = V_4;
				NullCheck(L_6);
				int32_t L_8 = L_7;
				Assembly_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
				NullCheck(L_9);
				AssemblyNameU5BU5D_t1C2CB87B1AD967C0648E960165F31298EA326D5C* L_10;
				L_10 = VirtualFuncInvoker0< AssemblyNameU5BU5D_t1C2CB87B1AD967C0648E960165F31298EA326D5C* >::Invoke(28 /* System.Reflection.AssemblyName[] System.Reflection.Assembly::GetReferencedAssemblies() */, L_9);
				V_7 = L_10;
				AssemblyNameU5BU5D_t1C2CB87B1AD967C0648E960165F31298EA326D5C* L_11 = V_7;
				NullCheck(L_11);
				V_8 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
				V_9 = 0;
				goto IL_0070_2;
			}

IL_0048_2:
			{
				AssemblyNameU5BU5D_t1C2CB87B1AD967C0648E960165F31298EA326D5C* L_12 = V_7;
				int32_t L_13 = V_9;
				NullCheck(L_12);
				int32_t L_14 = L_13;
				AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
				NullCheck(L_15);
				String_t* L_16 = L_15->___name_0;
				AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* L_17 = V_3;
				NullCheck(L_17);
				String_t* L_18 = L_17->___name_0;
				bool L_19;
				L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, L_18, NULL);
				if (!L_19)
				{
					goto IL_006a_2;
				}
			}
			{
				V_6 = (bool)1;
				goto IL_0079_2;
			}

IL_006a_2:
			{
				int32_t L_20 = V_9;
				V_9 = ((int32_t)il2cpp_codegen_add(L_20, 1));
			}

IL_0070_2:
			{
				int32_t L_21 = V_9;
				int32_t L_22 = V_8;
				if ((((int32_t)L_21) < ((int32_t)L_22)))
				{
					goto IL_0048_2;
				}
			}

IL_0079_2:
			{
				bool L_23 = V_6;
				if (L_23)
				{
					goto IL_0085_2;
				}
			}
			{
				goto IL_012c_1;
			}

IL_0085_2:
			{
				AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_24 = V_1;
				int32_t L_25 = V_4;
				NullCheck(L_24);
				int32_t L_26 = L_25;
				Assembly_t* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
				NullCheck(L_27);
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_28;
				L_28 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(18 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_27);
				V_5 = L_28;
				goto IL_00a5_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReflectionTypeLoadException_tA59A0D2E1F05C20E7C493630343FBC9B7308C475_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0095_1;
			}
			throw e;
		}

CATCH_0095_1:
		{// begin catch(System.Reflection.ReflectionTypeLoadException)
			V_10 = ((ReflectionTypeLoadException_tA59A0D2E1F05C20E7C493630343FBC9B7308C475*)IL2CPP_GET_ACTIVE_EXCEPTION(ReflectionTypeLoadException_tA59A0D2E1F05C20E7C493630343FBC9B7308C475*));
			ReflectionTypeLoadException_tA59A0D2E1F05C20E7C493630343FBC9B7308C475* L_29 = V_10;
			NullCheck(L_29);
			TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_30 = L_29->___U3CTypesU3Ek__BackingField_18;
			V_5 = L_30;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00a5_1;
		}// end catch (depth: 2)

IL_00a5_1:
		{
			TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_31 = V_5;
			NullCheck(L_31);
			V_11 = ((int32_t)(((RuntimeArray*)L_31)->max_length));
			V_12 = 0;
			goto IL_0123_1;
		}

IL_00b3_1:
		{
			TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_32 = V_5;
			int32_t L_33 = V_12;
			NullCheck(L_32);
			int32_t L_34 = L_33;
			Type_t* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
			if (L_35)
			{
				goto IL_00c2_1;
			}
		}
		{
			goto IL_011d_1;
		}

IL_00c2_1:
		{
			TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_36 = V_5;
			int32_t L_37 = V_12;
			NullCheck(L_36);
			int32_t L_38 = L_37;
			Type_t* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (SqliteFunctionAttribute_t2923E6115FF388A4F4FAC0BA872F63BEC5D2AC65_0_0_0_var) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_41;
			L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
			NullCheck(L_39);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42;
			L_42 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(14 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_39, L_41, (bool)0);
			V_13 = L_42;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = V_13;
			NullCheck(L_43);
			V_14 = ((int32_t)(((RuntimeArray*)L_43)->max_length));
			V_15 = 0;
			goto IL_0114_1;
		}

IL_00e7_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_13;
			int32_t L_45 = V_15;
			NullCheck(L_44);
			int32_t L_46 = L_45;
			RuntimeObject* L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
			V_0 = ((SqliteFunctionAttribute_t2923E6115FF388A4F4FAC0BA872F63BEC5D2AC65*)IsInstSealed((RuntimeObject*)L_47, SqliteFunctionAttribute_t2923E6115FF388A4F4FAC0BA872F63BEC5D2AC65_il2cpp_TypeInfo_var));
			SqliteFunctionAttribute_t2923E6115FF388A4F4FAC0BA872F63BEC5D2AC65* L_48 = V_0;
			if (!L_48)
			{
				goto IL_010e_1;
			}
		}
		{
			SqliteFunctionAttribute_t2923E6115FF388A4F4FAC0BA872F63BEC5D2AC65* L_49 = V_0;
			TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_50 = V_5;
			int32_t L_51 = V_12;
			NullCheck(L_50);
			int32_t L_52 = L_51;
			Type_t* L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
			NullCheck(L_49);
			L_49->____instanceType_3 = L_53;
			Il2CppCodeGenWriteBarrier((void**)(&L_49->____instanceType_3), (void*)L_53);
			List_1_t17CD056DA36330C0324182AEE6A7248BDEF69733* L_54 = ((SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9_il2cpp_TypeInfo_var))->____registeredFunctions_8;
			SqliteFunctionAttribute_t2923E6115FF388A4F4FAC0BA872F63BEC5D2AC65* L_55 = V_0;
			NullCheck(L_54);
			List_1_Add_m86C887F7D86F0A2C7EC60362A55B6A2F3C075780_inline(L_54, L_55, List_1_Add_m86C887F7D86F0A2C7EC60362A55B6A2F3C075780_RuntimeMethod_var);
		}

IL_010e_1:
		{
			int32_t L_56 = V_15;
			V_15 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0114_1:
		{
			int32_t L_57 = V_15;
			int32_t L_58 = V_14;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00e7_1;
			}
		}

IL_011d_1:
		{
			int32_t L_59 = V_12;
			V_12 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		}

IL_0123_1:
		{
			int32_t L_60 = V_12;
			int32_t L_61 = V_11;
			if ((((int32_t)L_60) < ((int32_t)L_61)))
			{
				goto IL_00b3_1;
			}
		}

IL_012c_1:
		{
			int32_t L_62 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		}

IL_0132_1:
		{
			int32_t L_63 = V_4;
			int32_t L_64 = V_2;
			if ((((int32_t)L_63) < ((int32_t)L_64)))
			{
				goto IL_002c_1;
			}
		}
		{
			goto IL_0145;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_013f;
		}
		throw e;
	}

CATCH_013f:
	{// begin catch(System.Object)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0145;
	}// end catch (depth: 1)

IL_0145:
	{
		return;
	}
}
// System.Object Mono.Data.Sqlite.SqliteFunction::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqliteFunction_Invoke_m4F82CDEF0889BCD47554DE7279AAEDE59A3879F0 (SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	{
		return NULL;
	}
}
// System.Void Mono.Data.Sqlite.SqliteFunction::Step(System.Object[],System.Int32,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteFunction_Step_m519FCAF97FB43E6120FF22F962A62C9AB2F6F6A3 (SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, int32_t ___stepNumber1, RuntimeObject** ___contextData2, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Object Mono.Data.Sqlite.SqliteFunction::Final(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqliteFunction_Final_m0848EC01B23A3A78640F260206A396C1CF796F65 (SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* __this, RuntimeObject* ___contextData0, const RuntimeMethod* method) 
{
	{
		return NULL;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteFunction::Compare(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteFunction_Compare_m9BC6BE54BA6156B7A91E651909B5A3EAFD01BF6A (SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* __this, String_t* ___param10, String_t* ___param21, const RuntimeMethod* method) 
{
	{
		return 0;
	}
}
// System.Object[] Mono.Data.Sqlite.SqliteFunction::ConvertParams(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* SqliteFunction_ConvertParams_m4BE80FBE59DDE95B111F89F5A91693C076D58CED (SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* __this, int32_t ___nArgs0, intptr_t ___argsptr1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___nArgs0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___nArgs0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_3 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		intptr_t L_4 = ___argsptr1;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_5 = V_1;
		int32_t L_6 = ___nArgs0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mEA749F87AA97225B0E14A5F533E39D6B1B799E58(L_4, L_5, 0, L_6, NULL);
		V_2 = 0;
		goto IL_011c;
	}

IL_001e:
	{
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_7 = __this->____base_0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		intptr_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		int32_t L_12;
		L_12 = VirtualFuncInvoker1< int32_t, intptr_t >::Invoke(47 /* Mono.Data.Sqlite.TypeAffinity Mono.Data.Sqlite.SQLiteBase::GetParamValueType(System.IntPtr) */, L_7, L_11);
		V_5 = L_12;
		int32_t L_13 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_13, 1)))
		{
			case 0:
			{
				goto IL_0071;
			}
			case 1:
			{
				goto IL_008c;
			}
			case 2:
			{
				goto IL_00a7;
			}
			case 3:
			{
				goto IL_00bd;
			}
			case 4:
			{
				goto IL_0064;
			}
			case 5:
			{
				goto IL_0118;
			}
			case 6:
			{
				goto IL_0118;
			}
			case 7:
			{
				goto IL_0118;
			}
			case 8:
			{
				goto IL_0118;
			}
			case 9:
			{
				goto IL_00f7;
			}
		}
	}
	{
		goto IL_0118;
	}

IL_0064:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
		int32_t L_15 = V_2;
		il2cpp_codegen_runtime_class_init_inline(DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_il2cpp_TypeInfo_var);
		DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC* L_16 = ((DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_il2cpp_TypeInfo_var))->___Value_0;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (RuntimeObject*)L_16);
		goto IL_0118;
	}

IL_0071:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = V_0;
		int32_t L_18 = V_2;
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_19 = __this->____base_0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		intptr_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_19);
		int64_t L_24;
		L_24 = VirtualFuncInvoker1< int64_t, intptr_t >::Invoke(45 /* System.Int64 Mono.Data.Sqlite.SQLiteBase::GetParamValueInt64(System.IntPtr) */, L_19, L_23);
		int64_t L_25 = L_24;
		RuntimeObject* L_26 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_26);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (RuntimeObject*)L_26);
		goto IL_0118;
	}

IL_008c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_0;
		int32_t L_28 = V_2;
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_29 = __this->____base_0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_30 = V_1;
		int32_t L_31 = V_2;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		intptr_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_29);
		double L_34;
		L_34 = VirtualFuncInvoker1< double, intptr_t >::Invoke(44 /* System.Double Mono.Data.Sqlite.SQLiteBase::GetParamValueDouble(System.IntPtr) */, L_29, L_33);
		double L_35 = L_34;
		RuntimeObject* L_36 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_36);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (RuntimeObject*)L_36);
		goto IL_0118;
	}

IL_00a7:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = V_0;
		int32_t L_38 = V_2;
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_39 = __this->____base_0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_40 = V_1;
		int32_t L_41 = V_2;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		intptr_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_39);
		String_t* L_44;
		L_44 = VirtualFuncInvoker1< String_t*, intptr_t >::Invoke(46 /* System.String Mono.Data.Sqlite.SQLiteBase::GetParamValueText(System.IntPtr) */, L_39, L_43);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_44);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (RuntimeObject*)L_44);
		goto IL_0118;
	}

IL_00bd:
	{
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_45 = __this->____base_0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_46 = V_1;
		int32_t L_47 = V_2;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		intptr_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_45);
		int64_t L_50;
		L_50 = VirtualFuncInvoker5< int64_t, intptr_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(43 /* System.Int64 Mono.Data.Sqlite.SQLiteBase::GetParamValueBytes(System.IntPtr,System.Int32,System.Byte[],System.Int32,System.Int32) */, L_45, L_49, 0, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, 0, 0);
		V_3 = ((int32_t)L_50);
		int32_t L_51 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_51);
		V_4 = L_52;
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_53 = __this->____base_0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_54 = V_1;
		int32_t L_55 = V_2;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		intptr_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = V_4;
		int32_t L_59 = V_3;
		NullCheck(L_53);
		int64_t L_60;
		L_60 = VirtualFuncInvoker5< int64_t, intptr_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(43 /* System.Int64 Mono.Data.Sqlite.SQLiteBase::GetParamValueBytes(System.IntPtr,System.Int32,System.Byte[],System.Int32,System.Int32) */, L_53, L_57, 0, L_58, 0, L_59);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_61 = V_0;
		int32_t L_62 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = V_4;
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_63);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(L_62), (RuntimeObject*)L_63);
		goto IL_0118;
	}

IL_00f7:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_64 = V_0;
		int32_t L_65 = V_2;
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_66 = __this->____base_0;
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_67 = __this->____base_0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_68 = V_1;
		int32_t L_69 = V_2;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		intptr_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_67);
		String_t* L_72;
		L_72 = VirtualFuncInvoker1< String_t*, intptr_t >::Invoke(46 /* System.String Mono.Data.Sqlite.SQLiteBase::GetParamValueText(System.IntPtr) */, L_67, L_71);
		NullCheck(L_66);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_73;
		L_73 = SqliteConvert_ToDateTime_mD6664F8C468F8479645ED521492150D08BD33A97(L_66, L_72, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_74 = L_73;
		RuntimeObject* L_75 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_74);
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, L_75);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(L_65), (RuntimeObject*)L_75);
	}

IL_0118:
	{
		int32_t L_76 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_011c:
	{
		int32_t L_77 = V_2;
		int32_t L_78 = ___nArgs0;
		if ((((int32_t)L_77) < ((int32_t)L_78)))
		{
			goto IL_001e;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_79 = V_0;
		return L_79;
	}
}
// System.Void Mono.Data.Sqlite.SqliteFunction::SetReturnValue(System.IntPtr,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteFunction_SetReturnValue_m923C5E6315F1FBF143F2CE8C78530802DFA6C2DF (SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* __this, intptr_t ___context0, RuntimeObject* ___returnValue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteConvert_t981F31162C63D0C2F780C2FC99738D60779F4D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	Exception_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___returnValue1;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_1 = ___returnValue1;
		il2cpp_codegen_runtime_class_init_inline(DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_il2cpp_TypeInfo_var);
		DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC* L_2 = ((DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_il2cpp_TypeInfo_var))->___Value_0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC*)L_2))))
		{
			goto IL_001e;
		}
	}

IL_0011:
	{
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_3 = __this->____base_0;
		intptr_t L_4 = ___context0;
		NullCheck(L_3);
		VirtualActionInvoker1< intptr_t >::Invoke(52 /* System.Void Mono.Data.Sqlite.SQLiteBase::ReturnNull(System.IntPtr) */, L_3, L_4);
		return;
	}

IL_001e:
	{
		RuntimeObject* L_5 = ___returnValue1;
		NullCheck(L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_5, NULL);
		V_0 = L_6;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_7) == ((RuntimeObject*)(Type_t*)L_9))))
		{
			goto IL_0053;
		}
	}
	{
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_10 = __this->____base_0;
		intptr_t L_11 = ___context0;
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_12 = __this->____base_0;
		RuntimeObject* L_13 = ___returnValue1;
		NullCheck(L_12);
		String_t* L_14;
		L_14 = SqliteConvert_ToString_mB4EB459EA53F564B0ACA431E6FF4312EECD0B946(L_12, ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_13, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_10);
		VirtualActionInvoker2< intptr_t, String_t* >::Invoke(53 /* System.Void Mono.Data.Sqlite.SQLiteBase::ReturnText(System.IntPtr,System.String) */, L_10, L_11, L_14);
		return;
	}

IL_0053:
	{
		RuntimeObject* L_15 = ___returnValue1;
		V_1 = ((Exception_t*)IsInstClass((RuntimeObject*)L_15, Exception_t_il2cpp_TypeInfo_var));
		Exception_t* L_16 = V_1;
		if (!L_16)
		{
			goto IL_0073;
		}
	}
	{
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_17 = __this->____base_0;
		intptr_t L_18 = ___context0;
		Exception_t* L_19 = V_1;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_19);
		NullCheck(L_17);
		VirtualActionInvoker2< intptr_t, String_t* >::Invoke(50 /* System.Void Mono.Data.Sqlite.SQLiteBase::ReturnError(System.IntPtr,System.String) */, L_17, L_18, L_20);
		return;
	}

IL_0073:
	{
		Type_t* L_21 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SqliteConvert_t981F31162C63D0C2F780C2FC99738D60779F4D2A_il2cpp_TypeInfo_var);
		int32_t L_22;
		L_22 = SqliteConvert_TypeToAffinity_m241B92ABEEC17AAEB86E2130FCD3DBA49F0C27FB(L_21, NULL);
		V_2 = L_22;
		int32_t L_23 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_23, 1)))
		{
			case 0:
			{
				goto IL_00a8;
			}
			case 1:
			{
				goto IL_00c0;
			}
			case 2:
			{
				goto IL_00d8;
			}
			case 3:
			{
				goto IL_00eb;
			}
			case 4:
			{
				goto IL_009b;
			}
		}
	}
	{
		goto IL_00fe;
	}

IL_009b:
	{
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_24 = __this->____base_0;
		intptr_t L_25 = ___context0;
		NullCheck(L_24);
		VirtualActionInvoker1< intptr_t >::Invoke(52 /* System.Void Mono.Data.Sqlite.SQLiteBase::ReturnNull(System.IntPtr) */, L_24, L_25);
		return;
	}

IL_00a8:
	{
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_26 = __this->____base_0;
		intptr_t L_27 = ___context0;
		RuntimeObject* L_28 = ___returnValue1;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_29;
		L_29 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int64_t L_30;
		L_30 = Convert_ToInt64_m6CA00ABB70FAD8242C62ED9913F7D7C3B811FC31(L_28, L_29, NULL);
		NullCheck(L_26);
		VirtualActionInvoker2< intptr_t, int64_t >::Invoke(51 /* System.Void Mono.Data.Sqlite.SQLiteBase::ReturnInt64(System.IntPtr,System.Int64) */, L_26, L_27, L_30);
		return;
	}

IL_00c0:
	{
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_31 = __this->____base_0;
		intptr_t L_32 = ___context0;
		RuntimeObject* L_33 = ___returnValue1;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_34;
		L_34 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_35;
		L_35 = Convert_ToDouble_m8DED60F2E0251A3D389F1DD22AA5AF9CD440ABE8(L_33, L_34, NULL);
		NullCheck(L_31);
		VirtualActionInvoker2< intptr_t, double >::Invoke(49 /* System.Void Mono.Data.Sqlite.SQLiteBase::ReturnDouble(System.IntPtr,System.Double) */, L_31, L_32, L_35);
		return;
	}

IL_00d8:
	{
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_36 = __this->____base_0;
		intptr_t L_37 = ___context0;
		RuntimeObject* L_38 = ___returnValue1;
		NullCheck(L_38);
		String_t* L_39;
		L_39 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_38);
		NullCheck(L_36);
		VirtualActionInvoker2< intptr_t, String_t* >::Invoke(53 /* System.Void Mono.Data.Sqlite.SQLiteBase::ReturnText(System.IntPtr,System.String) */, L_36, L_37, L_39);
		return;
	}

IL_00eb:
	{
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_40 = __this->____base_0;
		intptr_t L_41 = ___context0;
		RuntimeObject* L_42 = ___returnValue1;
		NullCheck(L_40);
		VirtualActionInvoker2< intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(48 /* System.Void Mono.Data.Sqlite.SQLiteBase::ReturnBlob(System.IntPtr,System.Byte[]) */, L_40, L_41, ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_42, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)));
		return;
	}

IL_00fe:
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteFunction::ScalarCallback(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteFunction_ScalarCallback_m5D087CE88A59E466D1B5CD0120CEB3BC4DB9648E (SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* __this, intptr_t ___context0, int32_t ___nArgs1, intptr_t ___argsptr2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___context0;
		__this->____context_7 = L_0;
		intptr_t L_1 = ___context0;
		int32_t L_2 = ___nArgs1;
		intptr_t L_3 = ___argsptr2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = SqliteFunction_ConvertParams_m4BE80FBE59DDE95B111F89F5A91693C076D58CED(__this, L_2, L_3, NULL);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker1< RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(5 /* System.Object Mono.Data.Sqlite.SqliteFunction::Invoke(System.Object[]) */, __this, L_4);
		SqliteFunction_SetReturnValue_m923C5E6315F1FBF143F2CE8C78530802DFA6C2DF(__this, L_1, L_5, NULL);
		return;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteFunction::CompareCallback(System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteFunction_CompareCallback_mAC6514B4CE6BB9A1194E6818FFFC9B3A8EC9CEFA (SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* __this, intptr_t ___ptr0, int32_t ___len11, intptr_t ___ptr12, int32_t ___len23, intptr_t ___ptr24, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteConvert_t981F31162C63D0C2F780C2FC99738D60779F4D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___ptr12;
		int32_t L_1 = ___len11;
		il2cpp_codegen_runtime_class_init_inline(SqliteConvert_t981F31162C63D0C2F780C2FC99738D60779F4D2A_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = SqliteConvert_UTF8ToString_mC14771E1395552BD10BE0443347D2400BEAE9A35(L_0, L_1, NULL);
		intptr_t L_3 = ___ptr24;
		int32_t L_4 = ___len23;
		String_t* L_5;
		L_5 = SqliteConvert_UTF8ToString_mC14771E1395552BD10BE0443347D2400BEAE9A35(L_3, L_4, NULL);
		int32_t L_6;
		L_6 = VirtualFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(8 /* System.Int32 Mono.Data.Sqlite.SqliteFunction::Compare(System.String,System.String) */, __this, L_2, L_5);
		return L_6;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteFunction::CompareCallback16(System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteFunction_CompareCallback16_mC43973181A65C6A3C59D94853E08BBEFF9B836B8 (SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* __this, intptr_t ___ptr0, int32_t ___len11, intptr_t ___ptr12, int32_t ___len23, intptr_t ___ptr24, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___ptr12;
		int32_t L_1 = ___len11;
		String_t* L_2;
		L_2 = SQLite3_UTF16_UTF16ToString_m5B35EFBF590A0283AF7364467661F5897F3C3311(L_0, L_1, NULL);
		intptr_t L_3 = ___ptr24;
		int32_t L_4 = ___len23;
		String_t* L_5;
		L_5 = SQLite3_UTF16_UTF16ToString_m5B35EFBF590A0283AF7364467661F5897F3C3311(L_3, L_4, NULL);
		int32_t L_6;
		L_6 = VirtualFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(8 /* System.Int32 Mono.Data.Sqlite.SqliteFunction::Compare(System.String,System.String) */, __this, L_2, L_5);
		return L_6;
	}
}
// System.Void Mono.Data.Sqlite.SqliteFunction::StepCallback(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteFunction_StepCallback_m1AFE57219F9E64E3320E1BF2074796643F687064 (SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* __this, intptr_t ___context0, int32_t ___nArgs1, intptr_t ___argsptr2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AggregateData_t866FCF0E4839C9651D352CC8D81C4F554C695E58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m89183DF299284AB71732DD3FEA89577973142D60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC89293544B07CC160B4F2986722AEF120EA6A1A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	AggregateData_t866FCF0E4839C9651D352CC8D81C4F554C695E58* V_1 = NULL;
	{
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_0 = __this->____base_0;
		intptr_t L_1 = ___context0;
		NullCheck(L_0);
		intptr_t L_2;
		L_2 = VirtualFuncInvoker1< intptr_t, intptr_t >::Invoke(42 /* System.IntPtr Mono.Data.Sqlite.SQLiteBase::AggregateContext(System.IntPtr) */, L_0, L_1);
		int64_t L_3;
		L_3 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_2, NULL);
		V_0 = L_3;
		Dictionary_2_t8A4E573D0DD505D003411AB9AF139DF09F555CC9* L_4 = __this->____contextDataList_1;
		int64_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_TryGetValue_m89183DF299284AB71732DD3FEA89577973142D60(L_4, L_5, (&V_1), Dictionary_2_TryGetValue_m89183DF299284AB71732DD3FEA89577973142D60_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0038;
		}
	}
	{
		AggregateData_t866FCF0E4839C9651D352CC8D81C4F554C695E58* L_7 = (AggregateData_t866FCF0E4839C9651D352CC8D81C4F554C695E58*)il2cpp_codegen_object_new(AggregateData_t866FCF0E4839C9651D352CC8D81C4F554C695E58_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		AggregateData__ctor_m41C280B0A658385B841734F8A0332576D5B03820(L_7, NULL);
		V_1 = L_7;
		Dictionary_2_t8A4E573D0DD505D003411AB9AF139DF09F555CC9* L_8 = __this->____contextDataList_1;
		int64_t L_9 = V_0;
		AggregateData_t866FCF0E4839C9651D352CC8D81C4F554C695E58* L_10 = V_1;
		NullCheck(L_8);
		Dictionary_2_set_Item_mC89293544B07CC160B4F2986722AEF120EA6A1A8(L_8, L_9, L_10, Dictionary_2_set_Item_mC89293544B07CC160B4F2986722AEF120EA6A1A8_RuntimeMethod_var);
	}

IL_0038:
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005e:
			{// begin finally (depth: 1)
				AggregateData_t866FCF0E4839C9651D352CC8D81C4F554C695E58* L_11 = V_1;
				AggregateData_t866FCF0E4839C9651D352CC8D81C4F554C695E58* L_12 = L_11;
				NullCheck(L_12);
				int32_t L_13 = L_12->____count_0;
				NullCheck(L_12);
				L_12->____count_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)

IL_0038_1:
			intptr_t L_14 = ___context0;
			__this->____context_7 = L_14;
			int32_t L_15 = ___nArgs1;
			intptr_t L_16 = ___argsptr2;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17;
			L_17 = SqliteFunction_ConvertParams_m4BE80FBE59DDE95B111F89F5A91693C076D58CED(__this, L_15, L_16, NULL);
			AggregateData_t866FCF0E4839C9651D352CC8D81C4F554C695E58* L_18 = V_1;
			NullCheck(L_18);
			int32_t L_19 = L_18->____count_0;
			AggregateData_t866FCF0E4839C9651D352CC8D81C4F554C695E58* L_20 = V_1;
			NullCheck(L_20);
			RuntimeObject** L_21 = (&L_20->____data_1);
			VirtualActionInvoker3< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, RuntimeObject** >::Invoke(6 /* System.Void Mono.Data.Sqlite.SqliteFunction::Step(System.Object[],System.Int32,System.Object&) */, __this, L_17, L_19, L_21);
			goto IL_006d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteFunction::FinalCallback(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteFunction_FinalCallback_mBDADF32683D86DCF3105147F49A386C96DD5C28D (SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* __this, intptr_t ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mA72C81BD9C5F06AA0449FB2782F4CFF1CAA7394B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mDC4D9DBC45BAC4BAF0317ABBF2377BB286BB2981_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC15F5EA41180EEBDD45410E77317587527985864_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_0 = __this->____base_0;
		intptr_t L_1 = ___context0;
		NullCheck(L_0);
		intptr_t L_2;
		L_2 = VirtualFuncInvoker1< intptr_t, intptr_t >::Invoke(42 /* System.IntPtr Mono.Data.Sqlite.SQLiteBase::AggregateContext(System.IntPtr) */, L_0, L_1);
		int64_t L_3;
		L_3 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_2, NULL);
		V_0 = L_3;
		V_1 = NULL;
		Dictionary_2_t8A4E573D0DD505D003411AB9AF139DF09F555CC9* L_4 = __this->____contextDataList_1;
		int64_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_ContainsKey_mA72C81BD9C5F06AA0449FB2782F4CFF1CAA7394B(L_4, L_5, Dictionary_2_ContainsKey_mA72C81BD9C5F06AA0449FB2782F4CFF1CAA7394B_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		Dictionary_2_t8A4E573D0DD505D003411AB9AF139DF09F555CC9* L_7 = __this->____contextDataList_1;
		int64_t L_8 = V_0;
		NullCheck(L_7);
		AggregateData_t866FCF0E4839C9651D352CC8D81C4F554C695E58* L_9;
		L_9 = Dictionary_2_get_Item_mC15F5EA41180EEBDD45410E77317587527985864(L_7, L_8, Dictionary_2_get_Item_mC15F5EA41180EEBDD45410E77317587527985864_RuntimeMethod_var);
		NullCheck(L_9);
		RuntimeObject* L_10 = L_9->____data_1;
		V_1 = L_10;
		Dictionary_2_t8A4E573D0DD505D003411AB9AF139DF09F555CC9* L_11 = __this->____contextDataList_1;
		int64_t L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_Remove_mDC4D9DBC45BAC4BAF0317ABBF2377BB286BB2981(L_11, L_12, Dictionary_2_Remove_mDC4D9DBC45BAC4BAF0317ABBF2377BB286BB2981_RuntimeMethod_var);
	}

IL_0044:
	{
		intptr_t L_14 = ___context0;
		__this->____context_7 = L_14;
		intptr_t L_15 = ___context0;
		RuntimeObject* L_16 = V_1;
		RuntimeObject* L_17;
		L_17 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* System.Object Mono.Data.Sqlite.SqliteFunction::Final(System.Object) */, __this, L_16);
		SqliteFunction_SetReturnValue_m923C5E6315F1FBF143F2CE8C78530802DFA6C2DF(__this, L_15, L_17, NULL);
		RuntimeObject* L_18 = V_1;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_18, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
		RuntimeObject* L_19 = V_2;
		if (!L_19)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_20 = V_2;
		NullCheck(L_20);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_20);
	}

IL_006c:
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteFunction::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteFunction_Dispose_m415511F78E82E52B2E221687D56A7D8E30DDC910 (SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m3B0610A5E0A7404117178543C997384943E58ABD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m233C00670B0FAC3A270A296E217A881A2243BC9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m45A23BDC11EDDDF1F3A7B567DB2A59D248F54F86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tC25BAD211870F3D056A947DAA0B2EF789C5B09FE V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t5370E3B45A943BBD192EFCB1B0E45B8075188B0F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_007e;
		}
	}
	{
		Dictionary_2_t8A4E573D0DD505D003411AB9AF139DF09F555CC9* L_1 = __this->____contextDataList_1;
		NullCheck(L_1);
		Enumerator_t5370E3B45A943BBD192EFCB1B0E45B8075188B0F L_2;
		L_2 = Dictionary_2_GetEnumerator_m233C00670B0FAC3A270A296E217A881A2243BC9A(L_1, Dictionary_2_GetEnumerator_m233C00670B0FAC3A270A296E217A881A2243BC9A_RuntimeMethod_var);
		V_2 = L_2;
		goto IL_003d;
	}

IL_0017:
	{
		KeyValuePair_2_tC25BAD211870F3D056A947DAA0B2EF789C5B09FE L_3 = (&V_2)->____current_3;
		V_1 = L_3;
		AggregateData_t866FCF0E4839C9651D352CC8D81C4F554C695E58* L_4 = (&V_1)->___value_1;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->____data_1;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
		RuntimeObject* L_6 = V_0;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
	}

IL_003d:
	{
		bool L_8;
		L_8 = Enumerator_MoveNext_m45A23BDC11EDDDF1F3A7B567DB2A59D248F54F86((&V_2), Enumerator_MoveNext_m45A23BDC11EDDDF1F3A7B567DB2A59D248F54F86_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_0017;
		}
	}
	{
		Dictionary_2_t8A4E573D0DD505D003411AB9AF139DF09F555CC9* L_9 = __this->____contextDataList_1;
		NullCheck(L_9);
		Dictionary_2_Clear_m3B0610A5E0A7404117178543C997384943E58ABD(L_9, Dictionary_2_Clear_m3B0610A5E0A7404117178543C997384943E58ABD_RuntimeMethod_var);
		__this->____InvokeFunc_2 = (SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____InvokeFunc_2), (void*)(SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94*)NULL);
		__this->____StepFunc_3 = (SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____StepFunc_3), (void*)(SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94*)NULL);
		__this->____FinalFunc_4 = (SQLiteFinalCallback_t6F84B373BB829BAABB6B9E2FEAF24723743008CD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____FinalFunc_4), (void*)(SQLiteFinalCallback_t6F84B373BB829BAABB6B9E2FEAF24723743008CD*)NULL);
		__this->____CompareFunc_5 = (SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____CompareFunc_5), (void*)(SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20*)NULL);
		__this->____base_0 = (SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____base_0), (void*)(SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE*)NULL);
		__this->____contextDataList_1 = (Dictionary_2_t8A4E573D0DD505D003411AB9AF139DF09F555CC9*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____contextDataList_1), (void*)(Dictionary_2_t8A4E573D0DD505D003411AB9AF139DF09F555CC9*)NULL);
	}

IL_007e:
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteFunction::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteFunction_Dispose_mC729F9812A512F64F7C2AB750E7227A3AFF30068 (SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* __this, const RuntimeMethod* method) 
{
	{
		VirtualActionInvoker1< bool >::Invoke(9 /* System.Void Mono.Data.Sqlite.SqliteFunction::Dispose(System.Boolean) */, __this, (bool)1);
		return;
	}
}
// Mono.Data.Sqlite.SqliteFunction[] Mono.Data.Sqlite.SqliteFunction::BindFunctions(Mono.Data.Sqlite.SQLiteBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqliteFunctionU5BU5D_t4564C20F1EB9BA6808CCD9834FE2D82F87F3ABEC* SqliteFunction_BindFunctions_m1F10199CD9CD7577E3D6F5A1A34C532738D3560D (SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* ___sqlbase0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m787C448734F5EC6AE58CEBE8EA7778045B82FF1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF2DD882B9C7EF34093A5F953234E84854108523D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_CopyTo_m45944BA57667FCA9B5B56F9A2168D6D5E5306A0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFA16DDE53286F33E2F767ACC3AB0F6444084C0CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8E25171C599E4D0A576581C53F0B2A9A586D9430_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFA881B9537459575C967B1E246BEBC2C89C04C6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteFinalCallback_t6F84B373BB829BAABB6B9E2FEAF24723743008CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteFunctionEx_t66A15B512D7A425A21434142226E632CE150D10F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteFunctionU5BU5D_t4564C20F1EB9BA6808CCD9834FE2D82F87F3ABEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteFunction_CompareCallback16_mC43973181A65C6A3C59D94853E08BBEFF9B836B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteFunction_CompareCallback_mAC6514B4CE6BB9A1194E6818FFFC9B3A8EC9CEFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteFunction_FinalCallback_mBDADF32683D86DCF3105147F49A386C96DD5C28D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteFunction_ScalarCallback_m5D087CE88A59E466D1B5CD0120CEB3BC4DB9648E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteFunction_StepCallback_m1AFE57219F9E64E3320E1BF2074796643F687064_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* V_0 = NULL;
	List_1_tFA881B9537459575C967B1E246BEBC2C89C04C6B* V_1 = NULL;
	SqliteFunctionAttribute_t2923E6115FF388A4F4FAC0BA872F63BEC5D2AC65* V_2 = NULL;
	Enumerator_tA4F276F1A8ADAFDD4CE50E4AA214CEA043CC440E V_3;
	memset((&V_3), 0, sizeof(V_3));
	SqliteFunctionU5BU5D_t4564C20F1EB9BA6808CCD9834FE2D82F87F3ABEC* V_4 = NULL;
	SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* G_B3_0 = NULL;
	SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* G_B2_0 = NULL;
	SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94* G_B4_0 = NULL;
	SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* G_B4_1 = NULL;
	SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* G_B6_0 = NULL;
	SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* G_B5_0 = NULL;
	SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94* G_B7_0 = NULL;
	SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* G_B7_1 = NULL;
	SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* G_B9_0 = NULL;
	SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* G_B8_0 = NULL;
	SQLiteFinalCallback_t6F84B373BB829BAABB6B9E2FEAF24723743008CD* G_B10_0 = NULL;
	SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* G_B10_1 = NULL;
	SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* G_B12_0 = NULL;
	SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* G_B11_0 = NULL;
	SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20* G_B13_0 = NULL;
	SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* G_B13_1 = NULL;
	SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* G_B15_0 = NULL;
	SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* G_B14_0 = NULL;
	SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20* G_B16_0 = NULL;
	SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* G_B16_1 = NULL;
	{
		List_1_tFA881B9537459575C967B1E246BEBC2C89C04C6B* L_0 = (List_1_tFA881B9537459575C967B1E246BEBC2C89C04C6B*)il2cpp_codegen_object_new(List_1_tFA881B9537459575C967B1E246BEBC2C89C04C6B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8E25171C599E4D0A576581C53F0B2A9A586D9430(L_0, List_1__ctor_m8E25171C599E4D0A576581C53F0B2A9A586D9430_RuntimeMethod_var);
		V_1 = L_0;
		il2cpp_codegen_runtime_class_init_inline(SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9_il2cpp_TypeInfo_var);
		List_1_t17CD056DA36330C0324182AEE6A7248BDEF69733* L_1 = ((SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9_il2cpp_TypeInfo_var))->____registeredFunctions_8;
		NullCheck(L_1);
		Enumerator_tA4F276F1A8ADAFDD4CE50E4AA214CEA043CC440E L_2;
		L_2 = List_1_GetEnumerator_mFA16DDE53286F33E2F767ACC3AB0F6444084C0CF(L_1, List_1_GetEnumerator_mFA16DDE53286F33E2F767ACC3AB0F6444084C0CF_RuntimeMethod_var);
		V_3 = L_2;
		goto IL_0146;
	}

IL_0016:
	{
		SqliteFunctionAttribute_t2923E6115FF388A4F4FAC0BA872F63BEC5D2AC65* L_3 = (&V_3)->____current_3;
		V_2 = L_3;
		SqliteFunctionAttribute_t2923E6115FF388A4F4FAC0BA872F63BEC5D2AC65* L_4 = V_2;
		NullCheck(L_4);
		Type_t* L_5 = L_4->____instanceType_3;
		RuntimeObject* L_6;
		L_6 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_5, NULL);
		V_0 = ((SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9*)CastclassClass((RuntimeObject*)L_6, SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9_il2cpp_TypeInfo_var));
		SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* L_7 = V_0;
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_8 = ___sqlbase0;
		NullCheck(L_7);
		L_7->____base_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->____base_0), (void*)L_8);
		SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* L_9 = V_0;
		SqliteFunctionAttribute_t2923E6115FF388A4F4FAC0BA872F63BEC5D2AC65* L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->____functionType_2;
		G_B2_0 = L_9;
		if (L_11)
		{
			G_B3_0 = L_9;
			goto IL_0053;
		}
	}
	{
		SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* L_12 = V_0;
		SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94* L_13 = (SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94*)il2cpp_codegen_object_new(SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		SQLiteCallback__ctor_mC3E071A4BD2C90DD42FBFBEE3B184136C0C092BE(L_13, L_12, (intptr_t)((void*)SqliteFunction_ScalarCallback_m5D087CE88A59E466D1B5CD0120CEB3BC4DB9648E_RuntimeMethod_var), NULL);
		G_B4_0 = L_13;
		G_B4_1 = G_B2_0;
		goto IL_0054;
	}

IL_0053:
	{
		G_B4_0 = ((SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94*)(NULL));
		G_B4_1 = G_B3_0;
	}

IL_0054:
	{
		NullCheck(G_B4_1);
		G_B4_1->____InvokeFunc_2 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->____InvokeFunc_2), (void*)G_B4_0);
		SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* L_14 = V_0;
		SqliteFunctionAttribute_t2923E6115FF388A4F4FAC0BA872F63BEC5D2AC65* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = L_15->____functionType_2;
		G_B5_0 = L_14;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			G_B6_0 = L_14;
			goto IL_0077;
		}
	}
	{
		SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* L_17 = V_0;
		SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94* L_18 = (SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94*)il2cpp_codegen_object_new(SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		SQLiteCallback__ctor_mC3E071A4BD2C90DD42FBFBEE3B184136C0C092BE(L_18, L_17, (intptr_t)((void*)SqliteFunction_StepCallback_m1AFE57219F9E64E3320E1BF2074796643F687064_RuntimeMethod_var), NULL);
		G_B7_0 = L_18;
		G_B7_1 = G_B5_0;
		goto IL_0078;
	}

IL_0077:
	{
		G_B7_0 = ((SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94*)(NULL));
		G_B7_1 = G_B6_0;
	}

IL_0078:
	{
		NullCheck(G_B7_1);
		G_B7_1->____StepFunc_3 = G_B7_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B7_1->____StepFunc_3), (void*)G_B7_0);
		SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* L_19 = V_0;
		SqliteFunctionAttribute_t2923E6115FF388A4F4FAC0BA872F63BEC5D2AC65* L_20 = V_2;
		NullCheck(L_20);
		int32_t L_21 = L_20->____functionType_2;
		G_B8_0 = L_19;
		if ((!(((uint32_t)L_21) == ((uint32_t)1))))
		{
			G_B9_0 = L_19;
			goto IL_009b;
		}
	}
	{
		SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* L_22 = V_0;
		SQLiteFinalCallback_t6F84B373BB829BAABB6B9E2FEAF24723743008CD* L_23 = (SQLiteFinalCallback_t6F84B373BB829BAABB6B9E2FEAF24723743008CD*)il2cpp_codegen_object_new(SQLiteFinalCallback_t6F84B373BB829BAABB6B9E2FEAF24723743008CD_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		SQLiteFinalCallback__ctor_mEF4564763D7BAF6971C73A8411EB90DF4166C245(L_23, L_22, (intptr_t)((void*)SqliteFunction_FinalCallback_mBDADF32683D86DCF3105147F49A386C96DD5C28D_RuntimeMethod_var), NULL);
		G_B10_0 = L_23;
		G_B10_1 = G_B8_0;
		goto IL_009c;
	}

IL_009b:
	{
		G_B10_0 = ((SQLiteFinalCallback_t6F84B373BB829BAABB6B9E2FEAF24723743008CD*)(NULL));
		G_B10_1 = G_B9_0;
	}

IL_009c:
	{
		NullCheck(G_B10_1);
		G_B10_1->____FinalFunc_4 = G_B10_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B10_1->____FinalFunc_4), (void*)G_B10_0);
		SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* L_24 = V_0;
		SqliteFunctionAttribute_t2923E6115FF388A4F4FAC0BA872F63BEC5D2AC65* L_25 = V_2;
		NullCheck(L_25);
		int32_t L_26 = L_25->____functionType_2;
		G_B11_0 = L_24;
		if ((!(((uint32_t)L_26) == ((uint32_t)2))))
		{
			G_B12_0 = L_24;
			goto IL_00bf;
		}
	}
	{
		SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* L_27 = V_0;
		SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20* L_28 = (SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20*)il2cpp_codegen_object_new(SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		SQLiteCollation__ctor_mDFA84021A9EB2C5BE1C16ECF9E2D50CFF8D194DF(L_28, L_27, (intptr_t)((void*)SqliteFunction_CompareCallback_mAC6514B4CE6BB9A1194E6818FFFC9B3A8EC9CEFA_RuntimeMethod_var), NULL);
		G_B13_0 = L_28;
		G_B13_1 = G_B11_0;
		goto IL_00c0;
	}

IL_00bf:
	{
		G_B13_0 = ((SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20*)(NULL));
		G_B13_1 = G_B12_0;
	}

IL_00c0:
	{
		NullCheck(G_B13_1);
		G_B13_1->____CompareFunc_5 = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->____CompareFunc_5), (void*)G_B13_0);
		SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* L_29 = V_0;
		SqliteFunctionAttribute_t2923E6115FF388A4F4FAC0BA872F63BEC5D2AC65* L_30 = V_2;
		NullCheck(L_30);
		int32_t L_31 = L_30->____functionType_2;
		G_B14_0 = L_29;
		if ((!(((uint32_t)L_31) == ((uint32_t)2))))
		{
			G_B15_0 = L_29;
			goto IL_00e3;
		}
	}
	{
		SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* L_32 = V_0;
		SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20* L_33 = (SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20*)il2cpp_codegen_object_new(SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		SQLiteCollation__ctor_mDFA84021A9EB2C5BE1C16ECF9E2D50CFF8D194DF(L_33, L_32, (intptr_t)((void*)SqliteFunction_CompareCallback16_mC43973181A65C6A3C59D94853E08BBEFF9B836B8_RuntimeMethod_var), NULL);
		G_B16_0 = L_33;
		G_B16_1 = G_B14_0;
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B16_0 = ((SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20*)(NULL));
		G_B16_1 = G_B15_0;
	}

IL_00e4:
	{
		NullCheck(G_B16_1);
		G_B16_1->____CompareFunc16_6 = G_B16_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B16_1->____CompareFunc16_6), (void*)G_B16_0);
		SqliteFunctionAttribute_t2923E6115FF388A4F4FAC0BA872F63BEC5D2AC65* L_34 = V_2;
		NullCheck(L_34);
		int32_t L_35 = L_34->____functionType_2;
		if ((((int32_t)L_35) == ((int32_t)2)))
		{
			goto IL_0127;
		}
	}
	{
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_36 = ___sqlbase0;
		SqliteFunctionAttribute_t2923E6115FF388A4F4FAC0BA872F63BEC5D2AC65* L_37 = V_2;
		NullCheck(L_37);
		String_t* L_38 = L_37->____name_0;
		SqliteFunctionAttribute_t2923E6115FF388A4F4FAC0BA872F63BEC5D2AC65* L_39 = V_2;
		NullCheck(L_39);
		int32_t L_40 = L_39->____arguments_1;
		SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* L_41 = V_0;
		SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* L_42 = V_0;
		NullCheck(L_42);
		SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94* L_43 = L_42->____InvokeFunc_2;
		SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* L_44 = V_0;
		NullCheck(L_44);
		SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94* L_45 = L_44->____StepFunc_3;
		SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* L_46 = V_0;
		NullCheck(L_46);
		SQLiteFinalCallback_t6F84B373BB829BAABB6B9E2FEAF24723743008CD* L_47 = L_46->____FinalFunc_4;
		NullCheck(L_36);
		VirtualActionInvoker6< String_t*, int32_t, bool, SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94*, SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94*, SQLiteFinalCallback_t6F84B373BB829BAABB6B9E2FEAF24723743008CD* >::Invoke(41 /* System.Void Mono.Data.Sqlite.SQLiteBase::CreateFunction(System.String,System.Int32,System.Boolean,Mono.Data.Sqlite.SQLiteCallback,Mono.Data.Sqlite.SQLiteCallback,Mono.Data.Sqlite.SQLiteFinalCallback) */, L_36, L_38, L_40, (bool)((!(((RuntimeObject*)(SqliteFunctionEx_t66A15B512D7A425A21434142226E632CE150D10F*)((SqliteFunctionEx_t66A15B512D7A425A21434142226E632CE150D10F*)IsInstClass((RuntimeObject*)L_41, SqliteFunctionEx_t66A15B512D7A425A21434142226E632CE150D10F_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), L_43, L_45, L_47);
		goto IL_013f;
	}

IL_0127:
	{
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_48 = ___sqlbase0;
		SqliteFunctionAttribute_t2923E6115FF388A4F4FAC0BA872F63BEC5D2AC65* L_49 = V_2;
		NullCheck(L_49);
		String_t* L_50 = L_49->____name_0;
		SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* L_51 = V_0;
		NullCheck(L_51);
		SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20* L_52 = L_51->____CompareFunc_5;
		SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* L_53 = V_0;
		NullCheck(L_53);
		SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20* L_54 = L_53->____CompareFunc16_6;
		NullCheck(L_48);
		VirtualActionInvoker3< String_t*, SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20*, SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20* >::Invoke(40 /* System.Void Mono.Data.Sqlite.SQLiteBase::CreateCollation(System.String,Mono.Data.Sqlite.SQLiteCollation,Mono.Data.Sqlite.SQLiteCollation) */, L_48, L_50, L_52, L_54);
	}

IL_013f:
	{
		List_1_tFA881B9537459575C967B1E246BEBC2C89C04C6B* L_55 = V_1;
		SqliteFunction_t7FD43B20F780D829C951E76AAA6FCF25E1B861D9* L_56 = V_0;
		NullCheck(L_55);
		List_1_Add_mF2DD882B9C7EF34093A5F953234E84854108523D_inline(L_55, L_56, List_1_Add_mF2DD882B9C7EF34093A5F953234E84854108523D_RuntimeMethod_var);
	}

IL_0146:
	{
		bool L_57;
		L_57 = Enumerator_MoveNext_m787C448734F5EC6AE58CEBE8EA7778045B82FF1C((&V_3), Enumerator_MoveNext_m787C448734F5EC6AE58CEBE8EA7778045B82FF1C_RuntimeMethod_var);
		if (L_57)
		{
			goto IL_0016;
		}
	}
	{
		List_1_tFA881B9537459575C967B1E246BEBC2C89C04C6B* L_58 = V_1;
		NullCheck(L_58);
		int32_t L_59 = L_58->____size_2;
		SqliteFunctionU5BU5D_t4564C20F1EB9BA6808CCD9834FE2D82F87F3ABEC* L_60 = (SqliteFunctionU5BU5D_t4564C20F1EB9BA6808CCD9834FE2D82F87F3ABEC*)(SqliteFunctionU5BU5D_t4564C20F1EB9BA6808CCD9834FE2D82F87F3ABEC*)SZArrayNew(SqliteFunctionU5BU5D_t4564C20F1EB9BA6808CCD9834FE2D82F87F3ABEC_il2cpp_TypeInfo_var, (uint32_t)L_59);
		V_4 = L_60;
		List_1_tFA881B9537459575C967B1E246BEBC2C89C04C6B* L_61 = V_1;
		SqliteFunctionU5BU5D_t4564C20F1EB9BA6808CCD9834FE2D82F87F3ABEC* L_62 = V_4;
		NullCheck(L_61);
		List_1_CopyTo_m45944BA57667FCA9B5B56F9A2168D6D5E5306A0E(L_61, L_62, 0, List_1_CopyTo_m45944BA57667FCA9B5B56F9A2168D6D5E5306A0E_RuntimeMethod_var);
		SqliteFunctionU5BU5D_t4564C20F1EB9BA6808CCD9834FE2D82F87F3ABEC* L_63 = V_4;
		return L_63;
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
// System.Void Mono.Data.Sqlite.SqliteFunction/AggregateData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AggregateData__ctor_m41C280B0A658385B841734F8A0332576D5B03820 (AggregateData_t866FCF0E4839C9651D352CC8D81C4F554C695E58* __this, const RuntimeMethod* method) 
{
	{
		__this->____count_0 = 1;
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
// System.Void Mono.Data.Sqlite.SqliteKeyReader::.ctor(Mono.Data.Sqlite.SqliteConnection,Mono.Data.Sqlite.SqliteDataReader,Mono.Data.Sqlite.SqliteStatement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteKeyReader__ctor_mC1F70DE7D7E555DC237FE14D7D13E205341E543E (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* ___cnn0, SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* ___reader1, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* ___stmt2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFC882976F9C1D377FB9B96AC561BF0301DCC75F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m994A6496B0ED7177E6D4535A398A7EFFF9684FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m7B0E05167CA47611244E25AD67EBCEBDF5DB5EDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m79EA54A4C736FED8607D6E97BD54974D340AEA82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8B64E2395E0FED66B5313607CFF79A5C8A46358A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA71548765692C241BEFB57E80CBC1563829B1656_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA2C174FE89DD752197CA6AE0E89F2A2843411B05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_CopyTo_m0329A9F65500EF5CF9BBA303DB826C8AF16636C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_CopyTo_m87398D95BED8C0626A669D782ECE31DE73392BDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m60653FC61EE022D449B504F5476F13192863010C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF30A6998C02D085CCD3F4E659A4ED22C2A03173B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11CD6576D2D39281C98ACF615A4A22DB7880A73A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27F29081E63F191FEECC19EEACB62C41A53F0145);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FFE24DBF860CC54D3362E0F2C5B8E374A53D096);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A4B52649FB9A1CBCE24C379CFC43E7B53DD4E4E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E6F47FA2A413B3D64AC4A42E136CD9A77578E9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4974B6D93610BFE46F8450FA8035E08CD01E39F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral700F53AE445FB64D7FC5C5A144E7907188DEB24B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7245750688F8ABD9E50DA82005D421F8461EC1E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA64D7678290D92C58079B8A51D38C8C9C6C12315);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE763D72A12952760F58B6A88F7AA955A6CDAD865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE92A469260B8CCEEF66ADD89872E7BD2F66E5AD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF68BE93499EBDA525EAB969E88B05907332F6184);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* V_0 = NULL;
	Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* V_1 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_2 = NULL;
	List_1_tF30A6998C02D085CCD3F4E659A4ED22C2A03173B* V_3 = NULL;
	DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* V_4 = NULL;
	DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* V_7 = NULL;
	DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	String_t* V_10 = NULL;
	String_t* V_11 = NULL;
	KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250 V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t V_14 = 0;
	String_t* V_15 = NULL;
	DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* V_16 = NULL;
	DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* V_17 = NULL;
	int32_t V_18 = 0;
	DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* V_19 = NULL;
	RuntimeObject* V_20 = NULL;
	DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* V_21 = NULL;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* V_25 = NULL;
	KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* V_26 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_27 = NULL;
	int32_t V_28 = 0;
	bool V_29 = false;
	DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* V_30 = NULL;
	RuntimeObject* V_31 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_32 = NULL;
	int32_t V_33 = 0;
	String_t* V_34 = NULL;
	KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D V_35;
	memset((&V_35), 0, sizeof(V_35));
	RuntimeObject* V_36 = NULL;
	RuntimeObject* V_37 = NULL;
	RuntimeObject* V_38 = NULL;
	RuntimeObject* V_39 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_0 = (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*)il2cpp_codegen_object_new(Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968(L_0, Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* L_1 = (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638*)il2cpp_codegen_object_new(Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m79EA54A4C736FED8607D6E97BD54974D340AEA82(L_1, Dictionary_2__ctor_m79EA54A4C736FED8607D6E97BD54974D340AEA82_RuntimeMethod_var);
		V_1 = L_1;
		List_1_tF30A6998C02D085CCD3F4E659A4ED22C2A03173B* L_2 = (List_1_tF30A6998C02D085CCD3F4E659A4ED22C2A03173B*)il2cpp_codegen_object_new(List_1_tF30A6998C02D085CCD3F4E659A4ED22C2A03173B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m60653FC61EE022D449B504F5476F13192863010C(L_2, List_1__ctor_m60653FC61EE022D449B504F5476F13192863010C_RuntimeMethod_var);
		V_3 = L_2;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_3 = ___stmt2;
		__this->____stmt_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stmt_1), (void*)L_3);
		SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_4 = ___cnn0;
		NullCheck(L_4);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_5;
		L_5 = SqliteConnection_GetSchema_m28E05FF3A6FEF10E0AAA5AB13312D67A2E935B34(L_4, _stringLiteralA64D7678290D92C58079B8A51D38C8C9C6C12315, NULL);
		V_4 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a1:
			{// begin finally (depth: 1)
				{
					DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_6 = V_4;
					if (!L_6)
					{
						goto IL_00af;
					}
				}
				{
					DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_7 = V_4;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_00af:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_8 = V_4;
				NullCheck(L_8);
				DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738* L_9 = L_8->____rowCollection_6;
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(10 /* System.Collections.IEnumerator System.Data.InternalDataCollectionBase::GetEnumerator() */, L_9);
				V_6 = L_10;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0086_1:
					{// begin finally (depth: 2)
						{
							RuntimeObject* L_11 = V_6;
							V_36 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
							RuntimeObject* L_12 = V_36;
							if (L_12)
							{
								goto IL_0094_1;
							}
						}
						{
							return;
						}

IL_0094_1:
						{
							RuntimeObject* L_13 = V_36;
							NullCheck(L_13);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0075_2;
					}

IL_003f_2:
					{
						RuntimeObject* L_14 = V_6;
						NullCheck(L_14);
						RuntimeObject* L_15;
						L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
						V_5 = ((DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388*)CastclassClass((RuntimeObject*)L_15, DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388_il2cpp_TypeInfo_var));
						Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_16 = V_0;
						DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_17 = V_5;
						NullCheck(L_17);
						RuntimeObject* L_18;
						L_18 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_17, _stringLiteralE763D72A12952760F58B6A88F7AA955A6CDAD865, NULL);
						DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_19 = V_5;
						NullCheck(L_19);
						RuntimeObject* L_20;
						L_20 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_19, _stringLiteralF68BE93499EBDA525EAB969E88B05907332F6184, NULL);
						il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
						int32_t L_21;
						L_21 = Convert_ToInt32_m9FEA65DB96264479B5268014F10754787382D297(L_20, NULL);
						NullCheck(L_16);
						Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_16, ((String_t*)CastclassSealed((RuntimeObject*)L_18, String_t_il2cpp_TypeInfo_var)), L_21, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
					}

IL_0075_2:
					{
						RuntimeObject* L_22 = V_6;
						NullCheck(L_22);
						bool L_23;
						L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
						if (L_23)
						{
							goto IL_003f_2;
						}
					}
					{
						goto IL_009c_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_009c_1:
			{
				goto IL_00b0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b0:
	{
		SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* L_24 = ___reader1;
		NullCheck(L_24);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_25;
		L_25 = SqliteDataReader_GetSchemaTable_mE2492BADB6AEC4ACEC678492C53723F36B53553C(L_24, (bool)0, (bool)0, NULL);
		V_7 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_05da:
			{// begin finally (depth: 1)
				{
					DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_26 = V_7;
					if (!L_26)
					{
						goto IL_05e8;
					}
				}
				{
					DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_27 = V_7;
					NullCheck(L_27);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_27);
				}

IL_05e8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_28 = V_7;
				NullCheck(L_28);
				DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738* L_29 = L_28->____rowCollection_6;
				NullCheck(L_29);
				RuntimeObject* L_30;
				L_30 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(10 /* System.Collections.IEnumerator System.Data.InternalDataCollectionBase::GetEnumerator() */, L_29);
				V_9 = L_30;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_016c_1:
					{// begin finally (depth: 2)
						{
							RuntimeObject* L_31 = V_9;
							V_37 = ((RuntimeObject*)IsInst((RuntimeObject*)L_31, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
							RuntimeObject* L_32 = V_37;
							if (L_32)
							{
								goto IL_017a_1;
							}
						}
						{
							return;
						}

IL_017a_1:
						{
							RuntimeObject* L_33 = V_37;
							NullCheck(L_33);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_33);
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_015b_2;
					}

IL_00cd_2:
					{
						RuntimeObject* L_34 = V_9;
						NullCheck(L_34);
						RuntimeObject* L_35;
						L_35 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_34);
						V_8 = ((DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388*)CastclassClass((RuntimeObject*)L_35, DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388_il2cpp_TypeInfo_var));
						DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_36 = V_8;
						il2cpp_codegen_runtime_class_init_inline(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var);
						String_t* L_37 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___BaseCatalogName_6;
						NullCheck(L_36);
						RuntimeObject* L_38;
						L_38 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_36, L_37, NULL);
						il2cpp_codegen_runtime_class_init_inline(DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_il2cpp_TypeInfo_var);
						DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC* L_39 = ((DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_il2cpp_TypeInfo_var))->___Value_0;
						if ((!(((RuntimeObject*)(RuntimeObject*)L_38) == ((RuntimeObject*)(DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC*)L_39))))
						{
							goto IL_00f6_2;
						}
					}
					{
						goto IL_015b_2;
					}

IL_00f6_2:
					{
						DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_40 = V_8;
						il2cpp_codegen_runtime_class_init_inline(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var);
						String_t* L_41 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___BaseCatalogName_6;
						NullCheck(L_40);
						RuntimeObject* L_42;
						L_42 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_40, L_41, NULL);
						V_10 = ((String_t*)CastclassSealed((RuntimeObject*)L_42, String_t_il2cpp_TypeInfo_var));
						DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_43 = V_8;
						il2cpp_codegen_runtime_class_init_inline(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var);
						String_t* L_44 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___BaseTableName_15;
						NullCheck(L_43);
						RuntimeObject* L_45;
						L_45 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_43, L_44, NULL);
						V_11 = ((String_t*)CastclassSealed((RuntimeObject*)L_45, String_t_il2cpp_TypeInfo_var));
						Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* L_46 = V_1;
						String_t* L_47 = V_10;
						NullCheck(L_46);
						bool L_48;
						L_48 = Dictionary_2_ContainsKey_m994A6496B0ED7177E6D4535A398A7EFFF9684FE8(L_46, L_47, Dictionary_2_ContainsKey_m994A6496B0ED7177E6D4535A398A7EFFF9684FE8_RuntimeMethod_var);
						if (L_48)
						{
							goto IL_013d_2;
						}
					}
					{
						List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_49 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
						NullCheck(L_49);
						List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_49, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
						V_2 = L_49;
						Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* L_50 = V_1;
						String_t* L_51 = V_10;
						List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_52 = V_2;
						NullCheck(L_50);
						Dictionary_2_Add_mFC882976F9C1D377FB9B96AC561BF0301DCC75F5(L_50, L_51, L_52, Dictionary_2_Add_mFC882976F9C1D377FB9B96AC561BF0301DCC75F5_RuntimeMethod_var);
						goto IL_0146_2;
					}

IL_013d_2:
					{
						Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* L_53 = V_1;
						String_t* L_54 = V_10;
						NullCheck(L_53);
						List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_55;
						L_55 = Dictionary_2_get_Item_m8B64E2395E0FED66B5313607CFF79A5C8A46358A(L_53, L_54, Dictionary_2_get_Item_m8B64E2395E0FED66B5313607CFF79A5C8A46358A_RuntimeMethod_var);
						V_2 = L_55;
					}

IL_0146_2:
					{
						List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_56 = V_2;
						String_t* L_57 = V_11;
						NullCheck(L_56);
						bool L_58;
						L_58 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_56, L_57, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
						if (L_58)
						{
							goto IL_015b_2;
						}
					}
					{
						List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_59 = V_2;
						String_t* L_60 = V_11;
						NullCheck(L_59);
						List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_59, L_60, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
					}

IL_015b_2:
					{
						RuntimeObject* L_61 = V_9;
						NullCheck(L_61);
						bool L_62;
						L_62 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_61);
						if (L_62)
						{
							goto IL_00cd_2;
						}
					}
					{
						goto IL_0182_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0182_1:
			{
				Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* L_63 = V_1;
				NullCheck(L_63);
				Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250 L_64;
				L_64 = Dictionary_2_GetEnumerator_m7B0E05167CA47611244E25AD67EBCEBDF5DB5EDE(L_63, Dictionary_2_GetEnumerator_m7B0E05167CA47611244E25AD67EBCEBDF5DB5EDE_RuntimeMethod_var);
				V_13 = L_64;
				goto IL_05c9_1;
			}

IL_018f_1:
			{
				KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89 L_65 = (&V_13)->____current_3;
				V_12 = L_65;
				V_14 = 0;
				goto IL_05b6_1;
			}

IL_01a0_1:
			{
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_66 = (&V_12)->___value_1;
				int32_t L_67 = V_14;
				NullCheck(L_66);
				String_t* L_68;
				L_68 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_66, L_67, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
				V_15 = L_68;
				V_16 = (DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388*)NULL;
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_69 = ___cnn0;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_70 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)3);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = L_70;
				String_t* L_72 = (&V_12)->___key_0;
				NullCheck(L_71);
				ArrayElementTypeCheck (L_71, L_72);
				(L_71)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_72);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = L_71;
				String_t* L_74 = V_15;
				NullCheck(L_73);
				ArrayElementTypeCheck (L_73, L_74);
				(L_73)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_74);
				NullCheck(L_69);
				DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_75;
				L_75 = SqliteConnection_GetSchema_m58D119A3F36EF01F6291F4D257A4A0EE133A6A3F(L_69, _stringLiteral3A4B52649FB9A1CBCE24C379CFC43E7B53DD4E4E, L_73, NULL);
				V_17 = L_75;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_05a1_1:
					{// begin finally (depth: 2)
						{
							DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_76 = V_17;
							if (!L_76)
							{
								goto IL_05af_1;
							}
						}
						{
							DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_77 = V_17;
							NullCheck(L_77);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_77);
						}

IL_05af_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						V_18 = 0;
						goto IL_0278_2;
					}

IL_01dd_2:
					{
						DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_78 = V_17;
						NullCheck(L_78);
						DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738* L_79 = L_78->____rowCollection_6;
						NullCheck(L_79);
						RuntimeObject* L_80;
						L_80 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(10 /* System.Collections.IEnumerator System.Data.InternalDataCollectionBase::GetEnumerator() */, L_79);
						V_20 = L_80;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_025c_2:
							{// begin finally (depth: 3)
								{
									RuntimeObject* L_81 = V_20;
									V_38 = ((RuntimeObject*)IsInst((RuntimeObject*)L_81, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
									RuntimeObject* L_82 = V_38;
									if (L_82)
									{
										goto IL_026a_2;
									}
								}
								{
									return;
								}

IL_026a_2:
								{
									RuntimeObject* L_83 = V_38;
									NullCheck(L_83);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_83);
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							{
								goto IL_024b_3;
							}

IL_01f0_3:
							{
								RuntimeObject* L_84 = V_20;
								NullCheck(L_84);
								RuntimeObject* L_85;
								L_85 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_84);
								V_19 = ((DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388*)CastclassClass((RuntimeObject*)L_85, DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388_il2cpp_TypeInfo_var));
								int32_t L_86 = V_18;
								if (L_86)
								{
									goto IL_0224_3;
								}
							}
							{
								DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_87 = V_19;
								NullCheck(L_87);
								RuntimeObject* L_88;
								L_88 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_87, _stringLiteral4974B6D93610BFE46F8450FA8035E08CD01E39F9, NULL);
								if (!((*(bool*)((bool*)(bool*)UnBox(L_88, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))))
								{
									goto IL_0224_3;
								}
							}
							{
								DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_89 = V_19;
								V_16 = L_89;
								goto IL_0257_3;
							}

IL_0224_3:
							{
								int32_t L_90 = V_18;
								if ((!(((uint32_t)L_90) == ((uint32_t)1))))
								{
									goto IL_024b_3;
								}
							}
							{
								DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_91 = V_19;
								NullCheck(L_91);
								RuntimeObject* L_92;
								L_92 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_91, _stringLiteral7245750688F8ABD9E50DA82005D421F8461EC1E6, NULL);
								if (!((*(bool*)((bool*)(bool*)UnBox(L_92, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))))
								{
									goto IL_024b_3;
								}
							}
							{
								DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_93 = V_19;
								V_16 = L_93;
								goto IL_0257_3;
							}

IL_024b_3:
							{
								RuntimeObject* L_94 = V_20;
								NullCheck(L_94);
								bool L_95;
								L_95 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_94);
								if (L_95)
								{
									goto IL_01f0_3;
								}
							}

IL_0257_3:
							{
								goto IL_0272_2;
							}
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_0272_2:
					{
						int32_t L_96 = V_18;
						V_18 = ((int32_t)il2cpp_codegen_add(L_96, 1));
					}

IL_0278_2:
					{
						int32_t L_97 = V_18;
						if ((((int32_t)L_97) >= ((int32_t)2)))
						{
							goto IL_0287_2;
						}
					}
					{
						DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_98 = V_16;
						if (!L_98)
						{
							goto IL_01dd_2;
						}
					}

IL_0287_2:
					{
						DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_99 = V_16;
						if (L_99)
						{
							goto IL_02a7_2;
						}
					}
					{
						List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_100 = (&V_12)->___value_1;
						int32_t L_101 = V_14;
						NullCheck(L_100);
						List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D(L_100, L_101, List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
						int32_t L_102 = V_14;
						V_14 = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
						goto IL_059c_2;
					}

IL_02a7_2:
					{
						SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_103 = ___cnn0;
						StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_104 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)3);
						StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_105 = L_104;
						String_t* L_106 = (&V_12)->___key_0;
						NullCheck(L_105);
						ArrayElementTypeCheck (L_105, L_106);
						(L_105)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_106);
						StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_107 = L_105;
						String_t* L_108 = V_15;
						NullCheck(L_107);
						ArrayElementTypeCheck (L_107, L_108);
						(L_107)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_108);
						NullCheck(L_103);
						DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_109;
						L_109 = SqliteConnection_GetSchema_m58D119A3F36EF01F6291F4D257A4A0EE133A6A3F(L_103, _stringLiteral11CD6576D2D39281C98ACF615A4A22DB7880A73A, L_107, NULL);
						V_21 = L_109;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_058d_2:
							{// begin finally (depth: 3)
								{
									DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_110 = V_21;
									if (!L_110)
									{
										goto IL_059b_2;
									}
								}
								{
									DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_111 = V_21;
									NullCheck(L_111);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_111);
								}

IL_059b_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							{
								Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_112 = V_0;
								String_t* L_113 = (&V_12)->___key_0;
								NullCheck(L_112);
								int32_t L_114;
								L_114 = Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592(L_112, L_113, Dictionary_2_get_Item_mE01750B88D9A581E9196F3444952F7592E862592_RuntimeMethod_var);
								V_22 = L_114;
								DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_115 = V_21;
								NullCheck(L_115);
								DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738* L_116 = L_115->____rowCollection_6;
								NullCheck(L_116);
								DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_117;
								L_117 = DataRowCollection_get_Item_mB1499CE772BD95C3FBC29FDCAA56AE101F07BE8B(L_116, 0, NULL);
								NullCheck(L_117);
								RuntimeObject* L_118;
								L_118 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_117, _stringLiteral700F53AE445FB64D7FC5C5A144E7907188DEB24B, NULL);
								il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
								int32_t L_119;
								L_119 = Convert_ToInt32_m9FEA65DB96264479B5268014F10754787382D297(L_118, NULL);
								V_23 = L_119;
								V_24 = (-1);
								SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_120 = ___cnn0;
								StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_121 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)4);
								StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_122 = L_121;
								String_t* L_123 = (&V_12)->___key_0;
								NullCheck(L_122);
								ArrayElementTypeCheck (L_122, L_123);
								(L_122)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_123);
								StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_124 = L_122;
								String_t* L_125 = V_15;
								NullCheck(L_124);
								ArrayElementTypeCheck (L_124, L_125);
								(L_124)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_125);
								StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_126 = L_124;
								DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_127 = V_16;
								NullCheck(L_127);
								RuntimeObject* L_128;
								L_128 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_127, _stringLiteral3E6F47FA2A413B3D64AC4A42E136CD9A77578E9D, NULL);
								NullCheck(L_126);
								ArrayElementTypeCheck (L_126, ((String_t*)CastclassSealed((RuntimeObject*)L_128, String_t_il2cpp_TypeInfo_var)));
								(L_126)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)((String_t*)CastclassSealed((RuntimeObject*)L_128, String_t_il2cpp_TypeInfo_var)));
								NullCheck(L_120);
								DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_129;
								L_129 = SqliteConnection_GetSchema_m58D119A3F36EF01F6291F4D257A4A0EE133A6A3F(L_120, _stringLiteralE92A469260B8CCEEF66ADD89872E7BD2F66E5AD5, L_126, NULL);
								V_25 = L_129;
							}
							{
								auto __finallyBlock = il2cpp::utils::Finally([&]
								{

FINALLY_0579_3:
									{// begin finally (depth: 4)
										{
											DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_130 = V_25;
											if (!L_130)
											{
												goto IL_0587_3;
											}
										}
										{
											DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_131 = V_25;
											NullCheck(L_131);
											InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_131);
										}

IL_0587_3:
										{
											return;
										}
									}// end finally (depth: 4)
								});
								try
								{// begin try (depth: 4)
									{
										V_26 = (KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591*)NULL;
										List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_132 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
										NullCheck(L_132);
										List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_132, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
										V_27 = L_132;
										V_28 = 0;
										goto IL_0466_4;
									}

IL_0341_4:
									{
										V_29 = (bool)1;
										DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_133 = V_7;
										NullCheck(L_133);
										DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738* L_134 = L_133->____rowCollection_6;
										NullCheck(L_134);
										RuntimeObject* L_135;
										L_135 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(10 /* System.Collections.IEnumerator System.Data.InternalDataCollectionBase::GetEnumerator() */, L_134);
										V_31 = L_135;
									}
									{
										auto __finallyBlock = il2cpp::utils::Finally([&]
										{

FINALLY_041f_4:
											{// begin finally (depth: 5)
												{
													RuntimeObject* L_136 = V_31;
													V_39 = ((RuntimeObject*)IsInst((RuntimeObject*)L_136, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
													RuntimeObject* L_137 = V_39;
													if (L_137)
													{
														goto IL_042d_4;
													}
												}
												{
													return;
												}

IL_042d_4:
												{
													RuntimeObject* L_138 = V_39;
													NullCheck(L_138);
													InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_138);
													return;
												}
											}// end finally (depth: 5)
										});
										try
										{// begin try (depth: 5)
											{
												goto IL_040e_5;
											}

IL_0357_5:
											{
												RuntimeObject* L_139 = V_31;
												NullCheck(L_139);
												RuntimeObject* L_140;
												L_140 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_139);
												V_30 = ((DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388*)CastclassClass((RuntimeObject*)L_140, DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388_il2cpp_TypeInfo_var));
												DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_141 = V_30;
												il2cpp_codegen_runtime_class_init_inline(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var);
												String_t* L_142 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___BaseColumnName_16;
												NullCheck(L_141);
												bool L_143;
												L_143 = DataRow_IsNull_m94DCD0C19CEED84641FA0FBC3C837D0A1FD58AD0(L_141, L_142, NULL);
												if (!L_143)
												{
													goto IL_037b_5;
												}
											}
											{
												goto IL_040e_5;
											}

IL_037b_5:
											{
												DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_144 = V_30;
												il2cpp_codegen_runtime_class_init_inline(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var);
												String_t* L_145 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___BaseColumnName_16;
												NullCheck(L_144);
												RuntimeObject* L_146;
												L_146 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_144, L_145, NULL);
												DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_147 = V_25;
												NullCheck(L_147);
												DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738* L_148 = L_147->____rowCollection_6;
												int32_t L_149 = V_28;
												NullCheck(L_148);
												DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_150;
												L_150 = DataRowCollection_get_Item_mB1499CE772BD95C3FBC29FDCAA56AE101F07BE8B(L_148, L_149, NULL);
												NullCheck(L_150);
												RuntimeObject* L_151;
												L_151 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_150, _stringLiteral27F29081E63F191FEECC19EEACB62C41A53F0145, NULL);
												bool L_152;
												L_152 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(((String_t*)CastclassSealed((RuntimeObject*)L_146, String_t_il2cpp_TypeInfo_var)), ((String_t*)CastclassSealed((RuntimeObject*)L_151, String_t_il2cpp_TypeInfo_var)), NULL);
												if (!L_152)
												{
													goto IL_040e_5;
												}
											}
											{
												DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_153 = V_30;
												il2cpp_codegen_runtime_class_init_inline(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var);
												String_t* L_154 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___BaseTableName_15;
												NullCheck(L_153);
												RuntimeObject* L_155;
												L_155 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_153, L_154, NULL);
												String_t* L_156 = V_15;
												bool L_157;
												L_157 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(((String_t*)CastclassSealed((RuntimeObject*)L_155, String_t_il2cpp_TypeInfo_var)), L_156, NULL);
												if (!L_157)
												{
													goto IL_040e_5;
												}
											}
											{
												DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_158 = V_30;
												il2cpp_codegen_runtime_class_init_inline(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var);
												String_t* L_159 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___BaseCatalogName_6;
												NullCheck(L_158);
												RuntimeObject* L_160;
												L_160 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_158, L_159, NULL);
												String_t* L_161 = (&V_12)->___key_0;
												bool L_162;
												L_162 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(((String_t*)CastclassSealed((RuntimeObject*)L_160, String_t_il2cpp_TypeInfo_var)), L_161, NULL);
												if (!L_162)
												{
													goto IL_040e_5;
												}
											}
											{
												DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_163 = V_25;
												NullCheck(L_163);
												DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738* L_164 = L_163->____rowCollection_6;
												int32_t L_165 = V_28;
												NullCheck(L_164);
												DataRowCollection_RemoveAt_m82EF7643A938D6D033B9E4901E5DF0FB51B92BA7(L_164, L_165, NULL);
												int32_t L_166 = V_28;
												V_28 = ((int32_t)il2cpp_codegen_subtract(L_166, 1));
												V_29 = (bool)0;
												goto IL_041a_5;
											}

IL_040e_5:
											{
												RuntimeObject* L_167 = V_31;
												NullCheck(L_167);
												bool L_168;
												L_168 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_167);
												if (L_168)
												{
													goto IL_0357_5;
												}
											}

IL_041a_5:
											{
												goto IL_0435_4;
											}
										}// end try (depth: 5)
										catch(Il2CppExceptionWrapper& e)
										{
											__finallyBlock.StoreException(e.ex);
										}
									}

IL_0435_4:
									{
										bool L_169 = V_29;
										if (!L_169)
										{
											goto IL_0460_4;
										}
									}
									{
										List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_170 = V_27;
										DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_171 = V_25;
										NullCheck(L_171);
										DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738* L_172 = L_171->____rowCollection_6;
										int32_t L_173 = V_28;
										NullCheck(L_172);
										DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_174;
										L_174 = DataRowCollection_get_Item_mB1499CE772BD95C3FBC29FDCAA56AE101F07BE8B(L_172, L_173, NULL);
										NullCheck(L_174);
										RuntimeObject* L_175;
										L_175 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_174, _stringLiteral27F29081E63F191FEECC19EEACB62C41A53F0145, NULL);
										NullCheck(L_170);
										List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_170, ((String_t*)CastclassSealed((RuntimeObject*)L_175, String_t_il2cpp_TypeInfo_var)), List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
									}

IL_0460_4:
									{
										int32_t L_176 = V_28;
										V_28 = ((int32_t)il2cpp_codegen_add(L_176, 1));
									}

IL_0466_4:
									{
										int32_t L_177 = V_28;
										DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_178 = V_25;
										NullCheck(L_178);
										DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738* L_179 = L_178->____rowCollection_6;
										NullCheck(L_179);
										int32_t L_180;
										L_180 = DataRowCollection_get_Count_m1EC5C8B103735834509013DB3523A5E9A712A532(L_179, NULL);
										if ((((int32_t)L_177) < ((int32_t)L_180)))
										{
											goto IL_0341_4;
										}
									}
									{
										DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_181 = V_16;
										NullCheck(L_181);
										RuntimeObject* L_182;
										L_182 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_181, _stringLiteral3E6F47FA2A413B3D64AC4A42E136CD9A77578E9D, NULL);
										String_t* L_183 = V_15;
										String_t* L_184;
										L_184 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2FFE24DBF860CC54D3362E0F2C5B8E374A53D096, L_183, NULL);
										bool L_185;
										L_185 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(((String_t*)CastclassSealed((RuntimeObject*)L_182, String_t_il2cpp_TypeInfo_var)), L_184, NULL);
										if (!L_185)
										{
											goto IL_04d7_4;
										}
									}
									{
										List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_186 = V_27;
										NullCheck(L_186);
										int32_t L_187 = L_186->____size_2;
										if ((((int32_t)L_187) <= ((int32_t)0)))
										{
											goto IL_04d7_4;
										}
									}
									{
										List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_188 = V_27;
										NullCheck(L_188);
										int32_t L_189 = L_188->____size_2;
										StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_190 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_189);
										V_32 = L_190;
										List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_191 = V_27;
										StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_192 = V_32;
										NullCheck(L_191);
										List_1_CopyTo_m87398D95BED8C0626A669D782ECE31DE73392BDC(L_191, L_192, List_1_CopyTo_m87398D95BED8C0626A669D782ECE31DE73392BDC_RuntimeMethod_var);
										SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_193 = ___cnn0;
										String_t* L_194 = (&V_12)->___key_0;
										String_t* L_195 = V_15;
										StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_196 = V_32;
										KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_197 = (KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591*)il2cpp_codegen_object_new(KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591_il2cpp_TypeInfo_var);
										NullCheck(L_197);
										KeyQuery__ctor_m0C6F1ADAD13F010F8CED8F23BF619A6D5DE486B3(L_197, L_193, L_194, L_195, L_196, NULL);
										V_26 = L_197;
									}

IL_04d7_4:
									{
										V_33 = 0;
										goto IL_0561_4;
									}

IL_04df_4:
									{
										DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_198 = V_25;
										NullCheck(L_198);
										DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738* L_199 = L_198->____rowCollection_6;
										int32_t L_200 = V_33;
										NullCheck(L_199);
										DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_201;
										L_201 = DataRowCollection_get_Item_mB1499CE772BD95C3FBC29FDCAA56AE101F07BE8B(L_199, L_200, NULL);
										NullCheck(L_201);
										RuntimeObject* L_202;
										L_202 = DataRow_get_Item_mDBEF2F99FC927BD083574F09CEB131D4B9E14647(L_201, _stringLiteral27F29081E63F191FEECC19EEACB62C41A53F0145, NULL);
										V_34 = ((String_t*)CastclassSealed((RuntimeObject*)L_202, String_t_il2cpp_TypeInfo_var));
										il2cpp_codegen_initobj((&V_35), sizeof(KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D));
										int32_t L_203 = V_23;
										(&V_35)->___rootPage_4 = L_203;
										int32_t L_204 = V_24;
										(&V_35)->___cursor_5 = L_204;
										int32_t L_205 = V_22;
										(&V_35)->___database_3 = L_205;
										String_t* L_206 = (&V_12)->___key_0;
										(&V_35)->___databaseName_0 = L_206;
										Il2CppCodeGenWriteBarrier((void**)(&(&V_35)->___databaseName_0), (void*)L_206);
										String_t* L_207 = V_15;
										(&V_35)->___tableName_1 = L_207;
										Il2CppCodeGenWriteBarrier((void**)(&(&V_35)->___tableName_1), (void*)L_207);
										String_t* L_208 = V_34;
										(&V_35)->___columnName_2 = L_208;
										Il2CppCodeGenWriteBarrier((void**)(&(&V_35)->___columnName_2), (void*)L_208);
										KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_209 = V_26;
										(&V_35)->___query_6 = L_209;
										Il2CppCodeGenWriteBarrier((void**)(&(&V_35)->___query_6), (void*)L_209);
										int32_t L_210 = V_33;
										(&V_35)->___column_7 = L_210;
										List_1_tF30A6998C02D085CCD3F4E659A4ED22C2A03173B* L_211 = V_3;
										KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D L_212 = V_35;
										NullCheck(L_211);
										List_1_Add_mA2C174FE89DD752197CA6AE0E89F2A2843411B05_inline(L_211, L_212, List_1_Add_mA2C174FE89DD752197CA6AE0E89F2A2843411B05_RuntimeMethod_var);
										int32_t L_213 = V_33;
										V_33 = ((int32_t)il2cpp_codegen_add(L_213, 1));
									}

IL_0561_4:
									{
										int32_t L_214 = V_33;
										DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_215 = V_25;
										NullCheck(L_215);
										DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738* L_216 = L_215->____rowCollection_6;
										NullCheck(L_216);
										int32_t L_217;
										L_217 = DataRowCollection_get_Count_m1EC5C8B103735834509013DB3523A5E9A712A532(L_216, NULL);
										if ((((int32_t)L_214) < ((int32_t)L_217)))
										{
											goto IL_04df_4;
										}
									}
									{
										goto IL_0588_3;
									}
								}// end try (depth: 4)
								catch(Il2CppExceptionWrapper& e)
								{
									__finallyBlock.StoreException(e.ex);
								}
							}

IL_0588_3:
							{
								goto IL_059c_2;
							}
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_059c_2:
					{
						goto IL_05b0_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_05b0_1:
			{
				int32_t L_218 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_218, 1));
			}

IL_05b6_1:
			{
				int32_t L_219 = V_14;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_220 = (&V_12)->___value_1;
				NullCheck(L_220);
				int32_t L_221;
				L_221 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_220, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
				if ((((int32_t)L_219) < ((int32_t)L_221)))
				{
					goto IL_01a0_1;
				}
			}

IL_05c9_1:
			{
				bool L_222;
				L_222 = Enumerator_MoveNext_mA71548765692C241BEFB57E80CBC1563829B1656((&V_13), Enumerator_MoveNext_mA71548765692C241BEFB57E80CBC1563829B1656_RuntimeMethod_var);
				if (L_222)
				{
					goto IL_018f_1;
				}
			}
			{
				goto IL_05e9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_05e9:
	{
		List_1_tF30A6998C02D085CCD3F4E659A4ED22C2A03173B* L_223 = V_3;
		NullCheck(L_223);
		int32_t L_224 = L_223->____size_2;
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_225 = (KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5*)(KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5*)SZArrayNew(KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5_il2cpp_TypeInfo_var, (uint32_t)L_224);
		__this->____keyInfo_0 = L_225;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyInfo_0), (void*)L_225);
		List_1_tF30A6998C02D085CCD3F4E659A4ED22C2A03173B* L_226 = V_3;
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_227 = __this->____keyInfo_0;
		NullCheck(L_226);
		List_1_CopyTo_m0329A9F65500EF5CF9BBA303DB826C8AF16636C6(L_226, L_227, List_1_CopyTo_m0329A9F65500EF5CF9BBA303DB826C8AF16636C6_RuntimeMethod_var);
		return;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteKeyReader::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteKeyReader_get_Count_m8B54BE657D583C5FD27E338F5B5E20BD018CDAF3 (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_0 = __this->____keyInfo_0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0019;
	}

IL_0011:
	{
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_1 = __this->____keyInfo_0;
		NullCheck(L_1);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader::Sync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteKeyReader_Sync_m23B27E9B34013F1D860AD14F24A9049EFB0EE4AA (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		SqliteKeyReader_Sync_m41A43C9CF6AEDBA5514BACFB253CA0A178753CB4(__this, NULL);
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_0 = __this->____keyInfo_0;
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		int32_t L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->___cursor_5;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0023;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidCastException__ctor_mCBC218CE25034242D2EB33B3E59933295CE93C56(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqliteKeyReader_Sync_m23B27E9B34013F1D860AD14F24A9049EFB0EE4AA_RuntimeMethod_var)));
	}

IL_0023:
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader::Sync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteKeyReader_Sync_m41A43C9CF6AEDBA5514BACFB253CA0A178753CB4 (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, const RuntimeMethod* method) 
{
	KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* V_0 = NULL;
	int32_t V_1 = 0;
	{
		bool L_0 = __this->____isValid_2;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		V_0 = (KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591*)NULL;
		V_1 = 0;
		goto IL_008b;
	}

IL_0015:
	{
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_1 = __this->____keyInfo_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->___query_6;
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_4 = __this->____keyInfo_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___query_6;
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_7 = V_0;
		if ((((RuntimeObject*)(KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591*)L_6) == ((RuntimeObject*)(KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591*)L_7)))
		{
			goto IL_0087;
		}
	}

IL_0042:
	{
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_8 = __this->____keyInfo_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___query_6;
		V_0 = L_10;
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_11 = V_0;
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_12 = V_0;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_13 = __this->____stmt_1;
		NullCheck(L_13);
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_14 = L_13->____sql_0;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_15 = __this->____stmt_1;
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_16 = __this->____keyInfo_0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___cursor_5;
		NullCheck(L_14);
		int64_t L_19;
		L_19 = VirtualFuncInvoker2< int64_t, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*, int32_t >::Invoke(58 /* System.Int64 Mono.Data.Sqlite.SQLiteBase::GetRowIdForCursor(Mono.Data.Sqlite.SqliteStatement,System.Int32) */, L_14, L_15, L_18);
		NullCheck(L_12);
		KeyQuery_Sync_mDC26353CACA8F5A31BB77E4DE114897524FE5BCC(L_12, L_19, NULL);
	}

IL_0087:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_008b:
	{
		int32_t L_21 = V_1;
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_22 = __this->____keyInfo_0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0015;
		}
	}
	{
		__this->____isValid_2 = (bool)1;
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteKeyReader_Reset_m77133DC9BEB9F5A64B8B0403B34FD81226E1AB23 (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		__this->____isValid_2 = (bool)0;
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_0 = __this->____keyInfo_0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		V_0 = 0;
		goto IL_004b;
	}

IL_001a:
	{
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_1 = __this->____keyInfo_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->___query_6;
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_4 = __this->____keyInfo_0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___query_6;
		NullCheck(L_6);
		KeyQuery_set_IsValid_mEF4188FC79CD3D2BD9A474B010E6C6F0A2A861BF(L_6, (bool)0, NULL);
	}

IL_0047:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_004b:
	{
		int32_t L_8 = V_0;
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_9 = __this->____keyInfo_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteKeyReader_Dispose_m51076DAD24F708AE7728F075DA4F040C9B1DA1DF (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		__this->____stmt_1 = (SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stmt_1), (void*)(SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*)NULL);
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_0 = __this->____keyInfo_0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		V_0 = 0;
		goto IL_004a;
	}

IL_001a:
	{
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_1 = __this->____keyInfo_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->___query_6;
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_4 = __this->____keyInfo_0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___query_6;
		NullCheck(L_6);
		KeyQuery_Dispose_m3B917CD021934F6904B910A47131A30CE9688304(L_6, NULL);
	}

IL_0046:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_004a:
	{
		int32_t L_8 = V_0;
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_9 = __this->____keyInfo_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		__this->____keyInfo_0 = (KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyInfo_0), (void*)(KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5*)NULL);
		return;
	}
}
// System.String Mono.Data.Sqlite.SqliteKeyReader::GetDataTypeName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqliteKeyReader_GetDataTypeName_m064478CAFEEAE88D5F8966DCA040BA0024171514 (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0A1C47352664275E2D7F477FA4C62FC016B575F);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqliteKeyReader_Sync_m41A43C9CF6AEDBA5514BACFB253CA0A178753CB4(__this, NULL);
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_0 = __this->____keyInfo_0;
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->___query_6;
		if (!L_2)
		{
			goto IL_0049;
		}
	}
	{
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_3 = __this->____keyInfo_0;
		int32_t L_4 = ___i0;
		NullCheck(L_3);
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___query_6;
		NullCheck(L_5);
		SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* L_6 = L_5->____reader_1;
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_7 = __this->____keyInfo_0;
		int32_t L_8 = ___i0;
		NullCheck(L_7);
		int32_t L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___column_7;
		NullCheck(L_6);
		String_t* L_10;
		L_10 = SqliteDataReader_GetDataTypeName_m7E2C4195D3EA89E03474D0986D6C756FAA47CF44(L_6, L_9, NULL);
		return L_10;
	}

IL_0049:
	{
		return _stringLiteralB0A1C47352664275E2D7F477FA4C62FC016B575F;
	}
}
// System.Type Mono.Data.Sqlite.SqliteKeyReader::GetFieldType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* SqliteKeyReader_GetFieldType_mA76D2B279C0CF5280F2A28C80DD434E96DAF850A (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqliteKeyReader_Sync_m41A43C9CF6AEDBA5514BACFB253CA0A178753CB4(__this, NULL);
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_0 = __this->____keyInfo_0;
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->___query_6;
		if (!L_2)
		{
			goto IL_0049;
		}
	}
	{
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_3 = __this->____keyInfo_0;
		int32_t L_4 = ___i0;
		NullCheck(L_3);
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___query_6;
		NullCheck(L_5);
		SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* L_6 = L_5->____reader_1;
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_7 = __this->____keyInfo_0;
		int32_t L_8 = ___i0;
		NullCheck(L_7);
		int32_t L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___column_7;
		NullCheck(L_6);
		Type_t* L_10;
		L_10 = SqliteDataReader_GetFieldType_mA7E7AB00F68AEC8495D19FC24BB64AD01B0C587E(L_6, L_9, NULL);
		return L_10;
	}

IL_0049:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		return L_12;
	}
}
// System.String Mono.Data.Sqlite.SqliteKeyReader::GetName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqliteKeyReader_GetName_mAFD73902068396341141F95CE7F9295707E594D9 (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_0 = __this->____keyInfo_0;
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		String_t* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->___columnName_2;
		return L_2;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteKeyReader::GetBoolean(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteKeyReader_GetBoolean_m826904C49D5C00AFA2784DC3C455A049C8BF4936 (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___i0;
		SqliteKeyReader_Sync_m23B27E9B34013F1D860AD14F24A9049EFB0EE4AA(__this, L_0, NULL);
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_1 = __this->____keyInfo_0;
		int32_t L_2 = ___i0;
		NullCheck(L_1);
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->___query_6;
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_4 = __this->____keyInfo_0;
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___query_6;
		NullCheck(L_6);
		SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* L_7 = L_6->____reader_1;
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_8 = __this->____keyInfo_0;
		int32_t L_9 = ___i0;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___column_7;
		NullCheck(L_7);
		bool L_11;
		L_11 = SqliteDataReader_GetBoolean_mD498B42DC662C67668A2D16083C64C3AE8CB8DF8(L_7, L_10, NULL);
		return L_11;
	}

IL_004a:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_12 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		InvalidCastException__ctor_mCBC218CE25034242D2EB33B3E59933295CE93C56(L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqliteKeyReader_GetBoolean_m826904C49D5C00AFA2784DC3C455A049C8BF4936_RuntimeMethod_var)));
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteKeyReader::GetInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteKeyReader_GetInt32_m54F57976B00F5F7DE432530A7C4147396A867366 (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		int32_t L_0 = ___i0;
		SqliteKeyReader_Sync_m23B27E9B34013F1D860AD14F24A9049EFB0EE4AA(__this, L_0, NULL);
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_1 = __this->____keyInfo_0;
		int32_t L_2 = ___i0;
		NullCheck(L_1);
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->___query_6;
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_4 = __this->____keyInfo_0;
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___query_6;
		NullCheck(L_6);
		SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* L_7 = L_6->____reader_1;
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_8 = __this->____keyInfo_0;
		int32_t L_9 = ___i0;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___column_7;
		NullCheck(L_7);
		int32_t L_11;
		L_11 = SqliteDataReader_GetInt32_m17B38209D931C86861D4FC18B8CEC2D239E4F3F7(L_7, L_10, NULL);
		return L_11;
	}

IL_004a:
	{
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_12 = __this->____stmt_1;
		NullCheck(L_12);
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_13 = L_12->____sql_0;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_14 = __this->____stmt_1;
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_15 = __this->____keyInfo_0;
		int32_t L_16 = ___i0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___cursor_5;
		NullCheck(L_13);
		int64_t L_18;
		L_18 = VirtualFuncInvoker2< int64_t, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*, int32_t >::Invoke(58 /* System.Int64 Mono.Data.Sqlite.SQLiteBase::GetRowIdForCursor(Mono.Data.Sqlite.SqliteStatement,System.Int32) */, L_13, L_14, L_17);
		V_0 = L_18;
		int64_t L_19 = V_0;
		if (L_19)
		{
			goto IL_007e;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_20 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		InvalidCastException__ctor_mCBC218CE25034242D2EB33B3E59933295CE93C56(L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqliteKeyReader_GetInt32_m54F57976B00F5F7DE432530A7C4147396A867366_RuntimeMethod_var)));
	}

IL_007e:
	{
		int64_t L_21 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_22;
		L_22 = Convert_ToInt32_mA857F99F1CACB73D7DB85E26638E7CC1A2CD5C78(L_21, NULL);
		return L_22;
	}
}
// System.Int64 Mono.Data.Sqlite.SqliteKeyReader::GetInt64(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SqliteKeyReader_GetInt64_mEE6952C000B5C9B1FA90A62E55A0ED72C623515D (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		int32_t L_0 = ___i0;
		SqliteKeyReader_Sync_m23B27E9B34013F1D860AD14F24A9049EFB0EE4AA(__this, L_0, NULL);
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_1 = __this->____keyInfo_0;
		int32_t L_2 = ___i0;
		NullCheck(L_1);
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->___query_6;
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_4 = __this->____keyInfo_0;
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___query_6;
		NullCheck(L_6);
		SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* L_7 = L_6->____reader_1;
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_8 = __this->____keyInfo_0;
		int32_t L_9 = ___i0;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___column_7;
		NullCheck(L_7);
		int64_t L_11;
		L_11 = SqliteDataReader_GetInt64_mF85122E72E193CCC9FC69B5B942E7D79A28F3A11(L_7, L_10, NULL);
		return L_11;
	}

IL_004a:
	{
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_12 = __this->____stmt_1;
		NullCheck(L_12);
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_13 = L_12->____sql_0;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_14 = __this->____stmt_1;
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_15 = __this->____keyInfo_0;
		int32_t L_16 = ___i0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___cursor_5;
		NullCheck(L_13);
		int64_t L_18;
		L_18 = VirtualFuncInvoker2< int64_t, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*, int32_t >::Invoke(58 /* System.Int64 Mono.Data.Sqlite.SQLiteBase::GetRowIdForCursor(Mono.Data.Sqlite.SqliteStatement,System.Int32) */, L_13, L_14, L_17);
		V_0 = L_18;
		int64_t L_19 = V_0;
		if (L_19)
		{
			goto IL_007e;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_20 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		InvalidCastException__ctor_mCBC218CE25034242D2EB33B3E59933295CE93C56(L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqliteKeyReader_GetInt64_mEE6952C000B5C9B1FA90A62E55A0ED72C623515D_RuntimeMethod_var)));
	}

IL_007e:
	{
		int64_t L_21 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int64_t L_22;
		L_22 = Convert_ToInt64_m411DDD22EACD1C4635C58B384DC761CF3B3A9B9A(L_21, NULL);
		return L_22;
	}
}
// System.String Mono.Data.Sqlite.SqliteKeyReader::GetString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqliteKeyReader_GetString_m932CA1988B8E2E4CA5874238E9D7894D8B91A169 (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___i0;
		SqliteKeyReader_Sync_m23B27E9B34013F1D860AD14F24A9049EFB0EE4AA(__this, L_0, NULL);
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_1 = __this->____keyInfo_0;
		int32_t L_2 = ___i0;
		NullCheck(L_1);
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->___query_6;
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_4 = __this->____keyInfo_0;
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___query_6;
		NullCheck(L_6);
		SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* L_7 = L_6->____reader_1;
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_8 = __this->____keyInfo_0;
		int32_t L_9 = ___i0;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___column_7;
		NullCheck(L_7);
		String_t* L_11;
		L_11 = SqliteDataReader_GetString_m6E35BA30FDD2D0B313097C79A8132928292248CC(L_7, L_10, NULL);
		return L_11;
	}

IL_004a:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_12 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		InvalidCastException__ctor_mCBC218CE25034242D2EB33B3E59933295CE93C56(L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqliteKeyReader_GetString_m932CA1988B8E2E4CA5874238E9D7894D8B91A169_RuntimeMethod_var)));
	}
}
// System.Object Mono.Data.Sqlite.SqliteKeyReader::GetValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqliteKeyReader_GetValue_m5F351FD993D26420B737F569A7AF90971768338C (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_0 = __this->____keyInfo_0;
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		int32_t L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->___cursor_5;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_il2cpp_TypeInfo_var);
		DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC* L_3 = ((DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_il2cpp_TypeInfo_var))->___Value_0;
		return L_3;
	}

IL_001d:
	{
		int32_t L_4 = ___i0;
		SqliteKeyReader_Sync_m23B27E9B34013F1D860AD14F24A9049EFB0EE4AA(__this, L_4, NULL);
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_5 = __this->____keyInfo_0;
		int32_t L_6 = ___i0;
		NullCheck(L_5);
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___query_6;
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_8 = __this->____keyInfo_0;
		int32_t L_9 = ___i0;
		NullCheck(L_8);
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___query_6;
		NullCheck(L_10);
		SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* L_11 = L_10->____reader_1;
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_12 = __this->____keyInfo_0;
		int32_t L_13 = ___i0;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___column_7;
		NullCheck(L_11);
		RuntimeObject* L_15;
		L_15 = SqliteDataReader_GetValue_m597154EDAC65852F5FAC01B2670DB3D02EA73C63(L_11, L_14, NULL);
		return L_15;
	}

IL_0067:
	{
		int32_t L_16 = ___i0;
		bool L_17;
		L_17 = SqliteKeyReader_IsDBNull_mACA38F05662BBF09D24C04E98171A2A02F7B4051(__this, L_16, NULL);
		if (!L_17)
		{
			goto IL_0079;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_il2cpp_TypeInfo_var);
		DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC* L_18 = ((DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_il2cpp_TypeInfo_var))->___Value_0;
		return L_18;
	}

IL_0079:
	{
		int32_t L_19 = ___i0;
		int64_t L_20;
		L_20 = SqliteKeyReader_GetInt64_mEE6952C000B5C9B1FA90A62E55A0ED72C623515D(__this, L_19, NULL);
		int64_t L_21 = L_20;
		RuntimeObject* L_22 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_21);
		return L_22;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteKeyReader::IsDBNull(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteKeyReader_IsDBNull_mACA38F05662BBF09D24C04E98171A2A02F7B4051 (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_0 = __this->____keyInfo_0;
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		int32_t L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->___cursor_5;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		int32_t L_3 = ___i0;
		SqliteKeyReader_Sync_m23B27E9B34013F1D860AD14F24A9049EFB0EE4AA(__this, L_3, NULL);
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_4 = __this->____keyInfo_0;
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___query_6;
		if (!L_6)
		{
			goto IL_0063;
		}
	}
	{
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_7 = __this->____keyInfo_0;
		int32_t L_8 = ___i0;
		NullCheck(L_7);
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___query_6;
		NullCheck(L_9);
		SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* L_10 = L_9->____reader_1;
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_11 = __this->____keyInfo_0;
		int32_t L_12 = ___i0;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___column_7;
		NullCheck(L_10);
		bool L_14;
		L_14 = SqliteDataReader_IsDBNull_m9ED4003172562339E49335DF953CC67FD9BC8B57(L_10, L_13, NULL);
		return L_14;
	}

IL_0063:
	{
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_15 = __this->____stmt_1;
		NullCheck(L_15);
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_16 = L_15->____sql_0;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_17 = __this->____stmt_1;
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_18 = __this->____keyInfo_0;
		int32_t L_19 = ___i0;
		NullCheck(L_18);
		int32_t L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___cursor_5;
		NullCheck(L_16);
		int64_t L_21;
		L_21 = VirtualFuncInvoker2< int64_t, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*, int32_t >::Invoke(58 /* System.Int64 Mono.Data.Sqlite.SQLiteBase::GetRowIdForCursor(Mono.Data.Sqlite.SqliteStatement,System.Int32) */, L_16, L_17, L_20);
		return (bool)((((int64_t)L_21) == ((int64_t)((int64_t)0)))? 1 : 0);
	}
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader::AppendSchemaTable(System.Data.DataTable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteKeyReader_AppendSchemaTable_m5837A0D4BE76E9A87A279FF8605A9F49B563C047 (SqliteKeyReader_tF371C7C48AD68490C6D505E6D2BC03D79272AAAF* __this, DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* ___tbl0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbType_tAB317B97F25F156130CA6BD83234551B0937D738_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral962B1AB5AF45CFE050C375F3EBA6B679FCC4DE6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0A1C47352664275E2D7F477FA4C62FC016B575F);
		s_Il2CppMethodInitialized = true;
	}
	KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* V_0 = NULL;
	int32_t V_1 = 0;
	DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* V_2 = NULL;
	DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* V_3 = NULL;
	DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_6 = NULL;
	DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	{
		V_0 = (KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591*)NULL;
		V_1 = 0;
		goto IL_02c6;
	}

IL_0009:
	{
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_0 = __this->____keyInfo_0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->___query_6;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_3 = __this->____keyInfo_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___query_6;
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_6 = V_0;
		if ((((RuntimeObject*)(KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591*)L_5) == ((RuntimeObject*)(KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591*)L_6)))
		{
			goto IL_02c2;
		}
	}

IL_0036:
	{
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_7 = __this->____keyInfo_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___query_6;
		V_0 = L_9;
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_10 = V_0;
		if (L_10)
		{
			goto IL_020d;
		}
	}
	{
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_11 = ___tbl0;
		NullCheck(L_11);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_12;
		L_12 = DataTable_NewRow_m57151CE8F173A66E33B098CB580B5F5DE591CD02(L_11, NULL);
		V_2 = L_12;
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_13 = V_2;
		il2cpp_codegen_runtime_class_init_inline(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var);
		String_t* L_14 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___ColumnName_0;
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_15 = __this->____keyInfo_0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		String_t* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___columnName_2;
		NullCheck(L_13);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_13, L_14, L_17, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_18 = V_2;
		String_t* L_19 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___ColumnOrdinal_1;
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_20 = ___tbl0;
		NullCheck(L_20);
		DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738* L_21 = L_20->____rowCollection_6;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = DataRowCollection_get_Count_m1EC5C8B103735834509013DB3523A5E9A712A532(L_21, NULL);
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_18);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_18, L_19, L_24, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_25 = V_2;
		String_t* L_26 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___ColumnSize_2;
		int32_t L_27 = 8;
		RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_25, L_26, L_28, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_29 = V_2;
		String_t* L_30 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___NumericPrecision_3;
		int32_t L_31 = ((int32_t)255);
		RuntimeObject* L_32 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_29, L_30, L_32, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_33 = V_2;
		String_t* L_34 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___NumericScale_4;
		int32_t L_35 = ((int32_t)255);
		RuntimeObject* L_36 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_33);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_33, L_34, L_36, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_37 = V_2;
		String_t* L_38 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___ProviderType_6;
		int32_t L_39 = ((int32_t)12);
		RuntimeObject* L_40 = Box(DbType_tAB317B97F25F156130CA6BD83234551B0937D738_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_37);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_37, L_38, L_40, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_41 = V_2;
		String_t* L_42 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___IsLong_8;
		bool L_43 = ((bool)0);
		RuntimeObject* L_44 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_41);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_41, L_42, L_44, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_45 = V_2;
		String_t* L_46 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___AllowDBNull_9;
		bool L_47 = ((bool)0);
		RuntimeObject* L_48 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_47);
		NullCheck(L_45);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_45, L_46, L_48, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_49 = V_2;
		il2cpp_codegen_runtime_class_init_inline(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var);
		String_t* L_50 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___IsReadOnly_3;
		bool L_51 = ((bool)0);
		RuntimeObject* L_52 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_51);
		NullCheck(L_49);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_49, L_50, L_52, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_53 = V_2;
		String_t* L_54 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___IsRowVersion_4;
		bool L_55 = ((bool)0);
		RuntimeObject* L_56 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_55);
		NullCheck(L_53);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_53, L_54, L_56, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_57 = V_2;
		String_t* L_58 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___IsUnique_13;
		bool L_59 = ((bool)0);
		RuntimeObject* L_60 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_59);
		NullCheck(L_57);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_57, L_58, L_60, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_61 = V_2;
		String_t* L_62 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___IsKey_12;
		bool L_63 = ((bool)1);
		RuntimeObject* L_64 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_63);
		NullCheck(L_61);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_61, L_62, L_64, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_65 = V_2;
		String_t* L_66 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___DataType_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
		NullCheck(L_65);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_65, L_66, L_68, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_69 = V_2;
		String_t* L_70 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___IsHidden_2;
		bool L_71 = ((bool)1);
		RuntimeObject* L_72 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_71);
		NullCheck(L_69);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_69, L_70, L_72, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_73 = V_2;
		String_t* L_74 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___BaseColumnName_16;
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_75 = __this->____keyInfo_0;
		int32_t L_76 = V_1;
		NullCheck(L_75);
		String_t* L_77 = ((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_76)))->___columnName_2;
		NullCheck(L_73);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_73, L_74, L_77, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_78 = V_2;
		String_t* L_79 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___IsExpression_11;
		bool L_80 = ((bool)0);
		RuntimeObject* L_81 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_80);
		NullCheck(L_78);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_78, L_79, L_81, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_82 = V_2;
		String_t* L_83 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___IsAliased_10;
		bool L_84 = ((bool)0);
		RuntimeObject* L_85 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_84);
		NullCheck(L_82);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_82, L_83, L_85, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_86 = V_2;
		String_t* L_87 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___BaseTableName_15;
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_88 = __this->____keyInfo_0;
		int32_t L_89 = V_1;
		NullCheck(L_88);
		String_t* L_90 = ((L_88)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_89)))->___tableName_1;
		NullCheck(L_86);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_86, L_87, L_90, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_91 = V_2;
		String_t* L_92 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___BaseCatalogName_6;
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_93 = __this->____keyInfo_0;
		int32_t L_94 = V_1;
		NullCheck(L_93);
		String_t* L_95 = ((L_93)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_94)))->___databaseName_0;
		NullCheck(L_91);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_91, L_92, L_95, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_96 = V_2;
		String_t* L_97 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___IsAutoIncrement_1;
		bool L_98 = ((bool)1);
		RuntimeObject* L_99 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_98);
		NullCheck(L_96);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_96, L_97, L_99, NULL);
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_100 = V_2;
		NullCheck(L_100);
		DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_100, _stringLiteral962B1AB5AF45CFE050C375F3EBA6B679FCC4DE6E, _stringLiteralB0A1C47352664275E2D7F477FA4C62FC016B575F, NULL);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_101 = ___tbl0;
		NullCheck(L_101);
		DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738* L_102 = L_101->____rowCollection_6;
		DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_103 = V_2;
		NullCheck(L_102);
		DataRowCollection_Add_m2A36F7D52ED197BAF8002FECCA560B8AC6A28730(L_102, L_103, NULL);
		goto IL_02c2;
	}

IL_020d:
	{
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_104 = V_0;
		NullCheck(L_104);
		KeyQuery_Sync_mDC26353CACA8F5A31BB77E4DE114897524FE5BCC(L_104, ((int64_t)0), NULL);
		KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* L_105 = V_0;
		NullCheck(L_105);
		SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* L_106 = L_105->____reader_1;
		NullCheck(L_106);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_107;
		L_107 = SqliteDataReader_GetSchemaTable_m6ED9773936D1816B46A81B5305D931AE303689F9(L_106, NULL);
		V_3 = L_107;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02b5:
			{// begin finally (depth: 1)
				{
					DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_108 = V_3;
					if (!L_108)
					{
						goto IL_02c1;
					}
				}
				{
					DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_109 = V_3;
					NullCheck(L_109);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_109);
				}

IL_02c1:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_110 = V_3;
				NullCheck(L_110);
				DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738* L_111 = L_110->____rowCollection_6;
				NullCheck(L_111);
				RuntimeObject* L_112;
				L_112 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(10 /* System.Collections.IEnumerator System.Data.InternalDataCollectionBase::GetEnumerator() */, L_111);
				V_5 = L_112;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_029a_1:
					{// begin finally (depth: 2)
						{
							RuntimeObject* L_113 = V_5;
							V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_113, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
							RuntimeObject* L_114 = V_8;
							if (L_114)
							{
								goto IL_02a8_1;
							}
						}
						{
							return;
						}

IL_02a8_1:
						{
							RuntimeObject* L_115 = V_8;
							NullCheck(L_115);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_115);
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0289_2;
					}

IL_0233_2:
					{
						RuntimeObject* L_116 = V_5;
						NullCheck(L_116);
						RuntimeObject* L_117;
						L_117 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_116);
						V_4 = ((DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388*)CastclassClass((RuntimeObject*)L_117, DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388_il2cpp_TypeInfo_var));
						DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_118 = V_4;
						NullCheck(L_118);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_119;
						L_119 = DataRow_get_ItemArray_m18D6C8EE4C846875194EF73E6A9EA3789C6A5C6D(L_118, NULL);
						V_6 = L_119;
						DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_120 = ___tbl0;
						NullCheck(L_120);
						DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738* L_121 = L_120->____rowCollection_6;
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_122 = V_6;
						NullCheck(L_121);
						DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_123;
						L_123 = DataRowCollection_Add_m32818F4B45211F162D8190138CF4C1C2B5C44A38(L_121, L_122, NULL);
						V_7 = L_123;
						DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_124 = V_7;
						il2cpp_codegen_runtime_class_init_inline(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var);
						String_t* L_125 = ((SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_t5487FBA6EB8FAA93B89AF3DA2B578484C9EDC1C9_il2cpp_TypeInfo_var))->___IsHidden_2;
						bool L_126 = ((bool)1);
						RuntimeObject* L_127 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_126);
						NullCheck(L_124);
						DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_124, L_125, L_127, NULL);
						DataRow_t4C2743279B40E332809F4E6EE3443B75E4C38388* L_128 = V_7;
						il2cpp_codegen_runtime_class_init_inline(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var);
						String_t* L_129 = ((SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t6D0ABB781370197E13F0892690D26E68D6F37ED6_il2cpp_TypeInfo_var))->___ColumnOrdinal_1;
						DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_130 = ___tbl0;
						NullCheck(L_130);
						DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738* L_131 = L_130->____rowCollection_6;
						NullCheck(L_131);
						int32_t L_132;
						L_132 = DataRowCollection_get_Count_m1EC5C8B103735834509013DB3523A5E9A712A532(L_131, NULL);
						int32_t L_133 = ((int32_t)il2cpp_codegen_subtract(L_132, 1));
						RuntimeObject* L_134 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_133);
						NullCheck(L_128);
						DataRow_set_Item_m25C34222BE01ADFB8E203AFDA58547B3766BDFC3(L_128, L_129, L_134, NULL);
					}

IL_0289_2:
					{
						RuntimeObject* L_135 = V_5;
						NullCheck(L_135);
						bool L_136;
						L_136 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_135);
						if (L_136)
						{
							goto IL_0233_2;
						}
					}
					{
						goto IL_02b0_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_02b0_1:
			{
				goto IL_02c2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02c2:
	{
		int32_t L_137 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_137, 1));
	}

IL_02c6:
	{
		int32_t L_138 = V_1;
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_139 = __this->____keyInfo_0;
		NullCheck(L_139);
		if ((((int32_t)L_138) < ((int32_t)((int32_t)(((RuntimeArray*)L_139)->max_length)))))
		{
			goto IL_0009;
		}
	}
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
// Conversion methods for marshalling of: Mono.Data.Sqlite.SqliteKeyReader/KeyInfo
IL2CPP_EXTERN_C void KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D_marshal_pinvoke(const KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D& unmarshaled, KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___query_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'query' of type 'KeyInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___query_6Exception, NULL);
}
IL2CPP_EXTERN_C void KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D_marshal_pinvoke_back(const KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D_marshaled_pinvoke& marshaled, KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D& unmarshaled)
{
	Exception_t* ___query_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'query' of type 'KeyInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___query_6Exception, NULL);
}
// Conversion method for clean up from marshalling of: Mono.Data.Sqlite.SqliteKeyReader/KeyInfo
IL2CPP_EXTERN_C void KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D_marshal_pinvoke_cleanup(KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Mono.Data.Sqlite.SqliteKeyReader/KeyInfo
IL2CPP_EXTERN_C void KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D_marshal_com(const KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D& unmarshaled, KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D_marshaled_com& marshaled)
{
	Exception_t* ___query_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'query' of type 'KeyInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___query_6Exception, NULL);
}
IL2CPP_EXTERN_C void KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D_marshal_com_back(const KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D_marshaled_com& marshaled, KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D& unmarshaled)
{
	Exception_t* ___query_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'query' of type 'KeyInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___query_6Exception, NULL);
}
// Conversion method for clean up from marshalling of: Mono.Data.Sqlite.SqliteKeyReader/KeyInfo
IL2CPP_EXTERN_C void KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D_marshal_com_cleanup(KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D_marshaled_com& marshaled)
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
// System.Void Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::.ctor(Mono.Data.Sqlite.SqliteConnection,System.String,System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyQuery__ctor_m0C6F1ADAD13F010F8CED8F23BF619A6D5DE486B3 (KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* __this, SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* ___cnn0, String_t* ___database1, String_t* ___table2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___columns3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteCommandBuilder_t25108064A445081C8B3015A1BF9D6445DC22D247_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A575E95D9ED3920D143DB473F19F1F21085A65F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	SqliteCommandBuilder_t25108064A445081C8B3015A1BF9D6445DC22D247* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		SqliteCommandBuilder_t25108064A445081C8B3015A1BF9D6445DC22D247* L_0 = (SqliteCommandBuilder_t25108064A445081C8B3015A1BF9D6445DC22D247*)il2cpp_codegen_object_new(SqliteCommandBuilder_t25108064A445081C8B3015A1BF9D6445DC22D247_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SqliteCommandBuilder__ctor_m9EBA5054D982A47E30A8F358A75335544F3D0AB6(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0040:
			{// begin finally (depth: 1)
				{
					SqliteCommandBuilder_t25108064A445081C8B3015A1BF9D6445DC22D247* L_1 = V_0;
					if (!L_1)
					{
						goto IL_004c;
					}
				}
				{
					SqliteCommandBuilder_t25108064A445081C8B3015A1BF9D6445DC22D247* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_004c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_3 = ___cnn0;
				NullCheck(L_3);
				SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_4;
				L_4 = SqliteConnection_CreateCommand_m3BED520F980F2E040D090CD4B06D14731D0E044F(L_3, NULL);
				__this->____command_0 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____command_0), (void*)L_4);
				V_1 = 0;
				goto IL_0031_1;
			}

IL_001f_1:
			{
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = ___columns3;
				int32_t L_6 = V_1;
				SqliteCommandBuilder_t25108064A445081C8B3015A1BF9D6445DC22D247* L_7 = V_0;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = ___columns3;
				int32_t L_9 = V_1;
				NullCheck(L_8);
				int32_t L_10 = L_9;
				String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
				NullCheck(L_7);
				String_t* L_12;
				L_12 = SqliteCommandBuilder_QuoteIdentifier_m5EEB6FD9A68F182187463805993EFD4E63233269(L_7, L_11, NULL);
				NullCheck(L_5);
				ArrayElementTypeCheck (L_5, L_12);
				(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (String_t*)L_12);
				int32_t L_13 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
			}

IL_0031_1:
			{
				int32_t L_14 = V_1;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = ___columns3;
				NullCheck(L_15);
				if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
				{
					goto IL_001f_1;
				}
			}
			{
				goto IL_004d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004d:
	{
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_16 = __this->____command_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = ___columns3;
		String_t* L_18;
		L_18 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_17, NULL);
		String_t* L_19 = ___database1;
		String_t* L_20 = ___table2;
		String_t* L_21;
		L_21 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral4A575E95D9ED3920D143DB473F19F1F21085A65F, L_18, L_19, L_20, NULL);
		NullCheck(L_16);
		SqliteCommand_set_CommandText_m64418C5EF651CB297E95D1F58F5D847C3BF94E3C(L_16, L_21, NULL);
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_22 = __this->____command_0;
		NullCheck(L_22);
		SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* L_23 = L_22->____parameterCollection_11;
		int64_t L_24 = ((int64_t)0);
		RuntimeObject* L_25 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_23);
		SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* L_26;
		L_26 = SqliteParameterCollection_AddWithValue_m37B12C8D05C8FE5414C5ED3D37D2F65319A7D196(L_23, (String_t*)NULL, L_25, NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::set_IsValid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyQuery_set_IsValid_mEF4188FC79CD3D2BD9A474B010E6C6F0A2A861BF (KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyQuery_set_IsValid_mEF4188FC79CD3D2BD9A474B010E6C6F0A2A861BF_RuntimeMethod_var)));
	}

IL_000c:
	{
		SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* L_2 = __this->____reader_1;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* L_3 = __this->____reader_1;
		NullCheck(L_3);
		DbDataReader_Dispose_m556BD6625F7786BF37441539C51A5ED6B0B90711(L_3, NULL);
		__this->____reader_1 = (SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____reader_1), (void*)(SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835*)NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::Sync(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyQuery_Sync_mDC26353CACA8F5A31BB77E4DE114897524FE5BCC (KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* __this, int64_t ___rowid0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyQuery_set_IsValid_mEF4188FC79CD3D2BD9A474B010E6C6F0A2A861BF(__this, (bool)0, NULL);
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_0 = __this->____command_0;
		NullCheck(L_0);
		SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* L_1 = L_0->____parameterCollection_11;
		NullCheck(L_1);
		SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* L_2;
		L_2 = SqliteParameterCollection_get_Item_mFFE2972891BA3401665999BA12FA1833E8BEE795(L_1, 0, NULL);
		int64_t L_3 = ___rowid0;
		int64_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		SqliteParameter_set_Value_mA3CC18A4E7FC7188E5E47FA9EC2AB732966D394E(L_2, L_5, NULL);
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_6 = __this->____command_0;
		NullCheck(L_6);
		SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* L_7;
		L_7 = SqliteCommand_ExecuteReader_m2A6B8B48CE439B09687348450D40506868EB28AB(L_6, NULL);
		__this->____reader_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____reader_1), (void*)L_7);
		SqliteDataReader_t441A323A8F3C9CDFC5146D80C320322C48BA7835* L_8 = __this->____reader_1;
		NullCheck(L_8);
		bool L_9;
		L_9 = SqliteDataReader_Read_m922887E94EA18EDCEA038E32E49F9F0ADE1BC588(L_8, NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyQuery_Dispose_m3B917CD021934F6904B910A47131A30CE9688304 (KeyQuery_tEBB98D2F8D74A6AE81CDFE0007E009E2684C9591* __this, const RuntimeMethod* method) 
{
	{
		KeyQuery_set_IsValid_mEF4188FC79CD3D2BD9A474B010E6C6F0A2A861BF(__this, (bool)0, NULL);
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_0 = __this->____command_0;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_1 = __this->____command_0;
		NullCheck(L_1);
		Component_Dispose_m7D0C063EA18E1FFA59CB369232131150372DC7B2(L_1, NULL);
	}

IL_001d:
	{
		__this->____command_0 = (SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____command_0), (void*)(SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25*)NULL);
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
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::.ctor(Mono.Data.Sqlite.SqliteCommand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameterCollection__ctor_mA5CA30301D7D7CAA39D7B60F667647C8D8F1DD5F (SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* __this, SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* ___cmd0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE1A4D2EE1311CD43F38BE58C778D0F63CB296813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DbParameterCollection__ctor_m6A4D15B6E170BF15CDA1B9D31B078BA3592F5A63(__this, NULL);
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_0 = ___cmd0;
		__this->____command_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____command_1), (void*)L_0);
		List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* L_1 = (List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B*)il2cpp_codegen_object_new(List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mE1A4D2EE1311CD43F38BE58C778D0F63CB296813(L_1, List_1__ctor_mE1A4D2EE1311CD43F38BE58C778D0F63CB296813_RuntimeMethod_var);
		__this->____parameterList_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parameterList_2), (void*)L_1);
		__this->____unboundFlag_3 = (bool)1;
		return;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteParameterCollection::get_IsFixedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteParameterCollection_get_IsFixedSize_m13338BE24879824DA810D3E0EC428BC6690A46B8 (SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteParameterCollection::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteParameterCollection_get_IsReadOnly_mE2A5C8494B40EA6957B8A4F6B4346689FF42B917 (SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Object Mono.Data.Sqlite.SqliteParameterCollection::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqliteParameterCollection_get_SyncRoot_m74B703D8AF9423FCB742E8AD3E0245410BBCBB4A (SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* __this, const RuntimeMethod* method) 
{
	{
		return NULL;
	}
}
// System.Collections.IEnumerator Mono.Data.Sqlite.SqliteParameterCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqliteParameterCollection_GetEnumerator_mB7FDC1AD31F6EDDC76404051EE6B6E58B3846D72 (SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t595F2F779C256BFDC5AC4905175B8D9D912650E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mEC80C88ED1945C7581BCD0065F5DA094E94A2CAB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* L_0 = __this->____parameterList_2;
		NullCheck(L_0);
		Enumerator_t595F2F779C256BFDC5AC4905175B8D9D912650E8 L_1;
		L_1 = List_1_GetEnumerator_mEC80C88ED1945C7581BCD0065F5DA094E94A2CAB(L_0, List_1_GetEnumerator_mEC80C88ED1945C7581BCD0065F5DA094E94A2CAB_RuntimeMethod_var);
		Enumerator_t595F2F779C256BFDC5AC4905175B8D9D912650E8 L_2 = L_1;
		RuntimeObject* L_3 = Box(Enumerator_t595F2F779C256BFDC5AC4905175B8D9D912650E8_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::Add(Mono.Data.Sqlite.SqliteParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteParameterCollection_Add_mE6915DDABE3BBF525AB7A2EB20789CFEDA5016E2 (SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* __this, SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* ___parameter0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDF8F150D36D2A349EFF0E8737455E2255718611C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* L_0 = ___parameter0;
		NullCheck(L_0);
		String_t* L_1 = L_0->____parameterName_5;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* L_3 = ___parameter0;
		NullCheck(L_3);
		String_t* L_4 = L_3->____parameterName_5;
		int32_t L_5;
		L_5 = SqliteParameterCollection_IndexOf_mD024B7044E0C9973EC6289C3382BC356AE9E2866(__this, L_4, NULL);
		V_0 = L_5;
	}

IL_001f:
	{
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)(-1)))))
		{
			goto IL_003e;
		}
	}
	{
		List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* L_7 = __this->____parameterList_2;
		NullCheck(L_7);
		int32_t L_8 = L_7->____size_2;
		V_0 = L_8;
		List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* L_9 = __this->____parameterList_2;
		SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* L_10 = ___parameter0;
		NullCheck(L_9);
		List_1_Add_mDF8F150D36D2A349EFF0E8737455E2255718611C_inline(L_9, L_10, List_1_Add_mDF8F150D36D2A349EFF0E8737455E2255718611C_RuntimeMethod_var);
	}

IL_003e:
	{
		int32_t L_11 = V_0;
		SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* L_12 = ___parameter0;
		SqliteParameterCollection_SetParameter_mF2D7F3F8926FBA899808517D8789C67CEFDB8B5A(__this, L_11, L_12, NULL);
		int32_t L_13 = V_0;
		return L_13;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteParameterCollection_Add_mD31740918679F3D83E9592D62698B60849670ECB (SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		int32_t L_1;
		L_1 = SqliteParameterCollection_Add_mE6915DDABE3BBF525AB7A2EB20789CFEDA5016E2(__this, ((SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00*)CastclassSealed((RuntimeObject*)L_0, SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// Mono.Data.Sqlite.SqliteParameter Mono.Data.Sqlite.SqliteParameterCollection::AddWithValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* SqliteParameterCollection_AddWithValue_m37B12C8D05C8FE5414C5ED3D37D2F65319A7D196 (SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* __this, String_t* ___parameterName0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* V_0 = NULL;
	{
		String_t* L_0 = ___parameterName0;
		RuntimeObject* L_1 = ___value1;
		SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* L_2 = (SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00*)il2cpp_codegen_object_new(SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SqliteParameter__ctor_mF91B41F76D3B4AA302E9AE73CCA0A958CC7B7AA2(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* L_3 = V_0;
		int32_t L_4;
		L_4 = SqliteParameterCollection_Add_mE6915DDABE3BBF525AB7A2EB20789CFEDA5016E2(__this, L_3, NULL);
		SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* L_5 = V_0;
		return L_5;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameterCollection_Clear_m9DAF1E4A6FCF23269F13A61688D2E8F1C8980868 (SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m192E6E713DC63C1C942969E1CF1F66062E27805C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____unboundFlag_3 = (bool)1;
		List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* L_0 = __this->____parameterList_2;
		NullCheck(L_0);
		List_1_Clear_m192E6E713DC63C1C942969E1CF1F66062E27805C_inline(L_0, List_1_Clear_m192E6E713DC63C1C942969E1CF1F66062E27805C_RuntimeMethod_var);
		return;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteParameterCollection::Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteParameterCollection_Contains_m27D63905624509D2F981D7AB3FF819546C3936FF (SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mCCCAAF31CEAE15CF0F5057603C3E7C2596E75B5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* L_0 = __this->____parameterList_2;
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_mCCCAAF31CEAE15CF0F5057603C3E7C2596E75B5F(L_0, ((SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00*)CastclassSealed((RuntimeObject*)L_1, SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00_il2cpp_TypeInfo_var)), List_1_Contains_mCCCAAF31CEAE15CF0F5057603C3E7C2596E75B5F_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameterCollection_CopyTo_mCB9B9DC8031D37497C0FD80757A471518C815358 (SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqliteParameterCollection_CopyTo_mCB9B9DC8031D37497C0FD80757A471518C815358_RuntimeMethod_var)));
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteParameterCollection_get_Count_mAA4C44ADE043B6D15EF356B4F223C3EA4D754AAA (SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* L_0 = __this->____parameterList_2;
		NullCheck(L_0);
		int32_t L_1 = L_0->____size_2;
		return L_1;
	}
}
// Mono.Data.Sqlite.SqliteParameter Mono.Data.Sqlite.SqliteParameterCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* SqliteParameterCollection_get_Item_mFFE2972891BA3401665999BA12FA1833E8BEE795 (SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		DbParameter_tC4DFEE7A3DF97B1D878AAFFFB246188DBB9E0296* L_1;
		L_1 = SqliteParameterCollection_GetParameter_m618FEE4DF78B5EA8CFF0A9A67E2D6DFF78EE201E(__this, L_0, NULL);
		return ((SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00*)CastclassSealed((RuntimeObject*)L_1, SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00_il2cpp_TypeInfo_var));
	}
}
// System.Data.Common.DbParameter Mono.Data.Sqlite.SqliteParameterCollection::GetParameter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DbParameter_tC4DFEE7A3DF97B1D878AAFFFB246188DBB9E0296* SqliteParameterCollection_GetParameter_m618FEE4DF78B5EA8CFF0A9A67E2D6DFF78EE201E (SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA097CAA69C7966024517933895BB417E34ED37A3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* L_0 = __this->____parameterList_2;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* L_2;
		L_2 = List_1_get_Item_mA097CAA69C7966024517933895BB417E34ED37A3(L_0, L_1, List_1_get_Item_mA097CAA69C7966024517933895BB417E34ED37A3_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteParameterCollection_IndexOf_mD024B7044E0C9973EC6289C3382BC356AE9E2866 (SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* __this, String_t* ___parameterName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA097CAA69C7966024517933895BB417E34ED37A3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* L_0 = __this->____parameterList_2;
		NullCheck(L_0);
		int32_t L_1 = L_0->____size_2;
		V_0 = L_1;
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		String_t* L_2 = ___parameterName0;
		List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* L_3 = __this->____parameterList_2;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* L_5;
		L_5 = List_1_get_Item_mA097CAA69C7966024517933895BB417E34ED37A3(L_3, L_4, List_1_get_Item_mA097CAA69C7966024517933895BB417E34ED37A3_RuntimeMethod_var);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = SqliteParameter_get_ParameterName_m46ECE1039C2ED80F529743CC8590777DA150927B_inline(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_7;
		L_7 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		int32_t L_8;
		L_8 = String_Compare_mBD9ED6B35314B34F51A9985E350D33F6F56F85A9(L_2, L_6, (bool)1, L_7, NULL);
		if (L_8)
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_9 = V_1;
		return L_9;
	}

IL_0037:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003b:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0013;
		}
	}
	{
		return (-1);
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::IndexOf(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteParameterCollection_IndexOf_m64696F6D3AC4CC6F793BB47774E220599747E252 (SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m015E1C5A3B783666F825288510406C8BBE941222_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* L_0 = __this->____parameterList_2;
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = List_1_IndexOf_m015E1C5A3B783666F825288510406C8BBE941222(L_0, ((SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00*)CastclassSealed((RuntimeObject*)L_1, SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00_il2cpp_TypeInfo_var)), List_1_IndexOf_m015E1C5A3B783666F825288510406C8BBE941222_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::Insert(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameterCollection_Insert_mA684F281C0076194D693010E689B96570F6F3EEB (SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_mFFBDF3180F876D5FE1284B1525B18EF6E91F64EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____unboundFlag_3 = (bool)1;
		List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* L_0 = __this->____parameterList_2;
		int32_t L_1 = ___index0;
		RuntimeObject* L_2 = ___value1;
		NullCheck(L_0);
		List_1_Insert_mFFBDF3180F876D5FE1284B1525B18EF6E91F64EE(L_0, L_1, ((SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00*)CastclassSealed((RuntimeObject*)L_2, SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00_il2cpp_TypeInfo_var)), List_1_Insert_mFFBDF3180F876D5FE1284B1525B18EF6E91F64EE_RuntimeMethod_var);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameterCollection_Remove_mD335A771606BFA8045F84B4478CE2FB0D3DD05BF (SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m990B3EDDB6900CB0FE1A1B04DB9DF228773601C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____unboundFlag_3 = (bool)1;
		List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* L_0 = __this->____parameterList_2;
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_m990B3EDDB6900CB0FE1A1B04DB9DF228773601C1(L_0, ((SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00*)CastclassSealed((RuntimeObject*)L_1, SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00_il2cpp_TypeInfo_var)), List_1_Remove_m990B3EDDB6900CB0FE1A1B04DB9DF228773601C1_RuntimeMethod_var);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameterCollection_RemoveAt_m55464966C72E641BD05D4CCAB2712C83F9BE6551 (SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mC76B46919EE3C9C21C2BAE9B79D33DB8D9C021F0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____unboundFlag_3 = (bool)1;
		List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* L_0 = __this->____parameterList_2;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		List_1_RemoveAt_mC76B46919EE3C9C21C2BAE9B79D33DB8D9C021F0(L_0, L_1, List_1_RemoveAt_mC76B46919EE3C9C21C2BAE9B79D33DB8D9C021F0_RuntimeMethod_var);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::SetParameter(System.Int32,System.Data.Common.DbParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameterCollection_SetParameter_mF2D7F3F8926FBA899808517D8789C67CEFDB8B5A (SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* __this, int32_t ___index0, DbParameter_tC4DFEE7A3DF97B1D878AAFFFB246188DBB9E0296* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mCBCE70D4C328DE1A088C154743D78724A73DB682_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____unboundFlag_3 = (bool)1;
		List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* L_0 = __this->____parameterList_2;
		int32_t L_1 = ___index0;
		DbParameter_tC4DFEE7A3DF97B1D878AAFFFB246188DBB9E0296* L_2 = ___value1;
		NullCheck(L_0);
		List_1_set_Item_mCBCE70D4C328DE1A088C154743D78724A73DB682(L_0, L_1, ((SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00*)CastclassSealed((RuntimeObject*)L_2, SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00_il2cpp_TypeInfo_var)), List_1_set_Item_mCBCE70D4C328DE1A088C154743D78724A73DB682_RuntimeMethod_var);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::Unbind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameterCollection_Unbind_mFF73C8E133D5287156B1571161517A3BF120EA23 (SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* __this, const RuntimeMethod* method) 
{
	{
		__this->____unboundFlag_3 = (bool)1;
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::MapParameters(Mono.Data.Sqlite.SqliteStatement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameterCollection_MapParameters_m41FCD278F9549FBBBC26B8576F03B06FDA01B85E (SqliteParameterCollection_t47A710AA9ECC13AE9623E225C6B5DCD129B80334* __this, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* ___activeStatement0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m99125209AFF2B9EC8E357CCF4F07D2DD62C3EEFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mEC80C88ED1945C7581BCD0065F5DA094E94A2CAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4C41298B5C7DB30F5E00C45575A0669039D7E724_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17A611734FC02C15EC6FF0EF37AC0A35E2B42279);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* V_4 = NULL;
	SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* V_5 = NULL;
	Enumerator_t595F2F779C256BFDC5AC4905175B8D9D912650E8 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		bool L_0 = __this->____unboundFlag_3;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* L_1 = __this->____parameterList_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->____size_2;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_3 = __this->____command_1;
		NullCheck(L_3);
		List_1_t7D17A1BF1130ACFFA0E9137E8A4A09FD5DCA26C3* L_4 = L_3->____statementList_12;
		if (L_4)
		{
			goto IL_002c;
		}
	}

IL_002b:
	{
		return;
	}

IL_002c:
	{
		V_0 = 0;
		V_3 = (-1);
		List_1_tF7BFFDBC86DD9ED8DE26A61ED03B03DBF9E0093B* L_5 = __this->____parameterList_2;
		NullCheck(L_5);
		Enumerator_t595F2F779C256BFDC5AC4905175B8D9D912650E8 L_6;
		L_6 = List_1_GetEnumerator_mEC80C88ED1945C7581BCD0065F5DA094E94A2CAB(L_5, List_1_GetEnumerator_mEC80C88ED1945C7581BCD0065F5DA094E94A2CAB_RuntimeMethod_var);
		V_6 = L_6;
		goto IL_016e;
	}

IL_0042:
	{
		SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* L_7 = (&V_6)->____current_3;
		V_5 = L_7;
		int32_t L_8 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* L_9 = V_5;
		NullCheck(L_9);
		String_t* L_10 = L_9->____parameterName_5;
		V_1 = L_10;
		String_t* L_11 = V_1;
		if (L_11)
		{
			goto IL_0080;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_12;
		L_12 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_17);
		String_t* L_18;
		L_18 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_12, _stringLiteral17A611734FC02C15EC6FF0EF37AC0A35E2B42279, L_14, NULL);
		V_1 = L_18;
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0080:
	{
		V_8 = (bool)0;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_20 = ___activeStatement0;
		if (L_20)
		{
			goto IL_00a0;
		}
	}
	{
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_21 = __this->____command_1;
		NullCheck(L_21);
		List_1_t7D17A1BF1130ACFFA0E9137E8A4A09FD5DCA26C3* L_22 = L_21->____statementList_12;
		NullCheck(L_22);
		int32_t L_23 = L_22->____size_2;
		V_7 = L_23;
		goto IL_00a3;
	}

IL_00a0:
	{
		V_7 = 1;
	}

IL_00a3:
	{
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_24 = ___activeStatement0;
		V_4 = L_24;
		V_2 = 0;
		goto IL_00ef;
	}

IL_00ad:
	{
		V_8 = (bool)0;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_25 = V_4;
		if (L_25)
		{
			goto IL_00ca;
		}
	}
	{
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_26 = __this->____command_1;
		NullCheck(L_26);
		List_1_t7D17A1BF1130ACFFA0E9137E8A4A09FD5DCA26C3* L_27 = L_26->____statementList_12;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_29;
		L_29 = List_1_get_Item_m4C41298B5C7DB30F5E00C45575A0669039D7E724(L_27, L_28, List_1_get_Item_m4C41298B5C7DB30F5E00C45575A0669039D7E724_RuntimeMethod_var);
		V_4 = L_29;
	}

IL_00ca:
	{
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_30 = V_4;
		NullCheck(L_30);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30->____paramNames_4;
		if (!L_31)
		{
			goto IL_00e8;
		}
	}
	{
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_32 = V_4;
		String_t* L_33 = V_1;
		SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* L_34 = V_5;
		NullCheck(L_32);
		bool L_35;
		L_35 = SqliteStatement_MapParameter_m1CA754F6BEC29BB34B9A266A333E0B0F2FF8A84D(L_32, L_33, L_34, NULL);
		if (!L_35)
		{
			goto IL_00e8;
		}
	}
	{
		V_8 = (bool)1;
	}

IL_00e8:
	{
		V_4 = (SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*)NULL;
		int32_t L_36 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00ef:
	{
		int32_t L_37 = V_2;
		int32_t L_38 = V_7;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_00ad;
		}
	}
	{
		bool L_39 = V_8;
		if (L_39)
		{
			goto IL_016e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_40;
		L_40 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = L_41;
		int32_t L_43 = V_3;
		int32_t L_44 = L_43;
		RuntimeObject* L_45 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_45);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_45);
		String_t* L_46;
		L_46 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_40, _stringLiteral17A611734FC02C15EC6FF0EF37AC0A35E2B42279, L_42, NULL);
		V_1 = L_46;
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_47 = ___activeStatement0;
		V_4 = L_47;
		V_2 = 0;
		goto IL_0166;
	}

IL_0127:
	{
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_48 = V_4;
		if (L_48)
		{
			goto IL_0141;
		}
	}
	{
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_49 = __this->____command_1;
		NullCheck(L_49);
		List_1_t7D17A1BF1130ACFFA0E9137E8A4A09FD5DCA26C3* L_50 = L_49->____statementList_12;
		int32_t L_51 = V_2;
		NullCheck(L_50);
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_52;
		L_52 = List_1_get_Item_m4C41298B5C7DB30F5E00C45575A0669039D7E724(L_50, L_51, List_1_get_Item_m4C41298B5C7DB30F5E00C45575A0669039D7E724_RuntimeMethod_var);
		V_4 = L_52;
	}

IL_0141:
	{
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_53 = V_4;
		NullCheck(L_53);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_54 = L_53->____paramNames_4;
		if (!L_54)
		{
			goto IL_015f;
		}
	}
	{
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_55 = V_4;
		String_t* L_56 = V_1;
		SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* L_57 = V_5;
		NullCheck(L_55);
		bool L_58;
		L_58 = SqliteStatement_MapParameter_m1CA754F6BEC29BB34B9A266A333E0B0F2FF8A84D(L_55, L_56, L_57, NULL);
		if (!L_58)
		{
			goto IL_015f;
		}
	}
	{
		V_8 = (bool)1;
	}

IL_015f:
	{
		V_4 = (SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*)NULL;
		int32_t L_59 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_0166:
	{
		int32_t L_60 = V_2;
		int32_t L_61 = V_7;
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_0127;
		}
	}

IL_016e:
	{
		bool L_62;
		L_62 = Enumerator_MoveNext_m99125209AFF2B9EC8E357CCF4F07D2DD62C3EEFC((&V_6), Enumerator_MoveNext_m99125209AFF2B9EC8E357CCF4F07D2DD62C3EEFC_RuntimeMethod_var);
		if (L_62)
		{
			goto IL_0042;
		}
	}
	{
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_63 = ___activeStatement0;
		if (L_63)
		{
			goto IL_0187;
		}
	}
	{
		__this->____unboundFlag_3 = (bool)0;
	}

IL_0187:
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
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter__ctor_mC08BE662AFDFB480EBA4C8D3B80B5D12D8CF04BC (SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* __this, const RuntimeMethod* method) 
{
	{
		SqliteParameter__ctor_m05E3983C77B23952EA964DDC16652EB7B27478CC(__this, (String_t*)NULL, (-1), 0, (String_t*)NULL, ((int32_t)512), NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter__ctor_mF91B41F76D3B4AA302E9AE73CCA0A958CC7B7AA2 (SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* __this, String_t* ___parameterName0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___parameterName0;
		SqliteParameter__ctor_m05E3983C77B23952EA964DDC16652EB7B27478CC(__this, L_0, (-1), 0, (String_t*)NULL, ((int32_t)512), NULL);
		RuntimeObject* L_1 = ___value1;
		SqliteParameter_set_Value_mA3CC18A4E7FC7188E5E47FA9EC2AB732966D394E(__this, L_1, NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(System.String,System.Data.DbType,System.Int32,System.String,System.Data.DataRowVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter__ctor_m05E3983C77B23952EA964DDC16652EB7B27478CC (SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* __this, String_t* ___parameterName0, int32_t ___parameterType1, int32_t ___parameterSize2, String_t* ___sourceColumn3, int32_t ___rowVersion4, const RuntimeMethod* method) 
{
	{
		DbParameter__ctor_mF3F5691577DC88D612514B3212755F47C434639F(__this, NULL);
		String_t* L_0 = ___parameterName0;
		__this->____parameterName_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parameterName_5), (void*)L_0);
		int32_t L_1 = ___parameterType1;
		__this->____dbType_1 = L_1;
		String_t* L_2 = ___sourceColumn3;
		__this->____sourceColumn_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sourceColumn_4), (void*)L_2);
		int32_t L_3 = ___rowVersion4;
		__this->____rowVersion_2 = L_3;
		__this->____objValue_3 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____objValue_3), (void*)NULL);
		int32_t L_4 = ___parameterSize2;
		__this->____dataSize_6 = L_4;
		__this->____nullMapping_8 = (bool)0;
		__this->____nullable_7 = (bool)1;
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(Mono.Data.Sqlite.SqliteParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter__ctor_m745C3B6D5DA280B490775788D4DFB7075D2FFA06 (SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* __this, SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* ___source0, const RuntimeMethod* method) 
{
	{
		SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* L_0 = ___source0;
		NullCheck(L_0);
		String_t* L_1 = L_0->____parameterName_5;
		SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* L_2 = ___source0;
		NullCheck(L_2);
		int32_t L_3 = L_2->____dbType_1;
		SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* L_4 = ___source0;
		NullCheck(L_4);
		bool L_5 = L_4->____nullable_7;
		SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* L_6 = ___source0;
		NullCheck(L_6);
		String_t* L_7 = L_6->____sourceColumn_4;
		SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* L_8 = ___source0;
		NullCheck(L_8);
		int32_t L_9 = L_8->____rowVersion_2;
		SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* L_10 = ___source0;
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->____objValue_3;
		SqliteParameter__ctor_mC0CBB4B7E49693FEB2F263352A75F9AA9D5C0A1E(__this, L_1, L_3, 0, 1, L_5, (uint8_t)0, (uint8_t)0, L_7, L_9, L_11, NULL);
		SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* L_12 = ___source0;
		NullCheck(L_12);
		bool L_13 = L_12->____nullMapping_8;
		__this->____nullMapping_8 = L_13;
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(System.String,System.Data.DbType,System.Int32,System.Data.ParameterDirection,System.Boolean,System.Byte,System.Byte,System.String,System.Data.DataRowVersion,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter__ctor_mC0CBB4B7E49693FEB2F263352A75F9AA9D5C0A1E (SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* __this, String_t* ___parameterName0, int32_t ___parameterType1, int32_t ___parameterSize2, int32_t ___direction3, bool ___isNullable4, uint8_t ___precision5, uint8_t ___scale6, String_t* ___sourceColumn7, int32_t ___rowVersion8, RuntimeObject* ___value9, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___parameterName0;
		int32_t L_1 = ___parameterType1;
		int32_t L_2 = ___parameterSize2;
		String_t* L_3 = ___sourceColumn7;
		int32_t L_4 = ___rowVersion8;
		SqliteParameter__ctor_m05E3983C77B23952EA964DDC16652EB7B27478CC(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		int32_t L_5 = ___direction3;
		SqliteParameter_set_Direction_m0D4E338DA6A70038E99AA17A164120D0224B40EB(__this, L_5, NULL);
		bool L_6 = ___isNullable4;
		__this->____nullable_7 = L_6;
		RuntimeObject* L_7 = ___value9;
		SqliteParameter_set_Value_mA3CC18A4E7FC7188E5E47FA9EC2AB732966D394E(__this, L_7, NULL);
		return;
	}
}
// System.Data.DbType Mono.Data.Sqlite.SqliteParameter::get_DbType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteParameter_get_DbType_mF26376A5080C11784C3CE772A102612E0C3C0E8A (SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteConvert_t981F31162C63D0C2F780C2FC99738D60779F4D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____dbType_1;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_003b;
		}
	}
	{
		RuntimeObject* L_1 = __this->____objValue_3;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject* L_2 = __this->____objValue_3;
		il2cpp_codegen_runtime_class_init_inline(DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_il2cpp_TypeInfo_var);
		DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC* L_3 = ((DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_il2cpp_TypeInfo_var))->___Value_0;
		if ((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC*)L_3)))
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject* L_4 = __this->____objValue_3;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(SqliteConvert_t981F31162C63D0C2F780C2FC99738D60779F4D2A_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = SqliteConvert_TypeToDbType_mDAC84684FD147FA864341A1AF43C101CEF735B8F(L_5, NULL);
		return L_6;
	}

IL_0038:
	{
		return (int32_t)(((int32_t)16));
	}

IL_003b:
	{
		int32_t L_7 = __this->____dbType_1;
		return (int32_t)(L_7);
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_DbType(System.Data.DbType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter_set_DbType_mA5AC2B2E005D512633EE3867CCDC9234E0689567 (SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->____dbType_1 = L_0;
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_Direction(System.Data.ParameterDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter_set_Direction_m0D4E338DA6A70038E99AA17A164120D0224B40EB (SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000d;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqliteParameter_set_Direction_m0D4E338DA6A70038E99AA17A164120D0224B40EB_RuntimeMethod_var)));
	}

IL_000d:
	{
		return;
	}
}
// System.String Mono.Data.Sqlite.SqliteParameter::get_ParameterName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqliteParameter_get_ParameterName_m46ECE1039C2ED80F529743CC8590777DA150927B (SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____parameterName_5;
		return L_0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_ParameterName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter_set_ParameterName_m5BD51D48813CB0745BAB5B41CD0B84BEB16825FD (SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->____parameterName_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parameterName_5), (void*)L_0);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_Size(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter_set_Size_mC518BCBCAD0F730EB49A00E2A642E4D949D5D290 (SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->____dataSize_6 = L_0;
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_SourceColumn(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter_set_SourceColumn_mFE6C1BF105F6F65735AD46C94867ADF6FFF18ABA (SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->____sourceColumn_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sourceColumn_4), (void*)L_0);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_SourceColumnNullMapping(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter_set_SourceColumnNullMapping_mC1B6BF85DEB24E3C96E840B4726182F29842FD6D (SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->____nullMapping_8 = L_0;
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_SourceVersion(System.Data.DataRowVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter_set_SourceVersion_m3E0561EC7AFCD7E124C6E8E15C6476B1FED56878 (SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->____rowVersion_2 = L_0;
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_Value(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter_set_Value_mA3CC18A4E7FC7188E5E47FA9EC2AB732966D394E (SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteConvert_t981F31162C63D0C2F780C2FC99738D60779F4D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		__this->____objValue_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____objValue_3), (void*)L_0);
		int32_t L_1 = __this->____dbType_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject* L_2 = __this->____objValue_3;
		if (!L_2)
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject* L_3 = __this->____objValue_3;
		il2cpp_codegen_runtime_class_init_inline(DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_il2cpp_TypeInfo_var);
		DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC* L_4 = ((DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_il2cpp_TypeInfo_var))->___Value_0;
		if ((((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC*)L_4)))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject* L_5 = __this->____objValue_3;
		NullCheck(L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(SqliteConvert_t981F31162C63D0C2F780C2FC99738D60779F4D2A_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = SqliteConvert_TypeToDbType_mDAC84684FD147FA864341A1AF43C101CEF735B8F(L_6, NULL);
		__this->____dbType_1 = L_7;
	}

IL_0044:
	{
		return;
	}
}
// System.Object Mono.Data.Sqlite.SqliteParameter::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqliteParameter_Clone_m3B4CBD13162F94D09CC9C089A9062129AA3A1E59 (SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* V_0 = NULL;
	{
		SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* L_0 = (SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00*)il2cpp_codegen_object_new(SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SqliteParameter__ctor_m745C3B6D5DA280B490775788D4DFB7075D2FFA06(L_0, __this, NULL);
		V_0 = L_0;
		SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* L_1 = V_0;
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
// System.Void Mono.Data.Sqlite.SqliteStatement::.ctor(Mono.Data.Sqlite.SQLiteBase,Mono.Data.Sqlite.SqliteStatementHandle,System.String,Mono.Data.Sqlite.SqliteStatement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteStatement__ctor_m4F9C106D5F9251CFC0D562E4AB61650E8C46030A (SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* __this, SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* ___sqlbase0, SqliteStatementHandle_tEDCE828C60B1B7EC9EC59D63D045EF924E6B7788* ___stmt1, String_t* ___strCommand2, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* ___previous3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteParameterU5BU5D_t9217B066A90F0B292D7927FFC2E64EEC2B88AB43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17A611734FC02C15EC6FF0EF37AC0A35E2B42279);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_0 = ___sqlbase0;
		__this->____sql_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sql_0), (void*)L_0);
		SqliteStatementHandle_tEDCE828C60B1B7EC9EC59D63D045EF924E6B7788* L_1 = ___stmt1;
		__this->____sqlite_stmt_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sqlite_stmt_2), (void*)L_1);
		String_t* L_2 = ___strCommand2;
		__this->____sqlStatement_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sqlStatement_1), (void*)L_2);
		V_0 = 0;
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_3 = __this->____sql_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker1< int32_t, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* >::Invoke(22 /* System.Int32 Mono.Data.Sqlite.SQLiteBase::Bind_ParamCount(Mono.Data.Sqlite.SqliteStatement) */, L_3, __this);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_00c8;
		}
	}
	{
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_6 = ___previous3;
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* L_7 = ___previous3;
		NullCheck(L_7);
		int32_t L_8 = L_7->____unnamedParameters_3;
		V_0 = L_8;
	}

IL_0040:
	{
		int32_t L_9 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_9);
		__this->____paramNames_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____paramNames_4), (void*)L_10);
		int32_t L_11 = V_1;
		SqliteParameterU5BU5D_t9217B066A90F0B292D7927FFC2E64EEC2B88AB43* L_12 = (SqliteParameterU5BU5D_t9217B066A90F0B292D7927FFC2E64EEC2B88AB43*)(SqliteParameterU5BU5D_t9217B066A90F0B292D7927FFC2E64EEC2B88AB43*)SZArrayNew(SqliteParameterU5BU5D_t9217B066A90F0B292D7927FFC2E64EEC2B88AB43_il2cpp_TypeInfo_var, (uint32_t)L_11);
		__this->____paramValues_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____paramValues_5), (void*)L_12);
		V_2 = 0;
		goto IL_00c1;
	}

IL_005f:
	{
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_13 = __this->____sql_0;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		String_t* L_15;
		L_15 = VirtualFuncInvoker2< String_t*, SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*, int32_t >::Invoke(23 /* System.String Mono.Data.Sqlite.SQLiteBase::Bind_ParamName(Mono.Data.Sqlite.SqliteStatement,System.Int32) */, L_13, __this, ((int32_t)il2cpp_codegen_add(L_14, 1)));
		V_3 = L_15;
		String_t* L_16 = V_3;
		bool L_17;
		L_17 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_16, NULL);
		if (!L_17)
		{
			goto IL_00ab;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_18;
		L_18 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_19;
		int32_t L_21 = V_0;
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_23);
		String_t* L_24;
		L_24 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_18, _stringLiteral17A611734FC02C15EC6FF0EF37AC0A35E2B42279, L_20, NULL);
		V_3 = L_24;
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		int32_t L_26 = __this->____unnamedParameters_3;
		__this->____unnamedParameters_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00ab:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = __this->____paramNames_4;
		int32_t L_28 = V_2;
		String_t* L_29 = V_3;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_29);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (String_t*)L_29);
		SqliteParameterU5BU5D_t9217B066A90F0B292D7927FFC2E64EEC2B88AB43* L_30 = __this->____paramValues_5;
		int32_t L_31 = V_2;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, NULL);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00*)NULL);
		int32_t L_32 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00c1:
	{
		int32_t L_33 = V_2;
		int32_t L_34 = V_1;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_005f;
		}
	}

IL_00c8:
	{
		return;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteStatement::MapParameter(System.String,Mono.Data.Sqlite.SqliteParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteStatement_MapParameter_m1CA754F6BEC29BB34B9A266A333E0B0F2FF8A84D (SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* __this, String_t* ___s0, SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* ___p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBA2FCAA8541415BDE4D9DE7257D6242C918AA62);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->____paramNames_4;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		V_0 = 0;
		String_t* L_1 = ___s0;
		NullCheck(L_1);
		int32_t L_2 = L_1->____stringLength_4;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_3 = ___s0;
		NullCheck(L_3);
		Il2CppChar L_4;
		L_4 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, 0, NULL);
		NullCheck(_stringLiteralFBA2FCAA8541415BDE4D9DE7257D6242C918AA62);
		int32_t L_5;
		L_5 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(_stringLiteralFBA2FCAA8541415BDE4D9DE7257D6242C918AA62, L_4, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_0034;
		}
	}
	{
		V_0 = 1;
	}

IL_0034:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = __this->____paramNames_4;
		NullCheck(L_6);
		V_1 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		V_2 = 0;
		goto IL_0088;
	}

IL_0044:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = __this->____paramNames_4;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = V_0;
		String_t* L_12 = ___s0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = __this->____paramNames_4;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		String_t* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		int32_t L_17 = L_16->____stringLength_4;
		int32_t L_18 = V_0;
		String_t* L_19 = ___s0;
		NullCheck(L_19);
		int32_t L_20 = L_19->____stringLength_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_21;
		L_21 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(((int32_t)il2cpp_codegen_subtract(L_17, L_18)), L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_22;
		L_22 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		int32_t L_23;
		L_23 = String_Compare_mF87E5CDECE10B27D36C39BA8B61080F1E22F8D11(L_10, L_11, L_12, 0, L_21, (bool)1, L_22, NULL);
		if (L_23)
		{
			goto IL_0084;
		}
	}
	{
		SqliteParameterU5BU5D_t9217B066A90F0B292D7927FFC2E64EEC2B88AB43* L_24 = __this->____paramValues_5;
		int32_t L_25 = V_2;
		SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* L_26 = ___p1;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00*)L_26);
		return (bool)1;
	}

IL_0084:
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0088:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_1;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0044;
		}
	}
	{
		return (bool)0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteStatement::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteStatement_Dispose_mF87F45C884E45C7EE8EE211FE401B425478D6BD2 (SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* __this, const RuntimeMethod* method) 
{
	{
		SqliteStatementHandle_tEDCE828C60B1B7EC9EC59D63D045EF924E6B7788* L_0 = __this->____sqlite_stmt_2;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		SqliteStatementHandle_tEDCE828C60B1B7EC9EC59D63D045EF924E6B7788* L_1 = __this->____sqlite_stmt_2;
		NullCheck(L_1);
		CriticalHandle_Dispose_m873919529E3E7E8E856A78B325CA239EFB437D54(L_1, NULL);
	}

IL_0016:
	{
		__this->____sqlite_stmt_2 = (SqliteStatementHandle_tEDCE828C60B1B7EC9EC59D63D045EF924E6B7788*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sqlite_stmt_2), (void*)(SqliteStatementHandle_tEDCE828C60B1B7EC9EC59D63D045EF924E6B7788*)NULL);
		__this->____paramNames_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____paramNames_4), (void*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL);
		__this->____paramValues_5 = (SqliteParameterU5BU5D_t9217B066A90F0B292D7927FFC2E64EEC2B88AB43*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____paramValues_5), (void*)(SqliteParameterU5BU5D_t9217B066A90F0B292D7927FFC2E64EEC2B88AB43*)NULL);
		__this->____sql_0 = (SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sql_0), (void*)(SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE*)NULL);
		__this->____sqlStatement_1 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sqlStatement_1), (void*)(String_t*)NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteStatement::BindParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteStatement_BindParameters_m9063243A176C4A5DB8CAFA2A7F5AC2EFD549E505 (SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->____paramNames_4;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->____paramNames_4;
		NullCheck(L_1);
		V_0 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		V_1 = 0;
		goto IL_0031;
	}

IL_001c:
	{
		int32_t L_2 = V_1;
		SqliteParameterU5BU5D_t9217B066A90F0B292D7927FFC2E64EEC2B88AB43* L_3 = __this->____paramValues_5;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		SqliteStatement_BindParameter_mE6CFCD90E7884A0A58D374A485326F025BFCED3D(__this, ((int32_t)il2cpp_codegen_add(L_2, 1)), L_6, NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0031:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_001c;
		}
	}
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteStatement::BindParameter(System.Int32,Mono.Data.Sqlite.SqliteParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteStatement_BindParameter_mE6CFCD90E7884A0A58D374A485326F025BFCED3D (SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* __this, int32_t ___index0, SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* ___param1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteConvert_t981F31162C63D0C2F780C2FC99738D60779F4D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Guid_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* L_0 = ___param1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2* L_1 = (SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		SqliteException__ctor_mBF16E34A07E29BCBC8E75B28E620A92571560E8D(L_1, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2143043D1C3F0E38C94B32AE02ADA4C9B77C8DD5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqliteStatement_BindParameter_mE6CFCD90E7884A0A58D374A485326F025BFCED3D_RuntimeMethod_var)));
	}

IL_0012:
	{
		SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* L_2 = ___param1;
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->____objValue_3;
		V_0 = L_3;
		SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* L_4 = ___param1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = SqliteParameter_get_DbType_mF26376A5080C11784C3CE772A102612E0C3C0E8A(L_4, NULL);
		V_1 = L_5;
		RuntimeObject* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Convert_IsDBNull_m1E6074E36EDA6270CB1C49E33EA4EDF8491DBE45(L_6, NULL);
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		if (L_8)
		{
			goto IL_003f;
		}
	}

IL_0031:
	{
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_9 = __this->____sql_0;
		int32_t L_10 = ___index0;
		NullCheck(L_9);
		VirtualActionInvoker2< SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*, int32_t >::Invoke(21 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Null(Mono.Data.Sqlite.SqliteStatement,System.Int32) */, L_9, __this, L_10);
		return;
	}

IL_003f:
	{
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_12 = V_0;
		NullCheck(L_12);
		Type_t* L_13;
		L_13 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(SqliteConvert_t981F31162C63D0C2F780C2FC99738D60779F4D2A_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = SqliteConvert_TypeToDbType_mDAC84684FD147FA864341A1AF43C101CEF735B8F(L_13, NULL);
		V_1 = L_14;
	}

IL_0053:
	{
		int32_t L_15 = V_1;
		V_2 = L_15;
		int32_t L_16 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_16, 1)))
		{
			case 0:
			{
				goto IL_0126;
			}
			case 1:
			{
				goto IL_00ec;
			}
			case 2:
			{
				goto IL_00ec;
			}
			case 3:
			{
				goto IL_0109;
			}
			case 4:
			{
				goto IL_00b2;
			}
			case 5:
			{
				goto IL_00b2;
			}
			case 6:
			{
				goto IL_018b;
			}
			case 7:
			{
				goto IL_0109;
			}
			case 8:
			{
				goto IL_013e;
			}
			case 9:
			{
				goto IL_00ec;
			}
			case 10:
			{
				goto IL_00ec;
			}
			case 11:
			{
				goto IL_00cf;
			}
			case 12:
			{
				goto IL_01b6;
			}
			case 13:
			{
				goto IL_00ec;
			}
			case 14:
			{
				goto IL_0109;
			}
			case 15:
			{
				goto IL_01b6;
			}
			case 16:
			{
				goto IL_00b2;
			}
			case 17:
			{
				goto IL_00ec;
			}
			case 18:
			{
				goto IL_00ec;
			}
			case 19:
			{
				goto IL_00cf;
			}
		}
	}
	{
		goto IL_01b6;
	}

IL_00b2:
	{
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_17 = __this->____sql_0;
		int32_t L_18 = ___index0;
		RuntimeObject* L_19 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_20;
		L_20 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_21;
		L_21 = Convert_ToDateTime_m773A330A58097085E94630181F3A77B9F0963327(L_19, L_20, NULL);
		NullCheck(L_17);
		VirtualActionInvoker3< SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*, int32_t, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(20 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_DateTime(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.DateTime) */, L_17, __this, L_18, L_21);
		goto IL_01c9;
	}

IL_00cf:
	{
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_22 = __this->____sql_0;
		int32_t L_23 = ___index0;
		RuntimeObject* L_24 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_25;
		L_25 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int64_t L_26;
		L_26 = Convert_ToInt64_m6CA00ABB70FAD8242C62ED9913F7D7C3B811FC31(L_24, L_25, NULL);
		NullCheck(L_22);
		VirtualActionInvoker3< SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*, int32_t, int64_t >::Invoke(17 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Int64(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.Int64) */, L_22, __this, L_23, L_26);
		goto IL_01c9;
	}

IL_00ec:
	{
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_27 = __this->____sql_0;
		int32_t L_28 = ___index0;
		RuntimeObject* L_29 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_30;
		L_30 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_31;
		L_31 = Convert_ToInt32_m5C8BF1D45F508E7AEDA393AE72555148527E3ED3(L_29, L_30, NULL);
		NullCheck(L_27);
		VirtualActionInvoker3< SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*, int32_t, int32_t >::Invoke(16 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Int32(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.Int32) */, L_27, __this, L_28, L_31);
		goto IL_01c9;
	}

IL_0109:
	{
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_32 = __this->____sql_0;
		int32_t L_33 = ___index0;
		RuntimeObject* L_34 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_35;
		L_35 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_36;
		L_36 = Convert_ToDouble_m8DED60F2E0251A3D389F1DD22AA5AF9CD440ABE8(L_34, L_35, NULL);
		NullCheck(L_32);
		VirtualActionInvoker3< SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*, int32_t, double >::Invoke(15 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Double(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.Double) */, L_32, __this, L_33, L_36);
		goto IL_01c9;
	}

IL_0126:
	{
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_37 = __this->____sql_0;
		int32_t L_38 = ___index0;
		RuntimeObject* L_39 = V_0;
		NullCheck(L_37);
		VirtualActionInvoker3< SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(19 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Blob(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.Byte[]) */, L_37, __this, L_38, ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_39, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)));
		goto IL_01c9;
	}

IL_013e:
	{
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_40 = __this->____command_6;
		NullCheck(L_40);
		SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_41 = L_40->____cnn_5;
		NullCheck(L_41);
		bool L_42 = L_41->____binaryGuid_13;
		if (!L_42)
		{
			goto IL_0173;
		}
	}
	{
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_43 = __this->____sql_0;
		int32_t L_44 = ___index0;
		RuntimeObject* L_45 = V_0;
		V_3 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_45, Guid_t_il2cpp_TypeInfo_var))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46;
		L_46 = Guid_ToByteArray_m6EBFB2F42D3760D9143050A3A8ED03F085F3AFE9((&V_3), NULL);
		NullCheck(L_43);
		VirtualActionInvoker3< SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(19 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Blob(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.Byte[]) */, L_43, __this, L_44, L_46);
		goto IL_0186;
	}

IL_0173:
	{
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_47 = __this->____sql_0;
		int32_t L_48 = ___index0;
		RuntimeObject* L_49 = V_0;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_49);
		NullCheck(L_47);
		VirtualActionInvoker3< SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*, int32_t, String_t* >::Invoke(18 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Text(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.String) */, L_47, __this, L_48, L_50);
	}

IL_0186:
	{
		goto IL_01c9;
	}

IL_018b:
	{
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_51 = __this->____sql_0;
		int32_t L_52 = ___index0;
		RuntimeObject* L_53 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_54;
		L_54 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_55;
		L_55 = Convert_ToDecimal_m2A6822B7BCB33F60B9425C58248111D316C3FE4C(L_53, L_54, NULL);
		V_4 = L_55;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_56;
		L_56 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_57;
		L_57 = Decimal_ToString_m08256316312F5D05FE3D099C083A99BC694F4762((&V_4), L_56, NULL);
		NullCheck(L_51);
		VirtualActionInvoker3< SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*, int32_t, String_t* >::Invoke(18 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Text(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.String) */, L_51, __this, L_52, L_57);
		goto IL_01c9;
	}

IL_01b6:
	{
		SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE* L_58 = __this->____sql_0;
		int32_t L_59 = ___index0;
		RuntimeObject* L_60 = V_0;
		NullCheck(L_60);
		String_t* L_61;
		L_61 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_60);
		NullCheck(L_58);
		VirtualActionInvoker3< SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7*, int32_t, String_t* >::Invoke(18 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Text(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.String) */, L_58, __this, L_59, L_61);
	}

IL_01c9:
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteStatement::SetTypes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteStatement_SetTypes_mF06D56D7B7634D6F10E77EC3E6A88C7858A2F92E (SqliteStatement_t9601D793D24D67AAD30280A7B8FDE710B6A04BD7* __this, String_t* ___typedefs0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF6D30A1CAA3B2D80CC8C00B5C5090E61532A0E2F____U24U24fieldU2D1_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54F4AAE0436CBCC0163FCF662535D64F6E0BB00C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE71468ACF7FDE125E89960F904BDDF6F2A4C8D48);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___typedefs0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_IndexOf_m2DFDE7BD37585BDBCD6F688B4E4A93304235A0B8(L_0, _stringLiteralE71468ACF7FDE125E89960F904BDDF6F2A4C8D48, 0, 5, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqliteStatement_SetTypes_mF06D56D7B7634D6F10E77EC3E6A88C7858A2F92E_RuntimeMethod_var)));
	}

IL_001b:
	{
		String_t* L_4 = ___typedefs0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_4, ((int32_t)il2cpp_codegen_add(L_5, 6)), NULL);
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_6);
		String_t* L_8;
		L_8 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_6, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_7, NULL);
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_8);
		String_t* L_10;
		L_10 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_8, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, L_9, NULL);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_10);
		String_t* L_12;
		L_12 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_10, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, L_11, NULL);
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_12);
		String_t* L_14;
		L_14 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_12, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, L_13, NULL);
		String_t* L_15 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_14);
		String_t* L_16;
		L_16 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_14, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, L_15, NULL);
		String_t* L_17 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_16);
		String_t* L_18;
		L_18 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_16, _stringLiteral54F4AAE0436CBCC0163FCF662535D64F6E0BB00C, L_17, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_19 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)4);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_20 = L_19;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_21 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF6D30A1CAA3B2D80CC8C00B5C5090E61532A0E2F____U24U24fieldU2D1_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_20, L_21, NULL);
		NullCheck(L_18);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22;
		L_22 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_18, L_20, NULL);
		V_1 = L_22;
		V_2 = 0;
		goto IL_00b1;
	}

IL_009c:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_1;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		String_t* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		bool L_27;
		L_27 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_26, NULL);
		if (!L_27)
		{
			goto IL_00ad;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = V_1;
		int32_t L_29 = V_2;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, NULL);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (String_t*)NULL);
	}

IL_00ad:
	{
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00b1:
	{
		int32_t L_31 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = V_1;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_009c;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = V_1;
		__this->____types_7 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____types_7), (void*)L_33);
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
// System.Void Mono.Data.Sqlite.SqliteTransaction::.ctor(Mono.Data.Sqlite.SqliteConnection,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteTransaction__ctor_m30392EE42D19069B73132AC832758976F7996958 (SqliteTransaction_t5CFD0E46CAF0C4FB991C2AD83395F245F6648542* __this, SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* ___connection0, bool ___deferredLock1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31B8EF32EC3BB39A9157DDAE40161D975D0CB6E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A59B8D91FC4BF33F473B18A7B17634BD1CA6124);
		s_Il2CppMethodInitialized = true;
	}
	SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* V_0 = NULL;
	int32_t V_1 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	SqliteTransaction_t5CFD0E46CAF0C4FB991C2AD83395F245F6648542* G_B2_0 = NULL;
	SqliteTransaction_t5CFD0E46CAF0C4FB991C2AD83395F245F6648542* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	SqliteTransaction_t5CFD0E46CAF0C4FB991C2AD83395F245F6648542* G_B3_1 = NULL;
	{
		DbTransaction__ctor_mB9DB61625987D44BDC2FF2096664EE2368DD9605(__this, NULL);
		SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_0 = ___connection0;
		__this->____cnn_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cnn_1), (void*)L_0);
		SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_1 = __this->____cnn_1;
		NullCheck(L_1);
		int64_t L_2 = L_1->____version_14;
		__this->____version_2 = L_2;
		bool L_3 = ___deferredLock1;
		G_B1_0 = __this;
		if (!L_3)
		{
			G_B2_0 = __this;
			goto IL_002f;
		}
	}
	{
		G_B3_0 = ((int32_t)4096);
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_002f:
	{
		G_B3_0 = ((int32_t)1048576);
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		NullCheck(G_B3_1);
		G_B3_1->____level_3 = G_B3_0;
		SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_4 = __this->____cnn_1;
		SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6 = L_5->____transactionLevel_6;
		int32_t L_7 = L_6;
		V_1 = L_7;
		NullCheck(L_5);
		L_5->____transactionLevel_6 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_1;
		if (L_8)
		{
			goto IL_00c1;
		}
	}
	try
	{// begin try (depth: 1)
		{
			SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_9 = __this->____cnn_1;
			NullCheck(L_9);
			SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_10;
			L_10 = SqliteConnection_CreateCommand_m3BED520F980F2E040D090CD4B06D14731D0E044F(L_9, NULL);
			V_0 = L_10;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_008d_1:
				{// begin finally (depth: 2)
					{
						SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_11 = V_0;
						if (!L_11)
						{
							goto IL_0099_1;
						}
					}
					{
						SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_12 = V_0;
						NullCheck(L_12);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
					}

IL_0099_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					bool L_13 = ___deferredLock1;
					if (L_13)
					{
						goto IL_0076_2;
					}
				}
				{
					SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_14 = V_0;
					NullCheck(L_14);
					SqliteCommand_set_CommandText_m64418C5EF651CB297E95D1F58F5D847C3BF94E3C(L_14, _stringLiteral31B8EF32EC3BB39A9157DDAE40161D975D0CB6E3, NULL);
					goto IL_0081_2;
				}

IL_0076_2:
				{
					SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_15 = V_0;
					NullCheck(L_15);
					SqliteCommand_set_CommandText_m64418C5EF651CB297E95D1F58F5D847C3BF94E3C(L_15, _stringLiteral4A59B8D91FC4BF33F473B18A7B17634BD1CA6124, NULL);
				}

IL_0081_2:
				{
					SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_16 = V_0;
					NullCheck(L_16);
					int32_t L_17;
					L_17 = SqliteCommand_ExecuteNonQuery_mBA35F426CEAC97F6CB9AEEC9AFFC9433FAB1888B(L_16, NULL);
					goto IL_009a_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_009a_1:
		{
			goto IL_00c1;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009f;
		}
		throw e;
	}

CATCH_009f:
	{// begin catch(Mono.Data.Sqlite.SqliteException)
		{
			SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_18 = __this->____cnn_1;
			SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_19 = L_18;
			NullCheck(L_19);
			int32_t L_20 = L_19->____transactionLevel_6;
			NullCheck(L_19);
			L_19->____transactionLevel_6 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
			__this->____cnn_1 = (SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____cnn_1), (void*)(SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64*)NULL);
			IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00c1;
		}
	}// end catch (depth: 1)

IL_00c1:
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteTransaction::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteTransaction_Dispose_m5CABF228127AF382BCD48398D60F4FB84889D9D8 (SqliteTransaction_t5CFD0E46CAF0C4FB991C2AD83395F245F6648542* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	SqliteTransaction_t5CFD0E46CAF0C4FB991C2AD83395F245F6648542* V_0 = NULL;
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		V_0 = __this;
		SqliteTransaction_t5CFD0E46CAF0C4FB991C2AD83395F245F6648542* L_1 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{// begin finally (depth: 1)
				SqliteTransaction_t5CFD0E46CAF0C4FB991C2AD83395F245F6648542* L_2 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				bool L_3;
				L_3 = SqliteTransaction_IsValid_m5AFA33FA4116BC602BF4FE5B786392621E5A1FB8(__this, (bool)0, NULL);
				if (!L_3)
				{
					goto IL_0020_1;
				}
			}
			{
				SqliteTransaction_Rollback_m1574B691808CCDC9C7CA953804DD1B782362E9FD(__this, NULL);
			}

IL_0020_1:
			{
				__this->____cnn_1 = (SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____cnn_1), (void*)(SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64*)NULL);
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		bool L_4 = ___disposing0;
		DbTransaction_Dispose_m6C09A9CCF6C9E67B93B1D85A9F2EE8D1948C1381(__this, L_4, NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteTransaction::Rollback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteTransaction_Rollback_m1574B691808CCDC9C7CA953804DD1B782362E9FD (SqliteTransaction_t5CFD0E46CAF0C4FB991C2AD83395F245F6648542* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = SqliteTransaction_IsValid_m5AFA33FA4116BC602BF4FE5B786392621E5A1FB8(__this, (bool)1, NULL);
		SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_1 = __this->____cnn_1;
		SqliteTransaction_IssueRollback_m73A629F5A0D93A41698B6455471353A7C1FE7DEB(L_1, NULL);
		SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_2 = __this->____cnn_1;
		NullCheck(L_2);
		L_2->____transactionLevel_6 = 0;
		__this->____cnn_1 = (SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cnn_1), (void*)(SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64*)NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteTransaction::IssueRollback(Mono.Data.Sqlite.SqliteConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteTransaction_IssueRollback_m73A629F5A0D93A41698B6455471353A7C1FE7DEB (SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* ___cnn0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2705B5D75B5A7D4F4971D1C8AB5092E894284DDF);
		s_Il2CppMethodInitialized = true;
	}
	SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* V_0 = NULL;
	{
		SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_0 = ___cnn0;
		NullCheck(L_0);
		SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_1;
		L_1 = SqliteConnection_CreateCommand_m3BED520F980F2E040D090CD4B06D14731D0E044F(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001e:
			{// begin finally (depth: 1)
				{
					SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_2 = V_0;
					if (!L_2)
					{
						goto IL_002a;
					}
				}
				{
					SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_002a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_4 = V_0;
			NullCheck(L_4);
			SqliteCommand_set_CommandText_m64418C5EF651CB297E95D1F58F5D847C3BF94E3C(L_4, _stringLiteral2705B5D75B5A7D4F4971D1C8AB5092E894284DDF, NULL);
			SqliteCommand_tAE9A9E685124498658C9D390D138F71537964E25* L_5 = V_0;
			NullCheck(L_5);
			int32_t L_6;
			L_6 = SqliteCommand_ExecuteNonQuery_mBA35F426CEAC97F6CB9AEEC9AFFC9433FAB1888B(L_5, NULL);
			goto IL_002b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002b:
	{
		return;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteTransaction::IsValid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteTransaction_IsValid_m5AFA33FA4116BC602BF4FE5B786392621E5A1FB8 (SqliteTransaction_t5CFD0E46CAF0C4FB991C2AD83395F245F6648542* __this, bool ___throwError0, const RuntimeMethod* method) 
{
	{
		SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_0 = __this->____cnn_1;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		bool L_1 = ___throwError0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD9E58E131B941EDBC659670BE3C588B512A15329)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqliteTransaction_IsValid_m5AFA33FA4116BC602BF4FE5B786392621E5A1FB8_RuntimeMethod_var)));
	}

IL_001c:
	{
		return (bool)0;
	}

IL_001e:
	{
		SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_3 = __this->____cnn_1;
		NullCheck(L_3);
		int32_t L_4 = L_3->____transactionLevel_6;
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		bool L_5 = ___throwError0;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2* L_6 = (SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		SqliteException__ctor_mBF16E34A07E29BCBC8E75B28E620A92571560E8D(L_6, ((int32_t)21), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDFDBD46B3379BC15C2627741C05056E0E1273E69)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqliteTransaction_IsValid_m5AFA33FA4116BC602BF4FE5B786392621E5A1FB8_RuntimeMethod_var)));
	}

IL_0041:
	{
		return (bool)0;
	}

IL_0043:
	{
		SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_7 = __this->____cnn_1;
		NullCheck(L_7);
		int64_t L_8 = L_7->____version_14;
		int64_t L_9 = __this->____version_2;
		if ((((int64_t)L_8) == ((int64_t)L_9)))
		{
			goto IL_006e;
		}
	}
	{
		bool L_10 = ___throwError0;
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2* L_11 = (SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		SqliteException__ctor_mBF16E34A07E29BCBC8E75B28E620A92571560E8D(L_11, ((int32_t)21), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral092BFAD98655EFE50A6BE04C8CA0A6B3F911BC2B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqliteTransaction_IsValid_m5AFA33FA4116BC602BF4FE5B786392621E5A1FB8_RuntimeMethod_var)));
	}

IL_006c:
	{
		return (bool)0;
	}

IL_006e:
	{
		SqliteConnection_t75D476DE59F24FF675BFA632CE9DFE9CFFF9AA64* L_12 = __this->____cnn_1;
		NullCheck(L_12);
		int32_t L_13 = L_12->____connectionState_4;
		if ((((int32_t)L_13) == ((int32_t)1)))
		{
			goto IL_0094;
		}
	}
	{
		bool L_14 = ___throwError0;
		if (!L_14)
		{
			goto IL_0092;
		}
	}
	{
		SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2* L_15 = (SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		SqliteException__ctor_mBF16E34A07E29BCBC8E75B28E620A92571560E8D(L_15, ((int32_t)21), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB92D156E4BDBF02723A803214147AA62D90A74F7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqliteTransaction_IsValid_m5AFA33FA4116BC602BF4FE5B786392621E5A1FB8_RuntimeMethod_var)));
	}

IL_0092:
	{
		return (bool)0;
	}

IL_0094:
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
// System.Resources.ResourceManager Mono.Data.Sqlite.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* SR_get_ResourceManager_mD460D34794585E2C2B770CB50A887CA19DB309FB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tBC19444887A0E555C45E9083E0825A25D537681B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tBC19444887A0E555C45E9083E0825A25D537681B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9645E68D6ED9BA60C87E36BE94F61242DF204C9);
		s_Il2CppMethodInitialized = true;
	}
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* V_0 = NULL;
	{
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_0 = ((SR_tBC19444887A0E555C45E9083E0825A25D537681B_StaticFields*)il2cpp_codegen_static_fields_for(SR_tBC19444887A0E555C45E9083E0825A25D537681B_il2cpp_TypeInfo_var))->___resourceMan_0;
		bool L_1;
		L_1 = il2cpp_codegen_object_reference_equals(L_0, NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (SR_tBC19444887A0E555C45E9083E0825A25D537681B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_3);
		Assembly_t* L_4;
		L_4 = VirtualFuncInvoker0< Assembly_t* >::Invoke(27 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_3);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_5 = (ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB*)il2cpp_codegen_object_new(ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ResourceManager__ctor_m69EC71B02DB2B37C2F033C22FCF6972E09B38FB1(L_5, _stringLiteralA9645E68D6ED9BA60C87E36BE94F61242DF204C9, L_4, NULL);
		V_0 = L_5;
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_6 = V_0;
		((SR_tBC19444887A0E555C45E9083E0825A25D537681B_StaticFields*)il2cpp_codegen_static_fields_for(SR_tBC19444887A0E555C45E9083E0825A25D537681B_il2cpp_TypeInfo_var))->___resourceMan_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((SR_tBC19444887A0E555C45E9083E0825A25D537681B_StaticFields*)il2cpp_codegen_static_fields_for(SR_tBC19444887A0E555C45E9083E0825A25D537681B_il2cpp_TypeInfo_var))->___resourceMan_0), (void*)L_6);
	}

IL_0030:
	{
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_7 = ((SR_tBC19444887A0E555C45E9083E0825A25D537681B_StaticFields*)il2cpp_codegen_static_fields_for(SR_tBC19444887A0E555C45E9083E0825A25D537681B_il2cpp_TypeInfo_var))->___resourceMan_0;
		return L_7;
	}
}
// System.String Mono.Data.Sqlite.SR::get_DataTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_DataTypes_m7F89F9DDF89877B3681D0F8A6B16D736F7CB92CD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tBC19444887A0E555C45E9083E0825A25D537681B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral974BD364CE180CA6A107168A878CD9F73FA68C95);
		s_Il2CppMethodInitialized = true;
	}
	{
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_0;
		L_0 = SR_get_ResourceManager_mD460D34794585E2C2B770CB50A887CA19DB309FB(NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1 = ((SR_tBC19444887A0E555C45E9083E0825A25D537681B_StaticFields*)il2cpp_codegen_static_fields_for(SR_tBC19444887A0E555C45E9083E0825A25D537681B_il2cpp_TypeInfo_var))->___resourceCulture_1;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker2< String_t*, String_t*, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* >::Invoke(6 /* System.String System.Resources.ResourceManager::GetString(System.String,System.Globalization.CultureInfo) */, L_0, _stringLiteral974BD364CE180CA6A107168A878CD9F73FA68C95, L_1);
		return L_2;
	}
}
// System.String Mono.Data.Sqlite.SR::get_Keywords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Keywords_m051A9E96BB78584393C0AFD481D9C10FE858182C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tBC19444887A0E555C45E9083E0825A25D537681B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EDACA8FD01464BD5942BA77772B86B06EC27DDA);
		s_Il2CppMethodInitialized = true;
	}
	{
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_0;
		L_0 = SR_get_ResourceManager_mD460D34794585E2C2B770CB50A887CA19DB309FB(NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1 = ((SR_tBC19444887A0E555C45E9083E0825A25D537681B_StaticFields*)il2cpp_codegen_static_fields_for(SR_tBC19444887A0E555C45E9083E0825A25D537681B_il2cpp_TypeInfo_var))->___resourceCulture_1;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker2< String_t*, String_t*, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* >::Invoke(6 /* System.String System.Resources.ResourceManager::GetString(System.String,System.Globalization.CultureInfo) */, L_0, _stringLiteral0EDACA8FD01464BD5942BA77772B86B06EC27DDA, L_1);
		return L_2;
	}
}
// System.String Mono.Data.Sqlite.SR::get_MetaDataCollections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_MetaDataCollections_m8A25F31AEBFF183EE56D48F8FAD2A42A64C02B00 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tBC19444887A0E555C45E9083E0825A25D537681B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4124D02588D591D63431A10D2902793569BB1200);
		s_Il2CppMethodInitialized = true;
	}
	{
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_0;
		L_0 = SR_get_ResourceManager_mD460D34794585E2C2B770CB50A887CA19DB309FB(NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1 = ((SR_tBC19444887A0E555C45E9083E0825A25D537681B_StaticFields*)il2cpp_codegen_static_fields_for(SR_tBC19444887A0E555C45E9083E0825A25D537681B_il2cpp_TypeInfo_var))->___resourceCulture_1;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker2< String_t*, String_t*, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* >::Invoke(6 /* System.String System.Resources.ResourceManager::GetString(System.String,System.Globalization.CultureInfo) */, L_0, _stringLiteral4124D02588D591D63431A10D2902793569BB1200, L_1);
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
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_close(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_close_m5D0407F7755FEBE7D1F5FA0FE85B888F6FF1BB02 (intptr_t ___db0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_close", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_close)(___db0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___db0);
	#endif

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_create_function(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IntPtr,Mono.Data.Sqlite.SQLiteCallback,Mono.Data.Sqlite.SQLiteCallback,Mono.Data.Sqlite.SQLiteFinalCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_create_function_m4137BB84EE406CBA1524952BD08D673BE566EA81 (intptr_t ___db0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___strName1, int32_t ___nArgs2, int32_t ___nType3, intptr_t ___pvUser4, SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94* ___func5, SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94* ___fstep6, SQLiteFinalCallback_t6F84B373BB829BAABB6B9E2FEAF24723743008CD* ___ffinal7, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t, intptr_t, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(intptr_t) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_create_function", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___strName1' to native representation
	uint8_t* ____strName1_marshaled = NULL;
	if (___strName1 != NULL)
	{
		____strName1_marshaled = reinterpret_cast<uint8_t*>((___strName1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___func5' to native representation
	Il2CppMethodPointer ____func5_marshaled = NULL;
	____func5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func5));

	// Marshaling of parameter '___fstep6' to native representation
	Il2CppMethodPointer ____fstep6_marshaled = NULL;
	____fstep6_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___fstep6));

	// Marshaling of parameter '___ffinal7' to native representation
	Il2CppMethodPointer ____ffinal7_marshaled = NULL;
	____ffinal7_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___ffinal7));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_create_function)(___db0, ____strName1_marshaled, ___nArgs2, ___nType3, ___pvUser4, ____func5_marshaled, ____fstep6_marshaled, ____ffinal7_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___db0, ____strName1_marshaled, ___nArgs2, ___nType3, ___pvUser4, ____func5_marshaled, ____fstep6_marshaled, ____ffinal7_marshaled);
	#endif

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_finalize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_finalize_m2DA4B6E07C27391EA976ACC9C06BEA8E4435AFBE (intptr_t ___stmt0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_finalize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_finalize)(___stmt0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0);
	#endif

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_open_v2(System.Byte[],System.IntPtr&,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_open_v2_m639006D92F05FC9AC0A5B3F87C9C3F8665A04C2C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___utf8Filename0, intptr_t* ___db1, int32_t ___flags2, intptr_t ___vfs3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (uint8_t*, intptr_t*, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_open_v2", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___utf8Filename0' to native representation
	uint8_t* ____utf8Filename0_marshaled = NULL;
	if (___utf8Filename0 != NULL)
	{
		____utf8Filename0_marshaled = reinterpret_cast<uint8_t*>((___utf8Filename0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_open_v2)(____utf8Filename0_marshaled, ___db1, ___flags2, ___vfs3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____utf8Filename0_marshaled, ___db1, ___flags2, ___vfs3);
	#endif

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_open(System.Byte[],System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_open_m24A3324C3B3A3AA421722E3899FA9CA1AF38EFF1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___utf8Filename0, intptr_t* ___db1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (uint8_t*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_open", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___utf8Filename0' to native representation
	uint8_t* ____utf8Filename0_marshaled = NULL;
	if (___utf8Filename0 != NULL)
	{
		____utf8Filename0_marshaled = reinterpret_cast<uint8_t*>((___utf8Filename0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_open)(____utf8Filename0_marshaled, ___db1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____utf8Filename0_marshaled, ___db1);
	#endif

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_open16(System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_open16_mE2DE4F511414A8503FC38522776EA479557020C7 (String_t* ___fileName0, intptr_t* ___db1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (Il2CppChar*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_open16", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___fileName0' to native representation
	Il2CppChar* ____fileName0_marshaled = NULL;
	if (___fileName0 != NULL)
	{
		____fileName0_marshaled = &___fileName0->____firstChar_5;
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_open16)(____fileName0_marshaled, ___db1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____fileName0_marshaled, ___db1);
	#endif

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_reset(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_reset_m5E318DE227B9203B043EAF145909F885BF5F08CA (intptr_t ___stmt0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_reset", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_reset)(___stmt0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0);
	#endif

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_parameter_name(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_bind_parameter_name_mC31E6FB7E805FB8D31576020795110AAF48E7E0A (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_parameter_name", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_parameter_name)(___stmt0, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_database_name(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_database_name_m55982F7048D8E38EB4D9560D5690248D65E8D237 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_database_name", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_database_name)(___stmt0, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_database_name16(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_database_name16_mC4EA3C63E0662CC4D9D3132FE74EE9BD26B4444A (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_database_name16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_database_name16)(___stmt0, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_decltype(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_decltype_mD8C4757FD0A31072D9F9F03DB724AA26581DF9CD (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_decltype", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_decltype)(___stmt0, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_name(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_name_m1D513F41B447A364F606ACB611F3F7B7271F87EB (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_name", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_name)(___stmt0, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_name16(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_name16_m95C453EE7A5F3573DB7FEF5A2AF579D30BF7A448 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_name16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_name16)(___stmt0, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_origin_name(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_origin_name_m0CAC927F7948D58A271DED42A382BA24DECEBC4F (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_origin_name", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_origin_name)(___stmt0, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_origin_name16(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_origin_name16_m18270FF93A7E5B7FAEF0226C50DFE90F94C0CFE7 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_origin_name16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_origin_name16)(___stmt0, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_table_name(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_table_name_mA369EA2D2376F66F39014BB7A5D4505C0D233456 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_table_name", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_table_name)(___stmt0, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_table_name16(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_table_name16_mB6E1A3690D82BC4C81E531EDA9A45F9F25765494 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_table_name16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_table_name16)(___stmt0, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_text(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_text_mD67B719EA3F619E97FE99EB8E27C0A5542CB3599 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_text", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_text)(___stmt0, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_text16(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_text16_m02DBCEFC27057AD901E86B52BA0442EE01ADF469 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_text16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_text16)(___stmt0, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_errmsg(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_errmsg_m2C22B4FAEEC73CC1EF4A7979E1CD4FFED44E6D22 (intptr_t ___db0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_errmsg", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_errmsg)(___db0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___db0);
	#endif

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_prepare(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_prepare_m09B4E7CB6EEA6D0C8F899F6DBFD37BCC570BEAA5 (intptr_t ___db0, intptr_t ___pSql1, int32_t ___nBytes2, intptr_t* ___stmt3, intptr_t* ___ptrRemain4, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t, intptr_t*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t) + sizeof(intptr_t*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_prepare", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_prepare)(___db0, ___pSql1, ___nBytes2, ___stmt3, ___ptrRemain4);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___db0, ___pSql1, ___nBytes2, ___stmt3, ___ptrRemain4);
	#endif

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_table_column_metadata(System.IntPtr,System.Byte[],System.Byte[],System.Byte[],System.IntPtr&,System.IntPtr&,System.Int32&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_table_column_metadata_mD53C07F5D7B937FF607DE66656BEA13C699CDC28 (intptr_t ___db0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dbName1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___tblName2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___colName3, intptr_t* ___ptrDataType4, intptr_t* ___ptrCollSeq5, int32_t* ___notNull6, int32_t* ___primaryKey7, int32_t* ___autoInc8, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, uint8_t*, uint8_t*, intptr_t*, intptr_t*, int32_t*, int32_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(intptr_t*) + sizeof(intptr_t*) + sizeof(int32_t*) + sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_table_column_metadata", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___dbName1' to native representation
	uint8_t* ____dbName1_marshaled = NULL;
	if (___dbName1 != NULL)
	{
		____dbName1_marshaled = reinterpret_cast<uint8_t*>((___dbName1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___tblName2' to native representation
	uint8_t* ____tblName2_marshaled = NULL;
	if (___tblName2 != NULL)
	{
		____tblName2_marshaled = reinterpret_cast<uint8_t*>((___tblName2)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___colName3' to native representation
	uint8_t* ____colName3_marshaled = NULL;
	if (___colName3 != NULL)
	{
		____colName3_marshaled = reinterpret_cast<uint8_t*>((___colName3)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_table_column_metadata)(___db0, ____dbName1_marshaled, ____tblName2_marshaled, ____colName3_marshaled, ___ptrDataType4, ___ptrCollSeq5, ___notNull6, ___primaryKey7, ___autoInc8);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___db0, ____dbName1_marshaled, ____tblName2_marshaled, ____colName3_marshaled, ___ptrDataType4, ___ptrCollSeq5, ___notNull6, ___primaryKey7, ___autoInc8);
	#endif

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_text(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_value_text_m260A742B4F2B9DA605244D0571D174FB68F4B33F (intptr_t ___p0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_text", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_value_text)(___p0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___p0);
	#endif

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_text16(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_value_text16_m4130EF59EC27469D2F4F79B2BB92AE3918576B87 (intptr_t ___p0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_text16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_value_text16)(___p0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___p0);
	#endif

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_libversion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_libversion_m83EBFC5A6D1559C7FA2F8E48F403F09A5A6938A7 (const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_libversion", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_libversion)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_changes(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_changes_m9669086774D7CAAC9D3DEDD19337303D3F76FBB5 (intptr_t ___db0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_changes", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_changes)(___db0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___db0);
	#endif

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_busy_timeout(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_busy_timeout_m25C25F2429C6945FA5D0478B10BA37D675416AE4 (intptr_t ___db0, int32_t ___ms1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_busy_timeout", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_busy_timeout)(___db0, ___ms1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___db0, ___ms1);
	#endif

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_blob(System.IntPtr,System.Int32,System.Byte[],System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_blob_mE2687F5900F3430CD96F06EA0EC3CFBB87DAC6F0 (intptr_t ___stmt0, int32_t ___index1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value2, int32_t ___nSize3, intptr_t ___nTransient4, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, uint8_t*, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_blob", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___value2' to native representation
	uint8_t* ____value2_marshaled = NULL;
	if (___value2 != NULL)
	{
		____value2_marshaled = reinterpret_cast<uint8_t*>((___value2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_blob)(___stmt0, ___index1, ____value2_marshaled, ___nSize3, ___nTransient4);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1, ____value2_marshaled, ___nSize3, ___nTransient4);
	#endif

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_double(System.IntPtr,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_double_mF7DEDAABB6D3DBB04D6AC8F04C67E8D9E59372BD (intptr_t ___stmt0, int32_t ___index1, double ___value2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, double);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(double);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_double", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_double)(___stmt0, ___index1, ___value2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1, ___value2);
	#endif

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_int(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_int_m1DA7425377FB1CCEB8540B394A52255D26BF6A9B (intptr_t ___stmt0, int32_t ___index1, int32_t ___value2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_int", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_int)(___stmt0, ___index1, ___value2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1, ___value2);
	#endif

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_int64(System.IntPtr,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_int64_m23A39A914086BA6C3404F6379D24C68E5D58019B (intptr_t ___stmt0, int32_t ___index1, int64_t ___value2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_int64", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_int64)(___stmt0, ___index1, ___value2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1, ___value2);
	#endif

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_null(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_null_m0A9AFF4D27609AD551C52DBB045A3022CC37C293 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_null", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_null)(___stmt0, ___index1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_text(System.IntPtr,System.Int32,System.Byte[],System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_text_mD7CB7338CB50AE22A684A54F6F79744E8DFD6E67 (intptr_t ___stmt0, int32_t ___index1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value2, int32_t ___nlen3, intptr_t ___pvReserved4, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, uint8_t*, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_text", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___value2' to native representation
	uint8_t* ____value2_marshaled = NULL;
	if (___value2 != NULL)
	{
		____value2_marshaled = reinterpret_cast<uint8_t*>((___value2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_text)(___stmt0, ___index1, ____value2_marshaled, ___nlen3, ___pvReserved4);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1, ____value2_marshaled, ___nlen3, ___pvReserved4);
	#endif

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_parameter_count(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_parameter_count_mA3ACEAF462D6FB69FEF23D03B6A8FC052A95A4EC (intptr_t ___stmt0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_parameter_count", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_parameter_count)(___stmt0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0);
	#endif

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_count(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_column_count_mCA50890E105355EA51E02B8906BFD3AC65E0802B (intptr_t ___stmt0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_count", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_count)(___stmt0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0);
	#endif

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_step(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_step_m1C1164D0BAD1349BEA4D3DB3E8C5E14571964775 (intptr_t ___stmt0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_step", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_step)(___stmt0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0);
	#endif

	return returnValue;
}
// System.Double Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_double(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double UnsafeNativeMethods_sqlite3_column_double_mA58FBDE032EC3E7337544786272730F2A67D1712 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef double (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_double", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	double returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_double)(___stmt0, ___index1);
	#else
	double returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_int(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_column_int_m5DD386C4CBBA3C9F64F548805785E8129EED7B80 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_int", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_int)(___stmt0, ___index1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
// System.Int64 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_int64(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeNativeMethods_sqlite3_column_int64_m8F9E6B12101FEC0B633F4AF0B8FA7B54A51DBFE2 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef int64_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_int64", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_int64)(___stmt0, ___index1);
	#else
	int64_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_blob(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_blob_mFB441C2A20DBD7F8101D2103E9320BC19661108C (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_blob", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_blob)(___stmt0, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_bytes(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_column_bytes_m6424BDB0CB8F33D0633E203429602702D8DFE60D (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_bytes", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_bytes)(___stmt0, ___index1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
// Mono.Data.Sqlite.TypeAffinity Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_type(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_column_type_m8A47835DEFB20E401E0907ACD376B5CB3AAEAEA9 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_type", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_type)(___stmt0, ___index1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_create_collation(System.IntPtr,System.Byte[],System.Int32,System.IntPtr,Mono.Data.Sqlite.SQLiteCollation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_create_collation_m4B547BF43C4C5315E981CA35A6CA59C9AB16D209 (intptr_t ___db0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___strName1, int32_t ___nType2, intptr_t ___pvUser3, SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20* ___func4, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_create_collation", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___strName1' to native representation
	uint8_t* ____strName1_marshaled = NULL;
	if (___strName1 != NULL)
	{
		____strName1_marshaled = reinterpret_cast<uint8_t*>((___strName1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___func4' to native representation
	Il2CppMethodPointer ____func4_marshaled = NULL;
	____func4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func4));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_create_collation)(___db0, ____strName1_marshaled, ___nType2, ___pvUser3, ____func4_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___db0, ____strName1_marshaled, ___nType2, ___pvUser3, ____func4_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_blob(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_value_blob_m058DF61F9861D53291FB6DC8C2D8C2EC0BFB063C (intptr_t ___p0, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_blob", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_value_blob)(___p0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___p0);
	#endif

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_bytes(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_value_bytes_m98204F81F2D369966E111B745FB64381ADA0DE0C (intptr_t ___p0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_bytes", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_value_bytes)(___p0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___p0);
	#endif

	return returnValue;
}
// System.Double Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_double(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double UnsafeNativeMethods_sqlite3_value_double_mC8C86F63B19ADAB0CCA1B40EB8AACC83D7A77809 (intptr_t ___p0, const RuntimeMethod* method) 
{
	typedef double (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_double", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	double returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_value_double)(___p0);
	#else
	double returnValue = il2cppPInvokeFunc(___p0);
	#endif

	return returnValue;
}
// System.Int64 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_int64(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeNativeMethods_sqlite3_value_int64_mA88CFC788EBD2DECE341FD0CDCA513E830BD0805 (intptr_t ___p0, const RuntimeMethod* method) 
{
	typedef int64_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_int64", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_value_int64)(___p0);
	#else
	int64_t returnValue = il2cppPInvokeFunc(___p0);
	#endif

	return returnValue;
}
// Mono.Data.Sqlite.TypeAffinity Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_type(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_value_type_mF43ED4E3CB241D1E6FA214B05033DB547EF28D7C (intptr_t ___p0, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_type", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_value_type)(___p0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___p0);
	#endif

	return returnValue;
}
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_blob(System.IntPtr,System.Byte[],System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_blob_mA73A5A3166BEA4AA2560CF8866ED20FC3F47737F (intptr_t ___context0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, int32_t ___nSize2, intptr_t ___pvReserved3, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_blob", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___value1' to native representation
	uint8_t* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_marshaled = reinterpret_cast<uint8_t*>((___value1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_result_blob)(___context0, ____value1_marshaled, ___nSize2, ___pvReserved3);
	#else
	il2cppPInvokeFunc(___context0, ____value1_marshaled, ___nSize2, ___pvReserved3);
	#endif

}
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_double(System.IntPtr,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_double_m7697F899B22059FFDF259DA75890675BDE528E7F (intptr_t ___context0, double ___value1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, double);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(double);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_double", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_result_double)(___context0, ___value1);
	#else
	il2cppPInvokeFunc(___context0, ___value1);
	#endif

}
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_error(System.IntPtr,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_error_m10AABF01CE78B4DB00CCBDBB5DCD4356EE44DA82 (intptr_t ___context0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___strErr1, int32_t ___nLen2, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_error", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___strErr1' to native representation
	uint8_t* ____strErr1_marshaled = NULL;
	if (___strErr1 != NULL)
	{
		____strErr1_marshaled = reinterpret_cast<uint8_t*>((___strErr1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_result_error)(___context0, ____strErr1_marshaled, ___nLen2);
	#else
	il2cppPInvokeFunc(___context0, ____strErr1_marshaled, ___nLen2);
	#endif

}
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_int64(System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_int64_m194C538E78A731317D598214129E32A7F0FEF4AA (intptr_t ___context0, int64_t ___value1, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_int64", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_result_int64)(___context0, ___value1);
	#else
	il2cppPInvokeFunc(___context0, ___value1);
	#endif

}
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_null(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_null_m3B6DD6DBB30BA2101FBEBD6E487AB7A84C6ECB35 (intptr_t ___context0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_null", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_result_null)(___context0);
	#else
	il2cppPInvokeFunc(___context0);
	#endif

}
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_text(System.IntPtr,System.Byte[],System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_text_m695C9E65B996508C26442782CF23E2816835AFD9 (intptr_t ___context0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, int32_t ___nLen2, intptr_t ___pvReserved3, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_text", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___value1' to native representation
	uint8_t* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_marshaled = reinterpret_cast<uint8_t*>((___value1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_result_text)(___context0, ____value1_marshaled, ___nLen2, ___pvReserved3);
	#else
	il2cppPInvokeFunc(___context0, ____value1_marshaled, ___nLen2, ___pvReserved3);
	#endif

}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_aggregate_context(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_aggregate_context_mA1A551E4C6C1E29A950814469C4CFB0B431BD488 (intptr_t ___context0, int32_t ___nBytes1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_aggregate_context", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_aggregate_context)(___context0, ___nBytes1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___context0, ___nBytes1);
	#endif

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_text16(System.IntPtr,System.Int32,System.String,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_text16_m6A332AD99DCC060D8216FCE0F7400B3602A63C88 (intptr_t ___stmt0, int32_t ___index1, String_t* ___value2, int32_t ___nlen3, intptr_t ___pvReserved4, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, Il2CppChar*, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(Il2CppChar*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_text16", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___value2' to native representation
	Il2CppChar* ____value2_marshaled = NULL;
	if (___value2 != NULL)
	{
		____value2_marshaled = &___value2->____firstChar_5;
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_text16)(___stmt0, ___index1, ____value2_marshaled, ___nlen3, ___pvReserved4);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1, ____value2_marshaled, ___nlen3, ___pvReserved4);
	#endif

	return returnValue;
}
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_error16(System.IntPtr,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_error16_mCC2E6D45971299DD85DEE3AEAADBC2A0028C0A3C (intptr_t ___context0, String_t* ___strName1, int32_t ___nLen2, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, Il2CppChar*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Il2CppChar*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_error16", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___strName1' to native representation
	Il2CppChar* ____strName1_marshaled = NULL;
	if (___strName1 != NULL)
	{
		____strName1_marshaled = &___strName1->____firstChar_5;
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_result_error16)(___context0, ____strName1_marshaled, ___nLen2);
	#else
	il2cppPInvokeFunc(___context0, ____strName1_marshaled, ___nLen2);
	#endif

}
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_text16(System.IntPtr,System.String,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_text16_mBC2ABCF56D94CF9E91ADB6E3AF58BD76584E0784 (intptr_t ___context0, String_t* ___strName1, int32_t ___nLen2, intptr_t ___pvReserved3, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, Il2CppChar*, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Il2CppChar*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_text16", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___strName1' to native representation
	Il2CppChar* ____strName1_marshaled = NULL;
	if (___strName1 != NULL)
	{
		____strName1_marshaled = &___strName1->____firstChar_5;
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_result_text16)(___context0, ____strName1_marshaled, ___nLen2, ___pvReserved3);
	#else
	il2cppPInvokeFunc(___context0, ____strName1_marshaled, ___nLen2, ___pvReserved3);
	#endif

}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_key(System.IntPtr,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_key_mA27F199B543A75B1CA36A8BA5F0288063B90B3B3 (intptr_t ___db0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key1, int32_t ___keylen2, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_key", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___key1' to native representation
	uint8_t* ____key1_marshaled = NULL;
	if (___key1 != NULL)
	{
		____key1_marshaled = reinterpret_cast<uint8_t*>((___key1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_key)(___db0, ____key1_marshaled, ___keylen2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___db0, ____key1_marshaled, ___keylen2);
	#endif

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_update_hook(System.IntPtr,Mono.Data.Sqlite.SQLiteUpdateCallback,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_update_hook_mAD67817FAE90DD386EDB7D3B25B9F3FEDF6E921E (intptr_t ___db0, SQLiteUpdateCallback_t70BBEEEA989EF27B8FB86F7194729ABDCC2BDFB2* ___func1, intptr_t ___pvUser2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_update_hook", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___func1' to native representation
	Il2CppMethodPointer ____func1_marshaled = NULL;
	____func1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_update_hook)(___db0, ____func1_marshaled, ___pvUser2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___db0, ____func1_marshaled, ___pvUser2);
	#endif

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_commit_hook(System.IntPtr,Mono.Data.Sqlite.SQLiteCommitCallback,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_commit_hook_mF9A6E28E470F82BB3FF9F37C0E88E66D74182A53 (intptr_t ___db0, SQLiteCommitCallback_tC40586DD8AA664D8BC2E2B5C34F3406DBC953FFD* ___func1, intptr_t ___pvUser2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_commit_hook", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___func1' to native representation
	Il2CppMethodPointer ____func1_marshaled = NULL;
	____func1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_commit_hook)(___db0, ____func1_marshaled, ___pvUser2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___db0, ____func1_marshaled, ___pvUser2);
	#endif

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_rollback_hook(System.IntPtr,Mono.Data.Sqlite.SQLiteRollbackCallback,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_rollback_hook_m38BA6BFB5A17AED225168F12FB4E55B5E022EF03 (intptr_t ___db0, SQLiteRollbackCallback_t98CA336F8643C59817C9BAF0805D000A3136045F* ___func1, intptr_t ___pvUser2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_rollback_hook", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___func1' to native representation
	Il2CppMethodPointer ____func1_marshaled = NULL;
	____func1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_rollback_hook)(___db0, ____func1_marshaled, ___pvUser2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___db0, ____func1_marshaled, ___pvUser2);
	#endif

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_next_stmt(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_next_stmt_m340404B5371383BB87CA544B1AC1E29D1D24B13A (intptr_t ___db0, intptr_t ___stmt1, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_next_stmt", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_next_stmt)(___db0, ___stmt1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___db0, ___stmt1);
	#endif

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_exec(System.IntPtr,System.Byte[],System.IntPtr,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_exec_mE9C0A0E9F6BB7A420F29140741E07E22FB0CB5A7 (intptr_t ___db0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___strSql1, intptr_t ___pvCallback2, intptr_t ___pvParam3, intptr_t* ___errMsg4, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, intptr_t, intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_sqlite3_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t) + sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_exec", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___strSql1' to native representation
	uint8_t* ____strSql1_marshaled = NULL;
	if (___strSql1 != NULL)
	{
		____strSql1_marshaled = reinterpret_cast<uint8_t*>((___strSql1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_sqlite3_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_exec)(___db0, ____strSql1_marshaled, ___pvCallback2, ___pvParam3, ___errMsg4);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___db0, ____strSql1_marshaled, ___pvCallback2, ___pvParam3, ___errMsg4);
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
// System.Void Mono.Data.Sqlite.SqliteConnectionHandle::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteConnectionHandle__ctor_mA1348DB5E1FC86DF4F2BD6D7B54C59518B99C13D (SqliteConnectionHandle_tFA3E42C00B09B2E743EFB7FFC30AFA1F20F9EB9B* __this, intptr_t ___db0, const RuntimeMethod* method) 
{
	{
		SqliteConnectionHandle__ctor_m376261C8740551827FCBE8766A9F659C65F27528(__this, NULL);
		intptr_t L_0 = ___db0;
		((CriticalHandle_t9BAF9AE811FE6EADA3E61F3F04CBB238960CFA52*)__this)->___handle_0 = L_0;
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteConnectionHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteConnectionHandle__ctor_m376261C8740551827FCBE8766A9F659C65F27528 (SqliteConnectionHandle_tFA3E42C00B09B2E743EFB7FFC30AFA1F20F9EB9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		CriticalHandle__ctor_m804131843559F93D133DB8ED30F92927BAFBFC1A(__this, L_0, NULL);
		return;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteConnectionHandle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteConnectionHandle_ReleaseHandle_m3AA4CC2D6AB6C123E94053CAA88A4035A29D9730 (SqliteConnectionHandle_tFA3E42C00B09B2E743EFB7FFC30AFA1F20F9EB9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		il2cpp_codegen_runtime_class_init_inline(SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE_il2cpp_TypeInfo_var);
		SQLiteBase_CloseConnection_mFCF506E280B9A229381C503FEE41B4F4A8397477(__this, NULL);
		goto IL_0011;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000b;
		}
		throw e;
	}

CATCH_000b:
	{// begin catch(Mono.Data.Sqlite.SqliteException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0011;
	}// end catch (depth: 1)

IL_0011:
	{
		return (bool)1;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteConnectionHandle::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteConnectionHandle_get_IsInvalid_m6BE21CF28A771700FAC4D24E7C81CC0C15CDB371 (SqliteConnectionHandle_tFA3E42C00B09B2E743EFB7FFC30AFA1F20F9EB9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((CriticalHandle_t9BAF9AE811FE6EADA3E61F3F04CBB238960CFA52*)__this)->___handle_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		return L_2;
	}
}
// Mono.Data.Sqlite.SqliteConnectionHandle Mono.Data.Sqlite.SqliteConnectionHandle::op_Implicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqliteConnectionHandle_tFA3E42C00B09B2E743EFB7FFC30AFA1F20F9EB9B* SqliteConnectionHandle_op_Implicit_m9547FEA7764FE8816085084CB6D6F0B6EA4DEBD7 (intptr_t ___db0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteConnectionHandle_tFA3E42C00B09B2E743EFB7FFC30AFA1F20F9EB9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___db0;
		SqliteConnectionHandle_tFA3E42C00B09B2E743EFB7FFC30AFA1F20F9EB9B* L_1 = (SqliteConnectionHandle_tFA3E42C00B09B2E743EFB7FFC30AFA1F20F9EB9B*)il2cpp_codegen_object_new(SqliteConnectionHandle_tFA3E42C00B09B2E743EFB7FFC30AFA1F20F9EB9B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SqliteConnectionHandle__ctor_mA1348DB5E1FC86DF4F2BD6D7B54C59518B99C13D(L_1, L_0, NULL);
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
// System.Void Mono.Data.Sqlite.SqliteStatementHandle::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteStatementHandle__ctor_mF7FE8C7E8FCF5E1978758F43CFF572BCEC931D97 (SqliteStatementHandle_tEDCE828C60B1B7EC9EC59D63D045EF924E6B7788* __this, intptr_t ___stmt0, const RuntimeMethod* method) 
{
	{
		SqliteStatementHandle__ctor_m73E66047D4D61947703314954838AB13BA13A8B4(__this, NULL);
		intptr_t L_0 = ___stmt0;
		((CriticalHandle_t9BAF9AE811FE6EADA3E61F3F04CBB238960CFA52*)__this)->___handle_0 = L_0;
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteStatementHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteStatementHandle__ctor_m73E66047D4D61947703314954838AB13BA13A8B4 (SqliteStatementHandle_tEDCE828C60B1B7EC9EC59D63D045EF924E6B7788* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		CriticalHandle__ctor_m804131843559F93D133DB8ED30F92927BAFBFC1A(__this, L_0, NULL);
		return;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteStatementHandle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteStatementHandle_ReleaseHandle_mDAB6BE53D3A68F9044B5EEC0630307E3BEA5B88E (SqliteStatementHandle_tEDCE828C60B1B7EC9EC59D63D045EF924E6B7788* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		il2cpp_codegen_runtime_class_init_inline(SQLiteBase_t075A0C67A3D36F920BD00E01D203BA41F8610FDE_il2cpp_TypeInfo_var);
		SQLiteBase_FinalizeStatement_m57763AA60AE7DDDAE1C26B70A026273BF1ED9F6B(__this, NULL);
		goto IL_0011;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqliteException_tF4A2976B957DB7C2AB8496DBE579D261C4FBFBA2_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000b;
		}
		throw e;
	}

CATCH_000b:
	{// begin catch(Mono.Data.Sqlite.SqliteException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0011;
	}// end catch (depth: 1)

IL_0011:
	{
		return (bool)1;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteStatementHandle::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteStatementHandle_get_IsInvalid_m918F7DDCC79E0A244D5992C5E656D0B16930BE16 (SqliteStatementHandle_tEDCE828C60B1B7EC9EC59D63D045EF924E6B7788* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((CriticalHandle_t9BAF9AE811FE6EADA3E61F3F04CBB238960CFA52*)__this)->___handle_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		return L_2;
	}
}
// Mono.Data.Sqlite.SqliteStatementHandle Mono.Data.Sqlite.SqliteStatementHandle::op_Implicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqliteStatementHandle_tEDCE828C60B1B7EC9EC59D63D045EF924E6B7788* SqliteStatementHandle_op_Implicit_mF1A030EA4E427501CB879D570B8C1881FFAB9E4C (intptr_t ___stmt0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqliteStatementHandle_tEDCE828C60B1B7EC9EC59D63D045EF924E6B7788_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___stmt0;
		SqliteStatementHandle_tEDCE828C60B1B7EC9EC59D63D045EF924E6B7788* L_1 = (SqliteStatementHandle_tEDCE828C60B1B7EC9EC59D63D045EF924E6B7788*)il2cpp_codegen_object_new(SqliteStatementHandle_tEDCE828C60B1B7EC9EC59D63D045EF924E6B7788_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SqliteStatementHandle__ctor_mF7FE8C7E8FCF5E1978758F43CFF572BCEC931D97(L_1, L_0, NULL);
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
void SQLiteUpdateCallback_Invoke_m7451D70DC407A1BEF646D32D9DB8E9B547C54249_Multicast(SQLiteUpdateCallback_t70BBEEEA989EF27B8FB86F7194729ABDCC2BDFB2* __this, intptr_t ___puser0, int32_t ___type1, intptr_t ___database2, intptr_t ___table3, int64_t ___rowid4, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SQLiteUpdateCallback_t70BBEEEA989EF27B8FB86F7194729ABDCC2BDFB2* currentDelegate = reinterpret_cast<SQLiteUpdateCallback_t70BBEEEA989EF27B8FB86F7194729ABDCC2BDFB2*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t, int64_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___puser0, ___type1, ___database2, ___table3, ___rowid4, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SQLiteUpdateCallback_Invoke_m7451D70DC407A1BEF646D32D9DB8E9B547C54249_OpenInst(SQLiteUpdateCallback_t70BBEEEA989EF27B8FB86F7194729ABDCC2BDFB2* __this, intptr_t ___puser0, int32_t ___type1, intptr_t ___database2, intptr_t ___table3, int64_t ___rowid4, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, intptr_t, intptr_t, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___puser0, ___type1, ___database2, ___table3, ___rowid4, method);
}
void SQLiteUpdateCallback_Invoke_m7451D70DC407A1BEF646D32D9DB8E9B547C54249_OpenStatic(SQLiteUpdateCallback_t70BBEEEA989EF27B8FB86F7194729ABDCC2BDFB2* __this, intptr_t ___puser0, int32_t ___type1, intptr_t ___database2, intptr_t ___table3, int64_t ___rowid4, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, intptr_t, intptr_t, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___puser0, ___type1, ___database2, ___table3, ___rowid4, method);
}
void SQLiteUpdateCallback_Invoke_m7451D70DC407A1BEF646D32D9DB8E9B547C54249_OpenStaticInvoker(SQLiteUpdateCallback_t70BBEEEA989EF27B8FB86F7194729ABDCC2BDFB2* __this, intptr_t ___puser0, int32_t ___type1, intptr_t ___database2, intptr_t ___table3, int64_t ___rowid4, const RuntimeMethod* method)
{
	InvokerActionInvoker5< intptr_t, int32_t, intptr_t, intptr_t, int64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___puser0, ___type1, ___database2, ___table3, ___rowid4);
}
void SQLiteUpdateCallback_Invoke_m7451D70DC407A1BEF646D32D9DB8E9B547C54249_ClosedStaticInvoker(SQLiteUpdateCallback_t70BBEEEA989EF27B8FB86F7194729ABDCC2BDFB2* __this, intptr_t ___puser0, int32_t ___type1, intptr_t ___database2, intptr_t ___table3, int64_t ___rowid4, const RuntimeMethod* method)
{
	InvokerActionInvoker6< RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t, int64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___puser0, ___type1, ___database2, ___table3, ___rowid4);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SQLiteUpdateCallback_t70BBEEEA989EF27B8FB86F7194729ABDCC2BDFB2 (SQLiteUpdateCallback_t70BBEEEA989EF27B8FB86F7194729ABDCC2BDFB2* __this, intptr_t ___puser0, int32_t ___type1, intptr_t ___database2, intptr_t ___table3, int64_t ___rowid4, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, intptr_t, intptr_t, int64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___puser0, ___type1, ___database2, ___table3, ___rowid4);

}
// System.Void Mono.Data.Sqlite.SQLiteUpdateCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteUpdateCallback__ctor_m85A3150AB010E2F89124DF1F3E42D5BC166617E3 (SQLiteUpdateCallback_t70BBEEEA989EF27B8FB86F7194729ABDCC2BDFB2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SQLiteUpdateCallback_Invoke_m7451D70DC407A1BEF646D32D9DB8E9B547C54249_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SQLiteUpdateCallback_Invoke_m7451D70DC407A1BEF646D32D9DB8E9B547C54249_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SQLiteUpdateCallback_Invoke_m7451D70DC407A1BEF646D32D9DB8E9B547C54249_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&SQLiteUpdateCallback_Invoke_m7451D70DC407A1BEF646D32D9DB8E9B547C54249_Multicast;
}
// System.Void Mono.Data.Sqlite.SQLiteUpdateCallback::Invoke(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteUpdateCallback_Invoke_m7451D70DC407A1BEF646D32D9DB8E9B547C54249 (SQLiteUpdateCallback_t70BBEEEA989EF27B8FB86F7194729ABDCC2BDFB2* __this, intptr_t ___puser0, int32_t ___type1, intptr_t ___database2, intptr_t ___table3, int64_t ___rowid4, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, intptr_t, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___puser0, ___type1, ___database2, ___table3, ___rowid4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t SQLiteCommitCallback_Invoke_mC774E5F3D3FC08D63C73249C7079CF94D1617FE1_Multicast(SQLiteCommitCallback_tC40586DD8AA664D8BC2E2B5C34F3406DBC953FFD* __this, intptr_t ___puser0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SQLiteCommitCallback_tC40586DD8AA664D8BC2E2B5C34F3406DBC953FFD* currentDelegate = reinterpret_cast<SQLiteCommitCallback_tC40586DD8AA664D8BC2E2B5C34F3406DBC953FFD*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___puser0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t SQLiteCommitCallback_Invoke_mC774E5F3D3FC08D63C73249C7079CF94D1617FE1_OpenInst(SQLiteCommitCallback_tC40586DD8AA664D8BC2E2B5C34F3406DBC953FFD* __this, intptr_t ___puser0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___puser0, method);
}
int32_t SQLiteCommitCallback_Invoke_mC774E5F3D3FC08D63C73249C7079CF94D1617FE1_OpenStatic(SQLiteCommitCallback_tC40586DD8AA664D8BC2E2B5C34F3406DBC953FFD* __this, intptr_t ___puser0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___puser0, method);
}
int32_t SQLiteCommitCallback_Invoke_mC774E5F3D3FC08D63C73249C7079CF94D1617FE1_OpenStaticInvoker(SQLiteCommitCallback_tC40586DD8AA664D8BC2E2B5C34F3406DBC953FFD* __this, intptr_t ___puser0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___puser0);
}
int32_t SQLiteCommitCallback_Invoke_mC774E5F3D3FC08D63C73249C7079CF94D1617FE1_ClosedStaticInvoker(SQLiteCommitCallback_tC40586DD8AA664D8BC2E2B5C34F3406DBC953FFD* __this, intptr_t ___puser0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___puser0);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_SQLiteCommitCallback_tC40586DD8AA664D8BC2E2B5C34F3406DBC953FFD (SQLiteCommitCallback_tC40586DD8AA664D8BC2E2B5C34F3406DBC953FFD* __this, intptr_t ___puser0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___puser0);

	return returnValue;
}
// System.Void Mono.Data.Sqlite.SQLiteCommitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteCommitCallback__ctor_mC6CD2366A4E118C92E848329A5BBA10786672E26 (SQLiteCommitCallback_tC40586DD8AA664D8BC2E2B5C34F3406DBC953FFD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SQLiteCommitCallback_Invoke_mC774E5F3D3FC08D63C73249C7079CF94D1617FE1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SQLiteCommitCallback_Invoke_mC774E5F3D3FC08D63C73249C7079CF94D1617FE1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SQLiteCommitCallback_Invoke_mC774E5F3D3FC08D63C73249C7079CF94D1617FE1_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&SQLiteCommitCallback_Invoke_mC774E5F3D3FC08D63C73249C7079CF94D1617FE1_Multicast;
}
// System.Int32 Mono.Data.Sqlite.SQLiteCommitCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLiteCommitCallback_Invoke_mC774E5F3D3FC08D63C73249C7079CF94D1617FE1 (SQLiteCommitCallback_tC40586DD8AA664D8BC2E2B5C34F3406DBC953FFD* __this, intptr_t ___puser0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___puser0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SQLiteRollbackCallback_Invoke_mFFA50529D277C5F9A80EB81329863415E612D7DD_Multicast(SQLiteRollbackCallback_t98CA336F8643C59817C9BAF0805D000A3136045F* __this, intptr_t ___puser0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SQLiteRollbackCallback_t98CA336F8643C59817C9BAF0805D000A3136045F* currentDelegate = reinterpret_cast<SQLiteRollbackCallback_t98CA336F8643C59817C9BAF0805D000A3136045F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___puser0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SQLiteRollbackCallback_Invoke_mFFA50529D277C5F9A80EB81329863415E612D7DD_OpenInst(SQLiteRollbackCallback_t98CA336F8643C59817C9BAF0805D000A3136045F* __this, intptr_t ___puser0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___puser0, method);
}
void SQLiteRollbackCallback_Invoke_mFFA50529D277C5F9A80EB81329863415E612D7DD_OpenStatic(SQLiteRollbackCallback_t98CA336F8643C59817C9BAF0805D000A3136045F* __this, intptr_t ___puser0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___puser0, method);
}
void SQLiteRollbackCallback_Invoke_mFFA50529D277C5F9A80EB81329863415E612D7DD_OpenStaticInvoker(SQLiteRollbackCallback_t98CA336F8643C59817C9BAF0805D000A3136045F* __this, intptr_t ___puser0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___puser0);
}
void SQLiteRollbackCallback_Invoke_mFFA50529D277C5F9A80EB81329863415E612D7DD_ClosedStaticInvoker(SQLiteRollbackCallback_t98CA336F8643C59817C9BAF0805D000A3136045F* __this, intptr_t ___puser0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___puser0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SQLiteRollbackCallback_t98CA336F8643C59817C9BAF0805D000A3136045F (SQLiteRollbackCallback_t98CA336F8643C59817C9BAF0805D000A3136045F* __this, intptr_t ___puser0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___puser0);

}
// System.Void Mono.Data.Sqlite.SQLiteRollbackCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteRollbackCallback__ctor_mB2BEC5442F2FD60DF8ED2DB6874C484907A454C5 (SQLiteRollbackCallback_t98CA336F8643C59817C9BAF0805D000A3136045F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SQLiteRollbackCallback_Invoke_mFFA50529D277C5F9A80EB81329863415E612D7DD_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SQLiteRollbackCallback_Invoke_mFFA50529D277C5F9A80EB81329863415E612D7DD_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SQLiteRollbackCallback_Invoke_mFFA50529D277C5F9A80EB81329863415E612D7DD_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&SQLiteRollbackCallback_Invoke_mFFA50529D277C5F9A80EB81329863415E612D7DD_Multicast;
}
// System.Void Mono.Data.Sqlite.SQLiteRollbackCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteRollbackCallback_Invoke_mFFA50529D277C5F9A80EB81329863415E612D7DD (SQLiteRollbackCallback_t98CA336F8643C59817C9BAF0805D000A3136045F* __this, intptr_t ___puser0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___puser0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SQLiteCommitHandler_Invoke_m9796754D053C41F3DF0C040A8239895E9129EDCA_Multicast(SQLiteCommitHandler_t19C02860BAD4E8E4FC7FD15BBDFC290D5E56EFF2* __this, RuntimeObject* ___sender0, CommitEventArgs_tEE8C0ADBE8065ED4483973EF696742D42C372837* ___e1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SQLiteCommitHandler_t19C02860BAD4E8E4FC7FD15BBDFC290D5E56EFF2* currentDelegate = reinterpret_cast<SQLiteCommitHandler_t19C02860BAD4E8E4FC7FD15BBDFC290D5E56EFF2*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, CommitEventArgs_tEE8C0ADBE8065ED4483973EF696742D42C372837*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SQLiteCommitHandler_Invoke_m9796754D053C41F3DF0C040A8239895E9129EDCA_OpenInst(SQLiteCommitHandler_t19C02860BAD4E8E4FC7FD15BBDFC290D5E56EFF2* __this, RuntimeObject* ___sender0, CommitEventArgs_tEE8C0ADBE8065ED4483973EF696742D42C372837* ___e1, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	typedef void (*FunctionPointerType) (RuntimeObject*, CommitEventArgs_tEE8C0ADBE8065ED4483973EF696742D42C372837*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___sender0, ___e1, method);
}
void SQLiteCommitHandler_Invoke_m9796754D053C41F3DF0C040A8239895E9129EDCA_OpenStatic(SQLiteCommitHandler_t19C02860BAD4E8E4FC7FD15BBDFC290D5E56EFF2* __this, RuntimeObject* ___sender0, CommitEventArgs_tEE8C0ADBE8065ED4483973EF696742D42C372837* ___e1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, CommitEventArgs_tEE8C0ADBE8065ED4483973EF696742D42C372837*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___sender0, ___e1, method);
}
void SQLiteCommitHandler_Invoke_m9796754D053C41F3DF0C040A8239895E9129EDCA_OpenStaticInvoker(SQLiteCommitHandler_t19C02860BAD4E8E4FC7FD15BBDFC290D5E56EFF2* __this, RuntimeObject* ___sender0, CommitEventArgs_tEE8C0ADBE8065ED4483973EF696742D42C372837* ___e1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, CommitEventArgs_tEE8C0ADBE8065ED4483973EF696742D42C372837* >::Invoke(__this->___method_ptr_0, method, NULL, ___sender0, ___e1);
}
void SQLiteCommitHandler_Invoke_m9796754D053C41F3DF0C040A8239895E9129EDCA_ClosedStaticInvoker(SQLiteCommitHandler_t19C02860BAD4E8E4FC7FD15BBDFC290D5E56EFF2* __this, RuntimeObject* ___sender0, CommitEventArgs_tEE8C0ADBE8065ED4483973EF696742D42C372837* ___e1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, CommitEventArgs_tEE8C0ADBE8065ED4483973EF696742D42C372837* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___sender0, ___e1);
}
void SQLiteCommitHandler_Invoke_m9796754D053C41F3DF0C040A8239895E9129EDCA_OpenVirtual(SQLiteCommitHandler_t19C02860BAD4E8E4FC7FD15BBDFC290D5E56EFF2* __this, RuntimeObject* ___sender0, CommitEventArgs_tEE8C0ADBE8065ED4483973EF696742D42C372837* ___e1, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	VirtualActionInvoker1< CommitEventArgs_tEE8C0ADBE8065ED4483973EF696742D42C372837* >::Invoke(il2cpp_codegen_method_get_slot(method), ___sender0, ___e1);
}
void SQLiteCommitHandler_Invoke_m9796754D053C41F3DF0C040A8239895E9129EDCA_OpenInterface(SQLiteCommitHandler_t19C02860BAD4E8E4FC7FD15BBDFC290D5E56EFF2* __this, RuntimeObject* ___sender0, CommitEventArgs_tEE8C0ADBE8065ED4483973EF696742D42C372837* ___e1, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	InterfaceActionInvoker1< CommitEventArgs_tEE8C0ADBE8065ED4483973EF696742D42C372837* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___sender0, ___e1);
}
void SQLiteCommitHandler_Invoke_m9796754D053C41F3DF0C040A8239895E9129EDCA_OpenGenericVirtual(SQLiteCommitHandler_t19C02860BAD4E8E4FC7FD15BBDFC290D5E56EFF2* __this, RuntimeObject* ___sender0, CommitEventArgs_tEE8C0ADBE8065ED4483973EF696742D42C372837* ___e1, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	GenericVirtualActionInvoker1< CommitEventArgs_tEE8C0ADBE8065ED4483973EF696742D42C372837* >::Invoke(method, ___sender0, ___e1);
}
void SQLiteCommitHandler_Invoke_m9796754D053C41F3DF0C040A8239895E9129EDCA_OpenGenericInterface(SQLiteCommitHandler_t19C02860BAD4E8E4FC7FD15BBDFC290D5E56EFF2* __this, RuntimeObject* ___sender0, CommitEventArgs_tEE8C0ADBE8065ED4483973EF696742D42C372837* ___e1, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	GenericInterfaceActionInvoker1< CommitEventArgs_tEE8C0ADBE8065ED4483973EF696742D42C372837* >::Invoke(method, ___sender0, ___e1);
}
// System.Void Mono.Data.Sqlite.SQLiteCommitHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteCommitHandler__ctor_m87DD9A27FAB0029B0189E860566DD0800221A31C (SQLiteCommitHandler_t19C02860BAD4E8E4FC7FD15BBDFC290D5E56EFF2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SQLiteCommitHandler_Invoke_m9796754D053C41F3DF0C040A8239895E9129EDCA_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SQLiteCommitHandler_Invoke_m9796754D053C41F3DF0C040A8239895E9129EDCA_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SQLiteCommitHandler_Invoke_m9796754D053C41F3DF0C040A8239895E9129EDCA_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&SQLiteCommitHandler_Invoke_m9796754D053C41F3DF0C040A8239895E9129EDCA_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SQLiteCommitHandler_Invoke_m9796754D053C41F3DF0C040A8239895E9129EDCA_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&SQLiteCommitHandler_Invoke_m9796754D053C41F3DF0C040A8239895E9129EDCA_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SQLiteCommitHandler_Invoke_m9796754D053C41F3DF0C040A8239895E9129EDCA_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&SQLiteCommitHandler_Invoke_m9796754D053C41F3DF0C040A8239895E9129EDCA_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SQLiteCommitHandler_Invoke_m9796754D053C41F3DF0C040A8239895E9129EDCA_Multicast;
}
// System.Void Mono.Data.Sqlite.SQLiteCommitHandler::Invoke(System.Object,Mono.Data.Sqlite.CommitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteCommitHandler_Invoke_m9796754D053C41F3DF0C040A8239895E9129EDCA (SQLiteCommitHandler_t19C02860BAD4E8E4FC7FD15BBDFC290D5E56EFF2* __this, RuntimeObject* ___sender0, CommitEventArgs_tEE8C0ADBE8065ED4483973EF696742D42C372837* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, CommitEventArgs_tEE8C0ADBE8065ED4483973EF696742D42C372837*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SQLiteUpdateEventHandler_Invoke_m67B92F7EDAA158C0379894DB8C0E6DD494261F1C_Multicast(SQLiteUpdateEventHandler_t8B66CFE2899681DA8EE4EA7D3166A7D0E3C7F750* __this, RuntimeObject* ___sender0, UpdateEventArgs_t42367B915C6324429DF547E0DE821BC2604C56FF* ___e1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SQLiteUpdateEventHandler_t8B66CFE2899681DA8EE4EA7D3166A7D0E3C7F750* currentDelegate = reinterpret_cast<SQLiteUpdateEventHandler_t8B66CFE2899681DA8EE4EA7D3166A7D0E3C7F750*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, UpdateEventArgs_t42367B915C6324429DF547E0DE821BC2604C56FF*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SQLiteUpdateEventHandler_Invoke_m67B92F7EDAA158C0379894DB8C0E6DD494261F1C_OpenInst(SQLiteUpdateEventHandler_t8B66CFE2899681DA8EE4EA7D3166A7D0E3C7F750* __this, RuntimeObject* ___sender0, UpdateEventArgs_t42367B915C6324429DF547E0DE821BC2604C56FF* ___e1, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	typedef void (*FunctionPointerType) (RuntimeObject*, UpdateEventArgs_t42367B915C6324429DF547E0DE821BC2604C56FF*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___sender0, ___e1, method);
}
void SQLiteUpdateEventHandler_Invoke_m67B92F7EDAA158C0379894DB8C0E6DD494261F1C_OpenStatic(SQLiteUpdateEventHandler_t8B66CFE2899681DA8EE4EA7D3166A7D0E3C7F750* __this, RuntimeObject* ___sender0, UpdateEventArgs_t42367B915C6324429DF547E0DE821BC2604C56FF* ___e1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UpdateEventArgs_t42367B915C6324429DF547E0DE821BC2604C56FF*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___sender0, ___e1, method);
}
void SQLiteUpdateEventHandler_Invoke_m67B92F7EDAA158C0379894DB8C0E6DD494261F1C_OpenStaticInvoker(SQLiteUpdateEventHandler_t8B66CFE2899681DA8EE4EA7D3166A7D0E3C7F750* __this, RuntimeObject* ___sender0, UpdateEventArgs_t42367B915C6324429DF547E0DE821BC2604C56FF* ___e1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, UpdateEventArgs_t42367B915C6324429DF547E0DE821BC2604C56FF* >::Invoke(__this->___method_ptr_0, method, NULL, ___sender0, ___e1);
}
void SQLiteUpdateEventHandler_Invoke_m67B92F7EDAA158C0379894DB8C0E6DD494261F1C_ClosedStaticInvoker(SQLiteUpdateEventHandler_t8B66CFE2899681DA8EE4EA7D3166A7D0E3C7F750* __this, RuntimeObject* ___sender0, UpdateEventArgs_t42367B915C6324429DF547E0DE821BC2604C56FF* ___e1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, UpdateEventArgs_t42367B915C6324429DF547E0DE821BC2604C56FF* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___sender0, ___e1);
}
void SQLiteUpdateEventHandler_Invoke_m67B92F7EDAA158C0379894DB8C0E6DD494261F1C_OpenVirtual(SQLiteUpdateEventHandler_t8B66CFE2899681DA8EE4EA7D3166A7D0E3C7F750* __this, RuntimeObject* ___sender0, UpdateEventArgs_t42367B915C6324429DF547E0DE821BC2604C56FF* ___e1, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	VirtualActionInvoker1< UpdateEventArgs_t42367B915C6324429DF547E0DE821BC2604C56FF* >::Invoke(il2cpp_codegen_method_get_slot(method), ___sender0, ___e1);
}
void SQLiteUpdateEventHandler_Invoke_m67B92F7EDAA158C0379894DB8C0E6DD494261F1C_OpenInterface(SQLiteUpdateEventHandler_t8B66CFE2899681DA8EE4EA7D3166A7D0E3C7F750* __this, RuntimeObject* ___sender0, UpdateEventArgs_t42367B915C6324429DF547E0DE821BC2604C56FF* ___e1, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	InterfaceActionInvoker1< UpdateEventArgs_t42367B915C6324429DF547E0DE821BC2604C56FF* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___sender0, ___e1);
}
void SQLiteUpdateEventHandler_Invoke_m67B92F7EDAA158C0379894DB8C0E6DD494261F1C_OpenGenericVirtual(SQLiteUpdateEventHandler_t8B66CFE2899681DA8EE4EA7D3166A7D0E3C7F750* __this, RuntimeObject* ___sender0, UpdateEventArgs_t42367B915C6324429DF547E0DE821BC2604C56FF* ___e1, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	GenericVirtualActionInvoker1< UpdateEventArgs_t42367B915C6324429DF547E0DE821BC2604C56FF* >::Invoke(method, ___sender0, ___e1);
}
void SQLiteUpdateEventHandler_Invoke_m67B92F7EDAA158C0379894DB8C0E6DD494261F1C_OpenGenericInterface(SQLiteUpdateEventHandler_t8B66CFE2899681DA8EE4EA7D3166A7D0E3C7F750* __this, RuntimeObject* ___sender0, UpdateEventArgs_t42367B915C6324429DF547E0DE821BC2604C56FF* ___e1, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	GenericInterfaceActionInvoker1< UpdateEventArgs_t42367B915C6324429DF547E0DE821BC2604C56FF* >::Invoke(method, ___sender0, ___e1);
}
// System.Void Mono.Data.Sqlite.SQLiteUpdateEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteUpdateEventHandler__ctor_m678DD51EE46C23624E28AC4471FF70A7A6C16981 (SQLiteUpdateEventHandler_t8B66CFE2899681DA8EE4EA7D3166A7D0E3C7F750* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SQLiteUpdateEventHandler_Invoke_m67B92F7EDAA158C0379894DB8C0E6DD494261F1C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SQLiteUpdateEventHandler_Invoke_m67B92F7EDAA158C0379894DB8C0E6DD494261F1C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SQLiteUpdateEventHandler_Invoke_m67B92F7EDAA158C0379894DB8C0E6DD494261F1C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&SQLiteUpdateEventHandler_Invoke_m67B92F7EDAA158C0379894DB8C0E6DD494261F1C_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SQLiteUpdateEventHandler_Invoke_m67B92F7EDAA158C0379894DB8C0E6DD494261F1C_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&SQLiteUpdateEventHandler_Invoke_m67B92F7EDAA158C0379894DB8C0E6DD494261F1C_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SQLiteUpdateEventHandler_Invoke_m67B92F7EDAA158C0379894DB8C0E6DD494261F1C_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&SQLiteUpdateEventHandler_Invoke_m67B92F7EDAA158C0379894DB8C0E6DD494261F1C_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SQLiteUpdateEventHandler_Invoke_m67B92F7EDAA158C0379894DB8C0E6DD494261F1C_Multicast;
}
// System.Void Mono.Data.Sqlite.SQLiteUpdateEventHandler::Invoke(System.Object,Mono.Data.Sqlite.UpdateEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteUpdateEventHandler_Invoke_m67B92F7EDAA158C0379894DB8C0E6DD494261F1C (SQLiteUpdateEventHandler_t8B66CFE2899681DA8EE4EA7D3166A7D0E3C7F750* __this, RuntimeObject* ___sender0, UpdateEventArgs_t42367B915C6324429DF547E0DE821BC2604C56FF* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, UpdateEventArgs_t42367B915C6324429DF547E0DE821BC2604C56FF*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SQLiteCallback_Invoke_m44A27B55E2E05A76FD5127F6F040D3136EB1037E_Multicast(SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94* __this, intptr_t ___context0, int32_t ___nArgs1, intptr_t ___argsptr2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94* currentDelegate = reinterpret_cast<SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___context0, ___nArgs1, ___argsptr2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SQLiteCallback_Invoke_m44A27B55E2E05A76FD5127F6F040D3136EB1037E_OpenInst(SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94* __this, intptr_t ___context0, int32_t ___nArgs1, intptr_t ___argsptr2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___context0, ___nArgs1, ___argsptr2, method);
}
void SQLiteCallback_Invoke_m44A27B55E2E05A76FD5127F6F040D3136EB1037E_OpenStatic(SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94* __this, intptr_t ___context0, int32_t ___nArgs1, intptr_t ___argsptr2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___context0, ___nArgs1, ___argsptr2, method);
}
void SQLiteCallback_Invoke_m44A27B55E2E05A76FD5127F6F040D3136EB1037E_OpenStaticInvoker(SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94* __this, intptr_t ___context0, int32_t ___nArgs1, intptr_t ___argsptr2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___context0, ___nArgs1, ___argsptr2);
}
void SQLiteCallback_Invoke_m44A27B55E2E05A76FD5127F6F040D3136EB1037E_ClosedStaticInvoker(SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94* __this, intptr_t ___context0, int32_t ___nArgs1, intptr_t ___argsptr2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___context0, ___nArgs1, ___argsptr2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94 (SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94* __this, intptr_t ___context0, int32_t ___nArgs1, intptr_t ___argsptr2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___context0, ___nArgs1, ___argsptr2);

}
// System.Void Mono.Data.Sqlite.SQLiteCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteCallback__ctor_mC3E071A4BD2C90DD42FBFBEE3B184136C0C092BE (SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SQLiteCallback_Invoke_m44A27B55E2E05A76FD5127F6F040D3136EB1037E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SQLiteCallback_Invoke_m44A27B55E2E05A76FD5127F6F040D3136EB1037E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SQLiteCallback_Invoke_m44A27B55E2E05A76FD5127F6F040D3136EB1037E_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&SQLiteCallback_Invoke_m44A27B55E2E05A76FD5127F6F040D3136EB1037E_Multicast;
}
// System.Void Mono.Data.Sqlite.SQLiteCallback::Invoke(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteCallback_Invoke_m44A27B55E2E05A76FD5127F6F040D3136EB1037E (SQLiteCallback_t45AF39DB406AC35B636E91D5DDE1EA2A78A1EF94* __this, intptr_t ___context0, int32_t ___nArgs1, intptr_t ___argsptr2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___context0, ___nArgs1, ___argsptr2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SQLiteFinalCallback_Invoke_mDDEC4ECB0D5B9C44B3659055D42B68818C829EA3_Multicast(SQLiteFinalCallback_t6F84B373BB829BAABB6B9E2FEAF24723743008CD* __this, intptr_t ___context0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SQLiteFinalCallback_t6F84B373BB829BAABB6B9E2FEAF24723743008CD* currentDelegate = reinterpret_cast<SQLiteFinalCallback_t6F84B373BB829BAABB6B9E2FEAF24723743008CD*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___context0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SQLiteFinalCallback_Invoke_mDDEC4ECB0D5B9C44B3659055D42B68818C829EA3_OpenInst(SQLiteFinalCallback_t6F84B373BB829BAABB6B9E2FEAF24723743008CD* __this, intptr_t ___context0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___context0, method);
}
void SQLiteFinalCallback_Invoke_mDDEC4ECB0D5B9C44B3659055D42B68818C829EA3_OpenStatic(SQLiteFinalCallback_t6F84B373BB829BAABB6B9E2FEAF24723743008CD* __this, intptr_t ___context0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___context0, method);
}
void SQLiteFinalCallback_Invoke_mDDEC4ECB0D5B9C44B3659055D42B68818C829EA3_OpenStaticInvoker(SQLiteFinalCallback_t6F84B373BB829BAABB6B9E2FEAF24723743008CD* __this, intptr_t ___context0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___context0);
}
void SQLiteFinalCallback_Invoke_mDDEC4ECB0D5B9C44B3659055D42B68818C829EA3_ClosedStaticInvoker(SQLiteFinalCallback_t6F84B373BB829BAABB6B9E2FEAF24723743008CD* __this, intptr_t ___context0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___context0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SQLiteFinalCallback_t6F84B373BB829BAABB6B9E2FEAF24723743008CD (SQLiteFinalCallback_t6F84B373BB829BAABB6B9E2FEAF24723743008CD* __this, intptr_t ___context0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___context0);

}
// System.Void Mono.Data.Sqlite.SQLiteFinalCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteFinalCallback__ctor_mEF4564763D7BAF6971C73A8411EB90DF4166C245 (SQLiteFinalCallback_t6F84B373BB829BAABB6B9E2FEAF24723743008CD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SQLiteFinalCallback_Invoke_mDDEC4ECB0D5B9C44B3659055D42B68818C829EA3_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SQLiteFinalCallback_Invoke_mDDEC4ECB0D5B9C44B3659055D42B68818C829EA3_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SQLiteFinalCallback_Invoke_mDDEC4ECB0D5B9C44B3659055D42B68818C829EA3_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&SQLiteFinalCallback_Invoke_mDDEC4ECB0D5B9C44B3659055D42B68818C829EA3_Multicast;
}
// System.Void Mono.Data.Sqlite.SQLiteFinalCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteFinalCallback_Invoke_mDDEC4ECB0D5B9C44B3659055D42B68818C829EA3 (SQLiteFinalCallback_t6F84B373BB829BAABB6B9E2FEAF24723743008CD* __this, intptr_t ___context0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___context0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t SQLiteCollation_Invoke_m71D5C2408B823F159BD7D4991C66BC579930D961_Multicast(SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20* __this, intptr_t ___puser0, int32_t ___len11, intptr_t ___pv12, int32_t ___len23, intptr_t ___pv24, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20* currentDelegate = reinterpret_cast<SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, int32_t, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___puser0, ___len11, ___pv12, ___len23, ___pv24, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t SQLiteCollation_Invoke_m71D5C2408B823F159BD7D4991C66BC579930D961_OpenInst(SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20* __this, intptr_t ___puser0, int32_t ___len11, intptr_t ___pv12, int32_t ___len23, intptr_t ___pv24, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___puser0, ___len11, ___pv12, ___len23, ___pv24, method);
}
int32_t SQLiteCollation_Invoke_m71D5C2408B823F159BD7D4991C66BC579930D961_OpenStatic(SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20* __this, intptr_t ___puser0, int32_t ___len11, intptr_t ___pv12, int32_t ___len23, intptr_t ___pv24, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___puser0, ___len11, ___pv12, ___len23, ___pv24, method);
}
int32_t SQLiteCollation_Invoke_m71D5C2408B823F159BD7D4991C66BC579930D961_OpenStaticInvoker(SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20* __this, intptr_t ___puser0, int32_t ___len11, intptr_t ___pv12, int32_t ___len23, intptr_t ___pv24, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< int32_t, intptr_t, int32_t, intptr_t, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___puser0, ___len11, ___pv12, ___len23, ___pv24);
}
int32_t SQLiteCollation_Invoke_m71D5C2408B823F159BD7D4991C66BC579930D961_ClosedStaticInvoker(SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20* __this, intptr_t ___puser0, int32_t ___len11, intptr_t ___pv12, int32_t ___len23, intptr_t ___pv24, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< int32_t, RuntimeObject*, intptr_t, int32_t, intptr_t, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___puser0, ___len11, ___pv12, ___len23, ___pv24);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20 (SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20* __this, intptr_t ___puser0, int32_t ___len11, intptr_t ___pv12, int32_t ___len23, intptr_t ___pv24, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t, int32_t, intptr_t, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___puser0, ___len11, ___pv12, ___len23, ___pv24);

	return returnValue;
}
// System.Void Mono.Data.Sqlite.SQLiteCollation::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteCollation__ctor_mDFA84021A9EB2C5BE1C16ECF9E2D50CFF8D194DF (SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SQLiteCollation_Invoke_m71D5C2408B823F159BD7D4991C66BC579930D961_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SQLiteCollation_Invoke_m71D5C2408B823F159BD7D4991C66BC579930D961_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SQLiteCollation_Invoke_m71D5C2408B823F159BD7D4991C66BC579930D961_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&SQLiteCollation_Invoke_m71D5C2408B823F159BD7D4991C66BC579930D961_Multicast;
}
// System.Int32 Mono.Data.Sqlite.SQLiteCollation::Invoke(System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SQLiteCollation_Invoke_m71D5C2408B823F159BD7D4991C66BC579930D961 (SQLiteCollation_t0E4DAAEC27D585181CC41BFFC4B68D9010452E20* __this, intptr_t ___puser0, int32_t ___len11, intptr_t ___pv12, int32_t ___len23, intptr_t ___pv24, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___puser0, ___len11, ___pv12, ___len23, ___pv24, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SqliteParameter_get_ParameterName_m46ECE1039C2ED80F529743CC8590777DA150927B_inline (SqliteParameter_t3F994E2D2593EF6D147F81E3C36D1C7325257D00* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____parameterName_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
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
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mA2C174FE89DD752197CA6AE0E89F2A2843411B05_gshared_inline (List_1_tF30A6998C02D085CCD3F4E659A4ED22C2A03173B* __this, KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D ___item0, const RuntimeMethod* method) 
{
	KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_1 = (KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		KeyInfoU5BU5D_t97B974243A52288738B8712AC82682179E523DD5* L_6 = V_0;
		int32_t L_7 = V_1;
		KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D)L_8);
		return;
	}

IL_0034:
	{
		KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D L_9 = ___item0;
		((  void (*) (List_1_tF30A6998C02D085CCD3F4E659A4ED22C2A03173B*, KeyInfo_t15821E14B35C00BA53A3D05D0A8192FDB9152B8D, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
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
