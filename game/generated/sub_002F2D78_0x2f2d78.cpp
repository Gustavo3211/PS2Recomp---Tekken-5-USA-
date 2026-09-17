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

// Function: sub_002F2D78
// Address: 0x2f2d78 - 0x2f39d0
void sub_002F2D78_0x2f2d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2D78_0x2f2d78");
#endif

    switch (ctx->pc) {
        case 0x2f2d78u: goto label_2f2d78;
        case 0x2f2d7cu: goto label_2f2d7c;
        case 0x2f2d80u: goto label_2f2d80;
        case 0x2f2d84u: goto label_2f2d84;
        case 0x2f2d88u: goto label_2f2d88;
        case 0x2f2d8cu: goto label_2f2d8c;
        case 0x2f2d90u: goto label_2f2d90;
        case 0x2f2d94u: goto label_2f2d94;
        case 0x2f2d98u: goto label_2f2d98;
        case 0x2f2d9cu: goto label_2f2d9c;
        case 0x2f2da0u: goto label_2f2da0;
        case 0x2f2da4u: goto label_2f2da4;
        case 0x2f2da8u: goto label_2f2da8;
        case 0x2f2dacu: goto label_2f2dac;
        case 0x2f2db0u: goto label_2f2db0;
        case 0x2f2db4u: goto label_2f2db4;
        case 0x2f2db8u: goto label_2f2db8;
        case 0x2f2dbcu: goto label_2f2dbc;
        case 0x2f2dc0u: goto label_2f2dc0;
        case 0x2f2dc4u: goto label_2f2dc4;
        case 0x2f2dc8u: goto label_2f2dc8;
        case 0x2f2dccu: goto label_2f2dcc;
        case 0x2f2dd0u: goto label_2f2dd0;
        case 0x2f2dd4u: goto label_2f2dd4;
        case 0x2f2dd8u: goto label_2f2dd8;
        case 0x2f2ddcu: goto label_2f2ddc;
        case 0x2f2de0u: goto label_2f2de0;
        case 0x2f2de4u: goto label_2f2de4;
        case 0x2f2de8u: goto label_2f2de8;
        case 0x2f2decu: goto label_2f2dec;
        case 0x2f2df0u: goto label_2f2df0;
        case 0x2f2df4u: goto label_2f2df4;
        case 0x2f2df8u: goto label_2f2df8;
        case 0x2f2dfcu: goto label_2f2dfc;
        case 0x2f2e00u: goto label_2f2e00;
        case 0x2f2e04u: goto label_2f2e04;
        case 0x2f2e08u: goto label_2f2e08;
        case 0x2f2e0cu: goto label_2f2e0c;
        case 0x2f2e10u: goto label_2f2e10;
        case 0x2f2e14u: goto label_2f2e14;
        case 0x2f2e18u: goto label_2f2e18;
        case 0x2f2e1cu: goto label_2f2e1c;
        case 0x2f2e20u: goto label_2f2e20;
        case 0x2f2e24u: goto label_2f2e24;
        case 0x2f2e28u: goto label_2f2e28;
        case 0x2f2e2cu: goto label_2f2e2c;
        case 0x2f2e30u: goto label_2f2e30;
        case 0x2f2e34u: goto label_2f2e34;
        case 0x2f2e38u: goto label_2f2e38;
        case 0x2f2e3cu: goto label_2f2e3c;
        case 0x2f2e40u: goto label_2f2e40;
        case 0x2f2e44u: goto label_2f2e44;
        case 0x2f2e48u: goto label_2f2e48;
        case 0x2f2e4cu: goto label_2f2e4c;
        case 0x2f2e50u: goto label_2f2e50;
        case 0x2f2e54u: goto label_2f2e54;
        case 0x2f2e58u: goto label_2f2e58;
        case 0x2f2e5cu: goto label_2f2e5c;
        case 0x2f2e60u: goto label_2f2e60;
        case 0x2f2e64u: goto label_2f2e64;
        case 0x2f2e68u: goto label_2f2e68;
        case 0x2f2e6cu: goto label_2f2e6c;
        case 0x2f2e70u: goto label_2f2e70;
        case 0x2f2e74u: goto label_2f2e74;
        case 0x2f2e78u: goto label_2f2e78;
        case 0x2f2e7cu: goto label_2f2e7c;
        case 0x2f2e80u: goto label_2f2e80;
        case 0x2f2e84u: goto label_2f2e84;
        case 0x2f2e88u: goto label_2f2e88;
        case 0x2f2e8cu: goto label_2f2e8c;
        case 0x2f2e90u: goto label_2f2e90;
        case 0x2f2e94u: goto label_2f2e94;
        case 0x2f2e98u: goto label_2f2e98;
        case 0x2f2e9cu: goto label_2f2e9c;
        case 0x2f2ea0u: goto label_2f2ea0;
        case 0x2f2ea4u: goto label_2f2ea4;
        case 0x2f2ea8u: goto label_2f2ea8;
        case 0x2f2eacu: goto label_2f2eac;
        case 0x2f2eb0u: goto label_2f2eb0;
        case 0x2f2eb4u: goto label_2f2eb4;
        case 0x2f2eb8u: goto label_2f2eb8;
        case 0x2f2ebcu: goto label_2f2ebc;
        case 0x2f2ec0u: goto label_2f2ec0;
        case 0x2f2ec4u: goto label_2f2ec4;
        case 0x2f2ec8u: goto label_2f2ec8;
        case 0x2f2eccu: goto label_2f2ecc;
        case 0x2f2ed0u: goto label_2f2ed0;
        case 0x2f2ed4u: goto label_2f2ed4;
        case 0x2f2ed8u: goto label_2f2ed8;
        case 0x2f2edcu: goto label_2f2edc;
        case 0x2f2ee0u: goto label_2f2ee0;
        case 0x2f2ee4u: goto label_2f2ee4;
        case 0x2f2ee8u: goto label_2f2ee8;
        case 0x2f2eecu: goto label_2f2eec;
        case 0x2f2ef0u: goto label_2f2ef0;
        case 0x2f2ef4u: goto label_2f2ef4;
        case 0x2f2ef8u: goto label_2f2ef8;
        case 0x2f2efcu: goto label_2f2efc;
        case 0x2f2f00u: goto label_2f2f00;
        case 0x2f2f04u: goto label_2f2f04;
        case 0x2f2f08u: goto label_2f2f08;
        case 0x2f2f0cu: goto label_2f2f0c;
        case 0x2f2f10u: goto label_2f2f10;
        case 0x2f2f14u: goto label_2f2f14;
        case 0x2f2f18u: goto label_2f2f18;
        case 0x2f2f1cu: goto label_2f2f1c;
        case 0x2f2f20u: goto label_2f2f20;
        case 0x2f2f24u: goto label_2f2f24;
        case 0x2f2f28u: goto label_2f2f28;
        case 0x2f2f2cu: goto label_2f2f2c;
        case 0x2f2f30u: goto label_2f2f30;
        case 0x2f2f34u: goto label_2f2f34;
        case 0x2f2f38u: goto label_2f2f38;
        case 0x2f2f3cu: goto label_2f2f3c;
        case 0x2f2f40u: goto label_2f2f40;
        case 0x2f2f44u: goto label_2f2f44;
        case 0x2f2f48u: goto label_2f2f48;
        case 0x2f2f4cu: goto label_2f2f4c;
        case 0x2f2f50u: goto label_2f2f50;
        case 0x2f2f54u: goto label_2f2f54;
        case 0x2f2f58u: goto label_2f2f58;
        case 0x2f2f5cu: goto label_2f2f5c;
        case 0x2f2f60u: goto label_2f2f60;
        case 0x2f2f64u: goto label_2f2f64;
        case 0x2f2f68u: goto label_2f2f68;
        case 0x2f2f6cu: goto label_2f2f6c;
        case 0x2f2f70u: goto label_2f2f70;
        case 0x2f2f74u: goto label_2f2f74;
        case 0x2f2f78u: goto label_2f2f78;
        case 0x2f2f7cu: goto label_2f2f7c;
        case 0x2f2f80u: goto label_2f2f80;
        case 0x2f2f84u: goto label_2f2f84;
        case 0x2f2f88u: goto label_2f2f88;
        case 0x2f2f8cu: goto label_2f2f8c;
        case 0x2f2f90u: goto label_2f2f90;
        case 0x2f2f94u: goto label_2f2f94;
        case 0x2f2f98u: goto label_2f2f98;
        case 0x2f2f9cu: goto label_2f2f9c;
        case 0x2f2fa0u: goto label_2f2fa0;
        case 0x2f2fa4u: goto label_2f2fa4;
        case 0x2f2fa8u: goto label_2f2fa8;
        case 0x2f2facu: goto label_2f2fac;
        case 0x2f2fb0u: goto label_2f2fb0;
        case 0x2f2fb4u: goto label_2f2fb4;
        case 0x2f2fb8u: goto label_2f2fb8;
        case 0x2f2fbcu: goto label_2f2fbc;
        case 0x2f2fc0u: goto label_2f2fc0;
        case 0x2f2fc4u: goto label_2f2fc4;
        case 0x2f2fc8u: goto label_2f2fc8;
        case 0x2f2fccu: goto label_2f2fcc;
        case 0x2f2fd0u: goto label_2f2fd0;
        case 0x2f2fd4u: goto label_2f2fd4;
        case 0x2f2fd8u: goto label_2f2fd8;
        case 0x2f2fdcu: goto label_2f2fdc;
        case 0x2f2fe0u: goto label_2f2fe0;
        case 0x2f2fe4u: goto label_2f2fe4;
        case 0x2f2fe8u: goto label_2f2fe8;
        case 0x2f2fecu: goto label_2f2fec;
        case 0x2f2ff0u: goto label_2f2ff0;
        case 0x2f2ff4u: goto label_2f2ff4;
        case 0x2f2ff8u: goto label_2f2ff8;
        case 0x2f2ffcu: goto label_2f2ffc;
        case 0x2f3000u: goto label_2f3000;
        case 0x2f3004u: goto label_2f3004;
        case 0x2f3008u: goto label_2f3008;
        case 0x2f300cu: goto label_2f300c;
        case 0x2f3010u: goto label_2f3010;
        case 0x2f3014u: goto label_2f3014;
        case 0x2f3018u: goto label_2f3018;
        case 0x2f301cu: goto label_2f301c;
        case 0x2f3020u: goto label_2f3020;
        case 0x2f3024u: goto label_2f3024;
        case 0x2f3028u: goto label_2f3028;
        case 0x2f302cu: goto label_2f302c;
        case 0x2f3030u: goto label_2f3030;
        case 0x2f3034u: goto label_2f3034;
        case 0x2f3038u: goto label_2f3038;
        case 0x2f303cu: goto label_2f303c;
        case 0x2f3040u: goto label_2f3040;
        case 0x2f3044u: goto label_2f3044;
        case 0x2f3048u: goto label_2f3048;
        case 0x2f304cu: goto label_2f304c;
        case 0x2f3050u: goto label_2f3050;
        case 0x2f3054u: goto label_2f3054;
        case 0x2f3058u: goto label_2f3058;
        case 0x2f305cu: goto label_2f305c;
        case 0x2f3060u: goto label_2f3060;
        case 0x2f3064u: goto label_2f3064;
        case 0x2f3068u: goto label_2f3068;
        case 0x2f306cu: goto label_2f306c;
        case 0x2f3070u: goto label_2f3070;
        case 0x2f3074u: goto label_2f3074;
        case 0x2f3078u: goto label_2f3078;
        case 0x2f307cu: goto label_2f307c;
        case 0x2f3080u: goto label_2f3080;
        case 0x2f3084u: goto label_2f3084;
        case 0x2f3088u: goto label_2f3088;
        case 0x2f308cu: goto label_2f308c;
        case 0x2f3090u: goto label_2f3090;
        case 0x2f3094u: goto label_2f3094;
        case 0x2f3098u: goto label_2f3098;
        case 0x2f309cu: goto label_2f309c;
        case 0x2f30a0u: goto label_2f30a0;
        case 0x2f30a4u: goto label_2f30a4;
        case 0x2f30a8u: goto label_2f30a8;
        case 0x2f30acu: goto label_2f30ac;
        case 0x2f30b0u: goto label_2f30b0;
        case 0x2f30b4u: goto label_2f30b4;
        case 0x2f30b8u: goto label_2f30b8;
        case 0x2f30bcu: goto label_2f30bc;
        case 0x2f30c0u: goto label_2f30c0;
        case 0x2f30c4u: goto label_2f30c4;
        case 0x2f30c8u: goto label_2f30c8;
        case 0x2f30ccu: goto label_2f30cc;
        case 0x2f30d0u: goto label_2f30d0;
        case 0x2f30d4u: goto label_2f30d4;
        case 0x2f30d8u: goto label_2f30d8;
        case 0x2f30dcu: goto label_2f30dc;
        case 0x2f30e0u: goto label_2f30e0;
        case 0x2f30e4u: goto label_2f30e4;
        case 0x2f30e8u: goto label_2f30e8;
        case 0x2f30ecu: goto label_2f30ec;
        case 0x2f30f0u: goto label_2f30f0;
        case 0x2f30f4u: goto label_2f30f4;
        case 0x2f30f8u: goto label_2f30f8;
        case 0x2f30fcu: goto label_2f30fc;
        case 0x2f3100u: goto label_2f3100;
        case 0x2f3104u: goto label_2f3104;
        case 0x2f3108u: goto label_2f3108;
        case 0x2f310cu: goto label_2f310c;
        case 0x2f3110u: goto label_2f3110;
        case 0x2f3114u: goto label_2f3114;
        case 0x2f3118u: goto label_2f3118;
        case 0x2f311cu: goto label_2f311c;
        case 0x2f3120u: goto label_2f3120;
        case 0x2f3124u: goto label_2f3124;
        case 0x2f3128u: goto label_2f3128;
        case 0x2f312cu: goto label_2f312c;
        case 0x2f3130u: goto label_2f3130;
        case 0x2f3134u: goto label_2f3134;
        case 0x2f3138u: goto label_2f3138;
        case 0x2f313cu: goto label_2f313c;
        case 0x2f3140u: goto label_2f3140;
        case 0x2f3144u: goto label_2f3144;
        case 0x2f3148u: goto label_2f3148;
        case 0x2f314cu: goto label_2f314c;
        case 0x2f3150u: goto label_2f3150;
        case 0x2f3154u: goto label_2f3154;
        case 0x2f3158u: goto label_2f3158;
        case 0x2f315cu: goto label_2f315c;
        case 0x2f3160u: goto label_2f3160;
        case 0x2f3164u: goto label_2f3164;
        case 0x2f3168u: goto label_2f3168;
        case 0x2f316cu: goto label_2f316c;
        case 0x2f3170u: goto label_2f3170;
        case 0x2f3174u: goto label_2f3174;
        case 0x2f3178u: goto label_2f3178;
        case 0x2f317cu: goto label_2f317c;
        case 0x2f3180u: goto label_2f3180;
        case 0x2f3184u: goto label_2f3184;
        case 0x2f3188u: goto label_2f3188;
        case 0x2f318cu: goto label_2f318c;
        case 0x2f3190u: goto label_2f3190;
        case 0x2f3194u: goto label_2f3194;
        case 0x2f3198u: goto label_2f3198;
        case 0x2f319cu: goto label_2f319c;
        case 0x2f31a0u: goto label_2f31a0;
        case 0x2f31a4u: goto label_2f31a4;
        case 0x2f31a8u: goto label_2f31a8;
        case 0x2f31acu: goto label_2f31ac;
        case 0x2f31b0u: goto label_2f31b0;
        case 0x2f31b4u: goto label_2f31b4;
        case 0x2f31b8u: goto label_2f31b8;
        case 0x2f31bcu: goto label_2f31bc;
        case 0x2f31c0u: goto label_2f31c0;
        case 0x2f31c4u: goto label_2f31c4;
        case 0x2f31c8u: goto label_2f31c8;
        case 0x2f31ccu: goto label_2f31cc;
        case 0x2f31d0u: goto label_2f31d0;
        case 0x2f31d4u: goto label_2f31d4;
        case 0x2f31d8u: goto label_2f31d8;
        case 0x2f31dcu: goto label_2f31dc;
        case 0x2f31e0u: goto label_2f31e0;
        case 0x2f31e4u: goto label_2f31e4;
        case 0x2f31e8u: goto label_2f31e8;
        case 0x2f31ecu: goto label_2f31ec;
        case 0x2f31f0u: goto label_2f31f0;
        case 0x2f31f4u: goto label_2f31f4;
        case 0x2f31f8u: goto label_2f31f8;
        case 0x2f31fcu: goto label_2f31fc;
        case 0x2f3200u: goto label_2f3200;
        case 0x2f3204u: goto label_2f3204;
        case 0x2f3208u: goto label_2f3208;
        case 0x2f320cu: goto label_2f320c;
        case 0x2f3210u: goto label_2f3210;
        case 0x2f3214u: goto label_2f3214;
        case 0x2f3218u: goto label_2f3218;
        case 0x2f321cu: goto label_2f321c;
        case 0x2f3220u: goto label_2f3220;
        case 0x2f3224u: goto label_2f3224;
        case 0x2f3228u: goto label_2f3228;
        case 0x2f322cu: goto label_2f322c;
        case 0x2f3230u: goto label_2f3230;
        case 0x2f3234u: goto label_2f3234;
        case 0x2f3238u: goto label_2f3238;
        case 0x2f323cu: goto label_2f323c;
        case 0x2f3240u: goto label_2f3240;
        case 0x2f3244u: goto label_2f3244;
        case 0x2f3248u: goto label_2f3248;
        case 0x2f324cu: goto label_2f324c;
        case 0x2f3250u: goto label_2f3250;
        case 0x2f3254u: goto label_2f3254;
        case 0x2f3258u: goto label_2f3258;
        case 0x2f325cu: goto label_2f325c;
        case 0x2f3260u: goto label_2f3260;
        case 0x2f3264u: goto label_2f3264;
        case 0x2f3268u: goto label_2f3268;
        case 0x2f326cu: goto label_2f326c;
        case 0x2f3270u: goto label_2f3270;
        case 0x2f3274u: goto label_2f3274;
        case 0x2f3278u: goto label_2f3278;
        case 0x2f327cu: goto label_2f327c;
        case 0x2f3280u: goto label_2f3280;
        case 0x2f3284u: goto label_2f3284;
        case 0x2f3288u: goto label_2f3288;
        case 0x2f328cu: goto label_2f328c;
        case 0x2f3290u: goto label_2f3290;
        case 0x2f3294u: goto label_2f3294;
        case 0x2f3298u: goto label_2f3298;
        case 0x2f329cu: goto label_2f329c;
        case 0x2f32a0u: goto label_2f32a0;
        case 0x2f32a4u: goto label_2f32a4;
        case 0x2f32a8u: goto label_2f32a8;
        case 0x2f32acu: goto label_2f32ac;
        case 0x2f32b0u: goto label_2f32b0;
        case 0x2f32b4u: goto label_2f32b4;
        case 0x2f32b8u: goto label_2f32b8;
        case 0x2f32bcu: goto label_2f32bc;
        case 0x2f32c0u: goto label_2f32c0;
        case 0x2f32c4u: goto label_2f32c4;
        case 0x2f32c8u: goto label_2f32c8;
        case 0x2f32ccu: goto label_2f32cc;
        case 0x2f32d0u: goto label_2f32d0;
        case 0x2f32d4u: goto label_2f32d4;
        case 0x2f32d8u: goto label_2f32d8;
        case 0x2f32dcu: goto label_2f32dc;
        case 0x2f32e0u: goto label_2f32e0;
        case 0x2f32e4u: goto label_2f32e4;
        case 0x2f32e8u: goto label_2f32e8;
        case 0x2f32ecu: goto label_2f32ec;
        case 0x2f32f0u: goto label_2f32f0;
        case 0x2f32f4u: goto label_2f32f4;
        case 0x2f32f8u: goto label_2f32f8;
        case 0x2f32fcu: goto label_2f32fc;
        case 0x2f3300u: goto label_2f3300;
        case 0x2f3304u: goto label_2f3304;
        case 0x2f3308u: goto label_2f3308;
        case 0x2f330cu: goto label_2f330c;
        case 0x2f3310u: goto label_2f3310;
        case 0x2f3314u: goto label_2f3314;
        case 0x2f3318u: goto label_2f3318;
        case 0x2f331cu: goto label_2f331c;
        case 0x2f3320u: goto label_2f3320;
        case 0x2f3324u: goto label_2f3324;
        case 0x2f3328u: goto label_2f3328;
        case 0x2f332cu: goto label_2f332c;
        case 0x2f3330u: goto label_2f3330;
        case 0x2f3334u: goto label_2f3334;
        case 0x2f3338u: goto label_2f3338;
        case 0x2f333cu: goto label_2f333c;
        case 0x2f3340u: goto label_2f3340;
        case 0x2f3344u: goto label_2f3344;
        case 0x2f3348u: goto label_2f3348;
        case 0x2f334cu: goto label_2f334c;
        case 0x2f3350u: goto label_2f3350;
        case 0x2f3354u: goto label_2f3354;
        case 0x2f3358u: goto label_2f3358;
        case 0x2f335cu: goto label_2f335c;
        case 0x2f3360u: goto label_2f3360;
        case 0x2f3364u: goto label_2f3364;
        case 0x2f3368u: goto label_2f3368;
        case 0x2f336cu: goto label_2f336c;
        case 0x2f3370u: goto label_2f3370;
        case 0x2f3374u: goto label_2f3374;
        case 0x2f3378u: goto label_2f3378;
        case 0x2f337cu: goto label_2f337c;
        case 0x2f3380u: goto label_2f3380;
        case 0x2f3384u: goto label_2f3384;
        case 0x2f3388u: goto label_2f3388;
        case 0x2f338cu: goto label_2f338c;
        case 0x2f3390u: goto label_2f3390;
        case 0x2f3394u: goto label_2f3394;
        case 0x2f3398u: goto label_2f3398;
        case 0x2f339cu: goto label_2f339c;
        case 0x2f33a0u: goto label_2f33a0;
        case 0x2f33a4u: goto label_2f33a4;
        case 0x2f33a8u: goto label_2f33a8;
        case 0x2f33acu: goto label_2f33ac;
        case 0x2f33b0u: goto label_2f33b0;
        case 0x2f33b4u: goto label_2f33b4;
        case 0x2f33b8u: goto label_2f33b8;
        case 0x2f33bcu: goto label_2f33bc;
        case 0x2f33c0u: goto label_2f33c0;
        case 0x2f33c4u: goto label_2f33c4;
        case 0x2f33c8u: goto label_2f33c8;
        case 0x2f33ccu: goto label_2f33cc;
        case 0x2f33d0u: goto label_2f33d0;
        case 0x2f33d4u: goto label_2f33d4;
        case 0x2f33d8u: goto label_2f33d8;
        case 0x2f33dcu: goto label_2f33dc;
        case 0x2f33e0u: goto label_2f33e0;
        case 0x2f33e4u: goto label_2f33e4;
        case 0x2f33e8u: goto label_2f33e8;
        case 0x2f33ecu: goto label_2f33ec;
        case 0x2f33f0u: goto label_2f33f0;
        case 0x2f33f4u: goto label_2f33f4;
        case 0x2f33f8u: goto label_2f33f8;
        case 0x2f33fcu: goto label_2f33fc;
        case 0x2f3400u: goto label_2f3400;
        case 0x2f3404u: goto label_2f3404;
        case 0x2f3408u: goto label_2f3408;
        case 0x2f340cu: goto label_2f340c;
        case 0x2f3410u: goto label_2f3410;
        case 0x2f3414u: goto label_2f3414;
        case 0x2f3418u: goto label_2f3418;
        case 0x2f341cu: goto label_2f341c;
        case 0x2f3420u: goto label_2f3420;
        case 0x2f3424u: goto label_2f3424;
        case 0x2f3428u: goto label_2f3428;
        case 0x2f342cu: goto label_2f342c;
        case 0x2f3430u: goto label_2f3430;
        case 0x2f3434u: goto label_2f3434;
        case 0x2f3438u: goto label_2f3438;
        case 0x2f343cu: goto label_2f343c;
        case 0x2f3440u: goto label_2f3440;
        case 0x2f3444u: goto label_2f3444;
        case 0x2f3448u: goto label_2f3448;
        case 0x2f344cu: goto label_2f344c;
        case 0x2f3450u: goto label_2f3450;
        case 0x2f3454u: goto label_2f3454;
        case 0x2f3458u: goto label_2f3458;
        case 0x2f345cu: goto label_2f345c;
        case 0x2f3460u: goto label_2f3460;
        case 0x2f3464u: goto label_2f3464;
        case 0x2f3468u: goto label_2f3468;
        case 0x2f346cu: goto label_2f346c;
        case 0x2f3470u: goto label_2f3470;
        case 0x2f3474u: goto label_2f3474;
        case 0x2f3478u: goto label_2f3478;
        case 0x2f347cu: goto label_2f347c;
        case 0x2f3480u: goto label_2f3480;
        case 0x2f3484u: goto label_2f3484;
        case 0x2f3488u: goto label_2f3488;
        case 0x2f348cu: goto label_2f348c;
        case 0x2f3490u: goto label_2f3490;
        case 0x2f3494u: goto label_2f3494;
        case 0x2f3498u: goto label_2f3498;
        case 0x2f349cu: goto label_2f349c;
        case 0x2f34a0u: goto label_2f34a0;
        case 0x2f34a4u: goto label_2f34a4;
        case 0x2f34a8u: goto label_2f34a8;
        case 0x2f34acu: goto label_2f34ac;
        case 0x2f34b0u: goto label_2f34b0;
        case 0x2f34b4u: goto label_2f34b4;
        case 0x2f34b8u: goto label_2f34b8;
        case 0x2f34bcu: goto label_2f34bc;
        case 0x2f34c0u: goto label_2f34c0;
        case 0x2f34c4u: goto label_2f34c4;
        case 0x2f34c8u: goto label_2f34c8;
        case 0x2f34ccu: goto label_2f34cc;
        case 0x2f34d0u: goto label_2f34d0;
        case 0x2f34d4u: goto label_2f34d4;
        case 0x2f34d8u: goto label_2f34d8;
        case 0x2f34dcu: goto label_2f34dc;
        case 0x2f34e0u: goto label_2f34e0;
        case 0x2f34e4u: goto label_2f34e4;
        case 0x2f34e8u: goto label_2f34e8;
        case 0x2f34ecu: goto label_2f34ec;
        case 0x2f34f0u: goto label_2f34f0;
        case 0x2f34f4u: goto label_2f34f4;
        case 0x2f34f8u: goto label_2f34f8;
        case 0x2f34fcu: goto label_2f34fc;
        case 0x2f3500u: goto label_2f3500;
        case 0x2f3504u: goto label_2f3504;
        case 0x2f3508u: goto label_2f3508;
        case 0x2f350cu: goto label_2f350c;
        case 0x2f3510u: goto label_2f3510;
        case 0x2f3514u: goto label_2f3514;
        case 0x2f3518u: goto label_2f3518;
        case 0x2f351cu: goto label_2f351c;
        case 0x2f3520u: goto label_2f3520;
        case 0x2f3524u: goto label_2f3524;
        case 0x2f3528u: goto label_2f3528;
        case 0x2f352cu: goto label_2f352c;
        case 0x2f3530u: goto label_2f3530;
        case 0x2f3534u: goto label_2f3534;
        case 0x2f3538u: goto label_2f3538;
        case 0x2f353cu: goto label_2f353c;
        case 0x2f3540u: goto label_2f3540;
        case 0x2f3544u: goto label_2f3544;
        case 0x2f3548u: goto label_2f3548;
        case 0x2f354cu: goto label_2f354c;
        case 0x2f3550u: goto label_2f3550;
        case 0x2f3554u: goto label_2f3554;
        case 0x2f3558u: goto label_2f3558;
        case 0x2f355cu: goto label_2f355c;
        case 0x2f3560u: goto label_2f3560;
        case 0x2f3564u: goto label_2f3564;
        case 0x2f3568u: goto label_2f3568;
        case 0x2f356cu: goto label_2f356c;
        case 0x2f3570u: goto label_2f3570;
        case 0x2f3574u: goto label_2f3574;
        case 0x2f3578u: goto label_2f3578;
        case 0x2f357cu: goto label_2f357c;
        case 0x2f3580u: goto label_2f3580;
        case 0x2f3584u: goto label_2f3584;
        case 0x2f3588u: goto label_2f3588;
        case 0x2f358cu: goto label_2f358c;
        case 0x2f3590u: goto label_2f3590;
        case 0x2f3594u: goto label_2f3594;
        case 0x2f3598u: goto label_2f3598;
        case 0x2f359cu: goto label_2f359c;
        case 0x2f35a0u: goto label_2f35a0;
        case 0x2f35a4u: goto label_2f35a4;
        case 0x2f35a8u: goto label_2f35a8;
        case 0x2f35acu: goto label_2f35ac;
        case 0x2f35b0u: goto label_2f35b0;
        case 0x2f35b4u: goto label_2f35b4;
        case 0x2f35b8u: goto label_2f35b8;
        case 0x2f35bcu: goto label_2f35bc;
        case 0x2f35c0u: goto label_2f35c0;
        case 0x2f35c4u: goto label_2f35c4;
        case 0x2f35c8u: goto label_2f35c8;
        case 0x2f35ccu: goto label_2f35cc;
        case 0x2f35d0u: goto label_2f35d0;
        case 0x2f35d4u: goto label_2f35d4;
        case 0x2f35d8u: goto label_2f35d8;
        case 0x2f35dcu: goto label_2f35dc;
        case 0x2f35e0u: goto label_2f35e0;
        case 0x2f35e4u: goto label_2f35e4;
        case 0x2f35e8u: goto label_2f35e8;
        case 0x2f35ecu: goto label_2f35ec;
        case 0x2f35f0u: goto label_2f35f0;
        case 0x2f35f4u: goto label_2f35f4;
        case 0x2f35f8u: goto label_2f35f8;
        case 0x2f35fcu: goto label_2f35fc;
        case 0x2f3600u: goto label_2f3600;
        case 0x2f3604u: goto label_2f3604;
        case 0x2f3608u: goto label_2f3608;
        case 0x2f360cu: goto label_2f360c;
        case 0x2f3610u: goto label_2f3610;
        case 0x2f3614u: goto label_2f3614;
        case 0x2f3618u: goto label_2f3618;
        case 0x2f361cu: goto label_2f361c;
        case 0x2f3620u: goto label_2f3620;
        case 0x2f3624u: goto label_2f3624;
        case 0x2f3628u: goto label_2f3628;
        case 0x2f362cu: goto label_2f362c;
        case 0x2f3630u: goto label_2f3630;
        case 0x2f3634u: goto label_2f3634;
        case 0x2f3638u: goto label_2f3638;
        case 0x2f363cu: goto label_2f363c;
        case 0x2f3640u: goto label_2f3640;
        case 0x2f3644u: goto label_2f3644;
        case 0x2f3648u: goto label_2f3648;
        case 0x2f364cu: goto label_2f364c;
        case 0x2f3650u: goto label_2f3650;
        case 0x2f3654u: goto label_2f3654;
        case 0x2f3658u: goto label_2f3658;
        case 0x2f365cu: goto label_2f365c;
        case 0x2f3660u: goto label_2f3660;
        case 0x2f3664u: goto label_2f3664;
        case 0x2f3668u: goto label_2f3668;
        case 0x2f366cu: goto label_2f366c;
        case 0x2f3670u: goto label_2f3670;
        case 0x2f3674u: goto label_2f3674;
        case 0x2f3678u: goto label_2f3678;
        case 0x2f367cu: goto label_2f367c;
        case 0x2f3680u: goto label_2f3680;
        case 0x2f3684u: goto label_2f3684;
        case 0x2f3688u: goto label_2f3688;
        case 0x2f368cu: goto label_2f368c;
        case 0x2f3690u: goto label_2f3690;
        case 0x2f3694u: goto label_2f3694;
        case 0x2f3698u: goto label_2f3698;
        case 0x2f369cu: goto label_2f369c;
        case 0x2f36a0u: goto label_2f36a0;
        case 0x2f36a4u: goto label_2f36a4;
        case 0x2f36a8u: goto label_2f36a8;
        case 0x2f36acu: goto label_2f36ac;
        case 0x2f36b0u: goto label_2f36b0;
        case 0x2f36b4u: goto label_2f36b4;
        case 0x2f36b8u: goto label_2f36b8;
        case 0x2f36bcu: goto label_2f36bc;
        case 0x2f36c0u: goto label_2f36c0;
        case 0x2f36c4u: goto label_2f36c4;
        case 0x2f36c8u: goto label_2f36c8;
        case 0x2f36ccu: goto label_2f36cc;
        case 0x2f36d0u: goto label_2f36d0;
        case 0x2f36d4u: goto label_2f36d4;
        case 0x2f36d8u: goto label_2f36d8;
        case 0x2f36dcu: goto label_2f36dc;
        case 0x2f36e0u: goto label_2f36e0;
        case 0x2f36e4u: goto label_2f36e4;
        case 0x2f36e8u: goto label_2f36e8;
        case 0x2f36ecu: goto label_2f36ec;
        case 0x2f36f0u: goto label_2f36f0;
        case 0x2f36f4u: goto label_2f36f4;
        case 0x2f36f8u: goto label_2f36f8;
        case 0x2f36fcu: goto label_2f36fc;
        case 0x2f3700u: goto label_2f3700;
        case 0x2f3704u: goto label_2f3704;
        case 0x2f3708u: goto label_2f3708;
        case 0x2f370cu: goto label_2f370c;
        case 0x2f3710u: goto label_2f3710;
        case 0x2f3714u: goto label_2f3714;
        case 0x2f3718u: goto label_2f3718;
        case 0x2f371cu: goto label_2f371c;
        case 0x2f3720u: goto label_2f3720;
        case 0x2f3724u: goto label_2f3724;
        case 0x2f3728u: goto label_2f3728;
        case 0x2f372cu: goto label_2f372c;
        case 0x2f3730u: goto label_2f3730;
        case 0x2f3734u: goto label_2f3734;
        case 0x2f3738u: goto label_2f3738;
        case 0x2f373cu: goto label_2f373c;
        case 0x2f3740u: goto label_2f3740;
        case 0x2f3744u: goto label_2f3744;
        case 0x2f3748u: goto label_2f3748;
        case 0x2f374cu: goto label_2f374c;
        case 0x2f3750u: goto label_2f3750;
        case 0x2f3754u: goto label_2f3754;
        case 0x2f3758u: goto label_2f3758;
        case 0x2f375cu: goto label_2f375c;
        case 0x2f3760u: goto label_2f3760;
        case 0x2f3764u: goto label_2f3764;
        case 0x2f3768u: goto label_2f3768;
        case 0x2f376cu: goto label_2f376c;
        case 0x2f3770u: goto label_2f3770;
        case 0x2f3774u: goto label_2f3774;
        case 0x2f3778u: goto label_2f3778;
        case 0x2f377cu: goto label_2f377c;
        case 0x2f3780u: goto label_2f3780;
        case 0x2f3784u: goto label_2f3784;
        case 0x2f3788u: goto label_2f3788;
        case 0x2f378cu: goto label_2f378c;
        case 0x2f3790u: goto label_2f3790;
        case 0x2f3794u: goto label_2f3794;
        case 0x2f3798u: goto label_2f3798;
        case 0x2f379cu: goto label_2f379c;
        case 0x2f37a0u: goto label_2f37a0;
        case 0x2f37a4u: goto label_2f37a4;
        case 0x2f37a8u: goto label_2f37a8;
        case 0x2f37acu: goto label_2f37ac;
        case 0x2f37b0u: goto label_2f37b0;
        case 0x2f37b4u: goto label_2f37b4;
        case 0x2f37b8u: goto label_2f37b8;
        case 0x2f37bcu: goto label_2f37bc;
        case 0x2f37c0u: goto label_2f37c0;
        case 0x2f37c4u: goto label_2f37c4;
        case 0x2f37c8u: goto label_2f37c8;
        case 0x2f37ccu: goto label_2f37cc;
        case 0x2f37d0u: goto label_2f37d0;
        case 0x2f37d4u: goto label_2f37d4;
        case 0x2f37d8u: goto label_2f37d8;
        case 0x2f37dcu: goto label_2f37dc;
        case 0x2f37e0u: goto label_2f37e0;
        case 0x2f37e4u: goto label_2f37e4;
        case 0x2f37e8u: goto label_2f37e8;
        case 0x2f37ecu: goto label_2f37ec;
        case 0x2f37f0u: goto label_2f37f0;
        case 0x2f37f4u: goto label_2f37f4;
        case 0x2f37f8u: goto label_2f37f8;
        case 0x2f37fcu: goto label_2f37fc;
        case 0x2f3800u: goto label_2f3800;
        case 0x2f3804u: goto label_2f3804;
        case 0x2f3808u: goto label_2f3808;
        case 0x2f380cu: goto label_2f380c;
        case 0x2f3810u: goto label_2f3810;
        case 0x2f3814u: goto label_2f3814;
        case 0x2f3818u: goto label_2f3818;
        case 0x2f381cu: goto label_2f381c;
        case 0x2f3820u: goto label_2f3820;
        case 0x2f3824u: goto label_2f3824;
        case 0x2f3828u: goto label_2f3828;
        case 0x2f382cu: goto label_2f382c;
        case 0x2f3830u: goto label_2f3830;
        case 0x2f3834u: goto label_2f3834;
        case 0x2f3838u: goto label_2f3838;
        case 0x2f383cu: goto label_2f383c;
        case 0x2f3840u: goto label_2f3840;
        case 0x2f3844u: goto label_2f3844;
        case 0x2f3848u: goto label_2f3848;
        case 0x2f384cu: goto label_2f384c;
        case 0x2f3850u: goto label_2f3850;
        case 0x2f3854u: goto label_2f3854;
        case 0x2f3858u: goto label_2f3858;
        case 0x2f385cu: goto label_2f385c;
        case 0x2f3860u: goto label_2f3860;
        case 0x2f3864u: goto label_2f3864;
        case 0x2f3868u: goto label_2f3868;
        case 0x2f386cu: goto label_2f386c;
        case 0x2f3870u: goto label_2f3870;
        case 0x2f3874u: goto label_2f3874;
        case 0x2f3878u: goto label_2f3878;
        case 0x2f387cu: goto label_2f387c;
        case 0x2f3880u: goto label_2f3880;
        case 0x2f3884u: goto label_2f3884;
        case 0x2f3888u: goto label_2f3888;
        case 0x2f388cu: goto label_2f388c;
        case 0x2f3890u: goto label_2f3890;
        case 0x2f3894u: goto label_2f3894;
        case 0x2f3898u: goto label_2f3898;
        case 0x2f389cu: goto label_2f389c;
        case 0x2f38a0u: goto label_2f38a0;
        case 0x2f38a4u: goto label_2f38a4;
        case 0x2f38a8u: goto label_2f38a8;
        case 0x2f38acu: goto label_2f38ac;
        case 0x2f38b0u: goto label_2f38b0;
        case 0x2f38b4u: goto label_2f38b4;
        case 0x2f38b8u: goto label_2f38b8;
        case 0x2f38bcu: goto label_2f38bc;
        case 0x2f38c0u: goto label_2f38c0;
        case 0x2f38c4u: goto label_2f38c4;
        case 0x2f38c8u: goto label_2f38c8;
        case 0x2f38ccu: goto label_2f38cc;
        case 0x2f38d0u: goto label_2f38d0;
        case 0x2f38d4u: goto label_2f38d4;
        case 0x2f38d8u: goto label_2f38d8;
        case 0x2f38dcu: goto label_2f38dc;
        case 0x2f38e0u: goto label_2f38e0;
        case 0x2f38e4u: goto label_2f38e4;
        case 0x2f38e8u: goto label_2f38e8;
        case 0x2f38ecu: goto label_2f38ec;
        case 0x2f38f0u: goto label_2f38f0;
        case 0x2f38f4u: goto label_2f38f4;
        case 0x2f38f8u: goto label_2f38f8;
        case 0x2f38fcu: goto label_2f38fc;
        case 0x2f3900u: goto label_2f3900;
        case 0x2f3904u: goto label_2f3904;
        case 0x2f3908u: goto label_2f3908;
        case 0x2f390cu: goto label_2f390c;
        case 0x2f3910u: goto label_2f3910;
        case 0x2f3914u: goto label_2f3914;
        case 0x2f3918u: goto label_2f3918;
        case 0x2f391cu: goto label_2f391c;
        case 0x2f3920u: goto label_2f3920;
        case 0x2f3924u: goto label_2f3924;
        case 0x2f3928u: goto label_2f3928;
        case 0x2f392cu: goto label_2f392c;
        case 0x2f3930u: goto label_2f3930;
        case 0x2f3934u: goto label_2f3934;
        case 0x2f3938u: goto label_2f3938;
        case 0x2f393cu: goto label_2f393c;
        case 0x2f3940u: goto label_2f3940;
        case 0x2f3944u: goto label_2f3944;
        case 0x2f3948u: goto label_2f3948;
        case 0x2f394cu: goto label_2f394c;
        case 0x2f3950u: goto label_2f3950;
        case 0x2f3954u: goto label_2f3954;
        case 0x2f3958u: goto label_2f3958;
        case 0x2f395cu: goto label_2f395c;
        case 0x2f3960u: goto label_2f3960;
        case 0x2f3964u: goto label_2f3964;
        case 0x2f3968u: goto label_2f3968;
        case 0x2f396cu: goto label_2f396c;
        case 0x2f3970u: goto label_2f3970;
        case 0x2f3974u: goto label_2f3974;
        case 0x2f3978u: goto label_2f3978;
        case 0x2f397cu: goto label_2f397c;
        case 0x2f3980u: goto label_2f3980;
        case 0x2f3984u: goto label_2f3984;
        case 0x2f3988u: goto label_2f3988;
        case 0x2f398cu: goto label_2f398c;
        case 0x2f3990u: goto label_2f3990;
        case 0x2f3994u: goto label_2f3994;
        case 0x2f3998u: goto label_2f3998;
        case 0x2f399cu: goto label_2f399c;
        case 0x2f39a0u: goto label_2f39a0;
        case 0x2f39a4u: goto label_2f39a4;
        case 0x2f39a8u: goto label_2f39a8;
        case 0x2f39acu: goto label_2f39ac;
        case 0x2f39b0u: goto label_2f39b0;
        case 0x2f39b4u: goto label_2f39b4;
        case 0x2f39b8u: goto label_2f39b8;
        case 0x2f39bcu: goto label_2f39bc;
        case 0x2f39c0u: goto label_2f39c0;
        case 0x2f39c4u: goto label_2f39c4;
        case 0x2f39c8u: goto label_2f39c8;
        case 0x2f39ccu: goto label_2f39cc;
        default: break;
    }

    ctx->pc = 0x2f2d78u;

