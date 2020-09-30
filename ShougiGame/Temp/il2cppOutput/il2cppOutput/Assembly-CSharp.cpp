#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>
struct Dictionary_2_tCB10D3F0D8D28A1A6B54347C56E10FE9D9612C94;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337;
// System.Collections.Generic.Dictionary`2<PieceClass,System.Int32>
struct Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4;
// System.Collections.Generic.Dictionary`2<PieceClass,UnityEngine.UI.Text>
struct Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B;
// System.Collections.Generic.IEqualityComparer`1<PieceClass>
struct IEqualityComparer_1_tAFA966561C9A517AFD1FC052611BB5571A896ECB;
// System.Collections.Generic.Dictionary`2/KeyCollection<PieceClass,System.Int32>
struct KeyCollection_tA37F93F495F0F854E83955FBD32B9D62635ADEA3;
// System.Collections.Generic.Dictionary`2/KeyCollection<PieceClass,UnityEngine.UI.Text>
struct KeyCollection_tCD56C596FB6514C4E74934EE9A0CCAC74A15DB90;
// System.Collections.Generic.List`1<Coordinate>
struct List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<PieceClass,System.Int32>
struct ValueCollection_tC846F449314342376F766B90DC4B879C25614AA3;
// System.Collections.Generic.Dictionary`2/ValueCollection<PieceClass,UnityEngine.UI.Text>
struct ValueCollection_t12AB8BDCC766BB9DC395B1053CA517A9716EED85;
// System.Collections.Generic.Dictionary`2/Entry<PieceClass,System.Int32>[]
struct EntryU5BU5D_t372F44E99BB317169497A5BAAE2C6B66F672364B;
// System.Collections.Generic.Dictionary`2/Entry<PieceClass,UnityEngine.UI.Text>[]
struct EntryU5BU5D_t5360EC5ACABD6EDFF2F4B92C9539A52C3F4DA904;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Coordinate[]
struct CoordinateU5BU5D_t0E8CDCEF48DC91A42F007BCE60B80F1D8AEC5B42;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09;
// UnityChan.SpringBone[]
struct SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65;
// UnityChan.SpringCollider[]
struct SpringColliderU5BU5D_t5E59DD4998D2CF376312F0534FE06BBD28E39345;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.GameObject[0...,0...]
struct GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Coordinate
struct Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshCollider
struct MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// NoButton
struct NoButton_t88A6CF75CD410BD19CA6848ACBCB8454B30FB8A0;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Piece
struct Piece_tBB694F50405042E44F45E94D75887A6B91292BF1;
// PieceAnimetor
struct PieceAnimetor_t4CB4E767694190A636F60984557795857254B035;
// PieceButton
struct PieceButton_tB62C372A49D801FFAFF9C4D38A0EE0C55F3F7602;
// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F;
// PlayerCamera
struct PlayerCamera_t83DD695ACD34F7AD23F225B2EF0645997C667BDC;
// PlayerCanvas
struct PlayerCanvas_tC2E7A5A4F3D20E29CCAF7934FDC91CE2F1C0B372;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// Selector
struct Selector_t16758C50A5CA7934A346F28F0C81271BB3B5036A;
// UnityChan.SpringBone
struct SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63;
// UnityChan.SpringCollider
struct SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF;
// UnityChan.SpringManager
struct SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0;
// Squere
struct Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// YesButton
struct YesButton_t2C75450B96198218C94ED9F7E0FCF7F97F6BA4AE;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PieceClassU5BU2CU5D_tB7D041CD472DF4093E33D030E1E6B38FD0534B83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WhoU5BU2CU5D_t7F578194614DC845DE901EDFEE32155C47627561_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____303075700F6915569FE98659B2AFE985010993FD_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____52FEA8B3C77D12B3A6A788877538561730559EF0_1_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0F255915E07DA7FC595B804942A8C02376116B7A;
IL2CPP_EXTERN_C String_t* _stringLiteral14F93B18F4A27E31C8383B5199FB110A2DEEB66F;
IL2CPP_EXTERN_C String_t* _stringLiteral291C2119084D01A58F510F79D211330B0025C8DF;
IL2CPP_EXTERN_C String_t* _stringLiteral353ECDD9126358810196E71D924F7B83802D551D;
IL2CPP_EXTERN_C String_t* _stringLiteral391E0449A39C18F279012AA837BFB9F9ECBBA2AE;
IL2CPP_EXTERN_C String_t* _stringLiteral4CF0616342BDDD9CC6A3F85B7C39EA2B7B270869;
IL2CPP_EXTERN_C String_t* _stringLiteral52238E6F0B196864932454B59578F4FD299611E2;
IL2CPP_EXTERN_C String_t* _stringLiteral61168DB27A25489CC4BAE6326FFAC4D74D0E1DB2;
IL2CPP_EXTERN_C String_t* _stringLiteral66B91E9BC7B8A6C1F732D95C2001AAE02AD750CC;
IL2CPP_EXTERN_C String_t* _stringLiteral76D686C048ACE9145AB393249D0C7DEBB226BF2F;
IL2CPP_EXTERN_C String_t* _stringLiteral8AF1B8EC176834ECE63ABE42587B79B4F11D5E9D;
IL2CPP_EXTERN_C String_t* _stringLiteral8D242540DECD45E21014EEDD80C915E57E94E98A;
IL2CPP_EXTERN_C String_t* _stringLiteralD2399B7AD7E4B069C5F9DE67D24F86EE90098448;
IL2CPP_EXTERN_C String_t* _stringLiteralE37D92269B451B4C7CE808585BB38FC6AFB983A0;
IL2CPP_EXTERN_C String_t* _stringLiteralE531645D15D80EFAF275371883BACBC845A3E670;
IL2CPP_EXTERN_C String_t* _stringLiteralEA82B36DE74FB11953A4FBEEA1594B91F3935E40;
IL2CPP_EXTERN_C String_t* _stringLiteralF30125084BBDCC9569A0DA8872BAA0181599E988;
IL2CPP_EXTERN_C String_t* _stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m42A3843763DD21708AEDC1B157749ACEE65AD650_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0_mFD2B102A7A1F6F5A2BF178712A48BB19F6577566_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m27051D0A570DB23B4D591D050B62A4C3A5C15CB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m281B468632924FC3801DB0F901F01A2D827E9CA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9E01DBB9EA5540AD877F381E868FAA98AFD054D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD99537C9133A8149D209D64DD537BFB2FBDAEA14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mF2DACCB25CA9D593F4AAD2C414473D7B6C4F990B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mFAAD844080650BFC36082883DB40B715953A9B79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m1118EEBBB44893F158AB73C94462BA5C45621B62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m24BA169794FFDDE2190AF5ACFFDB083258804E2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m2D9502CBD9F1D4CE947A8EB714E38437CBD0C0AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCAA2BB6B72271F72AF897863C94F8D421EC501DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m454154450C2169F3A6D43CB60A0D245F40A79DA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m18DE2DD7D33699F69E34C22CCF658FCAB1ECDBDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPieceAnimetor_t4CB4E767694190A636F60984557795857254B035_mC900D1987A3B953193B68D9F766D4E03125EEC41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPiece_tBB694F50405042E44F45E94D75887A6B91292BF1_m7CC851C28491D4E61E473F9B5A4F4BD34173A629_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerCanvas_tC2E7A5A4F3D20E29CCAF7934FDC91CE2F1C0B372_m20AB62B2221D13DD0B9BDF4D1FF9E9603B4EA4DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSquere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783_mBE4A02FAD24CDD2738103EE7C2414C2542963A2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m72BAA509310E537FAD6882AE599524DED6465BE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m1E46DB886EB7C798007092E9CBA5D6CA997A62E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC2D96D9EB4848E5D874D681C2EB316D5CBF496DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t GameManager_Awake_m22F42B2A82708B10F652CAD8F2E0A4767110FF30_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_createDestinationList_m26B1E06BDDE078961FE797895F7F2CFBB4863F0D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_initSelectedInfomation_mF7191A6D0E0F9F014FCB1C3D67DF07692C4D8DAA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_onSelectInfo_m2AD12084F987BE2329CCE501B72556350EE8AE1C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_onSelectPieceButton_m0CADD1B9CE54EC0EB35744FCA88C40DFE4312B3F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_onSelectPiece_m554E70CF27FD8E551F4F5B55B1515292B287C4E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_onSelectSquere_m291D6657E38BDA3C073314D198FC8BA69424424A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_placeInitialPieces_mC7B9827CF9A00164CC90D6A6B8440C5EC911A2BA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_placeInitialSqueres_m033B0536B1C9C02EFF261610B6115A454377E0E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NoButton_Start_m7BBB92BB29A4C7A729FEC3CC7600328B4F109FA9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PieceAnimetor_Start_m2B300C9BA7613E7281F86CB5D2E3C28423286BA9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PieceAnimetor_setIsWalking_m1F81DC7E8E915737D221E4FBF07E2E64200AACBE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PieceButton_Start_m1BDF97A46E24DEF84D46018E22BC5F304039305B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Piece_Start_m330B8E465599E028F069122421BBE98AB48023D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Piece_Update_m022F474079DFF4CB8813B167D1700D0A3ABEA3D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Piece_initialize_m5AD3F3E2ABB4BC32039F3FC32C4A90D656F6B55C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Piece_move_m15826305154025AC6590FF7B0B35DBA8633B67C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerCamera_Awake_mFC8DAAD4D4B389CFEA1631D60025EF3AD247E627_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerCamera_onLeftClick_m80D60B06BFCF8E37625E7D75F80E1F0B3C71A0F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerCanvas_Start_m666CCD7A4AE1A4F2B86C501D84E81E2A3B62A5E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerCanvas__ctor_mDA313309034CBEA906788B70C506E95BA63DAFD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerCanvas_showCount_mCBABF6261E0ADA640886DE26B301F7D95D09C37A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_Awake_m1131F11CF6BF6FBE6454601C7D9A94AC8F468A24_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_Start_mBD692B64AAC791B93A589E7D3596F36787EAF021_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player__ctor_mDE8EB5B351975D4E7E24DE341B8B49B8A29CC2B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_pullPiece_m29BB187BBA7F3B6001877BF6F979A3629F845CF7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_pushPiece_m396373614860D093E68DC0876B9F8EA7DBB8E734_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Selector_Start_m61CBCD1A53B80C1A43341295590EC397D64A5C12_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Selector_onLeftClick_m46F8979333445989A59090B146141B90E4B549B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpringBone_GetParentSpringManager_mC5AE4B906C481E4FAE3842D66DDC7D2A09EF28B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpringBone_Start_m69C8AD54C36FABD984EBA1156AC54BC7FA3AA421_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpringBone_UpdateSpring_mCBB26D530A0FB706D426785811662B19C48527D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpringManager_UpdateParameters_mC7B00164F9AE3B3EBB0641FB12E3DA8B1AF5D02A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YesButton_Start_m108B31F36C43F559BB6EDBAE69ACDA53E67C5747_MetadataUsageId;

struct PieceClassU5BU2CU5D_tB7D041CD472DF4093E33D030E1E6B38FD0534B83;
struct SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65;
struct SpringColliderU5BU5D_t5E59DD4998D2CF376312F0534FE06BBD28E39345;
struct GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09;
struct WhoU5BU2CU5D_t7F578194614DC845DE901EDFEE32155C47627561;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// Coordinate
struct  Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99  : public RuntimeObject
{
public:
	// System.Int32 Coordinate::x
	int32_t ___x_0;
	// System.Int32 Coordinate::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<PieceClass,System.Int32>
struct  Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t372F44E99BB317169497A5BAAE2C6B66F672364B* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tA37F93F495F0F854E83955FBD32B9D62635ADEA3 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tC846F449314342376F766B90DC4B879C25614AA3 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4, ___entries_1)); }
	inline EntryU5BU5D_t372F44E99BB317169497A5BAAE2C6B66F672364B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t372F44E99BB317169497A5BAAE2C6B66F672364B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t372F44E99BB317169497A5BAAE2C6B66F672364B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4, ___keys_7)); }
	inline KeyCollection_tA37F93F495F0F854E83955FBD32B9D62635ADEA3 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tA37F93F495F0F854E83955FBD32B9D62635ADEA3 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tA37F93F495F0F854E83955FBD32B9D62635ADEA3 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4, ___values_8)); }
	inline ValueCollection_tC846F449314342376F766B90DC4B879C25614AA3 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tC846F449314342376F766B90DC4B879C25614AA3 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tC846F449314342376F766B90DC4B879C25614AA3 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<PieceClass,UnityEngine.UI.Text>
struct  Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t5360EC5ACABD6EDFF2F4B92C9539A52C3F4DA904* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tCD56C596FB6514C4E74934EE9A0CCAC74A15DB90 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t12AB8BDCC766BB9DC395B1053CA517A9716EED85 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B, ___entries_1)); }
	inline EntryU5BU5D_t5360EC5ACABD6EDFF2F4B92C9539A52C3F4DA904* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t5360EC5ACABD6EDFF2F4B92C9539A52C3F4DA904** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t5360EC5ACABD6EDFF2F4B92C9539A52C3F4DA904* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B, ___keys_7)); }
	inline KeyCollection_tCD56C596FB6514C4E74934EE9A0CCAC74A15DB90 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tCD56C596FB6514C4E74934EE9A0CCAC74A15DB90 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tCD56C596FB6514C4E74934EE9A0CCAC74A15DB90 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B, ___values_8)); }
	inline ValueCollection_t12AB8BDCC766BB9DC395B1053CA517A9716EED85 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t12AB8BDCC766BB9DC395B1053CA517A9716EED85 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t12AB8BDCC766BB9DC395B1053CA517A9716EED85 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Coordinate>
struct  List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CoordinateU5BU5D_t0E8CDCEF48DC91A42F007BCE60B80F1D8AEC5B42* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0, ____items_1)); }
	inline CoordinateU5BU5D_t0E8CDCEF48DC91A42F007BCE60B80F1D8AEC5B42* get__items_1() const { return ____items_1; }
	inline CoordinateU5BU5D_t0E8CDCEF48DC91A42F007BCE60B80F1D8AEC5B42** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CoordinateU5BU5D_t0E8CDCEF48DC91A42F007BCE60B80F1D8AEC5B42* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CoordinateU5BU5D_t0E8CDCEF48DC91A42F007BCE60B80F1D8AEC5B42* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0_StaticFields, ____emptyArray_5)); }
	inline CoordinateU5BU5D_t0E8CDCEF48DC91A42F007BCE60B80F1D8AEC5B42* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CoordinateU5BU5D_t0E8CDCEF48DC91A42F007BCE60B80F1D8AEC5B42** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CoordinateU5BU5D_t0E8CDCEF48DC91A42F007BCE60B80F1D8AEC5B42* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D324
struct  __StaticArrayInitTypeSizeU3D324_t5C5A819D9F17B6B5DCE86D233773DBA51F74046E 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D324_t5C5A819D9F17B6B5DCE86D233773DBA51F74046E__padding[324];
	};

public:
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<Coordinate>
struct  Enumerator_t934EC0969E0269FD5C778AF9868535FBAEE2EA97 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t934EC0969E0269FD5C778AF9868535FBAEE2EA97, ___list_0)); }
	inline List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 * get_list_0() const { return ___list_0; }
	inline List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t934EC0969E0269FD5C778AF9868535FBAEE2EA97, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t934EC0969E0269FD5C778AF9868535FBAEE2EA97, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t934EC0969E0269FD5C778AF9868535FBAEE2EA97, ___current_3)); }
	inline Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * get_current_3() const { return ___current_3; }
	inline Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields
{
public:
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D324 <PrivateImplementationDetails>::303075700F6915569FE98659B2AFE985010993FD
	__StaticArrayInitTypeSizeU3D324_t5C5A819D9F17B6B5DCE86D233773DBA51F74046E  ___303075700F6915569FE98659B2AFE985010993FD_0;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D324 <PrivateImplementationDetails>::52FEA8B3C77D12B3A6A788877538561730559EF0
	__StaticArrayInitTypeSizeU3D324_t5C5A819D9F17B6B5DCE86D233773DBA51F74046E  ___52FEA8B3C77D12B3A6A788877538561730559EF0_1;

public:
	inline static int32_t get_offset_of_U3303075700F6915569FE98659B2AFE985010993FD_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___303075700F6915569FE98659B2AFE985010993FD_0)); }
	inline __StaticArrayInitTypeSizeU3D324_t5C5A819D9F17B6B5DCE86D233773DBA51F74046E  get_U3303075700F6915569FE98659B2AFE985010993FD_0() const { return ___303075700F6915569FE98659B2AFE985010993FD_0; }
	inline __StaticArrayInitTypeSizeU3D324_t5C5A819D9F17B6B5DCE86D233773DBA51F74046E * get_address_of_U3303075700F6915569FE98659B2AFE985010993FD_0() { return &___303075700F6915569FE98659B2AFE985010993FD_0; }
	inline void set_U3303075700F6915569FE98659B2AFE985010993FD_0(__StaticArrayInitTypeSizeU3D324_t5C5A819D9F17B6B5DCE86D233773DBA51F74046E  value)
	{
		___303075700F6915569FE98659B2AFE985010993FD_0 = value;
	}

	inline static int32_t get_offset_of_U352FEA8B3C77D12B3A6A788877538561730559EF0_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___52FEA8B3C77D12B3A6A788877538561730559EF0_1)); }
	inline __StaticArrayInitTypeSizeU3D324_t5C5A819D9F17B6B5DCE86D233773DBA51F74046E  get_U352FEA8B3C77D12B3A6A788877538561730559EF0_1() const { return ___52FEA8B3C77D12B3A6A788877538561730559EF0_1; }
	inline __StaticArrayInitTypeSizeU3D324_t5C5A819D9F17B6B5DCE86D233773DBA51F74046E * get_address_of_U352FEA8B3C77D12B3A6A788877538561730559EF0_1() { return &___52FEA8B3C77D12B3A6A788877538561730559EF0_1; }
	inline void set_U352FEA8B3C77D12B3A6A788877538561730559EF0_1(__StaticArrayInitTypeSizeU3D324_t5C5A819D9F17B6B5DCE86D233773DBA51F74046E  value)
	{
		___52FEA8B3C77D12B3A6A788877538561730559EF0_1 = value;
	}
};


// GameManager_SelectMode
struct  SelectMode_t366F2E92AA2656DA3792E0216A66A09C53971BC1 
{
public:
	// System.Int32 GameManager_SelectMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SelectMode_t366F2E92AA2656DA3792E0216A66A09C53971BC1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PieceClass
struct  PieceClass_t3C5CD0CBDBF05AEDEB1862C0CA5A17805C9AB731 
{
public:
	// System.Int32 PieceClass::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PieceClass_t3C5CD0CBDBF05AEDEB1862C0CA5A17805C9AB731, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct  Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.AnimationCurve
struct  AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct  Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct  RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// Who
struct  Who_t111C08720E670DEE257946E1AFAD75809E0E9335 
{
public:
	// System.Int32 Who::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Who_t111C08720E670DEE257946E1AFAD75809E0E9335, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MeshCollider
struct  MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// GameManager
struct  GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject GameManager::m_squere1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_squere1_4;
	// UnityEngine.GameObject GameManager::m_squere2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_squere2_5;
	// UnityEngine.GameObject[0...,0...] GameManager::m_squereArray
	GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* ___m_squereArray_6;
	// UnityEngine.GameObject GameManager::m_pieceOu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_pieceOu_7;
	// UnityEngine.GameObject GameManager::m_pieceKin
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_pieceKin_8;
	// UnityEngine.GameObject GameManager::m_pieceGin
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_pieceGin_9;
	// UnityEngine.GameObject GameManager::m_pieceKeima
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_pieceKeima_10;
	// UnityEngine.GameObject GameManager::m_pieceKyosha
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_pieceKyosha_11;
	// UnityEngine.GameObject GameManager::m_pieceKaku
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_pieceKaku_12;
	// UnityEngine.GameObject GameManager::m_pieceHisha
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_pieceHisha_13;
	// UnityEngine.GameObject GameManager::m_pieceHu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_pieceHu_14;
	// UnityEngine.GameObject[0...,0...] GameManager::m_pieceArray
	GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* ___m_pieceArray_15;
	// UnityEngine.GameObject GameManager::m_selectPromotionCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_selectPromotionCanvas_16;
	// GameManager_SelectMode GameManager::<m_selectMode>k__BackingField
	int32_t ___U3Cm_selectModeU3Ek__BackingField_17;
	// Piece GameManager::m_selectedPiece
	Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * ___m_selectedPiece_18;
	// Squere GameManager::m_selectedSquere
	Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * ___m_selectedSquere_19;
	// System.Boolean GameManager::m_selectedIsPromoted
	bool ___m_selectedIsPromoted_20;
	// PieceClass GameManager::m_selectedPieceButtonClass
	int32_t ___m_selectedPieceButtonClass_21;
	// System.Boolean GameManager::m_isSelectedPieceButton
	bool ___m_isSelectedPieceButton_22;
	// Who GameManager::m_whoseTurn
	int32_t ___m_whoseTurn_23;
	// UnityEngine.GameObject GameManager::m_playerOneObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_playerOneObject_24;
	// UnityEngine.GameObject GameManager::m_playerTwoObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_playerTwoObject_25;
	// Player GameManager::m_playerOne
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ___m_playerOne_26;
	// Player GameManager::m_playerTwo
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ___m_playerTwo_27;

public:
	inline static int32_t get_offset_of_m_squere1_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_squere1_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_squere1_4() const { return ___m_squere1_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_squere1_4() { return &___m_squere1_4; }
	inline void set_m_squere1_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_squere1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_squere1_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_squere2_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_squere2_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_squere2_5() const { return ___m_squere2_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_squere2_5() { return &___m_squere2_5; }
	inline void set_m_squere2_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_squere2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_squere2_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_squereArray_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_squereArray_6)); }
	inline GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* get_m_squereArray_6() const { return ___m_squereArray_6; }
	inline GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9** get_address_of_m_squereArray_6() { return &___m_squereArray_6; }
	inline void set_m_squereArray_6(GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* value)
	{
		___m_squereArray_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_squereArray_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_pieceOu_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_pieceOu_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_pieceOu_7() const { return ___m_pieceOu_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_pieceOu_7() { return &___m_pieceOu_7; }
	inline void set_m_pieceOu_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_pieceOu_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_pieceOu_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_pieceKin_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_pieceKin_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_pieceKin_8() const { return ___m_pieceKin_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_pieceKin_8() { return &___m_pieceKin_8; }
	inline void set_m_pieceKin_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_pieceKin_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_pieceKin_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_pieceGin_9() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_pieceGin_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_pieceGin_9() const { return ___m_pieceGin_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_pieceGin_9() { return &___m_pieceGin_9; }
	inline void set_m_pieceGin_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_pieceGin_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_pieceGin_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_pieceKeima_10() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_pieceKeima_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_pieceKeima_10() const { return ___m_pieceKeima_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_pieceKeima_10() { return &___m_pieceKeima_10; }
	inline void set_m_pieceKeima_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_pieceKeima_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_pieceKeima_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_pieceKyosha_11() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_pieceKyosha_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_pieceKyosha_11() const { return ___m_pieceKyosha_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_pieceKyosha_11() { return &___m_pieceKyosha_11; }
	inline void set_m_pieceKyosha_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_pieceKyosha_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_pieceKyosha_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_pieceKaku_12() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_pieceKaku_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_pieceKaku_12() const { return ___m_pieceKaku_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_pieceKaku_12() { return &___m_pieceKaku_12; }
	inline void set_m_pieceKaku_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_pieceKaku_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_pieceKaku_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_pieceHisha_13() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_pieceHisha_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_pieceHisha_13() const { return ___m_pieceHisha_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_pieceHisha_13() { return &___m_pieceHisha_13; }
	inline void set_m_pieceHisha_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_pieceHisha_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_pieceHisha_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_pieceHu_14() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_pieceHu_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_pieceHu_14() const { return ___m_pieceHu_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_pieceHu_14() { return &___m_pieceHu_14; }
	inline void set_m_pieceHu_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_pieceHu_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_pieceHu_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_pieceArray_15() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_pieceArray_15)); }
	inline GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* get_m_pieceArray_15() const { return ___m_pieceArray_15; }
	inline GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9** get_address_of_m_pieceArray_15() { return &___m_pieceArray_15; }
	inline void set_m_pieceArray_15(GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* value)
	{
		___m_pieceArray_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_pieceArray_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_selectPromotionCanvas_16() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_selectPromotionCanvas_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_selectPromotionCanvas_16() const { return ___m_selectPromotionCanvas_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_selectPromotionCanvas_16() { return &___m_selectPromotionCanvas_16; }
	inline void set_m_selectPromotionCanvas_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_selectPromotionCanvas_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_selectPromotionCanvas_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3Cm_selectModeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___U3Cm_selectModeU3Ek__BackingField_17)); }
	inline int32_t get_U3Cm_selectModeU3Ek__BackingField_17() const { return ___U3Cm_selectModeU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3Cm_selectModeU3Ek__BackingField_17() { return &___U3Cm_selectModeU3Ek__BackingField_17; }
	inline void set_U3Cm_selectModeU3Ek__BackingField_17(int32_t value)
	{
		___U3Cm_selectModeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_m_selectedPiece_18() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_selectedPiece_18)); }
	inline Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * get_m_selectedPiece_18() const { return ___m_selectedPiece_18; }
	inline Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 ** get_address_of_m_selectedPiece_18() { return &___m_selectedPiece_18; }
	inline void set_m_selectedPiece_18(Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * value)
	{
		___m_selectedPiece_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_selectedPiece_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_selectedSquere_19() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_selectedSquere_19)); }
	inline Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * get_m_selectedSquere_19() const { return ___m_selectedSquere_19; }
	inline Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 ** get_address_of_m_selectedSquere_19() { return &___m_selectedSquere_19; }
	inline void set_m_selectedSquere_19(Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * value)
	{
		___m_selectedSquere_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_selectedSquere_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_selectedIsPromoted_20() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_selectedIsPromoted_20)); }
	inline bool get_m_selectedIsPromoted_20() const { return ___m_selectedIsPromoted_20; }
	inline bool* get_address_of_m_selectedIsPromoted_20() { return &___m_selectedIsPromoted_20; }
	inline void set_m_selectedIsPromoted_20(bool value)
	{
		___m_selectedIsPromoted_20 = value;
	}

