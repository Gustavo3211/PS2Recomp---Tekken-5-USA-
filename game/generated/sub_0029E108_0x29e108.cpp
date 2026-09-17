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

// Function: sub_0029E108
// Address: 0x29e108 - 0x29e158
void sub_0029E108_0x29e108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E108_0x29e108");
#endif

    switch (ctx->pc) {
        case 0x29e11cu: goto label_29e11c;
        case 0x29e124u: goto label_29e124;
        case 0x29e12cu: goto label_29e12c;
        case 0x29e134u: goto label_29e134;
        case 0x29e13cu: goto label_29e13c;
        case 0x29e144u: goto label_29e144;
        default: break;
    }

    ctx->pc = 0x29e108u;

    // 0x29e108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29e108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29e10c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29e10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29e110: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29e110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29e114: 0xc0a7856  jal         func_29E158
    ctx->pc = 0x29E114u;
    SET_GPR_U32(ctx, 31, 0x29E11Cu);
    ctx->pc = 0x29E118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E114u;
    // 0x29e118: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E158u, 0x29E114u, 0x29E11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E11Cu;
label_29e11c:
    // 0x29e11c: 0xc0a7868  jal         func_29E1A0
    ctx->pc = 0x29E11Cu;
    SET_GPR_U32(ctx, 31, 0x29E124u);
    ctx->pc = 0x29E120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E11Cu;
    // 0x29e120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E1A0u, 0x29E11Cu, 0x29E124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E124u;
label_29e124:
    // 0x29e124: 0xc0a787c  jal         func_29E1F0
    ctx->pc = 0x29E124u;
    SET_GPR_U32(ctx, 31, 0x29E12Cu);
    ctx->pc = 0x29E128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E124u;
    // 0x29e128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E1F0u, 0x29E124u, 0x29E12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E12Cu;
label_29e12c:
    // 0x29e12c: 0xc0a7894  jal         func_29E250
    ctx->pc = 0x29E12Cu;
    SET_GPR_U32(ctx, 31, 0x29E134u);
    ctx->pc = 0x29E130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E12Cu;
    // 0x29e130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E250u, 0x29E12Cu, 0x29E134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E134u;
label_29e134:
    // 0x29e134: 0xc0a78d8  jal         func_29E360
    ctx->pc = 0x29E134u;
    SET_GPR_U32(ctx, 31, 0x29E13Cu);
    ctx->pc = 0x29E138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E134u;
    // 0x29e138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E360u, 0x29E134u, 0x29E13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E13Cu;
label_29e13c:
    // 0x29e13c: 0xc0a790a  jal         func_29E428
    ctx->pc = 0x29E13Cu;
    SET_GPR_U32(ctx, 31, 0x29E144u);
    ctx->pc = 0x29E140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E13Cu;
    // 0x29e140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E428u, 0x29E13Cu, 0x29E144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E144u;
label_29e144:
    // 0x29e144: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29e144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e148: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29e148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29e14c: 0x3e00008  jr          $ra
    ctx->pc = 0x29E14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E14Cu;
        // 0x29e150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E154u;
    // 0x29e154: 0x0  nop
    ctx->pc = 0x29e154u;
    // NOP
    ctx->pc = 0x29e158u;
}
