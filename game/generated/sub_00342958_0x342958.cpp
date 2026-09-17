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

// Function: sub_00342958
// Address: 0x342958 - 0x3429b0
void sub_00342958_0x342958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342958_0x342958");
#endif

    switch (ctx->pc) {
        case 0x34296cu: goto label_34296c;
        case 0x342974u: goto label_342974;
        case 0x34297cu: goto label_34297c;
        case 0x342984u: goto label_342984;
        case 0x34298cu: goto label_34298c;
        case 0x342994u: goto label_342994;
        case 0x34299cu: goto label_34299c;
        default: break;
    }

    ctx->pc = 0x342958u;

    // 0x342958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34295c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34295cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x342960: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x342960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x342964: 0xc0d093e  jal         func_3424F8
    ctx->pc = 0x342964u;
    SET_GPR_U32(ctx, 31, 0x34296Cu);
    ctx->pc = 0x342968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342964u;
    // 0x342968: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3424F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3424F8u, 0x342964u, 0x34296Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34296Cu;
label_34296c:
    // 0x34296c: 0xc0d076a  jal         func_341DA8
    ctx->pc = 0x34296Cu;
    SET_GPR_U32(ctx, 31, 0x342974u);
    ctx->pc = 0x342970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34296Cu;
    // 0x342970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DA8u, 0x34296Cu, 0x342974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342974u;
label_342974:
    // 0x342974: 0xc0d0778  jal         func_341DE0
    ctx->pc = 0x342974u;
    SET_GPR_U32(ctx, 31, 0x34297Cu);
    ctx->pc = 0x342978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342974u;
    // 0x342978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DE0u, 0x342974u, 0x34297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34297Cu;
label_34297c:
    // 0x34297c: 0xc0d094c  jal         func_342530
    ctx->pc = 0x34297Cu;
    SET_GPR_U32(ctx, 31, 0x342984u);
    ctx->pc = 0x342980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34297Cu;
    // 0x342980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342530u, 0x34297Cu, 0x342984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342984u;
label_342984:
    // 0x342984: 0xc0d0958  jal         func_342560
    ctx->pc = 0x342984u;
    SET_GPR_U32(ctx, 31, 0x34298Cu);
    ctx->pc = 0x342988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342984u;
    // 0x342988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342560u, 0x342984u, 0x34298Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34298Cu;
label_34298c:
    // 0x34298c: 0xc0d0964  jal         func_342590
    ctx->pc = 0x34298Cu;
    SET_GPR_U32(ctx, 31, 0x342994u);
    ctx->pc = 0x342990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34298Cu;
    // 0x342990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342590u, 0x34298Cu, 0x342994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342994u;
label_342994:
    // 0x342994: 0xc0d09ca  jal         func_342728
    ctx->pc = 0x342994u;
    SET_GPR_U32(ctx, 31, 0x34299Cu);
    ctx->pc = 0x342998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342994u;
    // 0x342998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342728u, 0x342994u, 0x34299Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34299Cu;
label_34299c:
    // 0x34299c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34299cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3429a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3429a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3429a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3429A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3429A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3429A4u;
        // 0x3429a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3429A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3429ACu;
    // 0x3429ac: 0x0  nop
    ctx->pc = 0x3429acu;
    // NOP
    ctx->pc = 0x3429b0u;
}
