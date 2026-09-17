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

// Function: sub_0011B9D0
// Address: 0x11b9d0 - 0x11bab8
void sub_0011B9D0_0x11b9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B9D0_0x11b9d0");
#endif

    switch (ctx->pc) {
        case 0x11ba40u: goto label_11ba40;
        case 0x11ba58u: goto label_11ba58;
        case 0x11ba70u: goto label_11ba70;
        case 0x11ba8cu: goto label_11ba8c;
        default: break;
    }

    ctx->pc = 0x11b9d0u;

    // 0x11b9d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11b9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11b9d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11b9d8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x11b9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x11b9dc: 0x3c110013  lui         $s1, 0x13
    ctx->pc = 0x11b9dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)19 << 16));
    // 0x11b9e0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x11b9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x11b9e4: 0x8e2227e8  lw          $v0, 0x27E8($s1)
    ctx->pc = 0x11b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1327E8u));
    // 0x11b9e8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x11b9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x11b9ec: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11B9ECu;
    {
        const bool branch_taken_0x11b9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11B9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9ECu;
        // 0x11b9f0: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9ec) {
            ctx->pc = 0x11BA18u;
            goto label_11ba18;
        }
    }
    ctx->pc = 0x11B9F4u;
    // 0x11b9f4: 0x3c100013  lui         $s0, 0x13
    ctx->pc = 0x11b9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)19 << 16));
    // 0x11b9f8: 0x8e0227ec  lw          $v0, 0x27EC($s0)
    ctx->pc = 0x11b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1327ECu));
    // 0x11b9fc: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B9FCu;
    {
        const bool branch_taken_0x11b9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11BA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9FCu;
        // 0x11ba00: 0x3c120013  lui         $s2, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9fc) {
            ctx->pc = 0x11BA1Cu;
            goto label_11ba1c;
        }
    }
    ctx->pc = 0x11BA04u;
    // 0x11ba04: 0x8e4227f0  lw          $v0, 0x27F0($s2)
    ctx->pc = 0x11ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10224)));
    // 0x11ba08: 0x14430025  bne         $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x11BA08u;
    {
        const bool branch_taken_0x11ba08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11BA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA08u;
        // 0x11ba0c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba08) {
            ctx->pc = 0x11BAA0u;
            goto label_11baa0;
        }
    }
    ctx->pc = 0x11BA10u;
    // 0x11ba10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11BA10u;
    {
        const bool branch_taken_0x11ba10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA10u;
        // 0x11ba14: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba10) {
            ctx->pc = 0x11BA24u;
            goto label_11ba24;
        }
    }
    ctx->pc = 0x11BA18u;
label_11ba18:
    // 0x11ba18: 0x3c100013  lui         $s0, 0x13
    ctx->pc = 0x11ba18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)19 << 16));
label_11ba1c:
    // 0x11ba1c: 0x3c120013  lui         $s2, 0x13
    ctx->pc = 0x11ba1cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)19 << 16));
    // 0x11ba20: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x11ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_11ba24:
    // 0x11ba24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11ba24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ba28: 0x2442e588  addiu       $v0, $v0, -0x1A78
    ctx->pc = 0x11ba28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960520));
    // 0x11ba2c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x11ba2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x11ba30: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x11ba30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x11ba34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11ba34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba38: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x11BA38u;
    SET_GPR_U32(ctx, 31, 0x11BA40u);
    ctx->pc = 0x11BA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA38u;
    // 0x11ba3c: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x11BA38u, 0x11BA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA40u;
label_11ba40:
    // 0x11ba40: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x11ba40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x11ba44: 0xae2227e8  sw          $v0, 0x27E8($s1)
    ctx->pc = 0x11ba44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10216), GPR_U32(ctx, 2));
    // 0x11ba48: 0x2463e598  addiu       $v1, $v1, -0x1A68
    ctx->pc = 0x11ba48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960536));
    // 0x11ba4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11ba4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba50: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x11BA50u;
    SET_GPR_U32(ctx, 31, 0x11BA58u);
    ctx->pc = 0x11BA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA50u;
    // 0x11ba54: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x11BA50u, 0x11BA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA58u;
label_11ba58:
    // 0x11ba58: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x11ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x11ba5c: 0xae0227ec  sw          $v0, 0x27EC($s0)
    ctx->pc = 0x11ba5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10220), GPR_U32(ctx, 2));
    // 0x11ba60: 0x2463e5a8  addiu       $v1, $v1, -0x1A58
    ctx->pc = 0x11ba60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960552));
    // 0x11ba64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11ba64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba68: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x11BA68u;
    SET_GPR_U32(ctx, 31, 0x11BA70u);
    ctx->pc = 0x11BA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA68u;
    // 0x11ba6c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x11BA68u, 0x11BA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA70u;
label_11ba70:
    // 0x11ba70: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x11ba70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x11ba74: 0xae4227f0  sw          $v0, 0x27F0($s2)
    ctx->pc = 0x11ba74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10224), GPR_U32(ctx, 2));
    // 0x11ba78: 0x2463e5b8  addiu       $v1, $v1, -0x1A48
    ctx->pc = 0x11ba78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960568));
    // 0x11ba7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11ba7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba80: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x11ba80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x11ba84: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x11BA84u;
    SET_GPR_U32(ctx, 31, 0x11BA8Cu);
    ctx->pc = 0x11BA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA84u;
    // 0x11ba88: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x11BA84u, 0x11BA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA8Cu;
label_11ba8c:
    // 0x11ba8c: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x11ba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x11ba90: 0xac6227e0  sw          $v0, 0x27E0($v1)
    ctx->pc = 0x11ba90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1327E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1327E0u, _value); } while (0);
    // 0x11ba94: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x11ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x11ba98: 0xac4027f4  sw          $zero, 0x27F4($v0)
    ctx->pc = 0x11ba98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1327F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1327F4u, _value); } while (0);
    // 0x11ba9c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x11ba9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_11baa0:
    // 0x11baa0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x11baa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11baa4: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x11baa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11baa8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x11baa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11baac: 0x3e00008  jr          $ra
    ctx->pc = 0x11BAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAACu;
        // 0x11bab0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BAACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BAB4u;
    // 0x11bab4: 0x0  nop
    ctx->pc = 0x11bab4u;
    // NOP
    ctx->pc = 0x11bab8u;
}
