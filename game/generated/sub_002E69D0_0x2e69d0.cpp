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

// Function: sub_002E69D0
// Address: 0x2e69d0 - 0x2e73e0
void sub_002E69D0_0x2e69d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E69D0_0x2e69d0");
#endif

    switch (ctx->pc) {
        case 0x2e69d0u: goto label_2e69d0;
        case 0x2e69d4u: goto label_2e69d4;
        case 0x2e69d8u: goto label_2e69d8;
        case 0x2e69dcu: goto label_2e69dc;
        case 0x2e69e0u: goto label_2e69e0;
        case 0x2e69e4u: goto label_2e69e4;
        case 0x2e69e8u: goto label_2e69e8;
        case 0x2e69ecu: goto label_2e69ec;
        case 0x2e69f0u: goto label_2e69f0;
        case 0x2e69f4u: goto label_2e69f4;
        case 0x2e69f8u: goto label_2e69f8;
        case 0x2e69fcu: goto label_2e69fc;
        case 0x2e6a00u: goto label_2e6a00;
        case 0x2e6a04u: goto label_2e6a04;
        case 0x2e6a08u: goto label_2e6a08;
        case 0x2e6a0cu: goto label_2e6a0c;
        case 0x2e6a10u: goto label_2e6a10;
        case 0x2e6a14u: goto label_2e6a14;
        case 0x2e6a18u: goto label_2e6a18;
        case 0x2e6a1cu: goto label_2e6a1c;
        case 0x2e6a20u: goto label_2e6a20;
        case 0x2e6a24u: goto label_2e6a24;
        case 0x2e6a28u: goto label_2e6a28;
        case 0x2e6a2cu: goto label_2e6a2c;
        case 0x2e6a30u: goto label_2e6a30;
        case 0x2e6a34u: goto label_2e6a34;
        case 0x2e6a38u: goto label_2e6a38;
        case 0x2e6a3cu: goto label_2e6a3c;
        case 0x2e6a40u: goto label_2e6a40;
        case 0x2e6a44u: goto label_2e6a44;
        case 0x2e6a48u: goto label_2e6a48;
        case 0x2e6a4cu: goto label_2e6a4c;
        case 0x2e6a50u: goto label_2e6a50;
        case 0x2e6a54u: goto label_2e6a54;
        case 0x2e6a58u: goto label_2e6a58;
        case 0x2e6a5cu: goto label_2e6a5c;
        case 0x2e6a60u: goto label_2e6a60;
        case 0x2e6a64u: goto label_2e6a64;
        case 0x2e6a68u: goto label_2e6a68;
        case 0x2e6a6cu: goto label_2e6a6c;
        case 0x2e6a70u: goto label_2e6a70;
        case 0x2e6a74u: goto label_2e6a74;
        case 0x2e6a78u: goto label_2e6a78;
        case 0x2e6a7cu: goto label_2e6a7c;
        case 0x2e6a80u: goto label_2e6a80;
        case 0x2e6a84u: goto label_2e6a84;
        case 0x2e6a88u: goto label_2e6a88;
        case 0x2e6a8cu: goto label_2e6a8c;
        case 0x2e6a90u: goto label_2e6a90;
        case 0x2e6a94u: goto label_2e6a94;
        case 0x2e6a98u: goto label_2e6a98;
        case 0x2e6a9cu: goto label_2e6a9c;
        case 0x2e6aa0u: goto label_2e6aa0;
        case 0x2e6aa4u: goto label_2e6aa4;
        case 0x2e6aa8u: goto label_2e6aa8;
        case 0x2e6aacu: goto label_2e6aac;
        case 0x2e6ab0u: goto label_2e6ab0;
        case 0x2e6ab4u: goto label_2e6ab4;
        case 0x2e6ab8u: goto label_2e6ab8;
        case 0x2e6abcu: goto label_2e6abc;
        case 0x2e6ac0u: goto label_2e6ac0;
        case 0x2e6ac4u: goto label_2e6ac4;
        case 0x2e6ac8u: goto label_2e6ac8;
        case 0x2e6accu: goto label_2e6acc;
        case 0x2e6ad0u: goto label_2e6ad0;
        case 0x2e6ad4u: goto label_2e6ad4;
        case 0x2e6ad8u: goto label_2e6ad8;
        case 0x2e6adcu: goto label_2e6adc;
        case 0x2e6ae0u: goto label_2e6ae0;
        case 0x2e6ae4u: goto label_2e6ae4;
        case 0x2e6ae8u: goto label_2e6ae8;
        case 0x2e6aecu: goto label_2e6aec;
        case 0x2e6af0u: goto label_2e6af0;
        case 0x2e6af4u: goto label_2e6af4;
        case 0x2e6af8u: goto label_2e6af8;
        case 0x2e6afcu: goto label_2e6afc;
        case 0x2e6b00u: goto label_2e6b00;
        case 0x2e6b04u: goto label_2e6b04;
        case 0x2e6b08u: goto label_2e6b08;
        case 0x2e6b0cu: goto label_2e6b0c;
        case 0x2e6b10u: goto label_2e6b10;
        case 0x2e6b14u: goto label_2e6b14;
        case 0x2e6b18u: goto label_2e6b18;
        case 0x2e6b1cu: goto label_2e6b1c;
        case 0x2e6b20u: goto label_2e6b20;
        case 0x2e6b24u: goto label_2e6b24;
        case 0x2e6b28u: goto label_2e6b28;
        case 0x2e6b2cu: goto label_2e6b2c;
        case 0x2e6b30u: goto label_2e6b30;
        case 0x2e6b34u: goto label_2e6b34;
        case 0x2e6b38u: goto label_2e6b38;
        case 0x2e6b3cu: goto label_2e6b3c;
        case 0x2e6b40u: goto label_2e6b40;
        case 0x2e6b44u: goto label_2e6b44;
        case 0x2e6b48u: goto label_2e6b48;
        case 0x2e6b4cu: goto label_2e6b4c;
        case 0x2e6b50u: goto label_2e6b50;
        case 0x2e6b54u: goto label_2e6b54;
        case 0x2e6b58u: goto label_2e6b58;
        case 0x2e6b5cu: goto label_2e6b5c;
        case 0x2e6b60u: goto label_2e6b60;
        case 0x2e6b64u: goto label_2e6b64;
        case 0x2e6b68u: goto label_2e6b68;
        case 0x2e6b6cu: goto label_2e6b6c;
        case 0x2e6b70u: goto label_2e6b70;
        case 0x2e6b74u: goto label_2e6b74;
        case 0x2e6b78u: goto label_2e6b78;
        case 0x2e6b7cu: goto label_2e6b7c;
        case 0x2e6b80u: goto label_2e6b80;
        case 0x2e6b84u: goto label_2e6b84;
        case 0x2e6b88u: goto label_2e6b88;
        case 0x2e6b8cu: goto label_2e6b8c;
        case 0x2e6b90u: goto label_2e6b90;
        case 0x2e6b94u: goto label_2e6b94;
        case 0x2e6b98u: goto label_2e6b98;
        case 0x2e6b9cu: goto label_2e6b9c;
        case 0x2e6ba0u: goto label_2e6ba0;
        case 0x2e6ba4u: goto label_2e6ba4;
        case 0x2e6ba8u: goto label_2e6ba8;
        case 0x2e6bacu: goto label_2e6bac;
        case 0x2e6bb0u: goto label_2e6bb0;
        case 0x2e6bb4u: goto label_2e6bb4;
        case 0x2e6bb8u: goto label_2e6bb8;
        case 0x2e6bbcu: goto label_2e6bbc;
        case 0x2e6bc0u: goto label_2e6bc0;
        case 0x2e6bc4u: goto label_2e6bc4;
        case 0x2e6bc8u: goto label_2e6bc8;
        case 0x2e6bccu: goto label_2e6bcc;
        case 0x2e6bd0u: goto label_2e6bd0;
        case 0x2e6bd4u: goto label_2e6bd4;
        case 0x2e6bd8u: goto label_2e6bd8;
        case 0x2e6bdcu: goto label_2e6bdc;
        case 0x2e6be0u: goto label_2e6be0;
        case 0x2e6be4u: goto label_2e6be4;
        case 0x2e6be8u: goto label_2e6be8;
        case 0x2e6becu: goto label_2e6bec;
        case 0x2e6bf0u: goto label_2e6bf0;
        case 0x2e6bf4u: goto label_2e6bf4;
        case 0x2e6bf8u: goto label_2e6bf8;
        case 0x2e6bfcu: goto label_2e6bfc;
        case 0x2e6c00u: goto label_2e6c00;
        case 0x2e6c04u: goto label_2e6c04;
        case 0x2e6c08u: goto label_2e6c08;
        case 0x2e6c0cu: goto label_2e6c0c;
        case 0x2e6c10u: goto label_2e6c10;
        case 0x2e6c14u: goto label_2e6c14;
        case 0x2e6c18u: goto label_2e6c18;
        case 0x2e6c1cu: goto label_2e6c1c;
        case 0x2e6c20u: goto label_2e6c20;
        case 0x2e6c24u: goto label_2e6c24;
        case 0x2e6c28u: goto label_2e6c28;
        case 0x2e6c2cu: goto label_2e6c2c;
        case 0x2e6c30u: goto label_2e6c30;
        case 0x2e6c34u: goto label_2e6c34;
        case 0x2e6c38u: goto label_2e6c38;
        case 0x2e6c3cu: goto label_2e6c3c;
        case 0x2e6c40u: goto label_2e6c40;
        case 0x2e6c44u: goto label_2e6c44;
        case 0x2e6c48u: goto label_2e6c48;
        case 0x2e6c4cu: goto label_2e6c4c;
        case 0x2e6c50u: goto label_2e6c50;
        case 0x2e6c54u: goto label_2e6c54;
        case 0x2e6c58u: goto label_2e6c58;
        case 0x2e6c5cu: goto label_2e6c5c;
        case 0x2e6c60u: goto label_2e6c60;
        case 0x2e6c64u: goto label_2e6c64;
        case 0x2e6c68u: goto label_2e6c68;
        case 0x2e6c6cu: goto label_2e6c6c;
        case 0x2e6c70u: goto label_2e6c70;
        case 0x2e6c74u: goto label_2e6c74;
        case 0x2e6c78u: goto label_2e6c78;
        case 0x2e6c7cu: goto label_2e6c7c;
        case 0x2e6c80u: goto label_2e6c80;
        case 0x2e6c84u: goto label_2e6c84;
        case 0x2e6c88u: goto label_2e6c88;
        case 0x2e6c8cu: goto label_2e6c8c;
        case 0x2e6c90u: goto label_2e6c90;
        case 0x2e6c94u: goto label_2e6c94;
        case 0x2e6c98u: goto label_2e6c98;
        case 0x2e6c9cu: goto label_2e6c9c;
        case 0x2e6ca0u: goto label_2e6ca0;
        case 0x2e6ca4u: goto label_2e6ca4;
        case 0x2e6ca8u: goto label_2e6ca8;
        case 0x2e6cacu: goto label_2e6cac;
        case 0x2e6cb0u: goto label_2e6cb0;
        case 0x2e6cb4u: goto label_2e6cb4;
        case 0x2e6cb8u: goto label_2e6cb8;
        case 0x2e6cbcu: goto label_2e6cbc;
        case 0x2e6cc0u: goto label_2e6cc0;
        case 0x2e6cc4u: goto label_2e6cc4;
        case 0x2e6cc8u: goto label_2e6cc8;
        case 0x2e6cccu: goto label_2e6ccc;
        case 0x2e6cd0u: goto label_2e6cd0;
        case 0x2e6cd4u: goto label_2e6cd4;
        case 0x2e6cd8u: goto label_2e6cd8;
        case 0x2e6cdcu: goto label_2e6cdc;
        case 0x2e6ce0u: goto label_2e6ce0;
        case 0x2e6ce4u: goto label_2e6ce4;
        case 0x2e6ce8u: goto label_2e6ce8;
        case 0x2e6cecu: goto label_2e6cec;
        case 0x2e6cf0u: goto label_2e6cf0;
        case 0x2e6cf4u: goto label_2e6cf4;
        case 0x2e6cf8u: goto label_2e6cf8;
        case 0x2e6cfcu: goto label_2e6cfc;
        case 0x2e6d00u: goto label_2e6d00;
        case 0x2e6d04u: goto label_2e6d04;
        case 0x2e6d08u: goto label_2e6d08;
        case 0x2e6d0cu: goto label_2e6d0c;
        case 0x2e6d10u: goto label_2e6d10;
        case 0x2e6d14u: goto label_2e6d14;
        case 0x2e6d18u: goto label_2e6d18;
        case 0x2e6d1cu: goto label_2e6d1c;
        case 0x2e6d20u: goto label_2e6d20;
        case 0x2e6d24u: goto label_2e6d24;
        case 0x2e6d28u: goto label_2e6d28;
        case 0x2e6d2cu: goto label_2e6d2c;
        case 0x2e6d30u: goto label_2e6d30;
        case 0x2e6d34u: goto label_2e6d34;
        case 0x2e6d38u: goto label_2e6d38;
        case 0x2e6d3cu: goto label_2e6d3c;
        case 0x2e6d40u: goto label_2e6d40;
        case 0x2e6d44u: goto label_2e6d44;
        case 0x2e6d48u: goto label_2e6d48;
        case 0x2e6d4cu: goto label_2e6d4c;
        case 0x2e6d50u: goto label_2e6d50;
        case 0x2e6d54u: goto label_2e6d54;
        case 0x2e6d58u: goto label_2e6d58;
        case 0x2e6d5cu: goto label_2e6d5c;
        case 0x2e6d60u: goto label_2e6d60;
        case 0x2e6d64u: goto label_2e6d64;
        case 0x2e6d68u: goto label_2e6d68;
        case 0x2e6d6cu: goto label_2e6d6c;
        case 0x2e6d70u: goto label_2e6d70;
        case 0x2e6d74u: goto label_2e6d74;
        case 0x2e6d78u: goto label_2e6d78;
        case 0x2e6d7cu: goto label_2e6d7c;
        case 0x2e6d80u: goto label_2e6d80;
        case 0x2e6d84u: goto label_2e6d84;
        case 0x2e6d88u: goto label_2e6d88;
        case 0x2e6d8cu: goto label_2e6d8c;
        case 0x2e6d90u: goto label_2e6d90;
        case 0x2e6d94u: goto label_2e6d94;
        case 0x2e6d98u: goto label_2e6d98;
        case 0x2e6d9cu: goto label_2e6d9c;
        case 0x2e6da0u: goto label_2e6da0;
        case 0x2e6da4u: goto label_2e6da4;
        case 0x2e6da8u: goto label_2e6da8;
        case 0x2e6dacu: goto label_2e6dac;
        case 0x2e6db0u: goto label_2e6db0;
        case 0x2e6db4u: goto label_2e6db4;
        case 0x2e6db8u: goto label_2e6db8;
        case 0x2e6dbcu: goto label_2e6dbc;
        case 0x2e6dc0u: goto label_2e6dc0;
        case 0x2e6dc4u: goto label_2e6dc4;
        case 0x2e6dc8u: goto label_2e6dc8;
        case 0x2e6dccu: goto label_2e6dcc;
        case 0x2e6dd0u: goto label_2e6dd0;
        case 0x2e6dd4u: goto label_2e6dd4;
        case 0x2e6dd8u: goto label_2e6dd8;
        case 0x2e6ddcu: goto label_2e6ddc;
        case 0x2e6de0u: goto label_2e6de0;
        case 0x2e6de4u: goto label_2e6de4;
        case 0x2e6de8u: goto label_2e6de8;
        case 0x2e6decu: goto label_2e6dec;
        case 0x2e6df0u: goto label_2e6df0;
        case 0x2e6df4u: goto label_2e6df4;
        case 0x2e6df8u: goto label_2e6df8;
        case 0x2e6dfcu: goto label_2e6dfc;
        case 0x2e6e00u: goto label_2e6e00;
        case 0x2e6e04u: goto label_2e6e04;
        case 0x2e6e08u: goto label_2e6e08;
        case 0x2e6e0cu: goto label_2e6e0c;
        case 0x2e6e10u: goto label_2e6e10;
        case 0x2e6e14u: goto label_2e6e14;
        case 0x2e6e18u: goto label_2e6e18;
        case 0x2e6e1cu: goto label_2e6e1c;
        case 0x2e6e20u: goto label_2e6e20;
        case 0x2e6e24u: goto label_2e6e24;
        case 0x2e6e28u: goto label_2e6e28;
        case 0x2e6e2cu: goto label_2e6e2c;
        case 0x2e6e30u: goto label_2e6e30;
        case 0x2e6e34u: goto label_2e6e34;
        case 0x2e6e38u: goto label_2e6e38;
        case 0x2e6e3cu: goto label_2e6e3c;
        case 0x2e6e40u: goto label_2e6e40;
        case 0x2e6e44u: goto label_2e6e44;
        case 0x2e6e48u: goto label_2e6e48;
        case 0x2e6e4cu: goto label_2e6e4c;
        case 0x2e6e50u: goto label_2e6e50;
        case 0x2e6e54u: goto label_2e6e54;
        case 0x2e6e58u: goto label_2e6e58;
        case 0x2e6e5cu: goto label_2e6e5c;
        case 0x2e6e60u: goto label_2e6e60;
        case 0x2e6e64u: goto label_2e6e64;
        case 0x2e6e68u: goto label_2e6e68;
        case 0x2e6e6cu: goto label_2e6e6c;
        case 0x2e6e70u: goto label_2e6e70;
        case 0x2e6e74u: goto label_2e6e74;
        case 0x2e6e78u: goto label_2e6e78;
        case 0x2e6e7cu: goto label_2e6e7c;
        case 0x2e6e80u: goto label_2e6e80;
        case 0x2e6e84u: goto label_2e6e84;
        case 0x2e6e88u: goto label_2e6e88;
        case 0x2e6e8cu: goto label_2e6e8c;
        case 0x2e6e90u: goto label_2e6e90;
        case 0x2e6e94u: goto label_2e6e94;
        case 0x2e6e98u: goto label_2e6e98;
        case 0x2e6e9cu: goto label_2e6e9c;
        case 0x2e6ea0u: goto label_2e6ea0;
        case 0x2e6ea4u: goto label_2e6ea4;
        case 0x2e6ea8u: goto label_2e6ea8;
        case 0x2e6eacu: goto label_2e6eac;
        case 0x2e6eb0u: goto label_2e6eb0;
        case 0x2e6eb4u: goto label_2e6eb4;
        case 0x2e6eb8u: goto label_2e6eb8;
        case 0x2e6ebcu: goto label_2e6ebc;
        case 0x2e6ec0u: goto label_2e6ec0;
        case 0x2e6ec4u: goto label_2e6ec4;
        case 0x2e6ec8u: goto label_2e6ec8;
        case 0x2e6eccu: goto label_2e6ecc;
        case 0x2e6ed0u: goto label_2e6ed0;
        case 0x2e6ed4u: goto label_2e6ed4;
        case 0x2e6ed8u: goto label_2e6ed8;
        case 0x2e6edcu: goto label_2e6edc;
        case 0x2e6ee0u: goto label_2e6ee0;
        case 0x2e6ee4u: goto label_2e6ee4;
        case 0x2e6ee8u: goto label_2e6ee8;
        case 0x2e6eecu: goto label_2e6eec;
        case 0x2e6ef0u: goto label_2e6ef0;
        case 0x2e6ef4u: goto label_2e6ef4;
        case 0x2e6ef8u: goto label_2e6ef8;
        case 0x2e6efcu: goto label_2e6efc;
        case 0x2e6f00u: goto label_2e6f00;
        case 0x2e6f04u: goto label_2e6f04;
        case 0x2e6f08u: goto label_2e6f08;
        case 0x2e6f0cu: goto label_2e6f0c;
        case 0x2e6f10u: goto label_2e6f10;
        case 0x2e6f14u: goto label_2e6f14;
        case 0x2e6f18u: goto label_2e6f18;
        case 0x2e6f1cu: goto label_2e6f1c;
        case 0x2e6f20u: goto label_2e6f20;
        case 0x2e6f24u: goto label_2e6f24;
        case 0x2e6f28u: goto label_2e6f28;
        case 0x2e6f2cu: goto label_2e6f2c;
        case 0x2e6f30u: goto label_2e6f30;
        case 0x2e6f34u: goto label_2e6f34;
        case 0x2e6f38u: goto label_2e6f38;
        case 0x2e6f3cu: goto label_2e6f3c;
        case 0x2e6f40u: goto label_2e6f40;
        case 0x2e6f44u: goto label_2e6f44;
        case 0x2e6f48u: goto label_2e6f48;
        case 0x2e6f4cu: goto label_2e6f4c;
        case 0x2e6f50u: goto label_2e6f50;
        case 0x2e6f54u: goto label_2e6f54;
        case 0x2e6f58u: goto label_2e6f58;
        case 0x2e6f5cu: goto label_2e6f5c;
        case 0x2e6f60u: goto label_2e6f60;
        case 0x2e6f64u: goto label_2e6f64;
        case 0x2e6f68u: goto label_2e6f68;
        case 0x2e6f6cu: goto label_2e6f6c;
        case 0x2e6f70u: goto label_2e6f70;
        case 0x2e6f74u: goto label_2e6f74;
        case 0x2e6f78u: goto label_2e6f78;
        case 0x2e6f7cu: goto label_2e6f7c;
        case 0x2e6f80u: goto label_2e6f80;
        case 0x2e6f84u: goto label_2e6f84;
        case 0x2e6f88u: goto label_2e6f88;
        case 0x2e6f8cu: goto label_2e6f8c;
        case 0x2e6f90u: goto label_2e6f90;
        case 0x2e6f94u: goto label_2e6f94;
        case 0x2e6f98u: goto label_2e6f98;
        case 0x2e6f9cu: goto label_2e6f9c;
        case 0x2e6fa0u: goto label_2e6fa0;
        case 0x2e6fa4u: goto label_2e6fa4;
        case 0x2e6fa8u: goto label_2e6fa8;
        case 0x2e6facu: goto label_2e6fac;
        case 0x2e6fb0u: goto label_2e6fb0;
        case 0x2e6fb4u: goto label_2e6fb4;
        case 0x2e6fb8u: goto label_2e6fb8;
        case 0x2e6fbcu: goto label_2e6fbc;
        case 0x2e6fc0u: goto label_2e6fc0;
        case 0x2e6fc4u: goto label_2e6fc4;
        case 0x2e6fc8u: goto label_2e6fc8;
        case 0x2e6fccu: goto label_2e6fcc;
        case 0x2e6fd0u: goto label_2e6fd0;
        case 0x2e6fd4u: goto label_2e6fd4;
        case 0x2e6fd8u: goto label_2e6fd8;
        case 0x2e6fdcu: goto label_2e6fdc;
        case 0x2e6fe0u: goto label_2e6fe0;
        case 0x2e6fe4u: goto label_2e6fe4;
        case 0x2e6fe8u: goto label_2e6fe8;
        case 0x2e6fecu: goto label_2e6fec;
        case 0x2e6ff0u: goto label_2e6ff0;
        case 0x2e6ff4u: goto label_2e6ff4;
        case 0x2e6ff8u: goto label_2e6ff8;
        case 0x2e6ffcu: goto label_2e6ffc;
        case 0x2e7000u: goto label_2e7000;
        case 0x2e7004u: goto label_2e7004;
        case 0x2e7008u: goto label_2e7008;
        case 0x2e700cu: goto label_2e700c;
        case 0x2e7010u: goto label_2e7010;
        case 0x2e7014u: goto label_2e7014;
        case 0x2e7018u: goto label_2e7018;
        case 0x2e701cu: goto label_2e701c;
        case 0x2e7020u: goto label_2e7020;
        case 0x2e7024u: goto label_2e7024;
        case 0x2e7028u: goto label_2e7028;
        case 0x2e702cu: goto label_2e702c;
        case 0x2e7030u: goto label_2e7030;
        case 0x2e7034u: goto label_2e7034;
        case 0x2e7038u: goto label_2e7038;
        case 0x2e703cu: goto label_2e703c;
        case 0x2e7040u: goto label_2e7040;
        case 0x2e7044u: goto label_2e7044;
        case 0x2e7048u: goto label_2e7048;
        case 0x2e704cu: goto label_2e704c;
        case 0x2e7050u: goto label_2e7050;
        case 0x2e7054u: goto label_2e7054;
        case 0x2e7058u: goto label_2e7058;
        case 0x2e705cu: goto label_2e705c;
        case 0x2e7060u: goto label_2e7060;
        case 0x2e7064u: goto label_2e7064;
        case 0x2e7068u: goto label_2e7068;
        case 0x2e706cu: goto label_2e706c;
        case 0x2e7070u: goto label_2e7070;
        case 0x2e7074u: goto label_2e7074;
        case 0x2e7078u: goto label_2e7078;
        case 0x2e707cu: goto label_2e707c;
        case 0x2e7080u: goto label_2e7080;
        case 0x2e7084u: goto label_2e7084;
        case 0x2e7088u: goto label_2e7088;
        case 0x2e708cu: goto label_2e708c;
        case 0x2e7090u: goto label_2e7090;
        case 0x2e7094u: goto label_2e7094;
        case 0x2e7098u: goto label_2e7098;
        case 0x2e709cu: goto label_2e709c;
        case 0x2e70a0u: goto label_2e70a0;
        case 0x2e70a4u: goto label_2e70a4;
        case 0x2e70a8u: goto label_2e70a8;
        case 0x2e70acu: goto label_2e70ac;
        case 0x2e70b0u: goto label_2e70b0;
        case 0x2e70b4u: goto label_2e70b4;
        case 0x2e70b8u: goto label_2e70b8;
        case 0x2e70bcu: goto label_2e70bc;
        case 0x2e70c0u: goto label_2e70c0;
        case 0x2e70c4u: goto label_2e70c4;
        case 0x2e70c8u: goto label_2e70c8;
        case 0x2e70ccu: goto label_2e70cc;
        case 0x2e70d0u: goto label_2e70d0;
        case 0x2e70d4u: goto label_2e70d4;
        case 0x2e70d8u: goto label_2e70d8;
        case 0x2e70dcu: goto label_2e70dc;
        case 0x2e70e0u: goto label_2e70e0;
        case 0x2e70e4u: goto label_2e70e4;
        case 0x2e70e8u: goto label_2e70e8;
        case 0x2e70ecu: goto label_2e70ec;
        case 0x2e70f0u: goto label_2e70f0;
        case 0x2e70f4u: goto label_2e70f4;
        case 0x2e70f8u: goto label_2e70f8;
        case 0x2e70fcu: goto label_2e70fc;
        case 0x2e7100u: goto label_2e7100;
        case 0x2e7104u: goto label_2e7104;
        case 0x2e7108u: goto label_2e7108;
        case 0x2e710cu: goto label_2e710c;
        case 0x2e7110u: goto label_2e7110;
        case 0x2e7114u: goto label_2e7114;
        case 0x2e7118u: goto label_2e7118;
        case 0x2e711cu: goto label_2e711c;
        case 0x2e7120u: goto label_2e7120;
        case 0x2e7124u: goto label_2e7124;
        case 0x2e7128u: goto label_2e7128;
        case 0x2e712cu: goto label_2e712c;
        case 0x2e7130u: goto label_2e7130;
        case 0x2e7134u: goto label_2e7134;
        case 0x2e7138u: goto label_2e7138;
        case 0x2e713cu: goto label_2e713c;
        case 0x2e7140u: goto label_2e7140;
        case 0x2e7144u: goto label_2e7144;
        case 0x2e7148u: goto label_2e7148;
        case 0x2e714cu: goto label_2e714c;
        case 0x2e7150u: goto label_2e7150;
        case 0x2e7154u: goto label_2e7154;
        case 0x2e7158u: goto label_2e7158;
        case 0x2e715cu: goto label_2e715c;
        case 0x2e7160u: goto label_2e7160;
        case 0x2e7164u: goto label_2e7164;
        case 0x2e7168u: goto label_2e7168;
        case 0x2e716cu: goto label_2e716c;
        case 0x2e7170u: goto label_2e7170;
        case 0x2e7174u: goto label_2e7174;
        case 0x2e7178u: goto label_2e7178;
        case 0x2e717cu: goto label_2e717c;
        case 0x2e7180u: goto label_2e7180;
        case 0x2e7184u: goto label_2e7184;
        case 0x2e7188u: goto label_2e7188;
        case 0x2e718cu: goto label_2e718c;
        case 0x2e7190u: goto label_2e7190;
        case 0x2e7194u: goto label_2e7194;
        case 0x2e7198u: goto label_2e7198;
        case 0x2e719cu: goto label_2e719c;
        case 0x2e71a0u: goto label_2e71a0;
        case 0x2e71a4u: goto label_2e71a4;
        case 0x2e71a8u: goto label_2e71a8;
        case 0x2e71acu: goto label_2e71ac;
        case 0x2e71b0u: goto label_2e71b0;
        case 0x2e71b4u: goto label_2e71b4;
        case 0x2e71b8u: goto label_2e71b8;
        case 0x2e71bcu: goto label_2e71bc;
        case 0x2e71c0u: goto label_2e71c0;
        case 0x2e71c4u: goto label_2e71c4;
        case 0x2e71c8u: goto label_2e71c8;
        case 0x2e71ccu: goto label_2e71cc;
        case 0x2e71d0u: goto label_2e71d0;
        case 0x2e71d4u: goto label_2e71d4;
        case 0x2e71d8u: goto label_2e71d8;
        case 0x2e71dcu: goto label_2e71dc;
        case 0x2e71e0u: goto label_2e71e0;
        case 0x2e71e4u: goto label_2e71e4;
        case 0x2e71e8u: goto label_2e71e8;
        case 0x2e71ecu: goto label_2e71ec;
        case 0x2e71f0u: goto label_2e71f0;
        case 0x2e71f4u: goto label_2e71f4;
        case 0x2e71f8u: goto label_2e71f8;
        case 0x2e71fcu: goto label_2e71fc;
        case 0x2e7200u: goto label_2e7200;
        case 0x2e7204u: goto label_2e7204;
        case 0x2e7208u: goto label_2e7208;
        case 0x2e720cu: goto label_2e720c;
        case 0x2e7210u: goto label_2e7210;
        case 0x2e7214u: goto label_2e7214;
        case 0x2e7218u: goto label_2e7218;
        case 0x2e721cu: goto label_2e721c;
        case 0x2e7220u: goto label_2e7220;
        case 0x2e7224u: goto label_2e7224;
        case 0x2e7228u: goto label_2e7228;
        case 0x2e722cu: goto label_2e722c;
        case 0x2e7230u: goto label_2e7230;
        case 0x2e7234u: goto label_2e7234;
        case 0x2e7238u: goto label_2e7238;
        case 0x2e723cu: goto label_2e723c;
        case 0x2e7240u: goto label_2e7240;
        case 0x2e7244u: goto label_2e7244;
        case 0x2e7248u: goto label_2e7248;
        case 0x2e724cu: goto label_2e724c;
        case 0x2e7250u: goto label_2e7250;
        case 0x2e7254u: goto label_2e7254;
        case 0x2e7258u: goto label_2e7258;
        case 0x2e725cu: goto label_2e725c;
        case 0x2e7260u: goto label_2e7260;
        case 0x2e7264u: goto label_2e7264;
        case 0x2e7268u: goto label_2e7268;
        case 0x2e726cu: goto label_2e726c;
        case 0x2e7270u: goto label_2e7270;
        case 0x2e7274u: goto label_2e7274;
        case 0x2e7278u: goto label_2e7278;
        case 0x2e727cu: goto label_2e727c;
        case 0x2e7280u: goto label_2e7280;
        case 0x2e7284u: goto label_2e7284;
        case 0x2e7288u: goto label_2e7288;
        case 0x2e728cu: goto label_2e728c;
        case 0x2e7290u: goto label_2e7290;
        case 0x2e7294u: goto label_2e7294;
        case 0x2e7298u: goto label_2e7298;
        case 0x2e729cu: goto label_2e729c;
        case 0x2e72a0u: goto label_2e72a0;
        case 0x2e72a4u: goto label_2e72a4;
        case 0x2e72a8u: goto label_2e72a8;
        case 0x2e72acu: goto label_2e72ac;
        case 0x2e72b0u: goto label_2e72b0;
        case 0x2e72b4u: goto label_2e72b4;
        case 0x2e72b8u: goto label_2e72b8;
        case 0x2e72bcu: goto label_2e72bc;
        case 0x2e72c0u: goto label_2e72c0;
        case 0x2e72c4u: goto label_2e72c4;
        case 0x2e72c8u: goto label_2e72c8;
        case 0x2e72ccu: goto label_2e72cc;
        case 0x2e72d0u: goto label_2e72d0;
        case 0x2e72d4u: goto label_2e72d4;
        case 0x2e72d8u: goto label_2e72d8;
        case 0x2e72dcu: goto label_2e72dc;
        case 0x2e72e0u: goto label_2e72e0;
        case 0x2e72e4u: goto label_2e72e4;
        case 0x2e72e8u: goto label_2e72e8;
        case 0x2e72ecu: goto label_2e72ec;
        case 0x2e72f0u: goto label_2e72f0;
        case 0x2e72f4u: goto label_2e72f4;
        case 0x2e72f8u: goto label_2e72f8;
        case 0x2e72fcu: goto label_2e72fc;
        case 0x2e7300u: goto label_2e7300;
        case 0x2e7304u: goto label_2e7304;
        case 0x2e7308u: goto label_2e7308;
        case 0x2e730cu: goto label_2e730c;
        case 0x2e7310u: goto label_2e7310;
        case 0x2e7314u: goto label_2e7314;
        case 0x2e7318u: goto label_2e7318;
        case 0x2e731cu: goto label_2e731c;
        case 0x2e7320u: goto label_2e7320;
        case 0x2e7324u: goto label_2e7324;
        case 0x2e7328u: goto label_2e7328;
        case 0x2e732cu: goto label_2e732c;
        case 0x2e7330u: goto label_2e7330;
        case 0x2e7334u: goto label_2e7334;
        case 0x2e7338u: goto label_2e7338;
        case 0x2e733cu: goto label_2e733c;
        case 0x2e7340u: goto label_2e7340;
        case 0x2e7344u: goto label_2e7344;
        case 0x2e7348u: goto label_2e7348;
        case 0x2e734cu: goto label_2e734c;
        case 0x2e7350u: goto label_2e7350;
        case 0x2e7354u: goto label_2e7354;
        case 0x2e7358u: goto label_2e7358;
        case 0x2e735cu: goto label_2e735c;
        case 0x2e7360u: goto label_2e7360;
        case 0x2e7364u: goto label_2e7364;
        case 0x2e7368u: goto label_2e7368;
        case 0x2e736cu: goto label_2e736c;
        case 0x2e7370u: goto label_2e7370;
        case 0x2e7374u: goto label_2e7374;
        case 0x2e7378u: goto label_2e7378;
        case 0x2e737cu: goto label_2e737c;
        case 0x2e7380u: goto label_2e7380;
        case 0x2e7384u: goto label_2e7384;
        case 0x2e7388u: goto label_2e7388;
        case 0x2e738cu: goto label_2e738c;
        case 0x2e7390u: goto label_2e7390;
        case 0x2e7394u: goto label_2e7394;
        case 0x2e7398u: goto label_2e7398;
        case 0x2e739cu: goto label_2e739c;
        case 0x2e73a0u: goto label_2e73a0;
        case 0x2e73a4u: goto label_2e73a4;
        case 0x2e73a8u: goto label_2e73a8;
        case 0x2e73acu: goto label_2e73ac;
        case 0x2e73b0u: goto label_2e73b0;
        case 0x2e73b4u: goto label_2e73b4;
        case 0x2e73b8u: goto label_2e73b8;
        case 0x2e73bcu: goto label_2e73bc;
        case 0x2e73c0u: goto label_2e73c0;
        case 0x2e73c4u: goto label_2e73c4;
        case 0x2e73c8u: goto label_2e73c8;
        case 0x2e73ccu: goto label_2e73cc;
        case 0x2e73d0u: goto label_2e73d0;
        case 0x2e73d4u: goto label_2e73d4;
        case 0x2e73d8u: goto label_2e73d8;
        case 0x2e73dcu: goto label_2e73dc;
        default: break;
    }

    ctx->pc = 0x2e69d0u;

