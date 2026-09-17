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

// Function: sub_002D0C60
// Address: 0x2d0c60 - 0x2d0e28
void sub_002D0C60_0x2d0c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0C60_0x2d0c60");
#endif

    switch (ctx->pc) {
        case 0x2d0c60u: goto label_2d0c60;
        case 0x2d0c64u: goto label_2d0c64;
        case 0x2d0c68u: goto label_2d0c68;
        case 0x2d0c6cu: goto label_2d0c6c;
        case 0x2d0c70u: goto label_2d0c70;
        case 0x2d0c74u: goto label_2d0c74;
        case 0x2d0c78u: goto label_2d0c78;
        case 0x2d0c7cu: goto label_2d0c7c;
        case 0x2d0c80u: goto label_2d0c80;
        case 0x2d0c84u: goto label_2d0c84;
        case 0x2d0c88u: goto label_2d0c88;
        case 0x2d0c8cu: goto label_2d0c8c;
        case 0x2d0c90u: goto label_2d0c90;
        case 0x2d0c94u: goto label_2d0c94;
        case 0x2d0c98u: goto label_2d0c98;
        case 0x2d0c9cu: goto label_2d0c9c;
        case 0x2d0ca0u: goto label_2d0ca0;
        case 0x2d0ca4u: goto label_2d0ca4;
        case 0x2d0ca8u: goto label_2d0ca8;
        case 0x2d0cacu: goto label_2d0cac;
        case 0x2d0cb0u: goto label_2d0cb0;
        case 0x2d0cb4u: goto label_2d0cb4;
        case 0x2d0cb8u: goto label_2d0cb8;
        case 0x2d0cbcu: goto label_2d0cbc;
        case 0x2d0cc0u: goto label_2d0cc0;
        case 0x2d0cc4u: goto label_2d0cc4;
        case 0x2d0cc8u: goto label_2d0cc8;
        case 0x2d0cccu: goto label_2d0ccc;
        case 0x2d0cd0u: goto label_2d0cd0;
        case 0x2d0cd4u: goto label_2d0cd4;
        case 0x2d0cd8u: goto label_2d0cd8;
        case 0x2d0cdcu: goto label_2d0cdc;
        case 0x2d0ce0u: goto label_2d0ce0;
        case 0x2d0ce4u: goto label_2d0ce4;
        case 0x2d0ce8u: goto label_2d0ce8;
        case 0x2d0cecu: goto label_2d0cec;
        case 0x2d0cf0u: goto label_2d0cf0;
        case 0x2d0cf4u: goto label_2d0cf4;
        case 0x2d0cf8u: goto label_2d0cf8;
        case 0x2d0cfcu: goto label_2d0cfc;
        case 0x2d0d00u: goto label_2d0d00;
        case 0x2d0d04u: goto label_2d0d04;
        case 0x2d0d08u: goto label_2d0d08;
        case 0x2d0d0cu: goto label_2d0d0c;
        case 0x2d0d10u: goto label_2d0d10;
        case 0x2d0d14u: goto label_2d0d14;
        case 0x2d0d18u: goto label_2d0d18;
        case 0x2d0d1cu: goto label_2d0d1c;
        case 0x2d0d20u: goto label_2d0d20;
        case 0x2d0d24u: goto label_2d0d24;
        case 0x2d0d28u: goto label_2d0d28;
        case 0x2d0d2cu: goto label_2d0d2c;
        case 0x2d0d30u: goto label_2d0d30;
        case 0x2d0d34u: goto label_2d0d34;
        case 0x2d0d38u: goto label_2d0d38;
        case 0x2d0d3cu: goto label_2d0d3c;
        case 0x2d0d40u: goto label_2d0d40;
        case 0x2d0d44u: goto label_2d0d44;
        case 0x2d0d48u: goto label_2d0d48;
        case 0x2d0d4cu: goto label_2d0d4c;
        case 0x2d0d50u: goto label_2d0d50;
        case 0x2d0d54u: goto label_2d0d54;
        case 0x2d0d58u: goto label_2d0d58;
        case 0x2d0d5cu: goto label_2d0d5c;
        case 0x2d0d60u: goto label_2d0d60;
        case 0x2d0d64u: goto label_2d0d64;
        case 0x2d0d68u: goto label_2d0d68;
        case 0x2d0d6cu: goto label_2d0d6c;
        case 0x2d0d70u: goto label_2d0d70;
        case 0x2d0d74u: goto label_2d0d74;
        case 0x2d0d78u: goto label_2d0d78;
        case 0x2d0d7cu: goto label_2d0d7c;
        case 0x2d0d80u: goto label_2d0d80;
        case 0x2d0d84u: goto label_2d0d84;
        case 0x2d0d88u: goto label_2d0d88;
        case 0x2d0d8cu: goto label_2d0d8c;
        case 0x2d0d90u: goto label_2d0d90;
        case 0x2d0d94u: goto label_2d0d94;
        case 0x2d0d98u: goto label_2d0d98;
        case 0x2d0d9cu: goto label_2d0d9c;
        case 0x2d0da0u: goto label_2d0da0;
        case 0x2d0da4u: goto label_2d0da4;
        case 0x2d0da8u: goto label_2d0da8;
        case 0x2d0dacu: goto label_2d0dac;
        case 0x2d0db0u: goto label_2d0db0;
        case 0x2d0db4u: goto label_2d0db4;
        case 0x2d0db8u: goto label_2d0db8;
        case 0x2d0dbcu: goto label_2d0dbc;
        case 0x2d0dc0u: goto label_2d0dc0;
        case 0x2d0dc4u: goto label_2d0dc4;
        case 0x2d0dc8u: goto label_2d0dc8;
        case 0x2d0dccu: goto label_2d0dcc;
        case 0x2d0dd0u: goto label_2d0dd0;
        case 0x2d0dd4u: goto label_2d0dd4;
        case 0x2d0dd8u: goto label_2d0dd8;
        case 0x2d0ddcu: goto label_2d0ddc;
        case 0x2d0de0u: goto label_2d0de0;
        case 0x2d0de4u: goto label_2d0de4;
        case 0x2d0de8u: goto label_2d0de8;
        case 0x2d0decu: goto label_2d0dec;
        case 0x2d0df0u: goto label_2d0df0;
        case 0x2d0df4u: goto label_2d0df4;
        case 0x2d0df8u: goto label_2d0df8;
        case 0x2d0dfcu: goto label_2d0dfc;
        case 0x2d0e00u: goto label_2d0e00;
        case 0x2d0e04u: goto label_2d0e04;
        case 0x2d0e08u: goto label_2d0e08;
        case 0x2d0e0cu: goto label_2d0e0c;
        case 0x2d0e10u: goto label_2d0e10;
        case 0x2d0e14u: goto label_2d0e14;
        case 0x2d0e18u: goto label_2d0e18;
        case 0x2d0e1cu: goto label_2d0e1c;
        case 0x2d0e20u: goto label_2d0e20;
        case 0x2d0e24u: goto label_2d0e24;
        default: break;
    }

    ctx->pc = 0x2d0c60u;

