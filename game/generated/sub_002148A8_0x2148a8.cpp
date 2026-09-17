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

// Function: sub_002148A8
// Address: 0x2148a8 - 0x2148e0
void sub_002148A8_0x2148a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002148A8_0x2148a8");
#endif

    switch (ctx->pc) {
        case 0x2148d4u: goto label_2148d4;
        default: break;
    }

    ctx->pc = 0x2148a8u;

    // 0x2148a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2148a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2148ac: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2148acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2148b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2148b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2148b4: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2148b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2148b8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2148b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2148bc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2148bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2148c0: 0x14660004  bne         $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2148C0u;
    {
        const bool branch_taken_0x2148c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x2148C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148C0u;
        // 0x2148c4: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148c0) {
            ctx->pc = 0x2148D4u;
            goto label_2148d4;
        }
    }
    ctx->pc = 0x2148C8u;
    // 0x2148c8: 0xace50054  sw          $a1, 0x54($a3)
    ctx->pc = 0x2148c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 84), GPR_U32(ctx, 5));
    // 0x2148cc: 0xc085214  jal         func_214850
    ctx->pc = 0x2148CCu;
    SET_GPR_U32(ctx, 31, 0x2148D4u);
    ctx->pc = 0x2148D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2148CCu;
    // 0x2148d0: 0xa040005c  sb          $zero, 0x5C($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 92), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214850u, 0x2148CCu, 0x2148D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2148D4u;
label_2148d4:
    // 0x2148d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2148d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2148d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2148D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2148DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148D8u;
        // 0x2148dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2148D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2148E0u;
}
