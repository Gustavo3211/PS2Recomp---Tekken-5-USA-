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

// Function: sub_0033F378
// Address: 0x33f378 - 0x33f3f0
void sub_0033F378_0x33f378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F378_0x33f378");
#endif

    switch (ctx->pc) {
        case 0x33f39cu: goto label_33f39c;
        case 0x33f3a4u: goto label_33f3a4;
        case 0x33f3acu: goto label_33f3ac;
        case 0x33f3b4u: goto label_33f3b4;
        case 0x33f3c0u: goto label_33f3c0;
        default: break;
    }

    ctx->pc = 0x33f378u;

    // 0x33f378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33f378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33f37c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x33f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x33f380: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33f380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33f384: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33f384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f388: 0x24421d88  addiu       $v0, $v0, 0x1D88
    ctx->pc = 0x33f388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7560));
    // 0x33f38c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33f38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33f390: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x33f390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x33f394: 0xc0cfcfc  jal         func_33F3F0
    ctx->pc = 0x33F394u;
    SET_GPR_U32(ctx, 31, 0x33F39Cu);
    ctx->pc = 0x33F398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F394u;
    // 0x33f398: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F3F0u, 0x33F394u, 0x33F39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F39Cu;
label_33f39c:
    // 0x33f39c: 0xc0cfdba  jal         func_33F6E8
    ctx->pc = 0x33F39Cu;
    SET_GPR_U32(ctx, 31, 0x33F3A4u);
    ctx->pc = 0x33F3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F39Cu;
    // 0x33f3a0: 0x260400d4  addiu       $a0, $s0, 0xD4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 212));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F6E8u, 0x33F39Cu, 0x33F3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F3A4u;
label_33f3a4:
    // 0x33f3a4: 0xc0d0198  jal         func_340660
    ctx->pc = 0x33F3A4u;
    SET_GPR_U32(ctx, 31, 0x33F3ACu);
    ctx->pc = 0x33F3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F3A4u;
    // 0x33f3a8: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340660u, 0x33F3A4u, 0x33F3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F3ACu;
label_33f3ac:
    // 0x33f3ac: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x33F3ACu;
    SET_GPR_U32(ctx, 31, 0x33F3B4u);
    ctx->pc = 0x33F3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F3ACu;
    // 0x33f3b0: 0x260401f0  addiu       $a0, $s0, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x33F3ACu, 0x33F3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F3B4u;
label_33f3b4:
    // 0x33f3b4: 0xae0001f4  sw          $zero, 0x1F4($s0)
    ctx->pc = 0x33f3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 0));
    // 0x33f3b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x33f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33f3bc: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x33f3bcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_33f3c0:
    // 0x33f3c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33f3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33f3c4: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x33f3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x33f3c8: 0x0  nop
    ctx->pc = 0x33f3c8u;
    // NOP
    // 0x33f3cc: 0x0  nop
    ctx->pc = 0x33f3ccu;
    // NOP
    // 0x33f3d0: 0x0  nop
    ctx->pc = 0x33f3d0u;
    // NOP
    // 0x33f3d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33F3D4u;
    {
        const bool branch_taken_0x33f3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F3D4u;
        // 0x33f3d8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f3d4) {
            ctx->pc = 0x33F3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33f3c0;
        }
    }
    ctx->pc = 0x33F3DCu;
    // 0x33f3dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33f3dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f3e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33f3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33f3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x33F3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F3E4u;
        // 0x33f3e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F3E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F3ECu;
    // 0x33f3ec: 0x0  nop
    ctx->pc = 0x33f3ecu;
    // NOP
    ctx->pc = 0x33f3f0u;
}
