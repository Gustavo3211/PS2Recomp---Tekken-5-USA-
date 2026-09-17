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

// Function: sub_002E79A0
// Address: 0x2e79a0 - 0x2e8ae0
void sub_002E79A0_0x2e79a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E79A0_0x2e79a0");
#endif

    switch (ctx->pc) {
        case 0x2e79a0u: goto label_2e79a0;
        case 0x2e79a4u: goto label_2e79a4;
        case 0x2e79a8u: goto label_2e79a8;
        case 0x2e79acu: goto label_2e79ac;
        case 0x2e79b0u: goto label_2e79b0;
        case 0x2e79b4u: goto label_2e79b4;
        case 0x2e79b8u: goto label_2e79b8;
        case 0x2e79bcu: goto label_2e79bc;
        case 0x2e79c0u: goto label_2e79c0;
        case 0x2e79c4u: goto label_2e79c4;
        case 0x2e79c8u: goto label_2e79c8;
        case 0x2e79ccu: goto label_2e79cc;
        case 0x2e79d0u: goto label_2e79d0;
        case 0x2e79d4u: goto label_2e79d4;
        case 0x2e79d8u: goto label_2e79d8;
        case 0x2e79dcu: goto label_2e79dc;
        case 0x2e79e0u: goto label_2e79e0;
        case 0x2e79e4u: goto label_2e79e4;
        case 0x2e79e8u: goto label_2e79e8;
        case 0x2e79ecu: goto label_2e79ec;
        case 0x2e79f0u: goto label_2e79f0;
        case 0x2e79f4u: goto label_2e79f4;
        case 0x2e79f8u: goto label_2e79f8;
        case 0x2e79fcu: goto label_2e79fc;
        case 0x2e7a00u: goto label_2e7a00;
        case 0x2e7a04u: goto label_2e7a04;
        case 0x2e7a08u: goto label_2e7a08;
        case 0x2e7a0cu: goto label_2e7a0c;
        case 0x2e7a10u: goto label_2e7a10;
        case 0x2e7a14u: goto label_2e7a14;
        case 0x2e7a18u: goto label_2e7a18;
        case 0x2e7a1cu: goto label_2e7a1c;
        case 0x2e7a20u: goto label_2e7a20;
        case 0x2e7a24u: goto label_2e7a24;
        case 0x2e7a28u: goto label_2e7a28;
        case 0x2e7a2cu: goto label_2e7a2c;
        case 0x2e7a30u: goto label_2e7a30;
        case 0x2e7a34u: goto label_2e7a34;
        case 0x2e7a38u: goto label_2e7a38;
        case 0x2e7a3cu: goto label_2e7a3c;
        case 0x2e7a40u: goto label_2e7a40;
        case 0x2e7a44u: goto label_2e7a44;
        case 0x2e7a48u: goto label_2e7a48;
        case 0x2e7a4cu: goto label_2e7a4c;
        case 0x2e7a50u: goto label_2e7a50;
        case 0x2e7a54u: goto label_2e7a54;
        case 0x2e7a58u: goto label_2e7a58;
        case 0x2e7a5cu: goto label_2e7a5c;
        case 0x2e7a60u: goto label_2e7a60;
        case 0x2e7a64u: goto label_2e7a64;
        case 0x2e7a68u: goto label_2e7a68;
        case 0x2e7a6cu: goto label_2e7a6c;
        case 0x2e7a70u: goto label_2e7a70;
        case 0x2e7a74u: goto label_2e7a74;
        case 0x2e7a78u: goto label_2e7a78;
        case 0x2e7a7cu: goto label_2e7a7c;
        case 0x2e7a80u: goto label_2e7a80;
        case 0x2e7a84u: goto label_2e7a84;
        case 0x2e7a88u: goto label_2e7a88;
        case 0x2e7a8cu: goto label_2e7a8c;
        case 0x2e7a90u: goto label_2e7a90;
        case 0x2e7a94u: goto label_2e7a94;
        case 0x2e7a98u: goto label_2e7a98;
        case 0x2e7a9cu: goto label_2e7a9c;
        case 0x2e7aa0u: goto label_2e7aa0;
        case 0x2e7aa4u: goto label_2e7aa4;
        case 0x2e7aa8u: goto label_2e7aa8;
        case 0x2e7aacu: goto label_2e7aac;
        case 0x2e7ab0u: goto label_2e7ab0;
        case 0x2e7ab4u: goto label_2e7ab4;
        case 0x2e7ab8u: goto label_2e7ab8;
        case 0x2e7abcu: goto label_2e7abc;
        case 0x2e7ac0u: goto label_2e7ac0;
        case 0x2e7ac4u: goto label_2e7ac4;
        case 0x2e7ac8u: goto label_2e7ac8;
        case 0x2e7accu: goto label_2e7acc;
        case 0x2e7ad0u: goto label_2e7ad0;
        case 0x2e7ad4u: goto label_2e7ad4;
        case 0x2e7ad8u: goto label_2e7ad8;
        case 0x2e7adcu: goto label_2e7adc;
        case 0x2e7ae0u: goto label_2e7ae0;
        case 0x2e7ae4u: goto label_2e7ae4;
        case 0x2e7ae8u: goto label_2e7ae8;
        case 0x2e7aecu: goto label_2e7aec;
        case 0x2e7af0u: goto label_2e7af0;
        case 0x2e7af4u: goto label_2e7af4;
        case 0x2e7af8u: goto label_2e7af8;
        case 0x2e7afcu: goto label_2e7afc;
        case 0x2e7b00u: goto label_2e7b00;
        case 0x2e7b04u: goto label_2e7b04;
        case 0x2e7b08u: goto label_2e7b08;
        case 0x2e7b0cu: goto label_2e7b0c;
        case 0x2e7b10u: goto label_2e7b10;
        case 0x2e7b14u: goto label_2e7b14;
        case 0x2e7b18u: goto label_2e7b18;
        case 0x2e7b1cu: goto label_2e7b1c;
        case 0x2e7b20u: goto label_2e7b20;
        case 0x2e7b24u: goto label_2e7b24;
        case 0x2e7b28u: goto label_2e7b28;
        case 0x2e7b2cu: goto label_2e7b2c;
        case 0x2e7b30u: goto label_2e7b30;
        case 0x2e7b34u: goto label_2e7b34;
        case 0x2e7b38u: goto label_2e7b38;
        case 0x2e7b3cu: goto label_2e7b3c;
        case 0x2e7b40u: goto label_2e7b40;
        case 0x2e7b44u: goto label_2e7b44;
        case 0x2e7b48u: goto label_2e7b48;
        case 0x2e7b4cu: goto label_2e7b4c;
        case 0x2e7b50u: goto label_2e7b50;
        case 0x2e7b54u: goto label_2e7b54;
        case 0x2e7b58u: goto label_2e7b58;
        case 0x2e7b5cu: goto label_2e7b5c;
        case 0x2e7b60u: goto label_2e7b60;
        case 0x2e7b64u: goto label_2e7b64;
        case 0x2e7b68u: goto label_2e7b68;
        case 0x2e7b6cu: goto label_2e7b6c;
        case 0x2e7b70u: goto label_2e7b70;
        case 0x2e7b74u: goto label_2e7b74;
        case 0x2e7b78u: goto label_2e7b78;
        case 0x2e7b7cu: goto label_2e7b7c;
        case 0x2e7b80u: goto label_2e7b80;
        case 0x2e7b84u: goto label_2e7b84;
        case 0x2e7b88u: goto label_2e7b88;
        case 0x2e7b8cu: goto label_2e7b8c;
        case 0x2e7b90u: goto label_2e7b90;
        case 0x2e7b94u: goto label_2e7b94;
        case 0x2e7b98u: goto label_2e7b98;
        case 0x2e7b9cu: goto label_2e7b9c;
        case 0x2e7ba0u: goto label_2e7ba0;
        case 0x2e7ba4u: goto label_2e7ba4;
        case 0x2e7ba8u: goto label_2e7ba8;
        case 0x2e7bacu: goto label_2e7bac;
        case 0x2e7bb0u: goto label_2e7bb0;
        case 0x2e7bb4u: goto label_2e7bb4;
        case 0x2e7bb8u: goto label_2e7bb8;
        case 0x2e7bbcu: goto label_2e7bbc;
        case 0x2e7bc0u: goto label_2e7bc0;
        case 0x2e7bc4u: goto label_2e7bc4;
        case 0x2e7bc8u: goto label_2e7bc8;
        case 0x2e7bccu: goto label_2e7bcc;
        case 0x2e7bd0u: goto label_2e7bd0;
        case 0x2e7bd4u: goto label_2e7bd4;
        case 0x2e7bd8u: goto label_2e7bd8;
        case 0x2e7bdcu: goto label_2e7bdc;
        case 0x2e7be0u: goto label_2e7be0;
        case 0x2e7be4u: goto label_2e7be4;
        case 0x2e7be8u: goto label_2e7be8;
        case 0x2e7becu: goto label_2e7bec;
        case 0x2e7bf0u: goto label_2e7bf0;
        case 0x2e7bf4u: goto label_2e7bf4;
        case 0x2e7bf8u: goto label_2e7bf8;
        case 0x2e7bfcu: goto label_2e7bfc;
        case 0x2e7c00u: goto label_2e7c00;
        case 0x2e7c04u: goto label_2e7c04;
        case 0x2e7c08u: goto label_2e7c08;
        case 0x2e7c0cu: goto label_2e7c0c;
        case 0x2e7c10u: goto label_2e7c10;
        case 0x2e7c14u: goto label_2e7c14;
        case 0x2e7c18u: goto label_2e7c18;
        case 0x2e7c1cu: goto label_2e7c1c;
        case 0x2e7c20u: goto label_2e7c20;
        case 0x2e7c24u: goto label_2e7c24;
        case 0x2e7c28u: goto label_2e7c28;
        case 0x2e7c2cu: goto label_2e7c2c;
        case 0x2e7c30u: goto label_2e7c30;
        case 0x2e7c34u: goto label_2e7c34;
        case 0x2e7c38u: goto label_2e7c38;
        case 0x2e7c3cu: goto label_2e7c3c;
        case 0x2e7c40u: goto label_2e7c40;
        case 0x2e7c44u: goto label_2e7c44;
        case 0x2e7c48u: goto label_2e7c48;
        case 0x2e7c4cu: goto label_2e7c4c;
        case 0x2e7c50u: goto label_2e7c50;
        case 0x2e7c54u: goto label_2e7c54;
        case 0x2e7c58u: goto label_2e7c58;
        case 0x2e7c5cu: goto label_2e7c5c;
        case 0x2e7c60u: goto label_2e7c60;
        case 0x2e7c64u: goto label_2e7c64;
        case 0x2e7c68u: goto label_2e7c68;
        case 0x2e7c6cu: goto label_2e7c6c;
        case 0x2e7c70u: goto label_2e7c70;
        case 0x2e7c74u: goto label_2e7c74;
        case 0x2e7c78u: goto label_2e7c78;
        case 0x2e7c7cu: goto label_2e7c7c;
        case 0x2e7c80u: goto label_2e7c80;
        case 0x2e7c84u: goto label_2e7c84;
        case 0x2e7c88u: goto label_2e7c88;
        case 0x2e7c8cu: goto label_2e7c8c;
        case 0x2e7c90u: goto label_2e7c90;
        case 0x2e7c94u: goto label_2e7c94;
        case 0x2e7c98u: goto label_2e7c98;
        case 0x2e7c9cu: goto label_2e7c9c;
        case 0x2e7ca0u: goto label_2e7ca0;
        case 0x2e7ca4u: goto label_2e7ca4;
        case 0x2e7ca8u: goto label_2e7ca8;
        case 0x2e7cacu: goto label_2e7cac;
        case 0x2e7cb0u: goto label_2e7cb0;
        case 0x2e7cb4u: goto label_2e7cb4;
        case 0x2e7cb8u: goto label_2e7cb8;
        case 0x2e7cbcu: goto label_2e7cbc;
        case 0x2e7cc0u: goto label_2e7cc0;
        case 0x2e7cc4u: goto label_2e7cc4;
        case 0x2e7cc8u: goto label_2e7cc8;
        case 0x2e7cccu: goto label_2e7ccc;
        case 0x2e7cd0u: goto label_2e7cd0;
        case 0x2e7cd4u: goto label_2e7cd4;
        case 0x2e7cd8u: goto label_2e7cd8;
        case 0x2e7cdcu: goto label_2e7cdc;
        case 0x2e7ce0u: goto label_2e7ce0;
        case 0x2e7ce4u: goto label_2e7ce4;
        case 0x2e7ce8u: goto label_2e7ce8;
        case 0x2e7cecu: goto label_2e7cec;
        case 0x2e7cf0u: goto label_2e7cf0;
        case 0x2e7cf4u: goto label_2e7cf4;
        case 0x2e7cf8u: goto label_2e7cf8;
        case 0x2e7cfcu: goto label_2e7cfc;
        case 0x2e7d00u: goto label_2e7d00;
        case 0x2e7d04u: goto label_2e7d04;
        case 0x2e7d08u: goto label_2e7d08;
        case 0x2e7d0cu: goto label_2e7d0c;
        case 0x2e7d10u: goto label_2e7d10;
        case 0x2e7d14u: goto label_2e7d14;
        case 0x2e7d18u: goto label_2e7d18;
        case 0x2e7d1cu: goto label_2e7d1c;
        case 0x2e7d20u: goto label_2e7d20;
        case 0x2e7d24u: goto label_2e7d24;
        case 0x2e7d28u: goto label_2e7d28;
        case 0x2e7d2cu: goto label_2e7d2c;
        case 0x2e7d30u: goto label_2e7d30;
        case 0x2e7d34u: goto label_2e7d34;
        case 0x2e7d38u: goto label_2e7d38;
        case 0x2e7d3cu: goto label_2e7d3c;
        case 0x2e7d40u: goto label_2e7d40;
        case 0x2e7d44u: goto label_2e7d44;
        case 0x2e7d48u: goto label_2e7d48;
        case 0x2e7d4cu: goto label_2e7d4c;
        case 0x2e7d50u: goto label_2e7d50;
        case 0x2e7d54u: goto label_2e7d54;
        case 0x2e7d58u: goto label_2e7d58;
        case 0x2e7d5cu: goto label_2e7d5c;
        case 0x2e7d60u: goto label_2e7d60;
        case 0x2e7d64u: goto label_2e7d64;
        case 0x2e7d68u: goto label_2e7d68;
        case 0x2e7d6cu: goto label_2e7d6c;
        case 0x2e7d70u: goto label_2e7d70;
        case 0x2e7d74u: goto label_2e7d74;
        case 0x2e7d78u: goto label_2e7d78;
        case 0x2e7d7cu: goto label_2e7d7c;
        case 0x2e7d80u: goto label_2e7d80;
        case 0x2e7d84u: goto label_2e7d84;
        case 0x2e7d88u: goto label_2e7d88;
        case 0x2e7d8cu: goto label_2e7d8c;
        case 0x2e7d90u: goto label_2e7d90;
        case 0x2e7d94u: goto label_2e7d94;
        case 0x2e7d98u: goto label_2e7d98;
        case 0x2e7d9cu: goto label_2e7d9c;
        case 0x2e7da0u: goto label_2e7da0;
        case 0x2e7da4u: goto label_2e7da4;
        case 0x2e7da8u: goto label_2e7da8;
        case 0x2e7dacu: goto label_2e7dac;
        case 0x2e7db0u: goto label_2e7db0;
        case 0x2e7db4u: goto label_2e7db4;
        case 0x2e7db8u: goto label_2e7db8;
        case 0x2e7dbcu: goto label_2e7dbc;
        case 0x2e7dc0u: goto label_2e7dc0;
        case 0x2e7dc4u: goto label_2e7dc4;
        case 0x2e7dc8u: goto label_2e7dc8;
        case 0x2e7dccu: goto label_2e7dcc;
        case 0x2e7dd0u: goto label_2e7dd0;
        case 0x2e7dd4u: goto label_2e7dd4;
        case 0x2e7dd8u: goto label_2e7dd8;
        case 0x2e7ddcu: goto label_2e7ddc;
        case 0x2e7de0u: goto label_2e7de0;
        case 0x2e7de4u: goto label_2e7de4;
        case 0x2e7de8u: goto label_2e7de8;
        case 0x2e7decu: goto label_2e7dec;
        case 0x2e7df0u: goto label_2e7df0;
        case 0x2e7df4u: goto label_2e7df4;
        case 0x2e7df8u: goto label_2e7df8;
        case 0x2e7dfcu: goto label_2e7dfc;
        case 0x2e7e00u: goto label_2e7e00;
        case 0x2e7e04u: goto label_2e7e04;
        case 0x2e7e08u: goto label_2e7e08;
        case 0x2e7e0cu: goto label_2e7e0c;
        case 0x2e7e10u: goto label_2e7e10;
        case 0x2e7e14u: goto label_2e7e14;
        case 0x2e7e18u: goto label_2e7e18;
        case 0x2e7e1cu: goto label_2e7e1c;
        case 0x2e7e20u: goto label_2e7e20;
        case 0x2e7e24u: goto label_2e7e24;
        case 0x2e7e28u: goto label_2e7e28;
        case 0x2e7e2cu: goto label_2e7e2c;
        case 0x2e7e30u: goto label_2e7e30;
        case 0x2e7e34u: goto label_2e7e34;
        case 0x2e7e38u: goto label_2e7e38;
        case 0x2e7e3cu: goto label_2e7e3c;
        case 0x2e7e40u: goto label_2e7e40;
        case 0x2e7e44u: goto label_2e7e44;
        case 0x2e7e48u: goto label_2e7e48;
        case 0x2e7e4cu: goto label_2e7e4c;
        case 0x2e7e50u: goto label_2e7e50;
        case 0x2e7e54u: goto label_2e7e54;
        case 0x2e7e58u: goto label_2e7e58;
        case 0x2e7e5cu: goto label_2e7e5c;
        case 0x2e7e60u: goto label_2e7e60;
        case 0x2e7e64u: goto label_2e7e64;
        case 0x2e7e68u: goto label_2e7e68;
        case 0x2e7e6cu: goto label_2e7e6c;
        case 0x2e7e70u: goto label_2e7e70;
        case 0x2e7e74u: goto label_2e7e74;
        case 0x2e7e78u: goto label_2e7e78;
        case 0x2e7e7cu: goto label_2e7e7c;
        case 0x2e7e80u: goto label_2e7e80;
        case 0x2e7e84u: goto label_2e7e84;
        case 0x2e7e88u: goto label_2e7e88;
        case 0x2e7e8cu: goto label_2e7e8c;
        case 0x2e7e90u: goto label_2e7e90;
        case 0x2e7e94u: goto label_2e7e94;
        case 0x2e7e98u: goto label_2e7e98;
        case 0x2e7e9cu: goto label_2e7e9c;
        case 0x2e7ea0u: goto label_2e7ea0;
        case 0x2e7ea4u: goto label_2e7ea4;
        case 0x2e7ea8u: goto label_2e7ea8;
        case 0x2e7eacu: goto label_2e7eac;
        case 0x2e7eb0u: goto label_2e7eb0;
        case 0x2e7eb4u: goto label_2e7eb4;
        case 0x2e7eb8u: goto label_2e7eb8;
        case 0x2e7ebcu: goto label_2e7ebc;
        case 0x2e7ec0u: goto label_2e7ec0;
        case 0x2e7ec4u: goto label_2e7ec4;
        case 0x2e7ec8u: goto label_2e7ec8;
        case 0x2e7eccu: goto label_2e7ecc;
        case 0x2e7ed0u: goto label_2e7ed0;
        case 0x2e7ed4u: goto label_2e7ed4;
        case 0x2e7ed8u: goto label_2e7ed8;
        case 0x2e7edcu: goto label_2e7edc;
        case 0x2e7ee0u: goto label_2e7ee0;
        case 0x2e7ee4u: goto label_2e7ee4;
        case 0x2e7ee8u: goto label_2e7ee8;
        case 0x2e7eecu: goto label_2e7eec;
        case 0x2e7ef0u: goto label_2e7ef0;
        case 0x2e7ef4u: goto label_2e7ef4;
        case 0x2e7ef8u: goto label_2e7ef8;
        case 0x2e7efcu: goto label_2e7efc;
        case 0x2e7f00u: goto label_2e7f00;
        case 0x2e7f04u: goto label_2e7f04;
        case 0x2e7f08u: goto label_2e7f08;
        case 0x2e7f0cu: goto label_2e7f0c;
        case 0x2e7f10u: goto label_2e7f10;
        case 0x2e7f14u: goto label_2e7f14;
        case 0x2e7f18u: goto label_2e7f18;
        case 0x2e7f1cu: goto label_2e7f1c;
        case 0x2e7f20u: goto label_2e7f20;
        case 0x2e7f24u: goto label_2e7f24;
        case 0x2e7f28u: goto label_2e7f28;
        case 0x2e7f2cu: goto label_2e7f2c;
        case 0x2e7f30u: goto label_2e7f30;
        case 0x2e7f34u: goto label_2e7f34;
        case 0x2e7f38u: goto label_2e7f38;
        case 0x2e7f3cu: goto label_2e7f3c;
        case 0x2e7f40u: goto label_2e7f40;
        case 0x2e7f44u: goto label_2e7f44;
        case 0x2e7f48u: goto label_2e7f48;
        case 0x2e7f4cu: goto label_2e7f4c;
        case 0x2e7f50u: goto label_2e7f50;
        case 0x2e7f54u: goto label_2e7f54;
        case 0x2e7f58u: goto label_2e7f58;
        case 0x2e7f5cu: goto label_2e7f5c;
        case 0x2e7f60u: goto label_2e7f60;
        case 0x2e7f64u: goto label_2e7f64;
        case 0x2e7f68u: goto label_2e7f68;
        case 0x2e7f6cu: goto label_2e7f6c;
        case 0x2e7f70u: goto label_2e7f70;
        case 0x2e7f74u: goto label_2e7f74;
        case 0x2e7f78u: goto label_2e7f78;
        case 0x2e7f7cu: goto label_2e7f7c;
        case 0x2e7f80u: goto label_2e7f80;
        case 0x2e7f84u: goto label_2e7f84;
        case 0x2e7f88u: goto label_2e7f88;
        case 0x2e7f8cu: goto label_2e7f8c;
        case 0x2e7f90u: goto label_2e7f90;
        case 0x2e7f94u: goto label_2e7f94;
        case 0x2e7f98u: goto label_2e7f98;
        case 0x2e7f9cu: goto label_2e7f9c;
        case 0x2e7fa0u: goto label_2e7fa0;
        case 0x2e7fa4u: goto label_2e7fa4;
        case 0x2e7fa8u: goto label_2e7fa8;
        case 0x2e7facu: goto label_2e7fac;
        case 0x2e7fb0u: goto label_2e7fb0;
        case 0x2e7fb4u: goto label_2e7fb4;
        case 0x2e7fb8u: goto label_2e7fb8;
        case 0x2e7fbcu: goto label_2e7fbc;
        case 0x2e7fc0u: goto label_2e7fc0;
        case 0x2e7fc4u: goto label_2e7fc4;
        case 0x2e7fc8u: goto label_2e7fc8;
        case 0x2e7fccu: goto label_2e7fcc;
        case 0x2e7fd0u: goto label_2e7fd0;
        case 0x2e7fd4u: goto label_2e7fd4;
        case 0x2e7fd8u: goto label_2e7fd8;
        case 0x2e7fdcu: goto label_2e7fdc;
        case 0x2e7fe0u: goto label_2e7fe0;
        case 0x2e7fe4u: goto label_2e7fe4;
        case 0x2e7fe8u: goto label_2e7fe8;
        case 0x2e7fecu: goto label_2e7fec;
        case 0x2e7ff0u: goto label_2e7ff0;
        case 0x2e7ff4u: goto label_2e7ff4;
        case 0x2e7ff8u: goto label_2e7ff8;
        case 0x2e7ffcu: goto label_2e7ffc;
        case 0x2e8000u: goto label_2e8000;
        case 0x2e8004u: goto label_2e8004;
        case 0x2e8008u: goto label_2e8008;
        case 0x2e800cu: goto label_2e800c;
        case 0x2e8010u: goto label_2e8010;
        case 0x2e8014u: goto label_2e8014;
        case 0x2e8018u: goto label_2e8018;
        case 0x2e801cu: goto label_2e801c;
        case 0x2e8020u: goto label_2e8020;
        case 0x2e8024u: goto label_2e8024;
        case 0x2e8028u: goto label_2e8028;
        case 0x2e802cu: goto label_2e802c;
        case 0x2e8030u: goto label_2e8030;
        case 0x2e8034u: goto label_2e8034;
        case 0x2e8038u: goto label_2e8038;
        case 0x2e803cu: goto label_2e803c;
        case 0x2e8040u: goto label_2e8040;
        case 0x2e8044u: goto label_2e8044;
        case 0x2e8048u: goto label_2e8048;
        case 0x2e804cu: goto label_2e804c;
        case 0x2e8050u: goto label_2e8050;
        case 0x2e8054u: goto label_2e8054;
        case 0x2e8058u: goto label_2e8058;
        case 0x2e805cu: goto label_2e805c;
        case 0x2e8060u: goto label_2e8060;
        case 0x2e8064u: goto label_2e8064;
        case 0x2e8068u: goto label_2e8068;
        case 0x2e806cu: goto label_2e806c;
        case 0x2e8070u: goto label_2e8070;
        case 0x2e8074u: goto label_2e8074;
        case 0x2e8078u: goto label_2e8078;
        case 0x2e807cu: goto label_2e807c;
        case 0x2e8080u: goto label_2e8080;
        case 0x2e8084u: goto label_2e8084;
        case 0x2e8088u: goto label_2e8088;
        case 0x2e808cu: goto label_2e808c;
        case 0x2e8090u: goto label_2e8090;
        case 0x2e8094u: goto label_2e8094;
        case 0x2e8098u: goto label_2e8098;
        case 0x2e809cu: goto label_2e809c;
        case 0x2e80a0u: goto label_2e80a0;
        case 0x2e80a4u: goto label_2e80a4;
        case 0x2e80a8u: goto label_2e80a8;
        case 0x2e80acu: goto label_2e80ac;
        case 0x2e80b0u: goto label_2e80b0;
        case 0x2e80b4u: goto label_2e80b4;
        case 0x2e80b8u: goto label_2e80b8;
        case 0x2e80bcu: goto label_2e80bc;
        case 0x2e80c0u: goto label_2e80c0;
        case 0x2e80c4u: goto label_2e80c4;
        case 0x2e80c8u: goto label_2e80c8;
        case 0x2e80ccu: goto label_2e80cc;
        case 0x2e80d0u: goto label_2e80d0;
        case 0x2e80d4u: goto label_2e80d4;
        case 0x2e80d8u: goto label_2e80d8;
        case 0x2e80dcu: goto label_2e80dc;
        case 0x2e80e0u: goto label_2e80e0;
        case 0x2e80e4u: goto label_2e80e4;
        case 0x2e80e8u: goto label_2e80e8;
        case 0x2e80ecu: goto label_2e80ec;
        case 0x2e80f0u: goto label_2e80f0;
        case 0x2e80f4u: goto label_2e80f4;
        case 0x2e80f8u: goto label_2e80f8;
        case 0x2e80fcu: goto label_2e80fc;
        case 0x2e8100u: goto label_2e8100;
        case 0x2e8104u: goto label_2e8104;
        case 0x2e8108u: goto label_2e8108;
        case 0x2e810cu: goto label_2e810c;
        case 0x2e8110u: goto label_2e8110;
        case 0x2e8114u: goto label_2e8114;
        case 0x2e8118u: goto label_2e8118;
        case 0x2e811cu: goto label_2e811c;
        case 0x2e8120u: goto label_2e8120;
        case 0x2e8124u: goto label_2e8124;
        case 0x2e8128u: goto label_2e8128;
        case 0x2e812cu: goto label_2e812c;
        case 0x2e8130u: goto label_2e8130;
        case 0x2e8134u: goto label_2e8134;
        case 0x2e8138u: goto label_2e8138;
        case 0x2e813cu: goto label_2e813c;
        case 0x2e8140u: goto label_2e8140;
        case 0x2e8144u: goto label_2e8144;
        case 0x2e8148u: goto label_2e8148;
        case 0x2e814cu: goto label_2e814c;
        case 0x2e8150u: goto label_2e8150;
        case 0x2e8154u: goto label_2e8154;
        case 0x2e8158u: goto label_2e8158;
        case 0x2e815cu: goto label_2e815c;
        case 0x2e8160u: goto label_2e8160;
        case 0x2e8164u: goto label_2e8164;
        case 0x2e8168u: goto label_2e8168;
        case 0x2e816cu: goto label_2e816c;
        case 0x2e8170u: goto label_2e8170;
        case 0x2e8174u: goto label_2e8174;
        case 0x2e8178u: goto label_2e8178;
        case 0x2e817cu: goto label_2e817c;
        case 0x2e8180u: goto label_2e8180;
        case 0x2e8184u: goto label_2e8184;
        case 0x2e8188u: goto label_2e8188;
        case 0x2e818cu: goto label_2e818c;
        case 0x2e8190u: goto label_2e8190;
        case 0x2e8194u: goto label_2e8194;
        case 0x2e8198u: goto label_2e8198;
        case 0x2e819cu: goto label_2e819c;
        case 0x2e81a0u: goto label_2e81a0;
        case 0x2e81a4u: goto label_2e81a4;
        case 0x2e81a8u: goto label_2e81a8;
        case 0x2e81acu: goto label_2e81ac;
        case 0x2e81b0u: goto label_2e81b0;
        case 0x2e81b4u: goto label_2e81b4;
        case 0x2e81b8u: goto label_2e81b8;
        case 0x2e81bcu: goto label_2e81bc;
        case 0x2e81c0u: goto label_2e81c0;
        case 0x2e81c4u: goto label_2e81c4;
        case 0x2e81c8u: goto label_2e81c8;
        case 0x2e81ccu: goto label_2e81cc;
        case 0x2e81d0u: goto label_2e81d0;
        case 0x2e81d4u: goto label_2e81d4;
        case 0x2e81d8u: goto label_2e81d8;
        case 0x2e81dcu: goto label_2e81dc;
        case 0x2e81e0u: goto label_2e81e0;
        case 0x2e81e4u: goto label_2e81e4;
        case 0x2e81e8u: goto label_2e81e8;
        case 0x2e81ecu: goto label_2e81ec;
        case 0x2e81f0u: goto label_2e81f0;
        case 0x2e81f4u: goto label_2e81f4;
        case 0x2e81f8u: goto label_2e81f8;
        case 0x2e81fcu: goto label_2e81fc;
        case 0x2e8200u: goto label_2e8200;
        case 0x2e8204u: goto label_2e8204;
        case 0x2e8208u: goto label_2e8208;
        case 0x2e820cu: goto label_2e820c;
        case 0x2e8210u: goto label_2e8210;
        case 0x2e8214u: goto label_2e8214;
        case 0x2e8218u: goto label_2e8218;
        case 0x2e821cu: goto label_2e821c;
        case 0x2e8220u: goto label_2e8220;
        case 0x2e8224u: goto label_2e8224;
        case 0x2e8228u: goto label_2e8228;
        case 0x2e822cu: goto label_2e822c;
        case 0x2e8230u: goto label_2e8230;
        case 0x2e8234u: goto label_2e8234;
        case 0x2e8238u: goto label_2e8238;
        case 0x2e823cu: goto label_2e823c;
        case 0x2e8240u: goto label_2e8240;
        case 0x2e8244u: goto label_2e8244;
        case 0x2e8248u: goto label_2e8248;
        case 0x2e824cu: goto label_2e824c;
        case 0x2e8250u: goto label_2e8250;
        case 0x2e8254u: goto label_2e8254;
        case 0x2e8258u: goto label_2e8258;
        case 0x2e825cu: goto label_2e825c;
        case 0x2e8260u: goto label_2e8260;
        case 0x2e8264u: goto label_2e8264;
        case 0x2e8268u: goto label_2e8268;
        case 0x2e826cu: goto label_2e826c;
        case 0x2e8270u: goto label_2e8270;
        case 0x2e8274u: goto label_2e8274;
        case 0x2e8278u: goto label_2e8278;
        case 0x2e827cu: goto label_2e827c;
        case 0x2e8280u: goto label_2e8280;
        case 0x2e8284u: goto label_2e8284;
        case 0x2e8288u: goto label_2e8288;
        case 0x2e828cu: goto label_2e828c;
        case 0x2e8290u: goto label_2e8290;
        case 0x2e8294u: goto label_2e8294;
        case 0x2e8298u: goto label_2e8298;
        case 0x2e829cu: goto label_2e829c;
        case 0x2e82a0u: goto label_2e82a0;
        case 0x2e82a4u: goto label_2e82a4;
        case 0x2e82a8u: goto label_2e82a8;
        case 0x2e82acu: goto label_2e82ac;
        case 0x2e82b0u: goto label_2e82b0;
        case 0x2e82b4u: goto label_2e82b4;
        case 0x2e82b8u: goto label_2e82b8;
        case 0x2e82bcu: goto label_2e82bc;
        case 0x2e82c0u: goto label_2e82c0;
        case 0x2e82c4u: goto label_2e82c4;
        case 0x2e82c8u: goto label_2e82c8;
        case 0x2e82ccu: goto label_2e82cc;
        case 0x2e82d0u: goto label_2e82d0;
        case 0x2e82d4u: goto label_2e82d4;
        case 0x2e82d8u: goto label_2e82d8;
        case 0x2e82dcu: goto label_2e82dc;
        case 0x2e82e0u: goto label_2e82e0;
        case 0x2e82e4u: goto label_2e82e4;
        case 0x2e82e8u: goto label_2e82e8;
        case 0x2e82ecu: goto label_2e82ec;
        case 0x2e82f0u: goto label_2e82f0;
        case 0x2e82f4u: goto label_2e82f4;
        case 0x2e82f8u: goto label_2e82f8;
        case 0x2e82fcu: goto label_2e82fc;
        case 0x2e8300u: goto label_2e8300;
        case 0x2e8304u: goto label_2e8304;
        case 0x2e8308u: goto label_2e8308;
        case 0x2e830cu: goto label_2e830c;
        case 0x2e8310u: goto label_2e8310;
        case 0x2e8314u: goto label_2e8314;
        case 0x2e8318u: goto label_2e8318;
        case 0x2e831cu: goto label_2e831c;
        case 0x2e8320u: goto label_2e8320;
        case 0x2e8324u: goto label_2e8324;
        case 0x2e8328u: goto label_2e8328;
        case 0x2e832cu: goto label_2e832c;
        case 0x2e8330u: goto label_2e8330;
        case 0x2e8334u: goto label_2e8334;
        case 0x2e8338u: goto label_2e8338;
        case 0x2e833cu: goto label_2e833c;
        case 0x2e8340u: goto label_2e8340;
        case 0x2e8344u: goto label_2e8344;
        case 0x2e8348u: goto label_2e8348;
        case 0x2e834cu: goto label_2e834c;
        case 0x2e8350u: goto label_2e8350;
        case 0x2e8354u: goto label_2e8354;
        case 0x2e8358u: goto label_2e8358;
        case 0x2e835cu: goto label_2e835c;
        case 0x2e8360u: goto label_2e8360;
        case 0x2e8364u: goto label_2e8364;
        case 0x2e8368u: goto label_2e8368;
        case 0x2e836cu: goto label_2e836c;
        case 0x2e8370u: goto label_2e8370;
        case 0x2e8374u: goto label_2e8374;
        case 0x2e8378u: goto label_2e8378;
        case 0x2e837cu: goto label_2e837c;
        case 0x2e8380u: goto label_2e8380;
        case 0x2e8384u: goto label_2e8384;
        case 0x2e8388u: goto label_2e8388;
        case 0x2e838cu: goto label_2e838c;
        case 0x2e8390u: goto label_2e8390;
        case 0x2e8394u: goto label_2e8394;
        case 0x2e8398u: goto label_2e8398;
        case 0x2e839cu: goto label_2e839c;
        case 0x2e83a0u: goto label_2e83a0;
        case 0x2e83a4u: goto label_2e83a4;
        case 0x2e83a8u: goto label_2e83a8;
        case 0x2e83acu: goto label_2e83ac;
        case 0x2e83b0u: goto label_2e83b0;
        case 0x2e83b4u: goto label_2e83b4;
        case 0x2e83b8u: goto label_2e83b8;
        case 0x2e83bcu: goto label_2e83bc;
        case 0x2e83c0u: goto label_2e83c0;
        case 0x2e83c4u: goto label_2e83c4;
        case 0x2e83c8u: goto label_2e83c8;
        case 0x2e83ccu: goto label_2e83cc;
        case 0x2e83d0u: goto label_2e83d0;
        case 0x2e83d4u: goto label_2e83d4;
        case 0x2e83d8u: goto label_2e83d8;
        case 0x2e83dcu: goto label_2e83dc;
        case 0x2e83e0u: goto label_2e83e0;
        case 0x2e83e4u: goto label_2e83e4;
        case 0x2e83e8u: goto label_2e83e8;
        case 0x2e83ecu: goto label_2e83ec;
        case 0x2e83f0u: goto label_2e83f0;
        case 0x2e83f4u: goto label_2e83f4;
        case 0x2e83f8u: goto label_2e83f8;
        case 0x2e83fcu: goto label_2e83fc;
        case 0x2e8400u: goto label_2e8400;
        case 0x2e8404u: goto label_2e8404;
        case 0x2e8408u: goto label_2e8408;
        case 0x2e840cu: goto label_2e840c;
        case 0x2e8410u: goto label_2e8410;
        case 0x2e8414u: goto label_2e8414;
        case 0x2e8418u: goto label_2e8418;
        case 0x2e841cu: goto label_2e841c;
        case 0x2e8420u: goto label_2e8420;
        case 0x2e8424u: goto label_2e8424;
        case 0x2e8428u: goto label_2e8428;
        case 0x2e842cu: goto label_2e842c;
        case 0x2e8430u: goto label_2e8430;
        case 0x2e8434u: goto label_2e8434;
        case 0x2e8438u: goto label_2e8438;
        case 0x2e843cu: goto label_2e843c;
        case 0x2e8440u: goto label_2e8440;
        case 0x2e8444u: goto label_2e8444;
        case 0x2e8448u: goto label_2e8448;
        case 0x2e844cu: goto label_2e844c;
        case 0x2e8450u: goto label_2e8450;
        case 0x2e8454u: goto label_2e8454;
        case 0x2e8458u: goto label_2e8458;
        case 0x2e845cu: goto label_2e845c;
        case 0x2e8460u: goto label_2e8460;
        case 0x2e8464u: goto label_2e8464;
        case 0x2e8468u: goto label_2e8468;
        case 0x2e846cu: goto label_2e846c;
        case 0x2e8470u: goto label_2e8470;
        case 0x2e8474u: goto label_2e8474;
        case 0x2e8478u: goto label_2e8478;
        case 0x2e847cu: goto label_2e847c;
        case 0x2e8480u: goto label_2e8480;
        case 0x2e8484u: goto label_2e8484;
        case 0x2e8488u: goto label_2e8488;
        case 0x2e848cu: goto label_2e848c;
        case 0x2e8490u: goto label_2e8490;
        case 0x2e8494u: goto label_2e8494;
        case 0x2e8498u: goto label_2e8498;
        case 0x2e849cu: goto label_2e849c;
        case 0x2e84a0u: goto label_2e84a0;
        case 0x2e84a4u: goto label_2e84a4;
        case 0x2e84a8u: goto label_2e84a8;
        case 0x2e84acu: goto label_2e84ac;
        case 0x2e84b0u: goto label_2e84b0;
        case 0x2e84b4u: goto label_2e84b4;
        case 0x2e84b8u: goto label_2e84b8;
        case 0x2e84bcu: goto label_2e84bc;
        case 0x2e84c0u: goto label_2e84c0;
        case 0x2e84c4u: goto label_2e84c4;
        case 0x2e84c8u: goto label_2e84c8;
        case 0x2e84ccu: goto label_2e84cc;
        case 0x2e84d0u: goto label_2e84d0;
        case 0x2e84d4u: goto label_2e84d4;
        case 0x2e84d8u: goto label_2e84d8;
        case 0x2e84dcu: goto label_2e84dc;
        case 0x2e84e0u: goto label_2e84e0;
        case 0x2e84e4u: goto label_2e84e4;
        case 0x2e84e8u: goto label_2e84e8;
        case 0x2e84ecu: goto label_2e84ec;
        case 0x2e84f0u: goto label_2e84f0;
        case 0x2e84f4u: goto label_2e84f4;
        case 0x2e84f8u: goto label_2e84f8;
        case 0x2e84fcu: goto label_2e84fc;
        case 0x2e8500u: goto label_2e8500;
        case 0x2e8504u: goto label_2e8504;
        case 0x2e8508u: goto label_2e8508;
        case 0x2e850cu: goto label_2e850c;
        case 0x2e8510u: goto label_2e8510;
        case 0x2e8514u: goto label_2e8514;
        case 0x2e8518u: goto label_2e8518;
        case 0x2e851cu: goto label_2e851c;
        case 0x2e8520u: goto label_2e8520;
        case 0x2e8524u: goto label_2e8524;
        case 0x2e8528u: goto label_2e8528;
        case 0x2e852cu: goto label_2e852c;
        case 0x2e8530u: goto label_2e8530;
        case 0x2e8534u: goto label_2e8534;
        case 0x2e8538u: goto label_2e8538;
        case 0x2e853cu: goto label_2e853c;
        case 0x2e8540u: goto label_2e8540;
        case 0x2e8544u: goto label_2e8544;
        case 0x2e8548u: goto label_2e8548;
        case 0x2e854cu: goto label_2e854c;
        case 0x2e8550u: goto label_2e8550;
        case 0x2e8554u: goto label_2e8554;
        case 0x2e8558u: goto label_2e8558;
        case 0x2e855cu: goto label_2e855c;
        case 0x2e8560u: goto label_2e8560;
        case 0x2e8564u: goto label_2e8564;
        case 0x2e8568u: goto label_2e8568;
        case 0x2e856cu: goto label_2e856c;
        case 0x2e8570u: goto label_2e8570;
        case 0x2e8574u: goto label_2e8574;
        case 0x2e8578u: goto label_2e8578;
        case 0x2e857cu: goto label_2e857c;
        case 0x2e8580u: goto label_2e8580;
        case 0x2e8584u: goto label_2e8584;
        case 0x2e8588u: goto label_2e8588;
        case 0x2e858cu: goto label_2e858c;
        case 0x2e8590u: goto label_2e8590;
        case 0x2e8594u: goto label_2e8594;
        case 0x2e8598u: goto label_2e8598;
        case 0x2e859cu: goto label_2e859c;
        case 0x2e85a0u: goto label_2e85a0;
        case 0x2e85a4u: goto label_2e85a4;
        case 0x2e85a8u: goto label_2e85a8;
        case 0x2e85acu: goto label_2e85ac;
        case 0x2e85b0u: goto label_2e85b0;
        case 0x2e85b4u: goto label_2e85b4;
        case 0x2e85b8u: goto label_2e85b8;
        case 0x2e85bcu: goto label_2e85bc;
        case 0x2e85c0u: goto label_2e85c0;
        case 0x2e85c4u: goto label_2e85c4;
        case 0x2e85c8u: goto label_2e85c8;
        case 0x2e85ccu: goto label_2e85cc;
        case 0x2e85d0u: goto label_2e85d0;
        case 0x2e85d4u: goto label_2e85d4;
        case 0x2e85d8u: goto label_2e85d8;
        case 0x2e85dcu: goto label_2e85dc;
        case 0x2e85e0u: goto label_2e85e0;
        case 0x2e85e4u: goto label_2e85e4;
        case 0x2e85e8u: goto label_2e85e8;
        case 0x2e85ecu: goto label_2e85ec;
        case 0x2e85f0u: goto label_2e85f0;
        case 0x2e85f4u: goto label_2e85f4;
        case 0x2e85f8u: goto label_2e85f8;
        case 0x2e85fcu: goto label_2e85fc;
        case 0x2e8600u: goto label_2e8600;
        case 0x2e8604u: goto label_2e8604;
        case 0x2e8608u: goto label_2e8608;
        case 0x2e860cu: goto label_2e860c;
        case 0x2e8610u: goto label_2e8610;
        case 0x2e8614u: goto label_2e8614;
        case 0x2e8618u: goto label_2e8618;
        case 0x2e861cu: goto label_2e861c;
        case 0x2e8620u: goto label_2e8620;
        case 0x2e8624u: goto label_2e8624;
        case 0x2e8628u: goto label_2e8628;
        case 0x2e862cu: goto label_2e862c;
        case 0x2e8630u: goto label_2e8630;
        case 0x2e8634u: goto label_2e8634;
        case 0x2e8638u: goto label_2e8638;
        case 0x2e863cu: goto label_2e863c;
        case 0x2e8640u: goto label_2e8640;
        case 0x2e8644u: goto label_2e8644;
        case 0x2e8648u: goto label_2e8648;
        case 0x2e864cu: goto label_2e864c;
        case 0x2e8650u: goto label_2e8650;
        case 0x2e8654u: goto label_2e8654;
        case 0x2e8658u: goto label_2e8658;
        case 0x2e865cu: goto label_2e865c;
        case 0x2e8660u: goto label_2e8660;
        case 0x2e8664u: goto label_2e8664;
        case 0x2e8668u: goto label_2e8668;
        case 0x2e866cu: goto label_2e866c;
        case 0x2e8670u: goto label_2e8670;
        case 0x2e8674u: goto label_2e8674;
        case 0x2e8678u: goto label_2e8678;
        case 0x2e867cu: goto label_2e867c;
        case 0x2e8680u: goto label_2e8680;
        case 0x2e8684u: goto label_2e8684;
        case 0x2e8688u: goto label_2e8688;
        case 0x2e868cu: goto label_2e868c;
        case 0x2e8690u: goto label_2e8690;
        case 0x2e8694u: goto label_2e8694;
        case 0x2e8698u: goto label_2e8698;
        case 0x2e869cu: goto label_2e869c;
        case 0x2e86a0u: goto label_2e86a0;
        case 0x2e86a4u: goto label_2e86a4;
        case 0x2e86a8u: goto label_2e86a8;
        case 0x2e86acu: goto label_2e86ac;
        case 0x2e86b0u: goto label_2e86b0;
        case 0x2e86b4u: goto label_2e86b4;
        case 0x2e86b8u: goto label_2e86b8;
        case 0x2e86bcu: goto label_2e86bc;
        case 0x2e86c0u: goto label_2e86c0;
        case 0x2e86c4u: goto label_2e86c4;
        case 0x2e86c8u: goto label_2e86c8;
        case 0x2e86ccu: goto label_2e86cc;
        case 0x2e86d0u: goto label_2e86d0;
        case 0x2e86d4u: goto label_2e86d4;
        case 0x2e86d8u: goto label_2e86d8;
        case 0x2e86dcu: goto label_2e86dc;
        case 0x2e86e0u: goto label_2e86e0;
        case 0x2e86e4u: goto label_2e86e4;
        case 0x2e86e8u: goto label_2e86e8;
        case 0x2e86ecu: goto label_2e86ec;
        case 0x2e86f0u: goto label_2e86f0;
        case 0x2e86f4u: goto label_2e86f4;
        case 0x2e86f8u: goto label_2e86f8;
        case 0x2e86fcu: goto label_2e86fc;
        case 0x2e8700u: goto label_2e8700;
        case 0x2e8704u: goto label_2e8704;
        case 0x2e8708u: goto label_2e8708;
        case 0x2e870cu: goto label_2e870c;
        case 0x2e8710u: goto label_2e8710;
        case 0x2e8714u: goto label_2e8714;
        case 0x2e8718u: goto label_2e8718;
        case 0x2e871cu: goto label_2e871c;
        case 0x2e8720u: goto label_2e8720;
        case 0x2e8724u: goto label_2e8724;
        case 0x2e8728u: goto label_2e8728;
        case 0x2e872cu: goto label_2e872c;
        case 0x2e8730u: goto label_2e8730;
        case 0x2e8734u: goto label_2e8734;
        case 0x2e8738u: goto label_2e8738;
        case 0x2e873cu: goto label_2e873c;
        case 0x2e8740u: goto label_2e8740;
        case 0x2e8744u: goto label_2e8744;
        case 0x2e8748u: goto label_2e8748;
        case 0x2e874cu: goto label_2e874c;
        case 0x2e8750u: goto label_2e8750;
        case 0x2e8754u: goto label_2e8754;
        case 0x2e8758u: goto label_2e8758;
        case 0x2e875cu: goto label_2e875c;
        case 0x2e8760u: goto label_2e8760;
        case 0x2e8764u: goto label_2e8764;
        case 0x2e8768u: goto label_2e8768;
        case 0x2e876cu: goto label_2e876c;
        case 0x2e8770u: goto label_2e8770;
        case 0x2e8774u: goto label_2e8774;
        case 0x2e8778u: goto label_2e8778;
        case 0x2e877cu: goto label_2e877c;
        case 0x2e8780u: goto label_2e8780;
        case 0x2e8784u: goto label_2e8784;
        case 0x2e8788u: goto label_2e8788;
        case 0x2e878cu: goto label_2e878c;
        case 0x2e8790u: goto label_2e8790;
        case 0x2e8794u: goto label_2e8794;
        case 0x2e8798u: goto label_2e8798;
        case 0x2e879cu: goto label_2e879c;
        case 0x2e87a0u: goto label_2e87a0;
        case 0x2e87a4u: goto label_2e87a4;
        case 0x2e87a8u: goto label_2e87a8;
        case 0x2e87acu: goto label_2e87ac;
        case 0x2e87b0u: goto label_2e87b0;
        case 0x2e87b4u: goto label_2e87b4;
        case 0x2e87b8u: goto label_2e87b8;
        case 0x2e87bcu: goto label_2e87bc;
        case 0x2e87c0u: goto label_2e87c0;
        case 0x2e87c4u: goto label_2e87c4;
        case 0x2e87c8u: goto label_2e87c8;
        case 0x2e87ccu: goto label_2e87cc;
        case 0x2e87d0u: goto label_2e87d0;
        case 0x2e87d4u: goto label_2e87d4;
        case 0x2e87d8u: goto label_2e87d8;
        case 0x2e87dcu: goto label_2e87dc;
        case 0x2e87e0u: goto label_2e87e0;
        case 0x2e87e4u: goto label_2e87e4;
        case 0x2e87e8u: goto label_2e87e8;
        case 0x2e87ecu: goto label_2e87ec;
        case 0x2e87f0u: goto label_2e87f0;
        case 0x2e87f4u: goto label_2e87f4;
        case 0x2e87f8u: goto label_2e87f8;
        case 0x2e87fcu: goto label_2e87fc;
        case 0x2e8800u: goto label_2e8800;
        case 0x2e8804u: goto label_2e8804;
        case 0x2e8808u: goto label_2e8808;
        case 0x2e880cu: goto label_2e880c;
        case 0x2e8810u: goto label_2e8810;
        case 0x2e8814u: goto label_2e8814;
        case 0x2e8818u: goto label_2e8818;
        case 0x2e881cu: goto label_2e881c;
        case 0x2e8820u: goto label_2e8820;
        case 0x2e8824u: goto label_2e8824;
        case 0x2e8828u: goto label_2e8828;
        case 0x2e882cu: goto label_2e882c;
        case 0x2e8830u: goto label_2e8830;
        case 0x2e8834u: goto label_2e8834;
        case 0x2e8838u: goto label_2e8838;
        case 0x2e883cu: goto label_2e883c;
        case 0x2e8840u: goto label_2e8840;
        case 0x2e8844u: goto label_2e8844;
        case 0x2e8848u: goto label_2e8848;
        case 0x2e884cu: goto label_2e884c;
        case 0x2e8850u: goto label_2e8850;
        case 0x2e8854u: goto label_2e8854;
        case 0x2e8858u: goto label_2e8858;
        case 0x2e885cu: goto label_2e885c;
        case 0x2e8860u: goto label_2e8860;
        case 0x2e8864u: goto label_2e8864;
        case 0x2e8868u: goto label_2e8868;
        case 0x2e886cu: goto label_2e886c;
        case 0x2e8870u: goto label_2e8870;
        case 0x2e8874u: goto label_2e8874;
        case 0x2e8878u: goto label_2e8878;
        case 0x2e887cu: goto label_2e887c;
        case 0x2e8880u: goto label_2e8880;
        case 0x2e8884u: goto label_2e8884;
        case 0x2e8888u: goto label_2e8888;
        case 0x2e888cu: goto label_2e888c;
        case 0x2e8890u: goto label_2e8890;
        case 0x2e8894u: goto label_2e8894;
        case 0x2e8898u: goto label_2e8898;
        case 0x2e889cu: goto label_2e889c;
        case 0x2e88a0u: goto label_2e88a0;
        case 0x2e88a4u: goto label_2e88a4;
        case 0x2e88a8u: goto label_2e88a8;
        case 0x2e88acu: goto label_2e88ac;
        case 0x2e88b0u: goto label_2e88b0;
        case 0x2e88b4u: goto label_2e88b4;
        case 0x2e88b8u: goto label_2e88b8;
        case 0x2e88bcu: goto label_2e88bc;
        case 0x2e88c0u: goto label_2e88c0;
        case 0x2e88c4u: goto label_2e88c4;
        case 0x2e88c8u: goto label_2e88c8;
        case 0x2e88ccu: goto label_2e88cc;
        case 0x2e88d0u: goto label_2e88d0;
        case 0x2e88d4u: goto label_2e88d4;
        case 0x2e88d8u: goto label_2e88d8;
        case 0x2e88dcu: goto label_2e88dc;
        case 0x2e88e0u: goto label_2e88e0;
        case 0x2e88e4u: goto label_2e88e4;
        case 0x2e88e8u: goto label_2e88e8;
        case 0x2e88ecu: goto label_2e88ec;
        case 0x2e88f0u: goto label_2e88f0;
        case 0x2e88f4u: goto label_2e88f4;
        case 0x2e88f8u: goto label_2e88f8;
        case 0x2e88fcu: goto label_2e88fc;
        case 0x2e8900u: goto label_2e8900;
        case 0x2e8904u: goto label_2e8904;
        case 0x2e8908u: goto label_2e8908;
        case 0x2e890cu: goto label_2e890c;
        case 0x2e8910u: goto label_2e8910;
        case 0x2e8914u: goto label_2e8914;
        case 0x2e8918u: goto label_2e8918;
        case 0x2e891cu: goto label_2e891c;
        case 0x2e8920u: goto label_2e8920;
        case 0x2e8924u: goto label_2e8924;
        case 0x2e8928u: goto label_2e8928;
        case 0x2e892cu: goto label_2e892c;
        case 0x2e8930u: goto label_2e8930;
        case 0x2e8934u: goto label_2e8934;
        case 0x2e8938u: goto label_2e8938;
        case 0x2e893cu: goto label_2e893c;
        case 0x2e8940u: goto label_2e8940;
        case 0x2e8944u: goto label_2e8944;
        case 0x2e8948u: goto label_2e8948;
        case 0x2e894cu: goto label_2e894c;
        case 0x2e8950u: goto label_2e8950;
        case 0x2e8954u: goto label_2e8954;
        case 0x2e8958u: goto label_2e8958;
        case 0x2e895cu: goto label_2e895c;
        case 0x2e8960u: goto label_2e8960;
        case 0x2e8964u: goto label_2e8964;
        case 0x2e8968u: goto label_2e8968;
        case 0x2e896cu: goto label_2e896c;
        case 0x2e8970u: goto label_2e8970;
        case 0x2e8974u: goto label_2e8974;
        case 0x2e8978u: goto label_2e8978;
        case 0x2e897cu: goto label_2e897c;
        case 0x2e8980u: goto label_2e8980;
        case 0x2e8984u: goto label_2e8984;
        case 0x2e8988u: goto label_2e8988;
        case 0x2e898cu: goto label_2e898c;
        case 0x2e8990u: goto label_2e8990;
        case 0x2e8994u: goto label_2e8994;
        case 0x2e8998u: goto label_2e8998;
        case 0x2e899cu: goto label_2e899c;
        case 0x2e89a0u: goto label_2e89a0;
        case 0x2e89a4u: goto label_2e89a4;
        case 0x2e89a8u: goto label_2e89a8;
        case 0x2e89acu: goto label_2e89ac;
        case 0x2e89b0u: goto label_2e89b0;
        case 0x2e89b4u: goto label_2e89b4;
        case 0x2e89b8u: goto label_2e89b8;
        case 0x2e89bcu: goto label_2e89bc;
        case 0x2e89c0u: goto label_2e89c0;
        case 0x2e89c4u: goto label_2e89c4;
        case 0x2e89c8u: goto label_2e89c8;
        case 0x2e89ccu: goto label_2e89cc;
        case 0x2e89d0u: goto label_2e89d0;
        case 0x2e89d4u: goto label_2e89d4;
        case 0x2e89d8u: goto label_2e89d8;
        case 0x2e89dcu: goto label_2e89dc;
        case 0x2e89e0u: goto label_2e89e0;
        case 0x2e89e4u: goto label_2e89e4;
        case 0x2e89e8u: goto label_2e89e8;
        case 0x2e89ecu: goto label_2e89ec;
        case 0x2e89f0u: goto label_2e89f0;
        case 0x2e89f4u: goto label_2e89f4;
        case 0x2e89f8u: goto label_2e89f8;
        case 0x2e89fcu: goto label_2e89fc;
        case 0x2e8a00u: goto label_2e8a00;
        case 0x2e8a04u: goto label_2e8a04;
        case 0x2e8a08u: goto label_2e8a08;
        case 0x2e8a0cu: goto label_2e8a0c;
        case 0x2e8a10u: goto label_2e8a10;
        case 0x2e8a14u: goto label_2e8a14;
        case 0x2e8a18u: goto label_2e8a18;
        case 0x2e8a1cu: goto label_2e8a1c;
        case 0x2e8a20u: goto label_2e8a20;
        case 0x2e8a24u: goto label_2e8a24;
        case 0x2e8a28u: goto label_2e8a28;
        case 0x2e8a2cu: goto label_2e8a2c;
        case 0x2e8a30u: goto label_2e8a30;
        case 0x2e8a34u: goto label_2e8a34;
        case 0x2e8a38u: goto label_2e8a38;
        case 0x2e8a3cu: goto label_2e8a3c;
        case 0x2e8a40u: goto label_2e8a40;
        case 0x2e8a44u: goto label_2e8a44;
        case 0x2e8a48u: goto label_2e8a48;
        case 0x2e8a4cu: goto label_2e8a4c;
        case 0x2e8a50u: goto label_2e8a50;
        case 0x2e8a54u: goto label_2e8a54;
        case 0x2e8a58u: goto label_2e8a58;
        case 0x2e8a5cu: goto label_2e8a5c;
        case 0x2e8a60u: goto label_2e8a60;
        case 0x2e8a64u: goto label_2e8a64;
        case 0x2e8a68u: goto label_2e8a68;
        case 0x2e8a6cu: goto label_2e8a6c;
        case 0x2e8a70u: goto label_2e8a70;
        case 0x2e8a74u: goto label_2e8a74;
        case 0x2e8a78u: goto label_2e8a78;
        case 0x2e8a7cu: goto label_2e8a7c;
        case 0x2e8a80u: goto label_2e8a80;
        case 0x2e8a84u: goto label_2e8a84;
        case 0x2e8a88u: goto label_2e8a88;
        case 0x2e8a8cu: goto label_2e8a8c;
        case 0x2e8a90u: goto label_2e8a90;
        case 0x2e8a94u: goto label_2e8a94;
        case 0x2e8a98u: goto label_2e8a98;
        case 0x2e8a9cu: goto label_2e8a9c;
        case 0x2e8aa0u: goto label_2e8aa0;
        case 0x2e8aa4u: goto label_2e8aa4;
        case 0x2e8aa8u: goto label_2e8aa8;
        case 0x2e8aacu: goto label_2e8aac;
        case 0x2e8ab0u: goto label_2e8ab0;
        case 0x2e8ab4u: goto label_2e8ab4;
        case 0x2e8ab8u: goto label_2e8ab8;
        case 0x2e8abcu: goto label_2e8abc;
        case 0x2e8ac0u: goto label_2e8ac0;
        case 0x2e8ac4u: goto label_2e8ac4;
        case 0x2e8ac8u: goto label_2e8ac8;
        case 0x2e8accu: goto label_2e8acc;
        case 0x2e8ad0u: goto label_2e8ad0;
        case 0x2e8ad4u: goto label_2e8ad4;
        case 0x2e8ad8u: goto label_2e8ad8;
        case 0x2e8adcu: goto label_2e8adc;
        default: break;
    }

    ctx->pc = 0x2e79a0u;

