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

// Function: sub_002A2B50
// Address: 0x2a2b50 - 0x2a3178
void sub_002A2B50_0x2a2b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2B50_0x2a2b50");
#endif

    switch (ctx->pc) {
        case 0x2a2b50u: goto label_2a2b50;
        case 0x2a2b54u: goto label_2a2b54;
        case 0x2a2b58u: goto label_2a2b58;
        case 0x2a2b5cu: goto label_2a2b5c;
        case 0x2a2b60u: goto label_2a2b60;
        case 0x2a2b64u: goto label_2a2b64;
        case 0x2a2b68u: goto label_2a2b68;
        case 0x2a2b6cu: goto label_2a2b6c;
        case 0x2a2b70u: goto label_2a2b70;
        case 0x2a2b74u: goto label_2a2b74;
        case 0x2a2b78u: goto label_2a2b78;
        case 0x2a2b7cu: goto label_2a2b7c;
        case 0x2a2b80u: goto label_2a2b80;
        case 0x2a2b84u: goto label_2a2b84;
        case 0x2a2b88u: goto label_2a2b88;
        case 0x2a2b8cu: goto label_2a2b8c;
        case 0x2a2b90u: goto label_2a2b90;
        case 0x2a2b94u: goto label_2a2b94;
        case 0x2a2b98u: goto label_2a2b98;
        case 0x2a2b9cu: goto label_2a2b9c;
        case 0x2a2ba0u: goto label_2a2ba0;
        case 0x2a2ba4u: goto label_2a2ba4;
        case 0x2a2ba8u: goto label_2a2ba8;
        case 0x2a2bacu: goto label_2a2bac;
        case 0x2a2bb0u: goto label_2a2bb0;
        case 0x2a2bb4u: goto label_2a2bb4;
        case 0x2a2bb8u: goto label_2a2bb8;
        case 0x2a2bbcu: goto label_2a2bbc;
        case 0x2a2bc0u: goto label_2a2bc0;
        case 0x2a2bc4u: goto label_2a2bc4;
        case 0x2a2bc8u: goto label_2a2bc8;
        case 0x2a2bccu: goto label_2a2bcc;
        case 0x2a2bd0u: goto label_2a2bd0;
        case 0x2a2bd4u: goto label_2a2bd4;
        case 0x2a2bd8u: goto label_2a2bd8;
        case 0x2a2bdcu: goto label_2a2bdc;
        case 0x2a2be0u: goto label_2a2be0;
        case 0x2a2be4u: goto label_2a2be4;
        case 0x2a2be8u: goto label_2a2be8;
        case 0x2a2becu: goto label_2a2bec;
        case 0x2a2bf0u: goto label_2a2bf0;
        case 0x2a2bf4u: goto label_2a2bf4;
        case 0x2a2bf8u: goto label_2a2bf8;
        case 0x2a2bfcu: goto label_2a2bfc;
        case 0x2a2c00u: goto label_2a2c00;
        case 0x2a2c04u: goto label_2a2c04;
        case 0x2a2c08u: goto label_2a2c08;
        case 0x2a2c0cu: goto label_2a2c0c;
        case 0x2a2c10u: goto label_2a2c10;
        case 0x2a2c14u: goto label_2a2c14;
        case 0x2a2c18u: goto label_2a2c18;
        case 0x2a2c1cu: goto label_2a2c1c;
        case 0x2a2c20u: goto label_2a2c20;
        case 0x2a2c24u: goto label_2a2c24;
        case 0x2a2c28u: goto label_2a2c28;
        case 0x2a2c2cu: goto label_2a2c2c;
        case 0x2a2c30u: goto label_2a2c30;
        case 0x2a2c34u: goto label_2a2c34;
        case 0x2a2c38u: goto label_2a2c38;
        case 0x2a2c3cu: goto label_2a2c3c;
        case 0x2a2c40u: goto label_2a2c40;
        case 0x2a2c44u: goto label_2a2c44;
        case 0x2a2c48u: goto label_2a2c48;
        case 0x2a2c4cu: goto label_2a2c4c;
        case 0x2a2c50u: goto label_2a2c50;
        case 0x2a2c54u: goto label_2a2c54;
        case 0x2a2c58u: goto label_2a2c58;
        case 0x2a2c5cu: goto label_2a2c5c;
        case 0x2a2c60u: goto label_2a2c60;
        case 0x2a2c64u: goto label_2a2c64;
        case 0x2a2c68u: goto label_2a2c68;
        case 0x2a2c6cu: goto label_2a2c6c;
        case 0x2a2c70u: goto label_2a2c70;
        case 0x2a2c74u: goto label_2a2c74;
        case 0x2a2c78u: goto label_2a2c78;
        case 0x2a2c7cu: goto label_2a2c7c;
        case 0x2a2c80u: goto label_2a2c80;
        case 0x2a2c84u: goto label_2a2c84;
        case 0x2a2c88u: goto label_2a2c88;
        case 0x2a2c8cu: goto label_2a2c8c;
        case 0x2a2c90u: goto label_2a2c90;
        case 0x2a2c94u: goto label_2a2c94;
        case 0x2a2c98u: goto label_2a2c98;
        case 0x2a2c9cu: goto label_2a2c9c;
        case 0x2a2ca0u: goto label_2a2ca0;
        case 0x2a2ca4u: goto label_2a2ca4;
        case 0x2a2ca8u: goto label_2a2ca8;
        case 0x2a2cacu: goto label_2a2cac;
        case 0x2a2cb0u: goto label_2a2cb0;
        case 0x2a2cb4u: goto label_2a2cb4;
        case 0x2a2cb8u: goto label_2a2cb8;
        case 0x2a2cbcu: goto label_2a2cbc;
        case 0x2a2cc0u: goto label_2a2cc0;
        case 0x2a2cc4u: goto label_2a2cc4;
        case 0x2a2cc8u: goto label_2a2cc8;
        case 0x2a2cccu: goto label_2a2ccc;
        case 0x2a2cd0u: goto label_2a2cd0;
        case 0x2a2cd4u: goto label_2a2cd4;
        case 0x2a2cd8u: goto label_2a2cd8;
        case 0x2a2cdcu: goto label_2a2cdc;
        case 0x2a2ce0u: goto label_2a2ce0;
        case 0x2a2ce4u: goto label_2a2ce4;
        case 0x2a2ce8u: goto label_2a2ce8;
        case 0x2a2cecu: goto label_2a2cec;
        case 0x2a2cf0u: goto label_2a2cf0;
        case 0x2a2cf4u: goto label_2a2cf4;
        case 0x2a2cf8u: goto label_2a2cf8;
        case 0x2a2cfcu: goto label_2a2cfc;
        case 0x2a2d00u: goto label_2a2d00;
        case 0x2a2d04u: goto label_2a2d04;
        case 0x2a2d08u: goto label_2a2d08;
        case 0x2a2d0cu: goto label_2a2d0c;
        case 0x2a2d10u: goto label_2a2d10;
        case 0x2a2d14u: goto label_2a2d14;
        case 0x2a2d18u: goto label_2a2d18;
        case 0x2a2d1cu: goto label_2a2d1c;
        case 0x2a2d20u: goto label_2a2d20;
        case 0x2a2d24u: goto label_2a2d24;
        case 0x2a2d28u: goto label_2a2d28;
        case 0x2a2d2cu: goto label_2a2d2c;
        case 0x2a2d30u: goto label_2a2d30;
        case 0x2a2d34u: goto label_2a2d34;
        case 0x2a2d38u: goto label_2a2d38;
        case 0x2a2d3cu: goto label_2a2d3c;
        case 0x2a2d40u: goto label_2a2d40;
        case 0x2a2d44u: goto label_2a2d44;
        case 0x2a2d48u: goto label_2a2d48;
        case 0x2a2d4cu: goto label_2a2d4c;
        case 0x2a2d50u: goto label_2a2d50;
        case 0x2a2d54u: goto label_2a2d54;
        case 0x2a2d58u: goto label_2a2d58;
        case 0x2a2d5cu: goto label_2a2d5c;
        case 0x2a2d60u: goto label_2a2d60;
        case 0x2a2d64u: goto label_2a2d64;
        case 0x2a2d68u: goto label_2a2d68;
        case 0x2a2d6cu: goto label_2a2d6c;
        case 0x2a2d70u: goto label_2a2d70;
        case 0x2a2d74u: goto label_2a2d74;
        case 0x2a2d78u: goto label_2a2d78;
        case 0x2a2d7cu: goto label_2a2d7c;
        case 0x2a2d80u: goto label_2a2d80;
        case 0x2a2d84u: goto label_2a2d84;
        case 0x2a2d88u: goto label_2a2d88;
        case 0x2a2d8cu: goto label_2a2d8c;
        case 0x2a2d90u: goto label_2a2d90;
        case 0x2a2d94u: goto label_2a2d94;
        case 0x2a2d98u: goto label_2a2d98;
        case 0x2a2d9cu: goto label_2a2d9c;
        case 0x2a2da0u: goto label_2a2da0;
        case 0x2a2da4u: goto label_2a2da4;
        case 0x2a2da8u: goto label_2a2da8;
        case 0x2a2dacu: goto label_2a2dac;
        case 0x2a2db0u: goto label_2a2db0;
        case 0x2a2db4u: goto label_2a2db4;
        case 0x2a2db8u: goto label_2a2db8;
        case 0x2a2dbcu: goto label_2a2dbc;
        case 0x2a2dc0u: goto label_2a2dc0;
        case 0x2a2dc4u: goto label_2a2dc4;
        case 0x2a2dc8u: goto label_2a2dc8;
        case 0x2a2dccu: goto label_2a2dcc;
        case 0x2a2dd0u: goto label_2a2dd0;
        case 0x2a2dd4u: goto label_2a2dd4;
        case 0x2a2dd8u: goto label_2a2dd8;
        case 0x2a2ddcu: goto label_2a2ddc;
        case 0x2a2de0u: goto label_2a2de0;
        case 0x2a2de4u: goto label_2a2de4;
        case 0x2a2de8u: goto label_2a2de8;
        case 0x2a2decu: goto label_2a2dec;
        case 0x2a2df0u: goto label_2a2df0;
        case 0x2a2df4u: goto label_2a2df4;
        case 0x2a2df8u: goto label_2a2df8;
        case 0x2a2dfcu: goto label_2a2dfc;
        case 0x2a2e00u: goto label_2a2e00;
        case 0x2a2e04u: goto label_2a2e04;
        case 0x2a2e08u: goto label_2a2e08;
        case 0x2a2e0cu: goto label_2a2e0c;
        case 0x2a2e10u: goto label_2a2e10;
        case 0x2a2e14u: goto label_2a2e14;
        case 0x2a2e18u: goto label_2a2e18;
        case 0x2a2e1cu: goto label_2a2e1c;
        case 0x2a2e20u: goto label_2a2e20;
        case 0x2a2e24u: goto label_2a2e24;
        case 0x2a2e28u: goto label_2a2e28;
        case 0x2a2e2cu: goto label_2a2e2c;
        case 0x2a2e30u: goto label_2a2e30;
        case 0x2a2e34u: goto label_2a2e34;
        case 0x2a2e38u: goto label_2a2e38;
        case 0x2a2e3cu: goto label_2a2e3c;
        case 0x2a2e40u: goto label_2a2e40;
        case 0x2a2e44u: goto label_2a2e44;
        case 0x2a2e48u: goto label_2a2e48;
        case 0x2a2e4cu: goto label_2a2e4c;
        case 0x2a2e50u: goto label_2a2e50;
        case 0x2a2e54u: goto label_2a2e54;
        case 0x2a2e58u: goto label_2a2e58;
        case 0x2a2e5cu: goto label_2a2e5c;
        case 0x2a2e60u: goto label_2a2e60;
        case 0x2a2e64u: goto label_2a2e64;
        case 0x2a2e68u: goto label_2a2e68;
        case 0x2a2e6cu: goto label_2a2e6c;
        case 0x2a2e70u: goto label_2a2e70;
        case 0x2a2e74u: goto label_2a2e74;
        case 0x2a2e78u: goto label_2a2e78;
        case 0x2a2e7cu: goto label_2a2e7c;
        case 0x2a2e80u: goto label_2a2e80;
        case 0x2a2e84u: goto label_2a2e84;
        case 0x2a2e88u: goto label_2a2e88;
        case 0x2a2e8cu: goto label_2a2e8c;
        case 0x2a2e90u: goto label_2a2e90;
        case 0x2a2e94u: goto label_2a2e94;
        case 0x2a2e98u: goto label_2a2e98;
        case 0x2a2e9cu: goto label_2a2e9c;
        case 0x2a2ea0u: goto label_2a2ea0;
        case 0x2a2ea4u: goto label_2a2ea4;
        case 0x2a2ea8u: goto label_2a2ea8;
        case 0x2a2eacu: goto label_2a2eac;
        case 0x2a2eb0u: goto label_2a2eb0;
        case 0x2a2eb4u: goto label_2a2eb4;
        case 0x2a2eb8u: goto label_2a2eb8;
        case 0x2a2ebcu: goto label_2a2ebc;
        case 0x2a2ec0u: goto label_2a2ec0;
        case 0x2a2ec4u: goto label_2a2ec4;
        case 0x2a2ec8u: goto label_2a2ec8;
        case 0x2a2eccu: goto label_2a2ecc;
        case 0x2a2ed0u: goto label_2a2ed0;
        case 0x2a2ed4u: goto label_2a2ed4;
        case 0x2a2ed8u: goto label_2a2ed8;
        case 0x2a2edcu: goto label_2a2edc;
        case 0x2a2ee0u: goto label_2a2ee0;
        case 0x2a2ee4u: goto label_2a2ee4;
        case 0x2a2ee8u: goto label_2a2ee8;
        case 0x2a2eecu: goto label_2a2eec;
        case 0x2a2ef0u: goto label_2a2ef0;
        case 0x2a2ef4u: goto label_2a2ef4;
        case 0x2a2ef8u: goto label_2a2ef8;
        case 0x2a2efcu: goto label_2a2efc;
        case 0x2a2f00u: goto label_2a2f00;
        case 0x2a2f04u: goto label_2a2f04;
        case 0x2a2f08u: goto label_2a2f08;
        case 0x2a2f0cu: goto label_2a2f0c;
        case 0x2a2f10u: goto label_2a2f10;
        case 0x2a2f14u: goto label_2a2f14;
        case 0x2a2f18u: goto label_2a2f18;
        case 0x2a2f1cu: goto label_2a2f1c;
        case 0x2a2f20u: goto label_2a2f20;
        case 0x2a2f24u: goto label_2a2f24;
        case 0x2a2f28u: goto label_2a2f28;
        case 0x2a2f2cu: goto label_2a2f2c;
        case 0x2a2f30u: goto label_2a2f30;
        case 0x2a2f34u: goto label_2a2f34;
        case 0x2a2f38u: goto label_2a2f38;
        case 0x2a2f3cu: goto label_2a2f3c;
        case 0x2a2f40u: goto label_2a2f40;
        case 0x2a2f44u: goto label_2a2f44;
        case 0x2a2f48u: goto label_2a2f48;
        case 0x2a2f4cu: goto label_2a2f4c;
        case 0x2a2f50u: goto label_2a2f50;
        case 0x2a2f54u: goto label_2a2f54;
        case 0x2a2f58u: goto label_2a2f58;
        case 0x2a2f5cu: goto label_2a2f5c;
        case 0x2a2f60u: goto label_2a2f60;
        case 0x2a2f64u: goto label_2a2f64;
        case 0x2a2f68u: goto label_2a2f68;
        case 0x2a2f6cu: goto label_2a2f6c;
        case 0x2a2f70u: goto label_2a2f70;
        case 0x2a2f74u: goto label_2a2f74;
        case 0x2a2f78u: goto label_2a2f78;
        case 0x2a2f7cu: goto label_2a2f7c;
        case 0x2a2f80u: goto label_2a2f80;
        case 0x2a2f84u: goto label_2a2f84;
        case 0x2a2f88u: goto label_2a2f88;
        case 0x2a2f8cu: goto label_2a2f8c;
        case 0x2a2f90u: goto label_2a2f90;
        case 0x2a2f94u: goto label_2a2f94;
        case 0x2a2f98u: goto label_2a2f98;
        case 0x2a2f9cu: goto label_2a2f9c;
        case 0x2a2fa0u: goto label_2a2fa0;
        case 0x2a2fa4u: goto label_2a2fa4;
        case 0x2a2fa8u: goto label_2a2fa8;
        case 0x2a2facu: goto label_2a2fac;
        case 0x2a2fb0u: goto label_2a2fb0;
        case 0x2a2fb4u: goto label_2a2fb4;
        case 0x2a2fb8u: goto label_2a2fb8;
        case 0x2a2fbcu: goto label_2a2fbc;
        case 0x2a2fc0u: goto label_2a2fc0;
        case 0x2a2fc4u: goto label_2a2fc4;
        case 0x2a2fc8u: goto label_2a2fc8;
        case 0x2a2fccu: goto label_2a2fcc;
        case 0x2a2fd0u: goto label_2a2fd0;
        case 0x2a2fd4u: goto label_2a2fd4;
        case 0x2a2fd8u: goto label_2a2fd8;
        case 0x2a2fdcu: goto label_2a2fdc;
        case 0x2a2fe0u: goto label_2a2fe0;
        case 0x2a2fe4u: goto label_2a2fe4;
        case 0x2a2fe8u: goto label_2a2fe8;
        case 0x2a2fecu: goto label_2a2fec;
        case 0x2a2ff0u: goto label_2a2ff0;
        case 0x2a2ff4u: goto label_2a2ff4;
        case 0x2a2ff8u: goto label_2a2ff8;
        case 0x2a2ffcu: goto label_2a2ffc;
        case 0x2a3000u: goto label_2a3000;
        case 0x2a3004u: goto label_2a3004;
        case 0x2a3008u: goto label_2a3008;
        case 0x2a300cu: goto label_2a300c;
        case 0x2a3010u: goto label_2a3010;
        case 0x2a3014u: goto label_2a3014;
        case 0x2a3018u: goto label_2a3018;
        case 0x2a301cu: goto label_2a301c;
        case 0x2a3020u: goto label_2a3020;
        case 0x2a3024u: goto label_2a3024;
        case 0x2a3028u: goto label_2a3028;
        case 0x2a302cu: goto label_2a302c;
        case 0x2a3030u: goto label_2a3030;
        case 0x2a3034u: goto label_2a3034;
        case 0x2a3038u: goto label_2a3038;
        case 0x2a303cu: goto label_2a303c;
        case 0x2a3040u: goto label_2a3040;
        case 0x2a3044u: goto label_2a3044;
        case 0x2a3048u: goto label_2a3048;
        case 0x2a304cu: goto label_2a304c;
        case 0x2a3050u: goto label_2a3050;
        case 0x2a3054u: goto label_2a3054;
        case 0x2a3058u: goto label_2a3058;
        case 0x2a305cu: goto label_2a305c;
        case 0x2a3060u: goto label_2a3060;
        case 0x2a3064u: goto label_2a3064;
        case 0x2a3068u: goto label_2a3068;
        case 0x2a306cu: goto label_2a306c;
        case 0x2a3070u: goto label_2a3070;
        case 0x2a3074u: goto label_2a3074;
        case 0x2a3078u: goto label_2a3078;
        case 0x2a307cu: goto label_2a307c;
        case 0x2a3080u: goto label_2a3080;
        case 0x2a3084u: goto label_2a3084;
        case 0x2a3088u: goto label_2a3088;
        case 0x2a308cu: goto label_2a308c;
        case 0x2a3090u: goto label_2a3090;
        case 0x2a3094u: goto label_2a3094;
        case 0x2a3098u: goto label_2a3098;
        case 0x2a309cu: goto label_2a309c;
        case 0x2a30a0u: goto label_2a30a0;
        case 0x2a30a4u: goto label_2a30a4;
        case 0x2a30a8u: goto label_2a30a8;
        case 0x2a30acu: goto label_2a30ac;
        case 0x2a30b0u: goto label_2a30b0;
        case 0x2a30b4u: goto label_2a30b4;
        case 0x2a30b8u: goto label_2a30b8;
        case 0x2a30bcu: goto label_2a30bc;
        case 0x2a30c0u: goto label_2a30c0;
        case 0x2a30c4u: goto label_2a30c4;
        case 0x2a30c8u: goto label_2a30c8;
        case 0x2a30ccu: goto label_2a30cc;
        case 0x2a30d0u: goto label_2a30d0;
        case 0x2a30d4u: goto label_2a30d4;
        case 0x2a30d8u: goto label_2a30d8;
        case 0x2a30dcu: goto label_2a30dc;
        case 0x2a30e0u: goto label_2a30e0;
        case 0x2a30e4u: goto label_2a30e4;
        case 0x2a30e8u: goto label_2a30e8;
        case 0x2a30ecu: goto label_2a30ec;
        case 0x2a30f0u: goto label_2a30f0;
        case 0x2a30f4u: goto label_2a30f4;
        case 0x2a30f8u: goto label_2a30f8;
        case 0x2a30fcu: goto label_2a30fc;
        case 0x2a3100u: goto label_2a3100;
        case 0x2a3104u: goto label_2a3104;
        case 0x2a3108u: goto label_2a3108;
        case 0x2a310cu: goto label_2a310c;
        case 0x2a3110u: goto label_2a3110;
        case 0x2a3114u: goto label_2a3114;
        case 0x2a3118u: goto label_2a3118;
        case 0x2a311cu: goto label_2a311c;
        case 0x2a3120u: goto label_2a3120;
        case 0x2a3124u: goto label_2a3124;
        case 0x2a3128u: goto label_2a3128;
        case 0x2a312cu: goto label_2a312c;
        case 0x2a3130u: goto label_2a3130;
        case 0x2a3134u: goto label_2a3134;
        case 0x2a3138u: goto label_2a3138;
        case 0x2a313cu: goto label_2a313c;
        case 0x2a3140u: goto label_2a3140;
        case 0x2a3144u: goto label_2a3144;
        case 0x2a3148u: goto label_2a3148;
        case 0x2a314cu: goto label_2a314c;
        case 0x2a3150u: goto label_2a3150;
        case 0x2a3154u: goto label_2a3154;
        case 0x2a3158u: goto label_2a3158;
        case 0x2a315cu: goto label_2a315c;
        case 0x2a3160u: goto label_2a3160;
        case 0x2a3164u: goto label_2a3164;
        case 0x2a3168u: goto label_2a3168;
        case 0x2a316cu: goto label_2a316c;
        case 0x2a3170u: goto label_2a3170;
        case 0x2a3174u: goto label_2a3174;
        default: break;
    }

    ctx->pc = 0x2a2b50u;