label_2f2d78:
    // 0x2f2d78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f2d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2f2d7c:
    // 0x2f2d7c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2f2d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_2f2d80:
    // 0x2f2d80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f2d80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f2d84:
    // 0x2f2d84: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2f2d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2f2d88:
    // 0x2f2d88: 0x26250058  addiu       $a1, $s1, 0x58
    ctx->pc = 0x2f2d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_2f2d8c:
    // 0x2f2d8c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f2d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2f2d90:
    // 0x2f2d90: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2f2d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_2f2d94:
    // 0x2f2d94: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f2d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f2d98:
    // 0x2f2d98: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f2d9c:
    if (ctx->pc == 0x2F2D9Cu) {
        ctx->pc = 0x2F2D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D98u;
        // 0x2f2d9c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2DA0u;
        goto label_2f2da0;
    }
    ctx->pc = 0x2F2D98u;
    {
        const bool branch_taken_0x2f2d98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2d98) {
            ctx->pc = 0x2F2D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2D98u;
            // 0x2f2d9c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2DB4u;
            goto label_2f2db4;
        }
    }
    ctx->pc = 0x2F2DA0u;
label_2f2da0:
    // 0x2f2da0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f2da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f2da4:
    // 0x2f2da4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f2da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2f2da8:
    // 0x2f2da8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_2f2dac:
    if (ctx->pc == 0x2F2DACu) {
        ctx->pc = 0x2F2DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2DA8u;
        // 0x2f2dac: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2DB0u;
        goto label_2f2db0;
    }
    ctx->pc = 0x2F2DA8u;
    {
        const bool branch_taken_0x2f2da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f2da8) {
            ctx->pc = 0x2F2DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2DA8u;
            // 0x2f2dac: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2DC0u;
            goto label_2f2dc0;
        }
    }
    ctx->pc = 0x2F2DB0u;