label_2e69d0:
    // 0x2e69d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e69d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2e69d4:
    // 0x2e69d4: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2e69d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2e69d8:
    // 0x2e69d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e69d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2e69dc:
    // 0x2e69dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e69dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e69e0:
    // 0x2e69e0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e69e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e69e4:
    // 0x2e69e4: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e69e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e69e8:
    // 0x2e69e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e69e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2e69ec:
    // 0x2e69ec: 0x26320058  addiu       $s2, $s1, 0x58
    ctx->pc = 0x2e69ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_2e69f0:
    // 0x2e69f0: 0x34a50021  ori         $a1, $a1, 0x21
    ctx->pc = 0x2e69f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33);
label_2e69f4:
    // 0x2e69f4: 0x34c60022  ori         $a2, $a2, 0x22
    ctx->pc = 0x2e69f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)34);
label_2e69f8:
    // 0x2e69f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e69f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2e69fc:
    // 0x2e69fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e69fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2e6a00:
    // 0x2e6a00: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2e6a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2e6a04:
    // 0x2e6a04: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2e6a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2e6a08:
    // 0x2e6a08: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2e6a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2e6a0c:
    // 0x2e6a0c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2e6a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_2e6a10:
    // 0x2e6a10: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e6a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2e6a14:
    // 0x2e6a14: 0xc0bbe04  jal         func_2EF810
