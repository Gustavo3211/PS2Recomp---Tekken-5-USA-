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

// Function: sub_00290C30
// Address: 0x290c30 - 0x290ed8
void sub_00290C30_0x290c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290C30_0x290c30");
#endif

    switch (ctx->pc) {
        case 0x290cb4u: goto label_290cb4;
        case 0x290d10u: goto label_290d10;
        case 0x290d18u: goto label_290d18;
        case 0x290d2cu: goto label_290d2c;
        case 0x290e34u: goto label_290e34;
        case 0x290e50u: goto label_290e50;
        case 0x290e74u: goto label_290e74;
        case 0x290e90u: goto label_290e90;
        default: break;
    }

    ctx->pc = 0x290c30u;

    // 0x290c30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x290c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x290c34: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x290c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x290c38: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x290c38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290c3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x290c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x290c40: 0x26a4015c  addiu       $a0, $s5, 0x15C
    ctx->pc = 0x290c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 348));
    // 0x290c44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x290c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x290c48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x290c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x290c4c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x290c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x290c50: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x290c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x290c54: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x290c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x290c58: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x290c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x290c5c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x290c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x290c60: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x290c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x290c64: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x290c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x290c68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x290C68u;
    {
        const bool branch_taken_0x290c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C68u;
        // 0x290c6c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290c68) {
            ctx->pc = 0x290C80u;
            goto label_290c80;
        }
    }
    ctx->pc = 0x290C70u;
    // 0x290c70: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x290c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x290c74: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x290c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x290c78: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x290C78u;
    {
        const bool branch_taken_0x290c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x290c78) {
            ctx->pc = 0x290C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290C78u;
            // 0x290c7c: 0x86630120  lh          $v1, 0x120($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290C90u;
            goto label_290c90;
        }
    }
    ctx->pc = 0x290C80u;
label_290c80:
    // 0x290c80: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x290c80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x290c84: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x290c84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290c88: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x290c88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x290c8c: 0x86630120  lh          $v1, 0x120($s3)
    ctx->pc = 0x290c8cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x120u));
label_290c90:
    // 0x290c90: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x290c90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290c94: 0x1070000e  beq         $v1, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x290C94u;
    {
        const bool branch_taken_0x290c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x290C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C94u;
        // 0x290c98: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290c94) {
            ctx->pc = 0x290CD0u;
            goto label_290cd0;
        }
    }
    ctx->pc = 0x290C9Cu;
    // 0x290c9c: 0x50400083  beql        $v0, $zero, . + 4 + (0x83 << 2)
    ctx->pc = 0x290C9Cu;
    {
        const bool branch_taken_0x290c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290c9c) {
            ctx->pc = 0x290CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290C9Cu;
            // 0x290ca0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290EACu;
            goto label_290eac;
        }
    }
    ctx->pc = 0x290CA4u;
    // 0x290ca4: 0x54600081  bnel        $v1, $zero, . + 4 + (0x81 << 2)
    ctx->pc = 0x290CA4u;
    {
        const bool branch_taken_0x290ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x290ca4) {
            ctx->pc = 0x290CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290CA4u;
            // 0x290ca8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290EACu;
            goto label_290eac;
        }
    }
    ctx->pc = 0x290CACu;
    // 0x290cac: 0xc0a418c  jal         func_290630
    ctx->pc = 0x290CACu;
    SET_GPR_U32(ctx, 31, 0x290CB4u);
    ctx->pc = 0x290CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290CACu;
    // 0x290cb0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290630u, 0x290CACu, 0x290CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290CB4u;
label_290cb4:
    // 0x290cb4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x290cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x290cb8: 0x8c448868  lw          $a0, -0x7798($v0)
    ctx->pc = 0x290cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A8868u));
    // 0x290cbc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x290cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x290cc0: 0x50830079  beql        $a0, $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x290CC0u;
    {
        const bool branch_taken_0x290cc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x290cc0) {
            ctx->pc = 0x290CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290CC0u;
            // 0x290cc4: 0xa6700120  sh          $s0, 0x120($s3) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 19), 288), (uint16_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290EA8u;
            goto label_290ea8;
        }
    }
    ctx->pc = 0x290CC8u;
    // 0x290cc8: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x290CC8u;
    {
        const bool branch_taken_0x290cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CC8u;
        // 0x290ccc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290cc8) {
            ctx->pc = 0x290EACu;
            goto label_290eac;
        }
    }
    ctx->pc = 0x290CD0u;
