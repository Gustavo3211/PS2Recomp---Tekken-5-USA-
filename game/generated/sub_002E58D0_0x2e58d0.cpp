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

// Function: sub_002E58D0
// Address: 0x2e58d0 - 0x2e6448
void sub_002E58D0_0x2e58d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E58D0_0x2e58d0");
#endif

    switch (ctx->pc) {
        case 0x2e58d0u: goto label_2e58d0;
        case 0x2e58d4u: goto label_2e58d4;
        case 0x2e58d8u: goto label_2e58d8;
        case 0x2e58dcu: goto label_2e58dc;
        case 0x2e58e0u: goto label_2e58e0;
        case 0x2e58e4u: goto label_2e58e4;
        case 0x2e58e8u: goto label_2e58e8;
        case 0x2e58ecu: goto label_2e58ec;
        case 0x2e58f0u: goto label_2e58f0;
        case 0x2e58f4u: goto label_2e58f4;
        case 0x2e58f8u: goto label_2e58f8;
        case 0x2e58fcu: goto label_2e58fc;
        case 0x2e5900u: goto label_2e5900;
        case 0x2e5904u: goto label_2e5904;
        case 0x2e5908u: goto label_2e5908;
        case 0x2e590cu: goto label_2e590c;
        case 0x2e5910u: goto label_2e5910;
        case 0x2e5914u: goto label_2e5914;
        case 0x2e5918u: goto label_2e5918;
        case 0x2e591cu: goto label_2e591c;
        case 0x2e5920u: goto label_2e5920;
        case 0x2e5924u: goto label_2e5924;
        case 0x2e5928u: goto label_2e5928;
        case 0x2e592cu: goto label_2e592c;
        case 0x2e5930u: goto label_2e5930;
        case 0x2e5934u: goto label_2e5934;
        case 0x2e5938u: goto label_2e5938;
        case 0x2e593cu: goto label_2e593c;
        case 0x2e5940u: goto label_2e5940;
        case 0x2e5944u: goto label_2e5944;
        case 0x2e5948u: goto label_2e5948;
        case 0x2e594cu: goto label_2e594c;
        case 0x2e5950u: goto label_2e5950;
        case 0x2e5954u: goto label_2e5954;
        case 0x2e5958u: goto label_2e5958;
        case 0x2e595cu: goto label_2e595c;
        case 0x2e5960u: goto label_2e5960;
        case 0x2e5964u: goto label_2e5964;
        case 0x2e5968u: goto label_2e5968;
        case 0x2e596cu: goto label_2e596c;
        case 0x2e5970u: goto label_2e5970;
        case 0x2e5974u: goto label_2e5974;
        case 0x2e5978u: goto label_2e5978;
        case 0x2e597cu: goto label_2e597c;
        case 0x2e5980u: goto label_2e5980;
        case 0x2e5984u: goto label_2e5984;
        case 0x2e5988u: goto label_2e5988;
        case 0x2e598cu: goto label_2e598c;
        case 0x2e5990u: goto label_2e5990;
        case 0x2e5994u: goto label_2e5994;
        case 0x2e5998u: goto label_2e5998;
        case 0x2e599cu: goto label_2e599c;
        case 0x2e59a0u: goto label_2e59a0;
        case 0x2e59a4u: goto label_2e59a4;
        case 0x2e59a8u: goto label_2e59a8;
        case 0x2e59acu: goto label_2e59ac;
        case 0x2e59b0u: goto label_2e59b0;
        case 0x2e59b4u: goto label_2e59b4;
        case 0x2e59b8u: goto label_2e59b8;
        case 0x2e59bcu: goto label_2e59bc;
        case 0x2e59c0u: goto label_2e59c0;
        case 0x2e59c4u: goto label_2e59c4;
        case 0x2e59c8u: goto label_2e59c8;
        case 0x2e59ccu: goto label_2e59cc;
        case 0x2e59d0u: goto label_2e59d0;
        case 0x2e59d4u: goto label_2e59d4;
        case 0x2e59d8u: goto label_2e59d8;
        case 0x2e59dcu: goto label_2e59dc;
        case 0x2e59e0u: goto label_2e59e0;
        case 0x2e59e4u: goto label_2e59e4;
        case 0x2e59e8u: goto label_2e59e8;
        case 0x2e59ecu: goto label_2e59ec;
        case 0x2e59f0u: goto label_2e59f0;
        case 0x2e59f4u: goto label_2e59f4;
        case 0x2e59f8u: goto label_2e59f8;
        case 0x2e59fcu: goto label_2e59fc;
        case 0x2e5a00u: goto label_2e5a00;
        case 0x2e5a04u: goto label_2e5a04;
        case 0x2e5a08u: goto label_2e5a08;
        case 0x2e5a0cu: goto label_2e5a0c;
        case 0x2e5a10u: goto label_2e5a10;
        case 0x2e5a14u: goto label_2e5a14;
        case 0x2e5a18u: goto label_2e5a18;
        case 0x2e5a1cu: goto label_2e5a1c;
        case 0x2e5a20u: goto label_2e5a20;
        case 0x2e5a24u: goto label_2e5a24;
        case 0x2e5a28u: goto label_2e5a28;
        case 0x2e5a2cu: goto label_2e5a2c;
        case 0x2e5a30u: goto label_2e5a30;
        case 0x2e5a34u: goto label_2e5a34;
        case 0x2e5a38u: goto label_2e5a38;
        case 0x2e5a3cu: goto label_2e5a3c;
        case 0x2e5a40u: goto label_2e5a40;
        case 0x2e5a44u: goto label_2e5a44;
        case 0x2e5a48u: goto label_2e5a48;
        case 0x2e5a4cu: goto label_2e5a4c;
        case 0x2e5a50u: goto label_2e5a50;
        case 0x2e5a54u: goto label_2e5a54;
        case 0x2e5a58u: goto label_2e5a58;
        case 0x2e5a5cu: goto label_2e5a5c;
        case 0x2e5a60u: goto label_2e5a60;
        case 0x2e5a64u: goto label_2e5a64;
        case 0x2e5a68u: goto label_2e5a68;
        case 0x2e5a6cu: goto label_2e5a6c;
        case 0x2e5a70u: goto label_2e5a70;
        case 0x2e5a74u: goto label_2e5a74;
        case 0x2e5a78u: goto label_2e5a78;
        case 0x2e5a7cu: goto label_2e5a7c;
        case 0x2e5a80u: goto label_2e5a80;
        case 0x2e5a84u: goto label_2e5a84;
        case 0x2e5a88u: goto label_2e5a88;
        case 0x2e5a8cu: goto label_2e5a8c;
        case 0x2e5a90u: goto label_2e5a90;
        case 0x2e5a94u: goto label_2e5a94;
        case 0x2e5a98u: goto label_2e5a98;
        case 0x2e5a9cu: goto label_2e5a9c;
        case 0x2e5aa0u: goto label_2e5aa0;
        case 0x2e5aa4u: goto label_2e5aa4;
        case 0x2e5aa8u: goto label_2e5aa8;
        case 0x2e5aacu: goto label_2e5aac;
        case 0x2e5ab0u: goto label_2e5ab0;
        case 0x2e5ab4u: goto label_2e5ab4;
        case 0x2e5ab8u: goto label_2e5ab8;
        case 0x2e5abcu: goto label_2e5abc;
        case 0x2e5ac0u: goto label_2e5ac0;
        case 0x2e5ac4u: goto label_2e5ac4;
        case 0x2e5ac8u: goto label_2e5ac8;
        case 0x2e5accu: goto label_2e5acc;
        case 0x2e5ad0u: goto label_2e5ad0;
        case 0x2e5ad4u: goto label_2e5ad4;
        case 0x2e5ad8u: goto label_2e5ad8;
        case 0x2e5adcu: goto label_2e5adc;
        case 0x2e5ae0u: goto label_2e5ae0;
        case 0x2e5ae4u: goto label_2e5ae4;
        case 0x2e5ae8u: goto label_2e5ae8;
        case 0x2e5aecu: goto label_2e5aec;
        case 0x2e5af0u: goto label_2e5af0;
        case 0x2e5af4u: goto label_2e5af4;
        case 0x2e5af8u: goto label_2e5af8;
        case 0x2e5afcu: goto label_2e5afc;
        case 0x2e5b00u: goto label_2e5b00;
        case 0x2e5b04u: goto label_2e5b04;
        case 0x2e5b08u: goto label_2e5b08;
        case 0x2e5b0cu: goto label_2e5b0c;
        case 0x2e5b10u: goto label_2e5b10;
        case 0x2e5b14u: goto label_2e5b14;
        case 0x2e5b18u: goto label_2e5b18;
        case 0x2e5b1cu: goto label_2e5b1c;
        case 0x2e5b20u: goto label_2e5b20;
        case 0x2e5b24u: goto label_2e5b24;
        case 0x2e5b28u: goto label_2e5b28;
        case 0x2e5b2cu: goto label_2e5b2c;
        case 0x2e5b30u: goto label_2e5b30;
        case 0x2e5b34u: goto label_2e5b34;
        case 0x2e5b38u: goto label_2e5b38;
        case 0x2e5b3cu: goto label_2e5b3c;
        case 0x2e5b40u: goto label_2e5b40;
        case 0x2e5b44u: goto label_2e5b44;
        case 0x2e5b48u: goto label_2e5b48;
        case 0x2e5b4cu: goto label_2e5b4c;
        case 0x2e5b50u: goto label_2e5b50;
        case 0x2e5b54u: goto label_2e5b54;
        case 0x2e5b58u: goto label_2e5b58;
        case 0x2e5b5cu: goto label_2e5b5c;
        case 0x2e5b60u: goto label_2e5b60;
        case 0x2e5b64u: goto label_2e5b64;
        case 0x2e5b68u: goto label_2e5b68;
        case 0x2e5b6cu: goto label_2e5b6c;
        case 0x2e5b70u: goto label_2e5b70;
        case 0x2e5b74u: goto label_2e5b74;
        case 0x2e5b78u: goto label_2e5b78;
        case 0x2e5b7cu: goto label_2e5b7c;
        case 0x2e5b80u: goto label_2e5b80;
        case 0x2e5b84u: goto label_2e5b84;
        case 0x2e5b88u: goto label_2e5b88;
        case 0x2e5b8cu: goto label_2e5b8c;
        case 0x2e5b90u: goto label_2e5b90;
        case 0x2e5b94u: goto label_2e5b94;
        case 0x2e5b98u: goto label_2e5b98;
        case 0x2e5b9cu: goto label_2e5b9c;
        case 0x2e5ba0u: goto label_2e5ba0;
        case 0x2e5ba4u: goto label_2e5ba4;
        case 0x2e5ba8u: goto label_2e5ba8;
        case 0x2e5bacu: goto label_2e5bac;
        case 0x2e5bb0u: goto label_2e5bb0;
        case 0x2e5bb4u: goto label_2e5bb4;
        case 0x2e5bb8u: goto label_2e5bb8;
        case 0x2e5bbcu: goto label_2e5bbc;
        case 0x2e5bc0u: goto label_2e5bc0;
        case 0x2e5bc4u: goto label_2e5bc4;
        case 0x2e5bc8u: goto label_2e5bc8;
        case 0x2e5bccu: goto label_2e5bcc;
        case 0x2e5bd0u: goto label_2e5bd0;
        case 0x2e5bd4u: goto label_2e5bd4;
        case 0x2e5bd8u: goto label_2e5bd8;
        case 0x2e5bdcu: goto label_2e5bdc;
        case 0x2e5be0u: goto label_2e5be0;
        case 0x2e5be4u: goto label_2e5be4;
        case 0x2e5be8u: goto label_2e5be8;
        case 0x2e5becu: goto label_2e5bec;
        case 0x2e5bf0u: goto label_2e5bf0;
        case 0x2e5bf4u: goto label_2e5bf4;
        case 0x2e5bf8u: goto label_2e5bf8;
        case 0x2e5bfcu: goto label_2e5bfc;
        case 0x2e5c00u: goto label_2e5c00;
        case 0x2e5c04u: goto label_2e5c04;
        case 0x2e5c08u: goto label_2e5c08;
        case 0x2e5c0cu: goto label_2e5c0c;
        case 0x2e5c10u: goto label_2e5c10;
        case 0x2e5c14u: goto label_2e5c14;
        case 0x2e5c18u: goto label_2e5c18;
        case 0x2e5c1cu: goto label_2e5c1c;
        case 0x2e5c20u: goto label_2e5c20;
        case 0x2e5c24u: goto label_2e5c24;
        case 0x2e5c28u: goto label_2e5c28;
        case 0x2e5c2cu: goto label_2e5c2c;
        case 0x2e5c30u: goto label_2e5c30;
        case 0x2e5c34u: goto label_2e5c34;
        case 0x2e5c38u: goto label_2e5c38;
        case 0x2e5c3cu: goto label_2e5c3c;
        case 0x2e5c40u: goto label_2e5c40;
        case 0x2e5c44u: goto label_2e5c44;
        case 0x2e5c48u: goto label_2e5c48;
        case 0x2e5c4cu: goto label_2e5c4c;
        case 0x2e5c50u: goto label_2e5c50;
        case 0x2e5c54u: goto label_2e5c54;
        case 0x2e5c58u: goto label_2e5c58;
        case 0x2e5c5cu: goto label_2e5c5c;
        case 0x2e5c60u: goto label_2e5c60;
        case 0x2e5c64u: goto label_2e5c64;
        case 0x2e5c68u: goto label_2e5c68;
        case 0x2e5c6cu: goto label_2e5c6c;
        case 0x2e5c70u: goto label_2e5c70;
        case 0x2e5c74u: goto label_2e5c74;
        case 0x2e5c78u: goto label_2e5c78;
        case 0x2e5c7cu: goto label_2e5c7c;
        case 0x2e5c80u: goto label_2e5c80;
        case 0x2e5c84u: goto label_2e5c84;
        case 0x2e5c88u: goto label_2e5c88;
        case 0x2e5c8cu: goto label_2e5c8c;
        case 0x2e5c90u: goto label_2e5c90;
        case 0x2e5c94u: goto label_2e5c94;
        case 0x2e5c98u: goto label_2e5c98;
        case 0x2e5c9cu: goto label_2e5c9c;
        case 0x2e5ca0u: goto label_2e5ca0;
        case 0x2e5ca4u: goto label_2e5ca4;
        case 0x2e5ca8u: goto label_2e5ca8;
        case 0x2e5cacu: goto label_2e5cac;
        case 0x2e5cb0u: goto label_2e5cb0;
        case 0x2e5cb4u: goto label_2e5cb4;
        case 0x2e5cb8u: goto label_2e5cb8;
        case 0x2e5cbcu: goto label_2e5cbc;
        case 0x2e5cc0u: goto label_2e5cc0;
        case 0x2e5cc4u: goto label_2e5cc4;
        case 0x2e5cc8u: goto label_2e5cc8;
        case 0x2e5cccu: goto label_2e5ccc;
        case 0x2e5cd0u: goto label_2e5cd0;
        case 0x2e5cd4u: goto label_2e5cd4;
        case 0x2e5cd8u: goto label_2e5cd8;
        case 0x2e5cdcu: goto label_2e5cdc;
        case 0x2e5ce0u: goto label_2e5ce0;
        case 0x2e5ce4u: goto label_2e5ce4;
        case 0x2e5ce8u: goto label_2e5ce8;
        case 0x2e5cecu: goto label_2e5cec;
        case 0x2e5cf0u: goto label_2e5cf0;
        case 0x2e5cf4u: goto label_2e5cf4;
        case 0x2e5cf8u: goto label_2e5cf8;
        case 0x2e5cfcu: goto label_2e5cfc;
        case 0x2e5d00u: goto label_2e5d00;
        case 0x2e5d04u: goto label_2e5d04;
        case 0x2e5d08u: goto label_2e5d08;
        case 0x2e5d0cu: goto label_2e5d0c;
        case 0x2e5d10u: goto label_2e5d10;
        case 0x2e5d14u: goto label_2e5d14;
        case 0x2e5d18u: goto label_2e5d18;
        case 0x2e5d1cu: goto label_2e5d1c;
        case 0x2e5d20u: goto label_2e5d20;
        case 0x2e5d24u: goto label_2e5d24;
        case 0x2e5d28u: goto label_2e5d28;
        case 0x2e5d2cu: goto label_2e5d2c;
        case 0x2e5d30u: goto label_2e5d30;
        case 0x2e5d34u: goto label_2e5d34;
        case 0x2e5d38u: goto label_2e5d38;
        case 0x2e5d3cu: goto label_2e5d3c;
        case 0x2e5d40u: goto label_2e5d40;
        case 0x2e5d44u: goto label_2e5d44;
        case 0x2e5d48u: goto label_2e5d48;
        case 0x2e5d4cu: goto label_2e5d4c;
        case 0x2e5d50u: goto label_2e5d50;
        case 0x2e5d54u: goto label_2e5d54;
        case 0x2e5d58u: goto label_2e5d58;
        case 0x2e5d5cu: goto label_2e5d5c;
        case 0x2e5d60u: goto label_2e5d60;
        case 0x2e5d64u: goto label_2e5d64;
        case 0x2e5d68u: goto label_2e5d68;
        case 0x2e5d6cu: goto label_2e5d6c;
        case 0x2e5d70u: goto label_2e5d70;
        case 0x2e5d74u: goto label_2e5d74;
        case 0x2e5d78u: goto label_2e5d78;
        case 0x2e5d7cu: goto label_2e5d7c;
        case 0x2e5d80u: goto label_2e5d80;
        case 0x2e5d84u: goto label_2e5d84;
        case 0x2e5d88u: goto label_2e5d88;
        case 0x2e5d8cu: goto label_2e5d8c;
        case 0x2e5d90u: goto label_2e5d90;
        case 0x2e5d94u: goto label_2e5d94;
        case 0x2e5d98u: goto label_2e5d98;
        case 0x2e5d9cu: goto label_2e5d9c;
        case 0x2e5da0u: goto label_2e5da0;
        case 0x2e5da4u: goto label_2e5da4;
        case 0x2e5da8u: goto label_2e5da8;
        case 0x2e5dacu: goto label_2e5dac;
        case 0x2e5db0u: goto label_2e5db0;
        case 0x2e5db4u: goto label_2e5db4;
        case 0x2e5db8u: goto label_2e5db8;
        case 0x2e5dbcu: goto label_2e5dbc;
        case 0x2e5dc0u: goto label_2e5dc0;
        case 0x2e5dc4u: goto label_2e5dc4;
        case 0x2e5dc8u: goto label_2e5dc8;
        case 0x2e5dccu: goto label_2e5dcc;
        case 0x2e5dd0u: goto label_2e5dd0;
        case 0x2e5dd4u: goto label_2e5dd4;
        case 0x2e5dd8u: goto label_2e5dd8;
        case 0x2e5ddcu: goto label_2e5ddc;
        case 0x2e5de0u: goto label_2e5de0;
        case 0x2e5de4u: goto label_2e5de4;
        case 0x2e5de8u: goto label_2e5de8;
        case 0x2e5decu: goto label_2e5dec;
        case 0x2e5df0u: goto label_2e5df0;
        case 0x2e5df4u: goto label_2e5df4;
        case 0x2e5df8u: goto label_2e5df8;
        case 0x2e5dfcu: goto label_2e5dfc;
        case 0x2e5e00u: goto label_2e5e00;
        case 0x2e5e04u: goto label_2e5e04;
        case 0x2e5e08u: goto label_2e5e08;
        case 0x2e5e0cu: goto label_2e5e0c;
        case 0x2e5e10u: goto label_2e5e10;
        case 0x2e5e14u: goto label_2e5e14;
        case 0x2e5e18u: goto label_2e5e18;
        case 0x2e5e1cu: goto label_2e5e1c;
        case 0x2e5e20u: goto label_2e5e20;
        case 0x2e5e24u: goto label_2e5e24;
        case 0x2e5e28u: goto label_2e5e28;
        case 0x2e5e2cu: goto label_2e5e2c;
        case 0x2e5e30u: goto label_2e5e30;
        case 0x2e5e34u: goto label_2e5e34;
        case 0x2e5e38u: goto label_2e5e38;
        case 0x2e5e3cu: goto label_2e5e3c;
        case 0x2e5e40u: goto label_2e5e40;
        case 0x2e5e44u: goto label_2e5e44;
        case 0x2e5e48u: goto label_2e5e48;
        case 0x2e5e4cu: goto label_2e5e4c;
        case 0x2e5e50u: goto label_2e5e50;
        case 0x2e5e54u: goto label_2e5e54;
        case 0x2e5e58u: goto label_2e5e58;
        case 0x2e5e5cu: goto label_2e5e5c;
        case 0x2e5e60u: goto label_2e5e60;
        case 0x2e5e64u: goto label_2e5e64;
        case 0x2e5e68u: goto label_2e5e68;
        case 0x2e5e6cu: goto label_2e5e6c;
        case 0x2e5e70u: goto label_2e5e70;
        case 0x2e5e74u: goto label_2e5e74;
        case 0x2e5e78u: goto label_2e5e78;
        case 0x2e5e7cu: goto label_2e5e7c;
        case 0x2e5e80u: goto label_2e5e80;
        case 0x2e5e84u: goto label_2e5e84;
        case 0x2e5e88u: goto label_2e5e88;
        case 0x2e5e8cu: goto label_2e5e8c;
        case 0x2e5e90u: goto label_2e5e90;
        case 0x2e5e94u: goto label_2e5e94;
        case 0x2e5e98u: goto label_2e5e98;
        case 0x2e5e9cu: goto label_2e5e9c;
        case 0x2e5ea0u: goto label_2e5ea0;
        case 0x2e5ea4u: goto label_2e5ea4;
        case 0x2e5ea8u: goto label_2e5ea8;
        case 0x2e5eacu: goto label_2e5eac;
        case 0x2e5eb0u: goto label_2e5eb0;
        case 0x2e5eb4u: goto label_2e5eb4;
        case 0x2e5eb8u: goto label_2e5eb8;
        case 0x2e5ebcu: goto label_2e5ebc;
        case 0x2e5ec0u: goto label_2e5ec0;
        case 0x2e5ec4u: goto label_2e5ec4;
        case 0x2e5ec8u: goto label_2e5ec8;
        case 0x2e5eccu: goto label_2e5ecc;
        case 0x2e5ed0u: goto label_2e5ed0;
        case 0x2e5ed4u: goto label_2e5ed4;
        case 0x2e5ed8u: goto label_2e5ed8;
        case 0x2e5edcu: goto label_2e5edc;
        case 0x2e5ee0u: goto label_2e5ee0;
        case 0x2e5ee4u: goto label_2e5ee4;
        case 0x2e5ee8u: goto label_2e5ee8;
        case 0x2e5eecu: goto label_2e5eec;
        case 0x2e5ef0u: goto label_2e5ef0;
        case 0x2e5ef4u: goto label_2e5ef4;
        case 0x2e5ef8u: goto label_2e5ef8;
        case 0x2e5efcu: goto label_2e5efc;
        case 0x2e5f00u: goto label_2e5f00;
        case 0x2e5f04u: goto label_2e5f04;
        case 0x2e5f08u: goto label_2e5f08;
        case 0x2e5f0cu: goto label_2e5f0c;
        case 0x2e5f10u: goto label_2e5f10;
        case 0x2e5f14u: goto label_2e5f14;
        case 0x2e5f18u: goto label_2e5f18;
        case 0x2e5f1cu: goto label_2e5f1c;
        case 0x2e5f20u: goto label_2e5f20;
        case 0x2e5f24u: goto label_2e5f24;
        case 0x2e5f28u: goto label_2e5f28;
        case 0x2e5f2cu: goto label_2e5f2c;
        case 0x2e5f30u: goto label_2e5f30;
        case 0x2e5f34u: goto label_2e5f34;
        case 0x2e5f38u: goto label_2e5f38;
        case 0x2e5f3cu: goto label_2e5f3c;
        case 0x2e5f40u: goto label_2e5f40;
        case 0x2e5f44u: goto label_2e5f44;
        case 0x2e5f48u: goto label_2e5f48;
        case 0x2e5f4cu: goto label_2e5f4c;
        case 0x2e5f50u: goto label_2e5f50;
        case 0x2e5f54u: goto label_2e5f54;
        case 0x2e5f58u: goto label_2e5f58;
        case 0x2e5f5cu: goto label_2e5f5c;
        case 0x2e5f60u: goto label_2e5f60;
        case 0x2e5f64u: goto label_2e5f64;
        case 0x2e5f68u: goto label_2e5f68;
        case 0x2e5f6cu: goto label_2e5f6c;
        case 0x2e5f70u: goto label_2e5f70;
        case 0x2e5f74u: goto label_2e5f74;
        case 0x2e5f78u: goto label_2e5f78;
        case 0x2e5f7cu: goto label_2e5f7c;
        case 0x2e5f80u: goto label_2e5f80;
        case 0x2e5f84u: goto label_2e5f84;
        case 0x2e5f88u: goto label_2e5f88;
        case 0x2e5f8cu: goto label_2e5f8c;
        case 0x2e5f90u: goto label_2e5f90;
        case 0x2e5f94u: goto label_2e5f94;
        case 0x2e5f98u: goto label_2e5f98;
        case 0x2e5f9cu: goto label_2e5f9c;
        case 0x2e5fa0u: goto label_2e5fa0;
        case 0x2e5fa4u: goto label_2e5fa4;
        case 0x2e5fa8u: goto label_2e5fa8;
        case 0x2e5facu: goto label_2e5fac;
        case 0x2e5fb0u: goto label_2e5fb0;
        case 0x2e5fb4u: goto label_2e5fb4;
        case 0x2e5fb8u: goto label_2e5fb8;
        case 0x2e5fbcu: goto label_2e5fbc;
        case 0x2e5fc0u: goto label_2e5fc0;
        case 0x2e5fc4u: goto label_2e5fc4;
        case 0x2e5fc8u: goto label_2e5fc8;
        case 0x2e5fccu: goto label_2e5fcc;
        case 0x2e5fd0u: goto label_2e5fd0;
        case 0x2e5fd4u: goto label_2e5fd4;
        case 0x2e5fd8u: goto label_2e5fd8;
        case 0x2e5fdcu: goto label_2e5fdc;
        case 0x2e5fe0u: goto label_2e5fe0;
        case 0x2e5fe4u: goto label_2e5fe4;
        case 0x2e5fe8u: goto label_2e5fe8;
        case 0x2e5fecu: goto label_2e5fec;
        case 0x2e5ff0u: goto label_2e5ff0;
        case 0x2e5ff4u: goto label_2e5ff4;
        case 0x2e5ff8u: goto label_2e5ff8;
        case 0x2e5ffcu: goto label_2e5ffc;
        case 0x2e6000u: goto label_2e6000;
        case 0x2e6004u: goto label_2e6004;
        case 0x2e6008u: goto label_2e6008;
        case 0x2e600cu: goto label_2e600c;
        case 0x2e6010u: goto label_2e6010;
        case 0x2e6014u: goto label_2e6014;
        case 0x2e6018u: goto label_2e6018;
        case 0x2e601cu: goto label_2e601c;
        case 0x2e6020u: goto label_2e6020;
        case 0x2e6024u: goto label_2e6024;
        case 0x2e6028u: goto label_2e6028;
        case 0x2e602cu: goto label_2e602c;
        case 0x2e6030u: goto label_2e6030;
        case 0x2e6034u: goto label_2e6034;
        case 0x2e6038u: goto label_2e6038;
        case 0x2e603cu: goto label_2e603c;
        case 0x2e6040u: goto label_2e6040;
        case 0x2e6044u: goto label_2e6044;
        case 0x2e6048u: goto label_2e6048;
        case 0x2e604cu: goto label_2e604c;
        case 0x2e6050u: goto label_2e6050;
        case 0x2e6054u: goto label_2e6054;
        case 0x2e6058u: goto label_2e6058;
        case 0x2e605cu: goto label_2e605c;
        case 0x2e6060u: goto label_2e6060;
        case 0x2e6064u: goto label_2e6064;
        case 0x2e6068u: goto label_2e6068;
        case 0x2e606cu: goto label_2e606c;
        case 0x2e6070u: goto label_2e6070;
        case 0x2e6074u: goto label_2e6074;
        case 0x2e6078u: goto label_2e6078;
        case 0x2e607cu: goto label_2e607c;
        case 0x2e6080u: goto label_2e6080;
        case 0x2e6084u: goto label_2e6084;
        case 0x2e6088u: goto label_2e6088;
        case 0x2e608cu: goto label_2e608c;
        case 0x2e6090u: goto label_2e6090;
        case 0x2e6094u: goto label_2e6094;
        case 0x2e6098u: goto label_2e6098;
        case 0x2e609cu: goto label_2e609c;
        case 0x2e60a0u: goto label_2e60a0;
        case 0x2e60a4u: goto label_2e60a4;
        case 0x2e60a8u: goto label_2e60a8;
        case 0x2e60acu: goto label_2e60ac;
        case 0x2e60b0u: goto label_2e60b0;
        case 0x2e60b4u: goto label_2e60b4;
        case 0x2e60b8u: goto label_2e60b8;
        case 0x2e60bcu: goto label_2e60bc;
        case 0x2e60c0u: goto label_2e60c0;
        case 0x2e60c4u: goto label_2e60c4;
        case 0x2e60c8u: goto label_2e60c8;
        case 0x2e60ccu: goto label_2e60cc;
        case 0x2e60d0u: goto label_2e60d0;
        case 0x2e60d4u: goto label_2e60d4;
        case 0x2e60d8u: goto label_2e60d8;
        case 0x2e60dcu: goto label_2e60dc;
        case 0x2e60e0u: goto label_2e60e0;
        case 0x2e60e4u: goto label_2e60e4;
        case 0x2e60e8u: goto label_2e60e8;
        case 0x2e60ecu: goto label_2e60ec;
        case 0x2e60f0u: goto label_2e60f0;
        case 0x2e60f4u: goto label_2e60f4;
        case 0x2e60f8u: goto label_2e60f8;
        case 0x2e60fcu: goto label_2e60fc;
        case 0x2e6100u: goto label_2e6100;
        case 0x2e6104u: goto label_2e6104;
        case 0x2e6108u: goto label_2e6108;
        case 0x2e610cu: goto label_2e610c;
        case 0x2e6110u: goto label_2e6110;
        case 0x2e6114u: goto label_2e6114;
        case 0x2e6118u: goto label_2e6118;
        case 0x2e611cu: goto label_2e611c;
        case 0x2e6120u: goto label_2e6120;
        case 0x2e6124u: goto label_2e6124;
        case 0x2e6128u: goto label_2e6128;
        case 0x2e612cu: goto label_2e612c;
        case 0x2e6130u: goto label_2e6130;
        case 0x2e6134u: goto label_2e6134;
        case 0x2e6138u: goto label_2e6138;
        case 0x2e613cu: goto label_2e613c;
        case 0x2e6140u: goto label_2e6140;
        case 0x2e6144u: goto label_2e6144;
        case 0x2e6148u: goto label_2e6148;
        case 0x2e614cu: goto label_2e614c;
        case 0x2e6150u: goto label_2e6150;
        case 0x2e6154u: goto label_2e6154;
        case 0x2e6158u: goto label_2e6158;
        case 0x2e615cu: goto label_2e615c;
        case 0x2e6160u: goto label_2e6160;
        case 0x2e6164u: goto label_2e6164;
        case 0x2e6168u: goto label_2e6168;
        case 0x2e616cu: goto label_2e616c;
        case 0x2e6170u: goto label_2e6170;
        case 0x2e6174u: goto label_2e6174;
        case 0x2e6178u: goto label_2e6178;
        case 0x2e617cu: goto label_2e617c;
        case 0x2e6180u: goto label_2e6180;
        case 0x2e6184u: goto label_2e6184;
        case 0x2e6188u: goto label_2e6188;
        case 0x2e618cu: goto label_2e618c;
        case 0x2e6190u: goto label_2e6190;
        case 0x2e6194u: goto label_2e6194;
        case 0x2e6198u: goto label_2e6198;
        case 0x2e619cu: goto label_2e619c;
        case 0x2e61a0u: goto label_2e61a0;
        case 0x2e61a4u: goto label_2e61a4;
        case 0x2e61a8u: goto label_2e61a8;
        case 0x2e61acu: goto label_2e61ac;
        case 0x2e61b0u: goto label_2e61b0;
        case 0x2e61b4u: goto label_2e61b4;
        case 0x2e61b8u: goto label_2e61b8;
        case 0x2e61bcu: goto label_2e61bc;
        case 0x2e61c0u: goto label_2e61c0;
        case 0x2e61c4u: goto label_2e61c4;
        case 0x2e61c8u: goto label_2e61c8;
        case 0x2e61ccu: goto label_2e61cc;
        case 0x2e61d0u: goto label_2e61d0;
        case 0x2e61d4u: goto label_2e61d4;
        case 0x2e61d8u: goto label_2e61d8;
        case 0x2e61dcu: goto label_2e61dc;
        case 0x2e61e0u: goto label_2e61e0;
        case 0x2e61e4u: goto label_2e61e4;
        case 0x2e61e8u: goto label_2e61e8;
        case 0x2e61ecu: goto label_2e61ec;
        case 0x2e61f0u: goto label_2e61f0;
        case 0x2e61f4u: goto label_2e61f4;
        case 0x2e61f8u: goto label_2e61f8;
        case 0x2e61fcu: goto label_2e61fc;
        case 0x2e6200u: goto label_2e6200;
        case 0x2e6204u: goto label_2e6204;
        case 0x2e6208u: goto label_2e6208;
        case 0x2e620cu: goto label_2e620c;
        case 0x2e6210u: goto label_2e6210;
        case 0x2e6214u: goto label_2e6214;
        case 0x2e6218u: goto label_2e6218;
        case 0x2e621cu: goto label_2e621c;
        case 0x2e6220u: goto label_2e6220;
        case 0x2e6224u: goto label_2e6224;
        case 0x2e6228u: goto label_2e6228;
        case 0x2e622cu: goto label_2e622c;
        case 0x2e6230u: goto label_2e6230;
        case 0x2e6234u: goto label_2e6234;
        case 0x2e6238u: goto label_2e6238;
        case 0x2e623cu: goto label_2e623c;
        case 0x2e6240u: goto label_2e6240;
        case 0x2e6244u: goto label_2e6244;
        case 0x2e6248u: goto label_2e6248;
        case 0x2e624cu: goto label_2e624c;
        case 0x2e6250u: goto label_2e6250;
        case 0x2e6254u: goto label_2e6254;
        case 0x2e6258u: goto label_2e6258;
        case 0x2e625cu: goto label_2e625c;
        case 0x2e6260u: goto label_2e6260;
        case 0x2e6264u: goto label_2e6264;
        case 0x2e6268u: goto label_2e6268;
        case 0x2e626cu: goto label_2e626c;
        case 0x2e6270u: goto label_2e6270;
        case 0x2e6274u: goto label_2e6274;
        case 0x2e6278u: goto label_2e6278;
        case 0x2e627cu: goto label_2e627c;
        case 0x2e6280u: goto label_2e6280;
        case 0x2e6284u: goto label_2e6284;
        case 0x2e6288u: goto label_2e6288;
        case 0x2e628cu: goto label_2e628c;
        case 0x2e6290u: goto label_2e6290;
        case 0x2e6294u: goto label_2e6294;
        case 0x2e6298u: goto label_2e6298;
        case 0x2e629cu: goto label_2e629c;
        case 0x2e62a0u: goto label_2e62a0;
        case 0x2e62a4u: goto label_2e62a4;
        case 0x2e62a8u: goto label_2e62a8;
        case 0x2e62acu: goto label_2e62ac;
        case 0x2e62b0u: goto label_2e62b0;
        case 0x2e62b4u: goto label_2e62b4;
        case 0x2e62b8u: goto label_2e62b8;
        case 0x2e62bcu: goto label_2e62bc;
        case 0x2e62c0u: goto label_2e62c0;
        case 0x2e62c4u: goto label_2e62c4;
        case 0x2e62c8u: goto label_2e62c8;
        case 0x2e62ccu: goto label_2e62cc;
        case 0x2e62d0u: goto label_2e62d0;
        case 0x2e62d4u: goto label_2e62d4;
        case 0x2e62d8u: goto label_2e62d8;
        case 0x2e62dcu: goto label_2e62dc;
        case 0x2e62e0u: goto label_2e62e0;
        case 0x2e62e4u: goto label_2e62e4;
        case 0x2e62e8u: goto label_2e62e8;
        case 0x2e62ecu: goto label_2e62ec;
        case 0x2e62f0u: goto label_2e62f0;
        case 0x2e62f4u: goto label_2e62f4;
        case 0x2e62f8u: goto label_2e62f8;
        case 0x2e62fcu: goto label_2e62fc;
        case 0x2e6300u: goto label_2e6300;
        case 0x2e6304u: goto label_2e6304;
        case 0x2e6308u: goto label_2e6308;
        case 0x2e630cu: goto label_2e630c;
        case 0x2e6310u: goto label_2e6310;
        case 0x2e6314u: goto label_2e6314;
        case 0x2e6318u: goto label_2e6318;
        case 0x2e631cu: goto label_2e631c;
        case 0x2e6320u: goto label_2e6320;
        case 0x2e6324u: goto label_2e6324;
        case 0x2e6328u: goto label_2e6328;
        case 0x2e632cu: goto label_2e632c;
        case 0x2e6330u: goto label_2e6330;
        case 0x2e6334u: goto label_2e6334;
        case 0x2e6338u: goto label_2e6338;
        case 0x2e633cu: goto label_2e633c;
        case 0x2e6340u: goto label_2e6340;
        case 0x2e6344u: goto label_2e6344;
        case 0x2e6348u: goto label_2e6348;
        case 0x2e634cu: goto label_2e634c;
        case 0x2e6350u: goto label_2e6350;
        case 0x2e6354u: goto label_2e6354;
        case 0x2e6358u: goto label_2e6358;
        case 0x2e635cu: goto label_2e635c;
        case 0x2e6360u: goto label_2e6360;
        case 0x2e6364u: goto label_2e6364;
        case 0x2e6368u: goto label_2e6368;
        case 0x2e636cu: goto label_2e636c;
        case 0x2e6370u: goto label_2e6370;
        case 0x2e6374u: goto label_2e6374;
        case 0x2e6378u: goto label_2e6378;
        case 0x2e637cu: goto label_2e637c;
        case 0x2e6380u: goto label_2e6380;
        case 0x2e6384u: goto label_2e6384;
        case 0x2e6388u: goto label_2e6388;
        case 0x2e638cu: goto label_2e638c;
        case 0x2e6390u: goto label_2e6390;
        case 0x2e6394u: goto label_2e6394;
        case 0x2e6398u: goto label_2e6398;
        case 0x2e639cu: goto label_2e639c;
        case 0x2e63a0u: goto label_2e63a0;
        case 0x2e63a4u: goto label_2e63a4;
        case 0x2e63a8u: goto label_2e63a8;
        case 0x2e63acu: goto label_2e63ac;
        case 0x2e63b0u: goto label_2e63b0;
        case 0x2e63b4u: goto label_2e63b4;
        case 0x2e63b8u: goto label_2e63b8;
        case 0x2e63bcu: goto label_2e63bc;
        case 0x2e63c0u: goto label_2e63c0;
        case 0x2e63c4u: goto label_2e63c4;
        case 0x2e63c8u: goto label_2e63c8;
        case 0x2e63ccu: goto label_2e63cc;
        case 0x2e63d0u: goto label_2e63d0;
        case 0x2e63d4u: goto label_2e63d4;
        case 0x2e63d8u: goto label_2e63d8;
        case 0x2e63dcu: goto label_2e63dc;
        case 0x2e63e0u: goto label_2e63e0;
        case 0x2e63e4u: goto label_2e63e4;
        case 0x2e63e8u: goto label_2e63e8;
        case 0x2e63ecu: goto label_2e63ec;
        case 0x2e63f0u: goto label_2e63f0;
        case 0x2e63f4u: goto label_2e63f4;
        case 0x2e63f8u: goto label_2e63f8;
        case 0x2e63fcu: goto label_2e63fc;
        case 0x2e6400u: goto label_2e6400;
        case 0x2e6404u: goto label_2e6404;
        case 0x2e6408u: goto label_2e6408;
        case 0x2e640cu: goto label_2e640c;
        case 0x2e6410u: goto label_2e6410;
        case 0x2e6414u: goto label_2e6414;
        case 0x2e6418u: goto label_2e6418;
        case 0x2e641cu: goto label_2e641c;
        case 0x2e6420u: goto label_2e6420;
        case 0x2e6424u: goto label_2e6424;
        case 0x2e6428u: goto label_2e6428;
        case 0x2e642cu: goto label_2e642c;
        case 0x2e6430u: goto label_2e6430;
        case 0x2e6434u: goto label_2e6434;
        case 0x2e6438u: goto label_2e6438;
        case 0x2e643cu: goto label_2e643c;
        case 0x2e6440u: goto label_2e6440;
        case 0x2e6444u: goto label_2e6444;
        default: break;
    }

    ctx->pc = 0x2e58d0u;