label_2d0c60:
    // 0x2d0c60: 0xdf82cb48  ld          $v0, -0x34B8($gp)
    ctx->pc = 0x2d0c60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294953800)));
label_2d0c64:
    // 0x2d0c64: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0c64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d0c68:
    // 0x2d0c68: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d0c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2d0c6c:
    // 0x2d0c6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d0c6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d0c70:
    // 0x2d0c70: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d0c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2d0c74:
    // 0x2d0c74: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d0c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2d0c78:
    // 0x2d0c78: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_2d0c7c:
    if (ctx->pc == 0x2D0C7Cu) {
        ctx->pc = 0x2D0C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C78u;
        // 0x2d0c7c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0C80u;
        goto label_2d0c80;
    }
    ctx->pc = 0x2D0C78u;
    {
        const bool branch_taken_0x2d0c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C78u;
        // 0x2d0c7c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c78) {
            ctx->pc = 0x2D0D4Cu;
            goto label_2d0d4c;
        }
    }
    ctx->pc = 0x2D0C80u;
label_2d0c80:
    // 0x2d0c80: 0x8f84cb3c  lw          $a0, -0x34C4($gp)
    ctx->pc = 0x2d0c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953788)));
label_2d0c84:
    // 0x2d0c84: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d0c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d0c88:
    // 0x2d0c88: 0xc043cf8  jal         func_10F3E0