label_2f2db0:
    // 0x2f2db0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f2db0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f2db4:
    // 0x2f2db4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f2db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2db8:
    // 0x2f2db8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f2db8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f2dbc:
    // 0x2f2dbc: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2f2dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2f2dc0:
    // 0x2f2dc0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2dc4:
    // 0x2f2dc4: 0x34a50070  ori         $a1, $a1, 0x70
    ctx->pc = 0x2f2dc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)112);
label_2f2dc8:
    // 0x2f2dc8: 0x34c60106  ori         $a2, $a2, 0x106
    ctx->pc = 0x2f2dc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)262);
label_2f2dcc:
    // 0x2f2dcc: 0xc0bb966  jal         func_2EE598
label_2f2dd0:
    if (ctx->pc == 0x2F2DD0u) {
        ctx->pc = 0x2F2DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2DCCu;
        // 0x2f2dd0: 0x26320060  addiu       $s2, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2DD4u;
        goto label_2f2dd4;
    }
    ctx->pc = 0x2F2DCCu;
    SET_GPR_U32(ctx, 31, 0x2F2DD4u);
    ctx->pc = 0x2F2DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2DCCu;
    // 0x2f2dd0: 0x26320060  addiu       $s2, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2F2DCCu, 0x2F2DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2DD4u;
label_2f2dd4:
    // 0x2f2dd4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f2dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f2dd8:
    // 0x2f2dd8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f2ddc:
    if (ctx->pc == 0x2F2DDCu) {
        ctx->pc = 0x2F2DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2DD8u;
        // 0x2f2ddc: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2DE0u;
        goto label_2f2de0;
    }
    ctx->pc = 0x2F2DD8u;
    {
        const bool branch_taken_0x2f2dd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2dd8) {
            ctx->pc = 0x2F2DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2DD8u;
            // 0x2f2ddc: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2DF4u;
            goto label_2f2df4;
        }
    }
    ctx->pc = 0x2F2DE0u;
label_2f2de0:
    // 0x2f2de0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f2de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f2de4:
    // 0x2f2de4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f2de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f2de8:
    // 0x2f2de8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2f2dec:
    if (ctx->pc == 0x2F2DECu) {
        ctx->pc = 0x2F2DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2DE8u;
        // 0x2f2dec: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2DF0u;
        goto label_2f2df0;
    }
    ctx->pc = 0x2F2DE8u;
    {
        const bool branch_taken_0x2f2de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2DE8u;
        // 0x2f2dec: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2de8) {
            ctx->pc = 0x2F2E00u;
            goto label_2f2e00;
        }
    }
    ctx->pc = 0x2F2DF0u;
label_2f2df0:
    // 0x2f2df0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f2df0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2f2df4:
    // 0x2f2df4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f2df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2df8:
    // 0x2f2df8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f2df8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2f2dfc:
    // 0x2f2dfc: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2f2dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2f2e00:
    // 0x2f2e00: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f2e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f2e04:
    // 0x2f2e04: 0x34a50071  ori         $a1, $a1, 0x71
    ctx->pc = 0x2f2e04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)113);
label_2f2e08:
    // 0x2f2e08: 0xc0bb966  jal         func_2EE598
label_2f2e0c:
    if (ctx->pc == 0x2F2E0Cu) {
        ctx->pc = 0x2F2E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E08u;
        // 0x2f2e0c: 0x26300068  addiu       $s0, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2E10u;
        goto label_2f2e10;
    }
    ctx->pc = 0x2F2E08u;
    SET_GPR_U32(ctx, 31, 0x2F2E10u);
    ctx->pc = 0x2F2E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2E08u;
    // 0x2f2e0c: 0x26300068  addiu       $s0, $s1, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2F2E08u, 0x2F2E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2E10u;
label_2f2e10:
    // 0x2f2e10: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f2e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f2e14:
    // 0x2f2e14: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f2e18:
    if (ctx->pc == 0x2F2E18u) {
        ctx->pc = 0x2F2E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E14u;
        // 0x2f2e18: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2E1Cu;
        goto label_2f2e1c;
    }
    ctx->pc = 0x2F2E14u;
    {
        const bool branch_taken_0x2f2e14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2e14) {
            ctx->pc = 0x2F2E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2E14u;
            // 0x2f2e18: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2E30u;
            goto label_2f2e30;
        }
    }
    ctx->pc = 0x2F2E1Cu;
label_2f2e1c:
    // 0x2f2e1c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f2e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f2e20:
    // 0x2f2e20: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f2e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2f2e24:
    // 0x2f2e24: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2f2e28:
    if (ctx->pc == 0x2F2E28u) {
        ctx->pc = 0x2F2E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E24u;
        // 0x2f2e28: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2E2Cu;
        goto label_2f2e2c;
    }
    ctx->pc = 0x2F2E24u;
    {
        const bool branch_taken_0x2f2e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E24u;
        // 0x2f2e28: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2e24) {
            ctx->pc = 0x2F2E3Cu;
            goto label_2f2e3c;
        }
    }
    ctx->pc = 0x2F2E2Cu;
label_2f2e2c:
    // 0x2f2e2c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f2e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2f2e30:
    // 0x2f2e30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f2e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2e34:
    // 0x2f2e34: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f2e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2f2e38:
    // 0x2f2e38: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2f2e38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2f2e3c:
    // 0x2f2e3c: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2e40:
    // 0x2f2e40: 0x34a50074  ori         $a1, $a1, 0x74
    ctx->pc = 0x2f2e40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)116);
label_2f2e44:
    // 0x2f2e44: 0xc0bb966  jal         func_2EE598
label_2f2e48:
    if (ctx->pc == 0x2F2E48u) {
        ctx->pc = 0x2F2E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E44u;
        // 0x2f2e48: 0x34c60109  ori         $a2, $a2, 0x109 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)265);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2E4Cu;
        goto label_2f2e4c;
    }
    ctx->pc = 0x2F2E44u;
    SET_GPR_U32(ctx, 31, 0x2F2E4Cu);
    ctx->pc = 0x2F2E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2E44u;
    // 0x2f2e48: 0x34c60109  ori         $a2, $a2, 0x109 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)265);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2F2E44u, 0x2F2E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2E4Cu;
label_2f2e4c:
    // 0x2f2e4c: 0x26250070  addiu       $a1, $s1, 0x70
    ctx->pc = 0x2f2e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_2f2e50:
    // 0x2f2e50: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f2e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f2e54:
    // 0x2f2e54: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f2e58:
    if (ctx->pc == 0x2F2E58u) {
        ctx->pc = 0x2F2E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E54u;
        // 0x2f2e58: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2E5Cu;
        goto label_2f2e5c;
    }
    ctx->pc = 0x2F2E54u;
    {
        const bool branch_taken_0x2f2e54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2e54) {
            ctx->pc = 0x2F2E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2E54u;
            // 0x2f2e58: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2E70u;
            goto label_2f2e70;
        }
    }
    ctx->pc = 0x2F2E5Cu;
label_2f2e5c:
    // 0x2f2e5c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f2e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f2e60:
    // 0x2f2e60: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f2e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2f2e64:
    // 0x2f2e64: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_2f2e68:
    if (ctx->pc == 0x2F2E68u) {
        ctx->pc = 0x2F2E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E64u;
        // 0x2f2e68: 0x8e230148  lw          $v1, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2E6Cu;
        goto label_2f2e6c;
    }
    ctx->pc = 0x2F2E64u;
    {
        const bool branch_taken_0x2f2e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f2e64) {
            ctx->pc = 0x2F2E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2E64u;
            // 0x2f2e68: 0x8e230148  lw          $v1, 0x148($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2E7Cu;
            goto label_2f2e7c;
        }
    }
    ctx->pc = 0x2F2E6Cu;
label_2f2e6c:
    // 0x2f2e6c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f2e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f2e70:
    // 0x2f2e70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f2e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2e74:
    // 0x2f2e74: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f2e74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f2e78:
    // 0x2f2e78: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x2f2e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_2f2e7c:
    // 0x2f2e7c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x2f2e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_2f2e80:
    // 0x2f2e80: 0x3c06000a  lui         $a2, 0xA
    ctx->pc = 0x2f2e80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)10 << 16));
label_2f2e84:
    // 0x2f2e84: 0x3442010d  ori         $v0, $v0, 0x10D
    ctx->pc = 0x2f2e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)269);
label_2f2e88:
    // 0x2f2e88: 0x34c60039  ori         $a2, $a2, 0x39
    ctx->pc = 0x2f2e88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)57);
label_2f2e8c:
    // 0x2f2e8c: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2f2e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2f2e90:
    // 0x2f2e90: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x2f2e90u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_2f2e94:
    // 0x2f2e94: 0xc0bb966  jal         func_2EE598
label_2f2e98:
    if (ctx->pc == 0x2F2E98u) {
        ctx->pc = 0x2F2E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E94u;
        // 0x2f2e98: 0x34a50077  ori         $a1, $a1, 0x77 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)119);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2E9Cu;
        goto label_2f2e9c;
    }
    ctx->pc = 0x2F2E94u;
    SET_GPR_U32(ctx, 31, 0x2F2E9Cu);
    ctx->pc = 0x2F2E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2E94u;
    // 0x2f2e98: 0x34a50077  ori         $a1, $a1, 0x77 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)119);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2F2E94u, 0x2F2E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2E9Cu;
label_2f2e9c:
    // 0x2f2e9c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f2e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f2ea0:
    // 0x2f2ea0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f2ea4:
    if (ctx->pc == 0x2F2EA4u) {
        ctx->pc = 0x2F2EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2EA0u;
        // 0x2f2ea4: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2EA8u;
        goto label_2f2ea8;
    }
    ctx->pc = 0x2F2EA0u;
    {
        const bool branch_taken_0x2f2ea0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2ea0) {
            ctx->pc = 0x2F2EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2EA0u;
            // 0x2f2ea4: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2EBCu;
            goto label_2f2ebc;
        }
    }
    ctx->pc = 0x2F2EA8u;
label_2f2ea8:
    // 0x2f2ea8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f2ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f2eac:
    // 0x2f2eac: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f2eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f2eb0:
    // 0x2f2eb0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2f2eb4:
    if (ctx->pc == 0x2F2EB4u) {
        ctx->pc = 0x2F2EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2EB0u;
        // 0x2f2eb4: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2EB8u;
        goto label_2f2eb8;
    }
    ctx->pc = 0x2F2EB0u;
    {
        const bool branch_taken_0x2f2eb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2EB0u;
        // 0x2f2eb4: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2eb0) {
            ctx->pc = 0x2F2EC8u;
            goto label_2f2ec8;
        }
    }
    ctx->pc = 0x2F2EB8u;
label_2f2eb8:
    // 0x2f2eb8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f2eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2f2ebc:
    // 0x2f2ebc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f2ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2ec0:
    // 0x2f2ec0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f2ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2f2ec4:
    // 0x2f2ec4: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2ec8:
    // 0x2f2ec8: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2f2ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2f2ecc:
    // 0x2f2ecc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f2eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2ed0:
    // 0x2f2ed0: 0x34c60073  ori         $a2, $a2, 0x73
    ctx->pc = 0x2f2ed0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)115);
label_2f2ed4:
    // 0x2f2ed4: 0xc0bb96a  jal         func_2EE5A8
label_2f2ed8:
    if (ctx->pc == 0x2F2ED8u) {
        ctx->pc = 0x2F2ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2ED4u;
        // 0x2f2ed8: 0x34e70108  ori         $a3, $a3, 0x108 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)264);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2EDCu;
        goto label_2f2edc;
    }
    ctx->pc = 0x2F2ED4u;
    SET_GPR_U32(ctx, 31, 0x2F2EDCu);
    ctx->pc = 0x2F2ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2ED4u;
    // 0x2f2ed8: 0x34e70108  ori         $a3, $a3, 0x108 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)264);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2ED4u, 0x2F2EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2EDCu;
label_2f2edc:
    // 0x2f2edc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f2edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f2ee0:
    // 0x2f2ee0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f2ee4:
    if (ctx->pc == 0x2F2EE4u) {
        ctx->pc = 0x2F2EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2EE0u;
        // 0x2f2ee4: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2EE8u;
        goto label_2f2ee8;
    }
    ctx->pc = 0x2F2EE0u;
    {
        const bool branch_taken_0x2f2ee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2ee0) {
            ctx->pc = 0x2F2EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2EE0u;
            // 0x2f2ee4: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2EFCu;
            goto label_2f2efc;
        }
    }
    ctx->pc = 0x2F2EE8u;
label_2f2ee8:
    // 0x2f2ee8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f2ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f2eec:
    // 0x2f2eec: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f2eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f2ef0:
    // 0x2f2ef0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2f2ef4:
    if (ctx->pc == 0x2F2EF4u) {
        ctx->pc = 0x2F2EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2EF0u;
        // 0x2f2ef4: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2EF8u;
        goto label_2f2ef8;
    }
    ctx->pc = 0x2F2EF0u;
    {
        const bool branch_taken_0x2f2ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2EF0u;
        // 0x2f2ef4: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2ef0) {
            ctx->pc = 0x2F2F08u;
            goto label_2f2f08;
        }
    }
    ctx->pc = 0x2F2EF8u;
