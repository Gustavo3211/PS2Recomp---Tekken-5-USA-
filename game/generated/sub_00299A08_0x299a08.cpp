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

// Function: sub_00299A08
// Address: 0x299a08 - 0x299ae0
void sub_00299A08_0x299a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299A08_0x299a08");
#endif

    switch (ctx->pc) {
        case 0x299a40u: goto label_299a40;
        case 0x299a60u: goto label_299a60;
        case 0x299a78u: goto label_299a78;
        case 0x299a84u: goto label_299a84;
        default: break;
    }

    ctx->pc = 0x299a08u;

    // 0x299a08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x299a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x299a0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x299a0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299a10: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x299a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x299a14: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x299a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x299a18: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x299a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x299a1c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x299a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x299a20: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x299a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x299a24: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x299a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x299a28: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x299a28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299a2c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x299a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x299a30: 0x2415efff  addiu       $s5, $zero, -0x1001
    ctx->pc = 0x299a30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x299a34: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x299a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x299a38: 0x3c160048  lui         $s6, 0x48
    ctx->pc = 0x299a38u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
    // 0x299a3c: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x299a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_299a40:
    // 0x299a40: 0x8e830154  lw          $v1, 0x154($s4)
    ctx->pc = 0x299a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 340)));
    // 0x299a44: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x299a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x299a48: 0x24f20001  addiu       $s2, $a3, 0x1
    ctx->pc = 0x299a48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x299a4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x299a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x299a50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x299a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299a54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x299a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x299a58: 0x24730028  addiu       $s3, $v1, 0x28
    ctx->pc = 0x299a58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x299a5c: 0x0  nop
    ctx->pc = 0x299a5cu;
    // NOP
label_299a60:
    // 0x299a60: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x299a60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x299a64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x299a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299a68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x299a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299a6c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x299a6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299a70: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x299A70u;
    SET_GPR_U32(ctx, 31, 0x299A78u);
    ctx->pc = 0x299A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299A70u;
    // 0x299a74: 0x26c5c048  addiu       $a1, $s6, -0x3FB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x299A70u, 0x299A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299A78u;
label_299a78:
    // 0x299a78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x299a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299a7c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x299A7Cu;
    SET_GPR_U32(ctx, 31, 0x299A84u);
    ctx->pc = 0x299A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299A7Cu;
    // 0x299a80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x299A7Cu, 0x299A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299A84u;
label_299a84:
    // 0x299a84: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x299a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x299a88: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x299a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x299a8c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x299a8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299a90: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x299a90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x299a94: 0x2a240003  slti        $a0, $s1, 0x3
    ctx->pc = 0x299a94u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x299a98: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x299a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x299a9c: 0x751824  and         $v1, $v1, $s5
    ctx->pc = 0x299a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
    // 0x299aa0: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x299AA0u;
    {
        const bool branch_taken_0x299aa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x299AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299AA0u;
        // 0x299aa4: 0xac430080  sw          $v1, 0x80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299aa0) {
            ctx->pc = 0x299A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299a60;
        }
    }
    ctx->pc = 0x299AA8u;
    // 0x299aa8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x299aa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299aac: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x299aacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x299ab0: 0x5440ffe3  bnel        $v0, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x299AB0u;
    {
        const bool branch_taken_0x299ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299ab0) {
            ctx->pc = 0x299AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299AB0u;
            // 0x299ab4: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299a40;
        }
    }
    ctx->pc = 0x299AB8u;
    // 0x299ab8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x299ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299abc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x299abcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x299ac0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x299ac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299ac4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x299ac4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x299ac8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x299ac8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x299acc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x299accu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x299ad0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x299ad0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x299ad4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x299ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x299ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x299AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299AD8u;
        // 0x299adc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299AE0u;
}
