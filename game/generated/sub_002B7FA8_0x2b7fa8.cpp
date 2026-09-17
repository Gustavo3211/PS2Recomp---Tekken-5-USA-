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

// Function: sub_002B7FA8
// Address: 0x2b7fa8 - 0x2b8020
void sub_002B7FA8_0x2b7fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7FA8_0x2b7fa8");
#endif

    switch (ctx->pc) {
        case 0x2b7fe8u: goto label_2b7fe8;
        default: break;
    }

    ctx->pc = 0x2b7fa8u;

    // 0x2b7fa8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2b7fa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7fac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b7facu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b7fb0: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x2b7fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2b7fb4: 0x2cc30004  sltiu       $v1, $a2, 0x4
    ctx->pc = 0x2b7fb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b7fb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b7fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b7fbc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2B7FBCu;
    {
        const bool branch_taken_0x2b7fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7FBCu;
        // 0x2b7fc0: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7fbc) {
            ctx->pc = 0x2B7FE8u;
            goto label_2b7fe8;
        }
    }
    ctx->pc = 0x2B7FC4u;
    // 0x2b7fc4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2b7fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b7fc8: 0xc4ad0008  lwc1        $f13, 0x8($a1)
    ctx->pc = 0x2b7fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2b7fcc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2b7fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2b7fd0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2b7fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b7fd4: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x2b7fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x2b7fd8: 0x242178c0  addiu       $at, $at, 0x78C0
    ctx->pc = 0x2b7fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 30912));
    // 0x2b7fdc: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x2b7fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x2b7fe0: 0xc0ae20c  jal         func_2B8830
    ctx->pc = 0x2B7FE0u;
    SET_GPR_U32(ctx, 31, 0x2B7FE8u);
    ctx->pc = 0x2B7FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7FE0u;
    // 0x2b7fe4: 0xc4ac0000  lwc1        $f12, 0x0($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8830u, 0x2B7FE0u, 0x2B7FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7FE8u;
label_2b7fe8:
    // 0x2b7fe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b7fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7fec: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7FECu;
        // 0x2b7ff0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7FF4u;
    // 0x2b7ff4: 0x0  nop
    ctx->pc = 0x2b7ff4u;
    // NOP
    // 0x2b7ff8: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x2b7ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2b7ffc: 0x2c84001e  sltiu       $a0, $a0, 0x1E
    ctx->pc = 0x2b7ffcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x2b8000: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B8000u;
    {
        const bool branch_taken_0x2b8000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8000) {
            ctx->pc = 0x2B8018u;
            goto label_2b8018;
        }
    }
    ctx->pc = 0x2B8008u;
    // 0x2b8008: 0x3c01003c  lui         $at, 0x3C
    ctx->pc = 0x2b8008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)60 << 16));
    // 0x2b800c: 0x2421cf40  addiu       $at, $at, -0x30C0
    ctx->pc = 0x2b800cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294954816));
    // 0x2b8010: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8010u;
        // 0x2b8014: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8018u;
label_2b8018:
    // 0x2b8018: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8018u;
        // 0x2b801c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8020u;
}
