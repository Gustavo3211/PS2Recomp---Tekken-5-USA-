#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D2D80
// Address: 0x4d2d80 - 0x4d34d0
void sub_004D2D80_0x4d2d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D2D80_0x4d2d80");
#endif

    switch (ctx->pc) {
        case 0x4d2d80u: goto label_4d2d80;
        case 0x4d2d84u: goto label_4d2d84;
        case 0x4d2d88u: goto label_4d2d88;
        case 0x4d2d8cu: goto label_4d2d8c;
        case 0x4d2d90u: goto label_4d2d90;
        case 0x4d2d94u: goto label_4d2d94;
        case 0x4d2d98u: goto label_4d2d98;
        case 0x4d2d9cu: goto label_4d2d9c;
        case 0x4d2da0u: goto label_4d2da0;
        case 0x4d2da4u: goto label_4d2da4;
        case 0x4d2da8u: goto label_4d2da8;
        case 0x4d2dacu: goto label_4d2dac;
        case 0x4d2db0u: goto label_4d2db0;
        case 0x4d2db4u: goto label_4d2db4;
        case 0x4d2db8u: goto label_4d2db8;
        case 0x4d2dbcu: goto label_4d2dbc;
        case 0x4d2dc0u: goto label_4d2dc0;
        case 0x4d2dc4u: goto label_4d2dc4;
        case 0x4d2dc8u: goto label_4d2dc8;
        case 0x4d2dccu: goto label_4d2dcc;
        case 0x4d2dd0u: goto label_4d2dd0;
        case 0x4d2dd4u: goto label_4d2dd4;
        case 0x4d2dd8u: goto label_4d2dd8;
        case 0x4d2ddcu: goto label_4d2ddc;
        case 0x4d2de0u: goto label_4d2de0;
        case 0x4d2de4u: goto label_4d2de4;
        case 0x4d2de8u: goto label_4d2de8;
        case 0x4d2decu: goto label_4d2dec;
        case 0x4d2df0u: goto label_4d2df0;
        case 0x4d2df4u: goto label_4d2df4;
        case 0x4d2df8u: goto label_4d2df8;
        case 0x4d2dfcu: goto label_4d2dfc;
        case 0x4d2e00u: goto label_4d2e00;
        case 0x4d2e04u: goto label_4d2e04;
        case 0x4d2e08u: goto label_4d2e08;
        case 0x4d2e0cu: goto label_4d2e0c;
        case 0x4d2e10u: goto label_4d2e10;
        case 0x4d2e14u: goto label_4d2e14;
        case 0x4d2e18u: goto label_4d2e18;
        case 0x4d2e1cu: goto label_4d2e1c;
        case 0x4d2e20u: goto label_4d2e20;
        case 0x4d2e24u: goto label_4d2e24;
        case 0x4d2e28u: goto label_4d2e28;
        case 0x4d2e2cu: goto label_4d2e2c;
        case 0x4d2e30u: goto label_4d2e30;
        case 0x4d2e34u: goto label_4d2e34;
        case 0x4d2e38u: goto label_4d2e38;
        case 0x4d2e3cu: goto label_4d2e3c;
        case 0x4d2e40u: goto label_4d2e40;
        case 0x4d2e44u: goto label_4d2e44;
        case 0x4d2e48u: goto label_4d2e48;
        case 0x4d2e4cu: goto label_4d2e4c;
        case 0x4d2e50u: goto label_4d2e50;
        case 0x4d2e54u: goto label_4d2e54;
        case 0x4d2e58u: goto label_4d2e58;
        case 0x4d2e5cu: goto label_4d2e5c;
        case 0x4d2e60u: goto label_4d2e60;
        case 0x4d2e64u: goto label_4d2e64;
        case 0x4d2e68u: goto label_4d2e68;
        case 0x4d2e6cu: goto label_4d2e6c;
        case 0x4d2e70u: goto label_4d2e70;
        case 0x4d2e74u: goto label_4d2e74;
        case 0x4d2e78u: goto label_4d2e78;
        case 0x4d2e7cu: goto label_4d2e7c;
        case 0x4d2e80u: goto label_4d2e80;
        case 0x4d2e84u: goto label_4d2e84;
        case 0x4d2e88u: goto label_4d2e88;
        case 0x4d2e8cu: goto label_4d2e8c;
        case 0x4d2e90u: goto label_4d2e90;
        case 0x4d2e94u: goto label_4d2e94;
        case 0x4d2e98u: goto label_4d2e98;
        case 0x4d2e9cu: goto label_4d2e9c;
        case 0x4d2ea0u: goto label_4d2ea0;
        case 0x4d2ea4u: goto label_4d2ea4;
        case 0x4d2ea8u: goto label_4d2ea8;
        case 0x4d2eacu: goto label_4d2eac;
        case 0x4d2eb0u: goto label_4d2eb0;
        case 0x4d2eb4u: goto label_4d2eb4;
        case 0x4d2eb8u: goto label_4d2eb8;
        case 0x4d2ebcu: goto label_4d2ebc;
        case 0x4d2ec0u: goto label_4d2ec0;
        case 0x4d2ec4u: goto label_4d2ec4;
        case 0x4d2ec8u: goto label_4d2ec8;
        case 0x4d2eccu: goto label_4d2ecc;
        case 0x4d2ed0u: goto label_4d2ed0;
        case 0x4d2ed4u: goto label_4d2ed4;
        case 0x4d2ed8u: goto label_4d2ed8;
        case 0x4d2edcu: goto label_4d2edc;
        case 0x4d2ee0u: goto label_4d2ee0;
        case 0x4d2ee4u: goto label_4d2ee4;
        case 0x4d2ee8u: goto label_4d2ee8;
        case 0x4d2eecu: goto label_4d2eec;
        case 0x4d2ef0u: goto label_4d2ef0;
        case 0x4d2ef4u: goto label_4d2ef4;
        case 0x4d2ef8u: goto label_4d2ef8;
        case 0x4d2efcu: goto label_4d2efc;
        case 0x4d2f00u: goto label_4d2f00;
        case 0x4d2f04u: goto label_4d2f04;
        case 0x4d2f08u: goto label_4d2f08;
        case 0x4d2f0cu: goto label_4d2f0c;
        case 0x4d2f10u: goto label_4d2f10;
        case 0x4d2f14u: goto label_4d2f14;
        case 0x4d2f18u: goto label_4d2f18;
        case 0x4d2f1cu: goto label_4d2f1c;
        case 0x4d2f20u: goto label_4d2f20;
        case 0x4d2f24u: goto label_4d2f24;
        case 0x4d2f28u: goto label_4d2f28;
        case 0x4d2f2cu: goto label_4d2f2c;
        case 0x4d2f30u: goto label_4d2f30;
        case 0x4d2f34u: goto label_4d2f34;
        case 0x4d2f38u: goto label_4d2f38;
        case 0x4d2f3cu: goto label_4d2f3c;
        case 0x4d2f40u: goto label_4d2f40;
        case 0x4d2f44u: goto label_4d2f44;
        case 0x4d2f48u: goto label_4d2f48;
        case 0x4d2f4cu: goto label_4d2f4c;
        case 0x4d2f50u: goto label_4d2f50;
        case 0x4d2f54u: goto label_4d2f54;
        case 0x4d2f58u: goto label_4d2f58;
        case 0x4d2f5cu: goto label_4d2f5c;
        case 0x4d2f60u: goto label_4d2f60;
        case 0x4d2f64u: goto label_4d2f64;
        case 0x4d2f68u: goto label_4d2f68;
        case 0x4d2f6cu: goto label_4d2f6c;
        case 0x4d2f70u: goto label_4d2f70;
        case 0x4d2f74u: goto label_4d2f74;
        case 0x4d2f78u: goto label_4d2f78;
        case 0x4d2f7cu: goto label_4d2f7c;
        case 0x4d2f80u: goto label_4d2f80;
        case 0x4d2f84u: goto label_4d2f84;
        case 0x4d2f88u: goto label_4d2f88;
        case 0x4d2f8cu: goto label_4d2f8c;
        case 0x4d2f90u: goto label_4d2f90;
        case 0x4d2f94u: goto label_4d2f94;
        case 0x4d2f98u: goto label_4d2f98;
        case 0x4d2f9cu: goto label_4d2f9c;
        case 0x4d2fa0u: goto label_4d2fa0;
        case 0x4d2fa4u: goto label_4d2fa4;
        case 0x4d2fa8u: goto label_4d2fa8;
        case 0x4d2facu: goto label_4d2fac;
        case 0x4d2fb0u: goto label_4d2fb0;
        case 0x4d2fb4u: goto label_4d2fb4;
        case 0x4d2fb8u: goto label_4d2fb8;
        case 0x4d2fbcu: goto label_4d2fbc;
        case 0x4d2fc0u: goto label_4d2fc0;
        case 0x4d2fc4u: goto label_4d2fc4;
        case 0x4d2fc8u: goto label_4d2fc8;
        case 0x4d2fccu: goto label_4d2fcc;
        case 0x4d2fd0u: goto label_4d2fd0;
        case 0x4d2fd4u: goto label_4d2fd4;
        case 0x4d2fd8u: goto label_4d2fd8;
        case 0x4d2fdcu: goto label_4d2fdc;
        case 0x4d2fe0u: goto label_4d2fe0;
        case 0x4d2fe4u: goto label_4d2fe4;
        case 0x4d2fe8u: goto label_4d2fe8;
        case 0x4d2fecu: goto label_4d2fec;
        case 0x4d2ff0u: goto label_4d2ff0;
        case 0x4d2ff4u: goto label_4d2ff4;
        case 0x4d2ff8u: goto label_4d2ff8;
        case 0x4d2ffcu: goto label_4d2ffc;
        case 0x4d3000u: goto label_4d3000;
        case 0x4d3004u: goto label_4d3004;
        case 0x4d3008u: goto label_4d3008;
        case 0x4d300cu: goto label_4d300c;
        case 0x4d3010u: goto label_4d3010;
        case 0x4d3014u: goto label_4d3014;
        case 0x4d3018u: goto label_4d3018;
        case 0x4d301cu: goto label_4d301c;
        case 0x4d3020u: goto label_4d3020;
        case 0x4d3024u: goto label_4d3024;
        case 0x4d3028u: goto label_4d3028;
        case 0x4d302cu: goto label_4d302c;
        case 0x4d3030u: goto label_4d3030;
        case 0x4d3034u: goto label_4d3034;
        case 0x4d3038u: goto label_4d3038;
        case 0x4d303cu: goto label_4d303c;
        case 0x4d3040u: goto label_4d3040;
        case 0x4d3044u: goto label_4d3044;
        case 0x4d3048u: goto label_4d3048;
        case 0x4d304cu: goto label_4d304c;
        case 0x4d3050u: goto label_4d3050;
        case 0x4d3054u: goto label_4d3054;
        case 0x4d3058u: goto label_4d3058;
        case 0x4d305cu: goto label_4d305c;
        case 0x4d3060u: goto label_4d3060;
        case 0x4d3064u: goto label_4d3064;
        case 0x4d3068u: goto label_4d3068;
        case 0x4d306cu: goto label_4d306c;
        case 0x4d3070u: goto label_4d3070;
        case 0x4d3074u: goto label_4d3074;
        case 0x4d3078u: goto label_4d3078;
        case 0x4d307cu: goto label_4d307c;
        case 0x4d3080u: goto label_4d3080;
        case 0x4d3084u: goto label_4d3084;
        case 0x4d3088u: goto label_4d3088;
        case 0x4d308cu: goto label_4d308c;
        case 0x4d3090u: goto label_4d3090;
        case 0x4d3094u: goto label_4d3094;
        case 0x4d3098u: goto label_4d3098;
        case 0x4d309cu: goto label_4d309c;
        case 0x4d30a0u: goto label_4d30a0;
        case 0x4d30a4u: goto label_4d30a4;
        case 0x4d30a8u: goto label_4d30a8;
        case 0x4d30acu: goto label_4d30ac;
        case 0x4d30b0u: goto label_4d30b0;
        case 0x4d30b4u: goto label_4d30b4;
        case 0x4d30b8u: goto label_4d30b8;
        case 0x4d30bcu: goto label_4d30bc;
        case 0x4d30c0u: goto label_4d30c0;
        case 0x4d30c4u: goto label_4d30c4;
        case 0x4d30c8u: goto label_4d30c8;
        case 0x4d30ccu: goto label_4d30cc;
        case 0x4d30d0u: goto label_4d30d0;
        case 0x4d30d4u: goto label_4d30d4;
        case 0x4d30d8u: goto label_4d30d8;
        case 0x4d30dcu: goto label_4d30dc;
        case 0x4d30e0u: goto label_4d30e0;
        case 0x4d30e4u: goto label_4d30e4;
        case 0x4d30e8u: goto label_4d30e8;
        case 0x4d30ecu: goto label_4d30ec;
        case 0x4d30f0u: goto label_4d30f0;
        case 0x4d30f4u: goto label_4d30f4;
        case 0x4d30f8u: goto label_4d30f8;
        case 0x4d30fcu: goto label_4d30fc;
        case 0x4d3100u: goto label_4d3100;
        case 0x4d3104u: goto label_4d3104;
        case 0x4d3108u: goto label_4d3108;
        case 0x4d310cu: goto label_4d310c;
        case 0x4d3110u: goto label_4d3110;
        case 0x4d3114u: goto label_4d3114;
        case 0x4d3118u: goto label_4d3118;
        case 0x4d311cu: goto label_4d311c;
        case 0x4d3120u: goto label_4d3120;
        case 0x4d3124u: goto label_4d3124;
        case 0x4d3128u: goto label_4d3128;
        case 0x4d312cu: goto label_4d312c;
        case 0x4d3130u: goto label_4d3130;
        case 0x4d3134u: goto label_4d3134;
        case 0x4d3138u: goto label_4d3138;
        case 0x4d313cu: goto label_4d313c;
        case 0x4d3140u: goto label_4d3140;
        case 0x4d3144u: goto label_4d3144;
        case 0x4d3148u: goto label_4d3148;
        case 0x4d314cu: goto label_4d314c;
        case 0x4d3150u: goto label_4d3150;
        case 0x4d3154u: goto label_4d3154;
        case 0x4d3158u: goto label_4d3158;
        case 0x4d315cu: goto label_4d315c;
        case 0x4d3160u: goto label_4d3160;
        case 0x4d3164u: goto label_4d3164;
        case 0x4d3168u: goto label_4d3168;
        case 0x4d316cu: goto label_4d316c;
        case 0x4d3170u: goto label_4d3170;
        case 0x4d3174u: goto label_4d3174;
        case 0x4d3178u: goto label_4d3178;
        case 0x4d317cu: goto label_4d317c;
        case 0x4d3180u: goto label_4d3180;
        case 0x4d3184u: goto label_4d3184;
        case 0x4d3188u: goto label_4d3188;
        case 0x4d318cu: goto label_4d318c;
        case 0x4d3190u: goto label_4d3190;
        case 0x4d3194u: goto label_4d3194;
        case 0x4d3198u: goto label_4d3198;
        case 0x4d319cu: goto label_4d319c;
        case 0x4d31a0u: goto label_4d31a0;
        case 0x4d31a4u: goto label_4d31a4;
        case 0x4d31a8u: goto label_4d31a8;
        case 0x4d31acu: goto label_4d31ac;
        case 0x4d31b0u: goto label_4d31b0;
        case 0x4d31b4u: goto label_4d31b4;
        case 0x4d31b8u: goto label_4d31b8;
        case 0x4d31bcu: goto label_4d31bc;
        case 0x4d31c0u: goto label_4d31c0;
        case 0x4d31c4u: goto label_4d31c4;
        case 0x4d31c8u: goto label_4d31c8;
        case 0x4d31ccu: goto label_4d31cc;
        case 0x4d31d0u: goto label_4d31d0;
        case 0x4d31d4u: goto label_4d31d4;
        case 0x4d31d8u: goto label_4d31d8;
        case 0x4d31dcu: goto label_4d31dc;
        case 0x4d31e0u: goto label_4d31e0;
        case 0x4d31e4u: goto label_4d31e4;
        case 0x4d31e8u: goto label_4d31e8;
        case 0x4d31ecu: goto label_4d31ec;
        case 0x4d31f0u: goto label_4d31f0;
        case 0x4d31f4u: goto label_4d31f4;
        case 0x4d31f8u: goto label_4d31f8;
        case 0x4d31fcu: goto label_4d31fc;
        case 0x4d3200u: goto label_4d3200;
        case 0x4d3204u: goto label_4d3204;
        case 0x4d3208u: goto label_4d3208;
        case 0x4d320cu: goto label_4d320c;
        case 0x4d3210u: goto label_4d3210;
        case 0x4d3214u: goto label_4d3214;
        case 0x4d3218u: goto label_4d3218;
        case 0x4d321cu: goto label_4d321c;
        case 0x4d3220u: goto label_4d3220;
        case 0x4d3224u: goto label_4d3224;
        case 0x4d3228u: goto label_4d3228;
        case 0x4d322cu: goto label_4d322c;
        case 0x4d3230u: goto label_4d3230;
        case 0x4d3234u: goto label_4d3234;
        case 0x4d3238u: goto label_4d3238;
        case 0x4d323cu: goto label_4d323c;
        case 0x4d3240u: goto label_4d3240;
        case 0x4d3244u: goto label_4d3244;
        case 0x4d3248u: goto label_4d3248;
        case 0x4d324cu: goto label_4d324c;
        case 0x4d3250u: goto label_4d3250;
        case 0x4d3254u: goto label_4d3254;
        case 0x4d3258u: goto label_4d3258;
        case 0x4d325cu: goto label_4d325c;
        case 0x4d3260u: goto label_4d3260;
        case 0x4d3264u: goto label_4d3264;
        case 0x4d3268u: goto label_4d3268;
        case 0x4d326cu: goto label_4d326c;
        case 0x4d3270u: goto label_4d3270;
        case 0x4d3274u: goto label_4d3274;
        case 0x4d3278u: goto label_4d3278;
        case 0x4d327cu: goto label_4d327c;
        case 0x4d3280u: goto label_4d3280;
        case 0x4d3284u: goto label_4d3284;
        case 0x4d3288u: goto label_4d3288;
        case 0x4d328cu: goto label_4d328c;
        case 0x4d3290u: goto label_4d3290;
        case 0x4d3294u: goto label_4d3294;
        case 0x4d3298u: goto label_4d3298;
        case 0x4d329cu: goto label_4d329c;
        case 0x4d32a0u: goto label_4d32a0;
        case 0x4d32a4u: goto label_4d32a4;
        case 0x4d32a8u: goto label_4d32a8;
        case 0x4d32acu: goto label_4d32ac;
        case 0x4d32b0u: goto label_4d32b0;
        case 0x4d32b4u: goto label_4d32b4;
        case 0x4d32b8u: goto label_4d32b8;
        case 0x4d32bcu: goto label_4d32bc;
        case 0x4d32c0u: goto label_4d32c0;
        case 0x4d32c4u: goto label_4d32c4;
        case 0x4d32c8u: goto label_4d32c8;
        case 0x4d32ccu: goto label_4d32cc;
        case 0x4d32d0u: goto label_4d32d0;
        case 0x4d32d4u: goto label_4d32d4;
        case 0x4d32d8u: goto label_4d32d8;
        case 0x4d32dcu: goto label_4d32dc;
        case 0x4d32e0u: goto label_4d32e0;
        case 0x4d32e4u: goto label_4d32e4;
        case 0x4d32e8u: goto label_4d32e8;
        case 0x4d32ecu: goto label_4d32ec;
        case 0x4d32f0u: goto label_4d32f0;
        case 0x4d32f4u: goto label_4d32f4;
        case 0x4d32f8u: goto label_4d32f8;
        case 0x4d32fcu: goto label_4d32fc;
        case 0x4d3300u: goto label_4d3300;
        case 0x4d3304u: goto label_4d3304;
        case 0x4d3308u: goto label_4d3308;
        case 0x4d330cu: goto label_4d330c;
        case 0x4d3310u: goto label_4d3310;
        case 0x4d3314u: goto label_4d3314;
        case 0x4d3318u: goto label_4d3318;
        case 0x4d331cu: goto label_4d331c;
        case 0x4d3320u: goto label_4d3320;
        case 0x4d3324u: goto label_4d3324;
        case 0x4d3328u: goto label_4d3328;
        case 0x4d332cu: goto label_4d332c;
        case 0x4d3330u: goto label_4d3330;
        case 0x4d3334u: goto label_4d3334;
        case 0x4d3338u: goto label_4d3338;
        case 0x4d333cu: goto label_4d333c;
        case 0x4d3340u: goto label_4d3340;
        case 0x4d3344u: goto label_4d3344;
        case 0x4d3348u: goto label_4d3348;
        case 0x4d334cu: goto label_4d334c;
        case 0x4d3350u: goto label_4d3350;
        case 0x4d3354u: goto label_4d3354;
        case 0x4d3358u: goto label_4d3358;
        case 0x4d335cu: goto label_4d335c;
        case 0x4d3360u: goto label_4d3360;
        case 0x4d3364u: goto label_4d3364;
        case 0x4d3368u: goto label_4d3368;
        case 0x4d336cu: goto label_4d336c;
        case 0x4d3370u: goto label_4d3370;
        case 0x4d3374u: goto label_4d3374;
        case 0x4d3378u: goto label_4d3378;
        case 0x4d337cu: goto label_4d337c;
        case 0x4d3380u: goto label_4d3380;
        case 0x4d3384u: goto label_4d3384;
        case 0x4d3388u: goto label_4d3388;
        case 0x4d338cu: goto label_4d338c;
        case 0x4d3390u: goto label_4d3390;
        case 0x4d3394u: goto label_4d3394;
        case 0x4d3398u: goto label_4d3398;
        case 0x4d339cu: goto label_4d339c;
        case 0x4d33a0u: goto label_4d33a0;
        case 0x4d33a4u: goto label_4d33a4;
        case 0x4d33a8u: goto label_4d33a8;
        case 0x4d33acu: goto label_4d33ac;
        case 0x4d33b0u: goto label_4d33b0;
        case 0x4d33b4u: goto label_4d33b4;
        case 0x4d33b8u: goto label_4d33b8;
        case 0x4d33bcu: goto label_4d33bc;
        case 0x4d33c0u: goto label_4d33c0;
        case 0x4d33c4u: goto label_4d33c4;
        case 0x4d33c8u: goto label_4d33c8;
        case 0x4d33ccu: goto label_4d33cc;
        case 0x4d33d0u: goto label_4d33d0;
        case 0x4d33d4u: goto label_4d33d4;
        case 0x4d33d8u: goto label_4d33d8;
        case 0x4d33dcu: goto label_4d33dc;
        case 0x4d33e0u: goto label_4d33e0;
        case 0x4d33e4u: goto label_4d33e4;
        case 0x4d33e8u: goto label_4d33e8;
        case 0x4d33ecu: goto label_4d33ec;
        case 0x4d33f0u: goto label_4d33f0;
        case 0x4d33f4u: goto label_4d33f4;
        case 0x4d33f8u: goto label_4d33f8;
        case 0x4d33fcu: goto label_4d33fc;
        case 0x4d3400u: goto label_4d3400;
        case 0x4d3404u: goto label_4d3404;
        case 0x4d3408u: goto label_4d3408;
        case 0x4d340cu: goto label_4d340c;
        case 0x4d3410u: goto label_4d3410;
        case 0x4d3414u: goto label_4d3414;
        case 0x4d3418u: goto label_4d3418;
        case 0x4d341cu: goto label_4d341c;
        case 0x4d3420u: goto label_4d3420;
        case 0x4d3424u: goto label_4d3424;
        case 0x4d3428u: goto label_4d3428;
        case 0x4d342cu: goto label_4d342c;
        case 0x4d3430u: goto label_4d3430;
        case 0x4d3434u: goto label_4d3434;
        case 0x4d3438u: goto label_4d3438;
        case 0x4d343cu: goto label_4d343c;
        case 0x4d3440u: goto label_4d3440;
        case 0x4d3444u: goto label_4d3444;
        case 0x4d3448u: goto label_4d3448;
        case 0x4d344cu: goto label_4d344c;
        case 0x4d3450u: goto label_4d3450;
        case 0x4d3454u: goto label_4d3454;
        case 0x4d3458u: goto label_4d3458;
        case 0x4d345cu: goto label_4d345c;
        case 0x4d3460u: goto label_4d3460;
        case 0x4d3464u: goto label_4d3464;
        case 0x4d3468u: goto label_4d3468;
        case 0x4d346cu: goto label_4d346c;
        case 0x4d3470u: goto label_4d3470;
        case 0x4d3474u: goto label_4d3474;
        case 0x4d3478u: goto label_4d3478;
        case 0x4d347cu: goto label_4d347c;
        case 0x4d3480u: goto label_4d3480;
        case 0x4d3484u: goto label_4d3484;
        case 0x4d3488u: goto label_4d3488;
        case 0x4d348cu: goto label_4d348c;
        case 0x4d3490u: goto label_4d3490;
        case 0x4d3494u: goto label_4d3494;
        case 0x4d3498u: goto label_4d3498;
        case 0x4d349cu: goto label_4d349c;
        case 0x4d34a0u: goto label_4d34a0;
        case 0x4d34a4u: goto label_4d34a4;
        case 0x4d34a8u: goto label_4d34a8;
        case 0x4d34acu: goto label_4d34ac;
        case 0x4d34b0u: goto label_4d34b0;
        case 0x4d34b4u: goto label_4d34b4;
        case 0x4d34b8u: goto label_4d34b8;
        case 0x4d34bcu: goto label_4d34bc;
        case 0x4d34c0u: goto label_4d34c0;
        case 0x4d34c4u: goto label_4d34c4;
        case 0x4d34c8u: goto label_4d34c8;
        case 0x4d34ccu: goto label_4d34cc;
        default: break;
    }

    ctx->pc = 0x4d2d80u;

