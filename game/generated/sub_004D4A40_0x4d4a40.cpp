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

// Function: sub_004D4A40
// Address: 0x4d4a40 - 0x4d4ee0
void sub_004D4A40_0x4d4a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D4A40_0x4d4a40");
#endif

    switch (ctx->pc) {
        case 0x4d4a40u: goto label_4d4a40;
        case 0x4d4a44u: goto label_4d4a44;
        case 0x4d4a48u: goto label_4d4a48;
        case 0x4d4a4cu: goto label_4d4a4c;
        case 0x4d4a50u: goto label_4d4a50;
        case 0x4d4a54u: goto label_4d4a54;
        case 0x4d4a58u: goto label_4d4a58;
        case 0x4d4a5cu: goto label_4d4a5c;
        case 0x4d4a60u: goto label_4d4a60;
        case 0x4d4a64u: goto label_4d4a64;
        case 0x4d4a68u: goto label_4d4a68;
        case 0x4d4a6cu: goto label_4d4a6c;
        case 0x4d4a70u: goto label_4d4a70;
        case 0x4d4a74u: goto label_4d4a74;
        case 0x4d4a78u: goto label_4d4a78;
        case 0x4d4a7cu: goto label_4d4a7c;
        case 0x4d4a80u: goto label_4d4a80;
        case 0x4d4a84u: goto label_4d4a84;
        case 0x4d4a88u: goto label_4d4a88;
        case 0x4d4a8cu: goto label_4d4a8c;
        case 0x4d4a90u: goto label_4d4a90;
        case 0x4d4a94u: goto label_4d4a94;
        case 0x4d4a98u: goto label_4d4a98;
        case 0x4d4a9cu: goto label_4d4a9c;
        case 0x4d4aa0u: goto label_4d4aa0;
        case 0x4d4aa4u: goto label_4d4aa4;
        case 0x4d4aa8u: goto label_4d4aa8;
        case 0x4d4aacu: goto label_4d4aac;
        case 0x4d4ab0u: goto label_4d4ab0;
        case 0x4d4ab4u: goto label_4d4ab4;
        case 0x4d4ab8u: goto label_4d4ab8;
        case 0x4d4abcu: goto label_4d4abc;
        case 0x4d4ac0u: goto label_4d4ac0;
        case 0x4d4ac4u: goto label_4d4ac4;
        case 0x4d4ac8u: goto label_4d4ac8;
        case 0x4d4accu: goto label_4d4acc;
        case 0x4d4ad0u: goto label_4d4ad0;
        case 0x4d4ad4u: goto label_4d4ad4;
        case 0x4d4ad8u: goto label_4d4ad8;
        case 0x4d4adcu: goto label_4d4adc;
        case 0x4d4ae0u: goto label_4d4ae0;
        case 0x4d4ae4u: goto label_4d4ae4;
        case 0x4d4ae8u: goto label_4d4ae8;
        case 0x4d4aecu: goto label_4d4aec;
        case 0x4d4af0u: goto label_4d4af0;
        case 0x4d4af4u: goto label_4d4af4;
        case 0x4d4af8u: goto label_4d4af8;
        case 0x4d4afcu: goto label_4d4afc;
        case 0x4d4b00u: goto label_4d4b00;
        case 0x4d4b04u: goto label_4d4b04;
        case 0x4d4b08u: goto label_4d4b08;
        case 0x4d4b0cu: goto label_4d4b0c;
        case 0x4d4b10u: goto label_4d4b10;
        case 0x4d4b14u: goto label_4d4b14;
        case 0x4d4b18u: goto label_4d4b18;
        case 0x4d4b1cu: goto label_4d4b1c;
        case 0x4d4b20u: goto label_4d4b20;
        case 0x4d4b24u: goto label_4d4b24;
        case 0x4d4b28u: goto label_4d4b28;
        case 0x4d4b2cu: goto label_4d4b2c;
        case 0x4d4b30u: goto label_4d4b30;
        case 0x4d4b34u: goto label_4d4b34;
        case 0x4d4b38u: goto label_4d4b38;
        case 0x4d4b3cu: goto label_4d4b3c;
        case 0x4d4b40u: goto label_4d4b40;
        case 0x4d4b44u: goto label_4d4b44;
        case 0x4d4b48u: goto label_4d4b48;
        case 0x4d4b4cu: goto label_4d4b4c;
        case 0x4d4b50u: goto label_4d4b50;
        case 0x4d4b54u: goto label_4d4b54;
        case 0x4d4b58u: goto label_4d4b58;
        case 0x4d4b5cu: goto label_4d4b5c;
        case 0x4d4b60u: goto label_4d4b60;
        case 0x4d4b64u: goto label_4d4b64;
        case 0x4d4b68u: goto label_4d4b68;
        case 0x4d4b6cu: goto label_4d4b6c;
        case 0x4d4b70u: goto label_4d4b70;
        case 0x4d4b74u: goto label_4d4b74;
        case 0x4d4b78u: goto label_4d4b78;
        case 0x4d4b7cu: goto label_4d4b7c;
        case 0x4d4b80u: goto label_4d4b80;
        case 0x4d4b84u: goto label_4d4b84;
        case 0x4d4b88u: goto label_4d4b88;
        case 0x4d4b8cu: goto label_4d4b8c;
        case 0x4d4b90u: goto label_4d4b90;
        case 0x4d4b94u: goto label_4d4b94;
        case 0x4d4b98u: goto label_4d4b98;
        case 0x4d4b9cu: goto label_4d4b9c;
        case 0x4d4ba0u: goto label_4d4ba0;
        case 0x4d4ba4u: goto label_4d4ba4;
        case 0x4d4ba8u: goto label_4d4ba8;
        case 0x4d4bacu: goto label_4d4bac;
        case 0x4d4bb0u: goto label_4d4bb0;
        case 0x4d4bb4u: goto label_4d4bb4;
        case 0x4d4bb8u: goto label_4d4bb8;
        case 0x4d4bbcu: goto label_4d4bbc;
        case 0x4d4bc0u: goto label_4d4bc0;
        case 0x4d4bc4u: goto label_4d4bc4;
        case 0x4d4bc8u: goto label_4d4bc8;
        case 0x4d4bccu: goto label_4d4bcc;
        case 0x4d4bd0u: goto label_4d4bd0;
        case 0x4d4bd4u: goto label_4d4bd4;
        case 0x4d4bd8u: goto label_4d4bd8;
        case 0x4d4bdcu: goto label_4d4bdc;
        case 0x4d4be0u: goto label_4d4be0;
        case 0x4d4be4u: goto label_4d4be4;
        case 0x4d4be8u: goto label_4d4be8;
        case 0x4d4becu: goto label_4d4bec;
        case 0x4d4bf0u: goto label_4d4bf0;
        case 0x4d4bf4u: goto label_4d4bf4;
        case 0x4d4bf8u: goto label_4d4bf8;
        case 0x4d4bfcu: goto label_4d4bfc;
        case 0x4d4c00u: goto label_4d4c00;
        case 0x4d4c04u: goto label_4d4c04;
        case 0x4d4c08u: goto label_4d4c08;
        case 0x4d4c0cu: goto label_4d4c0c;
        case 0x4d4c10u: goto label_4d4c10;
        case 0x4d4c14u: goto label_4d4c14;
        case 0x4d4c18u: goto label_4d4c18;
        case 0x4d4c1cu: goto label_4d4c1c;
        case 0x4d4c20u: goto label_4d4c20;
        case 0x4d4c24u: goto label_4d4c24;
        case 0x4d4c28u: goto label_4d4c28;
        case 0x4d4c2cu: goto label_4d4c2c;
        case 0x4d4c30u: goto label_4d4c30;
        case 0x4d4c34u: goto label_4d4c34;
        case 0x4d4c38u: goto label_4d4c38;
        case 0x4d4c3cu: goto label_4d4c3c;
        case 0x4d4c40u: goto label_4d4c40;
        case 0x4d4c44u: goto label_4d4c44;
        case 0x4d4c48u: goto label_4d4c48;
        case 0x4d4c4cu: goto label_4d4c4c;
        case 0x4d4c50u: goto label_4d4c50;
        case 0x4d4c54u: goto label_4d4c54;
        case 0x4d4c58u: goto label_4d4c58;
        case 0x4d4c5cu: goto label_4d4c5c;
        case 0x4d4c60u: goto label_4d4c60;
        case 0x4d4c64u: goto label_4d4c64;
        case 0x4d4c68u: goto label_4d4c68;
        case 0x4d4c6cu: goto label_4d4c6c;
        case 0x4d4c70u: goto label_4d4c70;
        case 0x4d4c74u: goto label_4d4c74;
        case 0x4d4c78u: goto label_4d4c78;
        case 0x4d4c7cu: goto label_4d4c7c;
        case 0x4d4c80u: goto label_4d4c80;
        case 0x4d4c84u: goto label_4d4c84;
        case 0x4d4c88u: goto label_4d4c88;
        case 0x4d4c8cu: goto label_4d4c8c;
        case 0x4d4c90u: goto label_4d4c90;
        case 0x4d4c94u: goto label_4d4c94;
        case 0x4d4c98u: goto label_4d4c98;
        case 0x4d4c9cu: goto label_4d4c9c;
        case 0x4d4ca0u: goto label_4d4ca0;
        case 0x4d4ca4u: goto label_4d4ca4;
        case 0x4d4ca8u: goto label_4d4ca8;
        case 0x4d4cacu: goto label_4d4cac;
        case 0x4d4cb0u: goto label_4d4cb0;
        case 0x4d4cb4u: goto label_4d4cb4;
        case 0x4d4cb8u: goto label_4d4cb8;
        case 0x4d4cbcu: goto label_4d4cbc;
        case 0x4d4cc0u: goto label_4d4cc0;
        case 0x4d4cc4u: goto label_4d4cc4;
        case 0x4d4cc8u: goto label_4d4cc8;
        case 0x4d4cccu: goto label_4d4ccc;
        case 0x4d4cd0u: goto label_4d4cd0;
        case 0x4d4cd4u: goto label_4d4cd4;
        case 0x4d4cd8u: goto label_4d4cd8;
        case 0x4d4cdcu: goto label_4d4cdc;
        case 0x4d4ce0u: goto label_4d4ce0;
        case 0x4d4ce4u: goto label_4d4ce4;
        case 0x4d4ce8u: goto label_4d4ce8;
        case 0x4d4cecu: goto label_4d4cec;
        case 0x4d4cf0u: goto label_4d4cf0;
        case 0x4d4cf4u: goto label_4d4cf4;
        case 0x4d4cf8u: goto label_4d4cf8;
        case 0x4d4cfcu: goto label_4d4cfc;
        case 0x4d4d00u: goto label_4d4d00;
        case 0x4d4d04u: goto label_4d4d04;
        case 0x4d4d08u: goto label_4d4d08;
        case 0x4d4d0cu: goto label_4d4d0c;
        case 0x4d4d10u: goto label_4d4d10;
        case 0x4d4d14u: goto label_4d4d14;
        case 0x4d4d18u: goto label_4d4d18;
        case 0x4d4d1cu: goto label_4d4d1c;
        case 0x4d4d20u: goto label_4d4d20;
        case 0x4d4d24u: goto label_4d4d24;
        case 0x4d4d28u: goto label_4d4d28;
        case 0x4d4d2cu: goto label_4d4d2c;
        case 0x4d4d30u: goto label_4d4d30;
        case 0x4d4d34u: goto label_4d4d34;
        case 0x4d4d38u: goto label_4d4d38;
        case 0x4d4d3cu: goto label_4d4d3c;
        case 0x4d4d40u: goto label_4d4d40;
        case 0x4d4d44u: goto label_4d4d44;
        case 0x4d4d48u: goto label_4d4d48;
        case 0x4d4d4cu: goto label_4d4d4c;
        case 0x4d4d50u: goto label_4d4d50;
        case 0x4d4d54u: goto label_4d4d54;
        case 0x4d4d58u: goto label_4d4d58;
        case 0x4d4d5cu: goto label_4d4d5c;
        case 0x4d4d60u: goto label_4d4d60;
        case 0x4d4d64u: goto label_4d4d64;
        case 0x4d4d68u: goto label_4d4d68;
        case 0x4d4d6cu: goto label_4d4d6c;
        case 0x4d4d70u: goto label_4d4d70;
        case 0x4d4d74u: goto label_4d4d74;
        case 0x4d4d78u: goto label_4d4d78;
        case 0x4d4d7cu: goto label_4d4d7c;
        case 0x4d4d80u: goto label_4d4d80;
        case 0x4d4d84u: goto label_4d4d84;
        case 0x4d4d88u: goto label_4d4d88;
        case 0x4d4d8cu: goto label_4d4d8c;
        case 0x4d4d90u: goto label_4d4d90;
        case 0x4d4d94u: goto label_4d4d94;
        case 0x4d4d98u: goto label_4d4d98;
        case 0x4d4d9cu: goto label_4d4d9c;
        case 0x4d4da0u: goto label_4d4da0;
        case 0x4d4da4u: goto label_4d4da4;
        case 0x4d4da8u: goto label_4d4da8;
        case 0x4d4dacu: goto label_4d4dac;
        case 0x4d4db0u: goto label_4d4db0;
        case 0x4d4db4u: goto label_4d4db4;
        case 0x4d4db8u: goto label_4d4db8;
        case 0x4d4dbcu: goto label_4d4dbc;
        case 0x4d4dc0u: goto label_4d4dc0;
        case 0x4d4dc4u: goto label_4d4dc4;
        case 0x4d4dc8u: goto label_4d4dc8;
        case 0x4d4dccu: goto label_4d4dcc;
        case 0x4d4dd0u: goto label_4d4dd0;
        case 0x4d4dd4u: goto label_4d4dd4;
        case 0x4d4dd8u: goto label_4d4dd8;
        case 0x4d4ddcu: goto label_4d4ddc;
        case 0x4d4de0u: goto label_4d4de0;
        case 0x4d4de4u: goto label_4d4de4;
        case 0x4d4de8u: goto label_4d4de8;
        case 0x4d4decu: goto label_4d4dec;
        case 0x4d4df0u: goto label_4d4df0;
        case 0x4d4df4u: goto label_4d4df4;
        case 0x4d4df8u: goto label_4d4df8;
        case 0x4d4dfcu: goto label_4d4dfc;
        case 0x4d4e00u: goto label_4d4e00;
        case 0x4d4e04u: goto label_4d4e04;
        case 0x4d4e08u: goto label_4d4e08;
        case 0x4d4e0cu: goto label_4d4e0c;
        case 0x4d4e10u: goto label_4d4e10;
        case 0x4d4e14u: goto label_4d4e14;
        case 0x4d4e18u: goto label_4d4e18;
        case 0x4d4e1cu: goto label_4d4e1c;
        case 0x4d4e20u: goto label_4d4e20;
        case 0x4d4e24u: goto label_4d4e24;
        case 0x4d4e28u: goto label_4d4e28;
        case 0x4d4e2cu: goto label_4d4e2c;
        case 0x4d4e30u: goto label_4d4e30;
        case 0x4d4e34u: goto label_4d4e34;
        case 0x4d4e38u: goto label_4d4e38;
        case 0x4d4e3cu: goto label_4d4e3c;
        case 0x4d4e40u: goto label_4d4e40;
        case 0x4d4e44u: goto label_4d4e44;
        case 0x4d4e48u: goto label_4d4e48;
        case 0x4d4e4cu: goto label_4d4e4c;
        case 0x4d4e50u: goto label_4d4e50;
        case 0x4d4e54u: goto label_4d4e54;
        case 0x4d4e58u: goto label_4d4e58;
        case 0x4d4e5cu: goto label_4d4e5c;
        case 0x4d4e60u: goto label_4d4e60;
        case 0x4d4e64u: goto label_4d4e64;
        case 0x4d4e68u: goto label_4d4e68;
        case 0x4d4e6cu: goto label_4d4e6c;
        case 0x4d4e70u: goto label_4d4e70;
        case 0x4d4e74u: goto label_4d4e74;
        case 0x4d4e78u: goto label_4d4e78;
        case 0x4d4e7cu: goto label_4d4e7c;
        case 0x4d4e80u: goto label_4d4e80;
        case 0x4d4e84u: goto label_4d4e84;
        case 0x4d4e88u: goto label_4d4e88;
        case 0x4d4e8cu: goto label_4d4e8c;
        case 0x4d4e90u: goto label_4d4e90;
        case 0x4d4e94u: goto label_4d4e94;
        case 0x4d4e98u: goto label_4d4e98;
        case 0x4d4e9cu: goto label_4d4e9c;
        case 0x4d4ea0u: goto label_4d4ea0;
        case 0x4d4ea4u: goto label_4d4ea4;
        case 0x4d4ea8u: goto label_4d4ea8;
        case 0x4d4eacu: goto label_4d4eac;
        case 0x4d4eb0u: goto label_4d4eb0;
        case 0x4d4eb4u: goto label_4d4eb4;
        case 0x4d4eb8u: goto label_4d4eb8;
        case 0x4d4ebcu: goto label_4d4ebc;
        case 0x4d4ec0u: goto label_4d4ec0;
        case 0x4d4ec4u: goto label_4d4ec4;
        case 0x4d4ec8u: goto label_4d4ec8;
        case 0x4d4eccu: goto label_4d4ecc;
        case 0x4d4ed0u: goto label_4d4ed0;
        case 0x4d4ed4u: goto label_4d4ed4;
        case 0x4d4ed8u: goto label_4d4ed8;
        case 0x4d4edcu: goto label_4d4edc;
        default: break;
    }

    ctx->pc = 0x4d4a40u;

