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

// Function: sub_001308C0
// Address: 0x1308c0 - 0x130910
void sub_001308C0_0x1308c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001308C0_0x1308c0");
#endif

    switch (ctx->pc) {
        case 0x1308e4u: goto label_1308e4;
        case 0x1308fcu: goto label_1308fc;
        default: break;
    }

    ctx->pc = 0x1308c0u;

    // 0x1308c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1308c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1308c4: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1308c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1308c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1308c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1308cc: 0x245000d0  addiu       $s0, $v0, 0xD0
    ctx->pc = 0x1308ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1308d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1308d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1F00D0u));
    // 0x1308d4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1308D4u;
    {
        const bool branch_taken_0x1308d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1308D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1308D4u;
        // 0x1308d8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1308d4) {
            ctx->pc = 0x1308FCu;
            goto label_1308fc;
        }
    }
    ctx->pc = 0x1308DCu;
    // 0x1308dc: 0xc04c054  jal         func_130150
    ctx->pc = 0x1308DCu;
    SET_GPR_U32(ctx, 31, 0x1308E4u);
    ctx->pc = 0x130150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130150u, 0x1308DCu, 0x1308E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1308E4u;
label_1308e4:
    // 0x1308e4: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x1308e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x1308e8: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x1308e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x1308ec: 0x24a5f448  addiu       $a1, $a1, -0xBB8
    ctx->pc = 0x1308ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964296));
    // 0x1308f0: 0x24c65568  addiu       $a2, $a2, 0x5568
    ctx->pc = 0x1308f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21864));
    // 0x1308f4: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x1308F4u;
    SET_GPR_U32(ctx, 31, 0x1308FCu);
    ctx->pc = 0x1308F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1308F4u;
    // 0x1308f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x1308F4u, 0x1308FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1308FCu;
label_1308fc:
    // 0x1308fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1308fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130904: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x130904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130908: 0x3e00008  jr          $ra
    ctx->pc = 0x130908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130908u;
        // 0x13090c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130910u;
}