label_2e79a0:
    // 0x2e79a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e79a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2e79a4:
    // 0x2e79a4: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2e79a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2e79a8:
    // 0x2e79a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e79a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2e79ac:
    // 0x2e79ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e79acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e79b0:
    // 0x2e79b0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e79b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e79b4:
    // 0x2e79b4: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e79b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e79b8:
    // 0x2e79b8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2e79b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2e79bc:
    // 0x2e79bc: 0x26750058  addiu       $s5, $s3, 0x58
    ctx->pc = 0x2e79bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
label_2e79c0:
    // 0x2e79c0: 0x34a50064  ori         $a1, $a1, 0x64
    ctx->pc = 0x2e79c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)100);
label_2e79c4:
    // 0x2e79c4: 0x34c60065  ori         $a2, $a2, 0x65
    ctx->pc = 0x2e79c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)101);
label_2e79c8:
    // 0x2e79c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e79c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2e79cc:
    // 0x2e79cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e79ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2e79d0:
    // 0x2e79d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e79d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2e79d4:
    // 0x2e79d4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2e79d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2e79d8:
    // 0x2e79d8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2e79d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2e79dc:
    // 0x2e79dc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2e79dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_2e79e0:
    // 0x2e79e0: 0xc0bbe04  jal         func_2EF810