label_2e6a18:
    if (ctx->pc == 0x2E6A18u) {
        ctx->pc = 0x2E6A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A14u;
        // 0x2e6a18: 0x34e70023  ori         $a3, $a3, 0x23 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)35);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6A1Cu;
        goto label_2e6a1c;
    }
    ctx->pc = 0x2E6A14u;
    SET_GPR_U32(ctx, 31, 0x2E6A1Cu);
    ctx->pc = 0x2E6A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6A14u;
    // 0x2e6a18: 0x34e70023  ori         $a3, $a3, 0x23 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)35);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF810u, 0x2E6A14u, 0x2E6A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6A1Cu;
label_2e6a1c:
    // 0x2e6a1c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e6a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e6a20:
    // 0x2e6a20: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e6a24:
    if (ctx->pc == 0x2E6A24u) {
        ctx->pc = 0x2E6A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A20u;
        // 0x2e6a24: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6A28u;
        goto label_2e6a28;
    }
    ctx->pc = 0x2E6A20u;
    {
        const bool branch_taken_0x2e6a20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6a20) {
            ctx->pc = 0x2E6A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6A20u;
            // 0x2e6a24: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6A3Cu;
            goto label_2e6a3c;
        }
    }
    ctx->pc = 0x2E6A28u;
label_2e6a28:
    // 0x2e6a28: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e6a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e6a2c:
    // 0x2e6a2c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e6a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e6a30:
    // 0x2e6a30: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e6a34:
    if (ctx->pc == 0x2E6A34u) {
        ctx->pc = 0x2E6A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A30u;
        // 0x2e6a34: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6A38u;
        goto label_2e6a38;
    }
    ctx->pc = 0x2E6A30u;
    {
        const bool branch_taken_0x2e6a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A30u;
        // 0x2e6a34: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6a30) {
            ctx->pc = 0x2E6A48u;
            goto label_2e6a48;
        }
    }
    ctx->pc = 0x2E6A38u;
label_2e6a38:
    // 0x2e6a38: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2e6a38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2e6a3c:
    // 0x2e6a3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e6a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6a40:
    // 0x2e6a40: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2e6a40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2e6a44:
    // 0x2e6a44: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2e6a44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2e6a48:
    // 0x2e6a48: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2e6a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e6a4c:
    // 0x2e6a4c: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x2e6a4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
label_2e6a50:
    // 0x2e6a50: 0xc0bb966  jal         func_2EE598
label_2e6a54:
    if (ctx->pc == 0x2E6A54u) {
        ctx->pc = 0x2E6A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A50u;
        // 0x2e6a54: 0x26330060  addiu       $s3, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6A58u;
        goto label_2e6a58;
    }
    ctx->pc = 0x2E6A50u;
    SET_GPR_U32(ctx, 31, 0x2E6A58u);
    ctx->pc = 0x2E6A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6A50u;
    // 0x2e6a54: 0x26330060  addiu       $s3, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2E6A50u, 0x2E6A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6A58u;
label_2e6a58:
    // 0x2e6a58: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2e6a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e6a5c:
    // 0x2e6a5c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e6a60:
    if (ctx->pc == 0x2E6A60u) {
        ctx->pc = 0x2E6A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A5Cu;
        // 0x2e6a60: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6A64u;
        goto label_2e6a64;
    }
    ctx->pc = 0x2E6A5Cu;
    {
        const bool branch_taken_0x2e6a5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6a5c) {
            ctx->pc = 0x2E6A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6A5Cu;
            // 0x2e6a60: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6A78u;
            goto label_2e6a78;
        }
    }
    ctx->pc = 0x2E6A64u;
label_2e6a64:
    // 0x2e6a64: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e6a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e6a68:
    // 0x2e6a68: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2e6a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2e6a6c:
    // 0x2e6a6c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e6a70:
    if (ctx->pc == 0x2E6A70u) {
        ctx->pc = 0x2E6A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A6Cu;
        // 0x2e6a70: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6A74u;
        goto label_2e6a74;
    }
    ctx->pc = 0x2E6A6Cu;
    {
        const bool branch_taken_0x2e6a6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A6Cu;
        // 0x2e6a70: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6a6c) {
            ctx->pc = 0x2E6A84u;
            goto label_2e6a84;
        }
    }
    ctx->pc = 0x2E6A74u;
label_2e6a74:
    // 0x2e6a74: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2e6a74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_2e6a78:
    // 0x2e6a78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e6a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6a7c:
    // 0x2e6a7c: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2e6a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_2e6a80:
    // 0x2e6a80: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2e6a80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2e6a84:
    // 0x2e6a84: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2e6a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e6a88:
    // 0x2e6a88: 0x34a50007  ori         $a1, $a1, 0x7
    ctx->pc = 0x2e6a88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
label_2e6a8c:
    // 0x2e6a8c: 0xc0bb966  jal         func_2EE598
label_2e6a90:
    if (ctx->pc == 0x2E6A90u) {
        ctx->pc = 0x2E6A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A8Cu;
        // 0x2e6a90: 0x26300068  addiu       $s0, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6A94u;
        goto label_2e6a94;
    }
    ctx->pc = 0x2E6A8Cu;
    SET_GPR_U32(ctx, 31, 0x2E6A94u);
    ctx->pc = 0x2E6A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6A8Cu;
    // 0x2e6a90: 0x26300068  addiu       $s0, $s1, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2E6A8Cu, 0x2E6A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6A94u;
label_2e6a94:
    // 0x2e6a94: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e6a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e6a98:
    // 0x2e6a98: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e6a9c:
    if (ctx->pc == 0x2E6A9Cu) {
        ctx->pc = 0x2E6A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A98u;
        // 0x2e6a9c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6AA0u;
        goto label_2e6aa0;
    }
    ctx->pc = 0x2E6A98u;
    {
        const bool branch_taken_0x2e6a98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6a98) {
            ctx->pc = 0x2E6A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6A98u;
            // 0x2e6a9c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6AB4u;
            goto label_2e6ab4;
        }
    }
    ctx->pc = 0x2E6AA0u;
label_2e6aa0:
    // 0x2e6aa0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e6aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e6aa4:
    // 0x2e6aa4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e6aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e6aa8:
    // 0x2e6aa8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e6aac:
    if (ctx->pc == 0x2E6AACu) {
        ctx->pc = 0x2E6AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6AA8u;
        // 0x2e6aac: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6AB0u;
        goto label_2e6ab0;
    }
    ctx->pc = 0x2E6AA8u;
    {
        const bool branch_taken_0x2e6aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6AA8u;
        // 0x2e6aac: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6aa8) {
            ctx->pc = 0x2E6AC0u;
            goto label_2e6ac0;
        }
    }
    ctx->pc = 0x2E6AB0u;
label_2e6ab0:
    // 0x2e6ab0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e6ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e6ab4:
    // 0x2e6ab4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e6ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6ab8:
    // 0x2e6ab8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e6ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e6abc:
    // 0x2e6abc: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2e6abcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2e6ac0:
    // 0x2e6ac0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2e6ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e6ac4:
    // 0x2e6ac4: 0x34a5000d  ori         $a1, $a1, 0xD
    ctx->pc = 0x2e6ac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13);
label_2e6ac8:
    // 0x2e6ac8: 0xc0bb966  jal         func_2EE598
label_2e6acc:
    if (ctx->pc == 0x2E6ACCu) {
        ctx->pc = 0x2E6ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6AC8u;
        // 0x2e6acc: 0x26340070  addiu       $s4, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6AD0u;
        goto label_2e6ad0;
    }
    ctx->pc = 0x2E6AC8u;
    SET_GPR_U32(ctx, 31, 0x2E6AD0u);
    ctx->pc = 0x2E6ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6AC8u;
    // 0x2e6acc: 0x26340070  addiu       $s4, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2E6AC8u, 0x2E6AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6AD0u;
label_2e6ad0:
    // 0x2e6ad0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2e6ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2e6ad4:
    // 0x2e6ad4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e6ad8:
    if (ctx->pc == 0x2E6AD8u) {
        ctx->pc = 0x2E6AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6AD4u;
        // 0x2e6ad8: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6ADCu;
        goto label_2e6adc;
    }
    ctx->pc = 0x2E6AD4u;
    {
        const bool branch_taken_0x2e6ad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6ad4) {
            ctx->pc = 0x2E6AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6AD4u;
            // 0x2e6ad8: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6AF0u;
            goto label_2e6af0;
        }
    }
    ctx->pc = 0x2E6ADCu;
label_2e6adc:
    // 0x2e6adc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e6adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e6ae0:
    // 0x2e6ae0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2e6ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2e6ae4:
    // 0x2e6ae4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e6ae8:
    if (ctx->pc == 0x2E6AE8u) {
        ctx->pc = 0x2E6AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6AE4u;
        // 0x2e6ae8: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6AECu;
        goto label_2e6aec;
    }
    ctx->pc = 0x2E6AE4u;
    {
        const bool branch_taken_0x2e6ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6AE4u;
        // 0x2e6ae8: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ae4) {
            ctx->pc = 0x2E6AFCu;
            goto label_2e6afc;
        }
    }
    ctx->pc = 0x2E6AECu;
label_2e6aec:
    // 0x2e6aec: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x2e6aecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_2e6af0:
    // 0x2e6af0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e6af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6af4:
    // 0x2e6af4: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x2e6af4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_2e6af8:
    // 0x2e6af8: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2e6af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2e6afc:
    // 0x2e6afc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2e6afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e6b00:
    // 0x2e6b00: 0x34a50014  ori         $a1, $a1, 0x14
    ctx->pc = 0x2e6b00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20);
label_2e6b04:
    // 0x2e6b04: 0xc0bb966  jal         func_2EE598
label_2e6b08:
    if (ctx->pc == 0x2E6B08u) {
        ctx->pc = 0x2E6B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B04u;
        // 0x2e6b08: 0x26350078  addiu       $s5, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6B0Cu;
        goto label_2e6b0c;
    }
    ctx->pc = 0x2E6B04u;
    SET_GPR_U32(ctx, 31, 0x2E6B0Cu);
    ctx->pc = 0x2E6B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6B04u;
    // 0x2e6b08: 0x26350078  addiu       $s5, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2E6B04u, 0x2E6B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6B0Cu;
label_2e6b0c:
    // 0x2e6b0c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2e6b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e6b10:
    // 0x2e6b10: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e6b14:
    if (ctx->pc == 0x2E6B14u) {
        ctx->pc = 0x2E6B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B10u;
        // 0x2e6b14: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6B18u;
        goto label_2e6b18;
    }
    ctx->pc = 0x2E6B10u;
    {
        const bool branch_taken_0x2e6b10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6b10) {
            ctx->pc = 0x2E6B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6B10u;
            // 0x2e6b14: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6B2Cu;
            goto label_2e6b2c;
        }
    }
    ctx->pc = 0x2E6B18u;
label_2e6b18:
    // 0x2e6b18: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e6b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e6b1c:
    // 0x2e6b1c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2e6b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2e6b20:
    // 0x2e6b20: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e6b24:
    if (ctx->pc == 0x2E6B24u) {
        ctx->pc = 0x2E6B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B20u;
        // 0x2e6b24: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6B28u;
        goto label_2e6b28;
    }
    ctx->pc = 0x2E6B20u;
    {
        const bool branch_taken_0x2e6b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B20u;
        // 0x2e6b24: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6b20) {
            ctx->pc = 0x2E6B38u;
            goto label_2e6b38;
        }
    }
    ctx->pc = 0x2E6B28u;
label_2e6b28:
    // 0x2e6b28: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x2e6b28u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_2e6b2c:
    // 0x2e6b2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e6b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6b30:
    // 0x2e6b30: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x2e6b30u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_2e6b34:
    // 0x2e6b34: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2e6b34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2e6b38:
    // 0x2e6b38: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2e6b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e6b3c:
    // 0x2e6b3c: 0x34a50017  ori         $a1, $a1, 0x17
    ctx->pc = 0x2e6b3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)23);
