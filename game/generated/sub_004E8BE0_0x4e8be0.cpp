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

// Function: sub_004E8BE0
// Address: 0x4e8be0 - 0x4e9588
void sub_004E8BE0_0x4e8be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E8BE0_0x4e8be0");
#endif

    switch (ctx->pc) {
        case 0x4e8be0u: goto label_4e8be0;
        case 0x4e8be4u: goto label_4e8be4;
        case 0x4e8be8u: goto label_4e8be8;
        case 0x4e8becu: goto label_4e8bec;
        case 0x4e8bf0u: goto label_4e8bf0;
        case 0x4e8bf4u: goto label_4e8bf4;
        case 0x4e8bf8u: goto label_4e8bf8;
        case 0x4e8bfcu: goto label_4e8bfc;
        case 0x4e8c00u: goto label_4e8c00;
        case 0x4e8c04u: goto label_4e8c04;
        case 0x4e8c08u: goto label_4e8c08;
        case 0x4e8c0cu: goto label_4e8c0c;
        case 0x4e8c10u: goto label_4e8c10;
        case 0x4e8c14u: goto label_4e8c14;
        case 0x4e8c18u: goto label_4e8c18;
        case 0x4e8c1cu: goto label_4e8c1c;
        case 0x4e8c20u: goto label_4e8c20;
        case 0x4e8c24u: goto label_4e8c24;
        case 0x4e8c28u: goto label_4e8c28;
        case 0x4e8c2cu: goto label_4e8c2c;
        case 0x4e8c30u: goto label_4e8c30;
        case 0x4e8c34u: goto label_4e8c34;
        case 0x4e8c38u: goto label_4e8c38;
        case 0x4e8c3cu: goto label_4e8c3c;
        case 0x4e8c40u: goto label_4e8c40;
        case 0x4e8c44u: goto label_4e8c44;
        case 0x4e8c48u: goto label_4e8c48;
        case 0x4e8c4cu: goto label_4e8c4c;
        case 0x4e8c50u: goto label_4e8c50;
        case 0x4e8c54u: goto label_4e8c54;
        case 0x4e8c58u: goto label_4e8c58;
        case 0x4e8c5cu: goto label_4e8c5c;
        case 0x4e8c60u: goto label_4e8c60;
        case 0x4e8c64u: goto label_4e8c64;
        case 0x4e8c68u: goto label_4e8c68;
        case 0x4e8c6cu: goto label_4e8c6c;
        case 0x4e8c70u: goto label_4e8c70;
        case 0x4e8c74u: goto label_4e8c74;
        case 0x4e8c78u: goto label_4e8c78;
        case 0x4e8c7cu: goto label_4e8c7c;
        case 0x4e8c80u: goto label_4e8c80;
        case 0x4e8c84u: goto label_4e8c84;
        case 0x4e8c88u: goto label_4e8c88;
        case 0x4e8c8cu: goto label_4e8c8c;
        case 0x4e8c90u: goto label_4e8c90;
        case 0x4e8c94u: goto label_4e8c94;
        case 0x4e8c98u: goto label_4e8c98;
        case 0x4e8c9cu: goto label_4e8c9c;
        case 0x4e8ca0u: goto label_4e8ca0;
        case 0x4e8ca4u: goto label_4e8ca4;
        case 0x4e8ca8u: goto label_4e8ca8;
        case 0x4e8cacu: goto label_4e8cac;
        case 0x4e8cb0u: goto label_4e8cb0;
        case 0x4e8cb4u: goto label_4e8cb4;
        case 0x4e8cb8u: goto label_4e8cb8;
        case 0x4e8cbcu: goto label_4e8cbc;
        case 0x4e8cc0u: goto label_4e8cc0;
        case 0x4e8cc4u: goto label_4e8cc4;
        case 0x4e8cc8u: goto label_4e8cc8;
        case 0x4e8cccu: goto label_4e8ccc;
        case 0x4e8cd0u: goto label_4e8cd0;
        case 0x4e8cd4u: goto label_4e8cd4;
        case 0x4e8cd8u: goto label_4e8cd8;
        case 0x4e8cdcu: goto label_4e8cdc;
        case 0x4e8ce0u: goto label_4e8ce0;
        case 0x4e8ce4u: goto label_4e8ce4;
        case 0x4e8ce8u: goto label_4e8ce8;
        case 0x4e8cecu: goto label_4e8cec;
        case 0x4e8cf0u: goto label_4e8cf0;
        case 0x4e8cf4u: goto label_4e8cf4;
        case 0x4e8cf8u: goto label_4e8cf8;
        case 0x4e8cfcu: goto label_4e8cfc;
        case 0x4e8d00u: goto label_4e8d00;
        case 0x4e8d04u: goto label_4e8d04;
        case 0x4e8d08u: goto label_4e8d08;
        case 0x4e8d0cu: goto label_4e8d0c;
        case 0x4e8d10u: goto label_4e8d10;
        case 0x4e8d14u: goto label_4e8d14;
        case 0x4e8d18u: goto label_4e8d18;
        case 0x4e8d1cu: goto label_4e8d1c;
        case 0x4e8d20u: goto label_4e8d20;
        case 0x4e8d24u: goto label_4e8d24;
        case 0x4e8d28u: goto label_4e8d28;
        case 0x4e8d2cu: goto label_4e8d2c;
        case 0x4e8d30u: goto label_4e8d30;
        case 0x4e8d34u: goto label_4e8d34;
        case 0x4e8d38u: goto label_4e8d38;
        case 0x4e8d3cu: goto label_4e8d3c;
        case 0x4e8d40u: goto label_4e8d40;
        case 0x4e8d44u: goto label_4e8d44;
        case 0x4e8d48u: goto label_4e8d48;
        case 0x4e8d4cu: goto label_4e8d4c;
        case 0x4e8d50u: goto label_4e8d50;
        case 0x4e8d54u: goto label_4e8d54;
        case 0x4e8d58u: goto label_4e8d58;
        case 0x4e8d5cu: goto label_4e8d5c;
        case 0x4e8d60u: goto label_4e8d60;
        case 0x4e8d64u: goto label_4e8d64;
        case 0x4e8d68u: goto label_4e8d68;
        case 0x4e8d6cu: goto label_4e8d6c;
        case 0x4e8d70u: goto label_4e8d70;
        case 0x4e8d74u: goto label_4e8d74;
        case 0x4e8d78u: goto label_4e8d78;
        case 0x4e8d7cu: goto label_4e8d7c;
        case 0x4e8d80u: goto label_4e8d80;
        case 0x4e8d84u: goto label_4e8d84;
        case 0x4e8d88u: goto label_4e8d88;
        case 0x4e8d8cu: goto label_4e8d8c;
        case 0x4e8d90u: goto label_4e8d90;
        case 0x4e8d94u: goto label_4e8d94;
        case 0x4e8d98u: goto label_4e8d98;
        case 0x4e8d9cu: goto label_4e8d9c;
        case 0x4e8da0u: goto label_4e8da0;
        case 0x4e8da4u: goto label_4e8da4;
        case 0x4e8da8u: goto label_4e8da8;
        case 0x4e8dacu: goto label_4e8dac;
        case 0x4e8db0u: goto label_4e8db0;
        case 0x4e8db4u: goto label_4e8db4;
        case 0x4e8db8u: goto label_4e8db8;
        case 0x4e8dbcu: goto label_4e8dbc;
        case 0x4e8dc0u: goto label_4e8dc0;
        case 0x4e8dc4u: goto label_4e8dc4;
        case 0x4e8dc8u: goto label_4e8dc8;
        case 0x4e8dccu: goto label_4e8dcc;
        case 0x4e8dd0u: goto label_4e8dd0;
        case 0x4e8dd4u: goto label_4e8dd4;
        case 0x4e8dd8u: goto label_4e8dd8;
        case 0x4e8ddcu: goto label_4e8ddc;
        case 0x4e8de0u: goto label_4e8de0;
        case 0x4e8de4u: goto label_4e8de4;
        case 0x4e8de8u: goto label_4e8de8;
        case 0x4e8decu: goto label_4e8dec;
        case 0x4e8df0u: goto label_4e8df0;
        case 0x4e8df4u: goto label_4e8df4;
        case 0x4e8df8u: goto label_4e8df8;
        case 0x4e8dfcu: goto label_4e8dfc;
        case 0x4e8e00u: goto label_4e8e00;
        case 0x4e8e04u: goto label_4e8e04;
        case 0x4e8e08u: goto label_4e8e08;
        case 0x4e8e0cu: goto label_4e8e0c;
        case 0x4e8e10u: goto label_4e8e10;
        case 0x4e8e14u: goto label_4e8e14;
        case 0x4e8e18u: goto label_4e8e18;
        case 0x4e8e1cu: goto label_4e8e1c;
        case 0x4e8e20u: goto label_4e8e20;
        case 0x4e8e24u: goto label_4e8e24;
        case 0x4e8e28u: goto label_4e8e28;
        case 0x4e8e2cu: goto label_4e8e2c;
        case 0x4e8e30u: goto label_4e8e30;
        case 0x4e8e34u: goto label_4e8e34;
        case 0x4e8e38u: goto label_4e8e38;
        case 0x4e8e3cu: goto label_4e8e3c;
        case 0x4e8e40u: goto label_4e8e40;
        case 0x4e8e44u: goto label_4e8e44;
        case 0x4e8e48u: goto label_4e8e48;
        case 0x4e8e4cu: goto label_4e8e4c;
        case 0x4e8e50u: goto label_4e8e50;
        case 0x4e8e54u: goto label_4e8e54;
        case 0x4e8e58u: goto label_4e8e58;
        case 0x4e8e5cu: goto label_4e8e5c;
        case 0x4e8e60u: goto label_4e8e60;
        case 0x4e8e64u: goto label_4e8e64;
        case 0x4e8e68u: goto label_4e8e68;
        case 0x4e8e6cu: goto label_4e8e6c;
        case 0x4e8e70u: goto label_4e8e70;
        case 0x4e8e74u: goto label_4e8e74;
        case 0x4e8e78u: goto label_4e8e78;
        case 0x4e8e7cu: goto label_4e8e7c;
        case 0x4e8e80u: goto label_4e8e80;
        case 0x4e8e84u: goto label_4e8e84;
        case 0x4e8e88u: goto label_4e8e88;
        case 0x4e8e8cu: goto label_4e8e8c;
        case 0x4e8e90u: goto label_4e8e90;
        case 0x4e8e94u: goto label_4e8e94;
        case 0x4e8e98u: goto label_4e8e98;
        case 0x4e8e9cu: goto label_4e8e9c;
        case 0x4e8ea0u: goto label_4e8ea0;
        case 0x4e8ea4u: goto label_4e8ea4;
        case 0x4e8ea8u: goto label_4e8ea8;
        case 0x4e8eacu: goto label_4e8eac;
        case 0x4e8eb0u: goto label_4e8eb0;
        case 0x4e8eb4u: goto label_4e8eb4;
        case 0x4e8eb8u: goto label_4e8eb8;
        case 0x4e8ebcu: goto label_4e8ebc;
        case 0x4e8ec0u: goto label_4e8ec0;
        case 0x4e8ec4u: goto label_4e8ec4;
        case 0x4e8ec8u: goto label_4e8ec8;
        case 0x4e8eccu: goto label_4e8ecc;
        case 0x4e8ed0u: goto label_4e8ed0;
        case 0x4e8ed4u: goto label_4e8ed4;
        case 0x4e8ed8u: goto label_4e8ed8;
        case 0x4e8edcu: goto label_4e8edc;
        case 0x4e8ee0u: goto label_4e8ee0;
        case 0x4e8ee4u: goto label_4e8ee4;
        case 0x4e8ee8u: goto label_4e8ee8;
        case 0x4e8eecu: goto label_4e8eec;
        case 0x4e8ef0u: goto label_4e8ef0;
        case 0x4e8ef4u: goto label_4e8ef4;
        case 0x4e8ef8u: goto label_4e8ef8;
        case 0x4e8efcu: goto label_4e8efc;
        case 0x4e8f00u: goto label_4e8f00;
        case 0x4e8f04u: goto label_4e8f04;
        case 0x4e8f08u: goto label_4e8f08;
        case 0x4e8f0cu: goto label_4e8f0c;
        case 0x4e8f10u: goto label_4e8f10;
        case 0x4e8f14u: goto label_4e8f14;
        case 0x4e8f18u: goto label_4e8f18;
        case 0x4e8f1cu: goto label_4e8f1c;
        case 0x4e8f20u: goto label_4e8f20;
        case 0x4e8f24u: goto label_4e8f24;
        case 0x4e8f28u: goto label_4e8f28;
        case 0x4e8f2cu: goto label_4e8f2c;
        case 0x4e8f30u: goto label_4e8f30;
        case 0x4e8f34u: goto label_4e8f34;
        case 0x4e8f38u: goto label_4e8f38;
        case 0x4e8f3cu: goto label_4e8f3c;
        case 0x4e8f40u: goto label_4e8f40;
        case 0x4e8f44u: goto label_4e8f44;
        case 0x4e8f48u: goto label_4e8f48;
        case 0x4e8f4cu: goto label_4e8f4c;
        case 0x4e8f50u: goto label_4e8f50;
        case 0x4e8f54u: goto label_4e8f54;
        case 0x4e8f58u: goto label_4e8f58;
        case 0x4e8f5cu: goto label_4e8f5c;
        case 0x4e8f60u: goto label_4e8f60;
        case 0x4e8f64u: goto label_4e8f64;
        case 0x4e8f68u: goto label_4e8f68;
        case 0x4e8f6cu: goto label_4e8f6c;
        case 0x4e8f70u: goto label_4e8f70;
        case 0x4e8f74u: goto label_4e8f74;
        case 0x4e8f78u: goto label_4e8f78;
        case 0x4e8f7cu: goto label_4e8f7c;
        case 0x4e8f80u: goto label_4e8f80;
        case 0x4e8f84u: goto label_4e8f84;
        case 0x4e8f88u: goto label_4e8f88;
        case 0x4e8f8cu: goto label_4e8f8c;
        case 0x4e8f90u: goto label_4e8f90;
        case 0x4e8f94u: goto label_4e8f94;
        case 0x4e8f98u: goto label_4e8f98;
        case 0x4e8f9cu: goto label_4e8f9c;
        case 0x4e8fa0u: goto label_4e8fa0;
        case 0x4e8fa4u: goto label_4e8fa4;
        case 0x4e8fa8u: goto label_4e8fa8;
        case 0x4e8facu: goto label_4e8fac;
        case 0x4e8fb0u: goto label_4e8fb0;
        case 0x4e8fb4u: goto label_4e8fb4;
        case 0x4e8fb8u: goto label_4e8fb8;
        case 0x4e8fbcu: goto label_4e8fbc;
        case 0x4e8fc0u: goto label_4e8fc0;
        case 0x4e8fc4u: goto label_4e8fc4;
        case 0x4e8fc8u: goto label_4e8fc8;
        case 0x4e8fccu: goto label_4e8fcc;
        case 0x4e8fd0u: goto label_4e8fd0;
        case 0x4e8fd4u: goto label_4e8fd4;
        case 0x4e8fd8u: goto label_4e8fd8;
        case 0x4e8fdcu: goto label_4e8fdc;
        case 0x4e8fe0u: goto label_4e8fe0;
        case 0x4e8fe4u: goto label_4e8fe4;
        case 0x4e8fe8u: goto label_4e8fe8;
        case 0x4e8fecu: goto label_4e8fec;
        case 0x4e8ff0u: goto label_4e8ff0;
        case 0x4e8ff4u: goto label_4e8ff4;
        case 0x4e8ff8u: goto label_4e8ff8;
        case 0x4e8ffcu: goto label_4e8ffc;
        case 0x4e9000u: goto label_4e9000;
        case 0x4e9004u: goto label_4e9004;
        case 0x4e9008u: goto label_4e9008;
        case 0x4e900cu: goto label_4e900c;
        case 0x4e9010u: goto label_4e9010;
        case 0x4e9014u: goto label_4e9014;
        case 0x4e9018u: goto label_4e9018;
        case 0x4e901cu: goto label_4e901c;
        case 0x4e9020u: goto label_4e9020;
        case 0x4e9024u: goto label_4e9024;
        case 0x4e9028u: goto label_4e9028;
        case 0x4e902cu: goto label_4e902c;
        case 0x4e9030u: goto label_4e9030;
        case 0x4e9034u: goto label_4e9034;
        case 0x4e9038u: goto label_4e9038;
        case 0x4e903cu: goto label_4e903c;
        case 0x4e9040u: goto label_4e9040;
        case 0x4e9044u: goto label_4e9044;
        case 0x4e9048u: goto label_4e9048;
        case 0x4e904cu: goto label_4e904c;
        case 0x4e9050u: goto label_4e9050;
        case 0x4e9054u: goto label_4e9054;
        case 0x4e9058u: goto label_4e9058;
        case 0x4e905cu: goto label_4e905c;
        case 0x4e9060u: goto label_4e9060;
        case 0x4e9064u: goto label_4e9064;
        case 0x4e9068u: goto label_4e9068;
        case 0x4e906cu: goto label_4e906c;
        case 0x4e9070u: goto label_4e9070;
        case 0x4e9074u: goto label_4e9074;
        case 0x4e9078u: goto label_4e9078;
        case 0x4e907cu: goto label_4e907c;
        case 0x4e9080u: goto label_4e9080;
        case 0x4e9084u: goto label_4e9084;
        case 0x4e9088u: goto label_4e9088;
        case 0x4e908cu: goto label_4e908c;
        case 0x4e9090u: goto label_4e9090;
        case 0x4e9094u: goto label_4e9094;
        case 0x4e9098u: goto label_4e9098;
        case 0x4e909cu: goto label_4e909c;
        case 0x4e90a0u: goto label_4e90a0;
        case 0x4e90a4u: goto label_4e90a4;
        case 0x4e90a8u: goto label_4e90a8;
        case 0x4e90acu: goto label_4e90ac;
        case 0x4e90b0u: goto label_4e90b0;
        case 0x4e90b4u: goto label_4e90b4;
        case 0x4e90b8u: goto label_4e90b8;
        case 0x4e90bcu: goto label_4e90bc;
        case 0x4e90c0u: goto label_4e90c0;
        case 0x4e90c4u: goto label_4e90c4;
        case 0x4e90c8u: goto label_4e90c8;
        case 0x4e90ccu: goto label_4e90cc;
        case 0x4e90d0u: goto label_4e90d0;
        case 0x4e90d4u: goto label_4e90d4;
        case 0x4e90d8u: goto label_4e90d8;
        case 0x4e90dcu: goto label_4e90dc;
        case 0x4e90e0u: goto label_4e90e0;
        case 0x4e90e4u: goto label_4e90e4;
        case 0x4e90e8u: goto label_4e90e8;
        case 0x4e90ecu: goto label_4e90ec;
        case 0x4e90f0u: goto label_4e90f0;
        case 0x4e90f4u: goto label_4e90f4;
        case 0x4e90f8u: goto label_4e90f8;
        case 0x4e90fcu: goto label_4e90fc;
        case 0x4e9100u: goto label_4e9100;
        case 0x4e9104u: goto label_4e9104;
        case 0x4e9108u: goto label_4e9108;
        case 0x4e910cu: goto label_4e910c;
        case 0x4e9110u: goto label_4e9110;
        case 0x4e9114u: goto label_4e9114;
        case 0x4e9118u: goto label_4e9118;
        case 0x4e911cu: goto label_4e911c;
        case 0x4e9120u: goto label_4e9120;
        case 0x4e9124u: goto label_4e9124;
        case 0x4e9128u: goto label_4e9128;
        case 0x4e912cu: goto label_4e912c;
        case 0x4e9130u: goto label_4e9130;
        case 0x4e9134u: goto label_4e9134;
        case 0x4e9138u: goto label_4e9138;
        case 0x4e913cu: goto label_4e913c;
        case 0x4e9140u: goto label_4e9140;
        case 0x4e9144u: goto label_4e9144;
        case 0x4e9148u: goto label_4e9148;
        case 0x4e914cu: goto label_4e914c;
        case 0x4e9150u: goto label_4e9150;
        case 0x4e9154u: goto label_4e9154;
        case 0x4e9158u: goto label_4e9158;
        case 0x4e915cu: goto label_4e915c;
        case 0x4e9160u: goto label_4e9160;
        case 0x4e9164u: goto label_4e9164;
        case 0x4e9168u: goto label_4e9168;
        case 0x4e916cu: goto label_4e916c;
        case 0x4e9170u: goto label_4e9170;
        case 0x4e9174u: goto label_4e9174;
        case 0x4e9178u: goto label_4e9178;
        case 0x4e917cu: goto label_4e917c;
        case 0x4e9180u: goto label_4e9180;
        case 0x4e9184u: goto label_4e9184;
        case 0x4e9188u: goto label_4e9188;
        case 0x4e918cu: goto label_4e918c;
        case 0x4e9190u: goto label_4e9190;
        case 0x4e9194u: goto label_4e9194;
        case 0x4e9198u: goto label_4e9198;
        case 0x4e919cu: goto label_4e919c;
        case 0x4e91a0u: goto label_4e91a0;
        case 0x4e91a4u: goto label_4e91a4;
        case 0x4e91a8u: goto label_4e91a8;
        case 0x4e91acu: goto label_4e91ac;
        case 0x4e91b0u: goto label_4e91b0;
        case 0x4e91b4u: goto label_4e91b4;
        case 0x4e91b8u: goto label_4e91b8;
        case 0x4e91bcu: goto label_4e91bc;
        case 0x4e91c0u: goto label_4e91c0;
        case 0x4e91c4u: goto label_4e91c4;
        case 0x4e91c8u: goto label_4e91c8;
        case 0x4e91ccu: goto label_4e91cc;
        case 0x4e91d0u: goto label_4e91d0;
        case 0x4e91d4u: goto label_4e91d4;
        case 0x4e91d8u: goto label_4e91d8;
        case 0x4e91dcu: goto label_4e91dc;
        case 0x4e91e0u: goto label_4e91e0;
        case 0x4e91e4u: goto label_4e91e4;
        case 0x4e91e8u: goto label_4e91e8;
        case 0x4e91ecu: goto label_4e91ec;
        case 0x4e91f0u: goto label_4e91f0;
        case 0x4e91f4u: goto label_4e91f4;
        case 0x4e91f8u: goto label_4e91f8;
        case 0x4e91fcu: goto label_4e91fc;
        case 0x4e9200u: goto label_4e9200;
        case 0x4e9204u: goto label_4e9204;
        case 0x4e9208u: goto label_4e9208;
        case 0x4e920cu: goto label_4e920c;
        case 0x4e9210u: goto label_4e9210;
        case 0x4e9214u: goto label_4e9214;
        case 0x4e9218u: goto label_4e9218;
        case 0x4e921cu: goto label_4e921c;
        case 0x4e9220u: goto label_4e9220;
        case 0x4e9224u: goto label_4e9224;
        case 0x4e9228u: goto label_4e9228;
        case 0x4e922cu: goto label_4e922c;
        case 0x4e9230u: goto label_4e9230;
        case 0x4e9234u: goto label_4e9234;
        case 0x4e9238u: goto label_4e9238;
        case 0x4e923cu: goto label_4e923c;
        case 0x4e9240u: goto label_4e9240;
        case 0x4e9244u: goto label_4e9244;
        case 0x4e9248u: goto label_4e9248;
        case 0x4e924cu: goto label_4e924c;
        case 0x4e9250u: goto label_4e9250;
        case 0x4e9254u: goto label_4e9254;
        case 0x4e9258u: goto label_4e9258;
        case 0x4e925cu: goto label_4e925c;
        case 0x4e9260u: goto label_4e9260;
        case 0x4e9264u: goto label_4e9264;
        case 0x4e9268u: goto label_4e9268;
        case 0x4e926cu: goto label_4e926c;
        case 0x4e9270u: goto label_4e9270;
        case 0x4e9274u: goto label_4e9274;
        case 0x4e9278u: goto label_4e9278;
        case 0x4e927cu: goto label_4e927c;
        case 0x4e9280u: goto label_4e9280;
        case 0x4e9284u: goto label_4e9284;
        case 0x4e9288u: goto label_4e9288;
        case 0x4e928cu: goto label_4e928c;
        case 0x4e9290u: goto label_4e9290;
        case 0x4e9294u: goto label_4e9294;
        case 0x4e9298u: goto label_4e9298;
        case 0x4e929cu: goto label_4e929c;
        case 0x4e92a0u: goto label_4e92a0;
        case 0x4e92a4u: goto label_4e92a4;
        case 0x4e92a8u: goto label_4e92a8;
        case 0x4e92acu: goto label_4e92ac;
        case 0x4e92b0u: goto label_4e92b0;
        case 0x4e92b4u: goto label_4e92b4;
        case 0x4e92b8u: goto label_4e92b8;
        case 0x4e92bcu: goto label_4e92bc;
        case 0x4e92c0u: goto label_4e92c0;
        case 0x4e92c4u: goto label_4e92c4;
        case 0x4e92c8u: goto label_4e92c8;
        case 0x4e92ccu: goto label_4e92cc;
        case 0x4e92d0u: goto label_4e92d0;
        case 0x4e92d4u: goto label_4e92d4;
        case 0x4e92d8u: goto label_4e92d8;
        case 0x4e92dcu: goto label_4e92dc;
        case 0x4e92e0u: goto label_4e92e0;
        case 0x4e92e4u: goto label_4e92e4;
        case 0x4e92e8u: goto label_4e92e8;
        case 0x4e92ecu: goto label_4e92ec;
        case 0x4e92f0u: goto label_4e92f0;
        case 0x4e92f4u: goto label_4e92f4;
        case 0x4e92f8u: goto label_4e92f8;
        case 0x4e92fcu: goto label_4e92fc;
        case 0x4e9300u: goto label_4e9300;
        case 0x4e9304u: goto label_4e9304;
        case 0x4e9308u: goto label_4e9308;
        case 0x4e930cu: goto label_4e930c;
        case 0x4e9310u: goto label_4e9310;
        case 0x4e9314u: goto label_4e9314;
        case 0x4e9318u: goto label_4e9318;
        case 0x4e931cu: goto label_4e931c;
        case 0x4e9320u: goto label_4e9320;
        case 0x4e9324u: goto label_4e9324;
        case 0x4e9328u: goto label_4e9328;
        case 0x4e932cu: goto label_4e932c;
        case 0x4e9330u: goto label_4e9330;
        case 0x4e9334u: goto label_4e9334;
        case 0x4e9338u: goto label_4e9338;
        case 0x4e933cu: goto label_4e933c;
        case 0x4e9340u: goto label_4e9340;
        case 0x4e9344u: goto label_4e9344;
        case 0x4e9348u: goto label_4e9348;
        case 0x4e934cu: goto label_4e934c;
        case 0x4e9350u: goto label_4e9350;
        case 0x4e9354u: goto label_4e9354;
        case 0x4e9358u: goto label_4e9358;
        case 0x4e935cu: goto label_4e935c;
        case 0x4e9360u: goto label_4e9360;
        case 0x4e9364u: goto label_4e9364;
        case 0x4e9368u: goto label_4e9368;
        case 0x4e936cu: goto label_4e936c;
        case 0x4e9370u: goto label_4e9370;
        case 0x4e9374u: goto label_4e9374;
        case 0x4e9378u: goto label_4e9378;
        case 0x4e937cu: goto label_4e937c;
        case 0x4e9380u: goto label_4e9380;
        case 0x4e9384u: goto label_4e9384;
        case 0x4e9388u: goto label_4e9388;
        case 0x4e938cu: goto label_4e938c;
        case 0x4e9390u: goto label_4e9390;
        case 0x4e9394u: goto label_4e9394;
        case 0x4e9398u: goto label_4e9398;
        case 0x4e939cu: goto label_4e939c;
        case 0x4e93a0u: goto label_4e93a0;
        case 0x4e93a4u: goto label_4e93a4;
        case 0x4e93a8u: goto label_4e93a8;
        case 0x4e93acu: goto label_4e93ac;
        case 0x4e93b0u: goto label_4e93b0;
        case 0x4e93b4u: goto label_4e93b4;
        case 0x4e93b8u: goto label_4e93b8;
        case 0x4e93bcu: goto label_4e93bc;
        case 0x4e93c0u: goto label_4e93c0;
        case 0x4e93c4u: goto label_4e93c4;
        case 0x4e93c8u: goto label_4e93c8;
        case 0x4e93ccu: goto label_4e93cc;
        case 0x4e93d0u: goto label_4e93d0;
        case 0x4e93d4u: goto label_4e93d4;
        case 0x4e93d8u: goto label_4e93d8;
        case 0x4e93dcu: goto label_4e93dc;
        case 0x4e93e0u: goto label_4e93e0;
        case 0x4e93e4u: goto label_4e93e4;
        case 0x4e93e8u: goto label_4e93e8;
        case 0x4e93ecu: goto label_4e93ec;
        case 0x4e93f0u: goto label_4e93f0;
        case 0x4e93f4u: goto label_4e93f4;
        case 0x4e93f8u: goto label_4e93f8;
        case 0x4e93fcu: goto label_4e93fc;
        case 0x4e9400u: goto label_4e9400;
        case 0x4e9404u: goto label_4e9404;
        case 0x4e9408u: goto label_4e9408;
        case 0x4e940cu: goto label_4e940c;
        case 0x4e9410u: goto label_4e9410;
        case 0x4e9414u: goto label_4e9414;
        case 0x4e9418u: goto label_4e9418;
        case 0x4e941cu: goto label_4e941c;
        case 0x4e9420u: goto label_4e9420;
        case 0x4e9424u: goto label_4e9424;
        case 0x4e9428u: goto label_4e9428;
        case 0x4e942cu: goto label_4e942c;
        case 0x4e9430u: goto label_4e9430;
        case 0x4e9434u: goto label_4e9434;
        case 0x4e9438u: goto label_4e9438;
        case 0x4e943cu: goto label_4e943c;
        case 0x4e9440u: goto label_4e9440;
        case 0x4e9444u: goto label_4e9444;
        case 0x4e9448u: goto label_4e9448;
        case 0x4e944cu: goto label_4e944c;
        case 0x4e9450u: goto label_4e9450;
        case 0x4e9454u: goto label_4e9454;
        case 0x4e9458u: goto label_4e9458;
        case 0x4e945cu: goto label_4e945c;
        case 0x4e9460u: goto label_4e9460;
        case 0x4e9464u: goto label_4e9464;
        case 0x4e9468u: goto label_4e9468;
        case 0x4e946cu: goto label_4e946c;
        case 0x4e9470u: goto label_4e9470;
        case 0x4e9474u: goto label_4e9474;
        case 0x4e9478u: goto label_4e9478;
        case 0x4e947cu: goto label_4e947c;
        case 0x4e9480u: goto label_4e9480;
        case 0x4e9484u: goto label_4e9484;
        case 0x4e9488u: goto label_4e9488;
        case 0x4e948cu: goto label_4e948c;
        case 0x4e9490u: goto label_4e9490;
        case 0x4e9494u: goto label_4e9494;
        case 0x4e9498u: goto label_4e9498;
        case 0x4e949cu: goto label_4e949c;
        case 0x4e94a0u: goto label_4e94a0;
        case 0x4e94a4u: goto label_4e94a4;
        case 0x4e94a8u: goto label_4e94a8;
        case 0x4e94acu: goto label_4e94ac;
        case 0x4e94b0u: goto label_4e94b0;
        case 0x4e94b4u: goto label_4e94b4;
        case 0x4e94b8u: goto label_4e94b8;
        case 0x4e94bcu: goto label_4e94bc;
        case 0x4e94c0u: goto label_4e94c0;
        case 0x4e94c4u: goto label_4e94c4;
        case 0x4e94c8u: goto label_4e94c8;
        case 0x4e94ccu: goto label_4e94cc;
        case 0x4e94d0u: goto label_4e94d0;
        case 0x4e94d4u: goto label_4e94d4;
        case 0x4e94d8u: goto label_4e94d8;
        case 0x4e94dcu: goto label_4e94dc;
        case 0x4e94e0u: goto label_4e94e0;
        case 0x4e94e4u: goto label_4e94e4;
        case 0x4e94e8u: goto label_4e94e8;
        case 0x4e94ecu: goto label_4e94ec;
        case 0x4e94f0u: goto label_4e94f0;
        case 0x4e94f4u: goto label_4e94f4;
        case 0x4e94f8u: goto label_4e94f8;
        case 0x4e94fcu: goto label_4e94fc;
        case 0x4e9500u: goto label_4e9500;
        case 0x4e9504u: goto label_4e9504;
        case 0x4e9508u: goto label_4e9508;
        case 0x4e950cu: goto label_4e950c;
        case 0x4e9510u: goto label_4e9510;
        case 0x4e9514u: goto label_4e9514;
        case 0x4e9518u: goto label_4e9518;
        case 0x4e951cu: goto label_4e951c;
        case 0x4e9520u: goto label_4e9520;
        case 0x4e9524u: goto label_4e9524;
        case 0x4e9528u: goto label_4e9528;
        case 0x4e952cu: goto label_4e952c;
        case 0x4e9530u: goto label_4e9530;
        case 0x4e9534u: goto label_4e9534;
        case 0x4e9538u: goto label_4e9538;
        case 0x4e953cu: goto label_4e953c;
        case 0x4e9540u: goto label_4e9540;
        case 0x4e9544u: goto label_4e9544;
        case 0x4e9548u: goto label_4e9548;
        case 0x4e954cu: goto label_4e954c;
        case 0x4e9550u: goto label_4e9550;
        case 0x4e9554u: goto label_4e9554;
        case 0x4e9558u: goto label_4e9558;
        case 0x4e955cu: goto label_4e955c;
        case 0x4e9560u: goto label_4e9560;
        case 0x4e9564u: goto label_4e9564;
        case 0x4e9568u: goto label_4e9568;
        case 0x4e956cu: goto label_4e956c;
        case 0x4e9570u: goto label_4e9570;
        case 0x4e9574u: goto label_4e9574;
        case 0x4e9578u: goto label_4e9578;
        case 0x4e957cu: goto label_4e957c;
        case 0x4e9580u: goto label_4e9580;
        case 0x4e9584u: goto label_4e9584;
        default: break;
    }

    ctx->pc = 0x4e8be0u;