label_2a2b50:
    // 0x2a2b50: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2a2b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2a2b54:
    // 0x2a2b54: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2a2b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_2a2b58:
    // 0x2a2b58: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a2b58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a2b5c:
    // 0x2a2b5c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2a2b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_2a2b60:
    // 0x2a2b60: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2a2b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_2a2b64:
    // 0x2a2b64: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x2a2b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_2a2b68:
    // 0x2a2b68: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2a2b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_2a2b6c:
    // 0x2a2b6c: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x2a2b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
label_2a2b70:
    // 0x2a2b70: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2a2b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_2a2b74:
    // 0x2a2b74: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x2a2b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
label_2a2b78:
    // 0x2a2b78: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2a2b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_2a2b7c:
    // 0x2a2b7c: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x2a2b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
label_2a2b80:
    // 0x2a2b80: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x2a2b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_2a2b84:
    // 0x2a2b84: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2a2b84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2a2b88:
    // 0x2a2b88: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
label_2a2b8c:
    if (ctx->pc == 0x2A2B8Cu) {
        ctx->pc = 0x2A2B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2B88u;
        // 0x2a2b8c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2B90u;
        goto label_2a2b90;
    }
    ctx->pc = 0x2A2B88u;
    {
        const bool branch_taken_0x2a2b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2B88u;
        // 0x2a2b8c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2b88) {
            ctx->pc = 0x2A2DC0u;
            goto label_2a2dc0;
        }
    }
    ctx->pc = 0x2A2B90u;
