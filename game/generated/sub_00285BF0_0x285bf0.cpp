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

// Function: sub_00285BF0
// Address: 0x285bf0 - 0x285ea0
void sub_00285BF0_0x285bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285BF0_0x285bf0");
#endif

    switch (ctx->pc) {
        case 0x285bf0u: goto label_285bf0;
        case 0x285bf4u: goto label_285bf4;
        case 0x285bf8u: goto label_285bf8;
        case 0x285bfcu: goto label_285bfc;
        case 0x285c00u: goto label_285c00;
        case 0x285c04u: goto label_285c04;
        case 0x285c08u: goto label_285c08;
        case 0x285c0cu: goto label_285c0c;
        case 0x285c10u: goto label_285c10;
        case 0x285c14u: goto label_285c14;
        case 0x285c18u: goto label_285c18;
        case 0x285c1cu: goto label_285c1c;
        case 0x285c20u: goto label_285c20;
        case 0x285c24u: goto label_285c24;
        case 0x285c28u: goto label_285c28;
        case 0x285c2cu: goto label_285c2c;
        case 0x285c30u: goto label_285c30;
        case 0x285c34u: goto label_285c34;
        case 0x285c38u: goto label_285c38;
        case 0x285c3cu: goto label_285c3c;
        case 0x285c40u: goto label_285c40;
        case 0x285c44u: goto label_285c44;
        case 0x285c48u: goto label_285c48;
        case 0x285c4cu: goto label_285c4c;
        case 0x285c50u: goto label_285c50;
        case 0x285c54u: goto label_285c54;
        case 0x285c58u: goto label_285c58;
        case 0x285c5cu: goto label_285c5c;
        case 0x285c60u: goto label_285c60;
        case 0x285c64u: goto label_285c64;
        case 0x285c68u: goto label_285c68;
        case 0x285c6cu: goto label_285c6c;
        case 0x285c70u: goto label_285c70;
        case 0x285c74u: goto label_285c74;
        case 0x285c78u: goto label_285c78;
        case 0x285c7cu: goto label_285c7c;
        case 0x285c80u: goto label_285c80;
        case 0x285c84u: goto label_285c84;
        case 0x285c88u: goto label_285c88;
        case 0x285c8cu: goto label_285c8c;
        case 0x285c90u: goto label_285c90;
        case 0x285c94u: goto label_285c94;
        case 0x285c98u: goto label_285c98;
        case 0x285c9cu: goto label_285c9c;
        case 0x285ca0u: goto label_285ca0;
        case 0x285ca4u: goto label_285ca4;
        case 0x285ca8u: goto label_285ca8;
        case 0x285cacu: goto label_285cac;
        case 0x285cb0u: goto label_285cb0;
        case 0x285cb4u: goto label_285cb4;
        case 0x285cb8u: goto label_285cb8;
        case 0x285cbcu: goto label_285cbc;
        case 0x285cc0u: goto label_285cc0;
        case 0x285cc4u: goto label_285cc4;
        case 0x285cc8u: goto label_285cc8;
        case 0x285cccu: goto label_285ccc;
        case 0x285cd0u: goto label_285cd0;
        case 0x285cd4u: goto label_285cd4;
        case 0x285cd8u: goto label_285cd8;
        case 0x285cdcu: goto label_285cdc;
        case 0x285ce0u: goto label_285ce0;
        case 0x285ce4u: goto label_285ce4;
        case 0x285ce8u: goto label_285ce8;
        case 0x285cecu: goto label_285cec;
        case 0x285cf0u: goto label_285cf0;
        case 0x285cf4u: goto label_285cf4;
        case 0x285cf8u: goto label_285cf8;
        case 0x285cfcu: goto label_285cfc;
        case 0x285d00u: goto label_285d00;
        case 0x285d04u: goto label_285d04;
        case 0x285d08u: goto label_285d08;
        case 0x285d0cu: goto label_285d0c;
        case 0x285d10u: goto label_285d10;
        case 0x285d14u: goto label_285d14;
        case 0x285d18u: goto label_285d18;
        case 0x285d1cu: goto label_285d1c;
        case 0x285d20u: goto label_285d20;
        case 0x285d24u: goto label_285d24;
        case 0x285d28u: goto label_285d28;
        case 0x285d2cu: goto label_285d2c;
        case 0x285d30u: goto label_285d30;
        case 0x285d34u: goto label_285d34;
        case 0x285d38u: goto label_285d38;
        case 0x285d3cu: goto label_285d3c;
        case 0x285d40u: goto label_285d40;
        case 0x285d44u: goto label_285d44;
        case 0x285d48u: goto label_285d48;
        case 0x285d4cu: goto label_285d4c;
        case 0x285d50u: goto label_285d50;
        case 0x285d54u: goto label_285d54;
        case 0x285d58u: goto label_285d58;
        case 0x285d5cu: goto label_285d5c;
        case 0x285d60u: goto label_285d60;
        case 0x285d64u: goto label_285d64;
        case 0x285d68u: goto label_285d68;
        case 0x285d6cu: goto label_285d6c;
        case 0x285d70u: goto label_285d70;
        case 0x285d74u: goto label_285d74;
        case 0x285d78u: goto label_285d78;
        case 0x285d7cu: goto label_285d7c;
        case 0x285d80u: goto label_285d80;
        case 0x285d84u: goto label_285d84;
        case 0x285d88u: goto label_285d88;
        case 0x285d8cu: goto label_285d8c;
        case 0x285d90u: goto label_285d90;
        case 0x285d94u: goto label_285d94;
        case 0x285d98u: goto label_285d98;
        case 0x285d9cu: goto label_285d9c;
        case 0x285da0u: goto label_285da0;
        case 0x285da4u: goto label_285da4;
        case 0x285da8u: goto label_285da8;
        case 0x285dacu: goto label_285dac;
        case 0x285db0u: goto label_285db0;
        case 0x285db4u: goto label_285db4;
        case 0x285db8u: goto label_285db8;
        case 0x285dbcu: goto label_285dbc;
        case 0x285dc0u: goto label_285dc0;
        case 0x285dc4u: goto label_285dc4;
        case 0x285dc8u: goto label_285dc8;
        case 0x285dccu: goto label_285dcc;
        case 0x285dd0u: goto label_285dd0;
        case 0x285dd4u: goto label_285dd4;
        case 0x285dd8u: goto label_285dd8;
        case 0x285ddcu: goto label_285ddc;
        case 0x285de0u: goto label_285de0;
        case 0x285de4u: goto label_285de4;
        case 0x285de8u: goto label_285de8;
        case 0x285decu: goto label_285dec;
        case 0x285df0u: goto label_285df0;
        case 0x285df4u: goto label_285df4;
        case 0x285df8u: goto label_285df8;
        case 0x285dfcu: goto label_285dfc;
        case 0x285e00u: goto label_285e00;
        case 0x285e04u: goto label_285e04;
        case 0x285e08u: goto label_285e08;
        case 0x285e0cu: goto label_285e0c;
        case 0x285e10u: goto label_285e10;
        case 0x285e14u: goto label_285e14;
        case 0x285e18u: goto label_285e18;
        case 0x285e1cu: goto label_285e1c;
        case 0x285e20u: goto label_285e20;
        case 0x285e24u: goto label_285e24;
        case 0x285e28u: goto label_285e28;
        case 0x285e2cu: goto label_285e2c;
        case 0x285e30u: goto label_285e30;
        case 0x285e34u: goto label_285e34;
        case 0x285e38u: goto label_285e38;
        case 0x285e3cu: goto label_285e3c;
        case 0x285e40u: goto label_285e40;
        case 0x285e44u: goto label_285e44;
        case 0x285e48u: goto label_285e48;
        case 0x285e4cu: goto label_285e4c;
        case 0x285e50u: goto label_285e50;
        case 0x285e54u: goto label_285e54;
        case 0x285e58u: goto label_285e58;
        case 0x285e5cu: goto label_285e5c;
        case 0x285e60u: goto label_285e60;
        case 0x285e64u: goto label_285e64;
        case 0x285e68u: goto label_285e68;
        case 0x285e6cu: goto label_285e6c;
        case 0x285e70u: goto label_285e70;
        case 0x285e74u: goto label_285e74;
        case 0x285e78u: goto label_285e78;
        case 0x285e7cu: goto label_285e7c;
        case 0x285e80u: goto label_285e80;
        case 0x285e84u: goto label_285e84;
        case 0x285e88u: goto label_285e88;
        case 0x285e8cu: goto label_285e8c;
        case 0x285e90u: goto label_285e90;
        case 0x285e94u: goto label_285e94;
        case 0x285e98u: goto label_285e98;
        case 0x285e9cu: goto label_285e9c;
        default: break;
    }

    ctx->pc = 0x285bf0u;