label_4d2d80:
    // 0x4d2d80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d2d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4d2d84:
    // 0x4d2d84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d2d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d2d88:
    // 0x4d2d88: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4d2d88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
label_4d2d8c:
    // 0x4d2d8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d2d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4d2d90:
    // 0x4d2d90: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4d2d90u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
label_4d2d94:
    // 0x4d2d94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d2d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4d2d98:
    // 0x4d2d98: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4d2d98u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
label_4d2d9c:
    // 0x4d2d9c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d2d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4d2da0:
    // 0x4d2da0: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4d2da0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
label_4d2da4:
    // 0x4d2da4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d2da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4d2da8:
    // 0x4d2da8: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4d2da8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
label_4d2dac:
    // 0x4d2dac: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4d2dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_4d2db0:
    // 0x4d2db0: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4d2db0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
label_4d2db4:
    // 0x4d2db4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4d2db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_4d2db8:
    // 0x4d2db8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x4d2db8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d2dbc:
    // 0x4d2dbc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4d2dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_4d2dc0:
    // 0x4d2dc0: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4d2dc0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
label_4d2dc4:
    // 0x4d2dc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4d2dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4d2dc8:
    // 0x4d2dc8: 0x26f71040  addiu       $s7, $s7, 0x1040
    ctx->pc = 0x4d2dc8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4160));