	inline static int32_t get_offset_of_m_selectedPieceButtonClass_21() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_selectedPieceButtonClass_21)); }
	inline int32_t get_m_selectedPieceButtonClass_21() const { return ___m_selectedPieceButtonClass_21; }
	inline int32_t* get_address_of_m_selectedPieceButtonClass_21() { return &___m_selectedPieceButtonClass_21; }
	inline void set_m_selectedPieceButtonClass_21(int32_t value)
	{
		___m_selectedPieceButtonClass_21 = value;
	}

	inline static int32_t get_offset_of_m_isSelectedPieceButton_22() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_isSelectedPieceButton_22)); }
	inline bool get_m_isSelectedPieceButton_22() const { return ___m_isSelectedPieceButton_22; }
	inline bool* get_address_of_m_isSelectedPieceButton_22() { return &___m_isSelectedPieceButton_22; }
	inline void set_m_isSelectedPieceButton_22(bool value)
	{
		___m_isSelectedPieceButton_22 = value;
	}

	inline static int32_t get_offset_of_m_whoseTurn_23() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_whoseTurn_23)); }
	inline int32_t get_m_whoseTurn_23() const { return ___m_whoseTurn_23; }
	inline int32_t* get_address_of_m_whoseTurn_23() { return &___m_whoseTurn_23; }
	inline void set_m_whoseTurn_23(int32_t value)
	{
		___m_whoseTurn_23 = value;
	}

	inline static int32_t get_offset_of_m_playerOneObject_24() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_playerOneObject_24)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_playerOneObject_24() const { return ___m_playerOneObject_24; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_playerOneObject_24() { return &___m_playerOneObject_24; }
	inline void set_m_playerOneObject_24(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_playerOneObject_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_playerOneObject_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_playerTwoObject_25() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_playerTwoObject_25)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_playerTwoObject_25() const { return ___m_playerTwoObject_25; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_playerTwoObject_25() { return &___m_playerTwoObject_25; }
	inline void set_m_playerTwoObject_25(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_playerTwoObject_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_playerTwoObject_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_playerOne_26() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_playerOne_26)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get_m_playerOne_26() const { return ___m_playerOne_26; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of_m_playerOne_26() { return &___m_playerOne_26; }
	inline void set_m_playerOne_26(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		___m_playerOne_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_playerOne_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_playerTwo_27() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___m_playerTwo_27)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get_m_playerTwo_27() const { return ___m_playerTwo_27; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of_m_playerTwo_27() { return &___m_playerTwo_27; }
	inline void set_m_playerTwo_27(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		___m_playerTwo_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_playerTwo_27), (void*)value);
	}
};


// NoButton
struct  NoButton_t88A6CF75CD410BD19CA6848ACBCB8454B30FB8A0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameManager NoButton::m_gameManager
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___m_gameManager_4;
	// GameManager NoButton::m_gameManagerObject
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___m_gameManagerObject_5;

public:
	inline static int32_t get_offset_of_m_gameManager_4() { return static_cast<int32_t>(offsetof(NoButton_t88A6CF75CD410BD19CA6848ACBCB8454B30FB8A0, ___m_gameManager_4)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_m_gameManager_4() const { return ___m_gameManager_4; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_m_gameManager_4() { return &___m_gameManager_4; }
	inline void set_m_gameManager_4(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___m_gameManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_gameManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_gameManagerObject_5() { return static_cast<int32_t>(offsetof(NoButton_t88A6CF75CD410BD19CA6848ACBCB8454B30FB8A0, ___m_gameManagerObject_5)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_m_gameManagerObject_5() const { return ___m_gameManagerObject_5; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_m_gameManagerObject_5() { return &___m_gameManagerObject_5; }
	inline void set_m_gameManagerObject_5(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___m_gameManagerObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_gameManagerObject_5), (void*)value);
	}
};


// Piece
struct  Piece_tBB694F50405042E44F45E94D75887A6B91292BF1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// PieceClass Piece::<m_pieceClass>k__BackingField
	int32_t ___U3Cm_pieceClassU3Ek__BackingField_4;
	// Who Piece::<m_whose>k__BackingField
	int32_t ___U3Cm_whoseU3Ek__BackingField_5;
	// Coordinate Piece::<m_position>k__BackingField
	Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * ___U3Cm_positionU3Ek__BackingField_6;
	// System.Boolean Piece::<m_isPromoted>k__BackingField
	bool ___U3Cm_isPromotedU3Ek__BackingField_7;
	// System.Boolean Piece::<m_isAblePromote>k__BackingField
	bool ___U3Cm_isAblePromoteU3Ek__BackingField_8;
	// UnityEngine.GameObject Piece::m_aura
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_aura_9;
	// UnityEngine.Vector3 Piece::m_targetTransformPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_targetTransformPosition_10;
	// UnityEngine.Quaternion Piece::m_targetTransformRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_targetTransformRotation_11;
	// PieceAnimetor Piece::m_pieceAnimator
	PieceAnimetor_t4CB4E767694190A636F60984557795857254B035 * ___m_pieceAnimator_12;

public:
	inline static int32_t get_offset_of_U3Cm_pieceClassU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Piece_tBB694F50405042E44F45E94D75887A6B91292BF1, ___U3Cm_pieceClassU3Ek__BackingField_4)); }
	inline int32_t get_U3Cm_pieceClassU3Ek__BackingField_4() const { return ___U3Cm_pieceClassU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3Cm_pieceClassU3Ek__BackingField_4() { return &___U3Cm_pieceClassU3Ek__BackingField_4; }
	inline void set_U3Cm_pieceClassU3Ek__BackingField_4(int32_t value)
	{
		___U3Cm_pieceClassU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3Cm_whoseU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Piece_tBB694F50405042E44F45E94D75887A6B91292BF1, ___U3Cm_whoseU3Ek__BackingField_5)); }
	inline int32_t get_U3Cm_whoseU3Ek__BackingField_5() const { return ___U3Cm_whoseU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3Cm_whoseU3Ek__BackingField_5() { return &___U3Cm_whoseU3Ek__BackingField_5; }
	inline void set_U3Cm_whoseU3Ek__BackingField_5(int32_t value)
	{
		___U3Cm_whoseU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3Cm_positionU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Piece_tBB694F50405042E44F45E94D75887A6B91292BF1, ___U3Cm_positionU3Ek__BackingField_6)); }
	inline Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * get_U3Cm_positionU3Ek__BackingField_6() const { return ___U3Cm_positionU3Ek__BackingField_6; }
	inline Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 ** get_address_of_U3Cm_positionU3Ek__BackingField_6() { return &___U3Cm_positionU3Ek__BackingField_6; }
	inline void set_U3Cm_positionU3Ek__BackingField_6(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * value)
	{
		___U3Cm_positionU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Cm_positionU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3Cm_isPromotedU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Piece_tBB694F50405042E44F45E94D75887A6B91292BF1, ___U3Cm_isPromotedU3Ek__BackingField_7)); }
	inline bool get_U3Cm_isPromotedU3Ek__BackingField_7() const { return ___U3Cm_isPromotedU3Ek__BackingField_7; }
	inline bool* get_address_of_U3Cm_isPromotedU3Ek__BackingField_7() { return &___U3Cm_isPromotedU3Ek__BackingField_7; }
	inline void set_U3Cm_isPromotedU3Ek__BackingField_7(bool value)
	{
		___U3Cm_isPromotedU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3Cm_isAblePromoteU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Piece_tBB694F50405042E44F45E94D75887A6B91292BF1, ___U3Cm_isAblePromoteU3Ek__BackingField_8)); }
	inline bool get_U3Cm_isAblePromoteU3Ek__BackingField_8() const { return ___U3Cm_isAblePromoteU3Ek__BackingField_8; }
	inline bool* get_address_of_U3Cm_isAblePromoteU3Ek__BackingField_8() { return &___U3Cm_isAblePromoteU3Ek__BackingField_8; }
	inline void set_U3Cm_isAblePromoteU3Ek__BackingField_8(bool value)
	{
		___U3Cm_isAblePromoteU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_m_aura_9() { return static_cast<int32_t>(offsetof(Piece_tBB694F50405042E44F45E94D75887A6B91292BF1, ___m_aura_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_aura_9() const { return ___m_aura_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_aura_9() { return &___m_aura_9; }
	inline void set_m_aura_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_aura_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_aura_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_targetTransformPosition_10() { return static_cast<int32_t>(offsetof(Piece_tBB694F50405042E44F45E94D75887A6B91292BF1, ___m_targetTransformPosition_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_targetTransformPosition_10() const { return ___m_targetTransformPosition_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_targetTransformPosition_10() { return &___m_targetTransformPosition_10; }
	inline void set_m_targetTransformPosition_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_targetTransformPosition_10 = value;
	}

	inline static int32_t get_offset_of_m_targetTransformRotation_11() { return static_cast<int32_t>(offsetof(Piece_tBB694F50405042E44F45E94D75887A6B91292BF1, ___m_targetTransformRotation_11)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_targetTransformRotation_11() const { return ___m_targetTransformRotation_11; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_targetTransformRotation_11() { return &___m_targetTransformRotation_11; }
	inline void set_m_targetTransformRotation_11(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_targetTransformRotation_11 = value;
	}

	inline static int32_t get_offset_of_m_pieceAnimator_12() { return static_cast<int32_t>(offsetof(Piece_tBB694F50405042E44F45E94D75887A6B91292BF1, ___m_pieceAnimator_12)); }
	inline PieceAnimetor_t4CB4E767694190A636F60984557795857254B035 * get_m_pieceAnimator_12() const { return ___m_pieceAnimator_12; }
	inline PieceAnimetor_t4CB4E767694190A636F60984557795857254B035 ** get_address_of_m_pieceAnimator_12() { return &___m_pieceAnimator_12; }
	inline void set_m_pieceAnimator_12(PieceAnimetor_t4CB4E767694190A636F60984557795857254B035 * value)
	{
		___m_pieceAnimator_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_pieceAnimator_12), (void*)value);
	}
};


// PieceAnimetor
struct  PieceAnimetor_t4CB4E767694190A636F60984557795857254B035  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator PieceAnimetor::m_pieceAnimator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___m_pieceAnimator_4;

public:
	inline static int32_t get_offset_of_m_pieceAnimator_4() { return static_cast<int32_t>(offsetof(PieceAnimetor_t4CB4E767694190A636F60984557795857254B035, ___m_pieceAnimator_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_m_pieceAnimator_4() const { return ___m_pieceAnimator_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_m_pieceAnimator_4() { return &___m_pieceAnimator_4; }
	inline void set_m_pieceAnimator_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___m_pieceAnimator_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_pieceAnimator_4), (void*)value);
	}
};


// PieceButton
struct  PieceButton_tB62C372A49D801FFAFF9C4D38A0EE0C55F3F7602  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameManager PieceButton::m_gameManager
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___m_gameManager_4;
	// GameManager PieceButton::m_gameManagerObject
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___m_gameManagerObject_5;
	// PieceClass PieceButton::m_pieceClass
	int32_t ___m_pieceClass_6;

public:
	inline static int32_t get_offset_of_m_gameManager_4() { return static_cast<int32_t>(offsetof(PieceButton_tB62C372A49D801FFAFF9C4D38A0EE0C55F3F7602, ___m_gameManager_4)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_m_gameManager_4() const { return ___m_gameManager_4; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_m_gameManager_4() { return &___m_gameManager_4; }
	inline void set_m_gameManager_4(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___m_gameManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_gameManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_gameManagerObject_5() { return static_cast<int32_t>(offsetof(PieceButton_tB62C372A49D801FFAFF9C4D38A0EE0C55F3F7602, ___m_gameManagerObject_5)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_m_gameManagerObject_5() const { return ___m_gameManagerObject_5; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_m_gameManagerObject_5() { return &___m_gameManagerObject_5; }
	inline void set_m_gameManagerObject_5(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___m_gameManagerObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_gameManagerObject_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_pieceClass_6() { return static_cast<int32_t>(offsetof(PieceButton_tB62C372A49D801FFAFF9C4D38A0EE0C55F3F7602, ___m_pieceClass_6)); }
	inline int32_t get_m_pieceClass_6() const { return ___m_pieceClass_6; }
	inline int32_t* get_address_of_m_pieceClass_6() { return &___m_pieceClass_6; }
	inline void set_m_pieceClass_6(int32_t value)
	{
		___m_pieceClass_6 = value;
	}
};


// Player
struct  Player_t5689617909B48F7640EA0892D85C92C13CC22C6F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Who Player::m_who
	int32_t ___m_who_4;
	// PlayerCanvas Player::m_playerCanvas
	PlayerCanvas_tC2E7A5A4F3D20E29CCAF7934FDC91CE2F1C0B372 * ___m_playerCanvas_5;
	// System.Collections.Generic.Dictionary`2<PieceClass,System.Int32> Player::m_pieceDictionary
	Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 * ___m_pieceDictionary_6;

public:
	inline static int32_t get_offset_of_m_who_4() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___m_who_4)); }
	inline int32_t get_m_who_4() const { return ___m_who_4; }
	inline int32_t* get_address_of_m_who_4() { return &___m_who_4; }
	inline void set_m_who_4(int32_t value)
	{
		___m_who_4 = value;
	}

	inline static int32_t get_offset_of_m_playerCanvas_5() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___m_playerCanvas_5)); }
	inline PlayerCanvas_tC2E7A5A4F3D20E29CCAF7934FDC91CE2F1C0B372 * get_m_playerCanvas_5() const { return ___m_playerCanvas_5; }
	inline PlayerCanvas_tC2E7A5A4F3D20E29CCAF7934FDC91CE2F1C0B372 ** get_address_of_m_playerCanvas_5() { return &___m_playerCanvas_5; }
	inline void set_m_playerCanvas_5(PlayerCanvas_tC2E7A5A4F3D20E29CCAF7934FDC91CE2F1C0B372 * value)
	{
		___m_playerCanvas_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_playerCanvas_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_pieceDictionary_6() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___m_pieceDictionary_6)); }
	inline Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 * get_m_pieceDictionary_6() const { return ___m_pieceDictionary_6; }
	inline Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 ** get_address_of_m_pieceDictionary_6() { return &___m_pieceDictionary_6; }
	inline void set_m_pieceDictionary_6(Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 * value)
	{
		___m_pieceDictionary_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_pieceDictionary_6), (void*)value);
	}
};


// PlayerCamera
struct  PlayerCamera_t83DD695ACD34F7AD23F225B2EF0645997C667BDC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject PlayerCamera::m_gameManager
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_gameManager_4;
	// GameManager PlayerCamera::m_gameManagerObject
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___m_gameManagerObject_5;
	// UnityEngine.Camera PlayerCamera::m_cameraObject
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_cameraObject_6;
	// Who PlayerCamera::m_whose
	int32_t ___m_whose_7;

public:
	inline static int32_t get_offset_of_m_gameManager_4() { return static_cast<int32_t>(offsetof(PlayerCamera_t83DD695ACD34F7AD23F225B2EF0645997C667BDC, ___m_gameManager_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_gameManager_4() const { return ___m_gameManager_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_gameManager_4() { return &___m_gameManager_4; }
	inline void set_m_gameManager_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_gameManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_gameManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_gameManagerObject_5() { return static_cast<int32_t>(offsetof(PlayerCamera_t83DD695ACD34F7AD23F225B2EF0645997C667BDC, ___m_gameManagerObject_5)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_m_gameManagerObject_5() const { return ___m_gameManagerObject_5; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_m_gameManagerObject_5() { return &___m_gameManagerObject_5; }
	inline void set_m_gameManagerObject_5(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___m_gameManagerObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_gameManagerObject_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_cameraObject_6() { return static_cast<int32_t>(offsetof(PlayerCamera_t83DD695ACD34F7AD23F225B2EF0645997C667BDC, ___m_cameraObject_6)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_cameraObject_6() const { return ___m_cameraObject_6; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_cameraObject_6() { return &___m_cameraObject_6; }
	inline void set_m_cameraObject_6(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_cameraObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cameraObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_whose_7() { return static_cast<int32_t>(offsetof(PlayerCamera_t83DD695ACD34F7AD23F225B2EF0645997C667BDC, ___m_whose_7)); }
	inline int32_t get_m_whose_7() const { return ___m_whose_7; }
	inline int32_t* get_address_of_m_whose_7() { return &___m_whose_7; }
	inline void set_m_whose_7(int32_t value)
	{
		___m_whose_7 = value;
	}
};


// PlayerCanvas
struct  PlayerCanvas_tC2E7A5A4F3D20E29CCAF7934FDC91CE2F1C0B372  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.Dictionary`2<PieceClass,UnityEngine.UI.Text> PlayerCanvas::m_pieceCountTextDictionary
	Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B * ___m_pieceCountTextDictionary_4;

public:
	inline static int32_t get_offset_of_m_pieceCountTextDictionary_4() { return static_cast<int32_t>(offsetof(PlayerCanvas_tC2E7A5A4F3D20E29CCAF7934FDC91CE2F1C0B372, ___m_pieceCountTextDictionary_4)); }
	inline Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B * get_m_pieceCountTextDictionary_4() const { return ___m_pieceCountTextDictionary_4; }
	inline Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B ** get_address_of_m_pieceCountTextDictionary_4() { return &___m_pieceCountTextDictionary_4; }
	inline void set_m_pieceCountTextDictionary_4(Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B * value)
	{
		___m_pieceCountTextDictionary_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_pieceCountTextDictionary_4), (void*)value);
	}
};


// Selector
struct  Selector_t16758C50A5CA7934A346F28F0C81271BB3B5036A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Selector::m_gameManager
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_gameManager_4;
	// GameManager Selector::m_gameManagerObject
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___m_gameManagerObject_5;
	// UnityEngine.GameObject Selector::m_mainCamera
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_mainCamera_6;
	// UnityEngine.Camera Selector::m_cameraObject
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_cameraObject_7;

public:
	inline static int32_t get_offset_of_m_gameManager_4() { return static_cast<int32_t>(offsetof(Selector_t16758C50A5CA7934A346F28F0C81271BB3B5036A, ___m_gameManager_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_gameManager_4() const { return ___m_gameManager_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_gameManager_4() { return &___m_gameManager_4; }
	inline void set_m_gameManager_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_gameManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_gameManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_gameManagerObject_5() { return static_cast<int32_t>(offsetof(Selector_t16758C50A5CA7934A346F28F0C81271BB3B5036A, ___m_gameManagerObject_5)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_m_gameManagerObject_5() const { return ___m_gameManagerObject_5; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_m_gameManagerObject_5() { return &___m_gameManagerObject_5; }
	inline void set_m_gameManagerObject_5(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___m_gameManagerObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_gameManagerObject_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_mainCamera_6() { return static_cast<int32_t>(offsetof(Selector_t16758C50A5CA7934A346F28F0C81271BB3B5036A, ___m_mainCamera_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_mainCamera_6() const { return ___m_mainCamera_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_mainCamera_6() { return &___m_mainCamera_6; }
	inline void set_m_mainCamera_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_mainCamera_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_mainCamera_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_cameraObject_7() { return static_cast<int32_t>(offsetof(Selector_t16758C50A5CA7934A346F28F0C81271BB3B5036A, ___m_cameraObject_7)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_cameraObject_7() const { return ___m_cameraObject_7; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_cameraObject_7() { return &___m_cameraObject_7; }
	inline void set_m_cameraObject_7(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_cameraObject_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cameraObject_7), (void*)value);
	}
};


// Squere
struct  Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Who Squere::<m_whose>k__BackingField
	int32_t ___U3Cm_whoseU3Ek__BackingField_4;
	// Coordinate Squere::<m_position>k__BackingField
	Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * ___U3Cm_positionU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3Cm_whoseU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783, ___U3Cm_whoseU3Ek__BackingField_4)); }
	inline int32_t get_U3Cm_whoseU3Ek__BackingField_4() const { return ___U3Cm_whoseU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3Cm_whoseU3Ek__BackingField_4() { return &___U3Cm_whoseU3Ek__BackingField_4; }
	inline void set_U3Cm_whoseU3Ek__BackingField_4(int32_t value)
	{
		___U3Cm_whoseU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3Cm_positionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783, ___U3Cm_positionU3Ek__BackingField_5)); }
	inline Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * get_U3Cm_positionU3Ek__BackingField_5() const { return ___U3Cm_positionU3Ek__BackingField_5; }
	inline Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 ** get_address_of_U3Cm_positionU3Ek__BackingField_5() { return &___U3Cm_positionU3Ek__BackingField_5; }
	inline void set_U3Cm_positionU3Ek__BackingField_5(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * value)
	{
		___U3Cm_positionU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Cm_positionU3Ek__BackingField_5), (void*)value);
	}
};


// UnityChan.SpringBone
struct  SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform UnityChan.SpringBone::child
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___child_4;
	// UnityEngine.Vector3 UnityChan.SpringBone::boneAxis
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___boneAxis_5;
	// System.Single UnityChan.SpringBone::radius
	float ___radius_6;
	// System.Boolean UnityChan.SpringBone::isUseEachBoneForceSettings
	bool ___isUseEachBoneForceSettings_7;
	// System.Single UnityChan.SpringBone::stiffnessForce
	float ___stiffnessForce_8;
	// System.Single UnityChan.SpringBone::dragForce
	float ___dragForce_9;
	// UnityEngine.Vector3 UnityChan.SpringBone::springForce
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___springForce_10;
	// UnityChan.SpringCollider[] UnityChan.SpringBone::colliders
	SpringColliderU5BU5D_t5E59DD4998D2CF376312F0534FE06BBD28E39345* ___colliders_11;
	// System.Boolean UnityChan.SpringBone::debug
	bool ___debug_12;
	// System.Single UnityChan.SpringBone::threshold
	float ___threshold_13;
	// System.Single UnityChan.SpringBone::springLength
	float ___springLength_14;
	// UnityEngine.Quaternion UnityChan.SpringBone::localRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___localRotation_15;
	// UnityEngine.Transform UnityChan.SpringBone::trs
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___trs_16;
	// UnityEngine.Vector3 UnityChan.SpringBone::currTipPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currTipPos_17;
	// UnityEngine.Vector3 UnityChan.SpringBone::prevTipPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___prevTipPos_18;
	// UnityEngine.Transform UnityChan.SpringBone::org
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___org_19;
	// UnityChan.SpringManager UnityChan.SpringBone::managerRef
	SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * ___managerRef_20;

public:
	inline static int32_t get_offset_of_child_4() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___child_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_child_4() const { return ___child_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_child_4() { return &___child_4; }
	inline void set_child_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___child_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___child_4), (void*)value);
	}

	inline static int32_t get_offset_of_boneAxis_5() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___boneAxis_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_boneAxis_5() const { return ___boneAxis_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_boneAxis_5() { return &___boneAxis_5; }
	inline void set_boneAxis_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___boneAxis_5 = value;
	}

	inline static int32_t get_offset_of_radius_6() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___radius_6)); }
	inline float get_radius_6() const { return ___radius_6; }
	inline float* get_address_of_radius_6() { return &___radius_6; }
	inline void set_radius_6(float value)
	{
		___radius_6 = value;
	}

	inline static int32_t get_offset_of_isUseEachBoneForceSettings_7() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___isUseEachBoneForceSettings_7)); }
	inline bool get_isUseEachBoneForceSettings_7() const { return ___isUseEachBoneForceSettings_7; }
	inline bool* get_address_of_isUseEachBoneForceSettings_7() { return &___isUseEachBoneForceSettings_7; }
	inline void set_isUseEachBoneForceSettings_7(bool value)
	{
		___isUseEachBoneForceSettings_7 = value;
	}

	inline static int32_t get_offset_of_stiffnessForce_8() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___stiffnessForce_8)); }
	inline float get_stiffnessForce_8() const { return ___stiffnessForce_8; }
	inline float* get_address_of_stiffnessForce_8() { return &___stiffnessForce_8; }
	inline void set_stiffnessForce_8(float value)
	{
		___stiffnessForce_8 = value;
	}

	inline static int32_t get_offset_of_dragForce_9() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___dragForce_9)); }
	inline float get_dragForce_9() const { return ___dragForce_9; }
	inline float* get_address_of_dragForce_9() { return &___dragForce_9; }
	inline void set_dragForce_9(float value)
	{
		___dragForce_9 = value;
	}

	inline static int32_t get_offset_of_springForce_10() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___springForce_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_springForce_10() const { return ___springForce_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_springForce_10() { return &___springForce_10; }
	inline void set_springForce_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___springForce_10 = value;
	}

	inline static int32_t get_offset_of_colliders_11() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___colliders_11)); }
	inline SpringColliderU5BU5D_t5E59DD4998D2CF376312F0534FE06BBD28E39345* get_colliders_11() const { return ___colliders_11; }
	inline SpringColliderU5BU5D_t5E59DD4998D2CF376312F0534FE06BBD28E39345** get_address_of_colliders_11() { return &___colliders_11; }
	inline void set_colliders_11(SpringColliderU5BU5D_t5E59DD4998D2CF376312F0534FE06BBD28E39345* value)
	{
		___colliders_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colliders_11), (void*)value);
	}

	inline static int32_t get_offset_of_debug_12() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___debug_12)); }
	inline bool get_debug_12() const { return ___debug_12; }
	inline bool* get_address_of_debug_12() { return &___debug_12; }
	inline void set_debug_12(bool value)
	{
		___debug_12 = value;
	}

	inline static int32_t get_offset_of_threshold_13() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___threshold_13)); }
	inline float get_threshold_13() const { return ___threshold_13; }
	inline float* get_address_of_threshold_13() { return &___threshold_13; }
	inline void set_threshold_13(float value)
	{
		___threshold_13 = value;
	}

	inline static int32_t get_offset_of_springLength_14() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___springLength_14)); }
	inline float get_springLength_14() const { return ___springLength_14; }
	inline float* get_address_of_springLength_14() { return &___springLength_14; }
	inline void set_springLength_14(float value)
	{
		___springLength_14 = value;
	}

	inline static int32_t get_offset_of_localRotation_15() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___localRotation_15)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_localRotation_15() const { return ___localRotation_15; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_localRotation_15() { return &___localRotation_15; }
	inline void set_localRotation_15(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___localRotation_15 = value;
	}

	inline static int32_t get_offset_of_trs_16() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___trs_16)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_trs_16() const { return ___trs_16; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_trs_16() { return &___trs_16; }
	inline void set_trs_16(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___trs_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trs_16), (void*)value);
	}

	inline static int32_t get_offset_of_currTipPos_17() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___currTipPos_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currTipPos_17() const { return ___currTipPos_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currTipPos_17() { return &___currTipPos_17; }
	inline void set_currTipPos_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currTipPos_17 = value;
	}

	inline static int32_t get_offset_of_prevTipPos_18() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___prevTipPos_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_prevTipPos_18() const { return ___prevTipPos_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_prevTipPos_18() { return &___prevTipPos_18; }
	inline void set_prevTipPos_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___prevTipPos_18 = value;
	}

	inline static int32_t get_offset_of_org_19() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___org_19)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_org_19() const { return ___org_19; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_org_19() { return &___org_19; }
	inline void set_org_19(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___org_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___org_19), (void*)value);
	}

	inline static int32_t get_offset_of_managerRef_20() { return static_cast<int32_t>(offsetof(SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63, ___managerRef_20)); }
	inline SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * get_managerRef_20() const { return ___managerRef_20; }
	inline SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 ** get_address_of_managerRef_20() { return &___managerRef_20; }
	inline void set_managerRef_20(SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * value)
	{
		___managerRef_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___managerRef_20), (void*)value);
	}
};


// UnityChan.SpringCollider
struct  SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single UnityChan.SpringCollider::radius
	float ___radius_4;

public:
	inline static int32_t get_offset_of_radius_4() { return static_cast<int32_t>(offsetof(SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF, ___radius_4)); }
	inline float get_radius_4() const { return ___radius_4; }
	inline float* get_address_of_radius_4() { return &___radius_4; }
	inline void set_radius_4(float value)
	{
		___radius_4 = value;
	}
};


// UnityChan.SpringManager
struct  SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single UnityChan.SpringManager::dynamicRatio
	float ___dynamicRatio_4;
	// System.Single UnityChan.SpringManager::stiffnessForce
	float ___stiffnessForce_5;
	// UnityEngine.AnimationCurve UnityChan.SpringManager::stiffnessCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___stiffnessCurve_6;
	// System.Single UnityChan.SpringManager::dragForce
	float ___dragForce_7;
	// UnityEngine.AnimationCurve UnityChan.SpringManager::dragCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___dragCurve_8;
	// UnityChan.SpringBone[] UnityChan.SpringManager::springBones
	SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65* ___springBones_9;

public:
	inline static int32_t get_offset_of_dynamicRatio_4() { return static_cast<int32_t>(offsetof(SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0, ___dynamicRatio_4)); }
	inline float get_dynamicRatio_4() const { return ___dynamicRatio_4; }
	inline float* get_address_of_dynamicRatio_4() { return &___dynamicRatio_4; }
	inline void set_dynamicRatio_4(float value)
	{
		___dynamicRatio_4 = value;
	}

	inline static int32_t get_offset_of_stiffnessForce_5() { return static_cast<int32_t>(offsetof(SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0, ___stiffnessForce_5)); }
	inline float get_stiffnessForce_5() const { return ___stiffnessForce_5; }
	inline float* get_address_of_stiffnessForce_5() { return &___stiffnessForce_5; }
	inline void set_stiffnessForce_5(float value)
	{
		___stiffnessForce_5 = value;
	}

	inline static int32_t get_offset_of_stiffnessCurve_6() { return static_cast<int32_t>(offsetof(SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0, ___stiffnessCurve_6)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_stiffnessCurve_6() const { return ___stiffnessCurve_6; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_stiffnessCurve_6() { return &___stiffnessCurve_6; }
	inline void set_stiffnessCurve_6(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___stiffnessCurve_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stiffnessCurve_6), (void*)value);
	}

	inline static int32_t get_offset_of_dragForce_7() { return static_cast<int32_t>(offsetof(SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0, ___dragForce_7)); }
	inline float get_dragForce_7() const { return ___dragForce_7; }
	inline float* get_address_of_dragForce_7() { return &___dragForce_7; }
	inline void set_dragForce_7(float value)
	{
		___dragForce_7 = value;
	}

	inline static int32_t get_offset_of_dragCurve_8() { return static_cast<int32_t>(offsetof(SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0, ___dragCurve_8)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_dragCurve_8() const { return ___dragCurve_8; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_dragCurve_8() { return &___dragCurve_8; }
	inline void set_dragCurve_8(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___dragCurve_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dragCurve_8), (void*)value);
	}

	inline static int32_t get_offset_of_springBones_9() { return static_cast<int32_t>(offsetof(SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0, ___springBones_9)); }
	inline SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65* get_springBones_9() const { return ___springBones_9; }
	inline SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65** get_address_of_springBones_9() { return &___springBones_9; }
	inline void set_springBones_9(SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65* value)
	{
		___springBones_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___springBones_9), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// YesButton
struct  YesButton_t2C75450B96198218C94ED9F7E0FCF7F97F6BA4AE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameManager YesButton::m_gameManager
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___m_gameManager_4;
	// GameManager YesButton::m_gameManagerObject
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___m_gameManagerObject_5;

public:
	inline static int32_t get_offset_of_m_gameManager_4() { return static_cast<int32_t>(offsetof(YesButton_t2C75450B96198218C94ED9F7E0FCF7F97F6BA4AE, ___m_gameManager_4)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_m_gameManager_4() const { return ___m_gameManager_4; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_m_gameManager_4() { return &___m_gameManager_4; }
	inline void set_m_gameManager_4(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___m_gameManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_gameManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_gameManagerObject_5() { return static_cast<int32_t>(offsetof(YesButton_t2C75450B96198218C94ED9F7E0FCF7F97F6BA4AE, ___m_gameManagerObject_5)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_m_gameManagerObject_5() const { return ___m_gameManagerObject_5; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_m_gameManagerObject_5() { return &___m_gameManagerObject_5; }
	inline void set_m_gameManagerObject_5(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___m_gameManagerObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_gameManagerObject_5), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[0...,0...]
struct GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Who[0...,0...]
struct WhoU5BU2CU5D_t7F578194614DC845DE901EDFEE32155C47627561  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
	inline int32_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// PieceClass[0...,0...]
struct PieceClassU5BU2CU5D_tB7D041CD472DF4093E33D030E1E6B38FD0534B83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
	inline int32_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  m_Items[1];

public:
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  value)
	{
		m_Items[index] = value;
	}
};
// UnityChan.SpringCollider[]
struct SpringColliderU5BU5D_t5E59DD4998D2CF376312F0534FE06BBD28E39345  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF * m_Items[1];

public:
	inline SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityChan.SpringBone[]
struct SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * m_Items[1];

public:
	inline SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF30DA4177FE4CB9931A6DF746E1106CA8148526A_gshared (Dictionary_2_tCB10D3F0D8D28A1A6B54347C56E10FE9D9612C94 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mF1F6EFCF2E4D9C7CF91DFEB105AC6934CBC74B52_gshared (Dictionary_2_tCB10D3F0D8D28A1A6B54347C56E10FE9D9612C94 * __this, int32_t ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_mA931B0C8790EF07D8F8AC3F328DE919A753EF46E_gshared (Dictionary_2_tCB10D3F0D8D28A1A6B54347C56E10FE9D9612C94 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAD69B022F1D23A2262CA05C4D32C31DA1CF7FE92_gshared (Dictionary_2_tCB10D3F0D8D28A1A6B54347C56E10FE9D9612C94 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mC449D95AD9E22FF5C5DAF2268E883678E14052D9_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m938188F524CF90F3CD36418ACC53E194A6B0CB5B_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m169DFA431C9A313350A4A964D24135EFEE0BDC60_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF42565DC9AD476065ED33869AD6DC710F775F641_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void GameManager::placeInitialSqueres()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_placeInitialSqueres_m033B0536B1C9C02EFF261610B6115A454377E0E6 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void GameManager::placeInitialPieces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_placeInitialPieces_mC7B9827CF9A00164CC90D6A6B8440C5EC911A2BA (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void GameManager::initSelectedInfomation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_initSelectedInfomation_mF7191A6D0E0F9F014FCB1C3D67DF07692C4D8DAA (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Player>()
inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void GameManager::set_m_selectMode(GameManager/SelectMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_m_selectMode_mDCEA32E7192A4CB50083ECD3AB1C2D279D102EA8_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Piece>()
inline Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * GameObject_GetComponent_TisPiece_tBB694F50405042E44F45E94D75887A6B91292BF1_m7CC851C28491D4E61E473F9B5A4F4BD34173A629 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Collections.Generic.List`1<Coordinate> GameManager::createDestinationList(Piece)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 * GameManager_createDestinationList_m26B1E06BDDE078961FE797895F7F2CFBB4863F0D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * ___piece0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Coordinate>::GetEnumerator()
inline Enumerator_t934EC0969E0269FD5C778AF9868535FBAEE2EA97  List_1_GetEnumerator_m1E46DB886EB7C798007092E9CBA5D6CA997A62E2 (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t934EC0969E0269FD5C778AF9868535FBAEE2EA97  (*) (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Coordinate>::get_Current()
inline Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * Enumerator_get_Current_m454154450C2169F3A6D43CB60A0D245F40A79DA9_inline (Enumerator_t934EC0969E0269FD5C778AF9868535FBAEE2EA97 * __this, const RuntimeMethod* method)
{
	return ((  Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * (*) (Enumerator_t934EC0969E0269FD5C778AF9868535FBAEE2EA97 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshCollider>()
inline MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * GameObject_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m18DE2DD7D33699F69E34C22CCF658FCAB1ECDBDC (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1 (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Coordinate>::MoveNext()
inline bool Enumerator_MoveNext_mCAA2BB6B72271F72AF897863C94F8D421EC501DA (Enumerator_t934EC0969E0269FD5C778AF9868535FBAEE2EA97 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t934EC0969E0269FD5C778AF9868535FBAEE2EA97 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Coordinate>::Dispose()
inline void Enumerator_Dispose_m2D9502CBD9F1D4CE947A8EB714E38437CBD0C0AC (Enumerator_t934EC0969E0269FD5C778AF9868535FBAEE2EA97 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t934EC0969E0269FD5C778AF9868535FBAEE2EA97 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Boolean Player::pullPiece(PieceClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Player_pullPiece_m29BB187BBA7F3B6001877BF6F979A3629F845CF7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, int32_t ___pieceClass0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Squere>()
inline Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * GameObject_GetComponent_TisSquere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783_mBE4A02FAD24CDD2738103EE7C2414C2542963A2F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean GameManager::validatePromoiton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_validatePromoiton_m3F2E249685807B8BE15EB44CCCA4D4375DFADE15 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void GameManager::onSelectInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_onSelectInfo_m2AD12084F987BE2329CCE501B72556350EE8AE1C (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void Coordinate::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Void Squere::initialize(Who,Coordinate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Squere_initialize_mC2FD66974EEA5EA0C3C3DE6FD14E3BF395A03000 (Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * __this, int32_t ___whose0, Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * ___position1, const RuntimeMethod* method);
// System.Void Piece::initialize(PieceClass,Who,Coordinate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Piece_initialize_m5AD3F3E2ABB4BC32039F3FC32C4A90D656F6B55C (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, int32_t ___pieceClass0, int32_t ___whose1, Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * ___position2, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Coordinate>::.ctor()
inline void List_1__ctor_mC2D96D9EB4848E5D874D681C2EB316D5CBF496DF (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// PieceClass Piece::get_m_pieceClass()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Piece_get_m_pieceClass_m5BF8DBEE3EFEF7BA559AAFD082A714F7AC412401_inline (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, const RuntimeMethod* method);
// System.Boolean GameManager::addDestination(Coordinate,Piece,System.Collections.Generic.List`1<Coordinate>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * ___moveCoordinate0, Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * ___piece1, List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 ** ___destinationList2, const RuntimeMethod* method);
// Who Piece::get_m_whose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, const RuntimeMethod* method);
// System.Boolean Piece::get_m_isPromoted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Piece_get_m_isPromoted_mA2F92D34E9392A4EA876DC96184287F394A98A86_inline (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, const RuntimeMethod* method);
// Coordinate Piece::get_m_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Coordinate>::Add(!0)
inline void List_1_Add_m72BAA509310E537FAD6882AE599524DED6465BE7 (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 * __this, Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 *, Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// Who Squere::get_m_whose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Squere_get_m_whose_m81BEEB026071D084A52B5B71024F96043A575BDA_inline (Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * __this, const RuntimeMethod* method);
// System.Boolean Piece::get_m_isAblePromote()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Piece_get_m_isAblePromote_m75710BD1AD3FEF5058780665C1A405ABB6F55FD5_inline (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, const RuntimeMethod* method);
// Coordinate Squere::get_m_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * Squere_get_m_position_m7A5A3B4194124B3C556EAED11157E7049D601AD9_inline (Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean Player::pushPiece(PieceClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Player_pushPiece_m396373614860D093E68DC0876B9F8EA7DBB8E734 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, int32_t ___pieceClass0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Piece::move(Coordinate,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Piece_move_m15826305154025AC6590FF7B0B35DBA8633B67C8 (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * ___position0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetTransformPosition1, const RuntimeMethod* method);
// System.Void Piece::promote()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Piece_promote_mDA949A1330819BA26866E731CBFABFA2B7E53ADE (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<GameManager>()
inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * Component_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m42A3843763DD21708AEDC1B157749ACEE65AD650 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void GameManager::onClickNoButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_onClickNoButton_m8EB7BAEBDB0BDFACB291C2BCC39440D703BEB571 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<PieceAnimetor>()
inline PieceAnimetor_t4CB4E767694190A636F60984557795857254B035 * GameObject_GetComponent_TisPieceAnimetor_t4CB4E767694190A636F60984557795857254B035_mC900D1987A3B953193B68D9F766D4E03125EEC41 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PieceAnimetor_t4CB4E767694190A636F60984557795857254B035 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_m37169F3E8ADDA24A5A221AD7397835B437B71439 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Void PieceAnimetor::setIsWalking(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceAnimetor_setIsWalking_m1F81DC7E8E915737D221E4FBF07E2E64200AACBE (PieceAnimetor_t4CB4E767694190A636F60984557795857254B035 * __this, bool ___isWalking0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void Piece::set_m_pieceClass(PieceClass)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Piece_set_m_pieceClass_m3D8501155057B065F79D41B515DF256E2B59A3AF_inline (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Piece::set_m_whose(Who)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Piece_set_m_whose_m49DD56D6DA85A548D5606132647F65E524D69049_inline (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Piece::set_m_isPromoted(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Piece_set_m_isPromoted_mF41FE204F6A76335D5F7761C8246A1041EDD6462_inline (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Piece::set_m_position(Coordinate)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Piece_set_m_position_m786E96F4FEA5EAB3062D692D9DA5B8041A7A2F68_inline (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * ___value0, const RuntimeMethod* method);
// System.Void Piece::set_m_isAblePromote(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Piece_set_m_isAblePromote_mFED2184CD3BFCC00E4291B906C89BEC782265463_inline (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, String_t* ___n0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void GameManager::onSelectPieceButton(PieceClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_onSelectPieceButton_m0CADD1B9CE54EC0EB35744FCA88C40DFE4312B3F (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___pieceClass0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<PieceClass,System.Int32>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m24BA169794FFDDE2190AF5ACFFDB083258804E2F (Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 *, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_mF30DA4177FE4CB9931A6DF746E1106CA8148526A_gshared)(__this, ___key0, ___value1, method);
}
// !!0 UnityEngine.GameObject::GetComponent<PlayerCanvas>()
inline PlayerCanvas_tC2E7A5A4F3D20E29CCAF7934FDC91CE2F1C0B372 * GameObject_GetComponent_TisPlayerCanvas_tC2E7A5A4F3D20E29CCAF7934FDC91CE2F1C0B372_m20AB62B2221D13DD0B9BDF4D1FF9E9603B4EA4DD (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PlayerCanvas_tC2E7A5A4F3D20E29CCAF7934FDC91CE2F1C0B372 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<PieceClass,System.Int32>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m281B468632924FC3801DB0F901F01A2D827E9CA0 (Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mF1F6EFCF2E4D9C7CF91DFEB105AC6934CBC74B52_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<PieceClass,System.Int32>::get_Item(!0)
inline int32_t Dictionary_2_get_Item_mF2DACCB25CA9D593F4AAD2C414473D7B6C4F990B (Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mA931B0C8790EF07D8F8AC3F328DE919A753EF46E_gshared)(__this, ___key0, method);
}
// System.Boolean PlayerCanvas::showCount(PieceClass,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerCanvas_showCount_mCBABF6261E0ADA640886DE26B301F7D95D09C37A (PlayerCanvas_tC2E7A5A4F3D20E29CCAF7934FDC91CE2F1C0B372 * __this, int32_t ___pieceClass0, int32_t ___count1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<PieceClass,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mD99537C9133A8149D209D64DD537BFB2FBDAEA14 (Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 *, const RuntimeMethod*))Dictionary_2__ctor_mAD69B022F1D23A2262CA05C4D32C31DA1CF7FE92_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<GameManager>()
inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// System.Void PlayerCamera::onLeftClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCamera_onLeftClick_m80D60B06BFCF8E37625E7D75F80E1F0B3C71A0F5 (PlayerCamera_t83DD695ACD34F7AD23F225B2EF0645997C667BDC * __this, const RuntimeMethod* method);
// System.Void PlayerCamera::onRightClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCamera_onRightClick_mAC2C0DA9F442BDC81E75EE24A71A7E586EAB242E (PlayerCamera_t83DD695ACD34F7AD23F225B2EF0645997C667BDC * __this, const RuntimeMethod* method);
// GameManager/SelectMode GameManager::get_m_selectMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_m_selectMode_m98C086EB1F109FED5548ECC447BE49EF283AC4A4_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject PlayerCamera::getClickedObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PlayerCamera_getClickedObject_m8BC95DBBBAB6F579D2E125F3AE0366058BA46B5D (PlayerCamera_t83DD695ACD34F7AD23F225B2EF0645997C667BDC * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.Void GameManager::onSelectPiece(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_onSelectPiece_m554E70CF27FD8E551F4F5B55B1515292B287C4E1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___selectedPiece0, const RuntimeMethod* method);
// System.Void GameManager::onSelectSquere(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_onSelectSquere_m291D6657E38BDA3C073314D198FC8BA69424424A (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___selectedSquere0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method);
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* Physics_RaycastAll_m529EE59D6D03E4CFAECE4016C8CC4181BEC2D26D (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<PieceClass,UnityEngine.UI.Text>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m1118EEBBB44893F158AB73C94462BA5C45621B62 (Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B * __this, int32_t ___key0, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B *, int32_t, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 *, const RuntimeMethod*))Dictionary_2_set_Item_mC449D95AD9E22FF5C5DAF2268E883678E14052D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<PieceClass,UnityEngine.UI.Text>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m27051D0A570DB23B4D591D050B62A4C3A5C15CB2 (Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m938188F524CF90F3CD36418ACC53E194A6B0CB5B_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<PieceClass,UnityEngine.UI.Text>::get_Item(!0)
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Dictionary_2_get_Item_mFAAD844080650BFC36082883DB40B715953A9B79 (Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m169DFA431C9A313350A4A964D24135EFEE0BDC60_gshared)(__this, ___key0, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<PieceClass,UnityEngine.UI.Text>::.ctor()
inline void Dictionary_2__ctor_m9E01DBB9EA5540AD877F381E868FAA98AFD054D4 (Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B *, const RuntimeMethod*))Dictionary_2__ctor_mF42565DC9AD476065ED33869AD6DC710F775F641_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Selector::onLeftClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selector_onLeftClick_m46F8979333445989A59090B146141B90E4B549B8 (Selector_t16758C50A5CA7934A346F28F0C81271BB3B5036A * __this, const RuntimeMethod* method);
// System.Void Selector::onRightClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selector_onRightClick_mC8EAA1033611D61D209E7CE68016296A906018B8 (Selector_t16758C50A5CA7934A346F28F0C81271BB3B5036A * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Selector::getClickedObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Selector_getClickedObject_m02F633DB1E29994E599938237B317BA10FDFCE2D (Selector_t16758C50A5CA7934A346F28F0C81271BB3B5036A * __this, String_t* ___tag0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityChan.SpringManager UnityChan.SpringBone::GetParentSpringManager(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * SpringBone_GetParentSpringManager_mC5AE4B906C481E4FAE3842D66DDC7D2A09EF28B3 (SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityChan.SpringManager>()
inline SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * Component_GetComponent_TisSpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0_mFD2B102A7A1F6F5A2BF178712A48BB19F6577566 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___fromDirection0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___toDirection1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1 (const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireSphere_m96C425145BBD85CF0192F9DDB3D1A8C69429B78B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, float ___radius1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// System.Void UnityChan.SpringManager::UpdateParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringManager_UpdateParameters_mC7B00164F9AE3B3EBB0641FB12E3DA8B1AF5D02A (SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * __this, const RuntimeMethod* method);
// System.Void UnityChan.SpringBone::UpdateSpring()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringBone_UpdateSpring_mCBB26D530A0FB706D426785811662B19C48527D0 (SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * __this, const RuntimeMethod* method);
// System.Void UnityChan.SpringManager::UpdateParameter(System.String,System.Single,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringManager_UpdateParameter_mC7FC23D3FC30CA860881A18E911D04457CB3A523 (SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * __this, String_t* ___fieldName0, float ___baseValue1, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve2, const RuntimeMethod* method);
// System.Void Squere::set_m_whose(Who)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Squere_set_m_whose_m27886BFB3C49D2126736A15C1FE6B18BDADC7984_inline (Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Squere::set_m_position(Coordinate)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Squere_set_m_position_mC5B5AD5CF61A6670FA4AC7F49A4A5EE126F806F9_inline (Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * __this, Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * ___value0, const RuntimeMethod* method);
// System.Void GameManager::onClickYesButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_onClickYesButton_m5E35F38C3955C04102F91223B986908CA6F3E925 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
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
// System.Void Coordinate::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		// public Coordinate(int x, int y)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.x = x;
		int32_t L_0 = ___x0;
		__this->set_x_0(L_0);
		// this.y = y;
		int32_t L_1 = ___y1;
		__this->set_y_1(L_1);
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
// GameManager_SelectMode GameManager::get_m_selectMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManager_get_m_selectMode_m98C086EB1F109FED5548ECC447BE49EF283AC4A4 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// public SelectMode m_selectMode { get; private set; }
		int32_t L_0 = __this->get_U3Cm_selectModeU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void GameManager::set_m_selectMode(GameManager_SelectMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_m_selectMode_mDCEA32E7192A4CB50083ECD3AB1C2D279D102EA8 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public SelectMode m_selectMode { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3Cm_selectModeU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m22F42B2A82708B10F652CAD8F2E0A4767110FF30 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, GameManager_Awake_m22F42B2A82708B10F652CAD8F2E0A4767110FF30_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// placeInitialSqueres();
		GameManager_placeInitialSqueres_m033B0536B1C9C02EFF261610B6115A454377E0E6(__this, /*hidden argument*/NULL);
		// placeInitialPieces();
		GameManager_placeInitialPieces_mC7B9827CF9A00164CC90D6A6B8440C5EC911A2BA(__this, /*hidden argument*/NULL);
		// initSelectedInfomation();
		GameManager_initSelectedInfomation_mF7191A6D0E0F9F014FCB1C3D67DF07692C4D8DAA(__this, /*hidden argument*/NULL);
		// m_playerOne = m_playerOneObject.GetComponent<Player>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_playerOneObject_24();
		NullCheck(L_0);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_1;
		L_1 = GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906(L_0, /*hidden argument*/GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		__this->set_m_playerOne_26(L_1);
		// m_playerTwo = m_playerTwoObject.GetComponent<Player>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_m_playerTwoObject_25();
		NullCheck(L_2);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_3;
		L_3 = GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906(L_2, /*hidden argument*/GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		__this->set_m_playerTwo_27(L_3);
		// }
		return;
	}
}
// System.Void GameManager::onSelectPiece(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_onSelectPiece_m554E70CF27FD8E551F4F5B55B1515292B287C4E1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___selectedPiece0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, GameManager_onSelectPiece_m554E70CF27FD8E551F4F5B55B1515292B287C4E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t934EC0969E0269FD5C778AF9868535FBAEE2EA97  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// m_selectMode = SelectMode.ModeSquere;
		GameManager_set_m_selectMode_mDCEA32E7192A4CB50083ECD3AB1C2D279D102EA8_inline(__this, 1, /*hidden argument*/NULL);
		// m_isSelectedPieceButton = false;
		__this->set_m_isSelectedPieceButton_22((bool)0);
		// m_selectedPiece = selectedPiece.GetComponent<Piece>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___selectedPiece0;
		NullCheck(L_0);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_1;
		L_1 = GameObject_GetComponent_TisPiece_tBB694F50405042E44F45E94D75887A6B91292BF1_m7CC851C28491D4E61E473F9B5A4F4BD34173A629(L_0, /*hidden argument*/GameObject_GetComponent_TisPiece_tBB694F50405042E44F45E94D75887A6B91292BF1_m7CC851C28491D4E61E473F9B5A4F4BD34173A629_RuntimeMethod_var);
		__this->set_m_selectedPiece_18(L_1);
		// List<Coordinate> destinationList = createDestinationList(m_selectedPiece);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_2 = __this->get_m_selectedPiece_18();
		List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 * L_3;
		L_3 = GameManager_createDestinationList_m26B1E06BDDE078961FE797895F7F2CFBB4863F0D(__this, L_2, /*hidden argument*/NULL);
		// foreach (Coordinate destination in destinationList)
		NullCheck(L_3);
		Enumerator_t934EC0969E0269FD5C778AF9868535FBAEE2EA97  L_4;
		L_4 = List_1_GetEnumerator_m1E46DB886EB7C798007092E9CBA5D6CA997A62E2(L_3, /*hidden argument*/List_1_GetEnumerator_m1E46DB886EB7C798007092E9CBA5D6CA997A62E2_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_002c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0058;
		}

IL_002e:
		{
			// foreach (Coordinate destination in destinationList)
			Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_5;
			L_5 = Enumerator_get_Current_m454154450C2169F3A6D43CB60A0D245F40A79DA9_inline((Enumerator_t934EC0969E0269FD5C778AF9868535FBAEE2EA97 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m454154450C2169F3A6D43CB60A0D245F40A79DA9_RuntimeMethod_var);
			V_1 = L_5;
			// m_squereArray[destination.x, destination.y].GetComponent<MeshCollider>().enabled = true;
			GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_6 = __this->get_m_squereArray_6();
			Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_7 = V_1;
			NullCheck(L_7);
			int32_t L_8 = L_7->get_x_0();
			Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_9 = V_1;
			NullCheck(L_9);
			int32_t L_10 = L_9->get_y_1();
			NullCheck(L_6);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
			L_11 = (L_6)->GetAt(L_8, L_10);
			NullCheck(L_11);
			MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_12;
			L_12 = GameObject_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m18DE2DD7D33699F69E34C22CCF658FCAB1ECDBDC(L_11, /*hidden argument*/GameObject_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m18DE2DD7D33699F69E34C22CCF658FCAB1ECDBDC_RuntimeMethod_var);
			NullCheck(L_12);
			Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_12, (bool)1, /*hidden argument*/NULL);
		}

IL_0058:
		{
			// foreach (Coordinate destination in destinationList)
			bool L_13;
			L_13 = Enumerator_MoveNext_mCAA2BB6B72271F72AF897863C94F8D421EC501DA((Enumerator_t934EC0969E0269FD5C778AF9868535FBAEE2EA97 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mCAA2BB6B72271F72AF897863C94F8D421EC501DA_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_002e;
			}
		}

IL_0061:
		{
			IL2CPP_LEAVE(0x71, FINALLY_0063);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2D9502CBD9F1D4CE947A8EB714E38437CBD0C0AC((Enumerator_t934EC0969E0269FD5C778AF9868535FBAEE2EA97 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m2D9502CBD9F1D4CE947A8EB714E38437CBD0C0AC_RuntimeMethod_var);
		IL2CPP_END_FINALLY(99)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_JUMP_TBL(0x71, IL_0071)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void GameManager::onSelectPieceButton(PieceClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_onSelectPieceButton_m0CADD1B9CE54EC0EB35744FCA88C40DFE4312B3F (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___pieceClass0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, GameManager_onSelectPieceButton_m0CADD1B9CE54EC0EB35744FCA88C40DFE4312B3F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * G_B3_0 = NULL;
	{
		// Player turnPlayer = (m_whoseTurn == Who.One ? m_playerOne : m_playerTwo);
		int32_t L_0 = __this->get_m_whoseTurn_23();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_1 = __this->get_m_playerTwo_27();
		G_B3_0 = L_1;
		goto IL_0016;
	}

IL_0010:
	{
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_2 = __this->get_m_playerOne_26();
		G_B3_0 = L_2;
	}

IL_0016:
	{
		// if (!turnPlayer.pullPiece(pieceClass)) {
		int32_t L_3 = ___pieceClass0;
		NullCheck(G_B3_0);
		bool L_4;
		L_4 = Player_pullPiece_m29BB187BBA7F3B6001877BF6F979A3629F845CF7(G_B3_0, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_001f;
		}
	}
	{
		// return;
		return;
	}

IL_001f:
	{
		// m_selectMode = SelectMode.ModeSquere;
		GameManager_set_m_selectMode_mDCEA32E7192A4CB50083ECD3AB1C2D279D102EA8_inline(__this, 1, /*hidden argument*/NULL);
		// m_isSelectedPieceButton = true;
		__this->set_m_isSelectedPieceButton_22((bool)1);
		// m_selectedPieceButtonClass = pieceClass;
		int32_t L_5 = ___pieceClass0;
		__this->set_m_selectedPieceButtonClass_21(L_5);
		// for (int i = 0; i < 9; i++) {
		V_0 = 0;
		goto IL_0075;
	}

IL_0038:
	{
		// for (int j = 0; j < 9; j++) {
		V_1 = 0;
		goto IL_006c;
	}

IL_003c:
	{
		// if (!m_pieceArray[j, i]) {
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_6 = __this->get_m_pieceArray_15();
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = (L_6)->GetAt(L_7, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0068;
		}
	}
	{
		// m_squereArray[j, i].GetComponent<MeshCollider>().enabled = true;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_11 = __this->get_m_squereArray_6();
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		NullCheck(L_11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = (L_11)->GetAt(L_12, L_13);
		NullCheck(L_14);
		MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_15;
		L_15 = GameObject_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m18DE2DD7D33699F69E34C22CCF658FCAB1ECDBDC(L_14, /*hidden argument*/GameObject_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m18DE2DD7D33699F69E34C22CCF658FCAB1ECDBDC_RuntimeMethod_var);
		NullCheck(L_15);
		Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_15, (bool)1, /*hidden argument*/NULL);
	}

IL_0068:
	{
		// for (int j = 0; j < 9; j++) {
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_006c:
	{
		// for (int j = 0; j < 9; j++) {
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)9))))
		{
			goto IL_003c;
		}
	}
	{
		// for (int i = 0; i < 9; i++) {
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0075:
	{
		// for (int i = 0; i < 9; i++) {
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)9))))
		{
			goto IL_0038;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManager::onSelectSquere(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_onSelectSquere_m291D6657E38BDA3C073314D198FC8BA69424424A (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___selectedSquere0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, GameManager_onSelectSquere_m291D6657E38BDA3C073314D198FC8BA69424424A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_selectedSquere = selectedSquere.GetComponent<Squere>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___selectedSquere0;
		NullCheck(L_0);
		Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * L_1;
		L_1 = GameObject_GetComponent_TisSquere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783_mBE4A02FAD24CDD2738103EE7C2414C2542963A2F(L_0, /*hidden argument*/GameObject_GetComponent_TisSquere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783_mBE4A02FAD24CDD2738103EE7C2414C2542963A2F_RuntimeMethod_var);
		__this->set_m_selectedSquere_19(L_1);
		// if (validatePromoiton()) {
		bool L_2;
		L_2 = GameManager_validatePromoiton_m3F2E249685807B8BE15EB44CCCA4D4375DFADE15(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// m_selectMode = SelectMode.ModeIsPromote;
		GameManager_set_m_selectMode_mDCEA32E7192A4CB50083ECD3AB1C2D279D102EA8_inline(__this, 2, /*hidden argument*/NULL);
		// m_selectPromotionCanvas.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_m_selectPromotionCanvas_16();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_0028:
	{
		// m_selectedIsPromoted = false;
		__this->set_m_selectedIsPromoted_20((bool)0);
		// onSelectInfo();
		GameManager_onSelectInfo_m2AD12084F987BE2329CCE501B72556350EE8AE1C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::initSelectedInfomation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_initSelectedInfomation_mF7191A6D0E0F9F014FCB1C3D67DF07692C4D8DAA (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, GameManager_initSelectedInfomation_mF7191A6D0E0F9F014FCB1C3D67DF07692C4D8DAA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// m_selectMode = SelectMode.ModePiece;
		GameManager_set_m_selectMode_mDCEA32E7192A4CB50083ECD3AB1C2D279D102EA8_inline(__this, 0, /*hidden argument*/NULL);
		// m_selectedPiece = null;
		__this->set_m_selectedPiece_18((Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 *)NULL);
		// m_selectedSquere = null;
		__this->set_m_selectedSquere_19((Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 *)NULL);
		// m_selectedIsPromoted = false;
		__this->set_m_selectedIsPromoted_20((bool)0);
		// m_selectedPieceButtonClass = default;
		__this->set_m_selectedPieceButtonClass_21(0);
		// m_isSelectedPieceButton = false;
		__this->set_m_isSelectedPieceButton_22((bool)0);
		// for (int i = 0; i < 9; i++) {
		V_0 = 0;
		goto IL_0057;
	}

IL_002e:
	{
		// for (int j = 0; j < 9; j++) {
		V_1 = 0;
		goto IL_004e;
	}

IL_0032:
	{
		// m_squereArray[i, j].GetComponent<MeshCollider>().enabled = false;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_0 = __this->get_m_squereArray_6();
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = (L_0)->GetAt(L_1, L_2);
		NullCheck(L_3);
		MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_4;
		L_4 = GameObject_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m18DE2DD7D33699F69E34C22CCF658FCAB1ECDBDC(L_3, /*hidden argument*/GameObject_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_m18DE2DD7D33699F69E34C22CCF658FCAB1ECDBDC_RuntimeMethod_var);
		NullCheck(L_4);
		Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_4, (bool)0, /*hidden argument*/NULL);
		// for (int j = 0; j < 9; j++) {
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_004e:
	{
		// for (int j = 0; j < 9; j++) {
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)9))))
		{
			goto IL_0032;
		}
	}
	{
		// for (int i = 0; i < 9; i++) {
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0057:
	{
		// for (int i = 0; i < 9; i++) {
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)9))))
		{
			goto IL_002e;
		}
	}
	{
		// m_selectPromotionCanvas.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_m_selectPromotionCanvas_16();
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::onClickYesButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_onClickYesButton_m5E35F38C3955C04102F91223B986908CA6F3E925 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// m_selectedIsPromoted = true;
		__this->set_m_selectedIsPromoted_20((bool)1);
		// onSelectInfo();
		GameManager_onSelectInfo_m2AD12084F987BE2329CCE501B72556350EE8AE1C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::onClickNoButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_onClickNoButton_m8EB7BAEBDB0BDFACB291C2BCC39440D703BEB571 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// m_selectedIsPromoted = false;
		__this->set_m_selectedIsPromoted_20((bool)0);
		// onSelectInfo();
		GameManager_onSelectInfo_m2AD12084F987BE2329CCE501B72556350EE8AE1C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::placeInitialSqueres()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_placeInitialSqueres_m033B0536B1C9C02EFF261610B6115A454377E0E6 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, GameManager_placeInitialSqueres_m033B0536B1C9C02EFF261610B6115A454377E0E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WhoU5BU2CU5D_t7F578194614DC845DE901EDFEE32155C47627561* V_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_5 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B5_0 = NULL;
	{
		// Who[,] whoseArray = new Who[,] {
		//     { Who.Two, Who.Two, Who.Two, Who.Two, Who.Two, Who.Two, Who.Two, Who.Two, Who.Two },
		//     { Who.Two, Who.Two, Who.Two, Who.Two, Who.Two, Who.Two, Who.Two, Who.Two, Who.Two },
		//     { Who.Two, Who.Two, Who.Two, Who.Two, Who.Two, Who.Two, Who.Two, Who.Two, Who.Two },
		//     { Who.No, Who.No, Who.No, Who.No, Who.No, Who.No, Who.No, Who.No, Who.No },
		//     { Who.No, Who.No, Who.No, Who.No, Who.No, Who.No, Who.No, Who.No, Who.No },
		//     { Who.No, Who.No, Who.No, Who.No, Who.No, Who.No, Who.No, Who.No, Who.No },
		//     { Who.One, Who.One, Who.One, Who.One, Who.One, Who.One, Who.One, Who.One, Who.One },
		//     { Who.One, Who.One, Who.One, Who.One, Who.One, Who.One, Who.One, Who.One, Who.One },
		//     { Who.One, Who.One, Who.One, Who.One, Who.One, Who.One, Who.One, Who.One, Who.One }
		// };
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)((int32_t)9), (il2cpp_array_size_t)((int32_t)9) };
		WhoU5BU2CU5D_t7F578194614DC845DE901EDFEE32155C47627561* L_0 = (WhoU5BU2CU5D_t7F578194614DC845DE901EDFEE32155C47627561*)GenArrayNew(WhoU5BU2CU5D_t7F578194614DC845DE901EDFEE32155C47627561_il2cpp_TypeInfo_var, L_1);
		WhoU5BU2CU5D_t7F578194614DC845DE901EDFEE32155C47627561* L_2 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____303075700F6915569FE98659B2AFE985010993FD_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_2;
		// Vector3 leftUpPosition = new Vector3(-4, 0, 4);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), (-4.0f), (0.0f), (4.0f), /*hidden argument*/NULL);
		// Vector3 diffPosition = new Vector3();
		il2cpp_codegen_initobj((&V_2), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		// for (int i = 0; i < 9; i++) {
		V_3 = 0;
		goto IL_0103;
	}

IL_003a:
	{
		// diffPosition.z = - i * m_squere1.transform.localScale.z * 10;
		int32_t L_4 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_m_squere1_4();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_z_4();
		(&V_2)->set_z_4(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)((float)((-L_4)))), (float)L_8)), (float)(10.0f))));
		// for (int j = 0; j < 9; j++) {
		V_4 = 0;
		goto IL_00f6;
	}

IL_0068:
	{
		// diffPosition.x = j * m_squere1.transform.localScale.z * 10;
		int32_t L_9 = V_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_m_squere1_4();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_z_4();
		(&V_2)->set_x_2(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_9)), (float)L_13)), (float)(10.0f))));
		// GameObject squere = ((i + j) % 2 == 0) ? m_squere1 : m_squere2;
		int32_t L_14 = V_3;
		int32_t L_15 = V_4;
		if (!((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_15))%(int32_t)2)))
		{
			goto IL_009e;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_m_squere2_5();
		G_B5_0 = L_16;
		goto IL_00a4;
	}

IL_009e:
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_m_squere1_4();
		G_B5_0 = L_17;
	}

IL_00a4:
	{
		V_5 = G_B5_0;
		// m_squereArray[j, i] = Instantiate(squere, leftUpPosition + diffPosition, Quaternion.identity);
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_18 = __this->get_m_squereArray_6();
		int32_t L_19 = V_4;
		int32_t L_20 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_22, L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_25;
		L_25 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_21, L_24, L_25, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		NullCheck(L_18);
		(L_18)->SetAt(L_19, L_20, L_26);
		// m_squereArray[j, i].GetComponent<Squere>().initialize(whoseArray[i, j], new Coordinate(j, i));
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_27 = __this->get_m_squereArray_6();
		int32_t L_28 = V_4;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30;
		L_30 = (L_27)->GetAt(L_28, L_29);
		NullCheck(L_30);
		Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * L_31;
		L_31 = GameObject_GetComponent_TisSquere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783_mBE4A02FAD24CDD2738103EE7C2414C2542963A2F(L_30, /*hidden argument*/GameObject_GetComponent_TisSquere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783_mBE4A02FAD24CDD2738103EE7C2414C2542963A2F_RuntimeMethod_var);
		WhoU5BU2CU5D_t7F578194614DC845DE901EDFEE32155C47627561* L_32 = V_0;
		int32_t L_33 = V_3;
		int32_t L_34 = V_4;
		NullCheck(L_32);
		int32_t L_35;
		L_35 = (L_32)->GetAt(L_33, L_34);
		int32_t L_36 = V_4;
		int32_t L_37 = V_3;
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_38 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_38, L_36, L_37, /*hidden argument*/NULL);
		NullCheck(L_31);
		Squere_initialize_mC2FD66974EEA5EA0C3C3DE6FD14E3BF395A03000(L_31, L_35, L_38, /*hidden argument*/NULL);
		// for (int j = 0; j < 9; j++) {
		int32_t L_39 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00f6:
	{
		// for (int j = 0; j < 9; j++) {
		int32_t L_40 = V_4;
		if ((((int32_t)L_40) < ((int32_t)((int32_t)9))))
		{
			goto IL_0068;
		}
	}
	{
		// for (int i = 0; i < 9; i++) {
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_0103:
	{
		// for (int i = 0; i < 9; i++) {
		int32_t L_42 = V_3;
		if ((((int32_t)L_42) < ((int32_t)((int32_t)9))))
		{
			goto IL_003a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManager::placeInitialPieces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_placeInitialPieces_mC7B9827CF9A00164CC90D6A6B8440C5EC911A2BA (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, GameManager_placeInitialPieces_mC7B9827CF9A00164CC90D6A6B8440C5EC911A2BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PieceClassU5BU2CU5D_tB7D041CD472DF4093E33D030E1E6B38FD0534B83* V_0 = NULL;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t G_B5_0 = 0;
	Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * G_B5_1 = NULL;
	int32_t G_B4_0 = 0;
	Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * G_B6_2 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B8_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B7_0 = NULL;
	String_t* G_B9_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B9_1 = NULL;
	{
		// PieceClass[,] pieceClassArray = new PieceClass[,] {
		//     { PieceClass.Kyosha, PieceClass.Keima, PieceClass.Gin, PieceClass.Kin, PieceClass.Ou, PieceClass.Kin, PieceClass.Gin, PieceClass.Keima, PieceClass.Kyosha },
		//     { PieceClass.No, PieceClass.Hisha, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.Kaku, PieceClass.No },
		//     { PieceClass.Hu, PieceClass.Hu, PieceClass.Hu, PieceClass.Hu, PieceClass.Hu, PieceClass.Hu, PieceClass.Hu, PieceClass.Hu, PieceClass.Hu },
		//     { PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No },
		//     { PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No },
		//     { PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No },
		//     { PieceClass.Hu, PieceClass.Hu, PieceClass.Hu, PieceClass.Hu, PieceClass.Hu, PieceClass.Hu, PieceClass.Hu, PieceClass.Hu, PieceClass.Hu },
		//     { PieceClass.No, PieceClass.Kaku, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.Hisha, PieceClass.No },
		//     { PieceClass.Kyosha, PieceClass.Keima, PieceClass.Gin, PieceClass.Kin, PieceClass.Ou, PieceClass.Kin, PieceClass.Gin, PieceClass.Keima, PieceClass.Kyosha }
		// };
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)((int32_t)9), (il2cpp_array_size_t)((int32_t)9) };
		PieceClassU5BU2CU5D_tB7D041CD472DF4093E33D030E1E6B38FD0534B83* L_0 = (PieceClassU5BU2CU5D_tB7D041CD472DF4093E33D030E1E6B38FD0534B83*)GenArrayNew(PieceClassU5BU2CU5D_tB7D041CD472DF4093E33D030E1E6B38FD0534B83_il2cpp_TypeInfo_var, L_1);
		PieceClassU5BU2CU5D_tB7D041CD472DF4093E33D030E1E6B38FD0534B83* L_2 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____52FEA8B3C77D12B3A6A788877538561730559EF0_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_2;
		// GameObject[] pieceArray = new GameObject[] {
		//     m_pieceOu,
		//     m_pieceKin,
		//     m_pieceGin,
		//     m_pieceKeima,
		//     m_pieceKyosha,
		//     m_pieceKaku,
		//     m_pieceHisha,
		//     m_pieceHu
		// };
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)8);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = L_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_m_pieceOu_7();
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_6);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = L_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_m_pieceKin_8();
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_8);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = L_7;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_m_pieceGin_9();
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_10);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = L_9;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_m_pieceKeima_10();
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_12);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_13 = L_11;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_m_pieceKyosha_11();
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_14);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_15 = L_13;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_m_pieceKaku_12();
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_16);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_17 = L_15;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_m_pieceHisha_13();
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(6), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_18);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_19 = L_17;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_m_pieceHu_14();
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(7), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_20);
		V_1 = L_19;
		// Vector3 leftUpPosition = new Vector3(-4, 0, 4);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), (-4.0f), (0.0f), (4.0f), /*hidden argument*/NULL);
		// Vector3 diffPosition = new Vector3();
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		// for (int i = 0; i < 9; i++) {
		V_4 = 0;
		goto IL_018a;
	}

IL_008a:
	{
		// diffPosition.z = - i * m_squere1.transform.localScale.z * 10;
		int32_t L_21 = V_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_m_squere1_4();
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_23, /*hidden argument*/NULL);
		float L_25 = L_24.get_z_4();
		(&V_3)->set_z_4(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)((float)((-L_21)))), (float)L_25)), (float)(10.0f))));
		// for (int j = 0; j < 9; j++) {
		V_5 = 0;
		goto IL_017b;
	}

IL_00b9:
	{
		// diffPosition.x = j * m_squere1.transform.localScale.z * 10;
		int32_t L_26 = V_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_m_squere1_4();
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_28, /*hidden argument*/NULL);
		float L_30 = L_29.get_z_4();
		(&V_3)->set_x_2(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_26)), (float)L_30)), (float)(10.0f))));
		// if (pieceClassArray[i, j] != PieceClass.No) {
		PieceClassU5BU2CU5D_tB7D041CD472DF4093E33D030E1E6B38FD0534B83* L_31 = V_0;
		int32_t L_32 = V_4;
		int32_t L_33 = V_5;
		NullCheck(L_31);
		int32_t L_34;
		L_34 = (L_31)->GetAt(L_32, L_33);
		if ((((int32_t)L_34) == ((int32_t)(-1))))
		{
			goto IL_0175;
		}
	}
	{
		// m_pieceArray[j, i] = Instantiate(pieceArray[(int)pieceClassArray[i, j]], leftUpPosition + diffPosition, Quaternion.identity);
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_35 = __this->get_m_pieceArray_15();
		int32_t L_36 = V_5;
		int32_t L_37 = V_4;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_38 = V_1;
		PieceClassU5BU2CU5D_tB7D041CD472DF4093E33D030E1E6B38FD0534B83* L_39 = V_0;
		int32_t L_40 = V_4;
		int32_t L_41 = V_5;
		NullCheck(L_39);
		int32_t L_42;
		L_42 = (L_39)->GetAt(L_40, L_41);
		NullCheck(L_38);
		int32_t L_43 = L_42;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_45, L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_48;
		L_48 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49;
		L_49 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_44, L_47, L_48, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		NullCheck(L_35);
		(L_35)->SetAt(L_36, L_37, L_49);
		// m_pieceArray[j, i].GetComponent<Piece>().initialize(pieceClassArray[i, j], ((i > 5) ? Who.One : Who.Two), new Coordinate(j, i));
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_50 = __this->get_m_pieceArray_15();
		int32_t L_51 = V_5;
		int32_t L_52 = V_4;
		NullCheck(L_50);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53;
		L_53 = (L_50)->GetAt(L_51, L_52);
		NullCheck(L_53);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_54;
		L_54 = GameObject_GetComponent_TisPiece_tBB694F50405042E44F45E94D75887A6B91292BF1_m7CC851C28491D4E61E473F9B5A4F4BD34173A629(L_53, /*hidden argument*/GameObject_GetComponent_TisPiece_tBB694F50405042E44F45E94D75887A6B91292BF1_m7CC851C28491D4E61E473F9B5A4F4BD34173A629_RuntimeMethod_var);
		PieceClassU5BU2CU5D_tB7D041CD472DF4093E33D030E1E6B38FD0534B83* L_55 = V_0;
		int32_t L_56 = V_4;
		int32_t L_57 = V_5;
		NullCheck(L_55);
		int32_t L_58;
		L_58 = (L_55)->GetAt(L_56, L_57);
		int32_t L_59 = V_4;
		G_B4_0 = L_58;
		G_B4_1 = L_54;
		if ((((int32_t)L_59) > ((int32_t)5)))
		{
			G_B5_0 = L_58;
			G_B5_1 = L_54;
			goto IL_0141;
		}
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0142;
	}