label_285bf0:
    // 0x285bf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x285bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_285bf4:
    // 0x285bf4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x285bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_285bf8:
    // 0x285bf8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x285bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_285bfc:
    // 0x285bfc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x285bfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_285c00:
    // 0x285c00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x285c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_285c04:
    // 0x285c04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x285c04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_285c08:
    // 0x285c08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x285c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_285c0c:
    // 0x285c0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x285c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_285c10:
    // 0x285c10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x285c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_285c14:
    // 0x285c14: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x285c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_285c18:
    // 0x285c18: 0x16a20097  bne         $s5, $v0, . + 4 + (0x97 << 2)
label_285c1c:
    if (ctx->pc == 0x285C1Cu) {
        ctx->pc = 0x285C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C18u;
        // 0x285c1c: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285C20u;
        goto label_285c20;
    }
    ctx->pc = 0x285C18u;
    {
        const bool branch_taken_0x285c18 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x285C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C18u;
        // 0x285c1c: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c18) {
            ctx->pc = 0x285E78u;
            goto label_285e78;
        }
    }
    ctx->pc = 0x285C20u;
label_285c20:
    // 0x285c20: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x285c20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_285c24:
    // 0x285c24: 0x16500026  bne         $s2, $s0, . + 4 + (0x26 << 2)
label_285c28:
    if (ctx->pc == 0x285C28u) {
        ctx->pc = 0x285C2Cu;
        goto label_285c2c;
    }
    ctx->pc = 0x285C24u;
    {
        const bool branch_taken_0x285c24 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x285c24) {
            ctx->pc = 0x285CC0u;
            goto label_285cc0;
        }
    }
    ctx->pc = 0x285C2Cu;