label_4d2dcc:
    // 0x4d2dcc: 0x26311034  addiu       $s1, $s1, 0x1034
    ctx->pc = 0x4d2dccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4148));
label_4d2dd0:
    // 0x4d2dd0: 0x26731038  addiu       $s3, $s3, 0x1038
    ctx->pc = 0x4d2dd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4152));
label_4d2dd4:
    // 0x4d2dd4: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x4d2dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4d2dd8:
    // 0x4d2dd8: 0x2652103c  addiu       $s2, $s2, 0x103C
    ctx->pc = 0x4d2dd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4156));
label_4d2ddc:
    // 0x4d2ddc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4d2ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4d2de0:
    // 0x4d2de0: 0x26b5102c  addiu       $s5, $s5, 0x102C
    ctx->pc = 0x4d2de0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4140));
label_4d2de4:
    // 0x4d2de4: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4d2de4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d2de8:
    // 0x4d2de8: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4d2de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_4d2dec:
    // 0x4d2dec: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x4d2decu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
label_4d2df0:
    // 0x4d2df0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d2df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d2df4:
    // 0x4d2df4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d2df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4d2df8:
    // 0x4d2df8: 0x24a70002  addiu       $a3, $a1, 0x2
    ctx->pc = 0x4d2df8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_4d2dfc:
    // 0x4d2dfc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d2dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d2e00:
    // 0x4d2e00: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4d2e00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4d2e04:
    // 0x4d2e04: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d2e04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4d2e08:
    // 0x4d2e08: 0x26941030  addiu       $s4, $s4, 0x1030
    ctx->pc = 0x4d2e08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4144));
