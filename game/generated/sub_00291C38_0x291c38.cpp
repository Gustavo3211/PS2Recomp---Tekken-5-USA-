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

// Function: sub_00291C38
// Address: 0x291c38 - 0x292108
void sub_00291C38_0x291c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291C38_0x291c38");
#endif

    switch (ctx->pc) {
        case 0x291ca0u: goto label_291ca0;
        case 0x291cb0u: goto label_291cb0;
        case 0x291cbcu: goto label_291cbc;
        case 0x291cc8u: goto label_291cc8;
        case 0x291cd8u: goto label_291cd8;
        case 0x291ce4u: goto label_291ce4;
        case 0x291d04u: goto label_291d04;
        case 0x291d18u: goto label_291d18;
        case 0x291d4cu: goto label_291d4c;
        case 0x291d60u: goto label_291d60;
        case 0x291d90u: goto label_291d90;
        case 0x291dc0u: goto label_291dc0;
        case 0x291df0u: goto label_291df0;
        case 0x291e20u: goto label_291e20;
        case 0x291e50u: goto label_291e50;
        case 0x291e80u: goto label_291e80;
        case 0x291eb0u: goto label_291eb0;
        case 0x291ee0u: goto label_291ee0;
        case 0x291f10u: goto label_291f10;
        case 0x291f40u: goto label_291f40;
        case 0x291f70u: goto label_291f70;
        case 0x291f98u: goto label_291f98;
        case 0x291fb8u: goto label_291fb8;
        case 0x291fdcu: goto label_291fdc;
        case 0x291ff8u: goto label_291ff8;
        case 0x29202cu: goto label_29202c;
        case 0x29203cu: goto label_29203c;
        case 0x292050u: goto label_292050;
        case 0x292070u: goto label_292070;
        case 0x292080u: goto label_292080;
        case 0x292088u: goto label_292088;
        case 0x2920b0u: goto label_2920b0;
        case 0x2920dcu: goto label_2920dc;
        default: break;
    }

    ctx->pc = 0x291c38u;

    // 0x291c38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x291c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x291c3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x291c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x291c40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x291c40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291c44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x291c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x291c48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x291c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x291c4c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x291c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x291c50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x291c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x291c54: 0x92430150  lbu         $v1, 0x150($s2)
    ctx->pc = 0x291c54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x291c58: 0x14600123  bnez        $v1, . + 4 + (0x123 << 2)
    ctx->pc = 0x291C58u;
    {
        const bool branch_taken_0x291c58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x291C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C58u;
        // 0x291c5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c58) {
            ctx->pc = 0x2920E8u;
            goto label_2920e8;
        }
    }
    ctx->pc = 0x291C60u;
    // 0x291c60: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x291c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x291c64: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x291c64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291c68: 0x10730029  beq         $v1, $s3, . + 4 + (0x29 << 2)
    ctx->pc = 0x291C68u;
    {
        const bool branch_taken_0x291c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x291C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C68u;
        // 0x291c6c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c68) {
            ctx->pc = 0x291D10u;
            goto label_291d10;
        }
    }
    ctx->pc = 0x291C70u;
    // 0x291c70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x291C70u;
    {
        const bool branch_taken_0x291c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C70u;
        // 0x291c74: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c70) {
            ctx->pc = 0x291C88u;
            goto label_291c88;
        }
    }
    ctx->pc = 0x291C78u;
    // 0x291c78: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x291C78u;
    {
        const bool branch_taken_0x291c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x291C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C78u;
        // 0x291c7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c78) {
            ctx->pc = 0x291C98u;
            goto label_291c98;
        }
    }
    ctx->pc = 0x291C80u;
    // 0x291c80: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x291C80u;
    {
        const bool branch_taken_0x291c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C80u;
        // 0x291c84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c80) {
            ctx->pc = 0x2920ECu;
            goto label_2920ec;
        }
    }
    ctx->pc = 0x291C88u;
label_291c88:
    // 0x291c88: 0x106200c9  beq         $v1, $v0, . + 4 + (0xC9 << 2)
    ctx->pc = 0x291C88u;
    {
        const bool branch_taken_0x291c88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x291C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C88u;
        // 0x291c8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c88) {
            ctx->pc = 0x291FB0u;
            goto label_291fb0;
        }
    }
    ctx->pc = 0x291C90u;
    // 0x291c90: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x291C90u;
    {
        const bool branch_taken_0x291c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C90u;
        // 0x291c94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c90) {
            ctx->pc = 0x2920ECu;
            goto label_2920ec;
        }
    }
    ctx->pc = 0x291C98u;