label_2f2ef8:
    // 0x2f2ef8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f2ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2f2efc:
    // 0x2f2efc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f2efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2f00:
    // 0x2f2f00: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f2f00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2f2f04:
    // 0x2f2f04: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2f04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2f08:
    // 0x2f2f08: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2f2f08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2f2f0c:
    // 0x2f2f0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f2f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2f10:
    // 0x2f2f10: 0x34c60072  ori         $a2, $a2, 0x72
    ctx->pc = 0x2f2f10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)114);
label_2f2f14:
    // 0x2f2f14: 0xc0bb96a  jal         func_2EE5A8
label_2f2f18:
    if (ctx->pc == 0x2F2F18u) {
        ctx->pc = 0x2F2F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F14u;
        // 0x2f2f18: 0x34e70107  ori         $a3, $a3, 0x107 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)263);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2F1Cu;
        goto label_2f2f1c;
    }
    ctx->pc = 0x2F2F14u;
    SET_GPR_U32(ctx, 31, 0x2F2F1Cu);
    ctx->pc = 0x2F2F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2F14u;
    // 0x2f2f18: 0x34e70107  ori         $a3, $a3, 0x107 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)263);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2F14u, 0x2F2F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2F1Cu;
label_2f2f1c:
    // 0x2f2f1c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f2f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f2f20:
    // 0x2f2f20: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f2f24:
    if (ctx->pc == 0x2F2F24u) {
        ctx->pc = 0x2F2F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F20u;
        // 0x2f2f24: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2F28u;
        goto label_2f2f28;
    }
    ctx->pc = 0x2F2F20u;
    {
        const bool branch_taken_0x2f2f20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2f20) {
            ctx->pc = 0x2F2F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2F20u;
            // 0x2f2f24: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2F3Cu;
            goto label_2f2f3c;
        }
    }
    ctx->pc = 0x2F2F28u;
label_2f2f28:
    // 0x2f2f28: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f2f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f2f2c:
    // 0x2f2f2c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f2f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2f2f30:
    // 0x2f2f30: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2f2f34:
    if (ctx->pc == 0x2F2F34u) {
        ctx->pc = 0x2F2F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F30u;
        // 0x2f2f34: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2F38u;
        goto label_2f2f38;
    }
    ctx->pc = 0x2F2F30u;
    {
        const bool branch_taken_0x2f2f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F30u;
        // 0x2f2f34: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2f30) {
            ctx->pc = 0x2F2F48u;
            goto label_2f2f48;
        }
    }
    ctx->pc = 0x2F2F38u;
label_2f2f38:
    // 0x2f2f38: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f2f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2f2f3c:
    // 0x2f2f3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f2f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2f40:
    // 0x2f2f40: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f2f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2f2f44:
    // 0x2f2f44: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2f44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2f48:
    // 0x2f2f48: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2f2f48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2f2f4c:
    // 0x2f2f4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f2f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2f50:
    // 0x2f2f50: 0x34c60075  ori         $a2, $a2, 0x75
    ctx->pc = 0x2f2f50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)117);
label_2f2f54:
    // 0x2f2f54: 0xc0bb96a  jal         func_2EE5A8
label_2f2f58:
    if (ctx->pc == 0x2F2F58u) {
        ctx->pc = 0x2F2F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F54u;
        // 0x2f2f58: 0x34e7010b  ori         $a3, $a3, 0x10B (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)267);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2F5Cu;
        goto label_2f2f5c;
    }
    ctx->pc = 0x2F2F54u;
    SET_GPR_U32(ctx, 31, 0x2F2F5Cu);
    ctx->pc = 0x2F2F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2F54u;
    // 0x2f2f58: 0x34e7010b  ori         $a3, $a3, 0x10B (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)267);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2F54u, 0x2F2F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2F5Cu;
label_2f2f5c:
    // 0x2f2f5c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f2f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f2f60:
    // 0x2f2f60: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f2f64:
    if (ctx->pc == 0x2F2F64u) {
        ctx->pc = 0x2F2F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F60u;
        // 0x2f2f64: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2F68u;
        goto label_2f2f68;
    }
    ctx->pc = 0x2F2F60u;
    {
        const bool branch_taken_0x2f2f60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2f60) {
            ctx->pc = 0x2F2F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2F60u;
            // 0x2f2f64: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2F7Cu;
            goto label_2f2f7c;
        }
    }
    ctx->pc = 0x2F2F68u;
label_2f2f68:
    // 0x2f2f68: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f2f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f2f6c:
    // 0x2f2f6c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f2f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2f2f70:
    // 0x2f2f70: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2f2f74:
    if (ctx->pc == 0x2F2F74u) {
        ctx->pc = 0x2F2F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F70u;
        // 0x2f2f74: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2F78u;
        goto label_2f2f78;
    }
    ctx->pc = 0x2F2F70u;
    {
        const bool branch_taken_0x2f2f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F70u;
        // 0x2f2f74: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2f70) {
            ctx->pc = 0x2F2F88u;
            goto label_2f2f88;
        }
    }
    ctx->pc = 0x2F2F78u;
label_2f2f78:
    // 0x2f2f78: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f2f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2f2f7c:
    // 0x2f2f7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f2f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2f80:
    // 0x2f2f80: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f2f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2f2f84:
    // 0x2f2f84: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2f84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2f88:
    // 0x2f2f88: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2f2f88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2f2f8c:
    // 0x2f2f8c: 0x34e7010a  ori         $a3, $a3, 0x10A
    ctx->pc = 0x2f2f8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)266);
label_2f2f90:
    // 0x2f2f90: 0x34c60076  ori         $a2, $a2, 0x76
    ctx->pc = 0x2f2f90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)118);
label_2f2f94:
    // 0x2f2f94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f2f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2f98:
    // 0x2f2f98: 0xc0bb96a  jal         func_2EE5A8
label_2f2f9c:
    if (ctx->pc == 0x2F2F9Cu) {
        ctx->pc = 0x2F2F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F98u;
        // 0x2f2f9c: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2FA0u;
        goto label_2f2fa0;
    }
    ctx->pc = 0x2F2F98u;
    SET_GPR_U32(ctx, 31, 0x2F2FA0u);
    ctx->pc = 0x2F2F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2F98u;
    // 0x2f2f9c: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2F98u, 0x2F2FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2FA0u;
label_2f2fa0:
    // 0x2f2fa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f2fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f2fa4:
    // 0x2f2fa4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f2fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f2fa8:
    // 0x2f2fa8: 0xc0bcf2c  jal         func_2F3CB0
label_2f2fac:
    if (ctx->pc == 0x2F2FACu) {
        ctx->pc = 0x2F2FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2FA8u;
        // 0x2f2fac: 0x2610f574  addiu       $s0, $s0, -0xA8C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964596));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2FB0u;
        goto label_2f2fb0;
    }
    ctx->pc = 0x2F2FA8u;
    SET_GPR_U32(ctx, 31, 0x2F2FB0u);
    ctx->pc = 0x2F2FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2FA8u;
    // 0x2f2fac: 0x2610f574  addiu       $s0, $s0, -0xA8C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964596));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3CB0u, 0x2F2FA8u, 0x2F2FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2FB0u;
label_2f2fb0:
    // 0x2f2fb0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f2fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f2fb4:
    // 0x2f2fb4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2f2fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f2fb8:
    // 0x2f2fb8: 0xc0bb966  jal         func_2EE598
label_2f2fbc:
    if (ctx->pc == 0x2F2FBCu) {
        ctx->pc = 0x2F2FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2FB8u;
        // 0x2f2fbc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2FC0u;
        goto label_2f2fc0;
    }
    ctx->pc = 0x2F2FB8u;
    SET_GPR_U32(ctx, 31, 0x2F2FC0u);
    ctx->pc = 0x2F2FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2FB8u;
    // 0x2f2fbc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2F2FB8u, 0x2F2FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2FC0u;
label_2f2fc0:
    // 0x2f2fc0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f2fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f2fc4:
    // 0x2f2fc4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f2fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f2fc8:
    // 0x2f2fc8: 0xc0bb966  jal         func_2EE598
label_2f2fcc:
    if (ctx->pc == 0x2F2FCCu) {
        ctx->pc = 0x2F2FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2FC8u;
        // 0x2f2fcc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2FD0u;
        goto label_2f2fd0;
    }
    ctx->pc = 0x2F2FC8u;
    SET_GPR_U32(ctx, 31, 0x2F2FD0u);
    ctx->pc = 0x2F2FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2FC8u;
    // 0x2f2fcc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2F2FC8u, 0x2F2FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2FD0u;
label_2f2fd0:
    // 0x2f2fd0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f2fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f2fd4:
    // 0x2f2fd4: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2f2fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f2fd8:
    // 0x2f2fd8: 0xc0bb966  jal         func_2EE598
label_2f2fdc:
    if (ctx->pc == 0x2F2FDCu) {
        ctx->pc = 0x2F2FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2FD8u;
        // 0x2f2fdc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2FE0u;
        goto label_2f2fe0;
    }
    ctx->pc = 0x2F2FD8u;
    SET_GPR_U32(ctx, 31, 0x2F2FE0u);
    ctx->pc = 0x2F2FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2FD8u;
    // 0x2f2fdc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2F2FD8u, 0x2F2FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2FE0u;
label_2f2fe0:
    // 0x2f2fe0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f2fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f2fe4:
    // 0x2f2fe4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f2fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f2fe8:
    // 0x2f2fe8: 0xc0bb966  jal         func_2EE598
label_2f2fec:
    if (ctx->pc == 0x2F2FECu) {
        ctx->pc = 0x2F2FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2FE8u;
        // 0x2f2fec: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2FF0u;
        goto label_2f2ff0;
    }
    ctx->pc = 0x2F2FE8u;
    SET_GPR_U32(ctx, 31, 0x2F2FF0u);
    ctx->pc = 0x2F2FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2FE8u;
    // 0x2f2fec: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2F2FE8u, 0x2F2FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2FF0u;
label_2f2ff0:
    // 0x2f2ff0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f2ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f2ff4:
    // 0x2f2ff4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2f2ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f2ff8:
    // 0x2f2ff8: 0xc0bb966  jal         func_2EE598
label_2f2ffc:
    if (ctx->pc == 0x2F2FFCu) {
        ctx->pc = 0x2F2FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2FF8u;
        // 0x2f2ffc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3000u;
        goto label_2f3000;
    }
    ctx->pc = 0x2F2FF8u;
    SET_GPR_U32(ctx, 31, 0x2F3000u);
    ctx->pc = 0x2F2FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2FF8u;
    // 0x2f2ffc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2F2FF8u, 0x2F3000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3000u;
label_2f3000:
    // 0x2f3000: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f3000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f3004:
    // 0x2f3004: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2f3004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f3008:
    // 0x2f3008: 0xc0bb966  jal         func_2EE598
label_2f300c:
    if (ctx->pc == 0x2F300Cu) {
        ctx->pc = 0x2F300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3008u;
        // 0x2f300c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3010u;
        goto label_2f3010;
    }
    ctx->pc = 0x2F3008u;
    SET_GPR_U32(ctx, 31, 0x2F3010u);
    ctx->pc = 0x2F300Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3008u;
    // 0x2f300c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2F3008u, 0x2F3010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3010u;
label_2f3010:
    // 0x2f3010: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f3010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f3014:
    // 0x2f3014: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2f3014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f3018:
    // 0x2f3018: 0xc0bb966  jal         func_2EE598
label_2f301c:
    if (ctx->pc == 0x2F301Cu) {
        ctx->pc = 0x2F301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3018u;
        // 0x2f301c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3020u;
        goto label_2f3020;
    }
    ctx->pc = 0x2F3018u;
    SET_GPR_U32(ctx, 31, 0x2F3020u);
    ctx->pc = 0x2F301Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3018u;
    // 0x2f301c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2F3018u, 0x2F3020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3020u;
label_2f3020:
    // 0x2f3020: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f3020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f3024:
    // 0x2f3024: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f3024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f3028:
    // 0x2f3028: 0xc0bb966  jal         func_2EE598
label_2f302c:
    if (ctx->pc == 0x2F302Cu) {
        ctx->pc = 0x2F302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3028u;
        // 0x2f302c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3030u;
        goto label_2f3030;
    }
    ctx->pc = 0x2F3028u;
    SET_GPR_U32(ctx, 31, 0x2F3030u);
    ctx->pc = 0x2F302Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3028u;
    // 0x2f302c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2F3028u, 0x2F3030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3030u;
label_2f3030:
    // 0x2f3030: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f3030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3034:
    // 0x2f3034: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2f3034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f3038:
    // 0x2f3038: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3038u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f303c:
    // 0x2f303c: 0x34c601b1  ori         $a2, $a2, 0x1B1
    ctx->pc = 0x2f303cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)433);
label_2f3040:
    // 0x2f3040: 0xc0bb96a  jal         func_2EE5A8
label_2f3044:
    if (ctx->pc == 0x2F3044u) {
        ctx->pc = 0x2F3044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3040u;
        // 0x2f3044: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3048u;
        goto label_2f3048;
    }
    ctx->pc = 0x2F3040u;
    SET_GPR_U32(ctx, 31, 0x2F3048u);
    ctx->pc = 0x2F3044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3040u;
    // 0x2f3044: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3040u, 0x2F3048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3048u;
label_2f3048:
    // 0x2f3048: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f3048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f304c:
    // 0x2f304c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2f304cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f3050:
    // 0x2f3050: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3050u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f3054:
    // 0x2f3054: 0x34c601b2  ori         $a2, $a2, 0x1B2
    ctx->pc = 0x2f3054u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)434);
label_2f3058:
    // 0x2f3058: 0xc0bb96a  jal         func_2EE5A8
label_2f305c:
    if (ctx->pc == 0x2F305Cu) {
        ctx->pc = 0x2F305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3058u;
        // 0x2f305c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3060u;
        goto label_2f3060;
    }
    ctx->pc = 0x2F3058u;
    SET_GPR_U32(ctx, 31, 0x2F3060u);
    ctx->pc = 0x2F305Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3058u;
    // 0x2f305c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3058u, 0x2F3060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3060u;
label_2f3060:
    // 0x2f3060: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f3060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f3064:
    // 0x2f3064: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2f3064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f3068:
    // 0x2f3068: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3068u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f306c:
    // 0x2f306c: 0x34c601b3  ori         $a2, $a2, 0x1B3
    ctx->pc = 0x2f306cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)435);
label_2f3070:
    // 0x2f3070: 0xc0bb96a  jal         func_2EE5A8
label_2f3074:
    if (ctx->pc == 0x2F3074u) {
        ctx->pc = 0x2F3074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3070u;
        // 0x2f3074: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3078u;
        goto label_2f3078;
    }
    ctx->pc = 0x2F3070u;
    SET_GPR_U32(ctx, 31, 0x2F3078u);
    ctx->pc = 0x2F3074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3070u;
    // 0x2f3074: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3070u, 0x2F3078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3078u;
label_2f3078:
    // 0x2f3078: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2f3078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f307c:
    // 0x2f307c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2f307cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f3080:
    // 0x2f3080: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3080u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f3084:
    // 0x2f3084: 0x34c601b4  ori         $a2, $a2, 0x1B4
    ctx->pc = 0x2f3084u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)436);
label_2f3088:
    // 0x2f3088: 0xc0bb96a  jal         func_2EE5A8
label_2f308c:
    if (ctx->pc == 0x2F308Cu) {
        ctx->pc = 0x2F308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3088u;
        // 0x2f308c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3090u;
        goto label_2f3090;
    }
    ctx->pc = 0x2F3088u;
    SET_GPR_U32(ctx, 31, 0x2F3090u);
    ctx->pc = 0x2F308Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3088u;
    // 0x2f308c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3088u, 0x2F3090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3090u;
label_2f3090:
    // 0x2f3090: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2f3090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f3094:
    // 0x2f3094: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2f3094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f3098:
    // 0x2f3098: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3098u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f309c:
    // 0x2f309c: 0x34c601b5  ori         $a2, $a2, 0x1B5
    ctx->pc = 0x2f309cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)437);
label_2f30a0:
    // 0x2f30a0: 0xc0bb96a  jal         func_2EE5A8
label_2f30a4:
    if (ctx->pc == 0x2F30A4u) {
        ctx->pc = 0x2F30A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F30A0u;
        // 0x2f30a4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F30A8u;
        goto label_2f30a8;
    }
    ctx->pc = 0x2F30A0u;
    SET_GPR_U32(ctx, 31, 0x2F30A8u);
    ctx->pc = 0x2F30A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F30A0u;
    // 0x2f30a4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F30A0u, 0x2F30A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F30A8u;
label_2f30a8:
    // 0x2f30a8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f30a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f30ac:
    // 0x2f30ac: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2f30acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f30b0:
    // 0x2f30b0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f30b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f30b4:
    // 0x2f30b4: 0x34c601b6  ori         $a2, $a2, 0x1B6
    ctx->pc = 0x2f30b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)438);
label_2f30b8:
    // 0x2f30b8: 0xc0bb96a  jal         func_2EE5A8
label_2f30bc:
    if (ctx->pc == 0x2F30BCu) {
        ctx->pc = 0x2F30BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F30B8u;
        // 0x2f30bc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F30C0u;
        goto label_2f30c0;
    }
    ctx->pc = 0x2F30B8u;
    SET_GPR_U32(ctx, 31, 0x2F30C0u);
    ctx->pc = 0x2F30BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F30B8u;
    // 0x2f30bc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F30B8u, 0x2F30C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F30C0u;
label_2f30c0:
    // 0x2f30c0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2f30c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f30c4:
    // 0x2f30c4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2f30c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f30c8:
    // 0x2f30c8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f30c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f30cc:
    // 0x2f30cc: 0x34c601b7  ori         $a2, $a2, 0x1B7
    ctx->pc = 0x2f30ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)439);
label_2f30d0:
    // 0x2f30d0: 0xc0bb96a  jal         func_2EE5A8
label_2f30d4:
    if (ctx->pc == 0x2F30D4u) {
        ctx->pc = 0x2F30D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F30D0u;
        // 0x2f30d4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F30D8u;
        goto label_2f30d8;
    }
    ctx->pc = 0x2F30D0u;
    SET_GPR_U32(ctx, 31, 0x2F30D8u);
    ctx->pc = 0x2F30D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F30D0u;
    // 0x2f30d4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F30D0u, 0x2F30D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F30D8u;
label_2f30d8:
    // 0x2f30d8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2f30d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f30dc:
    // 0x2f30dc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2f30dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f30e0:
    // 0x2f30e0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f30e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f30e4:
    // 0x2f30e4: 0x34c601b8  ori         $a2, $a2, 0x1B8
    ctx->pc = 0x2f30e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)440);
label_2f30e8:
    // 0x2f30e8: 0xc0bb96a  jal         func_2EE5A8
label_2f30ec:
    if (ctx->pc == 0x2F30ECu) {
        ctx->pc = 0x2F30ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F30E8u;
        // 0x2f30ec: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F30F0u;
        goto label_2f30f0;
    }
    ctx->pc = 0x2F30E8u;
    SET_GPR_U32(ctx, 31, 0x2F30F0u);
    ctx->pc = 0x2F30ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F30E8u;
    // 0x2f30ec: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F30E8u, 0x2F30F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F30F0u;
