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

// Function: sub_002FC368
// Address: 0x2fc368 - 0x2fc3d8
void sub_002FC368_0x2fc368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC368_0x2fc368");
#endif

    switch (ctx->pc) {
        case 0x2fc38cu: goto label_2fc38c;
        case 0x2fc3a8u: goto label_2fc3a8;
        case 0x2fc3c4u: goto label_2fc3c4;
        default: break;
    }

    ctx->pc = 0x2fc368u;

    // 0x2fc368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fc368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fc36c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fc36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fc370: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2fc370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc374: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fc374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fc378: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fc378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc37c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FC37Cu;
    {
        const bool branch_taken_0x2fc37c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC37Cu;
        // 0x2fc380: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc37c) {
            ctx->pc = 0x2FC3C4u;
            goto label_2fc3c4;
        }
    }
    ctx->pc = 0x2FC384u;
    // 0x2fc384: 0xc0befd2  jal         func_2FBF48
    ctx->pc = 0x2FC384u;
    SET_GPR_U32(ctx, 31, 0x2FC38Cu);
    ctx->pc = 0x2FBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBF48u, 0x2FC384u, 0x2FC38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC38Cu;
label_2fc38c:
    // 0x2fc38c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fc38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fc390: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2fc390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2fc394: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fc394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc398: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FC398u;
    {
        const bool branch_taken_0x2fc398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FC39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC398u;
        // 0x2fc39c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc398) {
            ctx->pc = 0x2FC3B0u;
            goto label_2fc3b0;
        }
    }
    ctx->pc = 0x2FC3A0u;
    // 0x2fc3a0: 0xc0c8ee0  jal         func_323B80
    ctx->pc = 0x2FC3A0u;
    SET_GPR_U32(ctx, 31, 0x2FC3A8u);
    ctx->pc = 0x323B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B80u, 0x2FC3A0u, 0x2FC3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC3A8u;
label_2fc3a8:
    // 0x2fc3a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FC3A8u;
    {
        const bool branch_taken_0x2fc3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC3A8u;
        // 0x2fc3ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc3a8) {
            ctx->pc = 0x2FC3C8u;
            goto label_2fc3c8;
        }
    }
    ctx->pc = 0x2FC3B0u;
label_2fc3b0:
    // 0x2fc3b0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2fc3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fc3b4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC3B4u;
    {
        const bool branch_taken_0x2fc3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FC3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC3B4u;
        // 0x2fc3b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc3b4) {
            ctx->pc = 0x2FC3C4u;
            goto label_2fc3c4;
        }
    }
    ctx->pc = 0x2FC3BCu;
    // 0x2fc3bc: 0xc0c8ebe  jal         func_323AF8
    ctx->pc = 0x2FC3BCu;
    SET_GPR_U32(ctx, 31, 0x2FC3C4u);
    ctx->pc = 0x2FC3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC3BCu;
    // 0x2fc3c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323AF8u, 0x2FC3BCu, 0x2FC3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC3C4u;
label_2fc3c4:
    // 0x2fc3c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fc3c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fc3c8:
    // 0x2fc3c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fc3c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fc3cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fc3ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC3D0u;
        // 0x2fc3d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC3D8u;
}
