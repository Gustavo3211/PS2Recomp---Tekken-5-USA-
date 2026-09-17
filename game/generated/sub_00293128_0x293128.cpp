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

// Function: sub_00293128
// Address: 0x293128 - 0x293168
void sub_00293128_0x293128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293128_0x293128");
#endif

    switch (ctx->pc) {
        case 0x293140u: goto label_293140;
        case 0x293148u: goto label_293148;
        case 0x293150u: goto label_293150;
        case 0x293158u: goto label_293158;
        default: break;
    }

    ctx->pc = 0x293128u;

    // 0x293128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x293128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29312c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29312cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x293130: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x293130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293134: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x293134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x293138: 0xc08b882  jal         func_22E208
    ctx->pc = 0x293138u;
    SET_GPR_U32(ctx, 31, 0x293140u);
    ctx->pc = 0x29313Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293138u;
    // 0x29313c: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x293138u, 0x293140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293140u;
label_293140:
    // 0x293140: 0xc08b882  jal         func_22E208
    ctx->pc = 0x293140u;
    SET_GPR_U32(ctx, 31, 0x293148u);
    ctx->pc = 0x293144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293140u;
    // 0x293144: 0x2404002e  addiu       $a0, $zero, 0x2E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x293140u, 0x293148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293148u;
label_293148:
    // 0x293148: 0xc08b882  jal         func_22E208
    ctx->pc = 0x293148u;
    SET_GPR_U32(ctx, 31, 0x293150u);
    ctx->pc = 0x29314Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293148u;
    // 0x29314c: 0x2404002f  addiu       $a0, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x293148u, 0x293150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293150u;
label_293150:
    // 0x293150: 0xc0a5b52  jal         func_296D48
    ctx->pc = 0x293150u;
    SET_GPR_U32(ctx, 31, 0x293158u);
    ctx->pc = 0x293154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293150u;
    // 0x293154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D48u, 0x293150u, 0x293158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293158u;
label_293158:
    // 0x293158: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x293158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29315c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29315cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x293160: 0x3e00008  jr          $ra
    ctx->pc = 0x293160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293160u;
        // 0x293164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293168u;
}