label_2e79e4:
    if (ctx->pc == 0x2E79E4u) {
        ctx->pc = 0x2E79E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E79E0u;
        // 0x2e79e4: 0x34e70066  ori         $a3, $a3, 0x66 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)102);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E79E8u;
        goto label_2e79e8;
    }
    ctx->pc = 0x2E79E0u;
    SET_GPR_U32(ctx, 31, 0x2E79E8u);
    ctx->pc = 0x2E79E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E79E0u;
    // 0x2e79e4: 0x34e70066  ori         $a3, $a3, 0x66 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)102);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF810u, 0x2E79E0u, 0x2E79E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E79E8u;
label_2e79e8:
    // 0x2e79e8: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2e79e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e79ec:
    // 0x2e79ec: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e79f0:
    if (ctx->pc == 0x2E79F0u) {
        ctx->pc = 0x2E79F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E79ECu;
        // 0x2e79f0: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E79F4u;
        goto label_2e79f4;
    }
    ctx->pc = 0x2E79ECu;
    {
        const bool branch_taken_0x2e79ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e79ec) {
            ctx->pc = 0x2E79F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E79ECu;
            // 0x2e79f0: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7A08u;
            goto label_2e7a08;
        }
    }
    ctx->pc = 0x2E79F4u;
label_2e79f4:
    // 0x2e79f4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e79f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e79f8:
    // 0x2e79f8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2e79f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2e79fc:
    // 0x2e79fc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7a00:
    if (ctx->pc == 0x2E7A00u) {
        ctx->pc = 0x2E7A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E79FCu;
        // 0x2e7a00: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7A04u;
        goto label_2e7a04;
    }
    ctx->pc = 0x2E79FCu;
    {
        const bool branch_taken_0x2e79fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E79FCu;
        // 0x2e7a00: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e79fc) {
            ctx->pc = 0x2E7A14u;
            goto label_2e7a14;
        }
    }
    ctx->pc = 0x2E7A04u;
label_2e7a04:
    // 0x2e7a04: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x2e7a04u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_2e7a08:
    // 0x2e7a08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7a0c:
    // 0x2e7a0c: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x2e7a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_2e7a10:
    // 0x2e7a10: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2e7a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2e7a14:
    // 0x2e7a14: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2e7a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e7a18:
    // 0x2e7a18: 0x34a50025  ori         $a1, $a1, 0x25
    ctx->pc = 0x2e7a18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37);
label_2e7a1c:
    // 0x2e7a1c: 0xc0bb966  jal         func_2EE598
label_2e7a20:
    if (ctx->pc == 0x2E7A20u) {
        ctx->pc = 0x2E7A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A1Cu;
        // 0x2e7a20: 0x26700060  addiu       $s0, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7A24u;
        goto label_2e7a24;
    }
    ctx->pc = 0x2E7A1Cu;
    SET_GPR_U32(ctx, 31, 0x2E7A24u);
    ctx->pc = 0x2E7A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7A1Cu;
    // 0x2e7a20: 0x26700060  addiu       $s0, $s3, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2E7A1Cu, 0x2E7A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7A24u;
label_2e7a24:
    // 0x2e7a24: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e7a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e7a28:
    // 0x2e7a28: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7a2c:
    if (ctx->pc == 0x2E7A2Cu) {
        ctx->pc = 0x2E7A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A28u;
        // 0x2e7a2c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7A30u;
        goto label_2e7a30;
    }
    ctx->pc = 0x2E7A28u;
    {
        const bool branch_taken_0x2e7a28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7a28) {
            ctx->pc = 0x2E7A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7A28u;
            // 0x2e7a2c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7A44u;
            goto label_2e7a44;
        }
    }
    ctx->pc = 0x2E7A30u;
label_2e7a30:
    // 0x2e7a30: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e7a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7a34:
    // 0x2e7a34: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e7a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e7a38:
    // 0x2e7a38: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7a3c:
    if (ctx->pc == 0x2E7A3Cu) {
        ctx->pc = 0x2E7A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A38u;
        // 0x2e7a3c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7A40u;
        goto label_2e7a40;
    }
    ctx->pc = 0x2E7A38u;
    {
        const bool branch_taken_0x2e7a38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A38u;
        // 0x2e7a3c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a38) {
            ctx->pc = 0x2E7A50u;
            goto label_2e7a50;
        }
    }
    ctx->pc = 0x2E7A40u;
label_2e7a40:
    // 0x2e7a40: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e7a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e7a44:
    // 0x2e7a44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7a48:
    // 0x2e7a48: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e7a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e7a4c:
    // 0x2e7a4c: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2e7a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2e7a50:
    // 0x2e7a50: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2e7a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e7a54:
    // 0x2e7a54: 0x34a50029  ori         $a1, $a1, 0x29
    ctx->pc = 0x2e7a54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)41);
label_2e7a58:
    // 0x2e7a58: 0xc0bb966  jal         func_2EE598
label_2e7a5c:
    if (ctx->pc == 0x2E7A5Cu) {
        ctx->pc = 0x2E7A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A58u;
        // 0x2e7a5c: 0x26710068  addiu       $s1, $s3, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7A60u;
        goto label_2e7a60;
    }
    ctx->pc = 0x2E7A58u;
    SET_GPR_U32(ctx, 31, 0x2E7A60u);
    ctx->pc = 0x2E7A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7A58u;
    // 0x2e7a5c: 0x26710068  addiu       $s1, $s3, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2E7A58u, 0x2E7A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7A60u;
label_2e7a60:
    // 0x2e7a60: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e7a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e7a64:
    // 0x2e7a64: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7a68:
    if (ctx->pc == 0x2E7A68u) {
        ctx->pc = 0x2E7A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A64u;
        // 0x2e7a68: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7A6Cu;
        goto label_2e7a6c;
    }
    ctx->pc = 0x2E7A64u;
    {
        const bool branch_taken_0x2e7a64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7a64) {
            ctx->pc = 0x2E7A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7A64u;
            // 0x2e7a68: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7A80u;
            goto label_2e7a80;
        }
    }
    ctx->pc = 0x2E7A6Cu;
label_2e7a6c:
    // 0x2e7a6c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e7a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7a70:
    // 0x2e7a70: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e7a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2e7a74:
    // 0x2e7a74: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7a78:
    if (ctx->pc == 0x2E7A78u) {
        ctx->pc = 0x2E7A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A74u;
        // 0x2e7a78: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7A7Cu;
        goto label_2e7a7c;
    }
    ctx->pc = 0x2E7A74u;
    {
        const bool branch_taken_0x2e7a74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A74u;
        // 0x2e7a78: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a74) {
            ctx->pc = 0x2E7A8Cu;
            goto label_2e7a8c;
        }
    }
    ctx->pc = 0x2E7A7Cu;
label_2e7a7c:
    // 0x2e7a7c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e7a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e7a80:
    // 0x2e7a80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7a84:
    // 0x2e7a84: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e7a84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e7a88:
    // 0x2e7a88: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2e7a88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2e7a8c:
    // 0x2e7a8c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2e7a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e7a90:
    // 0x2e7a90: 0x34a5003a  ori         $a1, $a1, 0x3A
    ctx->pc = 0x2e7a90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)58);
label_2e7a94:
    // 0x2e7a94: 0xc0bb966  jal         func_2EE598
label_2e7a98:
    if (ctx->pc == 0x2E7A98u) {
        ctx->pc = 0x2E7A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A94u;
        // 0x2e7a98: 0x26720070  addiu       $s2, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7A9Cu;
        goto label_2e7a9c;
    }
    ctx->pc = 0x2E7A94u;
    SET_GPR_U32(ctx, 31, 0x2E7A9Cu);
    ctx->pc = 0x2E7A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7A94u;
    // 0x2e7a98: 0x26720070  addiu       $s2, $s3, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2E7A94u, 0x2E7A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7A9Cu;
label_2e7a9c:
    // 0x2e7a9c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e7a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e7aa0:
    // 0x2e7aa0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7aa4:
    if (ctx->pc == 0x2E7AA4u) {
        ctx->pc = 0x2E7AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7AA0u;
        // 0x2e7aa4: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7AA8u;
        goto label_2e7aa8;
    }
    ctx->pc = 0x2E7AA0u;
    {
        const bool branch_taken_0x2e7aa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7aa0) {
            ctx->pc = 0x2E7AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7AA0u;
            // 0x2e7aa4: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7ABCu;
            goto label_2e7abc;
        }
    }
    ctx->pc = 0x2E7AA8u;
label_2e7aa8:
    // 0x2e7aa8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e7aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7aac:
    // 0x2e7aac: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e7aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e7ab0:
    // 0x2e7ab0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7ab4:
    if (ctx->pc == 0x2E7AB4u) {
        ctx->pc = 0x2E7AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7AB0u;
        // 0x2e7ab4: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7AB8u;
        goto label_2e7ab8;
    }
    ctx->pc = 0x2E7AB0u;
    {
        const bool branch_taken_0x2e7ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7AB0u;
        // 0x2e7ab4: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ab0) {
            ctx->pc = 0x2E7AC8u;
            goto label_2e7ac8;
        }
    }
    ctx->pc = 0x2E7AB8u;
label_2e7ab8:
    // 0x2e7ab8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2e7ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2e7abc:
    // 0x2e7abc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7ac0:
    // 0x2e7ac0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2e7ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2e7ac4:
    // 0x2e7ac4: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2e7ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2e7ac8:
    // 0x2e7ac8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2e7ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e7acc:
    // 0x2e7acc: 0x34a5004b  ori         $a1, $a1, 0x4B
    ctx->pc = 0x2e7accu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)75);
label_2e7ad0:
    // 0x2e7ad0: 0xc0bb966  jal         func_2EE598
label_2e7ad4:
    if (ctx->pc == 0x2E7AD4u) {
        ctx->pc = 0x2E7AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7AD0u;
        // 0x2e7ad4: 0x26740078  addiu       $s4, $s3, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7AD8u;
        goto label_2e7ad8;
    }
    ctx->pc = 0x2E7AD0u;
    SET_GPR_U32(ctx, 31, 0x2E7AD8u);
    ctx->pc = 0x2E7AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7AD0u;
    // 0x2e7ad4: 0x26740078  addiu       $s4, $s3, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2E7AD0u, 0x2E7AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7AD8u;
label_2e7ad8:
    // 0x2e7ad8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2e7ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2e7adc:
    // 0x2e7adc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7ae0:
    if (ctx->pc == 0x2E7AE0u) {
        ctx->pc = 0x2E7AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7ADCu;
        // 0x2e7ae0: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7AE4u;
        goto label_2e7ae4;
    }
    ctx->pc = 0x2E7ADCu;
    {
        const bool branch_taken_0x2e7adc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7adc) {
            ctx->pc = 0x2E7AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7ADCu;
            // 0x2e7ae0: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7AF8u;
            goto label_2e7af8;
        }
    }
    ctx->pc = 0x2E7AE4u;
label_2e7ae4:
    // 0x2e7ae4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e7ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7ae8:
    // 0x2e7ae8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2e7ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2e7aec:
    // 0x2e7aec: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7af0:
    if (ctx->pc == 0x2E7AF0u) {
        ctx->pc = 0x2E7AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7AECu;
        // 0x2e7af0: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7AF4u;
        goto label_2e7af4;
    }
    ctx->pc = 0x2E7AECu;
    {
        const bool branch_taken_0x2e7aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7AECu;
        // 0x2e7af0: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7aec) {
            ctx->pc = 0x2E7B04u;
            goto label_2e7b04;
        }
    }
    ctx->pc = 0x2E7AF4u;
label_2e7af4:
    // 0x2e7af4: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x2e7af4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_2e7af8:
    // 0x2e7af8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7afc:
    // 0x2e7afc: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x2e7afcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_2e7b00:
    // 0x2e7b00: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2e7b00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2e7b04:
    // 0x2e7b04: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2e7b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e7b08:
    // 0x2e7b08: 0x34a5005c  ori         $a1, $a1, 0x5C
    ctx->pc = 0x2e7b08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)92);
label_2e7b0c:
    // 0x2e7b0c: 0xc0bb966  jal         func_2EE598
label_2e7b10:
    if (ctx->pc == 0x2E7B10u) {
        ctx->pc = 0x2E7B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B0Cu;
        // 0x2e7b10: 0x26760080  addiu       $s6, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7B14u;
        goto label_2e7b14;
    }
    ctx->pc = 0x2E7B0Cu;
    SET_GPR_U32(ctx, 31, 0x2E7B14u);
    ctx->pc = 0x2E7B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7B0Cu;
    // 0x2e7b10: 0x26760080  addiu       $s6, $s3, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2E7B0Cu, 0x2E7B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7B14u;
label_2e7b14:
    // 0x2e7b14: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x2e7b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2e7b18:
    // 0x2e7b18: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7b1c:
    if (ctx->pc == 0x2E7B1Cu) {
        ctx->pc = 0x2E7B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B18u;
        // 0x2e7b1c: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7B20u;
        goto label_2e7b20;
    }
    ctx->pc = 0x2E7B18u;
    {
        const bool branch_taken_0x2e7b18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7b18) {
            ctx->pc = 0x2E7B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7B18u;
            // 0x2e7b1c: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7B34u;
            goto label_2e7b34;
        }
    }
    ctx->pc = 0x2E7B20u;
label_2e7b20:
    // 0x2e7b20: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e7b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7b24:
    // 0x2e7b24: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x2e7b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_2e7b28:
    // 0x2e7b28: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7b2c:
    if (ctx->pc == 0x2E7B2Cu) {
        ctx->pc = 0x2E7B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B28u;
        // 0x2e7b2c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7B30u;
        goto label_2e7b30;
    }
    ctx->pc = 0x2E7B28u;
    {
        const bool branch_taken_0x2e7b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B28u;
        // 0x2e7b2c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b28) {
            ctx->pc = 0x2E7B40u;
            goto label_2e7b40;
        }
    }
    ctx->pc = 0x2E7B30u;
label_2e7b30:
    // 0x2e7b30: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x2e7b30u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_2e7b34:
    // 0x2e7b34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7b38:
    // 0x2e7b38: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x2e7b38u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
label_2e7b3c:
    // 0x2e7b3c: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2e7b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2e7b40:
    // 0x2e7b40: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e7b40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e7b44:
    // 0x2e7b44: 0x34a50060  ori         $a1, $a1, 0x60
    ctx->pc = 0x2e7b44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)96);
label_2e7b48:
    // 0x2e7b48: 0xc0bb966  jal         func_2EE598
label_2e7b4c:
    if (ctx->pc == 0x2E7B4Cu) {
        ctx->pc = 0x2E7B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B48u;
        // 0x2e7b4c: 0x34c600fa  ori         $a2, $a2, 0xFA (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)250);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7B50u;
        goto label_2e7b50;
    }
    ctx->pc = 0x2E7B48u;
    SET_GPR_U32(ctx, 31, 0x2E7B50u);
    ctx->pc = 0x2E7B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7B48u;
    // 0x2e7b4c: 0x34c600fa  ori         $a2, $a2, 0xFA (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)250);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2E7B48u, 0x2E7B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7B50u;
label_2e7b50:
    // 0x2e7b50: 0x26650088  addiu       $a1, $s3, 0x88
    ctx->pc = 0x2e7b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 136));
label_2e7b54:
    // 0x2e7b54: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2e7b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2e7b58:
    // 0x2e7b58: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7b5c:
    if (ctx->pc == 0x2E7B5Cu) {
        ctx->pc = 0x2E7B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B58u;
        // 0x2e7b5c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7B60u;
        goto label_2e7b60;
    }
    ctx->pc = 0x2E7B58u;
    {
        const bool branch_taken_0x2e7b58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7b58) {
            ctx->pc = 0x2E7B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7B58u;
            // 0x2e7b5c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7B74u;
            goto label_2e7b74;
        }
    }
    ctx->pc = 0x2E7B60u;
label_2e7b60:
    // 0x2e7b60: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e7b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7b64:
    // 0x2e7b64: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e7b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2e7b68:
    // 0x2e7b68: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_2e7b6c:
    if (ctx->pc == 0x2E7B6Cu) {
        ctx->pc = 0x2E7B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B68u;
        // 0x2e7b6c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7B70u;
        goto label_2e7b70;
    }
    ctx->pc = 0x2E7B68u;
    {
        const bool branch_taken_0x2e7b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e7b68) {
            ctx->pc = 0x2E7B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7B68u;
            // 0x2e7b6c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7B80u;
            goto label_2e7b80;
        }
    }
    ctx->pc = 0x2E7B70u;
label_2e7b70:
    // 0x2e7b70: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e7b70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2e7b74:
    // 0x2e7b74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7b78:
    // 0x2e7b78: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e7b78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2e7b7c:
    // 0x2e7b7c: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2e7b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2e7b80:
    // 0x2e7b80: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e7b80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e7b84:
    // 0x2e7b84: 0x34a50063  ori         $a1, $a1, 0x63
    ctx->pc = 0x2e7b84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)99);
label_2e7b88:
    // 0x2e7b88: 0xc0bb966  jal         func_2EE598
label_2e7b8c:
    if (ctx->pc == 0x2E7B8Cu) {
        ctx->pc = 0x2E7B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B88u;
        // 0x2e7b8c: 0x34c600fd  ori         $a2, $a2, 0xFD (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)253);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7B90u;
        goto label_2e7b90;
    }
    ctx->pc = 0x2E7B88u;
    SET_GPR_U32(ctx, 31, 0x2E7B90u);
    ctx->pc = 0x2E7B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7B88u;
    // 0x2e7b8c: 0x34c600fd  ori         $a2, $a2, 0xFD (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)253);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2E7B88u, 0x2E7B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7B90u;
label_2e7b90:
    // 0x2e7b90: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2e7b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e7b94:
    // 0x2e7b94: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7b98:
    if (ctx->pc == 0x2E7B98u) {
        ctx->pc = 0x2E7B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B94u;
        // 0x2e7b98: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7B9Cu;
        goto label_2e7b9c;
    }
    ctx->pc = 0x2E7B94u;
    {
        const bool branch_taken_0x2e7b94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7b94) {
            ctx->pc = 0x2E7B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7B94u;
            // 0x2e7b98: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7BB0u;
            goto label_2e7bb0;
        }
    }
    ctx->pc = 0x2E7B9Cu;
label_2e7b9c:
    // 0x2e7b9c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e7b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7ba0:
    // 0x2e7ba0: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2e7ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2e7ba4:
    // 0x2e7ba4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7ba8:
    if (ctx->pc == 0x2E7BA8u) {
        ctx->pc = 0x2E7BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BA4u;
        // 0x2e7ba8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7BACu;
        goto label_2e7bac;
    }
    ctx->pc = 0x2E7BA4u;
    {
        const bool branch_taken_0x2e7ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BA4u;
        // 0x2e7ba8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ba4) {
            ctx->pc = 0x2E7BBCu;
            goto label_2e7bbc;
        }
    }
    ctx->pc = 0x2E7BACu;
label_2e7bac:
    // 0x2e7bac: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x2e7bacu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_2e7bb0:
    // 0x2e7bb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7bb4:
    // 0x2e7bb4: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x2e7bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_2e7bb8:
    // 0x2e7bb8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e7bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e7bbc:
    // 0x2e7bbc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e7bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e7bc0:
    // 0x2e7bc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e7bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7bc4:
    // 0x2e7bc4: 0x34c60028  ori         $a2, $a2, 0x28
    ctx->pc = 0x2e7bc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)40);
label_2e7bc8:
    // 0x2e7bc8: 0xc0bb96a  jal         func_2EE5A8
label_2e7bcc:
    if (ctx->pc == 0x2E7BCCu) {
        ctx->pc = 0x2E7BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BC8u;
        // 0x2e7bcc: 0x34e700c6  ori         $a3, $a3, 0xC6 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)198);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7BD0u;
        goto label_2e7bd0;
    }
    ctx->pc = 0x2E7BC8u;
    SET_GPR_U32(ctx, 31, 0x2E7BD0u);
    ctx->pc = 0x2E7BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7BC8u;
    // 0x2e7bcc: 0x34e700c6  ori         $a3, $a3, 0xC6 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)198);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E7BC8u, 0x2E7BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7BD0u;
label_2e7bd0:
    // 0x2e7bd0: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2e7bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e7bd4:
    // 0x2e7bd4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7bd8:
    if (ctx->pc == 0x2E7BD8u) {
        ctx->pc = 0x2E7BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BD4u;
        // 0x2e7bd8: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7BDCu;
        goto label_2e7bdc;
    }
    ctx->pc = 0x2E7BD4u;
    {
        const bool branch_taken_0x2e7bd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7bd4) {
            ctx->pc = 0x2E7BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7BD4u;
            // 0x2e7bd8: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7BF0u;
            goto label_2e7bf0;
        }
    }
    ctx->pc = 0x2E7BDCu;
label_2e7bdc:
    // 0x2e7bdc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e7bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7be0:
    // 0x2e7be0: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2e7be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2e7be4:
    // 0x2e7be4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7be8:
    if (ctx->pc == 0x2E7BE8u) {
        ctx->pc = 0x2E7BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BE4u;
        // 0x2e7be8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7BECu;
        goto label_2e7bec;
    }
    ctx->pc = 0x2E7BE4u;
    {
        const bool branch_taken_0x2e7be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BE4u;
        // 0x2e7be8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7be4) {
            ctx->pc = 0x2E7BFCu;
            goto label_2e7bfc;
        }
    }
    ctx->pc = 0x2E7BECu;
label_2e7bec:
    // 0x2e7bec: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x2e7becu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_2e7bf0:
    // 0x2e7bf0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7bf4:
    // 0x2e7bf4: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x2e7bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_2e7bf8:
    // 0x2e7bf8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e7bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e7bfc:
    // 0x2e7bfc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e7bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e7c00:
    // 0x2e7c00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e7c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7c04:
    // 0x2e7c04: 0x34c60027  ori         $a2, $a2, 0x27
    ctx->pc = 0x2e7c04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)39);