label_2d0c8c:
    if (ctx->pc == 0x2D0C8Cu) {
        ctx->pc = 0x2D0C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C88u;
        // 0x2d0c8c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0C90u;
        goto label_2d0c90;
    }
    ctx->pc = 0x2D0C88u;
    SET_GPR_U32(ctx, 31, 0x2D0C90u);
    ctx->pc = 0x2D0C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0C88u;
    // 0x2d0c8c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x2D0C88u, 0x2D0C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0C90u;
label_2d0c90:
    // 0x2d0c90: 0xdf83cb48  ld          $v1, -0x34B8($gp)
    ctx->pc = 0x2d0c90u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294953800)));
label_2d0c94:
    // 0x2d0c94: 0x8f84cb3c  lw          $a0, -0x34C4($gp)
    ctx->pc = 0x2d0c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953788)));
label_2d0c98:
    // 0x2d0c98: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2d0c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_2d0c9c:
    // 0x2d0c9c: 0xc043cf0  jal         func_10F3C0
label_2d0ca0:
    if (ctx->pc == 0x2D0CA0u) {
        ctx->pc = 0x2D0CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C9Cu;
        // 0x2d0ca0: 0xff80cb48  sd          $zero, -0x34B8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294953800), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0CA4u;
        goto label_2d0ca4;
    }
    ctx->pc = 0x2D0C9Cu;
    SET_GPR_U32(ctx, 31, 0x2D0CA4u);
    ctx->pc = 0x2D0CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0C9Cu;
    // 0x2d0ca0: 0xff80cb48  sd          $zero, -0x34B8($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294953800), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x2D0C9Cu, 0x2D0CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0CA4u;
label_2d0ca4:
    // 0x2d0ca4: 0xc092940  jal         func_24A500
label_2d0ca8:
    if (ctx->pc == 0x2D0CA8u) {
        ctx->pc = 0x2D0CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0CA4u;
        // 0x2d0ca8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0CACu;
        goto label_2d0cac;
    }
    ctx->pc = 0x2D0CA4u;
    SET_GPR_U32(ctx, 31, 0x2D0CACu);
    ctx->pc = 0x2D0CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0CA4u;
    // 0x2d0ca8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2D0CA4u, 0x2D0CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0CACu;
label_2d0cac:
    // 0x2d0cac: 0xc0b43c2  jal         func_2D0F08
label_2d0cb0:
    if (ctx->pc == 0x2D0CB0u) {
        ctx->pc = 0x2D0CB4u;
        goto label_2d0cb4;
    }
    ctx->pc = 0x2D0CACu;
    SET_GPR_U32(ctx, 31, 0x2D0CB4u);
    ctx->pc = 0x2D0F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0F08u, 0x2D0CACu, 0x2D0CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0CB4u;
label_2d0cb4:
    // 0x2d0cb4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d0cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2d0cb8:
    // 0x2d0cb8: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x2d0cb8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_2d0cbc:
    // 0x2d0cbc: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x2d0cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2d0cc0:
    // 0x2d0cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d0cc4:
    // 0x2d0cc4: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x2d0cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_2d0cc8:
    // 0x2d0cc8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d0cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d0ccc:
    // 0x2d0ccc: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x2d0cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
label_2d0cd0:
    // 0x2d0cd0: 0xc086f88  jal         func_21BE20
label_2d0cd4:
    if (ctx->pc == 0x2D0CD4u) {
        ctx->pc = 0x2D0CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0CD0u;
        // 0x2d0cd4: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0CD8u;
        goto label_2d0cd8;
    }
    ctx->pc = 0x2D0CD0u;
    SET_GPR_U32(ctx, 31, 0x2D0CD8u);
    ctx->pc = 0x2D0CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0CD0u;
    // 0x2d0cd4: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BE20u, 0x2D0CD0u, 0x2D0CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0CD8u;
