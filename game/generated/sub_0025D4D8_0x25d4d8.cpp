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

// Function: sub_0025D4D8
// Address: 0x25d4d8 - 0x25d540
void sub_0025D4D8_0x25d4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D4D8_0x25d4d8");
#endif

    switch (ctx->pc) {
        case 0x25d518u: goto label_25d518;
        default: break;
    }

    ctx->pc = 0x25d4d8u;

    // 0x25d4d8: 0x29030101  slti        $v1, $t0, 0x101
    ctx->pc = 0x25d4d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x25d4dc: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x25D4DCu;
    {
        const bool branch_taken_0x25d4dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D4DCu;
        // 0x25d4e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d4dc) {
            ctx->pc = 0x25D538u;
            goto label_25d538;
        }
    }
    ctx->pc = 0x25D4E4u;
    // 0x25d4e4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x25d4e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25d4e8: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x25d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x25d4ec: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x25d4ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d4f0: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x25d4f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x25d4f4: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x25d4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x25d4f8: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x25d4f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25d4fc: 0x83380a  movz        $a3, $a0, $v1
    ctx->pc = 0x25d4fcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x25d500: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25d500u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d504: 0x1071018  mult        $v0, $t0, $a3
    ctx->pc = 0x25d504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25d508: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x25d508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25d50c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x25d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25d510: 0x19000008  blez        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25D510u;
    {
        const bool branch_taken_0x25d510 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x25D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D510u;
        // 0x25d514: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d510) {
            ctx->pc = 0x25D534u;
            goto label_25d534;
        }
    }
    ctx->pc = 0x25D518u;
label_25d518:
    // 0x25d518: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x25d518u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25d51c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x25d51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x25d520: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x25d520u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x25d524: 0x128102a  slt         $v0, $t1, $t0
    ctx->pc = 0x25d524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x25d528: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x25d528u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x25d52c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25D52Cu;
    {
        const bool branch_taken_0x25d52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D52Cu;
        // 0x25d530: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d52c) {
            ctx->pc = 0x25D518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25d518;
        }
    }
    ctx->pc = 0x25D534u;
label_25d534:
    // 0x25d534: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25d534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d538:
    // 0x25d538: 0x3e00008  jr          $ra
    ctx->pc = 0x25D538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D540u;
}