label_2e58d0:
    // 0x2e58d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2e58d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2e58d4:
    // 0x2e58d4: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2e58d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_2e58d8:
    // 0x2e58d8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2e58d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2e58dc:
    // 0x2e58dc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2e58dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_2e58e0:
    // 0x2e58e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e58e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e58e4:
    // 0x2e58e4: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2e58e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_2e58e8:
    // 0x2e58e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e58e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e58ec:
    // 0x2e58ec: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2e58ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_2e58f0:
    // 0x2e58f0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2e58f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_2e58f4:
    // 0x2e58f4: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2e58f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
label_2e58f8:
    // 0x2e58f8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2e58f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_2e58fc:
    // 0x2e58fc: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x2e58fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
label_2e5900:
    // 0x2e5900: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2e5900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_2e5904:
    // 0x2e5904: 0x12600022  beqz        $s3, . + 4 + (0x22 << 2)
label_2e5908:
    if (ctx->pc == 0x2E5908u) {
        ctx->pc = 0x2E5908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5904u;
        // 0x2e5908: 0xffbf0088  sd          $ra, 0x88($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E590Cu;
        goto label_2e590c;
    }
    ctx->pc = 0x2E5904u;
    {
        const bool branch_taken_0x2e5904 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5904u;
        // 0x2e5908: 0xffbf0088  sd          $ra, 0x88($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5904) {
            ctx->pc = 0x2E5990u;
            goto label_2e5990;
        }
    }
    ctx->pc = 0x2E590Cu;