label_2d0cd8:
    // 0x2d0cd8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2d0cdc:
    if (ctx->pc == 0x2D0CDCu) {
        ctx->pc = 0x2D0CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0CD8u;
        // 0x2d0cdc: 0x2111807  srav        $v1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0CE0u;
        goto label_2d0ce0;
    }
    ctx->pc = 0x2D0CD8u;
    {
        const bool branch_taken_0x2d0cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0CD8u;
        // 0x2d0cdc: 0x2111807  srav        $v1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0cd8) {
            ctx->pc = 0x2D0CF4u;
            goto label_2d0cf4;
        }
    }
    ctx->pc = 0x2D0CE0u;
label_2d0ce0:
    // 0x2d0ce0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2d0ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2d0ce4:
    // 0x2d0ce4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2d0ce8:
    if (ctx->pc == 0x2D0CE8u) {
        ctx->pc = 0x2D0CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0CE4u;
        // 0x2d0ce8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0CECu;
        goto label_2d0cec;
    }
    ctx->pc = 0x2D0CE4u;
    {
        const bool branch_taken_0x2d0ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0ce4) {
            ctx->pc = 0x2D0CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0CE4u;
            // 0x2d0ce8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0CF8u;
            goto label_2d0cf8;
        }
    }
    ctx->pc = 0x2D0CECu;
label_2d0cec:
    // 0x2d0cec: 0xc086f3a  jal         func_21BCE8
label_2d0cf0:
    if (ctx->pc == 0x2D0CF0u) {
        ctx->pc = 0x2D0CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0CECu;
        // 0x2d0cf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0CF4u;
        goto label_2d0cf4;
    }
    ctx->pc = 0x2D0CECu;
    SET_GPR_U32(ctx, 31, 0x2D0CF4u);
    ctx->pc = 0x2D0CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0CECu;
    // 0x2d0cf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BCE8u, 0x2D0CECu, 0x2D0CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0CF4u;
label_2d0cf4:
    // 0x2d0cf4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d0cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2d0cf8:
    // 0x2d0cf8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2d0cf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_2d0cfc:
    // 0x2d0cfc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_2d0d00:
    if (ctx->pc == 0x2D0D00u) {
        ctx->pc = 0x2D0D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0CFCu;
        // 0x2d0d00: 0x102880  sll         $a1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0D04u;
        goto label_2d0d04;
    }
    ctx->pc = 0x2D0CFCu;
    {
        const bool branch_taken_0x2d0cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0CFCu;
        // 0x2d0d00: 0x102880  sll         $a1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0cfc) {
            ctx->pc = 0x2D0CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0cc0;
        }
    }
    ctx->pc = 0x2D0D04u;
label_2d0d04:
    // 0x2d0d04: 0x2645006c  addiu       $a1, $s2, 0x6C
    ctx->pc = 0x2d0d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
label_2d0d08:
    // 0x2d0d08: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2d0d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2d0d0c:
    // 0x2d0d0c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2d0d10:
    if (ctx->pc == 0x2D0D10u) {
        ctx->pc = 0x2D0D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D0Cu;
        // 0x2d0d10: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0D14u;
        goto label_2d0d14;
    }
    ctx->pc = 0x2D0D0Cu;
    {
        const bool branch_taken_0x2d0d0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0d0c) {
            ctx->pc = 0x2D0D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0D0Cu;
            // 0x2d0d10: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0D28u;
            goto label_2d0d28;
        }
    }
    ctx->pc = 0x2D0D14u;
label_2d0d14:
    // 0x2d0d14: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2d0d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2d0d18:
    // 0x2d0d18: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2d0d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2d0d1c:
    // 0x2d0d1c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2d0d20:
    if (ctx->pc == 0x2D0D20u) {
        ctx->pc = 0x2D0D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D1Cu;
        // 0x2d0d20: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0D24u;
        goto label_2d0d24;
    }
    ctx->pc = 0x2D0D1Cu;
    {
        const bool branch_taken_0x2d0d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D0D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D1Cu;
        // 0x2d0d20: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d1c) {
            ctx->pc = 0x2D0D30u;
            goto label_2d0d30;
        }
    }
    ctx->pc = 0x2D0D24u;