label_291c98:
    // 0x291c98: 0xc089622  jal         func_225888
    ctx->pc = 0x291C98u;
    SET_GPR_U32(ctx, 31, 0x291CA0u);
    ctx->pc = 0x291C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291C98u;
    // 0x291c9c: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x291C98u, 0x291CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291CA0u;
label_291ca0:
    // 0x291ca0: 0x50400111  beql        $v0, $zero, . + 4 + (0x111 << 2)
    ctx->pc = 0x291CA0u;
    {
        const bool branch_taken_0x291ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291ca0) {
            ctx->pc = 0x291CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291CA0u;
            // 0x291ca4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2920E8u;
            goto label_2920e8;
        }
    }
    ctx->pc = 0x291CA8u;
    // 0x291ca8: 0xc0a49c0  jal         func_292700
    ctx->pc = 0x291CA8u;
    SET_GPR_U32(ctx, 31, 0x291CB0u);
    ctx->pc = 0x291CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291CA8u;
    // 0x291cac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292700u, 0x291CA8u, 0x291CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291CB0u;
label_291cb0:
    // 0x291cb0: 0xa2530152  sb          $s3, 0x152($s2)
    ctx->pc = 0x291cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 338), (uint8_t)GPR_U32(ctx, 19));
    // 0x291cb4: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x291CB4u;
    SET_GPR_U32(ctx, 31, 0x291CBCu);
    ctx->pc = 0x291CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291CB4u;
    // 0x291cb8: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x291CB4u, 0x291CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291CBCu;
label_291cbc:
    // 0x291cbc: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x291cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x291cc0: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x291CC0u;
    SET_GPR_U32(ctx, 31, 0x291CC8u);
    ctx->pc = 0x291CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291CC0u;
    // 0x291cc4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x291CC0u, 0x291CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291CC8u;
label_291cc8:
    // 0x291cc8: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x291cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x291ccc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x291cccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291cd0: 0xc04058e  jal         func_101638
    ctx->pc = 0x291CD0u;
    SET_GPR_U32(ctx, 31, 0x291CD8u);
    ctx->pc = 0x291CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291CD0u;
    // 0x291cd4: 0x34844100  ori         $a0, $a0, 0x4100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16640);
    ctx->in_delay_slot = false;
    ctx->pc = 0x101638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101638u, 0x291CD0u, 0x291CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291CD8u;
label_291cd8:
    // 0x291cd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x291cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291cdc: 0xc07c494  jal         func_1F1250
    ctx->pc = 0x291CDCu;
    SET_GPR_U32(ctx, 31, 0x291CE4u);
    ctx->pc = 0x291CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291CDCu;
    // 0x291ce0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1250u, 0x291CDCu, 0x291CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291CE4u;
label_291ce4:
    // 0x291ce4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291ce8: 0x3c094000  lui         $t1, 0x4000
    ctx->pc = 0x291ce8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
    // 0x291cec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x291cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291cf0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x291cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291cf4: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x291cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x291cf8: 0x240800f1  addiu       $t0, $zero, 0xF1
    ctx->pc = 0x291cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x291cfc: 0xc0a5adc  jal         func_296B70
    ctx->pc = 0x291CFCu;
    SET_GPR_U32(ctx, 31, 0x291D04u);
    ctx->pc = 0x291D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291CFCu;
    // 0x291d00: 0x35290400  ori         $t1, $t1, 0x400 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x296B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B70u, 0x291CFCu, 0x291D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291D04u;
label_291d04:
    // 0x291d04: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x291D04u;
    {
        const bool branch_taken_0x291d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D04u;
        // 0x291d08: 0xae530048  sw          $s3, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291d04) {
            ctx->pc = 0x2920E4u;
            goto label_2920e4;
        }
    }
    ctx->pc = 0x291D0Cu;
    // 0x291d0c: 0x0  nop
    ctx->pc = 0x291d0cu;
    // NOP