label_2f30f0:
    // 0x2f30f0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2f30f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2f30f4:
    // 0x2f30f4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2f30f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f30f8:
    // 0x2f30f8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f30f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f30fc:
    // 0x2f30fc: 0x34c6020b  ori         $a2, $a2, 0x20B
    ctx->pc = 0x2f30fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)523);
label_2f3100:
    // 0x2f3100: 0xc0bb96a  jal         func_2EE5A8
label_2f3104:
    if (ctx->pc == 0x2F3104u) {
        ctx->pc = 0x2F3104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3100u;
        // 0x2f3104: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3108u;
        goto label_2f3108;
    }
    ctx->pc = 0x2F3100u;
    SET_GPR_U32(ctx, 31, 0x2F3108u);
    ctx->pc = 0x2F3104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3100u;
    // 0x2f3104: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3100u, 0x2F3108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3108u;
label_2f3108:
    // 0x2f3108: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2f3108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2f310c:
    // 0x2f310c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2f310cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f3110:
    // 0x2f3110: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3110u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f3114:
    // 0x2f3114: 0x34c601ba  ori         $a2, $a2, 0x1BA
    ctx->pc = 0x2f3114u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)442);
label_2f3118:
    // 0x2f3118: 0xc0bb96a  jal         func_2EE5A8
label_2f311c:
    if (ctx->pc == 0x2F311Cu) {
        ctx->pc = 0x2F311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3118u;
        // 0x2f311c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3120u;
        goto label_2f3120;
    }
    ctx->pc = 0x2F3118u;
    SET_GPR_U32(ctx, 31, 0x2F3120u);
    ctx->pc = 0x2F311Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3118u;
    // 0x2f311c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3118u, 0x2F3120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3120u;
label_2f3120:
    // 0x2f3120: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f3120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f3124:
    // 0x2f3124: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2f3124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f3128:
    // 0x2f3128: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3128u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f312c:
    // 0x2f312c: 0x34c601b9  ori         $a2, $a2, 0x1B9
    ctx->pc = 0x2f312cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)441);
label_2f3130:
    // 0x2f3130: 0xc0bb96a  jal         func_2EE5A8
label_2f3134:
    if (ctx->pc == 0x2F3134u) {
        ctx->pc = 0x2F3134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3130u;
        // 0x2f3134: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3138u;
        goto label_2f3138;
    }
    ctx->pc = 0x2F3130u;
    SET_GPR_U32(ctx, 31, 0x2F3138u);
    ctx->pc = 0x2F3134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3130u;
    // 0x2f3134: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3130u, 0x2F3138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3138u;
label_2f3138:
    // 0x2f3138: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f3138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f313c:
    // 0x2f313c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f313cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f3140:
    // 0x2f3140: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3140u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f3144:
    // 0x2f3144: 0x34c601a6  ori         $a2, $a2, 0x1A6
    ctx->pc = 0x2f3144u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)422);
label_2f3148:
    // 0x2f3148: 0xc0bb96a  jal         func_2EE5A8
label_2f314c:
    if (ctx->pc == 0x2F314Cu) {
        ctx->pc = 0x2F314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3148u;
        // 0x2f314c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3150u;
        goto label_2f3150;
    }
    ctx->pc = 0x2F3148u;
    SET_GPR_U32(ctx, 31, 0x2F3150u);
    ctx->pc = 0x2F314Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3148u;
    // 0x2f314c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3148u, 0x2F3150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3150u;
label_2f3150:
    // 0x2f3150: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f3150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3154:
    // 0x2f3154: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f3154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f3158:
    // 0x2f3158: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3158u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f315c:
    // 0x2f315c: 0x34c601a7  ori         $a2, $a2, 0x1A7
    ctx->pc = 0x2f315cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)423);
label_2f3160:
    // 0x2f3160: 0xc0bb96a  jal         func_2EE5A8
label_2f3164:
    if (ctx->pc == 0x2F3164u) {
        ctx->pc = 0x2F3164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3160u;
        // 0x2f3164: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3168u;
        goto label_2f3168;
    }
    ctx->pc = 0x2F3160u;
    SET_GPR_U32(ctx, 31, 0x2F3168u);
    ctx->pc = 0x2F3164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3160u;
    // 0x2f3164: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3160u, 0x2F3168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3168u;
label_2f3168:
    // 0x2f3168: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f3168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f316c:
    // 0x2f316c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f316cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f3170:
    // 0x2f3170: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3170u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f3174:
    // 0x2f3174: 0x34c601a8  ori         $a2, $a2, 0x1A8
    ctx->pc = 0x2f3174u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)424);
label_2f3178:
    // 0x2f3178: 0xc0bb96a  jal         func_2EE5A8
label_2f317c:
    if (ctx->pc == 0x2F317Cu) {
        ctx->pc = 0x2F317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3178u;
        // 0x2f317c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3180u;
        goto label_2f3180;
    }
    ctx->pc = 0x2F3178u;
    SET_GPR_U32(ctx, 31, 0x2F3180u);
    ctx->pc = 0x2F317Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3178u;
    // 0x2f317c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3178u, 0x2F3180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3180u;
label_2f3180:
    // 0x2f3180: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2f3180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f3184:
    // 0x2f3184: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f3184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f3188:
    // 0x2f3188: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3188u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f318c:
    // 0x2f318c: 0x34c601a9  ori         $a2, $a2, 0x1A9
    ctx->pc = 0x2f318cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)425);
label_2f3190:
    // 0x2f3190: 0xc0bb96a  jal         func_2EE5A8
label_2f3194:
    if (ctx->pc == 0x2F3194u) {
        ctx->pc = 0x2F3194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3190u;
        // 0x2f3194: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3198u;
        goto label_2f3198;
    }
    ctx->pc = 0x2F3190u;
    SET_GPR_U32(ctx, 31, 0x2F3198u);
    ctx->pc = 0x2F3194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3190u;
    // 0x2f3194: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3190u, 0x2F3198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3198u;
label_2f3198:
    // 0x2f3198: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2f3198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f319c:
    // 0x2f319c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f319cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f31a0:
    // 0x2f31a0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f31a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f31a4:
    // 0x2f31a4: 0x34c601aa  ori         $a2, $a2, 0x1AA
    ctx->pc = 0x2f31a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)426);
label_2f31a8:
    // 0x2f31a8: 0xc0bb96a  jal         func_2EE5A8
label_2f31ac:
    if (ctx->pc == 0x2F31ACu) {
        ctx->pc = 0x2F31ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F31A8u;
        // 0x2f31ac: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F31B0u;
        goto label_2f31b0;
    }
    ctx->pc = 0x2F31A8u;
    SET_GPR_U32(ctx, 31, 0x2F31B0u);
    ctx->pc = 0x2F31ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F31A8u;
    // 0x2f31ac: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F31A8u, 0x2F31B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F31B0u;
label_2f31b0:
    // 0x2f31b0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f31b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f31b4:
    // 0x2f31b4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f31b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f31b8:
    // 0x2f31b8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f31b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f31bc:
    // 0x2f31bc: 0x34c601ab  ori         $a2, $a2, 0x1AB
    ctx->pc = 0x2f31bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)427);
label_2f31c0:
    // 0x2f31c0: 0xc0bb96a  jal         func_2EE5A8
label_2f31c4:
    if (ctx->pc == 0x2F31C4u) {
        ctx->pc = 0x2F31C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F31C0u;
        // 0x2f31c4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F31C8u;
        goto label_2f31c8;
    }
    ctx->pc = 0x2F31C0u;
    SET_GPR_U32(ctx, 31, 0x2F31C8u);
    ctx->pc = 0x2F31C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F31C0u;
    // 0x2f31c4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F31C0u, 0x2F31C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F31C8u;
label_2f31c8:
    // 0x2f31c8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2f31c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f31cc:
    // 0x2f31cc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f31ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f31d0:
    // 0x2f31d0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f31d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f31d4:
    // 0x2f31d4: 0x34c601ac  ori         $a2, $a2, 0x1AC
    ctx->pc = 0x2f31d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)428);
label_2f31d8:
    // 0x2f31d8: 0xc0bb96a  jal         func_2EE5A8
label_2f31dc:
    if (ctx->pc == 0x2F31DCu) {
        ctx->pc = 0x2F31DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F31D8u;
        // 0x2f31dc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F31E0u;
        goto label_2f31e0;
    }
    ctx->pc = 0x2F31D8u;
    SET_GPR_U32(ctx, 31, 0x2F31E0u);
    ctx->pc = 0x2F31DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F31D8u;
    // 0x2f31dc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F31D8u, 0x2F31E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F31E0u;
label_2f31e0:
    // 0x2f31e0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2f31e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f31e4:
    // 0x2f31e4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f31e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f31e8:
    // 0x2f31e8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f31e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f31ec:
    // 0x2f31ec: 0x34c601ad  ori         $a2, $a2, 0x1AD
    ctx->pc = 0x2f31ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)429);
label_2f31f0:
    // 0x2f31f0: 0xc0bb96a  jal         func_2EE5A8
label_2f31f4:
    if (ctx->pc == 0x2F31F4u) {
        ctx->pc = 0x2F31F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F31F0u;
        // 0x2f31f4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F31F8u;
        goto label_2f31f8;
    }
    ctx->pc = 0x2F31F0u;
    SET_GPR_U32(ctx, 31, 0x2F31F8u);
    ctx->pc = 0x2F31F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F31F0u;
    // 0x2f31f4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F31F0u, 0x2F31F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F31F8u;
label_2f31f8:
    // 0x2f31f8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2f31f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2f31fc:
    // 0x2f31fc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f31fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f3200:
    // 0x2f3200: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3200u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f3204:
    // 0x2f3204: 0x34c6020a  ori         $a2, $a2, 0x20A
    ctx->pc = 0x2f3204u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)522);
label_2f3208:
    // 0x2f3208: 0xc0bb96a  jal         func_2EE5A8
label_2f320c:
    if (ctx->pc == 0x2F320Cu) {
        ctx->pc = 0x2F320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3208u;
        // 0x2f320c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3210u;
        goto label_2f3210;
    }
    ctx->pc = 0x2F3208u;
    SET_GPR_U32(ctx, 31, 0x2F3210u);
    ctx->pc = 0x2F320Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3208u;
    // 0x2f320c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3208u, 0x2F3210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3210u;
label_2f3210:
    // 0x2f3210: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2f3210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2f3214:
    // 0x2f3214: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f3214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f3218:
    // 0x2f3218: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3218u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f321c:
    // 0x2f321c: 0x34c601af  ori         $a2, $a2, 0x1AF
    ctx->pc = 0x2f321cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)431);
label_2f3220:
    // 0x2f3220: 0xc0bb96a  jal         func_2EE5A8
label_2f3224:
    if (ctx->pc == 0x2F3224u) {
        ctx->pc = 0x2F3224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3220u;
        // 0x2f3224: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3228u;
        goto label_2f3228;
    }
    ctx->pc = 0x2F3220u;
    SET_GPR_U32(ctx, 31, 0x2F3228u);
    ctx->pc = 0x2F3224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3220u;
    // 0x2f3224: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3220u, 0x2F3228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3228u;
label_2f3228:
    // 0x2f3228: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f3228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f322c:
    // 0x2f322c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f322cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f3230:
    // 0x2f3230: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3230u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f3234:
    // 0x2f3234: 0x34c601ae  ori         $a2, $a2, 0x1AE
    ctx->pc = 0x2f3234u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)430);
label_2f3238:
    // 0x2f3238: 0xc0bb96a  jal         func_2EE5A8
label_2f323c:
    if (ctx->pc == 0x2F323Cu) {
        ctx->pc = 0x2F323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3238u;
        // 0x2f323c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3240u;
        goto label_2f3240;
    }
    ctx->pc = 0x2F3238u;
    SET_GPR_U32(ctx, 31, 0x2F3240u);
    ctx->pc = 0x2F323Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3238u;
    // 0x2f323c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3238u, 0x2F3240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3240u;
label_2f3240:
    // 0x2f3240: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f3240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3244:
    // 0x2f3244: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2f3244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f3248:
    // 0x2f3248: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3248u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f324c:
    // 0x2f324c: 0x34c601c7  ori         $a2, $a2, 0x1C7
    ctx->pc = 0x2f324cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)455);
label_2f3250:
    // 0x2f3250: 0xc0bb96a  jal         func_2EE5A8
label_2f3254:
    if (ctx->pc == 0x2F3254u) {
        ctx->pc = 0x2F3254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3250u;
        // 0x2f3254: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3258u;
        goto label_2f3258;
    }
    ctx->pc = 0x2F3250u;
    SET_GPR_U32(ctx, 31, 0x2F3258u);
    ctx->pc = 0x2F3254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3250u;
    // 0x2f3254: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3250u, 0x2F3258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3258u;
label_2f3258:
    // 0x2f3258: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f3258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f325c:
    // 0x2f325c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2f325cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f3260:
    // 0x2f3260: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3260u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f3264:
    // 0x2f3264: 0x34c601c8  ori         $a2, $a2, 0x1C8
    ctx->pc = 0x2f3264u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)456);
label_2f3268:
    // 0x2f3268: 0xc0bb96a  jal         func_2EE5A8
label_2f326c:
    if (ctx->pc == 0x2F326Cu) {
        ctx->pc = 0x2F326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3268u;
        // 0x2f326c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3270u;
        goto label_2f3270;
    }
    ctx->pc = 0x2F3268u;
    SET_GPR_U32(ctx, 31, 0x2F3270u);
    ctx->pc = 0x2F326Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3268u;
    // 0x2f326c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3268u, 0x2F3270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3270u;
label_2f3270:
    // 0x2f3270: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f3270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f3274:
    // 0x2f3274: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2f3274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f3278:
    // 0x2f3278: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3278u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f327c:
    // 0x2f327c: 0x34c601c9  ori         $a2, $a2, 0x1C9
    ctx->pc = 0x2f327cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)457);
label_2f3280:
    // 0x2f3280: 0xc0bb96a  jal         func_2EE5A8
label_2f3284:
    if (ctx->pc == 0x2F3284u) {
        ctx->pc = 0x2F3284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3280u;
        // 0x2f3284: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3288u;
        goto label_2f3288;
    }
    ctx->pc = 0x2F3280u;
    SET_GPR_U32(ctx, 31, 0x2F3288u);
    ctx->pc = 0x2F3284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3280u;
    // 0x2f3284: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3280u, 0x2F3288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3288u;
label_2f3288:
    // 0x2f3288: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2f3288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f328c:
    // 0x2f328c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2f328cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f3290:
    // 0x2f3290: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3290u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f3294:
    // 0x2f3294: 0x34c601ca  ori         $a2, $a2, 0x1CA
    ctx->pc = 0x2f3294u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)458);
label_2f3298:
    // 0x2f3298: 0xc0bb96a  jal         func_2EE5A8
label_2f329c:
    if (ctx->pc == 0x2F329Cu) {
        ctx->pc = 0x2F329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3298u;
        // 0x2f329c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F32A0u;
        goto label_2f32a0;
    }
    ctx->pc = 0x2F3298u;
    SET_GPR_U32(ctx, 31, 0x2F32A0u);
    ctx->pc = 0x2F329Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3298u;
    // 0x2f329c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3298u, 0x2F32A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F32A0u;
label_2f32a0:
    // 0x2f32a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2f32a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f32a4:
    // 0x2f32a4: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2f32a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f32a8:
    // 0x2f32a8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f32a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f32ac:
    // 0x2f32ac: 0x34c601cb  ori         $a2, $a2, 0x1CB
    ctx->pc = 0x2f32acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)459);
label_2f32b0:
    // 0x2f32b0: 0xc0bb96a  jal         func_2EE5A8
label_2f32b4:
    if (ctx->pc == 0x2F32B4u) {
        ctx->pc = 0x2F32B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32B0u;
        // 0x2f32b4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F32B8u;
        goto label_2f32b8;
    }
    ctx->pc = 0x2F32B0u;
    SET_GPR_U32(ctx, 31, 0x2F32B8u);
    ctx->pc = 0x2F32B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F32B0u;
    // 0x2f32b4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F32B0u, 0x2F32B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F32B8u;
label_2f32b8:
    // 0x2f32b8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f32b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f32bc:
    // 0x2f32bc: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2f32bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f32c0:
    // 0x2f32c0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f32c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f32c4:
    // 0x2f32c4: 0x34c601cc  ori         $a2, $a2, 0x1CC
    ctx->pc = 0x2f32c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)460);
label_2f32c8:
    // 0x2f32c8: 0xc0bb96a  jal         func_2EE5A8
label_2f32cc:
    if (ctx->pc == 0x2F32CCu) {
        ctx->pc = 0x2F32CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32C8u;
        // 0x2f32cc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F32D0u;
        goto label_2f32d0;
    }
    ctx->pc = 0x2F32C8u;
    SET_GPR_U32(ctx, 31, 0x2F32D0u);
    ctx->pc = 0x2F32CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F32C8u;
    // 0x2f32cc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F32C8u, 0x2F32D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F32D0u;
label_2f32d0:
    // 0x2f32d0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2f32d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f32d4:
    // 0x2f32d4: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2f32d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f32d8:
    // 0x2f32d8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f32d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f32dc:
    // 0x2f32dc: 0x34c601cd  ori         $a2, $a2, 0x1CD
    ctx->pc = 0x2f32dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)461);
label_2f32e0:
    // 0x2f32e0: 0xc0bb96a  jal         func_2EE5A8
label_2f32e4:
    if (ctx->pc == 0x2F32E4u) {
        ctx->pc = 0x2F32E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32E0u;
        // 0x2f32e4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F32E8u;
        goto label_2f32e8;
    }
    ctx->pc = 0x2F32E0u;
    SET_GPR_U32(ctx, 31, 0x2F32E8u);
    ctx->pc = 0x2F32E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F32E0u;
    // 0x2f32e4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F32E0u, 0x2F32E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F32E8u;
label_2f32e8:
    // 0x2f32e8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2f32e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f32ec:
    // 0x2f32ec: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2f32ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f32f0:
    // 0x2f32f0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f32f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f32f4:
    // 0x2f32f4: 0x34c601ce  ori         $a2, $a2, 0x1CE
    ctx->pc = 0x2f32f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)462);
label_2f32f8:
    // 0x2f32f8: 0xc0bb96a  jal         func_2EE5A8
label_2f32fc:
    if (ctx->pc == 0x2F32FCu) {
        ctx->pc = 0x2F32FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32F8u;
        // 0x2f32fc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3300u;
        goto label_2f3300;
    }
    ctx->pc = 0x2F32F8u;
    SET_GPR_U32(ctx, 31, 0x2F3300u);
    ctx->pc = 0x2F32FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F32F8u;
    // 0x2f32fc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F32F8u, 0x2F3300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3300u;
label_2f3300:
    // 0x2f3300: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2f3300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2f3304:
    // 0x2f3304: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2f3304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f3308:
    // 0x2f3308: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3308u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f330c:
    // 0x2f330c: 0x34c6020d  ori         $a2, $a2, 0x20D
    ctx->pc = 0x2f330cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)525);
label_2f3310:
    // 0x2f3310: 0xc0bb96a  jal         func_2EE5A8
label_2f3314:
    if (ctx->pc == 0x2F3314u) {
        ctx->pc = 0x2F3314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3310u;
        // 0x2f3314: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3318u;
        goto label_2f3318;
    }
    ctx->pc = 0x2F3310u;
    SET_GPR_U32(ctx, 31, 0x2F3318u);
    ctx->pc = 0x2F3314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3310u;
    // 0x2f3314: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3310u, 0x2F3318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3318u;
