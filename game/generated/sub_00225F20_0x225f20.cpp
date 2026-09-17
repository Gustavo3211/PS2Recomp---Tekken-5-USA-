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

// Function: sub_00225F20
// Address: 0x225f20 - 0x2260a0
void sub_00225F20_0x225f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225F20_0x225f20");
#endif

    switch (ctx->pc) {
        case 0x225fb0u: goto label_225fb0;
        case 0x225fc0u: goto label_225fc0;
        case 0x225fc8u: goto label_225fc8;
        case 0x225fe4u: goto label_225fe4;
        case 0x225ff4u: goto label_225ff4;
        case 0x225ffcu: goto label_225ffc;
        case 0x22601cu: goto label_22601c;
        case 0x22602cu: goto label_22602c;
        case 0x226034u: goto label_226034;
        case 0x226060u: goto label_226060;
        case 0x226070u: goto label_226070;
        default: break;
    }

    ctx->pc = 0x225f20u;

    // 0x225f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x225f24: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x225f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x225f28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x225f2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x225f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225f30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x225f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x225f34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x225f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x225f38: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x225f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x225f3c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x225f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x225f40: 0x82110008  lb          $s1, 0x8($s0)
    ctx->pc = 0x225f40u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x225f44: 0x1222004f  beq         $s1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x225F44u;
    {
        const bool branch_taken_0x225f44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x225F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F44u;
        // 0x225f48: 0x86130006  lh          $s3, 0x6($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225f44) {
            ctx->pc = 0x226084u;
            goto label_226084;
        }
    }
    ctx->pc = 0x225F4Cu;
    // 0x225f4c: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x225f4cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x225f50: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x225f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x225f54: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x225f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x225f58: 0x8c429090  lw          $v0, -0x6F70($v0)
    ctx->pc = 0x225f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938768)));
    // 0x225f5c: 0x5440004a  bnel        $v0, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x225F5Cu;
    {
        const bool branch_taken_0x225f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225f5c) {
            ctx->pc = 0x225F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225F5Cu;
            // 0x225f60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226088u;
            goto label_226088;
        }
    }
    ctx->pc = 0x225F64u;
    // 0x225f64: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x225f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x225f68: 0x1222000b  beq         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x225F68u;
    {
        const bool branch_taken_0x225f68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x225F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F68u;
        // 0x225f6c: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x225f68) {
            ctx->pc = 0x225F98u;
            goto label_225f98;
        }
    }
    ctx->pc = 0x225F70u;
    // 0x225f70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x225F70u;
    {
        const bool branch_taken_0x225f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F70u;
        // 0x225f74: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225f70) {
            ctx->pc = 0x225F88u;
            goto label_225f88;
        }
    }
    ctx->pc = 0x225F78u;
    // 0x225f78: 0x620003e  bltz        $s1, . + 4 + (0x3E << 2)
    ctx->pc = 0x225F78u;
    {
        const bool branch_taken_0x225f78 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x225F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F78u;
        // 0x225f7c: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225f78) {
            ctx->pc = 0x226074u;
            goto label_226074;
        }
    }
    ctx->pc = 0x225F80u;
    // 0x225f80: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x225F80u;
    {
        const bool branch_taken_0x225f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F80u;
        // 0x225f84: 0x86030002  lh          $v1, 0x2($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225f80) {
            ctx->pc = 0x225FD0u;
            goto label_225fd0;
        }
    }
    ctx->pc = 0x225F88u;
label_225f88:
    // 0x225f88: 0x5222001f  beql        $s1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x225F88u;
    {
        const bool branch_taken_0x225f88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x225f88) {
            ctx->pc = 0x225F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225F88u;
            // 0x225f8c: 0x86030002  lh          $v1, 0x2($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226008u;
            goto label_226008;
        }
    }
    ctx->pc = 0x225F90u;
    // 0x225f90: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x225F90u;
    {
        const bool branch_taken_0x225f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225f90) {
            ctx->pc = 0x226034u;
            goto label_226034;
        }
    }
    ctx->pc = 0x225F98u;
label_225f98:
    // 0x225f98: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x225f98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x225f9c: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x225f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x225fa0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x225FA0u;
    {
        const bool branch_taken_0x225fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225fa0) {
            ctx->pc = 0x225FC0u;
            goto label_225fc0;
        }
    }
    ctx->pc = 0x225FA8u;
    // 0x225fa8: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x225FA8u;
    SET_GPR_U32(ctx, 31, 0x225FB0u);
    ctx->pc = 0x225FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225FA8u;
    // 0x225fac: 0x86040004  lh          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x225FA8u, 0x225FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FB0u;
label_225fb0:
    // 0x225fb0: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x225fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x225fb4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x225fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x225fb8: 0xc089278  jal         func_2249E0
    ctx->pc = 0x225FB8u;
    SET_GPR_U32(ctx, 31, 0x225FC0u);
    ctx->pc = 0x225FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225FB8u;
    // 0x225fbc: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2249E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2249E0u, 0x225FB8u, 0x225FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FC0u;
label_225fc0:
    // 0x225fc0: 0xc08922a  jal         func_2248A8
    ctx->pc = 0x225FC0u;
    SET_GPR_U32(ctx, 31, 0x225FC8u);
    ctx->pc = 0x225FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225FC0u;
    // 0x225fc4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2248A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2248A8u, 0x225FC0u, 0x225FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FC8u;
label_225fc8:
    // 0x225fc8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x225FC8u;
    {
        const bool branch_taken_0x225fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225fc8) {
            ctx->pc = 0x226034u;
            goto label_226034;
        }
    }
    ctx->pc = 0x225FD0u;