label_4d4a40:
    // 0x4d4a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d4a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d4a44:
    // 0x4d4a44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d4a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d4a48:
    // 0x4d4a48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d4a48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d4a4c:
    // 0x4d4a4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d4a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4d4a50:
    // 0x4d4a50: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4d4a50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
label_4d4a54:
    // 0x4d4a54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d4a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d4a58:
    // 0x4d4a58: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d4a58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d4a5c:
    // 0x4d4a5c: 0x442000c  bltzl       $v0, . + 4 + (0xC << 2)
label_4d4a60:
    if (ctx->pc == 0x4D4A60u) {
        ctx->pc = 0x4D4A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4A5Cu;
        // 0x4d4a60: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4A64u;
        goto label_4d4a64;
    }
    ctx->pc = 0x4D4A5Cu;
    {
        const bool branch_taken_0x4d4a5c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4d4a5c) {
            ctx->pc = 0x4D4A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D4A5Cu;
            // 0x4d4a60: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D4A90u;
            goto label_4d4a90;
        }
    }
    ctx->pc = 0x4D4A64u;
label_4d4a64:
    // 0x4d4a64: 0xc12b642  jal         func_4AD908
label_4d4a68:
    if (ctx->pc == 0x4D4A68u) {
        ctx->pc = 0x4D4A6Cu;
        goto label_4d4a6c;
    }
    ctx->pc = 0x4D4A64u;
    SET_GPR_U32(ctx, 31, 0x4D4A6Cu);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4D4A64u, 0x4D4A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D4A6Cu;