label_2e6b40:
    // 0x2e6b40: 0xc0bb966  jal         func_2EE598
label_2e6b44:
    if (ctx->pc == 0x2E6B44u) {
        ctx->pc = 0x2E6B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B40u;
        // 0x2e6b44: 0x26360080  addiu       $s6, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6B48u;
        goto label_2e6b48;
    }
    ctx->pc = 0x2E6B40u;
    SET_GPR_U32(ctx, 31, 0x2E6B48u);
    ctx->pc = 0x2E6B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6B40u;
    // 0x2e6b44: 0x26360080  addiu       $s6, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2E6B40u, 0x2E6B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6B48u;
label_2e6b48:
    // 0x2e6b48: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x2e6b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2e6b4c:
    // 0x2e6b4c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e6b50:
    if (ctx->pc == 0x2E6B50u) {
        ctx->pc = 0x2E6B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B4Cu;
        // 0x2e6b50: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6B54u;
        goto label_2e6b54;
    }
    ctx->pc = 0x2E6B4Cu;
    {
        const bool branch_taken_0x2e6b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6b4c) {
            ctx->pc = 0x2E6B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6B4Cu;
            // 0x2e6b50: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6B68u;
            goto label_2e6b68;
        }
    }
    ctx->pc = 0x2E6B54u;
label_2e6b54:
    // 0x2e6b54: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e6b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e6b58:
    // 0x2e6b58: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x2e6b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_2e6b5c:
    // 0x2e6b5c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e6b60:
    if (ctx->pc == 0x2E6B60u) {
        ctx->pc = 0x2E6B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B5Cu;
        // 0x2e6b60: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6B64u;
        goto label_2e6b64;
    }
    ctx->pc = 0x2E6B5Cu;
    {
        const bool branch_taken_0x2e6b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B5Cu;
        // 0x2e6b60: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6b5c) {
            ctx->pc = 0x2E6B74u;
            goto label_2e6b74;
        }
    }
    ctx->pc = 0x2E6B64u;
label_2e6b64:
    // 0x2e6b64: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x2e6b64u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_2e6b68:
    // 0x2e6b68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e6b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6b6c:
    // 0x2e6b6c: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x2e6b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
label_2e6b70:
    // 0x2e6b70: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2e6b70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2e6b74:
    // 0x2e6b74: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2e6b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e6b78:
    // 0x2e6b78: 0x34a5001a  ori         $a1, $a1, 0x1A
    ctx->pc = 0x2e6b78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26);
label_2e6b7c:
    // 0x2e6b7c: 0xc0bb966  jal         func_2EE598
label_2e6b80:
    if (ctx->pc == 0x2E6B80u) {
        ctx->pc = 0x2E6B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B7Cu;
        // 0x2e6b80: 0x26370088  addiu       $s7, $s1, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6B84u;
        goto label_2e6b84;
    }
    ctx->pc = 0x2E6B7Cu;
    SET_GPR_U32(ctx, 31, 0x2E6B84u);
    ctx->pc = 0x2E6B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6B7Cu;
    // 0x2e6b80: 0x26370088  addiu       $s7, $s1, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2E6B7Cu, 0x2E6B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6B84u;
label_2e6b84:
    // 0x2e6b84: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x2e6b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2e6b88:
    // 0x2e6b88: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e6b8c:
    if (ctx->pc == 0x2E6B8Cu) {
        ctx->pc = 0x2E6B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B88u;
        // 0x2e6b8c: 0xaee00000  sw          $zero, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6B90u;
        goto label_2e6b90;
    }
    ctx->pc = 0x2E6B88u;
    {
        const bool branch_taken_0x2e6b88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6b88) {
            ctx->pc = 0x2E6B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6B88u;
            // 0x2e6b8c: 0xaee00000  sw          $zero, 0x0($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6BA4u;
            goto label_2e6ba4;
        }
    }
    ctx->pc = 0x2E6B90u;
label_2e6b90:
    // 0x2e6b90: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e6b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e6b94:
    // 0x2e6b94: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x2e6b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_2e6b98:
    // 0x2e6b98: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e6b9c:
    if (ctx->pc == 0x2E6B9Cu) {
        ctx->pc = 0x2E6B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B98u;
        // 0x2e6b9c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6BA0u;
        goto label_2e6ba0;
    }
    ctx->pc = 0x2E6B98u;
    {
        const bool branch_taken_0x2e6b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B98u;
        // 0x2e6b9c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6b98) {
            ctx->pc = 0x2E6BB0u;
            goto label_2e6bb0;
        }
    }
    ctx->pc = 0x2E6BA0u;
label_2e6ba0:
    // 0x2e6ba0: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x2e6ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
label_2e6ba4:
    // 0x2e6ba4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e6ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6ba8:
    // 0x2e6ba8: 0xaee00004  sw          $zero, 0x4($s7)
    ctx->pc = 0x2e6ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
label_2e6bac:
    // 0x2e6bac: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2e6bacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2e6bb0:
    // 0x2e6bb0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e6bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e6bb4:
    // 0x2e6bb4: 0x34a5001d  ori         $a1, $a1, 0x1D
    ctx->pc = 0x2e6bb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)29);
label_2e6bb8:
    // 0x2e6bb8: 0xc0bb966  jal         func_2EE598
label_2e6bbc:
    if (ctx->pc == 0x2E6BBCu) {
        ctx->pc = 0x2E6BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6BB8u;
        // 0x2e6bbc: 0x34c600c0  ori         $a2, $a2, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6BC0u;
        goto label_2e6bc0;
    }
    ctx->pc = 0x2E6BB8u;
    SET_GPR_U32(ctx, 31, 0x2E6BC0u);
    ctx->pc = 0x2E6BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6BB8u;
    // 0x2e6bbc: 0x34c600c0  ori         $a2, $a2, 0xC0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2E6BB8u, 0x2E6BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6BC0u;
label_2e6bc0:
    // 0x2e6bc0: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x2e6bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_2e6bc4:
    // 0x2e6bc4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2e6bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2e6bc8:
    // 0x2e6bc8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e6bcc:
    if (ctx->pc == 0x2E6BCCu) {
        ctx->pc = 0x2E6BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6BC8u;
        // 0x2e6bcc: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6BD0u;
        goto label_2e6bd0;
    }
    ctx->pc = 0x2E6BC8u;
    {
        const bool branch_taken_0x2e6bc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6bc8) {
            ctx->pc = 0x2E6BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6BC8u;
            // 0x2e6bcc: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6BE4u;
            goto label_2e6be4;
        }
    }
    ctx->pc = 0x2E6BD0u;
label_2e6bd0:
    // 0x2e6bd0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e6bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e6bd4:
    // 0x2e6bd4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e6bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2e6bd8:
    // 0x2e6bd8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_2e6bdc:
    if (ctx->pc == 0x2E6BDCu) {
        ctx->pc = 0x2E6BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6BD8u;
        // 0x2e6bdc: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6BE0u;
        goto label_2e6be0;
    }
    ctx->pc = 0x2E6BD8u;
    {
        const bool branch_taken_0x2e6bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e6bd8) {
            ctx->pc = 0x2E6BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6BD8u;
            // 0x2e6bdc: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6BF0u;
            goto label_2e6bf0;
        }
    }
    ctx->pc = 0x2E6BE0u;
label_2e6be0:
    // 0x2e6be0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e6be0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2e6be4:
    // 0x2e6be4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e6be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6be8:
    // 0x2e6be8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e6be8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2e6bec:
    // 0x2e6bec: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2e6becu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2e6bf0:
    // 0x2e6bf0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e6bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e6bf4:
    // 0x2e6bf4: 0x34a50020  ori         $a1, $a1, 0x20
    ctx->pc = 0x2e6bf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32);
label_2e6bf8:
    // 0x2e6bf8: 0xc0bb966  jal         func_2EE598
label_2e6bfc:
    if (ctx->pc == 0x2E6BFCu) {
        ctx->pc = 0x2E6BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6BF8u;
        // 0x2e6bfc: 0x34c600c3  ori         $a2, $a2, 0xC3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)195);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6C00u;
        goto label_2e6c00;
    }
    ctx->pc = 0x2E6BF8u;
    SET_GPR_U32(ctx, 31, 0x2E6C00u);
    ctx->pc = 0x2E6BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6BF8u;
    // 0x2e6bfc: 0x34c600c3  ori         $a2, $a2, 0xC3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)195);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2E6BF8u, 0x2E6C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6C00u;
label_2e6c00:
    // 0x2e6c00: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e6c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e6c04:
    // 0x2e6c04: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e6c08:
    if (ctx->pc == 0x2E6C08u) {
        ctx->pc = 0x2E6C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C04u;
        // 0x2e6c08: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6C0Cu;
        goto label_2e6c0c;
    }
    ctx->pc = 0x2E6C04u;
    {
        const bool branch_taken_0x2e6c04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6c04) {
            ctx->pc = 0x2E6C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6C04u;
            // 0x2e6c08: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6C20u;
            goto label_2e6c20;
        }
    }
    ctx->pc = 0x2E6C0Cu;
label_2e6c0c:
    // 0x2e6c0c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e6c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e6c10:
    // 0x2e6c10: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e6c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e6c14:
    // 0x2e6c14: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e6c18:
    if (ctx->pc == 0x2E6C18u) {
        ctx->pc = 0x2E6C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C14u;
        // 0x2e6c18: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6C1Cu;
        goto label_2e6c1c;
    }
    ctx->pc = 0x2E6C14u;
    {
        const bool branch_taken_0x2e6c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C14u;
        // 0x2e6c18: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c14) {
            ctx->pc = 0x2E6C2Cu;
            goto label_2e6c2c;
        }
    }
    ctx->pc = 0x2E6C1Cu;
label_2e6c1c:
    // 0x2e6c1c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2e6c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2e6c20:
    // 0x2e6c20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e6c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6c24:
    // 0x2e6c24: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2e6c24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2e6c28:
    // 0x2e6c28: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e6c28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e6c2c:
    // 0x2e6c2c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e6c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e6c30:
    // 0x2e6c30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e6c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6c34:
    // 0x2e6c34: 0x34c60002  ori         $a2, $a2, 0x2
    ctx->pc = 0x2e6c34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
label_2e6c38:
    // 0x2e6c38: 0xc0bb96a  jal         func_2EE5A8
label_2e6c3c:
    if (ctx->pc == 0x2E6C3Cu) {
        ctx->pc = 0x2E6C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C38u;
        // 0x2e6c3c: 0x34e700aa  ori         $a3, $a3, 0xAA (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)170);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6C40u;
        goto label_2e6c40;
    }
    ctx->pc = 0x2E6C38u;
    SET_GPR_U32(ctx, 31, 0x2E6C40u);
    ctx->pc = 0x2E6C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6C38u;
    // 0x2e6c3c: 0x34e700aa  ori         $a3, $a3, 0xAA (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)170);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E6C38u, 0x2E6C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6C40u;
label_2e6c40:
    // 0x2e6c40: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e6c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e6c44:
    // 0x2e6c44: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e6c48:
    if (ctx->pc == 0x2E6C48u) {
        ctx->pc = 0x2E6C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C44u;
        // 0x2e6c48: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6C4Cu;
        goto label_2e6c4c;
    }
    ctx->pc = 0x2E6C44u;
    {
        const bool branch_taken_0x2e6c44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6c44) {
            ctx->pc = 0x2E6C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6C44u;
            // 0x2e6c48: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6C60u;
            goto label_2e6c60;
        }
    }
    ctx->pc = 0x2E6C4Cu;
label_2e6c4c:
    // 0x2e6c4c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e6c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e6c50:
    // 0x2e6c50: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e6c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e6c54:
    // 0x2e6c54: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e6c58:
    if (ctx->pc == 0x2E6C58u) {
        ctx->pc = 0x2E6C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C54u;
        // 0x2e6c58: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6C5Cu;
        goto label_2e6c5c;
    }
    ctx->pc = 0x2E6C54u;
    {
        const bool branch_taken_0x2e6c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C54u;
        // 0x2e6c58: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c54) {
            ctx->pc = 0x2E6C6Cu;
            goto label_2e6c6c;
        }
    }
    ctx->pc = 0x2E6C5Cu;
label_2e6c5c:
    // 0x2e6c5c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2e6c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2e6c60:
    // 0x2e6c60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e6c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6c64:
    // 0x2e6c64: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2e6c64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2e6c68:
    // 0x2e6c68: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e6c68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e6c6c:
    // 0x2e6c6c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e6c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e6c70:
    // 0x2e6c70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e6c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6c74:
    // 0x2e6c74: 0x34c60003  ori         $a2, $a2, 0x3
    ctx->pc = 0x2e6c74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3);
label_2e6c78:
    // 0x2e6c78: 0xc0bb96a  jal         func_2EE5A8
label_2e6c7c:
    if (ctx->pc == 0x2E6C7Cu) {
        ctx->pc = 0x2E6C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C78u;
        // 0x2e6c7c: 0x34e700ab  ori         $a3, $a3, 0xAB (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)171);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6C80u;
        goto label_2e6c80;
    }
    ctx->pc = 0x2E6C78u;
    SET_GPR_U32(ctx, 31, 0x2E6C80u);
    ctx->pc = 0x2E6C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6C78u;
    // 0x2e6c7c: 0x34e700ab  ori         $a3, $a3, 0xAB (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)171);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E6C78u, 0x2E6C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6C80u;
label_2e6c80:
    // 0x2e6c80: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e6c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e6c84:
    // 0x2e6c84: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e6c88:
    if (ctx->pc == 0x2E6C88u) {
        ctx->pc = 0x2E6C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C84u;
        // 0x2e6c88: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6C8Cu;
        goto label_2e6c8c;
    }
    ctx->pc = 0x2E6C84u;
    {
        const bool branch_taken_0x2e6c84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6c84) {
            ctx->pc = 0x2E6C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6C84u;
            // 0x2e6c88: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6CA0u;
            goto label_2e6ca0;
        }
    }
    ctx->pc = 0x2E6C8Cu;
label_2e6c8c:
    // 0x2e6c8c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e6c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e6c90:
    // 0x2e6c90: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e6c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e6c94:
    // 0x2e6c94: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e6c98:
    if (ctx->pc == 0x2E6C98u) {
        ctx->pc = 0x2E6C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C94u;
        // 0x2e6c98: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6C9Cu;
        goto label_2e6c9c;
    }
    ctx->pc = 0x2E6C94u;
    {
        const bool branch_taken_0x2e6c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C94u;
        // 0x2e6c98: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c94) {
            ctx->pc = 0x2E6CACu;
            goto label_2e6cac;
        }
    }
    ctx->pc = 0x2E6C9Cu;
label_2e6c9c:
    // 0x2e6c9c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2e6c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2e6ca0:
    // 0x2e6ca0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e6ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6ca4:
    // 0x2e6ca4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2e6ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2e6ca8:
    // 0x2e6ca8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e6ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e6cac:
    // 0x2e6cac: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e6cacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e6cb0:
    // 0x2e6cb0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2e6cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e6cb4:
    // 0x2e6cb4: 0x34c60004  ori         $a2, $a2, 0x4
    ctx->pc = 0x2e6cb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
label_2e6cb8:
    // 0x2e6cb8: 0xc0bb96a  jal         func_2EE5A8
label_2e6cbc:
    if (ctx->pc == 0x2E6CBCu) {
        ctx->pc = 0x2E6CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6CB8u;
        // 0x2e6cbc: 0x34e700ac  ori         $a3, $a3, 0xAC (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)172);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6CC0u;
        goto label_2e6cc0;
    }
    ctx->pc = 0x2E6CB8u;
    SET_GPR_U32(ctx, 31, 0x2E6CC0u);
    ctx->pc = 0x2E6CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6CB8u;
    // 0x2e6cbc: 0x34e700ac  ori         $a3, $a3, 0xAC (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)172);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E6CB8u, 0x2E6CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6CC0u;
label_2e6cc0:
    // 0x2e6cc0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e6cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e6cc4:
    // 0x2e6cc4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e6cc8:
    if (ctx->pc == 0x2E6CC8u) {
        ctx->pc = 0x2E6CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6CC4u;
        // 0x2e6cc8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6CCCu;
        goto label_2e6ccc;
    }
    ctx->pc = 0x2E6CC4u;
    {
        const bool branch_taken_0x2e6cc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6cc4) {
            ctx->pc = 0x2E6CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6CC4u;
            // 0x2e6cc8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6CE0u;
            goto label_2e6ce0;
        }
    }
    ctx->pc = 0x2E6CCCu;
