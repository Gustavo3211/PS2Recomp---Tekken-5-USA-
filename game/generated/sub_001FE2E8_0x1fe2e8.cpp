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

// Function: sub_001FE2E8
// Address: 0x1fe2e8 - 0x1fe340
void sub_001FE2E8_0x1fe2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE2E8_0x1fe2e8");
#endif

    ctx->pc = 0x1fe2e8u;

    // 0x1fe2e8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1fe2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1fe2ec: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1fe2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1fe2f0: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x1fe2f0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1fe2f4: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x1fe2f4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1fe2f8: 0x4a20001  bltzl       $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FE2F8u;
    {
        const bool branch_taken_0x1fe2f8 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1fe2f8) {
            ctx->pc = 0x1FE2FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE2F8u;
            // 0x1fe2fc: 0x52823  negu        $a1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE300u;
            goto label_1fe300;
        }
    }
    ctx->pc = 0x1FE300u;
label_1fe300:
    // 0x1fe300: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE300u;
    {
        const bool branch_taken_0x1fe300 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1FE304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE300u;
        // 0x1fe304: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe300) {
            ctx->pc = 0x1FE30Cu;
            goto label_1fe30c;
        }
    }
    ctx->pc = 0x1FE308u;
    // 0x1fe308: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1fe308u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1fe30c:
    // 0x1fe30c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1fe30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1fe310: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x1fe310u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1fe314: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1fe314u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1fe318: 0xc2302a  slt         $a2, $a2, $v0
    ctx->pc = 0x1fe318u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fe31c: 0x28840000  slti        $a0, $a0, 0x0
    ctx->pc = 0x1fe31cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1fe320: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE320u;
    {
        const bool branch_taken_0x1fe320 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE320u;
        // 0x1fe324: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe320) {
            ctx->pc = 0x1FE338u;
            goto label_1fe338;
        }
    }
    ctx->pc = 0x1FE328u;
    // 0x1fe328: 0x51023  negu        $v0, $a1
    ctx->pc = 0x1fe328u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x1fe32c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE32Cu;
        // 0x1fe330: 0xa4100a  movz        $v0, $a1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE334u;
    // 0x1fe334: 0x0  nop
    ctx->pc = 0x1fe334u;
    // NOP
label_1fe338:
    // 0x1fe338: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE338u;
        // 0x1fe33c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE340u;
}