label_2e590c:
    // 0x2e590c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e590cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e5910:
    // 0x2e5910: 0x12320008  beq         $s1, $s2, . + 4 + (0x8 << 2)
label_2e5914:
    if (ctx->pc == 0x2E5914u) {
        ctx->pc = 0x2E5914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5910u;
        // 0x2e5914: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5918u;
        goto label_2e5918;
    }
    ctx->pc = 0x2E5910u;
    {
        const bool branch_taken_0x2e5910 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x2E5914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5910u;
        // 0x2e5914: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5910) {
            ctx->pc = 0x2E5934u;
            goto label_2e5934;
        }
    }
    ctx->pc = 0x2E5918u;
label_2e5918:
    // 0x2e5918: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2e5918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2e591c:
    // 0x2e591c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e591cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e5920:
    // 0x2e5920: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2e5920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2e5924:
    // 0x2e5924: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e5924u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e5928:
    // 0x2e5928: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e5928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e592c:
    // 0x2e592c: 0x60f809  jalr        $v1
label_2e5930:
    if (ctx->pc == 0x2E5930u) {
        ctx->pc = 0x2E5930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E592Cu;
        // 0x2e5930: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5934u;
        goto label_2e5934;
    }
    ctx->pc = 0x2E592Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E5934u);
        ctx->pc = 0x2E5930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E592Cu;
        // 0x2e5930: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E592Cu, 0x2E5934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E5934u;
label_2e5934:
    // 0x2e5934: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e5934u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2e5938:
    // 0x2e5938: 0x2a220009  slti        $v0, $s1, 0x9
    ctx->pc = 0x2e5938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
label_2e593c:
    // 0x2e593c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_2e5940:
    if (ctx->pc == 0x2E5940u) {
        ctx->pc = 0x2E5940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E593Cu;
        // 0x2e5940: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5944u;
        goto label_2e5944;
    }
    ctx->pc = 0x2E593Cu;
    {
        const bool branch_taken_0x2e593c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E593Cu;
        // 0x2e5940: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e593c) {
            ctx->pc = 0x2E5910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5910;
        }
    }
    ctx->pc = 0x2E5944u;
label_2e5944:
    // 0x2e5944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5948:
    // 0x2e5948: 0xc0a5b64  jal         func_296D90
label_2e594c:
    if (ctx->pc == 0x2E594Cu) {
        ctx->pc = 0x2E594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5948u;
        // 0x2e594c: 0x24a5fec0  addiu       $a1, $a1, -0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5950u;
        goto label_2e5950;
    }
    ctx->pc = 0x2E5948u;
    SET_GPR_U32(ctx, 31, 0x2E5950u);
    ctx->pc = 0x2E594Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5948u;
    // 0x2e594c: 0x24a5fec0  addiu       $a1, $a1, -0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5948u, 0x2E5950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5950u;
label_2e5950:
    // 0x2e5950: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5954:
    // 0x2e5954: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e5958:
    if (ctx->pc == 0x2E5958u) {
        ctx->pc = 0x2E5958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5954u;
        // 0x2e5958: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E595Cu;
        goto label_2e595c;
    }
    ctx->pc = 0x2E5954u;
    {
        const bool branch_taken_0x2e5954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5954u;
        // 0x2e5958: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5954) {
            ctx->pc = 0x2E5968u;
            goto label_2e5968;
        }
    }
    ctx->pc = 0x2E595Cu;
label_2e595c:
    // 0x2e595c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e595cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2e5960:
    // 0x2e5960: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e5964:
    // 0x2e5964: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e5964u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e5968:
    // 0x2e5968: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e5968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e596c:
    // 0x2e596c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e596cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5970:
    // 0x2e5970: 0xc0a5b64  jal         func_296D90
label_2e5974:
    if (ctx->pc == 0x2E5974u) {
        ctx->pc = 0x2E5974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5970u;
        // 0x2e5974: 0x24a5fed0  addiu       $a1, $a1, -0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5978u;
        goto label_2e5978;
    }
    ctx->pc = 0x2E5970u;
    SET_GPR_U32(ctx, 31, 0x2E5978u);
    ctx->pc = 0x2E5974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5970u;
    // 0x2e5974: 0x24a5fed0  addiu       $a1, $a1, -0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5970u, 0x2E5978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5978u;
label_2e5978:
    // 0x2e5978: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e597c:
    // 0x2e597c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e5980:
    if (ctx->pc == 0x2E5980u) {
        ctx->pc = 0x2E5980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E597Cu;
        // 0x2e5980: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5984u;
        goto label_2e5984;
    }
    ctx->pc = 0x2E597Cu;
    {
        const bool branch_taken_0x2e597c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E597Cu;
        // 0x2e5980: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e597c) {
            ctx->pc = 0x2E5990u;
            goto label_2e5990;
        }
    }
    ctx->pc = 0x2E5984u;
label_2e5984:
    // 0x2e5984: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e5984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2e5988:
    // 0x2e5988: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e598c:
    // 0x2e598c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e598cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e5990:
    // 0x2e5990: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x2e5990u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2e5994:
    // 0x2e5994: 0x504002a0  beql        $v0, $zero, . + 4 + (0x2A0 << 2)
label_2e5998:
    if (ctx->pc == 0x2E5998u) {
        ctx->pc = 0x2E5998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5994u;
        // 0x2e5998: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E599Cu;
        goto label_2e599c;
    }
    ctx->pc = 0x2E5994u;
    {
        const bool branch_taken_0x2e5994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5994) {
            ctx->pc = 0x2E5998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5994u;
            // 0x2e5998: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6418u;
            goto label_2e6418;
        }
    }
    ctx->pc = 0x2E599Cu;
label_2e599c:
    // 0x2e599c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2e599cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2e59a0:
    // 0x2e59a0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e59a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_2e59a4:
    // 0x2e59a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e59a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e59a8:
    // 0x2e59a8: 0x8c6305a0  lw          $v1, 0x5A0($v1)
    ctx->pc = 0x2e59a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1440)));
label_2e59ac:
    // 0x2e59ac: 0x600008  jr          $v1
label_2e59b0:
    if (ctx->pc == 0x2E59B0u) {
        ctx->pc = 0x2E59B4u;
        goto label_2e59b4;
    }
    ctx->pc = 0x2E59ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E59B8u: goto label_2e59b8;
            case 0x2E59E8u: goto label_2e59e8;
            case 0x2E5A18u: goto label_2e5a18;
            case 0x2E5A48u: goto label_2e5a48;
            case 0x2E5A78u: goto label_2e5a78;
            case 0x2E5F68u: goto label_2e5f68;
            case 0x2E6258u: goto label_2e6258;
            case 0x2E63D8u: goto label_2e63d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E59ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2E59B4u;
label_2e59b4:
    // 0x2e59b4: 0x0  nop
    ctx->pc = 0x2e59b4u;
    // NOP
label_2e59b8:
    // 0x2e59b8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e59b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e59bc:
    // 0x2e59bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e59bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e59c0:
    // 0x2e59c0: 0xc0a5b64  jal         func_296D90
label_2e59c4:
    if (ctx->pc == 0x2E59C4u) {
        ctx->pc = 0x2E59C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E59C0u;
        // 0x2e59c4: 0x24a5fee8  addiu       $a1, $a1, -0x118 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E59C8u;
        goto label_2e59c8;
    }
    ctx->pc = 0x2E59C0u;
    SET_GPR_U32(ctx, 31, 0x2E59C8u);
    ctx->pc = 0x2E59C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E59C0u;
    // 0x2e59c4: 0x24a5fee8  addiu       $a1, $a1, -0x118 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E59C0u, 0x2E59C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E59C8u;
label_2e59c8:
    // 0x2e59c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e59c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e59cc:
    // 0x2e59cc: 0x10800292  beqz        $a0, . + 4 + (0x292 << 2)
label_2e59d0:
    if (ctx->pc == 0x2E59D0u) {
        ctx->pc = 0x2E59D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E59CCu;
        // 0x2e59d0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E59D4u;
        goto label_2e59d4;
    }
    ctx->pc = 0x2E59CCu;
    {
        const bool branch_taken_0x2e59cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E59D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E59CCu;
        // 0x2e59d0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e59cc) {
            ctx->pc = 0x2E6418u;
            goto label_2e6418;
        }
    }
    ctx->pc = 0x2E59D4u;
label_2e59d4:
    // 0x2e59d4: 0x1260028c  beqz        $s3, . + 4 + (0x28C << 2)
label_2e59d8:
    if (ctx->pc == 0x2E59D8u) {
        ctx->pc = 0x2E59D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E59D4u;
        // 0x2e59d8: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E59DCu;
        goto label_2e59dc;
    }
    ctx->pc = 0x2E59D4u;
    {
        const bool branch_taken_0x2e59d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E59D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E59D4u;
        // 0x2e59d8: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e59d4) {
            ctx->pc = 0x2E6408u;
            goto label_2e6408;
        }
    }
    ctx->pc = 0x2E59DCu;
label_2e59dc:
    // 0x2e59dc: 0x1000028c  b           . + 4 + (0x28C << 2)
label_2e59e0:
    if (ctx->pc == 0x2E59E0u) {
        ctx->pc = 0x2E59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E59DCu;
        // 0x2e59e0: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E59E4u;
        goto label_2e59e4;
    }
    ctx->pc = 0x2E59DCu;
    {
        const bool branch_taken_0x2e59dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E59DCu;
        // 0x2e59e0: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e59dc) {
            ctx->pc = 0x2E6410u;
            goto label_2e6410;
        }
    }
    ctx->pc = 0x2E59E4u;
label_2e59e4:
    // 0x2e59e4: 0x0  nop
    ctx->pc = 0x2e59e4u;
    // NOP
label_2e59e8:
    // 0x2e59e8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e59e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e59ec:
    // 0x2e59ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e59ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e59f0:
    // 0x2e59f0: 0xc0a5b64  jal         func_296D90
label_2e59f4:
    if (ctx->pc == 0x2E59F4u) {
        ctx->pc = 0x2E59F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E59F0u;
        // 0x2e59f4: 0x24a5ff08  addiu       $a1, $a1, -0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E59F8u;
        goto label_2e59f8;
    }
    ctx->pc = 0x2E59F0u;
    SET_GPR_U32(ctx, 31, 0x2E59F8u);
    ctx->pc = 0x2E59F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E59F0u;
    // 0x2e59f4: 0x24a5ff08  addiu       $a1, $a1, -0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E59F0u, 0x2E59F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E59F8u;
label_2e59f8:
    // 0x2e59f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e59f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e59fc:
    // 0x2e59fc: 0x10800286  beqz        $a0, . + 4 + (0x286 << 2)
label_2e5a00:
    if (ctx->pc == 0x2E5A00u) {
        ctx->pc = 0x2E5A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E59FCu;
        // 0x2e5a00: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5A04u;
        goto label_2e5a04;
    }
    ctx->pc = 0x2E59FCu;
    {
        const bool branch_taken_0x2e59fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E59FCu;
        // 0x2e5a00: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e59fc) {
            ctx->pc = 0x2E6418u;
            goto label_2e6418;
        }
    }
    ctx->pc = 0x2E5A04u;
label_2e5a04:
    // 0x2e5a04: 0x12600280  beqz        $s3, . + 4 + (0x280 << 2)
label_2e5a08:
    if (ctx->pc == 0x2E5A08u) {
        ctx->pc = 0x2E5A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A04u;
        // 0x2e5a08: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5A0Cu;
        goto label_2e5a0c;
    }
    ctx->pc = 0x2E5A04u;
    {
        const bool branch_taken_0x2e5a04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A04u;
        // 0x2e5a08: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5a04) {
            ctx->pc = 0x2E6408u;
            goto label_2e6408;
        }
    }
    ctx->pc = 0x2E5A0Cu;
label_2e5a0c:
    // 0x2e5a0c: 0x10000280  b           . + 4 + (0x280 << 2)
label_2e5a10:
    if (ctx->pc == 0x2E5A10u) {
        ctx->pc = 0x2E5A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A0Cu;
        // 0x2e5a10: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5A14u;
        goto label_2e5a14;
    }
    ctx->pc = 0x2E5A0Cu;
    {
        const bool branch_taken_0x2e5a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A0Cu;
        // 0x2e5a10: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5a0c) {
            ctx->pc = 0x2E6410u;
            goto label_2e6410;
        }
    }
    ctx->pc = 0x2E5A14u;
label_2e5a14:
    // 0x2e5a14: 0x0  nop
    ctx->pc = 0x2e5a14u;
    // NOP
label_2e5a18:
    // 0x2e5a18: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e5a18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e5a1c:
    // 0x2e5a1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5a20:
    // 0x2e5a20: 0xc0a5b64  jal         func_296D90
label_2e5a24:
    if (ctx->pc == 0x2E5A24u) {
        ctx->pc = 0x2E5A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A20u;
        // 0x2e5a24: 0x24a5ff20  addiu       $a1, $a1, -0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5A28u;
        goto label_2e5a28;
    }
    ctx->pc = 0x2E5A20u;
    SET_GPR_U32(ctx, 31, 0x2E5A28u);
    ctx->pc = 0x2E5A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5A20u;
    // 0x2e5a24: 0x24a5ff20  addiu       $a1, $a1, -0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5A20u, 0x2E5A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A28u;
label_2e5a28:
    // 0x2e5a28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5a2c:
    // 0x2e5a2c: 0x1080027a  beqz        $a0, . + 4 + (0x27A << 2)
label_2e5a30:
    if (ctx->pc == 0x2E5A30u) {
        ctx->pc = 0x2E5A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A2Cu;
        // 0x2e5a30: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5A34u;
        goto label_2e5a34;
    }
    ctx->pc = 0x2E5A2Cu;
    {
        const bool branch_taken_0x2e5a2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A2Cu;
        // 0x2e5a30: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5a2c) {
            ctx->pc = 0x2E6418u;
            goto label_2e6418;
        }
    }
    ctx->pc = 0x2E5A34u;
label_2e5a34:
    // 0x2e5a34: 0x12600274  beqz        $s3, . + 4 + (0x274 << 2)
label_2e5a38:
    if (ctx->pc == 0x2E5A38u) {
        ctx->pc = 0x2E5A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A34u;
        // 0x2e5a38: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5A3Cu;
        goto label_2e5a3c;
    }
    ctx->pc = 0x2E5A34u;
    {
        const bool branch_taken_0x2e5a34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A34u;
        // 0x2e5a38: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5a34) {
            ctx->pc = 0x2E6408u;
            goto label_2e6408;
        }
    }
    ctx->pc = 0x2E5A3Cu;
label_2e5a3c:
    // 0x2e5a3c: 0x10000274  b           . + 4 + (0x274 << 2)
label_2e5a40:
    if (ctx->pc == 0x2E5A40u) {
        ctx->pc = 0x2E5A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A3Cu;
        // 0x2e5a40: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5A44u;
        goto label_2e5a44;
    }
    ctx->pc = 0x2E5A3Cu;
    {
        const bool branch_taken_0x2e5a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A3Cu;
        // 0x2e5a40: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5a3c) {
            ctx->pc = 0x2E6410u;
            goto label_2e6410;
        }
    }
    ctx->pc = 0x2E5A44u;
label_2e5a44:
    // 0x2e5a44: 0x0  nop
    ctx->pc = 0x2e5a44u;
    // NOP
label_2e5a48:
    // 0x2e5a48: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e5a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e5a4c:
    // 0x2e5a4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5a50:
    // 0x2e5a50: 0xc0a5b64  jal         func_296D90
label_2e5a54:
    if (ctx->pc == 0x2E5A54u) {
        ctx->pc = 0x2E5A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A50u;
        // 0x2e5a54: 0x24a5ff30  addiu       $a1, $a1, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5A58u;
        goto label_2e5a58;
    }
    ctx->pc = 0x2E5A50u;
    SET_GPR_U32(ctx, 31, 0x2E5A58u);
    ctx->pc = 0x2E5A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5A50u;
    // 0x2e5a54: 0x24a5ff30  addiu       $a1, $a1, -0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5A50u, 0x2E5A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A58u;
label_2e5a58:
    // 0x2e5a58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5a5c:
    // 0x2e5a5c: 0x1080026e  beqz        $a0, . + 4 + (0x26E << 2)
label_2e5a60:
    if (ctx->pc == 0x2E5A60u) {
        ctx->pc = 0x2E5A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A5Cu;
        // 0x2e5a60: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5A64u;
        goto label_2e5a64;
    }
    ctx->pc = 0x2E5A5Cu;
    {
        const bool branch_taken_0x2e5a5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A5Cu;
        // 0x2e5a60: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5a5c) {
            ctx->pc = 0x2E6418u;
            goto label_2e6418;
        }
    }
    ctx->pc = 0x2E5A64u;
label_2e5a64:
    // 0x2e5a64: 0x12600268  beqz        $s3, . + 4 + (0x268 << 2)
label_2e5a68:
    if (ctx->pc == 0x2E5A68u) {
        ctx->pc = 0x2E5A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A64u;
        // 0x2e5a68: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5A6Cu;
        goto label_2e5a6c;
    }
    ctx->pc = 0x2E5A64u;
    {
        const bool branch_taken_0x2e5a64 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A64u;
        // 0x2e5a68: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5a64) {
            ctx->pc = 0x2E6408u;
            goto label_2e6408;
        }
    }
    ctx->pc = 0x2E5A6Cu;
label_2e5a6c:
    // 0x2e5a6c: 0x10000268  b           . + 4 + (0x268 << 2)
label_2e5a70:
    if (ctx->pc == 0x2E5A70u) {
        ctx->pc = 0x2E5A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A6Cu;
        // 0x2e5a70: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5A74u;
        goto label_2e5a74;
    }
    ctx->pc = 0x2E5A6Cu;
    {
        const bool branch_taken_0x2e5a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A6Cu;
        // 0x2e5a70: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5a6c) {
            ctx->pc = 0x2E6410u;
            goto label_2e6410;
        }
    }
    ctx->pc = 0x2E5A74u;
label_2e5a74:
    // 0x2e5a74: 0x0  nop
    ctx->pc = 0x2e5a74u;
    // NOP
label_2e5a78:
    // 0x2e5a78: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e5a78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e5a7c:
    // 0x2e5a7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5a80:
    // 0x2e5a80: 0xc0a5b64  jal         func_296D90
label_2e5a84:
    if (ctx->pc == 0x2E5A84u) {
        ctx->pc = 0x2E5A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A80u;
        // 0x2e5a84: 0x24a5ff48  addiu       $a1, $a1, -0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5A88u;
        goto label_2e5a88;
    }
    ctx->pc = 0x2E5A80u;
    SET_GPR_U32(ctx, 31, 0x2E5A88u);
    ctx->pc = 0x2E5A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5A80u;
    // 0x2e5a84: 0x24a5ff48  addiu       $a1, $a1, -0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5A80u, 0x2E5A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A88u;
label_2e5a88:
    // 0x2e5a88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5a8c:
    // 0x2e5a8c: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
label_2e5a90:
    if (ctx->pc == 0x2E5A90u) {
        ctx->pc = 0x2E5A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A8Cu;
        // 0x2e5a90: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5A94u;
        goto label_2e5a94;
    }
    ctx->pc = 0x2E5A8Cu;
    {
        const bool branch_taken_0x2e5a8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5a8c) {
            ctx->pc = 0x2E5A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5A8Cu;
            // 0x2e5a90: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5AB8u;
            goto label_2e5ab8;
        }
    }
    ctx->pc = 0x2E5A94u;
label_2e5a94:
    // 0x2e5a94: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_2e5a98:
    if (ctx->pc == 0x2E5A98u) {
        ctx->pc = 0x2E5A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A94u;
        // 0x2e5a98: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5A9Cu;
        goto label_2e5a9c;
    }
    ctx->pc = 0x2E5A94u;
    {
        const bool branch_taken_0x2e5a94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A94u;
        // 0x2e5a98: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5a94) {
            ctx->pc = 0x2E5AA8u;
            goto label_2e5aa8;
        }
    }
    ctx->pc = 0x2E5A9Cu;
