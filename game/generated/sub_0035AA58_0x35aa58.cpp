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

// Function: sub_0035AA58
// Address: 0x35aa58 - 0x35aad8
void sub_0035AA58_0x35aa58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035AA58_0x35aa58");
#endif

    switch (ctx->pc) {
        case 0x35aa84u: goto label_35aa84;
        case 0x35aa90u: goto label_35aa90;
        case 0x35aab4u: goto label_35aab4;
        default: break;
    }

    ctx->pc = 0x35aa58u;

    // 0x35aa58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35aa58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35aa5c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x35aa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x35aa60: 0x3c11001d  lui         $s1, 0x1D
    ctx->pc = 0x35aa60u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)29 << 16));
    // 0x35aa64: 0x2624cfc0  addiu       $a0, $s1, -0x3040
    ctx->pc = 0x35aa64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954944));
    // 0x35aa68: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35aa68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x35aa6c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x35aa6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x35aa70: 0x3c12001d  lui         $s2, 0x1D
    ctx->pc = 0x35aa70u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)29 << 16));
    // 0x35aa74: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x35aa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x35aa78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x35aa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x35aa7c: 0xc0d6a7c  jal         func_35A9F0
    ctx->pc = 0x35AA7Cu;
    SET_GPR_U32(ctx, 31, 0x35AA84u);
    ctx->pc = 0x35AA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AA7Cu;
    // 0x35aa80: 0x3c13001d  lui         $s3, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)29 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A9F0u, 0x35AA7Cu, 0x35AA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AA84u;
label_35aa84:
    // 0x35aa84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35aa84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aa88: 0x2664cf80  addiu       $a0, $s3, -0x3080
    ctx->pc = 0x35aa88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954880));
    // 0x35aa8c: 0x0  nop
    ctx->pc = 0x35aa8cu;
    // NOP
label_35aa90:
    // 0x35aa90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35aa90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35aa94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35aa94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35aa98: 0x2627cfc0  addiu       $a3, $s1, -0x3040
    ctx->pc = 0x35aa98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954944));
    // 0x35aa9c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x35aa9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aaa0: 0x2649efc0  addiu       $t1, $s2, -0x1040
    ctx->pc = 0x35aaa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963136));
    // 0x35aaa4: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x35aaa4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35aaa8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x35aaa8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aaac: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x35AAACu;
    SET_GPR_U32(ctx, 31, 0x35AAB4u);
    ctx->pc = 0x35AAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AAACu;
    // 0x35aab0: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x35AAACu, 0x35AAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AAB4u;
label_35aab4:
    // 0x35aab4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x35AAB4u;
    {
        const bool branch_taken_0x35aab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35AAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AAB4u;
        // 0x35aab8: 0x2664cf80  addiu       $a0, $s3, -0x3080 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35aab4) {
            ctx->pc = 0x35AA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35aa90;
        }
    }
    ctx->pc = 0x35AABCu;
    // 0x35aabc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35aabcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35aac0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x35aac0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35aac4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x35aac4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35aac8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x35aac8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35aacc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x35aaccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35aad0: 0x3e00008  jr          $ra
    ctx->pc = 0x35AAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AAD0u;
        // 0x35aad4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AAD8u;
}