label_2e6ccc:
    // 0x2e6ccc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e6cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e6cd0:
    // 0x2e6cd0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e6cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e6cd4:
    // 0x2e6cd4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e6cd8:
    if (ctx->pc == 0x2E6CD8u) {
        ctx->pc = 0x2E6CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6CD4u;
        // 0x2e6cd8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6CDCu;
        goto label_2e6cdc;
    }
    ctx->pc = 0x2E6CD4u;
    {
        const bool branch_taken_0x2e6cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6CD4u;
        // 0x2e6cd8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6cd4) {
            ctx->pc = 0x2E6CECu;
            goto label_2e6cec;
        }
    }
    ctx->pc = 0x2E6CDCu;
label_2e6cdc:
    // 0x2e6cdc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2e6cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2e6ce0:
    // 0x2e6ce0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e6ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6ce4:
    // 0x2e6ce4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2e6ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2e6ce8:
    // 0x2e6ce8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e6ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e6cec:
    // 0x2e6cec: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e6cecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e6cf0:
    // 0x2e6cf0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2e6cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e6cf4:
    // 0x2e6cf4: 0x34c60005  ori         $a2, $a2, 0x5
    ctx->pc = 0x2e6cf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)5);
label_2e6cf8:
    // 0x2e6cf8: 0xc0bb96a  jal         func_2EE5A8
label_2e6cfc:
    if (ctx->pc == 0x2E6CFCu) {
        ctx->pc = 0x2E6CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6CF8u;
        // 0x2e6cfc: 0x34e700ad  ori         $a3, $a3, 0xAD (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)173);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6D00u;
        goto label_2e6d00;
    }
    ctx->pc = 0x2E6CF8u;
    SET_GPR_U32(ctx, 31, 0x2E6D00u);
    ctx->pc = 0x2E6CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6CF8u;
    // 0x2e6cfc: 0x34e700ad  ori         $a3, $a3, 0xAD (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)173);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E6CF8u, 0x2E6D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6D00u;
label_2e6d00:
    // 0x2e6d00: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e6d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e6d04:
    // 0x2e6d04: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e6d08:
    if (ctx->pc == 0x2E6D08u) {
        ctx->pc = 0x2E6D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D04u;
        // 0x2e6d08: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6D0Cu;
        goto label_2e6d0c;
    }
    ctx->pc = 0x2E6D04u;
    {
        const bool branch_taken_0x2e6d04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6d04) {
            ctx->pc = 0x2E6D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6D04u;
            // 0x2e6d08: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6D20u;
            goto label_2e6d20;
        }
    }
    ctx->pc = 0x2E6D0Cu;
label_2e6d0c:
    // 0x2e6d0c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e6d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e6d10:
    // 0x2e6d10: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e6d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e6d14:
    // 0x2e6d14: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e6d18:
    if (ctx->pc == 0x2E6D18u) {
        ctx->pc = 0x2E6D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D14u;
        // 0x2e6d18: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6D1Cu;
        goto label_2e6d1c;
    }
    ctx->pc = 0x2E6D14u;
    {
        const bool branch_taken_0x2e6d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D14u;
        // 0x2e6d18: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d14) {
            ctx->pc = 0x2E6D2Cu;
            goto label_2e6d2c;
        }
    }
    ctx->pc = 0x2E6D1Cu;
label_2e6d1c:
    // 0x2e6d1c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2e6d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2e6d20:
    // 0x2e6d20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e6d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6d24:
    // 0x2e6d24: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2e6d24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2e6d28:
    // 0x2e6d28: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e6d28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e6d2c:
    // 0x2e6d2c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e6d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e6d30:
    // 0x2e6d30: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e6d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e6d34:
    // 0x2e6d34: 0x34c60006  ori         $a2, $a2, 0x6
    ctx->pc = 0x2e6d34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)6);
label_2e6d38:
    // 0x2e6d38: 0xc0bb96a  jal         func_2EE5A8
label_2e6d3c:
    if (ctx->pc == 0x2E6D3Cu) {
        ctx->pc = 0x2E6D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D38u;
        // 0x2e6d3c: 0x34e700ae  ori         $a3, $a3, 0xAE (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)174);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6D40u;
        goto label_2e6d40;
    }
    ctx->pc = 0x2E6D38u;
    SET_GPR_U32(ctx, 31, 0x2E6D40u);
    ctx->pc = 0x2E6D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6D38u;
    // 0x2e6d3c: 0x34e700ae  ori         $a3, $a3, 0xAE (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)174);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E6D38u, 0x2E6D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6D40u;
label_2e6d40:
    // 0x2e6d40: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2e6d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e6d44:
    // 0x2e6d44: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e6d48:
    if (ctx->pc == 0x2E6D48u) {
        ctx->pc = 0x2E6D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D44u;
        // 0x2e6d48: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6D4Cu;
        goto label_2e6d4c;
    }
    ctx->pc = 0x2E6D44u;
    {
        const bool branch_taken_0x2e6d44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6d44) {
            ctx->pc = 0x2E6D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6D44u;
            // 0x2e6d48: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6D60u;
            goto label_2e6d60;
        }
    }
    ctx->pc = 0x2E6D4Cu;
label_2e6d4c:
    // 0x2e6d4c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e6d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e6d50:
    // 0x2e6d50: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2e6d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2e6d54:
    // 0x2e6d54: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e6d58:
    if (ctx->pc == 0x2E6D58u) {
        ctx->pc = 0x2E6D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D54u;
        // 0x2e6d58: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6D5Cu;
        goto label_2e6d5c;
    }
    ctx->pc = 0x2E6D54u;
    {
        const bool branch_taken_0x2e6d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D54u;
        // 0x2e6d58: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d54) {
            ctx->pc = 0x2E6D6Cu;
            goto label_2e6d6c;
        }
    }
    ctx->pc = 0x2E6D5Cu;
label_2e6d5c:
    // 0x2e6d5c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2e6d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_2e6d60:
    // 0x2e6d60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e6d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6d64:
    // 0x2e6d64: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2e6d64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_2e6d68:
    // 0x2e6d68: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e6d68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e6d6c:
    // 0x2e6d6c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e6d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e6d70:
    // 0x2e6d70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e6d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6d74:
    // 0x2e6d74: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x2e6d74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
label_2e6d78:
    // 0x2e6d78: 0xc0bb96a  jal         func_2EE5A8
label_2e6d7c:
    if (ctx->pc == 0x2E6D7Cu) {
        ctx->pc = 0x2E6D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D78u;
        // 0x2e6d7c: 0x34e700af  ori         $a3, $a3, 0xAF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)175);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6D80u;
        goto label_2e6d80;
    }
    ctx->pc = 0x2E6D78u;
    SET_GPR_U32(ctx, 31, 0x2E6D80u);
    ctx->pc = 0x2E6D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6D78u;
    // 0x2e6d7c: 0x34e700af  ori         $a3, $a3, 0xAF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)175);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E6D78u, 0x2E6D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6D80u;
label_2e6d80:
    // 0x2e6d80: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2e6d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e6d84:
    // 0x2e6d84: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e6d88:
    if (ctx->pc == 0x2E6D88u) {
        ctx->pc = 0x2E6D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D84u;
        // 0x2e6d88: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6D8Cu;
        goto label_2e6d8c;
    }
    ctx->pc = 0x2E6D84u;
    {
        const bool branch_taken_0x2e6d84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6d84) {
            ctx->pc = 0x2E6D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6D84u;
            // 0x2e6d88: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6DA0u;
            goto label_2e6da0;
        }
    }
    ctx->pc = 0x2E6D8Cu;
label_2e6d8c:
    // 0x2e6d8c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e6d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e6d90:
    // 0x2e6d90: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2e6d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2e6d94:
    // 0x2e6d94: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e6d98:
    if (ctx->pc == 0x2E6D98u) {
        ctx->pc = 0x2E6D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D94u;
        // 0x2e6d98: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6D9Cu;
        goto label_2e6d9c;
    }
    ctx->pc = 0x2E6D94u;
    {
        const bool branch_taken_0x2e6d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D94u;
        // 0x2e6d98: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d94) {
            ctx->pc = 0x2E6DACu;
            goto label_2e6dac;
        }
    }
    ctx->pc = 0x2E6D9Cu;
label_2e6d9c:
    // 0x2e6d9c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2e6d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_2e6da0:
    // 0x2e6da0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e6da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6da4:
    // 0x2e6da4: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2e6da4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_2e6da8:
    // 0x2e6da8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e6da8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e6dac:
    // 0x2e6dac: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e6dacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e6db0:
    // 0x2e6db0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e6db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6db4:
    // 0x2e6db4: 0x34c60009  ori         $a2, $a2, 0x9
    ctx->pc = 0x2e6db4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)9);
label_2e6db8:
    // 0x2e6db8: 0xc0bb96a  jal         func_2EE5A8
label_2e6dbc:
    if (ctx->pc == 0x2E6DBCu) {
        ctx->pc = 0x2E6DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DB8u;
        // 0x2e6dbc: 0x34e700b0  ori         $a3, $a3, 0xB0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)176);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6DC0u;
        goto label_2e6dc0;
    }
    ctx->pc = 0x2E6DB8u;
    SET_GPR_U32(ctx, 31, 0x2E6DC0u);
    ctx->pc = 0x2E6DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6DB8u;
    // 0x2e6dbc: 0x34e700b0  ori         $a3, $a3, 0xB0 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)176);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E6DB8u, 0x2E6DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6DC0u;
label_2e6dc0:
    // 0x2e6dc0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2e6dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e6dc4:
    // 0x2e6dc4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e6dc8:
    if (ctx->pc == 0x2E6DC8u) {
        ctx->pc = 0x2E6DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DC4u;
        // 0x2e6dc8: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6DCCu;
        goto label_2e6dcc;
    }
    ctx->pc = 0x2E6DC4u;
    {
        const bool branch_taken_0x2e6dc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6dc4) {
            ctx->pc = 0x2E6DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6DC4u;
            // 0x2e6dc8: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6DE0u;
            goto label_2e6de0;
        }
    }
    ctx->pc = 0x2E6DCCu;
label_2e6dcc:
    // 0x2e6dcc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e6dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e6dd0:
    // 0x2e6dd0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2e6dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2e6dd4:
    // 0x2e6dd4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e6dd8:
    if (ctx->pc == 0x2E6DD8u) {
        ctx->pc = 0x2E6DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DD4u;
        // 0x2e6dd8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6DDCu;
        goto label_2e6ddc;
    }
    ctx->pc = 0x2E6DD4u;
    {
        const bool branch_taken_0x2e6dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DD4u;
        // 0x2e6dd8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6dd4) {
            ctx->pc = 0x2E6DECu;
            goto label_2e6dec;
        }
    }
    ctx->pc = 0x2E6DDCu;
label_2e6ddc:
    // 0x2e6ddc: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2e6ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_2e6de0:
    // 0x2e6de0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e6de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6de4:
    // 0x2e6de4: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2e6de4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_2e6de8:
    // 0x2e6de8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e6de8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e6dec:
    // 0x2e6dec: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e6decu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e6df0:
    // 0x2e6df0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2e6df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e6df4:
    // 0x2e6df4: 0x34c6000a  ori         $a2, $a2, 0xA
    ctx->pc = 0x2e6df4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)10);
label_2e6df8:
    // 0x2e6df8: 0xc0bb96a  jal         func_2EE5A8
label_2e6dfc:
    if (ctx->pc == 0x2E6DFCu) {
        ctx->pc = 0x2E6DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DF8u;
        // 0x2e6dfc: 0x34e700b1  ori         $a3, $a3, 0xB1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)177);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6E00u;
        goto label_2e6e00;
    }
    ctx->pc = 0x2E6DF8u;
    SET_GPR_U32(ctx, 31, 0x2E6E00u);
    ctx->pc = 0x2E6DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6DF8u;
    // 0x2e6dfc: 0x34e700b1  ori         $a3, $a3, 0xB1 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)177);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E6DF8u, 0x2E6E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E00u;
label_2e6e00:
    // 0x2e6e00: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2e6e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e6e04:
    // 0x2e6e04: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e6e08:
    if (ctx->pc == 0x2E6E08u) {
        ctx->pc = 0x2E6E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E04u;
        // 0x2e6e08: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6E0Cu;
        goto label_2e6e0c;
    }
    ctx->pc = 0x2E6E04u;
    {
        const bool branch_taken_0x2e6e04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6e04) {
            ctx->pc = 0x2E6E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6E04u;
            // 0x2e6e08: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6E20u;
            goto label_2e6e20;
        }
    }
    ctx->pc = 0x2E6E0Cu;
label_2e6e0c:
    // 0x2e6e0c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e6e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e6e10:
    // 0x2e6e10: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2e6e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2e6e14:
    // 0x2e6e14: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e6e18:
    if (ctx->pc == 0x2E6E18u) {
        ctx->pc = 0x2E6E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E14u;
        // 0x2e6e18: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6E1Cu;
        goto label_2e6e1c;
    }
    ctx->pc = 0x2E6E14u;
    {
        const bool branch_taken_0x2e6e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E14u;
        // 0x2e6e18: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e14) {
            ctx->pc = 0x2E6E2Cu;
            goto label_2e6e2c;
        }
    }
    ctx->pc = 0x2E6E1Cu;
label_2e6e1c:
    // 0x2e6e1c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2e6e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_2e6e20:
    // 0x2e6e20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e6e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6e24:
    // 0x2e6e24: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2e6e24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_2e6e28:
    // 0x2e6e28: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e6e28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e6e2c:
    // 0x2e6e2c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e6e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e6e30:
    // 0x2e6e30: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2e6e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e6e34:
    // 0x2e6e34: 0x34c6000b  ori         $a2, $a2, 0xB
    ctx->pc = 0x2e6e34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)11);
label_2e6e38:
    // 0x2e6e38: 0xc0bb96a  jal         func_2EE5A8
label_2e6e3c:
    if (ctx->pc == 0x2E6E3Cu) {
        ctx->pc = 0x2E6E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E38u;
        // 0x2e6e3c: 0x34e700b2  ori         $a3, $a3, 0xB2 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)178);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6E40u;
        goto label_2e6e40;
    }
    ctx->pc = 0x2E6E38u;
    SET_GPR_U32(ctx, 31, 0x2E6E40u);
    ctx->pc = 0x2E6E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6E38u;
    // 0x2e6e3c: 0x34e700b2  ori         $a3, $a3, 0xB2 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)178);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E6E38u, 0x2E6E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E40u;
label_2e6e40:
    // 0x2e6e40: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2e6e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e6e44:
    // 0x2e6e44: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e6e48:
    if (ctx->pc == 0x2E6E48u) {
        ctx->pc = 0x2E6E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E44u;
        // 0x2e6e48: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6E4Cu;
        goto label_2e6e4c;
    }
    ctx->pc = 0x2E6E44u;
    {
        const bool branch_taken_0x2e6e44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6e44) {
            ctx->pc = 0x2E6E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6E44u;
            // 0x2e6e48: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6E60u;
            goto label_2e6e60;
        }
    }
    ctx->pc = 0x2E6E4Cu;
label_2e6e4c:
    // 0x2e6e4c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e6e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e6e50:
    // 0x2e6e50: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2e6e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2e6e54:
    // 0x2e6e54: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e6e58:
    if (ctx->pc == 0x2E6E58u) {
        ctx->pc = 0x2E6E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E54u;
        // 0x2e6e58: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6E5Cu;
        goto label_2e6e5c;
    }
    ctx->pc = 0x2E6E54u;
    {
        const bool branch_taken_0x2e6e54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E54u;
        // 0x2e6e58: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e54) {
            ctx->pc = 0x2E6E6Cu;
            goto label_2e6e6c;
        }
    }
    ctx->pc = 0x2E6E5Cu;
label_2e6e5c:
    // 0x2e6e5c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2e6e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_2e6e60:
    // 0x2e6e60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e6e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6e64:
    // 0x2e6e64: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2e6e64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_2e6e68:
    // 0x2e6e68: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e6e68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e6e6c:
    // 0x2e6e6c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e6e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e6e70:
    // 0x2e6e70: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e6e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e6e74:
    // 0x2e6e74: 0x34c6000c  ori         $a2, $a2, 0xC
    ctx->pc = 0x2e6e74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)12);
label_2e6e78:
    // 0x2e6e78: 0xc0bb96a  jal         func_2EE5A8