label_290cd0:
    // 0x290cd0: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x290cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
    // 0x290cd4: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x290cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x290cd8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x290cd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290cdc: 0x3c1e003c  lui         $fp, 0x3C
    ctx->pc = 0x290cdcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)60 << 16));
    // 0x290ce0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x290ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x290ce4: 0x2417efff  addiu       $s7, $zero, -0x1001
    ctx->pc = 0x290ce4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x290ce8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x290ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x290cec: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x290cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x290cf0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x290cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x290cf4: 0x8e63010c  lw          $v1, 0x10C($s3)
    ctx->pc = 0x290cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x290cf8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x290cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x290cfc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x290cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x290d00: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x290d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x290d04: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x290d04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x290d08: 0x8eb60150  lw          $s6, 0x150($s5)
    ctx->pc = 0x290d08u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 336)));
    // 0x290d0c: 0x0  nop
    ctx->pc = 0x290d0cu;
    // NOP
label_290d10:
    // 0x290d10: 0xc086408  jal         func_219020
    ctx->pc = 0x290D10u;
    SET_GPR_U32(ctx, 31, 0x290D18u);
    ctx->pc = 0x290D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290D10u;
    // 0x290d14: 0x8ec40010  lw          $a0, 0x10($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219020u, 0x290D10u, 0x290D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290D18u;
label_290d18:
    // 0x290d18: 0x27c4bf20  addiu       $a0, $fp, -0x40E0
    ctx->pc = 0x290d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294950688));
    // 0x290d1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x290d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290d20: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x290d20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290d24: 0xc0a59e2  jal         func_296788
    ctx->pc = 0x290D24u;
    SET_GPR_U32(ctx, 31, 0x290D2Cu);
    ctx->pc = 0x290D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290D24u;
    // 0x290d28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296788u, 0x290D24u, 0x290D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290D2Cu;
label_290d2c:
    // 0x290d2c: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x290D2Cu;
    {
        const bool branch_taken_0x290d2c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x290D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D2Cu;
        // 0x290d30: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d2c) {
            ctx->pc = 0x290D40u;
            goto label_290d40;
        }
    }
    ctx->pc = 0x290D34u;
    // 0x290d34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x290D34u;
    {
        const bool branch_taken_0x290d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D34u;
        // 0x290d38: 0x8e720104  lw          $s2, 0x104($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d34) {
            ctx->pc = 0x290D44u;
            goto label_290d44;
        }
    }
    ctx->pc = 0x290D3Cu;
    // 0x290d3c: 0x0  nop
    ctx->pc = 0x290d3cu;
    // NOP
label_290d40:
    // 0x290d40: 0x8e720110  lw          $s2, 0x110($s3)
    ctx->pc = 0x290d40u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_290d44:
    // 0x290d44: 0x56800002  bnel        $s4, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x290D44u;
    {
        const bool branch_taken_0x290d44 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x290d44) {
            ctx->pc = 0x290D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290D44u;
            // 0x290d48: 0x8e710114  lw          $s1, 0x114($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290D50u;
            goto label_290d50;
        }
    }
    ctx->pc = 0x290D4Cu;
    // 0x290d4c: 0x8e710108  lw          $s1, 0x108($s3)
    ctx->pc = 0x290d4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