label_4d4a6c:
    // 0x4d4a6c: 0xa6000160  sh          $zero, 0x160($s0)
    ctx->pc = 0x4d4a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 0));
label_4d4a70:
    // 0x4d4a70: 0x24020556  addiu       $v0, $zero, 0x556
    ctx->pc = 0x4d4a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1366));
label_4d4a74:
    // 0x4d4a74: 0xa6000030  sh          $zero, 0x30($s0)
    ctx->pc = 0x4d4a74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 0));
label_4d4a78:
    // 0x4d4a78: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x4d4a78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_4d4a7c:
    // 0x4d4a7c: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4d4a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
label_4d4a80:
    // 0x4d4a80: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4d4a80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d4a84:
    // 0x4d4a84: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4d4a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4d4a88:
    // 0x4d4a88: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4d4a88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d4a8c:
    // 0x4d4a8c: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4d4a8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4d4a90:
    // 0x4d4a90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4d4a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4d4a94:
    // 0x4d4a94: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_4d4a98:
    if (ctx->pc == 0x4D4A98u) {
        ctx->pc = 0x4D4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4A94u;
        // 0x4d4a98: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4A9Cu;
        goto label_4d4a9c;
    }
    ctx->pc = 0x4D4A94u;
    {
        const bool branch_taken_0x4d4a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4D4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4A94u;
        // 0x4d4a98: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4a94) {
            ctx->pc = 0x4D4AE8u;
            goto label_4d4ae8;
        }
    }
    ctx->pc = 0x4D4A9Cu;
