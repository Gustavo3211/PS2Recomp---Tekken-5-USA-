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

// Function: sub_003218E8
// Address: 0x3218e8 - 0x321930
void sub_003218E8_0x3218e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003218E8_0x3218e8");
#endif

    switch (ctx->pc) {
        case 0x32190cu: goto label_32190c;
        default: break;
    }

    ctx->pc = 0x3218e8u;

    // 0x3218e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3218e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3218ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3218ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3218f0: 0x24900040  addiu       $s0, $a0, 0x40
    ctx->pc = 0x3218f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x3218f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3218f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3218f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3218f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3218fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3218fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321900: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x321900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x321904: 0xc0cb130  jal         func_32C4C0
    ctx->pc = 0x321904u;
    SET_GPR_U32(ctx, 31, 0x32190Cu);
    ctx->pc = 0x321908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321904u;
    // 0x321908: 0x26260004  addiu       $a2, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C4C0u, 0x321904u, 0x32190Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32190Cu;
label_32190c:
    // 0x32190c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x32190cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x321910: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x321910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321914: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x321914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321918: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x321918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x32191c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32191cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321920: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x321920u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x321924: 0x3e00008  jr          $ra
    ctx->pc = 0x321924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321924u;
        // 0x321928: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32192Cu;
    // 0x32192c: 0x0  nop
    ctx->pc = 0x32192cu;
    // NOP
    ctx->pc = 0x321930u;
}