label_4d2e0c:
    // 0x4d2e0c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d2e0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4d2e10:
    // 0x4d2e10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d2e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d2e14:
    // 0x4d2e14: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4d2e14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d2e18:
    // 0x4d2e18: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4d2e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_4d2e1c:
    // 0x4d2e1c: 0xaee70000  sw          $a3, 0x0($s7)
    ctx->pc = 0x4d2e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 7));
label_4d2e20:
    // 0x4d2e20: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d2e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4d2e24:
    // 0x4d2e24: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4d2e24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_4d2e28:
    // 0x4d2e28: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4d2e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d2e2c:
    // 0x4d2e2c: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4d2e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
label_4d2e30:
    // 0x4d2e30: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d2e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d2e34:
    // 0x4d2e34: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4d2e34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_4d2e38:
    // 0x4d2e38: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x4d2e38u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
label_4d2e3c:
    // 0x4d2e3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4d2e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4d2e40:
    // 0x4d2e40: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d2e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4d2e44:
    // 0x4d2e44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d2e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d2e48:
    // 0x4d2e48: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4d2e48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4d2e4c:
    // 0x4d2e4c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d2e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_4d2e50:
    // 0x4d2e50: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d2e50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4d2e54:
    // 0x4d2e54: 0x86c20026  lh          $v0, 0x26($s6)
    ctx->pc = 0x4d2e54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 38)));
label_4d2e58:
    // 0x4d2e58: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4d2e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4d2e5c:
    // 0x4d2e5c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d2e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4d2e60:
    // 0x4d2e60: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4d2e60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_4d2e64:
    // 0x4d2e64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d2e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d2e68:
    // 0x4d2e68: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x4d2e68u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
label_4d2e6c:
    // 0x4d2e6c: 0x86c20028  lh          $v0, 0x28($s6)
    ctx->pc = 0x4d2e6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 40)));
label_4d2e70:
    // 0x4d2e70: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d2e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4d2e74:
    // 0x4d2e74: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d2e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d2e78:
    // 0x4d2e78: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4d2e78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_4d2e7c:
    // 0x4d2e7c: 0xc12b87a  jal         func_4AE1E8
label_4d2e80:
    if (ctx->pc == 0x4D2E80u) {
        ctx->pc = 0x4D2E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2E7Cu;
        // 0x4d2e80: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D2E84u;
        goto label_4d2e84;
    }
    ctx->pc = 0x4D2E7Cu;
    SET_GPR_U32(ctx, 31, 0x4D2E84u);
    ctx->pc = 0x4D2E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D2E7Cu;
    // 0x4d2e80: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4D2E7Cu, 0x4D2E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D2E84u;
label_4d2e84:
    // 0x4d2e84: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4d2e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4d2e88:
    // 0x4d2e88: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x4d2e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_4d2e8c:
    // 0x4d2e8c: 0x3c0a0073  lui         $t2, 0x73
    ctx->pc = 0x4d2e8cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)115 << 16));
label_4d2e90:
    // 0x4d2e90: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4d2e90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d2e94:
    // 0x4d2e94: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d2e94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4d2e98:
    // 0x4d2e98: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4d2e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4d2e9c:
    // 0x4d2e9c: 0x86680000  lh          $t0, 0x0($s3)
    ctx->pc = 0x4d2e9cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4d2ea0:
    // 0x4d2ea0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d2ea0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4d2ea4:
    // 0x4d2ea4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4d2ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4d2ea8:
    // 0x4d2ea8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d2ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4d2eac:
    // 0x4d2eac: 0x864c0000  lh          $t4, 0x0($s2)
    ctx->pc = 0x4d2eacu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4d2eb0:
    // 0x4d2eb0: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4d2eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
label_4d2eb4:
    // 0x4d2eb4: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x4d2eb4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d2eb8:
    // 0x4d2eb8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4d2eb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4d2ebc:
    // 0x4d2ebc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d2ebcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4d2ec0:
    // 0x4d2ec0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4d2ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_4d2ec4:
    // 0x4d2ec4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4d2ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4d2ec8:
    // 0x4d2ec8: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4d2ec8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_4d2ecc:
    // 0x4d2ecc: 0x254ad680  addiu       $t2, $t2, -0x2980
    ctx->pc = 0x4d2eccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956672));
label_4d2ed0:
    // 0x4d2ed0: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x4d2ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_4d2ed4:
    // 0x4d2ed4: 0x240e0009  addiu       $t6, $zero, 0x9
    ctx->pc = 0x4d2ed4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_4d2ed8:
    // 0x4d2ed8: 0x8eeb0000  lw          $t3, 0x0($s7)
    ctx->pc = 0x4d2ed8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4d2edc:
    // 0x4d2edc: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4d2edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4d2ee0:
    // 0x4d2ee0: 0x962d0000  lhu         $t5, 0x0($s1)
    ctx->pc = 0x4d2ee0u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d2ee4:
    // 0x4d2ee4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d2ee4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4d2ee8:
    // 0x4d2ee8: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4d2ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4d2eec:
    // 0x4d2eec: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4d2eecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_4d2ef0:
    // 0x4d2ef0: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x4d2ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4d2ef4:
    // 0x4d2ef4: 0x1104025  or          $t0, $t0, $s0
    ctx->pc = 0x4d2ef4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 16));
label_4d2ef8:
    // 0x4d2ef8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d2ef8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4d2efc:
    // 0x4d2efc: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x4d2efcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
label_4d2f00:
    // 0x4d2f00: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d2f00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4d2f04:
    // 0x4d2f04: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4d2f04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
label_4d2f08:
    // 0x4d2f08: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x4d2f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_4d2f0c:
    // 0x4d2f0c: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4d2f0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4d2f10:
    // 0x4d2f10: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4d2f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4d2f14:
    // 0x4d2f14: 0xa54d2334  sh          $t5, 0x2334($t2)
    ctx->pc = 0x4d2f14u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 9012), (uint16_t)GPR_U32(ctx, 13));
label_4d2f18:
    // 0x4d2f18: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d2f18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4d2f1c:
    // 0x4d2f1c: 0xa5432336  sh          $v1, 0x2336($t2)
    ctx->pc = 0x4d2f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 9014), (uint16_t)GPR_U32(ctx, 3));
label_4d2f20:
    // 0x4d2f20: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x4d2f20u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_4d2f24:
    // 0x4d2f24: 0x1906025  or          $t4, $t4, $s0
    ctx->pc = 0x4d2f24u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 16));