label_2a2b90:
    // 0x2a2b90: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2a2b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_2a2b94:
    // 0x2a2b94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a2b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a2b98:
    // 0x2a2b98: 0x8c63d250  lw          $v1, -0x2DB0($v1)
    ctx->pc = 0x2a2b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955600)));
label_2a2b9c:
    // 0x2a2b9c: 0x600008  jr          $v1
label_2a2ba0:
    if (ctx->pc == 0x2A2BA0u) {
        ctx->pc = 0x2A2BA4u;
        goto label_2a2ba4;
    }
    ctx->pc = 0x2A2B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A2BA8u: goto label_2a2ba8;
            case 0x2A2BF8u: goto label_2a2bf8;
            case 0x2A2D18u: goto label_2a2d18;
            case 0x2A2DC0u: goto label_2a2dc0;
            case 0x2A3108u: goto label_2a3108;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2B9Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A2BA4u;
label_2a2ba4:
    // 0x2a2ba4: 0x0  nop
    ctx->pc = 0x2a2ba4u;
    // NOP
label_2a2ba8:
    // 0x2a2ba8: 0xc089622  jal         func_225888
label_2a2bac:
    if (ctx->pc == 0x2A2BACu) {
        ctx->pc = 0x2A2BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2BA8u;
        // 0x2a2bac: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2BB0u;
        goto label_2a2bb0;
    }
    ctx->pc = 0x2A2BA8u;
    SET_GPR_U32(ctx, 31, 0x2A2BB0u);
    ctx->pc = 0x2A2BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2BA8u;
    // 0x2a2bac: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x2A2BA8u, 0x2A2BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2BB0u;
label_2a2bb0:
    // 0x2a2bb0: 0x10400164  beqz        $v0, . + 4 + (0x164 << 2)
label_2a2bb4:
    if (ctx->pc == 0x2A2BB4u) {
        ctx->pc = 0x2A2BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2BB0u;
        // 0x2a2bb4: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2BB8u;
        goto label_2a2bb8;
    }
    ctx->pc = 0x2A2BB0u;
    {
        const bool branch_taken_0x2a2bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2BB0u;
        // 0x2a2bb4: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2bb0) {
            ctx->pc = 0x2A3144u;
            goto label_2a3144;
        }
    }
    ctx->pc = 0x2A2BB8u;
label_2a2bb8:
    // 0x2a2bb8: 0xc0404b8  jal         func_1012E0
label_2a2bbc:
    if (ctx->pc == 0x2A2BBCu) {
        ctx->pc = 0x2A2BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2BB8u;
        // 0x2a2bbc: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2BC0u;
        goto label_2a2bc0;
    }
    ctx->pc = 0x2A2BB8u;
    SET_GPR_U32(ctx, 31, 0x2A2BC0u);
    ctx->pc = 0x2A2BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2BB8u;
    // 0x2a2bbc: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2A2BB8u, 0x2A2BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2BC0u;
label_2a2bc0:
    // 0x2a2bc0: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x2a2bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_2a2bc4:
    // 0x2a2bc4: 0xc0404b8  jal         func_1012E0
label_2a2bc8:
    if (ctx->pc == 0x2A2BC8u) {
        ctx->pc = 0x2A2BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2BC4u;
        // 0x2a2bc8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2BCCu;
        goto label_2a2bcc;
    }
    ctx->pc = 0x2A2BC4u;
    SET_GPR_U32(ctx, 31, 0x2A2BCCu);
    ctx->pc = 0x2A2BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2BC4u;
    // 0x2a2bc8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2A2BC4u, 0x2A2BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2BCCu;
label_2a2bcc:
    // 0x2a2bcc: 0x3c094000  lui         $t1, 0x4000
    ctx->pc = 0x2a2bccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
label_2a2bd0:
    // 0x2a2bd0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a2bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2bd4:
    // 0x2a2bd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a2bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a2bd8:
    // 0x2a2bd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a2bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a2bdc:
    // 0x2a2bdc: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2a2bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_2a2be0:
    // 0x2a2be0: 0x240800f2  addiu       $t0, $zero, 0xF2
    ctx->pc = 0x2a2be0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
label_2a2be4:
    // 0x2a2be4: 0xc0a5adc  jal         func_296B70
label_2a2be8:
    if (ctx->pc == 0x2A2BE8u) {
        ctx->pc = 0x2A2BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2BE4u;
        // 0x2a2be8: 0x35290800  ori         $t1, $t1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2BECu;
        goto label_2a2bec;
    }
    ctx->pc = 0x2A2BE4u;
    SET_GPR_U32(ctx, 31, 0x2A2BECu);
    ctx->pc = 0x2A2BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2BE4u;
    // 0x2a2be8: 0x35290800  ori         $t1, $t1, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x296B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B70u, 0x2A2BE4u, 0x2A2BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2BECu;
label_2a2bec:
    // 0x2a2bec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a2becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a2bf0:
    // 0x2a2bf0: 0x10000153  b           . + 4 + (0x153 << 2)
label_2a2bf4:
    if (ctx->pc == 0x2A2BF4u) {
        ctx->pc = 0x2A2BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2BF0u;
        // 0x2a2bf4: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2BF8u;
        goto label_2a2bf8;
    }
    ctx->pc = 0x2A2BF0u;
    {
        const bool branch_taken_0x2a2bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2BF0u;
        // 0x2a2bf4: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2bf0) {
            ctx->pc = 0x2A3140u;
            goto label_2a3140;
        }
    }
    ctx->pc = 0x2A2BF8u;
label_2a2bf8:
    // 0x2a2bf8: 0xc0a5b2a  jal         func_296CA8
label_2a2bfc:
    if (ctx->pc == 0x2A2BFCu) {
        ctx->pc = 0x2A2BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2BF8u;
        // 0x2a2bfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2C00u;
        goto label_2a2c00;
    }
    ctx->pc = 0x2A2BF8u;
    SET_GPR_U32(ctx, 31, 0x2A2C00u);
    ctx->pc = 0x2A2BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2BF8u;
    // 0x2a2bfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x2A2BF8u, 0x2A2C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2C00u;
label_2a2c00:
    // 0x2a2c00: 0x8e42013c  lw          $v0, 0x13C($s2)
    ctx->pc = 0x2a2c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
label_2a2c04:
    // 0x2a2c04: 0x1040014e  beqz        $v0, . + 4 + (0x14E << 2)
label_2a2c08:
    if (ctx->pc == 0x2A2C08u) {
        ctx->pc = 0x2A2C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C04u;
        // 0x2a2c08: 0x2650016c  addiu       $s0, $s2, 0x16C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 364));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2C0Cu;
        goto label_2a2c0c;
    }
    ctx->pc = 0x2A2C04u;
    {
        const bool branch_taken_0x2a2c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C04u;
        // 0x2a2c08: 0x2650016c  addiu       $s0, $s2, 0x16C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 364));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2c04) {
            ctx->pc = 0x2A3140u;
            goto label_2a3140;
        }
    }
    ctx->pc = 0x2A2C0Cu;
label_2a2c0c:
    // 0x2a2c0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a2c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a2c10:
    // 0x2a2c10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a2c14:
    if (ctx->pc == 0x2A2C14u) {
        ctx->pc = 0x2A2C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C10u;
        // 0x2a2c14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2C18u;
        goto label_2a2c18;
    }
    ctx->pc = 0x2A2C10u;
    {
        const bool branch_taken_0x2a2c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C10u;
        // 0x2a2c14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2c10) {
            ctx->pc = 0x2A2C28u;
            goto label_2a2c28;
        }
    }
    ctx->pc = 0x2A2C18u;
label_2a2c18:
    // 0x2a2c18: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2a2c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2a2c1c:
    // 0x2a2c1c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a2c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2a2c20:
    // 0x2a2c20: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_2a2c24:
    if (ctx->pc == 0x2A2C24u) {
        ctx->pc = 0x2A2C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C20u;
        // 0x2a2c24: 0x8c82013c  lw          $v0, 0x13C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2C28u;
        goto label_2a2c28;
    }
    ctx->pc = 0x2A2C20u;
    {
        const bool branch_taken_0x2a2c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a2c20) {
            ctx->pc = 0x2A2C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2C20u;
            // 0x2a2c24: 0x8c82013c  lw          $v0, 0x13C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2C38u;
            goto label_2a2c38;
        }
    }
    ctx->pc = 0x2A2C28u;
label_2a2c28:
    // 0x2a2c28: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2a2c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2a2c2c:
    // 0x2a2c2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a2c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2c30:
    // 0x2a2c30: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2a2c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2a2c34:
    // 0x2a2c34: 0x8c82013c  lw          $v0, 0x13C($a0)
    ctx->pc = 0x2a2c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
label_2a2c38:
    // 0x2a2c38: 0x10400141  beqz        $v0, . + 4 + (0x141 << 2)
label_2a2c3c:
    if (ctx->pc == 0x2A2C3Cu) {
        ctx->pc = 0x2A2C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C38u;
        // 0x2a2c3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2C40u;
        goto label_2a2c40;
    }
    ctx->pc = 0x2A2C38u;
    {
        const bool branch_taken_0x2a2c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C38u;
        // 0x2a2c3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2c38) {
            ctx->pc = 0x2A3140u;
            goto label_2a3140;
        }
    }
    ctx->pc = 0x2A2C40u;
label_2a2c40:
    // 0x2a2c40: 0xc0b7a62  jal         func_2DE988
label_2a2c44:
    if (ctx->pc == 0x2A2C44u) {
        ctx->pc = 0x2A2C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C40u;
        // 0x2a2c44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2C48u;
        goto label_2a2c48;
    }
    ctx->pc = 0x2A2C40u;
    SET_GPR_U32(ctx, 31, 0x2A2C48u);
    ctx->pc = 0x2A2C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2C40u;
    // 0x2a2c44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2A2C40u, 0x2A2C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2C48u;
label_2a2c48:
    // 0x2a2c48: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2a2c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a2c4c:
    // 0x2a2c4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a2c4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2c50:
    // 0x2a2c50: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_2a2c54:
    if (ctx->pc == 0x2A2C54u) {
        ctx->pc = 0x2A2C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C50u;
        // 0x2a2c54: 0x26530174  addiu       $s3, $s2, 0x174 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 372));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2C58u;
        goto label_2a2c58;
    }
    ctx->pc = 0x2A2C50u;
    {
        const bool branch_taken_0x2a2c50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C50u;
        // 0x2a2c54: 0x26530174  addiu       $s3, $s2, 0x174 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2c50) {
            ctx->pc = 0x2A2C68u;
            goto label_2a2c68;
        }
    }
    ctx->pc = 0x2A2C58u;
label_2a2c58:
    // 0x2a2c58: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2a2c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2a2c5c:
    // 0x2a2c5c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a2c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2a2c60:
    // 0x2a2c60: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2a2c64:
    if (ctx->pc == 0x2A2C64u) {
        ctx->pc = 0x2A2C68u;
        goto label_2a2c68;
    }
    ctx->pc = 0x2A2C60u;
    {
        const bool branch_taken_0x2a2c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a2c60) {
            ctx->pc = 0x2A2C74u;
            goto label_2a2c74;
        }
    }
    ctx->pc = 0x2A2C68u;
label_2a2c68:
    // 0x2a2c68: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2a2c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2a2c6c:
    // 0x2a2c6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a2c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2c70:
    // 0x2a2c70: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2a2c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2a2c74:
    // 0x2a2c74: 0xc0bd238  jal         func_2F48E0