label_291d10:
    // 0x291d10: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x291D10u;
    SET_GPR_U32(ctx, 31, 0x291D18u);
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x291D10u, 0x291D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291D18u;
label_291d18:
    // 0x291d18: 0xde420150  ld          $v0, 0x150($s2)
    ctx->pc = 0x291d18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x291d1c: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x291d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x291d20: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x291d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x291d24: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x291d24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x291d28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x291d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x291d2c: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x291D2Cu;
    {
        const bool branch_taken_0x291d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x291d2c) {
            ctx->pc = 0x291D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291D2Cu;
            // 0x291d30: 0xa2530151  sb          $s3, 0x151($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 337), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291D34u;
            goto label_291d34;
        }
    }
    ctx->pc = 0x291D34u;
label_291d34:
    // 0x291d34: 0x8e42013c  lw          $v0, 0x13C($s2)
    ctx->pc = 0x291d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
    // 0x291d38: 0x104000ea  beqz        $v0, . + 4 + (0xEA << 2)
    ctx->pc = 0x291D38u;
    {
        const bool branch_taken_0x291d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D38u;
        // 0x291d3c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291d38) {
            ctx->pc = 0x2920E4u;
            goto label_2920e4;
        }
    }
    ctx->pc = 0x291D40u;
    // 0x291d40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291d44: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x291D44u;
    SET_GPR_U32(ctx, 31, 0x291D4Cu);
    ctx->pc = 0x291D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291D44u;
    // 0x291d48: 0x24a5af10  addiu       $a1, $a1, -0x50F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x291D44u, 0x291D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291D4Cu;
label_291d4c:
    // 0x291d4c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x291d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x291d50: 0xae420158  sw          $v0, 0x158($s2)
    ctx->pc = 0x291d50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 2));
    // 0x291d54: 0x24a5af20  addiu       $a1, $a1, -0x50E0
    ctx->pc = 0x291d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946592));
    // 0x291d58: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x291D58u;
    SET_GPR_U32(ctx, 31, 0x291D60u);
    ctx->pc = 0x291D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291D58u;
    // 0x291d5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x291D58u, 0x291D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291D60u;
label_291d60:
    // 0x291d60: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x291D60u;
    {
        const bool branch_taken_0x291d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D60u;
        // 0x291d64: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291d60) {
            ctx->pc = 0x291D84u;
            goto label_291d84;
        }
    }
    ctx->pc = 0x291D68u;
    // 0x291d68: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x291d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x291d6c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x291D6Cu;
    {
        const bool branch_taken_0x291d6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x291D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D6Cu;
        // 0x291d70: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291d6c) {
            ctx->pc = 0x291D84u;
            goto label_291d84;
        }
    }
    ctx->pc = 0x291D74u;
    // 0x291d74: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x291d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x291d78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x291d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x291d7c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x291d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x291d80: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x291d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_291d84:
    // 0x291d84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291d88: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x291D88u;
    SET_GPR_U32(ctx, 31, 0x291D90u);
    ctx->pc = 0x291D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291D88u;
    // 0x291d8c: 0x24a5af40  addiu       $a1, $a1, -0x50C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x291D88u, 0x291D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291D90u;
label_291d90:
    // 0x291d90: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x291D90u;
    {
        const bool branch_taken_0x291d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291d90) {
            ctx->pc = 0x291D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291D90u;
            // 0x291d94: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291DB4u;
            goto label_291db4;
        }
    }
    ctx->pc = 0x291D98u;
    // 0x291d98: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x291d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x291d9c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291D9Cu;
    {
        const bool branch_taken_0x291d9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x291DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D9Cu;
        // 0x291da0: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291d9c) {
            ctx->pc = 0x291DB0u;
            goto label_291db0;
        }
    }
    ctx->pc = 0x291DA4u;
    // 0x291da4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x291da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x291da8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x291da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x291dac: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x291dacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_291db0:
    // 0x291db0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x291db0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_291db4:
    // 0x291db4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291db8: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x291DB8u;
    SET_GPR_U32(ctx, 31, 0x291DC0u);
    ctx->pc = 0x291DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291DB8u;
    // 0x291dbc: 0x24a5af60  addiu       $a1, $a1, -0x50A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x291DB8u, 0x291DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291DC0u;
