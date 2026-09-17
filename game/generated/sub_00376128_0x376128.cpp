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

// Function: sub_00376128
// Address: 0x376128 - 0x376178
void sub_00376128_0x376128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376128_0x376128");
#endif

    switch (ctx->pc) {
        case 0x37614cu: goto label_37614c;
        case 0x376160u: goto label_376160;
        default: break;
    }

    ctx->pc = 0x376128u;

    // 0x376128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x376128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37612c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37612cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x376130: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x376130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376134: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x376134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x376138: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x376138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37613c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x37613cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x376140: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x376140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x376144: 0xc0dd874  jal         func_3761D0
    ctx->pc = 0x376144u;
    SET_GPR_U32(ctx, 31, 0x37614Cu);
    ctx->pc = 0x376148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376144u;
    // 0x376148: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3761D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3761D0u, 0x376144u, 0x37614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37614Cu;
label_37614c:
    // 0x37614c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37614cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376150: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x376150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376154: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x376154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376158: 0xc0cb152  jal         func_32C548
    ctx->pc = 0x376158u;
    SET_GPR_U32(ctx, 31, 0x376160u);
    ctx->pc = 0x37615Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376158u;
    // 0x37615c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C548u, 0x376158u, 0x376160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376160u;
label_376160:
    // 0x376160: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x376160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376164: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x376164u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x376168: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x376168u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37616c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x37616cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x376170: 0x3e00008  jr          $ra
    ctx->pc = 0x376170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376170u;
        // 0x376174: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376178u;
}
