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

// Function: sub_002F5A88
// Address: 0x2f5a88 - 0x2f5b10
void sub_002F5A88_0x2f5a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5A88_0x2f5a88");
#endif

    switch (ctx->pc) {
        case 0x2f5aa4u: goto label_2f5aa4;
        case 0x2f5b00u: goto label_2f5b00;
        default: break;
    }

    ctx->pc = 0x2f5a88u;

    // 0x2f5a88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f5a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f5a8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f5a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5a90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f5a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f5a94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f5a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5a98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f5a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f5a9c: 0xc0bbdbc  jal         func_2EF6F0
    ctx->pc = 0x2F5A9Cu;
    SET_GPR_U32(ctx, 31, 0x2F5AA4u);
    ctx->pc = 0x2F5AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5A9Cu;
    // 0x2f5aa0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF6F0u, 0x2F5A9Cu, 0x2F5AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5AA4u;
label_2f5aa4:
    // 0x2f5aa4: 0x26050148  addiu       $a1, $s0, 0x148
    ctx->pc = 0x2f5aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
    // 0x2f5aa8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f5aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f5aac: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F5AACu;
    {
        const bool branch_taken_0x2f5aac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5AACu;
        // 0x2f5ab0: 0x260600b8  addiu       $a2, $s0, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5aac) {
            ctx->pc = 0x2F5AC4u;
            goto label_2f5ac4;
        }
    }
    ctx->pc = 0x2F5AB4u;
    // 0x2f5ab4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f5ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f5ab8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f5ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f5abc: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F5ABCu;
    {
        const bool branch_taken_0x2f5abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f5abc) {
            ctx->pc = 0x2F5AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5ABCu;
            // 0x2f5ac0: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5AD4u;
            goto label_2f5ad4;
        }
    }
    ctx->pc = 0x2F5AC4u;
label_2f5ac4:
    // 0x2f5ac4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f5ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2f5ac8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f5ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5acc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f5accu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2f5ad0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2f5ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2f5ad4:
    // 0x2f5ad4: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F5AD4u;
    {
        const bool branch_taken_0x2f5ad4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5ad4) {
            ctx->pc = 0x2F5AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5AD4u;
            // 0x2f5ad8: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5AF0u;
            goto label_2f5af0;
        }
    }
    ctx->pc = 0x2F5ADCu;
    // 0x2f5adc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2f5adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2f5ae0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2f5ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2f5ae4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5AE4u;
    {
        const bool branch_taken_0x2f5ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f5ae4) {
            ctx->pc = 0x2F5AF8u;
            goto label_2f5af8;
        }
    }
    ctx->pc = 0x2F5AECu;
    // 0x2f5aec: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2f5aecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_2f5af0:
    // 0x2f5af0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f5af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5af4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2f5af4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2f5af8:
    // 0x2f5af8: 0xc0bd2e4  jal         func_2F4B90
    ctx->pc = 0x2F5AF8u;
    SET_GPR_U32(ctx, 31, 0x2F5B00u);
    ctx->pc = 0x2F5AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5AF8u;
    // 0x2f5afc: 0x8e060104  lw          $a2, 0x104($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4B90u, 0x2F5AF8u, 0x2F5B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5B00u;
label_2f5b00:
    // 0x2f5b00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f5b00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5b04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f5b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f5b08: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B08u;
        // 0x2f5b0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5B10u;
}