label_2d0d24:
    // 0x2d0d24: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2d0d24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2d0d28:
    // 0x2d0d28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d0d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d0d2c:
    // 0x2d0d2c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2d0d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2d0d30:
    // 0x2d0d30: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2d0d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2d0d34:
    // 0x2d0d34: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x2d0d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
label_2d0d38:
    // 0x2d0d38: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2d0d38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2d0d3c:
    // 0x2d0d3c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2d0d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2d0d40:
    // 0x2d0d40: 0x40f809  jalr        $v0
label_2d0d44:
    if (ctx->pc == 0x2D0D44u) {
        ctx->pc = 0x2D0D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D40u;
        // 0x2d0d44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0D48u;
        goto label_2d0d48;
    }
    ctx->pc = 0x2D0D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D0D48u);
        ctx->pc = 0x2D0D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D40u;
        // 0x2d0d44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0D40u, 0x2D0D48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D0D48u;
label_2d0d48:
    // 0x2d0d48: 0xaf82cb38  sw          $v0, -0x34C8($gp)
    ctx->pc = 0x2d0d48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953784), GPR_U32(ctx, 2));
label_2d0d4c:
    // 0x2d0d4c: 0x8f82cb38  lw          $v0, -0x34C8($gp)
    ctx->pc = 0x2d0d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953784)));
label_2d0d50:
    // 0x2d0d50: 0x26500055  addiu       $s0, $s2, 0x55
    ctx->pc = 0x2d0d50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 85));
label_2d0d54:
    // 0x2d0d54: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_2d0d58:
    if (ctx->pc == 0x2D0D58u) {
        ctx->pc = 0x2D0D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D54u;
        // 0x2d0d58: 0xaf80cb40  sw          $zero, -0x34C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953792), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0D5Cu;
        goto label_2d0d5c;
    }
    ctx->pc = 0x2D0D54u;
    {
        const bool branch_taken_0x2d0d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D54u;
        // 0x2d0d58: 0xaf80cb40  sw          $zero, -0x34C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953792), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d54) {
            ctx->pc = 0x2D0E00u;
            goto label_2d0e00;
        }
    }
    ctx->pc = 0x2D0D5Cu;
label_2d0d5c:
    // 0x2d0d5c: 0x92420053  lbu         $v0, 0x53($s2)
    ctx->pc = 0x2d0d5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 83)));
label_2d0d60:
    // 0x2d0d60: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
label_2d0d64:
    if (ctx->pc == 0x2D0D64u) {
        ctx->pc = 0x2D0D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D60u;
        // 0x2d0d64: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0D68u;
        goto label_2d0d68;
    }
    ctx->pc = 0x2D0D60u;
    {
        const bool branch_taken_0x2d0d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0d60) {
            ctx->pc = 0x2D0D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0D60u;
            // 0x2d0d64: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0E04u;
            goto label_2d0e04;
        }
    }
    ctx->pc = 0x2D0D68u;
label_2d0d68:
    // 0x2d0d68: 0xc089662  jal         func_225988
label_2d0d6c:
    if (ctx->pc == 0x2D0D6Cu) {
        ctx->pc = 0x2D0D70u;
        goto label_2d0d70;
    }
    ctx->pc = 0x2D0D68u;
    SET_GPR_U32(ctx, 31, 0x2D0D70u);
    ctx->pc = 0x225988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225988u, 0x2D0D68u, 0x2D0D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0D70u;
label_2d0d70:
    // 0x2d0d70: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
label_2d0d74:
    if (ctx->pc == 0x2D0D74u) {
        ctx->pc = 0x2D0D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D70u;
        // 0x2d0d74: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0D78u;
        goto label_2d0d78;
    }
    ctx->pc = 0x2D0D70u;
    {
        const bool branch_taken_0x2d0d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0d70) {
            ctx->pc = 0x2D0D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0D70u;
            // 0x2d0d74: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0E04u;
            goto label_2d0e04;
        }
    }
    ctx->pc = 0x2D0D78u;
label_2d0d78:
    // 0x2d0d78: 0xc0a4c70  jal         func_2931C0
