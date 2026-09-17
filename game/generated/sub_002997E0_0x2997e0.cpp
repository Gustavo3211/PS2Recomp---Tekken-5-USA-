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

// Function: sub_002997E0
// Address: 0x2997e0 - 0x299840
void sub_002997E0_0x2997e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002997E0_0x2997e0");
#endif

    switch (ctx->pc) {
        case 0x2997f4u: goto label_2997f4;
        case 0x2997fcu: goto label_2997fc;
        case 0x299804u: goto label_299804;
        case 0x29980cu: goto label_29980c;
        case 0x299814u: goto label_299814;
        case 0x29981cu: goto label_29981c;
        case 0x299824u: goto label_299824;
        case 0x29982cu: goto label_29982c;
        default: break;
    }

    ctx->pc = 0x2997e0u;

    // 0x2997e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2997e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2997e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2997e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2997e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2997e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2997ec: 0xc0a6610  jal         func_299840
    ctx->pc = 0x2997ECu;
    SET_GPR_U32(ctx, 31, 0x2997F4u);
    ctx->pc = 0x2997F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2997ECu;
    // 0x2997f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299840u, 0x2997ECu, 0x2997F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2997F4u;
label_2997f4:
    // 0x2997f4: 0xc0a665a  jal         func_299968
    ctx->pc = 0x2997F4u;
    SET_GPR_U32(ctx, 31, 0x2997FCu);
    ctx->pc = 0x2997F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2997F4u;
    // 0x2997f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299968u, 0x2997F4u, 0x2997FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2997FCu;
label_2997fc:
    // 0x2997fc: 0xc0a6682  jal         func_299A08
    ctx->pc = 0x2997FCu;
    SET_GPR_U32(ctx, 31, 0x299804u);
    ctx->pc = 0x299800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2997FCu;
    // 0x299800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299A08u, 0x2997FCu, 0x299804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299804u;
label_299804:
    // 0x299804: 0xc0a66b8  jal         func_299AE0
    ctx->pc = 0x299804u;
    SET_GPR_U32(ctx, 31, 0x29980Cu);
    ctx->pc = 0x299808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299804u;
    // 0x299808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299AE0u, 0x299804u, 0x29980Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29980Cu;
label_29980c:
    // 0x29980c: 0xc0a670a  jal         func_299C28
    ctx->pc = 0x29980Cu;
    SET_GPR_U32(ctx, 31, 0x299814u);
    ctx->pc = 0x299810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29980Cu;
    // 0x299810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299C28u, 0x29980Cu, 0x299814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299814u;
label_299814:
    // 0x299814: 0xc0a6750  jal         func_299D40
    ctx->pc = 0x299814u;
    SET_GPR_U32(ctx, 31, 0x29981Cu);
    ctx->pc = 0x299818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299814u;
    // 0x299818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299D40u, 0x299814u, 0x29981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29981Cu;
label_29981c:
    // 0x29981c: 0xc0a67a0  jal         func_299E80
    ctx->pc = 0x29981Cu;
    SET_GPR_U32(ctx, 31, 0x299824u);
    ctx->pc = 0x299820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29981Cu;
    // 0x299820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299E80u, 0x29981Cu, 0x299824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299824u;
label_299824:
    // 0x299824: 0xc0a67c8  jal         func_299F20
    ctx->pc = 0x299824u;
    SET_GPR_U32(ctx, 31, 0x29982Cu);
    ctx->pc = 0x299828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299824u;
    // 0x299828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299F20u, 0x299824u, 0x29982Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29982Cu;
label_29982c:
    // 0x29982c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29982cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299830: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x299830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x299834: 0x3e00008  jr          $ra
    ctx->pc = 0x299834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299834u;
        // 0x299838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29983Cu;
    // 0x29983c: 0x0  nop
    ctx->pc = 0x29983cu;
    // NOP
    ctx->pc = 0x299840u;
}
