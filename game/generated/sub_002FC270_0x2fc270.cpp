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

// Function: sub_002FC270
// Address: 0x2fc270 - 0x2fc2e0
void sub_002FC270_0x2fc270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC270_0x2fc270");
#endif

    switch (ctx->pc) {
        case 0x2fc294u: goto label_2fc294;
        case 0x2fc2b0u: goto label_2fc2b0;
        case 0x2fc2ccu: goto label_2fc2cc;
        default: break;
    }

    ctx->pc = 0x2fc270u;

    // 0x2fc270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fc270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fc274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fc274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fc278: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2fc278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc27c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fc27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fc280: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fc280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc284: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FC284u;
    {
        const bool branch_taken_0x2fc284 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC284u;
        // 0x2fc288: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc284) {
            ctx->pc = 0x2FC2CCu;
            goto label_2fc2cc;
        }
    }
    ctx->pc = 0x2FC28Cu;
    // 0x2fc28c: 0xc0befd2  jal         func_2FBF48
    ctx->pc = 0x2FC28Cu;
    SET_GPR_U32(ctx, 31, 0x2FC294u);
    ctx->pc = 0x2FBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBF48u, 0x2FC28Cu, 0x2FC294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC294u;
label_2fc294:
    // 0x2fc294: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fc294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fc298: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2fc298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2fc29c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fc29cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc2a0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FC2A0u;
    {
        const bool branch_taken_0x2fc2a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FC2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC2A0u;
        // 0x2fc2a4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc2a0) {
            ctx->pc = 0x2FC2B8u;
            goto label_2fc2b8;
        }
    }
    ctx->pc = 0x2FC2A8u;
    // 0x2fc2a8: 0xc0c8e78  jal         func_3239E0
    ctx->pc = 0x2FC2A8u;
    SET_GPR_U32(ctx, 31, 0x2FC2B0u);
    ctx->pc = 0x3239E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239E0u, 0x2FC2A8u, 0x2FC2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC2B0u;
label_2fc2b0:
    // 0x2fc2b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FC2B0u;
    {
        const bool branch_taken_0x2fc2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC2B0u;
        // 0x2fc2b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc2b0) {
            ctx->pc = 0x2FC2D0u;
            goto label_2fc2d0;
        }
    }
    ctx->pc = 0x2FC2B8u;
label_2fc2b8:
    // 0x2fc2b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2fc2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fc2bc: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC2BCu;
    {
        const bool branch_taken_0x2fc2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FC2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC2BCu;
        // 0x2fc2c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc2bc) {
            ctx->pc = 0x2FC2CCu;
            goto label_2fc2cc;
        }
    }
    ctx->pc = 0x2FC2C4u;
    // 0x2fc2c4: 0xc0c8e56  jal         func_323958
    ctx->pc = 0x2FC2C4u;
    SET_GPR_U32(ctx, 31, 0x2FC2CCu);
    ctx->pc = 0x2FC2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC2C4u;
    // 0x2fc2c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323958u, 0x2FC2C4u, 0x2FC2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC2CCu;
label_2fc2cc:
    // 0x2fc2cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fc2ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fc2d0:
    // 0x2fc2d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fc2d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fc2d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fc2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC2D8u;
        // 0x2fc2dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC2E0u;
}