label_2f3318:
    // 0x2f3318: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2f3318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2f331c:
    // 0x2f331c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2f331cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f3320:
    // 0x2f3320: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3320u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f3324:
    // 0x2f3324: 0x34c601d0  ori         $a2, $a2, 0x1D0
    ctx->pc = 0x2f3324u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)464);
label_2f3328:
    // 0x2f3328: 0xc0bb96a  jal         func_2EE5A8
label_2f332c:
    if (ctx->pc == 0x2F332Cu) {
        ctx->pc = 0x2F332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3328u;
        // 0x2f332c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3330u;
        goto label_2f3330;
    }
    ctx->pc = 0x2F3328u;
    SET_GPR_U32(ctx, 31, 0x2F3330u);
    ctx->pc = 0x2F332Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3328u;
    // 0x2f332c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3328u, 0x2F3330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3330u;
label_2f3330:
    // 0x2f3330: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f3330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f3334:
    // 0x2f3334: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2f3334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f3338:
    // 0x2f3338: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3338u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f333c:
    // 0x2f333c: 0x34c601cf  ori         $a2, $a2, 0x1CF
    ctx->pc = 0x2f333cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)463);
label_2f3340:
    // 0x2f3340: 0xc0bb96a  jal         func_2EE5A8
label_2f3344:
    if (ctx->pc == 0x2F3344u) {
        ctx->pc = 0x2F3344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3340u;
        // 0x2f3344: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3348u;
        goto label_2f3348;
    }
    ctx->pc = 0x2F3340u;
    SET_GPR_U32(ctx, 31, 0x2F3348u);
    ctx->pc = 0x2F3344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3340u;
    // 0x2f3344: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3340u, 0x2F3348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3348u;
label_2f3348:
    // 0x2f3348: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f3348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f334c:
    // 0x2f334c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f334cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f3350:
    // 0x2f3350: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3350u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f3354:
    // 0x2f3354: 0x34c601bc  ori         $a2, $a2, 0x1BC
    ctx->pc = 0x2f3354u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)444);
label_2f3358:
    // 0x2f3358: 0xc0bb96a  jal         func_2EE5A8
label_2f335c:
    if (ctx->pc == 0x2F335Cu) {
        ctx->pc = 0x2F335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3358u;
        // 0x2f335c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3360u;
        goto label_2f3360;
    }
    ctx->pc = 0x2F3358u;
    SET_GPR_U32(ctx, 31, 0x2F3360u);
    ctx->pc = 0x2F335Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3358u;
    // 0x2f335c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3358u, 0x2F3360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3360u;
label_2f3360:
    // 0x2f3360: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f3360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3364:
    // 0x2f3364: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f3364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f3368:
    // 0x2f3368: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3368u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f336c:
    // 0x2f336c: 0x34c601bd  ori         $a2, $a2, 0x1BD
    ctx->pc = 0x2f336cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)445);
label_2f3370:
    // 0x2f3370: 0xc0bb96a  jal         func_2EE5A8
label_2f3374:
    if (ctx->pc == 0x2F3374u) {
        ctx->pc = 0x2F3374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3370u;
        // 0x2f3374: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3378u;
        goto label_2f3378;
    }
    ctx->pc = 0x2F3370u;
    SET_GPR_U32(ctx, 31, 0x2F3378u);
    ctx->pc = 0x2F3374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3370u;
    // 0x2f3374: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3370u, 0x2F3378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3378u;
label_2f3378:
    // 0x2f3378: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f3378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f337c:
    // 0x2f337c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f337cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f3380:
    // 0x2f3380: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3380u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f3384:
    // 0x2f3384: 0x34c601be  ori         $a2, $a2, 0x1BE
    ctx->pc = 0x2f3384u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)446);
label_2f3388:
    // 0x2f3388: 0xc0bb96a  jal         func_2EE5A8
label_2f338c:
    if (ctx->pc == 0x2F338Cu) {
        ctx->pc = 0x2F338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3388u;
        // 0x2f338c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3390u;
        goto label_2f3390;
    }
    ctx->pc = 0x2F3388u;
    SET_GPR_U32(ctx, 31, 0x2F3390u);
    ctx->pc = 0x2F338Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3388u;
    // 0x2f338c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3388u, 0x2F3390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3390u;
label_2f3390:
    // 0x2f3390: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2f3390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f3394:
    // 0x2f3394: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f3394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f3398:
    // 0x2f3398: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3398u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f339c:
    // 0x2f339c: 0x34c601bf  ori         $a2, $a2, 0x1BF
    ctx->pc = 0x2f339cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)447);
label_2f33a0:
    // 0x2f33a0: 0xc0bb96a  jal         func_2EE5A8
label_2f33a4:
    if (ctx->pc == 0x2F33A4u) {
        ctx->pc = 0x2F33A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F33A0u;
        // 0x2f33a4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F33A8u;
        goto label_2f33a8;
    }
    ctx->pc = 0x2F33A0u;
    SET_GPR_U32(ctx, 31, 0x2F33A8u);
    ctx->pc = 0x2F33A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F33A0u;
    // 0x2f33a4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F33A0u, 0x2F33A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F33A8u;
label_2f33a8:
    // 0x2f33a8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2f33a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f33ac:
    // 0x2f33ac: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f33acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f33b0:
    // 0x2f33b0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f33b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f33b4:
    // 0x2f33b4: 0x34c601c0  ori         $a2, $a2, 0x1C0
    ctx->pc = 0x2f33b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)448);
label_2f33b8:
    // 0x2f33b8: 0xc0bb96a  jal         func_2EE5A8
label_2f33bc:
    if (ctx->pc == 0x2F33BCu) {
        ctx->pc = 0x2F33BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F33B8u;
        // 0x2f33bc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F33C0u;
        goto label_2f33c0;
    }
    ctx->pc = 0x2F33B8u;
    SET_GPR_U32(ctx, 31, 0x2F33C0u);
    ctx->pc = 0x2F33BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F33B8u;
    // 0x2f33bc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F33B8u, 0x2F33C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F33C0u;
label_2f33c0:
    // 0x2f33c0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f33c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f33c4:
    // 0x2f33c4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f33c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f33c8:
    // 0x2f33c8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f33c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f33cc:
    // 0x2f33cc: 0x34c601c1  ori         $a2, $a2, 0x1C1
    ctx->pc = 0x2f33ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)449);
label_2f33d0:
    // 0x2f33d0: 0xc0bb96a  jal         func_2EE5A8
label_2f33d4:
    if (ctx->pc == 0x2F33D4u) {
        ctx->pc = 0x2F33D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F33D0u;
        // 0x2f33d4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F33D8u;
        goto label_2f33d8;
    }
    ctx->pc = 0x2F33D0u;
    SET_GPR_U32(ctx, 31, 0x2F33D8u);
    ctx->pc = 0x2F33D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F33D0u;
    // 0x2f33d4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F33D0u, 0x2F33D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F33D8u;
label_2f33d8:
    // 0x2f33d8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2f33d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f33dc:
    // 0x2f33dc: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f33dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f33e0:
    // 0x2f33e0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f33e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f33e4:
    // 0x2f33e4: 0x34c601c2  ori         $a2, $a2, 0x1C2
    ctx->pc = 0x2f33e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)450);
label_2f33e8:
    // 0x2f33e8: 0xc0bb96a  jal         func_2EE5A8
label_2f33ec:
    if (ctx->pc == 0x2F33ECu) {
        ctx->pc = 0x2F33ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F33E8u;
        // 0x2f33ec: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F33F0u;
        goto label_2f33f0;
    }
    ctx->pc = 0x2F33E8u;
    SET_GPR_U32(ctx, 31, 0x2F33F0u);
    ctx->pc = 0x2F33ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F33E8u;
    // 0x2f33ec: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F33E8u, 0x2F33F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F33F0u;
label_2f33f0:
    // 0x2f33f0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2f33f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f33f4:
    // 0x2f33f4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f33f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f33f8:
    // 0x2f33f8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f33f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f33fc:
    // 0x2f33fc: 0x34c601c3  ori         $a2, $a2, 0x1C3
    ctx->pc = 0x2f33fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)451);
label_2f3400:
    // 0x2f3400: 0xc0bb96a  jal         func_2EE5A8
label_2f3404:
    if (ctx->pc == 0x2F3404u) {
        ctx->pc = 0x2F3404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3400u;
        // 0x2f3404: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3408u;
        goto label_2f3408;
    }
    ctx->pc = 0x2F3400u;
    SET_GPR_U32(ctx, 31, 0x2F3408u);
    ctx->pc = 0x2F3404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3400u;
    // 0x2f3404: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3400u, 0x2F3408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3408u;
label_2f3408:
    // 0x2f3408: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2f3408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2f340c:
    // 0x2f340c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f340cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f3410:
    // 0x2f3410: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3410u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f3414:
    // 0x2f3414: 0x34c6020c  ori         $a2, $a2, 0x20C
    ctx->pc = 0x2f3414u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)524);
label_2f3418:
    // 0x2f3418: 0xc0bb96a  jal         func_2EE5A8
label_2f341c:
    if (ctx->pc == 0x2F341Cu) {
        ctx->pc = 0x2F341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3418u;
        // 0x2f341c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3420u;
        goto label_2f3420;
    }
    ctx->pc = 0x2F3418u;
    SET_GPR_U32(ctx, 31, 0x2F3420u);
    ctx->pc = 0x2F341Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3418u;
    // 0x2f341c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3418u, 0x2F3420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3420u;
label_2f3420:
    // 0x2f3420: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2f3420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2f3424:
    // 0x2f3424: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f3424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f3428:
    // 0x2f3428: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3428u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f342c:
    // 0x2f342c: 0x34c601c5  ori         $a2, $a2, 0x1C5
    ctx->pc = 0x2f342cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)453);
label_2f3430:
    // 0x2f3430: 0xc0bb96a  jal         func_2EE5A8
label_2f3434:
    if (ctx->pc == 0x2F3434u) {
        ctx->pc = 0x2F3434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3430u;
        // 0x2f3434: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3438u;
        goto label_2f3438;
    }
    ctx->pc = 0x2F3430u;
    SET_GPR_U32(ctx, 31, 0x2F3438u);
    ctx->pc = 0x2F3434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3430u;
    // 0x2f3434: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3430u, 0x2F3438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3438u;
label_2f3438:
    // 0x2f3438: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f3438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f343c:
    // 0x2f343c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f343cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f3440:
    // 0x2f3440: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3440u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f3444:
    // 0x2f3444: 0x34c601c4  ori         $a2, $a2, 0x1C4
    ctx->pc = 0x2f3444u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)452);
label_2f3448:
    // 0x2f3448: 0xc0bb96a  jal         func_2EE5A8
label_2f344c:
    if (ctx->pc == 0x2F344Cu) {
        ctx->pc = 0x2F344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3448u;
        // 0x2f344c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3450u;
        goto label_2f3450;
    }
    ctx->pc = 0x2F3448u;
    SET_GPR_U32(ctx, 31, 0x2F3450u);
    ctx->pc = 0x2F344Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3448u;
    // 0x2f344c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3448u, 0x2F3450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3450u;
label_2f3450:
    // 0x2f3450: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f3450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3454:
    // 0x2f3454: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2f3454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f3458:
    // 0x2f3458: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3458u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f345c:
    // 0x2f345c: 0x34c601d2  ori         $a2, $a2, 0x1D2
    ctx->pc = 0x2f345cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)466);
label_2f3460:
    // 0x2f3460: 0xc0bb96a  jal         func_2EE5A8
label_2f3464:
    if (ctx->pc == 0x2F3464u) {
        ctx->pc = 0x2F3464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3460u;
        // 0x2f3464: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3468u;
        goto label_2f3468;
    }
    ctx->pc = 0x2F3460u;
    SET_GPR_U32(ctx, 31, 0x2F3468u);
    ctx->pc = 0x2F3464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3460u;
    // 0x2f3464: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3460u, 0x2F3468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3468u;
label_2f3468:
    // 0x2f3468: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f3468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f346c:
    // 0x2f346c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2f346cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f3470:
    // 0x2f3470: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3470u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f3474:
    // 0x2f3474: 0x34c601d3  ori         $a2, $a2, 0x1D3
    ctx->pc = 0x2f3474u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)467);
label_2f3478:
    // 0x2f3478: 0xc0bb96a  jal         func_2EE5A8
label_2f347c:
    if (ctx->pc == 0x2F347Cu) {
        ctx->pc = 0x2F347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3478u;
        // 0x2f347c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3480u;
        goto label_2f3480;
    }
    ctx->pc = 0x2F3478u;
    SET_GPR_U32(ctx, 31, 0x2F3480u);
    ctx->pc = 0x2F347Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3478u;
    // 0x2f347c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3478u, 0x2F3480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3480u;
label_2f3480:
    // 0x2f3480: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f3480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f3484:
    // 0x2f3484: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2f3484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f3488:
    // 0x2f3488: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3488u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f348c:
    // 0x2f348c: 0x34c601d4  ori         $a2, $a2, 0x1D4
    ctx->pc = 0x2f348cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)468);
label_2f3490:
    // 0x2f3490: 0xc0bb96a  jal         func_2EE5A8
label_2f3494:
    if (ctx->pc == 0x2F3494u) {
        ctx->pc = 0x2F3494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3490u;
        // 0x2f3494: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3498u;
        goto label_2f3498;
    }
    ctx->pc = 0x2F3490u;
    SET_GPR_U32(ctx, 31, 0x2F3498u);
    ctx->pc = 0x2F3494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3490u;
    // 0x2f3494: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3490u, 0x2F3498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3498u;
label_2f3498:
    // 0x2f3498: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2f3498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f349c:
    // 0x2f349c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2f349cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f34a0:
    // 0x2f34a0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f34a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f34a4:
    // 0x2f34a4: 0x34c601d5  ori         $a2, $a2, 0x1D5
    ctx->pc = 0x2f34a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)469);
label_2f34a8:
    // 0x2f34a8: 0xc0bb96a  jal         func_2EE5A8
label_2f34ac:
    if (ctx->pc == 0x2F34ACu) {
        ctx->pc = 0x2F34ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F34A8u;
        // 0x2f34ac: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F34B0u;
        goto label_2f34b0;
    }
    ctx->pc = 0x2F34A8u;
    SET_GPR_U32(ctx, 31, 0x2F34B0u);
    ctx->pc = 0x2F34ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F34A8u;
    // 0x2f34ac: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F34A8u, 0x2F34B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F34B0u;
label_2f34b0:
    // 0x2f34b0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2f34b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f34b4:
    // 0x2f34b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2f34b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f34b8:
    // 0x2f34b8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f34b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f34bc:
    // 0x2f34bc: 0x34c601d6  ori         $a2, $a2, 0x1D6
    ctx->pc = 0x2f34bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)470);
label_2f34c0:
    // 0x2f34c0: 0xc0bb96a  jal         func_2EE5A8
label_2f34c4:
    if (ctx->pc == 0x2F34C4u) {
        ctx->pc = 0x2F34C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F34C0u;
        // 0x2f34c4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F34C8u;
        goto label_2f34c8;
    }
    ctx->pc = 0x2F34C0u;
    SET_GPR_U32(ctx, 31, 0x2F34C8u);
    ctx->pc = 0x2F34C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F34C0u;
    // 0x2f34c4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F34C0u, 0x2F34C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F34C8u;
label_2f34c8:
    // 0x2f34c8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f34c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f34cc:
    // 0x2f34cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2f34ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f34d0:
    // 0x2f34d0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f34d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f34d4:
    // 0x2f34d4: 0x34c601d7  ori         $a2, $a2, 0x1D7
    ctx->pc = 0x2f34d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)471);
label_2f34d8:
    // 0x2f34d8: 0xc0bb96a  jal         func_2EE5A8
label_2f34dc:
    if (ctx->pc == 0x2F34DCu) {
        ctx->pc = 0x2F34DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F34D8u;
        // 0x2f34dc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F34E0u;
        goto label_2f34e0;
    }
    ctx->pc = 0x2F34D8u;
    SET_GPR_U32(ctx, 31, 0x2F34E0u);
    ctx->pc = 0x2F34DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F34D8u;
    // 0x2f34dc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F34D8u, 0x2F34E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F34E0u;
label_2f34e0:
    // 0x2f34e0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2f34e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f34e4:
    // 0x2f34e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2f34e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f34e8:
    // 0x2f34e8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f34e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f34ec:
    // 0x2f34ec: 0x34c601d8  ori         $a2, $a2, 0x1D8
    ctx->pc = 0x2f34ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)472);
label_2f34f0:
    // 0x2f34f0: 0xc0bb96a  jal         func_2EE5A8
label_2f34f4:
    if (ctx->pc == 0x2F34F4u) {
        ctx->pc = 0x2F34F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F34F0u;
        // 0x2f34f4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F34F8u;
        goto label_2f34f8;
    }
    ctx->pc = 0x2F34F0u;
    SET_GPR_U32(ctx, 31, 0x2F34F8u);
    ctx->pc = 0x2F34F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F34F0u;
    // 0x2f34f4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F34F0u, 0x2F34F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F34F8u;
label_2f34f8:
    // 0x2f34f8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2f34f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f34fc:
    // 0x2f34fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2f34fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f3500:
    // 0x2f3500: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3500u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f3504:
    // 0x2f3504: 0x34c601d9  ori         $a2, $a2, 0x1D9
    ctx->pc = 0x2f3504u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)473);
label_2f3508:
    // 0x2f3508: 0xc0bb96a  jal         func_2EE5A8
label_2f350c:
    if (ctx->pc == 0x2F350Cu) {
        ctx->pc = 0x2F350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3508u;
        // 0x2f350c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3510u;
        goto label_2f3510;
    }
    ctx->pc = 0x2F3508u;
    SET_GPR_U32(ctx, 31, 0x2F3510u);
    ctx->pc = 0x2F350Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3508u;
    // 0x2f350c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3508u, 0x2F3510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3510u;
label_2f3510:
    // 0x2f3510: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2f3510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2f3514:
    // 0x2f3514: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2f3514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f3518:
    // 0x2f3518: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3518u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f351c:
    // 0x2f351c: 0x34c6020e  ori         $a2, $a2, 0x20E
    ctx->pc = 0x2f351cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)526);
label_2f3520:
    // 0x2f3520: 0xc0bb96a  jal         func_2EE5A8
label_2f3524:
    if (ctx->pc == 0x2F3524u) {
        ctx->pc = 0x2F3524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3520u;
        // 0x2f3524: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3528u;
        goto label_2f3528;
    }
    ctx->pc = 0x2F3520u;
    SET_GPR_U32(ctx, 31, 0x2F3528u);
    ctx->pc = 0x2F3524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3520u;
    // 0x2f3524: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3520u, 0x2F3528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3528u;
label_2f3528:
    // 0x2f3528: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2f3528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2f352c:
    // 0x2f352c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2f352cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f3530:
    // 0x2f3530: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3530u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f3534:
    // 0x2f3534: 0x34c601db  ori         $a2, $a2, 0x1DB
    ctx->pc = 0x2f3534u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)475);
label_2f3538:
    // 0x2f3538: 0xc0bb96a  jal         func_2EE5A8
