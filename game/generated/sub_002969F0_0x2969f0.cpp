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

// Function: sub_002969F0
// Address: 0x2969f0 - 0x296a28
void sub_002969F0_0x2969f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002969F0_0x2969f0");
#endif

    switch (ctx->pc) {
        case 0x296a08u: goto label_296a08;
        case 0x296a10u: goto label_296a10;
        case 0x296a18u: goto label_296a18;
        default: break;
    }

    ctx->pc = 0x2969f0u;

    // 0x2969f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2969f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2969f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2969f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2969f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2969f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2969fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2969fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x296a00: 0xc08b882  jal         func_22E208
    ctx->pc = 0x296A00u;
    SET_GPR_U32(ctx, 31, 0x296A08u);
    ctx->pc = 0x296A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296A00u;
    // 0x296a04: 0x2404002b  addiu       $a0, $zero, 0x2B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x296A00u, 0x296A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296A08u;
label_296a08:
    // 0x296a08: 0xc0a5a0a  jal         func_296828
    ctx->pc = 0x296A08u;
    SET_GPR_U32(ctx, 31, 0x296A10u);
    ctx->pc = 0x296A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296A08u;
    // 0x296a0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296828u, 0x296A08u, 0x296A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296A10u;
label_296a10:
    // 0x296a10: 0xc0a5b52  jal         func_296D48
    ctx->pc = 0x296A10u;
    SET_GPR_U32(ctx, 31, 0x296A18u);
    ctx->pc = 0x296A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296A10u;
    // 0x296a14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D48u, 0x296A10u, 0x296A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296A18u;
label_296a18:
    // 0x296a18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296a18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296a1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x296a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x296a20: 0x3e00008  jr          $ra
    ctx->pc = 0x296A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A20u;
        // 0x296a24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296A28u;
}