label_290d50:
    // 0x290d50: 0x50c00050  beql        $a2, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x290D50u;
    {
        const bool branch_taken_0x290d50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x290d50) {
            ctx->pc = 0x290D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290D50u;
            // 0x290d54: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290E94u;
            goto label_290e94;
        }
    }
    ctx->pc = 0x290D58u;
    // 0x290d58: 0x5240004e  beql        $s2, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x290D58u;
    {
        const bool branch_taken_0x290d58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x290d58) {
            ctx->pc = 0x290D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290D58u;
            // 0x290d5c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290E94u;
            goto label_290e94;
        }
    }
    ctx->pc = 0x290D60u;
    // 0x290d60: 0x1220004b  beqz        $s1, . + 4 + (0x4B << 2)
    ctx->pc = 0x290D60u;
    {
        const bool branch_taken_0x290d60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x290D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D60u;
        // 0x290d64: 0x142840  sll         $a1, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d60) {
            ctx->pc = 0x290E90u;
            goto label_290e90;
        }
    }
    ctx->pc = 0x290D68u;
    // 0x290d68: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x290d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x290d6c: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x290d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x290d70: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x290d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x290d74: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x290d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x290d78: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x290d78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x290d7c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x290d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x290d80: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x290d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x290d84: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x290d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x290d88: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x290d88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x290d8c: 0x84a30124  lh          $v1, 0x124($a1)
    ctx->pc = 0x290d8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 292)));
    // 0x290d90: 0x50600040  beql        $v1, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x290D90u;
    {
        const bool branch_taken_0x290d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x290d90) {
            ctx->pc = 0x290D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290D90u;
            // 0x290d94: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290E94u;
            goto label_290e94;
        }
    }
    ctx->pc = 0x290D98u;
    // 0x290d98: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x290D98u;
    {
        const bool branch_taken_0x290d98 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x290D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D98u;
        // 0x290d9c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d98) {
            ctx->pc = 0x290DB0u;
            goto label_290db0;
        }
    }
    ctx->pc = 0x290DA0u;
    // 0x290da0: 0x3a020008  xori        $v0, $s0, 0x8
    ctx->pc = 0x290da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)8);
    // 0x290da4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x290DA4u;
    {
        const bool branch_taken_0x290da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DA4u;
        // 0x290da8: 0x2c450001  sltiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290da4) {
            ctx->pc = 0x290E0Cu;
            goto label_290e0c;
        }
    }
    ctx->pc = 0x290DACu;
    // 0x290dac: 0x0  nop
    ctx->pc = 0x290dacu;
    // NOP
label_290db0:
    // 0x290db0: 0x12020015  beq         $s0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x290DB0u;
    {
        const bool branch_taken_0x290db0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x290DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DB0u;
        // 0x290db4: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290db0) {
            ctx->pc = 0x290E08u;
            goto label_290e08;
        }
    }
    ctx->pc = 0x290DB8u;
    // 0x290db8: 0x12020014  beq         $s0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x290DB8u;
    {
        const bool branch_taken_0x290db8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x290DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DB8u;
        // 0x290dbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290db8) {
            ctx->pc = 0x290E0Cu;
            goto label_290e0c;
        }
    }
    ctx->pc = 0x290DC0u;
    // 0x290dc0: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x290DC0u;
    {
        const bool branch_taken_0x290dc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x290DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DC0u;
        // 0x290dc4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290dc0) {
            ctx->pc = 0x290E0Cu;
            goto label_290e0c;
        }
    }
    ctx->pc = 0x290DC8u;
    // 0x290dc8: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x290DC8u;
    {
        const bool branch_taken_0x290dc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x290DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DC8u;
        // 0x290dcc: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290dc8) {
            ctx->pc = 0x290E0Cu;
            goto label_290e0c;
        }
    }
    ctx->pc = 0x290DD0u;
    // 0x290dd0: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x290DD0u;
    {
        const bool branch_taken_0x290dd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x290DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DD0u;
        // 0x290dd4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290dd0) {
            ctx->pc = 0x290E0Cu;
            goto label_290e0c;
        }
    }
    ctx->pc = 0x290DD8u;
    // 0x290dd8: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x290DD8u;
    {
        const bool branch_taken_0x290dd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x290DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DD8u;
        // 0x290ddc: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290dd8) {
            ctx->pc = 0x290E0Cu;
            goto label_290e0c;
        }
    }
    ctx->pc = 0x290DE0u;
    // 0x290de0: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x290DE0u;
    {
        const bool branch_taken_0x290de0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x290DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DE0u;
        // 0x290de4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290de0) {
            ctx->pc = 0x290E0Cu;
            goto label_290e0c;
        }
    }
    ctx->pc = 0x290DE8u;
    // 0x290de8: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x290DE8u;
    {
        const bool branch_taken_0x290de8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x290DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DE8u;
        // 0x290dec: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290de8) {
            ctx->pc = 0x290E0Cu;
            goto label_290e0c;
        }
    }
    ctx->pc = 0x290DF0u;
    // 0x290df0: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x290DF0u;
    {
        const bool branch_taken_0x290df0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x290DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DF0u;
        // 0x290df4: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290df0) {
            ctx->pc = 0x290E0Cu;
            goto label_290e0c;
        }
    }
    ctx->pc = 0x290DF8u;
    // 0x290df8: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290DF8u;
    {
        const bool branch_taken_0x290df8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x290DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DF8u;
        // 0x290dfc: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290df8) {
            ctx->pc = 0x290E0Cu;
            goto label_290e0c;
        }
    }
    ctx->pc = 0x290E00u;
    // 0x290e00: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x290E00u;
    {
        const bool branch_taken_0x290e00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x290E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E00u;
        // 0x290e04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290e00) {
            ctx->pc = 0x290E0Cu;
            goto label_290e0c;
        }
    }
    ctx->pc = 0x290E08u;