label_4d2f28:
    // 0x4d2f28: 0x12c4824  and         $t1, $t1, $t4
    ctx->pc = 0x4d2f28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 12));
label_4d2f2c:
    // 0x4d2f2c: 0xae490000  sw          $t1, 0x0($s2)
    ctx->pc = 0x4d2f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 9));
label_4d2f30:
    // 0x4d2f30: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4d2f30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4d2f34:
    // 0x4d2f34: 0xa5422338  sh          $v0, 0x2338($t2)
    ctx->pc = 0x4d2f34u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 9016), (uint16_t)GPR_U32(ctx, 2));
label_4d2f38:
    // 0x4d2f38: 0x85630000  lh          $v1, 0x0($t3)
    ctx->pc = 0x4d2f38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_4d2f3c:
    // 0x4d2f3c: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x4d2f3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
label_4d2f40:
    // 0x4d2f40: 0xaeeb0000  sw          $t3, 0x0($s7)
    ctx->pc = 0x4d2f40u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 11));
label_4d2f44:
    // 0x4d2f44: 0x25650002  addiu       $a1, $t3, 0x2
    ctx->pc = 0x4d2f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
label_4d2f48:
    // 0x4d2f48: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4d2f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
label_4d2f4c:
    // 0x4d2f4c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4d2f4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_4d2f50:
    // 0x4d2f50: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x4d2f50u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
label_4d2f54:
    // 0x4d2f54: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d2f54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4d2f58:
    // 0x4d2f58: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4d2f58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_4d2f5c:
    // 0x4d2f5c: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x4d2f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
label_4d2f60:
    // 0x4d2f60: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d2f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4d2f64:
    // 0x4d2f64: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4d2f64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_4d2f68:
    // 0x4d2f68: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x4d2f68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_4d2f6c:
    // 0x4d2f6c: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x4d2f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
label_4d2f70:
    // 0x4d2f70: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d2f70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4d2f74:
    // 0x4d2f74: 0x86c50118  lh          $a1, 0x118($s6)
    ctx->pc = 0x4d2f74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 280)));
label_4d2f78:
    // 0x4d2f78: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4d2f78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_4d2f7c:
    // 0x4d2f7c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4d2f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4d2f80:
    // 0x4d2f80: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4d2f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
label_4d2f84:
    // 0x4d2f84: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4d2f84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_4d2f88:
    // 0x4d2f88: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x4d2f88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
label_4d2f8c:
    // 0x4d2f8c: 0x86c3011c  lh          $v1, 0x11C($s6)
    ctx->pc = 0x4d2f8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 284)));
label_4d2f90:
    // 0x4d2f90: 0x96a50000  lhu         $a1, 0x0($s5)
    ctx->pc = 0x4d2f90u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_4d2f94:
    // 0x4d2f94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d2f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d2f98:
    // 0x4d2f98: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d2f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4d2f9c:
    // 0x4d2f9c: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4d2f9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_4d2fa0:
    // 0x4d2fa0: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x4d2fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
label_4d2fa4:
    // 0x4d2fa4: 0xa545233a  sh          $a1, 0x233A($t2)
    ctx->pc = 0x4d2fa4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 9018), (uint16_t)GPR_U32(ctx, 5));
label_4d2fa8:
    // 0x4d2fa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d2fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d2fac:
    // 0x4d2fac: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4d2facu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_4d2fb0:
    // 0x4d2fb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d2fb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d2fb4:
    // 0x4d2fb4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d2fb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d2fb8:
    // 0x4d2fb8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d2fb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4d2fbc:
    // 0x4d2fbc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d2fbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d2fc0:
    // 0x4d2fc0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d2fc0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4d2fc4:
    // 0x4d2fc4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d2fc4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4d2fc8:
    // 0x4d2fc8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4d2fc8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4d2fcc:
    // 0x4d2fcc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4d2fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d2fd0:
    // 0x4d2fd0: 0xa54e2330  sh          $t6, 0x2330($t2)
    ctx->pc = 0x4d2fd0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 9008), (uint16_t)GPR_U32(ctx, 14));
label_4d2fd4:
    // 0x4d2fd4: 0xa542233c  sh          $v0, 0x233C($t2)
    ctx->pc = 0x4d2fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 9020), (uint16_t)GPR_U32(ctx, 2));
label_4d2fd8:
    // 0x4d2fd8: 0xa540233e  sh          $zero, 0x233E($t2)
    ctx->pc = 0x4d2fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 9022), (uint16_t)GPR_U32(ctx, 0));
label_4d2fdc:
    // 0x4d2fdc: 0x8127a50  j           func_49E940
label_4d2fe0:
    if (ctx->pc == 0x4D2FE0u) {
        ctx->pc = 0x4D2FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2FDCu;
        // 0x4d2fe0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D2FE4u;
        goto label_4d2fe4;
    }
    ctx->pc = 0x4D2FDCu;
    ctx->pc = 0x4D2FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D2FDCu;
    // 0x4d2fe0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E940u;
    sub_0049E940_0x49e940(rdram, ctx, runtime); return;
    ctx->pc = 0x4D2FE4u;
label_4d2fe4:
    // 0x4d2fe4: 0x0  nop
    ctx->pc = 0x4d2fe4u;
    // NOP
label_4d2fe8:
    // 0x4d2fe8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4d2fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_4d2fec:
    // 0x4d2fec: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x4d2fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
label_4d2ff0:
    // 0x4d2ff0: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x4d2ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_4d2ff4:
    // 0x4d2ff4: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x4d2ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
label_4d2ff8:
    // 0x4d2ff8: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x4d2ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_4d2ffc:
    // 0x4d2ffc: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x4d2ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_4d3000:
    // 0x4d3000: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x4d3000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
label_4d3004:
    // 0x4d3004: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x4d3004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_4d3008:
    // 0x4d3008: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x4d3008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
label_4d300c:
    // 0x4d300c: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x4d300cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
label_4d3010:
    // 0x4d3010: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x4d3010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
label_4d3014:
    // 0x4d3014: 0xc122db4  jal         func_48B6D0
label_4d3018:
    if (ctx->pc == 0x4D3018u) {
        ctx->pc = 0x4D3018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3014u;
        // 0x4d3018: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D301Cu;
        goto label_4d301c;
    }
    ctx->pc = 0x4D3014u;
    SET_GPR_U32(ctx, 31, 0x4D301Cu);
    ctx->pc = 0x4D3018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D3014u;
    // 0x4d3018: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4D3014u, 0x4D301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D301Cu;
label_4d301c:
    // 0x4d301c: 0x104000d5  beqz        $v0, . + 4 + (0xD5 << 2)
label_4d3020:
    if (ctx->pc == 0x4D3020u) {
        ctx->pc = 0x4D3020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D301Cu;
        // 0x4d3020: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3024u;
        goto label_4d3024;
    }
    ctx->pc = 0x4D301Cu;
    {
        const bool branch_taken_0x4d301c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D301Cu;
        // 0x4d3020: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d301c) {
            ctx->pc = 0x4D3374u;
            goto label_4d3374;
        }
    }
    ctx->pc = 0x4D3024u;
label_4d3024:
    // 0x4d3024: 0x26790014  addiu       $t9, $s3, 0x14
    ctx->pc = 0x4d3024u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_4d3028:
    // 0x4d3028: 0x2449102c  addiu       $t1, $v0, 0x102C
    ctx->pc = 0x4d3028u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4140));
label_4d302c:
    // 0x4d302c: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x4d302cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_4d3030:
    // 0x4d3030: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4d3030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4d3034:
    // 0x4d3034: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4d3034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_4d3038:
    // 0x4d3038: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x4d3038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_4d303c:
    // 0x4d303c: 0x266f0018  addiu       $t7, $s3, 0x18
    ctx->pc = 0x4d303cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_4d3040:
    // 0x4d3040: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x4d3040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_4d3044:
    // 0x4d3044: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d3044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d3048:
    // 0x4d3048: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x4d3048u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_4d304c:
    // 0x4d304c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4d304cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_4d3050:
    // 0x4d3050: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4d3050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_4d3054:
    // 0x4d3054: 0x87270002  lh          $a3, 0x2($t9)
    ctx->pc = 0x4d3054u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 2)));
label_4d3058:
    // 0x4d3058: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x4d3058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
label_4d305c:
    // 0x4d305c: 0x85e20002  lh          $v0, 0x2($t7)
    ctx->pc = 0x4d305cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 2)));
label_4d3060:
    // 0x4d3060: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x4d3060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_4d3064:
    // 0x4d3064: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4d3064u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
label_4d3068:
    // 0x4d3068: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4d3068u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4d306c:
    // 0x4d306c: 0x44000a1  bltz        $v0, . + 4 + (0xA1 << 2)