label_285c2c:
    // 0x285c2c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x285c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
label_285c30:
    // 0x285c30: 0xc0a20ec  jal         func_2883B0
label_285c34:
    if (ctx->pc == 0x285C34u) {
        ctx->pc = 0x285C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C30u;
        // 0x285c34: 0x24845620  addiu       $a0, $a0, 0x5620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285C38u;
        goto label_285c38;
    }
    ctx->pc = 0x285C30u;
    SET_GPR_U32(ctx, 31, 0x285C38u);
    ctx->pc = 0x285C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285C30u;
    // 0x285c34: 0x24845620  addiu       $a0, $a0, 0x5620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2883B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2883B0u, 0x285C30u, 0x285C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285C38u;
label_285c38:
    // 0x285c38: 0x16500021  bne         $s2, $s0, . + 4 + (0x21 << 2)
label_285c3c:
    if (ctx->pc == 0x285C3Cu) {
        ctx->pc = 0x285C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C38u;
        // 0x285c3c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x285C40u;
        goto label_285c40;
    }
    ctx->pc = 0x285C38u;
    {
        const bool branch_taken_0x285c38 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x285C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C38u;
        // 0x285c3c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c38) {
            ctx->pc = 0x285CC0u;
            goto label_285cc0;
        }
    }
    ctx->pc = 0x285C40u;
label_285c40:
    // 0x285c40: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x285c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
label_285c44:
    // 0x285c44: 0xc0a2900  jal         func_28A400
label_285c48:
    if (ctx->pc == 0x285C48u) {
        ctx->pc = 0x285C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C44u;
        // 0x285c48: 0x24845690  addiu       $a0, $a0, 0x5690 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285C4Cu;
        goto label_285c4c;
    }
    ctx->pc = 0x285C44u;
    SET_GPR_U32(ctx, 31, 0x285C4Cu);
    ctx->pc = 0x285C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285C44u;
    // 0x285c48: 0x24845690  addiu       $a0, $a0, 0x5690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A400u, 0x285C44u, 0x285C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285C4Cu;
label_285c4c:
    // 0x285c4c: 0x1650001c  bne         $s2, $s0, . + 4 + (0x1C << 2)
label_285c50:
    if (ctx->pc == 0x285C50u) {
        ctx->pc = 0x285C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C4Cu;
        // 0x285c50: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x285C54u;
        goto label_285c54;
    }
    ctx->pc = 0x285C4Cu;
    {
        const bool branch_taken_0x285c4c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x285C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C4Cu;
        // 0x285c50: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c4c) {
            ctx->pc = 0x285CC0u;
            goto label_285cc0;
        }
    }
    ctx->pc = 0x285C54u;
label_285c54:
    // 0x285c54: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x285c54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
label_285c58:
    // 0x285c58: 0xc0a22a8  jal         func_288AA0
label_285c5c:
    if (ctx->pc == 0x285C5Cu) {
        ctx->pc = 0x285C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C58u;
        // 0x285c5c: 0x24845700  addiu       $a0, $a0, 0x5700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285C60u;
        goto label_285c60;
    }
    ctx->pc = 0x285C58u;
    SET_GPR_U32(ctx, 31, 0x285C60u);
    ctx->pc = 0x285C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285C58u;
    // 0x285c5c: 0x24845700  addiu       $a0, $a0, 0x5700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288AA0u, 0x285C58u, 0x285C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285C60u;
label_285c60:
    // 0x285c60: 0x16500017  bne         $s2, $s0, . + 4 + (0x17 << 2)
label_285c64:
    if (ctx->pc == 0x285C64u) {
        ctx->pc = 0x285C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C60u;
        // 0x285c64: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x285C68u;
        goto label_285c68;
    }
    ctx->pc = 0x285C60u;
    {
        const bool branch_taken_0x285c60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x285C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C60u;
        // 0x285c64: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c60) {
            ctx->pc = 0x285CC0u;
            goto label_285cc0;
        }
    }
    ctx->pc = 0x285C68u;
label_285c68:
    // 0x285c68: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x285c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
label_285c6c:
    // 0x285c6c: 0xc0a279c  jal         func_289E70
label_285c70:
    if (ctx->pc == 0x285C70u) {
        ctx->pc = 0x285C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C6Cu;
        // 0x285c70: 0x24845770  addiu       $a0, $a0, 0x5770 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285C74u;
        goto label_285c74;
    }
    ctx->pc = 0x285C6Cu;
    SET_GPR_U32(ctx, 31, 0x285C74u);
    ctx->pc = 0x285C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285C6Cu;
    // 0x285c70: 0x24845770  addiu       $a0, $a0, 0x5770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289E70u, 0x285C6Cu, 0x285C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285C74u;
label_285c74:
    // 0x285c74: 0x16500012  bne         $s2, $s0, . + 4 + (0x12 << 2)