IL_0141:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0142:
	{
		int32_t L_60 = V_5;
		int32_t L_61 = V_4;
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_62 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_62, L_60, L_61, /*hidden argument*/NULL);
		NullCheck(G_B6_2);
		Piece_initialize_m5AD3F3E2ABB4BC32039F3FC32C4A90D656F6B55C(G_B6_2, G_B6_1, G_B6_0, L_62, /*hidden argument*/NULL);
		// m_pieceArray[j, i].tag = ((i > 5) ? "OnesPiece" : "TwosPiece");
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_63 = __this->get_m_pieceArray_15();
		int32_t L_64 = V_5;
		int32_t L_65 = V_4;
		NullCheck(L_63);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_66;
		L_66 = (L_63)->GetAt(L_64, L_65);
		int32_t L_67 = V_4;
		G_B7_0 = L_66;
		if ((((int32_t)L_67) > ((int32_t)5)))
		{
			G_B8_0 = L_66;
			goto IL_016b;
		}
	}
	{
		G_B9_0 = _stringLiteralEA82B36DE74FB11953A4FBEEA1594B91F3935E40;
		G_B9_1 = G_B7_0;
		goto IL_0170;
	}

IL_016b:
	{
		G_B9_0 = _stringLiteral291C2119084D01A58F510F79D211330B0025C8DF;
		G_B9_1 = G_B8_0;
	}