label_4d4a9c:
    // 0x4d4a9c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_4d4aa0:
    if (ctx->pc == 0x4D4AA0u) {
        ctx->pc = 0x4D4AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4A9Cu;
        // 0x4d4aa0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4AA4u;
        goto label_4d4aa4;
    }
    ctx->pc = 0x4D4A9Cu;
    {
        const bool branch_taken_0x4d4a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d4a9c) {
            ctx->pc = 0x4D4AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D4A9Cu;
            // 0x4d4aa0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D4AB8u;
            goto label_4d4ab8;
        }
    }
    ctx->pc = 0x4D4AA4u;
label_4d4aa4:
    // 0x4d4aa4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_4d4aa8:
    if (ctx->pc == 0x4D4AA8u) {
        ctx->pc = 0x4D4AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4AA4u;
        // 0x4d4aa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4AACu;
        goto label_4d4aac;
    }
    ctx->pc = 0x4D4AA4u;
    {
        const bool branch_taken_0x4d4aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D4AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4AA4u;
        // 0x4d4aa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4aa4) {
            ctx->pc = 0x4D4AD0u;
            goto label_4d4ad0;
        }
    }
    ctx->pc = 0x4D4AACu;
label_4d4aac:
    // 0x4d4aac: 0x10000020  b           . + 4 + (0x20 << 2)
label_4d4ab0:
    if (ctx->pc == 0x4D4AB0u) {
        ctx->pc = 0x4D4AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4AACu;
        // 0x4d4ab0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4AB4u;
        goto label_4d4ab4;
    }
    ctx->pc = 0x4D4AACu;
    {
        const bool branch_taken_0x4d4aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D4AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4AACu;
        // 0x4d4ab0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4aac) {
            ctx->pc = 0x4D4B30u;
            goto label_4d4b30;
        }
    }
    ctx->pc = 0x4D4AB4u;
label_4d4ab4:
    // 0x4d4ab4: 0x0  nop
    ctx->pc = 0x4d4ab4u;
    // NOP
label_4d4ab8:
    // 0x4d4ab8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_4d4abc:
    if (ctx->pc == 0x4D4ABCu) {
        ctx->pc = 0x4D4ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4AB8u;
        // 0x4d4abc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4AC0u;
        goto label_4d4ac0;
    }
    ctx->pc = 0x4D4AB8u;
    {
        const bool branch_taken_0x4d4ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4D4ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4AB8u;
        // 0x4d4abc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4ab8) {
            ctx->pc = 0x4D4B00u;
            goto label_4d4b00;
        }
    }
    ctx->pc = 0x4D4AC0u;
label_4d4ac0:
    // 0x4d4ac0: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_4d4ac4:
    if (ctx->pc == 0x4D4AC4u) {
        ctx->pc = 0x4D4AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4AC0u;
        // 0x4d4ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4AC8u;
        goto label_4d4ac8;
    }
    ctx->pc = 0x4D4AC0u;
    {
        const bool branch_taken_0x4d4ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4D4AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4AC0u;
        // 0x4d4ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4ac0) {
            ctx->pc = 0x4D4B18u;
            goto label_4d4b18;
        }
    }
    ctx->pc = 0x4D4AC8u;
label_4d4ac8:
    // 0x4d4ac8: 0x10000019  b           . + 4 + (0x19 << 2)
label_4d4acc:
    if (ctx->pc == 0x4D4ACCu) {
        ctx->pc = 0x4D4ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4AC8u;
        // 0x4d4acc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4AD0u;
        goto label_4d4ad0;
    }
    ctx->pc = 0x4D4AC8u;
    {
        const bool branch_taken_0x4d4ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D4ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4AC8u;
        // 0x4d4acc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4ac8) {
            ctx->pc = 0x4D4B30u;
            goto label_4d4b30;
        }
    }
    ctx->pc = 0x4D4AD0u;
label_4d4ad0:
    // 0x4d4ad0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d4ad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d4ad4:
    // 0x4d4ad4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d4ad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d4ad8:
    // 0x4d4ad8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d4ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d4adc:
    // 0x4d4adc: 0x81352d0  j           func_4D4B40
label_4d4ae0:
    if (ctx->pc == 0x4D4AE0u) {
        ctx->pc = 0x4D4AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4ADCu;
        // 0x4d4ae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4AE4u;
        goto label_4d4ae4;
    }
    ctx->pc = 0x4D4ADCu;
    ctx->pc = 0x4D4AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D4ADCu;
    // 0x4d4ae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D4B40u;
    goto label_4d4b40;
    ctx->pc = 0x4D4AE4u;
label_4d4ae4:
    // 0x4d4ae4: 0x0  nop
    ctx->pc = 0x4d4ae4u;
    // NOP
label_4d4ae8:
    // 0x4d4ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d4ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d4aec:
    // 0x4d4aec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d4aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d4af0:
    // 0x4d4af0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d4af0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d4af4:
    // 0x4d4af4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d4af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d4af8:
    // 0x4d4af8: 0x8135324  j           func_4D4C90
label_4d4afc:
    if (ctx->pc == 0x4D4AFCu) {
        ctx->pc = 0x4D4AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4AF8u;
        // 0x4d4afc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4B00u;
        goto label_4d4b00;
    }
    ctx->pc = 0x4D4AF8u;
    ctx->pc = 0x4D4AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D4AF8u;
    // 0x4d4afc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D4C90u;
    goto label_4d4c90;
    ctx->pc = 0x4D4B00u;
label_4d4b00:
    // 0x4d4b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d4b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d4b04:
    // 0x4d4b04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d4b04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d4b08:
    // 0x4d4b08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d4b08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d4b0c:
    // 0x4d4b0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d4b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d4b10:
    // 0x4d4b10: 0x8135344  j           func_4D4D10
label_4d4b14:
    if (ctx->pc == 0x4D4B14u) {
        ctx->pc = 0x4D4B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4B10u;
        // 0x4d4b14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4B18u;
        goto label_4d4b18;
    }
    ctx->pc = 0x4D4B10u;
    ctx->pc = 0x4D4B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D4B10u;
    // 0x4d4b14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D4D10u;
    goto label_4d4d10;
    ctx->pc = 0x4D4B18u;
label_4d4b18:
    // 0x4d4b18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d4b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d4b1c:
    // 0x4d4b1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d4b1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d4b20:
    // 0x4d4b20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d4b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d4b24:
    // 0x4d4b24: 0x8135362  j           func_4D4D88
label_4d4b28:
    if (ctx->pc == 0x4D4B28u) {
        ctx->pc = 0x4D4B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4B24u;
        // 0x4d4b28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4B2Cu;
        goto label_4d4b2c;
    }
    ctx->pc = 0x4D4B24u;
    ctx->pc = 0x4D4B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D4B24u;
    // 0x4d4b28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D4D88u;
    goto label_4d4d88;
    ctx->pc = 0x4D4B2Cu;
label_4d4b2c:
    // 0x4d4b2c: 0x0  nop
    ctx->pc = 0x4d4b2cu;
    // NOP
label_4d4b30:
    // 0x4d4b30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d4b30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d4b34:
    // 0x4d4b34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d4b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d4b38:
    // 0x4d4b38: 0x3e00008  jr          $ra
