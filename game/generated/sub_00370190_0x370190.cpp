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

// Function: sub_00370190
// Address: 0x370190 - 0x3701c8
void sub_00370190_0x370190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370190_0x370190");
#endif

    ctx->pc = 0x370190u;

    // 0x370190: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x370190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x370194: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370194u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370198: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x370198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x37019c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x37019cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3701a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3701a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3701a4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3701A4u;
    {
        const bool branch_taken_0x3701a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3701A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3701A4u;
        // 0x3701a8: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3701a4) {
            ctx->pc = 0x3701B8u;
            goto label_3701b8;
        }
    }
    ctx->pc = 0x3701ACu;
    // 0x3701ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3701acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3701b0: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x3701B0u;
    ctx->pc = 0x3701B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3701B0u;
    // 0x3701b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x3701B8u;
label_3701b8:
    // 0x3701b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3701b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3701bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3701BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3701C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3701BCu;
        // 0x3701c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3701BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3701C4u;
    // 0x3701c4: 0x0  nop
    ctx->pc = 0x3701c4u;
    // NOP
    ctx->pc = 0x3701c8u;
}