label_2e7c08:
    // 0x2e7c08: 0xc0bb96a  jal         func_2EE5A8
label_2e7c0c:
    if (ctx->pc == 0x2E7C0Cu) {
        ctx->pc = 0x2E7C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C08u;
        // 0x2e7c0c: 0x34e700c5  ori         $a3, $a3, 0xC5 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)197);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7C10u;
        goto label_2e7c10;
    }
    ctx->pc = 0x2E7C08u;
    SET_GPR_U32(ctx, 31, 0x2E7C10u);
    ctx->pc = 0x2E7C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7C08u;
    // 0x2e7c0c: 0x34e700c5  ori         $a3, $a3, 0xC5 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)197);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E7C08u, 0x2E7C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7C10u;
label_2e7c10:
    // 0x2e7c10: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e7c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e7c14:
    // 0x2e7c14: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7c18:
    if (ctx->pc == 0x2E7C18u) {
        ctx->pc = 0x2E7C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C14u;
        // 0x2e7c18: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7C1Cu;
        goto label_2e7c1c;
    }
    ctx->pc = 0x2E7C14u;
    {
        const bool branch_taken_0x2e7c14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7c14) {
            ctx->pc = 0x2E7C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7C14u;
            // 0x2e7c18: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7C30u;
            goto label_2e7c30;
        }
    }
    ctx->pc = 0x2E7C1Cu;
label_2e7c1c:
    // 0x2e7c1c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e7c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7c20:
    // 0x2e7c20: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e7c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e7c24:
    // 0x2e7c24: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7c28:
    if (ctx->pc == 0x2E7C28u) {
        ctx->pc = 0x2E7C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C24u;
        // 0x2e7c28: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7C2Cu;
        goto label_2e7c2c;
    }
    ctx->pc = 0x2E7C24u;
    {
        const bool branch_taken_0x2e7c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C24u;
        // 0x2e7c28: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c24) {
            ctx->pc = 0x2E7C3Cu;
            goto label_2e7c3c;
        }
    }
    ctx->pc = 0x2E7C2Cu;
label_2e7c2c:
    // 0x2e7c2c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e7c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e7c30:
    // 0x2e7c30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7c34:
    // 0x2e7c34: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e7c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e7c38:
    // 0x2e7c38: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e7c38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e7c3c:
    // 0x2e7c3c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e7c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e7c40:
    // 0x2e7c40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e7c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7c44:
    // 0x2e7c44: 0x34c6002a  ori         $a2, $a2, 0x2A
    ctx->pc = 0x2e7c44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)42);
label_2e7c48:
    // 0x2e7c48: 0xc0bb96a  jal         func_2EE5A8
label_2e7c4c:
    if (ctx->pc == 0x2E7C4Cu) {
        ctx->pc = 0x2E7C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C48u;
        // 0x2e7c4c: 0x34e700d6  ori         $a3, $a3, 0xD6 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)214);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7C50u;
        goto label_2e7c50;
    }
    ctx->pc = 0x2E7C48u;
    SET_GPR_U32(ctx, 31, 0x2E7C50u);
    ctx->pc = 0x2E7C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7C48u;
    // 0x2e7c4c: 0x34e700d6  ori         $a3, $a3, 0xD6 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)214);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E7C48u, 0x2E7C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7C50u;
label_2e7c50:
    // 0x2e7c50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e7c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e7c54:
    // 0x2e7c54: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7c58:
    if (ctx->pc == 0x2E7C58u) {
        ctx->pc = 0x2E7C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C54u;
        // 0x2e7c58: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7C5Cu;
        goto label_2e7c5c;
    }
    ctx->pc = 0x2E7C54u;
    {
        const bool branch_taken_0x2e7c54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7c54) {
            ctx->pc = 0x2E7C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7C54u;
            // 0x2e7c58: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7C70u;
            goto label_2e7c70;
        }
    }
    ctx->pc = 0x2E7C5Cu;
label_2e7c5c:
    // 0x2e7c5c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e7c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7c60:
    // 0x2e7c60: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e7c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e7c64:
    // 0x2e7c64: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7c68:
    if (ctx->pc == 0x2E7C68u) {
        ctx->pc = 0x2E7C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C64u;
        // 0x2e7c68: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7C6Cu;
        goto label_2e7c6c;
    }
    ctx->pc = 0x2E7C64u;
    {
        const bool branch_taken_0x2e7c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C64u;
        // 0x2e7c68: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c64) {
            ctx->pc = 0x2E7C7Cu;
            goto label_2e7c7c;
        }
    }
    ctx->pc = 0x2E7C6Cu;
label_2e7c6c:
    // 0x2e7c6c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e7c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e7c70:
    // 0x2e7c70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7c74:
    // 0x2e7c74: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e7c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e7c78:
    // 0x2e7c78: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e7c78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e7c7c:
    // 0x2e7c7c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e7c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e7c80:
    // 0x2e7c80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e7c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7c84:
    // 0x2e7c84: 0x34c6002b  ori         $a2, $a2, 0x2B
    ctx->pc = 0x2e7c84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)43);
label_2e7c88:
    // 0x2e7c88: 0xc0bb96a  jal         func_2EE5A8
label_2e7c8c:
    if (ctx->pc == 0x2E7C8Cu) {
        ctx->pc = 0x2E7C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C88u;
        // 0x2e7c8c: 0x34e700d5  ori         $a3, $a3, 0xD5 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)213);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7C90u;
        goto label_2e7c90;
    }
    ctx->pc = 0x2E7C88u;
    SET_GPR_U32(ctx, 31, 0x2E7C90u);
    ctx->pc = 0x2E7C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7C88u;
    // 0x2e7c8c: 0x34e700d5  ori         $a3, $a3, 0xD5 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)213);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E7C88u, 0x2E7C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7C90u;
label_2e7c90:
    // 0x2e7c90: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e7c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e7c94:
    // 0x2e7c94: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7c98:
    if (ctx->pc == 0x2E7C98u) {
        ctx->pc = 0x2E7C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C94u;
        // 0x2e7c98: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7C9Cu;
        goto label_2e7c9c;
    }
    ctx->pc = 0x2E7C94u;
    {
        const bool branch_taken_0x2e7c94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7c94) {
            ctx->pc = 0x2E7C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7C94u;
            // 0x2e7c98: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7CB0u;
            goto label_2e7cb0;
        }
    }
    ctx->pc = 0x2E7C9Cu;
label_2e7c9c:
    // 0x2e7c9c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e7c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7ca0:
    // 0x2e7ca0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e7ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e7ca4:
    // 0x2e7ca4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7ca8:
    if (ctx->pc == 0x2E7CA8u) {
        ctx->pc = 0x2E7CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CA4u;
        // 0x2e7ca8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7CACu;
        goto label_2e7cac;
    }
    ctx->pc = 0x2E7CA4u;
    {
        const bool branch_taken_0x2e7ca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CA4u;
        // 0x2e7ca8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ca4) {
            ctx->pc = 0x2E7CBCu;
            goto label_2e7cbc;
        }
    }
    ctx->pc = 0x2E7CACu;
label_2e7cac:
    // 0x2e7cac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e7cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e7cb0:
    // 0x2e7cb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7cb4:
    // 0x2e7cb4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e7cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e7cb8:
    // 0x2e7cb8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e7cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e7cbc:
    // 0x2e7cbc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e7cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e7cc0:
    // 0x2e7cc0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2e7cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e7cc4:
    // 0x2e7cc4: 0x34c6002c  ori         $a2, $a2, 0x2C
    ctx->pc = 0x2e7cc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)44);
label_2e7cc8:
    // 0x2e7cc8: 0xc0bb96a  jal         func_2EE5A8
label_2e7ccc:
    if (ctx->pc == 0x2E7CCCu) {
        ctx->pc = 0x2E7CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CC8u;
        // 0x2e7ccc: 0x34e700d4  ori         $a3, $a3, 0xD4 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)212);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7CD0u;
        goto label_2e7cd0;
    }
    ctx->pc = 0x2E7CC8u;
    SET_GPR_U32(ctx, 31, 0x2E7CD0u);
    ctx->pc = 0x2E7CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7CC8u;
    // 0x2e7ccc: 0x34e700d4  ori         $a3, $a3, 0xD4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)212);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E7CC8u, 0x2E7CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7CD0u;
label_2e7cd0:
    // 0x2e7cd0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e7cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e7cd4:
    // 0x2e7cd4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7cd8:
    if (ctx->pc == 0x2E7CD8u) {
        ctx->pc = 0x2E7CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CD4u;
        // 0x2e7cd8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7CDCu;
        goto label_2e7cdc;
    }
    ctx->pc = 0x2E7CD4u;
    {
        const bool branch_taken_0x2e7cd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7cd4) {
            ctx->pc = 0x2E7CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7CD4u;
            // 0x2e7cd8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7CF0u;
            goto label_2e7cf0;
        }
    }
    ctx->pc = 0x2E7CDCu;
label_2e7cdc:
    // 0x2e7cdc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e7cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7ce0:
    // 0x2e7ce0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e7ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e7ce4:
    // 0x2e7ce4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7ce8:
    if (ctx->pc == 0x2E7CE8u) {
        ctx->pc = 0x2E7CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CE4u;
        // 0x2e7ce8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7CECu;
        goto label_2e7cec;
    }
    ctx->pc = 0x2E7CE4u;
    {
        const bool branch_taken_0x2e7ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7CE4u;
        // 0x2e7ce8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ce4) {
            ctx->pc = 0x2E7CFCu;
            goto label_2e7cfc;
        }
    }
    ctx->pc = 0x2E7CECu;
label_2e7cec:
    // 0x2e7cec: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e7cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e7cf0:
    // 0x2e7cf0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7cf4:
    // 0x2e7cf4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e7cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e7cf8:
    // 0x2e7cf8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e7cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e7cfc:
    // 0x2e7cfc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e7cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e7d00:
    // 0x2e7d00: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2e7d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e7d04:
    // 0x2e7d04: 0x34c6002d  ori         $a2, $a2, 0x2D
    ctx->pc = 0x2e7d04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)45);
label_2e7d08:
    // 0x2e7d08: 0xc0bb96a  jal         func_2EE5A8
label_2e7d0c:
    if (ctx->pc == 0x2E7D0Cu) {
        ctx->pc = 0x2E7D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D08u;
        // 0x2e7d0c: 0x34e700d3  ori         $a3, $a3, 0xD3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)211);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7D10u;
        goto label_2e7d10;
    }
    ctx->pc = 0x2E7D08u;
    SET_GPR_U32(ctx, 31, 0x2E7D10u);
    ctx->pc = 0x2E7D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7D08u;
    // 0x2e7d0c: 0x34e700d3  ori         $a3, $a3, 0xD3 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)211);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E7D08u, 0x2E7D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7D10u;
label_2e7d10:
    // 0x2e7d10: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e7d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e7d14:
    // 0x2e7d14: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7d18:
    if (ctx->pc == 0x2E7D18u) {
        ctx->pc = 0x2E7D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D14u;
        // 0x2e7d18: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7D1Cu;
        goto label_2e7d1c;
    }
    ctx->pc = 0x2E7D14u;
    {
        const bool branch_taken_0x2e7d14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7d14) {
            ctx->pc = 0x2E7D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7D14u;
            // 0x2e7d18: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7D30u;
            goto label_2e7d30;
        }
    }
    ctx->pc = 0x2E7D1Cu;
label_2e7d1c:
    // 0x2e7d1c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e7d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7d20:
    // 0x2e7d20: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e7d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e7d24:
    // 0x2e7d24: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7d28:
    if (ctx->pc == 0x2E7D28u) {
        ctx->pc = 0x2E7D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D24u;
        // 0x2e7d28: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7D2Cu;
        goto label_2e7d2c;
    }
    ctx->pc = 0x2E7D24u;
    {
        const bool branch_taken_0x2e7d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D24u;
        // 0x2e7d28: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d24) {
            ctx->pc = 0x2E7D3Cu;
            goto label_2e7d3c;
        }
    }
    ctx->pc = 0x2E7D2Cu;
label_2e7d2c:
    // 0x2e7d2c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e7d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e7d30:
    // 0x2e7d30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7d34:
    // 0x2e7d34: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e7d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e7d38:
    // 0x2e7d38: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e7d38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e7d3c:
    // 0x2e7d3c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e7d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e7d40:
    // 0x2e7d40: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e7d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e7d44:
    // 0x2e7d44: 0x34c6002e  ori         $a2, $a2, 0x2E
    ctx->pc = 0x2e7d44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46);
label_2e7d48:
    // 0x2e7d48: 0xc0bb96a  jal         func_2EE5A8
label_2e7d4c:
    if (ctx->pc == 0x2E7D4Cu) {
        ctx->pc = 0x2E7D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D48u;
        // 0x2e7d4c: 0x34e700d2  ori         $a3, $a3, 0xD2 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)210);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7D50u;
        goto label_2e7d50;
    }
    ctx->pc = 0x2E7D48u;
    SET_GPR_U32(ctx, 31, 0x2E7D50u);
    ctx->pc = 0x2E7D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7D48u;
    // 0x2e7d4c: 0x34e700d2  ori         $a3, $a3, 0xD2 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)210);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E7D48u, 0x2E7D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7D50u;
label_2e7d50:
    // 0x2e7d50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e7d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e7d54:
    // 0x2e7d54: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7d58:
    if (ctx->pc == 0x2E7D58u) {
        ctx->pc = 0x2E7D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D54u;
        // 0x2e7d58: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7D5Cu;
        goto label_2e7d5c;
    }
    ctx->pc = 0x2E7D54u;
    {
        const bool branch_taken_0x2e7d54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7d54) {
            ctx->pc = 0x2E7D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7D54u;
            // 0x2e7d58: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7D70u;
            goto label_2e7d70;
        }
    }
    ctx->pc = 0x2E7D5Cu;
label_2e7d5c:
    // 0x2e7d5c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e7d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7d60:
    // 0x2e7d60: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e7d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e7d64:
    // 0x2e7d64: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7d68:
    if (ctx->pc == 0x2E7D68u) {
        ctx->pc = 0x2E7D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D64u;
        // 0x2e7d68: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7D6Cu;
        goto label_2e7d6c;
    }
    ctx->pc = 0x2E7D64u;
    {
        const bool branch_taken_0x2e7d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D64u;
        // 0x2e7d68: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d64) {
            ctx->pc = 0x2E7D7Cu;
            goto label_2e7d7c;
        }
    }
    ctx->pc = 0x2E7D6Cu;
label_2e7d6c:
    // 0x2e7d6c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e7d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e7d70:
    // 0x2e7d70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7d74:
    // 0x2e7d74: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e7d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e7d78:
    // 0x2e7d78: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e7d78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e7d7c:
    // 0x2e7d7c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e7d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e7d80:
    // 0x2e7d80: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2e7d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2e7d84:
    // 0x2e7d84: 0x34c6002f  ori         $a2, $a2, 0x2F
    ctx->pc = 0x2e7d84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)47);
label_2e7d88:
    // 0x2e7d88: 0xc0bb96a  jal         func_2EE5A8
label_2e7d8c:
    if (ctx->pc == 0x2E7D8Cu) {
        ctx->pc = 0x2E7D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D88u;
        // 0x2e7d8c: 0x34e700d1  ori         $a3, $a3, 0xD1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)209);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7D90u;
        goto label_2e7d90;
    }
    ctx->pc = 0x2E7D88u;
    SET_GPR_U32(ctx, 31, 0x2E7D90u);
    ctx->pc = 0x2E7D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7D88u;
    // 0x2e7d8c: 0x34e700d1  ori         $a3, $a3, 0xD1 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)209);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E7D88u, 0x2E7D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7D90u;
label_2e7d90:
    // 0x2e7d90: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e7d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e7d94:
    // 0x2e7d94: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7d98:
    if (ctx->pc == 0x2E7D98u) {
        ctx->pc = 0x2E7D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D94u;
        // 0x2e7d98: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7D9Cu;
        goto label_2e7d9c;
    }
    ctx->pc = 0x2E7D94u;
    {
        const bool branch_taken_0x2e7d94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7d94) {
            ctx->pc = 0x2E7D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7D94u;
            // 0x2e7d98: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7DB0u;
            goto label_2e7db0;
        }
    }
    ctx->pc = 0x2E7D9Cu;
label_2e7d9c:
    // 0x2e7d9c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e7d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7da0:
    // 0x2e7da0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e7da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e7da4:
    // 0x2e7da4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7da8:
    if (ctx->pc == 0x2E7DA8u) {
        ctx->pc = 0x2E7DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DA4u;
        // 0x2e7da8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7DACu;
        goto label_2e7dac;
    }
    ctx->pc = 0x2E7DA4u;
    {
        const bool branch_taken_0x2e7da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DA4u;
        // 0x2e7da8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7da4) {
            ctx->pc = 0x2E7DBCu;
            goto label_2e7dbc;
        }
    }
    ctx->pc = 0x2E7DACu;
label_2e7dac:
    // 0x2e7dac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e7dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e7db0:
    // 0x2e7db0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7db4:
    // 0x2e7db4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e7db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e7db8:
    // 0x2e7db8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e7db8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e7dbc:
    // 0x2e7dbc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e7dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e7dc0:
    // 0x2e7dc0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2e7dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e7dc4:
    // 0x2e7dc4: 0x34c60030  ori         $a2, $a2, 0x30
    ctx->pc = 0x2e7dc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48);
label_2e7dc8:
    // 0x2e7dc8: 0xc0bb96a  jal         func_2EE5A8
label_2e7dcc:
    if (ctx->pc == 0x2E7DCCu) {
        ctx->pc = 0x2E7DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DC8u;
        // 0x2e7dcc: 0x34e700d0  ori         $a3, $a3, 0xD0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)208);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7DD0u;
        goto label_2e7dd0;
    }
    ctx->pc = 0x2E7DC8u;
    SET_GPR_U32(ctx, 31, 0x2E7DD0u);
    ctx->pc = 0x2E7DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7DC8u;
    // 0x2e7dcc: 0x34e700d0  ori         $a3, $a3, 0xD0 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)208);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E7DC8u, 0x2E7DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7DD0u;
label_2e7dd0:
    // 0x2e7dd0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e7dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e7dd4:
    // 0x2e7dd4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7dd8:
    if (ctx->pc == 0x2E7DD8u) {
        ctx->pc = 0x2E7DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DD4u;
        // 0x2e7dd8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7DDCu;
        goto label_2e7ddc;
    }
    ctx->pc = 0x2E7DD4u;
    {
        const bool branch_taken_0x2e7dd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7dd4) {
            ctx->pc = 0x2E7DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7DD4u;
            // 0x2e7dd8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7DF0u;
            goto label_2e7df0;
        }
    }
    ctx->pc = 0x2E7DDCu;
label_2e7ddc:
    // 0x2e7ddc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e7ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7de0:
    // 0x2e7de0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e7de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e7de4:
    // 0x2e7de4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7de8:
    if (ctx->pc == 0x2E7DE8u) {
        ctx->pc = 0x2E7DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DE4u;
        // 0x2e7de8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7DECu;
        goto label_2e7dec;
    }
    ctx->pc = 0x2E7DE4u;
    {
        const bool branch_taken_0x2e7de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DE4u;
        // 0x2e7de8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7de4) {
            ctx->pc = 0x2E7DFCu;
            goto label_2e7dfc;
        }
    }
    ctx->pc = 0x2E7DECu;
label_2e7dec:
    // 0x2e7dec: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e7decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e7df0:
    // 0x2e7df0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7df4:
    // 0x2e7df4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e7df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e7df8:
    // 0x2e7df8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e7df8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e7dfc:
    // 0x2e7dfc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e7dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e7e00:
    // 0x2e7e00: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e7e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e7e04:
    // 0x2e7e04: 0x34c60031  ori         $a2, $a2, 0x31
    ctx->pc = 0x2e7e04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49);
label_2e7e08:
    // 0x2e7e08: 0xc0bb96a  jal         func_2EE5A8
label_2e7e0c:
    if (ctx->pc == 0x2E7E0Cu) {
        ctx->pc = 0x2E7E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E08u;
        // 0x2e7e0c: 0x34e700cf  ori         $a3, $a3, 0xCF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)207);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7E10u;
        goto label_2e7e10;
    }
    ctx->pc = 0x2E7E08u;
    SET_GPR_U32(ctx, 31, 0x2E7E10u);
    ctx->pc = 0x2E7E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7E08u;
    // 0x2e7e0c: 0x34e700cf  ori         $a3, $a3, 0xCF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)207);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E7E08u, 0x2E7E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7E10u;
label_2e7e10:
    // 0x2e7e10: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e7e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e7e14:
    // 0x2e7e14: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7e18:
    if (ctx->pc == 0x2E7E18u) {
        ctx->pc = 0x2E7E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E14u;
        // 0x2e7e18: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7E1Cu;
        goto label_2e7e1c;
    }
    ctx->pc = 0x2E7E14u;
    {
        const bool branch_taken_0x2e7e14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7e14) {
            ctx->pc = 0x2E7E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7E14u;
            // 0x2e7e18: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7E30u;
            goto label_2e7e30;
        }
    }
    ctx->pc = 0x2E7E1Cu;
label_2e7e1c:
    // 0x2e7e1c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e7e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7e20:
    // 0x2e7e20: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e7e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e7e24:
    // 0x2e7e24: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7e28:
    if (ctx->pc == 0x2E7E28u) {
        ctx->pc = 0x2E7E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E24u;
        // 0x2e7e28: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7E2Cu;
        goto label_2e7e2c;
    }
    ctx->pc = 0x2E7E24u;
    {
        const bool branch_taken_0x2e7e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E24u;
        // 0x2e7e28: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e24) {
            ctx->pc = 0x2E7E3Cu;
            goto label_2e7e3c;
        }
    }
    ctx->pc = 0x2E7E2Cu;
label_2e7e2c:
    // 0x2e7e2c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e7e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e7e30:
    // 0x2e7e30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7e34:
    // 0x2e7e34: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e7e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e7e38:
    // 0x2e7e38: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e7e38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e7e3c:
    // 0x2e7e3c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e7e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e7e40:
    // 0x2e7e40: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2e7e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2e7e44:
    // 0x2e7e44: 0x34c60032  ori         $a2, $a2, 0x32
    ctx->pc = 0x2e7e44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)50);
label_2e7e48:
    // 0x2e7e48: 0xc0bb96a  jal         func_2EE5A8
label_2e7e4c:
    if (ctx->pc == 0x2E7E4Cu) {
        ctx->pc = 0x2E7E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E48u;
        // 0x2e7e4c: 0x34e700ce  ori         $a3, $a3, 0xCE (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)206);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7E50u;
        goto label_2e7e50;
    }
    ctx->pc = 0x2E7E48u;
    SET_GPR_U32(ctx, 31, 0x2E7E50u);
    ctx->pc = 0x2E7E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7E48u;
    // 0x2e7e4c: 0x34e700ce  ori         $a3, $a3, 0xCE (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)206);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E7E48u, 0x2E7E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7E50u;
label_2e7e50:
    // 0x2e7e50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e7e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e7e54:
    // 0x2e7e54: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7e58:
    if (ctx->pc == 0x2E7E58u) {
        ctx->pc = 0x2E7E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E54u;
        // 0x2e7e58: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7E5Cu;
        goto label_2e7e5c;
    }
    ctx->pc = 0x2E7E54u;
    {
        const bool branch_taken_0x2e7e54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7e54) {
            ctx->pc = 0x2E7E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7E54u;
            // 0x2e7e58: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7E70u;
            goto label_2e7e70;
        }
    }
    ctx->pc = 0x2E7E5Cu;
label_2e7e5c:
    // 0x2e7e5c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e7e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7e60:
    // 0x2e7e60: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e7e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e7e64:
    // 0x2e7e64: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7e68:
    if (ctx->pc == 0x2E7E68u) {
        ctx->pc = 0x2E7E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E64u;
        // 0x2e7e68: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7E6Cu;
        goto label_2e7e6c;
    }
    ctx->pc = 0x2E7E64u;
    {
        const bool branch_taken_0x2e7e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E64u;
        // 0x2e7e68: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e64) {
            ctx->pc = 0x2E7E7Cu;
            goto label_2e7e7c;
        }
    }
    ctx->pc = 0x2E7E6Cu;
label_2e7e6c:
    // 0x2e7e6c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e7e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e7e70:
    // 0x2e7e70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7e74:
    // 0x2e7e74: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e7e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e7e78:
    // 0x2e7e78: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e7e78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e7e7c:
    // 0x2e7e7c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e7e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e7e80:
    // 0x2e7e80: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2e7e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2e7e84:
    // 0x2e7e84: 0x34c60033  ori         $a2, $a2, 0x33
    ctx->pc = 0x2e7e84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)51);
label_2e7e88:
    // 0x2e7e88: 0xc0bb96a  jal         func_2EE5A8
label_2e7e8c:
    if (ctx->pc == 0x2E7E8Cu) {
        ctx->pc = 0x2E7E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E88u;
        // 0x2e7e8c: 0x34e700cd  ori         $a3, $a3, 0xCD (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)205);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7E90u;
        goto label_2e7e90;
    }
    ctx->pc = 0x2E7E88u;
    SET_GPR_U32(ctx, 31, 0x2E7E90u);
    ctx->pc = 0x2E7E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7E88u;
    // 0x2e7e8c: 0x34e700cd  ori         $a3, $a3, 0xCD (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)205);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E7E88u, 0x2E7E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7E90u;
label_2e7e90:
    // 0x2e7e90: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e7e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e7e94:
    // 0x2e7e94: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7e98:
    if (ctx->pc == 0x2E7E98u) {
        ctx->pc = 0x2E7E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E94u;
        // 0x2e7e98: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7E9Cu;
        goto label_2e7e9c;
    }
    ctx->pc = 0x2E7E94u;
    {
        const bool branch_taken_0x2e7e94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7e94) {
            ctx->pc = 0x2E7E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7E94u;
            // 0x2e7e98: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7EB0u;
            goto label_2e7eb0;
        }
    }
    ctx->pc = 0x2E7E9Cu;
label_2e7e9c:
    // 0x2e7e9c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e7e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7ea0:
    // 0x2e7ea0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e7ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e7ea4:
    // 0x2e7ea4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7ea8:
    if (ctx->pc == 0x2E7EA8u) {
        ctx->pc = 0x2E7EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7EA4u;
        // 0x2e7ea8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7EACu;
        goto label_2e7eac;
    }
    ctx->pc = 0x2E7EA4u;
    {
        const bool branch_taken_0x2e7ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7EA4u;
        // 0x2e7ea8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ea4) {
            ctx->pc = 0x2E7EBCu;
            goto label_2e7ebc;
        }
    }
    ctx->pc = 0x2E7EACu;
label_2e7eac:
    // 0x2e7eac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e7eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e7eb0:
    // 0x2e7eb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7eb4:
    // 0x2e7eb4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e7eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e7eb8:
    // 0x2e7eb8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e7eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e7ebc:
    // 0x2e7ebc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e7ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e7ec0:
    // 0x2e7ec0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2e7ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2e7ec4:
    // 0x2e7ec4: 0x34c60034  ori         $a2, $a2, 0x34
    ctx->pc = 0x2e7ec4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52);
label_2e7ec8:
    // 0x2e7ec8: 0xc0bb96a  jal         func_2EE5A8
label_2e7ecc:
    if (ctx->pc == 0x2E7ECCu) {
        ctx->pc = 0x2E7ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7EC8u;
        // 0x2e7ecc: 0x34e700cc  ori         $a3, $a3, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)204);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7ED0u;
        goto label_2e7ed0;
    }
    ctx->pc = 0x2E7EC8u;
    SET_GPR_U32(ctx, 31, 0x2E7ED0u);
    ctx->pc = 0x2E7ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7EC8u;
    // 0x2e7ecc: 0x34e700cc  ori         $a3, $a3, 0xCC (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)204);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E7EC8u, 0x2E7ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7ED0u;