label_4d4b3c:
    if (ctx->pc == 0x4D4B3Cu) {
        ctx->pc = 0x4D4B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4B38u;
        // 0x4d4b3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4B40u;
        goto label_4d4b40;
    }
    ctx->pc = 0x4D4B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D4B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4B38u;
        // 0x4d4b3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D4B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D4B40u;
label_4d4b40:
    // 0x4d4b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d4b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4d4b44:
    // 0x4d4b44: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d4b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4d4b48:
    // 0x4d4b48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d4b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4d4b4c:
    // 0x4d4b4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d4b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d4b50:
    // 0x4d4b50: 0x24451058  addiu       $a1, $v0, 0x1058
    ctx->pc = 0x4d4b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4184));
label_4d4b54:
    // 0x4d4b54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d4b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4d4b58:
    // 0x4d4b58: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4d4b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4d4b5c:
    // 0x4d4b5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d4b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4d4b60:
    // 0x4d4b60: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x4d4b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_4d4b64:
    // 0x4d4b64: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d4b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4d4b68:
    // 0x4d4b68: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4d4b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_4d4b6c:
    // 0x4d4b6c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d4b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4d4b70:
    // 0x4d4b70: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d4b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4d4b74:
    // 0x4d4b74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d4b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4d4b78:
    // 0x4d4b78: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4d4b78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4d4b7c:
    // 0x4d4b7c: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4d4b7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d4b80:
    // 0x4d4b80: 0x4600035  bltz        $v1, . + 4 + (0x35 << 2)
label_4d4b84:
    if (ctx->pc == 0x4D4B84u) {
        ctx->pc = 0x4D4B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4B80u;
        // 0x4d4b84: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4B88u;
        goto label_4d4b88;
    }
    ctx->pc = 0x4D4B80u;
    {
        const bool branch_taken_0x4d4b80 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4D4B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4B80u;
        // 0x4d4b84: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4b80) {
            ctx->pc = 0x4D4C58u;
            goto label_4d4c58;
        }
    }
    ctx->pc = 0x4D4B88u;
label_4d4b88:
    // 0x4d4b88: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4d4b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4d4b8c:
    // 0x4d4b8c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d4b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4d4b90:
    // 0x4d4b90: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4d4b90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4d4b94:
    // 0x4d4b94: 0x24547968  addiu       $s4, $v0, 0x7968
    ctx->pc = 0x4d4b94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 31080));
label_4d4b98:
    // 0x4d4b98: 0x24711048  addiu       $s1, $v1, 0x1048
    ctx->pc = 0x4d4b98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4168));
label_4d4b9c:
    // 0x4d4b9c: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4d4b9cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
label_4d4ba0:
    // 0x4d4ba0: 0xc12b5dc  jal         func_4AD770
label_4d4ba4:
    if (ctx->pc == 0x4D4BA4u) {
        ctx->pc = 0x4D4BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4BA0u;
        // 0x4d4ba4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4BA8u;
        goto label_4d4ba8;
    }
    ctx->pc = 0x4D4BA0u;
    SET_GPR_U32(ctx, 31, 0x4D4BA8u);
    ctx->pc = 0x4D4BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D4BA0u;
    // 0x4d4ba4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4D4BA0u, 0x4D4BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D4BA8u;
label_4d4ba8:
    // 0x4d4ba8: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x4d4ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_4d4bac:
    // 0x4d4bac: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4d4bacu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
label_4d4bb0:
    // 0x4d4bb0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4d4bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4d4bb4:
    // 0x4d4bb4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4d4bb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4d4bb8:
    // 0x4d4bb8: 0xa444015e  sh          $a0, 0x15E($v0)
    ctx->pc = 0x4d4bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 350), (uint16_t)GPR_U32(ctx, 4));
label_4d4bbc:
    // 0x4d4bbc: 0xa44301be  sh          $v1, 0x1BE($v0)
    ctx->pc = 0x4d4bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 446), (uint16_t)GPR_U32(ctx, 3));
label_4d4bc0:
    // 0x4d4bc0: 0xa4400160  sh          $zero, 0x160($v0)
    ctx->pc = 0x4d4bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 352), (uint16_t)GPR_U32(ctx, 0));
label_4d4bc4:
    // 0x4d4bc4: 0xac520140  sw          $s2, 0x140($v0)
    ctx->pc = 0x4d4bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 18));
label_4d4bc8:
    // 0x4d4bc8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4d4bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4d4bcc:
    // 0x4d4bcc: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4d4bccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4d4bd0:
    // 0x4d4bd0: 0x932024  and         $a0, $a0, $s3
    ctx->pc = 0x4d4bd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 19));
label_4d4bd4:
    // 0x4d4bd4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4d4bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4d4bd8:
    // 0x4d4bd8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4d4bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_4d4bdc:
    // 0x4d4bdc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d4bdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4d4be0:
    // 0x4d4be0: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4d4be0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d4be4:
    // 0x4d4be4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4d4be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4d4be8:
    // 0x4d4be8: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4d4be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
label_4d4bec:
    // 0x4d4bec: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4d4becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4d4bf0:
    // 0x4d4bf0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4d4bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_4d4bf4:
    // 0x4d4bf4: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4d4bf4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d4bf8:
    // 0x4d4bf8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4d4bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_4d4bfc:
    // 0x4d4bfc: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x4d4bfcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_4d4c00:
    // 0x4d4c00: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4d4c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4d4c04:
    // 0x4d4c04: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x4d4c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_4d4c08:
    // 0x4d4c08: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x4d4c08u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4d4c0c:
    // 0x4d4c0c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4d4c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_4d4c10:
    // 0x4d4c10: 0xa4440162  sh          $a0, 0x162($v0)
    ctx->pc = 0x4d4c10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 354), (uint16_t)GPR_U32(ctx, 4));
label_4d4c14:
    // 0x4d4c14: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x4d4c14u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4d4c18:
    // 0x4d4c18: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4d4c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_4d4c1c:
    // 0x4d4c1c: 0xa4450164  sh          $a1, 0x164($v0)
    ctx->pc = 0x4d4c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 356), (uint16_t)GPR_U32(ctx, 5));
label_4d4c20:
    // 0x4d4c20: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x4d4c20u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4d4c24:
    // 0x4d4c24: 0xa4440166  sh          $a0, 0x166($v0)
    ctx->pc = 0x4d4c24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 358), (uint16_t)GPR_U32(ctx, 4));
label_4d4c28:
    // 0x4d4c28: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x4d4c28u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_4d4c2c:
    // 0x4d4c2c: 0xa4450168  sh          $a1, 0x168($v0)
    ctx->pc = 0x4d4c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 360), (uint16_t)GPR_U32(ctx, 5));
label_4d4c30:
    // 0x4d4c30: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4d4c30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4d4c34:
    // 0x4d4c34: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4d4c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4d4c38:
    // 0x4d4c38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4d4c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4d4c3c:
    // 0x4d4c3c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4d4c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
