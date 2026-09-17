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

// Function: sub_002D0550
// Address: 0x2d0550 - 0x2d0588
void sub_002D0550_0x2d0550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0550_0x2d0550");
#endif

    switch (ctx->pc) {
        case 0x2d057cu: goto label_2d057c;
        default: break;
    }

    ctx->pc = 0x2d0550u;

    // 0x2d0550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d0550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d0554: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2d0554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0558: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d055c: 0x90c20202  lbu         $v0, 0x202($a2)
    ctx->pc = 0x2d055cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 514)));
    // 0x2d0560: 0x8cc30310  lw          $v1, 0x310($a2)
    ctx->pc = 0x2d0560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 784)));
    // 0x2d0564: 0xa0c20203  sb          $v0, 0x203($a2)
    ctx->pc = 0x2d0564u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 515), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d0568: 0xa0c00202  sb          $zero, 0x202($a2)
    ctx->pc = 0x2d0568u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 514), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d056c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D056Cu;
    {
        const bool branch_taken_0x2d056c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D056Cu;
        // 0x2d0570: 0x8cc5005c  lw          $a1, 0x5C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d056c) {
            ctx->pc = 0x2D057Cu;
            goto label_2d057c;
        }
    }
    ctx->pc = 0x2D0574u;
    // 0x2d0574: 0xc0b40d6  jal         func_2D0358
    ctx->pc = 0x2D0574u;
    SET_GPR_U32(ctx, 31, 0x2D057Cu);
    ctx->pc = 0x2D0358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0358u, 0x2D0574u, 0x2D057Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D057Cu;
label_2d057c:
    // 0x2d057c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d057cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0580: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0580u;
        // 0x2d0584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0588u;
}
