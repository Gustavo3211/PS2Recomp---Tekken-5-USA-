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

// Function: sub_00505628
// Address: 0x505628 - 0x5056b8
void sub_00505628_0x505628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00505628_0x505628");
#endif

    ctx->pc = 0x505628u;

    // 0x505628: 0x3c08008f  lui         $t0, 0x8F
    ctx->pc = 0x505628u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)143 << 16));
    // 0x50562c: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x50562cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x505630: 0x2508c52c  addiu       $t0, $t0, -0x3AD4
    ctx->pc = 0x505630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952236));
    // 0x505634: 0x24a5c534  addiu       $a1, $a1, -0x3ACC
    ctx->pc = 0x505634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952244));
    // 0x505638: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x505638u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x8EC52Cu));
    // 0x50563c: 0x3c06008f  lui         $a2, 0x8F
    ctx->pc = 0x50563cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)143 << 16));
    // 0x505640: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x505640u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC534u));
    // 0x505644: 0x24c6c550  addiu       $a2, $a2, -0x3AB0
    ctx->pc = 0x505644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952272));
    // 0x505648: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x505648u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50564c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x50564cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x505650: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x505650u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EC550u));
    // 0x505654: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x505654u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x505658: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x505658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x50565c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50565cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x505660: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x505660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x505664: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x505664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x505668: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x505668u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x50566c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x50566cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x505670: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x505670u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x505674: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x505674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x505678: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x505678u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50567c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x50567cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x505680: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x505680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x505684: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x505684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x505688: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x505688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x50568c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50568cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x505690: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x505690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x505694: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x505694u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x505698: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x505698u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50569c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50569cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x5056a0: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x5056a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x5056a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x5056a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x5056a8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x5056a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x5056ac: 0x3e00008  jr          $ra
    ctx->pc = 0x5056ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5056B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5056ACu;
        // 0x5056b0: 0xad040000  sw          $a0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5056ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5056B4u;
    // 0x5056b4: 0x0  nop
    ctx->pc = 0x5056b4u;
    // NOP
    ctx->pc = 0x5056b8u;
}