label_4d4c40:
    // 0x4d4c40: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d4c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d4c44:
    // 0x4d4c44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d4c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d4c48:
    // 0x4d4c48: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d4c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4d4c4c:
    // 0x4d4c4c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4d4c4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4d4c50:
    // 0x4d4c50: 0x441ffd3  bgez        $v0, . + 4 + (-0x2D << 2)
label_4d4c54:
    if (ctx->pc == 0x4D4C54u) {
        ctx->pc = 0x4D4C58u;
        goto label_4d4c58;
    }
    ctx->pc = 0x4D4C50u;
    {
        const bool branch_taken_0x4d4c50 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4d4c50) {
            ctx->pc = 0x4D4BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d4ba0;
        }
    }
    ctx->pc = 0x4D4C58u;
label_4d4c58:
    // 0x4d4c58: 0x264301bc  addiu       $v1, $s2, 0x1BC
    ctx->pc = 0x4d4c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 444));
label_4d4c5c:
    // 0x4d4c5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d4c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4d4c60:
    // 0x4d4c60: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d4c60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4d4c64:
    // 0x4d4c64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d4c64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d4c68:
    // 0x4d4c68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d4c68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d4c6c:
    // 0x4d4c6c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d4c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4d4c70:
    // 0x4d4c70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d4c70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d4c74:
    // 0x4d4c74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d4c74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4d4c78:
    // 0x4d4c78: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d4c78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d4c7c:
    // 0x4d4c7c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4d4c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4d4c80:
    // 0x4d4c80: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d4c80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d4c84:
    // 0x4d4c84: 0x8135324  j           func_4D4C90
label_4d4c88:
    if (ctx->pc == 0x4D4C88u) {
        ctx->pc = 0x4D4C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4C84u;
        // 0x4d4c88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4C8Cu;
        goto label_4d4c8c;
    }
    ctx->pc = 0x4D4C84u;
    ctx->pc = 0x4D4C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D4C84u;
    // 0x4d4c88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D4C90u;
    goto label_4d4c90;
    ctx->pc = 0x4D4C8Cu;
label_4d4c8c:
    // 0x4d4c8c: 0x0  nop
    ctx->pc = 0x4d4c8cu;
    // NOP
label_4d4c90:
    // 0x4d4c90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d4c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4d4c94:
    // 0x4d4c94: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d4c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4d4c98:
    // 0x4d4c98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d4c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d4c9c:
    // 0x4d4c9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d4c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d4ca0:
    // 0x4d4ca0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4d4ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_4d4ca4:
    // 0x4d4ca4: 0x24421048  addiu       $v0, $v0, 0x1048
    ctx->pc = 0x4d4ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4168));
label_4d4ca8:
    // 0x4d4ca8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4d4ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_4d4cac:
    // 0x4d4cac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4d4cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4d4cb0:
    // 0x4d4cb0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4d4cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_4d4cb4:
    // 0x4d4cb4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4d4cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_4d4cb8:
    // 0x4d4cb8: 0xc12b638  jal         func_4AD8E0
label_4d4cbc:
    if (ctx->pc == 0x4D4CBCu) {
        ctx->pc = 0x4D4CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4CB8u;
        // 0x4d4cbc: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4CC0u;
        goto label_4d4cc0;
    }
    ctx->pc = 0x4D4CB8u;
    SET_GPR_U32(ctx, 31, 0x4D4CC0u);
    ctx->pc = 0x4D4CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D4CB8u;
    // 0x4d4cbc: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8E0u, 0x4D4CB8u, 0x4D4CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D4CC0u;
label_4d4cc0:
    // 0x4d4cc0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_4d4cc4:
    if (ctx->pc == 0x4D4CC4u) {
        ctx->pc = 0x4D4CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4CC0u;
        // 0x4d4cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4CC8u;
        goto label_4d4cc8;
    }
    ctx->pc = 0x4D4CC0u;
    {
        const bool branch_taken_0x4d4cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D4CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4CC0u;
        // 0x4d4cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4cc0) {
            ctx->pc = 0x4D4D00u;
            goto label_4d4d00;
        }
    }
    ctx->pc = 0x4D4CC8u;
label_4d4cc8:
    // 0x4d4cc8: 0xc12b5dc  jal         func_4AD770
label_4d4ccc:
    if (ctx->pc == 0x4D4CCCu) {
        ctx->pc = 0x4D4CD0u;
        goto label_4d4cd0;
    }
    ctx->pc = 0x4D4CC8u;
    SET_GPR_U32(ctx, 31, 0x4D4CD0u);
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4D4CC8u, 0x4D4CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D4CD0u;
label_4d4cd0:
    // 0x4d4cd0: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x4d4cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
label_4d4cd4:
    // 0x4d4cd4: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4d4cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
label_4d4cd8:
    // 0x4d4cd8: 0x260301bc  addiu       $v1, $s0, 0x1BC
    ctx->pc = 0x4d4cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
label_4d4cdc:
    // 0x4d4cdc: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4d4cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
label_4d4ce0:
    // 0x4d4ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d4ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d4ce4:
    // 0x4d4ce4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4d4ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d4ce8:
    // 0x4d4ce8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d4ce8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4d4cec:
    // 0x4d4cec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d4cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d4cf0:
    // 0x4d4cf0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d4cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4d4cf4:
    // 0x4d4cf4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d4cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d4cf8:
    // 0x4d4cf8: 0x8135344  j           func_4D4D10
label_4d4cfc:
    if (ctx->pc == 0x4D4CFCu) {
        ctx->pc = 0x4D4CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4CF8u;
        // 0x4d4cfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4D00u;
        goto label_4d4d00;
    }
    ctx->pc = 0x4D4CF8u;
    ctx->pc = 0x4D4CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D4CF8u;
    // 0x4d4cfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D4D10u;
    goto label_4d4d10;
    ctx->pc = 0x4D4D00u;
label_4d4d00:
    // 0x4d4d00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d4d00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d4d04:
    // 0x4d4d04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4d4d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d4d08:
    // 0x4d4d08: 0x3e00008  jr          $ra
label_4d4d0c:
    if (ctx->pc == 0x4D4D0Cu) {
        ctx->pc = 0x4D4D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4D08u;
        // 0x4d4d0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4D10u;
        goto label_4d4d10;
    }
    ctx->pc = 0x4D4D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D4D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4D08u;
        // 0x4d4d0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D4D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D4D10u;
label_4d4d10:
    // 0x4d4d10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d4d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4d4d14:
    // 0x4d4d14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d4d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d4d18:
    // 0x4d4d18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4d4d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_4d4d1c:
    // 0x4d4d1c: 0xc122db4  jal         func_48B6D0
label_4d4d20:
    if (ctx->pc == 0x4D4D20u) {
        ctx->pc = 0x4D4D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4D1Cu;
        // 0x4d4d20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4D24u;
        goto label_4d4d24;
    }
    ctx->pc = 0x4D4D1Cu;
    SET_GPR_U32(ctx, 31, 0x4D4D24u);
    ctx->pc = 0x4D4D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D4D1Cu;
    // 0x4d4d20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4D4D1Cu, 0x4D4D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D4D24u;