label_2e6e7c:
    if (ctx->pc == 0x2E6E7Cu) {
        ctx->pc = 0x2E6E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E78u;
        // 0x2e6e7c: 0x34e700b3  ori         $a3, $a3, 0xB3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)179);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6E80u;
        goto label_2e6e80;
    }
    ctx->pc = 0x2E6E78u;
    SET_GPR_U32(ctx, 31, 0x2E6E80u);
    ctx->pc = 0x2E6E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6E78u;
    // 0x2e6e7c: 0x34e700b3  ori         $a3, $a3, 0xB3 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)179);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E6E78u, 0x2E6E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E80u;
label_2e6e80:
    // 0x2e6e80: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e6e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e6e84:
    // 0x2e6e84: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e6e88:
    if (ctx->pc == 0x2E6E88u) {
        ctx->pc = 0x2E6E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E84u;
        // 0x2e6e88: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6E8Cu;
        goto label_2e6e8c;
    }
    ctx->pc = 0x2E6E84u;
    {
        const bool branch_taken_0x2e6e84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6e84) {
            ctx->pc = 0x2E6E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6E84u;
            // 0x2e6e88: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6EA0u;
            goto label_2e6ea0;
        }
    }
    ctx->pc = 0x2E6E8Cu;
label_2e6e8c:
    // 0x2e6e8c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e6e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e6e90:
    // 0x2e6e90: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e6e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e6e94:
    // 0x2e6e94: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e6e98:
    if (ctx->pc == 0x2E6E98u) {
        ctx->pc = 0x2E6E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E94u;
        // 0x2e6e98: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6E9Cu;
        goto label_2e6e9c;
    }
    ctx->pc = 0x2E6E94u;
    {
        const bool branch_taken_0x2e6e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E94u;
        // 0x2e6e98: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e94) {
            ctx->pc = 0x2E6EACu;
            goto label_2e6eac;
        }
    }
    ctx->pc = 0x2E6E9Cu;
label_2e6e9c:
    // 0x2e6e9c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e6e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e6ea0:
    // 0x2e6ea0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e6ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6ea4:
    // 0x2e6ea4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e6ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e6ea8:
    // 0x2e6ea8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e6ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e6eac:
    // 0x2e6eac: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e6eacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e6eb0:
    // 0x2e6eb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e6eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6eb4:
    // 0x2e6eb4: 0x34c6000e  ori         $a2, $a2, 0xE
    ctx->pc = 0x2e6eb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)14);
label_2e6eb8:
    // 0x2e6eb8: 0xc0bb96a  jal         func_2EE5A8
label_2e6ebc:
    if (ctx->pc == 0x2E6EBCu) {
        ctx->pc = 0x2E6EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6EB8u;
        // 0x2e6ebc: 0x34e700b4  ori         $a3, $a3, 0xB4 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)180);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6EC0u;
        goto label_2e6ec0;
    }
    ctx->pc = 0x2E6EB8u;
    SET_GPR_U32(ctx, 31, 0x2E6EC0u);
    ctx->pc = 0x2E6EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6EB8u;
    // 0x2e6ebc: 0x34e700b4  ori         $a3, $a3, 0xB4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)180);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E6EB8u, 0x2E6EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6EC0u;
label_2e6ec0:
    // 0x2e6ec0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e6ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e6ec4:
    // 0x2e6ec4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e6ec8:
    if (ctx->pc == 0x2E6EC8u) {
        ctx->pc = 0x2E6EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6EC4u;
        // 0x2e6ec8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6ECCu;
        goto label_2e6ecc;
    }
    ctx->pc = 0x2E6EC4u;
    {
        const bool branch_taken_0x2e6ec4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6ec4) {
            ctx->pc = 0x2E6EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6EC4u;
            // 0x2e6ec8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6EE0u;
            goto label_2e6ee0;
        }
    }
    ctx->pc = 0x2E6ECCu;
label_2e6ecc:
    // 0x2e6ecc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e6eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e6ed0:
    // 0x2e6ed0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e6ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e6ed4:
    // 0x2e6ed4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e6ed8:
    if (ctx->pc == 0x2E6ED8u) {
        ctx->pc = 0x2E6ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6ED4u;
        // 0x2e6ed8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6EDCu;
        goto label_2e6edc;
    }
    ctx->pc = 0x2E6ED4u;
    {
        const bool branch_taken_0x2e6ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6ED4u;
        // 0x2e6ed8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ed4) {
            ctx->pc = 0x2E6EECu;
            goto label_2e6eec;
        }
    }
    ctx->pc = 0x2E6EDCu;
label_2e6edc:
    // 0x2e6edc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e6edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e6ee0:
    // 0x2e6ee0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e6ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6ee4:
    // 0x2e6ee4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e6ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e6ee8:
    // 0x2e6ee8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e6ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e6eec:
    // 0x2e6eec: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e6eecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e6ef0:
    // 0x2e6ef0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e6ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6ef4:
    // 0x2e6ef4: 0x34c6000f  ori         $a2, $a2, 0xF
    ctx->pc = 0x2e6ef4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)15);
label_2e6ef8:
    // 0x2e6ef8: 0xc0bb96a  jal         func_2EE5A8
label_2e6efc:
    if (ctx->pc == 0x2E6EFCu) {
        ctx->pc = 0x2E6EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6EF8u;
        // 0x2e6efc: 0x34e700b5  ori         $a3, $a3, 0xB5 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)181);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F00u;
        goto label_2e6f00;
    }
    ctx->pc = 0x2E6EF8u;
    SET_GPR_U32(ctx, 31, 0x2E6F00u);
    ctx->pc = 0x2E6EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6EF8u;
    // 0x2e6efc: 0x34e700b5  ori         $a3, $a3, 0xB5 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)181);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E6EF8u, 0x2E6F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6F00u;
label_2e6f00:
    // 0x2e6f00: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e6f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e6f04:
    // 0x2e6f04: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e6f08:
    if (ctx->pc == 0x2E6F08u) {
        ctx->pc = 0x2E6F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F04u;
        // 0x2e6f08: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F0Cu;
        goto label_2e6f0c;
    }
    ctx->pc = 0x2E6F04u;
    {
        const bool branch_taken_0x2e6f04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6f04) {
            ctx->pc = 0x2E6F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6F04u;
            // 0x2e6f08: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6F20u;
            goto label_2e6f20;
        }
    }
    ctx->pc = 0x2E6F0Cu;
label_2e6f0c:
    // 0x2e6f0c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e6f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e6f10:
    // 0x2e6f10: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e6f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e6f14:
    // 0x2e6f14: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e6f18:
    if (ctx->pc == 0x2E6F18u) {
        ctx->pc = 0x2E6F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F14u;
        // 0x2e6f18: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F1Cu;
        goto label_2e6f1c;
    }
    ctx->pc = 0x2E6F14u;
    {
        const bool branch_taken_0x2e6f14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F14u;
        // 0x2e6f18: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6f14) {
            ctx->pc = 0x2E6F2Cu;
            goto label_2e6f2c;
        }
    }
    ctx->pc = 0x2E6F1Cu;
label_2e6f1c:
    // 0x2e6f1c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e6f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e6f20:
    // 0x2e6f20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e6f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6f24:
    // 0x2e6f24: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e6f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e6f28:
    // 0x2e6f28: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e6f28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e6f2c:
    // 0x2e6f2c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e6f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e6f30:
    // 0x2e6f30: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2e6f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e6f34:
    // 0x2e6f34: 0x34c60010  ori         $a2, $a2, 0x10
    ctx->pc = 0x2e6f34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
label_2e6f38:
    // 0x2e6f38: 0xc0bb96a  jal         func_2EE5A8
label_2e6f3c:
    if (ctx->pc == 0x2E6F3Cu) {
        ctx->pc = 0x2E6F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F38u;
        // 0x2e6f3c: 0x34e700b6  ori         $a3, $a3, 0xB6 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)182);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F40u;
        goto label_2e6f40;
    }
    ctx->pc = 0x2E6F38u;
    SET_GPR_U32(ctx, 31, 0x2E6F40u);
    ctx->pc = 0x2E6F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6F38u;
    // 0x2e6f3c: 0x34e700b6  ori         $a3, $a3, 0xB6 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)182);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E6F38u, 0x2E6F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6F40u;
label_2e6f40:
    // 0x2e6f40: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e6f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e6f44:
    // 0x2e6f44: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e6f48:
    if (ctx->pc == 0x2E6F48u) {
        ctx->pc = 0x2E6F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F44u;
        // 0x2e6f48: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F4Cu;
        goto label_2e6f4c;
    }
    ctx->pc = 0x2E6F44u;
    {
        const bool branch_taken_0x2e6f44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6f44) {
            ctx->pc = 0x2E6F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6F44u;
            // 0x2e6f48: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6F60u;
            goto label_2e6f60;
        }
    }
    ctx->pc = 0x2E6F4Cu;
label_2e6f4c:
    // 0x2e6f4c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e6f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e6f50:
    // 0x2e6f50: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e6f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e6f54:
    // 0x2e6f54: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e6f58:
    if (ctx->pc == 0x2E6F58u) {
        ctx->pc = 0x2E6F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F54u;
        // 0x2e6f58: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F5Cu;
        goto label_2e6f5c;
    }
    ctx->pc = 0x2E6F54u;
    {
        const bool branch_taken_0x2e6f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F54u;
        // 0x2e6f58: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6f54) {
            ctx->pc = 0x2E6F6Cu;
            goto label_2e6f6c;
        }
    }
    ctx->pc = 0x2E6F5Cu;
label_2e6f5c:
    // 0x2e6f5c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e6f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e6f60:
    // 0x2e6f60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e6f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6f64:
    // 0x2e6f64: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e6f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e6f68:
    // 0x2e6f68: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e6f68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e6f6c:
    // 0x2e6f6c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e6f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e6f70:
    // 0x2e6f70: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2e6f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e6f74:
    // 0x2e6f74: 0x34c60011  ori         $a2, $a2, 0x11
    ctx->pc = 0x2e6f74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17);
label_2e6f78:
    // 0x2e6f78: 0xc0bb96a  jal         func_2EE5A8
label_2e6f7c:
    if (ctx->pc == 0x2E6F7Cu) {
        ctx->pc = 0x2E6F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F78u;
        // 0x2e6f7c: 0x34e700b7  ori         $a3, $a3, 0xB7 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)183);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F80u;
        goto label_2e6f80;
    }
    ctx->pc = 0x2E6F78u;
    SET_GPR_U32(ctx, 31, 0x2E6F80u);
    ctx->pc = 0x2E6F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6F78u;
    // 0x2e6f7c: 0x34e700b7  ori         $a3, $a3, 0xB7 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)183);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E6F78u, 0x2E6F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6F80u;
label_2e6f80:
    // 0x2e6f80: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e6f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e6f84:
    // 0x2e6f84: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e6f88:
    if (ctx->pc == 0x2E6F88u) {
        ctx->pc = 0x2E6F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F84u;
        // 0x2e6f88: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F8Cu;
        goto label_2e6f8c;
    }
    ctx->pc = 0x2E6F84u;
    {
        const bool branch_taken_0x2e6f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6f84) {
            ctx->pc = 0x2E6F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6F84u;
            // 0x2e6f88: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6FA0u;
            goto label_2e6fa0;
        }
    }
    ctx->pc = 0x2E6F8Cu;
label_2e6f8c:
    // 0x2e6f8c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e6f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e6f90:
    // 0x2e6f90: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e6f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e6f94:
    // 0x2e6f94: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e6f98:
    if (ctx->pc == 0x2E6F98u) {
        ctx->pc = 0x2E6F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F94u;
        // 0x2e6f98: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F9Cu;
        goto label_2e6f9c;
    }
    ctx->pc = 0x2E6F94u;
    {
        const bool branch_taken_0x2e6f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F94u;
        // 0x2e6f98: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6f94) {
            ctx->pc = 0x2E6FACu;
            goto label_2e6fac;
        }
    }
    ctx->pc = 0x2E6F9Cu;
label_2e6f9c:
    // 0x2e6f9c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e6f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e6fa0:
    // 0x2e6fa0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e6fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6fa4:
    // 0x2e6fa4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e6fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e6fa8:
    // 0x2e6fa8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e6fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e6fac:
    // 0x2e6fac: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e6facu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e6fb0:
    // 0x2e6fb0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e6fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e6fb4:
    // 0x2e6fb4: 0x34c60012  ori         $a2, $a2, 0x12
    ctx->pc = 0x2e6fb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)18);
label_2e6fb8:
    // 0x2e6fb8: 0xc0bb96a  jal         func_2EE5A8
label_2e6fbc:
    if (ctx->pc == 0x2E6FBCu) {
        ctx->pc = 0x2E6FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FB8u;
        // 0x2e6fbc: 0x34e700b8  ori         $a3, $a3, 0xB8 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)184);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6FC0u;
        goto label_2e6fc0;
    }
    ctx->pc = 0x2E6FB8u;
    SET_GPR_U32(ctx, 31, 0x2E6FC0u);
    ctx->pc = 0x2E6FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6FB8u;
    // 0x2e6fbc: 0x34e700b8  ori         $a3, $a3, 0xB8 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)184);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E6FB8u, 0x2E6FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6FC0u;
label_2e6fc0:
    // 0x2e6fc0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e6fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e6fc4:
    // 0x2e6fc4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e6fc8:
    if (ctx->pc == 0x2E6FC8u) {
        ctx->pc = 0x2E6FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FC4u;
        // 0x2e6fc8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6FCCu;
        goto label_2e6fcc;
    }
    ctx->pc = 0x2E6FC4u;
    {
        const bool branch_taken_0x2e6fc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6fc4) {
            ctx->pc = 0x2E6FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6FC4u;
            // 0x2e6fc8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6FE0u;
            goto label_2e6fe0;
        }
    }
    ctx->pc = 0x2E6FCCu;
label_2e6fcc:
    // 0x2e6fcc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e6fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e6fd0:
    // 0x2e6fd0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e6fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e6fd4:
    // 0x2e6fd4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e6fd8:
    if (ctx->pc == 0x2E6FD8u) {
        ctx->pc = 0x2E6FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FD4u;
        // 0x2e6fd8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6FDCu;
        goto label_2e6fdc;
    }
    ctx->pc = 0x2E6FD4u;
    {
        const bool branch_taken_0x2e6fd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FD4u;
        // 0x2e6fd8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6fd4) {
            ctx->pc = 0x2E6FECu;
            goto label_2e6fec;
        }
    }
    ctx->pc = 0x2E6FDCu;
label_2e6fdc:
    // 0x2e6fdc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e6fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e6fe0:
    // 0x2e6fe0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e6fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6fe4:
    // 0x2e6fe4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e6fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e6fe8:
    // 0x2e6fe8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e6fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e6fec:
    // 0x2e6fec: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e6fecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e6ff0:
    // 0x2e6ff0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2e6ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2e6ff4:
    // 0x2e6ff4: 0x34c60013  ori         $a2, $a2, 0x13
    ctx->pc = 0x2e6ff4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)19);
label_2e6ff8:
    // 0x2e6ff8: 0xc0bb96a  jal         func_2EE5A8
label_2e6ffc:
    if (ctx->pc == 0x2E6FFCu) {
        ctx->pc = 0x2E6FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FF8u;
        // 0x2e6ffc: 0x34e700b9  ori         $a3, $a3, 0xB9 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)185);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7000u;
        goto label_2e7000;
    }
    ctx->pc = 0x2E6FF8u;
    SET_GPR_U32(ctx, 31, 0x2E7000u);
    ctx->pc = 0x2E6FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6FF8u;
    // 0x2e6ffc: 0x34e700b9  ori         $a3, $a3, 0xB9 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)185);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E6FF8u, 0x2E7000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7000u;
label_2e7000:
    // 0x2e7000: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2e7000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2e7004:
    // 0x2e7004: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7008:
    if (ctx->pc == 0x2E7008u) {
        ctx->pc = 0x2E7008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7004u;
        // 0x2e7008: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E700Cu;
        goto label_2e700c;
    }
    ctx->pc = 0x2E7004u;
    {
        const bool branch_taken_0x2e7004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7004) {
            ctx->pc = 0x2E7008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7004u;
            // 0x2e7008: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7020u;
            goto label_2e7020;
        }
    }
    ctx->pc = 0x2E700Cu;
label_2e700c:
    // 0x2e700c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e700cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7010:
    // 0x2e7010: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2e7010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2e7014:
    // 0x2e7014: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7018:
    if (ctx->pc == 0x2E7018u) {
        ctx->pc = 0x2E7018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7014u;
        // 0x2e7018: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E701Cu;
        goto label_2e701c;
    }
    ctx->pc = 0x2E7014u;
    {
        const bool branch_taken_0x2e7014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7014u;
        // 0x2e7018: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7014) {
            ctx->pc = 0x2E702Cu;
            goto label_2e702c;
        }
    }
    ctx->pc = 0x2E701Cu;
