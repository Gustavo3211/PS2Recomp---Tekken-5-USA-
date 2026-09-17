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

// Function: sub_0022AE40
// Address: 0x22ae40 - 0x22af18
void sub_0022AE40_0x22ae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AE40_0x22ae40");
#endif

    switch (ctx->pc) {
        case 0x22ae6cu: goto label_22ae6c;
        case 0x22ae74u: goto label_22ae74;
        case 0x22ae88u: goto label_22ae88;
        case 0x22aea0u: goto label_22aea0;
        case 0x22aeacu: goto label_22aeac;
        case 0x22aebcu: goto label_22aebc;
        case 0x22aefcu: goto label_22aefc;
        default: break;
    }

    ctx->pc = 0x22ae40u;

    // 0x22ae40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22ae40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22ae44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22ae44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22ae48: 0x3c100016  lui         $s0, 0x16
    ctx->pc = 0x22ae48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)22 << 16));
    // 0x22ae4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22ae4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22ae50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22ae50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ae54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22ae54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22ae58: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22ae58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ae5c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22ae5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x22ae60: 0x26109258  addiu       $s0, $s0, -0x6DA8
    ctx->pc = 0x22ae60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939224));
    // 0x22ae64: 0xc089c7c  jal         func_2271F0
    ctx->pc = 0x22AE64u;
    SET_GPR_U32(ctx, 31, 0x22AE6Cu);
    ctx->pc = 0x22AE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AE64u;
    // 0x22ae68: 0x82240008  lb          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2271F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2271F0u, 0x22AE64u, 0x22AE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE6Cu;
label_22ae6c:
    // 0x22ae6c: 0xc0897c8  jal         func_225F20
    ctx->pc = 0x22AE6Cu;
    SET_GPR_U32(ctx, 31, 0x22AE74u);
    ctx->pc = 0x22AE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AE6Cu;
    // 0x22ae70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F20u, 0x22AE6Cu, 0x22AE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE74u;
label_22ae74:
    // 0x22ae74: 0x86250006  lh          $a1, 0x6($s1)
    ctx->pc = 0x22ae74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x22ae78: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x22ae78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x22ae7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ae7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ae80: 0xc08a91a  jal         func_22A468
    ctx->pc = 0x22AE80u;
    SET_GPR_U32(ctx, 31, 0x22AE88u);
    ctx->pc = 0x22AE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AE80u;
    // 0x22ae84: 0x24c688d0  addiu       $a2, $a2, -0x7730 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A468u, 0x22AE80u, 0x22AE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE88u;
label_22ae88:
    // 0x22ae88: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x22ae88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22ae8c: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x22ae8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x22ae90: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x22ae90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22ae94: 0x8e280030  lw          $t0, 0x30($s1)
    ctx->pc = 0x22ae94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x22ae98: 0xc0880ec  jal         func_2203B0
    ctx->pc = 0x22AE98u;
    SET_GPR_U32(ctx, 31, 0x22AEA0u);
    ctx->pc = 0x22AE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AE98u;
    // 0x22ae9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2203B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2203B0u, 0x22AE98u, 0x22AEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AEA0u;
label_22aea0:
    // 0x22aea0: 0x86240006  lh          $a0, 0x6($s1)
    ctx->pc = 0x22aea0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x22aea4: 0xc0b875c  jal         func_2E1D70
    ctx->pc = 0x22AEA4u;
    SET_GPR_U32(ctx, 31, 0x22AEACu);
    ctx->pc = 0x22AEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AEA4u;
    // 0x22aea8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1D70u, 0x22AEA4u, 0x22AEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AEACu;
label_22aeac:
    // 0x22aeac: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x22aeacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x22aeb0: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x22aeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x22aeb4: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x22AEB4u;
    SET_GPR_U32(ctx, 31, 0x22AEBCu);
    ctx->pc = 0x22AEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AEB4u;
    // 0x22aeb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x22AEB4u, 0x22AEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AEBCu;
label_22aebc:
    // 0x22aebc: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x22aebcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x22aec0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x22aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x22aec4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22aec8: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x22aec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x22aecc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x22aeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22aed0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x22AED0u;
    {
        const bool branch_taken_0x22aed0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22aed0) {
            ctx->pc = 0x22AED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22AED0u;
            // 0x22aed4: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22AEECu;
            goto label_22aeec;
        }
    }
    ctx->pc = 0x22AED8u;
    // 0x22aed8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x22aed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22aedc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x22aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x22aee0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22AEE0u;
    {
        const bool branch_taken_0x22aee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22aee0) {
            ctx->pc = 0x22AEF4u;
            goto label_22aef4;
        }
    }
    ctx->pc = 0x22AEE8u;
    // 0x22aee8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x22aee8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_22aeec:
    // 0x22aeec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22aeecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aef0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x22aef0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_22aef4:
    // 0x22aef4: 0xc0b8892  jal         func_2E2248
    ctx->pc = 0x22AEF4u;
    SET_GPR_U32(ctx, 31, 0x22AEFCu);
    ctx->pc = 0x2E2248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2248u, 0x22AEF4u, 0x22AEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AEFCu;
label_22aefc:
    // 0x22aefc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22aefcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22af00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22af00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22af04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22af04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22af08: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22af08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22af0c: 0x3e00008  jr          $ra
    ctx->pc = 0x22AF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF0Cu;
        // 0x22af10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AF14u;
    // 0x22af14: 0x0  nop
    ctx->pc = 0x22af14u;
    // NOP
    ctx->pc = 0x22af18u;
}