IL_0170:
	{
		NullCheck(G_B9_1);
		GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE(G_B9_1, G_B9_0, /*hidden argument*/NULL);
	}

IL_0175:
	{
		// for (int j = 0; j < 9; j++) {
		int32_t L_68 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1));
	}

IL_017b:
	{
		// for (int j = 0; j < 9; j++) {
		int32_t L_69 = V_5;
		if ((((int32_t)L_69) < ((int32_t)((int32_t)9))))
		{
			goto IL_00b9;
		}
	}
	{
		// for (int i = 0; i < 9; i++) {
		int32_t L_70 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_018a:
	{
		// for (int i = 0; i < 9; i++) {
		int32_t L_71 = V_4;
		if ((((int32_t)L_71) < ((int32_t)((int32_t)9))))
		{
			goto IL_008a;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<Coordinate> GameManager::createDestinationList(Piece)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 * GameManager_createDestinationList_m26B1E06BDDE078961FE797895F7F2CFBB4863F0D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * ___piece0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, GameManager_createDestinationList_m26B1E06BDDE078961FE797895F7F2CFBB4863F0D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 * V_0 = NULL;
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
	int32_t G_B5_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B5_1 = NULL;
	int32_t G_B4_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B6_2 = NULL;
	int32_t G_B8_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B8_1 = NULL;
	int32_t G_B7_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B7_1 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B9_2 = NULL;
	int32_t G_B11_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B11_1 = NULL;
	int32_t G_B10_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B10_1 = NULL;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B12_2 = NULL;
	int32_t G_B14_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B14_1 = NULL;
	int32_t G_B13_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B13_1 = NULL;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B15_2 = NULL;
	int32_t G_B19_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B19_1 = NULL;
	int32_t G_B18_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B18_1 = NULL;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B20_2 = NULL;
	int32_t G_B22_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B22_1 = NULL;
	int32_t G_B21_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B21_1 = NULL;
	int32_t G_B23_0 = 0;
	int32_t G_B23_1 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B23_2 = NULL;
	int32_t G_B25_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B25_1 = NULL;
	int32_t G_B24_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B24_1 = NULL;
	int32_t G_B26_0 = 0;
	int32_t G_B26_1 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B26_2 = NULL;
	int32_t G_B29_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B29_1 = NULL;
	int32_t G_B28_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B28_1 = NULL;
	int32_t G_B30_0 = 0;
	int32_t G_B30_1 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B30_2 = NULL;
	int32_t G_B32_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B32_1 = NULL;
	int32_t G_B31_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B31_1 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B33_1 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B33_2 = NULL;
	int32_t G_B35_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B35_1 = NULL;
	int32_t G_B34_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B34_1 = NULL;
	int32_t G_B36_0 = 0;
	int32_t G_B36_1 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B36_2 = NULL;
	int32_t G_B38_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B38_1 = NULL;
	int32_t G_B37_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B37_1 = NULL;
	int32_t G_B39_0 = 0;
	int32_t G_B39_1 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B39_2 = NULL;
	int32_t G_B43_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B43_1 = NULL;
	int32_t G_B42_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B42_1 = NULL;
	int32_t G_B44_0 = 0;
	int32_t G_B44_1 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B44_2 = NULL;
	int32_t G_B46_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B46_1 = NULL;
	int32_t G_B45_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B45_1 = NULL;
	int32_t G_B47_0 = 0;
	int32_t G_B47_1 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B47_2 = NULL;
	int32_t G_B50_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B50_1 = NULL;
	int32_t G_B49_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B49_1 = NULL;
	int32_t G_B51_0 = 0;
	int32_t G_B51_1 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B51_2 = NULL;
	int32_t G_B53_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B53_1 = NULL;
	int32_t G_B52_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B52_1 = NULL;
	int32_t G_B54_0 = 0;
	int32_t G_B54_1 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B54_2 = NULL;
	int32_t G_B56_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B56_1 = NULL;
	int32_t G_B55_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B55_1 = NULL;
	int32_t G_B57_0 = 0;
	int32_t G_B57_1 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B57_2 = NULL;
	int32_t G_B59_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B59_1 = NULL;
	int32_t G_B58_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B58_1 = NULL;
	int32_t G_B60_0 = 0;
	int32_t G_B60_1 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B60_2 = NULL;
	int32_t G_B75_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B75_1 = NULL;
	int32_t G_B74_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B74_1 = NULL;
	int32_t G_B76_0 = 0;
	int32_t G_B76_1 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B76_2 = NULL;
	int32_t G_B78_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B78_1 = NULL;
	int32_t G_B77_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B77_1 = NULL;
	int32_t G_B79_0 = 0;
	int32_t G_B79_1 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B79_2 = NULL;
	int32_t G_B81_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B81_1 = NULL;
	int32_t G_B80_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B80_1 = NULL;
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B82_2 = NULL;
	int32_t G_B84_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B84_1 = NULL;
	int32_t G_B83_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B83_1 = NULL;
	int32_t G_B85_0 = 0;
	int32_t G_B85_1 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B85_2 = NULL;
	int32_t G_B137_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B137_1 = NULL;
	int32_t G_B136_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B136_1 = NULL;
	int32_t G_B138_0 = 0;
	int32_t G_B138_1 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B138_2 = NULL;
	int32_t G_B141_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B141_1 = NULL;
	int32_t G_B140_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B140_1 = NULL;
	int32_t G_B142_0 = 0;
	int32_t G_B142_1 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B142_2 = NULL;
	int32_t G_B144_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B144_1 = NULL;
	int32_t G_B143_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B143_1 = NULL;
	int32_t G_B145_0 = 0;
	int32_t G_B145_1 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B145_2 = NULL;
	int32_t G_B147_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B147_1 = NULL;
	int32_t G_B146_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B146_1 = NULL;
	int32_t G_B148_0 = 0;
	int32_t G_B148_1 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B148_2 = NULL;
	int32_t G_B150_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B150_1 = NULL;
	int32_t G_B149_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B149_1 = NULL;
	int32_t G_B151_0 = 0;
	int32_t G_B151_1 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B151_2 = NULL;
	{
		// List<Coordinate> destinationList = new List<Coordinate>();
		List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 * L_0 = (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 *)il2cpp_codegen_object_new(List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0_il2cpp_TypeInfo_var);
		List_1__ctor_mC2D96D9EB4848E5D874D681C2EB316D5CBF496DF(L_0, /*hidden argument*/List_1__ctor_mC2D96D9EB4848E5D874D681C2EB316D5CBF496DF_RuntimeMethod_var);
		V_0 = L_0;
		// switch (piece.m_pieceClass)
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_1 = ___piece0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Piece_get_m_pieceClass_m5BF8DBEE3EFEF7BA559AAFD082A714F7AC412401_inline(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0038;
			}
			case 1:
			{
				goto IL_00c5;
			}
			case 2:
			{
				goto IL_015c;
			}
			case 3:
			{
				goto IL_0276;
			}
			case 4:
			{
				goto IL_0354;
			}
			case 5:
			{
				goto IL_04aa;
			}
			case 6:
			{
				goto IL_06be;
			}
			case 7:
			{
				goto IL_087c;
			}
		}
	}
	{
		goto IL_0937;
	}

IL_0038:
	{
		// addDestination(new Coordinate(-1, -1), piece, ref destinationList);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_4 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_4, (-1), (-1), /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_5 = ___piece0;
		bool L_6;
		L_6 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_4, L_5, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(0, -1), piece, ref destinationList);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_7 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_7, 0, (-1), /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_8 = ___piece0;
		bool L_9;
		L_9 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_7, L_8, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(1, -1), piece, ref destinationList);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_10 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_10, 1, (-1), /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_11 = ___piece0;
		bool L_12;
		L_12 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_10, L_11, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(1, 0), piece, ref destinationList);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_13 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_13, 1, 0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_14 = ___piece0;
		bool L_15;
		L_15 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_13, L_14, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(-1, 0), piece, ref destinationList);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_16 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_16, (-1), 0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_17 = ___piece0;
		bool L_18;
		L_18 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_16, L_17, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(1, 1), piece, ref destinationList);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_19 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_19, 1, 1, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_20 = ___piece0;
		bool L_21;
		L_21 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_19, L_20, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(0, 1), piece, ref destinationList);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_22 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_22, 0, 1, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_23 = ___piece0;
		bool L_24;
		L_24 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_22, L_23, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(-1, 1), piece, ref destinationList);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_25 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_25, (-1), 1, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_26 = ___piece0;
		bool L_27;
		L_27 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_25, L_26, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// break;
		goto IL_0937;
	}

IL_00c5:
	{
		// addDestination(new Coordinate(-1, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_28 = ___piece0;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_28, /*hidden argument*/NULL);
		G_B4_0 = (-1);
		G_B4_1 = __this;
		if (!L_29)
		{
			G_B5_0 = (-1);
			G_B5_1 = __this;
			goto IL_00d2;
		}
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_00d3;
	}

IL_00d2:
	{
		G_B6_0 = (-1);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_00d3:
	{
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_30 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_30, G_B6_1, G_B6_0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_31 = ___piece0;
		NullCheck(G_B6_2);
		bool L_32;
		L_32 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(G_B6_2, L_30, L_31, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(0, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_33 = ___piece0;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_33, /*hidden argument*/NULL);
		G_B7_0 = 0;
		G_B7_1 = __this;
		if (!L_34)
		{
			G_B8_0 = 0;
			G_B8_1 = __this;
			goto IL_00ee;
		}
	}
	{
		G_B9_0 = 1;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_00ef;
	}

IL_00ee:
	{
		G_B9_0 = (-1);
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_00ef:
	{
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_35 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_35, G_B9_1, G_B9_0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_36 = ___piece0;
		NullCheck(G_B9_2);
		bool L_37;
		L_37 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(G_B9_2, L_35, L_36, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(1, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_38 = ___piece0;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_38, /*hidden argument*/NULL);
		G_B10_0 = 1;
		G_B10_1 = __this;
		if (!L_39)
		{
			G_B11_0 = 1;
			G_B11_1 = __this;
			goto IL_010a;
		}
	}
	{
		G_B12_0 = 1;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		goto IL_010b;
	}

IL_010a:
	{
		G_B12_0 = (-1);
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
	}

IL_010b:
	{
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_40 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_40, G_B12_1, G_B12_0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_41 = ___piece0;
		NullCheck(G_B12_2);
		bool L_42;
		L_42 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(G_B12_2, L_40, L_41, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(1, 0), piece, ref destinationList);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_43 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_43, 1, 0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_44 = ___piece0;
		bool L_45;
		L_45 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_43, L_44, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(-1, 0), piece, ref destinationList);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_46 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_46, (-1), 0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_47 = ___piece0;
		bool L_48;
		L_48 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_46, L_47, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(0, (piece.m_whose == Who.One) ? 1 : -1), piece, ref destinationList);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_49 = ___piece0;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_49, /*hidden argument*/NULL);
		G_B13_0 = 0;
		G_B13_1 = __this;
		if (!L_50)
		{
			G_B14_0 = 0;
			G_B14_1 = __this;
			goto IL_0148;
		}
	}
	{
		G_B15_0 = (-1);
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		goto IL_0149;
	}

IL_0148:
	{
		G_B15_0 = 1;
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
	}

IL_0149:
	{
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_51 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_51, G_B15_1, G_B15_0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_52 = ___piece0;
		NullCheck(G_B15_2);
		bool L_53;
		L_53 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(G_B15_2, L_51, L_52, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// break;
		goto IL_0937;
	}

IL_015c:
	{
		// if (!piece.m_isPromoted) {
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_54 = ___piece0;
		NullCheck(L_54);
		bool L_55;
		L_55 = Piece_get_m_isPromoted_mA2F92D34E9392A4EA876DC96184287F394A98A86_inline(L_54, /*hidden argument*/NULL);
		if (L_55)
		{
			goto IL_01df;
		}
	}
	{
		// addDestination(new Coordinate(-1, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_56 = ___piece0;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_56, /*hidden argument*/NULL);
		G_B18_0 = (-1);
		G_B18_1 = __this;
		if (!L_57)
		{
			G_B19_0 = (-1);
			G_B19_1 = __this;
			goto IL_0171;
		}
	}
	{
		G_B20_0 = 1;
		G_B20_1 = G_B18_0;
		G_B20_2 = G_B18_1;
		goto IL_0172;
	}

IL_0171:
	{
		G_B20_0 = (-1);
		G_B20_1 = G_B19_0;
		G_B20_2 = G_B19_1;
	}

IL_0172:
	{
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_58 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_58, G_B20_1, G_B20_0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_59 = ___piece0;
		NullCheck(G_B20_2);
		bool L_60;
		L_60 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(G_B20_2, L_58, L_59, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(0, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_61 = ___piece0;
		NullCheck(L_61);
		int32_t L_62;
		L_62 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_61, /*hidden argument*/NULL);
		G_B21_0 = 0;
		G_B21_1 = __this;
		if (!L_62)
		{
			G_B22_0 = 0;
			G_B22_1 = __this;
			goto IL_018d;
		}
	}
	{
		G_B23_0 = 1;
		G_B23_1 = G_B21_0;
		G_B23_2 = G_B21_1;
		goto IL_018e;
	}

IL_018d:
	{
		G_B23_0 = (-1);
		G_B23_1 = G_B22_0;
		G_B23_2 = G_B22_1;
	}

IL_018e:
	{
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_63 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_63, G_B23_1, G_B23_0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_64 = ___piece0;
		NullCheck(G_B23_2);
		bool L_65;
		L_65 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(G_B23_2, L_63, L_64, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(1, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_66 = ___piece0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_66, /*hidden argument*/NULL);
		G_B24_0 = 1;
		G_B24_1 = __this;
		if (!L_67)
		{
			G_B25_0 = 1;
			G_B25_1 = __this;
			goto IL_01a9;
		}
	}
	{
		G_B26_0 = 1;
		G_B26_1 = G_B24_0;
		G_B26_2 = G_B24_1;
		goto IL_01aa;
	}

IL_01a9:
	{
		G_B26_0 = (-1);
		G_B26_1 = G_B25_0;
		G_B26_2 = G_B25_1;
	}

IL_01aa:
	{
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_68 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_68, G_B26_1, G_B26_0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_69 = ___piece0;
		NullCheck(G_B26_2);
		bool L_70;
		L_70 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(G_B26_2, L_68, L_69, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(1, 1), piece, ref destinationList);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_71 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_71, 1, 1, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_72 = ___piece0;
		bool L_73;
		L_73 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_71, L_72, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(-1, 1), piece, ref destinationList);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_74 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_74, (-1), 1, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_75 = ___piece0;
		bool L_76;
		L_76 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_74, L_75, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// } else {
		goto IL_0937;
	}

IL_01df:
	{
		// addDestination(new Coordinate(-1, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_77 = ___piece0;
		NullCheck(L_77);
		int32_t L_78;
		L_78 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_77, /*hidden argument*/NULL);
		G_B28_0 = (-1);
		G_B28_1 = __this;
		if (!L_78)
		{
			G_B29_0 = (-1);
			G_B29_1 = __this;
			goto IL_01ec;
		}
	}
	{
		G_B30_0 = 1;
		G_B30_1 = G_B28_0;
		G_B30_2 = G_B28_1;
		goto IL_01ed;
	}

IL_01ec:
	{
		G_B30_0 = (-1);
		G_B30_1 = G_B29_0;
		G_B30_2 = G_B29_1;
	}

IL_01ed:
	{
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_79 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_79, G_B30_1, G_B30_0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_80 = ___piece0;
		NullCheck(G_B30_2);
		bool L_81;
		L_81 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(G_B30_2, L_79, L_80, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(0, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_82 = ___piece0;
		NullCheck(L_82);
		int32_t L_83;
		L_83 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_82, /*hidden argument*/NULL);
		G_B31_0 = 0;
		G_B31_1 = __this;
		if (!L_83)
		{
			G_B32_0 = 0;
			G_B32_1 = __this;
			goto IL_0208;
		}
	}
	{
		G_B33_0 = 1;
		G_B33_1 = G_B31_0;
		G_B33_2 = G_B31_1;
		goto IL_0209;
	}

IL_0208:
	{
		G_B33_0 = (-1);
		G_B33_1 = G_B32_0;
		G_B33_2 = G_B32_1;
	}

IL_0209:
	{
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_84 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_84, G_B33_1, G_B33_0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_85 = ___piece0;
		NullCheck(G_B33_2);
		bool L_86;
		L_86 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(G_B33_2, L_84, L_85, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(1, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_87 = ___piece0;
		NullCheck(L_87);
		int32_t L_88;
		L_88 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_87, /*hidden argument*/NULL);
		G_B34_0 = 1;
		G_B34_1 = __this;
		if (!L_88)
		{
			G_B35_0 = 1;
			G_B35_1 = __this;
			goto IL_0224;
		}
	}
	{
		G_B36_0 = 1;
		G_B36_1 = G_B34_0;
		G_B36_2 = G_B34_1;
		goto IL_0225;
	}

IL_0224:
	{
		G_B36_0 = (-1);
		G_B36_1 = G_B35_0;
		G_B36_2 = G_B35_1;
	}

IL_0225:
	{
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_89 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_89, G_B36_1, G_B36_0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_90 = ___piece0;
		NullCheck(G_B36_2);
		bool L_91;
		L_91 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(G_B36_2, L_89, L_90, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(1, 0), piece, ref destinationList);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_92 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_92, 1, 0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_93 = ___piece0;
		bool L_94;
		L_94 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_92, L_93, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(-1, 0), piece, ref destinationList);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_95 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_95, (-1), 0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_96 = ___piece0;
		bool L_97;
		L_97 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_95, L_96, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(0, (piece.m_whose == Who.One) ? 1 : -1), piece, ref destinationList);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_98 = ___piece0;
		NullCheck(L_98);
		int32_t L_99;
		L_99 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_98, /*hidden argument*/NULL);
		G_B37_0 = 0;
		G_B37_1 = __this;
		if (!L_99)
		{
			G_B38_0 = 0;
			G_B38_1 = __this;
			goto IL_0262;
		}
	}
	{
		G_B39_0 = (-1);
		G_B39_1 = G_B37_0;
		G_B39_2 = G_B37_1;
		goto IL_0263;
	}

IL_0262:
	{
		G_B39_0 = 1;
		G_B39_1 = G_B38_0;
		G_B39_2 = G_B38_1;
	}

IL_0263:
	{
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_100 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_100, G_B39_1, G_B39_0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_101 = ___piece0;
		NullCheck(G_B39_2);
		bool L_102;
		L_102 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(G_B39_2, L_100, L_101, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// break;
		goto IL_0937;
	}

IL_0276:
	{
		// if (!piece.m_isPromoted) {
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_103 = ___piece0;
		NullCheck(L_103);
		bool L_104;
		L_104 = Piece_get_m_isPromoted_mA2F92D34E9392A4EA876DC96184287F394A98A86_inline(L_103, /*hidden argument*/NULL);
		if (L_104)
		{
			goto IL_02bd;
		}
	}
	{
		// addDestination(new Coordinate(-1, (piece.m_whose == Who.One) ? -2 : 2), piece, ref destinationList);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_105 = ___piece0;
		NullCheck(L_105);
		int32_t L_106;
		L_106 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_105, /*hidden argument*/NULL);
		G_B42_0 = (-1);
		G_B42_1 = __this;
		if (!L_106)
		{
			G_B43_0 = (-1);
			G_B43_1 = __this;
			goto IL_028b;
		}
	}
	{
		G_B44_0 = 2;
		G_B44_1 = G_B42_0;
		G_B44_2 = G_B42_1;
		goto IL_028d;
	}

IL_028b:
	{
		G_B44_0 = ((int32_t)-2);
		G_B44_1 = G_B43_0;
		G_B44_2 = G_B43_1;
	}

IL_028d:
	{
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_107 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_107, G_B44_1, G_B44_0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_108 = ___piece0;
		NullCheck(G_B44_2);
		bool L_109;
		L_109 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(G_B44_2, L_107, L_108, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(1, (piece.m_whose == Who.One) ? -2 : 2), piece, ref destinationList);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_110 = ___piece0;
		NullCheck(L_110);
		int32_t L_111;
		L_111 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_110, /*hidden argument*/NULL);
		G_B45_0 = 1;
		G_B45_1 = __this;
		if (!L_111)
		{
			G_B46_0 = 1;
			G_B46_1 = __this;
			goto IL_02a8;
		}
	}
	{
		G_B47_0 = 2;
		G_B47_1 = G_B45_0;
		G_B47_2 = G_B45_1;
		goto IL_02aa;
	}

IL_02a8:
	{
		G_B47_0 = ((int32_t)-2);
		G_B47_1 = G_B46_0;
		G_B47_2 = G_B46_1;
	}

IL_02aa:
	{
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_112 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_112, G_B47_1, G_B47_0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_113 = ___piece0;
		NullCheck(G_B47_2);
		bool L_114;
		L_114 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(G_B47_2, L_112, L_113, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// } else {
		goto IL_0937;
	}

IL_02bd:
	{
		// addDestination(new Coordinate(-1, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_115 = ___piece0;
		NullCheck(L_115);
		int32_t L_116;
		L_116 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_115, /*hidden argument*/NULL);
		G_B49_0 = (-1);
		G_B49_1 = __this;
		if (!L_116)
		{
			G_B50_0 = (-1);
			G_B50_1 = __this;
			goto IL_02ca;
		}
	}
	{
		G_B51_0 = 1;
		G_B51_1 = G_B49_0;
		G_B51_2 = G_B49_1;
		goto IL_02cb;
	}

IL_02ca:
	{
		G_B51_0 = (-1);
		G_B51_1 = G_B50_0;
		G_B51_2 = G_B50_1;
	}

IL_02cb:
	{
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_117 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_117, G_B51_1, G_B51_0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_118 = ___piece0;
		NullCheck(G_B51_2);
		bool L_119;
		L_119 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(G_B51_2, L_117, L_118, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(0,(piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_120 = ___piece0;
		NullCheck(L_120);
		int32_t L_121;
		L_121 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_120, /*hidden argument*/NULL);
		G_B52_0 = 0;
		G_B52_1 = __this;
		if (!L_121)
		{
			G_B53_0 = 0;
			G_B53_1 = __this;
			goto IL_02e6;
		}
	}
	{
		G_B54_0 = 1;
		G_B54_1 = G_B52_0;
		G_B54_2 = G_B52_1;
		goto IL_02e7;
	}

IL_02e6:
	{
		G_B54_0 = (-1);
		G_B54_1 = G_B53_0;
		G_B54_2 = G_B53_1;
	}

IL_02e7:
	{
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_122 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_122, G_B54_1, G_B54_0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_123 = ___piece0;
		NullCheck(G_B54_2);
		bool L_124;
		L_124 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(G_B54_2, L_122, L_123, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(1, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_125 = ___piece0;
		NullCheck(L_125);
		int32_t L_126;
		L_126 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_125, /*hidden argument*/NULL);
		G_B55_0 = 1;
		G_B55_1 = __this;
		if (!L_126)
		{
			G_B56_0 = 1;
			G_B56_1 = __this;
			goto IL_0302;
		}
	}
	{
		G_B57_0 = 1;
		G_B57_1 = G_B55_0;
		G_B57_2 = G_B55_1;
		goto IL_0303;
	}

IL_0302:
	{
		G_B57_0 = (-1);
		G_B57_1 = G_B56_0;
		G_B57_2 = G_B56_1;
	}

IL_0303:
	{
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_127 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_127, G_B57_1, G_B57_0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_128 = ___piece0;
		NullCheck(G_B57_2);
		bool L_129;
		L_129 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(G_B57_2, L_127, L_128, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(1, 0), piece, ref destinationList);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_130 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_130, 1, 0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_131 = ___piece0;
		bool L_132;
		L_132 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_130, L_131, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(-1, 0), piece, ref destinationList);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_133 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_133, (-1), 0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_134 = ___piece0;
		bool L_135;
		L_135 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_133, L_134, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(0, (piece.m_whose == Who.One) ? 1 : -1), piece, ref destinationList);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_136 = ___piece0;
		NullCheck(L_136);
		int32_t L_137;
		L_137 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_136, /*hidden argument*/NULL);
		G_B58_0 = 0;
		G_B58_1 = __this;
		if (!L_137)
		{
			G_B59_0 = 0;
			G_B59_1 = __this;
			goto IL_0340;
		}
	}
	{
		G_B60_0 = (-1);
		G_B60_1 = G_B58_0;
		G_B60_2 = G_B58_1;
		goto IL_0341;
	}

IL_0340:
	{
		G_B60_0 = 1;
		G_B60_1 = G_B59_0;
		G_B60_2 = G_B59_1;
	}

