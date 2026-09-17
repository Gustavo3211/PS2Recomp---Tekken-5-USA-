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

// Function: sub_0024A858
// Address: 0x24a858 - 0x24a8b8
void sub_0024A858_0x24a858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A858_0x24a858");
#endif

    switch (ctx->pc) {
        case 0x24a874u: goto label_24a874;
        case 0x24a884u: goto label_24a884;
        case 0x24a8a0u: goto label_24a8a0;
        default: break;
    }

    ctx->pc = 0x24a858u;

    // 0x24a858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24a858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24a85c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24a85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24a860: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24a860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a864: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24a864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24a868: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24a868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24a86c: 0xc0929ae  jal         func_24A6B8
    ctx->pc = 0x24A86Cu;
    SET_GPR_U32(ctx, 31, 0x24A874u);
    ctx->pc = 0x24A870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A86Cu;
    // 0x24a870: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A6B8u, 0x24A86Cu, 0x24A874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A874u;
label_24a874:
    // 0x24a874: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x24A874u;
    {
        const bool branch_taken_0x24a874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a874) {
            ctx->pc = 0x24A878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A874u;
            // 0x24a878: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A8A4u;
            goto label_24a8a4;
        }
    }
    ctx->pc = 0x24A87Cu;
    // 0x24a87c: 0xc092276  jal         func_2489D8
    ctx->pc = 0x24A87Cu;
    SET_GPR_U32(ctx, 31, 0x24A884u);
    ctx->pc = 0x24A880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A87Cu;
    // 0x24a880: 0x86040012  lh          $a0, 0x12($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2489D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2489D8u, 0x24A87Cu, 0x24A884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A884u;
label_24a884:
    // 0x24a884: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24a884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a888: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24a888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a88c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x24a88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24a890: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24a890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a894: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24a894u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a898: 0xc09289a  jal         func_24A268
    ctx->pc = 0x24A898u;
    SET_GPR_U32(ctx, 31, 0x24A8A0u);
    ctx->pc = 0x24A89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A898u;
    // 0x24a89c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A268u, 0x24A898u, 0x24A8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A8A0u;
label_24a8a0:
    // 0x24a8a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24a8a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24a8a4:
    // 0x24a8a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24a8a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24a8a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24a8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x24A8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8ACu;
        // 0x24a8b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A8B4u;
    // 0x24a8b4: 0x0  nop
    ctx->pc = 0x24a8b4u;
    // NOP
    ctx->pc = 0x24a8b8u;
}