label_285c78:
    if (ctx->pc == 0x285C78u) {
        ctx->pc = 0x285C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C74u;
        // 0x285c78: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x285C7Cu;
        goto label_285c7c;
    }
    ctx->pc = 0x285C74u;
    {
        const bool branch_taken_0x285c74 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x285C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C74u;
        // 0x285c78: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c74) {
            ctx->pc = 0x285CC0u;
            goto label_285cc0;
        }
    }
    ctx->pc = 0x285C7Cu;
label_285c7c:
    // 0x285c7c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x285c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
label_285c80:
    // 0x285c80: 0xc0a2808  jal         func_28A020
label_285c84:
    if (ctx->pc == 0x285C84u) {
        ctx->pc = 0x285C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C80u;
        // 0x285c84: 0x248457e0  addiu       $a0, $a0, 0x57E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285C88u;
        goto label_285c88;
    }
    ctx->pc = 0x285C80u;
    SET_GPR_U32(ctx, 31, 0x285C88u);
    ctx->pc = 0x285C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285C80u;
    // 0x285c84: 0x248457e0  addiu       $a0, $a0, 0x57E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A020u, 0x285C80u, 0x285C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285C88u;
label_285c88:
    // 0x285c88: 0x1650000d  bne         $s2, $s0, . + 4 + (0xD << 2)
label_285c8c:
    if (ctx->pc == 0x285C8Cu) {
        ctx->pc = 0x285C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C88u;
        // 0x285c8c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x285C90u;
        goto label_285c90;
    }
    ctx->pc = 0x285C88u;
    {
        const bool branch_taken_0x285c88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x285C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C88u;
        // 0x285c8c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c88) {
            ctx->pc = 0x285CC0u;
            goto label_285cc0;
        }
    }
    ctx->pc = 0x285C90u;
label_285c90:
    // 0x285c90: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x285c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_285c94:
    // 0x285c94: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x285c94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_285c98:
    // 0x285c98: 0x24535850  addiu       $s3, $v0, 0x5850
    ctx->pc = 0x285c98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 22608));
label_285c9c:
    // 0x285c9c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x285c9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_285ca0:
    // 0x285ca0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x285ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_285ca4:
    // 0x285ca4: 0x0  nop
    ctx->pc = 0x285ca4u;
    // NOP
label_285ca8:
    // 0x285ca8: 0xc0a2838  jal         func_28A0E0
label_285cac:
    if (ctx->pc == 0x285CACu) {
        ctx->pc = 0x285CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CA8u;
        // 0x285cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285CB0u;
        goto label_285cb0;
    }
    ctx->pc = 0x285CA8u;
    SET_GPR_U32(ctx, 31, 0x285CB0u);
    ctx->pc = 0x285CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285CA8u;
    // 0x285cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A0E0u, 0x285CA8u, 0x285CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285CB0u;
label_285cb0:
    // 0x285cb0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x285cb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_285cb4:
    // 0x285cb4: 0x1634fffc  bne         $s1, $s4, . + 4 + (-0x4 << 2)
label_285cb8:
    if (ctx->pc == 0x285CB8u) {
        ctx->pc = 0x285CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CB4u;
        // 0x285cb8: 0x2610006c  addiu       $s0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285CBCu;
        goto label_285cbc;
    }
    ctx->pc = 0x285CB4u;
    {
        const bool branch_taken_0x285cb4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x285CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CB4u;
        // 0x285cb8: 0x2610006c  addiu       $s0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285cb4) {
            ctx->pc = 0x285CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285ca8;
        }
    }
    ctx->pc = 0x285CBCu;
label_285cbc:
    // 0x285cbc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x285cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_285cc0:
    // 0x285cc0: 0x16a2006e  bne         $s5, $v0, . + 4 + (0x6E << 2)
label_285cc4:
    if (ctx->pc == 0x285CC4u) {
        ctx->pc = 0x285CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CC0u;
        // 0x285cc4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285CC8u;
        goto label_285cc8;
    }
    ctx->pc = 0x285CC0u;
    {
        const bool branch_taken_0x285cc0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x285CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CC0u;
        // 0x285cc4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285cc0) {
            ctx->pc = 0x285E7Cu;
            goto label_285e7c;
        }
    }
    ctx->pc = 0x285CC8u;
label_285cc8:
    // 0x285cc8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x285cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_285ccc:
    // 0x285ccc: 0x1650000e  bne         $s2, $s0, . + 4 + (0xE << 2)
label_285cd0:
    if (ctx->pc == 0x285CD0u) {
        ctx->pc = 0x285CD4u;
        goto label_285cd4;
    }
    ctx->pc = 0x285CCCu;
    {
        const bool branch_taken_0x285ccc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x285ccc) {
            ctx->pc = 0x285D08u;
            goto label_285d08;
        }
    }
    ctx->pc = 0x285CD4u;
label_285cd4:
    // 0x285cd4: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x285cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
label_285cd8:
    // 0x285cd8: 0xc0a2442  jal         func_289108
label_285cdc:
    if (ctx->pc == 0x285CDCu) {
        ctx->pc = 0x285CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CD8u;
        // 0x285cdc: 0x24845928  addiu       $a0, $a0, 0x5928 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285CE0u;
        goto label_285ce0;
    }
    ctx->pc = 0x285CD8u;
    SET_GPR_U32(ctx, 31, 0x285CE0u);
    ctx->pc = 0x285CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285CD8u;
    // 0x285cdc: 0x24845928  addiu       $a0, $a0, 0x5928 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289108u, 0x285CD8u, 0x285CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285CE0u;