label_4e8be0:
    // 0x4e8be0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e8be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e8be4:
    // 0x4e8be4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e8be4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e8be8:
    // 0x4e8be8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e8be8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4e8bec:
    // 0x4e8bec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e8becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e8bf0:
    // 0x4e8bf0: 0x813bcb2  j           func_4EF2C8
label_4e8bf4:
    if (ctx->pc == 0x4E8BF4u) {
        ctx->pc = 0x4E8BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8BF0u;
        // 0x4e8bf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8BF8u;
        goto label_4e8bf8;
    }
    ctx->pc = 0x4E8BF0u;
    ctx->pc = 0x4E8BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8BF0u;
    // 0x4e8bf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF2C8u;
    sub_004EF2C8_0x4ef2c8(rdram, ctx, runtime); return;
    ctx->pc = 0x4E8BF8u;
label_4e8bf8:
    // 0x4e8bf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e8bf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4e8bfc:
    // 0x4e8bfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e8bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e8c00:
    // 0x4e8c00: 0x3e00008  jr          $ra
label_4e8c04:
    if (ctx->pc == 0x4E8C04u) {
        ctx->pc = 0x4E8C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8C00u;
        // 0x4e8c04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8C08u;
        goto label_4e8c08;
    }
    ctx->pc = 0x4E8C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E8C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8C00u;
        // 0x4e8c04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E8C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E8C08u;