label_2e7ed0:
    // 0x2e7ed0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e7ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e7ed4:
    // 0x2e7ed4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7ed8:
    if (ctx->pc == 0x2E7ED8u) {
        ctx->pc = 0x2E7ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7ED4u;
        // 0x2e7ed8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7EDCu;
        goto label_2e7edc;
    }
    ctx->pc = 0x2E7ED4u;
    {
        const bool branch_taken_0x2e7ed4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7ed4) {
            ctx->pc = 0x2E7ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7ED4u;
            // 0x2e7ed8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7EF0u;
            goto label_2e7ef0;
        }
    }
    ctx->pc = 0x2E7EDCu;
label_2e7edc:
    // 0x2e7edc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e7edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7ee0:
    // 0x2e7ee0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e7ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e7ee4:
    // 0x2e7ee4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7ee8:
    if (ctx->pc == 0x2E7EE8u) {
        ctx->pc = 0x2E7EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7EE4u;
        // 0x2e7ee8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7EECu;
        goto label_2e7eec;
    }
    ctx->pc = 0x2E7EE4u;
    {
        const bool branch_taken_0x2e7ee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7EE4u;
        // 0x2e7ee8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ee4) {
            ctx->pc = 0x2E7EFCu;
            goto label_2e7efc;
        }
    }
    ctx->pc = 0x2E7EECu;
label_2e7eec:
    // 0x2e7eec: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e7eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e7ef0:
    // 0x2e7ef0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7ef4:
    // 0x2e7ef4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e7ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e7ef8:
    // 0x2e7ef8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e7ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e7efc:
    // 0x2e7efc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e7efcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e7f00:
    // 0x2e7f00: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2e7f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2e7f04:
    // 0x2e7f04: 0x34c60035  ori         $a2, $a2, 0x35
    ctx->pc = 0x2e7f04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53);
label_2e7f08:
    // 0x2e7f08: 0xc0bb96a  jal         func_2EE5A8
label_2e7f0c:
    if (ctx->pc == 0x2E7F0Cu) {
        ctx->pc = 0x2E7F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F08u;
        // 0x2e7f0c: 0x34e700cb  ori         $a3, $a3, 0xCB (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)203);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F10u;
        goto label_2e7f10;
    }
    ctx->pc = 0x2E7F08u;
    SET_GPR_U32(ctx, 31, 0x2E7F10u);
    ctx->pc = 0x2E7F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7F08u;
    // 0x2e7f0c: 0x34e700cb  ori         $a3, $a3, 0xCB (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)203);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E7F08u, 0x2E7F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7F10u;
label_2e7f10:
    // 0x2e7f10: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e7f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e7f14:
    // 0x2e7f14: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7f18:
    if (ctx->pc == 0x2E7F18u) {
        ctx->pc = 0x2E7F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F14u;
        // 0x2e7f18: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F1Cu;
        goto label_2e7f1c;
    }
    ctx->pc = 0x2E7F14u;
    {
        const bool branch_taken_0x2e7f14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7f14) {
            ctx->pc = 0x2E7F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7F14u;
            // 0x2e7f18: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7F30u;
            goto label_2e7f30;
        }
    }
    ctx->pc = 0x2E7F1Cu;
label_2e7f1c:
    // 0x2e7f1c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e7f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7f20:
    // 0x2e7f20: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e7f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e7f24:
    // 0x2e7f24: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7f28:
    if (ctx->pc == 0x2E7F28u) {
        ctx->pc = 0x2E7F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F24u;
        // 0x2e7f28: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F2Cu;
        goto label_2e7f2c;
    }
    ctx->pc = 0x2E7F24u;
    {
        const bool branch_taken_0x2e7f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F24u;
        // 0x2e7f28: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f24) {
            ctx->pc = 0x2E7F3Cu;
            goto label_2e7f3c;
        }
    }
    ctx->pc = 0x2E7F2Cu;
label_2e7f2c:
    // 0x2e7f2c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e7f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e7f30:
    // 0x2e7f30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7f34:
    // 0x2e7f34: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e7f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e7f38:
    // 0x2e7f38: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e7f38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e7f3c:
    // 0x2e7f3c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e7f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e7f40:
    // 0x2e7f40: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2e7f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2e7f44:
    // 0x2e7f44: 0x34c60036  ori         $a2, $a2, 0x36
    ctx->pc = 0x2e7f44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)54);
label_2e7f48:
    // 0x2e7f48: 0xc0bb96a  jal         func_2EE5A8
label_2e7f4c:
    if (ctx->pc == 0x2E7F4Cu) {
        ctx->pc = 0x2E7F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F48u;
        // 0x2e7f4c: 0x34e700ca  ori         $a3, $a3, 0xCA (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)202);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F50u;
        goto label_2e7f50;
    }
    ctx->pc = 0x2E7F48u;
    SET_GPR_U32(ctx, 31, 0x2E7F50u);
    ctx->pc = 0x2E7F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7F48u;
    // 0x2e7f4c: 0x34e700ca  ori         $a3, $a3, 0xCA (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)202);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E7F48u, 0x2E7F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7F50u;
label_2e7f50:
    // 0x2e7f50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e7f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e7f54:
    // 0x2e7f54: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7f58:
    if (ctx->pc == 0x2E7F58u) {
        ctx->pc = 0x2E7F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F54u;
        // 0x2e7f58: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F5Cu;
        goto label_2e7f5c;
    }
    ctx->pc = 0x2E7F54u;
    {
        const bool branch_taken_0x2e7f54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7f54) {
            ctx->pc = 0x2E7F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7F54u;
            // 0x2e7f58: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7F70u;
            goto label_2e7f70;
        }
    }
    ctx->pc = 0x2E7F5Cu;
label_2e7f5c:
    // 0x2e7f5c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e7f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7f60:
    // 0x2e7f60: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e7f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e7f64:
    // 0x2e7f64: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7f68:
    if (ctx->pc == 0x2E7F68u) {
        ctx->pc = 0x2E7F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F64u;
        // 0x2e7f68: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F6Cu;
        goto label_2e7f6c;
    }
    ctx->pc = 0x2E7F64u;
    {
        const bool branch_taken_0x2e7f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F64u;
        // 0x2e7f68: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f64) {
            ctx->pc = 0x2E7F7Cu;
            goto label_2e7f7c;
        }
    }
    ctx->pc = 0x2E7F6Cu;
label_2e7f6c:
    // 0x2e7f6c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e7f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e7f70:
    // 0x2e7f70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7f74:
    // 0x2e7f74: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e7f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e7f78:
    // 0x2e7f78: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e7f78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e7f7c:
    // 0x2e7f7c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e7f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e7f80:
    // 0x2e7f80: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2e7f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2e7f84:
    // 0x2e7f84: 0x34c60037  ori         $a2, $a2, 0x37
    ctx->pc = 0x2e7f84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55);
label_2e7f88:
    // 0x2e7f88: 0xc0bb96a  jal         func_2EE5A8
label_2e7f8c:
    if (ctx->pc == 0x2E7F8Cu) {
        ctx->pc = 0x2E7F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F88u;
        // 0x2e7f8c: 0x34e700c9  ori         $a3, $a3, 0xC9 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)201);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F90u;
        goto label_2e7f90;
    }
    ctx->pc = 0x2E7F88u;
    SET_GPR_U32(ctx, 31, 0x2E7F90u);
    ctx->pc = 0x2E7F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7F88u;
    // 0x2e7f8c: 0x34e700c9  ori         $a3, $a3, 0xC9 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E7F88u, 0x2E7F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7F90u;
label_2e7f90:
    // 0x2e7f90: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e7f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e7f94:
    // 0x2e7f94: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7f98:
    if (ctx->pc == 0x2E7F98u) {
        ctx->pc = 0x2E7F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F94u;
        // 0x2e7f98: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7F9Cu;
        goto label_2e7f9c;
    }
    ctx->pc = 0x2E7F94u;
    {
        const bool branch_taken_0x2e7f94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7f94) {
            ctx->pc = 0x2E7F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7F94u;
            // 0x2e7f98: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7FB0u;
            goto label_2e7fb0;
        }
    }
    ctx->pc = 0x2E7F9Cu;
label_2e7f9c:
    // 0x2e7f9c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e7f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7fa0:
    // 0x2e7fa0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e7fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e7fa4:
    // 0x2e7fa4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7fa8:
    if (ctx->pc == 0x2E7FA8u) {
        ctx->pc = 0x2E7FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FA4u;
        // 0x2e7fa8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7FACu;
        goto label_2e7fac;
    }
    ctx->pc = 0x2E7FA4u;
    {
        const bool branch_taken_0x2e7fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FA4u;
        // 0x2e7fa8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7fa4) {
            ctx->pc = 0x2E7FBCu;
            goto label_2e7fbc;
        }
    }
    ctx->pc = 0x2E7FACu;
label_2e7fac:
    // 0x2e7fac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e7facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e7fb0:
    // 0x2e7fb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7fb4:
    // 0x2e7fb4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e7fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e7fb8:
    // 0x2e7fb8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e7fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e7fbc:
    // 0x2e7fbc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e7fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e7fc0:
    // 0x2e7fc0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2e7fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2e7fc4:
    // 0x2e7fc4: 0x34c60038  ori         $a2, $a2, 0x38
    ctx->pc = 0x2e7fc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)56);
label_2e7fc8:
    // 0x2e7fc8: 0xc0bb96a  jal         func_2EE5A8
label_2e7fcc:
    if (ctx->pc == 0x2E7FCCu) {
        ctx->pc = 0x2E7FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FC8u;
        // 0x2e7fcc: 0x34e700c8  ori         $a3, $a3, 0xC8 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)200);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7FD0u;
        goto label_2e7fd0;
    }
    ctx->pc = 0x2E7FC8u;
    SET_GPR_U32(ctx, 31, 0x2E7FD0u);
    ctx->pc = 0x2E7FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7FC8u;
    // 0x2e7fcc: 0x34e700c8  ori         $a3, $a3, 0xC8 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)200);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E7FC8u, 0x2E7FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7FD0u;
label_2e7fd0:
    // 0x2e7fd0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e7fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e7fd4:
    // 0x2e7fd4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e7fd8:
    if (ctx->pc == 0x2E7FD8u) {
        ctx->pc = 0x2E7FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FD4u;
        // 0x2e7fd8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7FDCu;
        goto label_2e7fdc;
    }
    ctx->pc = 0x2E7FD4u;
    {
        const bool branch_taken_0x2e7fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7fd4) {
            ctx->pc = 0x2E7FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7FD4u;
            // 0x2e7fd8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7FF0u;
            goto label_2e7ff0;
        }
    }
    ctx->pc = 0x2E7FDCu;
label_2e7fdc:
    // 0x2e7fdc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e7fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e7fe0:
    // 0x2e7fe0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e7fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e7fe4:
    // 0x2e7fe4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e7fe8:
    if (ctx->pc == 0x2E7FE8u) {
        ctx->pc = 0x2E7FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FE4u;
        // 0x2e7fe8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7FECu;
        goto label_2e7fec;
    }
    ctx->pc = 0x2E7FE4u;
    {
        const bool branch_taken_0x2e7fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FE4u;
        // 0x2e7fe8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7fe4) {
            ctx->pc = 0x2E7FFCu;
            goto label_2e7ffc;
        }
    }
    ctx->pc = 0x2E7FECu;
label_2e7fec:
    // 0x2e7fec: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e7fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e7ff0:
    // 0x2e7ff0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7ff4:
    // 0x2e7ff4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e7ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e7ff8:
    // 0x2e7ff8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e7ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e7ffc:
    // 0x2e7ffc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e7ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e8000:
    // 0x2e8000: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2e8000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2e8004:
    // 0x2e8004: 0x34c60039  ori         $a2, $a2, 0x39
    ctx->pc = 0x2e8004u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)57);
label_2e8008:
    // 0x2e8008: 0xc0bb96a  jal         func_2EE5A8
label_2e800c:
    if (ctx->pc == 0x2E800Cu) {
        ctx->pc = 0x2E800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8008u;
        // 0x2e800c: 0x34e700c7  ori         $a3, $a3, 0xC7 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)199);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8010u;
        goto label_2e8010;
    }
    ctx->pc = 0x2E8008u;
    SET_GPR_U32(ctx, 31, 0x2E8010u);
    ctx->pc = 0x2E800Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8008u;
    // 0x2e800c: 0x34e700c7  ori         $a3, $a3, 0xC7 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)199);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E8008u, 0x2E8010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8010u;
label_2e8010:
    // 0x2e8010: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e8010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e8014:
    // 0x2e8014: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8018:
    if (ctx->pc == 0x2E8018u) {
        ctx->pc = 0x2E8018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8014u;
        // 0x2e8018: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E801Cu;
        goto label_2e801c;
    }
    ctx->pc = 0x2E8014u;
    {
        const bool branch_taken_0x2e8014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8014) {
            ctx->pc = 0x2E8018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8014u;
            // 0x2e8018: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8030u;
            goto label_2e8030;
        }
    }
    ctx->pc = 0x2E801Cu;
label_2e801c:
    // 0x2e801c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e801cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e8020:
    // 0x2e8020: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e8020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2e8024:
    // 0x2e8024: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e8028:
    if (ctx->pc == 0x2E8028u) {
        ctx->pc = 0x2E8028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8024u;
        // 0x2e8028: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E802Cu;
        goto label_2e802c;
    }
    ctx->pc = 0x2E8024u;
    {
        const bool branch_taken_0x2e8024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8024u;
        // 0x2e8028: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8024) {
            ctx->pc = 0x2E803Cu;
            goto label_2e803c;
        }
    }
    ctx->pc = 0x2E802Cu;
label_2e802c:
    // 0x2e802c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e802cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e8030:
    // 0x2e8030: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8034:
    // 0x2e8034: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e8034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e8038:
    // 0x2e8038: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e8038u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e803c:
    // 0x2e803c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e803cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e8040:
    // 0x2e8040: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e8040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8044:
    // 0x2e8044: 0x34c6003b  ori         $a2, $a2, 0x3B
    ctx->pc = 0x2e8044u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)59);
label_2e8048:
    // 0x2e8048: 0xc0bb96a  jal         func_2EE5A8
label_2e804c:
    if (ctx->pc == 0x2E804Cu) {
        ctx->pc = 0x2E804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8048u;
        // 0x2e804c: 0x34e700e6  ori         $a3, $a3, 0xE6 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)230);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8050u;
        goto label_2e8050;
    }
    ctx->pc = 0x2E8048u;
    SET_GPR_U32(ctx, 31, 0x2E8050u);
    ctx->pc = 0x2E804Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8048u;
    // 0x2e804c: 0x34e700e6  ori         $a3, $a3, 0xE6 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)230);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E8048u, 0x2E8050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8050u;
label_2e8050:
    // 0x2e8050: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e8050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e8054:
    // 0x2e8054: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8058:
    if (ctx->pc == 0x2E8058u) {
        ctx->pc = 0x2E8058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8054u;
        // 0x2e8058: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E805Cu;
        goto label_2e805c;
    }
    ctx->pc = 0x2E8054u;
    {
        const bool branch_taken_0x2e8054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8054) {
            ctx->pc = 0x2E8058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8054u;
            // 0x2e8058: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8070u;
            goto label_2e8070;
        }
    }
    ctx->pc = 0x2E805Cu;
label_2e805c:
    // 0x2e805c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e805cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e8060:
    // 0x2e8060: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e8060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2e8064:
    // 0x2e8064: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e8068:
    if (ctx->pc == 0x2E8068u) {
        ctx->pc = 0x2E8068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8064u;
        // 0x2e8068: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E806Cu;
        goto label_2e806c;
    }
    ctx->pc = 0x2E8064u;
    {
        const bool branch_taken_0x2e8064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8064u;
        // 0x2e8068: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8064) {
            ctx->pc = 0x2E807Cu;
            goto label_2e807c;
        }
    }
    ctx->pc = 0x2E806Cu;
label_2e806c:
    // 0x2e806c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e806cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e8070:
    // 0x2e8070: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8074:
    // 0x2e8074: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e8074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e8078:
    // 0x2e8078: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e8078u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e807c:
    // 0x2e807c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e807cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e8080:
    // 0x2e8080: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e8080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8084:
    // 0x2e8084: 0x34c6003c  ori         $a2, $a2, 0x3C
    ctx->pc = 0x2e8084u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)60);
label_2e8088:
    // 0x2e8088: 0xc0bb96a  jal         func_2EE5A8
label_2e808c:
    if (ctx->pc == 0x2E808Cu) {
        ctx->pc = 0x2E808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8088u;
        // 0x2e808c: 0x34e700e5  ori         $a3, $a3, 0xE5 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)229);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8090u;
        goto label_2e8090;
    }
    ctx->pc = 0x2E8088u;
    SET_GPR_U32(ctx, 31, 0x2E8090u);
    ctx->pc = 0x2E808Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8088u;
    // 0x2e808c: 0x34e700e5  ori         $a3, $a3, 0xE5 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)229);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E8088u, 0x2E8090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8090u;
label_2e8090:
    // 0x2e8090: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e8090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e8094:
    // 0x2e8094: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8098:
    if (ctx->pc == 0x2E8098u) {
        ctx->pc = 0x2E8098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8094u;
        // 0x2e8098: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E809Cu;
        goto label_2e809c;
    }
    ctx->pc = 0x2E8094u;
    {
        const bool branch_taken_0x2e8094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8094) {
            ctx->pc = 0x2E8098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8094u;
            // 0x2e8098: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E80B0u;
            goto label_2e80b0;
        }
    }
    ctx->pc = 0x2E809Cu;
label_2e809c:
    // 0x2e809c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e809cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e80a0:
    // 0x2e80a0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e80a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2e80a4:
    // 0x2e80a4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e80a8:
    if (ctx->pc == 0x2E80A8u) {
        ctx->pc = 0x2E80A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80A4u;
        // 0x2e80a8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E80ACu;
        goto label_2e80ac;
    }
    ctx->pc = 0x2E80A4u;
    {
        const bool branch_taken_0x2e80a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E80A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80A4u;
        // 0x2e80a8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e80a4) {
            ctx->pc = 0x2E80BCu;
            goto label_2e80bc;
        }
    }
    ctx->pc = 0x2E80ACu;
label_2e80ac:
    // 0x2e80ac: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e80acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e80b0:
    // 0x2e80b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e80b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e80b4:
    // 0x2e80b4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e80b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e80b8:
    // 0x2e80b8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e80b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e80bc:
    // 0x2e80bc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e80bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e80c0:
    // 0x2e80c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2e80c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e80c4:
    // 0x2e80c4: 0x34c6003d  ori         $a2, $a2, 0x3D
    ctx->pc = 0x2e80c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)61);
label_2e80c8:
    // 0x2e80c8: 0xc0bb96a  jal         func_2EE5A8
label_2e80cc:
    if (ctx->pc == 0x2E80CCu) {
        ctx->pc = 0x2E80CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80C8u;
        // 0x2e80cc: 0x34e700e4  ori         $a3, $a3, 0xE4 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)228);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E80D0u;
        goto label_2e80d0;
    }
    ctx->pc = 0x2E80C8u;
    SET_GPR_U32(ctx, 31, 0x2E80D0u);
    ctx->pc = 0x2E80CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E80C8u;
    // 0x2e80cc: 0x34e700e4  ori         $a3, $a3, 0xE4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)228);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E80C8u, 0x2E80D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E80D0u;
label_2e80d0:
    // 0x2e80d0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e80d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e80d4:
    // 0x2e80d4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e80d8:
    if (ctx->pc == 0x2E80D8u) {
        ctx->pc = 0x2E80D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80D4u;
        // 0x2e80d8: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E80DCu;
        goto label_2e80dc;
    }
    ctx->pc = 0x2E80D4u;
    {
        const bool branch_taken_0x2e80d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e80d4) {
            ctx->pc = 0x2E80D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E80D4u;
            // 0x2e80d8: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E80F0u;
            goto label_2e80f0;
        }
    }
    ctx->pc = 0x2E80DCu;
label_2e80dc:
    // 0x2e80dc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e80dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e80e0:
    // 0x2e80e0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e80e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2e80e4:
    // 0x2e80e4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e80e8:
    if (ctx->pc == 0x2E80E8u) {
        ctx->pc = 0x2E80E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80E4u;
        // 0x2e80e8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E80ECu;
        goto label_2e80ec;
    }
    ctx->pc = 0x2E80E4u;
    {
        const bool branch_taken_0x2e80e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E80E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80E4u;
        // 0x2e80e8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e80e4) {
            ctx->pc = 0x2E80FCu;
            goto label_2e80fc;
        }
    }
    ctx->pc = 0x2E80ECu;
label_2e80ec:
    // 0x2e80ec: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e80ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e80f0:
    // 0x2e80f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e80f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e80f4:
    // 0x2e80f4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e80f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e80f8:
    // 0x2e80f8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e80f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e80fc:
    // 0x2e80fc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e80fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e8100:
    // 0x2e8100: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2e8100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e8104:
    // 0x2e8104: 0x34c6003e  ori         $a2, $a2, 0x3E
    ctx->pc = 0x2e8104u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62);
label_2e8108:
    // 0x2e8108: 0xc0bb96a  jal         func_2EE5A8
label_2e810c:
    if (ctx->pc == 0x2E810Cu) {
        ctx->pc = 0x2E810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8108u;
        // 0x2e810c: 0x34e700e3  ori         $a3, $a3, 0xE3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)227);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8110u;
        goto label_2e8110;
    }
    ctx->pc = 0x2E8108u;
    SET_GPR_U32(ctx, 31, 0x2E8110u);
    ctx->pc = 0x2E810Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8108u;
    // 0x2e810c: 0x34e700e3  ori         $a3, $a3, 0xE3 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)227);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E8108u, 0x2E8110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8110u;
label_2e8110:
    // 0x2e8110: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e8110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e8114:
    // 0x2e8114: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8118:
    if (ctx->pc == 0x2E8118u) {
        ctx->pc = 0x2E8118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8114u;
        // 0x2e8118: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E811Cu;
        goto label_2e811c;
    }
    ctx->pc = 0x2E8114u;
    {
        const bool branch_taken_0x2e8114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8114) {
            ctx->pc = 0x2E8118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8114u;
            // 0x2e8118: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8130u;
            goto label_2e8130;
        }
    }
    ctx->pc = 0x2E811Cu;
label_2e811c:
    // 0x2e811c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e811cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e8120:
    // 0x2e8120: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e8120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2e8124:
    // 0x2e8124: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e8128:
    if (ctx->pc == 0x2E8128u) {
        ctx->pc = 0x2E8128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8124u;
        // 0x2e8128: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E812Cu;
        goto label_2e812c;
    }
    ctx->pc = 0x2E8124u;
    {
        const bool branch_taken_0x2e8124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8124u;
        // 0x2e8128: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8124) {
            ctx->pc = 0x2E813Cu;
            goto label_2e813c;
        }
    }
    ctx->pc = 0x2E812Cu;
label_2e812c:
    // 0x2e812c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e812cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e8130:
    // 0x2e8130: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8134:
    // 0x2e8134: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e8134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e8138:
    // 0x2e8138: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e8138u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e813c:
    // 0x2e813c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e813cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e8140:
    // 0x2e8140: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e8140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e8144:
    // 0x2e8144: 0x34c6003f  ori         $a2, $a2, 0x3F
    ctx->pc = 0x2e8144u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)63);
label_2e8148:
    // 0x2e8148: 0xc0bb96a  jal         func_2EE5A8
label_2e814c:
    if (ctx->pc == 0x2E814Cu) {
        ctx->pc = 0x2E814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8148u;
        // 0x2e814c: 0x34e700e2  ori         $a3, $a3, 0xE2 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)226);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8150u;
        goto label_2e8150;
    }
    ctx->pc = 0x2E8148u;
    SET_GPR_U32(ctx, 31, 0x2E8150u);
    ctx->pc = 0x2E814Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8148u;
    // 0x2e814c: 0x34e700e2  ori         $a3, $a3, 0xE2 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)226);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E8148u, 0x2E8150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8150u;
label_2e8150:
    // 0x2e8150: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e8150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e8154:
    // 0x2e8154: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8158:
    if (ctx->pc == 0x2E8158u) {
        ctx->pc = 0x2E8158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8154u;
        // 0x2e8158: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E815Cu;
        goto label_2e815c;
    }
    ctx->pc = 0x2E8154u;
    {
        const bool branch_taken_0x2e8154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8154) {
            ctx->pc = 0x2E8158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8154u;
            // 0x2e8158: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8170u;
            goto label_2e8170;
        }
    }
    ctx->pc = 0x2E815Cu;
label_2e815c:
    // 0x2e815c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e815cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e8160:
    // 0x2e8160: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e8160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2e8164:
    // 0x2e8164: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e8168:
    if (ctx->pc == 0x2E8168u) {
        ctx->pc = 0x2E8168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8164u;
        // 0x2e8168: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E816Cu;
        goto label_2e816c;
    }
    ctx->pc = 0x2E8164u;
    {
        const bool branch_taken_0x2e8164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8164u;
        // 0x2e8168: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8164) {
            ctx->pc = 0x2E817Cu;
            goto label_2e817c;
        }
    }
    ctx->pc = 0x2E816Cu;
label_2e816c:
    // 0x2e816c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e816cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e8170:
    // 0x2e8170: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8174:
    // 0x2e8174: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e8174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e8178:
    // 0x2e8178: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e8178u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e817c:
    // 0x2e817c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e817cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e8180:
    // 0x2e8180: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2e8180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2e8184:
    // 0x2e8184: 0x34c60040  ori         $a2, $a2, 0x40
    ctx->pc = 0x2e8184u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
label_2e8188:
    // 0x2e8188: 0xc0bb96a  jal         func_2EE5A8
label_2e818c:
    if (ctx->pc == 0x2E818Cu) {
        ctx->pc = 0x2E818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8188u;
        // 0x2e818c: 0x34e700e1  ori         $a3, $a3, 0xE1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)225);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8190u;
        goto label_2e8190;
    }
    ctx->pc = 0x2E8188u;
    SET_GPR_U32(ctx, 31, 0x2E8190u);
    ctx->pc = 0x2E818Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8188u;
    // 0x2e818c: 0x34e700e1  ori         $a3, $a3, 0xE1 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)225);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E8188u, 0x2E8190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8190u;
label_2e8190:
    // 0x2e8190: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e8190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e8194:
    // 0x2e8194: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8198:
    if (ctx->pc == 0x2E8198u) {
        ctx->pc = 0x2E8198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8194u;
        // 0x2e8198: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E819Cu;
        goto label_2e819c;
    }
    ctx->pc = 0x2E8194u;
    {
        const bool branch_taken_0x2e8194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8194) {
            ctx->pc = 0x2E8198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8194u;
            // 0x2e8198: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E81B0u;
            goto label_2e81b0;
        }
    }
    ctx->pc = 0x2E819Cu;
label_2e819c:
    // 0x2e819c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e819cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e81a0:
    // 0x2e81a0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e81a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2e81a4:
    // 0x2e81a4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e81a8:
    if (ctx->pc == 0x2E81A8u) {
        ctx->pc = 0x2E81A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81A4u;
        // 0x2e81a8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E81ACu;
        goto label_2e81ac;
    }
    ctx->pc = 0x2E81A4u;
    {
        const bool branch_taken_0x2e81a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E81A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81A4u;
        // 0x2e81a8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e81a4) {
            ctx->pc = 0x2E81BCu;
            goto label_2e81bc;
        }
    }
    ctx->pc = 0x2E81ACu;
label_2e81ac:
    // 0x2e81ac: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e81acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e81b0:
    // 0x2e81b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e81b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e81b4:
    // 0x2e81b4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e81b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e81b8:
    // 0x2e81b8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e81b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e81bc:
    // 0x2e81bc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e81bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e81c0:
    // 0x2e81c0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2e81c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e81c4:
    // 0x2e81c4: 0x34c60041  ori         $a2, $a2, 0x41
    ctx->pc = 0x2e81c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65);
label_2e81c8:
    // 0x2e81c8: 0xc0bb96a  jal         func_2EE5A8
