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

// Function: sub_0036D1C0
// Address: 0x36d1c0 - 0x36d240
void sub_0036D1C0_0x36d1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D1C0_0x36d1c0");
#endif

    switch (ctx->pc) {
        case 0x36d1d8u: goto label_36d1d8;
        case 0x36d1f8u: goto label_36d1f8;
        default: break;
    }

    ctx->pc = 0x36d1c0u;

    // 0x36d1c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36d1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36d1c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36d1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36d1c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36d1c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d1cc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36d1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36d1d0: 0xc0db490  jal         func_36D240
    ctx->pc = 0x36D1D0u;
    SET_GPR_U32(ctx, 31, 0x36D1D8u);
    ctx->pc = 0x36D1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D1D0u;
    // 0x36d1d4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D240u, 0x36D1D0u, 0x36D1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D1D8u;
label_36d1d8:
    // 0x36d1d8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x36d1d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d1dc: 0x8e0a000c  lw          $t2, 0xC($s0)
    ctx->pc = 0x36d1dcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x36d1e0: 0x12a102a  slt         $v0, $t1, $t2
    ctx->pc = 0x36d1e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x36d1e4: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x36D1E4u;
    {
        const bool branch_taken_0x36d1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d1e4) {
            ctx->pc = 0x36D1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36D1E4u;
            // 0x36d1e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36D234u;
            goto label_36d234;
        }
    }
    ctx->pc = 0x36D1ECu;
    // 0x36d1ec: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x36d1ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x36d1f0: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x36d1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x36d1f4: 0x0  nop
    ctx->pc = 0x36d1f4u;
    // NOP
label_36d1f8:
    // 0x36d1f8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x36d1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x36d1fc: 0x8cc70010  lw          $a3, 0x10($a2)
    ctx->pc = 0x36d1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x36d200: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x36d200u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36d204: 0x79030010  lq          $v1, 0x10($t0)
    ctx->pc = 0x36d204u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x36d208: 0x79040020  lq          $a0, 0x20($t0)
    ctx->pc = 0x36d208u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x36d20c: 0x79050030  lq          $a1, 0x30($t0)
    ctx->pc = 0x36d20cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x36d210: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x36d210u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x36d214: 0x7ce30010  sq          $v1, 0x10($a3)
    ctx->pc = 0x36d214u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 3));
    // 0x36d218: 0x7ce40020  sq          $a0, 0x20($a3)
    ctx->pc = 0x36d218u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 4));
    // 0x36d21c: 0x7ce50030  sq          $a1, 0x30($a3)
    ctx->pc = 0x36d21cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 5));
    // 0x36d220: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36d220u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x36d224: 0x12a102a  slt         $v0, $t1, $t2
    ctx->pc = 0x36d224u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x36d228: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x36D228u;
    {
        const bool branch_taken_0x36d228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36D22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D228u;
        // 0x36d22c: 0x93080  sll         $a2, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d228) {
            ctx->pc = 0x36D1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36d1f8;
        }
    }
    ctx->pc = 0x36D230u;
    // 0x36d230: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36d230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36d234:
    // 0x36d234: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36d234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36d238: 0x3e00008  jr          $ra
    ctx->pc = 0x36D238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D238u;
        // 0x36d23c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D240u;
}
