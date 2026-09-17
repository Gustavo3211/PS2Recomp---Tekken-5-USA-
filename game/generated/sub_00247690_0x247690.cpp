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

// Function: sub_00247690
// Address: 0x247690 - 0x2476f8
void sub_00247690_0x247690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247690_0x247690");
#endif

    switch (ctx->pc) {
        case 0x2476b8u: goto label_2476b8;
        case 0x2476c4u: goto label_2476c4;
        default: break;
    }

    ctx->pc = 0x247690u;

    // 0x247690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x247690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x247694: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x247694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x247698: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x247698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24769c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x24769cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2476a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2476a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2476a4: 0x24516ec0  addiu       $s1, $v0, 0x6EC0
    ctx->pc = 0x2476a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 28352));
    // 0x2476a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2476a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2476ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2476acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2476b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2476b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2476b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2476b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2476b8:
    // 0x2476b8: 0x26310048  addiu       $s1, $s1, 0x48
    ctx->pc = 0x2476b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x2476bc: 0xc091c8a  jal         func_247228
    ctx->pc = 0x2476BCu;
    SET_GPR_U32(ctx, 31, 0x2476C4u);
    ctx->pc = 0x2476C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2476BCu;
    // 0x2476c0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247228u, 0x2476BCu, 0x2476C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2476C4u;
label_2476c4:
    // 0x2476c4: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x2476c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2476c8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2476C8u;
    {
        const bool branch_taken_0x2476c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2476CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2476C8u;
        // 0x2476cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2476c8) {
            ctx->pc = 0x2476B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2476b8;
        }
    }
    ctx->pc = 0x2476D0u;
    // 0x2476d0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2476d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2476d4: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x2476d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2476d8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2476D8u;
    {
        const bool branch_taken_0x2476d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2476DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2476D8u;
        // 0x2476dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2476d8) {
            ctx->pc = 0x2476B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2476b8;
        }
    }
    ctx->pc = 0x2476E0u;
    // 0x2476e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2476e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2476e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2476e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2476e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2476e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2476ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2476ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2476f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2476F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2476F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2476F0u;
        // 0x2476f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2476F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2476F8u;
}