label_2a2c78:
    if (ctx->pc == 0x2A2C78u) {
        ctx->pc = 0x2A2C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C74u;
        // 0x2a2c78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2C7Cu;
        goto label_2a2c7c;
    }
    ctx->pc = 0x2A2C74u;
    SET_GPR_U32(ctx, 31, 0x2A2C7Cu);
    ctx->pc = 0x2A2C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2C74u;
    // 0x2a2c78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F48E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F48E0u, 0x2A2C74u, 0x2A2C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2C7Cu;
label_2a2c7c:
    // 0x2a2c7c: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x2a2c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
label_2a2c80:
    // 0x2a2c80: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a2c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2a2c84:
    // 0x2a2c84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a2c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a2c88:
    // 0x2a2c88: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2a2c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2a2c8c:
    // 0x2a2c8c: 0x24a5d1f0  addiu       $a1, $a1, -0x2E10
    ctx->pc = 0x2a2c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955504));
label_2a2c90:
    // 0x2a2c90: 0xc0a5b78  jal         func_296DE0
label_2a2c94:
    if (ctx->pc == 0x2A2C94u) {
        ctx->pc = 0x2A2C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C90u;
        // 0x2a2c94: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2C98u;
        goto label_2a2c98;
    }
    ctx->pc = 0x2A2C90u;
    SET_GPR_U32(ctx, 31, 0x2A2C98u);
    ctx->pc = 0x2A2C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2C90u;
    // 0x2a2c94: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2A2C90u, 0x2A2C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2C98u;
label_2a2c98:
    // 0x2a2c98: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2a2c9c:
    if (ctx->pc == 0x2A2C9Cu) {
        ctx->pc = 0x2A2C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C98u;
        // 0x2a2c9c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2CA0u;
        goto label_2a2ca0;
    }
    ctx->pc = 0x2A2C98u;
    {
        const bool branch_taken_0x2a2c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C98u;
        // 0x2a2c9c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2c98) {
            ctx->pc = 0x2A2CBCu;
            goto label_2a2cbc;
        }
    }
    ctx->pc = 0x2A2CA0u;
label_2a2ca0:
    // 0x2a2ca0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2a2ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2a2ca4:
    // 0x2a2ca4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2a2ca8:
    if (ctx->pc == 0x2A2CA8u) {
        ctx->pc = 0x2A2CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2CA4u;
        // 0x2a2ca8: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2CACu;
        goto label_2a2cac;
    }
    ctx->pc = 0x2A2CA4u;
    {
        const bool branch_taken_0x2a2ca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2CA4u;
        // 0x2a2ca8: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2ca4) {
            ctx->pc = 0x2A2CBCu;
            goto label_2a2cbc;
        }
    }
    ctx->pc = 0x2A2CACu;
label_2a2cac:
    // 0x2a2cac: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a2cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2a2cb0:
    // 0x2a2cb0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a2cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2a2cb4:
    // 0x2a2cb4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a2cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a2cb8:
    // 0x2a2cb8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a2cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2a2cbc:
    // 0x2a2cbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a2cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a2cc0:
    // 0x2a2cc0: 0x24a5d208  addiu       $a1, $a1, -0x2DF8
    ctx->pc = 0x2a2cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955528));
label_2a2cc4:
    // 0x2a2cc4: 0xc0a5b64  jal         func_296D90
label_2a2cc8:
    if (ctx->pc == 0x2A2CC8u) {
        ctx->pc = 0x2A2CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2CC4u;
        // 0x2a2cc8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2CCCu;
        goto label_2a2ccc;
    }
    ctx->pc = 0x2A2CC4u;
    SET_GPR_U32(ctx, 31, 0x2A2CCCu);
    ctx->pc = 0x2A2CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2CC4u;
    // 0x2a2cc8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A2CC4u, 0x2A2CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2CCCu;
label_2a2ccc:
    // 0x2a2ccc: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x2a2cccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
label_2a2cd0:
    // 0x2a2cd0: 0xae420154  sw          $v0, 0x154($s2)
    ctx->pc = 0x2a2cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 2));
label_2a2cd4:
    // 0x2a2cd4: 0x26530008  addiu       $s3, $s2, 0x8
    ctx->pc = 0x2a2cd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_2a2cd8:
    // 0x2a2cd8: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x2a2cd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a2cdc:
    // 0x2a2cdc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a2cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a2ce0:
    // 0x2a2ce0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a2ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a2ce4:
    // 0x2a2ce4: 0xc04a368  jal         func_128DA0
label_2a2ce8:
    if (ctx->pc == 0x2A2CE8u) {
        ctx->pc = 0x2A2CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2CE4u;
        // 0x2a2ce8: 0x2685d220  addiu       $a1, $s4, -0x2DE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294955552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2CECu;
        goto label_2a2cec;
    }
    ctx->pc = 0x2A2CE4u;
    SET_GPR_U32(ctx, 31, 0x2A2CECu);
    ctx->pc = 0x2A2CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2CE4u;
    // 0x2a2ce8: 0x2685d220  addiu       $a1, $s4, -0x2DE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294955552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2A2CE4u, 0x2A2CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2CECu;
label_2a2cec:
    // 0x2a2cec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a2cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a2cf0:
    // 0x2a2cf0: 0xc0a5b64  jal         func_296D90
label_2a2cf4:
    if (ctx->pc == 0x2A2CF4u) {
        ctx->pc = 0x2A2CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2CF0u;
        // 0x2a2cf4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2CF8u;
        goto label_2a2cf8;
    }
    ctx->pc = 0x2A2CF0u;
    SET_GPR_U32(ctx, 31, 0x2A2CF8u);
    ctx->pc = 0x2A2CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2CF0u;
    // 0x2a2cf4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A2CF0u, 0x2A2CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2CF8u;
label_2a2cf8:
    // 0x2a2cf8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2a2cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2a2cfc:
    // 0x2a2cfc: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2a2cfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a2d00:
    // 0x2a2d00: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2a2d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_2a2d04:
    // 0x2a2d04: 0x2a240005  slti        $a0, $s1, 0x5
    ctx->pc = 0x2a2d04u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
label_2a2d08:
    // 0x2a2d08: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
label_2a2d0c:
    if (ctx->pc == 0x2A2D0Cu) {
        ctx->pc = 0x2A2D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D08u;
        // 0x2a2d0c: 0xac620150  sw          $v0, 0x150($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D10u;
        goto label_2a2d10;
    }
    ctx->pc = 0x2A2D08u;
    {
        const bool branch_taken_0x2a2d08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D08u;
        // 0x2a2d0c: 0xac620150  sw          $v0, 0x150($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2d08) {
            ctx->pc = 0x2A2CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2cd8;
        }
    }
    ctx->pc = 0x2A2D10u;
label_2a2d10:
    // 0x2a2d10: 0x10000106  b           . + 4 + (0x106 << 2)
label_2a2d14:
    if (ctx->pc == 0x2A2D14u) {
        ctx->pc = 0x2A2D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D10u;
        // 0x2a2d14: 0x8e420040  lw          $v0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D18u;
        goto label_2a2d18;
    }
    ctx->pc = 0x2A2D10u;
    {
        const bool branch_taken_0x2a2d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D10u;
        // 0x2a2d14: 0x8e420040  lw          $v0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2d10) {
            ctx->pc = 0x2A312Cu;
            goto label_2a312c;
        }
    }
    ctx->pc = 0x2A2D18u;
label_2a2d18:
    // 0x2a2d18: 0xc0a5b2a  jal         func_296CA8
label_2a2d1c:
    if (ctx->pc == 0x2A2D1Cu) {
        ctx->pc = 0x2A2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D18u;
        // 0x2a2d1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D20u;
        goto label_2a2d20;
    }
    ctx->pc = 0x2A2D18u;
    SET_GPR_U32(ctx, 31, 0x2A2D20u);
    ctx->pc = 0x2A2D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2D18u;
    // 0x2a2d1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x2A2D18u, 0x2A2D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2D20u;
label_2a2d20:
    // 0x2a2d20: 0xc07e558  jal         func_1F9560
label_2a2d24:
    if (ctx->pc == 0x2A2D24u) {
        ctx->pc = 0x2A2D28u;
        goto label_2a2d28;
    }
    ctx->pc = 0x2A2D20u;
    SET_GPR_U32(ctx, 31, 0x2A2D28u);
    ctx->pc = 0x1F9560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9560u, 0x2A2D20u, 0x2A2D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2D28u;
label_2a2d28:
    // 0x2a2d28: 0x10400106  beqz        $v0, . + 4 + (0x106 << 2)
label_2a2d2c:
    if (ctx->pc == 0x2A2D2Cu) {
        ctx->pc = 0x2A2D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D28u;
        // 0x2a2d2c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D30u;
        goto label_2a2d30;
    }
    ctx->pc = 0x2A2D28u;
    {
        const bool branch_taken_0x2a2d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D28u;
        // 0x2a2d2c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2d28) {
            ctx->pc = 0x2A3144u;
            goto label_2a3144;
        }
    }
    ctx->pc = 0x2A2D30u;
label_2a2d30:
    // 0x2a2d30: 0xc07e28a  jal         func_1F8A28
label_2a2d34:
    if (ctx->pc == 0x2A2D34u) {
        ctx->pc = 0x2A2D38u;
        goto label_2a2d38;
    }
    ctx->pc = 0x2A2D30u;
    SET_GPR_U32(ctx, 31, 0x2A2D38u);
    ctx->pc = 0x1F8A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A28u, 0x2A2D30u, 0x2A2D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2D38u;
label_2a2d38:
    // 0x2a2d38: 0x14400102  bnez        $v0, . + 4 + (0x102 << 2)
label_2a2d3c:
    if (ctx->pc == 0x2A2D3Cu) {
        ctx->pc = 0x2A2D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D38u;
        // 0x2a2d3c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D40u;
        goto label_2a2d40;
    }
    ctx->pc = 0x2A2D38u;
    {
        const bool branch_taken_0x2a2d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D38u;
        // 0x2a2d3c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2d38) {
            ctx->pc = 0x2A3144u;
            goto label_2a3144;
        }
    }
    ctx->pc = 0x2A2D40u;
label_2a2d40:
    // 0x2a2d40: 0xc07e272  jal         func_1F89C8
label_2a2d44:
    if (ctx->pc == 0x2A2D44u) {
        ctx->pc = 0x2A2D48u;
        goto label_2a2d48;
    }
    ctx->pc = 0x2A2D40u;
    SET_GPR_U32(ctx, 31, 0x2A2D48u);
    ctx->pc = 0x1F89C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F89C8u, 0x2A2D40u, 0x2A2D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2D48u;
label_2a2d48:
    // 0x2a2d48: 0x144000fe  bnez        $v0, . + 4 + (0xFE << 2)
label_2a2d4c:
    if (ctx->pc == 0x2A2D4Cu) {
        ctx->pc = 0x2A2D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D48u;
        // 0x2a2d4c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D50u;
        goto label_2a2d50;
    }
    ctx->pc = 0x2A2D48u;
    {
        const bool branch_taken_0x2a2d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D48u;
        // 0x2a2d4c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2d48) {
            ctx->pc = 0x2A3144u;
            goto label_2a3144;
        }
    }
    ctx->pc = 0x2A2D50u;
label_2a2d50:
    // 0x2a2d50: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a2d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2a2d54:
    // 0x2a2d54: 0x244488d0  addiu       $a0, $v0, -0x7730
    ctx->pc = 0x2a2d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
label_2a2d58:
    // 0x2a2d58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a2d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a2d5c:
    // 0x2a2d5c: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x2a2d5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
label_2a2d60:
    // 0x2a2d60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2a2d64:
    if (ctx->pc == 0x2A2D64u) {
        ctx->pc = 0x2A2D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D60u;
        // 0x2a2d64: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D68u;
        goto label_2a2d68;
    }
    ctx->pc = 0x2A2D60u;
    {
        const bool branch_taken_0x2a2d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D60u;
        // 0x2a2d64: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2d60) {
            ctx->pc = 0x2A2D78u;
            goto label_2a2d78;
        }
    }
    ctx->pc = 0x2A2D68u;