label_2f353c:
    if (ctx->pc == 0x2F353Cu) {
        ctx->pc = 0x2F353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3538u;
        // 0x2f353c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3540u;
        goto label_2f3540;
    }
    ctx->pc = 0x2F3538u;
    SET_GPR_U32(ctx, 31, 0x2F3540u);
    ctx->pc = 0x2F353Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3538u;
    // 0x2f353c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3538u, 0x2F3540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3540u;
label_2f3540:
    // 0x2f3540: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f3540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f3544:
    // 0x2f3544: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2f3544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f3548:
    // 0x2f3548: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3548u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f354c:
    // 0x2f354c: 0x34c601da  ori         $a2, $a2, 0x1DA
    ctx->pc = 0x2f354cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)474);
label_2f3550:
    // 0x2f3550: 0xc0bb96a  jal         func_2EE5A8
label_2f3554:
    if (ctx->pc == 0x2F3554u) {
        ctx->pc = 0x2F3554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3550u;
        // 0x2f3554: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3558u;
        goto label_2f3558;
    }
    ctx->pc = 0x2F3550u;
    SET_GPR_U32(ctx, 31, 0x2F3558u);
    ctx->pc = 0x2F3554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3550u;
    // 0x2f3554: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3550u, 0x2F3558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3558u;
label_2f3558:
    // 0x2f3558: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f3558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f355c:
    // 0x2f355c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2f355cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f3560:
    // 0x2f3560: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3560u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f3564:
    // 0x2f3564: 0x34c601dd  ori         $a2, $a2, 0x1DD
    ctx->pc = 0x2f3564u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)477);
label_2f3568:
    // 0x2f3568: 0xc0bb96a  jal         func_2EE5A8
label_2f356c:
    if (ctx->pc == 0x2F356Cu) {
        ctx->pc = 0x2F356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3568u;
        // 0x2f356c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3570u;
        goto label_2f3570;
    }
    ctx->pc = 0x2F3568u;
    SET_GPR_U32(ctx, 31, 0x2F3570u);
    ctx->pc = 0x2F356Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3568u;
    // 0x2f356c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3568u, 0x2F3570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3570u;
label_2f3570:
    // 0x2f3570: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f3570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3574:
    // 0x2f3574: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2f3574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f3578:
    // 0x2f3578: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3578u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f357c:
    // 0x2f357c: 0x34c601de  ori         $a2, $a2, 0x1DE
    ctx->pc = 0x2f357cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)478);
label_2f3580:
    // 0x2f3580: 0xc0bb96a  jal         func_2EE5A8
label_2f3584:
    if (ctx->pc == 0x2F3584u) {
        ctx->pc = 0x2F3584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3580u;
        // 0x2f3584: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3588u;
        goto label_2f3588;
    }
    ctx->pc = 0x2F3580u;
    SET_GPR_U32(ctx, 31, 0x2F3588u);
    ctx->pc = 0x2F3584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3580u;
    // 0x2f3584: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3580u, 0x2F3588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3588u;
label_2f3588:
    // 0x2f3588: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f3588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f358c:
    // 0x2f358c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2f358cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f3590:
    // 0x2f3590: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3590u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f3594:
    // 0x2f3594: 0x34c601df  ori         $a2, $a2, 0x1DF
    ctx->pc = 0x2f3594u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)479);
label_2f3598:
    // 0x2f3598: 0xc0bb96a  jal         func_2EE5A8
label_2f359c:
    if (ctx->pc == 0x2F359Cu) {
        ctx->pc = 0x2F359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3598u;
        // 0x2f359c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F35A0u;
        goto label_2f35a0;
    }
    ctx->pc = 0x2F3598u;
    SET_GPR_U32(ctx, 31, 0x2F35A0u);
    ctx->pc = 0x2F359Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3598u;
    // 0x2f359c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3598u, 0x2F35A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F35A0u;
label_2f35a0:
    // 0x2f35a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2f35a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f35a4:
    // 0x2f35a4: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2f35a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f35a8:
    // 0x2f35a8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f35a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f35ac:
    // 0x2f35ac: 0x34c601e0  ori         $a2, $a2, 0x1E0
    ctx->pc = 0x2f35acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)480);
label_2f35b0:
    // 0x2f35b0: 0xc0bb96a  jal         func_2EE5A8
label_2f35b4:
    if (ctx->pc == 0x2F35B4u) {
        ctx->pc = 0x2F35B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F35B0u;
        // 0x2f35b4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F35B8u;
        goto label_2f35b8;
    }
    ctx->pc = 0x2F35B0u;
    SET_GPR_U32(ctx, 31, 0x2F35B8u);
    ctx->pc = 0x2F35B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F35B0u;
    // 0x2f35b4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F35B0u, 0x2F35B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F35B8u;
label_2f35b8:
    // 0x2f35b8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2f35b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f35bc:
    // 0x2f35bc: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2f35bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f35c0:
    // 0x2f35c0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f35c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f35c4:
    // 0x2f35c4: 0x34c601e1  ori         $a2, $a2, 0x1E1
    ctx->pc = 0x2f35c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)481);
label_2f35c8:
    // 0x2f35c8: 0xc0bb96a  jal         func_2EE5A8
label_2f35cc:
    if (ctx->pc == 0x2F35CCu) {
        ctx->pc = 0x2F35CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F35C8u;
        // 0x2f35cc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F35D0u;
        goto label_2f35d0;
    }
    ctx->pc = 0x2F35C8u;
    SET_GPR_U32(ctx, 31, 0x2F35D0u);
    ctx->pc = 0x2F35CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F35C8u;
    // 0x2f35cc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F35C8u, 0x2F35D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F35D0u;
label_2f35d0:
    // 0x2f35d0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f35d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f35d4:
    // 0x2f35d4: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2f35d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f35d8:
    // 0x2f35d8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f35d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f35dc:
    // 0x2f35dc: 0x34c601e2  ori         $a2, $a2, 0x1E2
    ctx->pc = 0x2f35dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)482);
label_2f35e0:
    // 0x2f35e0: 0xc0bb96a  jal         func_2EE5A8
label_2f35e4:
    if (ctx->pc == 0x2F35E4u) {
        ctx->pc = 0x2F35E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F35E0u;
        // 0x2f35e4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F35E8u;
        goto label_2f35e8;
    }
    ctx->pc = 0x2F35E0u;
    SET_GPR_U32(ctx, 31, 0x2F35E8u);
    ctx->pc = 0x2F35E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F35E0u;
    // 0x2f35e4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F35E0u, 0x2F35E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F35E8u;
label_2f35e8:
    // 0x2f35e8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2f35e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f35ec:
    // 0x2f35ec: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2f35ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f35f0:
    // 0x2f35f0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f35f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f35f4:
    // 0x2f35f4: 0x34c601e3  ori         $a2, $a2, 0x1E3
    ctx->pc = 0x2f35f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)483);
label_2f35f8:
    // 0x2f35f8: 0xc0bb96a  jal         func_2EE5A8
label_2f35fc:
    if (ctx->pc == 0x2F35FCu) {
        ctx->pc = 0x2F35FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F35F8u;
        // 0x2f35fc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3600u;
        goto label_2f3600;
    }
    ctx->pc = 0x2F35F8u;
    SET_GPR_U32(ctx, 31, 0x2F3600u);
    ctx->pc = 0x2F35FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F35F8u;
    // 0x2f35fc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F35F8u, 0x2F3600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3600u;
label_2f3600:
    // 0x2f3600: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2f3600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f3604:
    // 0x2f3604: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2f3604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f3608:
    // 0x2f3608: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3608u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f360c:
    // 0x2f360c: 0x34c601e4  ori         $a2, $a2, 0x1E4
    ctx->pc = 0x2f360cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)484);
label_2f3610:
    // 0x2f3610: 0xc0bb96a  jal         func_2EE5A8
label_2f3614:
    if (ctx->pc == 0x2F3614u) {
        ctx->pc = 0x2F3614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3610u;
        // 0x2f3614: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3618u;
        goto label_2f3618;
    }
    ctx->pc = 0x2F3610u;
    SET_GPR_U32(ctx, 31, 0x2F3618u);
    ctx->pc = 0x2F3614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3610u;
    // 0x2f3614: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3610u, 0x2F3618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3618u;
label_2f3618:
    // 0x2f3618: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2f3618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2f361c:
    // 0x2f361c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2f361cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f3620:
    // 0x2f3620: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3620u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f3624:
    // 0x2f3624: 0x34c6020f  ori         $a2, $a2, 0x20F
    ctx->pc = 0x2f3624u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)527);
label_2f3628:
    // 0x2f3628: 0xc0bb96a  jal         func_2EE5A8
label_2f362c:
    if (ctx->pc == 0x2F362Cu) {
        ctx->pc = 0x2F362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3628u;
        // 0x2f362c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3630u;
        goto label_2f3630;
    }
    ctx->pc = 0x2F3628u;
    SET_GPR_U32(ctx, 31, 0x2F3630u);
    ctx->pc = 0x2F362Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3628u;
    // 0x2f362c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3628u, 0x2F3630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3630u;
label_2f3630:
    // 0x2f3630: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2f3630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2f3634:
    // 0x2f3634: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2f3634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f3638:
    // 0x2f3638: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3638u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f363c:
    // 0x2f363c: 0x34c601e6  ori         $a2, $a2, 0x1E6
    ctx->pc = 0x2f363cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)486);
label_2f3640:
    // 0x2f3640: 0xc0bb96a  jal         func_2EE5A8
label_2f3644:
    if (ctx->pc == 0x2F3644u) {
        ctx->pc = 0x2F3644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3640u;
        // 0x2f3644: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3648u;
        goto label_2f3648;
    }
    ctx->pc = 0x2F3640u;
    SET_GPR_U32(ctx, 31, 0x2F3648u);
    ctx->pc = 0x2F3644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3640u;
    // 0x2f3644: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3640u, 0x2F3648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3648u;
label_2f3648:
    // 0x2f3648: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f3648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f364c:
    // 0x2f364c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2f364cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f3650:
    // 0x2f3650: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3650u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f3654:
    // 0x2f3654: 0x34c601e5  ori         $a2, $a2, 0x1E5
    ctx->pc = 0x2f3654u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)485);
label_2f3658:
    // 0x2f3658: 0xc0bb96a  jal         func_2EE5A8
label_2f365c:
    if (ctx->pc == 0x2F365Cu) {
        ctx->pc = 0x2F365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3658u;
        // 0x2f365c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3660u;
        goto label_2f3660;
    }
    ctx->pc = 0x2F3658u;
    SET_GPR_U32(ctx, 31, 0x2F3660u);
    ctx->pc = 0x2F365Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3658u;
    // 0x2f365c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3658u, 0x2F3660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3660u;
label_2f3660:
    // 0x2f3660: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f3660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3664:
    // 0x2f3664: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2f3664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f3668:
    // 0x2f3668: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3668u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f366c:
    // 0x2f366c: 0x34c601f3  ori         $a2, $a2, 0x1F3
    ctx->pc = 0x2f366cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)499);
label_2f3670:
    // 0x2f3670: 0xc0bb96a  jal         func_2EE5A8
label_2f3674:
    if (ctx->pc == 0x2F3674u) {
        ctx->pc = 0x2F3674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3670u;
        // 0x2f3674: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3678u;
        goto label_2f3678;
    }
    ctx->pc = 0x2F3670u;
    SET_GPR_U32(ctx, 31, 0x2F3678u);
    ctx->pc = 0x2F3674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3670u;
    // 0x2f3674: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3670u, 0x2F3678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3678u;
label_2f3678:
    // 0x2f3678: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f3678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f367c:
    // 0x2f367c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2f367cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f3680:
    // 0x2f3680: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3680u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f3684:
    // 0x2f3684: 0x34c601f4  ori         $a2, $a2, 0x1F4
    ctx->pc = 0x2f3684u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)500);
label_2f3688:
    // 0x2f3688: 0xc0bb96a  jal         func_2EE5A8
label_2f368c:
    if (ctx->pc == 0x2F368Cu) {
        ctx->pc = 0x2F368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3688u;
        // 0x2f368c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3690u;
        goto label_2f3690;
    }
    ctx->pc = 0x2F3688u;
    SET_GPR_U32(ctx, 31, 0x2F3690u);
    ctx->pc = 0x2F368Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3688u;
    // 0x2f368c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3688u, 0x2F3690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3690u;
label_2f3690:
    // 0x2f3690: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f3690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f3694:
    // 0x2f3694: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2f3694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f3698:
    // 0x2f3698: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3698u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f369c:
    // 0x2f369c: 0x34c601f5  ori         $a2, $a2, 0x1F5
    ctx->pc = 0x2f369cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)501);
label_2f36a0:
    // 0x2f36a0: 0xc0bb96a  jal         func_2EE5A8
label_2f36a4:
    if (ctx->pc == 0x2F36A4u) {
        ctx->pc = 0x2F36A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F36A0u;
        // 0x2f36a4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F36A8u;
        goto label_2f36a8;
    }
    ctx->pc = 0x2F36A0u;
    SET_GPR_U32(ctx, 31, 0x2F36A8u);
    ctx->pc = 0x2F36A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F36A0u;
    // 0x2f36a4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F36A0u, 0x2F36A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F36A8u;
label_2f36a8:
    // 0x2f36a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2f36a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f36ac:
    // 0x2f36ac: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2f36acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f36b0:
    // 0x2f36b0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f36b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f36b4:
    // 0x2f36b4: 0x34c601f6  ori         $a2, $a2, 0x1F6
    ctx->pc = 0x2f36b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)502);
label_2f36b8:
    // 0x2f36b8: 0xc0bb96a  jal         func_2EE5A8
label_2f36bc:
    if (ctx->pc == 0x2F36BCu) {
        ctx->pc = 0x2F36BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F36B8u;
        // 0x2f36bc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F36C0u;
        goto label_2f36c0;
    }
    ctx->pc = 0x2F36B8u;
    SET_GPR_U32(ctx, 31, 0x2F36C0u);
    ctx->pc = 0x2F36BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F36B8u;
    // 0x2f36bc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F36B8u, 0x2F36C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F36C0u;
label_2f36c0:
    // 0x2f36c0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2f36c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f36c4:
    // 0x2f36c4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2f36c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f36c8:
    // 0x2f36c8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f36c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f36cc:
    // 0x2f36cc: 0x34c601f7  ori         $a2, $a2, 0x1F7
    ctx->pc = 0x2f36ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)503);
label_2f36d0:
    // 0x2f36d0: 0xc0bb96a  jal         func_2EE5A8
label_2f36d4:
    if (ctx->pc == 0x2F36D4u) {
        ctx->pc = 0x2F36D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F36D0u;
        // 0x2f36d4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F36D8u;
        goto label_2f36d8;
    }
    ctx->pc = 0x2F36D0u;
    SET_GPR_U32(ctx, 31, 0x2F36D8u);
    ctx->pc = 0x2F36D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F36D0u;
    // 0x2f36d4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F36D0u, 0x2F36D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F36D8u;
label_2f36d8:
    // 0x2f36d8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f36d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f36dc:
    // 0x2f36dc: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2f36dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f36e0:
    // 0x2f36e0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f36e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f36e4:
    // 0x2f36e4: 0x34c601f8  ori         $a2, $a2, 0x1F8
    ctx->pc = 0x2f36e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)504);
label_2f36e8:
    // 0x2f36e8: 0xc0bb96a  jal         func_2EE5A8
label_2f36ec:
    if (ctx->pc == 0x2F36ECu) {
        ctx->pc = 0x2F36ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F36E8u;
        // 0x2f36ec: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F36F0u;
        goto label_2f36f0;
    }
    ctx->pc = 0x2F36E8u;
    SET_GPR_U32(ctx, 31, 0x2F36F0u);
    ctx->pc = 0x2F36ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F36E8u;
    // 0x2f36ec: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F36E8u, 0x2F36F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F36F0u;
label_2f36f0:
    // 0x2f36f0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2f36f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f36f4:
    // 0x2f36f4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2f36f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f36f8:
    // 0x2f36f8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f36f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f36fc:
    // 0x2f36fc: 0x34c601f9  ori         $a2, $a2, 0x1F9
    ctx->pc = 0x2f36fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)505);
label_2f3700:
    // 0x2f3700: 0xc0bb96a  jal         func_2EE5A8
label_2f3704:
    if (ctx->pc == 0x2F3704u) {
        ctx->pc = 0x2F3704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3700u;
        // 0x2f3704: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3708u;
        goto label_2f3708;
    }
    ctx->pc = 0x2F3700u;
    SET_GPR_U32(ctx, 31, 0x2F3708u);
    ctx->pc = 0x2F3704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3700u;
    // 0x2f3704: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3700u, 0x2F3708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3708u;
label_2f3708:
    // 0x2f3708: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2f3708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f370c:
    // 0x2f370c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2f370cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f3710:
    // 0x2f3710: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3710u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f3714:
    // 0x2f3714: 0x34c601fa  ori         $a2, $a2, 0x1FA
    ctx->pc = 0x2f3714u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)506);
label_2f3718:
    // 0x2f3718: 0xc0bb96a  jal         func_2EE5A8
label_2f371c:
    if (ctx->pc == 0x2F371Cu) {
        ctx->pc = 0x2F371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3718u;
        // 0x2f371c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3720u;
        goto label_2f3720;
    }
    ctx->pc = 0x2F3718u;
    SET_GPR_U32(ctx, 31, 0x2F3720u);
    ctx->pc = 0x2F371Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3718u;
    // 0x2f371c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3718u, 0x2F3720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3720u;
label_2f3720:
    // 0x2f3720: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2f3720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2f3724:
    // 0x2f3724: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2f3724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f3728:
    // 0x2f3728: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3728u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f372c:
    // 0x2f372c: 0x34c60211  ori         $a2, $a2, 0x211
    ctx->pc = 0x2f372cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)529);
label_2f3730:
    // 0x2f3730: 0xc0bb96a  jal         func_2EE5A8
label_2f3734:
    if (ctx->pc == 0x2F3734u) {
        ctx->pc = 0x2F3734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3730u;
        // 0x2f3734: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3738u;
        goto label_2f3738;
    }
    ctx->pc = 0x2F3730u;
    SET_GPR_U32(ctx, 31, 0x2F3738u);
    ctx->pc = 0x2F3734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3730u;
    // 0x2f3734: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3730u, 0x2F3738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3738u;
label_2f3738:
    // 0x2f3738: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2f3738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2f373c:
    // 0x2f373c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2f373cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f3740:
    // 0x2f3740: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3740u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f3744:
    // 0x2f3744: 0x34c601fc  ori         $a2, $a2, 0x1FC
    ctx->pc = 0x2f3744u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)508);
label_2f3748:
    // 0x2f3748: 0xc0bb96a  jal         func_2EE5A8
label_2f374c:
    if (ctx->pc == 0x2F374Cu) {
        ctx->pc = 0x2F374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3748u;
        // 0x2f374c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3750u;
        goto label_2f3750;
    }
    ctx->pc = 0x2F3748u;
    SET_GPR_U32(ctx, 31, 0x2F3750u);
    ctx->pc = 0x2F374Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3748u;
    // 0x2f374c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3748u, 0x2F3750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3750u;
label_2f3750:
    // 0x2f3750: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f3750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f3754:
    // 0x2f3754: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2f3754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f3758:
    // 0x2f3758: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3758u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f375c:
    // 0x2f375c: 0x34c601fb  ori         $a2, $a2, 0x1FB
    ctx->pc = 0x2f375cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)507);
label_2f3760:
    // 0x2f3760: 0xc0bb96a  jal         func_2EE5A8
