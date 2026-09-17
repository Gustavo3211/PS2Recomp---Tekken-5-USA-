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

// Function: sub_0022A6E8
// Address: 0x22a6e8 - 0x22a768
void sub_0022A6E8_0x22a6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A6E8_0x22a6e8");
#endif

    switch (ctx->pc) {
        case 0x22a720u: goto label_22a720;
        case 0x22a728u: goto label_22a728;
        case 0x22a740u: goto label_22a740;
        case 0x22a748u: goto label_22a748;
        case 0x22a750u: goto label_22a750;
        default: break;
    }

    ctx->pc = 0x22a6e8u;

    // 0x22a6e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22a6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22a6ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22a6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22a6f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22a6f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a6f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22a6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22a6f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22a6f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a6fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22a6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22a700: 0x84840006  lh          $a0, 0x6($a0)
    ctx->pc = 0x22a700u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x22a704: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x22a704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22a708: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x22a708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x22a70c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22a710: 0x8c4288d0  lw          $v0, -0x7730($v0)
    ctx->pc = 0x22a710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936784)));
    // 0x22a714: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x22a714u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x22a718: 0xc09262e  jal         func_2498B8
    ctx->pc = 0x22A718u;
    SET_GPR_U32(ctx, 31, 0x22A720u);
    ctx->pc = 0x22A71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A718u;
    // 0x22a71c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2498B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2498B8u, 0x22A718u, 0x22A720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A720u;
label_22a720:
    // 0x22a720: 0xc0894e2  jal         func_225388
    ctx->pc = 0x22A720u;
    SET_GPR_U32(ctx, 31, 0x22A728u);
    ctx->pc = 0x225388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225388u, 0x22A720u, 0x22A728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A728u;
label_22a728:
    // 0x22a728: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22a728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a72c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22a72cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a730: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22A730u;
    {
        const bool branch_taken_0x22a730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A730u;
        // 0x22a734: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a730) {
            ctx->pc = 0x22A750u;
            goto label_22a750;
        }
    }
    ctx->pc = 0x22A738u;
    // 0x22a738: 0xc09262e  jal         func_2498B8
    ctx->pc = 0x22A738u;
    SET_GPR_U32(ctx, 31, 0x22A740u);
    ctx->pc = 0x2498B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2498B8u, 0x22A738u, 0x22A740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A740u;
label_22a740:
    // 0x22a740: 0xc0895da  jal         func_225768
    ctx->pc = 0x22A740u;
    SET_GPR_U32(ctx, 31, 0x22A748u);
    ctx->pc = 0x22A744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A740u;
    // 0x22a744: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225768u, 0x22A740u, 0x22A748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A748u;
label_22a748:
    // 0x22a748: 0xc089730  jal         func_225CC0
    ctx->pc = 0x22A748u;
    SET_GPR_U32(ctx, 31, 0x22A750u);
    ctx->pc = 0x22A74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A748u;
    // 0x22a74c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225CC0u, 0x22A748u, 0x22A750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A750u;
label_22a750:
    // 0x22a750: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a754: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22a754u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22a758: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22a758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a75c: 0x3e00008  jr          $ra
    ctx->pc = 0x22A75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A75Cu;
        // 0x22a760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A75Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A764u;
    // 0x22a764: 0x0  nop
    ctx->pc = 0x22a764u;
    // NOP
    ctx->pc = 0x22a768u;
}