label_2e5a9c:
    // 0x2e5a9c: 0x10000004  b           . + 4 + (0x4 << 2)
label_2e5aa0:
    if (ctx->pc == 0x2E5AA0u) {
        ctx->pc = 0x2E5AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A9Cu;
        // 0x2e5aa0: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5AA4u;
        goto label_2e5aa4;
    }
    ctx->pc = 0x2E5A9Cu;
    {
        const bool branch_taken_0x2e5a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A9Cu;
        // 0x2e5aa0: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5a9c) {
            ctx->pc = 0x2E5AB0u;
            goto label_2e5ab0;
        }
    }
    ctx->pc = 0x2E5AA4u;
label_2e5aa4:
    // 0x2e5aa4: 0x0  nop
    ctx->pc = 0x2e5aa4u;
    // NOP
label_2e5aa8:
    // 0x2e5aa8: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2e5aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_2e5aac:
    // 0x2e5aac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e5ab0:
    // 0x2e5ab0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e5ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e5ab4:
    // 0x2e5ab4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e5ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e5ab8:
    // 0x2e5ab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5abc:
    // 0x2e5abc: 0xc0a5b64  jal         func_296D90
label_2e5ac0:
    if (ctx->pc == 0x2E5AC0u) {
        ctx->pc = 0x2E5AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5ABCu;
        // 0x2e5ac0: 0x24a5ff60  addiu       $a1, $a1, -0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5AC4u;
        goto label_2e5ac4;
    }
    ctx->pc = 0x2E5ABCu;
    SET_GPR_U32(ctx, 31, 0x2E5AC4u);
    ctx->pc = 0x2E5AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5ABCu;
    // 0x2e5ac0: 0x24a5ff60  addiu       $a1, $a1, -0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5ABCu, 0x2E5AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5AC4u;
label_2e5ac4:
    // 0x2e5ac4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5ac8:
    // 0x2e5ac8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e5acc:
    if (ctx->pc == 0x2E5ACCu) {
        ctx->pc = 0x2E5ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5AC8u;
        // 0x2e5acc: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5AD0u;
        goto label_2e5ad0;
    }
    ctx->pc = 0x2E5AC8u;
    {
        const bool branch_taken_0x2e5ac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5AC8u;
        // 0x2e5acc: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5ac8) {
            ctx->pc = 0x2E5ADCu;
            goto label_2e5adc;
        }
    }
    ctx->pc = 0x2E5AD0u;
label_2e5ad0:
    // 0x2e5ad0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e5ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2e5ad4:
    // 0x2e5ad4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e5ad8:
    // 0x2e5ad8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e5ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e5adc:
    // 0x2e5adc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e5adcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e5ae0:
    // 0x2e5ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5ae4:
    // 0x2e5ae4: 0xc0a5b64  jal         func_296D90
label_2e5ae8:
    if (ctx->pc == 0x2E5AE8u) {
        ctx->pc = 0x2E5AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5AE4u;
        // 0x2e5ae8: 0x24a5ff80  addiu       $a1, $a1, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5AECu;
        goto label_2e5aec;
    }
    ctx->pc = 0x2E5AE4u;
    SET_GPR_U32(ctx, 31, 0x2E5AECu);
    ctx->pc = 0x2E5AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5AE4u;
    // 0x2e5ae8: 0x24a5ff80  addiu       $a1, $a1, -0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5AE4u, 0x2E5AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5AECu;
label_2e5aec:
    // 0x2e5aec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5af0:
    // 0x2e5af0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e5af4:
    if (ctx->pc == 0x2E5AF4u) {
        ctx->pc = 0x2E5AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5AF0u;
        // 0x2e5af4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5AF8u;
        goto label_2e5af8;
    }
    ctx->pc = 0x2E5AF0u;
    {
        const bool branch_taken_0x2e5af0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5AF0u;
        // 0x2e5af4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5af0) {
            ctx->pc = 0x2E5B04u;
            goto label_2e5b04;
        }
    }
    ctx->pc = 0x2E5AF8u;
label_2e5af8:
    // 0x2e5af8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e5af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2e5afc:
    // 0x2e5afc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e5b00:
    // 0x2e5b00: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e5b00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e5b04:
    // 0x2e5b04: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e5b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e5b08:
    // 0x2e5b08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5b0c:
    // 0x2e5b0c: 0xc0a5b64  jal         func_296D90
label_2e5b10:
    if (ctx->pc == 0x2E5B10u) {
        ctx->pc = 0x2E5B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B0Cu;
        // 0x2e5b10: 0x24a5ffa0  addiu       $a1, $a1, -0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5B14u;
        goto label_2e5b14;
    }
    ctx->pc = 0x2E5B0Cu;
    SET_GPR_U32(ctx, 31, 0x2E5B14u);
    ctx->pc = 0x2E5B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5B0Cu;
    // 0x2e5b10: 0x24a5ffa0  addiu       $a1, $a1, -0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5B0Cu, 0x2E5B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5B14u;
label_2e5b14:
    // 0x2e5b14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5b18:
    // 0x2e5b18: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e5b1c:
    if (ctx->pc == 0x2E5B1Cu) {
        ctx->pc = 0x2E5B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B18u;
        // 0x2e5b1c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5B20u;
        goto label_2e5b20;
    }
    ctx->pc = 0x2E5B18u;
    {
        const bool branch_taken_0x2e5b18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B18u;
        // 0x2e5b1c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b18) {
            ctx->pc = 0x2E5B2Cu;
            goto label_2e5b2c;
        }
    }
    ctx->pc = 0x2E5B20u;
label_2e5b20:
    // 0x2e5b20: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e5b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2e5b24:
    // 0x2e5b24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e5b28:
    // 0x2e5b28: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e5b28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e5b2c:
    // 0x2e5b2c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e5b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e5b30:
    // 0x2e5b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5b34:
    // 0x2e5b34: 0xc0a5b64  jal         func_296D90
label_2e5b38:
    if (ctx->pc == 0x2E5B38u) {
        ctx->pc = 0x2E5B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B34u;
        // 0x2e5b38: 0x24a5ffc0  addiu       $a1, $a1, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5B3Cu;
        goto label_2e5b3c;
    }
    ctx->pc = 0x2E5B34u;
    SET_GPR_U32(ctx, 31, 0x2E5B3Cu);
    ctx->pc = 0x2E5B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5B34u;
    // 0x2e5b38: 0x24a5ffc0  addiu       $a1, $a1, -0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5B34u, 0x2E5B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5B3Cu;
label_2e5b3c:
    // 0x2e5b3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5b40:
    // 0x2e5b40: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e5b44:
    if (ctx->pc == 0x2E5B44u) {
        ctx->pc = 0x2E5B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B40u;
        // 0x2e5b44: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5B48u;
        goto label_2e5b48;
    }
    ctx->pc = 0x2E5B40u;
    {
        const bool branch_taken_0x2e5b40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B40u;
        // 0x2e5b44: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b40) {
            ctx->pc = 0x2E5B54u;
            goto label_2e5b54;
        }
    }
    ctx->pc = 0x2E5B48u;
label_2e5b48:
    // 0x2e5b48: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e5b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2e5b4c:
    // 0x2e5b4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e5b50:
    // 0x2e5b50: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e5b50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e5b54:
    // 0x2e5b54: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e5b54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e5b58:
    // 0x2e5b58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5b5c:
    // 0x2e5b5c: 0xc0a5b64  jal         func_296D90
label_2e5b60:
    if (ctx->pc == 0x2E5B60u) {
        ctx->pc = 0x2E5B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B5Cu;
        // 0x2e5b60: 0x24a5ffe0  addiu       $a1, $a1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5B64u;
        goto label_2e5b64;
    }
    ctx->pc = 0x2E5B5Cu;
    SET_GPR_U32(ctx, 31, 0x2E5B64u);
    ctx->pc = 0x2E5B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5B5Cu;
    // 0x2e5b60: 0x24a5ffe0  addiu       $a1, $a1, -0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5B5Cu, 0x2E5B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5B64u;
label_2e5b64:
    // 0x2e5b64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5b68:
    // 0x2e5b68: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e5b6c:
    if (ctx->pc == 0x2E5B6Cu) {
        ctx->pc = 0x2E5B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B68u;
        // 0x2e5b6c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5B70u;
        goto label_2e5b70;
    }
    ctx->pc = 0x2E5B68u;
    {
        const bool branch_taken_0x2e5b68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B68u;
        // 0x2e5b6c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b68) {
            ctx->pc = 0x2E5B7Cu;
            goto label_2e5b7c;
        }
    }
    ctx->pc = 0x2E5B70u;
label_2e5b70:
    // 0x2e5b70: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e5b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2e5b74:
    // 0x2e5b74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e5b78:
    // 0x2e5b78: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e5b78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e5b7c:
    // 0x2e5b7c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e5b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e5b80:
    // 0x2e5b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5b84:
    // 0x2e5b84: 0xc0a5b64  jal         func_296D90
label_2e5b88:
    if (ctx->pc == 0x2E5B88u) {
        ctx->pc = 0x2E5B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B84u;
        // 0x2e5b88: 0x24a50000  addiu       $a1, $a1, 0x0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5B8Cu;
        goto label_2e5b8c;
    }
    ctx->pc = 0x2E5B84u;
    SET_GPR_U32(ctx, 31, 0x2E5B8Cu);
    ctx->pc = 0x2E5B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5B84u;
    // 0x2e5b88: 0x24a50000  addiu       $a1, $a1, 0x0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5B84u, 0x2E5B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5B8Cu;
label_2e5b8c:
    // 0x2e5b8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5b90:
    // 0x2e5b90: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e5b94:
    if (ctx->pc == 0x2E5B94u) {
        ctx->pc = 0x2E5B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B90u;
        // 0x2e5b94: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5B98u;
        goto label_2e5b98;
    }
    ctx->pc = 0x2E5B90u;
    {
        const bool branch_taken_0x2e5b90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B90u;
        // 0x2e5b94: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b90) {
            ctx->pc = 0x2E5BA4u;
            goto label_2e5ba4;
        }
    }
    ctx->pc = 0x2E5B98u;
label_2e5b98:
    // 0x2e5b98: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e5b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2e5b9c:
    // 0x2e5b9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e5ba0:
    // 0x2e5ba0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e5ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e5ba4:
    // 0x2e5ba4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e5ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e5ba8:
    // 0x2e5ba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5bac:
    // 0x2e5bac: 0xc0a5b64  jal         func_296D90
label_2e5bb0:
    if (ctx->pc == 0x2E5BB0u) {
        ctx->pc = 0x2E5BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5BACu;
        // 0x2e5bb0: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5BB4u;
        goto label_2e5bb4;
    }
    ctx->pc = 0x2E5BACu;
    SET_GPR_U32(ctx, 31, 0x2E5BB4u);
    ctx->pc = 0x2E5BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5BACu;
    // 0x2e5bb0: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5BACu, 0x2E5BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5BB4u;
label_2e5bb4:
    // 0x2e5bb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5bb8:
    // 0x2e5bb8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e5bbc:
    if (ctx->pc == 0x2E5BBCu) {
        ctx->pc = 0x2E5BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5BB8u;
        // 0x2e5bbc: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5BC0u;
        goto label_2e5bc0;
    }
    ctx->pc = 0x2E5BB8u;
    {
        const bool branch_taken_0x2e5bb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5BB8u;
        // 0x2e5bbc: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5bb8) {
            ctx->pc = 0x2E5BCCu;
            goto label_2e5bcc;
        }
    }
    ctx->pc = 0x2E5BC0u;
label_2e5bc0:
    // 0x2e5bc0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e5bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2e5bc4:
    // 0x2e5bc4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e5bc8:
    // 0x2e5bc8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e5bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e5bcc:
    // 0x2e5bcc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e5bccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e5bd0:
    // 0x2e5bd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5bd4:
    // 0x2e5bd4: 0xc0a5b64  jal         func_296D90
label_2e5bd8:
    if (ctx->pc == 0x2E5BD8u) {
        ctx->pc = 0x2E5BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5BD4u;
        // 0x2e5bd8: 0x24a50038  addiu       $a1, $a1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5BDCu;
        goto label_2e5bdc;
    }
    ctx->pc = 0x2E5BD4u;
    SET_GPR_U32(ctx, 31, 0x2E5BDCu);
    ctx->pc = 0x2E5BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5BD4u;
    // 0x2e5bd8: 0x24a50038  addiu       $a1, $a1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5BD4u, 0x2E5BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5BDCu;
label_2e5bdc:
    // 0x2e5bdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5be0:
    // 0x2e5be0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e5be4:
    if (ctx->pc == 0x2E5BE4u) {
        ctx->pc = 0x2E5BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5BE0u;
        // 0x2e5be4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5BE8u;
        goto label_2e5be8;
    }
    ctx->pc = 0x2E5BE0u;
    {
        const bool branch_taken_0x2e5be0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5BE0u;
        // 0x2e5be4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5be0) {
            ctx->pc = 0x2E5BF4u;
            goto label_2e5bf4;
        }
    }
    ctx->pc = 0x2E5BE8u;
label_2e5be8:
    // 0x2e5be8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e5be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2e5bec:
    // 0x2e5bec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e5bf0:
    // 0x2e5bf0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e5bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e5bf4:
    // 0x2e5bf4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e5bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e5bf8:
    // 0x2e5bf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5bfc:
    // 0x2e5bfc: 0xc0a5b64  jal         func_296D90
label_2e5c00:
    if (ctx->pc == 0x2E5C00u) {
        ctx->pc = 0x2E5C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5BFCu;
        // 0x2e5c00: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5C04u;
        goto label_2e5c04;
    }
    ctx->pc = 0x2E5BFCu;
    SET_GPR_U32(ctx, 31, 0x2E5C04u);
    ctx->pc = 0x2E5C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5BFCu;
    // 0x2e5c00: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5BFCu, 0x2E5C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5C04u;
label_2e5c04:
    // 0x2e5c04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5c08:
    // 0x2e5c08: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e5c0c:
    if (ctx->pc == 0x2E5C0Cu) {
        ctx->pc = 0x2E5C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C08u;
        // 0x2e5c0c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5C10u;
        goto label_2e5c10;
    }
    ctx->pc = 0x2E5C08u;
    {
        const bool branch_taken_0x2e5c08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C08u;
        // 0x2e5c0c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5c08) {
            ctx->pc = 0x2E5C1Cu;
            goto label_2e5c1c;
        }
    }
    ctx->pc = 0x2E5C10u;
label_2e5c10:
    // 0x2e5c10: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e5c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2e5c14:
    // 0x2e5c14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e5c18:
    // 0x2e5c18: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e5c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e5c1c:
    // 0x2e5c1c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e5c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e5c20:
    // 0x2e5c20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5c24:
    // 0x2e5c24: 0xc0a5b64  jal         func_296D90
label_2e5c28:
    if (ctx->pc == 0x2E5C28u) {
        ctx->pc = 0x2E5C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C24u;
        // 0x2e5c28: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5C2Cu;
        goto label_2e5c2c;
    }
    ctx->pc = 0x2E5C24u;
    SET_GPR_U32(ctx, 31, 0x2E5C2Cu);
    ctx->pc = 0x2E5C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5C24u;
    // 0x2e5c28: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5C24u, 0x2E5C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5C2Cu;
label_2e5c2c:
    // 0x2e5c2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5c30:
    // 0x2e5c30: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e5c34:
    if (ctx->pc == 0x2E5C34u) {
        ctx->pc = 0x2E5C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C30u;
        // 0x2e5c34: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5C38u;
        goto label_2e5c38;
    }
    ctx->pc = 0x2E5C30u;
    {
        const bool branch_taken_0x2e5c30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C30u;
        // 0x2e5c34: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5c30) {
            ctx->pc = 0x2E5C44u;
            goto label_2e5c44;
        }
    }
    ctx->pc = 0x2E5C38u;
label_2e5c38:
    // 0x2e5c38: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e5c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2e5c3c:
    // 0x2e5c3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e5c40:
    // 0x2e5c40: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e5c40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e5c44:
    // 0x2e5c44: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e5c44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e5c48:
    // 0x2e5c48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5c4c:
    // 0x2e5c4c: 0xc0a5b64  jal         func_296D90
label_2e5c50:
    if (ctx->pc == 0x2E5C50u) {
        ctx->pc = 0x2E5C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C4Cu;
        // 0x2e5c50: 0x24a500a0  addiu       $a1, $a1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5C54u;
        goto label_2e5c54;
    }
    ctx->pc = 0x2E5C4Cu;
    SET_GPR_U32(ctx, 31, 0x2E5C54u);
    ctx->pc = 0x2E5C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5C4Cu;
    // 0x2e5c50: 0x24a500a0  addiu       $a1, $a1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5C4Cu, 0x2E5C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5C54u;
label_2e5c54:
    // 0x2e5c54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5c58:
    // 0x2e5c58: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e5c5c:
    if (ctx->pc == 0x2E5C5Cu) {
        ctx->pc = 0x2E5C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C58u;
        // 0x2e5c5c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5C60u;
        goto label_2e5c60;
    }
    ctx->pc = 0x2E5C58u;
    {
        const bool branch_taken_0x2e5c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C58u;
        // 0x2e5c5c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5c58) {
            ctx->pc = 0x2E5C6Cu;
            goto label_2e5c6c;
        }
    }
    ctx->pc = 0x2E5C60u;
label_2e5c60:
    // 0x2e5c60: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e5c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2e5c64:
    // 0x2e5c64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e5c68:
    // 0x2e5c68: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e5c68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e5c6c:
    // 0x2e5c6c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e5c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e5c70:
    // 0x2e5c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5c74:
    // 0x2e5c74: 0xc0a5b64  jal         func_296D90
label_2e5c78:
    if (ctx->pc == 0x2E5C78u) {
        ctx->pc = 0x2E5C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C74u;
        // 0x2e5c78: 0x24a500c8  addiu       $a1, $a1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5C7Cu;
        goto label_2e5c7c;
    }
    ctx->pc = 0x2E5C74u;
    SET_GPR_U32(ctx, 31, 0x2E5C7Cu);
    ctx->pc = 0x2E5C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5C74u;
    // 0x2e5c78: 0x24a500c8  addiu       $a1, $a1, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5C74u, 0x2E5C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5C7Cu;
label_2e5c7c:
    // 0x2e5c7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5c80:
    // 0x2e5c80: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e5c84:
    if (ctx->pc == 0x2E5C84u) {
        ctx->pc = 0x2E5C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C80u;
        // 0x2e5c84: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5C88u;
        goto label_2e5c88;
    }
    ctx->pc = 0x2E5C80u;
    {
        const bool branch_taken_0x2e5c80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C80u;
        // 0x2e5c84: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5c80) {
            ctx->pc = 0x2E5C94u;
            goto label_2e5c94;
        }
    }
    ctx->pc = 0x2E5C88u;
label_2e5c88:
    // 0x2e5c88: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e5c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2e5c8c:
    // 0x2e5c8c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e5c90:
    // 0x2e5c90: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e5c90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e5c94:
    // 0x2e5c94: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e5c94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e5c98:
    // 0x2e5c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5c9c:
    // 0x2e5c9c: 0xc0a5b64  jal         func_296D90
label_2e5ca0:
    if (ctx->pc == 0x2E5CA0u) {
        ctx->pc = 0x2E5CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C9Cu;
        // 0x2e5ca0: 0x24a500f0  addiu       $a1, $a1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5CA4u;
        goto label_2e5ca4;
    }
    ctx->pc = 0x2E5C9Cu;
    SET_GPR_U32(ctx, 31, 0x2E5CA4u);
    ctx->pc = 0x2E5CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5C9Cu;
    // 0x2e5ca0: 0x24a500f0  addiu       $a1, $a1, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5C9Cu, 0x2E5CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5CA4u;
label_2e5ca4:
    // 0x2e5ca4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5ca8:
    // 0x2e5ca8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e5cac:
    if (ctx->pc == 0x2E5CACu) {
        ctx->pc = 0x2E5CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CA8u;
        // 0x2e5cac: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5CB0u;
        goto label_2e5cb0;
    }
    ctx->pc = 0x2E5CA8u;
    {
        const bool branch_taken_0x2e5ca8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CA8u;
        // 0x2e5cac: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5ca8) {
            ctx->pc = 0x2E5CBCu;
            goto label_2e5cbc;
        }
    }
    ctx->pc = 0x2E5CB0u;
label_2e5cb0:
    // 0x2e5cb0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e5cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2e5cb4:
    // 0x2e5cb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e5cb8:
    // 0x2e5cb8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e5cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e5cbc:
    // 0x2e5cbc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e5cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e5cc0:
    // 0x2e5cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5cc4:
    // 0x2e5cc4: 0xc0a5b64  jal         func_296D90