label_4e8c08:
    // 0x4e8c08: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4e8c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4e8c0c:
    // 0x4e8c0c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4e8c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_4e8c10:
    // 0x4e8c10: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4e8c10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
label_4e8c14:
    // 0x4e8c14: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4e8c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_4e8c18:
    // 0x4e8c18: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4e8c18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e8c1c:
    // 0x4e8c1c: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x4e8c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_4e8c20:
    // 0x4e8c20: 0x26570018  addiu       $s7, $s2, 0x18
    ctx->pc = 0x4e8c20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_4e8c24:
    // 0x4e8c24: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x4e8c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_4e8c28:
    // 0x4e8c28: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4e8c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_4e8c2c:
    // 0x4e8c2c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x4e8c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_4e8c30:
    // 0x4e8c30: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4e8c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_4e8c34:
    // 0x4e8c34: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x4e8c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_4e8c38:
    // 0x4e8c38: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x4e8c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_4e8c3c:
    // 0x4e8c3c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x4e8c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_4e8c40:
    // 0x4e8c40: 0xc12b5dc  jal         func_4AD770
label_4e8c44:
    if (ctx->pc == 0x4E8C44u) {
        ctx->pc = 0x4E8C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8C40u;
        // 0x4e8c44: 0x265e0014  addiu       $fp, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8C48u;
        goto label_4e8c48;
    }
    ctx->pc = 0x4E8C40u;
    SET_GPR_U32(ctx, 31, 0x4E8C48u);
    ctx->pc = 0x4E8C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8C40u;
    // 0x4e8c44: 0x265e0014  addiu       $fp, $s2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4E8C40u, 0x4E8C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8C48u;