label_2e701c:
    // 0x2e701c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x2e701cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_2e7020:
    // 0x2e7020: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7024:
    // 0x2e7024: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x2e7024u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_2e7028:
    // 0x2e7028: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e7028u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e702c:
    // 0x2e702c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e702cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e7030:
    // 0x2e7030: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e7030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7034:
    // 0x2e7034: 0x34c60016  ori         $a2, $a2, 0x16
    ctx->pc = 0x2e7034u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)22);
label_2e7038:
    // 0x2e7038: 0xc0bb96a  jal         func_2EE5A8
label_2e703c:
    if (ctx->pc == 0x2E703Cu) {
        ctx->pc = 0x2E703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7038u;
        // 0x2e703c: 0x34e700ba  ori         $a3, $a3, 0xBA (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)186);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7040u;
        goto label_2e7040;
    }
    ctx->pc = 0x2E7038u;
    SET_GPR_U32(ctx, 31, 0x2E7040u);
    ctx->pc = 0x2E703Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7038u;
    // 0x2e703c: 0x34e700ba  ori         $a3, $a3, 0xBA (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)186);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E7038u, 0x2E7040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7040u;
label_2e7040:
    // 0x2e7040: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2e7040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2e7044:
    // 0x2e7044: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7048:
    if (ctx->pc == 0x2E7048u) {
        ctx->pc = 0x2E7048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7044u;
        // 0x2e7048: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E704Cu;
        goto label_2e704c;
    }
    ctx->pc = 0x2E7044u;
    {
        const bool branch_taken_0x2e7044 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7044) {
            ctx->pc = 0x2E7048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7044u;
            // 0x2e7048: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7060u;
            goto label_2e7060;
        }
    }
    ctx->pc = 0x2E704Cu;
label_2e704c:
    // 0x2e704c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e704cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7050:
    // 0x2e7050: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2e7050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2e7054:
    // 0x2e7054: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7058:
    if (ctx->pc == 0x2E7058u) {
        ctx->pc = 0x2E7058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7054u;
        // 0x2e7058: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E705Cu;
        goto label_2e705c;
    }
    ctx->pc = 0x2E7054u;
    {
        const bool branch_taken_0x2e7054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7054u;
        // 0x2e7058: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7054) {
            ctx->pc = 0x2E706Cu;
            goto label_2e706c;
        }
    }
    ctx->pc = 0x2E705Cu;
label_2e705c:
    // 0x2e705c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x2e705cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_2e7060:
    // 0x2e7060: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7064:
    // 0x2e7064: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x2e7064u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_2e7068:
    // 0x2e7068: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e7068u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e706c:
    // 0x2e706c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e706cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e7070:
    // 0x2e7070: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e7070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7074:
    // 0x2e7074: 0x34c60015  ori         $a2, $a2, 0x15
    ctx->pc = 0x2e7074u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21);
label_2e7078:
    // 0x2e7078: 0xc0bb96a  jal         func_2EE5A8
label_2e707c:
    if (ctx->pc == 0x2E707Cu) {
        ctx->pc = 0x2E707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7078u;
        // 0x2e707c: 0x34e700bb  ori         $a3, $a3, 0xBB (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)187);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7080u;
        goto label_2e7080;
    }
    ctx->pc = 0x2E7078u;
    SET_GPR_U32(ctx, 31, 0x2E7080u);
    ctx->pc = 0x2E707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7078u;
    // 0x2e707c: 0x34e700bb  ori         $a3, $a3, 0xBB (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)187);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E7078u, 0x2E7080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7080u;
label_2e7080:
    // 0x2e7080: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2e7080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e7084:
    // 0x2e7084: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7088:
    if (ctx->pc == 0x2E7088u) {
        ctx->pc = 0x2E7088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7084u;
        // 0x2e7088: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E708Cu;
        goto label_2e708c;
    }
    ctx->pc = 0x2E7084u;
    {
        const bool branch_taken_0x2e7084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7084) {
            ctx->pc = 0x2E7088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7084u;
            // 0x2e7088: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E70A0u;
            goto label_2e70a0;
        }
    }
    ctx->pc = 0x2E708Cu;
label_2e708c:
    // 0x2e708c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e708cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7090:
    // 0x2e7090: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2e7090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2e7094:
    // 0x2e7094: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7098:
    if (ctx->pc == 0x2E7098u) {
        ctx->pc = 0x2E7098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7094u;
        // 0x2e7098: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E709Cu;
        goto label_2e709c;
    }
    ctx->pc = 0x2E7094u;
    {
        const bool branch_taken_0x2e7094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7094u;
        // 0x2e7098: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7094) {
            ctx->pc = 0x2E70ACu;
            goto label_2e70ac;
        }
    }
    ctx->pc = 0x2E709Cu;
label_2e709c:
    // 0x2e709c: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x2e709cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_2e70a0:
    // 0x2e70a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e70a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e70a4:
    // 0x2e70a4: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x2e70a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_2e70a8:
    // 0x2e70a8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e70a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e70ac:
    // 0x2e70ac: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e70acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e70b0:
    // 0x2e70b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e70b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e70b4:
    // 0x2e70b4: 0x34c60018  ori         $a2, $a2, 0x18
    ctx->pc = 0x2e70b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24);
label_2e70b8:
    // 0x2e70b8: 0xc0bb96a  jal         func_2EE5A8
label_2e70bc:
    if (ctx->pc == 0x2E70BCu) {
        ctx->pc = 0x2E70BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70B8u;
        // 0x2e70bc: 0x34e700bc  ori         $a3, $a3, 0xBC (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)188);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E70C0u;
        goto label_2e70c0;
    }
    ctx->pc = 0x2E70B8u;
    SET_GPR_U32(ctx, 31, 0x2E70C0u);
    ctx->pc = 0x2E70BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E70B8u;
    // 0x2e70bc: 0x34e700bc  ori         $a3, $a3, 0xBC (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)188);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E70B8u, 0x2E70C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E70C0u;
label_2e70c0:
    // 0x2e70c0: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2e70c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e70c4:
    // 0x2e70c4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e70c8:
    if (ctx->pc == 0x2E70C8u) {
        ctx->pc = 0x2E70C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70C4u;
        // 0x2e70c8: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E70CCu;
        goto label_2e70cc;
    }
    ctx->pc = 0x2E70C4u;
    {
        const bool branch_taken_0x2e70c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e70c4) {
            ctx->pc = 0x2E70C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E70C4u;
            // 0x2e70c8: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E70E0u;
            goto label_2e70e0;
        }
    }
    ctx->pc = 0x2E70CCu;
label_2e70cc:
    // 0x2e70cc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e70ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e70d0:
    // 0x2e70d0: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2e70d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2e70d4:
    // 0x2e70d4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e70d8:
    if (ctx->pc == 0x2E70D8u) {
        ctx->pc = 0x2E70D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70D4u;
        // 0x2e70d8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E70DCu;
        goto label_2e70dc;
    }
    ctx->pc = 0x2E70D4u;
    {
        const bool branch_taken_0x2e70d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E70D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70D4u;
        // 0x2e70d8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e70d4) {
            ctx->pc = 0x2E70ECu;
            goto label_2e70ec;
        }
    }
    ctx->pc = 0x2E70DCu;
label_2e70dc:
    // 0x2e70dc: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x2e70dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_2e70e0:
    // 0x2e70e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e70e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e70e4:
    // 0x2e70e4: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x2e70e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_2e70e8:
    // 0x2e70e8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e70e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e70ec:
    // 0x2e70ec: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e70ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e70f0:
    // 0x2e70f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e70f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e70f4:
    // 0x2e70f4: 0x34c60019  ori         $a2, $a2, 0x19
    ctx->pc = 0x2e70f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)25);
label_2e70f8:
    // 0x2e70f8: 0xc0bb96a  jal         func_2EE5A8
label_2e70fc:
    if (ctx->pc == 0x2E70FCu) {
        ctx->pc = 0x2E70FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70F8u;
        // 0x2e70fc: 0x34e700bd  ori         $a3, $a3, 0xBD (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)189);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7100u;
        goto label_2e7100;
    }
    ctx->pc = 0x2E70F8u;
    SET_GPR_U32(ctx, 31, 0x2E7100u);
    ctx->pc = 0x2E70FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E70F8u;
    // 0x2e70fc: 0x34e700bd  ori         $a3, $a3, 0xBD (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)189);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E70F8u, 0x2E7100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7100u;
label_2e7100:
    // 0x2e7100: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x2e7100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2e7104:
    // 0x2e7104: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7108:
    if (ctx->pc == 0x2E7108u) {
        ctx->pc = 0x2E7108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7104u;
        // 0x2e7108: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E710Cu;
        goto label_2e710c;
    }
    ctx->pc = 0x2E7104u;
    {
        const bool branch_taken_0x2e7104 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7104) {
            ctx->pc = 0x2E7108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7104u;
            // 0x2e7108: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7120u;
            goto label_2e7120;
        }
    }
    ctx->pc = 0x2E710Cu;
label_2e710c:
    // 0x2e710c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e710cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7110:
    // 0x2e7110: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x2e7110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_2e7114:
    // 0x2e7114: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7118:
    if (ctx->pc == 0x2E7118u) {
        ctx->pc = 0x2E7118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7114u;
        // 0x2e7118: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E711Cu;
        goto label_2e711c;
    }
    ctx->pc = 0x2E7114u;
    {
        const bool branch_taken_0x2e7114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7114u;
        // 0x2e7118: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7114) {
            ctx->pc = 0x2E712Cu;
            goto label_2e712c;
        }
    }
    ctx->pc = 0x2E711Cu;
label_2e711c:
    // 0x2e711c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x2e711cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_2e7120:
    // 0x2e7120: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7124:
    // 0x2e7124: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x2e7124u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
label_2e7128:
    // 0x2e7128: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e7128u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e712c:
    // 0x2e712c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e712cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e7130:
    // 0x2e7130: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e7130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7134:
    // 0x2e7134: 0x34c6001c  ori         $a2, $a2, 0x1C
    ctx->pc = 0x2e7134u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)28);
label_2e7138:
    // 0x2e7138: 0xc0bb96a  jal         func_2EE5A8
label_2e713c:
    if (ctx->pc == 0x2E713Cu) {
        ctx->pc = 0x2E713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7138u;
        // 0x2e713c: 0x34e700be  ori         $a3, $a3, 0xBE (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)190);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7140u;
        goto label_2e7140;
    }
    ctx->pc = 0x2E7138u;
    SET_GPR_U32(ctx, 31, 0x2E7140u);
    ctx->pc = 0x2E713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7138u;
    // 0x2e713c: 0x34e700be  ori         $a3, $a3, 0xBE (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)190);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E7138u, 0x2E7140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7140u;
label_2e7140:
    // 0x2e7140: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x2e7140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2e7144:
    // 0x2e7144: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7148:
    if (ctx->pc == 0x2E7148u) {
        ctx->pc = 0x2E7148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7144u;
        // 0x2e7148: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E714Cu;
        goto label_2e714c;
    }
    ctx->pc = 0x2E7144u;
    {
        const bool branch_taken_0x2e7144 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7144) {
            ctx->pc = 0x2E7148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7144u;
            // 0x2e7148: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7160u;
            goto label_2e7160;
        }
    }
    ctx->pc = 0x2E714Cu;
label_2e714c:
    // 0x2e714c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e714cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7150:
    // 0x2e7150: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x2e7150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_2e7154:
    // 0x2e7154: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7158:
    if (ctx->pc == 0x2E7158u) {
        ctx->pc = 0x2E7158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7154u;
        // 0x2e7158: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E715Cu;
        goto label_2e715c;
    }
    ctx->pc = 0x2E7154u;
    {
        const bool branch_taken_0x2e7154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7154u;
        // 0x2e7158: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7154) {
            ctx->pc = 0x2E716Cu;
            goto label_2e716c;
        }
    }
    ctx->pc = 0x2E715Cu;
label_2e715c:
    // 0x2e715c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x2e715cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_2e7160:
    // 0x2e7160: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7164:
    // 0x2e7164: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x2e7164u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
label_2e7168:
    // 0x2e7168: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e7168u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e716c:
    // 0x2e716c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e716cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e7170:
    // 0x2e7170: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e7170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7174:
    // 0x2e7174: 0x34c6001b  ori         $a2, $a2, 0x1B
    ctx->pc = 0x2e7174u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)27);
label_2e7178:
    // 0x2e7178: 0xc0bb96a  jal         func_2EE5A8
label_2e717c:
    if (ctx->pc == 0x2E717Cu) {
        ctx->pc = 0x2E717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7178u;
        // 0x2e717c: 0x34e700bf  ori         $a3, $a3, 0xBF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)191);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7180u;
        goto label_2e7180;
    }
    ctx->pc = 0x2E7178u;
    SET_GPR_U32(ctx, 31, 0x2E7180u);
    ctx->pc = 0x2E717Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7178u;
    // 0x2e717c: 0x34e700bf  ori         $a3, $a3, 0xBF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)191);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E7178u, 0x2E7180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7180u;
label_2e7180:
    // 0x2e7180: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x2e7180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2e7184:
    // 0x2e7184: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7188:
    if (ctx->pc == 0x2E7188u) {
        ctx->pc = 0x2E7188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7184u;
        // 0x2e7188: 0xaee00000  sw          $zero, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E718Cu;
        goto label_2e718c;
    }
    ctx->pc = 0x2E7184u;
    {
        const bool branch_taken_0x2e7184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7184) {
            ctx->pc = 0x2E7188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7184u;
            // 0x2e7188: 0xaee00000  sw          $zero, 0x0($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E71A0u;
            goto label_2e71a0;
        }
    }
    ctx->pc = 0x2E718Cu;
label_2e718c:
    // 0x2e718c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e718cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7190:
    // 0x2e7190: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x2e7190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_2e7194:
    // 0x2e7194: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7198:
    if (ctx->pc == 0x2E7198u) {
        ctx->pc = 0x2E7198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7194u;
        // 0x2e7198: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E719Cu;
        goto label_2e719c;
    }
    ctx->pc = 0x2E7194u;
    {
        const bool branch_taken_0x2e7194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7194u;
        // 0x2e7198: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7194) {
            ctx->pc = 0x2E71ACu;
            goto label_2e71ac;
        }
    }
    ctx->pc = 0x2E719Cu;
label_2e719c:
    // 0x2e719c: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x2e719cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
label_2e71a0:
    // 0x2e71a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e71a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e71a4:
    // 0x2e71a4: 0xaee00004  sw          $zero, 0x4($s7)
    ctx->pc = 0x2e71a4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
label_2e71a8:
    // 0x2e71a8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e71a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e71ac:
    // 0x2e71ac: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e71acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e71b0:
    // 0x2e71b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e71b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e71b4:
    // 0x2e71b4: 0x34c6001e  ori         $a2, $a2, 0x1E
    ctx->pc = 0x2e71b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)30);
label_2e71b8:
    // 0x2e71b8: 0xc0bb96a  jal         func_2EE5A8
label_2e71bc:
    if (ctx->pc == 0x2E71BCu) {
        ctx->pc = 0x2E71BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71B8u;
        // 0x2e71bc: 0x34e700c2  ori         $a3, $a3, 0xC2 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)194);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E71C0u;
        goto label_2e71c0;
    }
    ctx->pc = 0x2E71B8u;
    SET_GPR_U32(ctx, 31, 0x2E71C0u);
    ctx->pc = 0x2E71BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E71B8u;
    // 0x2e71bc: 0x34e700c2  ori         $a3, $a3, 0xC2 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)194);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E71B8u, 0x2E71C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E71C0u;
label_2e71c0:
    // 0x2e71c0: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x2e71c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2e71c4:
    // 0x2e71c4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e71c8:
    if (ctx->pc == 0x2E71C8u) {
        ctx->pc = 0x2E71C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71C4u;
        // 0x2e71c8: 0xaee00004  sw          $zero, 0x4($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E71CCu;
        goto label_2e71cc;
    }
    ctx->pc = 0x2E71C4u;
    {
        const bool branch_taken_0x2e71c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e71c4) {
            ctx->pc = 0x2E71C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E71C4u;
            // 0x2e71c8: 0xaee00004  sw          $zero, 0x4($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E71E0u;
            goto label_2e71e0;
        }
    }
    ctx->pc = 0x2E71CCu;