label_2e81cc:
    if (ctx->pc == 0x2E81CCu) {
        ctx->pc = 0x2E81CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81C8u;
        // 0x2e81cc: 0x34e700e0  ori         $a3, $a3, 0xE0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)224);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E81D0u;
        goto label_2e81d0;
    }
    ctx->pc = 0x2E81C8u;
    SET_GPR_U32(ctx, 31, 0x2E81D0u);
    ctx->pc = 0x2E81CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E81C8u;
    // 0x2e81cc: 0x34e700e0  ori         $a3, $a3, 0xE0 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)224);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E81C8u, 0x2E81D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E81D0u;
label_2e81d0:
    // 0x2e81d0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e81d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e81d4:
    // 0x2e81d4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e81d8:
    if (ctx->pc == 0x2E81D8u) {
        ctx->pc = 0x2E81D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81D4u;
        // 0x2e81d8: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E81DCu;
        goto label_2e81dc;
    }
    ctx->pc = 0x2E81D4u;
    {
        const bool branch_taken_0x2e81d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e81d4) {
            ctx->pc = 0x2E81D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E81D4u;
            // 0x2e81d8: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E81F0u;
            goto label_2e81f0;
        }
    }
    ctx->pc = 0x2E81DCu;
label_2e81dc:
    // 0x2e81dc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e81dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e81e0:
    // 0x2e81e0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e81e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2e81e4:
    // 0x2e81e4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e81e8:
    if (ctx->pc == 0x2E81E8u) {
        ctx->pc = 0x2E81E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81E4u;
        // 0x2e81e8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E81ECu;
        goto label_2e81ec;
    }
    ctx->pc = 0x2E81E4u;
    {
        const bool branch_taken_0x2e81e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E81E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81E4u;
        // 0x2e81e8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e81e4) {
            ctx->pc = 0x2E81FCu;
            goto label_2e81fc;
        }
    }
    ctx->pc = 0x2E81ECu;
label_2e81ec:
    // 0x2e81ec: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e81ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e81f0:
    // 0x2e81f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e81f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e81f4:
    // 0x2e81f4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e81f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e81f8:
    // 0x2e81f8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e81f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e81fc:
    // 0x2e81fc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e81fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e8200:
    // 0x2e8200: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e8200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e8204:
    // 0x2e8204: 0x34c60042  ori         $a2, $a2, 0x42
    ctx->pc = 0x2e8204u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)66);
label_2e8208:
    // 0x2e8208: 0xc0bb96a  jal         func_2EE5A8
label_2e820c:
    if (ctx->pc == 0x2E820Cu) {
        ctx->pc = 0x2E820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8208u;
        // 0x2e820c: 0x34e700df  ori         $a3, $a3, 0xDF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)223);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8210u;
        goto label_2e8210;
    }
    ctx->pc = 0x2E8208u;
    SET_GPR_U32(ctx, 31, 0x2E8210u);
    ctx->pc = 0x2E820Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8208u;
    // 0x2e820c: 0x34e700df  ori         $a3, $a3, 0xDF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)223);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E8208u, 0x2E8210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8210u;
label_2e8210:
    // 0x2e8210: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e8210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e8214:
    // 0x2e8214: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8218:
    if (ctx->pc == 0x2E8218u) {
        ctx->pc = 0x2E8218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8214u;
        // 0x2e8218: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E821Cu;
        goto label_2e821c;
    }
    ctx->pc = 0x2E8214u;
    {
        const bool branch_taken_0x2e8214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8214) {
            ctx->pc = 0x2E8218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8214u;
            // 0x2e8218: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8230u;
            goto label_2e8230;
        }
    }
    ctx->pc = 0x2E821Cu;
label_2e821c:
    // 0x2e821c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e821cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e8220:
    // 0x2e8220: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e8220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2e8224:
    // 0x2e8224: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e8228:
    if (ctx->pc == 0x2E8228u) {
        ctx->pc = 0x2E8228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8224u;
        // 0x2e8228: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E822Cu;
        goto label_2e822c;
    }
    ctx->pc = 0x2E8224u;
    {
        const bool branch_taken_0x2e8224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8224u;
        // 0x2e8228: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8224) {
            ctx->pc = 0x2E823Cu;
            goto label_2e823c;
        }
    }
    ctx->pc = 0x2E822Cu;
label_2e822c:
    // 0x2e822c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e822cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e8230:
    // 0x2e8230: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8234:
    // 0x2e8234: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e8234u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e8238:
    // 0x2e8238: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e8238u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e823c:
    // 0x2e823c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e823cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e8240:
    // 0x2e8240: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2e8240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2e8244:
    // 0x2e8244: 0x34c60043  ori         $a2, $a2, 0x43
    ctx->pc = 0x2e8244u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)67);
label_2e8248:
    // 0x2e8248: 0xc0bb96a  jal         func_2EE5A8
label_2e824c:
    if (ctx->pc == 0x2E824Cu) {
        ctx->pc = 0x2E824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8248u;
        // 0x2e824c: 0x34e700de  ori         $a3, $a3, 0xDE (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)222);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8250u;
        goto label_2e8250;
    }
    ctx->pc = 0x2E8248u;
    SET_GPR_U32(ctx, 31, 0x2E8250u);
    ctx->pc = 0x2E824Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8248u;
    // 0x2e824c: 0x34e700de  ori         $a3, $a3, 0xDE (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)222);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E8248u, 0x2E8250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8250u;
label_2e8250:
    // 0x2e8250: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e8250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e8254:
    // 0x2e8254: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8258:
    if (ctx->pc == 0x2E8258u) {
        ctx->pc = 0x2E8258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8254u;
        // 0x2e8258: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E825Cu;
        goto label_2e825c;
    }
    ctx->pc = 0x2E8254u;
    {
        const bool branch_taken_0x2e8254 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8254) {
            ctx->pc = 0x2E8258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8254u;
            // 0x2e8258: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8270u;
            goto label_2e8270;
        }
    }
    ctx->pc = 0x2E825Cu;
label_2e825c:
    // 0x2e825c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e825cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e8260:
    // 0x2e8260: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e8260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2e8264:
    // 0x2e8264: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e8268:
    if (ctx->pc == 0x2E8268u) {
        ctx->pc = 0x2E8268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8264u;
        // 0x2e8268: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E826Cu;
        goto label_2e826c;
    }
    ctx->pc = 0x2E8264u;
    {
        const bool branch_taken_0x2e8264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8264u;
        // 0x2e8268: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8264) {
            ctx->pc = 0x2E827Cu;
            goto label_2e827c;
        }
    }
    ctx->pc = 0x2E826Cu;
label_2e826c:
    // 0x2e826c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e826cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e8270:
    // 0x2e8270: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8274:
    // 0x2e8274: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e8274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e8278:
    // 0x2e8278: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e8278u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e827c:
    // 0x2e827c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e827cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e8280:
    // 0x2e8280: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2e8280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2e8284:
    // 0x2e8284: 0x34c60044  ori         $a2, $a2, 0x44
    ctx->pc = 0x2e8284u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)68);
label_2e8288:
    // 0x2e8288: 0xc0bb96a  jal         func_2EE5A8
label_2e828c:
    if (ctx->pc == 0x2E828Cu) {
        ctx->pc = 0x2E828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8288u;
        // 0x2e828c: 0x34e700dd  ori         $a3, $a3, 0xDD (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)221);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8290u;
        goto label_2e8290;
    }
    ctx->pc = 0x2E8288u;
    SET_GPR_U32(ctx, 31, 0x2E8290u);
    ctx->pc = 0x2E828Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8288u;
    // 0x2e828c: 0x34e700dd  ori         $a3, $a3, 0xDD (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)221);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E8288u, 0x2E8290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8290u;
label_2e8290:
    // 0x2e8290: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e8290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e8294:
    // 0x2e8294: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8298:
    if (ctx->pc == 0x2E8298u) {
        ctx->pc = 0x2E8298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8294u;
        // 0x2e8298: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E829Cu;
        goto label_2e829c;
    }
    ctx->pc = 0x2E8294u;
    {
        const bool branch_taken_0x2e8294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8294) {
            ctx->pc = 0x2E8298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8294u;
            // 0x2e8298: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E82B0u;
            goto label_2e82b0;
        }
    }
    ctx->pc = 0x2E829Cu;
label_2e829c:
    // 0x2e829c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e829cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e82a0:
    // 0x2e82a0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e82a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2e82a4:
    // 0x2e82a4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e82a8:
    if (ctx->pc == 0x2E82A8u) {
        ctx->pc = 0x2E82A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E82A4u;
        // 0x2e82a8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E82ACu;
        goto label_2e82ac;
    }
    ctx->pc = 0x2E82A4u;
    {
        const bool branch_taken_0x2e82a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E82A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E82A4u;
        // 0x2e82a8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e82a4) {
            ctx->pc = 0x2E82BCu;
            goto label_2e82bc;
        }
    }
    ctx->pc = 0x2E82ACu;
label_2e82ac:
    // 0x2e82ac: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e82acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e82b0:
    // 0x2e82b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e82b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e82b4:
    // 0x2e82b4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e82b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e82b8:
    // 0x2e82b8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e82b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e82bc:
    // 0x2e82bc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e82bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e82c0:
    // 0x2e82c0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2e82c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2e82c4:
    // 0x2e82c4: 0x34c60045  ori         $a2, $a2, 0x45
    ctx->pc = 0x2e82c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)69);
label_2e82c8:
    // 0x2e82c8: 0xc0bb96a  jal         func_2EE5A8
label_2e82cc:
    if (ctx->pc == 0x2E82CCu) {
        ctx->pc = 0x2E82CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E82C8u;
        // 0x2e82cc: 0x34e700dc  ori         $a3, $a3, 0xDC (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)220);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E82D0u;
        goto label_2e82d0;
    }
    ctx->pc = 0x2E82C8u;
    SET_GPR_U32(ctx, 31, 0x2E82D0u);
    ctx->pc = 0x2E82CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E82C8u;
    // 0x2e82cc: 0x34e700dc  ori         $a3, $a3, 0xDC (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)220);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E82C8u, 0x2E82D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E82D0u;
label_2e82d0:
    // 0x2e82d0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e82d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e82d4:
    // 0x2e82d4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e82d8:
    if (ctx->pc == 0x2E82D8u) {
        ctx->pc = 0x2E82D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E82D4u;
        // 0x2e82d8: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E82DCu;
        goto label_2e82dc;
    }
    ctx->pc = 0x2E82D4u;
    {
        const bool branch_taken_0x2e82d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e82d4) {
            ctx->pc = 0x2E82D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E82D4u;
            // 0x2e82d8: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E82F0u;
            goto label_2e82f0;
        }
    }
    ctx->pc = 0x2E82DCu;
label_2e82dc:
    // 0x2e82dc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e82dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e82e0:
    // 0x2e82e0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e82e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2e82e4:
    // 0x2e82e4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e82e8:
    if (ctx->pc == 0x2E82E8u) {
        ctx->pc = 0x2E82E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E82E4u;
        // 0x2e82e8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E82ECu;
        goto label_2e82ec;
    }
    ctx->pc = 0x2E82E4u;
    {
        const bool branch_taken_0x2e82e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E82E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E82E4u;
        // 0x2e82e8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e82e4) {
            ctx->pc = 0x2E82FCu;
            goto label_2e82fc;
        }
    }
    ctx->pc = 0x2E82ECu;
label_2e82ec:
    // 0x2e82ec: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e82ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e82f0:
    // 0x2e82f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e82f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e82f4:
    // 0x2e82f4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e82f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e82f8:
    // 0x2e82f8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e82f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e82fc:
    // 0x2e82fc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e82fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e8300:
    // 0x2e8300: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2e8300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2e8304:
    // 0x2e8304: 0x34c60046  ori         $a2, $a2, 0x46
    ctx->pc = 0x2e8304u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)70);
label_2e8308:
    // 0x2e8308: 0xc0bb96a  jal         func_2EE5A8
label_2e830c:
    if (ctx->pc == 0x2E830Cu) {
        ctx->pc = 0x2E830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8308u;
        // 0x2e830c: 0x34e700db  ori         $a3, $a3, 0xDB (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)219);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8310u;
        goto label_2e8310;
    }
    ctx->pc = 0x2E8308u;
    SET_GPR_U32(ctx, 31, 0x2E8310u);
    ctx->pc = 0x2E830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8308u;
    // 0x2e830c: 0x34e700db  ori         $a3, $a3, 0xDB (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)219);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E8308u, 0x2E8310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8310u;
label_2e8310:
    // 0x2e8310: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e8310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e8314:
    // 0x2e8314: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8318:
    if (ctx->pc == 0x2E8318u) {
        ctx->pc = 0x2E8318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8314u;
        // 0x2e8318: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E831Cu;
        goto label_2e831c;
    }
    ctx->pc = 0x2E8314u;
    {
        const bool branch_taken_0x2e8314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8314) {
            ctx->pc = 0x2E8318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8314u;
            // 0x2e8318: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8330u;
            goto label_2e8330;
        }
    }
    ctx->pc = 0x2E831Cu;
label_2e831c:
    // 0x2e831c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e831cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e8320:
    // 0x2e8320: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e8320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2e8324:
    // 0x2e8324: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e8328:
    if (ctx->pc == 0x2E8328u) {
        ctx->pc = 0x2E8328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8324u;
        // 0x2e8328: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E832Cu;
        goto label_2e832c;
    }
    ctx->pc = 0x2E8324u;
    {
        const bool branch_taken_0x2e8324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8324u;
        // 0x2e8328: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8324) {
            ctx->pc = 0x2E833Cu;
            goto label_2e833c;
        }
    }
    ctx->pc = 0x2E832Cu;
label_2e832c:
    // 0x2e832c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e832cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e8330:
    // 0x2e8330: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8334:
    // 0x2e8334: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e8334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e8338:
    // 0x2e8338: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e8338u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e833c:
    // 0x2e833c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e833cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e8340:
    // 0x2e8340: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2e8340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2e8344:
    // 0x2e8344: 0x34c60047  ori         $a2, $a2, 0x47
    ctx->pc = 0x2e8344u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)71);
label_2e8348:
    // 0x2e8348: 0xc0bb96a  jal         func_2EE5A8
label_2e834c:
    if (ctx->pc == 0x2E834Cu) {
        ctx->pc = 0x2E834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8348u;
        // 0x2e834c: 0x34e700da  ori         $a3, $a3, 0xDA (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)218);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8350u;
        goto label_2e8350;
    }
    ctx->pc = 0x2E8348u;
    SET_GPR_U32(ctx, 31, 0x2E8350u);
    ctx->pc = 0x2E834Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8348u;
    // 0x2e834c: 0x34e700da  ori         $a3, $a3, 0xDA (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)218);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E8348u, 0x2E8350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8350u;
label_2e8350:
    // 0x2e8350: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e8350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e8354:
    // 0x2e8354: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8358:
    if (ctx->pc == 0x2E8358u) {
        ctx->pc = 0x2E8358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8354u;
        // 0x2e8358: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E835Cu;
        goto label_2e835c;
    }
    ctx->pc = 0x2E8354u;
    {
        const bool branch_taken_0x2e8354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8354) {
            ctx->pc = 0x2E8358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8354u;
            // 0x2e8358: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8370u;
            goto label_2e8370;
        }
    }
    ctx->pc = 0x2E835Cu;
label_2e835c:
    // 0x2e835c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e835cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e8360:
    // 0x2e8360: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e8360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2e8364:
    // 0x2e8364: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e8368:
    if (ctx->pc == 0x2E8368u) {
        ctx->pc = 0x2E8368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8364u;
        // 0x2e8368: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E836Cu;
        goto label_2e836c;
    }
    ctx->pc = 0x2E8364u;
    {
        const bool branch_taken_0x2e8364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8364u;
        // 0x2e8368: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8364) {
            ctx->pc = 0x2E837Cu;
            goto label_2e837c;
        }
    }
    ctx->pc = 0x2E836Cu;
label_2e836c:
    // 0x2e836c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e836cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e8370:
    // 0x2e8370: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8374:
    // 0x2e8374: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e8374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e8378:
    // 0x2e8378: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e8378u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e837c:
    // 0x2e837c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e837cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e8380:
    // 0x2e8380: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2e8380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2e8384:
    // 0x2e8384: 0x34c60048  ori         $a2, $a2, 0x48
    ctx->pc = 0x2e8384u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)72);
label_2e8388:
    // 0x2e8388: 0xc0bb96a  jal         func_2EE5A8
label_2e838c:
    if (ctx->pc == 0x2E838Cu) {
        ctx->pc = 0x2E838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8388u;
        // 0x2e838c: 0x34e700d9  ori         $a3, $a3, 0xD9 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)217);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8390u;
        goto label_2e8390;
    }
    ctx->pc = 0x2E8388u;
    SET_GPR_U32(ctx, 31, 0x2E8390u);
    ctx->pc = 0x2E838Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8388u;
    // 0x2e838c: 0x34e700d9  ori         $a3, $a3, 0xD9 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)217);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E8388u, 0x2E8390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8390u;
label_2e8390:
    // 0x2e8390: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e8390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e8394:
    // 0x2e8394: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8398:
    if (ctx->pc == 0x2E8398u) {
        ctx->pc = 0x2E8398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8394u;
        // 0x2e8398: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E839Cu;
        goto label_2e839c;
    }
    ctx->pc = 0x2E8394u;
    {
        const bool branch_taken_0x2e8394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8394) {
            ctx->pc = 0x2E8398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8394u;
            // 0x2e8398: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E83B0u;
            goto label_2e83b0;
        }
    }
    ctx->pc = 0x2E839Cu;
label_2e839c:
    // 0x2e839c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e839cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e83a0:
    // 0x2e83a0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e83a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2e83a4:
    // 0x2e83a4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e83a8:
    if (ctx->pc == 0x2E83A8u) {
        ctx->pc = 0x2E83A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83A4u;
        // 0x2e83a8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E83ACu;
        goto label_2e83ac;
    }
    ctx->pc = 0x2E83A4u;
    {
        const bool branch_taken_0x2e83a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E83A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83A4u;
        // 0x2e83a8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e83a4) {
            ctx->pc = 0x2E83BCu;
            goto label_2e83bc;
        }
    }
    ctx->pc = 0x2E83ACu;
label_2e83ac:
    // 0x2e83ac: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e83acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e83b0:
    // 0x2e83b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e83b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e83b4:
    // 0x2e83b4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e83b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e83b8:
    // 0x2e83b8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e83b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e83bc:
    // 0x2e83bc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e83bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e83c0:
    // 0x2e83c0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2e83c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2e83c4:
    // 0x2e83c4: 0x34c60049  ori         $a2, $a2, 0x49
    ctx->pc = 0x2e83c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)73);
label_2e83c8:
    // 0x2e83c8: 0xc0bb96a  jal         func_2EE5A8
label_2e83cc:
    if (ctx->pc == 0x2E83CCu) {
        ctx->pc = 0x2E83CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83C8u;
        // 0x2e83cc: 0x34e700d8  ori         $a3, $a3, 0xD8 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)216);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E83D0u;
        goto label_2e83d0;
    }
    ctx->pc = 0x2E83C8u;
    SET_GPR_U32(ctx, 31, 0x2E83D0u);
    ctx->pc = 0x2E83CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E83C8u;
    // 0x2e83cc: 0x34e700d8  ori         $a3, $a3, 0xD8 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)216);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E83C8u, 0x2E83D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E83D0u;
label_2e83d0:
    // 0x2e83d0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e83d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e83d4:
    // 0x2e83d4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e83d8:
    if (ctx->pc == 0x2E83D8u) {
        ctx->pc = 0x2E83D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83D4u;
        // 0x2e83d8: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E83DCu;
        goto label_2e83dc;
    }
    ctx->pc = 0x2E83D4u;
    {
        const bool branch_taken_0x2e83d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e83d4) {
            ctx->pc = 0x2E83D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E83D4u;
            // 0x2e83d8: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E83F0u;
            goto label_2e83f0;
        }
    }
    ctx->pc = 0x2E83DCu;
label_2e83dc:
    // 0x2e83dc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e83dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e83e0:
    // 0x2e83e0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e83e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2e83e4:
    // 0x2e83e4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e83e8:
    if (ctx->pc == 0x2E83E8u) {
        ctx->pc = 0x2E83E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83E4u;
        // 0x2e83e8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E83ECu;
        goto label_2e83ec;
    }
    ctx->pc = 0x2E83E4u;
    {
        const bool branch_taken_0x2e83e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E83E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83E4u;
        // 0x2e83e8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e83e4) {
            ctx->pc = 0x2E83FCu;
            goto label_2e83fc;
        }
    }
    ctx->pc = 0x2E83ECu;
label_2e83ec:
    // 0x2e83ec: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e83ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e83f0:
    // 0x2e83f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e83f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e83f4:
    // 0x2e83f4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e83f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e83f8:
    // 0x2e83f8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e83f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e83fc:
    // 0x2e83fc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e83fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e8400:
    // 0x2e8400: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2e8400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2e8404:
    // 0x2e8404: 0x34c6004a  ori         $a2, $a2, 0x4A
    ctx->pc = 0x2e8404u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)74);
label_2e8408:
    // 0x2e8408: 0xc0bb96a  jal         func_2EE5A8
label_2e840c:
    if (ctx->pc == 0x2E840Cu) {
        ctx->pc = 0x2E840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8408u;
        // 0x2e840c: 0x34e700d7  ori         $a3, $a3, 0xD7 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)215);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8410u;
        goto label_2e8410;
    }
    ctx->pc = 0x2E8408u;
    SET_GPR_U32(ctx, 31, 0x2E8410u);
    ctx->pc = 0x2E840Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8408u;
    // 0x2e840c: 0x34e700d7  ori         $a3, $a3, 0xD7 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)215);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E8408u, 0x2E8410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8410u;
label_2e8410:
    // 0x2e8410: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e8410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e8414:
    // 0x2e8414: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8418:
    if (ctx->pc == 0x2E8418u) {
        ctx->pc = 0x2E8418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8414u;
        // 0x2e8418: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E841Cu;
        goto label_2e841c;
    }
    ctx->pc = 0x2E8414u;
    {
        const bool branch_taken_0x2e8414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8414) {
            ctx->pc = 0x2E8418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8414u;
            // 0x2e8418: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8430u;
            goto label_2e8430;
        }
    }
    ctx->pc = 0x2E841Cu;
label_2e841c:
    // 0x2e841c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e841cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e8420:
    // 0x2e8420: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e8420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e8424:
    // 0x2e8424: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e8428:
    if (ctx->pc == 0x2E8428u) {
        ctx->pc = 0x2E8428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8424u;
        // 0x2e8428: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E842Cu;
        goto label_2e842c;
    }
    ctx->pc = 0x2E8424u;
    {
        const bool branch_taken_0x2e8424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8424u;
        // 0x2e8428: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8424) {
            ctx->pc = 0x2E843Cu;
            goto label_2e843c;
        }
    }
    ctx->pc = 0x2E842Cu;
label_2e842c:
    // 0x2e842c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2e842cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2e8430:
    // 0x2e8430: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8434:
    // 0x2e8434: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2e8434u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2e8438:
    // 0x2e8438: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e8438u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e843c:
    // 0x2e843c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e843cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e8440:
    // 0x2e8440: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e8440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8444:
    // 0x2e8444: 0x34c6004c  ori         $a2, $a2, 0x4C
    ctx->pc = 0x2e8444u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)76);
label_2e8448:
    // 0x2e8448: 0xc0bb96a  jal         func_2EE5A8
label_2e844c:
    if (ctx->pc == 0x2E844Cu) {
        ctx->pc = 0x2E844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8448u;
        // 0x2e844c: 0x34e700f6  ori         $a3, $a3, 0xF6 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)246);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8450u;
        goto label_2e8450;
    }
    ctx->pc = 0x2E8448u;
    SET_GPR_U32(ctx, 31, 0x2E8450u);
    ctx->pc = 0x2E844Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8448u;
    // 0x2e844c: 0x34e700f6  ori         $a3, $a3, 0xF6 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)246);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E8448u, 0x2E8450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8450u;
label_2e8450:
    // 0x2e8450: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e8450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e8454:
    // 0x2e8454: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8458:
    if (ctx->pc == 0x2E8458u) {
        ctx->pc = 0x2E8458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8454u;
        // 0x2e8458: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E845Cu;
        goto label_2e845c;
    }
    ctx->pc = 0x2E8454u;
    {
        const bool branch_taken_0x2e8454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8454) {
            ctx->pc = 0x2E8458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8454u;
            // 0x2e8458: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8470u;
            goto label_2e8470;
        }
    }
    ctx->pc = 0x2E845Cu;
label_2e845c:
    // 0x2e845c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e845cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e8460:
    // 0x2e8460: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e8460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e8464:
    // 0x2e8464: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e8468:
    if (ctx->pc == 0x2E8468u) {
        ctx->pc = 0x2E8468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8464u;
        // 0x2e8468: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E846Cu;
        goto label_2e846c;
    }
    ctx->pc = 0x2E8464u;
    {
        const bool branch_taken_0x2e8464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8464u;
        // 0x2e8468: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8464) {
            ctx->pc = 0x2E847Cu;
            goto label_2e847c;
        }
    }
    ctx->pc = 0x2E846Cu;
label_2e846c:
    // 0x2e846c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2e846cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2e8470:
    // 0x2e8470: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8474:
    // 0x2e8474: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2e8474u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2e8478:
    // 0x2e8478: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e8478u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e847c:
    // 0x2e847c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e847cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e8480:
    // 0x2e8480: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e8480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8484:
    // 0x2e8484: 0x34c6004d  ori         $a2, $a2, 0x4D
    ctx->pc = 0x2e8484u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)77);
label_2e8488:
    // 0x2e8488: 0xc0bb96a  jal         func_2EE5A8
label_2e848c:
    if (ctx->pc == 0x2E848Cu) {
        ctx->pc = 0x2E848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8488u;
        // 0x2e848c: 0x34e700f5  ori         $a3, $a3, 0xF5 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)245);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8490u;
        goto label_2e8490;
    }
    ctx->pc = 0x2E8488u;
    SET_GPR_U32(ctx, 31, 0x2E8490u);
    ctx->pc = 0x2E848Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8488u;
    // 0x2e848c: 0x34e700f5  ori         $a3, $a3, 0xF5 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)245);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E8488u, 0x2E8490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8490u;
label_2e8490:
    // 0x2e8490: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e8490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e8494:
    // 0x2e8494: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8498:
    if (ctx->pc == 0x2E8498u) {
        ctx->pc = 0x2E8498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8494u;
        // 0x2e8498: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E849Cu;
        goto label_2e849c;
    }
    ctx->pc = 0x2E8494u;
    {
        const bool branch_taken_0x2e8494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8494) {
            ctx->pc = 0x2E8498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8494u;
            // 0x2e8498: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E84B0u;
            goto label_2e84b0;
        }
    }
    ctx->pc = 0x2E849Cu;
label_2e849c:
    // 0x2e849c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e849cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e84a0:
    // 0x2e84a0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e84a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e84a4:
    // 0x2e84a4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e84a8:
    if (ctx->pc == 0x2E84A8u) {
        ctx->pc = 0x2E84A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E84A4u;
        // 0x2e84a8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E84ACu;
        goto label_2e84ac;
    }
    ctx->pc = 0x2E84A4u;
    {
        const bool branch_taken_0x2e84a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E84A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E84A4u;
        // 0x2e84a8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e84a4) {
            ctx->pc = 0x2E84BCu;
            goto label_2e84bc;
        }
    }
    ctx->pc = 0x2E84ACu;
label_2e84ac:
    // 0x2e84ac: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2e84acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2e84b0:
    // 0x2e84b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e84b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e84b4:
    // 0x2e84b4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2e84b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2e84b8:
    // 0x2e84b8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e84b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e84bc:
    // 0x2e84bc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e84bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e84c0:
    // 0x2e84c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2e84c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e84c4:
    // 0x2e84c4: 0x34c6004e  ori         $a2, $a2, 0x4E
    ctx->pc = 0x2e84c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)78);