label_4e8c48:
    // 0x4e8c48: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x4e8c48u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e8c4c:
    // 0x4e8c4c: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x4e8c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_4e8c50:
    // 0x4e8c50: 0xa5820008  sh          $v0, 0x8($t4)
    ctx->pc = 0x4e8c50u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 8), (uint16_t)GPR_U32(ctx, 2));
label_4e8c54:
    // 0x4e8c54: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x4e8c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_4e8c58:
    // 0x4e8c58: 0xad920140  sw          $s2, 0x140($t4)
    ctx->pc = 0x4e8c58u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 320), GPR_U32(ctx, 18));
label_4e8c5c:
    // 0x4e8c5c: 0x25840010  addiu       $a0, $t4, 0x10
    ctx->pc = 0x4e8c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
label_4e8c60:
    // 0x4e8c60: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4e8c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4e8c64:
    // 0x4e8c64: 0x25850014  addiu       $a1, $t4, 0x14
    ctx->pc = 0x4e8c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 20));
label_4e8c68:
    // 0x4e8c68: 0x25860018  addiu       $a2, $t4, 0x18
    ctx->pc = 0x4e8c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 24));
label_4e8c6c:
    // 0x4e8c6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4e8c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e8c70:
    // 0x4e8c70: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4e8c70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_4e8c74:
    // 0x4e8c74: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4e8c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4e8c78:
    // 0x4e8c78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4e8c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4e8c7c:
    // 0x4e8c7c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e8c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4e8c80:
    // 0x4e8c80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e8c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e8c84:
    // 0x4e8c84: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4e8c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_4e8c88:
    // 0x4e8c88: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4e8c88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4e8c8c:
    // 0x4e8c8c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4e8c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4e8c90:
    // 0x4e8c90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4e8c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4e8c94:
    // 0x4e8c94: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e8c94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4e8c98:
    // 0x4e8c98: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x4e8c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4e8c9c:
    // 0x4e8c9c: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4e8c9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4e8ca0:
    // 0x4e8ca0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4e8ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4e8ca4:
    // 0x4e8ca4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4e8ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4e8ca8:
    // 0x4e8ca8: 0xc12b5dc  jal         func_4AD770
label_4e8cac:
    if (ctx->pc == 0x4E8CACu) {
        ctx->pc = 0x4E8CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8CA8u;
        // 0x4e8cac: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8CB0u;
        goto label_4e8cb0;
    }
    ctx->pc = 0x4E8CA8u;
    SET_GPR_U32(ctx, 31, 0x4E8CB0u);
    ctx->pc = 0x4E8CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8CA8u;
    // 0x4e8cac: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4E8CA8u, 0x4E8CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8CB0u;
label_4e8cb0:
    // 0x4e8cb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e8cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e8cb4:
    // 0x4e8cb4: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x4e8cb4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e8cb8:
    // 0x4e8cb8: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x4e8cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
label_4e8cbc:
    // 0x4e8cbc: 0xa5820008  sh          $v0, 0x8($t4)
    ctx->pc = 0x4e8cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 8), (uint16_t)GPR_U32(ctx, 2));
label_4e8cc0:
    // 0x4e8cc0: 0x25850010  addiu       $a1, $t4, 0x10
    ctx->pc = 0x4e8cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
label_4e8cc4:
    // 0x4e8cc4: 0xad920140  sw          $s2, 0x140($t4)
    ctx->pc = 0x4e8cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 320), GPR_U32(ctx, 18));
label_4e8cc8:
    // 0x4e8cc8: 0x25860014  addiu       $a2, $t4, 0x14
    ctx->pc = 0x4e8cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 20));
label_4e8ccc:
    // 0x4e8ccc: 0x25870018  addiu       $a3, $t4, 0x18
    ctx->pc = 0x4e8cccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 24));
label_4e8cd0:
    // 0x4e8cd0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4e8cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4e8cd4:
    // 0x4e8cd4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4e8cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4e8cd8:
    // 0x4e8cd8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4e8cd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4e8cdc:
    // 0x4e8cdc: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4e8cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4e8ce0:
    // 0x4e8ce0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4e8ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4e8ce4:
    // 0x4e8ce4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e8ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4e8ce8:
    // 0x4e8ce8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4e8ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_4e8cec:
    // 0x4e8cec: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4e8cecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4e8cf0:
    // 0x4e8cf0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4e8cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4e8cf4:
    // 0x4e8cf4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4e8cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4e8cf8:
    // 0x4e8cf8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4e8cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_4e8cfc:
    // 0x4e8cfc: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x4e8cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4e8d00:
    // 0x4e8d00: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4e8d00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_4e8d04:
    // 0x4e8d04: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4e8d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4e8d08:
    // 0x4e8d08: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4e8d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4e8d0c:
    // 0x4e8d0c: 0xc12b5f2  jal         func_4AD7C8
label_4e8d10:
    if (ctx->pc == 0x4E8D10u) {
        ctx->pc = 0x4E8D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8D0Cu;
        // 0x4e8d10: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8D14u;
        goto label_4e8d14;
    }
    ctx->pc = 0x4E8D0Cu;
    SET_GPR_U32(ctx, 31, 0x4E8D14u);
    ctx->pc = 0x4E8D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8D0Cu;
    // 0x4e8d10: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD7C8u, 0x4E8D0Cu, 0x4E8D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8D14u;
label_4e8d14:
    // 0x4e8d14: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4e8d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_4e8d18:
    // 0x4e8d18: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x4e8d18u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e8d1c:
    // 0x4e8d1c: 0x2402009d  addiu       $v0, $zero, 0x9D
    ctx->pc = 0x4e8d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
label_4e8d20:
    // 0x4e8d20: 0xa5820008  sh          $v0, 0x8($t4)
    ctx->pc = 0x4e8d20u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 8), (uint16_t)GPR_U32(ctx, 2));
label_4e8d24:
    // 0x4e8d24: 0x25850010  addiu       $a1, $t4, 0x10
    ctx->pc = 0x4e8d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
label_4e8d28:
    // 0x4e8d28: 0xad920140  sw          $s2, 0x140($t4)
    ctx->pc = 0x4e8d28u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 320), GPR_U32(ctx, 18));
label_4e8d2c:
    // 0x4e8d2c: 0x25860014  addiu       $a2, $t4, 0x14
    ctx->pc = 0x4e8d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 20));
label_4e8d30:
    // 0x4e8d30: 0x25870018  addiu       $a3, $t4, 0x18
    ctx->pc = 0x4e8d30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 24));
label_4e8d34:
    // 0x4e8d34: 0x24881200  addiu       $t0, $a0, 0x1200
    ctx->pc = 0x4e8d34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4608));
label_4e8d38:
    // 0x4e8d38: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4e8d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4e8d3c:
    // 0x4e8d3c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4e8d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_4e8d40:
    // 0x4e8d40: 0x34840005  ori         $a0, $a0, 0x5
    ctx->pc = 0x4e8d40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)5);
label_4e8d44:
    // 0x4e8d44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4e8d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4e8d48:
    // 0x4e8d48: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4e8d48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4e8d4c:
    // 0x4e8d4c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4e8d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4e8d50:
    // 0x4e8d50: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4e8d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4e8d54:
    // 0x4e8d54: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e8d54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4e8d58:
    // 0x4e8d58: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4e8d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_4e8d5c:
    // 0x4e8d5c: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4e8d5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4e8d60:
    // 0x4e8d60: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4e8d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4e8d64:
    // 0x4e8d64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4e8d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4e8d68:
    // 0x4e8d68: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4e8d68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_4e8d6c:
    // 0x4e8d6c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x4e8d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4e8d70:
    // 0x4e8d70: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4e8d70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_4e8d74:
    // 0x4e8d74: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4e8d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4e8d78:
    // 0x4e8d78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4e8d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4e8d7c:
    // 0x4e8d7c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4e8d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_4e8d80:
    // 0x4e8d80: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e8d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e8d84:
    // 0x4e8d84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e8d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4e8d88:
    // 0x4e8d88: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4e8d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_4e8d8c:
    // 0x4e8d8c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4e8d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_4e8d90:
    // 0x4e8d90: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4e8d90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4e8d94:
    // 0x4e8d94: 0x4600028  bltz        $v1, . + 4 + (0x28 << 2)
label_4e8d98:
    if (ctx->pc == 0x4E8D98u) {
        ctx->pc = 0x4E8D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8D94u;
        // 0x4e8d98: 0x3c03007f  lui         $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8D9Cu;
        goto label_4e8d9c;
    }
    ctx->pc = 0x4E8D94u;
    {
        const bool branch_taken_0x4e8d94 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4E8D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8D94u;
        // 0x4e8d98: 0x3c03007f  lui         $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8d94) {
            ctx->pc = 0x4E8E38u;
            goto label_4e8e38;
        }
    }
    ctx->pc = 0x4E8D9Cu;
label_4e8d9c:
    // 0x4e8d9c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x4e8d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4e8da0:
    // 0x4e8da0: 0x2413009b  addiu       $s3, $zero, 0x9B
    ctx->pc = 0x4e8da0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
label_4e8da4:
    // 0x4e8da4: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4e8da4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_4e8da8:
    // 0x4e8da8: 0xc12b5f2  jal         func_4AD7C8
label_4e8dac:
    if (ctx->pc == 0x4E8DACu) {
        ctx->pc = 0x4E8DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8DA8u;
        // 0x4e8dac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8DB0u;
        goto label_4e8db0;
    }
    ctx->pc = 0x4E8DA8u;
    SET_GPR_U32(ctx, 31, 0x4E8DB0u);
    ctx->pc = 0x4E8DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8DA8u;
    // 0x4e8dac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD7C8u, 0x4E8DA8u, 0x4E8DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8DB0u;
label_4e8db0:
    // 0x4e8db0: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x4e8db0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e8db4:
    // 0x4e8db4: 0xa5930008  sh          $s3, 0x8($t4)
    ctx->pc = 0x4e8db4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 8), (uint16_t)GPR_U32(ctx, 19));
label_4e8db8:
    // 0x4e8db8: 0x25840010  addiu       $a0, $t4, 0x10
    ctx->pc = 0x4e8db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
label_4e8dbc:
    // 0x4e8dbc: 0xad920140  sw          $s2, 0x140($t4)
    ctx->pc = 0x4e8dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 320), GPR_U32(ctx, 18));
label_4e8dc0:
    // 0x4e8dc0: 0x25850014  addiu       $a1, $t4, 0x14
    ctx->pc = 0x4e8dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 20));
label_4e8dc4:
    // 0x4e8dc4: 0x25860018  addiu       $a2, $t4, 0x18
    ctx->pc = 0x4e8dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 24));
label_4e8dc8:
    // 0x4e8dc8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e8dc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4e8dcc:
    // 0x4e8dcc: 0xa58201be  sh          $v0, 0x1BE($t4)
    ctx->pc = 0x4e8dccu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 446), (uint16_t)GPR_U32(ctx, 2));
label_4e8dd0:
    // 0x4e8dd0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4e8dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4e8dd4:
    // 0x4e8dd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4e8dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e8dd8:
    // 0x4e8dd8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4e8dd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_4e8ddc:
    // 0x4e8ddc: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4e8ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
label_4e8de0:
    // 0x4e8de0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4e8de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4e8de4:
    // 0x4e8de4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4e8de4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4e8de8:
    // 0x4e8de8: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x4e8de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_4e8dec:
    // 0x4e8dec: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4e8decu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4e8df0:
    // 0x4e8df0: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4e8df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
label_4e8df4:
    // 0x4e8df4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4e8df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4e8df8:
    // 0x4e8df8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4e8df8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4e8dfc:
    // 0x4e8dfc: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4e8dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4e8e00:
    // 0x4e8e00: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4e8e00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4e8e04:
    // 0x4e8e04: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4e8e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
