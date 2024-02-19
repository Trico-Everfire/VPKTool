#pragma once

#include "../PackFileWrapper.h"

VPKEDIT_API VPKEdit_PackFileHandle_t vpkedit_vpk_create_empty(const char* path);

VPKEDIT_API VPKEdit_PackFileHandle_t vpkedit_vpk_create_empty_with_options(const char* path, VPKEdit_PackFileOptionsWrapper_t options);

VPKEDIT_API VPKEdit_PackFileHandle_t vpkedit_vpk_create_from_directory(const char* vpkPath, const char* contentPath, bool saveToDir);

VPKEDIT_API VPKEdit_PackFileHandle_t vpkedit_vpk_create_from_directory_with_options(const char* vpkPath, const char* contentPath, bool saveToDir, VPKEdit_PackFileOptionsWrapper_t options);

VPKEDIT_API uint32_t vpkedit_vpk_get_version(VPKEdit_PackFileHandle_t handle);

VPKEDIT_API void vpkedit_vpk_set_version(VPKEdit_PackFileHandle_t handle, uint32_t version);
