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

// Function: sub_002726F0
// Address: 0x2726f0 - 0x272728
void sub_002726F0_0x2726f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002726F0_0x2726f0");
#endif

    ctx->pc = 0x2726f0u;

    // 0x2726f0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2726f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2726f4: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x2726f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x2726f8: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2726F8u;
    {
        const bool branch_taken_0x2726f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2726FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2726F8u;
        // 0x2726fc: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2726f8) {
            ctx->pc = 0x272708u;
            goto label_272708;
        }
    }
    ctx->pc = 0x272700u;
    // 0x272700: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x272700u;
    {
        const bool branch_taken_0x272700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272700u;
        // 0x272704: 0xa4620006  sh          $v0, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272700) {
            ctx->pc = 0x272720u;
            goto label_272720;
        }
    }
    ctx->pc = 0x272708u;
label_272708:
    // 0x272708: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x272708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x27270c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27270Cu;
    {
        const bool branch_taken_0x27270c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27270c) {
            ctx->pc = 0x272710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27270Cu;
            // 0x272710: 0xa4600006  sh          $zero, 0x6($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272720u;
            goto label_272720;
        }
    }
    ctx->pc = 0x272714u;
    // 0x272714: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x272714u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x272718: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x272718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x27271c: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x27271cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
label_272720:
    // 0x272720: 0x3e00008  jr          $ra
    ctx->pc = 0x272720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272720u;
        // 0x272724: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272728u;
}