label_285ce0:
    // 0x285ce0: 0x16500009  bne         $s2, $s0, . + 4 + (0x9 << 2)
label_285ce4:
    if (ctx->pc == 0x285CE4u) {
        ctx->pc = 0x285CE8u;
        goto label_285ce8;
    }
    ctx->pc = 0x285CE0u;
    {
        const bool branch_taken_0x285ce0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x285ce0) {
            ctx->pc = 0x285D08u;
            goto label_285d08;
        }
    }
    ctx->pc = 0x285CE8u;
label_285ce8:
    // 0x285ce8: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x285ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
label_285cec:
    // 0x285cec: 0xc0a25ee  jal         func_2897B8
label_285cf0:
    if (ctx->pc == 0x285CF0u) {
        ctx->pc = 0x285CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CECu;
        // 0x285cf0: 0x24845998  addiu       $a0, $a0, 0x5998 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285CF4u;
        goto label_285cf4;
    }
    ctx->pc = 0x285CECu;
    SET_GPR_U32(ctx, 31, 0x285CF4u);
    ctx->pc = 0x285CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285CECu;
    // 0x285cf0: 0x24845998  addiu       $a0, $a0, 0x5998 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2897B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2897B8u, 0x285CECu, 0x285CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285CF4u;
label_285cf4:
    // 0x285cf4: 0x16500004  bne         $s2, $s0, . + 4 + (0x4 << 2)
label_285cf8:
    if (ctx->pc == 0x285CF8u) {
        ctx->pc = 0x285CFCu;
        goto label_285cfc;
    }
    ctx->pc = 0x285CF4u;
    {
        const bool branch_taken_0x285cf4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x285cf4) {
            ctx->pc = 0x285D08u;
            goto label_285d08;
        }
    }
    ctx->pc = 0x285CFCu;
label_285cfc:
    // 0x285cfc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x285cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_285d00:
    // 0x285d00: 0xc0a136a  jal         func_284DA8
label_285d04:
    if (ctx->pc == 0x285D04u) {
        ctx->pc = 0x285D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D00u;
        // 0x285d04: 0x24843370  addiu       $a0, $a0, 0x3370 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285D08u;
        goto label_285d08;
    }
    ctx->pc = 0x285D00u;
    SET_GPR_U32(ctx, 31, 0x285D08u);
    ctx->pc = 0x285D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285D00u;
    // 0x285d04: 0x24843370  addiu       $a0, $a0, 0x3370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284DA8u, 0x285D00u, 0x285D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285D08u;
label_285d08:
    // 0x285d08: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
label_285d0c:
    if (ctx->pc == 0x285D0Cu) {
        ctx->pc = 0x285D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D08u;
        // 0x285d0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285D10u;
        goto label_285d10;
    }
    ctx->pc = 0x285D08u;
    {
        const bool branch_taken_0x285d08 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x285D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D08u;
        // 0x285d0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d08) {
            ctx->pc = 0x285D30u;
            goto label_285d30;
        }
    }
    ctx->pc = 0x285D10u;
label_285d10:
    // 0x285d10: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x285d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_285d14:
    // 0x285d14: 0xc0a137a  jal         func_284DE8
label_285d18:
    if (ctx->pc == 0x285D18u) {
        ctx->pc = 0x285D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D14u;
        // 0x285d18: 0x24843370  addiu       $a0, $a0, 0x3370 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285D1Cu;
        goto label_285d1c;
    }
    ctx->pc = 0x285D14u;
    SET_GPR_U32(ctx, 31, 0x285D1Cu);
    ctx->pc = 0x285D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285D14u;
    // 0x285d18: 0x24843370  addiu       $a0, $a0, 0x3370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284DE8u, 0x285D14u, 0x285D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285D1Cu;
label_285d1c:
    // 0x285d1c: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_285d20:
    if (ctx->pc == 0x285D20u) {
        ctx->pc = 0x285D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D1Cu;
        // 0x285d20: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285D24u;
        goto label_285d24;
    }
    ctx->pc = 0x285D1Cu;
    {
        const bool branch_taken_0x285d1c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x285D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D1Cu;
        // 0x285d20: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d1c) {
            ctx->pc = 0x285D30u;
            goto label_285d30;
        }
    }
    ctx->pc = 0x285D24u;
label_285d24:
    // 0x285d24: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x285d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
label_285d28:
    // 0x285d28: 0x2442db38  addiu       $v0, $v0, -0x24C8
    ctx->pc = 0x285d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957880));
label_285d2c:
    // 0x285d2c: 0xac625a00  sw          $v0, 0x5A00($v1)
    ctx->pc = 0x285d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 23040), GPR_U32(ctx, 2));
label_285d30:
    // 0x285d30: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_285d34:
    if (ctx->pc == 0x285D34u) {
        ctx->pc = 0x285D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D30u;
        // 0x285d34: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285D38u;
        goto label_285d38;
    }
    ctx->pc = 0x285D30u;
    {
        const bool branch_taken_0x285d30 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x285D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D30u;
        // 0x285d34: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d30) {
            ctx->pc = 0x285D44u;
            goto label_285d44;
        }
    }
    ctx->pc = 0x285D38u;
