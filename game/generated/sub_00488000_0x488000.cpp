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

// Function: sub_00488000
// Address: 0x488000 - 0x4880b8
void sub_00488000_0x488000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488000_0x488000");
#endif

    switch (ctx->pc) {
        case 0x488024u: goto label_488024;
        case 0x488050u: goto label_488050;
        case 0x488058u: goto label_488058;
        case 0x488078u: goto label_488078;
        default: break;
    }

    ctx->pc = 0x488000u;

    // 0x488000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x488000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x488004: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x488004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x488008: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x488008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x48800c: 0x3c120073  lui         $s2, 0x73
    ctx->pc = 0x48800cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
    // 0x488010: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x488010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x488014: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x488014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x488018: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x488018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x48801c: 0xc13e4ec  jal         func_4F93B0
    ctx->pc = 0x48801Cu;
    SET_GPR_U32(ctx, 31, 0x488024u);
    ctx->pc = 0x488020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48801Cu;
    // 0x488020: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F93B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F93B0u, 0x48801Cu, 0x488024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488024u;
label_488024:
    // 0x488024: 0x2643d680  addiu       $v1, $s2, -0x2980
    ctx->pc = 0x488024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
    // 0x488028: 0x24640006  addiu       $a0, $v1, 0x6
    ctx->pc = 0x488028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x48802c: 0x94650072  lhu         $a1, 0x72($v1)
    ctx->pc = 0x48802cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 114)));
    // 0x488030: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488030u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x488034: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x488034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488038: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x488038u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x48803c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x48803cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x488040: 0xa460006c  sh          $zero, 0x6C($v1)
    ctx->pc = 0x488040u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 108), (uint16_t)GPR_U32(ctx, 0));
    // 0x488044: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x488044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x488048: 0x28c03  sra         $s1, $v0, 16
    ctx->pc = 0x488048u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48804c: 0x0  nop
    ctx->pc = 0x48804cu;
    // NOP
label_488050:
    // 0x488050: 0xc12a6cc  jal         func_4A9B30
    ctx->pc = 0x488050u;
    SET_GPR_U32(ctx, 31, 0x488058u);
    ctx->pc = 0x4A9B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9B30u, 0x488050u, 0x488058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488058u;
label_488058:
    // 0x488058: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x488058u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x48805c: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x48805Cu;
    {
        const bool branch_taken_0x48805c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x488060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48805Cu;
        // 0x488060: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48805c) {
            ctx->pc = 0x488050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_488050;
        }
    }
    ctx->pc = 0x488064u;
    // 0x488064: 0x2650d680  addiu       $s0, $s2, -0x2980
    ctx->pc = 0x488064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
    // 0x488068: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x488068u;
    {
        const bool branch_taken_0x488068 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x48806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488068u;
        // 0x48806c: 0xa602006c  sh          $v0, 0x6C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 108), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488068) {
            ctx->pc = 0x488078u;
            goto label_488078;
        }
    }
    ctx->pc = 0x488070u;
    // 0x488070: 0xc1222e8  jal         func_488BA0
    ctx->pc = 0x488070u;
    SET_GPR_U32(ctx, 31, 0x488078u);
    ctx->pc = 0x488BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488BA0u, 0x488070u, 0x488078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488078u;
label_488078:
    // 0x488078: 0xa6000006  sh          $zero, 0x6($s0)
    ctx->pc = 0x488078u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x48807c: 0x2603009e  addiu       $v1, $s0, 0x9E
    ctx->pc = 0x48807cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 158));
    // 0x488080: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x488080u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x488084: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x488084u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x488088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x488088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48808c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x48808cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x488090: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x488090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x488094: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x488094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x488098: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x488098u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x48809c: 0x3e00008  jr          $ra
    ctx->pc = 0x48809Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4880A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48809Cu;
        // 0x4880a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48809Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4880A4u;
    // 0x4880a4: 0x0  nop
    ctx->pc = 0x4880a4u;
    // NOP
    // 0x4880a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4880A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4880A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4880B0u;
    // 0x4880b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4880B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4880B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4880B8u;
}