label_291dc0:
    // 0x291dc0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x291DC0u;
    {
        const bool branch_taken_0x291dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291dc0) {
            ctx->pc = 0x291DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291DC0u;
            // 0x291dc4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291DE4u;
            goto label_291de4;
        }
    }
    ctx->pc = 0x291DC8u;
    // 0x291dc8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x291dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x291dcc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291DCCu;
    {
        const bool branch_taken_0x291dcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x291DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291DCCu;
        // 0x291dd0: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291dcc) {
            ctx->pc = 0x291DE0u;
            goto label_291de0;
        }
    }
    ctx->pc = 0x291DD4u;
    // 0x291dd4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x291dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x291dd8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x291dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x291ddc: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x291ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_291de0:
    // 0x291de0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x291de0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_291de4:
    // 0x291de4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291de8: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x291DE8u;
    SET_GPR_U32(ctx, 31, 0x291DF0u);
    ctx->pc = 0x291DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291DE8u;
    // 0x291dec: 0x24a5af80  addiu       $a1, $a1, -0x5080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x291DE8u, 0x291DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291DF0u;
label_291df0:
    // 0x291df0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x291DF0u;
    {
        const bool branch_taken_0x291df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291df0) {
            ctx->pc = 0x291DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291DF0u;
            // 0x291df4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291E14u;
            goto label_291e14;
        }
    }
    ctx->pc = 0x291DF8u;
    // 0x291df8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x291df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x291dfc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291DFCu;
    {
        const bool branch_taken_0x291dfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x291E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291DFCu;
        // 0x291e00: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291dfc) {
            ctx->pc = 0x291E10u;
            goto label_291e10;
        }
    }
    ctx->pc = 0x291E04u;
    // 0x291e04: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x291e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x291e08: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x291e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x291e0c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x291e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_291e10:
    // 0x291e10: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x291e10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_291e14:
    // 0x291e14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291e18: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x291E18u;
    SET_GPR_U32(ctx, 31, 0x291E20u);
    ctx->pc = 0x291E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291E18u;
    // 0x291e1c: 0x24a5afa0  addiu       $a1, $a1, -0x5060 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x291E18u, 0x291E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291E20u;
label_291e20:
    // 0x291e20: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x291E20u;
    {
        const bool branch_taken_0x291e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291e20) {
            ctx->pc = 0x291E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291E20u;
            // 0x291e24: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291E44u;
            goto label_291e44;
        }
    }
    ctx->pc = 0x291E28u;
    // 0x291e28: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x291e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x291e2c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291E2Cu;
    {
        const bool branch_taken_0x291e2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x291E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E2Cu;
        // 0x291e30: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291e2c) {
            ctx->pc = 0x291E40u;
            goto label_291e40;
        }
    }
    ctx->pc = 0x291E34u;
    // 0x291e34: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x291e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x291e38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x291e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x291e3c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x291e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_291e40:
    // 0x291e40: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x291e40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_291e44:
    // 0x291e44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291e48: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x291E48u;
    SET_GPR_U32(ctx, 31, 0x291E50u);
    ctx->pc = 0x291E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291E48u;
    // 0x291e4c: 0x24a5afc0  addiu       $a1, $a1, -0x5040 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x291E48u, 0x291E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291E50u;
label_291e50:
    // 0x291e50: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x291E50u;
    {
        const bool branch_taken_0x291e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291e50) {
            ctx->pc = 0x291E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291E50u;
            // 0x291e54: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291E74u;
            goto label_291e74;
        }
    }
    ctx->pc = 0x291E58u;
    // 0x291e58: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x291e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x291e5c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291E5Cu;
    {
        const bool branch_taken_0x291e5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x291E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E5Cu;
        // 0x291e60: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291e5c) {
            ctx->pc = 0x291E70u;
            goto label_291e70;
        }
    }
    ctx->pc = 0x291E64u;
    // 0x291e64: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x291e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x291e68: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x291e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x291e6c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x291e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_291e70:
    // 0x291e70: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x291e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_291e74:
    // 0x291e74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291e78: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x291E78u;
    SET_GPR_U32(ctx, 31, 0x291E80u);
    ctx->pc = 0x291E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291E78u;
    // 0x291e7c: 0x24a5afe0  addiu       $a1, $a1, -0x5020 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x291E78u, 0x291E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291E80u;