label_225fd0:
    // 0x225fd0: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x225fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x225fd4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x225FD4u;
    {
        const bool branch_taken_0x225fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225fd4) {
            ctx->pc = 0x225FF4u;
            goto label_225ff4;
        }
    }
    ctx->pc = 0x225FDCu;
    // 0x225fdc: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x225FDCu;
    SET_GPR_U32(ctx, 31, 0x225FE4u);
    ctx->pc = 0x225FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225FDCu;
    // 0x225fe0: 0x86040004  lh          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x225FDCu, 0x225FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FE4u;
label_225fe4:
    // 0x225fe4: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x225fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x225fe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x225fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225fec: 0xc089278  jal         func_2249E0
    ctx->pc = 0x225FECu;
    SET_GPR_U32(ctx, 31, 0x225FF4u);
    ctx->pc = 0x225FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225FECu;
    // 0x225ff0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2249E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2249E0u, 0x225FECu, 0x225FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FF4u;
label_225ff4:
    // 0x225ff4: 0xc08922a  jal         func_2248A8
    ctx->pc = 0x225FF4u;
    SET_GPR_U32(ctx, 31, 0x225FFCu);
    ctx->pc = 0x225FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225FF4u;
    // 0x225ff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2248A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2248A8u, 0x225FF4u, 0x225FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FFCu;
label_225ffc:
    // 0x225ffc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x225FFCu;
    {
        const bool branch_taken_0x225ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225ffc) {
            ctx->pc = 0x226034u;
            goto label_226034;
        }
    }
    ctx->pc = 0x226004u;
    // 0x226004: 0x0  nop
    ctx->pc = 0x226004u;
    // NOP
label_226008:
    // 0x226008: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x226008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x22600c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22600Cu;
    {
        const bool branch_taken_0x22600c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22600c) {
            ctx->pc = 0x22602Cu;
            goto label_22602c;
        }
    }
    ctx->pc = 0x226014u;
    // 0x226014: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x226014u;
    SET_GPR_U32(ctx, 31, 0x22601Cu);
    ctx->pc = 0x226018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226014u;
    // 0x226018: 0x86040004  lh          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x226014u, 0x22601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22601Cu;
label_22601c:
    // 0x22601c: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x22601cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x226020: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x226020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x226024: 0xc089278  jal         func_2249E0
    ctx->pc = 0x226024u;
    SET_GPR_U32(ctx, 31, 0x22602Cu);
    ctx->pc = 0x226028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226024u;
    // 0x226028: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2249E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2249E0u, 0x226024u, 0x22602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22602Cu;
label_22602c:
    // 0x22602c: 0xc08922a  jal         func_2248A8
    ctx->pc = 0x22602Cu;
    SET_GPR_U32(ctx, 31, 0x226034u);
    ctx->pc = 0x226030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22602Cu;
    // 0x226030: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2248A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2248A8u, 0x22602Cu, 0x226034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226034u;
label_226034:
    // 0x226034: 0x620000e  bltz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x226034u;
    {
        const bool branch_taken_0x226034 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x226038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226034u;
        // 0x226038: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x226034) {
            ctx->pc = 0x226070u;
            goto label_226070;
        }
    }
    ctx->pc = 0x22603Cu;
    // 0x22603c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22603Cu;
    {
        const bool branch_taken_0x22603c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22603Cu;
        // 0x226040: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22603c) {
            ctx->pc = 0x226058u;
            goto label_226058;
        }
    }
    ctx->pc = 0x226044u;
    // 0x226044: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x226044u;
    {
        const bool branch_taken_0x226044 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x226048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226044u;
        // 0x226048: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226044) {
            ctx->pc = 0x226068u;
            goto label_226068;
        }
    }
    ctx->pc = 0x22604Cu;
    // 0x22604c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22604Cu;
    {
        const bool branch_taken_0x22604c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22604Cu;
        // 0x226050: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22604c) {
            ctx->pc = 0x226078u;
            goto label_226078;
        }
    }
    ctx->pc = 0x226054u;
    // 0x226054: 0x0  nop
    ctx->pc = 0x226054u;
    // NOP
label_226058:
    // 0x226058: 0xc094708  jal         func_251C20
    ctx->pc = 0x226058u;
    SET_GPR_U32(ctx, 31, 0x226060u);
    ctx->pc = 0x22605Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226058u;
    // 0x22605c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251C20u, 0x226058u, 0x226060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226060u;
label_226060:
    // 0x226060: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x226060u;
    {
        const bool branch_taken_0x226060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226060u;
        // 0x226064: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226060) {
            ctx->pc = 0x226074u;
            goto label_226074;
        }
    }
    ctx->pc = 0x226068u;
label_226068:
    // 0x226068: 0xc093710  jal         func_24DC40
    ctx->pc = 0x226068u;
    SET_GPR_U32(ctx, 31, 0x226070u);
    ctx->pc = 0x24DC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DC40u, 0x226068u, 0x226070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226070u;
label_226070:
    // 0x226070: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x226070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_226074:
    // 0x226074: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x226074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226078:
    // 0x226078: 0x24429090  addiu       $v0, $v0, -0x6F70
    ctx->pc = 0x226078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938768));
    // 0x22607c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x22607cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x226080: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x226080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_226084:
    // 0x226084: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x226084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_226088:
    // 0x226088: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x226088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22608c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22608cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226090: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x226090u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x226094: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x226094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226098: 0x3e00008  jr          $ra
    ctx->pc = 0x226098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226098u;
        // 0x22609c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2260A0u;
}
