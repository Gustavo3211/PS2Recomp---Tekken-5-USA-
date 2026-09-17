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

// Function: sub_00507B80
// Address: 0x507b80 - 0x507bc0
void sub_00507B80_0x507b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00507B80_0x507b80");
#endif

    switch (ctx->pc) {
        case 0x507b90u: goto label_507b90;
        default: break;
    }

    ctx->pc = 0x507b80u;

    // 0x507b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x507b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x507b84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x507b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x507b88: 0xc144ac0  jal         func_512B00
    ctx->pc = 0x507B88u;
    SET_GPR_U32(ctx, 31, 0x507B90u);
    ctx->pc = 0x512B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512B00u, 0x507B88u, 0x507B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x507B90u;
label_507b90:
    // 0x507b90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x507b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507b94: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x507B94u;
    {
        const bool branch_taken_0x507b94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x507B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507B94u;
        // 0x507b98: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507b94) {
            ctx->pc = 0x507BB4u;
            goto label_507bb4;
        }
    }
    ctx->pc = 0x507B9Cu;
    // 0x507b9c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x507b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x507ba0: 0x24427880  addiu       $v0, $v0, 0x7880
    ctx->pc = 0x507ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30848));
    // 0x507ba4: 0xa4830008  sh          $v1, 0x8($a0)
    ctx->pc = 0x507ba4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x507ba8: 0xac820098  sw          $v0, 0x98($a0)
    ctx->pc = 0x507ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 2));
    // 0x507bac: 0xa480009c  sh          $zero, 0x9C($a0)
    ctx->pc = 0x507bacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 156), (uint16_t)GPR_U32(ctx, 0));
    // 0x507bb0: 0xa4800094  sh          $zero, 0x94($a0)
    ctx->pc = 0x507bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 148), (uint16_t)GPR_U32(ctx, 0));
label_507bb4:
    // 0x507bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x507bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x507bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x507BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x507BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507BB8u;
        // 0x507bbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x507BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x507BC0u;
}