label_4e8e08:
    // 0x4e8e08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4e8e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4e8e0c:
    // 0x4e8e0c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4e8e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_4e8e10:
    // 0x4e8e10: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4e8e10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4e8e14:
    // 0x4e8e14: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4e8e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e8e18:
    // 0x4e8e18: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4e8e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4e8e1c:
    // 0x4e8e1c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e8e1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4e8e20:
    // 0x4e8e20: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4e8e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
label_4e8e24:
    // 0x4e8e24: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4e8e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4e8e28:
    // 0x4e8e28: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4e8e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_4e8e2c:
    // 0x4e8e2c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e8e2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4e8e30:
    // 0x4e8e30: 0x441ffdd  bgez        $v0, . + 4 + (-0x23 << 2)
label_4e8e34:
    if (ctx->pc == 0x4E8E34u) {
        ctx->pc = 0x4E8E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8E30u;
        // 0x4e8e34: 0x3c03007f  lui         $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8E38u;
        goto label_4e8e38;
    }
    ctx->pc = 0x4E8E30u;
    {
        const bool branch_taken_0x4e8e30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4E8E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8E30u;
        // 0x4e8e34: 0x3c03007f  lui         $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8e30) {
            ctx->pc = 0x4E8DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e8da8;
        }
    }
    ctx->pc = 0x4E8E38u;
label_4e8e38:
    // 0x4e8e38: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4e8e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4e8e3c:
    // 0x4e8e3c: 0x24691200  addiu       $t1, $v1, 0x1200
    ctx->pc = 0x4e8e3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4608));
label_4e8e40:
    // 0x4e8e40: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x4e8e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
label_4e8e44:
    // 0x4e8e44: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4e8e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4e8e48:
    // 0x4e8e48: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e8e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e8e4c:
    // 0x4e8e4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e8e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e8e50:
    // 0x4e8e50: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4e8e50u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
label_4e8e54:
    // 0x4e8e54: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4e8e54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4e8e58:
    // 0x4e8e58: 0x440009f  bltz        $v0, . + 4 + (0x9F << 2)
label_4e8e5c:
    if (ctx->pc == 0x4E8E5Cu) {
        ctx->pc = 0x4E8E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8E58u;
        // 0x4e8e5c: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8E60u;
        goto label_4e8e60;
    }
    ctx->pc = 0x4E8E58u;
    {
        const bool branch_taken_0x4e8e58 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4E8E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8E58u;
        // 0x4e8e5c: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8e58) {
            ctx->pc = 0x4E90D8u;
            goto label_4e90d8;
        }
    }
    ctx->pc = 0x4E8E60u;
label_4e8e60:
    // 0x4e8e60: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e8e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4e8e64:
    // 0x4e8e64: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4e8e64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_4e8e68:
    // 0x4e8e68: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4e8e68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4e8e6c:
    // 0x4e8e6c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4e8e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
label_4e8e70:
    // 0x4e8e70: 0x245111e8  addiu       $s1, $v0, 0x11E8
    ctx->pc = 0x4e8e70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4584));
label_4e8e74:
    // 0x4e8e74: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x4e8e74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4e8e78:
    // 0x4e8e78: 0x246e11ec  addiu       $t6, $v1, 0x11EC
    ctx->pc = 0x4e8e78u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 4588));
label_4e8e7c:
    // 0x4e8e7c: 0x249611f4  addiu       $s6, $a0, 0x11F4
    ctx->pc = 0x4e8e7cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 4596));
label_4e8e80:
    // 0x4e8e80: 0x24b511f8  addiu       $s5, $a1, 0x11F8
    ctx->pc = 0x4e8e80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 4600));
label_4e8e84:
    // 0x4e8e84: 0x24d411fc  addiu       $s4, $a2, 0x11FC
    ctx->pc = 0x4e8e84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 4604));
label_4e8e88:
    // 0x4e8e88: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4e8e88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
label_4e8e8c:
    // 0x4e8e8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e8e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e8e90:
    // 0x4e8e90: 0xc12b5dc  jal         func_4AD770
label_4e8e94:
    if (ctx->pc == 0x4E8E94u) {
        ctx->pc = 0x4E8E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8E90u;
        // 0x4e8e94: 0x7fae0010  sq          $t6, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8E98u;
        goto label_4e8e98;
    }
    ctx->pc = 0x4E8E90u;
    SET_GPR_U32(ctx, 31, 0x4E8E98u);
    ctx->pc = 0x4E8E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8E90u;
    // 0x4e8e94: 0x7fae0010  sq          $t6, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4E8E90u, 0x4E8E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8E98u;
label_4e8e98:
    // 0x4e8e98: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4e8e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4e8e9c:
    // 0x4e8e9c: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x4e8e9cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e8ea0:
    // 0x4e8ea0: 0x24020069  addiu       $v0, $zero, 0x69
    ctx->pc = 0x4e8ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_4e8ea4:
    // 0x4e8ea4: 0xa5820008  sh          $v0, 0x8($t4)
    ctx->pc = 0x4e8ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 8), (uint16_t)GPR_U32(ctx, 2));
label_4e8ea8:
    // 0x4e8ea8: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x4e8ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_4e8eac:
    // 0x4e8eac: 0xa583016a  sh          $v1, 0x16A($t4)
    ctx->pc = 0x4e8eacu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 362), (uint16_t)GPR_U32(ctx, 3));
label_4e8eb0:
    // 0x4e8eb0: 0x248d7fa0  addiu       $t5, $a0, 0x7FA0
    ctx->pc = 0x4e8eb0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 32672));
label_4e8eb4:
    // 0x4e8eb4: 0xad920140  sw          $s2, 0x140($t4)
    ctx->pc = 0x4e8eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 320), GPR_U32(ctx, 18));
label_4e8eb8:
    // 0x4e8eb8: 0x25890010  addiu       $t1, $t4, 0x10
    ctx->pc = 0x4e8eb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
label_4e8ebc:
    // 0x4e8ebc: 0x258a0014  addiu       $t2, $t4, 0x14
    ctx->pc = 0x4e8ebcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 20));
label_4e8ec0:
    // 0x4e8ec0: 0x258b0018  addiu       $t3, $t4, 0x18
    ctx->pc = 0x4e8ec0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 24));
label_4e8ec4:
    // 0x4e8ec4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4e8ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4e8ec8:
    // 0x4e8ec8: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4e8ec8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4e8ecc:
    // 0x4e8ecc: 0x7bae0010  lq          $t6, 0x10($sp)
    ctx->pc = 0x4e8eccu;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e8ed0:
    // 0x4e8ed0: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4e8ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_4e8ed4:
    // 0x4e8ed4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4e8ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4e8ed8:
    // 0x4e8ed8: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x4e8ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_4e8edc:
    // 0x4e8edc: 0x8dc50000  lw          $a1, 0x0($t6)
    ctx->pc = 0x4e8edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
label_4e8ee0:
    // 0x4e8ee0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e8ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4e8ee4:
    // 0x4e8ee4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e8ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e8ee8:
    // 0x4e8ee8: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x4e8ee8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
label_4e8eec:
    // 0x4e8eec: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4e8eecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4e8ef0:
    // 0x4e8ef0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e8ef0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4e8ef4:
    // 0x4e8ef4: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x4e8ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4e8ef8:
    // 0x4e8ef8: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x4e8ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
label_4e8efc:
    // 0x4e8efc: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x4e8efcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4e8f00:
    // 0x4e8f00: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e8f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4e8f04:
    // 0x4e8f04: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4e8f04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4e8f08:
    // 0x4e8f08: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e8f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e8f0c:
    // 0x4e8f0c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4e8f0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_4e8f10:
    // 0x4e8f10: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e8f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4e8f14:
    // 0x4e8f14: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x4e8f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e8f18:
    // 0x4e8f18: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4e8f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_4e8f1c:
    // 0x4e8f1c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e8f1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4e8f20:
    // 0x4e8f20: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4e8f20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_4e8f24:
    // 0x4e8f24: 0xadc50000  sw          $a1, 0x0($t6)
    ctx->pc = 0x4e8f24u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 5));
label_4e8f28:
    // 0x4e8f28: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x4e8f28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_4e8f2c:
    // 0x4e8f2c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e8f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4e8f30:
    // 0x4e8f30: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e8f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4e8f34:
    // 0x4e8f34: 0x85c30000  lh          $v1, 0x0($t6)
    ctx->pc = 0x4e8f34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
label_4e8f38:
    // 0x4e8f38: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4e8f38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4e8f3c:
    // 0x4e8f3c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4e8f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_4e8f40:
    // 0x4e8f40: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e8f40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4e8f44:
    // 0x4e8f44: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e8f44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4e8f48:
    // 0x4e8f48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4e8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4e8f4c:
    // 0x4e8f4c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e8f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4e8f50:
    // 0x4e8f50: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4e8f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4e8f54:
    // 0x4e8f54: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4e8f54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_4e8f58:
    // 0x4e8f58: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e8f58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4e8f5c:
    // 0x4e8f5c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e8f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4e8f60:
    // 0x4e8f60: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e8f60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4e8f64:
    // 0x4e8f64: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e8f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4e8f68:
    // 0x4e8f68: 0x4d6821  addu        $t5, $v0, $t5
    ctx->pc = 0x4e8f68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
label_4e8f6c:
    // 0x4e8f6c: 0x85a30000  lh          $v1, 0x0($t5)
    ctx->pc = 0x4e8f6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_4e8f70:
    // 0x4e8f70: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x4e8f70u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
label_4e8f74:
    // 0x4e8f74: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4e8f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
label_4e8f78:
    // 0x4e8f78: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4e8f78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_4e8f7c:
    // 0x4e8f7c: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x4e8f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
label_4e8f80:
    // 0x4e8f80: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4e8f80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4e8f84:
    // 0x4e8f84: 0x85a20000  lh          $v0, 0x0($t5)
    ctx->pc = 0x4e8f84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_4e8f88:
    // 0x4e8f88: 0x86c30000  lh          $v1, 0x0($s6)
    ctx->pc = 0x4e8f88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_4e8f8c:
    // 0x4e8f8c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e8f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4e8f90:
    // 0x4e8f90: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4e8f90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_4e8f94:
    // 0x4e8f94: 0xaea70000  sw          $a3, 0x0($s5)
    ctx->pc = 0x4e8f94u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 7));
label_4e8f98:
    // 0x4e8f98: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4e8f98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4e8f9c:
    // 0x4e8f9c: 0x85a20002  lh          $v0, 0x2($t5)
    ctx->pc = 0x4e8f9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
label_4e8fa0:
    // 0x4e8fa0: 0x24ad7f90  addiu       $t5, $a1, 0x7F90
    ctx->pc = 0x4e8fa0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 32656));
label_4e8fa4:
    // 0x4e8fa4: 0x86a40000  lh          $a0, 0x0($s5)
    ctx->pc = 0x4e8fa4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_4e8fa8:
    // 0x4e8fa8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e8fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4e8fac:
    // 0x4e8fac: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4e8facu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_4e8fb0:
    // 0x4e8fb0: 0xae880000  sw          $t0, 0x0($s4)
    ctx->pc = 0x4e8fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 8));
label_4e8fb4:
    // 0x4e8fb4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4e8fb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_4e8fb8:
    // 0x4e8fb8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4e8fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4e8fbc:
    // 0x4e8fbc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4e8fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e8fc0:
    // 0x4e8fc0: 0x86850000  lh          $a1, 0x0($s4)
    ctx->pc = 0x4e8fc0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_4e8fc4:
    // 0x4e8fc4: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4e8fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4e8fc8:
    // 0x4e8fc8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e8fc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4e8fcc:
    // 0x4e8fcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4e8fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4e8fd0:
    // 0x4e8fd0: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4e8fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
label_4e8fd4:
    // 0x4e8fd4: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4e8fd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_4e8fd8:
    // 0x4e8fd8: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x4e8fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
label_4e8fdc:
    // 0x4e8fdc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4e8fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_4e8fe0:
    // 0x4e8fe0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4e8fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4e8fe4:
    // 0x4e8fe4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e8fe4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4e8fe8:
    // 0x4e8fe8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4e8fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4e8fec:
    // 0x4e8fec: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4e8fecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
label_4e8ff0:
    // 0x4e8ff0: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x4e8ff0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
label_4e8ff4:
    // 0x4e8ff4: 0xaea70000  sw          $a3, 0x0($s5)
    ctx->pc = 0x4e8ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 7));
