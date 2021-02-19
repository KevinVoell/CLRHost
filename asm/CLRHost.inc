ICLRMetaHostVtable  STRUCT
  QueryInterface                         DQ
;ICLRMetaHost.QueryInterface(This,riid,ppvObject)
  AddRef                                 DQ
;ICLRMetaHost.AddRef(This)
  Release                                DQ
;ICLRMetaHost.Release(This)
  GetRuntime                             DQ
;ICLRMetaHost.GetRuntime(This,pwzVersion,riid,ppRuntime)
  GetVersionFromFile                     DQ
;ICLRMetaHost.GetVersionFromFile(This,pwzFilePath,pcchBuffer)
  EnumerateInstalledRuntimes             DQ
;ICLRMetaHost.EnumerateInstalledRuntimes(This,ppEnumerator)
  EnumerateLoadedRuntimes                DQ
;ICLRMetaHost.EnumerateLoadedRuntimes(This,hndProcess,ppEnumerator)
  RequestRuntimeLoadedNotification       DQ
;ICLRMetaHost.RequestRuntimeLoadedNotification(This,pCallbackFunction)
  QueryLegacyV2RuntimeBinding            DQ
;ICLRMetaHost.QueryLegacyV2RuntimeBinding(This,riid,ppUnk)
  ExitProcess                            DQ
;ICLRMetaHost.ExitProcess(This,iExitCode)
ENDS

ICLRMetaHost STRUCT
    pvtble DQ
    vtble ICLRMetaHostVtable
EndS

ICLRRuntimeInfo STRUCT
    QueryInterface  DQ
    ;ICLRRuntimeInfo.QueryInterface(This,riid,ppvObject)
    AddRef  DQ
    ;ICLRRuntimeInfo.AddRef(This)
    Release DQ
    ;ICLRRuntimeInfo.Release(This)
    GetVersionString    DQ
    ;ICLRRuntimeInfo.GetVersionString(This,pcchBuffer)
    GetRuntimeDirectory DQ
    ;ICLRRuntimeInfo.GetRuntimeDirectory(This,pcchBuffer)
    IsLoaded    DQ
    ;ICLRRuntimeInfo.IsLoaded(This,hndProcess,pbLoaded)
    LoadErrorString DQ
    ;ICLRRuntimeInfo.LoadErrorString(This,iResourceID,pcchBuffer)
    LoadLibrary DQ
    ;ICLRRuntimeInfo.LoadLibrary(This,pwzDllName,phndModule)
    GetProcAddress  DQ
    ;ICLRRuntimeInfo.GetProcAddress(This,pszProcName,ppProc)
    GetInterface    DQ
    ;ICLRRuntimeInfo.GetInterface(This,rclsid,riid,ppUnk)
    IsLoadable  Dq
    ;ICLRRuntimeInfo.IsLoadable(This,pbLoadable)
    SetDefaultStartupFlags  DQ
    ;ICLRRuntimeInfo.SetDefaultStartupFlags(This,dwStartupFlags,pwzHostConfigFile)
    GetDefaultStartupFlags  DQ
    ;ICLRRuntimeInfo.GetDefaultStartupFlags(This,pdwStartupFlags,pcchHostConfigFile)
    BindAsLegacyV2Runtime   DQ
    ;ICLRRuntimeInfo.BindAsLegacyV2Runtime(This)
    IsStarted   DQ
    ;ICLRRuntimeInfo.IsStarted(This,pbStarted,pdwStartupFlags)
ENDS
    
ICLRRuntimeHost	STRUCT
	QueryInterface	DQ
	;ICLRRuntimeHost.QueryInterface(This,riid,ppvObject)
	AddRef	DQ
	;ICLRRuntimeHost.AddRef(This)
	Release	DQ
	;ICLRRuntimeHost.Release(This)
	Start	DQ
	;ICLRRuntimeHost.Start(This)
	Stop	DQ
	;ICLRRuntimeHost.Stop(This)
	SetHostControl	DQ
	;ICLRRuntimeHost.SetHostControl(This,pHostControl)
	GetCLRControl	DQ
	;ICLRRuntimeHost.GetCLRControl(This,pCLRControl)
	UnloadAppDomain	DQ
	;ICLRRuntimeHost.UnloadAppDomain(This,dwAppDomainId,fWaitUntilDone)
	ExecuteInAppDomain	DQ
	;ICLRRuntimeHost.ExecuteInAppDomain(This,dwAppDomainId,pCallback,cookie)
	GetCurrentAppDomainId	DQ
	;ICLRRuntimeHost.GetCurrentAppDomainId(This,pdwAppDomainId)
	ExecuteApplication	DQ
	;ICLRRuntimeHost.ExecuteApplication(This,pwzAppFullName,dwManifestPaths,ppwzManifestPaths,dwActivationData,ppwzActivationData,pReturnValue)
	ExecuteInDefaultAppDomain	DQ
	;ICLRRuntimeHost.ExecuteInDefaultAppDomain(This,pwzAssemblyPath,pwzTypeName,pwzMethodName,pwzArgument,pReturnValue)
ENDS
    
GUID STRUCT
    Data1 dd ?
    Data2 dw ?
    Data3 dw ?
    Data4 db 8 dup ?
ENDS