label_2a2d68:
    // 0x2a2d68: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a2d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2a2d6c:
    // 0x2a2d6c: 0x904301bc  lbu         $v1, 0x1BC($v0)
    ctx->pc = 0x2a2d6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 444)));
label_2a2d70:
    // 0x2a2d70: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2a2d74:
    if (ctx->pc == 0x2A2D74u) {
        ctx->pc = 0x2A2D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D70u;
        // 0x2a2d74: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D78u;
        goto label_2a2d78;
    }
    ctx->pc = 0x2A2D70u;
    {
        const bool branch_taken_0x2a2d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D70u;
        // 0x2a2d74: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2d70) {
            ctx->pc = 0x2A2D94u;
            goto label_2a2d94;
        }
    }
    ctx->pc = 0x2A2D78u;
label_2a2d78:
    // 0x2a2d78: 0x8c4283c0  lw          $v0, -0x7C40($v0)
    ctx->pc = 0x2a2d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935488)));
label_2a2d7c:
    // 0x2a2d7c: 0x38430006  xori        $v1, $v0, 0x6
    ctx->pc = 0x2a2d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_2a2d80:
    // 0x2a2d80: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_2a2d84:
    if (ctx->pc == 0x2A2D84u) {
        ctx->pc = 0x2A2D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D80u;
        // 0x2a2d84: 0xae400150  sw          $zero, 0x150($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D88u;
        goto label_2a2d88;
    }
    ctx->pc = 0x2A2D80u;
    {
        const bool branch_taken_0x2a2d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2d80) {
            ctx->pc = 0x2A2D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2D80u;
            // 0x2a2d84: 0xae400150  sw          $zero, 0x150($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2D98u;
            goto label_2a2d98;
        }
    }
    ctx->pc = 0x2A2D88u;
label_2a2d88:
    // 0x2a2d88: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x2a2d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_2a2d8c:
    // 0x2a2d8c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2a2d90:
    if (ctx->pc == 0x2A2D90u) {
        ctx->pc = 0x2A2D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D8Cu;
        // 0x2a2d90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D94u;
        goto label_2a2d94;
    }
    ctx->pc = 0x2A2D8Cu;
    {
        const bool branch_taken_0x2a2d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D8Cu;
        // 0x2a2d90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2d8c) {
            ctx->pc = 0x2A2DB0u;
            goto label_2a2db0;
        }
    }
    ctx->pc = 0x2A2D94u;
label_2a2d94:
    // 0x2a2d94: 0xae400150  sw          $zero, 0x150($s2)
    ctx->pc = 0x2a2d94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 0));
label_2a2d98:
    // 0x2a2d98: 0x2404efff  addiu       $a0, $zero, -0x1001
    ctx->pc = 0x2a2d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_2a2d9c:
    // 0x2a2d9c: 0x8e430168  lw          $v1, 0x168($s2)
    ctx->pc = 0x2a2d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 360)));
label_2a2da0:
    // 0x2a2da0: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a2da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_2a2da4:
    // 0x2a2da4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2a2da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2a2da8:
    // 0x2a2da8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a2dac:
    if (ctx->pc == 0x2A2DACu) {
        ctx->pc = 0x2A2DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2DA8u;
        // 0x2a2dac: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2DB0u;
        goto label_2a2db0;
    }
    ctx->pc = 0x2A2DA8u;
    {
        const bool branch_taken_0x2a2da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2DA8u;
        // 0x2a2dac: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2da8) {
            ctx->pc = 0x2A2DB4u;
            goto label_2a2db4;
        }
    }
    ctx->pc = 0x2A2DB0u;
label_2a2db0:
    // 0x2a2db0: 0xae420150  sw          $v0, 0x150($s2)
    ctx->pc = 0x2a2db0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 2));
label_2a2db4:
    // 0x2a2db4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a2db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a2db8:
    // 0x2a2db8: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_2a2dbc:
    if (ctx->pc == 0x2A2DBCu) {
        ctx->pc = 0x2A2DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2DB8u;
        // 0x2a2dbc: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2DC0u;
        goto label_2a2dc0;
    }
    ctx->pc = 0x2A2DB8u;
    {
        const bool branch_taken_0x2a2db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2DB8u;
        // 0x2a2dbc: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2db8) {
            ctx->pc = 0x2A3140u;
            goto label_2a3140;
        }
    }
    ctx->pc = 0x2A2DC0u;
label_2a2dc0:
    // 0x2a2dc0: 0xc07e286  jal         func_1F8A18
label_2a2dc4:
    if (ctx->pc == 0x2A2DC4u) {
        ctx->pc = 0x2A2DC8u;
        goto label_2a2dc8;
    }
    ctx->pc = 0x2A2DC0u;
    SET_GPR_U32(ctx, 31, 0x2A2DC8u);
    ctx->pc = 0x1F8A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A18u, 0x2A2DC0u, 0x2A2DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2DC8u;
label_2a2dc8:
    // 0x2a2dc8: 0x544000d8  bnel        $v0, $zero, . + 4 + (0xD8 << 2)
label_2a2dcc:
    if (ctx->pc == 0x2A2DCCu) {
        ctx->pc = 0x2A2DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2DC8u;
        // 0x2a2dcc: 0x8e420040  lw          $v0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2DD0u;
        goto label_2a2dd0;
    }
    ctx->pc = 0x2A2DC8u;
    {
        const bool branch_taken_0x2a2dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2dc8) {
            ctx->pc = 0x2A2DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2DC8u;
            // 0x2a2dcc: 0x8e420040  lw          $v0, 0x40($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A312Cu;
            goto label_2a312c;
        }
    }
    ctx->pc = 0x2A2DD0u;
label_2a2dd0:
    // 0x2a2dd0: 0xc07e28a  jal         func_1F8A28
label_2a2dd4:
    if (ctx->pc == 0x2A2DD4u) {
        ctx->pc = 0x2A2DD8u;
        goto label_2a2dd8;
    }
    ctx->pc = 0x2A2DD0u;
    SET_GPR_U32(ctx, 31, 0x2A2DD8u);
    ctx->pc = 0x1F8A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A28u, 0x2A2DD0u, 0x2A2DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2DD8u;
label_2a2dd8:
    // 0x2a2dd8: 0x144000d4  bnez        $v0, . + 4 + (0xD4 << 2)
label_2a2ddc:
    if (ctx->pc == 0x2A2DDCu) {
        ctx->pc = 0x2A2DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2DD8u;
        // 0x2a2ddc: 0x8e420040  lw          $v0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2DE0u;
        goto label_2a2de0;
    }
    ctx->pc = 0x2A2DD8u;
    {
        const bool branch_taken_0x2a2dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2DD8u;
        // 0x2a2ddc: 0x8e420040  lw          $v0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2dd8) {
            ctx->pc = 0x2A312Cu;
            goto label_2a312c;
        }
    }
    ctx->pc = 0x2A2DE0u;
label_2a2de0:
    // 0x2a2de0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a2de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a2de4:
    // 0x2a2de4: 0x26540008  addiu       $s4, $s2, 0x8
    ctx->pc = 0x2a2de4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_2a2de8:
    // 0x2a2de8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2a2de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2a2dec:
    // 0x2a2dec: 0xc0a5b2a  jal         func_296CA8
label_2a2df0:
    if (ctx->pc == 0x2A2DF0u) {
        ctx->pc = 0x2A2DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2DECu;
        // 0x2a2df0: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2DF4u;
        goto label_2a2df4;
    }
    ctx->pc = 0x2A2DECu;
    SET_GPR_U32(ctx, 31, 0x2A2DF4u);
    ctx->pc = 0x2A2DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2DECu;
    // 0x2a2df0: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x2A2DECu, 0x2A2DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2DF4u;
label_2a2df4:
    // 0x2a2df4: 0xc07e35c  jal         func_1F8D70
label_2a2df8:
    if (ctx->pc == 0x2A2DF8u) {
        ctx->pc = 0x2A2DFCu;
        goto label_2a2dfc;
    }
    ctx->pc = 0x2A2DF4u;
    SET_GPR_U32(ctx, 31, 0x2A2DFCu);
    ctx->pc = 0x1F8D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8D70u, 0x2A2DF4u, 0x2A2DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2DFCu;
label_2a2dfc:
    // 0x2a2dfc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a2dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2a2e00:
    // 0x2a2e00: 0x8e430154  lw          $v1, 0x154($s2)
    ctx->pc = 0x2a2e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
label_2a2e04:
    // 0x2a2e04: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2a2e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2a2e08:
    // 0x2a2e08: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2a2e0c:
    if (ctx->pc == 0x2A2E0Cu) {
        ctx->pc = 0x2A2E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E08u;
        // 0x2a2e0c: 0x8c440150  lw          $a0, 0x150($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2E10u;
        goto label_2a2e10;
    }
    ctx->pc = 0x2A2E08u;
    {
        const bool branch_taken_0x2a2e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E08u;
        // 0x2a2e0c: 0x8c440150  lw          $a0, 0x150($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2e08) {
            ctx->pc = 0x2A2E18u;
            goto label_2a2e18;
        }
    }
    ctx->pc = 0x2A2E10u;
label_2a2e10:
    // 0x2a2e10: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_2a2e14:
    if (ctx->pc == 0x2A2E14u) {
        ctx->pc = 0x2A2E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E10u;
        // 0x2a2e14: 0x8e430150  lw          $v1, 0x150($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2E18u;
        goto label_2a2e18;
    }
    ctx->pc = 0x2A2E10u;
    {
        const bool branch_taken_0x2a2e10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2e10) {
            ctx->pc = 0x2A2E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2E10u;
            // 0x2a2e14: 0x8e430150  lw          $v1, 0x150($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2E34u;
            goto label_2a2e34;
        }
    }
    ctx->pc = 0x2A2E18u;
label_2a2e18:
    // 0x2a2e18: 0xc0ab858  jal         func_2AE160
label_2a2e1c:
    if (ctx->pc == 0x2A2E1Cu) {
        ctx->pc = 0x2A2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E18u;
        // 0x2a2e1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2E20u;
        goto label_2a2e20;
    }
    ctx->pc = 0x2A2E18u;
    SET_GPR_U32(ctx, 31, 0x2A2E20u);
    ctx->pc = 0x2A2E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2E18u;
    // 0x2a2e1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2A2E18u, 0x2A2E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2E20u;
label_2a2e20:
    // 0x2a2e20: 0x8e440154  lw          $a0, 0x154($s2)
    ctx->pc = 0x2a2e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
label_2a2e24:
    // 0x2a2e24: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2a2e24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2a2e28:
    // 0x2a2e28: 0xc0ab3b4  jal         func_2ACED0
label_2a2e2c:
    if (ctx->pc == 0x2A2E2Cu) {
        ctx->pc = 0x2A2E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E28u;
        // 0x2a2e2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2E30u;
        goto label_2a2e30;
    }
    ctx->pc = 0x2A2E28u;
    SET_GPR_U32(ctx, 31, 0x2A2E30u);
    ctx->pc = 0x2A2E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2E28u;
    // 0x2a2e2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2A2E28u, 0x2A2E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2E30u;
label_2a2e30:
    // 0x2a2e30: 0x8e430150  lw          $v1, 0x150($s2)
    ctx->pc = 0x2a2e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
label_2a2e34:
    // 0x2a2e34: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2a2e38:
    if (ctx->pc == 0x2A2E38u) {
        ctx->pc = 0x2A2E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E34u;
        // 0x2a2e38: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2E3Cu;
        goto label_2a2e3c;
    }
    ctx->pc = 0x2A2E34u;
    {
        const bool branch_taken_0x2a2e34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E34u;
        // 0x2a2e38: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2e34) {
            ctx->pc = 0x2A2E48u;
            goto label_2a2e48;
        }
    }
    ctx->pc = 0x2A2E3Cu;
label_2a2e3c:
    // 0x2a2e3c: 0x10000004  b           . + 4 + (0x4 << 2)