IL_0341:
	{
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_138 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_138, G_B60_1, G_B60_0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_139 = ___piece0;
		NullCheck(G_B60_2);
		bool L_140;
		L_140 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(G_B60_2, L_138, L_139, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// break;
		goto IL_0937;
	}

IL_0354:
	{
		// if (!piece.m_isPromoted) {
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_141 = ___piece0;
		NullCheck(L_141);
		bool L_142;
		L_142 = Piece_get_m_isPromoted_mA2F92D34E9392A4EA876DC96184287F394A98A86_inline(L_141, /*hidden argument*/NULL);
		if (L_142)
		{
			goto IL_0413;
		}
	}
	{
		// for (int i = 1; piece.m_position.y - i >= 0; i++) {
		V_2 = 1;
		goto IL_03a4;
	}

IL_0363:
	{
		// if (!addDestination(new Coordinate(0, -i), piece, ref destinationList)) {
		int32_t L_143 = V_2;
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_144 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_144, 0, ((-L_143)), /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_145 = ___piece0;
		bool L_146;
		L_146 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_144, L_145, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		if (!L_146)
		{
			goto IL_03b4;
		}
	}
	{
		// if (m_pieceArray[piece.m_position.x, piece.m_position.y - i]) {
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_147 = __this->get_m_pieceArray_15();
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_148 = ___piece0;
		NullCheck(L_148);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_149;
		L_149 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_148, /*hidden argument*/NULL);
		NullCheck(L_149);
		int32_t L_150 = L_149->get_x_0();
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_151 = ___piece0;
		NullCheck(L_151);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_152;
		L_152 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_151, /*hidden argument*/NULL);
		NullCheck(L_152);
		int32_t L_153 = L_152->get_y_1();
		int32_t L_154 = V_2;
		NullCheck(L_147);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_155;
		L_155 = (L_147)->GetAt(L_150, ((int32_t)il2cpp_codegen_subtract((int32_t)L_153, (int32_t)L_154)));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_156;
		L_156 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_155, /*hidden argument*/NULL);
		if (L_156)
		{
			goto IL_03b4;
		}
	}
	{
		// for (int i = 1; piece.m_position.y - i >= 0; i++) {
		int32_t L_157 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_157, (int32_t)1));
	}

IL_03a4:
	{
		// for (int i = 1; piece.m_position.y - i >= 0; i++) {
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_158 = ___piece0;
		NullCheck(L_158);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_159;
		L_159 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_158, /*hidden argument*/NULL);
		NullCheck(L_159);
		int32_t L_160 = L_159->get_y_1();
		int32_t L_161 = V_2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_160, (int32_t)L_161))) >= ((int32_t)0)))
		{
			goto IL_0363;
		}
	}

IL_03b4:
	{
		// for (int i = 1; piece.m_position.y + i <= 8; i++) {
		V_3 = 1;
		goto IL_03fe;
	}

IL_03b8:
	{
		// if (!addDestination(new Coordinate(0, i), piece, ref destinationList)) {
		int32_t L_162 = V_3;
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_163 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_163, 0, L_162, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_164 = ___piece0;
		bool L_165;
		L_165 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_163, L_164, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		if (!L_165)
		{
			goto IL_0937;
		}
	}
	{
		// if (m_pieceArray[piece.m_position.x, piece.m_position.y + i]) {
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_166 = __this->get_m_pieceArray_15();
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_167 = ___piece0;
		NullCheck(L_167);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_168;
		L_168 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_167, /*hidden argument*/NULL);
		NullCheck(L_168);
		int32_t L_169 = L_168->get_x_0();
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_170 = ___piece0;
		NullCheck(L_170);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_171;
		L_171 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_170, /*hidden argument*/NULL);
		NullCheck(L_171);
		int32_t L_172 = L_171->get_y_1();
		int32_t L_173 = V_3;
		NullCheck(L_166);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_174;
		L_174 = (L_166)->GetAt(L_169, ((int32_t)il2cpp_codegen_add((int32_t)L_172, (int32_t)L_173)));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_175;
		L_175 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_174, /*hidden argument*/NULL);
		if (L_175)
		{
			goto IL_0937;
		}
	}
	{
		// for (int i = 1; piece.m_position.y + i <= 8; i++) {
		int32_t L_176 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_176, (int32_t)1));
	}

IL_03fe:
	{
		// for (int i = 1; piece.m_position.y + i <= 8; i++) {
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_177 = ___piece0;
		NullCheck(L_177);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_178;
		L_178 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_177, /*hidden argument*/NULL);
		NullCheck(L_178);
		int32_t L_179 = L_178->get_y_1();
		int32_t L_180 = V_3;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_179, (int32_t)L_180))) <= ((int32_t)8)))
		{
			goto IL_03b8;
		}
	}
	{
		// } else {
		goto IL_0937;
	}

IL_0413:
	{
		// addDestination(new Coordinate(-1, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_181 = ___piece0;
		NullCheck(L_181);
		int32_t L_182;
		L_182 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_181, /*hidden argument*/NULL);
		G_B74_0 = (-1);
		G_B74_1 = __this;
		if (!L_182)
		{
			G_B75_0 = (-1);
			G_B75_1 = __this;
			goto IL_0420;
		}
	}
	{
		G_B76_0 = 1;
		G_B76_1 = G_B74_0;
		G_B76_2 = G_B74_1;
		goto IL_0421;
	}

IL_0420:
	{
		G_B76_0 = (-1);
		G_B76_1 = G_B75_0;
		G_B76_2 = G_B75_1;
	}

IL_0421:
	{
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_183 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_183, G_B76_1, G_B76_0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_184 = ___piece0;
		NullCheck(G_B76_2);
		bool L_185;
		L_185 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(G_B76_2, L_183, L_184, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(0,(piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_186 = ___piece0;
		NullCheck(L_186);
		int32_t L_187;
		L_187 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_186, /*hidden argument*/NULL);
		G_B77_0 = 0;
		G_B77_1 = __this;
		if (!L_187)
		{
			G_B78_0 = 0;
			G_B78_1 = __this;
			goto IL_043c;
		}
	}
	{
		G_B79_0 = 1;
		G_B79_1 = G_B77_0;
		G_B79_2 = G_B77_1;
		goto IL_043d;
	}

IL_043c:
	{
		G_B79_0 = (-1);
		G_B79_1 = G_B78_0;
		G_B79_2 = G_B78_1;
	}

IL_043d:
	{
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_188 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_188, G_B79_1, G_B79_0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_189 = ___piece0;
		NullCheck(G_B79_2);
		bool L_190;
		L_190 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(G_B79_2, L_188, L_189, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(1, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_191 = ___piece0;
		NullCheck(L_191);
		int32_t L_192;
		L_192 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_191, /*hidden argument*/NULL);
		G_B80_0 = 1;
		G_B80_1 = __this;
		if (!L_192)
		{
			G_B81_0 = 1;
			G_B81_1 = __this;
			goto IL_0458;
		}
	}
	{
		G_B82_0 = 1;
		G_B82_1 = G_B80_0;
		G_B82_2 = G_B80_1;
		goto IL_0459;
	}

IL_0458:
	{
		G_B82_0 = (-1);
		G_B82_1 = G_B81_0;
		G_B82_2 = G_B81_1;
	}

IL_0459:
	{
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_193 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_193, G_B82_1, G_B82_0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_194 = ___piece0;
		NullCheck(G_B82_2);
		bool L_195;
		L_195 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(G_B82_2, L_193, L_194, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(1, 0), piece, ref destinationList);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_196 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_196, 1, 0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_197 = ___piece0;
		bool L_198;
		L_198 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_196, L_197, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(-1, 0), piece, ref destinationList);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_199 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_199, (-1), 0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_200 = ___piece0;
		bool L_201;
		L_201 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_199, L_200, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(0, (piece.m_whose == Who.One) ? 1 : -1), piece, ref destinationList);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_202 = ___piece0;
		NullCheck(L_202);
		int32_t L_203;
		L_203 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_202, /*hidden argument*/NULL);
		G_B83_0 = 0;
		G_B83_1 = __this;
		if (!L_203)
		{
			G_B84_0 = 0;
			G_B84_1 = __this;
			goto IL_0496;
		}
	}
	{
		G_B85_0 = (-1);
		G_B85_1 = G_B83_0;
		G_B85_2 = G_B83_1;
		goto IL_0497;
	}

IL_0496:
	{
		G_B85_0 = 1;
		G_B85_1 = G_B84_0;
		G_B85_2 = G_B84_1;
	}

IL_0497:
	{
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_204 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_204, G_B85_1, G_B85_0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_205 = ___piece0;
		NullCheck(G_B85_2);
		bool L_206;
		L_206 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(G_B85_2, L_204, L_205, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// break;
		goto IL_0937;
	}

IL_04aa:
	{
		// for (int i = 1; (piece.m_position.x - i >= 0) && (piece.m_position.y - i >= 0); i++) {
		V_4 = 1;
		goto IL_04f9;
	}

IL_04af:
	{
		// if (!addDestination(new Coordinate(-i, -i), piece, ref destinationList)) {
		int32_t L_207 = V_4;
		int32_t L_208 = V_4;
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_209 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_209, ((-L_207)), ((-L_208)), /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_210 = ___piece0;
		bool L_211;
		L_211 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_209, L_210, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		if (!L_211)
		{
			goto IL_051b;
		}
	}
	{
		// if (m_pieceArray[piece.m_position.x - i, piece.m_position.y - i]) {
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_212 = __this->get_m_pieceArray_15();
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_213 = ___piece0;
		NullCheck(L_213);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_214;
		L_214 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_213, /*hidden argument*/NULL);
		NullCheck(L_214);
		int32_t L_215 = L_214->get_x_0();
		int32_t L_216 = V_4;
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_217 = ___piece0;
		NullCheck(L_217);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_218;
		L_218 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_217, /*hidden argument*/NULL);
		NullCheck(L_218);
		int32_t L_219 = L_218->get_y_1();
		int32_t L_220 = V_4;
		NullCheck(L_212);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_221;
		L_221 = (L_212)->GetAt(((int32_t)il2cpp_codegen_subtract((int32_t)L_215, (int32_t)L_216)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_219, (int32_t)L_220)));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_222;
		L_222 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_221, /*hidden argument*/NULL);
		if (L_222)
		{
			goto IL_051b;
		}
	}
	{
		// for (int i = 1; (piece.m_position.x - i >= 0) && (piece.m_position.y - i >= 0); i++) {
		int32_t L_223 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_223, (int32_t)1));
	}

IL_04f9:
	{
		// for (int i = 1; (piece.m_position.x - i >= 0) && (piece.m_position.y - i >= 0); i++) {
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_224 = ___piece0;
		NullCheck(L_224);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_225;
		L_225 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_224, /*hidden argument*/NULL);
		NullCheck(L_225);
		int32_t L_226 = L_225->get_x_0();
		int32_t L_227 = V_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_226, (int32_t)L_227))) < ((int32_t)0)))
		{
			goto IL_051b;
		}
	}
	{
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_228 = ___piece0;
		NullCheck(L_228);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_229;
		L_229 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_228, /*hidden argument*/NULL);
		NullCheck(L_229);
		int32_t L_230 = L_229->get_y_1();
		int32_t L_231 = V_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_230, (int32_t)L_231))) >= ((int32_t)0)))
		{
			goto IL_04af;
		}
	}

IL_051b:
	{
		// for (int i = 1; (piece.m_position.x + i <= 8) && (piece.m_position.y - i >= 0); i++) {
		V_5 = 1;
		goto IL_0569;
	}

IL_0520:
	{
		// if (!addDestination(new Coordinate(i, -i), piece, ref destinationList)) {
		int32_t L_232 = V_5;
		int32_t L_233 = V_5;
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_234 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_234, L_232, ((-L_233)), /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_235 = ___piece0;
		bool L_236;
		L_236 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_234, L_235, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		if (!L_236)
		{
			goto IL_058b;
		}
	}
	{
		// if (m_pieceArray[piece.m_position.x + i, piece.m_position.y - i]) {
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_237 = __this->get_m_pieceArray_15();
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_238 = ___piece0;
		NullCheck(L_238);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_239;
		L_239 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_238, /*hidden argument*/NULL);
		NullCheck(L_239);
		int32_t L_240 = L_239->get_x_0();
		int32_t L_241 = V_5;
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_242 = ___piece0;
		NullCheck(L_242);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_243;
		L_243 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_242, /*hidden argument*/NULL);
		NullCheck(L_243);
		int32_t L_244 = L_243->get_y_1();
		int32_t L_245 = V_5;
		NullCheck(L_237);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_246;
		L_246 = (L_237)->GetAt(((int32_t)il2cpp_codegen_add((int32_t)L_240, (int32_t)L_241)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_244, (int32_t)L_245)));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_247;
		L_247 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_246, /*hidden argument*/NULL);
		if (L_247)
		{
			goto IL_058b;
		}
	}
	{
		// for (int i = 1; (piece.m_position.x + i <= 8) && (piece.m_position.y - i >= 0); i++) {
		int32_t L_248 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_248, (int32_t)1));
	}

IL_0569:
	{
		// for (int i = 1; (piece.m_position.x + i <= 8) && (piece.m_position.y - i >= 0); i++) {
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_249 = ___piece0;
		NullCheck(L_249);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_250;
		L_250 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_249, /*hidden argument*/NULL);
		NullCheck(L_250);
		int32_t L_251 = L_250->get_x_0();
		int32_t L_252 = V_5;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_251, (int32_t)L_252))) > ((int32_t)8)))
		{
			goto IL_058b;
		}
	}
	{
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_253 = ___piece0;
		NullCheck(L_253);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_254;
		L_254 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_253, /*hidden argument*/NULL);
		NullCheck(L_254);
		int32_t L_255 = L_254->get_y_1();
		int32_t L_256 = V_5;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_255, (int32_t)L_256))) >= ((int32_t)0)))
		{
			goto IL_0520;
		}
	}

IL_058b:
	{
		// for (int i = 1; (piece.m_position.x - i >= 0) && (piece.m_position.y + i <= 8); i++) {
		V_6 = 1;
		goto IL_05d9;
	}

IL_0590:
	{
		// if (!addDestination(new Coordinate(-i, i), piece, ref destinationList)) {
		int32_t L_257 = V_6;
		int32_t L_258 = V_6;
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_259 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_259, ((-L_257)), L_258, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_260 = ___piece0;
		bool L_261;
		L_261 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_259, L_260, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		if (!L_261)
		{
			goto IL_05fb;
		}
	}
	{
		// if (m_pieceArray[piece.m_position.x - i, piece.m_position.y + i]) {
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_262 = __this->get_m_pieceArray_15();
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_263 = ___piece0;
		NullCheck(L_263);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_264;
		L_264 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_263, /*hidden argument*/NULL);
		NullCheck(L_264);
		int32_t L_265 = L_264->get_x_0();
		int32_t L_266 = V_6;
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_267 = ___piece0;
		NullCheck(L_267);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_268;
		L_268 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_267, /*hidden argument*/NULL);
		NullCheck(L_268);
		int32_t L_269 = L_268->get_y_1();
		int32_t L_270 = V_6;
		NullCheck(L_262);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_271;
		L_271 = (L_262)->GetAt(((int32_t)il2cpp_codegen_subtract((int32_t)L_265, (int32_t)L_266)), ((int32_t)il2cpp_codegen_add((int32_t)L_269, (int32_t)L_270)));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_272;
		L_272 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_271, /*hidden argument*/NULL);
		if (L_272)
		{
			goto IL_05fb;
		}
	}
	{
		// for (int i = 1; (piece.m_position.x - i >= 0) && (piece.m_position.y + i <= 8); i++) {
		int32_t L_273 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_273, (int32_t)1));
	}

IL_05d9:
	{
		// for (int i = 1; (piece.m_position.x - i >= 0) && (piece.m_position.y + i <= 8); i++) {
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_274 = ___piece0;
		NullCheck(L_274);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_275;
		L_275 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_274, /*hidden argument*/NULL);
		NullCheck(L_275);
		int32_t L_276 = L_275->get_x_0();
		int32_t L_277 = V_6;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_276, (int32_t)L_277))) < ((int32_t)0)))
		{
			goto IL_05fb;
		}
	}
	{
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_278 = ___piece0;
		NullCheck(L_278);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_279;
		L_279 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_278, /*hidden argument*/NULL);
		NullCheck(L_279);
		int32_t L_280 = L_279->get_y_1();
		int32_t L_281 = V_6;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_280, (int32_t)L_281))) <= ((int32_t)8)))
		{
			goto IL_0590;
		}
	}

IL_05fb:
	{
		// for (int i = 1; (piece.m_position.x + i <= 8) && (piece.m_position.y + i <= 8); i++) {
		V_7 = 1;
		goto IL_0648;
	}

IL_0600:
	{
		// if (!addDestination(new Coordinate(i, i), piece, ref destinationList)) {
		int32_t L_282 = V_7;
		int32_t L_283 = V_7;
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_284 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_284, L_282, L_283, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_285 = ___piece0;
		bool L_286;
		L_286 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_284, L_285, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		if (!L_286)
		{
			goto IL_066a;
		}
	}
	{
		// if (m_pieceArray[piece.m_position.x + i, piece.m_position.y + i]) {
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_287 = __this->get_m_pieceArray_15();
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_288 = ___piece0;
		NullCheck(L_288);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_289;
		L_289 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_288, /*hidden argument*/NULL);
		NullCheck(L_289);
		int32_t L_290 = L_289->get_x_0();
		int32_t L_291 = V_7;
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_292 = ___piece0;
		NullCheck(L_292);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_293;
		L_293 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_292, /*hidden argument*/NULL);
		NullCheck(L_293);
		int32_t L_294 = L_293->get_y_1();
		int32_t L_295 = V_7;
		NullCheck(L_287);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_296;
		L_296 = (L_287)->GetAt(((int32_t)il2cpp_codegen_add((int32_t)L_290, (int32_t)L_291)), ((int32_t)il2cpp_codegen_add((int32_t)L_294, (int32_t)L_295)));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_297;
		L_297 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_296, /*hidden argument*/NULL);
		if (L_297)
		{
			goto IL_066a;
		}
	}
	{
		// for (int i = 1; (piece.m_position.x + i <= 8) && (piece.m_position.y + i <= 8); i++) {
		int32_t L_298 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_298, (int32_t)1));
	}

IL_0648:
	{
		// for (int i = 1; (piece.m_position.x + i <= 8) && (piece.m_position.y + i <= 8); i++) {
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_299 = ___piece0;
		NullCheck(L_299);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_300;
		L_300 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_299, /*hidden argument*/NULL);
		NullCheck(L_300);
		int32_t L_301 = L_300->get_x_0();
		int32_t L_302 = V_7;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_301, (int32_t)L_302))) > ((int32_t)8)))
		{
			goto IL_066a;
		}
	}
	{
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_303 = ___piece0;
		NullCheck(L_303);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_304;
		L_304 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_303, /*hidden argument*/NULL);
		NullCheck(L_304);
		int32_t L_305 = L_304->get_y_1();
		int32_t L_306 = V_7;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_305, (int32_t)L_306))) <= ((int32_t)8)))
		{
			goto IL_0600;
		}
	}

IL_066a:
	{
		// if (piece.m_isPromoted) {
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_307 = ___piece0;
		NullCheck(L_307);
		bool L_308;
		L_308 = Piece_get_m_isPromoted_mA2F92D34E9392A4EA876DC96184287F394A98A86_inline(L_307, /*hidden argument*/NULL);
		if (!L_308)
		{
			goto IL_0937;
		}
	}
	{
		// addDestination(new Coordinate(0, -1), piece, ref destinationList);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_309 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_309, 0, (-1), /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_310 = ___piece0;
		bool L_311;
		L_311 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_309, L_310, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(0, 1), piece, ref destinationList);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_312 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_312, 0, 1, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_313 = ___piece0;
		bool L_314;
		L_314 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_312, L_313, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(-1, 0), piece, ref destinationList);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_315 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_315, (-1), 0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_316 = ___piece0;
		bool L_317;
		L_317 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_315, L_316, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(1, 0), piece, ref destinationList);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_318 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_318, 1, 0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_319 = ___piece0;
		bool L_320;
		L_320 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_318, L_319, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// break;
		goto IL_0937;
	}

IL_06be:
	{
		// for (int i = 1; piece.m_position.x - i >= 0; i++) {
		V_8 = 1;
		goto IL_0708;
	}

IL_06c3:
	{
		// if (!addDestination(new Coordinate(-i, 0), piece, ref destinationList)) {
		int32_t L_321 = V_8;
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_322 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_322, ((-L_321)), 0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_323 = ___piece0;
		bool L_324;
		L_324 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_322, L_323, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		if (!L_324)
		{
			goto IL_0719;
		}
	}
	{
		// if (m_pieceArray[piece.m_position.x - i, piece.m_position.y]) {
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_325 = __this->get_m_pieceArray_15();
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_326 = ___piece0;
		NullCheck(L_326);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_327;
		L_327 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_326, /*hidden argument*/NULL);
		NullCheck(L_327);
		int32_t L_328 = L_327->get_x_0();
		int32_t L_329 = V_8;
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_330 = ___piece0;
		NullCheck(L_330);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_331;
		L_331 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_330, /*hidden argument*/NULL);
		NullCheck(L_331);
		int32_t L_332 = L_331->get_y_1();
		NullCheck(L_325);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_333;
		L_333 = (L_325)->GetAt(((int32_t)il2cpp_codegen_subtract((int32_t)L_328, (int32_t)L_329)), L_332);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_334;
		L_334 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_333, /*hidden argument*/NULL);
		if (L_334)
		{
			goto IL_0719;
		}
	}
	{
		// for (int i = 1; piece.m_position.x - i >= 0; i++) {
		int32_t L_335 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_335, (int32_t)1));
	}

IL_0708:
	{
		// for (int i = 1; piece.m_position.x - i >= 0; i++) {
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_336 = ___piece0;
		NullCheck(L_336);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_337;
		L_337 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_336, /*hidden argument*/NULL);
		NullCheck(L_337);
		int32_t L_338 = L_337->get_x_0();
		int32_t L_339 = V_8;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_338, (int32_t)L_339))) >= ((int32_t)0)))
		{
			goto IL_06c3;
		}
	}

IL_0719:
	{
		// for (int i = 1; piece.m_position.x + i <= 8; i++) {
		V_9 = 1;
		goto IL_0762;
	}

IL_071e:
	{
		// if (!addDestination(new Coordinate(i, 0), piece, ref destinationList)) {
		int32_t L_340 = V_9;
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_341 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_341, L_340, 0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_342 = ___piece0;
		bool L_343;
		L_343 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_341, L_342, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		if (!L_343)
		{
			goto IL_0773;
		}
	}
	{
		// if (m_pieceArray[piece.m_position.x + i, piece.m_position.y]) {
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_344 = __this->get_m_pieceArray_15();
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_345 = ___piece0;
		NullCheck(L_345);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_346;
		L_346 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_345, /*hidden argument*/NULL);
		NullCheck(L_346);
		int32_t L_347 = L_346->get_x_0();
		int32_t L_348 = V_9;
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_349 = ___piece0;
		NullCheck(L_349);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_350;
		L_350 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_349, /*hidden argument*/NULL);
		NullCheck(L_350);
		int32_t L_351 = L_350->get_y_1();
		NullCheck(L_344);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_352;
		L_352 = (L_344)->GetAt(((int32_t)il2cpp_codegen_add((int32_t)L_347, (int32_t)L_348)), L_351);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_353;
		L_353 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_352, /*hidden argument*/NULL);
		if (L_353)
		{
			goto IL_0773;
		}
	}
	{
		// for (int i = 1; piece.m_position.x + i <= 8; i++) {
		int32_t L_354 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_354, (int32_t)1));
	}

IL_0762:
	{
		// for (int i = 1; piece.m_position.x + i <= 8; i++) {
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_355 = ___piece0;
		NullCheck(L_355);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_356;
		L_356 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_355, /*hidden argument*/NULL);
		NullCheck(L_356);
		int32_t L_357 = L_356->get_x_0();
		int32_t L_358 = V_9;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_357, (int32_t)L_358))) <= ((int32_t)8)))
		{
			goto IL_071e;
		}
	}

IL_0773:
	{
		// for (int i = 1; piece.m_position.y - i >= 0; i++) {
		V_10 = 1;
		goto IL_07bd;
	}

IL_0778:
	{
		// if (!addDestination(new Coordinate(0, -i), piece, ref destinationList)) {
		int32_t L_359 = V_10;
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_360 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_360, 0, ((-L_359)), /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_361 = ___piece0;
		bool L_362;
		L_362 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_360, L_361, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		if (!L_362)
		{
			goto IL_07ce;
		}
	}
	{
		// if (m_pieceArray[piece.m_position.x, piece.m_position.y - i]) {
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_363 = __this->get_m_pieceArray_15();
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_364 = ___piece0;
		NullCheck(L_364);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_365;
		L_365 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_364, /*hidden argument*/NULL);
		NullCheck(L_365);
		int32_t L_366 = L_365->get_x_0();
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_367 = ___piece0;
		NullCheck(L_367);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_368;
		L_368 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_367, /*hidden argument*/NULL);
		NullCheck(L_368);
		int32_t L_369 = L_368->get_y_1();
		int32_t L_370 = V_10;
		NullCheck(L_363);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_371;
		L_371 = (L_363)->GetAt(L_366, ((int32_t)il2cpp_codegen_subtract((int32_t)L_369, (int32_t)L_370)));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_372;
		L_372 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_371, /*hidden argument*/NULL);
		if (L_372)
		{
			goto IL_07ce;
		}
	}
	{
		// for (int i = 1; piece.m_position.y - i >= 0; i++) {
		int32_t L_373 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_373, (int32_t)1));
	}

IL_07bd:
	{
		// for (int i = 1; piece.m_position.y - i >= 0; i++) {
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_374 = ___piece0;
		NullCheck(L_374);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_375;
		L_375 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_374, /*hidden argument*/NULL);
		NullCheck(L_375);
		int32_t L_376 = L_375->get_y_1();
		int32_t L_377 = V_10;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_376, (int32_t)L_377))) >= ((int32_t)0)))
		{
			goto IL_0778;
		}
	}

IL_07ce:
	{
		// for (int i = 1; piece.m_position.y + i <= 8; i++) {
		V_11 = 1;
		goto IL_0817;
	}

IL_07d3:
	{
		// if (!addDestination(new Coordinate(0, i), piece, ref destinationList)) {
		int32_t L_378 = V_11;
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_379 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_379, 0, L_378, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_380 = ___piece0;
		bool L_381;
		L_381 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_379, L_380, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		if (!L_381)
		{
			goto IL_0828;
		}
	}
	{
		// if (m_pieceArray[piece.m_position.x, piece.m_position.y + i]) {
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_382 = __this->get_m_pieceArray_15();
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_383 = ___piece0;
		NullCheck(L_383);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_384;
		L_384 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_383, /*hidden argument*/NULL);
		NullCheck(L_384);
		int32_t L_385 = L_384->get_x_0();
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_386 = ___piece0;
		NullCheck(L_386);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_387;
		L_387 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_386, /*hidden argument*/NULL);
		NullCheck(L_387);
		int32_t L_388 = L_387->get_y_1();
		int32_t L_389 = V_11;
		NullCheck(L_382);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_390;
		L_390 = (L_382)->GetAt(L_385, ((int32_t)il2cpp_codegen_add((int32_t)L_388, (int32_t)L_389)));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_391;
		L_391 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_390, /*hidden argument*/NULL);
		if (L_391)
		{
			goto IL_0828;
		}
	}
	{
		// for (int i = 1; piece.m_position.y + i <= 8; i++) {
		int32_t L_392 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_392, (int32_t)1));
	}

IL_0817:
	{
		// for (int i = 1; piece.m_position.y + i <= 8; i++) {
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_393 = ___piece0;
		NullCheck(L_393);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_394;
		L_394 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_393, /*hidden argument*/NULL);
		NullCheck(L_394);
		int32_t L_395 = L_394->get_y_1();
		int32_t L_396 = V_11;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_395, (int32_t)L_396))) <= ((int32_t)8)))
		{
			goto IL_07d3;
		}
	}

IL_0828:
	{
		// if (piece.m_isPromoted) {
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_397 = ___piece0;
		NullCheck(L_397);
		bool L_398;
		L_398 = Piece_get_m_isPromoted_mA2F92D34E9392A4EA876DC96184287F394A98A86_inline(L_397, /*hidden argument*/NULL);
		if (!L_398)
		{
			goto IL_0937;
		}
	}
	{
		// addDestination(new Coordinate(-1, -1), piece, ref destinationList);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_399 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_399, (-1), (-1), /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_400 = ___piece0;
		bool L_401;
		L_401 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_399, L_400, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(-1, 1), piece, ref destinationList);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_402 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_402, (-1), 1, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_403 = ___piece0;
		bool L_404;
		L_404 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_402, L_403, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(1, -1), piece, ref destinationList);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_405 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_405, 1, (-1), /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_406 = ___piece0;
		bool L_407;
		L_407 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_405, L_406, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(1, 1), piece, ref destinationList);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_408 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_408, 1, 1, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_409 = ___piece0;
		bool L_410;
		L_410 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_408, L_409, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// break;
		goto IL_0937;
	}

IL_087c:
	{
		// if (!piece.m_isPromoted) {
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_411 = ___piece0;
		NullCheck(L_411);
		bool L_412;
		L_412 = Piece_get_m_isPromoted_mA2F92D34E9392A4EA876DC96184287F394A98A86_inline(L_411, /*hidden argument*/NULL);
		if (L_412)
		{
			goto IL_08a5;
		}
	}
	{
		// addDestination(new Coordinate(0, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_413 = ___piece0;
		NullCheck(L_413);
		int32_t L_414;
		L_414 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_413, /*hidden argument*/NULL);
		G_B136_0 = 0;
		G_B136_1 = __this;
		if (!L_414)
		{
			G_B137_0 = 0;
			G_B137_1 = __this;
			goto IL_0891;
		}
	}
	{
		G_B138_0 = 1;
		G_B138_1 = G_B136_0;
		G_B138_2 = G_B136_1;
		goto IL_0892;
	}

IL_0891:
	{
		G_B138_0 = (-1);
		G_B138_1 = G_B137_0;
		G_B138_2 = G_B137_1;
	}

IL_0892:
	{
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_415 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_415, G_B138_1, G_B138_0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_416 = ___piece0;
		NullCheck(G_B138_2);
		bool L_417;
		L_417 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(G_B138_2, L_415, L_416, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// } else {
		goto IL_0937;
	}

IL_08a5:
	{
		// addDestination(new Coordinate(-1, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_418 = ___piece0;
		NullCheck(L_418);
		int32_t L_419;
		L_419 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_418, /*hidden argument*/NULL);
		G_B140_0 = (-1);
		G_B140_1 = __this;
		if (!L_419)
		{
			G_B141_0 = (-1);
			G_B141_1 = __this;
			goto IL_08b2;
		}
	}
	{
		G_B142_0 = 1;
		G_B142_1 = G_B140_0;
		G_B142_2 = G_B140_1;
		goto IL_08b3;
	}

IL_08b2:
	{
		G_B142_0 = (-1);
		G_B142_1 = G_B141_0;
		G_B142_2 = G_B141_1;
	}