label_2d0d7c:
    if (ctx->pc == 0x2D0D7Cu) {
        ctx->pc = 0x2D0D80u;
        goto label_2d0d80;
    }
    ctx->pc = 0x2D0D78u;
    SET_GPR_U32(ctx, 31, 0x2D0D80u);
    ctx->pc = 0x2931C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2931C0u, 0x2D0D78u, 0x2D0D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0D80u;
label_2d0d80:
    // 0x2d0d80: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_2d0d84:
    if (ctx->pc == 0x2D0D84u) {
        ctx->pc = 0x2D0D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D80u;
        // 0x2d0d84: 0x2645006c  addiu       $a1, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0D88u;
        goto label_2d0d88;
    }
    ctx->pc = 0x2D0D80u;
    {
        const bool branch_taken_0x2d0d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D80u;
        // 0x2d0d84: 0x2645006c  addiu       $a1, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d80) {
            ctx->pc = 0x2D0E00u;
            goto label_2d0e00;
        }
    }
    ctx->pc = 0x2D0D88u;
label_2d0d88:
    // 0x2d0d88: 0xaf80cb38  sw          $zero, -0x34C8($gp)
    ctx->pc = 0x2d0d88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953784), GPR_U32(ctx, 0));
label_2d0d8c:
    // 0x2d0d8c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2d0d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2d0d90:
    // 0x2d0d90: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2d0d94:
    if (ctx->pc == 0x2D0D94u) {
        ctx->pc = 0x2D0D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D90u;
        // 0x2d0d94: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0D98u;
        goto label_2d0d98;
    }
    ctx->pc = 0x2D0D90u;
    {
        const bool branch_taken_0x2d0d90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0d90) {
            ctx->pc = 0x2D0D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0D90u;
            // 0x2d0d94: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0DACu;
            goto label_2d0dac;
        }
    }
    ctx->pc = 0x2D0D98u;
label_2d0d98:
    // 0x2d0d98: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2d0d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2d0d9c:
    // 0x2d0d9c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2d0d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2d0da0:
    // 0x2d0da0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2d0da4:
    if (ctx->pc == 0x2D0DA4u) {
        ctx->pc = 0x2D0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DA0u;
        // 0x2d0da4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0DA8u;
        goto label_2d0da8;
    }
    ctx->pc = 0x2D0DA0u;
    {
        const bool branch_taken_0x2d0da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DA0u;
        // 0x2d0da4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0da0) {
            ctx->pc = 0x2D0DB4u;
            goto label_2d0db4;
        }
    }
    ctx->pc = 0x2D0DA8u;
label_2d0da8:
    // 0x2d0da8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2d0da8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2d0dac:
    // 0x2d0dac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d0dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d0db0:
    // 0x2d0db0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2d0db0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2d0db4:
    // 0x2d0db4: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2d0db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2d0db8:
    // 0x2d0db8: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x2d0db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_2d0dbc:
    // 0x2d0dbc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2d0dbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2d0dc0:
    // 0x2d0dc0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2d0dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2d0dc4:
    // 0x2d0dc4: 0x40f809  jalr        $v0
label_2d0dc8:
    if (ctx->pc == 0x2D0DC8u) {
        ctx->pc = 0x2D0DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DC4u;
        // 0x2d0dc8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0DCCu;
        goto label_2d0dcc;
    }
    ctx->pc = 0x2D0DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D0DCCu);
        ctx->pc = 0x2D0DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DC4u;
        // 0x2d0dc8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0DC4u, 0x2D0DCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D0DCCu;
label_2d0dcc:
    // 0x2d0dcc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2d0dd0:
    if (ctx->pc == 0x2D0DD0u) {
        ctx->pc = 0x2D0DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DCCu;
        // 0x2d0dd0: 0x26500055  addiu       $s0, $s2, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 85));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0DD4u;
        goto label_2d0dd4;
    }
    ctx->pc = 0x2D0DCCu;
    {
        const bool branch_taken_0x2d0dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DCCu;
        // 0x2d0dd0: 0x26500055  addiu       $s0, $s2, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0dcc) {
            ctx->pc = 0x2D0E00u;
            goto label_2d0e00;
        }
    }
    ctx->pc = 0x2D0DD4u;