label_2a2e40:
    if (ctx->pc == 0x2A2E40u) {
        ctx->pc = 0x2A2E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E3Cu;
        // 0x2a2e40: 0x2453d5c8  addiu       $s3, $v0, -0x2A38 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2E44u;
        goto label_2a2e44;
    }
    ctx->pc = 0x2A2E3Cu;
    {
        const bool branch_taken_0x2a2e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E3Cu;
        // 0x2a2e40: 0x2453d5c8  addiu       $s3, $v0, -0x2A38 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2e3c) {
            ctx->pc = 0x2A2E50u;
            goto label_2a2e50;
        }
    }
    ctx->pc = 0x2A2E44u;
label_2a2e44:
    // 0x2a2e44: 0x0  nop
    ctx->pc = 0x2a2e44u;
    // NOP
label_2a2e48:
    // 0x2a2e48: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2a2e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_2a2e4c:
    // 0x2a2e4c: 0x2453d5f0  addiu       $s3, $v0, -0x2A10
    ctx->pc = 0x2a2e4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956528));
label_2a2e50:
    // 0x2a2e50: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2a2e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a2e54:
    // 0x2a2e54: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x2a2e54u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2a2e58:
    // 0x2a2e58: 0x43b00a  movz        $s6, $v0, $v1
    ctx->pc = 0x2a2e58u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 2));
label_2a2e5c:
    // 0x2a2e5c: 0x12c0007e  beqz        $s6, . + 4 + (0x7E << 2)
label_2a2e60:
    if (ctx->pc == 0x2A2E60u) {
        ctx->pc = 0x2A2E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E5Cu;
        // 0x2a2e60: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2E64u;
        goto label_2a2e64;
    }
    ctx->pc = 0x2A2E5Cu;
    {
        const bool branch_taken_0x2a2e5c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E5Cu;
        // 0x2a2e60: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2e5c) {
            ctx->pc = 0x2A3058u;
            goto label_2a3058;
        }
    }
    ctx->pc = 0x2A2E64u;
label_2a2e64:
    // 0x2a2e64: 0x3c0280df  lui         $v0, 0x80DF
    ctx->pc = 0x2a2e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32991 << 16));
label_2a2e68:
    // 0x2a2e68: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2a2e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2a2e6c:
    // 0x2a2e6c: 0x3442cfcf  ori         $v0, $v0, 0xCFCF
    ctx->pc = 0x2a2e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53199);
label_2a2e70:
    // 0x2a2e70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2a2e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2a2e74:
    // 0x2a2e74: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x2a2e74u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
label_2a2e78:
    // 0x2a2e78: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2a2e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2a2e7c:
    // 0x2a2e7c: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x2a2e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_2a2e80:
    // 0x2a2e80: 0x26bed238  addiu       $fp, $s5, -0x2DC8
    ctx->pc = 0x2a2e80u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955576));
label_2a2e84:
    // 0x2a2e84: 0x3c170015  lui         $s7, 0x15
    ctx->pc = 0x2a2e84u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)21 << 16));
label_2a2e88:
    // 0x2a2e88: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2a2e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2a2e8c:
    // 0x2a2e8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a2e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a2e90:
    // 0x2a2e90: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2a2e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2a2e94:
    // 0x2a2e94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a2e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2e98:
    // 0x2a2e98: 0x8c450150  lw          $a1, 0x150($v0)
    ctx->pc = 0x2a2e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_2a2e9c:
    // 0x2a2e9c: 0xc0a5d52  jal         func_297548
label_2a2ea0:
    if (ctx->pc == 0x2A2EA0u) {
        ctx->pc = 0x2A2EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E9Cu;
        // 0x2a2ea0: 0x8fb00044  lw          $s0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2EA4u;
        goto label_2a2ea4;
    }
    ctx->pc = 0x2A2E9Cu;
    SET_GPR_U32(ctx, 31, 0x2A2EA4u);
    ctx->pc = 0x2A2EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2E9Cu;
    // 0x2a2ea0: 0x8fb00044  lw          $s0, 0x44($sp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297548u, 0x2A2E9Cu, 0x2A2EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2EA4u;
label_2a2ea4:
    // 0x2a2ea4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2a2ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2a2ea8:
    // 0x2a2ea8: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x2a2ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_2a2eac:
    // 0x2a2eac: 0xc07e35c  jal         func_1F8D70
label_2a2eb0:
    if (ctx->pc == 0x2A2EB0u) {
        ctx->pc = 0x2A2EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2EACu;
        // 0x2a2eb0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2EB4u;
        goto label_2a2eb4;
    }
    ctx->pc = 0x2A2EACu;
    SET_GPR_U32(ctx, 31, 0x2A2EB4u);
    ctx->pc = 0x2A2EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2EACu;
    // 0x2a2eb0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8D70u, 0x2A2EACu, 0x2A2EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2EB4u;
label_2a2eb4:
    // 0x2a2eb4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2a2eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a2eb8:
    // 0x2a2eb8: 0x2221026  xor         $v0, $s1, $v0
    ctx->pc = 0x2a2eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
label_2a2ebc:
    // 0x2a2ebc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a2ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2a2ec0:
    // 0x2a2ec0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a2ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a2ec4:
    // 0x2a2ec4: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a2ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2a2ec8:
    // 0x2a2ec8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a2ec8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2ecc:
    // 0x2a2ecc: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x2a2eccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_2a2ed0:
    // 0x2a2ed0: 0xc0b640e  jal         func_2D9038
label_2a2ed4:
    if (ctx->pc == 0x2A2ED4u) {
        ctx->pc = 0x2A2ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2ED0u;
        // 0x2a2ed4: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2ED8u;
        goto label_2a2ed8;
    }
    ctx->pc = 0x2A2ED0u;
    SET_GPR_U32(ctx, 31, 0x2A2ED8u);
    ctx->pc = 0x2A2ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2ED0u;
    // 0x2a2ed4: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A2ED0u, 0x2A2ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2ED8u;
label_2a2ed8:
    // 0x2a2ed8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a2ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a2edc:
    // 0x2a2edc: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x2a2edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_2a2ee0:
    // 0x2a2ee0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2a2ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2a2ee4:
    // 0x2a2ee4: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x2a2ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a2ee8:
    // 0x2a2ee8: 0xc0b640e  jal         func_2D9038
label_2a2eec:
    if (ctx->pc == 0x2A2EECu) {
        ctx->pc = 0x2A2EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2EE8u;
        // 0x2a2eec: 0x24444038  addiu       $a0, $v0, 0x4038 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2EF0u;
        goto label_2a2ef0;
    }
    ctx->pc = 0x2A2EE8u;
    SET_GPR_U32(ctx, 31, 0x2A2EF0u);
    ctx->pc = 0x2A2EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2EE8u;
    // 0x2a2eec: 0x24444038  addiu       $a0, $v0, 0x4038 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A2EE8u, 0x2A2EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2EF0u;
label_2a2ef0:
    // 0x2a2ef0: 0x8e420150  lw          $v0, 0x150($s2)
    ctx->pc = 0x2a2ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
label_2a2ef4:
    // 0x2a2ef4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2a2ef8:
    if (ctx->pc == 0x2A2EF8u) {
        ctx->pc = 0x2A2EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2EF4u;
        // 0x2a2ef8: 0x3c02000a  lui         $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2EFCu;
        goto label_2a2efc;
    }
    ctx->pc = 0x2A2EF4u;
    {
        const bool branch_taken_0x2a2ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2EF4u;
        // 0x2a2ef8: 0x3c02000a  lui         $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2ef4) {
            ctx->pc = 0x2A2F40u;
            goto label_2a2f40;
        }
    }
    ctx->pc = 0x2A2EFCu;
label_2a2efc:
    // 0x2a2efc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a2efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a2f00:
    // 0x2a2f00: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2a2f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2a2f04:
    // 0x2a2f04: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_2a2f08:
    if (ctx->pc == 0x2A2F08u) {
        ctx->pc = 0x2A2F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F04u;
        // 0x2a2f08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2F0Cu;
        goto label_2a2f0c;
    }
    ctx->pc = 0x2A2F04u;
    {
        const bool branch_taken_0x2a2f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A2F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F04u;
        // 0x2a2f08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2f04) {
            ctx->pc = 0x2A2F40u;
            goto label_2a2f40;
        }
    }
    ctx->pc = 0x2A2F0Cu;
label_2a2f0c:
    // 0x2a2f0c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a2f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2a2f10:
    // 0x2a2f10: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a2f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2a2f14:
    // 0x2a2f14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a2f14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2f18:
    // 0x2a2f18: 0xc0b640e  jal         func_2D9038
label_2a2f1c:
    if (ctx->pc == 0x2A2F1Cu) {
        ctx->pc = 0x2A2F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F18u;
        // 0x2a2f1c: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2F20u;
        goto label_2a2f20;
    }
    ctx->pc = 0x2A2F18u;
    SET_GPR_U32(ctx, 31, 0x2A2F20u);
    ctx->pc = 0x2A2F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2F18u;
    // 0x2a2f1c: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A2F18u, 0x2A2F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F20u;
label_2a2f20:
    // 0x2a2f20: 0xc07e296  jal         func_1F8A58
label_2a2f24:
    if (ctx->pc == 0x2A2F24u) {
        ctx->pc = 0x2A2F28u;
        goto label_2a2f28;
    }
    ctx->pc = 0x2A2F20u;
    SET_GPR_U32(ctx, 31, 0x2A2F28u);
    ctx->pc = 0x1F8A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A58u, 0x2A2F20u, 0x2A2F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F28u;
label_2a2f28:
    // 0x2a2f28: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2a2f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2a2f2c:
    // 0x2a2f2c: 0x3c06000a  lui         $a2, 0xA
    ctx->pc = 0x2a2f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)10 << 16));
label_2a2f30:
    // 0x2a2f30: 0x34c60003  ori         $a2, $a2, 0x3
    ctx->pc = 0x2a2f30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3);
label_2a2f34:
    // 0x2a2f34: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2a2f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2a2f38:
    // 0x2a2f38: 0xc0b640e  jal         func_2D9038
label_2a2f3c:
    if (ctx->pc == 0x2A2F3Cu) {
        ctx->pc = 0x2A2F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F38u;
        // 0x2a2f3c: 0x26e44040  addiu       $a0, $s7, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 16448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2F40u;
        goto label_2a2f40;
    }
    ctx->pc = 0x2A2F38u;
    SET_GPR_U32(ctx, 31, 0x2A2F40u);
    ctx->pc = 0x2A2F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2F38u;
    // 0x2a2f3c: 0x26e44040  addiu       $a0, $s7, 0x4040 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 16448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A2F38u, 0x2A2F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F40u;
label_2a2f40:
    // 0x2a2f40: 0xc07e35c  jal         func_1F8D70
label_2a2f44:
    if (ctx->pc == 0x2A2F44u) {
        ctx->pc = 0x2A2F48u;
        goto label_2a2f48;
    }
    ctx->pc = 0x2A2F40u;
    SET_GPR_U32(ctx, 31, 0x2A2F48u);
    ctx->pc = 0x1F8D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8D70u, 0x2A2F40u, 0x2A2F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F48u;
label_2a2f48:
    // 0x2a2f48: 0x16220016  bne         $s1, $v0, . + 4 + (0x16 << 2)
label_2a2f4c:
    if (ctx->pc == 0x2A2F4Cu) {
        ctx->pc = 0x2A2F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F48u;
        // 0x2a2f4c: 0x3c02000a  lui         $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2F50u;
        goto label_2a2f50;
    }
    ctx->pc = 0x2A2F48u;
    {
        const bool branch_taken_0x2a2f48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A2F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F48u;
        // 0x2a2f4c: 0x3c02000a  lui         $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2f48) {
            ctx->pc = 0x2A2FA4u;
            goto label_2a2fa4;
        }
    }
    ctx->pc = 0x2A2F50u;
label_2a2f50:
    // 0x2a2f50: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a2f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a2f54:
    // 0x2a2f54: 0x34420019  ori         $v0, $v0, 0x19
    ctx->pc = 0x2a2f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25);