label_2e5cc8:
    if (ctx->pc == 0x2E5CC8u) {
        ctx->pc = 0x2E5CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CC4u;
        // 0x2e5cc8: 0x24a50118  addiu       $a1, $a1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5CCCu;
        goto label_2e5ccc;
    }
    ctx->pc = 0x2E5CC4u;
    SET_GPR_U32(ctx, 31, 0x2E5CCCu);
    ctx->pc = 0x2E5CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5CC4u;
    // 0x2e5cc8: 0x24a50118  addiu       $a1, $a1, 0x118 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5CC4u, 0x2E5CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5CCCu;
label_2e5ccc:
    // 0x2e5ccc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5cd0:
    // 0x2e5cd0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e5cd4:
    if (ctx->pc == 0x2E5CD4u) {
        ctx->pc = 0x2E5CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CD0u;
        // 0x2e5cd4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5CD8u;
        goto label_2e5cd8;
    }
    ctx->pc = 0x2E5CD0u;
    {
        const bool branch_taken_0x2e5cd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CD0u;
        // 0x2e5cd4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5cd0) {
            ctx->pc = 0x2E5CE4u;
            goto label_2e5ce4;
        }
    }
    ctx->pc = 0x2E5CD8u;
label_2e5cd8:
    // 0x2e5cd8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e5cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2e5cdc:
    // 0x2e5cdc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e5ce0:
    // 0x2e5ce0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e5ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e5ce4:
    // 0x2e5ce4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e5ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e5ce8:
    // 0x2e5ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5cec:
    // 0x2e5cec: 0xc0a5b64  jal         func_296D90
label_2e5cf0:
    if (ctx->pc == 0x2E5CF0u) {
        ctx->pc = 0x2E5CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CECu;
        // 0x2e5cf0: 0x24a50130  addiu       $a1, $a1, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5CF4u;
        goto label_2e5cf4;
    }
    ctx->pc = 0x2E5CECu;
    SET_GPR_U32(ctx, 31, 0x2E5CF4u);
    ctx->pc = 0x2E5CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5CECu;
    // 0x2e5cf0: 0x24a50130  addiu       $a1, $a1, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5CECu, 0x2E5CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5CF4u;
label_2e5cf4:
    // 0x2e5cf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5cf8:
    // 0x2e5cf8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e5cfc:
    if (ctx->pc == 0x2E5CFCu) {
        ctx->pc = 0x2E5CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CF8u;
        // 0x2e5cfc: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5D00u;
        goto label_2e5d00;
    }
    ctx->pc = 0x2E5CF8u;
    {
        const bool branch_taken_0x2e5cf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CF8u;
        // 0x2e5cfc: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5cf8) {
            ctx->pc = 0x2E5D0Cu;
            goto label_2e5d0c;
        }
    }
    ctx->pc = 0x2E5D00u;
label_2e5d00:
    // 0x2e5d00: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e5d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2e5d04:
    // 0x2e5d04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e5d08:
    // 0x2e5d08: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e5d08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e5d0c:
    // 0x2e5d0c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e5d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e5d10:
    // 0x2e5d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5d14:
    // 0x2e5d14: 0xc0a5b64  jal         func_296D90
label_2e5d18:
    if (ctx->pc == 0x2E5D18u) {
        ctx->pc = 0x2E5D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D14u;
        // 0x2e5d18: 0x24a50148  addiu       $a1, $a1, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5D1Cu;
        goto label_2e5d1c;
    }
    ctx->pc = 0x2E5D14u;
    SET_GPR_U32(ctx, 31, 0x2E5D1Cu);
    ctx->pc = 0x2E5D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5D14u;
    // 0x2e5d18: 0x24a50148  addiu       $a1, $a1, 0x148 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5D14u, 0x2E5D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5D1Cu;
label_2e5d1c:
    // 0x2e5d1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5d20:
    // 0x2e5d20: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e5d24:
    if (ctx->pc == 0x2E5D24u) {
        ctx->pc = 0x2E5D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D20u;
        // 0x2e5d24: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5D28u;
        goto label_2e5d28;
    }
    ctx->pc = 0x2E5D20u;
    {
        const bool branch_taken_0x2e5d20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D20u;
        // 0x2e5d24: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5d20) {
            ctx->pc = 0x2E5D34u;
            goto label_2e5d34;
        }
    }
    ctx->pc = 0x2E5D28u;
label_2e5d28:
    // 0x2e5d28: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e5d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2e5d2c:
    // 0x2e5d2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e5d30:
    // 0x2e5d30: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e5d30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e5d34:
    // 0x2e5d34: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e5d34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e5d38:
    // 0x2e5d38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5d3c:
    // 0x2e5d3c: 0xc0a5b64  jal         func_296D90
label_2e5d40:
    if (ctx->pc == 0x2E5D40u) {
        ctx->pc = 0x2E5D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D3Cu;
        // 0x2e5d40: 0x24a50160  addiu       $a1, $a1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5D44u;
        goto label_2e5d44;
    }
    ctx->pc = 0x2E5D3Cu;
    SET_GPR_U32(ctx, 31, 0x2E5D44u);
    ctx->pc = 0x2E5D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5D3Cu;
    // 0x2e5d40: 0x24a50160  addiu       $a1, $a1, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5D3Cu, 0x2E5D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5D44u;
label_2e5d44:
    // 0x2e5d44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5d48:
    // 0x2e5d48: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e5d4c:
    if (ctx->pc == 0x2E5D4Cu) {
        ctx->pc = 0x2E5D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D48u;
        // 0x2e5d4c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5D50u;
        goto label_2e5d50;
    }
    ctx->pc = 0x2E5D48u;
    {
        const bool branch_taken_0x2e5d48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D48u;
        // 0x2e5d4c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5d48) {
            ctx->pc = 0x2E5D5Cu;
            goto label_2e5d5c;
        }
    }
    ctx->pc = 0x2E5D50u;
label_2e5d50:
    // 0x2e5d50: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e5d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2e5d54:
    // 0x2e5d54: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e5d58:
    // 0x2e5d58: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e5d58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e5d5c:
    // 0x2e5d5c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e5d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e5d60:
    // 0x2e5d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5d64:
    // 0x2e5d64: 0xc0a5b64  jal         func_296D90
label_2e5d68:
    if (ctx->pc == 0x2E5D68u) {
        ctx->pc = 0x2E5D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D64u;
        // 0x2e5d68: 0x24a50178  addiu       $a1, $a1, 0x178 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5D6Cu;
        goto label_2e5d6c;
    }
    ctx->pc = 0x2E5D64u;
    SET_GPR_U32(ctx, 31, 0x2E5D6Cu);
    ctx->pc = 0x2E5D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5D64u;
    // 0x2e5d68: 0x24a50178  addiu       $a1, $a1, 0x178 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5D64u, 0x2E5D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5D6Cu;
label_2e5d6c:
    // 0x2e5d6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5d70:
    // 0x2e5d70: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e5d74:
    if (ctx->pc == 0x2E5D74u) {
        ctx->pc = 0x2E5D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D70u;
        // 0x2e5d74: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5D78u;
        goto label_2e5d78;
    }
    ctx->pc = 0x2E5D70u;
    {
        const bool branch_taken_0x2e5d70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D70u;
        // 0x2e5d74: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5d70) {
            ctx->pc = 0x2E5D84u;
            goto label_2e5d84;
        }
    }
    ctx->pc = 0x2E5D78u;
label_2e5d78:
    // 0x2e5d78: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e5d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2e5d7c:
    // 0x2e5d7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e5d80:
    // 0x2e5d80: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e5d80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e5d84:
    // 0x2e5d84: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e5d84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e5d88:
    // 0x2e5d88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5d8c:
    // 0x2e5d8c: 0xc0a5b64  jal         func_296D90
label_2e5d90:
    if (ctx->pc == 0x2E5D90u) {
        ctx->pc = 0x2E5D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D8Cu;
        // 0x2e5d90: 0x24a50190  addiu       $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5D94u;
        goto label_2e5d94;
    }
    ctx->pc = 0x2E5D8Cu;
    SET_GPR_U32(ctx, 31, 0x2E5D94u);
    ctx->pc = 0x2E5D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5D8Cu;
    // 0x2e5d90: 0x24a50190  addiu       $a1, $a1, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5D8Cu, 0x2E5D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5D94u;
label_2e5d94:
    // 0x2e5d94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5d98:
    // 0x2e5d98: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e5d9c:
    if (ctx->pc == 0x2E5D9Cu) {
        ctx->pc = 0x2E5D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D98u;
        // 0x2e5d9c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5DA0u;
        goto label_2e5da0;
    }
    ctx->pc = 0x2E5D98u;
    {
        const bool branch_taken_0x2e5d98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D98u;
        // 0x2e5d9c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5d98) {
            ctx->pc = 0x2E5DACu;
            goto label_2e5dac;
        }
    }
    ctx->pc = 0x2E5DA0u;
label_2e5da0:
    // 0x2e5da0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e5da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2e5da4:
    // 0x2e5da4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e5da8:
    // 0x2e5da8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e5da8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e5dac:
    // 0x2e5dac: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2e5dacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e5db0:
    // 0x2e5db0: 0x3c1e0048  lui         $fp, 0x48
    ctx->pc = 0x2e5db0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)72 << 16));
label_2e5db4:
    // 0x2e5db4: 0x3c170048  lui         $s7, 0x48
    ctx->pc = 0x2e5db4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)72 << 16));
label_2e5db8:
    // 0x2e5db8: 0x3c160048  lui         $s6, 0x48
    ctx->pc = 0x2e5db8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
label_2e5dbc:
    // 0x2e5dbc: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x2e5dbcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
label_2e5dc0:
    // 0x2e5dc0: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x2e5dc0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
label_2e5dc4:
    // 0x2e5dc4: 0x2412efff  addiu       $s2, $zero, -0x1001
    ctx->pc = 0x2e5dc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_2e5dc8:
    // 0x2e5dc8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e5dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_2e5dcc:
    // 0x2e5dcc: 0x0  nop
    ctx->pc = 0x2e5dccu;
    // NOP
label_2e5dd0:
    // 0x2e5dd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e5dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e5dd4:
    // 0x2e5dd4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e5dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e5dd8:
    // 0x2e5dd8: 0xc04a368  jal         func_128DA0
label_2e5ddc:
    if (ctx->pc == 0x2E5DDCu) {
        ctx->pc = 0x2E5DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5DD8u;
        // 0x2e5ddc: 0x244501a8  addiu       $a1, $v0, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5DE0u;
        goto label_2e5de0;
    }
    ctx->pc = 0x2E5DD8u;
    SET_GPR_U32(ctx, 31, 0x2E5DE0u);
    ctx->pc = 0x2E5DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5DD8u;
    // 0x2e5ddc: 0x244501a8  addiu       $a1, $v0, 0x1A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2E5DD8u, 0x2E5DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5DE0u;
label_2e5de0:
    // 0x2e5de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5de4:
    // 0x2e5de4: 0xc0a5b64  jal         func_296D90
label_2e5de8:
    if (ctx->pc == 0x2E5DE8u) {
        ctx->pc = 0x2E5DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5DE4u;
        // 0x2e5de8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5DECu;
        goto label_2e5dec;
    }
    ctx->pc = 0x2E5DE4u;
    SET_GPR_U32(ctx, 31, 0x2E5DECu);
    ctx->pc = 0x2E5DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5DE4u;
    // 0x2e5de8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5DE4u, 0x2E5DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5DECu;
label_2e5dec:
    // 0x2e5dec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e5decu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5df0:
    // 0x2e5df0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2e5df4:
    if (ctx->pc == 0x2E5DF4u) {
        ctx->pc = 0x2E5DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5DF0u;
        // 0x2e5df4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5DF8u;
        goto label_2e5df8;
    }
    ctx->pc = 0x2E5DF0u;
    {
        const bool branch_taken_0x2e5df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5DF0u;
        // 0x2e5df4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5df0) {
            ctx->pc = 0x2E5E14u;
            goto label_2e5e14;
        }
    }
    ctx->pc = 0x2E5DF8u;
label_2e5df8:
    // 0x2e5df8: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_2e5dfc:
    if (ctx->pc == 0x2E5DFCu) {
        ctx->pc = 0x2E5DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5DF8u;
        // 0x2e5dfc: 0x8c620080  lw          $v0, 0x80($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5E00u;
        goto label_2e5e00;
    }
    ctx->pc = 0x2E5DF8u;
    {
        const bool branch_taken_0x2e5df8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5DF8u;
        // 0x2e5dfc: 0x8c620080  lw          $v0, 0x80($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5df8) {
            ctx->pc = 0x2E5E08u;
            goto label_2e5e08;
        }
    }
    ctx->pc = 0x2E5E00u;
label_2e5e00:
    // 0x2e5e00: 0x10000002  b           . + 4 + (0x2 << 2)
label_2e5e04:
    if (ctx->pc == 0x2E5E04u) {
        ctx->pc = 0x2E5E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E00u;
        // 0x2e5e04: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5E08u;
        goto label_2e5e08;
    }
    ctx->pc = 0x2E5E00u;
    {
        const bool branch_taken_0x2e5e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E00u;
        // 0x2e5e04: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e00) {
            ctx->pc = 0x2E5E0Cu;
            goto label_2e5e0c;
        }
    }
    ctx->pc = 0x2E5E08u;
label_2e5e08:
    // 0x2e5e08: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2e5e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_2e5e0c:
    // 0x2e5e0c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2e5e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2e5e10:
    // 0x2e5e10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e5e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e5e14:
    // 0x2e5e14: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e5e14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e5e18:
    // 0x2e5e18: 0xc04a368  jal         func_128DA0
label_2e5e1c:
    if (ctx->pc == 0x2E5E1Cu) {
        ctx->pc = 0x2E5E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E18u;
        // 0x2e5e1c: 0x27c501d0  addiu       $a1, $fp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5E20u;
        goto label_2e5e20;
    }
    ctx->pc = 0x2E5E18u;
    SET_GPR_U32(ctx, 31, 0x2E5E20u);
    ctx->pc = 0x2E5E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5E18u;
    // 0x2e5e1c: 0x27c501d0  addiu       $a1, $fp, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2E5E18u, 0x2E5E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5E20u;
label_2e5e20:
    // 0x2e5e20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5e24:
    // 0x2e5e24: 0xc0a5b64  jal         func_296D90
label_2e5e28:
    if (ctx->pc == 0x2E5E28u) {
        ctx->pc = 0x2E5E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E24u;
        // 0x2e5e28: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5E2Cu;
        goto label_2e5e2c;
    }
    ctx->pc = 0x2E5E24u;
    SET_GPR_U32(ctx, 31, 0x2E5E2Cu);
    ctx->pc = 0x2E5E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5E24u;
    // 0x2e5e28: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5E24u, 0x2E5E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5E2Cu;
label_2e5e2c:
    // 0x2e5e2c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e5e2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5e30:
    // 0x2e5e30: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2e5e34:
    if (ctx->pc == 0x2E5E34u) {
        ctx->pc = 0x2E5E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E30u;
        // 0x2e5e34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5E38u;
        goto label_2e5e38;
    }
    ctx->pc = 0x2E5E30u;
    {
        const bool branch_taken_0x2e5e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E30u;
        // 0x2e5e34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e30) {
            ctx->pc = 0x2E5E54u;
            goto label_2e5e54;
        }
    }
    ctx->pc = 0x2E5E38u;
label_2e5e38:
    // 0x2e5e38: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_2e5e3c:
    if (ctx->pc == 0x2E5E3Cu) {
        ctx->pc = 0x2E5E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E38u;
        // 0x2e5e3c: 0x8c620080  lw          $v0, 0x80($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5E40u;
        goto label_2e5e40;
    }
    ctx->pc = 0x2E5E38u;
    {
        const bool branch_taken_0x2e5e38 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E38u;
        // 0x2e5e3c: 0x8c620080  lw          $v0, 0x80($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e38) {
            ctx->pc = 0x2E5E48u;
            goto label_2e5e48;
        }
    }
    ctx->pc = 0x2E5E40u;
label_2e5e40:
    // 0x2e5e40: 0x10000002  b           . + 4 + (0x2 << 2)
label_2e5e44:
    if (ctx->pc == 0x2E5E44u) {
        ctx->pc = 0x2E5E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E40u;
        // 0x2e5e44: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5E48u;
        goto label_2e5e48;
    }
    ctx->pc = 0x2E5E40u;
    {
        const bool branch_taken_0x2e5e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E40u;
        // 0x2e5e44: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e40) {
            ctx->pc = 0x2E5E4Cu;
            goto label_2e5e4c;
        }
    }
    ctx->pc = 0x2E5E48u;
label_2e5e48:
    // 0x2e5e48: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2e5e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_2e5e4c:
    // 0x2e5e4c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2e5e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2e5e50:
    // 0x2e5e50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e5e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e5e54:
    // 0x2e5e54: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e5e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e5e58:
    // 0x2e5e58: 0xc04a368  jal         func_128DA0
label_2e5e5c:
    if (ctx->pc == 0x2E5E5Cu) {
        ctx->pc = 0x2E5E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E58u;
        // 0x2e5e5c: 0x26e501f8  addiu       $a1, $s7, 0x1F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 504));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5E60u;
        goto label_2e5e60;
    }
    ctx->pc = 0x2E5E58u;
    SET_GPR_U32(ctx, 31, 0x2E5E60u);
    ctx->pc = 0x2E5E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5E58u;
    // 0x2e5e5c: 0x26e501f8  addiu       $a1, $s7, 0x1F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2E5E58u, 0x2E5E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5E60u;
label_2e5e60:
    // 0x2e5e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5e64:
    // 0x2e5e64: 0xc0a5b64  jal         func_296D90
label_2e5e68:
    if (ctx->pc == 0x2E5E68u) {
        ctx->pc = 0x2E5E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E64u;
        // 0x2e5e68: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5E6Cu;
        goto label_2e5e6c;
    }
    ctx->pc = 0x2E5E64u;
    SET_GPR_U32(ctx, 31, 0x2E5E6Cu);
    ctx->pc = 0x2E5E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5E64u;
    // 0x2e5e68: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5E64u, 0x2E5E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5E6Cu;
label_2e5e6c:
    // 0x2e5e6c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e5e6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5e70:
    // 0x2e5e70: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2e5e74:
    if (ctx->pc == 0x2E5E74u) {
        ctx->pc = 0x2E5E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E70u;
        // 0x2e5e74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5E78u;
        goto label_2e5e78;
    }
    ctx->pc = 0x2E5E70u;
    {
        const bool branch_taken_0x2e5e70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E70u;
        // 0x2e5e74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e70) {
            ctx->pc = 0x2E5E94u;
            goto label_2e5e94;
        }
    }
    ctx->pc = 0x2E5E78u;
label_2e5e78:
    // 0x2e5e78: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_2e5e7c:
    if (ctx->pc == 0x2E5E7Cu) {
        ctx->pc = 0x2E5E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E78u;
        // 0x2e5e7c: 0x8c620080  lw          $v0, 0x80($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5E80u;
        goto label_2e5e80;
    }
    ctx->pc = 0x2E5E78u;
    {
        const bool branch_taken_0x2e5e78 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E78u;
        // 0x2e5e7c: 0x8c620080  lw          $v0, 0x80($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e78) {
            ctx->pc = 0x2E5E88u;
            goto label_2e5e88;
        }
    }
    ctx->pc = 0x2E5E80u;
label_2e5e80:
    // 0x2e5e80: 0x10000002  b           . + 4 + (0x2 << 2)
label_2e5e84:
    if (ctx->pc == 0x2E5E84u) {
        ctx->pc = 0x2E5E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E80u;
        // 0x2e5e84: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5E88u;
        goto label_2e5e88;
    }
    ctx->pc = 0x2E5E80u;
    {
        const bool branch_taken_0x2e5e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E80u;
        // 0x2e5e84: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e80) {
            ctx->pc = 0x2E5E8Cu;
            goto label_2e5e8c;
        }
    }
    ctx->pc = 0x2E5E88u;
label_2e5e88:
    // 0x2e5e88: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2e5e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_2e5e8c:
    // 0x2e5e8c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2e5e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2e5e90:
    // 0x2e5e90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e5e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e5e94:
    // 0x2e5e94: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e5e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e5e98:
    // 0x2e5e98: 0xc04a368  jal         func_128DA0
label_2e5e9c:
    if (ctx->pc == 0x2E5E9Cu) {
        ctx->pc = 0x2E5E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E98u;
        // 0x2e5e9c: 0x26c50220  addiu       $a1, $s6, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5EA0u;
        goto label_2e5ea0;
    }
    ctx->pc = 0x2E5E98u;
    SET_GPR_U32(ctx, 31, 0x2E5EA0u);
    ctx->pc = 0x2E5E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5E98u;
    // 0x2e5e9c: 0x26c50220  addiu       $a1, $s6, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2E5E98u, 0x2E5EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5EA0u;
