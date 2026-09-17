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

// Function: sub_0029FAD8
// Address: 0x29fad8 - 0x29fd20
void sub_0029FAD8_0x29fad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029FAD8_0x29fad8");
#endif

    switch (ctx->pc) {
        case 0x29fb38u: goto label_29fb38;
        case 0x29fbc0u: goto label_29fbc0;
        case 0x29fbdcu: goto label_29fbdc;
        case 0x29fc24u: goto label_29fc24;
        case 0x29fc5cu: goto label_29fc5c;
        case 0x29fc94u: goto label_29fc94;
        case 0x29fcccu: goto label_29fccc;
        default: break;
    }

    ctx->pc = 0x29fad8u;

    // 0x29fad8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x29fad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x29fadc: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x29fadcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x29fae0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x29fae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x29fae4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29fae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fae8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29faec: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x29faecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x29faf0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x29faf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x29faf4: 0x2414efff  addiu       $s4, $zero, -0x1001
    ctx->pc = 0x29faf4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29faf8: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x29faf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x29fafc: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x29fafcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
    // 0x29fb00: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x29fb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x29fb04: 0x3c160048  lui         $s6, 0x48
    ctx->pc = 0x29fb04u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
    // 0x29fb08: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x29fb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x29fb0c: 0x3c170048  lui         $s7, 0x48
    ctx->pc = 0x29fb0cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)72 << 16));
    // 0x29fb10: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x29fb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x29fb14: 0x3c1e0048  lui         $fp, 0x48
    ctx->pc = 0x29fb14u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)72 << 16));
    // 0x29fb18: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x29fb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x29fb1c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29fb1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fb20: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x29fb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x29fb24: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x29fb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x29fb28: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x29fb28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x29fb2c: 0xae460008  sw          $a2, 0x8($s2)
    ctx->pc = 0x29fb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 6));
    // 0x29fb30: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x29fb30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x29fb34: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x29fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_29fb38:
    // 0x29fb38: 0x12620031  beq         $s3, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x29FB38u;
    {
        const bool branch_taken_0x29fb38 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x29FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FB38u;
        // 0x29fb3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fb38) {
            ctx->pc = 0x29FC00u;
            goto label_29fc00;
        }
    }
    ctx->pc = 0x29FB40u;
    // 0x29fb40: 0x12620011  beq         $s3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29FB40u;
    {
        const bool branch_taken_0x29fb40 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x29FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FB40u;
        // 0x29fb44: 0x2a620003  slti        $v0, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fb40) {
            ctx->pc = 0x29FB88u;
            goto label_29fb88;
        }
    }
    ctx->pc = 0x29FB48u;
    // 0x29fb48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29FB48u;
    {
        const bool branch_taken_0x29fb48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FB48u;
        // 0x29fb4c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fb48) {
            ctx->pc = 0x29FB68u;
            goto label_29fb68;
        }
    }
    ctx->pc = 0x29FB50u;
    // 0x29fb50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fb54: 0x52620008  beql        $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29FB54u;
    {
        const bool branch_taken_0x29fb54 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x29fb54) {
            ctx->pc = 0x29FB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29FB54u;
            // 0x29fb58: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29FB78u;
            goto label_29fb78;
        }
    }
    ctx->pc = 0x29FB5Cu;
    // 0x29fb5c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x29FB5Cu;
    {
        const bool branch_taken_0x29fb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FB5Cu;
        // 0x29fb60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fb5c) {
            ctx->pc = 0x29FBB0u;
            goto label_29fbb0;
        }
    }
    ctx->pc = 0x29FB64u;
    // 0x29fb64: 0x0  nop
    ctx->pc = 0x29fb64u;
    // NOP
label_29fb68:
    // 0x29fb68: 0x5262000d  beql        $s3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29FB68u;
    {
        const bool branch_taken_0x29fb68 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x29fb68) {
            ctx->pc = 0x29FB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29FB68u;
            // 0x29fb6c: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29FBA0u;
            goto label_29fba0;
        }
    }
    ctx->pc = 0x29FB70u;
    // 0x29fb70: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x29FB70u;
    {
        const bool branch_taken_0x29fb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FB70u;
        // 0x29fb74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fb70) {
            ctx->pc = 0x29FBB0u;
            goto label_29fbb0;
        }
    }
    ctx->pc = 0x29FB78u;
label_29fb78:
    // 0x29fb78: 0x27c5ca70  addiu       $a1, $fp, -0x3590
    ctx->pc = 0x29fb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294953584));
    // 0x29fb7c: 0x26510010  addiu       $s1, $s2, 0x10
    ctx->pc = 0x29fb7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x29fb80: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x29FB80u;
    {
        const bool branch_taken_0x29fb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FB80u;
        // 0x29fb84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fb80) {
            ctx->pc = 0x29FBD4u;
            goto label_29fbd4;
        }
    }
    ctx->pc = 0x29FB88u;
