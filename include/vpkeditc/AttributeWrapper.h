#pragma once

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
	VPKEDIT_ATTRIBUTE_NONE = -1,
	VPKEDIT_ATTRIBUTE_LENGTH = 0,
	VPKEDIT_ATTRIBUTE_VPK_PRELOADED_DATA_LENGTH,
	VPKEDIT_ATTRIBUTE_VPK_ARCHIVE_INDEX,
	VPKEDIT_ATTRIBUTE_CRC32,
	VPKEDIT_ATTRIBUTE_PCK_MD5,
	VPKEDIT_ATTRIBUTE_COUNT,
} VPKEdit_Attribute_e;

#ifdef __cplusplus
} // extern "C"
#endif