label_4e8ff8:
    // 0x4e8ff8: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x4e8ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4e8ffc:
    // 0x4e8ffc: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4e8ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4e9000:
    // 0x4e9000: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e9000u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4e9004:
    // 0x4e9004: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4e9004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4e9008:
    // 0x4e9008: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4e9008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
label_4e900c:
    // 0x4e900c: 0x1054024  and         $t0, $t0, $a1
    ctx->pc = 0x4e900cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
label_4e9010:
    // 0x4e9010: 0xae880000  sw          $t0, 0x0($s4)
    ctx->pc = 0x4e9010u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 8));
label_4e9014:
    // 0x4e9014: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4e9014u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_4e9018:
    // 0x4e9018: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4e9018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4e901c:
    // 0x4e901c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e901cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4e9020:
    // 0x4e9020: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e9020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4e9024:
    // 0x4e9024: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4e9024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
label_4e9028:
    // 0x4e9028: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e9028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e902c:
    // 0x4e902c: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4e902cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
label_4e9030:
    // 0x4e9030: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4e9030u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_4e9034:
    // 0x4e9034: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4e9034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4e9038:
    // 0x4e9038: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e9038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4e903c:
    // 0x4e903c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e903cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4e9040:
    // 0x4e9040: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4e9040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
label_4e9044:
    // 0x4e9044: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e9044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e9048:
    // 0x4e9048: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4e9048u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
label_4e904c:
    // 0x4e904c: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4e904cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_4e9050:
    // 0x4e9050: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x4e9050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4e9054:
    // 0x4e9054: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e9054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4e9058:
    // 0x4e9058: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e9058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4e905c:
    // 0x4e905c: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4e905cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
label_4e9060:
    // 0x4e9060: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4e9060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4e9064:
    // 0x4e9064: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4e9064u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
label_4e9068:
    // 0x4e9068: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4e9068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4e906c:
    // 0x4e906c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4e906cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4e9070:
    // 0x4e9070: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4e9070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_4e9074:
    // 0x4e9074: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4e9074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4e9078:
    // 0x4e9078: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e9078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4e907c:
    // 0x4e907c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e907cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e9080:
    // 0x4e9080: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e9080u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4e9084:
    // 0x4e9084: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e9084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4e9088:
    // 0x4e9088: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e9088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4e908c:
    // 0x4e908c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e908cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e9090:
    // 0x4e9090: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e9090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4e9094:
    // 0x4e9094: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e9094u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4e9098:
    // 0x4e9098: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e9098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4e909c:
    // 0x4e909c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e909cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4e90a0:
    // 0x4e90a0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e90a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4e90a4:
    // 0x4e90a4: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x4e90a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
label_4e90a8:
    // 0x4e90a8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4e90a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4e90ac:
    // 0x4e90ac: 0xa583000c  sh          $v1, 0xC($t4)
    ctx->pc = 0x4e90acu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 12), (uint16_t)GPR_U32(ctx, 3));
label_4e90b0:
    // 0x4e90b0: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4e90b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4e90b4:
    // 0x4e90b4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4e90b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4e90b8:
    // 0x4e90b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4e90b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4e90bc:
    // 0x4e90bc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e90bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4e90c0:
    // 0x4e90c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e90c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e90c4:
    // 0x4e90c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e90c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e90c8:
    // 0x4e90c8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4e90c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4e90cc:
    // 0x4e90cc: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4e90ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4e90d0:
    // 0x4e90d0: 0x441ff6f  bgez        $v0, . + 4 + (-0x91 << 2)
label_4e90d4:
    if (ctx->pc == 0x4E90D4u) {
        ctx->pc = 0x4E90D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E90D0u;
        // 0x4e90d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E90D8u;
        goto label_4e90d8;
    }
    ctx->pc = 0x4E90D0u;
    {
        const bool branch_taken_0x4e90d0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4E90D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E90D0u;
        // 0x4e90d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e90d0) {
            ctx->pc = 0x4E8E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e8e90;
        }
    }
    ctx->pc = 0x4E90D8u;
label_4e90d8:
    // 0x4e90d8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e90d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4e90dc:
    // 0x4e90dc: 0x24441200  addiu       $a0, $v0, 0x1200
    ctx->pc = 0x4e90dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
label_4e90e0:
    // 0x4e90e0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4e90e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4e90e4:
    // 0x4e90e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4e90e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e90e8:
    // 0x4e90e8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4e90e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_4e90ec:
    // 0x4e90ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e90ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e90f0:
    // 0x4e90f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e90f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e90f4:
    // 0x4e90f4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e90f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4e90f8:
    // 0x4e90f8: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4e90f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_4e90fc:
    // 0x4e90fc: 0x440004d  bltz        $v0, . + 4 + (0x4D << 2)
label_4e9100:
    if (ctx->pc == 0x4E9100u) {
        ctx->pc = 0x4E9100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E90FCu;
        // 0x4e9100: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9104u;
        goto label_4e9104;
    }
    ctx->pc = 0x4E90FCu;
    {
        const bool branch_taken_0x4e90fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4E9100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E90FCu;
        // 0x4e9100: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e90fc) {
            ctx->pc = 0x4E9234u;
            goto label_4e9234;
        }
    }
    ctx->pc = 0x4E9104u;
label_4e9104:
    // 0x4e9104: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4e9104u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e9108:
    // 0x4e9108: 0x245011e8  addiu       $s0, $v0, 0x11E8
    ctx->pc = 0x4e9108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4584));
label_4e910c:
    // 0x4e910c: 0x3c140054  lui         $s4, 0x54
    ctx->pc = 0x4e910cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)84 << 16));
label_4e9110:
    // 0x4e9110: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4e9110u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_4e9114:
    // 0x4e9114: 0x0  nop
    ctx->pc = 0x4e9114u;
    // NOP
label_4e9118:
    // 0x4e9118: 0xc12b5dc  jal         func_4AD770
label_4e911c:
    if (ctx->pc == 0x4E911Cu) {
        ctx->pc = 0x4E911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9118u;
        // 0x4e911c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9120u;
        goto label_4e9120;
    }
    ctx->pc = 0x4E9118u;
    SET_GPR_U32(ctx, 31, 0x4E9120u);
    ctx->pc = 0x4E911Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9118u;
    // 0x4e911c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4E9118u, 0x4E9120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E9120u;
label_4e9120:
    // 0x4e9120: 0x268d7f88  addiu       $t5, $s4, 0x7F88
    ctx->pc = 0x4e9120u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 20), 32648));
label_4e9124:
    // 0x4e9124: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x4e9124u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e9128:
    // 0x4e9128: 0x24020099  addiu       $v0, $zero, 0x99
    ctx->pc = 0x4e9128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_4e912c:
    // 0x4e912c: 0xa5820008  sh          $v0, 0x8($t4)
    ctx->pc = 0x4e912cu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 8), (uint16_t)GPR_U32(ctx, 2));
label_4e9130:
    // 0x4e9130: 0x25850010  addiu       $a1, $t4, 0x10
    ctx->pc = 0x4e9130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
label_4e9134:
    // 0x4e9134: 0xad920140  sw          $s2, 0x140($t4)
    ctx->pc = 0x4e9134u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 320), GPR_U32(ctx, 18));
label_4e9138:
    // 0x4e9138: 0x25860014  addiu       $a2, $t4, 0x14
    ctx->pc = 0x4e9138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 20));
label_4e913c:
    // 0x4e913c: 0x25870018  addiu       $a3, $t4, 0x18
    ctx->pc = 0x4e913cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 24));
label_4e9140:
    // 0x4e9140: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e9140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e9144:
    // 0x4e9144: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4e9144u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4e9148:
    // 0x4e9148: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4e9148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
label_4e914c:
    // 0x4e914c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4e914cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4e9150:
    // 0x4e9150: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e9150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4e9154:
    // 0x4e9154: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e9154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e9158:
    // 0x4e9158: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e9158u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4e915c:
    // 0x4e915c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4e915cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4e9160:
    // 0x4e9160: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e9160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4e9164:
    // 0x4e9164: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e9164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e9168:
    // 0x4e9168: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e9168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4e916c:
    // 0x4e916c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4e916cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4e9170:
    // 0x4e9170: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e9170u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4e9174:
    // 0x4e9174: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4e9174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4e9178:
    // 0x4e9178: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4e9178u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4e917c:
    // 0x4e917c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e917cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4e9180:
    // 0x4e9180: 0x912024  and         $a0, $a0, $s1
    ctx->pc = 0x4e9180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
label_4e9184:
    // 0x4e9184: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e9184u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4e9188:
    // 0x4e9188: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4e9188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_4e918c:
    // 0x4e918c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e918cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4e9190:
    // 0x4e9190: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e9190u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4e9194:
    // 0x4e9194: 0x4d6821  addu        $t5, $v0, $t5
    ctx->pc = 0x4e9194u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
label_4e9198:
    // 0x4e9198: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x4e9198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_4e919c:
    // 0x4e919c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4e919cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e91a0:
    // 0x4e91a0: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4e91a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
label_4e91a4:
    // 0x4e91a4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4e91a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_4e91a8:
    // 0x4e91a8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e91a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4e91ac:
    // 0x4e91ac: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4e91acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
label_4e91b0:
    // 0x4e91b0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4e91b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4e91b4:
    // 0x4e91b4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4e91b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_4e91b8:
    // 0x4e91b8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e91b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4e91bc:
    // 0x4e91bc: 0x85a30000  lh          $v1, 0x0($t5)
    ctx->pc = 0x4e91bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_4e91c0:
    // 0x4e91c0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e91c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4e91c4:
    // 0x4e91c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4e91c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4e91c8:
    // 0x4e91c8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e91c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4e91cc:
    // 0x4e91cc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4e91ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4e91d0:
    // 0x4e91d0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4e91d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_4e91d4:
    // 0x4e91d4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e91d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4e91d8:
    // 0x4e91d8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4e91d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4e91dc:
    // 0x4e91dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e91dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4e91e0:
    // 0x4e91e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e91e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4e91e4:
    // 0x4e91e4: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4e91e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
label_4e91e8:
    // 0x4e91e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e91e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e91ec:
    // 0x4e91ec: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4e91ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_4e91f0:
    // 0x4e91f0: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x4e91f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4e91f4:
    // 0x4e91f4: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4e91f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_4e91f8:
    // 0x4e91f8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4e91f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_4e91fc:
    // 0x4e91fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4e91fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4e9200:
    // 0x4e9200: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4e9200u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_4e9204:
    // 0x4e9204: 0x95a20002  lhu         $v0, 0x2($t5)
    ctx->pc = 0x4e9204u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
label_4e9208:
    // 0x4e9208: 0xa582015e  sh          $v0, 0x15E($t4)
    ctx->pc = 0x4e9208u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 350), (uint16_t)GPR_U32(ctx, 2));
label_4e920c:
    // 0x4e920c: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4e920cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4e9210:
    // 0x4e9210: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4e9210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4e9214:
    // 0x4e9214: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4e9214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4e9218:
    // 0x4e9218: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e9218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4e921c:
    // 0x4e921c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4e921cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
label_4e9220:
    // 0x4e9220: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4e9220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4e9224:
    // 0x4e9224: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x4e9224u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_4e9228:
    // 0x4e9228: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4e9228u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4e922c:
    // 0x4e922c: 0x441ffba  bgez        $v0, . + 4 + (-0x46 << 2)
label_4e9230:
    if (ctx->pc == 0x4E9230u) {
        ctx->pc = 0x4E9234u;
        goto label_4e9234;
    }
    ctx->pc = 0x4E922Cu;
    {
        const bool branch_taken_0x4e922c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4e922c) {
            ctx->pc = 0x4E9118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e9118;
        }
    }
    ctx->pc = 0x4E9234u;
label_4e9234:
    // 0x4e9234: 0x264301bc  addiu       $v1, $s2, 0x1BC
    ctx->pc = 0x4e9234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 444));
label_4e9238:
    // 0x4e9238: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e9238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e923c:
    // 0x4e923c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4e923cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4e9240:
    // 0x4e9240: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4e9240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4e9244:
    // 0x4e9244: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4e9244u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4e9248:
    // 0x4e9248: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e9248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4e924c:
    // 0x4e924c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4e924cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4e9250:
    // 0x4e9250: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4e9250u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4e9254:
    // 0x4e9254: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4e9254u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4e9258:
    // 0x4e9258: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4e9258u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_4e925c:
    // 0x4e925c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4e925cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4e9260:
    // 0x4e9260: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x4e9260u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_4e9264:
    // 0x4e9264: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x4e9264u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4e9268:
    // 0x4e9268: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x4e9268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_4e926c:
    // 0x4e926c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4e926cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4e9270:
    // 0x4e9270: 0x813a49e  j           func_4E9278
