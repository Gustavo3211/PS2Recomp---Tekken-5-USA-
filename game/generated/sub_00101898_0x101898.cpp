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

// Function: sub_00101898
// Address: 0x101898 - 0x101920
void sub_00101898_0x101898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101898_0x101898");
#endif

    switch (ctx->pc) {
        case 0x1018d8u: goto label_1018d8;
        case 0x1018e8u: goto label_1018e8;
        case 0x1018f0u: goto label_1018f0;
        default: break;
    }

    ctx->pc = 0x101898u;

    // 0x101898: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x101898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10189c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10189cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1018a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1018a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1018a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1018a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1018a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1018a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1018ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1018acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1018b0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1018b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1018b4: 0x3c100100  lui         $s0, 0x100
    ctx->pc = 0x1018b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)256 << 16));
    // 0x1018b8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1018b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1018bc: 0xc6800b  movn        $s0, $a2, $a2
    ctx->pc = 0x1018bcu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
    // 0x1018c0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1018c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1018c4: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x1018c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1018c8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1018C8u;
    {
        const bool branch_taken_0x1018c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1018CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1018C8u;
        // 0x1018cc: 0x3c130015  lui         $s3, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1018c8) {
            ctx->pc = 0x101900u;
            goto label_101900;
        }
    }
    ctx->pc = 0x1018D0u;
    // 0x1018d0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1018d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1018d4: 0x0  nop
    ctx->pc = 0x1018d4u;
    // NOP
label_1018d8:
    // 0x1018d8: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1018D8u;
    {
        const bool branch_taken_0x1018d8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1018d8) {
            ctx->pc = 0x1018F0u;
            goto label_1018f0;
        }
    }
    ctx->pc = 0x1018E0u;
    // 0x1018e0: 0xc044794  jal         func_111E50
    ctx->pc = 0x1018E0u;
    SET_GPR_U32(ctx, 31, 0x1018E8u);
    ctx->pc = 0x1018E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1018E0u;
    // 0x1018e4: 0x2664d368  addiu       $a0, $s3, -0x2C98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294955880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111E50u, 0x1018E0u, 0x1018E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1018E8u;
label_1018e8:
    // 0x1018e8: 0xc0407f0  jal         func_101FC0
    ctx->pc = 0x1018E8u;
    SET_GPR_U32(ctx, 31, 0x1018F0u);
    ctx->pc = 0x1018ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1018E8u;
    // 0x1018ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101FC0u, 0x1018E8u, 0x1018F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1018F0u;
label_1018f0:
    // 0x1018f0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1018f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1018f4: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x1018f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1018f8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1018F8u;
    {
        const bool branch_taken_0x1018f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1018FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1018F8u;
        // 0x1018fc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1018f8) {
            ctx->pc = 0x1018D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1018d8;
        }
    }
    ctx->pc = 0x101900u;
label_101900:
    // 0x101900: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x101900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x101904: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x101904u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101908: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x101908u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10190c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10190cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101910: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x101910u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101914: 0x3e00008  jr          $ra
    ctx->pc = 0x101914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101914u;
        // 0x101918: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10191Cu;
    // 0x10191c: 0x0  nop
    ctx->pc = 0x10191cu;
    // NOP
    ctx->pc = 0x101920u;
}