label_2f3764:
    if (ctx->pc == 0x2F3764u) {
        ctx->pc = 0x2F3764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3760u;
        // 0x2f3764: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3768u;
        goto label_2f3768;
    }
    ctx->pc = 0x2F3760u;
    SET_GPR_U32(ctx, 31, 0x2F3768u);
    ctx->pc = 0x2F3764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3760u;
    // 0x2f3764: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3760u, 0x2F3768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3768u;
label_2f3768:
    // 0x2f3768: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f3768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f376c:
    // 0x2f376c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f376cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f3770:
    // 0x2f3770: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3770u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f3774:
    // 0x2f3774: 0x34c601e8  ori         $a2, $a2, 0x1E8
    ctx->pc = 0x2f3774u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)488);
label_2f3778:
    // 0x2f3778: 0xc0bb96a  jal         func_2EE5A8
label_2f377c:
    if (ctx->pc == 0x2F377Cu) {
        ctx->pc = 0x2F377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3778u;
        // 0x2f377c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3780u;
        goto label_2f3780;
    }
    ctx->pc = 0x2F3778u;
    SET_GPR_U32(ctx, 31, 0x2F3780u);
    ctx->pc = 0x2F377Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3778u;
    // 0x2f377c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3778u, 0x2F3780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3780u;
label_2f3780:
    // 0x2f3780: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f3780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3784:
    // 0x2f3784: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f3784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f3788:
    // 0x2f3788: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3788u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f378c:
    // 0x2f378c: 0x34c601e9  ori         $a2, $a2, 0x1E9
    ctx->pc = 0x2f378cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)489);
label_2f3790:
    // 0x2f3790: 0xc0bb96a  jal         func_2EE5A8
label_2f3794:
    if (ctx->pc == 0x2F3794u) {
        ctx->pc = 0x2F3794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3790u;
        // 0x2f3794: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3798u;
        goto label_2f3798;
    }
    ctx->pc = 0x2F3790u;
    SET_GPR_U32(ctx, 31, 0x2F3798u);
    ctx->pc = 0x2F3794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3790u;
    // 0x2f3794: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3790u, 0x2F3798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3798u;
label_2f3798:
    // 0x2f3798: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f3798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f379c:
    // 0x2f379c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f379cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f37a0:
    // 0x2f37a0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f37a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f37a4:
    // 0x2f37a4: 0x34c601ea  ori         $a2, $a2, 0x1EA
    ctx->pc = 0x2f37a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)490);
label_2f37a8:
    // 0x2f37a8: 0xc0bb96a  jal         func_2EE5A8
label_2f37ac:
    if (ctx->pc == 0x2F37ACu) {
        ctx->pc = 0x2F37ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F37A8u;
        // 0x2f37ac: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F37B0u;
        goto label_2f37b0;
    }
    ctx->pc = 0x2F37A8u;
    SET_GPR_U32(ctx, 31, 0x2F37B0u);
    ctx->pc = 0x2F37ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F37A8u;
    // 0x2f37ac: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F37A8u, 0x2F37B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F37B0u;
label_2f37b0:
    // 0x2f37b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2f37b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f37b4:
    // 0x2f37b4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f37b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f37b8:
    // 0x2f37b8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f37b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f37bc:
    // 0x2f37bc: 0x34c601eb  ori         $a2, $a2, 0x1EB
    ctx->pc = 0x2f37bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)491);
label_2f37c0:
    // 0x2f37c0: 0xc0bb96a  jal         func_2EE5A8
label_2f37c4:
    if (ctx->pc == 0x2F37C4u) {
        ctx->pc = 0x2F37C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F37C0u;
        // 0x2f37c4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F37C8u;
        goto label_2f37c8;
    }
    ctx->pc = 0x2F37C0u;
    SET_GPR_U32(ctx, 31, 0x2F37C8u);
    ctx->pc = 0x2F37C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F37C0u;
    // 0x2f37c4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F37C0u, 0x2F37C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F37C8u;
label_2f37c8:
    // 0x2f37c8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2f37c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f37cc:
    // 0x2f37cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f37ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f37d0:
    // 0x2f37d0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f37d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f37d4:
    // 0x2f37d4: 0x34c601ec  ori         $a2, $a2, 0x1EC
    ctx->pc = 0x2f37d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)492);
label_2f37d8:
    // 0x2f37d8: 0xc0bb96a  jal         func_2EE5A8
label_2f37dc:
    if (ctx->pc == 0x2F37DCu) {
        ctx->pc = 0x2F37DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F37D8u;
        // 0x2f37dc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F37E0u;
        goto label_2f37e0;
    }
    ctx->pc = 0x2F37D8u;
    SET_GPR_U32(ctx, 31, 0x2F37E0u);
    ctx->pc = 0x2F37DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F37D8u;
    // 0x2f37dc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F37D8u, 0x2F37E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F37E0u;
label_2f37e0:
    // 0x2f37e0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f37e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f37e4:
    // 0x2f37e4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f37e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f37e8:
    // 0x2f37e8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f37e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f37ec:
    // 0x2f37ec: 0x34c601ed  ori         $a2, $a2, 0x1ED
    ctx->pc = 0x2f37ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)493);
label_2f37f0:
    // 0x2f37f0: 0xc0bb96a  jal         func_2EE5A8
label_2f37f4:
    if (ctx->pc == 0x2F37F4u) {
        ctx->pc = 0x2F37F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F37F0u;
        // 0x2f37f4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F37F8u;
        goto label_2f37f8;
    }
    ctx->pc = 0x2F37F0u;
    SET_GPR_U32(ctx, 31, 0x2F37F8u);
    ctx->pc = 0x2F37F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F37F0u;
    // 0x2f37f4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F37F0u, 0x2F37F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F37F8u;
label_2f37f8:
    // 0x2f37f8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2f37f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f37fc:
    // 0x2f37fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f37fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f3800:
    // 0x2f3800: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3800u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f3804:
    // 0x2f3804: 0x34c601ee  ori         $a2, $a2, 0x1EE
    ctx->pc = 0x2f3804u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)494);
label_2f3808:
    // 0x2f3808: 0xc0bb96a  jal         func_2EE5A8
label_2f380c:
    if (ctx->pc == 0x2F380Cu) {
        ctx->pc = 0x2F380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3808u;
        // 0x2f380c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3810u;
        goto label_2f3810;
    }
    ctx->pc = 0x2F3808u;
    SET_GPR_U32(ctx, 31, 0x2F3810u);
    ctx->pc = 0x2F380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3808u;
    // 0x2f380c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3808u, 0x2F3810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3810u;
label_2f3810:
    // 0x2f3810: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2f3810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f3814:
    // 0x2f3814: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f3814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f3818:
    // 0x2f3818: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3818u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f381c:
    // 0x2f381c: 0x34c601ef  ori         $a2, $a2, 0x1EF
    ctx->pc = 0x2f381cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)495);
label_2f3820:
    // 0x2f3820: 0xc0bb96a  jal         func_2EE5A8
label_2f3824:
    if (ctx->pc == 0x2F3824u) {
        ctx->pc = 0x2F3824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3820u;
        // 0x2f3824: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3828u;
        goto label_2f3828;
    }
    ctx->pc = 0x2F3820u;
    SET_GPR_U32(ctx, 31, 0x2F3828u);
    ctx->pc = 0x2F3824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3820u;
    // 0x2f3824: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3820u, 0x2F3828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3828u;
label_2f3828:
    // 0x2f3828: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2f3828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2f382c:
    // 0x2f382c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f382cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f3830:
    // 0x2f3830: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3830u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f3834:
    // 0x2f3834: 0x34c60210  ori         $a2, $a2, 0x210
    ctx->pc = 0x2f3834u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)528);
label_2f3838:
    // 0x2f3838: 0xc0bb96a  jal         func_2EE5A8
label_2f383c:
    if (ctx->pc == 0x2F383Cu) {
        ctx->pc = 0x2F383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3838u;
        // 0x2f383c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3840u;
        goto label_2f3840;
    }
    ctx->pc = 0x2F3838u;
    SET_GPR_U32(ctx, 31, 0x2F3840u);
    ctx->pc = 0x2F383Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3838u;
    // 0x2f383c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3838u, 0x2F3840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3840u;
label_2f3840:
    // 0x2f3840: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2f3840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2f3844:
    // 0x2f3844: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f3844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f3848:
    // 0x2f3848: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3848u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f384c:
    // 0x2f384c: 0x34c601f1  ori         $a2, $a2, 0x1F1
    ctx->pc = 0x2f384cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)497);
label_2f3850:
    // 0x2f3850: 0xc0bb96a  jal         func_2EE5A8
label_2f3854:
    if (ctx->pc == 0x2F3854u) {
        ctx->pc = 0x2F3854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3850u;
        // 0x2f3854: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3858u;
        goto label_2f3858;
    }
    ctx->pc = 0x2F3850u;
    SET_GPR_U32(ctx, 31, 0x2F3858u);
    ctx->pc = 0x2F3854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3850u;
    // 0x2f3854: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3850u, 0x2F3858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3858u;
label_2f3858:
    // 0x2f3858: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f3858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f385c:
    // 0x2f385c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f385cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f3860:
    // 0x2f3860: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f3860u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f3864:
    // 0x2f3864: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2f3864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f3868:
    // 0x2f3868: 0xc0bb96a  jal         func_2EE5A8
label_2f386c:
    if (ctx->pc == 0x2F386Cu) {
        ctx->pc = 0x2F386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3868u;
        // 0x2f386c: 0x34c601f0  ori         $a2, $a2, 0x1F0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)496);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3870u;
        goto label_2f3870;
    }
    ctx->pc = 0x2F3868u;
    SET_GPR_U32(ctx, 31, 0x2F3870u);
    ctx->pc = 0x2F386Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3868u;
    // 0x2f386c: 0x34c601f0  ori         $a2, $a2, 0x1F0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)496);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F3868u, 0x2F3870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3870u;
label_2f3870:
    // 0x2f3870: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f3870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f3874:
    // 0x2f3874: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2f3874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f3878:
    // 0x2f3878: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2f3878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2f387c:
    // 0x2f387c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2f387cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2f3880:
    // 0x2f3880: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f3880u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f3884:
    // 0x2f3884: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f3884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f3888:
    // 0x2f3888: 0x60f809  jalr        $v1
label_2f388c:
    if (ctx->pc == 0x2F388Cu) {
        ctx->pc = 0x2F388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3888u;
        // 0x2f388c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3890u;
        goto label_2f3890;
    }
    ctx->pc = 0x2F3888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F3890u);
        ctx->pc = 0x2F388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3888u;
        // 0x2f388c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3888u, 0x2F3890u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F3890u;
label_2f3890:
    // 0x2f3890: 0x2605ffe8  addiu       $a1, $s0, -0x18
    ctx->pc = 0x2f3890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
label_2f3894:
    // 0x2f3894: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2f3894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f3898:
    // 0x2f3898: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2f3898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2f389c:
    // 0x2f389c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2f389cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2f38a0:
    // 0x2f38a0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f38a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f38a4:
    // 0x2f38a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f38a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f38a8:
    // 0x2f38a8: 0x60f809  jalr        $v1
label_2f38ac:
    if (ctx->pc == 0x2F38ACu) {
        ctx->pc = 0x2F38ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F38A8u;
        // 0x2f38ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F38B0u;
        goto label_2f38b0;
    }
    ctx->pc = 0x2F38A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F38B0u);
        ctx->pc = 0x2F38ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F38A8u;
        // 0x2f38ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F38A8u, 0x2F38B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F38B0u;
label_2f38b0:
    // 0x2f38b0: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x2f38b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_2f38b4:
    // 0x2f38b4: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x2f38b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f38b8:
    // 0x2f38b8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2f38b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2f38bc:
    // 0x2f38bc: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2f38bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2f38c0:
    // 0x2f38c0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f38c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f38c4:
    // 0x2f38c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f38c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f38c8:
    // 0x2f38c8: 0x60f809  jalr        $v1
label_2f38cc:
    if (ctx->pc == 0x2F38CCu) {
        ctx->pc = 0x2F38CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F38C8u;
        // 0x2f38cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F38D0u;
        goto label_2f38d0;
    }
    ctx->pc = 0x2F38C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F38D0u);
        ctx->pc = 0x2F38CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F38C8u;
        // 0x2f38cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F38C8u, 0x2F38D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F38D0u;
label_2f38d0:
    // 0x2f38d0: 0x2605fff4  addiu       $a1, $s0, -0xC
    ctx->pc = 0x2f38d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
label_2f38d4:
    // 0x2f38d4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2f38d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f38d8:
    // 0x2f38d8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2f38d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2f38dc:
    // 0x2f38dc: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2f38dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2f38e0:
    // 0x2f38e0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f38e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f38e4:
    // 0x2f38e4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f38e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f38e8:
    // 0x2f38e8: 0x60f809  jalr        $v1
label_2f38ec:
    if (ctx->pc == 0x2F38ECu) {
        ctx->pc = 0x2F38ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F38E8u;
        // 0x2f38ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F38F0u;
        goto label_2f38f0;
    }
    ctx->pc = 0x2F38E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F38F0u);
        ctx->pc = 0x2F38ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F38E8u;
        // 0x2f38ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F38E8u, 0x2F38F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F38F0u;
label_2f38f0:
    // 0x2f38f0: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x2f38f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_2f38f4:
    // 0x2f38f4: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x2f38f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f38f8:
    // 0x2f38f8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2f38f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2f38fc:
    // 0x2f38fc: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2f38fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2f3900:
    // 0x2f3900: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f3900u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f3904:
    // 0x2f3904: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f3904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f3908:
    // 0x2f3908: 0x60f809  jalr        $v1
label_2f390c:
    if (ctx->pc == 0x2F390Cu) {
        ctx->pc = 0x2F390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3908u;
        // 0x2f390c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3910u;
        goto label_2f3910;
    }
    ctx->pc = 0x2F3908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F3910u);
        ctx->pc = 0x2F390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3908u;
        // 0x2f390c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3908u, 0x2F3910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F3910u;
label_2f3910:
    // 0x2f3910: 0x2605003c  addiu       $a1, $s0, 0x3C
    ctx->pc = 0x2f3910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
label_2f3914:
    // 0x2f3914: 0x8fa6001c  lw          $a2, 0x1C($sp)
    ctx->pc = 0x2f3914u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f3918:
    // 0x2f3918: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2f3918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2f391c:
    // 0x2f391c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2f391cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2f3920:
    // 0x2f3920: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f3920u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f3924:
    // 0x2f3924: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f3924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f3928:
    // 0x2f3928: 0x60f809  jalr        $v1
label_2f392c:
    if (ctx->pc == 0x2F392Cu) {
        ctx->pc = 0x2F392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3928u;
        // 0x2f392c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3930u;
        goto label_2f3930;
    }
    ctx->pc = 0x2F3928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F3930u);
        ctx->pc = 0x2F392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3928u;
        // 0x2f392c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3928u, 0x2F3930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F3930u;
label_2f3930:
    // 0x2f3930: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x2f3930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_2f3934:
    // 0x2f3934: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x2f3934u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f3938:
    // 0x2f3938: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2f3938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2f393c:
    // 0x2f393c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2f393cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2f3940:
    // 0x2f3940: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f3940u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f3944:
    // 0x2f3944: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f3944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f3948:
    // 0x2f3948: 0x60f809  jalr        $v1
label_2f394c:
    if (ctx->pc == 0x2F394Cu) {
        ctx->pc = 0x2F394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3948u;
        // 0x2f394c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3950u;
        goto label_2f3950;
    }
    ctx->pc = 0x2F3948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F3950u);
        ctx->pc = 0x2F394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3948u;
        // 0x2f394c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3948u, 0x2F3950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F3950u;
label_2f3950:
    // 0x2f3950: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x2f3950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_2f3954:
    // 0x2f3954: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x2f3954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f3958:
    // 0x2f3958: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2f3958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2f395c:
    // 0x2f395c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2f395cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2f3960:
    // 0x2f3960: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f3960u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f3964:
    // 0x2f3964: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f3964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f3968:
    // 0x2f3968: 0x60f809  jalr        $v1
label_2f396c:
    if (ctx->pc == 0x2F396Cu) {
        ctx->pc = 0x2F396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3968u;
        // 0x2f396c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3970u;
        goto label_2f3970;
    }
    ctx->pc = 0x2F3968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F3970u);
        ctx->pc = 0x2F396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3968u;
        // 0x2f396c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3968u, 0x2F3970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F3970u;
label_2f3970:
    // 0x2f3970: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f3970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f3974:
    // 0x2f3974: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f3978:
    if (ctx->pc == 0x2F3978u) {
        ctx->pc = 0x2F3978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3974u;
        // 0x2f3978: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F397Cu;
        goto label_2f397c;
    }
    ctx->pc = 0x2F3974u;
    {
        const bool branch_taken_0x2f3974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3974) {
            ctx->pc = 0x2F3978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3974u;
            // 0x2f3978: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3990u;
            goto label_2f3990;
        }
    }
    ctx->pc = 0x2F397Cu;
label_2f397c:
    // 0x2f397c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f397cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f3980:
    // 0x2f3980: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f3980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f3984:
    // 0x2f3984: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f3988:
    if (ctx->pc == 0x2F3988u) {
        ctx->pc = 0x2F3988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3984u;
        // 0x2f3988: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F398Cu;
        goto label_2f398c;
    }
    ctx->pc = 0x2F3984u;
    {
        const bool branch_taken_0x2f3984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3984u;
        // 0x2f3988: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3984) {
            ctx->pc = 0x2F3998u;
            goto label_2f3998;
        }
    }
    ctx->pc = 0x2F398Cu;
label_2f398c:
    // 0x2f398c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f398cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2f3990:
    // 0x2f3990: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f3990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3994:
    // 0x2f3994: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f3994u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2f3998:
    // 0x2f3998: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2f3998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2f399c:
    // 0x2f399c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2f399cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_2f39a0:
    // 0x2f39a0: 0x24a5f5c8  addiu       $a1, $a1, -0xA38
    ctx->pc = 0x2f39a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964680));
label_2f39a4:
    // 0x2f39a4: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2f39a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2f39a8:
    // 0x2f39a8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f39a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f39ac:
    // 0x2f39ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f39acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f39b0:
    // 0x2f39b0: 0x60f809  jalr        $v1
label_2f39b4:
    if (ctx->pc == 0x2F39B4u) {
        ctx->pc = 0x2F39B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F39B0u;
        // 0x2f39b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F39B8u;
        goto label_2f39b8;
    }
    ctx->pc = 0x2F39B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F39B8u);
        ctx->pc = 0x2F39B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F39B0u;
        // 0x2f39b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F39B0u, 0x2F39B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F39B8u;
label_2f39b8:
    // 0x2f39b8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2f39b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f39bc:
    // 0x2f39bc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2f39bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2f39c0:
    // 0x2f39c0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f39c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f39c4:
    // 0x2f39c4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2f39c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2f39c8:
    // 0x2f39c8: 0x3e00008  jr          $ra
label_2f39cc:
    if (ctx->pc == 0x2F39CCu) {
        ctx->pc = 0x2F39CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F39C8u;
        // 0x2f39cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F39D0u;
        goto label_fallthrough_0x2f39c8;
    }
    ctx->pc = 0x2F39C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F39CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F39C8u;
        // 0x2f39cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F39C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f39c8:
    ctx->pc = 0x2F39D0u;
}