label_291e80:
    // 0x291e80: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x291E80u;
    {
        const bool branch_taken_0x291e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291e80) {
            ctx->pc = 0x291E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291E80u;
            // 0x291e84: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291EA4u;
            goto label_291ea4;
        }
    }
    ctx->pc = 0x291E88u;
    // 0x291e88: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x291e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x291e8c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291E8Cu;
    {
        const bool branch_taken_0x291e8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x291E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E8Cu;
        // 0x291e90: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291e8c) {
            ctx->pc = 0x291EA0u;
            goto label_291ea0;
        }
    }
    ctx->pc = 0x291E94u;
    // 0x291e94: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x291e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x291e98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x291e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x291e9c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x291e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_291ea0:
    // 0x291ea0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x291ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_291ea4:
    // 0x291ea4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291ea8: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x291EA8u;
    SET_GPR_U32(ctx, 31, 0x291EB0u);
    ctx->pc = 0x291EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291EA8u;
    // 0x291eac: 0x24a5b000  addiu       $a1, $a1, -0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x291EA8u, 0x291EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291EB0u;
label_291eb0:
    // 0x291eb0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x291EB0u;
    {
        const bool branch_taken_0x291eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291eb0) {
            ctx->pc = 0x291EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291EB0u;
            // 0x291eb4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291ED4u;
            goto label_291ed4;
        }
    }
    ctx->pc = 0x291EB8u;
    // 0x291eb8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x291eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x291ebc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291EBCu;
    {
        const bool branch_taken_0x291ebc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x291EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291EBCu;
        // 0x291ec0: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ebc) {
            ctx->pc = 0x291ED0u;
            goto label_291ed0;
        }
    }
    ctx->pc = 0x291EC4u;
    // 0x291ec4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x291ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x291ec8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x291ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x291ecc: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x291eccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_291ed0:
    // 0x291ed0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x291ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_291ed4:
    // 0x291ed4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291ed8: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x291ED8u;
    SET_GPR_U32(ctx, 31, 0x291EE0u);
    ctx->pc = 0x291EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291ED8u;
    // 0x291edc: 0x24a5b020  addiu       $a1, $a1, -0x4FE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x291ED8u, 0x291EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291EE0u;
label_291ee0:
    // 0x291ee0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x291EE0u;
    {
        const bool branch_taken_0x291ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291ee0) {
            ctx->pc = 0x291EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291EE0u;
            // 0x291ee4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291F04u;
            goto label_291f04;
        }
    }
    ctx->pc = 0x291EE8u;
    // 0x291ee8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x291ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x291eec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291EECu;
    {
        const bool branch_taken_0x291eec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x291EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291EECu;
        // 0x291ef0: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291eec) {
            ctx->pc = 0x291F00u;
            goto label_291f00;
        }
    }
    ctx->pc = 0x291EF4u;
    // 0x291ef4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x291ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x291ef8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x291ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x291efc: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x291efcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_291f00:
    // 0x291f00: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x291f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_291f04:
    // 0x291f04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291f08: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x291F08u;
    SET_GPR_U32(ctx, 31, 0x291F10u);
    ctx->pc = 0x291F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291F08u;
    // 0x291f0c: 0x24a5b040  addiu       $a1, $a1, -0x4FC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x291F08u, 0x291F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F10u;
label_291f10:
    // 0x291f10: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x291F10u;
    {
        const bool branch_taken_0x291f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291f10) {
            ctx->pc = 0x291F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291F10u;
            // 0x291f14: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291F34u;
            goto label_291f34;
        }
    }
    ctx->pc = 0x291F18u;
    // 0x291f18: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x291f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x291f1c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291F1Cu;
    {
        const bool branch_taken_0x291f1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x291F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291F1Cu;
        // 0x291f20: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291f1c) {
            ctx->pc = 0x291F30u;
            goto label_291f30;
        }
    }
    ctx->pc = 0x291F24u;
    // 0x291f24: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x291f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x291f28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x291f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x291f2c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x291f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_291f30:
    // 0x291f30: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x291f30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_291f34:
    // 0x291f34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291f38: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x291F38u;
    SET_GPR_U32(ctx, 31, 0x291F40u);
    ctx->pc = 0x291F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291F38u;
    // 0x291f3c: 0x24a5b060  addiu       $a1, $a1, -0x4FA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x291F38u, 0x291F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F40u;
