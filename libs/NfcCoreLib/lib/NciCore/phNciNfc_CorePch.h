/*++

Copyright (c) 2012  Microsoft Corporation

Module Name:
    phNciNfc_CorePch.h

Abstract:
    This module contains the precompiled headers for the NCI CORE component

Environment:
   User mode.

--*/

#pragma once

#include <phNfcConfig.h>

#include <phNfcCompId.h>
#include <phOsalNfc.h>
#include <phOsalNfc_Timer.h>
#include <phOsalNfc_Internal.h>
#include <phTmlNfc.h>
#include <phNfcConfig.h>
#include <phNfcHalTypes2.h>
#include <phNfcTypes.h>
#include <phNfcStatus.h>
#include <phNfcConfig.h>
#include <phNfcTypes_Mapping.h>

#include "phNciNfcTypes.h"
#include "phNciNfc_Core.h"
#include "phNciNfc_CoreIf.h"
#include "phNciNfc_CoreStatus.h"
#include "phNciNfc_CoreMemMgr.h"
#include "phNciNfc_CoreUtils.h"
#include "phNciNfc_CoreRecvMgr.h"
#include "phNciNfc_DbgDescription.h"
#include "phNciNfc_LoglConnMgmt.h"
#include "phNciNfc_TlvUtils.h"

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <memory.h>
#include <intsafe.h>

#include "NfcCoreLibTracing.h"

_Analysis_mode_(_Analysis_code_type_user_driver_)
