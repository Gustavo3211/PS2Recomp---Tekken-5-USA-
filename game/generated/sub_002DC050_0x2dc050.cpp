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

// Function: sub_002DC050
// Address: 0x2dc050 - 0x2dc0f8
void sub_002DC050_0x2dc050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC050_0x2dc050");
#endif

    switch (ctx->pc) {
        case 0x2dc078u: goto label_2dc078;
        case 0x2dc090u: goto label_2dc090;
        case 0x2dc0c0u: goto label_2dc0c0;
        default: break;
    }

    ctx->pc = 0x2dc050u;

    // 0x2dc050: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2dc050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2dc054: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2dc054u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc058: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2dc058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2dc05c: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x2dc05cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dc060: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2dc060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2dc064: 0x3c0b003e  lui         $t3, 0x3E
    ctx->pc = 0x2dc064u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)62 << 16));
    // 0x2dc068: 0x256b8448  addiu       $t3, $t3, -0x7BB8
    ctx->pc = 0x2dc068u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294935624));
    // 0x2dc06c: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x2dc06cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2dc070: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x2dc070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x2dc074: 0x0  nop
    ctx->pc = 0x2dc074u;
    // NOP
label_2dc078:
    // 0x2dc078: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dc078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc07c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2dc07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2dc080: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2dc080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2dc084: 0x1623021  addu        $a2, $t3, $v0
    ctx->pc = 0x2dc084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2dc088: 0x24c70008  addiu       $a3, $a2, 0x8
    ctx->pc = 0x2dc088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2dc08c: 0x0  nop
    ctx->pc = 0x2dc08cu;
    // NOP
label_2dc090:
    // 0x2dc090: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2dc090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2dc094: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x2dc094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2dc098: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2dc098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2dc09c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2dc09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2dc0a0: 0x28a30004  slti        $v1, $a1, 0x4
    ctx->pc = 0x2dc0a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2dc0a4: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x2dc0a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dc0a8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2DC0A8u;
    {
        const bool branch_taken_0x2dc0a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC0A8u;
        // 0x2dc0ac: 0xa08a0000  sb          $t2, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc0a8) {
            ctx->pc = 0x2DC090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc090;
        }
    }
    ctx->pc = 0x2DC0B0u;
    // 0x2dc0b0: 0x24c7000f  addiu       $a3, $a2, 0xF
    ctx->pc = 0x2dc0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x2dc0b4: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x2dc0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x2dc0b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dc0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc0bc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2dc0bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2dc0c0:
    // 0x2dc0c0: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2dc0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2dc0c4: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x2dc0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2dc0c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2dc0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2dc0cc: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2dc0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc0d0: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x2dc0d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2dc0d4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DC0D4u;
    {
        const bool branch_taken_0x2dc0d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC0D4u;
        // 0x2dc0d8: 0xa0880000  sb          $t0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc0d4) {
            ctx->pc = 0x2DC0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc0c0;
        }
    }
    ctx->pc = 0x2DC0DCu;
    // 0x2dc0dc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2dc0dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2dc0e0: 0x29220002  slti        $v0, $t1, 0x2
    ctx->pc = 0x2dc0e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2dc0e4: 0x5440ffe4  bnel        $v0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2DC0E4u;
    {
        const bool branch_taken_0x2dc0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc0e4) {
            ctx->pc = 0x2DC0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC0E4u;
            // 0x2dc0e8: 0x910c0  sll         $v0, $t1, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc078;
        }
    }
    ctx->pc = 0x2DC0ECu;
    // 0x2dc0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC0F4u;
    // 0x2dc0f4: 0x0  nop
    ctx->pc = 0x2dc0f4u;
    // NOP
    ctx->pc = 0x2dc0f8u;
}
