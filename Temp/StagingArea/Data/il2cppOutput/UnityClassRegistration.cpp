struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 89 classes
	//0. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//1. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//4. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//5. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//6. Skybox
	void RegisterClass_Skybox();
	RegisterClass_Skybox();

	//7. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//8. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//9. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//10. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//11. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//12. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//13. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//14. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//15. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//16. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//17. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//18. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//19. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//20. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//21. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//22. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//23. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//24. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//25. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//26. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//27. SpringJoint
	void RegisterClass_SpringJoint();
	RegisterClass_SpringJoint();

	//28. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//29. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//30. CharacterController
	void RegisterClass_CharacterController();
	RegisterClass_CharacterController();

	//31. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//32. NavMeshAgent
	void RegisterClass_NavMeshAgent();
	RegisterClass_NavMeshAgent();

	//33. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//34. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//35. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//36. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//37. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//38. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//39. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//40. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//41. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//42. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//43. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//44. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//45. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//46. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//47. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//48. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//49. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//50. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//51. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//52. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//53. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//54. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//55. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//56. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//57. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//58. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//59. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//60. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//61. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//62. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//63. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//64. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//65. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//66. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//67. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//68. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//69. NavMeshAreas
	void RegisterClass_NavMeshAreas();
	RegisterClass_NavMeshAreas();

	//70. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//71. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//72. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//73. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//74. TerrainCollider
	void RegisterClass_TerrainCollider();
	RegisterClass_TerrainCollider();

	//75. TerrainData
	void RegisterClass_TerrainData();
	RegisterClass_TerrainData();

	//76. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//77. Tree
	void RegisterClass_Tree();
	RegisterClass_Tree();

	//78. LODGroup
	void RegisterClass_LODGroup();
	RegisterClass_LODGroup();

	//79. Terrain
	void RegisterClass_Terrain();
	RegisterClass_Terrain();

	//80. BillboardAsset
	void RegisterClass_BillboardAsset();
	RegisterClass_BillboardAsset();

	//81. BillboardRenderer
	void RegisterClass_BillboardRenderer();
	RegisterClass_BillboardRenderer();

	//82. SpeedTreeWindAsset
	void RegisterClass_SpeedTreeWindAsset();
	RegisterClass_SpeedTreeWindAsset();

	//83. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//84. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//85. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//86. UnityAnalyticsManager
	void RegisterClass_UnityAnalyticsManager();
	RegisterClass_UnityAnalyticsManager();

	//87. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

	//88. NavMeshSettings
	void RegisterClass_NavMeshSettings();
	RegisterClass_NavMeshSettings();

}