label_2d0dd4:
    // 0x2d0dd4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2d0dd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2d0dd8:
    // 0x2d0dd8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2d0ddc:
    if (ctx->pc == 0x2D0DDCu) {
        ctx->pc = 0x2D0DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DD8u;
        // 0x2d0ddc: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0DE0u;
        goto label_2d0de0;
    }
    ctx->pc = 0x2D0DD8u;
    {
        const bool branch_taken_0x2d0dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0dd8) {
            ctx->pc = 0x2D0DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0DD8u;
            // 0x2d0ddc: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0E04u;
            goto label_2d0e04;
        }
    }
    ctx->pc = 0x2D0DE0u;
label_2d0de0:
    // 0x2d0de0: 0xc085116  jal         func_214458
label_2d0de4:
    if (ctx->pc == 0x2D0DE4u) {
        ctx->pc = 0x2D0DE8u;
        goto label_2d0de8;
    }
    ctx->pc = 0x2D0DE0u;
    SET_GPR_U32(ctx, 31, 0x2D0DE8u);
    ctx->pc = 0x214458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214458u, 0x2D0DE0u, 0x2D0DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0DE8u;
label_2d0de8:
    // 0x2d0de8: 0xc0a5a0c  jal         func_296830
label_2d0dec:
    if (ctx->pc == 0x2D0DECu) {
        ctx->pc = 0x2D0DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DE8u;
        // 0x2d0dec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0DF0u;
        goto label_2d0df0;
    }
    ctx->pc = 0x2D0DE8u;
    SET_GPR_U32(ctx, 31, 0x2D0DF0u);
    ctx->pc = 0x2D0DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0DE8u;
    // 0x2d0dec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296830u, 0x2D0DE8u, 0x2D0DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0DF0u;
label_2d0df0:
    // 0x2d0df0: 0xc07c22a  jal         func_1F08A8
label_2d0df4:
    if (ctx->pc == 0x2D0DF4u) {
        ctx->pc = 0x2D0DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DF0u;
        // 0x2d0df4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0DF8u;
        goto label_2d0df8;
    }
    ctx->pc = 0x2D0DF0u;
    SET_GPR_U32(ctx, 31, 0x2D0DF8u);
    ctx->pc = 0x2D0DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0DF0u;
    // 0x2d0df4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F08A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F08A8u, 0x2D0DF0u, 0x2D0DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0DF8u;
label_2d0df8:
    // 0x2d0df8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d0df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d0dfc:
    // 0x2d0dfc: 0xaf82cb40  sw          $v0, -0x34C0($gp)
    ctx->pc = 0x2d0dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953792), GPR_U32(ctx, 2));
label_2d0e00:
    // 0x2d0e00: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2d0e00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2d0e04:
    // 0x2d0e04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d0e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d0e08:
    // 0x2d0e08: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_2d0e0c:
    if (ctx->pc == 0x2D0E0Cu) {
        ctx->pc = 0x2D0E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E08u;
        // 0x2d0e0c: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0E10u;
        goto label_2d0e10;
    }
    ctx->pc = 0x2D0E08u;
    {
        const bool branch_taken_0x2d0e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d0e08) {
            ctx->pc = 0x2D0E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0E08u;
            // 0x2d0e0c: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0E10u;
            goto label_2d0e10;
        }
    }
    ctx->pc = 0x2D0E10u;
label_2d0e10:
    // 0x2d0e10: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d0e10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0e14:
    // 0x2d0e14: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d0e14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d0e18:
    // 0x2d0e18: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d0e18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d0e1c:
    // 0x2d0e1c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2d0e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d0e20:
    // 0x2d0e20: 0x3e00008  jr          $ra
label_2d0e24:
    if (ctx->pc == 0x2D0E24u) {
        ctx->pc = 0x2D0E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E20u;
        // 0x2d0e24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0E28u;
        goto label_fallthrough_0x2d0e20;
    }
    ctx->pc = 0x2D0E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E20u;
        // 0x2d0e24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d0e20:
    ctx->pc = 0x2D0E28u;
}