label_291f40:
    // 0x291f40: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x291F40u;
    {
        const bool branch_taken_0x291f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291f40) {
            ctx->pc = 0x291F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291F40u;
            // 0x291f44: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291F64u;
            goto label_291f64;
        }
    }
    ctx->pc = 0x291F48u;
    // 0x291f48: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x291f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x291f4c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291F4Cu;
    {
        const bool branch_taken_0x291f4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x291F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291F4Cu;
        // 0x291f50: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291f4c) {
            ctx->pc = 0x291F60u;
            goto label_291f60;
        }
    }
    ctx->pc = 0x291F54u;
    // 0x291f54: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x291f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x291f58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x291f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x291f5c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x291f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_291f60:
    // 0x291f60: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x291f60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_291f64:
    // 0x291f64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291f68: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x291F68u;
    SET_GPR_U32(ctx, 31, 0x291F70u);
    ctx->pc = 0x291F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291F68u;
    // 0x291f6c: 0x24a5b080  addiu       $a1, $a1, -0x4F80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x291F68u, 0x291F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F70u;
label_291f70:
    // 0x291f70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x291F70u;
    {
        const bool branch_taken_0x291f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291f70) {
            ctx->pc = 0x291F90u;
            goto label_291f90;
        }
    }
    ctx->pc = 0x291F78u;
    // 0x291f78: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x291f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x291f7c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291F7Cu;
    {
        const bool branch_taken_0x291f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x291F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291F7Cu;
        // 0x291f80: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291f7c) {
            ctx->pc = 0x291F90u;
            goto label_291f90;
        }
    }
    ctx->pc = 0x291F84u;
    // 0x291f84: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x291f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x291f88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x291f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x291f8c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x291f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_291f90:
    // 0x291f90: 0xc0a4b08  jal         func_292C20
    ctx->pc = 0x291F90u;
    SET_GPR_U32(ctx, 31, 0x291F98u);
    ctx->pc = 0x291F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291F90u;
    // 0x291f94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292C20u, 0x291F90u, 0x291F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F98u;
label_291f98:
    // 0x291f98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x291f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x291f9c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x291f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x291fa0: 0xa2420152  sb          $v0, 0x152($s2)
    ctx->pc = 0x291fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 338), (uint8_t)GPR_U32(ctx, 2));
    // 0x291fa4: 0xae430048  sw          $v1, 0x48($s2)
    ctx->pc = 0x291fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 3));
    // 0x291fa8: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x291FA8u;
    {
        const bool branch_taken_0x291fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291FA8u;
        // 0x291fac: 0xae40004c  sw          $zero, 0x4C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291fa8) {
            ctx->pc = 0x2920E4u;
            goto label_2920e4;
        }
    }
    ctx->pc = 0x291FB0u;
label_291fb0:
    // 0x291fb0: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x291FB0u;
    SET_GPR_U32(ctx, 31, 0x291FB8u);
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x291FB0u, 0x291FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291FB8u;
label_291fb8:
    // 0x291fb8: 0xde420150  ld          $v0, 0x150($s2)
    ctx->pc = 0x291fb8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x291fbc: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x291fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x291fc0: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x291fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x291fc4: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x291fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x291fc8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x291fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x291fcc: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x291FCCu;
    {
        const bool branch_taken_0x291fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x291fcc) {
            ctx->pc = 0x291FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291FCCu;
            // 0x291fd0: 0xa2530151  sb          $s3, 0x151($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 337), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291FD4u;
            goto label_291fd4;
        }
    }
    ctx->pc = 0x291FD4u;
label_291fd4:
    // 0x291fd4: 0xc0a4bdc  jal         func_292F70
    ctx->pc = 0x291FD4u;
    SET_GPR_U32(ctx, 31, 0x291FDCu);
    ctx->pc = 0x291FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291FD4u;
    // 0x291fd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F70u, 0x291FD4u, 0x291FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291FDCu;
label_291fdc:
    // 0x291fdc: 0x92420156  lbu         $v0, 0x156($s2)
    ctx->pc = 0x291fdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 342)));
    // 0x291fe0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x291FE0u;
    {
        const bool branch_taken_0x291fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x291fe0) {
            ctx->pc = 0x291FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291FE0u;
            // 0x291fe4: 0x92420153  lbu         $v0, 0x153($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 339)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292010u;
            goto label_292010;
        }
    }
    ctx->pc = 0x291FE8u;
    // 0x291fe8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x291fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x291fec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291ff0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x291FF0u;
    SET_GPR_U32(ctx, 31, 0x291FF8u);
    ctx->pc = 0x291FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291FF0u;
    // 0x291ff4: 0x24a5b0a0  addiu       $a1, $a1, -0x4F60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x291FF0u, 0x291FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291FF8u;