label_2a2f58:
    // 0x2a2f58: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_2a2f5c:
    if (ctx->pc == 0x2A2F5Cu) {
        ctx->pc = 0x2A2F60u;
        goto label_2a2f60;
    }
    ctx->pc = 0x2A2F58u;
    {
        const bool branch_taken_0x2a2f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a2f58) {
            ctx->pc = 0x2A2FA4u;
            goto label_2a2fa4;
        }
    }
    ctx->pc = 0x2A2F60u;
label_2a2f60:
    // 0x2a2f60: 0xc07e364  jal         func_1F8D90
label_2a2f64:
    if (ctx->pc == 0x2A2F64u) {
        ctx->pc = 0x2A2F68u;
        goto label_2a2f68;
    }
    ctx->pc = 0x2A2F60u;
    SET_GPR_U32(ctx, 31, 0x2A2F68u);
    ctx->pc = 0x1F8D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8D90u, 0x2A2F60u, 0x2A2F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F68u;
label_2a2f68:
    // 0x2a2f68: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2a2f6c:
    if (ctx->pc == 0x2A2F6Cu) {
        ctx->pc = 0x2A2F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F68u;
        // 0x2a2f6c: 0x26a4d238  addiu       $a0, $s5, -0x2DC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2F70u;
        goto label_2a2f70;
    }
    ctx->pc = 0x2A2F68u;
    {
        const bool branch_taken_0x2a2f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F68u;
        // 0x2a2f6c: 0x26a4d238  addiu       $a0, $s5, -0x2DC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2f68) {
            ctx->pc = 0x2A2FA4u;
            goto label_2a2fa4;
        }
    }
    ctx->pc = 0x2A2F70u;
label_2a2f70:
    // 0x2a2f70: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a2f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a2f74:
    // 0x2a2f74: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a2f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2a2f78:
    // 0x2a2f78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a2f78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2f7c:
    // 0x2a2f7c: 0xc0b640e  jal         func_2D9038
label_2a2f80:
    if (ctx->pc == 0x2A2F80u) {
        ctx->pc = 0x2A2F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F7Cu;
        // 0x2a2f80: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2F84u;
        goto label_2a2f84;
    }
    ctx->pc = 0x2A2F7Cu;
    SET_GPR_U32(ctx, 31, 0x2A2F84u);
    ctx->pc = 0x2A2F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2F7Cu;
    // 0x2a2f80: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A2F7Cu, 0x2A2F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F84u;
label_2a2f84:
    // 0x2a2f84: 0xc07e360  jal         func_1F8D80
label_2a2f88:
    if (ctx->pc == 0x2A2F88u) {
        ctx->pc = 0x2A2F8Cu;
        goto label_2a2f8c;
    }
    ctx->pc = 0x2A2F84u;
    SET_GPR_U32(ctx, 31, 0x2A2F8Cu);
    ctx->pc = 0x1F8D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8D80u, 0x2A2F84u, 0x2A2F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F8Cu;
label_2a2f8c:
    // 0x2a2f8c: 0x3c06000a  lui         $a2, 0xA
    ctx->pc = 0x2a2f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)10 << 16));
label_2a2f90:
    // 0x2a2f90: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2a2f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2a2f94:
    // 0x2a2f94: 0x34c6001b  ori         $a2, $a2, 0x1B
    ctx->pc = 0x2a2f94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)27);
label_2a2f98:
    // 0x2a2f98: 0x26e44040  addiu       $a0, $s7, 0x4040
    ctx->pc = 0x2a2f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 16448));
label_2a2f9c:
    // 0x2a2f9c: 0xc0b640e  jal         func_2D9038
label_2a2fa0:
    if (ctx->pc == 0x2A2FA0u) {
        ctx->pc = 0x2A2FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F9Cu;
        // 0x2a2fa0: 0xc23023  subu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2FA4u;
        goto label_2a2fa4;
    }
    ctx->pc = 0x2A2F9Cu;
    SET_GPR_U32(ctx, 31, 0x2A2FA4u);
    ctx->pc = 0x2A2FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2F9Cu;
    // 0x2a2fa0: 0xc23023  subu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A2F9Cu, 0x2A2FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2FA4u;
label_2a2fa4:
    // 0x2a2fa4: 0xc07e35c  jal         func_1F8D70
label_2a2fa8:
    if (ctx->pc == 0x2A2FA8u) {
        ctx->pc = 0x2A2FACu;
        goto label_2a2fac;
    }
    ctx->pc = 0x2A2FA4u;
    SET_GPR_U32(ctx, 31, 0x2A2FACu);
    ctx->pc = 0x1F8D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8D70u, 0x2A2FA4u, 0x2A2FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2FACu;
label_2a2fac:
    // 0x2a2fac: 0x56220025  bnel        $s1, $v0, . + 4 + (0x25 << 2)
label_2a2fb0:
    if (ctx->pc == 0x2A2FB0u) {
        ctx->pc = 0x2A2FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FACu;
        // 0x2a2fb0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2FB4u;
        goto label_2a2fb4;
    }
    ctx->pc = 0x2A2FACu;
    {
        const bool branch_taken_0x2a2fac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a2fac) {
            ctx->pc = 0x2A2FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2FACu;
            // 0x2a2fb0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3044u;
            goto label_2a3044;
        }
    }
    ctx->pc = 0x2A2FB4u;
label_2a2fb4:
    // 0x2a2fb4: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x2a2fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_2a2fb8:
    // 0x2a2fb8: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x2a2fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2a2fbc:
    // 0x2a2fbc: 0x34420021  ori         $v0, $v0, 0x21
    ctx->pc = 0x2a2fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33);
label_2a2fc0:
    // 0x2a2fc0: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
label_2a2fc4:
    if (ctx->pc == 0x2A2FC4u) {
        ctx->pc = 0x2A2FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FC0u;
        // 0x2a2fc4: 0x3c02000a  lui         $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2FC8u;
        goto label_2a2fc8;
    }
    ctx->pc = 0x2A2FC0u;
    {
        const bool branch_taken_0x2a2fc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A2FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FC0u;
        // 0x2a2fc4: 0x3c02000a  lui         $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2fc0) {
            ctx->pc = 0x2A2FE8u;
            goto label_2a2fe8;
        }
    }
    ctx->pc = 0x2A2FC8u;
label_2a2fc8:
    // 0x2a2fc8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a2fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2a2fcc:
    // 0x2a2fcc: 0x8c4383c0  lw          $v1, -0x7C40($v0)
    ctx->pc = 0x2a2fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935488)));
label_2a2fd0:
    // 0x2a2fd0: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x2a2fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_2a2fd4:
    // 0x2a2fd4: 0x344200fe  ori         $v0, $v0, 0xFE
    ctx->pc = 0x2a2fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)254);
label_2a2fd8:
    // 0x2a2fd8: 0xc07e296  jal         func_1F8A58
label_2a2fdc:
    if (ctx->pc == 0x2A2FDCu) {
        ctx->pc = 0x2A2FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FD8u;
        // 0x2a2fdc: 0x43800a  movz        $s0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2FE0u;
        goto label_2a2fe0;
    }
    ctx->pc = 0x2A2FD8u;
    SET_GPR_U32(ctx, 31, 0x2A2FE0u);
    ctx->pc = 0x2A2FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2FD8u;
    // 0x2a2fdc: 0x43800a  movz        $s0, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A58u, 0x2A2FD8u, 0x2A2FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2FE0u;
label_2a2fe0:
    // 0x2a2fe0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2a2fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2a2fe4:
    // 0x2a2fe4: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x2a2fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_2a2fe8:
    // 0x2a2fe8: 0x34420027  ori         $v0, $v0, 0x27
    ctx->pc = 0x2a2fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39);
label_2a2fec:
    // 0x2a2fec: 0x1602000b  bne         $s0, $v0, . + 4 + (0xB << 2)
label_2a2ff0:
    if (ctx->pc == 0x2A2FF0u) {
        ctx->pc = 0x2A2FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FECu;
        // 0x2a2ff0: 0x26a4d238  addiu       $a0, $s5, -0x2DC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2FF4u;
        goto label_2a2ff4;
    }
    ctx->pc = 0x2A2FECu;
    {
        const bool branch_taken_0x2a2fec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A2FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FECu;
        // 0x2a2ff0: 0x26a4d238  addiu       $a0, $s5, -0x2DC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2fec) {
            ctx->pc = 0x2A301Cu;
            goto label_2a301c;
        }
    }
    ctx->pc = 0x2A2FF4u;
label_2a2ff4:
    // 0x2a2ff4: 0xc07e364  jal         func_1F8D90
label_2a2ff8:
    if (ctx->pc == 0x2A2FF8u) {
        ctx->pc = 0x2A2FFCu;
        goto label_2a2ffc;
    }
    ctx->pc = 0x2A2FF4u;
    SET_GPR_U32(ctx, 31, 0x2A2FFCu);
    ctx->pc = 0x1F8D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8D90u, 0x2A2FF4u, 0x2A2FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2FFCu;
label_2a2ffc:
    // 0x2a2ffc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2a3000:
    if (ctx->pc == 0x2A3000u) {
        ctx->pc = 0x2A3000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FFCu;
        // 0x2a3000: 0x26a4d238  addiu       $a0, $s5, -0x2DC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3004u;
        goto label_2a3004;
    }
    ctx->pc = 0x2A2FFCu;
    {
        const bool branch_taken_0x2a2ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FFCu;
        // 0x2a3000: 0x26a4d238  addiu       $a0, $s5, -0x2DC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2ffc) {
            ctx->pc = 0x2A301Cu;
            goto label_2a301c;
        }
    }
    ctx->pc = 0x2A3004u;
label_2a3004:
    // 0x2a3004: 0xc07e360  jal         func_1F8D80
label_2a3008:
    if (ctx->pc == 0x2A3008u) {
        ctx->pc = 0x2A300Cu;
        goto label_2a300c;
    }
    ctx->pc = 0x2A3004u;
    SET_GPR_U32(ctx, 31, 0x2A300Cu);
    ctx->pc = 0x1F8D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8D80u, 0x2A3004u, 0x2A300Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A300Cu;
label_2a300c:
    // 0x2a300c: 0x3c10000a  lui         $s0, 0xA
    ctx->pc = 0x2a300cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)10 << 16));
label_2a3010:
    // 0x2a3010: 0x36100028  ori         $s0, $s0, 0x28
    ctx->pc = 0x2a3010u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)40);
label_2a3014:
    // 0x2a3014: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2a3014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2a3018:
    // 0x2a3018: 0x26a4d238  addiu       $a0, $s5, -0x2DC8
    ctx->pc = 0x2a3018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955576));
label_2a301c:
    // 0x2a301c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a301cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a3020:
    // 0x2a3020: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a3020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2a3024:
    // 0x2a3024: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a3024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3028:
    // 0x2a3028: 0xc0b640e  jal         func_2D9038
label_2a302c:
    if (ctx->pc == 0x2A302Cu) {
        ctx->pc = 0x2A302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3028u;
        // 0x2a302c: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3030u;
        goto label_2a3030;
    }
    ctx->pc = 0x2A3028u;
    SET_GPR_U32(ctx, 31, 0x2A3030u);
    ctx->pc = 0x2A302Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3028u;
    // 0x2a302c: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A3028u, 0x2A3030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3030u;
label_2a3030:
    // 0x2a3030: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x2a3030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
label_2a3034:
    // 0x2a3034: 0x24644048  addiu       $a0, $v1, 0x4048
    ctx->pc = 0x2a3034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16456));
label_2a3038:
    // 0x2a3038: 0xc0b640e  jal         func_2D9038
label_2a303c:
    if (ctx->pc == 0x2A303Cu) {
        ctx->pc = 0x2A303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3038u;
        // 0x2a303c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3040u;
        goto label_2a3040;
    }
    ctx->pc = 0x2A3038u;
    SET_GPR_U32(ctx, 31, 0x2A3040u);
    ctx->pc = 0x2A303Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3038u;
    // 0x2a303c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A3038u, 0x2A3040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3040u;