label_4e9274:
    if (ctx->pc == 0x4E9274u) {
        ctx->pc = 0x4E9274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9270u;
        // 0x4e9274: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9278u;
        goto label_4e9278;
    }
    ctx->pc = 0x4E9270u;
    ctx->pc = 0x4E9274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9270u;
    // 0x4e9274: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9278u;
    goto label_4e9278;
    ctx->pc = 0x4E9278u;
label_4e9278:
    // 0x4e9278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e9278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4e927c:
    // 0x4e927c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4e927cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e9280:
    // 0x4e9280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e9280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e9284:
    // 0x4e9284: 0x24e90160  addiu       $t1, $a3, 0x160
    ctx->pc = 0x4e9284u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 352));
label_4e9288:
    // 0x4e9288: 0x84e20148  lh          $v0, 0x148($a3)
    ctx->pc = 0x4e9288u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 328)));
label_4e928c:
    // 0x4e928c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_4e9290:
    if (ctx->pc == 0x4E9290u) {
        ctx->pc = 0x4E9290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E928Cu;
        // 0x4e9290: 0x24eb01bc  addiu       $t3, $a3, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 444));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9294u;
        goto label_4e9294;
    }
    ctx->pc = 0x4E928Cu;
    {
        const bool branch_taken_0x4e928c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E928Cu;
        // 0x4e9290: 0x24eb01bc  addiu       $t3, $a3, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e928c) {
            ctx->pc = 0x4E9350u;
            goto label_4e9350;
        }
    }
    ctx->pc = 0x4E9294u;
label_4e9294:
    // 0x4e9294: 0x84e5014a  lh          $a1, 0x14A($a3)
    ctx->pc = 0x4e9294u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 330)));
label_4e9298:
    // 0x4e9298: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4e9298u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
label_4e929c:
    // 0x4e929c: 0x258611e8  addiu       $a2, $t4, 0x11E8
    ctx->pc = 0x4e929cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 4584));
label_4e92a0:
    // 0x4e92a0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4e92a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4e92a4:
    // 0x4e92a4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4e92a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_4e92a8:
    // 0x4e92a8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e92a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4e92ac:
    // 0x4e92ac: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e92acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4e92b0:
    // 0x4e92b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e92b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4e92b4:
    // 0x4e92b4: 0x246a11ec  addiu       $t2, $v1, 0x11EC
    ctx->pc = 0x4e92b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4588));
label_4e92b8:
    // 0x4e92b8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4e92b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_4e92bc:
    // 0x4e92bc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4e92bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_4e92c0:
    // 0x4e92c0: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4e92c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4e92c4:
    // 0x4e92c4: 0x3401f5e6  ori         $at, $zero, 0xF5E6
    ctx->pc = 0x4e92c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62950);
label_4e92c8:
    // 0x4e92c8: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x4e92c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
label_4e92cc:
    // 0x4e92cc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4e92ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_4e92d0:
    // 0x4e92d0: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
label_4e92d4:
    if (ctx->pc == 0x4E92D4u) {
        ctx->pc = 0x4E92D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E92D0u;
        // 0x4e92d4: 0x140402d  daddu       $t0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E92D8u;
        goto label_4e92d8;
    }
    ctx->pc = 0x4E92D0u;
    {
        const bool branch_taken_0x4e92d0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4E92D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E92D0u;
        // 0x4e92d4: 0x140402d  daddu       $t0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e92d0) {
            ctx->pc = 0x4E92E8u;
            goto label_4e92e8;
        }
    }
    ctx->pc = 0x4E92D8u;
label_4e92d8:
    // 0x4e92d8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e92d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e92dc:
    // 0x4e92dc: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e92e0:
    if (ctx->pc == 0x4E92E0u) {
        ctx->pc = 0x4E92E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E92DCu;
        // 0x4e92e0: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E92E4u;
        goto label_4e92e4;
    }
    ctx->pc = 0x4E92DCu;
    {
        const bool branch_taken_0x4e92dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E92E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E92DCu;
        // 0x4e92e0: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e92dc) {
            ctx->pc = 0x4E92F4u;
            goto label_4e92f4;
        }
    }
    ctx->pc = 0x4E92E4u;
label_4e92e4:
    // 0x4e92e4: 0x0  nop
    ctx->pc = 0x4e92e4u;
    // NOP
label_4e92e8:
    // 0x4e92e8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e92e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e92ec:
    // 0x4e92ec: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4e92ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4e92f0:
    // 0x4e92f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4e92f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e92f4:
    // 0x4e92f4: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4e92f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_4e92f8:
    // 0x4e92f8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4e92f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_4e92fc:
    // 0x4e92fc: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4e92fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_4e9300:
    // 0x4e9300: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4e9300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4e9304:
    // 0x4e9304: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x4e9304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_4e9308:
    // 0x4e9308: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4e9308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4e930c:
    // 0x4e930c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e930cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e9310:
    // 0x4e9310: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e9310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e9314:
    // 0x4e9314: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4e9314u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
label_4e9318:
    // 0x4e9318: 0x95450000  lhu         $a1, 0x0($t2)
    ctx->pc = 0x4e9318u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_4e931c:
    // 0x4e931c: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4e931cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4e9320:
    // 0x4e9320: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4e9320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4e9324:
    // 0x4e9324: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4e9324u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
label_4e9328:
    // 0x4e9328: 0x858311e8  lh          $v1, 0x11E8($t4)
    ctx->pc = 0x4e9328u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 4584)));
label_4e932c:
    // 0x4e932c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_4e9330:
    if (ctx->pc == 0x4E9330u) {
        ctx->pc = 0x4E9330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E932Cu;
        // 0x4e9330: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9334u;
        goto label_4e9334;
    }
    ctx->pc = 0x4E932Cu;
    {
        const bool branch_taken_0x4e932c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4E9330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E932Cu;
        // 0x4e9330: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e932c) {
            ctx->pc = 0x4E9340u;
            goto label_4e9340;
        }
    }
    ctx->pc = 0x4E9334u;
label_4e9334:
    // 0x4e9334: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4e9334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4e9338:
    // 0x4e9338: 0x813a5b8  j           func_4E96E0
label_4e933c:
    if (ctx->pc == 0x4E933Cu) {
        ctx->pc = 0x4E933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9338u;
        // 0x4e933c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9340u;
        goto label_4e9340;
    }
    ctx->pc = 0x4E9338u;
    ctx->pc = 0x4E933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9338u;
    // 0x4e933c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E96E0u;
    sub_004E96E0_0x4e96e0(rdram, ctx, runtime); return;
    ctx->pc = 0x4E9340u;
label_4e9340:
    // 0x4e9340: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x4e9340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_4e9344:
    // 0x4e9344: 0x10000007  b           . + 4 + (0x7 << 2)
label_4e9348:
    if (ctx->pc == 0x4E9348u) {
        ctx->pc = 0x4E9348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9344u;
        // 0x4e9348: 0xa4e2015e  sh          $v0, 0x15E($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 350), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E934Cu;
        goto label_4e934c;
    }
    ctx->pc = 0x4E9344u;
    {
        const bool branch_taken_0x4e9344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9344u;
        // 0x4e9348: 0xa4e2015e  sh          $v0, 0x15E($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 350), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9344) {
            ctx->pc = 0x4E9364u;
            goto label_4e9364;
        }
    }
    ctx->pc = 0x4E934Cu;
label_4e934c:
    // 0x4e934c: 0x0  nop
    ctx->pc = 0x4e934cu;
    // NOP
label_4e9350:
    // 0x4e9350: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x4e9350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_4e9354:
    // 0x4e9354: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x4e9354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_4e9358:
    // 0x4e9358: 0xa4e2015e  sh          $v0, 0x15E($a3)
    ctx->pc = 0x4e9358u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 350), (uint16_t)GPR_U32(ctx, 2));
label_4e935c:
    // 0x4e935c: 0x24e90160  addiu       $t1, $a3, 0x160
    ctx->pc = 0x4e935cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 352));
label_4e9360:
    // 0x4e9360: 0xa4e3014a  sh          $v1, 0x14A($a3)
    ctx->pc = 0x4e9360u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 330), (uint16_t)GPR_U32(ctx, 3));
label_4e9364:
    // 0x4e9364: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4e9364u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4e9368:
    // 0x4e9368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e9368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e936c:
    // 0x4e936c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x4e936cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_4e9370:
    // 0x4e9370: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4e9370u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
label_4e9374:
    // 0x4e9374: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x4e9374u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_4e9378:
    // 0x4e9378: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4e9378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_4e937c:
    // 0x4e937c: 0xa5630000  sh          $v1, 0x0($t3)
    ctx->pc = 0x4e937cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 3));
label_4e9380:
    // 0x4e9380: 0x813a4e2  j           func_4E9388
label_4e9384:
    if (ctx->pc == 0x4E9384u) {
        ctx->pc = 0x4E9384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9380u;
        // 0x4e9384: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9388u;
        goto label_4e9388;
    }
    ctx->pc = 0x4E9380u;
    ctx->pc = 0x4E9384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9380u;
    // 0x4e9384: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9388u;
    goto label_4e9388;
    ctx->pc = 0x4E9388u;
label_4e9388:
    // 0x4e9388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e9388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4e938c:
    // 0x4e938c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4e938cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e9390:
    // 0x4e9390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e9390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e9394:
    // 0x4e9394: 0x24450160  addiu       $a1, $v0, 0x160
    ctx->pc = 0x4e9394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
label_4e9398:
    // 0x4e9398: 0x8443014a  lh          $v1, 0x14A($v0)
    ctx->pc = 0x4e9398u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 330)));
label_4e939c:
    // 0x4e939c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_4e93a0:
    if (ctx->pc == 0x4E93A0u) {
        ctx->pc = 0x4E93A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E939Cu;
        // 0x4e93a0: 0x244601bc  addiu       $a2, $v0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E93A4u;
        goto label_4e93a4;
    }
    ctx->pc = 0x4E939Cu;
    {
        const bool branch_taken_0x4e939c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4E93A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E939Cu;
        // 0x4e93a0: 0x244601bc  addiu       $a2, $v0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e939c) {
            ctx->pc = 0x4E93B0u;
            goto label_4e93b0;
        }
    }
    ctx->pc = 0x4E93A4u;
label_4e93a4:
    // 0x4e93a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e93a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e93a8:
    // 0x4e93a8: 0x813a5b8  j           func_4E96E0
label_4e93ac:
    if (ctx->pc == 0x4E93ACu) {
        ctx->pc = 0x4E93ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E93A8u;
        // 0x4e93ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E93B0u;
        goto label_4e93b0;
    }
    ctx->pc = 0x4E93A8u;
    ctx->pc = 0x4E93ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E93A8u;
    // 0x4e93ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E96E0u;
    sub_004E96E0_0x4e96e0(rdram, ctx, runtime); return;
    ctx->pc = 0x4E93B0u;
label_4e93b0:
    // 0x4e93b0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4e93b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4e93b4:
    // 0x4e93b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e93b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e93b8:
    // 0x4e93b8: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x4e93b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_4e93bc:
    // 0x4e93bc: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4e93bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_4e93c0:
    // 0x4e93c0: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4e93c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4e93c4:
    // 0x4e93c4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4e93c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_4e93c8:
    // 0x4e93c8: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x4e93c8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_4e93cc:
    // 0x4e93cc: 0x813a4f6  j           func_4E93D8
label_4e93d0:
    if (ctx->pc == 0x4E93D0u) {
        ctx->pc = 0x4E93D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E93CCu;
        // 0x4e93d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E93D4u;
        goto label_4e93d4;
    }
    ctx->pc = 0x4E93CCu;
    ctx->pc = 0x4E93D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E93CCu;
    // 0x4e93d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E93D8u;
    goto label_4e93d8;
    ctx->pc = 0x4E93D4u;
label_4e93d4:
    // 0x4e93d4: 0x0  nop
    ctx->pc = 0x4e93d4u;
    // NOP
label_4e93d8:
    // 0x4e93d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e93d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4e93dc:
    // 0x4e93dc: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4e93dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4e93e0:
    // 0x4e93e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e93e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e93e4:
    // 0x4e93e4: 0x24a511e8  addiu       $a1, $a1, 0x11E8
    ctx->pc = 0x4e93e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4584));