label_291ff8:
    // 0x291ff8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x291FF8u;
    {
        const bool branch_taken_0x291ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291ff8) {
            ctx->pc = 0x291FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291FF8u;
            // 0x291ffc: 0xa2530156  sb          $s3, 0x156($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 342), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29200Cu;
            goto label_29200c;
        }
    }
    ctx->pc = 0x292000u;
    // 0x292000: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x292000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x292004: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x292004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x292008: 0xa2420156  sb          $v0, 0x156($s2)
    ctx->pc = 0x292008u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 342), (uint8_t)GPR_U32(ctx, 2));
label_29200c:
    // 0x29200c: 0x92420153  lbu         $v0, 0x153($s2)
    ctx->pc = 0x29200cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 339)));
label_292010:
    // 0x292010: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x292010u;
    {
        const bool branch_taken_0x292010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292010) {
            ctx->pc = 0x292014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292010u;
            // 0x292014: 0x92420154  lbu         $v0, 0x154($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292098u;
            goto label_292098;
        }
    }
    ctx->pc = 0x292018u;
    // 0x292018: 0x92420155  lbu         $v0, 0x155($s2)
    ctx->pc = 0x292018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 341)));
    // 0x29201c: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x29201Cu;
    {
        const bool branch_taken_0x29201c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29201c) {
            ctx->pc = 0x292020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29201Cu;
            // 0x292020: 0x92420154  lbu         $v0, 0x154($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292098u;
            goto label_292098;
        }
    }
    ctx->pc = 0x292024u;
    // 0x292024: 0xc089622  jal         func_225888
    ctx->pc = 0x292024u;
    SET_GPR_U32(ctx, 31, 0x29202Cu);
    ctx->pc = 0x292028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292024u;
    // 0x292028: 0x2404002e  addiu       $a0, $zero, 0x2E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x292024u, 0x29202Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29202Cu;
label_29202c:
    // 0x29202c: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x29202Cu;
    {
        const bool branch_taken_0x29202c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29202c) {
            ctx->pc = 0x292030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29202Cu;
            // 0x292030: 0x92420154  lbu         $v0, 0x154($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292098u;
            goto label_292098;
        }
    }
    ctx->pc = 0x292034u;
    // 0x292034: 0xc089622  jal         func_225888
    ctx->pc = 0x292034u;
    SET_GPR_U32(ctx, 31, 0x29203Cu);
    ctx->pc = 0x292038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292034u;
    // 0x292038: 0x2404002f  addiu       $a0, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x292034u, 0x29203Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29203Cu;
label_29203c:
    // 0x29203c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x29203Cu;
    {
        const bool branch_taken_0x29203c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29203Cu;
        // 0x292040: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29203c) {
            ctx->pc = 0x292094u;
            goto label_292094;
        }
    }
    ctx->pc = 0x292044u;
    // 0x292044: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x292044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292048: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x292048u;
    SET_GPR_U32(ctx, 31, 0x292050u);
    ctx->pc = 0x29204Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292048u;
    // 0x29204c: 0x24a5b0b0  addiu       $a1, $a1, -0x4F50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x292048u, 0x292050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292050u;
label_292050:
    // 0x292050: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x292050u;
    {
        const bool branch_taken_0x292050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292050) {
            ctx->pc = 0x292054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292050u;
            // 0x292054: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292090u;
            goto label_292090;
        }
    }
    ctx->pc = 0x292058u;
    // 0x292058: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x292058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x29205c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29205cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x292060: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x292060u;
    {
        const bool branch_taken_0x292060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292060) {
            ctx->pc = 0x292064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292060u;
            // 0x292064: 0x92420154  lbu         $v0, 0x154($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292098u;
            goto label_292098;
        }
    }
    ctx->pc = 0x292068u;
    // 0x292068: 0xc092940  jal         func_24A500
    ctx->pc = 0x292068u;
    SET_GPR_U32(ctx, 31, 0x292070u);
    ctx->pc = 0x29206Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292068u;
    // 0x29206c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x292068u, 0x292070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292070u;
