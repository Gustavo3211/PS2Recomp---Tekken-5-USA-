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

// Function: sub_00248488
// Address: 0x248488 - 0x2484e0
void sub_00248488_0x248488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248488_0x248488");
#endif

    switch (ctx->pc) {
        case 0x2484bcu: goto label_2484bc;
        case 0x2484ccu: goto label_2484cc;
        default: break;
    }

    ctx->pc = 0x248488u;

    // 0x248488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24848c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24848cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x248490: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x248490u;
    {
        const bool branch_taken_0x248490 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x248494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248490u;
        // 0x248494: 0xe7b40008  swc1        $f20, 0x8($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x248490) {
            ctx->pc = 0x2484A8u;
            goto label_2484a8;
        }
    }
    ctx->pc = 0x248498u;
    // 0x248498: 0xc794886c  lwc1        $f20, -0x7794($gp)
    ctx->pc = 0x248498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24849c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24849Cu;
    {
        const bool branch_taken_0x24849c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2484A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24849Cu;
        // 0x2484a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24849c) {
            ctx->pc = 0x2484B0u;
            goto label_2484b0;
        }
    }
    ctx->pc = 0x2484A4u;
    // 0x2484a4: 0x0  nop
    ctx->pc = 0x2484a4u;
    // NOP
label_2484a8:
    // 0x2484a8: 0xc7948870  lwc1        $f20, -0x7790($gp)
    ctx->pc = 0x2484a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2484ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2484acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2484b0:
    // 0x2484b0: 0xaf82a9bc  sw          $v0, -0x5644($gp)
    ctx->pc = 0x2484b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945212), GPR_U32(ctx, 2));
    // 0x2484b4: 0xc0d630a  jal         func_358C28
    ctx->pc = 0x2484B4u;
    SET_GPR_U32(ctx, 31, 0x2484BCu);
    ctx->pc = 0x2484B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2484B4u;
    // 0x2484b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358C28u, 0x2484B4u, 0x2484BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2484BCu;
label_2484bc:
    // 0x2484bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2484bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2484c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2484c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2484c4: 0xc0d601e  jal         func_358078
    ctx->pc = 0x2484C4u;
    SET_GPR_U32(ctx, 31, 0x2484CCu);
    ctx->pc = 0x2484C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2484C4u;
    // 0x2484c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358078u, 0x2484C4u, 0x2484CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2484CCu;
label_2484cc:
    // 0x2484cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2484ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2484d0: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x2484d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2484d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2484D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2484D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484D4u;
        // 0x2484d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2484D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2484DCu;
    // 0x2484dc: 0x0  nop
    ctx->pc = 0x2484dcu;
    // NOP
    ctx->pc = 0x2484e0u;
}