label_4d3070:
    if (ctx->pc == 0x4D3070u) {
        ctx->pc = 0x4D3070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D306Cu;
        // 0x4d3070: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3074u;
        goto label_4d3074;
    }
    ctx->pc = 0x4D306Cu;
    {
        const bool branch_taken_0x4d306c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4D3070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D306Cu;
        // 0x4d3070: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d306c) {
            ctx->pc = 0x4D32F4u;
            goto label_4d32f4;
        }
    }
    ctx->pc = 0x4D3074u;
label_4d3074:
    // 0x4d3074: 0x266301c0  addiu       $v1, $s3, 0x1C0
    ctx->pc = 0x4d3074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
label_4d3078:
    // 0x4d3078: 0x24571040  addiu       $s7, $v0, 0x1040
    ctx->pc = 0x4d3078u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4160));
label_4d307c:
    // 0x4d307c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4d307cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4d3080:
    // 0x4d3080: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x4d3080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_4d3084:
    // 0x4d3084: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4d3084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_4d3088:
    // 0x4d3088: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x4d3088u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4d308c:
    // 0x4d308c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d308cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4d3090:
    // 0x4d3090: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4d3090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4d3094:
    // 0x4d3094: 0x24951034  addiu       $s5, $a0, 0x1034
    ctx->pc = 0x4d3094u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 4148));
label_4d3098:
    // 0x4d3098: 0x24b61038  addiu       $s6, $a1, 0x1038
    ctx->pc = 0x4d3098u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 4152));
label_4d309c:
    // 0x4d309c: 0x26650028  addiu       $a1, $s3, 0x28
    ctx->pc = 0x4d309cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
label_4d30a0:
    // 0x4d30a0: 0x26640026  addiu       $a0, $s3, 0x26
    ctx->pc = 0x4d30a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 38));
label_4d30a4:
    // 0x4d30a4: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4d30a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_4d30a8:
    // 0x4d30a8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d30a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4d30ac:
    // 0x4d30ac: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4d30acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_4d30b0:
    // 0x4d30b0: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4d30b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
label_4d30b4:
    // 0x4d30b4: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x4d30b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
label_4d30b8:
    // 0x4d30b8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x4d30b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_4d30bc:
    // 0x4d30bc: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x4d30bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4d30c0:
    // 0x4d30c0: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x4d30c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
label_4d30c4:
    // 0x4d30c4: 0x24d4103c  addiu       $s4, $a2, 0x103C
    ctx->pc = 0x4d30c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 4156));
label_4d30c8:
    // 0x4d30c8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x4d30c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_4d30cc:
    // 0x4d30cc: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4d30ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_4d30d0:
    // 0x4d30d0: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x4d30d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_4d30d4:
    // 0x4d30d4: 0x320682d  daddu       $t5, $t9, $zero
    ctx->pc = 0x4d30d4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_4d30d8:
    // 0x4d30d8: 0x8fae000c  lw          $t6, 0xC($sp)
    ctx->pc = 0x4d30d8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_4d30dc:
    // 0x4d30dc: 0x1e0f02d  daddu       $fp, $t7, $zero
    ctx->pc = 0x4d30dcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_4d30e0:
    // 0x4d30e0: 0x86500000  lh          $s0, 0x0($s2)
    ctx->pc = 0x4d30e0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4d30e4:
    // 0x4d30e4: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x4d30e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_4d30e8:
    // 0x4d30e8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4d30e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d30ec:
    // 0x4d30ec: 0x24e77590  addiu       $a3, $a3, 0x7590
    ctx->pc = 0x4d30ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30096));
label_4d30f0:
    // 0x4d30f0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x4d30f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_4d30f4:
    // 0x4d30f4: 0x2118025  or          $s0, $s0, $s1
    ctx->pc = 0x4d30f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
label_4d30f8:
    // 0x4d30f8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d30f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4d30fc:
    // 0x4d30fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d30fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d3100:
    // 0x4d3100: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d3100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d3104:
    // 0x4d3104: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4d3104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4d3108:
    // 0x4d3108: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d3108u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_4d310c:
    // 0x4d310c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4d310cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4d3110:
    // 0x4d3110: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4d3110u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4d3114:
    // 0x4d3114: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d3114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4d3118:
    // 0x4d3118: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4d3118u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4d311c:
    // 0x4d311c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d311cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4d3120:
    // 0x4d3120: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4d3120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_4d3124:
    // 0x4d3124: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x4d3124u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_4d3128:
    // 0x4d3128: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4d3128u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4d312c:
    // 0x4d312c: 0x24460002  addiu       $a2, $v0, 0x2
    ctx->pc = 0x4d312cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4d3130:
    // 0x4d3130: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x4d3130u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_4d3134:
    // 0x4d3134: 0x244c0004  addiu       $t4, $v0, 0x4
    ctx->pc = 0x4d3134u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_4d3138:
    // 0x4d3138: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x4d3138u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
label_4d313c:
    // 0x4d313c: 0x244b0006  addiu       $t3, $v0, 0x6
    ctx->pc = 0x4d313cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_4d3140:
    // 0x4d3140: 0xaee60000  sw          $a2, 0x0($s7)
    ctx->pc = 0x4d3140u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 6));
label_4d3144:
    // 0x4d3144: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x4d3144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_4d3148:
    // 0x4d3148: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x4d3148u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4d314c:
    // 0x4d314c: 0x84c80000  lh          $t0, 0x0($a2)
    ctx->pc = 0x4d314cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4d3150:
    // 0x4d3150: 0x85890000  lh          $t1, 0x0($t4)
    ctx->pc = 0x4d3150u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
label_4d3154:
    // 0x4d3154: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d3154u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4d3158:
    // 0x4d3158: 0x856a0000  lh          $t2, 0x0($t3)
    ctx->pc = 0x4d3158u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_4d315c:
    // 0x4d315c: 0x1114025  or          $t0, $t0, $s1
    ctx->pc = 0x4d315cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 17));
label_4d3160:
    // 0x4d3160: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x4d3160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_4d3164:
    // 0x4d3164: 0x1314825  or          $t1, $t1, $s1
    ctx->pc = 0x4d3164u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 17));
label_4d3168:
    // 0x4d3168: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4d3168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4d316c:
    // 0x4d316c: 0x1515025  or          $t2, $t2, $s1
    ctx->pc = 0x4d316cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 17));
label_4d3170:
    // 0x4d3170: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d3170u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4d3174:
    // 0x4d3174: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x4d3174u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
label_4d3178:
    // 0x4d3178: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d3178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d317c:
    // 0x4d317c: 0xc93024  and         $a2, $a2, $t1
    ctx->pc = 0x4d317cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
label_4d3180:
    // 0x4d3180: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x4d3180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
label_4d3184:
    // 0x4d3184: 0xaea70000  sw          $a3, 0x0($s5)
    ctx->pc = 0x4d3184u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 7));
label_4d3188:
    // 0x4d3188: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4d3188u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_4d318c:
    // 0x4d318c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4d318cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
label_4d3190:
    // 0x4d3190: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x4d3190u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
label_4d3194:
    // 0x4d3194: 0x24e71030  addiu       $a3, $a3, 0x1030
    ctx->pc = 0x4d3194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4144));
label_4d3198:
    // 0x4d3198: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x4d3198u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_4d319c:
    // 0x4d319c: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x4d319cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_4d31a0:
    // 0x4d31a0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4d31a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d31a4:
    // 0x4d31a4: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4d31a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4d31a8:
    // 0x4d31a8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d31a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4d31ac:
    // 0x4d31ac: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4d31acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4d31b0:
    // 0x4d31b0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d31b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4d31b4:
    // 0x4d31b4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4d31b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_4d31b8:
    // 0x4d31b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d31b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d31bc:
    // 0x4d31bc: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x4d31bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
label_4d31c0:
    // 0x4d31c0: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x4d31c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4d31c4:
    // 0x4d31c4: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4d31c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_4d31c8:
    // 0x4d31c8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d31c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4d31cc:
    // 0x4d31cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d31ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d31d0:
    // 0x4d31d0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d31d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4d31d4:
    // 0x4d31d4: 0x24421030  addiu       $v0, $v0, 0x1030
    ctx->pc = 0x4d31d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4144));
label_4d31d8:
    // 0x4d31d8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x4d31d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4d31dc:
    // 0x4d31dc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4d31dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_4d31e0:
    // 0x4d31e0: 0x7fad0030  sq          $t5, 0x30($sp)
    ctx->pc = 0x4d31e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 13));
label_4d31e4:
    // 0x4d31e4: 0x7fae0040  sq          $t6, 0x40($sp)
    ctx->pc = 0x4d31e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 14));
label_4d31e8:
    // 0x4d31e8: 0x7faf0050  sq          $t7, 0x50($sp)
    ctx->pc = 0x4d31e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 15));
label_4d31ec:
    // 0x4d31ec: 0xc12b87a  jal         func_4AE1E8