label_2e84c8:
    // 0x2e84c8: 0xc0bb96a  jal         func_2EE5A8
label_2e84cc:
    if (ctx->pc == 0x2E84CCu) {
        ctx->pc = 0x2E84CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E84C8u;
        // 0x2e84cc: 0x34e700f4  ori         $a3, $a3, 0xF4 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)244);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E84D0u;
        goto label_2e84d0;
    }
    ctx->pc = 0x2E84C8u;
    SET_GPR_U32(ctx, 31, 0x2E84D0u);
    ctx->pc = 0x2E84CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E84C8u;
    // 0x2e84cc: 0x34e700f4  ori         $a3, $a3, 0xF4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)244);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E84C8u, 0x2E84D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E84D0u;
label_2e84d0:
    // 0x2e84d0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e84d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e84d4:
    // 0x2e84d4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e84d8:
    if (ctx->pc == 0x2E84D8u) {
        ctx->pc = 0x2E84D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E84D4u;
        // 0x2e84d8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E84DCu;
        goto label_2e84dc;
    }
    ctx->pc = 0x2E84D4u;
    {
        const bool branch_taken_0x2e84d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e84d4) {
            ctx->pc = 0x2E84D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E84D4u;
            // 0x2e84d8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E84F0u;
            goto label_2e84f0;
        }
    }
    ctx->pc = 0x2E84DCu;
label_2e84dc:
    // 0x2e84dc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e84dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e84e0:
    // 0x2e84e0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e84e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e84e4:
    // 0x2e84e4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e84e8:
    if (ctx->pc == 0x2E84E8u) {
        ctx->pc = 0x2E84E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E84E4u;
        // 0x2e84e8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E84ECu;
        goto label_2e84ec;
    }
    ctx->pc = 0x2E84E4u;
    {
        const bool branch_taken_0x2e84e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E84E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E84E4u;
        // 0x2e84e8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e84e4) {
            ctx->pc = 0x2E84FCu;
            goto label_2e84fc;
        }
    }
    ctx->pc = 0x2E84ECu;
label_2e84ec:
    // 0x2e84ec: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2e84ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2e84f0:
    // 0x2e84f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e84f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e84f4:
    // 0x2e84f4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2e84f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2e84f8:
    // 0x2e84f8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e84f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e84fc:
    // 0x2e84fc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e84fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e8500:
    // 0x2e8500: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2e8500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e8504:
    // 0x2e8504: 0x34c6004f  ori         $a2, $a2, 0x4F
    ctx->pc = 0x2e8504u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)79);
label_2e8508:
    // 0x2e8508: 0xc0bb96a  jal         func_2EE5A8
label_2e850c:
    if (ctx->pc == 0x2E850Cu) {
        ctx->pc = 0x2E850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8508u;
        // 0x2e850c: 0x34e700f3  ori         $a3, $a3, 0xF3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)243);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8510u;
        goto label_2e8510;
    }
    ctx->pc = 0x2E8508u;
    SET_GPR_U32(ctx, 31, 0x2E8510u);
    ctx->pc = 0x2E850Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8508u;
    // 0x2e850c: 0x34e700f3  ori         $a3, $a3, 0xF3 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)243);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E8508u, 0x2E8510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8510u;
label_2e8510:
    // 0x2e8510: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e8510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e8514:
    // 0x2e8514: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8518:
    if (ctx->pc == 0x2E8518u) {
        ctx->pc = 0x2E8518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8514u;
        // 0x2e8518: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E851Cu;
        goto label_2e851c;
    }
    ctx->pc = 0x2E8514u;
    {
        const bool branch_taken_0x2e8514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8514) {
            ctx->pc = 0x2E8518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8514u;
            // 0x2e8518: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8530u;
            goto label_2e8530;
        }
    }
    ctx->pc = 0x2E851Cu;
label_2e851c:
    // 0x2e851c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e851cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e8520:
    // 0x2e8520: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e8520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e8524:
    // 0x2e8524: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e8528:
    if (ctx->pc == 0x2E8528u) {
        ctx->pc = 0x2E8528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8524u;
        // 0x2e8528: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E852Cu;
        goto label_2e852c;
    }
    ctx->pc = 0x2E8524u;
    {
        const bool branch_taken_0x2e8524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8524u;
        // 0x2e8528: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8524) {
            ctx->pc = 0x2E853Cu;
            goto label_2e853c;
        }
    }
    ctx->pc = 0x2E852Cu;
label_2e852c:
    // 0x2e852c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2e852cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2e8530:
    // 0x2e8530: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8534:
    // 0x2e8534: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2e8534u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2e8538:
    // 0x2e8538: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e8538u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e853c:
    // 0x2e853c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e853cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e8540:
    // 0x2e8540: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e8540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e8544:
    // 0x2e8544: 0x34c60050  ori         $a2, $a2, 0x50
    ctx->pc = 0x2e8544u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)80);
label_2e8548:
    // 0x2e8548: 0xc0bb96a  jal         func_2EE5A8
label_2e854c:
    if (ctx->pc == 0x2E854Cu) {
        ctx->pc = 0x2E854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8548u;
        // 0x2e854c: 0x34e700f2  ori         $a3, $a3, 0xF2 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)242);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8550u;
        goto label_2e8550;
    }
    ctx->pc = 0x2E8548u;
    SET_GPR_U32(ctx, 31, 0x2E8550u);
    ctx->pc = 0x2E854Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8548u;
    // 0x2e854c: 0x34e700f2  ori         $a3, $a3, 0xF2 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)242);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E8548u, 0x2E8550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8550u;
label_2e8550:
    // 0x2e8550: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e8550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e8554:
    // 0x2e8554: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8558:
    if (ctx->pc == 0x2E8558u) {
        ctx->pc = 0x2E8558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8554u;
        // 0x2e8558: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E855Cu;
        goto label_2e855c;
    }
    ctx->pc = 0x2E8554u;
    {
        const bool branch_taken_0x2e8554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8554) {
            ctx->pc = 0x2E8558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8554u;
            // 0x2e8558: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8570u;
            goto label_2e8570;
        }
    }
    ctx->pc = 0x2E855Cu;
label_2e855c:
    // 0x2e855c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e855cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e8560:
    // 0x2e8560: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e8560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e8564:
    // 0x2e8564: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e8568:
    if (ctx->pc == 0x2E8568u) {
        ctx->pc = 0x2E8568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8564u;
        // 0x2e8568: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E856Cu;
        goto label_2e856c;
    }
    ctx->pc = 0x2E8564u;
    {
        const bool branch_taken_0x2e8564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8564u;
        // 0x2e8568: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8564) {
            ctx->pc = 0x2E857Cu;
            goto label_2e857c;
        }
    }
    ctx->pc = 0x2E856Cu;
label_2e856c:
    // 0x2e856c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2e856cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2e8570:
    // 0x2e8570: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8574:
    // 0x2e8574: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2e8574u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2e8578:
    // 0x2e8578: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e8578u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e857c:
    // 0x2e857c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e857cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e8580:
    // 0x2e8580: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2e8580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2e8584:
    // 0x2e8584: 0x34c60051  ori         $a2, $a2, 0x51
    ctx->pc = 0x2e8584u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)81);
label_2e8588:
    // 0x2e8588: 0xc0bb96a  jal         func_2EE5A8
label_2e858c:
    if (ctx->pc == 0x2E858Cu) {
        ctx->pc = 0x2E858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8588u;
        // 0x2e858c: 0x34e700f1  ori         $a3, $a3, 0xF1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)241);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8590u;
        goto label_2e8590;
    }
    ctx->pc = 0x2E8588u;
    SET_GPR_U32(ctx, 31, 0x2E8590u);
    ctx->pc = 0x2E858Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8588u;
    // 0x2e858c: 0x34e700f1  ori         $a3, $a3, 0xF1 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)241);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E8588u, 0x2E8590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8590u;
label_2e8590:
    // 0x2e8590: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e8590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e8594:
    // 0x2e8594: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8598:
    if (ctx->pc == 0x2E8598u) {
        ctx->pc = 0x2E8598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8594u;
        // 0x2e8598: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E859Cu;
        goto label_2e859c;
    }
    ctx->pc = 0x2E8594u;
    {
        const bool branch_taken_0x2e8594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8594) {
            ctx->pc = 0x2E8598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8594u;
            // 0x2e8598: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E85B0u;
            goto label_2e85b0;
        }
    }
    ctx->pc = 0x2E859Cu;
label_2e859c:
    // 0x2e859c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e859cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e85a0:
    // 0x2e85a0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e85a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e85a4:
    // 0x2e85a4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e85a8:
    if (ctx->pc == 0x2E85A8u) {
        ctx->pc = 0x2E85A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85A4u;
        // 0x2e85a8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E85ACu;
        goto label_2e85ac;
    }
    ctx->pc = 0x2E85A4u;
    {
        const bool branch_taken_0x2e85a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E85A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85A4u;
        // 0x2e85a8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e85a4) {
            ctx->pc = 0x2E85BCu;
            goto label_2e85bc;
        }
    }
    ctx->pc = 0x2E85ACu;
label_2e85ac:
    // 0x2e85ac: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2e85acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2e85b0:
    // 0x2e85b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e85b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e85b4:
    // 0x2e85b4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2e85b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2e85b8:
    // 0x2e85b8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e85b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e85bc:
    // 0x2e85bc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e85bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e85c0:
    // 0x2e85c0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2e85c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e85c4:
    // 0x2e85c4: 0x34c60052  ori         $a2, $a2, 0x52
    ctx->pc = 0x2e85c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)82);
label_2e85c8:
    // 0x2e85c8: 0xc0bb96a  jal         func_2EE5A8
label_2e85cc:
    if (ctx->pc == 0x2E85CCu) {
        ctx->pc = 0x2E85CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85C8u;
        // 0x2e85cc: 0x34e700f0  ori         $a3, $a3, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E85D0u;
        goto label_2e85d0;
    }
    ctx->pc = 0x2E85C8u;
    SET_GPR_U32(ctx, 31, 0x2E85D0u);
    ctx->pc = 0x2E85CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E85C8u;
    // 0x2e85cc: 0x34e700f0  ori         $a3, $a3, 0xF0 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)240);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E85C8u, 0x2E85D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E85D0u;
label_2e85d0:
    // 0x2e85d0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e85d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e85d4:
    // 0x2e85d4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e85d8:
    if (ctx->pc == 0x2E85D8u) {
        ctx->pc = 0x2E85D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85D4u;
        // 0x2e85d8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E85DCu;
        goto label_2e85dc;
    }
    ctx->pc = 0x2E85D4u;
    {
        const bool branch_taken_0x2e85d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e85d4) {
            ctx->pc = 0x2E85D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E85D4u;
            // 0x2e85d8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E85F0u;
            goto label_2e85f0;
        }
    }
    ctx->pc = 0x2E85DCu;
label_2e85dc:
    // 0x2e85dc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e85dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e85e0:
    // 0x2e85e0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e85e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e85e4:
    // 0x2e85e4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e85e8:
    if (ctx->pc == 0x2E85E8u) {
        ctx->pc = 0x2E85E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85E4u;
        // 0x2e85e8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E85ECu;
        goto label_2e85ec;
    }
    ctx->pc = 0x2E85E4u;
    {
        const bool branch_taken_0x2e85e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E85E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85E4u;
        // 0x2e85e8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e85e4) {
            ctx->pc = 0x2E85FCu;
            goto label_2e85fc;
        }
    }
    ctx->pc = 0x2E85ECu;
label_2e85ec:
    // 0x2e85ec: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2e85ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2e85f0:
    // 0x2e85f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e85f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e85f4:
    // 0x2e85f4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2e85f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2e85f8:
    // 0x2e85f8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e85f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e85fc:
    // 0x2e85fc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e85fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e8600:
    // 0x2e8600: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e8600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e8604:
    // 0x2e8604: 0x34c60053  ori         $a2, $a2, 0x53
    ctx->pc = 0x2e8604u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)83);
label_2e8608:
    // 0x2e8608: 0xc0bb96a  jal         func_2EE5A8
label_2e860c:
    if (ctx->pc == 0x2E860Cu) {
        ctx->pc = 0x2E860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8608u;
        // 0x2e860c: 0x34e700ef  ori         $a3, $a3, 0xEF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)239);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8610u;
        goto label_2e8610;
    }
    ctx->pc = 0x2E8608u;
    SET_GPR_U32(ctx, 31, 0x2E8610u);
    ctx->pc = 0x2E860Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8608u;
    // 0x2e860c: 0x34e700ef  ori         $a3, $a3, 0xEF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)239);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E8608u, 0x2E8610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8610u;
label_2e8610:
    // 0x2e8610: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e8610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e8614:
    // 0x2e8614: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8618:
    if (ctx->pc == 0x2E8618u) {
        ctx->pc = 0x2E8618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8614u;
        // 0x2e8618: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E861Cu;
        goto label_2e861c;
    }
    ctx->pc = 0x2E8614u;
    {
        const bool branch_taken_0x2e8614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8614) {
            ctx->pc = 0x2E8618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8614u;
            // 0x2e8618: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8630u;
            goto label_2e8630;
        }
    }
    ctx->pc = 0x2E861Cu;
label_2e861c:
    // 0x2e861c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e861cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e8620:
    // 0x2e8620: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e8620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e8624:
    // 0x2e8624: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e8628:
    if (ctx->pc == 0x2E8628u) {
        ctx->pc = 0x2E8628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8624u;
        // 0x2e8628: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E862Cu;
        goto label_2e862c;
    }
    ctx->pc = 0x2E8624u;
    {
        const bool branch_taken_0x2e8624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8624u;
        // 0x2e8628: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8624) {
            ctx->pc = 0x2E863Cu;
            goto label_2e863c;
        }
    }
    ctx->pc = 0x2E862Cu;
label_2e862c:
    // 0x2e862c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2e862cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2e8630:
    // 0x2e8630: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8634:
    // 0x2e8634: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2e8634u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2e8638:
    // 0x2e8638: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e8638u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e863c:
    // 0x2e863c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e863cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e8640:
    // 0x2e8640: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2e8640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2e8644:
    // 0x2e8644: 0x34c60054  ori         $a2, $a2, 0x54
    ctx->pc = 0x2e8644u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)84);
label_2e8648:
    // 0x2e8648: 0xc0bb96a  jal         func_2EE5A8
label_2e864c:
    if (ctx->pc == 0x2E864Cu) {
        ctx->pc = 0x2E864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8648u;
        // 0x2e864c: 0x34e700ee  ori         $a3, $a3, 0xEE (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)238);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8650u;
        goto label_2e8650;
    }
    ctx->pc = 0x2E8648u;
    SET_GPR_U32(ctx, 31, 0x2E8650u);
    ctx->pc = 0x2E864Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8648u;
    // 0x2e864c: 0x34e700ee  ori         $a3, $a3, 0xEE (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)238);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E8648u, 0x2E8650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8650u;
label_2e8650:
    // 0x2e8650: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e8650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e8654:
    // 0x2e8654: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8658:
    if (ctx->pc == 0x2E8658u) {
        ctx->pc = 0x2E8658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8654u;
        // 0x2e8658: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E865Cu;
        goto label_2e865c;
    }
    ctx->pc = 0x2E8654u;
    {
        const bool branch_taken_0x2e8654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8654) {
            ctx->pc = 0x2E8658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8654u;
            // 0x2e8658: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8670u;
            goto label_2e8670;
        }
    }
    ctx->pc = 0x2E865Cu;
label_2e865c:
    // 0x2e865c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e865cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e8660:
    // 0x2e8660: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e8660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e8664:
    // 0x2e8664: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e8668:
    if (ctx->pc == 0x2E8668u) {
        ctx->pc = 0x2E8668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8664u;
        // 0x2e8668: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E866Cu;
        goto label_2e866c;
    }
    ctx->pc = 0x2E8664u;
    {
        const bool branch_taken_0x2e8664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8664u;
        // 0x2e8668: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8664) {
            ctx->pc = 0x2E867Cu;
            goto label_2e867c;
        }
    }
    ctx->pc = 0x2E866Cu;
label_2e866c:
    // 0x2e866c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2e866cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2e8670:
    // 0x2e8670: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8674:
    // 0x2e8674: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2e8674u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2e8678:
    // 0x2e8678: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e8678u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e867c:
    // 0x2e867c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e867cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e8680:
    // 0x2e8680: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2e8680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2e8684:
    // 0x2e8684: 0x34c60055  ori         $a2, $a2, 0x55
    ctx->pc = 0x2e8684u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)85);
label_2e8688:
    // 0x2e8688: 0xc0bb96a  jal         func_2EE5A8
label_2e868c:
    if (ctx->pc == 0x2E868Cu) {
        ctx->pc = 0x2E868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8688u;
        // 0x2e868c: 0x34e700ed  ori         $a3, $a3, 0xED (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)237);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8690u;
        goto label_2e8690;
    }
    ctx->pc = 0x2E8688u;
    SET_GPR_U32(ctx, 31, 0x2E8690u);
    ctx->pc = 0x2E868Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8688u;
    // 0x2e868c: 0x34e700ed  ori         $a3, $a3, 0xED (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)237);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E8688u, 0x2E8690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8690u;
label_2e8690:
    // 0x2e8690: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e8690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e8694:
    // 0x2e8694: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8698:
    if (ctx->pc == 0x2E8698u) {
        ctx->pc = 0x2E8698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8694u;
        // 0x2e8698: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E869Cu;
        goto label_2e869c;
    }
    ctx->pc = 0x2E8694u;
    {
        const bool branch_taken_0x2e8694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8694) {
            ctx->pc = 0x2E8698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8694u;
            // 0x2e8698: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E86B0u;
            goto label_2e86b0;
        }
    }
    ctx->pc = 0x2E869Cu;
label_2e869c:
    // 0x2e869c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e869cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e86a0:
    // 0x2e86a0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e86a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e86a4:
    // 0x2e86a4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e86a8:
    if (ctx->pc == 0x2E86A8u) {
        ctx->pc = 0x2E86A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E86A4u;
        // 0x2e86a8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E86ACu;
        goto label_2e86ac;
    }
    ctx->pc = 0x2E86A4u;
    {
        const bool branch_taken_0x2e86a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E86A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E86A4u;
        // 0x2e86a8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e86a4) {
            ctx->pc = 0x2E86BCu;
            goto label_2e86bc;
        }
    }
    ctx->pc = 0x2E86ACu;
label_2e86ac:
    // 0x2e86ac: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2e86acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2e86b0:
    // 0x2e86b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e86b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e86b4:
    // 0x2e86b4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2e86b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2e86b8:
    // 0x2e86b8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e86b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e86bc:
    // 0x2e86bc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e86bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e86c0:
    // 0x2e86c0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2e86c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2e86c4:
    // 0x2e86c4: 0x34c60056  ori         $a2, $a2, 0x56
    ctx->pc = 0x2e86c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)86);
label_2e86c8:
    // 0x2e86c8: 0xc0bb96a  jal         func_2EE5A8
label_2e86cc:
    if (ctx->pc == 0x2E86CCu) {
        ctx->pc = 0x2E86CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E86C8u;
        // 0x2e86cc: 0x34e700ec  ori         $a3, $a3, 0xEC (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)236);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E86D0u;
        goto label_2e86d0;
    }
    ctx->pc = 0x2E86C8u;
    SET_GPR_U32(ctx, 31, 0x2E86D0u);
    ctx->pc = 0x2E86CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E86C8u;
    // 0x2e86cc: 0x34e700ec  ori         $a3, $a3, 0xEC (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)236);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E86C8u, 0x2E86D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E86D0u;
label_2e86d0:
    // 0x2e86d0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e86d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e86d4:
    // 0x2e86d4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e86d8:
    if (ctx->pc == 0x2E86D8u) {
        ctx->pc = 0x2E86D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E86D4u;
        // 0x2e86d8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E86DCu;
        goto label_2e86dc;
    }
    ctx->pc = 0x2E86D4u;
    {
        const bool branch_taken_0x2e86d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e86d4) {
            ctx->pc = 0x2E86D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E86D4u;
            // 0x2e86d8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E86F0u;
            goto label_2e86f0;
        }
    }
    ctx->pc = 0x2E86DCu;
label_2e86dc:
    // 0x2e86dc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e86dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e86e0:
    // 0x2e86e0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e86e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e86e4:
    // 0x2e86e4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e86e8:
    if (ctx->pc == 0x2E86E8u) {
        ctx->pc = 0x2E86E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E86E4u;
        // 0x2e86e8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E86ECu;
        goto label_2e86ec;
    }
    ctx->pc = 0x2E86E4u;
    {
        const bool branch_taken_0x2e86e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E86E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E86E4u;
        // 0x2e86e8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e86e4) {
            ctx->pc = 0x2E86FCu;
            goto label_2e86fc;
        }
    }
    ctx->pc = 0x2E86ECu;
label_2e86ec:
    // 0x2e86ec: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2e86ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2e86f0:
    // 0x2e86f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e86f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e86f4:
    // 0x2e86f4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2e86f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2e86f8:
    // 0x2e86f8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e86f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e86fc:
    // 0x2e86fc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e86fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e8700:
    // 0x2e8700: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2e8700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2e8704:
    // 0x2e8704: 0x34c60057  ori         $a2, $a2, 0x57
    ctx->pc = 0x2e8704u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)87);
label_2e8708:
    // 0x2e8708: 0xc0bb96a  jal         func_2EE5A8
label_2e870c:
    if (ctx->pc == 0x2E870Cu) {
        ctx->pc = 0x2E870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8708u;
        // 0x2e870c: 0x34e700eb  ori         $a3, $a3, 0xEB (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)235);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8710u;
        goto label_2e8710;
    }
    ctx->pc = 0x2E8708u;
    SET_GPR_U32(ctx, 31, 0x2E8710u);
    ctx->pc = 0x2E870Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8708u;
    // 0x2e870c: 0x34e700eb  ori         $a3, $a3, 0xEB (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)235);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E8708u, 0x2E8710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8710u;
label_2e8710:
    // 0x2e8710: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e8710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e8714:
    // 0x2e8714: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8718:
    if (ctx->pc == 0x2E8718u) {
        ctx->pc = 0x2E8718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8714u;
        // 0x2e8718: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E871Cu;
        goto label_2e871c;
    }
    ctx->pc = 0x2E8714u;
    {
        const bool branch_taken_0x2e8714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8714) {
            ctx->pc = 0x2E8718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8714u;
            // 0x2e8718: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8730u;
            goto label_2e8730;
        }
    }
    ctx->pc = 0x2E871Cu;
label_2e871c:
    // 0x2e871c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e871cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e8720:
    // 0x2e8720: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e8720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e8724:
    // 0x2e8724: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e8728:
    if (ctx->pc == 0x2E8728u) {
        ctx->pc = 0x2E8728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8724u;
        // 0x2e8728: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E872Cu;
        goto label_2e872c;
    }
    ctx->pc = 0x2E8724u;
    {
        const bool branch_taken_0x2e8724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8724u;
        // 0x2e8728: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8724) {
            ctx->pc = 0x2E873Cu;
            goto label_2e873c;
        }
    }
    ctx->pc = 0x2E872Cu;
label_2e872c:
    // 0x2e872c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2e872cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2e8730:
    // 0x2e8730: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8734:
    // 0x2e8734: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2e8734u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2e8738:
    // 0x2e8738: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e8738u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e873c:
    // 0x2e873c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e873cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e8740:
    // 0x2e8740: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2e8740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2e8744:
    // 0x2e8744: 0x34c60058  ori         $a2, $a2, 0x58
    ctx->pc = 0x2e8744u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)88);
label_2e8748:
    // 0x2e8748: 0xc0bb96a  jal         func_2EE5A8
label_2e874c:
    if (ctx->pc == 0x2E874Cu) {
        ctx->pc = 0x2E874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8748u;
        // 0x2e874c: 0x34e700ea  ori         $a3, $a3, 0xEA (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)234);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8750u;
        goto label_2e8750;
    }
    ctx->pc = 0x2E8748u;
    SET_GPR_U32(ctx, 31, 0x2E8750u);
    ctx->pc = 0x2E874Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8748u;
    // 0x2e874c: 0x34e700ea  ori         $a3, $a3, 0xEA (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)234);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E8748u, 0x2E8750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8750u;
label_2e8750:
    // 0x2e8750: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e8750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e8754:
    // 0x2e8754: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8758:
    if (ctx->pc == 0x2E8758u) {
        ctx->pc = 0x2E8758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8754u;
        // 0x2e8758: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E875Cu;
        goto label_2e875c;
    }
    ctx->pc = 0x2E8754u;
    {
        const bool branch_taken_0x2e8754 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8754) {
            ctx->pc = 0x2E8758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8754u;
            // 0x2e8758: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8770u;
            goto label_2e8770;
        }
    }
    ctx->pc = 0x2E875Cu;
label_2e875c:
    // 0x2e875c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e875cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e8760:
    // 0x2e8760: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e8760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e8764:
    // 0x2e8764: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e8768:
    if (ctx->pc == 0x2E8768u) {
        ctx->pc = 0x2E8768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8764u;
        // 0x2e8768: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E876Cu;
        goto label_2e876c;
    }
    ctx->pc = 0x2E8764u;
    {
        const bool branch_taken_0x2e8764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8764u;
        // 0x2e8768: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8764) {
            ctx->pc = 0x2E877Cu;
            goto label_2e877c;
        }
    }
    ctx->pc = 0x2E876Cu;
label_2e876c:
    // 0x2e876c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2e876cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2e8770:
    // 0x2e8770: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8774:
    // 0x2e8774: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2e8774u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2e8778:
    // 0x2e8778: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e8778u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e877c:
    // 0x2e877c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e877cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e8780:
    // 0x2e8780: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2e8780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2e8784:
    // 0x2e8784: 0x34c60059  ori         $a2, $a2, 0x59
    ctx->pc = 0x2e8784u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)89);
label_2e8788:
    // 0x2e8788: 0xc0bb96a  jal         func_2EE5A8
label_2e878c:
    if (ctx->pc == 0x2E878Cu) {
        ctx->pc = 0x2E878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8788u;
        // 0x2e878c: 0x34e700e9  ori         $a3, $a3, 0xE9 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)233);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8790u;
        goto label_2e8790;
    }
    ctx->pc = 0x2E8788u;
    SET_GPR_U32(ctx, 31, 0x2E8790u);
    ctx->pc = 0x2E878Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8788u;
    // 0x2e878c: 0x34e700e9  ori         $a3, $a3, 0xE9 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)233);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E8788u, 0x2E8790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8790u;
label_2e8790:
    // 0x2e8790: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e8790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e8794:
    // 0x2e8794: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8798:
    if (ctx->pc == 0x2E8798u) {
        ctx->pc = 0x2E8798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8794u;
        // 0x2e8798: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E879Cu;
        goto label_2e879c;
    }
    ctx->pc = 0x2E8794u;
    {
        const bool branch_taken_0x2e8794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8794) {
            ctx->pc = 0x2E8798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8794u;
            // 0x2e8798: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E87B0u;
            goto label_2e87b0;
        }
    }
    ctx->pc = 0x2E879Cu;
label_2e879c:
    // 0x2e879c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e879cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e87a0:
    // 0x2e87a0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e87a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e87a4:
    // 0x2e87a4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e87a8:
    if (ctx->pc == 0x2E87A8u) {
        ctx->pc = 0x2E87A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E87A4u;
        // 0x2e87a8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E87ACu;
        goto label_2e87ac;
    }
    ctx->pc = 0x2E87A4u;
    {
        const bool branch_taken_0x2e87a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E87A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E87A4u;
        // 0x2e87a8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e87a4) {
            ctx->pc = 0x2E87BCu;
            goto label_2e87bc;
        }
    }
    ctx->pc = 0x2E87ACu;
label_2e87ac:
    // 0x2e87ac: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2e87acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2e87b0:
    // 0x2e87b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e87b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e87b4:
    // 0x2e87b4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2e87b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2e87b8:
    // 0x2e87b8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e87b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e87bc:
    // 0x2e87bc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e87bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e87c0:
    // 0x2e87c0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2e87c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2e87c4:
    // 0x2e87c4: 0x34c6005a  ori         $a2, $a2, 0x5A
    ctx->pc = 0x2e87c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)90);