label_2e5ea0:
    // 0x2e5ea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5ea4:
    // 0x2e5ea4: 0xc0a5b64  jal         func_296D90
label_2e5ea8:
    if (ctx->pc == 0x2E5EA8u) {
        ctx->pc = 0x2E5EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5EA4u;
        // 0x2e5ea8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5EACu;
        goto label_2e5eac;
    }
    ctx->pc = 0x2E5EA4u;
    SET_GPR_U32(ctx, 31, 0x2E5EACu);
    ctx->pc = 0x2E5EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5EA4u;
    // 0x2e5ea8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5EA4u, 0x2E5EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5EACu;
label_2e5eac:
    // 0x2e5eac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e5eacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5eb0:
    // 0x2e5eb0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2e5eb4:
    if (ctx->pc == 0x2E5EB4u) {
        ctx->pc = 0x2E5EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5EB0u;
        // 0x2e5eb4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5EB8u;
        goto label_2e5eb8;
    }
    ctx->pc = 0x2E5EB0u;
    {
        const bool branch_taken_0x2e5eb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5EB0u;
        // 0x2e5eb4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5eb0) {
            ctx->pc = 0x2E5ED4u;
            goto label_2e5ed4;
        }
    }
    ctx->pc = 0x2E5EB8u;
label_2e5eb8:
    // 0x2e5eb8: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_2e5ebc:
    if (ctx->pc == 0x2E5EBCu) {
        ctx->pc = 0x2E5EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5EB8u;
        // 0x2e5ebc: 0x8c620080  lw          $v0, 0x80($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5EC0u;
        goto label_2e5ec0;
    }
    ctx->pc = 0x2E5EB8u;
    {
        const bool branch_taken_0x2e5eb8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5EB8u;
        // 0x2e5ebc: 0x8c620080  lw          $v0, 0x80($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5eb8) {
            ctx->pc = 0x2E5EC8u;
            goto label_2e5ec8;
        }
    }
    ctx->pc = 0x2E5EC0u;
label_2e5ec0:
    // 0x2e5ec0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2e5ec4:
    if (ctx->pc == 0x2E5EC4u) {
        ctx->pc = 0x2E5EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5EC0u;
        // 0x2e5ec4: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5EC8u;
        goto label_2e5ec8;
    }
    ctx->pc = 0x2E5EC0u;
    {
        const bool branch_taken_0x2e5ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5EC0u;
        // 0x2e5ec4: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5ec0) {
            ctx->pc = 0x2E5ECCu;
            goto label_2e5ecc;
        }
    }
    ctx->pc = 0x2E5EC8u;
label_2e5ec8:
    // 0x2e5ec8: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2e5ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_2e5ecc:
    // 0x2e5ecc: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2e5eccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2e5ed0:
    // 0x2e5ed0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e5ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e5ed4:
    // 0x2e5ed4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e5ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e5ed8:
    // 0x2e5ed8: 0xc04a368  jal         func_128DA0
label_2e5edc:
    if (ctx->pc == 0x2E5EDCu) {
        ctx->pc = 0x2E5EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5ED8u;
        // 0x2e5edc: 0x26a50248  addiu       $a1, $s5, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5EE0u;
        goto label_2e5ee0;
    }
    ctx->pc = 0x2E5ED8u;
    SET_GPR_U32(ctx, 31, 0x2E5EE0u);
    ctx->pc = 0x2E5EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5ED8u;
    // 0x2e5edc: 0x26a50248  addiu       $a1, $s5, 0x248 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2E5ED8u, 0x2E5EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5EE0u;
label_2e5ee0:
    // 0x2e5ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5ee4:
    // 0x2e5ee4: 0xc0a5b64  jal         func_296D90
label_2e5ee8:
    if (ctx->pc == 0x2E5EE8u) {
        ctx->pc = 0x2E5EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5EE4u;
        // 0x2e5ee8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5EECu;
        goto label_2e5eec;
    }
    ctx->pc = 0x2E5EE4u;
    SET_GPR_U32(ctx, 31, 0x2E5EECu);
    ctx->pc = 0x2E5EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5EE4u;
    // 0x2e5ee8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5EE4u, 0x2E5EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5EECu;
label_2e5eec:
    // 0x2e5eec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e5eecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5ef0:
    // 0x2e5ef0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2e5ef4:
    if (ctx->pc == 0x2E5EF4u) {
        ctx->pc = 0x2E5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5EF0u;
        // 0x2e5ef4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5EF8u;
        goto label_2e5ef8;
    }
    ctx->pc = 0x2E5EF0u;
    {
        const bool branch_taken_0x2e5ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5EF0u;
        // 0x2e5ef4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5ef0) {
            ctx->pc = 0x2E5F14u;
            goto label_2e5f14;
        }
    }
    ctx->pc = 0x2E5EF8u;
label_2e5ef8:
    // 0x2e5ef8: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_2e5efc:
    if (ctx->pc == 0x2E5EFCu) {
        ctx->pc = 0x2E5EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5EF8u;
        // 0x2e5efc: 0x8c620080  lw          $v0, 0x80($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5F00u;
        goto label_2e5f00;
    }
    ctx->pc = 0x2E5EF8u;
    {
        const bool branch_taken_0x2e5ef8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5EF8u;
        // 0x2e5efc: 0x8c620080  lw          $v0, 0x80($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5ef8) {
            ctx->pc = 0x2E5F08u;
            goto label_2e5f08;
        }
    }
    ctx->pc = 0x2E5F00u;
label_2e5f00:
    // 0x2e5f00: 0x10000002  b           . + 4 + (0x2 << 2)
label_2e5f04:
    if (ctx->pc == 0x2E5F04u) {
        ctx->pc = 0x2E5F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F00u;
        // 0x2e5f04: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5F08u;
        goto label_2e5f08;
    }
    ctx->pc = 0x2E5F00u;
    {
        const bool branch_taken_0x2e5f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F00u;
        // 0x2e5f04: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f00) {
            ctx->pc = 0x2E5F0Cu;
            goto label_2e5f0c;
        }
    }
    ctx->pc = 0x2E5F08u;
label_2e5f08:
    // 0x2e5f08: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2e5f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_2e5f0c:
    // 0x2e5f0c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2e5f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2e5f10:
    // 0x2e5f10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e5f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e5f14:
    // 0x2e5f14: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e5f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e5f18:
    // 0x2e5f18: 0xc04a368  jal         func_128DA0
label_2e5f1c:
    if (ctx->pc == 0x2E5F1Cu) {
        ctx->pc = 0x2E5F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F18u;
        // 0x2e5f1c: 0x26850270  addiu       $a1, $s4, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5F20u;
        goto label_2e5f20;
    }
    ctx->pc = 0x2E5F18u;
    SET_GPR_U32(ctx, 31, 0x2E5F20u);
    ctx->pc = 0x2E5F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5F18u;
    // 0x2e5f1c: 0x26850270  addiu       $a1, $s4, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2E5F18u, 0x2E5F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5F20u;
label_2e5f20:
    // 0x2e5f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5f24:
    // 0x2e5f24: 0xc0a5b64  jal         func_296D90
label_2e5f28:
    if (ctx->pc == 0x2E5F28u) {
        ctx->pc = 0x2E5F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F24u;
        // 0x2e5f28: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5F2Cu;
        goto label_2e5f2c;
    }
    ctx->pc = 0x2E5F24u;
    SET_GPR_U32(ctx, 31, 0x2E5F2Cu);
    ctx->pc = 0x2E5F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5F24u;
    // 0x2e5f28: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5F24u, 0x2E5F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5F2Cu;
label_2e5f2c:
    // 0x2e5f2c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e5f2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5f30:
    // 0x2e5f30: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_2e5f34:
    if (ctx->pc == 0x2E5F34u) {
        ctx->pc = 0x2E5F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F30u;
        // 0x2e5f34: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5F38u;
        goto label_2e5f38;
    }
    ctx->pc = 0x2E5F30u;
    {
        const bool branch_taken_0x2e5f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5f30) {
            ctx->pc = 0x2E5F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5F30u;
            // 0x2e5f34: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5F54u;
            goto label_2e5f54;
        }
    }
    ctx->pc = 0x2E5F38u;
label_2e5f38:
    // 0x2e5f38: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_2e5f3c:
    if (ctx->pc == 0x2E5F3Cu) {
        ctx->pc = 0x2E5F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F38u;
        // 0x2e5f3c: 0x8c620080  lw          $v0, 0x80($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5F40u;
        goto label_2e5f40;
    }
    ctx->pc = 0x2E5F38u;
    {
        const bool branch_taken_0x2e5f38 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F38u;
        // 0x2e5f3c: 0x8c620080  lw          $v0, 0x80($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f38) {
            ctx->pc = 0x2E5F48u;
            goto label_2e5f48;
        }
    }
    ctx->pc = 0x2E5F40u;
label_2e5f40:
    // 0x2e5f40: 0x10000002  b           . + 4 + (0x2 << 2)
label_2e5f44:
    if (ctx->pc == 0x2E5F44u) {
        ctx->pc = 0x2E5F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F40u;
        // 0x2e5f44: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5F48u;
        goto label_2e5f48;
    }
    ctx->pc = 0x2E5F40u;
    {
        const bool branch_taken_0x2e5f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F40u;
        // 0x2e5f44: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f40) {
            ctx->pc = 0x2E5F4Cu;
            goto label_2e5f4c;
        }
    }
    ctx->pc = 0x2E5F48u;
label_2e5f48:
    // 0x2e5f48: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2e5f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_2e5f4c:
    // 0x2e5f4c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2e5f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2e5f50:
    // 0x2e5f50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e5f50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2e5f54:
    // 0x2e5f54: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x2e5f54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_2e5f58:
    // 0x2e5f58: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
label_2e5f5c:
    if (ctx->pc == 0x2E5F5Cu) {
        ctx->pc = 0x2E5F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F58u;
        // 0x2e5f5c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5F60u;
        goto label_2e5f60;
    }
    ctx->pc = 0x2E5F58u;
    {
        const bool branch_taken_0x2e5f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F58u;
        // 0x2e5f5c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f58) {
            ctx->pc = 0x2E5DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5dd0;
        }
    }
    ctx->pc = 0x2E5F60u;
label_2e5f60:
    // 0x2e5f60: 0x1000012d  b           . + 4 + (0x12D << 2)
label_2e5f64:
    if (ctx->pc == 0x2E5F64u) {
        ctx->pc = 0x2E5F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F60u;
        // 0x2e5f64: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5F68u;
        goto label_2e5f68;
    }
    ctx->pc = 0x2E5F60u;
    {
        const bool branch_taken_0x2e5f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F60u;
        // 0x2e5f64: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f60) {
            ctx->pc = 0x2E6418u;
            goto label_2e6418;
        }
    }
    ctx->pc = 0x2E5F68u;
label_2e5f68:
    // 0x2e5f68: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e5f68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e5f6c:
    // 0x2e5f6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5f70:
    // 0x2e5f70: 0xc0a5b64  jal         func_296D90
label_2e5f74:
    if (ctx->pc == 0x2E5F74u) {
        ctx->pc = 0x2E5F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F70u;
        // 0x2e5f74: 0x24a50298  addiu       $a1, $a1, 0x298 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5F78u;
        goto label_2e5f78;
    }
    ctx->pc = 0x2E5F70u;
    SET_GPR_U32(ctx, 31, 0x2E5F78u);
    ctx->pc = 0x2E5F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5F70u;
    // 0x2e5f74: 0x24a50298  addiu       $a1, $a1, 0x298 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5F70u, 0x2E5F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5F78u;
label_2e5f78:
    // 0x2e5f78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5f7c:
    // 0x2e5f7c: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
label_2e5f80:
    if (ctx->pc == 0x2E5F80u) {
        ctx->pc = 0x2E5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F7Cu;
        // 0x2e5f80: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5F84u;
        goto label_2e5f84;
    }
    ctx->pc = 0x2E5F7Cu;
    {
        const bool branch_taken_0x2e5f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5f7c) {
            ctx->pc = 0x2E5F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5F7Cu;
            // 0x2e5f80: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5FA8u;
            goto label_2e5fa8;
        }
    }
    ctx->pc = 0x2E5F84u;
label_2e5f84:
    // 0x2e5f84: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_2e5f88:
    if (ctx->pc == 0x2E5F88u) {
        ctx->pc = 0x2E5F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F84u;
        // 0x2e5f88: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5F8Cu;
        goto label_2e5f8c;
    }
    ctx->pc = 0x2E5F84u;
    {
        const bool branch_taken_0x2e5f84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F84u;
        // 0x2e5f88: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f84) {
            ctx->pc = 0x2E5F98u;
            goto label_2e5f98;
        }
    }
    ctx->pc = 0x2E5F8Cu;
label_2e5f8c:
    // 0x2e5f8c: 0x10000004  b           . + 4 + (0x4 << 2)
label_2e5f90:
    if (ctx->pc == 0x2E5F90u) {
        ctx->pc = 0x2E5F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F8Cu;
        // 0x2e5f90: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5F94u;
        goto label_2e5f94;
    }
    ctx->pc = 0x2E5F8Cu;
    {
        const bool branch_taken_0x2e5f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F8Cu;
        // 0x2e5f90: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f8c) {
            ctx->pc = 0x2E5FA0u;
            goto label_2e5fa0;
        }
    }
    ctx->pc = 0x2E5F94u;
label_2e5f94:
    // 0x2e5f94: 0x0  nop
    ctx->pc = 0x2e5f94u;
    // NOP
label_2e5f98:
    // 0x2e5f98: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2e5f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_2e5f9c:
    // 0x2e5f9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e5fa0:
    // 0x2e5fa0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e5fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e5fa4:
    // 0x2e5fa4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e5fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e5fa8:
    // 0x2e5fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5fac:
    // 0x2e5fac: 0xc0a5b64  jal         func_296D90
label_2e5fb0:
    if (ctx->pc == 0x2E5FB0u) {
        ctx->pc = 0x2E5FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5FACu;
        // 0x2e5fb0: 0x24a502b0  addiu       $a1, $a1, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5FB4u;
        goto label_2e5fb4;
    }
    ctx->pc = 0x2E5FACu;
    SET_GPR_U32(ctx, 31, 0x2E5FB4u);
    ctx->pc = 0x2E5FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5FACu;
    // 0x2e5fb0: 0x24a502b0  addiu       $a1, $a1, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5FACu, 0x2E5FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5FB4u;
label_2e5fb4:
    // 0x2e5fb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5fb8:
    // 0x2e5fb8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e5fbc:
    if (ctx->pc == 0x2E5FBCu) {
        ctx->pc = 0x2E5FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5FB8u;
        // 0x2e5fbc: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5FC0u;
        goto label_2e5fc0;
    }
    ctx->pc = 0x2E5FB8u;
    {
        const bool branch_taken_0x2e5fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5FB8u;
        // 0x2e5fbc: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5fb8) {
            ctx->pc = 0x2E5FCCu;
            goto label_2e5fcc;
        }
    }
    ctx->pc = 0x2E5FC0u;
label_2e5fc0:
    // 0x2e5fc0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e5fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2e5fc4:
    // 0x2e5fc4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e5fc8:
    // 0x2e5fc8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e5fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e5fcc:
    // 0x2e5fcc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e5fccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e5fd0:
    // 0x2e5fd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5fd4:
    // 0x2e5fd4: 0xc0a5b64  jal         func_296D90
label_2e5fd8:
    if (ctx->pc == 0x2E5FD8u) {
        ctx->pc = 0x2E5FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5FD4u;
        // 0x2e5fd8: 0x24a502d0  addiu       $a1, $a1, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5FDCu;
        goto label_2e5fdc;
    }
    ctx->pc = 0x2E5FD4u;
    SET_GPR_U32(ctx, 31, 0x2E5FDCu);
    ctx->pc = 0x2E5FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5FD4u;
    // 0x2e5fd8: 0x24a502d0  addiu       $a1, $a1, 0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5FD4u, 0x2E5FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5FDCu;
label_2e5fdc:
    // 0x2e5fdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5fe0:
    // 0x2e5fe0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e5fe4:
    if (ctx->pc == 0x2E5FE4u) {
        ctx->pc = 0x2E5FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5FE0u;
        // 0x2e5fe4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5FE8u;
        goto label_2e5fe8;
    }
    ctx->pc = 0x2E5FE0u;
    {
        const bool branch_taken_0x2e5fe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5FE0u;
        // 0x2e5fe4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5fe0) {
            ctx->pc = 0x2E5FF4u;
            goto label_2e5ff4;
        }
    }
    ctx->pc = 0x2E5FE8u;
label_2e5fe8:
    // 0x2e5fe8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e5fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2e5fec:
    // 0x2e5fec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e5ff0:
    // 0x2e5ff0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e5ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e5ff4:
    // 0x2e5ff4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e5ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e5ff8:
    // 0x2e5ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5ffc:
    // 0x2e5ffc: 0xc0a5b64  jal         func_296D90
label_2e6000:
    if (ctx->pc == 0x2E6000u) {
        ctx->pc = 0x2E6000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5FFCu;
        // 0x2e6000: 0x24a502f0  addiu       $a1, $a1, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6004u;
        goto label_2e6004;
    }
    ctx->pc = 0x2E5FFCu;
    SET_GPR_U32(ctx, 31, 0x2E6004u);
    ctx->pc = 0x2E6000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5FFCu;
    // 0x2e6000: 0x24a502f0  addiu       $a1, $a1, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E5FFCu, 0x2E6004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6004u;
label_2e6004:
    // 0x2e6004: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e6004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6008:
    // 0x2e6008: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e600c:
    if (ctx->pc == 0x2E600Cu) {
        ctx->pc = 0x2E600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6008u;
        // 0x2e600c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6010u;
        goto label_2e6010;
    }
    ctx->pc = 0x2E6008u;
    {
        const bool branch_taken_0x2e6008 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6008u;
        // 0x2e600c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6008) {
            ctx->pc = 0x2E601Cu;
            goto label_2e601c;
        }
    }
    ctx->pc = 0x2E6010u;
label_2e6010:
    // 0x2e6010: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e6010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2e6014:
    // 0x2e6014: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e6014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e6018:
    // 0x2e6018: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e6018u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e601c:
    // 0x2e601c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e601cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e6020:
    // 0x2e6020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e6024:
    // 0x2e6024: 0xc0a5b64  jal         func_296D90
label_2e6028:
    if (ctx->pc == 0x2E6028u) {
        ctx->pc = 0x2E6028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6024u;
        // 0x2e6028: 0x24a50310  addiu       $a1, $a1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E602Cu;
        goto label_2e602c;
    }
    ctx->pc = 0x2E6024u;
    SET_GPR_U32(ctx, 31, 0x2E602Cu);
    ctx->pc = 0x2E6028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6024u;
    // 0x2e6028: 0x24a50310  addiu       $a1, $a1, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E6024u, 0x2E602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E602Cu;
label_2e602c:
    // 0x2e602c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e602cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6030:
    // 0x2e6030: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e6034:
    if (ctx->pc == 0x2E6034u) {
        ctx->pc = 0x2E6034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6030u;
        // 0x2e6034: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6038u;
        goto label_2e6038;
    }
    ctx->pc = 0x2E6030u;
    {
        const bool branch_taken_0x2e6030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6030u;
        // 0x2e6034: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6030) {
            ctx->pc = 0x2E6044u;
            goto label_2e6044;
        }
    }
    ctx->pc = 0x2E6038u;
label_2e6038:
    // 0x2e6038: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e6038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2e603c:
    // 0x2e603c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e603cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e6040:
    // 0x2e6040: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e6040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e6044:
    // 0x2e6044: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e6044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e6048:
    // 0x2e6048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e604c:
    // 0x2e604c: 0xc0a5b64  jal         func_296D90
label_2e6050:
    if (ctx->pc == 0x2E6050u) {
        ctx->pc = 0x2E6050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E604Cu;
        // 0x2e6050: 0x24a50330  addiu       $a1, $a1, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6054u;
        goto label_2e6054;
    }
    ctx->pc = 0x2E604Cu;
    SET_GPR_U32(ctx, 31, 0x2E6054u);
    ctx->pc = 0x2E6050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E604Cu;
    // 0x2e6050: 0x24a50330  addiu       $a1, $a1, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E604Cu, 0x2E6054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6054u;
label_2e6054:
    // 0x2e6054: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e6054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6058:
    // 0x2e6058: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e605c:
    if (ctx->pc == 0x2E605Cu) {
        ctx->pc = 0x2E605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6058u;
        // 0x2e605c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6060u;
        goto label_2e6060;
    }
    ctx->pc = 0x2E6058u;
    {
        const bool branch_taken_0x2e6058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6058u;
        // 0x2e605c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6058) {
            ctx->pc = 0x2E606Cu;
            goto label_2e606c;
        }
    }
    ctx->pc = 0x2E6060u;