label_4d31f0:
    if (ctx->pc == 0x4D31F0u) {
        ctx->pc = 0x4D31F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D31ECu;
        // 0x4d31f0: 0x7fb90060  sq          $t9, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D31F4u;
        goto label_4d31f4;
    }
    ctx->pc = 0x4D31ECu;
    SET_GPR_U32(ctx, 31, 0x4D31F4u);
    ctx->pc = 0x4D31F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D31ECu;
    // 0x4d31f0: 0x7fb90060  sq          $t9, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4D31ECu, 0x4D31F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D31F4u;
label_4d31f4:
    // 0x4d31f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4d31f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4d31f8:
    // 0x4d31f8: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x4d31f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_4d31fc:
    // 0x4d31fc: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x4d31fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_4d3200:
    // 0x4d3200: 0x41403  sra         $v0, $a0, 16
    ctx->pc = 0x4d3200u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 16));
label_4d3204:
    // 0x4d3204: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x4d3204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_4d3208:
    // 0x4d3208: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d3208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4d320c:
    // 0x4d320c: 0x8ea80000  lw          $t0, 0x0($s5)
    ctx->pc = 0x4d320cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4d3210:
    // 0x4d3210: 0x54c03  sra         $t1, $a1, 16
    ctx->pc = 0x4d3210u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 5), 16));
label_4d3214:
    // 0x4d3214: 0x86c70000  lh          $a3, 0x0($s6)
    ctx->pc = 0x4d3214u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_4d3218:
    // 0x4d3218: 0x41403  sra         $v0, $a0, 16
    ctx->pc = 0x4d3218u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 16));
label_4d321c:
    // 0x4d321c: 0x86860000  lh          $a2, 0x0($s4)
    ctx->pc = 0x4d321cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_4d3220:
    // 0x4d3220: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4d3220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
label_4d3224:
    // 0x4d3224: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x4d3224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_4d3228:
    // 0x4d3228: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x4d3228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_4d322c:
    // 0x4d322c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4d322cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4d3230:
    // 0x4d3230: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4d3230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4d3234:
    // 0x4d3234: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4d3234u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_4d3238:
    // 0x4d3238: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d3238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4d323c:
    // 0x4d323c: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4d323cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_4d3240:
    // 0x4d3240: 0xf13825  or          $a3, $a3, $s1
    ctx->pc = 0x4d3240u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
label_4d3244:
    // 0x4d3244: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d3244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4d3248:
    // 0x4d3248: 0xd13025  or          $a2, $a2, $s1
    ctx->pc = 0x4d3248u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 17));
label_4d324c:
    // 0x4d324c: 0xaea80000  sw          $t0, 0x0($s5)
    ctx->pc = 0x4d324cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 8));
label_4d3250:
    // 0x4d3250: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4d3250u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_4d3254:
    // 0x4d3254: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4d3254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
label_4d3258:
    // 0x4d3258: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4d3258u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
label_4d325c:
    // 0x4d325c: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x4d325cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
label_4d3260:
    // 0x4d3260: 0x7bae0040  lq          $t6, 0x40($sp)
    ctx->pc = 0x4d3260u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4d3264:
    // 0x4d3264: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4d3264u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_4d3268:
    // 0x4d3268: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x4d3268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
label_4d326c:
    // 0x4d326c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d326cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4d3270:
    // 0x4d3270: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d3270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4d3274:
    // 0x4d3274: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4d3274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
label_4d3278:
    // 0x4d3278: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d3278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d327c:
    // 0x4d327c: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x4d327cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
label_4d3280:
    // 0x4d3280: 0x7bad0030  lq          $t5, 0x30($sp)
    ctx->pc = 0x4d3280u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d3284:
    // 0x4d3284: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4d3284u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_4d3288:
    // 0x4d3288: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x4d3288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_4d328c:
    // 0x4d328c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d328cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4d3290:
    // 0x4d3290: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d3290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4d3294:
    // 0x4d3294: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4d3294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
label_4d3298:
    // 0x4d3298: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d3298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d329c:
    // 0x4d329c: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x4d329cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
label_4d32a0:
    // 0x4d32a0: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4d32a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_4d32a4:
    // 0x4d32a4: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x4d32a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_4d32a8:
    // 0x4d32a8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d32a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4d32ac:
    // 0x4d32ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d32acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4d32b0:
    // 0x4d32b0: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4d32b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
label_4d32b4:
    // 0x4d32b4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4d32b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4d32b8:
    // 0x4d32b8: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x4d32b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_4d32bc:
    // 0x4d32bc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4d32bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d32c0:
    // 0x4d32c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d32c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d32c4:
    // 0x4d32c4: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4d32c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_4d32c8:
    // 0x4d32c8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d32c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_4d32cc:
    // 0x4d32cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d32ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d32d0:
    // 0x4d32d0: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4d32d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4d32d4:
    // 0x4d32d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4d32d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4d32d8:
    // 0x4d32d8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d32d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4d32dc:
    // 0x4d32dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d32dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d32e0:
    // 0x4d32e0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d32e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_4d32e4:
    // 0x4d32e4: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4d32e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4d32e8:
    // 0x4d32e8: 0x7baf0050  lq          $t7, 0x50($sp)
    ctx->pc = 0x4d32e8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4d32ec:
    // 0x4d32ec: 0x441ff7c  bgez        $v0, . + 4 + (-0x84 << 2)
label_4d32f0:
    if (ctx->pc == 0x4D32F0u) {
        ctx->pc = 0x4D32F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D32ECu;
        // 0x4d32f0: 0x7bb90060  lq          $t9, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D32F4u;
        goto label_4d32f4;
    }
    ctx->pc = 0x4D32ECu;
    {
        const bool branch_taken_0x4d32ec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4D32F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D32ECu;
        // 0x4d32f0: 0x7bb90060  lq          $t9, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d32ec) {
            ctx->pc = 0x4D30E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d30e0;
        }
    }
    ctx->pc = 0x4D32F4u;
label_4d32f4:
    // 0x4d32f4: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x4d32f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4d32f8:
    // 0x4d32f8: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4d32f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_4d32fc:
    // 0x4d32fc: 0x8de30000  lw          $v1, 0x0($t7)
    ctx->pc = 0x4d32fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_4d3300:
    // 0x4d3300: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x4d3300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_4d3304:
    // 0x4d3304: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x4d3304u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4d3308:
    // 0x4d3308: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d3308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4d330c:
    // 0x4d330c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4d330cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_4d3310:
    // 0x4d3310: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d3310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d3314:
    // 0x4d3314: 0x72400  sll         $a0, $a3, 16
    ctx->pc = 0x4d3314u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_4d3318:
    // 0x4d3318: 0xade30000  sw          $v1, 0x0($t7)
    ctx->pc = 0x4d3318u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 3));
label_4d331c:
    // 0x4d331c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d331cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4d3320:
    // 0x4d3320: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4d3320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4d3324:
    // 0x4d3324: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x4d3324u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4d3328:
    // 0x4d3328: 0x8f220000  lw          $v0, 0x0($t9)
    ctx->pc = 0x4d3328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
label_4d332c:
    // 0x4d332c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d332cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4d3330:
    // 0x4d3330: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4d3330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4d3334:
    // 0x4d3334: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4d3334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_4d3338:
    // 0x4d3338: 0xaf220000  sw          $v0, 0x0($t9)
    ctx->pc = 0x4d3338u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 2));
label_4d333c:
    // 0x4d333c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x4d333cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_4d3340:
    // 0x4d3340: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4d3340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d3344:
    // 0x4d3344: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4d3344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_4d3348:
    // 0x4d3348: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4d3348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_4d334c:
    // 0x4d334c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4d334cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4d3350:
    // 0x4d3350: 0x86620148  lh          $v0, 0x148($s3)
    ctx->pc = 0x4d3350u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 328)));
label_4d3354:
    // 0x4d3354: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_4d3358:
    if (ctx->pc == 0x4D3358u) {
        ctx->pc = 0x4D3358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3354u;
        // 0x4d3358: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D335Cu;
        goto label_4d335c;
    }
    ctx->pc = 0x4D3354u;
    {
        const bool branch_taken_0x4d3354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D3358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3354u;
        // 0x4d3358: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3354) {
            ctx->pc = 0x4D3378u;
            goto label_4d3378;
        }
    }
    ctx->pc = 0x4D335Cu;
label_4d335c:
    // 0x4d335c: 0x240304a2  addiu       $v1, $zero, 0x4A2
    ctx->pc = 0x4d335cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1186));
label_4d3360:
    // 0x4d3360: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4d3360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4d3364:
    // 0x4d3364: 0xa66201bc  sh          $v0, 0x1BC($s3)
    ctx->pc = 0x4d3364u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 444), (uint16_t)GPR_U32(ctx, 2));
label_4d3368:
    // 0x4d3368: 0xa663000c  sh          $v1, 0xC($s3)
    ctx->pc = 0x4d3368u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12), (uint16_t)GPR_U32(ctx, 3));
label_4d336c:
    // 0x4d336c: 0xa6600166  sh          $zero, 0x166($s3)
    ctx->pc = 0x4d336cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 358), (uint16_t)GPR_U32(ctx, 0));