label_2e87c8:
    // 0x2e87c8: 0xc0bb96a  jal         func_2EE5A8
label_2e87cc:
    if (ctx->pc == 0x2E87CCu) {
        ctx->pc = 0x2E87CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E87C8u;
        // 0x2e87cc: 0x34e700e8  ori         $a3, $a3, 0xE8 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)232);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E87D0u;
        goto label_2e87d0;
    }
    ctx->pc = 0x2E87C8u;
    SET_GPR_U32(ctx, 31, 0x2E87D0u);
    ctx->pc = 0x2E87CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E87C8u;
    // 0x2e87cc: 0x34e700e8  ori         $a3, $a3, 0xE8 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)232);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E87C8u, 0x2E87D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E87D0u;
label_2e87d0:
    // 0x2e87d0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e87d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e87d4:
    // 0x2e87d4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e87d8:
    if (ctx->pc == 0x2E87D8u) {
        ctx->pc = 0x2E87D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E87D4u;
        // 0x2e87d8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E87DCu;
        goto label_2e87dc;
    }
    ctx->pc = 0x2E87D4u;
    {
        const bool branch_taken_0x2e87d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e87d4) {
            ctx->pc = 0x2E87D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E87D4u;
            // 0x2e87d8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E87F0u;
            goto label_2e87f0;
        }
    }
    ctx->pc = 0x2E87DCu;
label_2e87dc:
    // 0x2e87dc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e87dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e87e0:
    // 0x2e87e0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e87e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e87e4:
    // 0x2e87e4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e87e8:
    if (ctx->pc == 0x2E87E8u) {
        ctx->pc = 0x2E87E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E87E4u;
        // 0x2e87e8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E87ECu;
        goto label_2e87ec;
    }
    ctx->pc = 0x2E87E4u;
    {
        const bool branch_taken_0x2e87e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E87E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E87E4u;
        // 0x2e87e8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e87e4) {
            ctx->pc = 0x2E87FCu;
            goto label_2e87fc;
        }
    }
    ctx->pc = 0x2E87ECu;
label_2e87ec:
    // 0x2e87ec: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2e87ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2e87f0:
    // 0x2e87f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e87f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e87f4:
    // 0x2e87f4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2e87f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2e87f8:
    // 0x2e87f8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e87f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e87fc:
    // 0x2e87fc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e87fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e8800:
    // 0x2e8800: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2e8800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2e8804:
    // 0x2e8804: 0x34c6005b  ori         $a2, $a2, 0x5B
    ctx->pc = 0x2e8804u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)91);
label_2e8808:
    // 0x2e8808: 0xc0bb96a  jal         func_2EE5A8
label_2e880c:
    if (ctx->pc == 0x2E880Cu) {
        ctx->pc = 0x2E880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8808u;
        // 0x2e880c: 0x34e700e7  ori         $a3, $a3, 0xE7 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)231);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8810u;
        goto label_2e8810;
    }
    ctx->pc = 0x2E8808u;
    SET_GPR_U32(ctx, 31, 0x2E8810u);
    ctx->pc = 0x2E880Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8808u;
    // 0x2e880c: 0x34e700e7  ori         $a3, $a3, 0xE7 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)231);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E8808u, 0x2E8810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8810u;
label_2e8810:
    // 0x2e8810: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2e8810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2e8814:
    // 0x2e8814: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8818:
    if (ctx->pc == 0x2E8818u) {
        ctx->pc = 0x2E8818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8814u;
        // 0x2e8818: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E881Cu;
        goto label_2e881c;
    }
    ctx->pc = 0x2E8814u;
    {
        const bool branch_taken_0x2e8814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8814) {
            ctx->pc = 0x2E8818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8814u;
            // 0x2e8818: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8830u;
            goto label_2e8830;
        }
    }
    ctx->pc = 0x2E881Cu;
label_2e881c:
    // 0x2e881c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e881cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e8820:
    // 0x2e8820: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2e8820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2e8824:
    // 0x2e8824: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e8828:
    if (ctx->pc == 0x2E8828u) {
        ctx->pc = 0x2E8828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8824u;
        // 0x2e8828: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E882Cu;
        goto label_2e882c;
    }
    ctx->pc = 0x2E8824u;
    {
        const bool branch_taken_0x2e8824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8824u;
        // 0x2e8828: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8824) {
            ctx->pc = 0x2E883Cu;
            goto label_2e883c;
        }
    }
    ctx->pc = 0x2E882Cu;
label_2e882c:
    // 0x2e882c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x2e882cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_2e8830:
    // 0x2e8830: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8834:
    // 0x2e8834: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x2e8834u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_2e8838:
    // 0x2e8838: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e8838u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e883c:
    // 0x2e883c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e883cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e8840:
    // 0x2e8840: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e8840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8844:
    // 0x2e8844: 0x34c6005d  ori         $a2, $a2, 0x5D
    ctx->pc = 0x2e8844u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)93);
label_2e8848:
    // 0x2e8848: 0xc0bb96a  jal         func_2EE5A8
label_2e884c:
    if (ctx->pc == 0x2E884Cu) {
        ctx->pc = 0x2E884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8848u;
        // 0x2e884c: 0x34e700f7  ori         $a3, $a3, 0xF7 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)247);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8850u;
        goto label_2e8850;
    }
    ctx->pc = 0x2E8848u;
    SET_GPR_U32(ctx, 31, 0x2E8850u);
    ctx->pc = 0x2E884Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8848u;
    // 0x2e884c: 0x34e700f7  ori         $a3, $a3, 0xF7 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)247);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E8848u, 0x2E8850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8850u;
label_2e8850:
    // 0x2e8850: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2e8850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2e8854:
    // 0x2e8854: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8858:
    if (ctx->pc == 0x2E8858u) {
        ctx->pc = 0x2E8858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8854u;
        // 0x2e8858: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E885Cu;
        goto label_2e885c;
    }
    ctx->pc = 0x2E8854u;
    {
        const bool branch_taken_0x2e8854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8854) {
            ctx->pc = 0x2E8858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8854u;
            // 0x2e8858: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8870u;
            goto label_2e8870;
        }
    }
    ctx->pc = 0x2E885Cu;
label_2e885c:
    // 0x2e885c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e885cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e8860:
    // 0x2e8860: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2e8860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2e8864:
    // 0x2e8864: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e8868:
    if (ctx->pc == 0x2E8868u) {
        ctx->pc = 0x2E8868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8864u;
        // 0x2e8868: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E886Cu;
        goto label_2e886c;
    }
    ctx->pc = 0x2E8864u;
    {
        const bool branch_taken_0x2e8864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8864u;
        // 0x2e8868: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8864) {
            ctx->pc = 0x2E887Cu;
            goto label_2e887c;
        }
    }
    ctx->pc = 0x2E886Cu;
label_2e886c:
    // 0x2e886c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x2e886cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_2e8870:
    // 0x2e8870: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8874:
    // 0x2e8874: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x2e8874u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_2e8878:
    // 0x2e8878: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e8878u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e887c:
    // 0x2e887c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e887cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e8880:
    // 0x2e8880: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e8880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8884:
    // 0x2e8884: 0x34c6005e  ori         $a2, $a2, 0x5E
    ctx->pc = 0x2e8884u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)94);
label_2e8888:
    // 0x2e8888: 0xc0bb96a  jal         func_2EE5A8
label_2e888c:
    if (ctx->pc == 0x2E888Cu) {
        ctx->pc = 0x2E888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8888u;
        // 0x2e888c: 0x34e700f8  ori         $a3, $a3, 0xF8 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)248);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8890u;
        goto label_2e8890;
    }
    ctx->pc = 0x2E8888u;
    SET_GPR_U32(ctx, 31, 0x2E8890u);
    ctx->pc = 0x2E888Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8888u;
    // 0x2e888c: 0x34e700f8  ori         $a3, $a3, 0xF8 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)248);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E8888u, 0x2E8890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8890u;
label_2e8890:
    // 0x2e8890: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2e8890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2e8894:
    // 0x2e8894: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8898:
    if (ctx->pc == 0x2E8898u) {
        ctx->pc = 0x2E8898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8894u;
        // 0x2e8898: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E889Cu;
        goto label_2e889c;
    }
    ctx->pc = 0x2E8894u;
    {
        const bool branch_taken_0x2e8894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8894) {
            ctx->pc = 0x2E8898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8894u;
            // 0x2e8898: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E88B0u;
            goto label_2e88b0;
        }
    }
    ctx->pc = 0x2E889Cu;
label_2e889c:
    // 0x2e889c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e889cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e88a0:
    // 0x2e88a0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2e88a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2e88a4:
    // 0x2e88a4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e88a8:
    if (ctx->pc == 0x2E88A8u) {
        ctx->pc = 0x2E88A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88A4u;
        // 0x2e88a8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E88ACu;
        goto label_2e88ac;
    }
    ctx->pc = 0x2E88A4u;
    {
        const bool branch_taken_0x2e88a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E88A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88A4u;
        // 0x2e88a8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e88a4) {
            ctx->pc = 0x2E88BCu;
            goto label_2e88bc;
        }
    }
    ctx->pc = 0x2E88ACu;
label_2e88ac:
    // 0x2e88ac: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x2e88acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_2e88b0:
    // 0x2e88b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e88b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e88b4:
    // 0x2e88b4: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x2e88b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_2e88b8:
    // 0x2e88b8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e88b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e88bc:
    // 0x2e88bc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e88bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e88c0:
    // 0x2e88c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2e88c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e88c4:
    // 0x2e88c4: 0x34c6005f  ori         $a2, $a2, 0x5F
    ctx->pc = 0x2e88c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)95);
label_2e88c8:
    // 0x2e88c8: 0xc0bb96a  jal         func_2EE5A8
label_2e88cc:
    if (ctx->pc == 0x2E88CCu) {
        ctx->pc = 0x2E88CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88C8u;
        // 0x2e88cc: 0x34e700f9  ori         $a3, $a3, 0xF9 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)249);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E88D0u;
        goto label_2e88d0;
    }
    ctx->pc = 0x2E88C8u;
    SET_GPR_U32(ctx, 31, 0x2E88D0u);
    ctx->pc = 0x2E88CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E88C8u;
    // 0x2e88cc: 0x34e700f9  ori         $a3, $a3, 0xF9 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)249);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E88C8u, 0x2E88D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E88D0u;
label_2e88d0:
    // 0x2e88d0: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x2e88d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2e88d4:
    // 0x2e88d4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e88d8:
    if (ctx->pc == 0x2E88D8u) {
        ctx->pc = 0x2E88D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88D4u;
        // 0x2e88d8: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E88DCu;
        goto label_2e88dc;
    }
    ctx->pc = 0x2E88D4u;
    {
        const bool branch_taken_0x2e88d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e88d4) {
            ctx->pc = 0x2E88D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E88D4u;
            // 0x2e88d8: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E88F0u;
            goto label_2e88f0;
        }
    }
    ctx->pc = 0x2E88DCu;
label_2e88dc:
    // 0x2e88dc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e88dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e88e0:
    // 0x2e88e0: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x2e88e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_2e88e4:
    // 0x2e88e4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e88e8:
    if (ctx->pc == 0x2E88E8u) {
        ctx->pc = 0x2E88E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88E4u;
        // 0x2e88e8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E88ECu;
        goto label_2e88ec;
    }
    ctx->pc = 0x2E88E4u;
    {
        const bool branch_taken_0x2e88e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E88E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88E4u;
        // 0x2e88e8: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e88e4) {
            ctx->pc = 0x2E88FCu;
            goto label_2e88fc;
        }
    }
    ctx->pc = 0x2E88ECu;
label_2e88ec:
    // 0x2e88ec: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x2e88ecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_2e88f0:
    // 0x2e88f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e88f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e88f4:
    // 0x2e88f4: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x2e88f4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
label_2e88f8:
    // 0x2e88f8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e88f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e88fc:
    // 0x2e88fc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e88fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e8900:
    // 0x2e8900: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e8900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8904:
    // 0x2e8904: 0x34c60061  ori         $a2, $a2, 0x61
    ctx->pc = 0x2e8904u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)97);
label_2e8908:
    // 0x2e8908: 0xc0bb96a  jal         func_2EE5A8
label_2e890c:
    if (ctx->pc == 0x2E890Cu) {
        ctx->pc = 0x2E890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8908u;
        // 0x2e890c: 0x34e700fc  ori         $a3, $a3, 0xFC (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)252);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8910u;
        goto label_2e8910;
    }
    ctx->pc = 0x2E8908u;
    SET_GPR_U32(ctx, 31, 0x2E8910u);
    ctx->pc = 0x2E890Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8908u;
    // 0x2e890c: 0x34e700fc  ori         $a3, $a3, 0xFC (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)252);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E8908u, 0x2E8910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8910u;
label_2e8910:
    // 0x2e8910: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x2e8910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2e8914:
    // 0x2e8914: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8918:
    if (ctx->pc == 0x2E8918u) {
        ctx->pc = 0x2E8918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8914u;
        // 0x2e8918: 0xaec00004  sw          $zero, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E891Cu;
        goto label_2e891c;
    }
    ctx->pc = 0x2E8914u;
    {
        const bool branch_taken_0x2e8914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8914) {
            ctx->pc = 0x2E8918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8914u;
            // 0x2e8918: 0xaec00004  sw          $zero, 0x4($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8930u;
            goto label_2e8930;
        }
    }
    ctx->pc = 0x2E891Cu;
label_2e891c:
    // 0x2e891c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e891cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e8920:
    // 0x2e8920: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x2e8920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_2e8924:
    // 0x2e8924: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e8928:
    if (ctx->pc == 0x2E8928u) {
        ctx->pc = 0x2E8928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8924u;
        // 0x2e8928: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E892Cu;
        goto label_2e892c;
    }
    ctx->pc = 0x2E8924u;
    {
        const bool branch_taken_0x2e8924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8924u;
        // 0x2e8928: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8924) {
            ctx->pc = 0x2E893Cu;
            goto label_2e893c;
        }
    }
    ctx->pc = 0x2E892Cu;
label_2e892c:
    // 0x2e892c: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x2e892cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
label_2e8930:
    // 0x2e8930: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8934:
    // 0x2e8934: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x2e8934u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_2e8938:
    // 0x2e8938: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e8938u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2e893c:
    // 0x2e893c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2e893cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2e8940:
    // 0x2e8940: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e8940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8944:
    // 0x2e8944: 0x34c60062  ori         $a2, $a2, 0x62
    ctx->pc = 0x2e8944u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)98);
label_2e8948:
    // 0x2e8948: 0xc0bb96a  jal         func_2EE5A8
label_2e894c:
    if (ctx->pc == 0x2E894Cu) {
        ctx->pc = 0x2E894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8948u;
        // 0x2e894c: 0x34e700fb  ori         $a3, $a3, 0xFB (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)251);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8950u;
        goto label_2e8950;
    }
    ctx->pc = 0x2E8948u;
    SET_GPR_U32(ctx, 31, 0x2E8950u);
    ctx->pc = 0x2E894Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8948u;
    // 0x2e894c: 0x34e700fb  ori         $a3, $a3, 0xFB (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)251);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2E8948u, 0x2E8950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8950u;
label_2e8950:
    // 0x2e8950: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2e8950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e8954:
    // 0x2e8954: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8958:
    if (ctx->pc == 0x2E8958u) {
        ctx->pc = 0x2E8958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8954u;
        // 0x2e8958: 0xaea00004  sw          $zero, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E895Cu;
        goto label_2e895c;
    }
    ctx->pc = 0x2E8954u;
    {
        const bool branch_taken_0x2e8954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8954) {
            ctx->pc = 0x2E8958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8954u;
            // 0x2e8958: 0xaea00004  sw          $zero, 0x4($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8970u;
            goto label_2e8970;
        }
    }
    ctx->pc = 0x2E895Cu;
label_2e895c:
    // 0x2e895c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e895cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e8960:
    // 0x2e8960: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2e8960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2e8964:
    // 0x2e8964: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2e8968:
    if (ctx->pc == 0x2E8968u) {
        ctx->pc = 0x2E8968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8964u;
        // 0x2e8968: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E896Cu;
        goto label_2e896c;
    }
    ctx->pc = 0x2E8964u;
    {
        const bool branch_taken_0x2e8964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8964u;
        // 0x2e8968: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8964) {
            ctx->pc = 0x2E8978u;
            goto label_2e8978;
        }
    }
    ctx->pc = 0x2E896Cu;
label_2e896c:
    // 0x2e896c: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x2e896cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_2e8970:
    // 0x2e8970: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e8970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8974:
    // 0x2e8974: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x2e8974u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_2e8978:
    // 0x2e8978: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2e8978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2e897c:
    // 0x2e897c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2e897cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_2e8980:
    // 0x2e8980: 0x24a5f49c  addiu       $a1, $a1, -0xB64
    ctx->pc = 0x2e8980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964380));
label_2e8984:
    // 0x2e8984: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2e8984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2e8988:
    // 0x2e8988: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e8988u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e898c:
    // 0x2e898c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e898cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e8990:
    // 0x2e8990: 0x60f809  jalr        $v1
label_2e8994:
    if (ctx->pc == 0x2E8994u) {
        ctx->pc = 0x2E8994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8990u;
        // 0x2e8994: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8998u;
        goto label_2e8998;
    }
    ctx->pc = 0x2E8990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E8998u);
        ctx->pc = 0x2E8994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8990u;
        // 0x2e8994: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8990u, 0x2E8998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E8998u;
label_2e8998:
    // 0x2e8998: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e8998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e899c:
    // 0x2e899c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e89a0:
    if (ctx->pc == 0x2E89A0u) {
        ctx->pc = 0x2E89A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E899Cu;
        // 0x2e89a0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E89A4u;
        goto label_2e89a4;
    }
    ctx->pc = 0x2E899Cu;
    {
        const bool branch_taken_0x2e899c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e899c) {
            ctx->pc = 0x2E89A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E899Cu;
            // 0x2e89a0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E89B8u;
            goto label_2e89b8;
        }
    }
    ctx->pc = 0x2E89A4u;
label_2e89a4:
    // 0x2e89a4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e89a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e89a8:
    // 0x2e89a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e89a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e89ac:
    // 0x2e89ac: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2e89b0:
    if (ctx->pc == 0x2E89B0u) {
        ctx->pc = 0x2E89B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E89ACu;
        // 0x2e89b0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E89B4u;
        goto label_2e89b4;
    }
    ctx->pc = 0x2E89ACu;
    {
        const bool branch_taken_0x2e89ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E89B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E89ACu;
        // 0x2e89b0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e89ac) {
            ctx->pc = 0x2E89C0u;
            goto label_2e89c0;
        }
    }
    ctx->pc = 0x2E89B4u;
label_2e89b4:
    // 0x2e89b4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e89b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e89b8:
    // 0x2e89b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e89b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e89bc:
    // 0x2e89bc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e89bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e89c0:
    // 0x2e89c0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2e89c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2e89c4:
    // 0x2e89c4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2e89c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_2e89c8:
    // 0x2e89c8: 0x24a5f4a8  addiu       $a1, $a1, -0xB58
    ctx->pc = 0x2e89c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964392));
label_2e89cc:
    // 0x2e89cc: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2e89ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2e89d0:
    // 0x2e89d0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e89d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e89d4:
    // 0x2e89d4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e89d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e89d8:
    // 0x2e89d8: 0x60f809  jalr        $v1
label_2e89dc:
    if (ctx->pc == 0x2E89DCu) {
        ctx->pc = 0x2E89DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E89D8u;
        // 0x2e89dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E89E0u;
        goto label_2e89e0;
    }
    ctx->pc = 0x2E89D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E89E0u);
        ctx->pc = 0x2E89DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E89D8u;
        // 0x2e89dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E89D8u, 0x2E89E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E89E0u;
label_2e89e0:
    // 0x2e89e0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e89e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e89e4:
    // 0x2e89e4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e89e8:
    if (ctx->pc == 0x2E89E8u) {
        ctx->pc = 0x2E89E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E89E4u;
        // 0x2e89e8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E89ECu;
        goto label_2e89ec;
    }
    ctx->pc = 0x2E89E4u;
    {
        const bool branch_taken_0x2e89e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e89e4) {
            ctx->pc = 0x2E89E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E89E4u;
            // 0x2e89e8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8A00u;
            goto label_2e8a00;
        }
    }
    ctx->pc = 0x2E89ECu;
label_2e89ec:
    // 0x2e89ec: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e89ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e89f0:
    // 0x2e89f0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e89f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2e89f4:
    // 0x2e89f4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2e89f8:
    if (ctx->pc == 0x2E89F8u) {
        ctx->pc = 0x2E89F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E89F4u;
        // 0x2e89f8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E89FCu;
        goto label_2e89fc;
    }
    ctx->pc = 0x2E89F4u;
    {
        const bool branch_taken_0x2e89f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E89F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E89F4u;
        // 0x2e89f8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e89f4) {
            ctx->pc = 0x2E8A08u;
            goto label_2e8a08;
        }
    }
    ctx->pc = 0x2E89FCu;
label_2e89fc:
    // 0x2e89fc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e89fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e8a00:
    // 0x2e8a00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e8a00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8a04:
    // 0x2e8a04: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e8a04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e8a08:
    // 0x2e8a08: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2e8a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2e8a0c:
    // 0x2e8a0c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2e8a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_2e8a10:
    // 0x2e8a10: 0x24a5f4b4  addiu       $a1, $a1, -0xB4C
    ctx->pc = 0x2e8a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964404));
label_2e8a14:
    // 0x2e8a14: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2e8a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2e8a18:
    // 0x2e8a18: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e8a18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e8a1c:
    // 0x2e8a1c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e8a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e8a20:
    // 0x2e8a20: 0x60f809  jalr        $v1
label_2e8a24:
    if (ctx->pc == 0x2E8A24u) {
        ctx->pc = 0x2E8A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A20u;
        // 0x2e8a24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8A28u;
        goto label_2e8a28;
    }
    ctx->pc = 0x2E8A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E8A28u);
        ctx->pc = 0x2E8A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A20u;
        // 0x2e8a24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8A20u, 0x2E8A28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E8A28u;
label_2e8a28:
    // 0x2e8a28: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e8a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e8a2c:
    // 0x2e8a2c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8a30:
    if (ctx->pc == 0x2E8A30u) {
        ctx->pc = 0x2E8A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A2Cu;
        // 0x2e8a30: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8A34u;
        goto label_2e8a34;
    }
    ctx->pc = 0x2E8A2Cu;
    {
        const bool branch_taken_0x2e8a2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8a2c) {
            ctx->pc = 0x2E8A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8A2Cu;
            // 0x2e8a30: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8A48u;
            goto label_2e8a48;
        }
    }
    ctx->pc = 0x2E8A34u;
label_2e8a34:
    // 0x2e8a34: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e8a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e8a38:
    // 0x2e8a38: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e8a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2e8a3c:
    // 0x2e8a3c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2e8a40:
    if (ctx->pc == 0x2E8A40u) {
        ctx->pc = 0x2E8A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A3Cu;
        // 0x2e8a40: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8A44u;
        goto label_2e8a44;
    }
    ctx->pc = 0x2E8A3Cu;
    {
        const bool branch_taken_0x2e8a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A3Cu;
        // 0x2e8a40: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a3c) {
            ctx->pc = 0x2E8A50u;
            goto label_2e8a50;
        }
    }
    ctx->pc = 0x2E8A44u;
label_2e8a44:
    // 0x2e8a44: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2e8a44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2e8a48:
    // 0x2e8a48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e8a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8a4c:
    // 0x2e8a4c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2e8a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2e8a50:
    // 0x2e8a50: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2e8a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2e8a54:
    // 0x2e8a54: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2e8a54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_2e8a58:
    // 0x2e8a58: 0x24a5f4c0  addiu       $a1, $a1, -0xB40
    ctx->pc = 0x2e8a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964416));
label_2e8a5c:
    // 0x2e8a5c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2e8a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2e8a60:
    // 0x2e8a60: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e8a60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e8a64:
    // 0x2e8a64: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e8a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e8a68:
    // 0x2e8a68: 0x60f809  jalr        $v1
label_2e8a6c:
    if (ctx->pc == 0x2E8A6Cu) {
        ctx->pc = 0x2E8A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A68u;
        // 0x2e8a6c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8A70u;
        goto label_2e8a70;
    }
    ctx->pc = 0x2E8A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E8A70u);
        ctx->pc = 0x2E8A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A68u;
        // 0x2e8a6c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8A68u, 0x2E8A70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E8A70u;
label_2e8a70:
    // 0x2e8a70: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2e8a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2e8a74:
    // 0x2e8a74: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e8a78:
    if (ctx->pc == 0x2E8A78u) {
        ctx->pc = 0x2E8A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A74u;
        // 0x2e8a78: 0xae800004  sw          $zero, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8A7Cu;
        goto label_2e8a7c;
    }
    ctx->pc = 0x2E8A74u;
    {
        const bool branch_taken_0x2e8a74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8a74) {
            ctx->pc = 0x2E8A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8A74u;
            // 0x2e8a78: 0xae800004  sw          $zero, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8A90u;
            goto label_2e8a90;
        }
    }
    ctx->pc = 0x2E8A7Cu;
label_2e8a7c:
    // 0x2e8a7c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e8a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2e8a80:
    // 0x2e8a80: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2e8a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2e8a84:
    // 0x2e8a84: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2e8a88:
    if (ctx->pc == 0x2E8A88u) {
        ctx->pc = 0x2E8A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A84u;
        // 0x2e8a88: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8A8Cu;
        goto label_2e8a8c;
    }
    ctx->pc = 0x2E8A84u;
    {
        const bool branch_taken_0x2e8a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A84u;
        // 0x2e8a88: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a84) {
            ctx->pc = 0x2E8A98u;
            goto label_2e8a98;
        }
    }
    ctx->pc = 0x2E8A8Cu;
label_2e8a8c:
    // 0x2e8a8c: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x2e8a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_2e8a90:
    // 0x2e8a90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e8a90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8a94:
    // 0x2e8a94: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x2e8a94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_2e8a98:
    // 0x2e8a98: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2e8a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2e8a9c:
    // 0x2e8a9c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2e8a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_2e8aa0:
    // 0x2e8aa0: 0x24a5f4cc  addiu       $a1, $a1, -0xB34
    ctx->pc = 0x2e8aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964428));
label_2e8aa4:
    // 0x2e8aa4: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2e8aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2e8aa8:
    // 0x2e8aa8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e8aa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e8aac:
    // 0x2e8aac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e8aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e8ab0:
    // 0x2e8ab0: 0x60f809  jalr        $v1
label_2e8ab4:
    if (ctx->pc == 0x2E8AB4u) {
        ctx->pc = 0x2E8AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AB0u;
        // 0x2e8ab4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8AB8u;
        goto label_2e8ab8;
    }
    ctx->pc = 0x2E8AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E8AB8u);
        ctx->pc = 0x2E8AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AB0u;
        // 0x2e8ab4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8AB0u, 0x2E8AB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E8AB8u;
label_2e8ab8:
    // 0x2e8ab8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e8ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e8abc:
    // 0x2e8abc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e8abcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2e8ac0:
    // 0x2e8ac0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e8ac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e8ac4:
    // 0x2e8ac4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e8ac4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2e8ac8:
    // 0x2e8ac8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2e8ac8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e8acc:
    // 0x2e8acc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2e8accu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2e8ad0:
    // 0x2e8ad0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2e8ad0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e8ad4:
    // 0x2e8ad4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2e8ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2e8ad8:
    // 0x2e8ad8: 0x3e00008  jr          $ra
label_2e8adc:
    if (ctx->pc == 0x2E8ADCu) {
        ctx->pc = 0x2E8ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AD8u;
        // 0x2e8adc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8AE0u;
        goto label_fallthrough_0x2e8ad8;
    }
    ctx->pc = 0x2E8AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AD8u;
        // 0x2e8adc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e8ad8:
    ctx->pc = 0x2E8AE0u;
}