label_290e08:
    // 0x290e08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x290e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290e0c:
    // 0x290e0c: 0x54a00012  bnel        $a1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x290E0Cu;
    {
        const bool branch_taken_0x290e0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x290e0c) {
            ctx->pc = 0x290E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290E0Cu;
            // 0x290e10: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290E58u;
            goto label_290e58;
        }
    }
    ctx->pc = 0x290E14u;
    // 0x290e14: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x290e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x290e18: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x290e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290e1c: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x290e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x290e20: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x290e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x290e24: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x290e24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
    // 0x290e28: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x290e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x290e2c: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x290E2Cu;
    SET_GPR_U32(ctx, 31, 0x290E34u);
    ctx->pc = 0x290E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290E2Cu;
    // 0x290e30: 0xaca60078  sw          $a2, 0x78($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x290E2Cu, 0x290E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290E34u;
label_290e34:
    // 0x290e34: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x290E34u;
    {
        const bool branch_taken_0x290e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290e34) {
            ctx->pc = 0x290E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290E34u;
            // 0x290e38: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290E94u;
            goto label_290e94;
        }
    }
    ctx->pc = 0x290E3Cu;
    // 0x290e3c: 0x8ea40130  lw          $a0, 0x130($s5)
    ctx->pc = 0x290e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 304)));
    // 0x290e40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x290e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290e44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x290e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290e48: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x290E48u;
    SET_GPR_U32(ctx, 31, 0x290E50u);
    ctx->pc = 0x290E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290E48u;
    // 0x290e4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x290E48u, 0x290E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290E50u;
label_290e50:
    // 0x290e50: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x290E50u;
    {
        const bool branch_taken_0x290e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E50u;
        // 0x290e54: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290e50) {
            ctx->pc = 0x290E94u;
            goto label_290e94;
        }
    }
    ctx->pc = 0x290E58u;
label_290e58:
    // 0x290e58: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x290e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290e5c: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x290e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x290e60: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x290e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x290e64: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x290e64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
    // 0x290e68: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x290e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x290e6c: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x290E6Cu;
    SET_GPR_U32(ctx, 31, 0x290E74u);
    ctx->pc = 0x290E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290E6Cu;
    // 0x290e70: 0xaca60078  sw          $a2, 0x78($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x290E6Cu, 0x290E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290E74u;
label_290e74:
    // 0x290e74: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x290E74u;
    {
        const bool branch_taken_0x290e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290e74) {
            ctx->pc = 0x290E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290E74u;
            // 0x290e78: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290E94u;
            goto label_290e94;
        }
    }
    ctx->pc = 0x290E7Cu;
    // 0x290e7c: 0x8ea40130  lw          $a0, 0x130($s5)
    ctx->pc = 0x290e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 304)));
    // 0x290e80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x290e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290e84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x290e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290e88: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x290E88u;
    SET_GPR_U32(ctx, 31, 0x290E90u);
    ctx->pc = 0x290E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290E88u;
    // 0x290e8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x290E88u, 0x290E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290E90u;
label_290e90:
    // 0x290e90: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x290e90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_290e94:
    // 0x290e94: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x290e94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x290e98: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x290E98u;
    {
        const bool branch_taken_0x290e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E98u;
        // 0x290e9c: 0x26d60070  addiu       $s6, $s6, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290e98) {
            ctx->pc = 0x290D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290d10;
        }
    }
    ctx->pc = 0x290EA0u;
    // 0x290ea0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x290ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x290ea4: 0xa6620120  sh          $v0, 0x120($s3)
    ctx->pc = 0x290ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 288), (uint16_t)GPR_U32(ctx, 2));
label_290ea8:
    // 0x290ea8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x290ea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_290eac:
    // 0x290eac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x290eacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x290eb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x290eb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290eb4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x290eb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x290eb8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x290eb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290ebc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x290ebcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x290ec0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x290ec0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290ec4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x290ec4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x290ec8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x290ec8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290ecc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x290eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x290ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x290ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290ED0u;
        // 0x290ed4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290ED8u;
}