label_4d3370:
    // 0x4d3370: 0xa6600168  sh          $zero, 0x168($s3)
    ctx->pc = 0x4d3370u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 360), (uint16_t)GPR_U32(ctx, 0));
label_4d3374:
    // 0x4d3374: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x4d3374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4d3378:
    // 0x4d3378: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x4d3378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_4d337c:
    // 0x4d337c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x4d337cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4d3380:
    // 0x4d3380: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x4d3380u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_4d3384:
    // 0x4d3384: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x4d3384u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4d3388:
    // 0x4d3388: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x4d3388u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_4d338c:
    // 0x4d338c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x4d338cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4d3390:
    // 0x4d3390: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x4d3390u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_4d3394:
    // 0x4d3394: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x4d3394u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_4d3398:
    // 0x4d3398: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x4d3398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_4d339c:
    // 0x4d339c: 0x3e00008  jr          $ra
label_4d33a0:
    if (ctx->pc == 0x4D33A0u) {
        ctx->pc = 0x4D33A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D339Cu;
        // 0x4d33a0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D33A4u;
        goto label_4d33a4;
    }
    ctx->pc = 0x4D339Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D33A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D339Cu;
        // 0x4d33a0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D339Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D33A4u;
label_4d33a4:
    // 0x4d33a4: 0x0  nop
    ctx->pc = 0x4d33a4u;
    // NOP
label_4d33a8:
    // 0x4d33a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d33a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4d33ac:
    // 0x4d33ac: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4d33acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
label_4d33b0:
    // 0x4d33b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d33b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d33b4:
    // 0x4d33b4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d33b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4d33b8:
    // 0x4d33b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d33b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4d33bc:
    // 0x4d33bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d33bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d33c0:
    // 0x4d33c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d33c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4d33c4:
    // 0x4d33c4: 0x24b2102c  addiu       $s2, $a1, 0x102C
    ctx->pc = 0x4d33c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4140));
label_4d33c8:
    // 0x4d33c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d33c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4d33cc:
    // 0x4d33cc: 0x24d31044  addiu       $s3, $a2, 0x1044
    ctx->pc = 0x4d33ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 4164));
label_4d33d0:
    // 0x4d33d0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d33d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4d33d4:
    // 0x4d33d4: 0x24140006  addiu       $s4, $zero, 0x6
    ctx->pc = 0x4d33d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4d33d8:
    // 0x4d33d8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4d33d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_4d33dc:
    // 0x4d33dc: 0x26230166  addiu       $v1, $s1, 0x166
    ctx->pc = 0x4d33dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 358));
label_4d33e0:
    // 0x4d33e0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4d33e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_4d33e4:
    // 0x4d33e4: 0x26300168  addiu       $s0, $s1, 0x168
    ctx->pc = 0x4d33e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 360));
label_4d33e8:
    // 0x4d33e8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4d33e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_4d33ec:
    // 0x4d33ec: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x4d33ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4d33f0:
    // 0x4d33f0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4d33f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_4d33f4:
    // 0x4d33f4: 0x3c1effff  lui         $fp, 0xFFFF
    ctx->pc = 0x4d33f4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65535 << 16));
label_4d33f8:
    // 0x4d33f8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4d33f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_4d33fc:
    // 0x4d33fc: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x4d33fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_4d3400:
    // 0x4d3400: 0x24957698  addiu       $s5, $a0, 0x7698
    ctx->pc = 0x4d3400u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 30360));
label_4d3404:
    // 0x4d3404: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x4d3404u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d3408:
    // 0x4d3408: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d3408u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4d340c:
    // 0x4d340c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4d340cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4d3410:
    // 0x4d3410: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d3410u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d3414:
    // 0x4d3414: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x4d3414u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_4d3418:
    // 0x4d3418: 0x86c30000  lh          $v1, 0x0($s6)
    ctx->pc = 0x4d3418u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_4d341c:
    // 0x4d341c: 0x74001a  div         $zero, $v1, $s4
    ctx->pc = 0x4d341cu;
    { int32_t divisor = GPR_S32(ctx, 20);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_4d3420:
    // 0x4d3420: 0x1812  mflo        $v1
    ctx->pc = 0x4d3420u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_4d3424:
    // 0x4d3424: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x4d3424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4d3428:
    // 0x4d3428: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d3428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d342c:
    // 0x4d342c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d342cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4d3430:
    // 0x4d3430: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x4d3430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4d3434:
    // 0x4d3434: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x4d3434u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4d3438:
    // 0x4d3438: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4d3438u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4d343c:
    // 0x4d343c: 0x4600016  bltz        $v1, . + 4 + (0x16 << 2)
label_4d3440:
    if (ctx->pc == 0x4D3440u) {
        ctx->pc = 0x4D3440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D343Cu;
        // 0x4d3440: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3444u;
        goto label_4d3444;
    }
    ctx->pc = 0x4D343Cu;
    {
        const bool branch_taken_0x4d343c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4D3440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D343Cu;
        // 0x4d3440: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d343c) {
            ctx->pc = 0x4D3498u;
            goto label_4d3498;
        }
    }
    ctx->pc = 0x4D3444u;
label_4d3444:
    // 0x4d3444: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4d3444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d3448:
    // 0x4d3448: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x4d3448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_4d344c:
    // 0x4d344c: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x4d344cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_4d3450:
    // 0x4d3450: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d3450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d3454:
    // 0x4d3454: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x4d3454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
label_4d3458:
    // 0x4d3458: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d3458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d345c:
    // 0x4d345c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d345cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_4d3460:
    // 0x4d3460: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4d3460u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4d3464:
    // 0x4d3464: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4d3464u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4d3468:
    // 0x4d3468: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_4d346c:
    if (ctx->pc == 0x4D346Cu) {
        ctx->pc = 0x4D346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3468u;
        // 0x4d346c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3470u;
        goto label_4d3470;
    }
    ctx->pc = 0x4D3468u;
    {
        const bool branch_taken_0x4d3468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d3468) {
            ctx->pc = 0x4D346Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D3468u;
            // 0x4d346c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D349Cu;
            goto label_4d349c;
        }
    }
    ctx->pc = 0x4D3470u;
label_4d3470:
    // 0x4d3470: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4d3470u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4d3474:
    // 0x4d3474: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x4d3474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_4d3478:
    // 0x4d3478: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4d3478u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d347c:
    // 0x4d347c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4d347cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4d3480:
    // 0x4d3480: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4d3480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4d3484:
    // 0x4d3484: 0x40f809  jalr        $v0
label_4d3488:
    if (ctx->pc == 0x4D3488u) {
        ctx->pc = 0x4D3488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3484u;
        // 0x4d3488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D348Cu;
        goto label_4d348c;
    }
    ctx->pc = 0x4D3484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4D348Cu);
        ctx->pc = 0x4D3488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3484u;
        // 0x4d3488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D3484u, 0x4D348Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4D348Cu;
label_4d348c:
    // 0x4d348c: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
label_4d3490:
    if (ctx->pc == 0x4D3490u) {
        ctx->pc = 0x4D3490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D348Cu;
        // 0x4d3490: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D3494u;
        goto label_4d3494;
    }
    ctx->pc = 0x4D348Cu;
    {
        const bool branch_taken_0x4d348c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D348Cu;
        // 0x4d3490: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d348c) {
            ctx->pc = 0x4D3418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d3418;
        }
    }
    ctx->pc = 0x4D3494u;
label_4d3494:
    // 0x4d3494: 0x0  nop
    ctx->pc = 0x4d3494u;
    // NOP
label_4d3498:
    // 0x4d3498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d3498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d349c:
    // 0x4d349c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d349cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d34a0:
    // 0x4d34a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d34a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d34a4:
    // 0x4d34a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d34a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4d34a8:
    // 0x4d34a8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d34a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d34ac:
    // 0x4d34ac: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d34acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4d34b0:
    // 0x4d34b0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d34b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4d34b4:
    // 0x4d34b4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4d34b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4d34b8:
    // 0x4d34b8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4d34b8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d34bc:
    // 0x4d34bc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4d34bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_4d34c0:
    // 0x4d34c0: 0x3e00008  jr          $ra
label_4d34c4:
    if (ctx->pc == 0x4D34C4u) {
        ctx->pc = 0x4D34C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D34C0u;
        // 0x4d34c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D34C8u;
        goto label_4d34c8;
    }
    ctx->pc = 0x4D34C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D34C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D34C0u;
        // 0x4d34c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D34C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D34C8u;
label_4d34c8:
    // 0x4d34c8: 0x3e00008  jr          $ra
label_4d34cc:
    if (ctx->pc == 0x4D34CCu) {
        ctx->pc = 0x4D34D0u;
        goto label_fallthrough_0x4d34c8;
    }
    ctx->pc = 0x4D34C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D34C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4d34c8:
    ctx->pc = 0x4D34D0u;
}