IL_08b3:
	{
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_420 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_420, G_B142_1, G_B142_0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_421 = ___piece0;
		NullCheck(G_B142_2);
		bool L_422;
		L_422 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(G_B142_2, L_420, L_421, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(0, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_423 = ___piece0;
		NullCheck(L_423);
		int32_t L_424;
		L_424 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_423, /*hidden argument*/NULL);
		G_B143_0 = 0;
		G_B143_1 = __this;
		if (!L_424)
		{
			G_B144_0 = 0;
			G_B144_1 = __this;
			goto IL_08ce;
		}
	}
	{
		G_B145_0 = 1;
		G_B145_1 = G_B143_0;
		G_B145_2 = G_B143_1;
		goto IL_08cf;
	}

IL_08ce:
	{
		G_B145_0 = (-1);
		G_B145_1 = G_B144_0;
		G_B145_2 = G_B144_1;
	}

IL_08cf:
	{
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_425 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_425, G_B145_1, G_B145_0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_426 = ___piece0;
		NullCheck(G_B145_2);
		bool L_427;
		L_427 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(G_B145_2, L_425, L_426, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(1, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_428 = ___piece0;
		NullCheck(L_428);
		int32_t L_429;
		L_429 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_428, /*hidden argument*/NULL);
		G_B146_0 = 1;
		G_B146_1 = __this;
		if (!L_429)
		{
			G_B147_0 = 1;
			G_B147_1 = __this;
			goto IL_08ea;
		}
	}
	{
		G_B148_0 = 1;
		G_B148_1 = G_B146_0;
		G_B148_2 = G_B146_1;
		goto IL_08eb;
	}

IL_08ea:
	{
		G_B148_0 = (-1);
		G_B148_1 = G_B147_0;
		G_B148_2 = G_B147_1;
	}

IL_08eb:
	{
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_430 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_430, G_B148_1, G_B148_0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_431 = ___piece0;
		NullCheck(G_B148_2);
		bool L_432;
		L_432 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(G_B148_2, L_430, L_431, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(1, 0), piece, ref destinationList);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_433 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_433, 1, 0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_434 = ___piece0;
		bool L_435;
		L_435 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_433, L_434, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(-1, 0), piece, ref destinationList);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_436 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_436, (-1), 0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_437 = ___piece0;
		bool L_438;
		L_438 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(__this, L_436, L_437, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
		// addDestination(new Coordinate(0, (piece.m_whose == Who.One) ? 1 : -1), piece, ref destinationList);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_439 = ___piece0;
		NullCheck(L_439);
		int32_t L_440;
		L_440 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_439, /*hidden argument*/NULL);
		G_B149_0 = 0;
		G_B149_1 = __this;
		if (!L_440)
		{
			G_B150_0 = 0;
			G_B150_1 = __this;
			goto IL_0928;
		}
	}
	{
		G_B151_0 = (-1);
		G_B151_1 = G_B149_0;
		G_B151_2 = G_B149_1;
		goto IL_0929;
	}

IL_0928:
	{
		G_B151_0 = 1;
		G_B151_1 = G_B150_0;
		G_B151_2 = G_B150_1;
	}

IL_0929:
	{
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_441 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_441, G_B151_1, G_B151_0, /*hidden argument*/NULL);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_442 = ___piece0;
		NullCheck(G_B151_2);
		bool L_443;
		L_443 = GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC(G_B151_2, L_441, L_442, (List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)(&V_0), /*hidden argument*/NULL);
	}

IL_0937:
	{
		// return destinationList;
		List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 * L_444 = V_0;
		return L_444;
	}
}
// System.Boolean GameManager::addDestination(Coordinate,Piece,System.Collections.Generic.List`1<Coordinate>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * ___moveCoordinate0, Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * ___piece1, List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 ** ___destinationList2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, GameManager_addDestination_mF21DF17AC12F9A6970760EF3E98E5223C7A713CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * V_0 = NULL;
	{
		// Coordinate destination = new Coordinate(moveCoordinate.x + piece.m_position.x, moveCoordinate.y + piece.m_position.y);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_0 = ___moveCoordinate0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_x_0();
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_2 = ___piece1;
		NullCheck(L_2);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_3;
		L_3 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = L_3->get_x_0();
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_5 = ___moveCoordinate0;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_y_1();
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_7 = ___piece1;
		NullCheck(L_7);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_8;
		L_8 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = L_8->get_y_1();
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_10 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_10, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_4)), ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_9)), /*hidden argument*/NULL);
		V_0 = L_10;
		// if (destination.x < 0 || 8 < destination.x) {
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_x_0();
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_x_0();
		if ((((int32_t)8) >= ((int32_t)L_14)))
		{
			goto IL_003e;
		}
	}

IL_003c:
	{
		// return false;
		return (bool)0;
	}

IL_003e:
	{
		// if (destination.y < 0 || 8 < destination.y) {
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_y_1();
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = L_17->get_y_1();
		if ((((int32_t)8) >= ((int32_t)L_18)))
		{
			goto IL_0052;
		}
	}

IL_0050:
	{
		// return false;
		return (bool)0;
	}

IL_0052:
	{
		// if (m_pieceArray[destination.x, destination.y]) {
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_19 = __this->get_m_pieceArray_15();
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = L_20->get_x_0();
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_y_1();
		NullCheck(L_19);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = (L_19)->GetAt(L_21, L_23);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_009b;
		}
	}
	{
		// if (piece.m_whose == m_pieceArray[destination.x, destination.y].GetComponent<Piece>().m_whose) {
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_26 = ___piece1;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_26, /*hidden argument*/NULL);
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_28 = __this->get_m_pieceArray_15();
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = L_29->get_x_0();
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = L_31->get_y_1();
		NullCheck(L_28);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33;
		L_33 = (L_28)->GetAt(L_30, L_32);
		NullCheck(L_33);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_34;
		L_34 = GameObject_GetComponent_TisPiece_tBB694F50405042E44F45E94D75887A6B91292BF1_m7CC851C28491D4E61E473F9B5A4F4BD34173A629(L_33, /*hidden argument*/GameObject_GetComponent_TisPiece_tBB694F50405042E44F45E94D75887A6B91292BF1_m7CC851C28491D4E61E473F9B5A4F4BD34173A629_RuntimeMethod_var);
		NullCheck(L_34);
		int32_t L_35;
		L_35 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_34, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_27) == ((uint32_t)L_35))))
		{
			goto IL_009b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_009b:
	{
		// destinationList.Add(destination);
		List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 ** L_36 = ___destinationList2;
		List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 * L_37 = *((List_1_t3B046A0B2CE13A99A8178CC75482D1853283F3C0 **)L_36);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_38 = V_0;
		NullCheck(L_37);
		List_1_Add_m72BAA509310E537FAD6882AE599524DED6465BE7(L_37, L_38, /*hidden argument*/List_1_Add_m72BAA509310E537FAD6882AE599524DED6465BE7_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}
}
// System.Boolean GameManager::validatePromoiton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_validatePromoiton_m3F2E249685807B8BE15EB44CCCA4D4375DFADE15 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// if(m_isSelectedPieceButton) {
		bool L_0 = __this->get_m_isSelectedPieceButton_22();
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// if(m_selectedPiece.m_whose == m_selectedSquere.m_whose) {
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_1 = __this->get_m_selectedPiece_18();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_1, /*hidden argument*/NULL);
		Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * L_3 = __this->get_m_selectedSquere_19();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Squere_get_m_whose_m81BEEB026071D084A52B5B71024F96043A575BDA_inline(L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0024;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if(m_selectedSquere.m_whose == Who.No) {
		Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * L_5 = __this->get_m_selectedSquere_19();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Squere_get_m_whose_m81BEEB026071D084A52B5B71024F96043A575BDA_inline(L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)(-1)))))
		{
			goto IL_0034;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0034:
	{
		// if(m_selectedPiece.m_isPromoted) {
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_7 = __this->get_m_selectedPiece_18();
		NullCheck(L_7);
		bool L_8;
		L_8 = Piece_get_m_isPromoted_mA2F92D34E9392A4EA876DC96184287F394A98A86_inline(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0043:
	{
		// if(!m_selectedPiece.m_isAblePromote) {
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_9 = __this->get_m_selectedPiece_18();
		NullCheck(L_9);
		bool L_10;
		L_10 = Piece_get_m_isAblePromote_m75710BD1AD3FEF5058780665C1A405ABB6F55FD5_inline(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0052;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0052:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void GameManager::onSelectInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_onSelectInfo_m2AD12084F987BE2329CCE501B72556350EE8AE1C (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, GameManager_onSelectInfo_m2AD12084F987BE2329CCE501B72556350EE8AE1C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * V_2 = NULL;
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * V_3 = NULL;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_4 = NULL;
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * G_B4_0 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B16_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B15_0 = NULL;
	String_t* G_B17_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B17_1 = NULL;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B20_0 = NULL;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B19_0 = NULL;
	int32_t G_B21_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * G_B21_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B24_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B27_0 = NULL;
	{
		// if(!m_isSelectedPieceButton) {
		bool L_0 = __this->get_m_isSelectedPieceButton_22();
		if (L_0)
		{
			goto IL_0161;
		}
	}
	{
		// GameObject destinationPiece = m_pieceArray[m_selectedSquere.m_position.x, m_selectedSquere.m_position.y];
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_1 = __this->get_m_pieceArray_15();
		Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * L_2 = __this->get_m_selectedSquere_19();
		NullCheck(L_2);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_3;
		L_3 = Squere_get_m_position_m7A5A3B4194124B3C556EAED11157E7049D601AD9_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = L_3->get_x_0();
		Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * L_5 = __this->get_m_selectedSquere_19();
		NullCheck(L_5);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_6;
		L_6 = Squere_get_m_position_m7A5A3B4194124B3C556EAED11157E7049D601AD9_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = L_6->get_y_1();
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = (L_1)->GetAt(L_4, L_7);
		V_1 = L_8;
		// Player turnPlayer = (m_whoseTurn == Who.One ? m_playerOne : m_playerTwo);
		int32_t L_9 = __this->get_m_whoseTurn_23();
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_10 = __this->get_m_playerTwo_27();
		G_B4_0 = L_10;
		goto IL_004d;
	}

IL_0047:
	{
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_11 = __this->get_m_playerOne_26();
		G_B4_0 = L_11;
	}

IL_004d:
	{
		V_3 = G_B4_0;
		// if (destinationPiece) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_009e;
		}
	}
	{
		// destinationPieceObject = destinationPiece.GetComponent<Piece>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = V_1;
		NullCheck(L_14);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_15;
		L_15 = GameObject_GetComponent_TisPiece_tBB694F50405042E44F45E94D75887A6B91292BF1_m7CC851C28491D4E61E473F9B5A4F4BD34173A629(L_14, /*hidden argument*/GameObject_GetComponent_TisPiece_tBB694F50405042E44F45E94D75887A6B91292BF1_m7CC851C28491D4E61E473F9B5A4F4BD34173A629_RuntimeMethod_var);
		V_2 = L_15;
		// if (destinationPieceObject.m_pieceClass == PieceClass.Ou) {
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_16 = V_2;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Piece_get_m_pieceClass_m5BF8DBEE3EFEF7BA559AAFD082A714F7AC412401_inline(L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_008b;
		}
	}
	{
		// Debug.Log("WIN Player " + (destinationPieceObject.m_whose == Who.Two ? "One" : "Two"));
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_18 = V_2;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(L_18, /*hidden argument*/NULL);
		G_B7_0 = _stringLiteralD2399B7AD7E4B069C5F9DE67D24F86EE90098448;
		if ((((int32_t)L_19) == ((int32_t)1)))
		{
			G_B8_0 = _stringLiteralD2399B7AD7E4B069C5F9DE67D24F86EE90098448;
			goto IL_007a;
		}
	}
	{
		G_B9_0 = _stringLiteral391E0449A39C18F279012AA837BFB9F9ECBBA2AE;
		G_B9_1 = G_B7_0;
		goto IL_007f;
	}

IL_007a:
	{
		G_B9_0 = _stringLiteral8AF1B8EC176834ECE63ABE42587B79B4F11D5E9D;
		G_B9_1 = G_B8_0;
	}

IL_007f:
	{
		String_t* L_20;
		L_20 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B9_1, G_B9_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_20, /*hidden argument*/NULL);
		// } else {
		goto IL_0098;
	}

IL_008b:
	{
		// turnPlayer.pushPiece(destinationPieceObject.m_pieceClass);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_21 = V_3;
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = Piece_get_m_pieceClass_m5BF8DBEE3EFEF7BA559AAFD082A714F7AC412401_inline(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		bool L_24;
		L_24 = Player_pushPiece_m396373614860D093E68DC0876B9F8EA7DBB8E734(L_21, L_23, /*hidden argument*/NULL);
	}

IL_0098:
	{
		// Destroy(destinationPiece);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_25, /*hidden argument*/NULL);
	}

IL_009e:
	{
		// m_pieceArray[m_selectedSquere.m_position.x, m_selectedSquere.m_position.y] = m_pieceArray[m_selectedPiece.m_position.x, m_selectedPiece.m_position.y];
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_26 = __this->get_m_pieceArray_15();
		Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * L_27 = __this->get_m_selectedSquere_19();
		NullCheck(L_27);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_28;
		L_28 = Squere_get_m_position_m7A5A3B4194124B3C556EAED11157E7049D601AD9_inline(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		int32_t L_29 = L_28->get_x_0();
		Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * L_30 = __this->get_m_selectedSquere_19();
		NullCheck(L_30);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_31;
		L_31 = Squere_get_m_position_m7A5A3B4194124B3C556EAED11157E7049D601AD9_inline(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		int32_t L_32 = L_31->get_y_1();
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_33 = __this->get_m_pieceArray_15();
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_34 = __this->get_m_selectedPiece_18();
		NullCheck(L_34);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_35;
		L_35 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		int32_t L_36 = L_35->get_x_0();
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_37 = __this->get_m_selectedPiece_18();
		NullCheck(L_37);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_38;
		L_38 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		int32_t L_39 = L_38->get_y_1();
		NullCheck(L_33);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40;
		L_40 = (L_33)->GetAt(L_36, L_39);
		NullCheck(L_26);
		(L_26)->SetAt(L_29, L_32, L_40);
		// m_pieceArray[m_selectedPiece.m_position.x, m_selectedPiece.m_position.y] = null;
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_41 = __this->get_m_pieceArray_15();
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_42 = __this->get_m_selectedPiece_18();
		NullCheck(L_42);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_43;
		L_43 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		int32_t L_44 = L_43->get_x_0();
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_45 = __this->get_m_selectedPiece_18();
		NullCheck(L_45);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_46;
		L_46 = Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline(L_45, /*hidden argument*/NULL);
		NullCheck(L_46);
		int32_t L_47 = L_46->get_y_1();
		NullCheck(L_41);
		(L_41)->SetAt(L_44, L_47, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// m_selectedPiece.move(m_selectedSquere.m_position, m_selectedSquere.transform.position);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_48 = __this->get_m_selectedPiece_18();
		Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * L_49 = __this->get_m_selectedSquere_19();
		NullCheck(L_49);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_50;
		L_50 = Squere_get_m_position_m7A5A3B4194124B3C556EAED11157E7049D601AD9_inline(L_49, /*hidden argument*/NULL);
		Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * L_51 = __this->get_m_selectedSquere_19();
		NullCheck(L_51);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_51, /*hidden argument*/NULL);
		NullCheck(L_52);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_52, /*hidden argument*/NULL);
		NullCheck(L_48);
		Piece_move_m15826305154025AC6590FF7B0B35DBA8633B67C8(L_48, L_50, L_53, /*hidden argument*/NULL);
		// if (m_selectedIsPromoted) {
		bool L_54 = __this->get_m_selectedIsPromoted_20();
		if (!L_54)
		{
			goto IL_02a9;
		}
	}
	{
		// m_selectedPiece.promote();
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_55 = __this->get_m_selectedPiece_18();
		NullCheck(L_55);
		Piece_promote_mDA949A1330819BA26866E731CBFABFA2B7E53ADE(L_55, /*hidden argument*/NULL);
		// } else {
		goto IL_02a9;
	}

IL_0161:
	{
		// GameObject[] pieceArray = new GameObject[] {
		//     m_pieceOu,
		//     m_pieceKin,
		//     m_pieceGin,
		//     m_pieceKeima,
		//     m_pieceKyosha,
		//     m_pieceKaku,
		//     m_pieceHisha,
		//     m_pieceHu
		// };
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_56 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)8);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_57 = L_56;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58 = __this->get_m_pieceOu_7();
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_58);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_58);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_59 = L_57;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_60 = __this->get_m_pieceKin_8();
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, L_60);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(1), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_60);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_61 = L_59;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_62 = __this->get_m_pieceGin_9();
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_62);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(2), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_62);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_63 = L_61;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_64 = __this->get_m_pieceKeima_10();
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_64);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(3), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_64);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_65 = L_63;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_66 = __this->get_m_pieceKyosha_11();
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_66);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(4), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_66);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_67 = L_65;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_68 = __this->get_m_pieceKaku_12();
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_68);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(5), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_68);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_69 = L_67;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_70 = __this->get_m_pieceHisha_13();
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, L_70);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(6), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_70);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_71 = L_69;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_72 = __this->get_m_pieceHu_14();
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_72);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(7), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_72);
		V_4 = L_71;
		// m_pieceArray[m_selectedSquere.m_position.x, m_selectedSquere.m_position.y] = Instantiate(pieceArray[(int)m_selectedPieceButtonClass], m_selectedSquere.transform.position, Quaternion.identity);
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_73 = __this->get_m_pieceArray_15();
		Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * L_74 = __this->get_m_selectedSquere_19();
		NullCheck(L_74);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_75;
		L_75 = Squere_get_m_position_m7A5A3B4194124B3C556EAED11157E7049D601AD9_inline(L_74, /*hidden argument*/NULL);
		NullCheck(L_75);
		int32_t L_76 = L_75->get_x_0();
		Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * L_77 = __this->get_m_selectedSquere_19();
		NullCheck(L_77);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_78;
		L_78 = Squere_get_m_position_m7A5A3B4194124B3C556EAED11157E7049D601AD9_inline(L_77, /*hidden argument*/NULL);
		NullCheck(L_78);
		int32_t L_79 = L_78->get_y_1();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_80 = V_4;
		int32_t L_81 = __this->get_m_selectedPieceButtonClass_21();
		NullCheck(L_80);
		int32_t L_82 = L_81;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * L_84 = __this->get_m_selectedSquere_19();
		NullCheck(L_84);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_85;
		L_85 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_84, /*hidden argument*/NULL);
		NullCheck(L_85);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_86;
		L_86 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_85, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_87;
		L_87 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_88;
		L_88 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_83, L_86, L_87, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		NullCheck(L_73);
		(L_73)->SetAt(L_76, L_79, L_88);
		// m_pieceArray[m_selectedSquere.m_position.x, m_selectedSquere.m_position.y].GetComponent<Piece>().initialize(m_selectedPieceButtonClass, m_whoseTurn, new Coordinate(m_selectedSquere.m_position.x, m_selectedSquere.m_position.y));
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_89 = __this->get_m_pieceArray_15();
		Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * L_90 = __this->get_m_selectedSquere_19();
		NullCheck(L_90);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_91;
		L_91 = Squere_get_m_position_m7A5A3B4194124B3C556EAED11157E7049D601AD9_inline(L_90, /*hidden argument*/NULL);
		NullCheck(L_91);
		int32_t L_92 = L_91->get_x_0();
		Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * L_93 = __this->get_m_selectedSquere_19();
		NullCheck(L_93);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_94;
		L_94 = Squere_get_m_position_m7A5A3B4194124B3C556EAED11157E7049D601AD9_inline(L_93, /*hidden argument*/NULL);
		NullCheck(L_94);
		int32_t L_95 = L_94->get_y_1();
		NullCheck(L_89);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_96;
		L_96 = (L_89)->GetAt(L_92, L_95);
		NullCheck(L_96);
		Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * L_97;
		L_97 = GameObject_GetComponent_TisPiece_tBB694F50405042E44F45E94D75887A6B91292BF1_m7CC851C28491D4E61E473F9B5A4F4BD34173A629(L_96, /*hidden argument*/GameObject_GetComponent_TisPiece_tBB694F50405042E44F45E94D75887A6B91292BF1_m7CC851C28491D4E61E473F9B5A4F4BD34173A629_RuntimeMethod_var);
		int32_t L_98 = __this->get_m_selectedPieceButtonClass_21();
		int32_t L_99 = __this->get_m_whoseTurn_23();
		Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * L_100 = __this->get_m_selectedSquere_19();
		NullCheck(L_100);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_101;
		L_101 = Squere_get_m_position_m7A5A3B4194124B3C556EAED11157E7049D601AD9_inline(L_100, /*hidden argument*/NULL);
		NullCheck(L_101);
		int32_t L_102 = L_101->get_x_0();
		Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * L_103 = __this->get_m_selectedSquere_19();
		NullCheck(L_103);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_104;
		L_104 = Squere_get_m_position_m7A5A3B4194124B3C556EAED11157E7049D601AD9_inline(L_103, /*hidden argument*/NULL);
		NullCheck(L_104);
		int32_t L_105 = L_104->get_y_1();
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_106 = (Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 *)il2cpp_codegen_object_new(Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99_il2cpp_TypeInfo_var);
		Coordinate__ctor_m4564AA2774545261A4BC5BAE1267E94B50B3018B(L_106, L_102, L_105, /*hidden argument*/NULL);
		NullCheck(L_97);
		Piece_initialize_m5AD3F3E2ABB4BC32039F3FC32C4A90D656F6B55C(L_97, L_98, L_99, L_106, /*hidden argument*/NULL);
		// m_pieceArray[m_selectedSquere.m_position.x, m_selectedSquere.m_position.y].tag = ((m_whoseTurn == Who.One) ? "OnesPiece" : "TwosPiece");
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_107 = __this->get_m_pieceArray_15();
		Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * L_108 = __this->get_m_selectedSquere_19();
		NullCheck(L_108);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_109;
		L_109 = Squere_get_m_position_m7A5A3B4194124B3C556EAED11157E7049D601AD9_inline(L_108, /*hidden argument*/NULL);
		NullCheck(L_109);
		int32_t L_110 = L_109->get_x_0();
		Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * L_111 = __this->get_m_selectedSquere_19();
		NullCheck(L_111);
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_112;
		L_112 = Squere_get_m_position_m7A5A3B4194124B3C556EAED11157E7049D601AD9_inline(L_111, /*hidden argument*/NULL);
		NullCheck(L_112);
		int32_t L_113 = L_112->get_y_1();
		NullCheck(L_107);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_114;
		L_114 = (L_107)->GetAt(L_110, L_113);
		int32_t L_115 = __this->get_m_whoseTurn_23();
		G_B15_0 = L_114;
		if (!L_115)
		{
			G_B16_0 = L_114;
			goto IL_029f;
		}
	}
	{
		G_B17_0 = _stringLiteralEA82B36DE74FB11953A4FBEEA1594B91F3935E40;
		G_B17_1 = G_B15_0;
		goto IL_02a4;
	}

IL_029f:
	{
		G_B17_0 = _stringLiteral291C2119084D01A58F510F79D211330B0025C8DF;
		G_B17_1 = G_B16_0;
	}

IL_02a4:
	{
		NullCheck(G_B17_1);
		GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE(G_B17_1, G_B17_0, /*hidden argument*/NULL);
	}

IL_02a9:
	{
		// m_whoseTurn = (m_whoseTurn == Who.One ? Who.Two : Who.One);
		int32_t L_116 = __this->get_m_whoseTurn_23();
		G_B19_0 = __this;
		if (!L_116)
		{
			G_B20_0 = __this;
			goto IL_02b5;
		}
	}
	{
		G_B21_0 = 0;
		G_B21_1 = G_B19_0;
		goto IL_02b6;
	}

IL_02b5:
	{
		G_B21_0 = 1;
		G_B21_1 = G_B20_0;
	}

IL_02b6:
	{
		NullCheck(G_B21_1);
		G_B21_1->set_m_whoseTurn_23(G_B21_0);
		// GameObject toActiveCamera = (m_whoseTurn == Who.One ? m_playerOneObject : m_playerTwoObject);
		int32_t L_117 = __this->get_m_whoseTurn_23();
		if (!L_117)
		{
			goto IL_02cb;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_118 = __this->get_m_playerTwoObject_25();
		G_B24_0 = L_118;
		goto IL_02d1;
	}

IL_02cb:
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_119 = __this->get_m_playerOneObject_24();
		G_B24_0 = L_119;
	}

IL_02d1:
	{
		V_0 = G_B24_0;
		// GameObject toDeactiveCamera = (m_whoseTurn != Who.One ? m_playerOneObject : m_playerTwoObject);
		int32_t L_120 = __this->get_m_whoseTurn_23();
		if (L_120)
		{
			goto IL_02e2;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_121 = __this->get_m_playerTwoObject_25();
		G_B27_0 = L_121;
		goto IL_02e8;
	}

IL_02e2:
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_122 = __this->get_m_playerOneObject_24();
		G_B27_0 = L_122;
	}

