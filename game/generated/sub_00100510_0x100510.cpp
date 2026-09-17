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

// Function: sub_00100510
// Address: 0x100510 - 0x100560
void sub_00100510_0x100510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100510_0x100510");
#endif

    switch (ctx->pc) {
        case 0x10052cu: goto label_10052c;
        case 0x100538u: goto label_100538;
        case 0x100548u: goto label_100548;
        case 0x100550u: goto label_100550;
        default: break;
    }

    ctx->pc = 0x100510u;

    // 0x100510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x100510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x100514: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x100514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x100518: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x100518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10051c: 0x8c5083c0  lw          $s0, -0x7C40($v0)
    ctx->pc = 0x10051cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x100520: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x100520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x100524: 0xc089890  jal         func_226240
    ctx->pc = 0x100524u;
    SET_GPR_U32(ctx, 31, 0x10052Cu);
    ctx->pc = 0x100528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100524u;
    // 0x100528: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226240u, 0x100524u, 0x10052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10052Cu;
label_10052c:
    // 0x10052c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10052cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100530: 0xc0400ba  jal         func_1002E8
    ctx->pc = 0x100530u;
    SET_GPR_U32(ctx, 31, 0x100538u);
    ctx->pc = 0x100534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100530u;
    // 0x100534: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1002E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1002E8u, 0x100530u, 0x100538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100538u;
label_100538:
    // 0x100538: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x100538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10053c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x10053cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100540: 0xc089280  jal         func_224A00
    ctx->pc = 0x100540u;
    SET_GPR_U32(ctx, 31, 0x100548u);
    ctx->pc = 0x100544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100540u;
    // 0x100544: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224A00u, 0x100540u, 0x100548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100548u;
label_100548:
    // 0x100548: 0xc08922a  jal         func_2248A8
    ctx->pc = 0x100548u;
    SET_GPR_U32(ctx, 31, 0x100550u);
    ctx->pc = 0x10054Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100548u;
    // 0x10054c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2248A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2248A8u, 0x100548u, 0x100550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100550u;
label_100550:
    // 0x100550: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x100550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100554: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x100554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x100558: 0x3e00008  jr          $ra
    ctx->pc = 0x100558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100558u;
        // 0x10055c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100560u;
}