label_285d38:
    // 0x285d38: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x285d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
label_285d3c:
    // 0x285d3c: 0x2442db38  addiu       $v0, $v0, -0x24C8
    ctx->pc = 0x285d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957880));
label_285d40:
    // 0x285d40: 0xac625990  sw          $v0, 0x5990($v1)
    ctx->pc = 0x285d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22928), GPR_U32(ctx, 2));
label_285d44:
    // 0x285d44: 0x16400014  bnez        $s2, . + 4 + (0x14 << 2)
label_285d48:
    if (ctx->pc == 0x285D48u) {
        ctx->pc = 0x285D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D44u;
        // 0x285d48: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x285D4Cu;
        goto label_285d4c;
    }
    ctx->pc = 0x285D44u;
    {
        const bool branch_taken_0x285d44 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x285D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D44u;
        // 0x285d48: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d44) {
            ctx->pc = 0x285D98u;
            goto label_285d98;
        }
    }
    ctx->pc = 0x285D4Cu;
label_285d4c:
    // 0x285d4c: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x285d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_285d50:
    // 0x285d50: 0x24425850  addiu       $v0, $v0, 0x5850
    ctx->pc = 0x285d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22608));
label_285d54:
    // 0x285d54: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_285d58:
    if (ctx->pc == 0x285D58u) {
        ctx->pc = 0x285D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D54u;
        // 0x285d58: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x285D5Cu;
        goto label_285d5c;
    }
    ctx->pc = 0x285D54u;
    {
        const bool branch_taken_0x285d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x285d54) {
            ctx->pc = 0x285D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285D54u;
            // 0x285d58: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x285D98u;
            goto label_285d98;
        }
    }
    ctx->pc = 0x285D5Cu;
label_285d5c:
    // 0x285d5c: 0x245000d8  addiu       $s0, $v0, 0xD8
    ctx->pc = 0x285d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
label_285d60:
    // 0x285d60: 0x5202000d  beql        $s0, $v0, . + 4 + (0xD << 2)
label_285d64:
    if (ctx->pc == 0x285D64u) {
        ctx->pc = 0x285D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D60u;
        // 0x285d64: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x285D68u;
        goto label_285d68;
    }
    ctx->pc = 0x285D60u;
    {
        const bool branch_taken_0x285d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x285d60) {
            ctx->pc = 0x285D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285D60u;
            // 0x285d64: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x285D98u;
            goto label_285d98;
        }
    }
    ctx->pc = 0x285D68u;
label_285d68:
    // 0x285d68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x285d68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285d6c:
    // 0x285d6c: 0x2610ff94  addiu       $s0, $s0, -0x6C
    ctx->pc = 0x285d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967188));
label_285d70:
    // 0x285d70: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x285d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_285d74:
    // 0x285d74: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x285d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_285d78:
    // 0x285d78: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x285d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_285d7c:
    // 0x285d7c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x285d7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_285d80:
    // 0x285d80: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x285d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_285d84:
    // 0x285d84: 0x60f809  jalr        $v1
label_285d88:
    if (ctx->pc == 0x285D88u) {
        ctx->pc = 0x285D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D84u;
        // 0x285d88: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285D8Cu;
        goto label_285d8c;
    }
    ctx->pc = 0x285D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x285D8Cu);
        ctx->pc = 0x285D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D84u;
        // 0x285d88: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285D84u, 0x285D8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285D8Cu;
label_285d8c:
    // 0x285d8c: 0x5611fff8  bnel        $s0, $s1, . + 4 + (-0x8 << 2)
label_285d90:
    if (ctx->pc == 0x285D90u) {
        ctx->pc = 0x285D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D8Cu;
        // 0x285d90: 0x2610ff94  addiu       $s0, $s0, -0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285D94u;
        goto label_285d94;
    }
    ctx->pc = 0x285D8Cu;
    {
        const bool branch_taken_0x285d8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x285d8c) {
            ctx->pc = 0x285D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285D8Cu;
            // 0x285d90: 0x2610ff94  addiu       $s0, $s0, -0x6C (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967188));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285d70;
        }
    }
    ctx->pc = 0x285D94u;
label_285d94:
    // 0x285d94: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x285d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_285d98:
    // 0x285d98: 0x56a20038  bnel        $s5, $v0, . + 4 + (0x38 << 2)
label_285d9c:
    if (ctx->pc == 0x285D9Cu) {
        ctx->pc = 0x285D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D98u;
        // 0x285d9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285DA0u;
        goto label_285da0;
    }
    ctx->pc = 0x285D98u;
    {
        const bool branch_taken_0x285d98 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x285d98) {
            ctx->pc = 0x285D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285D98u;
            // 0x285d9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285E7Cu;
            goto label_285e7c;
        }
    }
    ctx->pc = 0x285DA0u;
label_285da0:
    // 0x285da0: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_285da4:
    if (ctx->pc == 0x285DA4u) {
        ctx->pc = 0x285DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DA0u;
        // 0x285da4: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285DA8u;
        goto label_285da8;
    }
    ctx->pc = 0x285DA0u;
    {
        const bool branch_taken_0x285da0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x285DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DA0u;
        // 0x285da4: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285da0) {
            ctx->pc = 0x285DB4u;
            goto label_285db4;
        }
    }
    ctx->pc = 0x285DA8u;
