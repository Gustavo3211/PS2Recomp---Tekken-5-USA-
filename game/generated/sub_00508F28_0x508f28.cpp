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

// Function: sub_00508F28
// Address: 0x508f28 - 0x509020
void sub_00508F28_0x508f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00508F28_0x508f28");
#endif

    switch (ctx->pc) {
        case 0x508fa0u: goto label_508fa0;
        case 0x508ff0u: goto label_508ff0;
        case 0x509000u: goto label_509000;
        case 0x509010u: goto label_509010;
        default: break;
    }

    ctx->pc = 0x508f28u;

    // 0x508f28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x508f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x508f2c: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x508f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x508f30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x508f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x508f34: 0x2484c5bc  addiu       $a0, $a0, -0x3A44
    ctx->pc = 0x508f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952380));
    // 0x508f38: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x508f38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x508f3c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x508f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x508f40: 0x84a2c5b4  lh          $v0, -0x3A4C($a1)
    ctx->pc = 0x508f40u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8EC5B4u));
    // 0x508f44: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x508f44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x508f48: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x508f48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC5BCu));
    // 0x508f4c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x508f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x508f50: 0x94a6c5b8  lhu         $a2, -0x3A48($a1)
    ctx->pc = 0x508f50u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x8EC5B8u));
    // 0x508f54: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x508f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x508f58: 0x24051fff  addiu       $a1, $zero, 0x1FFF
    ctx->pc = 0x508f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8191));
    // 0x508f5c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x508f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x508f60: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x508f60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x508f64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x508f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x508f68: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x508f68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x508f6c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x508f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x508f70: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x508f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x508f74: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x508f74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x508f78: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x508f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x508f7c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x508f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x508f80: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x508f80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x508f84: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x508f84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x508f88: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x508F88u;
    {
        const bool branch_taken_0x508f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x508F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x508F88u;
        // 0x508f8c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508f88) {
            ctx->pc = 0x508F98u;
            goto label_508f98;
        }
    }
    ctx->pc = 0x508F90u;
    // 0x508f90: 0x81422c8  j           func_508B20
    ctx->pc = 0x508F90u;
    ctx->pc = 0x508F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x508F90u;
    // 0x508f94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x508B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x508B20u, 0x508F90u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x508F98u;
label_508f98:
    // 0x508f98: 0xc14224a  jal         func_508928
    ctx->pc = 0x508F98u;
    SET_GPR_U32(ctx, 31, 0x508FA0u);
    ctx->pc = 0x508928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x508928u, 0x508F98u, 0x508FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x508FA0u;
label_508fa0:
    // 0x508fa0: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x508fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x508fa4: 0x9443c5cc  lhu         $v1, -0x3A34($v0)
    ctx->pc = 0x508fa4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x8EC5CCu));
    // 0x508fa8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x508fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x508fac: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x508facu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x508fb0: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x508fb0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
    // 0x508fb4: 0x10640010  beq         $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x508FB4u;
    {
        const bool branch_taken_0x508fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x508FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x508FB4u;
        // 0x508fb8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x508fb4) {
            ctx->pc = 0x508FF8u;
            goto label_508ff8;
        }
    }
    ctx->pc = 0x508FBCu;
    // 0x508fbc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x508FBCu;
    {
        const bool branch_taken_0x508fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x508fbc) {
            ctx->pc = 0x508FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x508FBCu;
            // 0x508fc0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x508FD8u;
            goto label_508fd8;
        }
    }
    ctx->pc = 0x508FC4u;
    // 0x508fc4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x508FC4u;
    {
        const bool branch_taken_0x508fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x508fc4) {
            ctx->pc = 0x508FE8u;
            goto label_508fe8;
        }
    }
    ctx->pc = 0x508FCCu;
    // 0x508fcc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x508FCCu;
    {
        const bool branch_taken_0x508fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x508FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x508FCCu;
        // 0x508fd0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508fcc) {
            ctx->pc = 0x509014u;
            goto label_509014;
        }
    }
    ctx->pc = 0x508FD4u;
    // 0x508fd4: 0x0  nop
    ctx->pc = 0x508fd4u;
    // NOP
label_508fd8:
    // 0x508fd8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x508FD8u;
    {
        const bool branch_taken_0x508fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x508FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x508FD8u;
        // 0x508fdc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508fd8) {
            ctx->pc = 0x509008u;
            goto label_509008;
        }
    }
    ctx->pc = 0x508FE0u;
    // 0x508fe0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x508FE0u;
    {
        const bool branch_taken_0x508fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x508fe0) {
            ctx->pc = 0x509014u;
            goto label_509014;
        }
    }
    ctx->pc = 0x508FE8u;
label_508fe8:
    // 0x508fe8: 0xc14220c  jal         func_508830
    ctx->pc = 0x508FE8u;
    SET_GPR_U32(ctx, 31, 0x508FF0u);
    ctx->pc = 0x508830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x508830u, 0x508FE8u, 0x508FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x508FF0u;
label_508ff0:
    // 0x508ff0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x508FF0u;
    {
        const bool branch_taken_0x508ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x508FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x508FF0u;
        // 0x508ff4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508ff0) {
            ctx->pc = 0x509014u;
            goto label_509014;
        }
    }
    ctx->pc = 0x508FF8u;
label_508ff8:
    // 0x508ff8: 0xc14222a  jal         func_5088A8
    ctx->pc = 0x508FF8u;
    SET_GPR_U32(ctx, 31, 0x509000u);
    ctx->pc = 0x5088A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5088A8u, 0x508FF8u, 0x509000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x509000u;
label_509000:
    // 0x509000: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x509000u;
    {
        const bool branch_taken_0x509000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x509004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x509000u;
        // 0x509004: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509000) {
            ctx->pc = 0x509014u;
            goto label_509014;
        }
    }
    ctx->pc = 0x509008u;
label_509008:
    // 0x509008: 0xc14222c  jal         func_5088B0
    ctx->pc = 0x509008u;
    SET_GPR_U32(ctx, 31, 0x509010u);
    ctx->pc = 0x5088B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5088B0u, 0x509008u, 0x509010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x509010u;
label_509010:
    // 0x509010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x509010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_509014:
    // 0x509014: 0x3e00008  jr          $ra
    ctx->pc = 0x509014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x509018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x509014u;
        // 0x509018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x509014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50901Cu;
    // 0x50901c: 0x0  nop
    ctx->pc = 0x50901cu;
    // NOP
    ctx->pc = 0x509020u;
}
