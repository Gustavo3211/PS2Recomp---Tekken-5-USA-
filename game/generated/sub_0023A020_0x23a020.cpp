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

// Function: sub_0023A020
// Address: 0x23a020 - 0x23a0c8
void sub_0023A020_0x23a020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A020_0x23a020");
#endif

    ctx->pc = 0x23a020u;

    // 0x23a020: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x23a020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a024: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x23a024u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23a028: 0x11000024  beqz        $t0, . + 4 + (0x24 << 2)
    ctx->pc = 0x23A028u;
    {
        const bool branch_taken_0x23a028 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A028u;
        // 0x23a02c: 0xa0c00004  sb          $zero, 0x4($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a028) {
            ctx->pc = 0x23A0BCu;
            goto label_23a0bc;
        }
    }
    ctx->pc = 0x23A030u;
    // 0x23a030: 0x95070000  lhu         $a3, 0x0($t0)
    ctx->pc = 0x23a030u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x23a034: 0x30e20f00  andi        $v0, $a3, 0xF00
    ctx->pc = 0x23a034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3840);
    // 0x23a038: 0x30e900ff  andi        $t1, $a3, 0xFF
    ctx->pc = 0x23a038u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x23a03c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x23a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x23a040: 0x30e7f000  andi        $a3, $a3, 0xF000
    ctx->pc = 0x23a040u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x23a044: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x23a044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23a048: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x23a048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x23a04c: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x23A04Cu;
    {
        const bool branch_taken_0x23a04c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A04Cu;
        // 0x23a050: 0x2442000f  addiu       $v0, $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a04c) {
            ctx->pc = 0x23A07Cu;
            goto label_23a07c;
        }
    }
    ctx->pc = 0x23A054u;
    // 0x23a054: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x23a054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x23a058: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x23a058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x23a05c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x23a05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x23a060: 0x8c84aa60  lw          $a0, -0x55A0($a0)
    ctx->pc = 0x23a060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945376)));
    // 0x23a064: 0x8ca28858  lw          $v0, -0x77A8($a1)
    ctx->pc = 0x23a064u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A8858u));
    // 0x23a068: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23a068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a06c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x23a06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x23a070: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x23a070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x23a074: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x23a074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x23a078: 0x4102b  sltu        $v0, $zero, $a0
    ctx->pc = 0x23a078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_23a07c:
    // 0x23a07c: 0xa0c20005  sb          $v0, 0x5($a2)
    ctx->pc = 0x23a07cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x23a080: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x23a080u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x23a084: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23a084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a088: 0xa0c30004  sb          $v1, 0x4($a2)
    ctx->pc = 0x23a088u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x23a08c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23a090: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x23a090u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x23a094: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x23a094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23a098: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x23a098u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x23a09c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23A09Cu;
    {
        const bool branch_taken_0x23a09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A09Cu;
        // 0x23a0a0: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a09c) {
            ctx->pc = 0x23A0BCu;
            goto label_23a0bc;
        }
    }
    ctx->pc = 0x23A0A4u;
    // 0x23a0a4: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23A0A4u;
    {
        const bool branch_taken_0x23a0a4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x23A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A0A4u;
        // 0x23a0a8: 0xa4c00006  sh          $zero, 0x6($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a0a4) {
            ctx->pc = 0x23A0B8u;
            goto label_23a0b8;
        }
    }
    ctx->pc = 0x23A0ACu;
    // 0x23a0ac: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x23a0acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x23a0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x23A0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A0B0u;
        // 0x23a0b4: 0xacc80000  sw          $t0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A0B8u;
label_23a0b8:
    // 0x23a0b8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x23a0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_23a0bc:
    // 0x23a0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x23A0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A0C4u;
    // 0x23a0c4: 0x0  nop
    ctx->pc = 0x23a0c4u;
    // NOP
    ctx->pc = 0x23a0c8u;
}