label_4e93e8:
    // 0x4e93e8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4e93e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e93ec:
    // 0x4e93ec: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4e93ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_4e93f0:
    // 0x4e93f0: 0x84e20160  lh          $v0, 0x160($a3)
    ctx->pc = 0x4e93f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 352)));
label_4e93f4:
    // 0x4e93f4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e93f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e93f8:
    // 0x4e93f8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4e93f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4e93fc:
    // 0x4e93fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e93fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e9400:
    // 0x4e9400: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e9400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e9404:
    // 0x4e9404: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e9404u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4e9408:
    // 0x4e9408: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e9408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e940c:
    // 0x4e940c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4e940cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4e9410:
    // 0x4e9410: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x4e9410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_4e9414:
    // 0x4e9414: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e9414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4e9418:
    // 0x4e9418: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e9418u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4e941c:
    // 0x4e941c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4e941cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4e9420:
    // 0x4e9420: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e9420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e9424:
    // 0x4e9424: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e9424u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4e9428:
    // 0x4e9428: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4e9428u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4e942c:
    // 0x4e942c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_4e9430:
    if (ctx->pc == 0x4E9430u) {
        ctx->pc = 0x4E9430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E942Cu;
        // 0x4e9430: 0x24e801bc  addiu       $t0, $a3, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 444));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9434u;
        goto label_4e9434;
    }
    ctx->pc = 0x4E942Cu;
    {
        const bool branch_taken_0x4e942c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E9430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E942Cu;
        // 0x4e9430: 0x24e801bc  addiu       $t0, $a3, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e942c) {
            ctx->pc = 0x4E9440u;
            goto label_4e9440;
        }
    }
    ctx->pc = 0x4E9434u;
label_4e9434:
    // 0x4e9434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e9434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e9438:
    // 0x4e9438: 0x813a5b8  j           func_4E96E0
label_4e943c:
    if (ctx->pc == 0x4E943Cu) {
        ctx->pc = 0x4E943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9438u;
        // 0x4e943c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9440u;
        goto label_4e9440;
    }
    ctx->pc = 0x4E9438u;
    ctx->pc = 0x4E943Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9438u;
    // 0x4e943c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E96E0u;
    sub_004E96E0_0x4e96e0(rdram, ctx, runtime); return;
    ctx->pc = 0x4E9440u;
label_4e9440:
    // 0x4e9440: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4e9440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4e9444:
    // 0x4e9444: 0xa4e00164  sh          $zero, 0x164($a3)
    ctx->pc = 0x4e9444u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 356), (uint16_t)GPR_U32(ctx, 0));
label_4e9448:
    // 0x4e9448: 0xa4e20162  sh          $v0, 0x162($a3)
    ctx->pc = 0x4e9448u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 354), (uint16_t)GPR_U32(ctx, 2));
label_4e944c:
    // 0x4e944c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e944cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e9450:
    // 0x4e9450: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4e9450u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4e9454:
    // 0x4e9454: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e9454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4e9458:
    // 0x4e9458: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4e9458u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
label_4e945c:
    // 0x4e945c: 0x813a51a  j           func_4E9468
label_4e9460:
    if (ctx->pc == 0x4E9460u) {
        ctx->pc = 0x4E9460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E945Cu;
        // 0x4e9460: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9464u;
        goto label_4e9464;
    }
    ctx->pc = 0x4E945Cu;
    ctx->pc = 0x4E9460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E945Cu;
    // 0x4e9460: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9468u;
    goto label_4e9468;
    ctx->pc = 0x4E9464u;
label_4e9464:
    // 0x4e9464: 0x0  nop
    ctx->pc = 0x4e9464u;
    // NOP
label_4e9468:
    // 0x4e9468: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e9468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e946c:
    // 0x4e946c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e946cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4e9470:
    // 0x4e9470: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e9470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e9474:
    // 0x4e9474: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e9474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4e9478:
    // 0x4e9478: 0x26110164  addiu       $s1, $s0, 0x164
    ctx->pc = 0x4e9478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
label_4e947c:
    // 0x4e947c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e947cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4e9480:
    // 0x4e9480: 0x26030162  addiu       $v1, $s0, 0x162
    ctx->pc = 0x4e9480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 354));
label_4e9484:
    // 0x4e9484: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4e9484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4e9488:
    // 0x4e9488: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x4e9488u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e948c:
    // 0x4e948c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4e948cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4e9490:
    // 0x4e9490: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x4e9490u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4e9494:
    // 0x4e9494: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4e9494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_4e9498:
    // 0x4e9498: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x4e9498u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
label_4e949c:
    // 0x4e949c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4e949cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_4e94a0:
    // 0x4e94a0: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x4e94a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4e94a4:
    // 0x4e94a4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4e94a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_4e94a8:
    // 0x4e94a8: 0x3c170054  lui         $s7, 0x54
    ctx->pc = 0x4e94a8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)84 << 16));
label_4e94ac:
    // 0x4e94ac: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4e94acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4e94b0:
    // 0x4e94b0: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4e94b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_4e94b4:
    // 0x4e94b4: 0x249211e8  addiu       $s2, $a0, 0x11E8
    ctx->pc = 0x4e94b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4584));
label_4e94b8:
    // 0x4e94b8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4e94b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4e94bc:
    // 0x4e94bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4e94bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4e94c0:
    // 0x4e94c0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4e94c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4e94c4:
    // 0x4e94c4: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4e94c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4e94c8:
    // 0x4e94c8: 0x26e57fd0  addiu       $a1, $s7, 0x7FD0
    ctx->pc = 0x4e94c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 32720));
label_4e94cc:
    // 0x4e94cc: 0x24440003  addiu       $a0, $v0, 0x3
    ctx->pc = 0x4e94ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_4e94d0:
    // 0x4e94d0: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x4e94d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_4e94d4:
    // 0x4e94d4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x4e94d4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_4e94d8:
    // 0x4e94d8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e94d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4e94dc:
    // 0x4e94dc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4e94dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4e94e0:
    // 0x4e94e0: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x4e94e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4e94e4:
    // 0x4e94e4: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4e94e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4e94e8:
    // 0x4e94e8: 0x14760005  bne         $v1, $s6, . + 4 + (0x5 << 2)
label_4e94ec:
    if (ctx->pc == 0x4E94ECu) {
        ctx->pc = 0x4E94ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E94E8u;
        // 0x4e94ec: 0x94a40000  lhu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E94F0u;
        goto label_4e94f0;
    }
    ctx->pc = 0x4E94E8u;
    {
        const bool branch_taken_0x4e94e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        ctx->pc = 0x4E94ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E94E8u;
        // 0x4e94ec: 0x94a40000  lhu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e94e8) {
            ctx->pc = 0x4E9500u;
            goto label_4e9500;
        }
    }
    ctx->pc = 0x4E94F0u;
label_4e94f0:
    // 0x4e94f0: 0xc13a562  jal         func_4E9588
label_4e94f4:
    if (ctx->pc == 0x4E94F4u) {
        ctx->pc = 0x4E94F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E94F0u;
        // 0x4e94f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E94F8u;
        goto label_4e94f8;
    }
    ctx->pc = 0x4E94F0u;
    SET_GPR_U32(ctx, 31, 0x4E94F8u);
    ctx->pc = 0x4E94F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E94F0u;
    // 0x4e94f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9588u, 0x4E94F0u, 0x4E94F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E94F8u;
label_4e94f8:
    // 0x4e94f8: 0x10000019  b           . + 4 + (0x19 << 2)
label_4e94fc:
    if (ctx->pc == 0x4E94FCu) {
        ctx->pc = 0x4E94FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E94F8u;
        // 0x4e94fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9500u;
        goto label_4e9500;
    }
    ctx->pc = 0x4E94F8u;
    {
        const bool branch_taken_0x4e94f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E94FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E94F8u;
        // 0x4e94fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e94f8) {
            ctx->pc = 0x4E9560u;
            goto label_4e9560;
        }
    }
    ctx->pc = 0x4E9500u;
label_4e9500:
    // 0x4e9500: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4e9500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4e9504:
    // 0x4e9504: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x4e9504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_4e9508:
    // 0x4e9508: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4e9508u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_4e950c:
    // 0x4e950c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e950cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e9510:
    // 0x4e9510: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e9510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
label_4e9514:
    // 0x4e9514: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e9514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e9518:
    // 0x4e9518: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e9518u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_4e951c:
    // 0x4e951c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4e951cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4e9520:
    // 0x4e9520: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4e9520u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4e9524:
    // 0x4e9524: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_4e9528:
    if (ctx->pc == 0x4E9528u) {
        ctx->pc = 0x4E9528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9524u;
        // 0x4e9528: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E952Cu;
        goto label_4e952c;
    }
    ctx->pc = 0x4E9524u;
    {
        const bool branch_taken_0x4e9524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9524) {
            ctx->pc = 0x4E9528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E9524u;
            // 0x4e9528: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E9540u;
            goto label_4e9540;
        }
    }
    ctx->pc = 0x4E952Cu;
label_4e952c:
    // 0x4e952c: 0xc13a5b8  jal         func_4E96E0
label_4e9530:
    if (ctx->pc == 0x4E9530u) {
        ctx->pc = 0x4E9530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E952Cu;
        // 0x4e9530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9534u;
        goto label_4e9534;
    }
    ctx->pc = 0x4E952Cu;
    SET_GPR_U32(ctx, 31, 0x4E9534u);
    ctx->pc = 0x4E9530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E952Cu;
    // 0x4e9530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E96E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E96E0u, 0x4E952Cu, 0x4E9534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E9534u;
label_4e9534:
    // 0x4e9534: 0x1000000a  b           . + 4 + (0xA << 2)
label_4e9538:
    if (ctx->pc == 0x4E9538u) {
        ctx->pc = 0x4E9538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9534u;
        // 0x4e9538: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E953Cu;
        goto label_4e953c;
    }
    ctx->pc = 0x4E9534u;
    {
        const bool branch_taken_0x4e9534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9534u;
        // 0x4e9538: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9534) {
            ctx->pc = 0x4E9560u;
            goto label_4e9560;
        }
    }
    ctx->pc = 0x4E953Cu;
label_4e953c:
    // 0x4e953c: 0x0  nop
    ctx->pc = 0x4e953cu;
    // NOP
label_4e9540:
    // 0x4e9540: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4e9540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_4e9544:
    // 0x4e9544: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4e9544u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4e9548:
    // 0x4e9548: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4e9548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4e954c:
    // 0x4e954c: 0x60f809  jalr        $v1
label_4e9550:
    if (ctx->pc == 0x4E9550u) {
        ctx->pc = 0x4E9550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E954Cu;
        // 0x4e9550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9554u;
        goto label_4e9554;
    }
    ctx->pc = 0x4E954Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E9554u);
        ctx->pc = 0x4E9550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E954Cu;
        // 0x4e9550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E954Cu, 0x4E9554u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E9554u;
label_4e9554:
    // 0x4e9554: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
label_4e9558:
    if (ctx->pc == 0x4E9558u) {
        ctx->pc = 0x4E9558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9554u;
        // 0x4e9558: 0x86620000  lh          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E955Cu;
        goto label_4e955c;
    }
    ctx->pc = 0x4E9554u;
    {
        const bool branch_taken_0x4e9554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9554u;
        // 0x4e9558: 0x86620000  lh          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9554) {
            ctx->pc = 0x4E94C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e94c8;
        }
    }
    ctx->pc = 0x4E955Cu;
label_4e955c:
    // 0x4e955c: 0x0  nop
    ctx->pc = 0x4e955cu;
    // NOP
label_4e9560:
    // 0x4e9560: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e9560u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4e9564:
    // 0x4e9564: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e9564u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e9568:
    // 0x4e9568: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e9568u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4e956c:
    // 0x4e956c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e956cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4e9570:
    // 0x4e9570: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e9570u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4e9574:
    // 0x4e9574: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e9574u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4e9578:
    // 0x4e9578: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4e9578u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4e957c:
    // 0x4e957c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e957cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4e9580:
    // 0x4e9580: 0x3e00008  jr          $ra
label_4e9584:
    if (ctx->pc == 0x4E9584u) {
        ctx->pc = 0x4E9584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9580u;
        // 0x4e9584: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9588u;
        goto label_fallthrough_0x4e9580;
    }
    ctx->pc = 0x4E9580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E9584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9580u;
        // 0x4e9584: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e9580:
    ctx->pc = 0x4E9588u;
}
