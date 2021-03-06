# USE_CMSBCMV for VSP2 Basic Color Management Middleware for Linux
USE_CMSBCMV = "${@base_contains('DISTRO_FEATURES', 'cmsbcmv', '1', '0', d)}"

# USE_CMSBCMC for CMM3 Basic Color Management Middleware for Linux
USE_CMSBCMC = "${@base_contains('DISTRO_FEATURES', 'cmsbcmc', '1', '0', d)}"

# USE_CMSBLC for Backlight Control Middleware for Linux
USE_CMSBLC = "${@base_contains('DISTRO_FEATURES', 'cmsblc', '1', '0', d)}"

# USE_CMSDGC for Dynamic Gamma Correction Middleware for Linux
USE_CMSDGC = "${@base_contains('DISTRO_FEATURES', 'cmsdgc', '1', '0', d)}"

# CMS Flag list
LIST_CMS_FLAG = " \
    ${USE_CMSBCMV} \
    ${USE_CMSBCMC} \
    ${USE_CMSBLC} \
    ${USE_CMSDGC} \
"

# USE_CMS for Color Management Middleware
USE_CMS = "${@'1' if '1' in '${LIST_CMS_FLAG}' else '0'}"