label_285da8:
    // 0x285da8: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x285da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
label_285dac:
    // 0x285dac: 0x2442db38  addiu       $v0, $v0, -0x24C8
    ctx->pc = 0x285dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957880));
label_285db0:
    // 0x285db0: 0xac625848  sw          $v0, 0x5848($v1)
    ctx->pc = 0x285db0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22600), GPR_U32(ctx, 2));
label_285db4:
    // 0x285db4: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_285db8:
    if (ctx->pc == 0x285DB8u) {
        ctx->pc = 0x285DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DB4u;
        // 0x285db8: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285DBCu;
        goto label_285dbc;
    }
    ctx->pc = 0x285DB4u;
    {
        const bool branch_taken_0x285db4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x285DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DB4u;
        // 0x285db8: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285db4) {
            ctx->pc = 0x285DC8u;
            goto label_285dc8;
        }
    }
    ctx->pc = 0x285DBCu;
label_285dbc:
    // 0x285dbc: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x285dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
label_285dc0:
    // 0x285dc0: 0x2442db38  addiu       $v0, $v0, -0x24C8
    ctx->pc = 0x285dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957880));
label_285dc4:
    // 0x285dc4: 0xac6257d8  sw          $v0, 0x57D8($v1)
    ctx->pc = 0x285dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22488), GPR_U32(ctx, 2));
label_285dc8:
    // 0x285dc8: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_285dcc:
    if (ctx->pc == 0x285DCCu) {
        ctx->pc = 0x285DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DC8u;
        // 0x285dcc: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285DD0u;
        goto label_285dd0;
    }
    ctx->pc = 0x285DC8u;
    {
        const bool branch_taken_0x285dc8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x285DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DC8u;
        // 0x285dcc: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285dc8) {
            ctx->pc = 0x285DDCu;
            goto label_285ddc;
        }
    }
    ctx->pc = 0x285DD0u;
label_285dd0:
    // 0x285dd0: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x285dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
label_285dd4:
    // 0x285dd4: 0x2442db38  addiu       $v0, $v0, -0x24C8
    ctx->pc = 0x285dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957880));
label_285dd8:
    // 0x285dd8: 0xac625768  sw          $v0, 0x5768($v1)
    ctx->pc = 0x285dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22376), GPR_U32(ctx, 2));
label_285ddc:
    // 0x285ddc: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_285de0:
    if (ctx->pc == 0x285DE0u) {
        ctx->pc = 0x285DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DDCu;
        // 0x285de0: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285DE4u;
        goto label_285de4;
    }
    ctx->pc = 0x285DDCu;
    {
        const bool branch_taken_0x285ddc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x285DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DDCu;
        // 0x285de0: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ddc) {
            ctx->pc = 0x285DF0u;
            goto label_285df0;
        }
    }
    ctx->pc = 0x285DE4u;
label_285de4:
    // 0x285de4: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x285de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
label_285de8:
    // 0x285de8: 0x2442db38  addiu       $v0, $v0, -0x24C8
    ctx->pc = 0x285de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957880));
label_285dec:
    // 0x285dec: 0xac6256f8  sw          $v0, 0x56F8($v1)
    ctx->pc = 0x285decu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22264), GPR_U32(ctx, 2));
label_285df0:
    // 0x285df0: 0x16400022  bnez        $s2, . + 4 + (0x22 << 2)
label_285df4:
    if (ctx->pc == 0x285DF4u) {
        ctx->pc = 0x285DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DF0u;
        // 0x285df4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285DF8u;
        goto label_285df8;
    }
    ctx->pc = 0x285DF0u;
    {
        const bool branch_taken_0x285df0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x285DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DF0u;
        // 0x285df4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285df0) {
            ctx->pc = 0x285E7Cu;
            goto label_285e7c;
        }
    }
    ctx->pc = 0x285DF8u;
label_285df8:
    // 0x285df8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x285df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_285dfc:
    // 0x285dfc: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x285dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
label_285e00:
    // 0x285e00: 0x2442db38  addiu       $v0, $v0, -0x24C8
    ctx->pc = 0x285e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957880));
label_285e04:
    // 0x285e04: 0x1000001d  b           . + 4 + (0x1D << 2)
label_285e08:
    if (ctx->pc == 0x285E08u) {
        ctx->pc = 0x285E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E04u;
        // 0x285e08: 0xac625688  sw          $v0, 0x5688($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285E0Cu;
        goto label_285e0c;
    }
    ctx->pc = 0x285E04u;
    {
        const bool branch_taken_0x285e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E04u;
        // 0x285e08: 0xac625688  sw          $v0, 0x5688($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e04) {
            ctx->pc = 0x285E7Cu;
            goto label_285e7c;
        }
    }
    ctx->pc = 0x285E0Cu;
label_285e0c:
    // 0x285e0c: 0x0  nop
    ctx->pc = 0x285e0cu;
    // NOP
label_285e10:
    // 0x285e10: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
