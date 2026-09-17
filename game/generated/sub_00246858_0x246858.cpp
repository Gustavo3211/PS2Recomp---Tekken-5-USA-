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

// Function: sub_00246858
// Address: 0x246858 - 0x2468a0
void sub_00246858_0x246858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246858_0x246858");
#endif

    switch (ctx->pc) {
        case 0x246874u: goto label_246874;
        case 0x246890u: goto label_246890;
        default: break;
    }

    ctx->pc = 0x246858u;

    // 0x246858: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x246858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x24685c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24685cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x246860: 0x8c436910  lw          $v1, 0x6910($v0)
    ctx->pc = 0x246860u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x166910u));
    // 0x246864: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x246864u;
    {
        const bool branch_taken_0x246864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246864u;
        // 0x246868: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246864) {
            ctx->pc = 0x246888u;
            goto label_246888;
        }
    }
    ctx->pc = 0x24686Cu;
    // 0x24686c: 0xc0899e8  jal         func_2267A0
    ctx->pc = 0x24686Cu;
    SET_GPR_U32(ctx, 31, 0x246874u);
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x24686Cu, 0x246874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246874u;
label_246874:
    // 0x246874: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x246874u;
    {
        const bool branch_taken_0x246874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246874u;
        // 0x246878: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246874) {
            ctx->pc = 0x246888u;
            goto label_246888;
        }
    }
    ctx->pc = 0x24687Cu;
    // 0x24687c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24687cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246880: 0x80cb244  j           func_32C910
    ctx->pc = 0x246880u;
    ctx->pc = 0x246884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246880u;
    // 0x246884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C910u;
    sub_0032C910_0x32c910(rdram, ctx, runtime); return;
    ctx->pc = 0x246888u;
label_246888:
    // 0x246888: 0xc0cb244  jal         func_32C910
    ctx->pc = 0x246888u;
    SET_GPR_U32(ctx, 31, 0x246890u);
    ctx->pc = 0x24688Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246888u;
    // 0x24688c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C910u, 0x246888u, 0x246890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246890u;
label_246890:
    // 0x246890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x246890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246894: 0x3e00008  jr          $ra
    ctx->pc = 0x246894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246894u;
        // 0x246898: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24689Cu;
    // 0x24689c: 0x0  nop
    ctx->pc = 0x24689cu;
    // NOP
    ctx->pc = 0x2468a0u;
}