label_4d4d24:
    // 0x4d4d24: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_4d4d28:
    if (ctx->pc == 0x4D4D28u) {
        ctx->pc = 0x4D4D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4D24u;
        // 0x4d4d28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4D2Cu;
        goto label_4d4d2c;
    }
    ctx->pc = 0x4D4D24u;
    {
        const bool branch_taken_0x4d4d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d4d24) {
            ctx->pc = 0x4D4D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D4D24u;
            // 0x4d4d28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D4D7Cu;
            goto label_4d4d7c;
        }
    }
    ctx->pc = 0x4D4D2Cu;
label_4d4d2c:
    // 0x4d4d2c: 0x86020148  lh          $v0, 0x148($s0)
    ctx->pc = 0x4d4d2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 328)));
label_4d4d30:
    // 0x4d4d30: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_4d4d34:
    if (ctx->pc == 0x4D4D34u) {
        ctx->pc = 0x4D4D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4D30u;
        // 0x4d4d34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4D38u;
        goto label_4d4d38;
    }
    ctx->pc = 0x4D4D30u;
    {
        const bool branch_taken_0x4d4d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d4d30) {
            ctx->pc = 0x4D4D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D4D30u;
            // 0x4d4d34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D4D7Cu;
            goto label_4d4d7c;
        }
    }
    ctx->pc = 0x4D4D38u;
label_4d4d38:
    // 0x4d4d38: 0xc126d66  jal         func_49B598
label_4d4d3c:
    if (ctx->pc == 0x4D4D3Cu) {
        ctx->pc = 0x4D4D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4D38u;
        // 0x4d4d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4D40u;
        goto label_4d4d40;
    }
    ctx->pc = 0x4D4D38u;
    SET_GPR_U32(ctx, 31, 0x4D4D40u);
    ctx->pc = 0x4D4D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D4D38u;
    // 0x4d4d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B598u, 0x4D4D38u, 0x4D4D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D4D40u;
label_4d4d40:
    // 0x4d4d40: 0x24020558  addiu       $v0, $zero, 0x558
    ctx->pc = 0x4d4d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1368));
label_4d4d44:
    // 0x4d4d44: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x4d4d44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_4d4d48:
    // 0x4d4d48: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4d4d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_4d4d4c:
    // 0x4d4d4c: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x4d4d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_4d4d50:
    // 0x4d4d50: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4d4d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
label_4d4d54:
    // 0x4d4d54: 0xa6030160  sh          $v1, 0x160($s0)
    ctx->pc = 0x4d4d54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 3));
label_4d4d58:
    // 0x4d4d58: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x4d4d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_4d4d5c:
    // 0x4d4d5c: 0xa44323c4  sh          $v1, 0x23C4($v0)
    ctx->pc = 0x4d4d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 9156), (uint16_t)GPR_U32(ctx, 3));
label_4d4d60:
    // 0x4d4d60: 0xc1297fa  jal         func_4A5FE8
label_4d4d64:
    if (ctx->pc == 0x4D4D64u) {
        ctx->pc = 0x4D4D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4D60u;
        // 0x4d4d64: 0xa44023c2  sh          $zero, 0x23C2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 9154), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4D68u;
        goto label_4d4d68;
    }
    ctx->pc = 0x4D4D60u;
    SET_GPR_U32(ctx, 31, 0x4D4D68u);
    ctx->pc = 0x4D4D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D4D60u;
    // 0x4d4d64: 0xa44023c2  sh          $zero, 0x23C2($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 9154), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4D4D60u, 0x4D4D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D4D68u;
label_4d4d68:
    // 0x4d4d68: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4d4d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4d4d6c:
    // 0x4d4d6c: 0xa6000166  sh          $zero, 0x166($s0)
    ctx->pc = 0x4d4d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 358), (uint16_t)GPR_U32(ctx, 0));
label_4d4d70:
    // 0x4d4d70: 0xa60201bc  sh          $v0, 0x1BC($s0)
    ctx->pc = 0x4d4d70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 444), (uint16_t)GPR_U32(ctx, 2));
label_4d4d74:
    // 0x4d4d74: 0xa6000168  sh          $zero, 0x168($s0)
    ctx->pc = 0x4d4d74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 360), (uint16_t)GPR_U32(ctx, 0));
label_4d4d78:
    // 0x4d4d78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d4d78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d4d7c:
    // 0x4d4d7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4d4d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d4d80:
    // 0x4d4d80: 0x3e00008  jr          $ra
label_4d4d84:
    if (ctx->pc == 0x4D4D84u) {
        ctx->pc = 0x4D4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4D80u;
        // 0x4d4d84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4D88u;
        goto label_4d4d88;
    }
    ctx->pc = 0x4D4D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4D80u;
        // 0x4d4d84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D4D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D4D88u;
label_4d4d88:
    // 0x4d4d88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d4d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4d4d8c:
    // 0x4d4d8c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4d4d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
label_4d4d90:
    // 0x4d4d90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d4d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d4d94:
    // 0x4d4d94: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d4d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4d4d98:
    // 0x4d4d98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d4d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4d4d9c:
    // 0x4d4d9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d4d9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d4da0:
    // 0x4d4da0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d4da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4d4da4:
    // 0x4d4da4: 0x24b21048  addiu       $s2, $a1, 0x1048
    ctx->pc = 0x4d4da4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4168));
label_4d4da8:
    // 0x4d4da8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d4da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4d4dac:
    // 0x4d4dac: 0x24d3105c  addiu       $s3, $a2, 0x105C
    ctx->pc = 0x4d4dacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 4188));
label_4d4db0:
    // 0x4d4db0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d4db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4d4db4:
    // 0x4d4db4: 0x24140006  addiu       $s4, $zero, 0x6
    ctx->pc = 0x4d4db4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4d4db8:
    // 0x4d4db8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4d4db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_4d4dbc:
    // 0x4d4dbc: 0x26230166  addiu       $v1, $s1, 0x166
    ctx->pc = 0x4d4dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 358));
label_4d4dc0:
    // 0x4d4dc0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4d4dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_4d4dc4:
    // 0x4d4dc4: 0x26300168  addiu       $s0, $s1, 0x168
    ctx->pc = 0x4d4dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 360));
label_4d4dc8:
    // 0x4d4dc8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4d4dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_4d4dcc:
    // 0x4d4dcc: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x4d4dccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4d4dd0:
    // 0x4d4dd0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4d4dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_4d4dd4:
    // 0x4d4dd4: 0x3c1effff  lui         $fp, 0xFFFF
    ctx->pc = 0x4d4dd4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65535 << 16));
label_4d4dd8:
    // 0x4d4dd8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4d4dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_4d4ddc:
    // 0x4d4ddc: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x4d4ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_4d4de0:
    // 0x4d4de0: 0x249579e0  addiu       $s5, $a0, 0x79E0
    ctx->pc = 0x4d4de0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 31200));
