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

// Function: sub_00342220
// Address: 0x342220 - 0x342278
void sub_00342220_0x342220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342220_0x342220");
#endif

    switch (ctx->pc) {
        case 0x342234u: goto label_342234;
        case 0x34223cu: goto label_34223c;
        case 0x342244u: goto label_342244;
        case 0x34224cu: goto label_34224c;
        case 0x342254u: goto label_342254;
        case 0x34225cu: goto label_34225c;
        case 0x342264u: goto label_342264;
        default: break;
    }

    ctx->pc = 0x342220u;

    // 0x342220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x342224: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x342224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x342228: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x342228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34222c: 0xc0d080a  jal         func_342028
    ctx->pc = 0x34222Cu;
    SET_GPR_U32(ctx, 31, 0x342234u);
    ctx->pc = 0x342230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34222Cu;
    // 0x342230: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342028u, 0x34222Cu, 0x342234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342234u;
label_342234:
    // 0x342234: 0xc0d076a  jal         func_341DA8
    ctx->pc = 0x342234u;
    SET_GPR_U32(ctx, 31, 0x34223Cu);
    ctx->pc = 0x342238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342234u;
    // 0x342238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DA8u, 0x342234u, 0x34223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34223Cu;
label_34223c:
    // 0x34223c: 0xc0d0792  jal         func_341E48
    ctx->pc = 0x34223Cu;
    SET_GPR_U32(ctx, 31, 0x342244u);
    ctx->pc = 0x342240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34223Cu;
    // 0x342240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341E48u, 0x34223Cu, 0x342244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342244u;
label_342244:
    // 0x342244: 0xc0d0792  jal         func_341E48
    ctx->pc = 0x342244u;
    SET_GPR_U32(ctx, 31, 0x34224Cu);
    ctx->pc = 0x342248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342244u;
    // 0x342248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341E48u, 0x342244u, 0x34224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34224Cu;
label_34224c:
    // 0x34224c: 0xc0d0818  jal         func_342060
    ctx->pc = 0x34224Cu;
    SET_GPR_U32(ctx, 31, 0x342254u);
    ctx->pc = 0x342250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34224Cu;
    // 0x342250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342060u, 0x34224Cu, 0x342254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342254u;
label_342254:
    // 0x342254: 0xc0d0824  jal         func_342090
    ctx->pc = 0x342254u;
    SET_GPR_U32(ctx, 31, 0x34225Cu);
    ctx->pc = 0x342258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342254u;
    // 0x342258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342090u, 0x342254u, 0x34225Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34225Cu;
label_34225c:
    // 0x34225c: 0xc0d07b6  jal         func_341ED8
    ctx->pc = 0x34225Cu;
    SET_GPR_U32(ctx, 31, 0x342264u);
    ctx->pc = 0x342260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34225Cu;
    // 0x342260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341ED8u, 0x34225Cu, 0x342264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342264u;
label_342264:
    // 0x342264: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x342264u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342268: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x342268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34226c: 0x3e00008  jr          $ra
    ctx->pc = 0x34226Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34226Cu;
        // 0x342270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34226Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342274u;
    // 0x342274: 0x0  nop
    ctx->pc = 0x342274u;
    // NOP
    ctx->pc = 0x342278u;
}