label_2e71cc:
    // 0x2e71cc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e71ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e71d0:
    // 0x2e71d0: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x2e71d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_2e71d4:
    // 0x2e71d4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e71d8:
    if (ctx->pc == 0x2E71D8u) {
        ctx->pc = 0x2E71D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71D4u;
        // 0x2e71d8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E71DCu;
        goto label_2e71dc;
    }
    ctx->pc = 0x2E71D4u;
    {
        const bool branch_taken_0x2e71d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E71D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71D4u;
        // 0x2e71d8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e71d4) {
            ctx->pc = 0x2E71ECu;
            goto label_2e71ec;
        }
    }
    ctx->pc = 0x2E71DCu;
label_2e71dc:
    // 0x2e71dc: 0xaee00004  sw          $zero, 0x4($s7)
    ctx->pc = 0x2e71dcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
label_2e71e0:
    // 0x2e71e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e71e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e71e4:
    // 0x2e71e4: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x2e71e4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
label_2e71e8:
    // 0x2e71e8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e71e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e71ec:
    // 0x2e71ec: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e71ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e71f0:
    // 0x2e71f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e71f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e71f4:
    // 0x2e71f4: 0x34c6001f  ori         $a2, $a2, 0x1F
    ctx->pc = 0x2e71f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)31);
label_2e71f8:
    // 0x2e71f8: 0xc0bb96a  jal         func_2EE5A8
label_2e71fc:
    if (ctx->pc == 0x2E71FCu) {
        ctx->pc = 0x2E71FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71F8u;
        // 0x2e71fc: 0x34e700c1  ori         $a3, $a3, 0xC1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)193);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7200u;
        goto label_2e7200;
    }
    ctx->pc = 0x2E71F8u;
    SET_GPR_U32(ctx, 31, 0x2E7200u);
    ctx->pc = 0x2E71FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E71F8u;
    // 0x2e71fc: 0x34e700c1  ori         $a3, $a3, 0xC1 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)193);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E71F8u, 0x2E7200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7200u;
label_2e7200:
    // 0x2e7200: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e7200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e7204:
    // 0x2e7204: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7208:
    if (ctx->pc == 0x2E7208u) {
        ctx->pc = 0x2E7208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7204u;
        // 0x2e7208: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E720Cu;
        goto label_2e720c;
    }
    ctx->pc = 0x2E7204u;
    {
        const bool branch_taken_0x2e7204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7204) {
            ctx->pc = 0x2E7208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7204u;
            // 0x2e7208: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7220u;
            goto label_2e7220;
        }
    }
    ctx->pc = 0x2E720Cu;
label_2e720c:
    // 0x2e720c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e720cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7210:
    // 0x2e7210: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e7210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e7214:
    // 0x2e7214: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2e7218:
    if (ctx->pc == 0x2E7218u) {
        ctx->pc = 0x2E7218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7214u;
        // 0x2e7218: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E721Cu;
        goto label_2e721c;
    }
    ctx->pc = 0x2E7214u;
    {
        const bool branch_taken_0x2e7214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7214u;
        // 0x2e7218: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7214) {
            ctx->pc = 0x2E7228u;
            goto label_2e7228;
        }
    }
    ctx->pc = 0x2E721Cu;
label_2e721c:
    // 0x2e721c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2e721cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2e7220:
    // 0x2e7220: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e7220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7224:
    // 0x2e7224: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2e7224u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2e7228:
    // 0x2e7228: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2e7228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2e722c:
    // 0x2e722c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2e722cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_2e7230:
    // 0x2e7230: 0x24a5f454  addiu       $a1, $a1, -0xBAC
    ctx->pc = 0x2e7230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964308));
label_2e7234:
    // 0x2e7234: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2e7234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2e7238:
    // 0x2e7238: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e7238u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e723c:
    // 0x2e723c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e723cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e7240:
    // 0x2e7240: 0x60f809  jalr        $v1
label_2e7244:
    if (ctx->pc == 0x2E7244u) {
        ctx->pc = 0x2E7244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7240u;
        // 0x2e7244: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7248u;
        goto label_2e7248;
    }
    ctx->pc = 0x2E7240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E7248u);
        ctx->pc = 0x2E7244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7240u;
        // 0x2e7244: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7240u, 0x2E7248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E7248u;
label_2e7248:
    // 0x2e7248: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2e7248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e724c:
    // 0x2e724c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7250:
    if (ctx->pc == 0x2E7250u) {
        ctx->pc = 0x2E7250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E724Cu;
        // 0x2e7250: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7254u;
        goto label_2e7254;
    }
    ctx->pc = 0x2E724Cu;
    {
        const bool branch_taken_0x2e724c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e724c) {
            ctx->pc = 0x2E7250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E724Cu;
            // 0x2e7250: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7268u;
            goto label_2e7268;
        }
    }
    ctx->pc = 0x2E7254u;
label_2e7254:
    // 0x2e7254: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e7254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7258:
    // 0x2e7258: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2e7258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2e725c:
    // 0x2e725c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2e7260:
    if (ctx->pc == 0x2E7260u) {
        ctx->pc = 0x2E7260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E725Cu;
        // 0x2e7260: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7264u;
        goto label_2e7264;
    }
    ctx->pc = 0x2E725Cu;
    {
        const bool branch_taken_0x2e725c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E725Cu;
        // 0x2e7260: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e725c) {
            ctx->pc = 0x2E7270u;
            goto label_2e7270;
        }
    }
    ctx->pc = 0x2E7264u;
label_2e7264:
    // 0x2e7264: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2e7264u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_2e7268:
    // 0x2e7268: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e7268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e726c:
    // 0x2e726c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2e726cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_2e7270:
    // 0x2e7270: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2e7270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2e7274:
    // 0x2e7274: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2e7274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_2e7278:
    // 0x2e7278: 0x24a5f460  addiu       $a1, $a1, -0xBA0
    ctx->pc = 0x2e7278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964320));
label_2e727c:
    // 0x2e727c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2e727cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2e7280:
    // 0x2e7280: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e7280u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e7284:
    // 0x2e7284: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e7284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e7288:
    // 0x2e7288: 0x60f809  jalr        $v1
label_2e728c:
    if (ctx->pc == 0x2E728Cu) {
        ctx->pc = 0x2E728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7288u;
        // 0x2e728c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7290u;
        goto label_2e7290;
    }
    ctx->pc = 0x2E7288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E7290u);
        ctx->pc = 0x2E728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7288u;
        // 0x2e728c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7288u, 0x2E7290u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E7290u;
label_2e7290:
    // 0x2e7290: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e7290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e7294:
    // 0x2e7294: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7298:
    if (ctx->pc == 0x2E7298u) {
        ctx->pc = 0x2E7298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7294u;
        // 0x2e7298: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E729Cu;
        goto label_2e729c;
    }
    ctx->pc = 0x2E7294u;
    {
        const bool branch_taken_0x2e7294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7294) {
            ctx->pc = 0x2E7298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7294u;
            // 0x2e7298: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E72B0u;
            goto label_2e72b0;
        }
    }
    ctx->pc = 0x2E729Cu;
label_2e729c:
    // 0x2e729c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e729cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e72a0:
    // 0x2e72a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e72a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e72a4:
    // 0x2e72a4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2e72a8:
    if (ctx->pc == 0x2E72A8u) {
        ctx->pc = 0x2E72A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72A4u;
        // 0x2e72a8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E72ACu;
        goto label_2e72ac;
    }
    ctx->pc = 0x2E72A4u;
    {
        const bool branch_taken_0x2e72a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E72A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72A4u;
        // 0x2e72a8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e72a4) {
            ctx->pc = 0x2E72B8u;
            goto label_2e72b8;
        }
    }
    ctx->pc = 0x2E72ACu;
label_2e72ac:
    // 0x2e72ac: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e72acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e72b0:
    // 0x2e72b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e72b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e72b4:
    // 0x2e72b4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e72b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e72b8:
    // 0x2e72b8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2e72b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2e72bc:
    // 0x2e72bc: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2e72bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_2e72c0:
    // 0x2e72c0: 0x24a5f46c  addiu       $a1, $a1, -0xB94
    ctx->pc = 0x2e72c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964332));
label_2e72c4:
    // 0x2e72c4: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2e72c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2e72c8:
    // 0x2e72c8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e72c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e72cc:
    // 0x2e72cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e72ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e72d0:
    // 0x2e72d0: 0x60f809  jalr        $v1
label_2e72d4:
    if (ctx->pc == 0x2E72D4u) {
        ctx->pc = 0x2E72D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72D0u;
        // 0x2e72d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E72D8u;
        goto label_2e72d8;
    }
    ctx->pc = 0x2E72D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E72D8u);
        ctx->pc = 0x2E72D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72D0u;
        // 0x2e72d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E72D0u, 0x2E72D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E72D8u;
label_2e72d8:
    // 0x2e72d8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2e72d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2e72dc:
    // 0x2e72dc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e72e0:
    if (ctx->pc == 0x2E72E0u) {
        ctx->pc = 0x2E72E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72DCu;
        // 0x2e72e0: 0xae800004  sw          $zero, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E72E4u;
        goto label_2e72e4;
    }
    ctx->pc = 0x2E72DCu;
    {
        const bool branch_taken_0x2e72dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e72dc) {
            ctx->pc = 0x2E72E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E72DCu;
            // 0x2e72e0: 0xae800004  sw          $zero, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E72F8u;
            goto label_2e72f8;
        }
    }
    ctx->pc = 0x2E72E4u;
label_2e72e4:
    // 0x2e72e4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e72e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e72e8:
    // 0x2e72e8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2e72e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2e72ec:
    // 0x2e72ec: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2e72f0:
    if (ctx->pc == 0x2E72F0u) {
        ctx->pc = 0x2E72F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72ECu;
        // 0x2e72f0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E72F4u;
        goto label_2e72f4;
    }
    ctx->pc = 0x2E72ECu;
    {
        const bool branch_taken_0x2e72ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E72F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72ECu;
        // 0x2e72f0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e72ec) {
            ctx->pc = 0x2E7300u;
            goto label_2e7300;
        }
    }
    ctx->pc = 0x2E72F4u;
label_2e72f4:
    // 0x2e72f4: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x2e72f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_2e72f8:
    // 0x2e72f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e72f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e72fc:
    // 0x2e72fc: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x2e72fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_2e7300:
    // 0x2e7300: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2e7300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2e7304:
    // 0x2e7304: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2e7304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_2e7308:
    // 0x2e7308: 0x24a5f478  addiu       $a1, $a1, -0xB88
    ctx->pc = 0x2e7308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964344));
label_2e730c:
    // 0x2e730c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2e730cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2e7310:
    // 0x2e7310: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e7310u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e7314:
    // 0x2e7314: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e7314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e7318:
    // 0x2e7318: 0x60f809  jalr        $v1
label_2e731c:
    if (ctx->pc == 0x2E731Cu) {
        ctx->pc = 0x2E731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7318u;
        // 0x2e731c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7320u;
        goto label_2e7320;
    }
    ctx->pc = 0x2E7318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E7320u);
        ctx->pc = 0x2E731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7318u;
        // 0x2e731c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7318u, 0x2E7320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E7320u;
label_2e7320:
    // 0x2e7320: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2e7320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e7324:
    // 0x2e7324: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7328:
    if (ctx->pc == 0x2E7328u) {
        ctx->pc = 0x2E7328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7324u;
        // 0x2e7328: 0xaea00004  sw          $zero, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E732Cu;
        goto label_2e732c;
    }
    ctx->pc = 0x2E7324u;
    {
        const bool branch_taken_0x2e7324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7324) {
            ctx->pc = 0x2E7328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7324u;
            // 0x2e7328: 0xaea00004  sw          $zero, 0x4($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7340u;
            goto label_2e7340;
        }
    }
    ctx->pc = 0x2E732Cu;
label_2e732c:
    // 0x2e732c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e732cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7330:
    // 0x2e7330: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2e7330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2e7334:
    // 0x2e7334: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2e7338:
    if (ctx->pc == 0x2E7338u) {
        ctx->pc = 0x2E7338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7334u;
        // 0x2e7338: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E733Cu;
        goto label_2e733c;
    }
    ctx->pc = 0x2E7334u;
    {
        const bool branch_taken_0x2e7334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7334u;
        // 0x2e7338: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7334) {
            ctx->pc = 0x2E7348u;
            goto label_2e7348;
        }
    }
    ctx->pc = 0x2E733Cu;
label_2e733c:
    // 0x2e733c: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x2e733cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_2e7340:
    // 0x2e7340: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e7340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7344:
    // 0x2e7344: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x2e7344u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_2e7348:
    // 0x2e7348: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2e7348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2e734c:
    // 0x2e734c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2e734cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_2e7350:
    // 0x2e7350: 0x24a5f484  addiu       $a1, $a1, -0xB7C
    ctx->pc = 0x2e7350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964356));
label_2e7354:
    // 0x2e7354: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2e7354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2e7358:
    // 0x2e7358: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e7358u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e735c:
    // 0x2e735c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e735cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e7360:
    // 0x2e7360: 0x60f809  jalr        $v1
label_2e7364:
    if (ctx->pc == 0x2E7364u) {
        ctx->pc = 0x2E7364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7360u;
        // 0x2e7364: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7368u;
        goto label_2e7368;
    }
    ctx->pc = 0x2E7360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E7368u);
        ctx->pc = 0x2E7364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7360u;
        // 0x2e7364: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7360u, 0x2E7368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E7368u;
label_2e7368:
    // 0x2e7368: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x2e7368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2e736c:
    // 0x2e736c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7370:
    if (ctx->pc == 0x2E7370u) {
        ctx->pc = 0x2E7370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E736Cu;
        // 0x2e7370: 0xaec00004  sw          $zero, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7374u;
        goto label_2e7374;
    }
    ctx->pc = 0x2E736Cu;
    {
        const bool branch_taken_0x2e736c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e736c) {
            ctx->pc = 0x2E7370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E736Cu;
            // 0x2e7370: 0xaec00004  sw          $zero, 0x4($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7388u;
            goto label_2e7388;
        }
    }
    ctx->pc = 0x2E7374u;
label_2e7374:
    // 0x2e7374: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e7374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7378:
    // 0x2e7378: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x2e7378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_2e737c:
    // 0x2e737c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2e7380:
    if (ctx->pc == 0x2E7380u) {
        ctx->pc = 0x2E7380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E737Cu;
        // 0x2e7380: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7384u;
        goto label_2e7384;
    }
    ctx->pc = 0x2E737Cu;
    {
        const bool branch_taken_0x2e737c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E737Cu;
        // 0x2e7380: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e737c) {
            ctx->pc = 0x2E7390u;
            goto label_2e7390;
        }
    }
    ctx->pc = 0x2E7384u;
label_2e7384:
    // 0x2e7384: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x2e7384u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
label_2e7388:
    // 0x2e7388: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e7388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e738c:
    // 0x2e738c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x2e738cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_2e7390:
    // 0x2e7390: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2e7390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2e7394:
    // 0x2e7394: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2e7394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_2e7398:
    // 0x2e7398: 0x24a5f490  addiu       $a1, $a1, -0xB70
    ctx->pc = 0x2e7398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964368));
label_2e739c:
    // 0x2e739c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2e739cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2e73a0:
    // 0x2e73a0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e73a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e73a4:
    // 0x2e73a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e73a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e73a8:
    // 0x2e73a8: 0x60f809  jalr        $v1
label_2e73ac:
    if (ctx->pc == 0x2E73ACu) {
        ctx->pc = 0x2E73ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73A8u;
        // 0x2e73ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E73B0u;
        goto label_2e73b0;
    }
    ctx->pc = 0x2E73A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E73B0u);
        ctx->pc = 0x2E73ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73A8u;
        // 0x2e73ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E73A8u, 0x2E73B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E73B0u;
label_2e73b0:
    // 0x2e73b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e73b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e73b4:
    // 0x2e73b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e73b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2e73b8:
    // 0x2e73b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e73b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e73bc:
    // 0x2e73bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e73bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2e73c0:
    // 0x2e73c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2e73c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e73c4:
    // 0x2e73c4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2e73c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2e73c8:
    // 0x2e73c8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2e73c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e73cc:
    // 0x2e73cc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2e73ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2e73d0:
    // 0x2e73d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e73d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e73d4:
    // 0x2e73d4: 0x3e00008  jr          $ra
label_2e73d8:
    if (ctx->pc == 0x2E73D8u) {
        ctx->pc = 0x2E73D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73D4u;
        // 0x2e73d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E73DCu;
        goto label_2e73dc;
    }
    ctx->pc = 0x2E73D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E73D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73D4u;
        // 0x2e73d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E73D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E73DCu;
label_2e73dc:
    // 0x2e73dc: 0x0  nop
    ctx->pc = 0x2e73dcu;
    // NOP
    ctx->pc = 0x2e73e0u;
}
