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

// Function: sub_00342A08
// Address: 0x342a08 - 0x342a60
void sub_00342A08_0x342a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342A08_0x342a08");
#endif

    switch (ctx->pc) {
        case 0x342a1cu: goto label_342a1c;
        case 0x342a24u: goto label_342a24;
        case 0x342a2cu: goto label_342a2c;
        case 0x342a34u: goto label_342a34;
        case 0x342a3cu: goto label_342a3c;
        case 0x342a44u: goto label_342a44;
        case 0x342a4cu: goto label_342a4c;
        default: break;
    }

    ctx->pc = 0x342a08u;

    // 0x342a08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x342a0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x342a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x342a10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x342a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x342a14: 0xc0d093e  jal         func_3424F8
    ctx->pc = 0x342A14u;
    SET_GPR_U32(ctx, 31, 0x342A1Cu);
    ctx->pc = 0x342A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A14u;
    // 0x342a18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3424F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3424F8u, 0x342A14u, 0x342A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A1Cu;
label_342a1c:
    // 0x342a1c: 0xc0d076a  jal         func_341DA8
    ctx->pc = 0x342A1Cu;
    SET_GPR_U32(ctx, 31, 0x342A24u);
    ctx->pc = 0x342A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A1Cu;
    // 0x342a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DA8u, 0x342A1Cu, 0x342A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A24u;
label_342a24:
    // 0x342a24: 0xc0d094c  jal         func_342530
    ctx->pc = 0x342A24u;
    SET_GPR_U32(ctx, 31, 0x342A2Cu);
    ctx->pc = 0x342A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A24u;
    // 0x342a28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342530u, 0x342A24u, 0x342A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A2Cu;
label_342a2c:
    // 0x342a2c: 0xc0d0958  jal         func_342560
    ctx->pc = 0x342A2Cu;
    SET_GPR_U32(ctx, 31, 0x342A34u);
    ctx->pc = 0x342A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A2Cu;
    // 0x342a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342560u, 0x342A2Cu, 0x342A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A34u;
label_342a34:
    // 0x342a34: 0xc0d0970  jal         func_3425C0
    ctx->pc = 0x342A34u;
    SET_GPR_U32(ctx, 31, 0x342A3Cu);
    ctx->pc = 0x342A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A34u;
    // 0x342a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3425C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3425C0u, 0x342A34u, 0x342A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A3Cu;
label_342a3c:
    // 0x342a3c: 0xc0d09ac  jal         func_3426B0
    ctx->pc = 0x342A3Cu;
    SET_GPR_U32(ctx, 31, 0x342A44u);
    ctx->pc = 0x342A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A3Cu;
    // 0x342a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3426B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3426B0u, 0x342A3Cu, 0x342A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A44u;
label_342a44:
    // 0x342a44: 0xc0d09ca  jal         func_342728
    ctx->pc = 0x342A44u;
    SET_GPR_U32(ctx, 31, 0x342A4Cu);
    ctx->pc = 0x342A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A44u;
    // 0x342a48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342728u, 0x342A44u, 0x342A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A4Cu;
label_342a4c:
    // 0x342a4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x342a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342a50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x342a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x342a54: 0x3e00008  jr          $ra
    ctx->pc = 0x342A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342A54u;
        // 0x342a58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342A5Cu;
    // 0x342a5c: 0x0  nop
    ctx->pc = 0x342a5cu;
    // NOP
    ctx->pc = 0x342a60u;
}