label_285e14:
    if (ctx->pc == 0x285E14u) {
        ctx->pc = 0x285E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E10u;
        // 0x285e14: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285E18u;
        goto label_285e18;
    }
    ctx->pc = 0x285E10u;
    {
        const bool branch_taken_0x285e10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x285E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E10u;
        // 0x285e14: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e10) {
            ctx->pc = 0x285E64u;
            goto label_285e64;
        }
    }
    ctx->pc = 0x285E18u;
label_285e18:
    // 0x285e18: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x285e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_285e1c:
    // 0x285e1c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x285e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_285e20:
    // 0x285e20: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x285e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_285e24:
    // 0x285e24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x285e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_285e28:
    // 0x285e28: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x285e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_285e2c:
    // 0x285e2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x285e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_285e30:
    // 0x285e30: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x285e30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_285e34:
    // 0x285e34: 0x5270000c  beql        $s3, $s0, . + 4 + (0xC << 2)
label_285e38:
    if (ctx->pc == 0x285E38u) {
        ctx->pc = 0x285E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E34u;
        // 0x285e38: 0x3c040015  lui         $a0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285E3Cu;
        goto label_285e3c;
    }
    ctx->pc = 0x285E34u;
    {
        const bool branch_taken_0x285e34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        if (branch_taken_0x285e34) {
            ctx->pc = 0x285E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285E34u;
            // 0x285e38: 0x3c040015  lui         $a0, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285E68u;
            goto label_285e68;
        }
    }
    ctx->pc = 0x285E3Cu;
label_285e3c:
    // 0x285e3c: 0x2610ff94  addiu       $s0, $s0, -0x6C
    ctx->pc = 0x285e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967188));
label_285e40:
    // 0x285e40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x285e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_285e44:
    // 0x285e44: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x285e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_285e48:
    // 0x285e48: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x285e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_285e4c:
    // 0x285e4c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x285e4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_285e50:
    // 0x285e50: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x285e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_285e54:
    // 0x285e54: 0x60f809  jalr        $v1
label_285e58:
    if (ctx->pc == 0x285E58u) {
        ctx->pc = 0x285E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E54u;
        // 0x285e58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285E5Cu;
        goto label_285e5c;
    }
    ctx->pc = 0x285E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x285E5Cu);
        ctx->pc = 0x285E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E54u;
        // 0x285e58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285E54u, 0x285E5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285E5Cu;
label_285e5c:
    // 0x285e5c: 0x5670fff8  bnel        $s3, $s0, . + 4 + (-0x8 << 2)
label_285e60:
    if (ctx->pc == 0x285E60u) {
        ctx->pc = 0x285E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E5Cu;
        // 0x285e60: 0x2610ff94  addiu       $s0, $s0, -0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285E64u;
        goto label_285e64;
    }
    ctx->pc = 0x285E5Cu;
    {
        const bool branch_taken_0x285e5c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        if (branch_taken_0x285e5c) {
            ctx->pc = 0x285E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285E5Cu;
            // 0x285e60: 0x2610ff94  addiu       $s0, $s0, -0x6C (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967188));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285e40;
        }
    }
    ctx->pc = 0x285E64u;
label_285e64:
    // 0x285e64: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x285e64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
label_285e68:
    // 0x285e68: 0xc048b90  jal         func_122E40
label_285e6c:
    if (ctx->pc == 0x285E6Cu) {
        ctx->pc = 0x285E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E68u;
        // 0x285e6c: 0x2484fcb4  addiu       $a0, $a0, -0x34C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966452));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285E70u;
        goto label_285e70;
    }
    ctx->pc = 0x285E68u;
    SET_GPR_U32(ctx, 31, 0x285E70u);
    ctx->pc = 0x285E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285E68u;
    // 0x285e6c: 0x2484fcb4  addiu       $a0, $a0, -0x34C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966452));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x285E68u, 0x285E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285E70u;
label_285e70:
    // 0x285e70: 0xc049a82  jal         func_126A08
label_285e74:
    if (ctx->pc == 0x285E74u) {
        ctx->pc = 0x285E78u;
        goto label_285e78;
    }
    ctx->pc = 0x285E70u;
    SET_GPR_U32(ctx, 31, 0x285E78u);
    ctx->pc = 0x126A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A08u, 0x285E70u, 0x285E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285E78u;
label_285e78:
    // 0x285e78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x285e78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_285e7c:
    // 0x285e7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x285e7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_285e80:
    // 0x285e80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x285e80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_285e84:
    // 0x285e84: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x285e84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_285e88:
    // 0x285e88: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x285e88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_285e8c:
    // 0x285e8c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x285e8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_285e90:
    // 0x285e90: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x285e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_285e94:
    // 0x285e94: 0x3e00008  jr          $ra
label_285e98:
    if (ctx->pc == 0x285E98u) {
        ctx->pc = 0x285E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E94u;
        // 0x285e98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285E9Cu;
        goto label_285e9c;
    }
    ctx->pc = 0x285E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E94u;
        // 0x285e98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285E9Cu;
label_285e9c:
    // 0x285e9c: 0x0  nop
    ctx->pc = 0x285e9cu;
    // NOP
    ctx->pc = 0x285ea0u;
}