label_29fb88:
    // 0x29fb88: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x29fb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x29fb8c: 0x26e5ca88  addiu       $a1, $s7, -0x3578
    ctx->pc = 0x29fb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294953608));
    // 0x29fb90: 0x26510014  addiu       $s1, $s2, 0x14
    ctx->pc = 0x29fb90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x29fb94: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x29FB94u;
    {
        const bool branch_taken_0x29fb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FB94u;
        // 0x29fb98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fb94) {
            ctx->pc = 0x29FBD4u;
            goto label_29fbd4;
        }
    }
    ctx->pc = 0x29FB9Cu;
    // 0x29fb9c: 0x0  nop
    ctx->pc = 0x29fb9cu;
    // NOP
label_29fba0:
    // 0x29fba0: 0x26c5caa0  addiu       $a1, $s6, -0x3560
    ctx->pc = 0x29fba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953632));
    // 0x29fba4: 0x2651004c  addiu       $s1, $s2, 0x4C
    ctx->pc = 0x29fba4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    // 0x29fba8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x29FBA8u;
    {
        const bool branch_taken_0x29fba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FBA8u;
        // 0x29fbac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fba8) {
            ctx->pc = 0x29FBD4u;
            goto label_29fbd4;
        }
    }
    ctx->pc = 0x29FBB0u;
label_29fbb0:
    // 0x29fbb0: 0x26a5cab8  addiu       $a1, $s5, -0x3548
    ctx->pc = 0x29fbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294953656));
    // 0x29fbb4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x29fbb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fbb8: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x29FBB8u;
    SET_GPR_U32(ctx, 31, 0x29FBC0u);
    ctx->pc = 0x29FBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FBB8u;
    // 0x29fbbc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x29FBB8u, 0x29FBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FBC0u;
label_29fbc0:
    // 0x29fbc0: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x29fbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x29fbc4: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x29fbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x29fbc8: 0x2642000c  addiu       $v0, $s2, 0xC
    ctx->pc = 0x29fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x29fbcc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29fbccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fbd0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x29fbd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29fbd4:
    // 0x29fbd4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x29FBD4u;
    SET_GPR_U32(ctx, 31, 0x29FBDCu);
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x29FBD4u, 0x29FBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FBDCu;
label_29fbdc:
    // 0x29fbdc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x29FBDCu;
    {
        const bool branch_taken_0x29fbdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fbdc) {
            ctx->pc = 0x29FBE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29FBDCu;
            // 0x29fbe0: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29FC00u;
            goto label_29fc00;
        }
    }
    ctx->pc = 0x29FBE4u;
    // 0x29fbe4: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x29fbe4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29fbe8: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29FBE8u;
    {
        const bool branch_taken_0x29fbe8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fbe8) {
            ctx->pc = 0x29FBECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29FBE8u;
            // 0x29fbec: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29FC00u;
            goto label_29fc00;
        }
    }
    ctx->pc = 0x29FBF0u;
    // 0x29fbf0: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x29fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x29fbf4: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x29fbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x29fbf8: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x29fbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x29fbfc: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x29fbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_29fc00:
    // 0x29fc00: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29fc00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29fc04: 0x2a620011  slti        $v0, $s3, 0x11
    ctx->pc = 0x29fc04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x29fc08: 0x5440ffcb  bnel        $v0, $zero, . + 4 + (-0x35 << 2)
    ctx->pc = 0x29FC08u;
    {
        const bool branch_taken_0x29fc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fc08) {
            ctx->pc = 0x29FC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29FC08u;
            // 0x29fc0c: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29FB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fb38;
        }
    }
    ctx->pc = 0x29FC10u;
    // 0x29fc10: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29fc10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29fc14: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x29fc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x29fc18: 0x24a5cad0  addiu       $a1, $a1, -0x3530
    ctx->pc = 0x29fc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953680));
    // 0x29fc1c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x29FC1Cu;
    SET_GPR_U32(ctx, 31, 0x29FC24u);
    ctx->pc = 0x29FC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FC1Cu;
    // 0x29fc20: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x29FC1Cu, 0x29FC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FC24u;
label_29fc24:
    // 0x29fc24: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x29FC24u;
    {
        const bool branch_taken_0x29fc24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fc24) {
            ctx->pc = 0x29FC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29FC24u;
            // 0x29fc28: 0xae500050  sw          $s0, 0x50($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29FC48u;
            goto label_29fc48;
        }
    }
    ctx->pc = 0x29FC2Cu;
    // 0x29fc2c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x29fc2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29fc30: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29FC30u;
    {
        const bool branch_taken_0x29fc30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FC30u;
        // 0x29fc34: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fc30) {
            ctx->pc = 0x29FC44u;
            goto label_29fc44;
        }
    }
    ctx->pc = 0x29FC38u;
    // 0x29fc38: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x29fc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x29fc3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29fc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29fc40: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x29fc40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_29fc44:
    // 0x29fc44: 0xae500050  sw          $s0, 0x50($s2)
    ctx->pc = 0x29fc44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 16));