label_4d4de4:
    // 0x4d4de4: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x4d4de4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d4de8:
    // 0x4d4de8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d4de8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4d4dec:
    // 0x4d4dec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4d4decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4d4df0:
    // 0x4d4df0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d4df0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d4df4:
    // 0x4d4df4: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x4d4df4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_4d4df8:
    // 0x4d4df8: 0x86c30000  lh          $v1, 0x0($s6)
    ctx->pc = 0x4d4df8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_4d4dfc:
    // 0x4d4dfc: 0x74001a  div         $zero, $v1, $s4
    ctx->pc = 0x4d4dfcu;
    { int32_t divisor = GPR_S32(ctx, 20);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_4d4e00:
    // 0x4d4e00: 0x1812  mflo        $v1
    ctx->pc = 0x4d4e00u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_4d4e04:
    // 0x4d4e04: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x4d4e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4d4e08:
    // 0x4d4e08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d4e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d4e0c:
    // 0x4d4e0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d4e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4d4e10:
    // 0x4d4e10: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x4d4e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4d4e14:
    // 0x4d4e14: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x4d4e14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4d4e18:
    // 0x4d4e18: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4d4e18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4d4e1c:
    // 0x4d4e1c: 0x4600016  bltz        $v1, . + 4 + (0x16 << 2)
label_4d4e20:
    if (ctx->pc == 0x4D4E20u) {
        ctx->pc = 0x4D4E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4E1Cu;
        // 0x4d4e20: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4E24u;
        goto label_4d4e24;
    }
    ctx->pc = 0x4D4E1Cu;
    {
        const bool branch_taken_0x4d4e1c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4D4E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4E1Cu;
        // 0x4d4e20: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4e1c) {
            ctx->pc = 0x4D4E78u;
            goto label_4d4e78;
        }
    }
    ctx->pc = 0x4D4E24u;
label_4d4e24:
    // 0x4d4e24: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4d4e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d4e28:
    // 0x4d4e28: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x4d4e28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_4d4e2c:
    // 0x4d4e2c: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x4d4e2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_4d4e30:
    // 0x4d4e30: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d4e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d4e34:
    // 0x4d4e34: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x4d4e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
label_4d4e38:
    // 0x4d4e38: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d4e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d4e3c:
    // 0x4d4e3c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d4e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_4d4e40:
    // 0x4d4e40: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4d4e40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4d4e44:
    // 0x4d4e44: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4d4e44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4d4e48:
    // 0x4d4e48: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_4d4e4c:
    if (ctx->pc == 0x4D4E4Cu) {
        ctx->pc = 0x4D4E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4E48u;
        // 0x4d4e4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4E50u;
        goto label_4d4e50;
    }
    ctx->pc = 0x4D4E48u;
    {
        const bool branch_taken_0x4d4e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d4e48) {
            ctx->pc = 0x4D4E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D4E48u;
            // 0x4d4e4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D4EB0u;
            goto label_4d4eb0;
        }
    }
    ctx->pc = 0x4D4E50u;
label_4d4e50:
    // 0x4d4e50: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4d4e50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4d4e54:
    // 0x4d4e54: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x4d4e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_4d4e58:
    // 0x4d4e58: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4d4e58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d4e5c:
    // 0x4d4e5c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4d4e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4d4e60:
    // 0x4d4e60: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4d4e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4d4e64:
    // 0x4d4e64: 0x40f809  jalr        $v0
label_4d4e68:
    if (ctx->pc == 0x4D4E68u) {
        ctx->pc = 0x4D4E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4E64u;
        // 0x4d4e68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4E6Cu;
        goto label_4d4e6c;
    }
    ctx->pc = 0x4D4E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4D4E6Cu);
        ctx->pc = 0x4D4E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4E64u;
        // 0x4d4e68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D4E64u, 0x4D4E6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4D4E6Cu;
label_4d4e6c:
    // 0x4d4e6c: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
label_4d4e70:
    if (ctx->pc == 0x4D4E70u) {
        ctx->pc = 0x4D4E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4E6Cu;
        // 0x4d4e70: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4E74u;
        goto label_4d4e74;
    }
    ctx->pc = 0x4D4E6Cu;
    {
        const bool branch_taken_0x4d4e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D4E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4E6Cu;
        // 0x4d4e70: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4e6c) {
            ctx->pc = 0x4D4DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d4df8;
        }
    }
    ctx->pc = 0x4D4E74u;
label_4d4e74:
    // 0x4d4e74: 0x0  nop
    ctx->pc = 0x4d4e74u;
    // NOP
label_4d4e78:
    // 0x4d4e78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d4e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d4e7c:
    // 0x4d4e7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d4e7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d4e80:
    // 0x4d4e80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d4e80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d4e84:
    // 0x4d4e84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d4e84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d4e88:
    // 0x4d4e88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d4e88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4d4e8c:
    // 0x4d4e8c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d4e8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d4e90:
    // 0x4d4e90: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d4e90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4d4e94:
    // 0x4d4e94: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d4e94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4d4e98:
    // 0x4d4e98: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4d4e98u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4d4e9c:
    // 0x4d4e9c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4d4e9cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d4ea0:
    // 0x4d4ea0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4d4ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_4d4ea4:
    // 0x4d4ea4: 0x8122db4  j           func_48B6D0
label_4d4ea8:
    if (ctx->pc == 0x4D4EA8u) {
        ctx->pc = 0x4D4EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4EA4u;
        // 0x4d4ea8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4EACu;
        goto label_4d4eac;
    }
    ctx->pc = 0x4D4EA4u;
    ctx->pc = 0x4D4EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D4EA4u;
    // 0x4d4ea8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    sub_0048B6D0_0x48b6d0(rdram, ctx, runtime); return;
    ctx->pc = 0x4D4EACu;
label_4d4eac:
    // 0x4d4eac: 0x0  nop
    ctx->pc = 0x4d4eacu;
    // NOP
label_4d4eb0:
    // 0x4d4eb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d4eb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d4eb4:
    // 0x4d4eb4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d4eb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d4eb8:
    // 0x4d4eb8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d4eb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4d4ebc:
    // 0x4d4ebc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d4ebcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d4ec0:
    // 0x4d4ec0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d4ec0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4d4ec4:
    // 0x4d4ec4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d4ec4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4d4ec8:
    // 0x4d4ec8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4d4ec8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4d4ecc:
    // 0x4d4ecc: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4d4eccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d4ed0:
    // 0x4d4ed0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4d4ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_4d4ed4:
    // 0x4d4ed4: 0x3e00008  jr          $ra
label_4d4ed8:
    if (ctx->pc == 0x4D4ED8u) {
        ctx->pc = 0x4D4ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4ED4u;
        // 0x4d4ed8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D4EDCu;
        goto label_4d4edc;
    }
    ctx->pc = 0x4D4ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D4ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D4ED4u;
        // 0x4d4ed8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D4ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D4EDCu;
label_4d4edc:
    // 0x4d4edc: 0x0  nop
    ctx->pc = 0x4d4edcu;
    // NOP
    ctx->pc = 0x4d4ee0u;
}