IL_02e8:
	{
		// toActiveCamera.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_123 = V_0;
		NullCheck(L_123);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_123, (bool)1, /*hidden argument*/NULL);
		// toDeactiveCamera.SetActive(false);
		NullCheck(G_B27_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(G_B27_0, (bool)0, /*hidden argument*/NULL);
		// initSelectedInfomation();
		GameManager_initSelectedInfomation_mF7191A6D0E0F9F014FCB1C3D67DF07692C4D8DAA(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private GameObject[,] m_squereArray = new GameObject[9, 9]; //???[???, ???]
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)((int32_t)9), (il2cpp_array_size_t)((int32_t)9) };
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_0 = (GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9*)GenArrayNew(GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9_il2cpp_TypeInfo_var, L_1);
		__this->set_m_squereArray_6(L_0);
		// private GameObject[,] m_pieceArray = new GameObject[9, 9]; //???[???, ???]
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)((int32_t)9), (il2cpp_array_size_t)((int32_t)9) };
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_2 = (GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9*)GenArrayNew(GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9_il2cpp_TypeInfo_var, L_3);
		__this->set_m_pieceArray_15(L_2);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void NoButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoButton_Start_m7BBB92BB29A4C7A729FEC3CC7600328B4F109FA9 (NoButton_t88A6CF75CD410BD19CA6848ACBCB8454B30FB8A0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, NoButton_Start_m7BBB92BB29A4C7A729FEC3CC7600328B4F109FA9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_gameManagerObject = m_gameManager.GetComponent<GameManager>();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_m_gameManager_4();
		NullCheck(L_0);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1;
		L_1 = Component_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m42A3843763DD21708AEDC1B157749ACEE65AD650(L_0, /*hidden argument*/Component_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m42A3843763DD21708AEDC1B157749ACEE65AD650_RuntimeMethod_var);
		__this->set_m_gameManagerObject_5(L_1);
		// }
		return;
	}
}
// System.Void NoButton::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoButton_OnClick_m4739D4E97A251A0288C075F42AD57FE8B5E90B24 (NoButton_t88A6CF75CD410BD19CA6848ACBCB8454B30FB8A0 * __this, const RuntimeMethod* method)
{
	{
		// m_gameManagerObject.onClickNoButton();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_m_gameManagerObject_5();
		NullCheck(L_0);
		GameManager_onClickNoButton_m8EB7BAEBDB0BDFACB291C2BCC39440D703BEB571(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NoButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoButton__ctor_m0C79DCCC112C68C4454B23B3925DD2DE13C4C1D3 (NoButton_t88A6CF75CD410BD19CA6848ACBCB8454B30FB8A0 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// PieceClass Piece::get_m_pieceClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Piece_get_m_pieceClass_m5BF8DBEE3EFEF7BA559AAFD082A714F7AC412401 (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, const RuntimeMethod* method)
{
	{
		// public PieceClass m_pieceClass { get; private set; }
		int32_t L_0 = __this->get_U3Cm_pieceClassU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Piece::set_m_pieceClass(PieceClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Piece_set_m_pieceClass_m3D8501155057B065F79D41B515DF256E2B59A3AF (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public PieceClass m_pieceClass { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3Cm_pieceClassU3Ek__BackingField_4(L_0);
		return;
	}
}
// Who Piece::get_m_whose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2 (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, const RuntimeMethod* method)
{
	{
		// public Who m_whose { get; private set; }
		int32_t L_0 = __this->get_U3Cm_whoseU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Piece::set_m_whose(Who)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Piece_set_m_whose_m49DD56D6DA85A548D5606132647F65E524D69049 (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public Who m_whose { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3Cm_whoseU3Ek__BackingField_5(L_0);
		return;
	}
}
// Coordinate Piece::get_m_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865 (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, const RuntimeMethod* method)
{
	{
		// public Coordinate m_position { get; private set; }
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_0 = __this->get_U3Cm_positionU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Piece::set_m_position(Coordinate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Piece_set_m_position_m786E96F4FEA5EAB3062D692D9DA5B8041A7A2F68 (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * ___value0, const RuntimeMethod* method)
{
	{
		// public Coordinate m_position { get; private set; }
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_0 = ___value0;
		__this->set_U3Cm_positionU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Boolean Piece::get_m_isPromoted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Piece_get_m_isPromoted_mA2F92D34E9392A4EA876DC96184287F394A98A86 (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, const RuntimeMethod* method)
{
	{
		// public bool m_isPromoted { get; private set; }
		bool L_0 = __this->get_U3Cm_isPromotedU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Piece::set_m_isPromoted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Piece_set_m_isPromoted_mF41FE204F6A76335D5F7761C8246A1041EDD6462 (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool m_isPromoted { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3Cm_isPromotedU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Boolean Piece::get_m_isAblePromote()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Piece_get_m_isAblePromote_m75710BD1AD3FEF5058780665C1A405ABB6F55FD5 (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, const RuntimeMethod* method)
{
	{
		// public bool m_isAblePromote { get; private set; }
		bool L_0 = __this->get_U3Cm_isAblePromoteU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Piece::set_m_isAblePromote(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Piece_set_m_isAblePromote_mFED2184CD3BFCC00E4291B906C89BEC782265463 (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool m_isAblePromote { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3Cm_isAblePromoteU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void Piece::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Piece_Start_m330B8E465599E028F069122421BBE98AB48023D3 (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, Piece_Start_m330B8E465599E028F069122421BBE98AB48023D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_pieceAnimator = transform.GetChild(0).gameObject.GetComponent<PieceAnimetor>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_0, 0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		PieceAnimetor_t4CB4E767694190A636F60984557795857254B035 * L_3;
		L_3 = GameObject_GetComponent_TisPieceAnimetor_t4CB4E767694190A636F60984557795857254B035_mC900D1987A3B953193B68D9F766D4E03125EEC41(L_2, /*hidden argument*/GameObject_GetComponent_TisPieceAnimetor_t4CB4E767694190A636F60984557795857254B035_mC900D1987A3B953193B68D9F766D4E03125EEC41_RuntimeMethod_var);
		__this->set_m_pieceAnimator_12(L_3);
		// }
		return;
	}
}
// System.Void Piece::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Piece_Update_m022F474079DFF4CB8813B167D1700D0A3ABEA3D8 (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, Piece_Update_m022F474079DFF4CB8813B167D1700D0A3ABEA3D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float G_B6_0 = 0.0f;
	Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * G_B6_1 = NULL;
	float G_B5_0 = 0.0f;
	Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * G_B5_1 = NULL;
	float G_B7_0 = 0.0f;
	float G_B7_1 = 0.0f;
	Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * G_B7_2 = NULL;
	{
		// if (m_targetTransformRotation != transform.rotation) {
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = __this->get_m_targetTransformRotation_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Quaternion_op_Inequality_m37169F3E8ADDA24A5A221AD7397835B437B71439(L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		// transform.rotation = Quaternion.Slerp(transform.rotation, m_targetTransformRotation, 4 * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_5, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7 = __this->get_m_targetTransformRotation_11();
		float L_8;
		L_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_6, L_7, ((float)il2cpp_codegen_multiply((float)(4.0f), (float)L_8)), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_4, L_9, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0045:
	{
		// if (m_targetTransformPosition != transform.position) {
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get_m_targetTransformPosition_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_10, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0096;
		}
	}
	{
		// m_pieceAnimator.setIsWalking(true);
		PieceAnimetor_t4CB4E767694190A636F60984557795857254B035 * L_14 = __this->get_m_pieceAnimator_12();
		NullCheck(L_14);
		PieceAnimetor_setIsWalking_m1F81DC7E8E915737D221E4FBF07E2E64200AACBE(L_14, (bool)1, /*hidden argument*/NULL);
		// transform.position = Vector3.MoveTowards(transform.position, m_targetTransformPosition, 2 * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = __this->get_m_targetTransformPosition_10();
		float L_19;
		L_19 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_17, L_18, ((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_19)), /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_15, L_20, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_0096:
	{
		// m_pieceAnimator.setIsWalking(false);
		PieceAnimetor_t4CB4E767694190A636F60984557795857254B035 * L_21 = __this->get_m_pieceAnimator_12();
		NullCheck(L_21);
		PieceAnimetor_setIsWalking_m1F81DC7E8E915737D221E4FBF07E2E64200AACBE(L_21, (bool)0, /*hidden argument*/NULL);
		// m_targetTransformRotation = Quaternion.Euler(0, (m_whose == Who.One) ? 0.0f : 180.0f, 0);
		int32_t L_22;
		L_22 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(__this, /*hidden argument*/NULL);
		G_B5_0 = (0.0f);
		G_B5_1 = __this;
		if (!L_22)
		{
			G_B6_0 = (0.0f);
			G_B6_1 = __this;
			goto IL_00b7;
		}
	}
	{
		G_B7_0 = (180.0f);
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_00bc;
	}

IL_00b7:
	{
		G_B7_0 = (0.0f);
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_00bc:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23;
		L_23 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(G_B7_1, G_B7_0, (0.0f), /*hidden argument*/NULL);
		NullCheck(G_B7_2);
		G_B7_2->set_m_targetTransformRotation_11(L_23);
		// }
		return;
	}
}
// System.Void Piece::initialize(PieceClass,Who,Coordinate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Piece_initialize_m5AD3F3E2ABB4BC32039F3FC32C4A90D656F6B55C (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, int32_t ___pieceClass0, int32_t ___whose1, Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * ___position2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, Piece_initialize_m5AD3F3E2ABB4BC32039F3FC32C4A90D656F6B55C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * G_B2_0 = NULL;
	Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * G_B1_0 = NULL;
	Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * G_B3_0 = NULL;
	int32_t G_B4_0 = 0;
	Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * G_B4_1 = NULL;
	{
		// m_pieceClass = pieceClass;
		int32_t L_0 = ___pieceClass0;
		Piece_set_m_pieceClass_m3D8501155057B065F79D41B515DF256E2B59A3AF_inline(__this, L_0, /*hidden argument*/NULL);
		// m_whose = whose;
		int32_t L_1 = ___whose1;
		Piece_set_m_whose_m49DD56D6DA85A548D5606132647F65E524D69049_inline(__this, L_1, /*hidden argument*/NULL);
		// m_isPromoted = false;
		Piece_set_m_isPromoted_mF41FE204F6A76335D5F7761C8246A1041EDD6462_inline(__this, (bool)0, /*hidden argument*/NULL);
		// m_position = position;
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_2 = ___position2;
		Piece_set_m_position_m786E96F4FEA5EAB3062D692D9DA5B8041A7A2F68_inline(__this, L_2, /*hidden argument*/NULL);
		// m_isAblePromote = (!(pieceClass == PieceClass.Ou || pieceClass == PieceClass.Kin) ? true : false);
		int32_t L_3 = ___pieceClass0;
		G_B1_0 = __this;
		if (!L_3)
		{
			G_B2_0 = __this;
			goto IL_0024;
		}
	}
	{
		int32_t L_4 = ___pieceClass0;
		G_B2_0 = G_B1_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			G_B3_0 = G_B1_0;
			goto IL_0027;
		}
	}

IL_0024:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		goto IL_0028;
	}

IL_0027:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_0028:
	{
		NullCheck(G_B4_1);
		Piece_set_m_isAblePromote_mFED2184CD3BFCC00E4291B906C89BEC782265463_inline(G_B4_1, (bool)G_B4_0, /*hidden argument*/NULL);
		// if (m_isAblePromote) {
		bool L_5;
		L_5 = Piece_get_m_isAblePromote_m75710BD1AD3FEF5058780665C1A405ABB6F55FD5_inline(__this, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		// m_aura = transform.Find("Eff_Aura_6").gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_6, _stringLiteral66B91E9BC7B8A6C1F732D95C2001AAE02AD750CC, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		__this->set_m_aura_9(L_8);
	}

IL_0050:
	{
		// if (m_whose == Who.Two) {
		int32_t L_9;
		L_9 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0078;
		}
	}
	{
		// transform.Rotate(new Vector3(0, 180, 0));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_11), (0.0f), (180.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_10, L_11, /*hidden argument*/NULL);
	}

IL_0078:
	{
		// m_targetTransformPosition = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		__this->set_m_targetTransformPosition_10(L_13);
		// m_targetTransformRotation = transform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15;
		L_15 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_14, /*hidden argument*/NULL);
		__this->set_m_targetTransformRotation_11(L_15);
		// }
		return;
	}
}
// System.Void Piece::promote()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Piece_promote_mDA949A1330819BA26866E731CBFABFA2B7E53ADE (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, const RuntimeMethod* method)
{
	{
		// if (m_isAblePromote) {
		bool L_0;
		L_0 = Piece_get_m_isAblePromote_m75710BD1AD3FEF5058780665C1A405ABB6F55FD5_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// m_isPromoted = true;
		Piece_set_m_isPromoted_mF41FE204F6A76335D5F7761C8246A1041EDD6462_inline(__this, (bool)1, /*hidden argument*/NULL);
		// m_aura.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_m_aura_9();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void Piece::move(Coordinate,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Piece_move_m15826305154025AC6590FF7B0B35DBA8633B67C8 (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * ___position0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetTransformPosition1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, Piece_move_m15826305154025AC6590FF7B0B35DBA8633B67C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B2_0 = 0.0f;
	float G_B1_0 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	{
		// m_position = position;
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_0 = ___position0;
		Piece_set_m_position_m786E96F4FEA5EAB3062D692D9DA5B8041A7A2F68_inline(__this, L_0, /*hidden argument*/NULL);
		// m_targetTransformPosition = targetTransformPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___targetTransformPosition1;
		__this->set_m_targetTransformPosition_10(L_1);
		// float diffX = transform.position.x - targetTransformPosition.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___targetTransformPosition1;
		float L_6 = L_5.get_x_2();
		// float diffZ = transform.position.z - targetTransformPosition.z;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___targetTransformPosition1;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11));
		// float rotation = Mathf.Atan(diffX / diffZ) * Mathf.Rad2Deg + ((m_whose == Who.One) ? 0.0f : 180.0f);
		float L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_13;
		L_13 = atanf(((float)((float)((float)il2cpp_codegen_subtract((float)L_4, (float)L_6))/(float)L_12)));
		int32_t L_14;
		L_14 = Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline(__this, /*hidden argument*/NULL);
		G_B1_0 = ((float)il2cpp_codegen_multiply((float)L_13, (float)(57.2957802f)));
		if (!L_14)
		{
			G_B2_0 = ((float)il2cpp_codegen_multiply((float)L_13, (float)(57.2957802f)));
			goto IL_0059;
		}
	}
	{
		G_B3_0 = (180.0f);
		G_B3_1 = G_B1_0;
		goto IL_005e;
	}

IL_0059:
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B2_0;
	}

IL_005e:
	{
		V_1 = ((float)il2cpp_codegen_add((float)G_B3_1, (float)G_B3_0));
		// m_targetTransformRotation = Quaternion.Euler(0, rotation, 0);
		float L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), L_15, (0.0f), /*hidden argument*/NULL);
		__this->set_m_targetTransformRotation_11(L_16);
		// }
		return;
	}
}
// System.Void Piece::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Piece__ctor_m6782C125FA66CF25B37AD665EDFD6B4B69C24513 (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PieceAnimetor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceAnimetor_Start_m2B300C9BA7613E7281F86CB5D2E3C28423286BA9 (PieceAnimetor_t4CB4E767694190A636F60984557795857254B035 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, PieceAnimetor_Start_m2B300C9BA7613E7281F86CB5D2E3C28423286BA9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_pieceAnimator = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_m_pieceAnimator_4(L_0);
		// }
		return;
	}
}
// System.Void PieceAnimetor::setIsWalking(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceAnimetor_setIsWalking_m1F81DC7E8E915737D221E4FBF07E2E64200AACBE (PieceAnimetor_t4CB4E767694190A636F60984557795857254B035 * __this, bool ___isWalking0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, PieceAnimetor_setIsWalking_m1F81DC7E8E915737D221E4FBF07E2E64200AACBE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_pieceAnimator.SetBool("isWalking", isWalking);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_m_pieceAnimator_4();
		bool L_1 = ___isWalking0;
		NullCheck(L_0);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_0, _stringLiteral0F255915E07DA7FC595B804942A8C02376116B7A, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PieceAnimetor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceAnimetor__ctor_mA8689881987940397378021571D3F2C33A218D8E (PieceAnimetor_t4CB4E767694190A636F60984557795857254B035 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PieceButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceButton_Start_m1BDF97A46E24DEF84D46018E22BC5F304039305B (PieceButton_tB62C372A49D801FFAFF9C4D38A0EE0C55F3F7602 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, PieceButton_Start_m1BDF97A46E24DEF84D46018E22BC5F304039305B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_gameManagerObject = m_gameManager.GetComponent<GameManager>();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_m_gameManager_4();
		NullCheck(L_0);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1;
		L_1 = Component_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m42A3843763DD21708AEDC1B157749ACEE65AD650(L_0, /*hidden argument*/Component_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m42A3843763DD21708AEDC1B157749ACEE65AD650_RuntimeMethod_var);
		__this->set_m_gameManagerObject_5(L_1);
		// }
		return;
	}
}
// System.Void PieceButton::onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceButton_onClick_mEB86424D061CA0695BACCDD84E542DDC4BACBA9F (PieceButton_tB62C372A49D801FFAFF9C4D38A0EE0C55F3F7602 * __this, const RuntimeMethod* method)
{
	{
		// m_gameManagerObject.onSelectPieceButton(m_pieceClass);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_m_gameManagerObject_5();
		int32_t L_1 = __this->get_m_pieceClass_6();
		NullCheck(L_0);
		GameManager_onSelectPieceButton_m0CADD1B9CE54EC0EB35744FCA88C40DFE4312B3F(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PieceButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceButton__ctor_mDB15BAC705876F4CB7F308C6305EF8F7322D8535 (PieceButton_tB62C372A49D801FFAFF9C4D38A0EE0C55F3F7602 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Player::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Awake_m1131F11CF6BF6FBE6454601C7D9A94AC8F468A24 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, Player_Awake_m1131F11CF6BF6FBE6454601C7D9A94AC8F468A24_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_pieceDictionary[PieceClass.Kin] = 0;
		Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 * L_0 = __this->get_m_pieceDictionary_6();
		NullCheck(L_0);
		Dictionary_2_set_Item_m24BA169794FFDDE2190AF5ACFFDB083258804E2F(L_0, 1, 0, /*hidden argument*/Dictionary_2_set_Item_m24BA169794FFDDE2190AF5ACFFDB083258804E2F_RuntimeMethod_var);
		// m_pieceDictionary[PieceClass.Gin] = 0;
		Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 * L_1 = __this->get_m_pieceDictionary_6();
		NullCheck(L_1);
		Dictionary_2_set_Item_m24BA169794FFDDE2190AF5ACFFDB083258804E2F(L_1, 2, 0, /*hidden argument*/Dictionary_2_set_Item_m24BA169794FFDDE2190AF5ACFFDB083258804E2F_RuntimeMethod_var);
		// m_pieceDictionary[PieceClass.Keima] = 0;
		Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 * L_2 = __this->get_m_pieceDictionary_6();
		NullCheck(L_2);
		Dictionary_2_set_Item_m24BA169794FFDDE2190AF5ACFFDB083258804E2F(L_2, 3, 0, /*hidden argument*/Dictionary_2_set_Item_m24BA169794FFDDE2190AF5ACFFDB083258804E2F_RuntimeMethod_var);
		// m_pieceDictionary[PieceClass.Kyosha] = 0;
		Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 * L_3 = __this->get_m_pieceDictionary_6();
		NullCheck(L_3);
		Dictionary_2_set_Item_m24BA169794FFDDE2190AF5ACFFDB083258804E2F(L_3, 4, 0, /*hidden argument*/Dictionary_2_set_Item_m24BA169794FFDDE2190AF5ACFFDB083258804E2F_RuntimeMethod_var);
		// m_pieceDictionary[PieceClass.Kaku] = 0;
		Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 * L_4 = __this->get_m_pieceDictionary_6();
		NullCheck(L_4);
		Dictionary_2_set_Item_m24BA169794FFDDE2190AF5ACFFDB083258804E2F(L_4, 5, 0, /*hidden argument*/Dictionary_2_set_Item_m24BA169794FFDDE2190AF5ACFFDB083258804E2F_RuntimeMethod_var);
		// m_pieceDictionary[PieceClass.Hisha] = 0;
		Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 * L_5 = __this->get_m_pieceDictionary_6();
		NullCheck(L_5);
		Dictionary_2_set_Item_m24BA169794FFDDE2190AF5ACFFDB083258804E2F(L_5, 6, 0, /*hidden argument*/Dictionary_2_set_Item_m24BA169794FFDDE2190AF5ACFFDB083258804E2F_RuntimeMethod_var);
		// m_pieceDictionary[PieceClass.Hu] = 0;
		Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 * L_6 = __this->get_m_pieceDictionary_6();
		NullCheck(L_6);
		Dictionary_2_set_Item_m24BA169794FFDDE2190AF5ACFFDB083258804E2F(L_6, 7, 0, /*hidden argument*/Dictionary_2_set_Item_m24BA169794FFDDE2190AF5ACFFDB083258804E2F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mBD692B64AAC791B93A589E7D3596F36787EAF021 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, Player_Start_mBD692B64AAC791B93A589E7D3596F36787EAF021_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_playerCanvas = transform.Find("Canvas").gameObject.GetComponent<PlayerCanvas>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_0, _stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		PlayerCanvas_tC2E7A5A4F3D20E29CCAF7934FDC91CE2F1C0B372 * L_3;
		L_3 = GameObject_GetComponent_TisPlayerCanvas_tC2E7A5A4F3D20E29CCAF7934FDC91CE2F1C0B372_m20AB62B2221D13DD0B9BDF4D1FF9E9603B4EA4DD(L_2, /*hidden argument*/GameObject_GetComponent_TisPlayerCanvas_tC2E7A5A4F3D20E29CCAF7934FDC91CE2F1C0B372_m20AB62B2221D13DD0B9BDF4D1FF9E9603B4EA4DD_RuntimeMethod_var);
		__this->set_m_playerCanvas_5(L_3);
		// }
		return;
	}
}
// System.Boolean Player::pushPiece(PieceClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Player_pushPiece_m396373614860D093E68DC0876B9F8EA7DBB8E734 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, int32_t ___pieceClass0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, Player_pushPiece_m396373614860D093E68DC0876B9F8EA7DBB8E734_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_pieceDictionary.ContainsKey(pieceClass)) {
		Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 * L_0 = __this->get_m_pieceDictionary_6();
		int32_t L_1 = ___pieceClass0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m281B468632924FC3801DB0F901F01A2D827E9CA0(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m281B468632924FC3801DB0F901F01A2D827E9CA0_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// m_pieceDictionary[pieceClass] = m_pieceDictionary[pieceClass] + 1;
		Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 * L_3 = __this->get_m_pieceDictionary_6();
		int32_t L_4 = ___pieceClass0;
		Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 * L_5 = __this->get_m_pieceDictionary_6();
		int32_t L_6 = ___pieceClass0;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = Dictionary_2_get_Item_mF2DACCB25CA9D593F4AAD2C414473D7B6C4F990B(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_mF2DACCB25CA9D593F4AAD2C414473D7B6C4F990B_RuntimeMethod_var);
		NullCheck(L_3);
		Dictionary_2_set_Item_m24BA169794FFDDE2190AF5ACFFDB083258804E2F(L_3, L_4, ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)), /*hidden argument*/Dictionary_2_set_Item_m24BA169794FFDDE2190AF5ACFFDB083258804E2F_RuntimeMethod_var);
		// m_playerCanvas.showCount(pieceClass, m_pieceDictionary[pieceClass]);
		PlayerCanvas_tC2E7A5A4F3D20E29CCAF7934FDC91CE2F1C0B372 * L_8 = __this->get_m_playerCanvas_5();
		int32_t L_9 = ___pieceClass0;
		Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 * L_10 = __this->get_m_pieceDictionary_6();
		int32_t L_11 = ___pieceClass0;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = Dictionary_2_get_Item_mF2DACCB25CA9D593F4AAD2C414473D7B6C4F990B(L_10, L_11, /*hidden argument*/Dictionary_2_get_Item_mF2DACCB25CA9D593F4AAD2C414473D7B6C4F990B_RuntimeMethod_var);
		NullCheck(L_8);
		bool L_13;
		L_13 = PlayerCanvas_showCount_mCBABF6261E0ADA640886DE26B301F7D95D09C37A(L_8, L_9, L_12, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Boolean Player::pullPiece(PieceClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Player_pullPiece_m29BB187BBA7F3B6001877BF6F979A3629F845CF7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, int32_t ___pieceClass0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, Player_pullPiece_m29BB187BBA7F3B6001877BF6F979A3629F845CF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_pieceDictionary.ContainsKey(pieceClass)) {
		Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 * L_0 = __this->get_m_pieceDictionary_6();
		int32_t L_1 = ___pieceClass0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m281B468632924FC3801DB0F901F01A2D827E9CA0(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m281B468632924FC3801DB0F901F01A2D827E9CA0_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// if (m_pieceDictionary[pieceClass] <= 0) {
		Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 * L_3 = __this->get_m_pieceDictionary_6();
		int32_t L_4 = ___pieceClass0;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = Dictionary_2_get_Item_mF2DACCB25CA9D593F4AAD2C414473D7B6C4F990B(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_mF2DACCB25CA9D593F4AAD2C414473D7B6C4F990B_RuntimeMethod_var);
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0021:
	{
		// m_pieceDictionary[pieceClass] = m_pieceDictionary[pieceClass] - 1;
		Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 * L_6 = __this->get_m_pieceDictionary_6();
		int32_t L_7 = ___pieceClass0;
		Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 * L_8 = __this->get_m_pieceDictionary_6();
		int32_t L_9 = ___pieceClass0;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = Dictionary_2_get_Item_mF2DACCB25CA9D593F4AAD2C414473D7B6C4F990B(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_mF2DACCB25CA9D593F4AAD2C414473D7B6C4F990B_RuntimeMethod_var);
		NullCheck(L_6);
		Dictionary_2_set_Item_m24BA169794FFDDE2190AF5ACFFDB083258804E2F(L_6, L_7, ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)), /*hidden argument*/Dictionary_2_set_Item_m24BA169794FFDDE2190AF5ACFFDB083258804E2F_RuntimeMethod_var);
		// m_playerCanvas.showCount(pieceClass, m_pieceDictionary[pieceClass]);
		PlayerCanvas_tC2E7A5A4F3D20E29CCAF7934FDC91CE2F1C0B372 * L_11 = __this->get_m_playerCanvas_5();
		int32_t L_12 = ___pieceClass0;
		Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 * L_13 = __this->get_m_pieceDictionary_6();
		int32_t L_14 = ___pieceClass0;
		NullCheck(L_13);
		int32_t L_15;
		L_15 = Dictionary_2_get_Item_mF2DACCB25CA9D593F4AAD2C414473D7B6C4F990B(L_13, L_14, /*hidden argument*/Dictionary_2_get_Item_mF2DACCB25CA9D593F4AAD2C414473D7B6C4F990B_RuntimeMethod_var);
		NullCheck(L_11);
		bool L_16;
		L_16 = PlayerCanvas_showCount_mCBABF6261E0ADA640886DE26B301F7D95D09C37A(L_11, L_12, L_15, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_mDE8EB5B351975D4E7E24DE341B8B49B8A29CC2B7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, Player__ctor_mDE8EB5B351975D4E7E24DE341B8B49B8A29CC2B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<PieceClass, int> m_pieceDictionary = new Dictionary<PieceClass, int>();
		Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 * L_0 = (Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4 *)il2cpp_codegen_object_new(Dictionary_2_t8E506F0309CD86EBE4772F23E06F341685FF8DC4_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD99537C9133A8149D209D64DD537BFB2FBDAEA14(L_0, /*hidden argument*/Dictionary_2__ctor_mD99537C9133A8149D209D64DD537BFB2FBDAEA14_RuntimeMethod_var);
		__this->set_m_pieceDictionary_6(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlayerCamera::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCamera_Awake_mFC8DAAD4D4B389CFEA1631D60025EF3AD247E627 (PlayerCamera_t83DD695ACD34F7AD23F225B2EF0645997C667BDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, PlayerCamera_Awake_mFC8DAAD4D4B389CFEA1631D60025EF3AD247E627_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_gameManagerObject = m_gameManager.GetComponent<GameManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_gameManager_4();
		NullCheck(L_0);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1;
		L_1 = GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0(L_0, /*hidden argument*/GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		__this->set_m_gameManagerObject_5(L_1);
		// m_cameraObject = this.GetComponent<Camera>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		__this->set_m_cameraObject_6(L_2);
		// }
		return;
	}
}
// System.Void PlayerCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCamera_Update_m9B771B07E0F0BC7A6DD95BB9181127347A1FB5FB (PlayerCamera_t83DD695ACD34F7AD23F225B2EF0645997C667BDC * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetMouseButtonDown(0)) {
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// onLeftClick();
		PlayerCamera_onLeftClick_m80D60B06BFCF8E37625E7D75F80E1F0B3C71A0F5(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// if (Input.GetMouseButtonDown(1)) {
		bool L_1;
		L_1 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(1, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// onRightClick();
		PlayerCamera_onRightClick_mAC2C0DA9F442BDC81E75EE24A71A7E586EAB242E(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void PlayerCamera::onLeftClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCamera_onLeftClick_m80D60B06BFCF8E37625E7D75F80E1F0B3C71A0F5 (PlayerCamera_t83DD695ACD34F7AD23F225B2EF0645997C667BDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, PlayerCamera_onLeftClick_m80D60B06BFCF8E37625E7D75F80E1F0B3C71A0F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	int32_t V_1 = 0;
	PlayerCamera_t83DD695ACD34F7AD23F225B2EF0645997C667BDC * G_B5_0 = NULL;
	PlayerCamera_t83DD695ACD34F7AD23F225B2EF0645997C667BDC * G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	PlayerCamera_t83DD695ACD34F7AD23F225B2EF0645997C667BDC * G_B6_1 = NULL;
	{
		// GameObject clickedObject = null;
		V_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL;
		// switch ( m_gameManagerObject.m_selectMode )
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_m_gameManagerObject_5();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = GameManager_get_m_selectMode_m98C086EB1F109FED5548ECC447BE49EF283AC4A4_inline(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}

IL_0016:
	{
		// if (clickedObject = getClickedObject(m_whose == Who.One ? "OnesPiece" : "TwosPiece")) {
		int32_t L_4 = __this->get_m_whose_7();
		G_B4_0 = __this;
		if (!L_4)
		{
			G_B5_0 = __this;
			goto IL_0026;
		}
	}
	{
		G_B6_0 = _stringLiteralEA82B36DE74FB11953A4FBEEA1594B91F3935E40;
		G_B6_1 = G_B4_0;
		goto IL_002b;
	}

IL_0026:
	{
		G_B6_0 = _stringLiteral291C2119084D01A58F510F79D211330B0025C8DF;
		G_B6_1 = G_B5_0;
	}

IL_002b:
	{
		NullCheck(G_B6_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = PlayerCamera_getClickedObject_m8BC95DBBBAB6F579D2E125F3AE0366058BA46B5D(G_B6_1, G_B6_0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_5;
		V_0 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		// m_gameManagerObject.onSelectPiece(clickedObject);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_8 = __this->get_m_gameManagerObject_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_0;
		NullCheck(L_8);
		GameManager_onSelectPiece_m554E70CF27FD8E551F4F5B55B1515292B287C4E1(L_8, L_9, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0046:
	{
		// if (clickedObject = getClickedObject("Squere")) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = PlayerCamera_getClickedObject_m8BC95DBBBAB6F579D2E125F3AE0366058BA46B5D(__this, _stringLiteralE37D92269B451B4C7CE808585BB38FC6AFB983A0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = L_10;
		V_0 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		// m_gameManagerObject.onSelectSquere(clickedObject);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_13 = __this->get_m_gameManagerObject_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = V_0;
		NullCheck(L_13);
		GameManager_onSelectSquere_m291D6657E38BDA3C073314D198FC8BA69424424A(L_13, L_14, /*hidden argument*/NULL);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void PlayerCamera::onRightClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCamera_onRightClick_mAC2C0DA9F442BDC81E75EE24A71A7E586EAB242E (PlayerCamera_t83DD695ACD34F7AD23F225B2EF0645997C667BDC * __this, const RuntimeMethod* method)
{
	{
		// m_gameManagerObject.initSelectedInfomation();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_m_gameManagerObject_5();
		NullCheck(L_0);
		GameManager_initSelectedInfomation_mF7191A6D0E0F9F014FCB1C3D67DF07692C4D8DAA(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject PlayerCamera::getClickedObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PlayerCamera_getClickedObject_m8BC95DBBBAB6F579D2E125F3AE0366058BA46B5D (PlayerCamera_t83DD695ACD34F7AD23F225B2EF0645997C667BDC * __this, String_t* ___tag0, const RuntimeMethod* method)
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* V_1 = NULL;
	int32_t V_2 = 0;
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// GameObject clickedObject = null;
		V_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL;
		// Ray ray = m_cameraObject.ScreenPointToRay(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_m_cameraObject_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		NullCheck(L_0);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_2;
		L_2 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_0, L_1, /*hidden argument*/NULL);
		// foreach (RaycastHit hit in Physics.RaycastAll(ray)) {
		RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* L_3;
		L_3 = Physics_RaycastAll_m529EE59D6D03E4CFAECE4016C8CC4181BEC2D26D(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		V_2 = 0;
		goto IL_0050;
	}

IL_001c:
	{
		// foreach (RaycastHit hit in Physics.RaycastAll(ray)) {
		RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		// if (hit.collider.gameObject.tag == tag) {
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_8;
		L_8 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_9, /*hidden argument*/NULL);
		String_t* L_11 = ___tag0;
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		// clickedObject = hit.collider.gameObject;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_13;
		L_13 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		// break;
		goto IL_0056;
	}

IL_004c:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0050:
	{
		// foreach (RaycastHit hit in Physics.RaycastAll(ray)) {
		int32_t L_16 = V_2;
		RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_001c;
		}
	}

IL_0056:
	{
		// return clickedObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = V_0;
		return L_18;
	}
}
// System.Void PlayerCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCamera__ctor_mEC7D02708FA0EE1799559A768E8CA74A42E3C26F (PlayerCamera_t83DD695ACD34F7AD23F225B2EF0645997C667BDC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlayerCanvas::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCanvas_Start_m666CCD7A4AE1A4F2B86C501D84E81E2A3B62A5E8 (PlayerCanvas_tC2E7A5A4F3D20E29CCAF7934FDC91CE2F1C0B372 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, PlayerCanvas_Start_m666CCD7A4AE1A4F2B86C501D84E81E2A3B62A5E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_pieceCountTextDictionary[PieceClass.Kin] = transform.Find("KinUI/KinCountText").GetComponent<Text>();
		Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B * L_0 = __this->get_m_pieceCountTextDictionary_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_1, _stringLiteral52238E6F0B196864932454B59578F4FD299611E2, /*hidden argument*/NULL);
		NullCheck(L_2);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3;
		L_3 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_2, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		NullCheck(L_0);
		Dictionary_2_set_Item_m1118EEBBB44893F158AB73C94462BA5C45621B62(L_0, 1, L_3, /*hidden argument*/Dictionary_2_set_Item_m1118EEBBB44893F158AB73C94462BA5C45621B62_RuntimeMethod_var);
		// m_pieceCountTextDictionary[PieceClass.Gin] = transform.Find("GinUI/GinCountText").GetComponent<Text>();
		Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B * L_4 = __this->get_m_pieceCountTextDictionary_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_5, _stringLiteral4CF0616342BDDD9CC6A3F85B7C39EA2B7B270869, /*hidden argument*/NULL);
		NullCheck(L_6);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7;
		L_7 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_6, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		NullCheck(L_4);
		Dictionary_2_set_Item_m1118EEBBB44893F158AB73C94462BA5C45621B62(L_4, 2, L_7, /*hidden argument*/Dictionary_2_set_Item_m1118EEBBB44893F158AB73C94462BA5C45621B62_RuntimeMethod_var);
		// m_pieceCountTextDictionary[PieceClass.Keima] = transform.Find("KeimaUI/KeimaCountText").GetComponent<Text>();
		Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B * L_8 = __this->get_m_pieceCountTextDictionary_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_9, _stringLiteral353ECDD9126358810196E71D924F7B83802D551D, /*hidden argument*/NULL);
		NullCheck(L_10);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11;
		L_11 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_10, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		NullCheck(L_8);
		Dictionary_2_set_Item_m1118EEBBB44893F158AB73C94462BA5C45621B62(L_8, 3, L_11, /*hidden argument*/Dictionary_2_set_Item_m1118EEBBB44893F158AB73C94462BA5C45621B62_RuntimeMethod_var);
		// m_pieceCountTextDictionary[PieceClass.Kyosha] = transform.Find("KyoshaUI/KyoshaCountText").GetComponent<Text>();
		Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B * L_12 = __this->get_m_pieceCountTextDictionary_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_13, _stringLiteral61168DB27A25489CC4BAE6326FFAC4D74D0E1DB2, /*hidden argument*/NULL);
		NullCheck(L_14);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_15;
		L_15 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_14, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		NullCheck(L_12);
		Dictionary_2_set_Item_m1118EEBBB44893F158AB73C94462BA5C45621B62(L_12, 4, L_15, /*hidden argument*/Dictionary_2_set_Item_m1118EEBBB44893F158AB73C94462BA5C45621B62_RuntimeMethod_var);
		// m_pieceCountTextDictionary[PieceClass.Kaku] = transform.Find("KakuUI/KakuCountText").GetComponent<Text>();
		Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B * L_16 = __this->get_m_pieceCountTextDictionary_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_17, _stringLiteralE531645D15D80EFAF275371883BACBC845A3E670, /*hidden argument*/NULL);
		NullCheck(L_18);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_19;
		L_19 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_18, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		NullCheck(L_16);
		Dictionary_2_set_Item_m1118EEBBB44893F158AB73C94462BA5C45621B62(L_16, 5, L_19, /*hidden argument*/Dictionary_2_set_Item_m1118EEBBB44893F158AB73C94462BA5C45621B62_RuntimeMethod_var);
		// m_pieceCountTextDictionary[PieceClass.Hisha] = transform.Find("HishaUI/HishaCountText").GetComponent<Text>();
		Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B * L_20 = __this->get_m_pieceCountTextDictionary_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_21, _stringLiteral76D686C048ACE9145AB393249D0C7DEBB226BF2F, /*hidden argument*/NULL);
		NullCheck(L_22);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_23;
		L_23 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_22, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		NullCheck(L_20);
		Dictionary_2_set_Item_m1118EEBBB44893F158AB73C94462BA5C45621B62(L_20, 6, L_23, /*hidden argument*/Dictionary_2_set_Item_m1118EEBBB44893F158AB73C94462BA5C45621B62_RuntimeMethod_var);
		// m_pieceCountTextDictionary[PieceClass.Hu] = transform.Find("HuUI/HuCountText").GetComponent<Text>();
		Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B * L_24 = __this->get_m_pieceCountTextDictionary_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_25, _stringLiteral8D242540DECD45E21014EEDD80C915E57E94E98A, /*hidden argument*/NULL);
		NullCheck(L_26);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_27;
		L_27 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_26, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		NullCheck(L_24);
		Dictionary_2_set_Item_m1118EEBBB44893F158AB73C94462BA5C45621B62(L_24, 7, L_27, /*hidden argument*/Dictionary_2_set_Item_m1118EEBBB44893F158AB73C94462BA5C45621B62_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean PlayerCanvas::showCount(PieceClass,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerCanvas_showCount_mCBABF6261E0ADA640886DE26B301F7D95D09C37A (PlayerCanvas_tC2E7A5A4F3D20E29CCAF7934FDC91CE2F1C0B372 * __this, int32_t ___pieceClass0, int32_t ___count1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, PlayerCanvas_showCount_mCBABF6261E0ADA640886DE26B301F7D95D09C37A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_pieceCountTextDictionary.ContainsKey(pieceClass)) {
		Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B * L_0 = __this->get_m_pieceCountTextDictionary_4();
		int32_t L_1 = ___pieceClass0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m27051D0A570DB23B4D591D050B62A4C3A5C15CB2(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m27051D0A570DB23B4D591D050B62A4C3A5C15CB2_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// m_pieceCountTextDictionary[pieceClass].text = count.ToString();
		Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B * L_3 = __this->get_m_pieceCountTextDictionary_4();
		int32_t L_4 = ___pieceClass0;
		NullCheck(L_3);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5;
		L_5 = Dictionary_2_get_Item_mFAAD844080650BFC36082883DB40B715953A9B79(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_mFAAD844080650BFC36082883DB40B715953A9B79_RuntimeMethod_var);
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___count1), /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_6);
		// return true;
		return (bool)1;
	}
}
// System.Void PlayerCanvas::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCanvas__ctor_mDA313309034CBEA906788B70C506E95BA63DAFD2 (PlayerCanvas_tC2E7A5A4F3D20E29CCAF7934FDC91CE2F1C0B372 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, PlayerCanvas__ctor_mDA313309034CBEA906788B70C506E95BA63DAFD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<PieceClass, Text> m_pieceCountTextDictionary = new Dictionary<PieceClass, Text>();
		Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B * L_0 = (Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B *)il2cpp_codegen_object_new(Dictionary_2_t544373544A350607872330B0A541A9E7DB38503B_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9E01DBB9EA5540AD877F381E868FAA98AFD054D4(L_0, /*hidden argument*/Dictionary_2__ctor_m9E01DBB9EA5540AD877F381E868FAA98AFD054D4_RuntimeMethod_var);
		__this->set_m_pieceCountTextDictionary_4(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Selector::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selector_Start_m61CBCD1A53B80C1A43341295590EC397D64A5C12 (Selector_t16758C50A5CA7934A346F28F0C81271BB3B5036A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, Selector_Start_m61CBCD1A53B80C1A43341295590EC397D64A5C12_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_gameManagerObject = m_gameManager.GetComponent<GameManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_gameManager_4();
		NullCheck(L_0);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1;
		L_1 = GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0(L_0, /*hidden argument*/GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		__this->set_m_gameManagerObject_5(L_1);
		// m_cameraObject = m_mainCamera.GetComponent<Camera>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_m_mainCamera_6();
		NullCheck(L_2);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3;
		L_3 = GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49(L_2, /*hidden argument*/GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49_RuntimeMethod_var);
		__this->set_m_cameraObject_7(L_3);
		// }
		return;
	}
}
// System.Void Selector::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selector_Update_mECA0A2FB186C6B7767279F6591B199BA30169F96 (Selector_t16758C50A5CA7934A346F28F0C81271BB3B5036A * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetMouseButtonDown(0)) {
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// onLeftClick();
		Selector_onLeftClick_m46F8979333445989A59090B146141B90E4B549B8(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// if (Input.GetMouseButtonDown(1)) {
		bool L_1;
		L_1 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(1, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// onRightClick();
		Selector_onRightClick_mC8EAA1033611D61D209E7CE68016296A906018B8(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Selector::onLeftClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selector_onLeftClick_m46F8979333445989A59090B146141B90E4B549B8 (Selector_t16758C50A5CA7934A346F28F0C81271BB3B5036A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, Selector_onLeftClick_m46F8979333445989A59090B146141B90E4B549B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// GameObject clickedObject = null;
		V_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL;
		// switch ( m_gameManagerObject.m_selectMode )
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_m_gameManagerObject_5();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = GameManager_get_m_selectMode_m98C086EB1F109FED5548ECC447BE49EF283AC4A4_inline(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		return;
	}

IL_0016:
	{
		// if (clickedObject = getClickedObject("OnesPiece")) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Selector_getClickedObject_m02F633DB1E29994E599938237B317BA10FDFCE2D(__this, _stringLiteral291C2119084D01A58F510F79D211330B0025C8DF, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4;
		V_0 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		// m_gameManagerObject.onSelectPiece(clickedObject);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_7 = __this->get_m_gameManagerObject_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_0;
		NullCheck(L_7);
		GameManager_onSelectPiece_m554E70CF27FD8E551F4F5B55B1515292B287C4E1(L_7, L_8, /*hidden argument*/NULL);
		// } else if (clickedObject = getClickedObject("TwosPiece")) {
		return;
	}

IL_0037:
	{
		// } else if (clickedObject = getClickedObject("TwosPiece")) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Selector_getClickedObject_m02F633DB1E29994E599938237B317BA10FDFCE2D(__this, _stringLiteralEA82B36DE74FB11953A4FBEEA1594B91F3935E40, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = L_9;
		V_0 = L_10;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0078;
		}
	}
	{
		// m_gameManagerObject.onSelectPiece(clickedObject);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_12 = __this->get_m_gameManagerObject_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = V_0;
		NullCheck(L_12);
		GameManager_onSelectPiece_m554E70CF27FD8E551F4F5B55B1515292B287C4E1(L_12, L_13, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0058:
	{
		// if (clickedObject = getClickedObject("Squere")) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Selector_getClickedObject_m02F633DB1E29994E599938237B317BA10FDFCE2D(__this, _stringLiteralE37D92269B451B4C7CE808585BB38FC6AFB983A0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = L_14;
		V_0 = L_15;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0078;
		}
	}
	{
		// m_gameManagerObject.onSelectSquere(clickedObject);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_17 = __this->get_m_gameManagerObject_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = V_0;
		NullCheck(L_17);
		GameManager_onSelectSquere_m291D6657E38BDA3C073314D198FC8BA69424424A(L_17, L_18, /*hidden argument*/NULL);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Selector::onRightClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selector_onRightClick_mC8EAA1033611D61D209E7CE68016296A906018B8 (Selector_t16758C50A5CA7934A346F28F0C81271BB3B5036A * __this, const RuntimeMethod* method)
{
	{
		// m_gameManagerObject.initSelectedInfomation();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_m_gameManagerObject_5();
		NullCheck(L_0);
		GameManager_initSelectedInfomation_mF7191A6D0E0F9F014FCB1C3D67DF07692C4D8DAA(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject Selector::getClickedObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Selector_getClickedObject_m02F633DB1E29994E599938237B317BA10FDFCE2D (Selector_t16758C50A5CA7934A346F28F0C81271BB3B5036A * __this, String_t* ___tag0, const RuntimeMethod* method)
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* V_1 = NULL;
	int32_t V_2 = 0;
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// GameObject clickedObject = null;
		V_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL;
		// Ray ray = m_cameraObject.ScreenPointToRay(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_m_cameraObject_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		NullCheck(L_0);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_2;
		L_2 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_0, L_1, /*hidden argument*/NULL);
		// foreach (RaycastHit hit in Physics.RaycastAll(ray)) {
		RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* L_3;
		L_3 = Physics_RaycastAll_m529EE59D6D03E4CFAECE4016C8CC4181BEC2D26D(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		V_2 = 0;
		goto IL_0050;
	}

IL_001c:
	{
		// foreach (RaycastHit hit in Physics.RaycastAll(ray)) {
		RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		// if (hit.collider.gameObject.tag == tag) {
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_8;
		L_8 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_9, /*hidden argument*/NULL);
		String_t* L_11 = ___tag0;
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		// clickedObject = hit.collider.gameObject;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_13;
		L_13 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		// break;
		goto IL_0056;
	}

IL_004c:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0050:
	{
		// foreach (RaycastHit hit in Physics.RaycastAll(ray)) {
		int32_t L_16 = V_2;
		RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_001c;
		}
	}

IL_0056:
	{
		// return clickedObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = V_0;
		return L_18;
	}
}
// System.Void Selector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selector__ctor_mEFA898740E7F65F8951C6BA1A78A709BF2088A84 (Selector_t16758C50A5CA7934A346F28F0C81271BB3B5036A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityChan.SpringBone::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringBone_Awake_m9E69A3F5DACEC5AA80575E19794209B7843E4417 (SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * __this, const RuntimeMethod* method)
{
	{
		// trs = transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		__this->set_trs_16(L_0);
		// localRotation = transform.localRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_1, /*hidden argument*/NULL);
		__this->set_localRotation_15(L_2);
		// managerRef = GetParentSpringManager (transform);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * L_4;
		L_4 = SpringBone_GetParentSpringManager_mC5AE4B906C481E4FAE3842D66DDC7D2A09EF28B3(__this, L_3, /*hidden argument*/NULL);
		__this->set_managerRef_20(L_4);
		// }
		return;
	}
}
// UnityChan.SpringManager UnityChan.SpringBone::GetParentSpringManager(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * SpringBone_GetParentSpringManager_mC5AE4B906C481E4FAE3842D66DDC7D2A09EF28B3 (SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, SpringBone_GetParentSpringManager_mC5AE4B906C481E4FAE3842D66DDC7D2A09EF28B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * V_0 = NULL;
	{
		// var springManager = t.GetComponent<SpringManager> ();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___t0;
		NullCheck(L_0);
		SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * L_1;
		L_1 = Component_GetComponent_TisSpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0_mFD2B102A7A1F6F5A2BF178712A48BB19F6577566(L_0, /*hidden argument*/Component_GetComponent_TisSpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0_mFD2B102A7A1F6F5A2BF178712A48BB19F6577566_RuntimeMethod_var);
		V_0 = L_1;
		// if (springManager != null)
		SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		// return springManager;
		SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * L_4 = V_0;
		return L_4;
	}

IL_0012:
	{
		// if (t.parent != null) {
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = ___t0;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_002d;
		}
	}
	{
		// return GetParentSpringManager (t.parent);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = ___t0;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_8, /*hidden argument*/NULL);
		SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * L_10;
		L_10 = SpringBone_GetParentSpringManager_mC5AE4B906C481E4FAE3842D66DDC7D2A09EF28B3(__this, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_002d:
	{
		// return null;
		return (SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 *)NULL;
	}
}
// System.Void UnityChan.SpringBone::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringBone_Start_m69C8AD54C36FABD984EBA1156AC54BC7FA3AA421 (SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, SpringBone_Start_m69C8AD54C36FABD984EBA1156AC54BC7FA3AA421_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// springLength = Vector3.Distance (trs.position, child.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_trs_16();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_child_4();
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_1, L_3, /*hidden argument*/NULL);
		__this->set_springLength_14(L_4);
		// currTipPos = child.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_child_4();
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		__this->set_currTipPos_17(L_6);
		// prevTipPos = child.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = __this->get_child_4();
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		__this->set_prevTipPos_18(L_8);
		// }
		return;
	}
}
// System.Void UnityChan.SpringBone::UpdateSpring()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringBone_UpdateSpring_mCBB26D530A0FB706D426785811662B19C48527D0 (SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, SpringBone_UpdateSpring_mCBB26D530A0FB706D426785811662B19C48527D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// org = trs;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_trs_16();
		__this->set_org_19(L_0);
		// trs.localRotation = Quaternion.identity * localRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_trs_16();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = __this->get_localRotation_15();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_1, L_4, /*hidden argument*/NULL);
		// float sqrDt = Time.deltaTime * Time.deltaTime;
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)L_5, (float)L_6));
		// Vector3 force = trs.rotation * (boneAxis * stiffnessForce) / sqrDt;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = __this->get_trs_16();
		NullCheck(L_7);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = __this->get_boneAxis_5();
		float L_10 = __this->get_stiffnessForce_8();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_8, L_11, /*hidden argument*/NULL);
		float L_13 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_12, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		// force += (prevTipPos - currTipPos) * dragForce / sqrDt;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = __this->get_prevTipPos_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = __this->get_currTipPos_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_16, L_17, /*hidden argument*/NULL);
		float L_19 = __this->get_dragForce_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_18, L_19, /*hidden argument*/NULL);
		float L_21 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_20, L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_15, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		// force += springForce / sqrDt;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = __this->get_springForce_10();
		float L_26 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_25, L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_24, L_27, /*hidden argument*/NULL);
		V_1 = L_28;
		// Vector3 temp = currTipPos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = __this->get_currTipPos_17();
		V_2 = L_29;
		// currTipPos = (currTipPos - prevTipPos) + currTipPos + (force * sqrDt);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = __this->get_currTipPos_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = __this->get_prevTipPos_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_30, L_31, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = __this->get_currTipPos_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_32, L_33, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = V_1;
		float L_36 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_35, L_36, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_34, L_37, /*hidden argument*/NULL);
		__this->set_currTipPos_17(L_38);
		// currTipPos = ((currTipPos - trs.position).normalized * springLength) + trs.position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = __this->get_currTipPos_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40 = __this->get_trs_16();
		NullCheck(L_40);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_40, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_39, L_41, /*hidden argument*/NULL);
		V_4 = L_42;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		float L_44 = __this->get_springLength_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_43, L_44, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46 = __this->get_trs_16();
		NullCheck(L_46);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_46, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_45, L_47, /*hidden argument*/NULL);
		__this->set_currTipPos_17(L_48);
		// for (int i = 0; i < colliders.Length; i++) {
		V_5 = 0;
		goto IL_01f5;
	}

IL_0114:
	{
		// if (Vector3.Distance (currTipPos, colliders [i].transform.position) <= (radius + colliders [i].radius)) {
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49 = __this->get_currTipPos_17();
		SpringColliderU5BU5D_t5E59DD4998D2CF376312F0534FE06BBD28E39345* L_50 = __this->get_colliders_11();
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF * L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_53);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54;
		L_54 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_54, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		float L_56;
		L_56 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_49, L_55, /*hidden argument*/NULL);
		float L_57 = __this->get_radius_6();
		SpringColliderU5BU5D_t5E59DD4998D2CF376312F0534FE06BBD28E39345* L_58 = __this->get_colliders_11();
		int32_t L_59 = V_5;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF * L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_61);
		float L_62 = L_61->get_radius_4();
		if ((!(((float)L_56) <= ((float)((float)il2cpp_codegen_add((float)L_57, (float)L_62))))))
		{
			goto IL_01ef;
		}
	}
	{
		// Vector3 normal = (currTipPos - colliders [i].transform.position).normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63 = __this->get_currTipPos_17();
		SpringColliderU5BU5D_t5E59DD4998D2CF376312F0534FE06BBD28E39345* L_64 = __this->get_colliders_11();
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF * L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		NullCheck(L_67);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_68;
		L_68 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_67, /*hidden argument*/NULL);
		NullCheck(L_68);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69;
		L_69 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_68, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70;
		L_70 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_63, L_69, /*hidden argument*/NULL);
		V_4 = L_70;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71;
		L_71 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		V_6 = L_71;
		// currTipPos = colliders [i].transform.position + (normal * (radius + colliders [i].radius));
		SpringColliderU5BU5D_t5E59DD4998D2CF376312F0534FE06BBD28E39345* L_72 = __this->get_colliders_11();
		int32_t L_73 = V_5;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF * L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_75);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_76;
		L_76 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_75, /*hidden argument*/NULL);
		NullCheck(L_76);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_77;
		L_77 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_76, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78 = V_6;
		float L_79 = __this->get_radius_6();
		SpringColliderU5BU5D_t5E59DD4998D2CF376312F0534FE06BBD28E39345* L_80 = __this->get_colliders_11();
		int32_t L_81 = V_5;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF * L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NullCheck(L_83);
		float L_84 = L_83->get_radius_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_85;
		L_85 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_78, ((float)il2cpp_codegen_add((float)L_79, (float)L_84)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_86;
		L_86 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_77, L_85, /*hidden argument*/NULL);
		__this->set_currTipPos_17(L_86);
		// currTipPos = ((currTipPos - trs.position).normalized * springLength) + trs.position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_87 = __this->get_currTipPos_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_88 = __this->get_trs_16();
		NullCheck(L_88);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89;
		L_89 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_88, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_87, L_89, /*hidden argument*/NULL);
		V_4 = L_90;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_91;
		L_91 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		float L_92 = __this->get_springLength_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_93;
		L_93 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_91, L_92, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_94 = __this->get_trs_16();
		NullCheck(L_94);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95;
		L_95 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_94, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_96;
		L_96 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_93, L_95, /*hidden argument*/NULL);
		__this->set_currTipPos_17(L_96);
	}

IL_01ef:
	{
		// for (int i = 0; i < colliders.Length; i++) {
		int32_t L_97 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_01f5:
	{
		// for (int i = 0; i < colliders.Length; i++) {
		int32_t L_98 = V_5;
		SpringColliderU5BU5D_t5E59DD4998D2CF376312F0534FE06BBD28E39345* L_99 = __this->get_colliders_11();
		NullCheck(L_99);
		if ((((int32_t)L_98) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_99)->max_length))))))
		{
			goto IL_0114;
		}
	}
	{
		// prevTipPos = temp;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_100 = V_2;
		__this->set_prevTipPos_18(L_100);
		// Vector3 aimVector = trs.TransformDirection (boneAxis);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_101 = __this->get_trs_16();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_102 = __this->get_boneAxis_5();
		NullCheck(L_101);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_103;
		L_103 = Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91(L_101, L_102, /*hidden argument*/NULL);
		// Quaternion aimRotation = Quaternion.FromToRotation (aimVector, currTipPos - trs.position);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_104 = __this->get_currTipPos_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_105 = __this->get_trs_16();
		NullCheck(L_105);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_106;
		L_106 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_105, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_107;
		L_107 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_104, L_106, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_108;
		L_108 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_103, L_107, /*hidden argument*/NULL);
		// Quaternion secondaryRotation = aimRotation * trs.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_109 = __this->get_trs_16();
		NullCheck(L_109);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_110;
		L_110 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_109, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_111;
		L_111 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_108, L_110, /*hidden argument*/NULL);
		V_3 = L_111;
		// trs.rotation = Quaternion.Lerp (org.rotation, secondaryRotation, managerRef.dynamicRatio);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_112 = __this->get_trs_16();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_113 = __this->get_org_19();
		NullCheck(L_113);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_114;
		L_114 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_113, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_115 = V_3;
		SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * L_116 = __this->get_managerRef_20();
		NullCheck(L_116);
		float L_117 = L_116->get_dynamicRatio_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_118;
		L_118 = Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261(L_114, L_115, L_117, /*hidden argument*/NULL);
		NullCheck(L_112);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_112, L_118, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityChan.SpringBone::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringBone_OnDrawGizmos_mF1426F6930ECA9616C023B54476074AD0F6D2FF9 (SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * __this, const RuntimeMethod* method)
{
	{
		// if (debug) {
		bool L_0 = __this->get_debug_12();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// Gizmos.color = Color.yellow;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_1, /*hidden argument*/NULL);
		// Gizmos.DrawWireSphere (currTipPos, radius);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_currTipPos_17();
		float L_3 = __this->get_radius_6();
		Gizmos_DrawWireSphere_m96C425145BBD85CF0192F9DDB3D1A8C69429B78B(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void UnityChan.SpringBone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringBone__ctor_m3E77E3F2F607AB5F5CE94425005F956B5BCF2F48 (SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 boneAxis = new Vector3 (-1.0f, 0.0f, 0.0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_boneAxis_5(L_0);
		// public float radius = 0.05f;
		__this->set_radius_6((0.0500000007f));
		// public float stiffnessForce = 0.01f;
		__this->set_stiffnessForce_8((0.00999999978f));
		// public float dragForce = 0.4f;
		__this->set_dragForce_9((0.400000006f));
		// public Vector3 springForce = new Vector3 (0.0f, -0.0001f, 0.0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (0.0f), (-9.99999975E-05f), (0.0f), /*hidden argument*/NULL);
		__this->set_springForce_10(L_1);
		// public bool debug = true;
		__this->set_debug_12((bool)1);
		// public float threshold = 0.01f;
		__this->set_threshold_13((0.00999999978f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityChan.SpringCollider::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringCollider_OnDrawGizmosSelected_m5454E18924D23D20F29D63FA6ACCC21BA38F3F62 (SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF * __this, const RuntimeMethod* method)
{
	{
		// Gizmos.color = Color.green;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_0, /*hidden argument*/NULL);
		// Gizmos.DrawWireSphere (transform.position, radius);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_radius_4();
		Gizmos_DrawWireSphere_m96C425145BBD85CF0192F9DDB3D1A8C69429B78B(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityChan.SpringCollider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringCollider__ctor_mFA646F2BE2E4837D49EA5AC3485BCA32A7D973BE (SpringCollider_t324C11376A07B723A514257C0F0840C03BDF68AF * __this, const RuntimeMethod* method)
{
	{
		// public float radius = 0.5f;
		__this->set_radius_4((0.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityChan.SpringManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringManager_Start_mFDBBC09D5BC8FB882D46B5534CEA319E38E9F7F2 (SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * __this, const RuntimeMethod* method)
{
	{
		// UpdateParameters ();
		SpringManager_UpdateParameters_mC7B00164F9AE3B3EBB0641FB12E3DA8B1AF5D02A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityChan.SpringManager::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringManager_LateUpdate_m8BD1D389415F7CDC4A0F36735FB491F804150F9A (SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (dynamicRatio != 0.0f) {
		float L_0 = __this->get_dynamicRatio_4();
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_0042;
		}
	}
	{
		// for (int i = 0; i < springBones.Length; i++) {
		V_0 = 0;
		goto IL_0037;
	}

IL_0011:
	{
		// if (dynamicRatio > springBones [i].threshold) {
		float L_1 = __this->get_dynamicRatio_4();
		SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65* L_2 = __this->get_springBones_9();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		float L_6 = L_5->get_threshold_13();
		if ((!(((float)L_1) > ((float)L_6))))
		{
			goto IL_0033;
		}
	}
	{
		// springBones [i].UpdateSpring ();
		SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65* L_7 = __this->get_springBones_9();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		SpringBone_tFED5085BCAC49A730456A79CFC1FD3806280AA63 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		SpringBone_UpdateSpring_mCBB26D530A0FB706D426785811662B19C48527D0(L_10, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// for (int i = 0; i < springBones.Length; i++) {
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0037:
	{
		// for (int i = 0; i < springBones.Length; i++) {
		int32_t L_12 = V_0;
		SpringBoneU5BU5D_t8BE1C9F49F9CFF3F4D99FBB49226D5D5B6872D65* L_13 = __this->get_springBones_9();
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0011;
		}
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void UnityChan.SpringManager::UpdateParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringManager_UpdateParameters_mC7B00164F9AE3B3EBB0641FB12E3DA8B1AF5D02A (SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, SpringManager_UpdateParameters_mC7B00164F9AE3B3EBB0641FB12E3DA8B1AF5D02A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateParameter ("stiffnessForce", stiffnessForce, stiffnessCurve);
		float L_0 = __this->get_stiffnessForce_5();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1 = __this->get_stiffnessCurve_6();
		SpringManager_UpdateParameter_mC7FC23D3FC30CA860881A18E911D04457CB3A523(__this, _stringLiteralF30125084BBDCC9569A0DA8872BAA0181599E988, L_0, L_1, /*hidden argument*/NULL);
		// UpdateParameter ("dragForce", dragForce, dragCurve);
		float L_2 = __this->get_dragForce_7();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = __this->get_dragCurve_8();
		SpringManager_UpdateParameter_mC7FC23D3FC30CA860881A18E911D04457CB3A523(__this, _stringLiteral14F93B18F4A27E31C8383B5199FB110A2DEEB66F, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityChan.SpringManager::UpdateParameter(System.String,System.Single,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringManager_UpdateParameter_mC7FC23D3FC30CA860881A18E911D04457CB3A523 (SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * __this, String_t* ___fieldName0, float ___baseValue1, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve2, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityChan.SpringManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringManager__ctor_m6DB5D801F7C40927A5BEB80C25E709C3A52D8526 (SpringManager_t72E89F222AE2904D2FFA836F87E569AB50DD5CA0 * __this, const RuntimeMethod* method)
{
	{
		// public float dynamicRatio = 1.0f;
		__this->set_dynamicRatio_4((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// Who Squere::get_m_whose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Squere_get_m_whose_m81BEEB026071D084A52B5B71024F96043A575BDA (Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * __this, const RuntimeMethod* method)
{
	{
		// public Who m_whose { get; private set; }
		int32_t L_0 = __this->get_U3Cm_whoseU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Squere::set_m_whose(Who)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Squere_set_m_whose_m27886BFB3C49D2126736A15C1FE6B18BDADC7984 (Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public Who m_whose { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3Cm_whoseU3Ek__BackingField_4(L_0);
		return;
	}
}
// Coordinate Squere::get_m_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * Squere_get_m_position_m7A5A3B4194124B3C556EAED11157E7049D601AD9 (Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * __this, const RuntimeMethod* method)
{
	{
		// public Coordinate m_position { get; private set; }
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_0 = __this->get_U3Cm_positionU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Squere::set_m_position(Coordinate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Squere_set_m_position_mC5B5AD5CF61A6670FA4AC7F49A4A5EE126F806F9 (Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * __this, Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * ___value0, const RuntimeMethod* method)
{
	{
		// public Coordinate m_position { get; private set; }
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_0 = ___value0;
		__this->set_U3Cm_positionU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void Squere::initialize(Who,Coordinate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Squere_initialize_mC2FD66974EEA5EA0C3C3DE6FD14E3BF395A03000 (Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * __this, int32_t ___whose0, Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * ___position1, const RuntimeMethod* method)
{
	{
		// m_whose = whose;
		int32_t L_0 = ___whose0;
		Squere_set_m_whose_m27886BFB3C49D2126736A15C1FE6B18BDADC7984_inline(__this, L_0, /*hidden argument*/NULL);
		// m_position = position;
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_1 = ___position1;
		Squere_set_m_position_mC5B5AD5CF61A6670FA4AC7F49A4A5EE126F806F9_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Squere::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Squere__ctor_m8DAAA8DF22DBC0EC7AA3ECDF5094F21FD412DECD (Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void YesButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YesButton_Start_m108B31F36C43F559BB6EDBAE69ACDA53E67C5747 (YesButton_t2C75450B96198218C94ED9F7E0FCF7F97F6BA4AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NULL, YesButton_Start_m108B31F36C43F559BB6EDBAE69ACDA53E67C5747_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_gameManagerObject = m_gameManager.GetComponent<GameManager>();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_m_gameManager_4();
		NullCheck(L_0);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1;
		L_1 = Component_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m42A3843763DD21708AEDC1B157749ACEE65AD650(L_0, /*hidden argument*/Component_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m42A3843763DD21708AEDC1B157749ACEE65AD650_RuntimeMethod_var);
		__this->set_m_gameManagerObject_5(L_1);
		// }
		return;
	}
}
// System.Void YesButton::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YesButton_OnClick_m8BE42C33D7AC1228BB8F49B512E420CEA8F44516 (YesButton_t2C75450B96198218C94ED9F7E0FCF7F97F6BA4AE * __this, const RuntimeMethod* method)
{
	{
		// m_gameManagerObject.onClickYesButton();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_m_gameManagerObject_5();
		NullCheck(L_0);
		GameManager_onClickYesButton_m5E35F38C3955C04102F91223B986908CA6F3E925(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void YesButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YesButton__ctor_m23559F573DFF4B8AED2FF62BEA33B80C2D12D835 (YesButton_t2C75450B96198218C94ED9F7E0FCF7F97F6BA4AE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_m_selectMode_mDCEA32E7192A4CB50083ECD3AB1C2D279D102EA8_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public SelectMode m_selectMode { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3Cm_selectModeU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Piece_get_m_pieceClass_m5BF8DBEE3EFEF7BA559AAFD082A714F7AC412401_inline (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, const RuntimeMethod* method)
{
	{
		// public PieceClass m_pieceClass { get; private set; }
		int32_t L_0 = __this->get_U3Cm_pieceClassU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Piece_get_m_whose_m8A3FD619AE19430EC503C48179FEBB2AB27B57B2_inline (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, const RuntimeMethod* method)
{
	{
		// public Who m_whose { get; private set; }
		int32_t L_0 = __this->get_U3Cm_whoseU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Piece_get_m_isPromoted_mA2F92D34E9392A4EA876DC96184287F394A98A86_inline (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, const RuntimeMethod* method)
{
	{
		// public bool m_isPromoted { get; private set; }
		bool L_0 = __this->get_U3Cm_isPromotedU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * Piece_get_m_position_m57D0F1D06EA369C2D4C933B13BA900456BCAC865_inline (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, const RuntimeMethod* method)
{
	{
		// public Coordinate m_position { get; private set; }
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_0 = __this->get_U3Cm_positionU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Squere_get_m_whose_m81BEEB026071D084A52B5B71024F96043A575BDA_inline (Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * __this, const RuntimeMethod* method)
{
	{
		// public Who m_whose { get; private set; }
		int32_t L_0 = __this->get_U3Cm_whoseU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Piece_get_m_isAblePromote_m75710BD1AD3FEF5058780665C1A405ABB6F55FD5_inline (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, const RuntimeMethod* method)
{
	{
		// public bool m_isAblePromote { get; private set; }
		bool L_0 = __this->get_U3Cm_isAblePromoteU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * Squere_get_m_position_m7A5A3B4194124B3C556EAED11157E7049D601AD9_inline (Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * __this, const RuntimeMethod* method)
{
	{
		// public Coordinate m_position { get; private set; }
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_0 = __this->get_U3Cm_positionU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Piece_set_m_pieceClass_m3D8501155057B065F79D41B515DF256E2B59A3AF_inline (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public PieceClass m_pieceClass { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3Cm_pieceClassU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Piece_set_m_whose_m49DD56D6DA85A548D5606132647F65E524D69049_inline (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public Who m_whose { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3Cm_whoseU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Piece_set_m_isPromoted_mF41FE204F6A76335D5F7761C8246A1041EDD6462_inline (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool m_isPromoted { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3Cm_isPromotedU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Piece_set_m_position_m786E96F4FEA5EAB3062D692D9DA5B8041A7A2F68_inline (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * ___value0, const RuntimeMethod* method)
{
	{
		// public Coordinate m_position { get; private set; }
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_0 = ___value0;
		__this->set_U3Cm_positionU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Piece_set_m_isAblePromote_mFED2184CD3BFCC00E4291B906C89BEC782265463_inline (Piece_tBB694F50405042E44F45E94D75887A6B91292BF1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool m_isAblePromote { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3Cm_isAblePromoteU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_m_selectMode_m98C086EB1F109FED5548ECC447BE49EF283AC4A4_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// public SelectMode m_selectMode { get; private set; }
		int32_t L_0 = __this->get_U3Cm_selectModeU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Squere_set_m_whose_m27886BFB3C49D2126736A15C1FE6B18BDADC7984_inline (Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public Who m_whose { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3Cm_whoseU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Squere_set_m_position_mC5B5AD5CF61A6670FA4AC7F49A4A5EE126F806F9_inline (Squere_t1AE3E153F0B0CB021B0BB44FF9F01B3F22DC2783 * __this, Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * ___value0, const RuntimeMethod* method)
{
	{
		// public Coordinate m_position { get; private set; }
		Coordinate_tED34519483A17AC0BF0F6AC4F1A2967A2D106E99 * L_0 = ___value0;
		__this->set_U3Cm_positionU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