label_2e6060:
    // 0x2e6060: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e6060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2e6064:
    // 0x2e6064: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e6064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e6068:
    // 0x2e6068: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e6068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e606c:
    // 0x2e606c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e606cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e6070:
    // 0x2e6070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e6074:
    // 0x2e6074: 0xc0a5b64  jal         func_296D90
label_2e6078:
    if (ctx->pc == 0x2E6078u) {
        ctx->pc = 0x2E6078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6074u;
        // 0x2e6078: 0x24a50350  addiu       $a1, $a1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E607Cu;
        goto label_2e607c;
    }
    ctx->pc = 0x2E6074u;
    SET_GPR_U32(ctx, 31, 0x2E607Cu);
    ctx->pc = 0x2E6078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6074u;
    // 0x2e6078: 0x24a50350  addiu       $a1, $a1, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E6074u, 0x2E607Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E607Cu;
label_2e607c:
    // 0x2e607c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e607cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6080:
    // 0x2e6080: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e6084:
    if (ctx->pc == 0x2E6084u) {
        ctx->pc = 0x2E6084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6080u;
        // 0x2e6084: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6088u;
        goto label_2e6088;
    }
    ctx->pc = 0x2E6080u;
    {
        const bool branch_taken_0x2e6080 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6080u;
        // 0x2e6084: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6080) {
            ctx->pc = 0x2E6094u;
            goto label_2e6094;
        }
    }
    ctx->pc = 0x2E6088u;
label_2e6088:
    // 0x2e6088: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e6088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2e608c:
    // 0x2e608c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e608cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e6090:
    // 0x2e6090: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e6090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e6094:
    // 0x2e6094: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e6094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e6098:
    // 0x2e6098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e609c:
    // 0x2e609c: 0xc0a5b64  jal         func_296D90
label_2e60a0:
    if (ctx->pc == 0x2E60A0u) {
        ctx->pc = 0x2E60A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E609Cu;
        // 0x2e60a0: 0x24a50370  addiu       $a1, $a1, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E60A4u;
        goto label_2e60a4;
    }
    ctx->pc = 0x2E609Cu;
    SET_GPR_U32(ctx, 31, 0x2E60A4u);
    ctx->pc = 0x2E60A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E609Cu;
    // 0x2e60a0: 0x24a50370  addiu       $a1, $a1, 0x370 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E609Cu, 0x2E60A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E60A4u;
label_2e60a4:
    // 0x2e60a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e60a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e60a8:
    // 0x2e60a8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e60ac:
    if (ctx->pc == 0x2E60ACu) {
        ctx->pc = 0x2E60ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E60A8u;
        // 0x2e60ac: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E60B0u;
        goto label_2e60b0;
    }
    ctx->pc = 0x2E60A8u;
    {
        const bool branch_taken_0x2e60a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E60ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E60A8u;
        // 0x2e60ac: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e60a8) {
            ctx->pc = 0x2E60BCu;
            goto label_2e60bc;
        }
    }
    ctx->pc = 0x2E60B0u;
label_2e60b0:
    // 0x2e60b0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e60b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2e60b4:
    // 0x2e60b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e60b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e60b8:
    // 0x2e60b8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e60b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e60bc:
    // 0x2e60bc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e60bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e60c0:
    // 0x2e60c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e60c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e60c4:
    // 0x2e60c4: 0xc0a5b64  jal         func_296D90
label_2e60c8:
    if (ctx->pc == 0x2E60C8u) {
        ctx->pc = 0x2E60C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E60C4u;
        // 0x2e60c8: 0x24a50398  addiu       $a1, $a1, 0x398 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E60CCu;
        goto label_2e60cc;
    }
    ctx->pc = 0x2E60C4u;
    SET_GPR_U32(ctx, 31, 0x2E60CCu);
    ctx->pc = 0x2E60C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E60C4u;
    // 0x2e60c8: 0x24a50398  addiu       $a1, $a1, 0x398 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E60C4u, 0x2E60CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E60CCu;
label_2e60cc:
    // 0x2e60cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e60ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e60d0:
    // 0x2e60d0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2e60d4:
    if (ctx->pc == 0x2E60D4u) {
        ctx->pc = 0x2E60D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E60D0u;
        // 0x2e60d4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E60D8u;
        goto label_2e60d8;
    }
    ctx->pc = 0x2E60D0u;
    {
        const bool branch_taken_0x2e60d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E60D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E60D0u;
        // 0x2e60d4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e60d0) {
            ctx->pc = 0x2E60E4u;
            goto label_2e60e4;
        }
    }
    ctx->pc = 0x2E60D8u;
label_2e60d8:
    // 0x2e60d8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2e60d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2e60dc:
    // 0x2e60dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e60dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e60e0:
    // 0x2e60e0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e60e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e60e4:
    // 0x2e60e4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2e60e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e60e8:
    // 0x2e60e8: 0x3c160048  lui         $s6, 0x48
    ctx->pc = 0x2e60e8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
label_2e60ec:
    // 0x2e60ec: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x2e60ecu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
label_2e60f0:
    // 0x2e60f0: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x2e60f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
label_2e60f4:
    // 0x2e60f4: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x2e60f4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
label_2e60f8:
    // 0x2e60f8: 0x2412efff  addiu       $s2, $zero, -0x1001
    ctx->pc = 0x2e60f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_2e60fc:
    // 0x2e60fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e60fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e6100:
    // 0x2e6100: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e6100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e6104:
    // 0x2e6104: 0xc04a368  jal         func_128DA0
label_2e6108:
    if (ctx->pc == 0x2E6108u) {
        ctx->pc = 0x2E6108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6104u;
        // 0x2e6108: 0x26c503c0  addiu       $a1, $s6, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E610Cu;
        goto label_2e610c;
    }
    ctx->pc = 0x2E6104u;
    SET_GPR_U32(ctx, 31, 0x2E610Cu);
    ctx->pc = 0x2E6108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6104u;
    // 0x2e6108: 0x26c503c0  addiu       $a1, $s6, 0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2E6104u, 0x2E610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E610Cu;
label_2e610c:
    // 0x2e610c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e610cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e6110:
    // 0x2e6110: 0xc0a5b64  jal         func_296D90
label_2e6114:
    if (ctx->pc == 0x2E6114u) {
        ctx->pc = 0x2E6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6110u;
        // 0x2e6114: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6118u;
        goto label_2e6118;
    }
    ctx->pc = 0x2E6110u;
    SET_GPR_U32(ctx, 31, 0x2E6118u);
    ctx->pc = 0x2E6114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6110u;
    // 0x2e6114: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E6110u, 0x2E6118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6118u;
label_2e6118:
    // 0x2e6118: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e6118u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e611c:
    // 0x2e611c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2e6120:
    if (ctx->pc == 0x2E6120u) {
        ctx->pc = 0x2E6120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E611Cu;
        // 0x2e6120: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6124u;
        goto label_2e6124;
    }
    ctx->pc = 0x2E611Cu;
    {
        const bool branch_taken_0x2e611c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E611Cu;
        // 0x2e6120: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e611c) {
            ctx->pc = 0x2E6130u;
            goto label_2e6130;
        }
    }
    ctx->pc = 0x2E6124u;
label_2e6124:
    // 0x2e6124: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e6124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_2e6128:
    // 0x2e6128: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2e6128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_2e612c:
    // 0x2e612c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2e612cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2e6130:
    // 0x2e6130: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e6130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e6134:
    // 0x2e6134: 0xc04a368  jal         func_128DA0
label_2e6138:
    if (ctx->pc == 0x2E6138u) {
        ctx->pc = 0x2E6138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6134u;
        // 0x2e6138: 0x26a503e8  addiu       $a1, $s5, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E613Cu;
        goto label_2e613c;
    }
    ctx->pc = 0x2E6134u;
    SET_GPR_U32(ctx, 31, 0x2E613Cu);
    ctx->pc = 0x2E6138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6134u;
    // 0x2e6138: 0x26a503e8  addiu       $a1, $s5, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2E6134u, 0x2E613Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E613Cu;
label_2e613c:
    // 0x2e613c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e613cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e6140:
    // 0x2e6140: 0xc0a5b64  jal         func_296D90
label_2e6144:
    if (ctx->pc == 0x2E6144u) {
        ctx->pc = 0x2E6144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6140u;
        // 0x2e6144: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6148u;
        goto label_2e6148;
    }
    ctx->pc = 0x2E6140u;
    SET_GPR_U32(ctx, 31, 0x2E6148u);
    ctx->pc = 0x2E6144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6140u;
    // 0x2e6144: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E6140u, 0x2E6148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6148u;
label_2e6148:
    // 0x2e6148: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e6148u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e614c:
    // 0x2e614c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2e6150:
    if (ctx->pc == 0x2E6150u) {
        ctx->pc = 0x2E6150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E614Cu;
        // 0x2e6150: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6154u;
        goto label_2e6154;
    }
    ctx->pc = 0x2E614Cu;
    {
        const bool branch_taken_0x2e614c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E614Cu;
        // 0x2e6150: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e614c) {
            ctx->pc = 0x2E6160u;
            goto label_2e6160;
        }
    }
    ctx->pc = 0x2E6154u;
label_2e6154:
    // 0x2e6154: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e6154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_2e6158:
    // 0x2e6158: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2e6158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_2e615c:
    // 0x2e615c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2e615cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2e6160:
    // 0x2e6160: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e6160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e6164:
    // 0x2e6164: 0xc04a368  jal         func_128DA0
label_2e6168:
    if (ctx->pc == 0x2E6168u) {
        ctx->pc = 0x2E6168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6164u;
        // 0x2e6168: 0x26850410  addiu       $a1, $s4, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E616Cu;
        goto label_2e616c;
    }
    ctx->pc = 0x2E6164u;
    SET_GPR_U32(ctx, 31, 0x2E616Cu);
    ctx->pc = 0x2E6168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6164u;
    // 0x2e6168: 0x26850410  addiu       $a1, $s4, 0x410 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2E6164u, 0x2E616Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E616Cu;
label_2e616c:
    // 0x2e616c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e616cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e6170:
    // 0x2e6170: 0xc0a5b64  jal         func_296D90
label_2e6174:
    if (ctx->pc == 0x2E6174u) {
        ctx->pc = 0x2E6174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6170u;
        // 0x2e6174: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6178u;
        goto label_2e6178;
    }
    ctx->pc = 0x2E6170u;
    SET_GPR_U32(ctx, 31, 0x2E6178u);
    ctx->pc = 0x2E6174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6170u;
    // 0x2e6174: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E6170u, 0x2E6178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6178u;
label_2e6178:
    // 0x2e6178: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e6178u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e617c:
    // 0x2e617c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2e6180:
    if (ctx->pc == 0x2E6180u) {
        ctx->pc = 0x2E6180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E617Cu;
        // 0x2e6180: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6184u;
        goto label_2e6184;
    }
    ctx->pc = 0x2E617Cu;
    {
        const bool branch_taken_0x2e617c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E617Cu;
        // 0x2e6180: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e617c) {
            ctx->pc = 0x2E6190u;
            goto label_2e6190;
        }
    }
    ctx->pc = 0x2E6184u;
label_2e6184:
    // 0x2e6184: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e6184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_2e6188:
    // 0x2e6188: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2e6188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_2e618c:
    // 0x2e618c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2e618cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2e6190:
    // 0x2e6190: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e6190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e6194:
    // 0x2e6194: 0xc04a368  jal         func_128DA0
label_2e6198:
    if (ctx->pc == 0x2E6198u) {
        ctx->pc = 0x2E6198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6194u;
        // 0x2e6198: 0x26650438  addiu       $a1, $s3, 0x438 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E619Cu;
        goto label_2e619c;
    }
    ctx->pc = 0x2E6194u;
    SET_GPR_U32(ctx, 31, 0x2E619Cu);
    ctx->pc = 0x2E6198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6194u;
    // 0x2e6198: 0x26650438  addiu       $a1, $s3, 0x438 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2E6194u, 0x2E619Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E619Cu;
label_2e619c:
    // 0x2e619c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e619cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e61a0:
    // 0x2e61a0: 0xc0a5b64  jal         func_296D90
label_2e61a4:
    if (ctx->pc == 0x2E61A4u) {
        ctx->pc = 0x2E61A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61A0u;
        // 0x2e61a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E61A8u;
        goto label_2e61a8;
    }
    ctx->pc = 0x2E61A0u;
    SET_GPR_U32(ctx, 31, 0x2E61A8u);
    ctx->pc = 0x2E61A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E61A0u;
    // 0x2e61a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E61A0u, 0x2E61A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E61A8u;
label_2e61a8:
    // 0x2e61a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e61a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e61ac:
    // 0x2e61ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2e61b0:
    if (ctx->pc == 0x2E61B0u) {
        ctx->pc = 0x2E61B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61ACu;
        // 0x2e61b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E61B4u;
        goto label_2e61b4;
    }
    ctx->pc = 0x2E61ACu;
    {
        const bool branch_taken_0x2e61ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E61B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61ACu;
        // 0x2e61b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e61ac) {
            ctx->pc = 0x2E61C0u;
            goto label_2e61c0;
        }
    }
    ctx->pc = 0x2E61B4u;
label_2e61b4:
    // 0x2e61b4: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e61b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_2e61b8:
    // 0x2e61b8: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2e61b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_2e61bc:
    // 0x2e61bc: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2e61bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2e61c0:
    // 0x2e61c0: 0x2a22000b  slti        $v0, $s1, 0xB
    ctx->pc = 0x2e61c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)11) ? 1 : 0);
label_2e61c4:
    // 0x2e61c4: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_2e61c8:
    if (ctx->pc == 0x2E61C8u) {
        ctx->pc = 0x2E61C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61C4u;
        // 0x2e61c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E61CCu;
        goto label_2e61cc;
    }
    ctx->pc = 0x2E61C4u;
    {
        const bool branch_taken_0x2e61c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E61C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61C4u;
        // 0x2e61c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e61c4) {
            ctx->pc = 0x2E6100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6100;
        }
    }
    ctx->pc = 0x2E61CCu;
label_2e61cc:
    // 0x2e61cc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2e61ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e61d0:
    // 0x2e61d0: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x2e61d0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
label_2e61d4:
    // 0x2e61d4: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x2e61d4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
label_2e61d8:
    // 0x2e61d8: 0x2412efff  addiu       $s2, $zero, -0x1001
    ctx->pc = 0x2e61d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_2e61dc:
    // 0x2e61dc: 0x0  nop
    ctx->pc = 0x2e61dcu;
    // NOP
label_2e61e0:
    // 0x2e61e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e61e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e61e4:
    // 0x2e61e4: 0xc04a368  jal         func_128DA0
label_2e61e8:
    if (ctx->pc == 0x2E61E8u) {
        ctx->pc = 0x2E61E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61E4u;
        // 0x2e61e8: 0x26850460  addiu       $a1, $s4, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E61ECu;
        goto label_2e61ec;
    }
    ctx->pc = 0x2E61E4u;
    SET_GPR_U32(ctx, 31, 0x2E61ECu);
    ctx->pc = 0x2E61E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E61E4u;
    // 0x2e61e8: 0x26850460  addiu       $a1, $s4, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2E61E4u, 0x2E61ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E61ECu;
label_2e61ec:
    // 0x2e61ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e61ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e61f0:
    // 0x2e61f0: 0xc0a5b64  jal         func_296D90
label_2e61f4:
    if (ctx->pc == 0x2E61F4u) {
        ctx->pc = 0x2E61F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61F0u;
        // 0x2e61f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E61F8u;
        goto label_2e61f8;
    }
    ctx->pc = 0x2E61F0u;
    SET_GPR_U32(ctx, 31, 0x2E61F8u);
    ctx->pc = 0x2E61F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E61F0u;
    // 0x2e61f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E61F0u, 0x2E61F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E61F8u;
label_2e61f8:
    // 0x2e61f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e61f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e61fc:
    // 0x2e61fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2e6200:
    if (ctx->pc == 0x2E6200u) {
        ctx->pc = 0x2E6200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61FCu;
        // 0x2e6200: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6204u;
        goto label_2e6204;
    }
    ctx->pc = 0x2E61FCu;
    {
        const bool branch_taken_0x2e61fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61FCu;
        // 0x2e6200: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e61fc) {
            ctx->pc = 0x2E6210u;
            goto label_2e6210;
        }
    }
    ctx->pc = 0x2E6204u;
label_2e6204:
    // 0x2e6204: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e6204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_2e6208:
    // 0x2e6208: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2e6208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_2e620c:
    // 0x2e620c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2e620cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2e6210:
    // 0x2e6210: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e6210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e6214:
    // 0x2e6214: 0xc04a368  jal         func_128DA0
label_2e6218:
    if (ctx->pc == 0x2E6218u) {
        ctx->pc = 0x2E6218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6214u;
        // 0x2e6218: 0x26650488  addiu       $a1, $s3, 0x488 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E621Cu;
        goto label_2e621c;
    }
    ctx->pc = 0x2E6214u;
    SET_GPR_U32(ctx, 31, 0x2E621Cu);
    ctx->pc = 0x2E6218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6214u;
    // 0x2e6218: 0x26650488  addiu       $a1, $s3, 0x488 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2E6214u, 0x2E621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E621Cu;
label_2e621c:
    // 0x2e621c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e621cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e6220:
    // 0x2e6220: 0xc0a5b64  jal         func_296D90
label_2e6224:
    if (ctx->pc == 0x2E6224u) {
        ctx->pc = 0x2E6224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6220u;
        // 0x2e6224: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6228u;
        goto label_2e6228;
    }
    ctx->pc = 0x2E6220u;
    SET_GPR_U32(ctx, 31, 0x2E6228u);
    ctx->pc = 0x2E6224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6220u;
    // 0x2e6224: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E6220u, 0x2E6228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6228u;
label_2e6228:
    // 0x2e6228: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e6228u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e622c:
    // 0x2e622c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2e6230:
    if (ctx->pc == 0x2E6230u) {
        ctx->pc = 0x2E6230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E622Cu;
        // 0x2e6230: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6234u;
        goto label_2e6234;
    }
    ctx->pc = 0x2E622Cu;
    {
        const bool branch_taken_0x2e622c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E622Cu;
        // 0x2e6230: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e622c) {
            ctx->pc = 0x2E6240u;
            goto label_2e6240;
        }
    }
    ctx->pc = 0x2E6234u;
label_2e6234:
    // 0x2e6234: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e6234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_2e6238:
    // 0x2e6238: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2e6238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_2e623c:
    // 0x2e623c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2e623cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2e6240:
    // 0x2e6240: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x2e6240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_2e6244:
    // 0x2e6244: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_2e6248:
    if (ctx->pc == 0x2E6248u) {
        ctx->pc = 0x2E6248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6244u;
        // 0x2e6248: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E624Cu;
        goto label_2e624c;
    }
    ctx->pc = 0x2E6244u;
    {
        const bool branch_taken_0x2e6244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6244u;
        // 0x2e6248: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6244) {
            ctx->pc = 0x2E61E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e61e0;
        }
    }
    ctx->pc = 0x2E624Cu;
label_2e624c:
    // 0x2e624c: 0x10000072  b           . + 4 + (0x72 << 2)
label_2e6250:
    if (ctx->pc == 0x2E6250u) {
        ctx->pc = 0x2E6250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E624Cu;
        // 0x2e6250: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6254u;
        goto label_2e6254;
    }
    ctx->pc = 0x2E624Cu;
    {
        const bool branch_taken_0x2e624c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E624Cu;
        // 0x2e6250: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e624c) {
            ctx->pc = 0x2E6418u;
            goto label_2e6418;
        }
    }
    ctx->pc = 0x2E6254u;
label_2e6254:
    // 0x2e6254: 0x0  nop
    ctx->pc = 0x2e6254u;
    // NOP
label_2e6258:
    // 0x2e6258: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e6258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e625c:
    // 0x2e625c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e625cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e6260:
    // 0x2e6260: 0xc0a5b64  jal         func_296D90
label_2e6264:
    if (ctx->pc == 0x2E6264u) {
        ctx->pc = 0x2E6264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6260u;
        // 0x2e6264: 0x24a504b0  addiu       $a1, $a1, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6268u;
        goto label_2e6268;
    }
    ctx->pc = 0x2E6260u;
    SET_GPR_U32(ctx, 31, 0x2E6268u);
    ctx->pc = 0x2E6264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6260u;
    // 0x2e6264: 0x24a504b0  addiu       $a1, $a1, 0x4B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E6260u, 0x2E6268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6268u;
label_2e6268:
    // 0x2e6268: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e6268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e626c:
    // 0x2e626c: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
label_2e6270:
    if (ctx->pc == 0x2E6270u) {
        ctx->pc = 0x2E6270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E626Cu;
        // 0x2e6270: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6274u;
        goto label_2e6274;
    }
    ctx->pc = 0x2E626Cu;
    {
        const bool branch_taken_0x2e626c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e626c) {
            ctx->pc = 0x2E6270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E626Cu;
            // 0x2e6270: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6298u;
            goto label_2e6298;
        }
    }
    ctx->pc = 0x2E6274u;
