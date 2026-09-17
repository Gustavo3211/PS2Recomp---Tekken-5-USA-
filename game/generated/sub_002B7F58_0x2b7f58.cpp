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

// Function: sub_002B7F58
// Address: 0x2b7f58 - 0x2b7fa8
void sub_002B7F58_0x2b7f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7F58_0x2b7f58");
#endif

    switch (ctx->pc) {
        case 0x2b7f98u: goto label_2b7f98;
        default: break;
    }

    ctx->pc = 0x2b7f58u;

    // 0x2b7f58: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2b7f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7f5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b7f5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b7f60: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x2b7f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2b7f64: 0x2cc30004  sltiu       $v1, $a2, 0x4
    ctx->pc = 0x2b7f64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b7f68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b7f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b7f6c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2B7F6Cu;
    {
        const bool branch_taken_0x2b7f6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F6Cu;
        // 0x2b7f70: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7f6c) {
            ctx->pc = 0x2B7F98u;
            goto label_2b7f98;
        }
    }
    ctx->pc = 0x2B7F74u;
    // 0x2b7f74: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2b7f74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b7f78: 0xc4ad0008  lwc1        $f13, 0x8($a1)
    ctx->pc = 0x2b7f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2b7f7c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2b7f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2b7f80: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2b7f80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b7f84: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x2b7f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x2b7f88: 0x242178c0  addiu       $at, $at, 0x78C0
    ctx->pc = 0x2b7f88u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 30912));
    // 0x2b7f8c: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x2b7f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x2b7f90: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2B7F90u;
    SET_GPR_U32(ctx, 31, 0x2B7F98u);
    ctx->pc = 0x2B7F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7F90u;
    // 0x2b7f94: 0xc4ac0000  lwc1        $f12, 0x0($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8700u, 0x2B7F90u, 0x2B7F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7F98u;
label_2b7f98:
    // 0x2b7f98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b7f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F9Cu;
        // 0x2b7fa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7FA4u;
    // 0x2b7fa4: 0x0  nop
    ctx->pc = 0x2b7fa4u;
    // NOP
    ctx->pc = 0x2b7fa8u;
}
