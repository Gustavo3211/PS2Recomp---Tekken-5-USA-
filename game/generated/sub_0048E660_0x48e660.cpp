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

// Function: sub_0048E660
// Address: 0x48e660 - 0x48e6a0
void sub_0048E660_0x48e660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E660_0x48e660");
#endif

    switch (ctx->pc) {
        case 0x48e680u: goto label_48e680;
        case 0x48e698u: goto label_48e698;
        default: break;
    }

    ctx->pc = 0x48e660u;

    // 0x48e660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48e660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48e664: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48e664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48e668: 0x2490007e  addiu       $s0, $a0, 0x7E
    ctx->pc = 0x48e668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 126));
    // 0x48e66c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x48e66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x48e670: 0x86110000  lh          $s1, 0x0($s0)
    ctx->pc = 0x48e670u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48e674: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48e674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x48e678: 0xc1284f0  jal         func_4A13C0
    ctx->pc = 0x48E678u;
    SET_GPR_U32(ctx, 31, 0x48E680u);
    ctx->pc = 0x4A13C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A13C0u, 0x48E678u, 0x48E680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E680u;
label_48e680:
    // 0x48e680: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48e680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48e684: 0xa6110000  sh          $s1, 0x0($s0)
    ctx->pc = 0x48e684u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x48e688: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48e688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e68c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48e68cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48e690: 0x3e00008  jr          $ra
    ctx->pc = 0x48E690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48E694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E690u;
        // 0x48e694: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E698u;
label_48e698:
    // 0x48e698: 0x3e00008  jr          $ra
    ctx->pc = 0x48E698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E6A0u;
}