label_2e6274:
    // 0x2e6274: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_2e6278:
    if (ctx->pc == 0x2E6278u) {
        ctx->pc = 0x2E6278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6274u;
        // 0x2e6278: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E627Cu;
        goto label_2e627c;
    }
    ctx->pc = 0x2E6274u;
    {
        const bool branch_taken_0x2e6274 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6274u;
        // 0x2e6278: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6274) {
            ctx->pc = 0x2E6288u;
            goto label_2e6288;
        }
    }
    ctx->pc = 0x2E627Cu;
label_2e627c:
    // 0x2e627c: 0x10000004  b           . + 4 + (0x4 << 2)
label_2e6280:
    if (ctx->pc == 0x2E6280u) {
        ctx->pc = 0x2E6280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E627Cu;
        // 0x2e6280: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6284u;
        goto label_2e6284;
    }
    ctx->pc = 0x2E627Cu;
    {
        const bool branch_taken_0x2e627c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E627Cu;
        // 0x2e6280: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e627c) {
            ctx->pc = 0x2E6290u;
            goto label_2e6290;
        }
    }
    ctx->pc = 0x2E6284u;
label_2e6284:
    // 0x2e6284: 0x0  nop
    ctx->pc = 0x2e6284u;
    // NOP
label_2e6288:
    // 0x2e6288: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2e6288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_2e628c:
    // 0x2e628c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e628cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e6290:
    // 0x2e6290: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e6290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e6294:
    // 0x2e6294: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e6294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e6298:
    // 0x2e6298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e629c:
    // 0x2e629c: 0xc0a5b64  jal         func_296D90
label_2e62a0:
    if (ctx->pc == 0x2E62A0u) {
        ctx->pc = 0x2E62A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E629Cu;
        // 0x2e62a0: 0x24a504c8  addiu       $a1, $a1, 0x4C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E62A4u;
        goto label_2e62a4;
    }
    ctx->pc = 0x2E629Cu;
    SET_GPR_U32(ctx, 31, 0x2E62A4u);
    ctx->pc = 0x2E62A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E629Cu;
    // 0x2e62a0: 0x24a504c8  addiu       $a1, $a1, 0x4C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E629Cu, 0x2E62A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E62A4u;
label_2e62a4:
    // 0x2e62a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e62a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e62a8:
    // 0x2e62a8: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_2e62ac:
    if (ctx->pc == 0x2E62ACu) {
        ctx->pc = 0x2E62ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62A8u;
        // 0x2e62ac: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E62B0u;
        goto label_2e62b0;
    }
    ctx->pc = 0x2E62A8u;
    {
        const bool branch_taken_0x2e62a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e62a8) {
            ctx->pc = 0x2E62ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E62A8u;
            // 0x2e62ac: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E62D0u;
            goto label_2e62d0;
        }
    }
    ctx->pc = 0x2E62B0u;
label_2e62b0:
    // 0x2e62b0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_2e62b4:
    if (ctx->pc == 0x2E62B4u) {
        ctx->pc = 0x2E62B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62B0u;
        // 0x2e62b4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E62B8u;
        goto label_2e62b8;
    }
    ctx->pc = 0x2E62B0u;
    {
        const bool branch_taken_0x2e62b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E62B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62B0u;
        // 0x2e62b4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e62b0) {
            ctx->pc = 0x2E62C0u;
            goto label_2e62c0;
        }
    }
    ctx->pc = 0x2E62B8u;
label_2e62b8:
    // 0x2e62b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2e62bc:
    if (ctx->pc == 0x2E62BCu) {
        ctx->pc = 0x2E62BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62B8u;
        // 0x2e62bc: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E62C0u;
        goto label_2e62c0;
    }
    ctx->pc = 0x2E62B8u;
    {
        const bool branch_taken_0x2e62b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E62BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62B8u;
        // 0x2e62bc: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e62b8) {
            ctx->pc = 0x2E62C8u;
            goto label_2e62c8;
        }
    }
    ctx->pc = 0x2E62C0u;
label_2e62c0:
    // 0x2e62c0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2e62c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_2e62c4:
    // 0x2e62c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e62c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e62c8:
    // 0x2e62c8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e62c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e62cc:
    // 0x2e62cc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e62ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e62d0:
    // 0x2e62d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e62d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e62d4:
    // 0x2e62d4: 0xc0a5b64  jal         func_296D90
label_2e62d8:
    if (ctx->pc == 0x2E62D8u) {
        ctx->pc = 0x2E62D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62D4u;
        // 0x2e62d8: 0x24a504e8  addiu       $a1, $a1, 0x4E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E62DCu;
        goto label_2e62dc;
    }
    ctx->pc = 0x2E62D4u;
    SET_GPR_U32(ctx, 31, 0x2E62DCu);
    ctx->pc = 0x2E62D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E62D4u;
    // 0x2e62d8: 0x24a504e8  addiu       $a1, $a1, 0x4E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E62D4u, 0x2E62DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E62DCu;
label_2e62dc:
    // 0x2e62dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e62dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e62e0:
    // 0x2e62e0: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_2e62e4:
    if (ctx->pc == 0x2E62E4u) {
        ctx->pc = 0x2E62E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62E0u;
        // 0x2e62e4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E62E8u;
        goto label_2e62e8;
    }
    ctx->pc = 0x2E62E0u;
    {
        const bool branch_taken_0x2e62e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e62e0) {
            ctx->pc = 0x2E62E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E62E0u;
            // 0x2e62e4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6308u;
            goto label_2e6308;
        }
    }
    ctx->pc = 0x2E62E8u;
label_2e62e8:
    // 0x2e62e8: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_2e62ec:
    if (ctx->pc == 0x2E62ECu) {
        ctx->pc = 0x2E62ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62E8u;
        // 0x2e62ec: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E62F0u;
        goto label_2e62f0;
    }
    ctx->pc = 0x2E62E8u;
    {
        const bool branch_taken_0x2e62e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E62ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62E8u;
        // 0x2e62ec: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e62e8) {
            ctx->pc = 0x2E62F8u;
            goto label_2e62f8;
        }
    }
    ctx->pc = 0x2E62F0u;
label_2e62f0:
    // 0x2e62f0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2e62f4:
    if (ctx->pc == 0x2E62F4u) {
        ctx->pc = 0x2E62F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62F0u;
        // 0x2e62f4: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E62F8u;
        goto label_2e62f8;
    }
    ctx->pc = 0x2E62F0u;
    {
        const bool branch_taken_0x2e62f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E62F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62F0u;
        // 0x2e62f4: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e62f0) {
            ctx->pc = 0x2E6300u;
            goto label_2e6300;
        }
    }
    ctx->pc = 0x2E62F8u;
label_2e62f8:
    // 0x2e62f8: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2e62f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_2e62fc:
    // 0x2e62fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e62fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e6300:
    // 0x2e6300: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e6300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e6304:
    // 0x2e6304: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e6304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e6308:
    // 0x2e6308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e630c:
    // 0x2e630c: 0xc0a5b64  jal         func_296D90
label_2e6310:
    if (ctx->pc == 0x2E6310u) {
        ctx->pc = 0x2E6310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E630Cu;
        // 0x2e6310: 0x24a50508  addiu       $a1, $a1, 0x508 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6314u;
        goto label_2e6314;
    }
    ctx->pc = 0x2E630Cu;
    SET_GPR_U32(ctx, 31, 0x2E6314u);
    ctx->pc = 0x2E6310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E630Cu;
    // 0x2e6310: 0x24a50508  addiu       $a1, $a1, 0x508 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E630Cu, 0x2E6314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6314u;
label_2e6314:
    // 0x2e6314: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e6314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6318:
    // 0x2e6318: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_2e631c:
    if (ctx->pc == 0x2E631Cu) {
        ctx->pc = 0x2E631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6318u;
        // 0x2e631c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6320u;
        goto label_2e6320;
    }
    ctx->pc = 0x2E6318u;
    {
        const bool branch_taken_0x2e6318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6318) {
            ctx->pc = 0x2E631Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6318u;
            // 0x2e631c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6340u;
            goto label_2e6340;
        }
    }
    ctx->pc = 0x2E6320u;
label_2e6320:
    // 0x2e6320: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_2e6324:
    if (ctx->pc == 0x2E6324u) {
        ctx->pc = 0x2E6324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6320u;
        // 0x2e6324: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6328u;
        goto label_2e6328;
    }
    ctx->pc = 0x2E6320u;
    {
        const bool branch_taken_0x2e6320 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6320u;
        // 0x2e6324: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6320) {
            ctx->pc = 0x2E6330u;
            goto label_2e6330;
        }
    }
    ctx->pc = 0x2E6328u;
label_2e6328:
    // 0x2e6328: 0x10000003  b           . + 4 + (0x3 << 2)
label_2e632c:
    if (ctx->pc == 0x2E632Cu) {
        ctx->pc = 0x2E632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6328u;
        // 0x2e632c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6330u;
        goto label_2e6330;
    }
    ctx->pc = 0x2E6328u;
    {
        const bool branch_taken_0x2e6328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6328u;
        // 0x2e632c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6328) {
            ctx->pc = 0x2E6338u;
            goto label_2e6338;
        }
    }
    ctx->pc = 0x2E6330u;
label_2e6330:
    // 0x2e6330: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2e6330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_2e6334:
    // 0x2e6334: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e6334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e6338:
    // 0x2e6338: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e6338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e633c:
    // 0x2e633c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e633cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e6340:
    // 0x2e6340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e6344:
    // 0x2e6344: 0xc0a5b64  jal         func_296D90
label_2e6348:
    if (ctx->pc == 0x2E6348u) {
        ctx->pc = 0x2E6348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6344u;
        // 0x2e6348: 0x24a50528  addiu       $a1, $a1, 0x528 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E634Cu;
        goto label_2e634c;
    }
    ctx->pc = 0x2E6344u;
    SET_GPR_U32(ctx, 31, 0x2E634Cu);
    ctx->pc = 0x2E6348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6344u;
    // 0x2e6348: 0x24a50528  addiu       $a1, $a1, 0x528 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E6344u, 0x2E634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E634Cu;
label_2e634c:
    // 0x2e634c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e634cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6350:
    // 0x2e6350: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_2e6354:
    if (ctx->pc == 0x2E6354u) {
        ctx->pc = 0x2E6354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6350u;
        // 0x2e6354: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6358u;
        goto label_2e6358;
    }
    ctx->pc = 0x2E6350u;
    {
        const bool branch_taken_0x2e6350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6350) {
            ctx->pc = 0x2E6354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6350u;
            // 0x2e6354: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6378u;
            goto label_2e6378;
        }
    }
    ctx->pc = 0x2E6358u;
label_2e6358:
    // 0x2e6358: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_2e635c:
    if (ctx->pc == 0x2E635Cu) {
        ctx->pc = 0x2E635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6358u;
        // 0x2e635c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6360u;
        goto label_2e6360;
    }
    ctx->pc = 0x2E6358u;
    {
        const bool branch_taken_0x2e6358 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6358u;
        // 0x2e635c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6358) {
            ctx->pc = 0x2E6368u;
            goto label_2e6368;
        }
    }
    ctx->pc = 0x2E6360u;
label_2e6360:
    // 0x2e6360: 0x10000003  b           . + 4 + (0x3 << 2)
label_2e6364:
    if (ctx->pc == 0x2E6364u) {
        ctx->pc = 0x2E6364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6360u;
        // 0x2e6364: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6368u;
        goto label_2e6368;
    }
    ctx->pc = 0x2E6360u;
    {
        const bool branch_taken_0x2e6360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6360u;
        // 0x2e6364: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6360) {
            ctx->pc = 0x2E6370u;
            goto label_2e6370;
        }
    }
    ctx->pc = 0x2E6368u;
label_2e6368:
    // 0x2e6368: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2e6368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_2e636c:
    // 0x2e636c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e636cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e6370:
    // 0x2e6370: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e6370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e6374:
    // 0x2e6374: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e6374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e6378:
    // 0x2e6378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e637c:
    // 0x2e637c: 0xc0a5b64  jal         func_296D90
label_2e6380:
    if (ctx->pc == 0x2E6380u) {
        ctx->pc = 0x2E6380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E637Cu;
        // 0x2e6380: 0x24a50548  addiu       $a1, $a1, 0x548 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6384u;
        goto label_2e6384;
    }
    ctx->pc = 0x2E637Cu;
    SET_GPR_U32(ctx, 31, 0x2E6384u);
    ctx->pc = 0x2E6380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E637Cu;
    // 0x2e6380: 0x24a50548  addiu       $a1, $a1, 0x548 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E637Cu, 0x2E6384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6384u;
label_2e6384:
    // 0x2e6384: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e6384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6388:
    // 0x2e6388: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_2e638c:
    if (ctx->pc == 0x2E638Cu) {
        ctx->pc = 0x2E638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6388u;
        // 0x2e638c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6390u;
        goto label_2e6390;
    }
    ctx->pc = 0x2E6388u;
    {
        const bool branch_taken_0x2e6388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6388) {
            ctx->pc = 0x2E638Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6388u;
            // 0x2e638c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E63B0u;
            goto label_2e63b0;
        }
    }
    ctx->pc = 0x2E6390u;
label_2e6390:
    // 0x2e6390: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_2e6394:
    if (ctx->pc == 0x2E6394u) {
        ctx->pc = 0x2E6394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6390u;
        // 0x2e6394: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6398u;
        goto label_2e6398;
    }
    ctx->pc = 0x2E6390u;
    {
        const bool branch_taken_0x2e6390 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6390u;
        // 0x2e6394: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6390) {
            ctx->pc = 0x2E63A0u;
            goto label_2e63a0;
        }
    }
    ctx->pc = 0x2E6398u;
label_2e6398:
    // 0x2e6398: 0x10000003  b           . + 4 + (0x3 << 2)
label_2e639c:
    if (ctx->pc == 0x2E639Cu) {
        ctx->pc = 0x2E639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6398u;
        // 0x2e639c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E63A0u;
        goto label_2e63a0;
    }
    ctx->pc = 0x2E6398u;
    {
        const bool branch_taken_0x2e6398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6398u;
        // 0x2e639c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6398) {
            ctx->pc = 0x2E63A8u;
            goto label_2e63a8;
        }
    }
    ctx->pc = 0x2E63A0u;
label_2e63a0:
    // 0x2e63a0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2e63a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_2e63a4:
    // 0x2e63a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e63a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e63a8:
    // 0x2e63a8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e63a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e63ac:
    // 0x2e63ac: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e63acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e63b0:
    // 0x2e63b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e63b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e63b4:
    // 0x2e63b4: 0xc0a5b64  jal         func_296D90
label_2e63b8:
    if (ctx->pc == 0x2E63B8u) {
        ctx->pc = 0x2E63B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E63B4u;
        // 0x2e63b8: 0x24a50560  addiu       $a1, $a1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E63BCu;
        goto label_2e63bc;
    }
    ctx->pc = 0x2E63B4u;
    SET_GPR_U32(ctx, 31, 0x2E63BCu);
    ctx->pc = 0x2E63B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E63B4u;
    // 0x2e63b8: 0x24a50560  addiu       $a1, $a1, 0x560 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E63B4u, 0x2E63BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E63BCu;
label_2e63bc:
    // 0x2e63bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e63bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e63c0:
    // 0x2e63c0: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_2e63c4:
    if (ctx->pc == 0x2E63C4u) {
        ctx->pc = 0x2E63C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E63C0u;
        // 0x2e63c4: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E63C8u;
        goto label_2e63c8;
    }
    ctx->pc = 0x2E63C0u;
    {
        const bool branch_taken_0x2e63c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E63C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E63C0u;
        // 0x2e63c4: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e63c0) {
            ctx->pc = 0x2E6418u;
            goto label_2e6418;
        }
    }
    ctx->pc = 0x2E63C8u;
label_2e63c8:
    // 0x2e63c8: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
label_2e63cc:
    if (ctx->pc == 0x2E63CCu) {
        ctx->pc = 0x2E63CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E63C8u;
        // 0x2e63cc: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E63D0u;
        goto label_2e63d0;
    }
    ctx->pc = 0x2E63C8u;
    {
        const bool branch_taken_0x2e63c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E63CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E63C8u;
        // 0x2e63cc: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e63c8) {
            ctx->pc = 0x2E6408u;
            goto label_2e6408;
        }
    }
    ctx->pc = 0x2E63D0u;
label_2e63d0:
    // 0x2e63d0: 0x1000000f  b           . + 4 + (0xF << 2)
label_2e63d4:
    if (ctx->pc == 0x2E63D4u) {
        ctx->pc = 0x2E63D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E63D0u;
        // 0x2e63d4: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E63D8u;
        goto label_2e63d8;
    }
    ctx->pc = 0x2E63D0u;
    {
        const bool branch_taken_0x2e63d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E63D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E63D0u;
        // 0x2e63d4: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e63d0) {
            ctx->pc = 0x2E6410u;
            goto label_2e6410;
        }
    }
    ctx->pc = 0x2E63D8u;
label_2e63d8:
    // 0x2e63d8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e63d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e63dc:
    // 0x2e63dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e63dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e63e0:
    // 0x2e63e0: 0xc0a5b64  jal         func_296D90
label_2e63e4:
    if (ctx->pc == 0x2E63E4u) {
        ctx->pc = 0x2E63E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E63E0u;
        // 0x2e63e4: 0x24a50580  addiu       $a1, $a1, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E63E8u;
        goto label_2e63e8;
    }
    ctx->pc = 0x2E63E0u;
    SET_GPR_U32(ctx, 31, 0x2E63E8u);
    ctx->pc = 0x2E63E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E63E0u;
    // 0x2e63e4: 0x24a50580  addiu       $a1, $a1, 0x580 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E63E0u, 0x2E63E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E63E8u;
label_2e63e8:
    // 0x2e63e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e63e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e63ec:
    // 0x2e63ec: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_2e63f0:
    if (ctx->pc == 0x2E63F0u) {
        ctx->pc = 0x2E63F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E63ECu;
        // 0x2e63f0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E63F4u;
        goto label_2e63f4;
    }
    ctx->pc = 0x2E63ECu;
    {
        const bool branch_taken_0x2e63ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E63F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E63ECu;
        // 0x2e63f0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e63ec) {
            ctx->pc = 0x2E6418u;
            goto label_2e6418;
        }
    }
    ctx->pc = 0x2E63F4u;
label_2e63f4:
    // 0x2e63f4: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_2e63f8:
    if (ctx->pc == 0x2E63F8u) {
        ctx->pc = 0x2E63F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E63F4u;
        // 0x2e63f8: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E63FCu;
        goto label_2e63fc;
    }
    ctx->pc = 0x2E63F4u;
    {
        const bool branch_taken_0x2e63f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E63F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E63F4u;
        // 0x2e63f8: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e63f4) {
            ctx->pc = 0x2E6408u;
            goto label_2e6408;
        }
    }
    ctx->pc = 0x2E63FCu;
label_2e63fc:
    // 0x2e63fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_2e6400:
    if (ctx->pc == 0x2E6400u) {
        ctx->pc = 0x2E6400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E63FCu;
        // 0x2e6400: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6404u;
        goto label_2e6404;
    }
    ctx->pc = 0x2E63FCu;
    {
        const bool branch_taken_0x2e63fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E63FCu;
        // 0x2e6400: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e63fc) {
            ctx->pc = 0x2E6410u;
            goto label_2e6410;
        }
    }
    ctx->pc = 0x2E6404u;
label_2e6404:
    // 0x2e6404: 0x0  nop
    ctx->pc = 0x2e6404u;
    // NOP
label_2e6408:
    // 0x2e6408: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2e6408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_2e640c:
    // 0x2e640c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e640cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e6410:
    // 0x2e6410: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2e6410u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2e6414:
    // 0x2e6414: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2e6414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e6418:
    // 0x2e6418: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2e6418u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2e641c:
    // 0x2e641c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2e641cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2e6420:
    // 0x2e6420: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2e6420u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2e6424:
    // 0x2e6424: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2e6424u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2e6428:
    // 0x2e6428: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2e6428u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_2e642c:
    // 0x2e642c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2e642cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2e6430:
    // 0x2e6430: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x2e6430u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_2e6434:
    // 0x2e6434: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2e6434u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2e6438:
    // 0x2e6438: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2e6438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_2e643c:
    // 0x2e643c: 0x3e00008  jr          $ra
label_2e6440:
    if (ctx->pc == 0x2E6440u) {
        ctx->pc = 0x2E6440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E643Cu;
        // 0x2e6440: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6444u;
        goto label_2e6444;
    }
    ctx->pc = 0x2E643Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E643Cu;
        // 0x2e6440: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E643Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6444u;
label_2e6444:
    // 0x2e6444: 0x0  nop
    ctx->pc = 0x2e6444u;
    // NOP
    ctx->pc = 0x2e6448u;
}