label_29fc48:
    // 0x29fc48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29fc48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fc4c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29fc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29fc50: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x29fc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x29fc54: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x29FC54u;
    SET_GPR_U32(ctx, 31, 0x29FC5Cu);
    ctx->pc = 0x29FC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FC54u;
    // 0x29fc58: 0x24a5cae8  addiu       $a1, $a1, -0x3518 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x29FC54u, 0x29FC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FC5Cu;
label_29fc5c:
    // 0x29fc5c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x29FC5Cu;
    {
        const bool branch_taken_0x29fc5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fc5c) {
            ctx->pc = 0x29FC60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29FC5Cu;
            // 0x29fc60: 0xae500054  sw          $s0, 0x54($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29FC80u;
            goto label_29fc80;
        }
    }
    ctx->pc = 0x29FC64u;
    // 0x29fc64: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x29fc64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29fc68: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29FC68u;
    {
        const bool branch_taken_0x29fc68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FC68u;
        // 0x29fc6c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fc68) {
            ctx->pc = 0x29FC7Cu;
            goto label_29fc7c;
        }
    }
    ctx->pc = 0x29FC70u;
    // 0x29fc70: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x29fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x29fc74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29fc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29fc78: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x29fc78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_29fc7c:
    // 0x29fc7c: 0xae500054  sw          $s0, 0x54($s2)
    ctx->pc = 0x29fc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 16));
label_29fc80:
    // 0x29fc80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29fc80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fc84: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29fc84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29fc88: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x29fc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x29fc8c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x29FC8Cu;
    SET_GPR_U32(ctx, 31, 0x29FC94u);
    ctx->pc = 0x29FC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FC8Cu;
    // 0x29fc90: 0x24a5cb00  addiu       $a1, $a1, -0x3500 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x29FC8Cu, 0x29FC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FC94u;
label_29fc94:
    // 0x29fc94: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x29FC94u;
    {
        const bool branch_taken_0x29fc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fc94) {
            ctx->pc = 0x29FC98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29FC94u;
            // 0x29fc98: 0xae500058  sw          $s0, 0x58($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29FCB8u;
            goto label_29fcb8;
        }
    }
    ctx->pc = 0x29FC9Cu;
    // 0x29fc9c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x29fc9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29fca0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29FCA0u;
    {
        const bool branch_taken_0x29fca0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FCA0u;
        // 0x29fca4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fca0) {
            ctx->pc = 0x29FCB4u;
            goto label_29fcb4;
        }
    }
    ctx->pc = 0x29FCA8u;
    // 0x29fca8: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x29fca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x29fcac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29fcacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29fcb0: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x29fcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_29fcb4:
    // 0x29fcb4: 0xae500058  sw          $s0, 0x58($s2)
    ctx->pc = 0x29fcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 16));
label_29fcb8:
    // 0x29fcb8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29fcb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fcbc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29fcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29fcc0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x29fcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x29fcc4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x29FCC4u;
    SET_GPR_U32(ctx, 31, 0x29FCCCu);
    ctx->pc = 0x29FCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FCC4u;
    // 0x29fcc8: 0x24a5cb18  addiu       $a1, $a1, -0x34E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x29FCC4u, 0x29FCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FCCCu;
label_29fccc:
    // 0x29fccc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x29FCCCu;
    {
        const bool branch_taken_0x29fccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fccc) {
            ctx->pc = 0x29FCD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29FCCCu;
            // 0x29fcd0: 0xae50005c  sw          $s0, 0x5C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29FCF0u;
            goto label_29fcf0;
        }
    }
    ctx->pc = 0x29FCD4u;
    // 0x29fcd4: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x29fcd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29fcd8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29FCD8u;
    {
        const bool branch_taken_0x29fcd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FCD8u;
        // 0x29fcdc: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fcd8) {
            ctx->pc = 0x29FCECu;
            goto label_29fcec;
        }
    }
    ctx->pc = 0x29FCE0u;
    // 0x29fce0: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x29fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x29fce4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29fce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29fce8: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x29fce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_29fcec:
    // 0x29fcec: 0xae50005c  sw          $s0, 0x5C($s2)
    ctx->pc = 0x29fcecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 16));
label_29fcf0:
    // 0x29fcf0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x29fcf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x29fcf4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x29fcf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29fcf8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x29fcf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29fcfc: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x29fcfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fd00: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x29fd00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29fd04: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x29fd04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x29fd08: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x29fd08u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29fd0c: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x29fd0cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x29fd10: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x29fd10u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29fd14: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x29fd14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x29fd18: 0x3e00008  jr          $ra
    ctx->pc = 0x29FD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD18u;
        // 0x29fd1c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FD18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29FD20u;
}