label_292070:
    // 0x292070: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292074: 0xa2420153  sb          $v0, 0x153($s2)
    ctx->pc = 0x292074u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 339), (uint8_t)GPR_U32(ctx, 2));
    // 0x292078: 0xc0a4a00  jal         func_292800
    ctx->pc = 0x292078u;
    SET_GPR_U32(ctx, 31, 0x292080u);
    ctx->pc = 0x29207Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292078u;
    // 0x29207c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292800u, 0x292078u, 0x292080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292080u;
label_292080:
    // 0x292080: 0xc0a4aa4  jal         func_292A90
    ctx->pc = 0x292080u;
    SET_GPR_U32(ctx, 31, 0x292088u);
    ctx->pc = 0x292084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292080u;
    // 0x292084: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292A90u, 0x292080u, 0x292088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292088u;
label_292088:
    // 0x292088: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x292088u;
    {
        const bool branch_taken_0x292088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292088u;
        // 0x29208c: 0x92420154  lbu         $v0, 0x154($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292088) {
            ctx->pc = 0x292098u;
            goto label_292098;
        }
    }
    ctx->pc = 0x292090u;
label_292090:
    // 0x292090: 0xa2420153  sb          $v0, 0x153($s2)
    ctx->pc = 0x292090u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 339), (uint8_t)GPR_U32(ctx, 2));
label_292094:
    // 0x292094: 0x92420154  lbu         $v0, 0x154($s2)
    ctx->pc = 0x292094u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 340)));
label_292098:
    // 0x292098: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x292098u;
    {
        const bool branch_taken_0x292098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292098) {
            ctx->pc = 0x29209Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292098u;
            // 0x29209c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2920E8u;
            goto label_2920e8;
        }
    }
    ctx->pc = 0x2920A0u;
    // 0x2920a0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2920a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2920a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2920a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2920a8: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2920A8u;
    SET_GPR_U32(ctx, 31, 0x2920B0u);
    ctx->pc = 0x2920ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2920A8u;
    // 0x2920ac: 0x24a5b0c0  addiu       $a1, $a1, -0x4F40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2920A8u, 0x2920B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2920B0u;
label_2920b0:
    // 0x2920b0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2920B0u;
    {
        const bool branch_taken_0x2920b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2920b0) {
            ctx->pc = 0x2920B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2920B0u;
            // 0x2920b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2920E0u;
            goto label_2920e0;
        }
    }
    ctx->pc = 0x2920B8u;
    // 0x2920b8: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x2920b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x2920bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2920bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2920c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2920C0u;
    {
        const bool branch_taken_0x2920c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2920C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2920C0u;
        // 0x2920c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2920c0) {
            ctx->pc = 0x2920E8u;
            goto label_2920e8;
        }
    }
    ctx->pc = 0x2920C8u;
    // 0x2920c8: 0x92420155  lbu         $v0, 0x155($s2)
    ctx->pc = 0x2920c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 341)));
    // 0x2920cc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2920CCu;
    {
        const bool branch_taken_0x2920cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2920cc) {
            ctx->pc = 0x2920D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2920CCu;
            // 0x2920d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2920E8u;
            goto label_2920e8;
        }
    }
    ctx->pc = 0x2920D4u;
    // 0x2920d4: 0xc092958  jal         func_24A560
    ctx->pc = 0x2920D4u;
    SET_GPR_U32(ctx, 31, 0x2920DCu);
    ctx->pc = 0x2920D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2920D4u;
    // 0x2920d8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A560u, 0x2920D4u, 0x2920DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2920DCu;
label_2920dc:
    // 0x2920dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2920dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2920e0:
    // 0x2920e0: 0xa2420154  sb          $v0, 0x154($s2)
    ctx->pc = 0x2920e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 340), (uint8_t)GPR_U32(ctx, 2));
label_2920e4:
    // 0x2920e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2920e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2920e8:
    // 0x2920e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2920e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2920ec:
    // 0x2920ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2920ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2920f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2920f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2920f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2920f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2920f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2920f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2920fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2920FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2920FCu;
        // 0x292100: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2920FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292104u;
    // 0x292104: 0x0  nop
    ctx->pc = 0x292104u;
    // NOP
    ctx->pc = 0x292108u;
}
