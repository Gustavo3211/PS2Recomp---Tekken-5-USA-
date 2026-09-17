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

// Function: sub_0029BD28
// Address: 0x29bd28 - 0x29bdc8
void sub_0029BD28_0x29bd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BD28_0x29bd28");
#endif

    switch (ctx->pc) {
        case 0x29bd60u: goto label_29bd60;
        case 0x29bd74u: goto label_29bd74;
        case 0x29bd80u: goto label_29bd80;
        default: break;
    }

    ctx->pc = 0x29bd28u;

    // 0x29bd28: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29bd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29bd2c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x29bd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x29bd30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29bd30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd34: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x29bd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29bd38: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29bd38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd3c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x29bd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x29bd40: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29bd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29bd44: 0x2414efff  addiu       $s4, $zero, -0x1001
    ctx->pc = 0x29bd44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29bd48: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x29bd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x29bd4c: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x29bd4cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
    // 0x29bd50: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x29bd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x29bd54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x29bd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29bd58: 0x8e420154  lw          $v0, 0x154($s2)
    ctx->pc = 0x29bd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x29bd5c: 0x24530020  addiu       $s3, $v0, 0x20
    ctx->pc = 0x29bd5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_29bd60:
    // 0x29bd60: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x29bd60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29bd64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29bd68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd6c: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x29BD6Cu;
    SET_GPR_U32(ctx, 31, 0x29BD74u);
    ctx->pc = 0x29BD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BD6Cu;
    // 0x29bd70: 0x26a5c2c0  addiu       $a1, $s5, -0x3D40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x29BD6Cu, 0x29BD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BD74u;
label_29bd74:
    // 0x29bd74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29bd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd78: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29BD78u;
    SET_GPR_U32(ctx, 31, 0x29BD80u);
    ctx->pc = 0x29BD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BD78u;
    // 0x29bd7c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29BD78u, 0x29BD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BD80u;
label_29bd80:
    // 0x29bd80: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x29bd80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x29bd84: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x29bd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x29bd88: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x29bd88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd8c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x29bd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x29bd90: 0x2a240004  slti        $a0, $s1, 0x4
    ctx->pc = 0x29bd90u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x29bd94: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x29bd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x29bd98: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x29bd98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x29bd9c: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x29BD9Cu;
    {
        const bool branch_taken_0x29bd9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BD9Cu;
        // 0x29bda0: 0xac430080  sw          $v1, 0x80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bd9c) {
            ctx->pc = 0x29BD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29bd60;
        }
    }
    ctx->pc = 0x29BDA4u;
    // 0x29bda4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x29bda4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29bda8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x29bda8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29bdac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x29bdacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29bdb0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x29bdb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29bdb4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29bdb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29bdb8: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x29bdb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x29bdbc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x29bdbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29bdc0: 0x3e00008  jr          $ra
    ctx->pc = 0x29BDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BDC0u;
        // 0x29bdc4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BDC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BDC8u;
}