label_2a3040:
    // 0x2a3040: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a3040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a3044:
    // 0x2a3044: 0x236102a  slt         $v0, $s1, $s6
    ctx->pc = 0x2a3044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_2a3048:
    // 0x2a3048: 0x1440ff8f  bnez        $v0, . + 4 + (-0x71 << 2)
label_2a304c:
    if (ctx->pc == 0x2A304Cu) {
        ctx->pc = 0x2A304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3048u;
        // 0x2a304c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3050u;
        goto label_2a3050;
    }
    ctx->pc = 0x2A3048u;
    {
        const bool branch_taken_0x2a3048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3048u;
        // 0x2a304c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3048) {
            ctx->pc = 0x2A2E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2e88;
        }
    }
    ctx->pc = 0x2A3050u;
label_2a3050:
    // 0x2a3050: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a3054:
    if (ctx->pc == 0x2A3054u) {
        ctx->pc = 0x2A3054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3050u;
        // 0x2a3054: 0x26a4d238  addiu       $a0, $s5, -0x2DC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3058u;
        goto label_2a3058;
    }
    ctx->pc = 0x2A3050u;
    {
        const bool branch_taken_0x2a3050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3050u;
        // 0x2a3054: 0x26a4d238  addiu       $a0, $s5, -0x2DC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3050) {
            ctx->pc = 0x2A3060u;
            goto label_2a3060;
        }
    }
    ctx->pc = 0x2A3058u;
label_2a3058:
    // 0x2a3058: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x2a3058u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
label_2a305c:
    // 0x2a305c: 0x26a4d238  addiu       $a0, $s5, -0x2DC8
    ctx->pc = 0x2a305cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955576));
label_2a3060:
    // 0x2a3060: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a3060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a3064:
    // 0x2a3064: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a3064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2a3068:
    // 0x2a3068: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a3068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a306c:
    // 0x2a306c: 0xc0b640e  jal         func_2D9038
label_2a3070:
    if (ctx->pc == 0x2A3070u) {
        ctx->pc = 0x2A3070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A306Cu;
        // 0x2a3070: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3074u;
        goto label_2a3074;
    }
    ctx->pc = 0x2A306Cu;
    SET_GPR_U32(ctx, 31, 0x2A3074u);
    ctx->pc = 0x2A3070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A306Cu;
    // 0x2a3070: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A306Cu, 0x2A3074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3074u;
label_2a3074:
    // 0x2a3074: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2a3074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
label_2a3078:
    // 0x2a3078: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x2a3078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
label_2a307c:
    // 0x2a307c: 0x3c06000a  lui         $a2, 0xA
    ctx->pc = 0x2a307cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)10 << 16));
label_2a3080:
    // 0x2a3080: 0x3c07000a  lui         $a3, 0xA
    ctx->pc = 0x2a3080u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)10 << 16));
label_2a3084:
    // 0x2a3084: 0x24844050  addiu       $a0, $a0, 0x4050
    ctx->pc = 0x2a3084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16464));
label_2a3088:
    // 0x2a3088: 0x34a5001c  ori         $a1, $a1, 0x1C
    ctx->pc = 0x2a3088u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)28);
label_2a308c:
    // 0x2a308c: 0x34c6001d  ori         $a2, $a2, 0x1D
    ctx->pc = 0x2a308cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)29);
label_2a3090:
    // 0x2a3090: 0xc0b640e  jal         func_2D9038
label_2a3094:
    if (ctx->pc == 0x2A3094u) {
        ctx->pc = 0x2A3094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3090u;
        // 0x2a3094: 0x34e7001e  ori         $a3, $a3, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3098u;
        goto label_2a3098;
    }
    ctx->pc = 0x2A3090u;
    SET_GPR_U32(ctx, 31, 0x2A3098u);
    ctx->pc = 0x2A3094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3090u;
    // 0x2a3094: 0x34e7001e  ori         $a3, $a3, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A3090u, 0x2A3098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3098u;
label_2a3098:
    // 0x2a3098: 0xc07e266  jal         func_1F8998
label_2a309c:
    if (ctx->pc == 0x2A309Cu) {
        ctx->pc = 0x2A30A0u;
        goto label_2a30a0;
    }
    ctx->pc = 0x2A3098u;
    SET_GPR_U32(ctx, 31, 0x2A30A0u);
    ctx->pc = 0x1F8998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8998u, 0x2A3098u, 0x2A30A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A30A0u;
label_2a30a0:
    // 0x2a30a0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_2a30a4:
    if (ctx->pc == 0x2A30A4u) {
        ctx->pc = 0x2A30A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A30A0u;
        // 0x2a30a4: 0x2403fffd  addiu       $v1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A30A8u;
        goto label_2a30a8;
    }
    ctx->pc = 0x2A30A0u;
    {
        const bool branch_taken_0x2a30a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A30A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A30A0u;
        // 0x2a30a4: 0x2403fffd  addiu       $v1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a30a0) {
            ctx->pc = 0x2A3140u;
            goto label_2a3140;
        }
    }
    ctx->pc = 0x2A30A8u;
label_2a30a8:
    // 0x2a30a8: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x2a30a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_2a30ac:
    // 0x2a30ac: 0x26450174  addiu       $a1, $s2, 0x174
    ctx->pc = 0x2a30acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 372));
label_2a30b0:
    // 0x2a30b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a30b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2a30b4:
    // 0x2a30b4: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x2a30b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_2a30b8:
    // 0x2a30b8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2a30b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a30bc:
    // 0x2a30bc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2a30c0:
    if (ctx->pc == 0x2A30C0u) {
        ctx->pc = 0x2A30C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A30BCu;
        // 0x2a30c0: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A30C4u;
        goto label_2a30c4;
    }
    ctx->pc = 0x2A30BCu;
    {
        const bool branch_taken_0x2a30bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a30bc) {
            ctx->pc = 0x2A30C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A30BCu;
            // 0x2a30c0: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A30D8u;
            goto label_2a30d8;
        }
    }
    ctx->pc = 0x2A30C4u;
label_2a30c4:
    // 0x2a30c4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2a30c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2a30c8:
    // 0x2a30c8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2a30c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2a30cc:
    // 0x2a30cc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2a30d0:
    if (ctx->pc == 0x2A30D0u) {
        ctx->pc = 0x2A30D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A30CCu;
        // 0x2a30d0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A30D4u;
        goto label_2a30d4;
    }
    ctx->pc = 0x2A30CCu;
    {
        const bool branch_taken_0x2a30cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A30D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A30CCu;
        // 0x2a30d0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a30cc) {
            ctx->pc = 0x2A30E0u;
            goto label_2a30e0;
        }
    }
    ctx->pc = 0x2A30D4u;
label_2a30d4:
    // 0x2a30d4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2a30d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2a30d8:
    // 0x2a30d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a30d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a30dc:
    // 0x2a30dc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2a30dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2a30e0:
    // 0x2a30e0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2a30e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2a30e4:
    // 0x2a30e4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x2a30e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_2a30e8:
    // 0x2a30e8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2a30e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2a30ec:
    // 0x2a30ec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2a30ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2a30f0:
    // 0x2a30f0: 0x60f809  jalr        $v1
label_2a30f4:
    if (ctx->pc == 0x2A30F4u) {
        ctx->pc = 0x2A30F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A30F0u;
        // 0x2a30f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A30F8u;
        goto label_2a30f8;
    }
    ctx->pc = 0x2A30F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A30F8u);
        ctx->pc = 0x2A30F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A30F0u;
        // 0x2a30f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A30F0u, 0x2A30F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A30F8u;
label_2a30f8:
    // 0x2a30f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2a30f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a30fc:
    // 0x2a30fc: 0x10000010  b           . + 4 + (0x10 << 2)
label_2a3100:
    if (ctx->pc == 0x2A3100u) {
        ctx->pc = 0x2A3100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A30FCu;
        // 0x2a3100: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3104u;
        goto label_2a3104;
    }
    ctx->pc = 0x2A30FCu;
    {
        const bool branch_taken_0x2a30fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A30FCu;
        // 0x2a3100: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a30fc) {
            ctx->pc = 0x2A3140u;
            goto label_2a3140;
        }
    }
    ctx->pc = 0x2A3104u;
label_2a3104:
    // 0x2a3104: 0x0  nop
    ctx->pc = 0x2a3104u;
    // NOP
label_2a3108:
    // 0x2a3108: 0xc07e286  jal         func_1F8A18
label_2a310c:
    if (ctx->pc == 0x2A310Cu) {
        ctx->pc = 0x2A3110u;
        goto label_2a3110;
    }
    ctx->pc = 0x2A3108u;
    SET_GPR_U32(ctx, 31, 0x2A3110u);
    ctx->pc = 0x1F8A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A18u, 0x2A3108u, 0x2A3110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3110u;
label_2a3110:
    // 0x2a3110: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2a3114:
    if (ctx->pc == 0x2A3114u) {
        ctx->pc = 0x2A3114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3110u;
        // 0x2a3114: 0x8e420040  lw          $v0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3118u;
        goto label_2a3118;
    }
    ctx->pc = 0x2A3110u;
    {
        const bool branch_taken_0x2a3110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3110) {
            ctx->pc = 0x2A3114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3110u;
            // 0x2a3114: 0x8e420040  lw          $v0, 0x40($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A312Cu;
            goto label_2a312c;
        }
    }
    ctx->pc = 0x2A3118u;
label_2a3118:
    // 0x2a3118: 0xc07e28a  jal         func_1F8A28
label_2a311c:
    if (ctx->pc == 0x2A311Cu) {
        ctx->pc = 0x2A3120u;
        goto label_2a3120;
    }
    ctx->pc = 0x2A3118u;
    SET_GPR_U32(ctx, 31, 0x2A3120u);
    ctx->pc = 0x1F8A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A28u, 0x2A3118u, 0x2A3120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3120u;
label_2a3120:
    // 0x2a3120: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2a3124:
    if (ctx->pc == 0x2A3124u) {
        ctx->pc = 0x2A3124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3120u;
        // 0x2a3124: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3128u;
        goto label_2a3128;
    }
    ctx->pc = 0x2A3120u;
    {
        const bool branch_taken_0x2a3120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3120u;
        // 0x2a3124: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3120) {
            ctx->pc = 0x2A3144u;
            goto label_2a3144;
        }
    }
    ctx->pc = 0x2A3128u;
label_2a3128:
    // 0x2a3128: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x2a3128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_2a312c:
    // 0x2a312c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2a312cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_2a3130:
    // 0x2a3130: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a3130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a3134:
    // 0x2a3134: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a3134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2a3138:
    // 0x2a3138: 0xae440048  sw          $a0, 0x48($s2)
    ctx->pc = 0x2a3138u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 4));
label_2a313c:
    // 0x2a313c: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x2a313cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_2a3140:
    // 0x2a3140: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2a3140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2a3144:
    // 0x2a3144: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a3144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3148:
    // 0x2a3148: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2a3148u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2a314c:
    // 0x2a314c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2a314cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2a3150:
    // 0x2a3150: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x2a3150u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_2a3154:
    // 0x2a3154: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2a3154u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2a3158:
    // 0x2a3158: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x2a3158u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_2a315c:
    // 0x2a315c: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2a315cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2a3160:
    // 0x2a3160: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x2a3160u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_2a3164:
    // 0x2a3164: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2a3164u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2a3168:
    // 0x2a3168: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x2a3168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_2a316c:
    // 0x2a316c: 0x3e00008  jr          $ra
label_2a3170:
    if (ctx->pc == 0x2A3170u) {
        ctx->pc = 0x2A3170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A316Cu;
        // 0x2a3170: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3174u;
        goto label_2a3174;
    }
    ctx->pc = 0x2A316Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A316Cu;
        // 0x2a3170: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A316Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3174u;
label_2a3174:
    // 0x2a3174: 0x0  nop
    ctx->pc = 0x2a3174u;
    // NOP
    ctx->pc = 0x2a3178u;
}
