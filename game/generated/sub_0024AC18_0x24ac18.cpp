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

// Function: sub_0024AC18
// Address: 0x24ac18 - 0x24ad18
void sub_0024AC18_0x24ac18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AC18_0x24ac18");
#endif

    ctx->pc = 0x24ac18u;

    // 0x24ac18: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x24ac18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ac1c: 0x84e20012  lh          $v0, 0x12($a3)
    ctx->pc = 0x24ac1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x24ac20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24ac24: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x24ac24u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x24ac28: 0x8c22a848  lw          $v0, -0x57B8($at)
    ctx->pc = 0x24ac28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294944840)));
    // 0x24ac2c: 0x30434000  andi        $v1, $v0, 0x4000
    ctx->pc = 0x24ac2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x24ac30: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x24AC30u;
    {
        const bool branch_taken_0x24ac30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AC30u;
        // 0x24ac34: 0x30421000  andi        $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ac30) {
            ctx->pc = 0x24AC78u;
            goto label_24ac78;
        }
    }
    ctx->pc = 0x24AC38u;
    // 0x24ac38: 0x90e201bc  lbu         $v0, 0x1BC($a3)
    ctx->pc = 0x24ac38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 444)));
    // 0x24ac3c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x24AC3Cu;
    {
        const bool branch_taken_0x24ac3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ac3c) {
            ctx->pc = 0x24AC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AC3Cu;
            // 0x24ac40: 0x90a201bc  lbu         $v0, 0x1BC($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AC58u;
            goto label_24ac58;
        }
    }
    ctx->pc = 0x24AC44u;
    // 0x24ac44: 0x8ce30890  lw          $v1, 0x890($a3)
    ctx->pc = 0x24ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2192)));
    // 0x24ac48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24ac4c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x24ac4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x24ac50: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x24ac50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x24ac54: 0x90a201bc  lbu         $v0, 0x1BC($a1)
    ctx->pc = 0x24ac54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 444)));
label_24ac58:
    // 0x24ac58: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x24AC58u;
    {
        const bool branch_taken_0x24ac58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ac58) {
            ctx->pc = 0x24AC5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AC58u;
            // 0x24ac5c: 0x84e20040  lh          $v0, 0x40($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24ACD8u;
            goto label_24acd8;
        }
    }
    ctx->pc = 0x24AC60u;
    // 0x24ac60: 0x8ca30890  lw          $v1, 0x890($a1)
    ctx->pc = 0x24ac60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2192)));
    // 0x24ac64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24ac64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24ac68: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x24ac68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x24ac6c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x24AC6Cu;
    {
        const bool branch_taken_0x24ac6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AC6Cu;
        // 0x24ac70: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ac6c) {
            ctx->pc = 0x24ACD4u;
            goto label_24acd4;
        }
    }
    ctx->pc = 0x24AC74u;
    // 0x24ac74: 0x0  nop
    ctx->pc = 0x24ac74u;
    // NOP
label_24ac78:
    // 0x24ac78: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24AC78u;
    {
        const bool branch_taken_0x24ac78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ac78) {
            ctx->pc = 0x24ACB8u;
            goto label_24acb8;
        }
    }
    ctx->pc = 0x24AC80u;
    // 0x24ac80: 0x90e201bc  lbu         $v0, 0x1BC($a3)
    ctx->pc = 0x24ac80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 444)));
    // 0x24ac84: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x24AC84u;
    {
        const bool branch_taken_0x24ac84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ac84) {
            ctx->pc = 0x24AC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AC84u;
            // 0x24ac88: 0x90a201bc  lbu         $v0, 0x1BC($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24ACA4u;
            goto label_24aca4;
        }
    }
    ctx->pc = 0x24AC8Cu;
    // 0x24ac8c: 0x8ce40890  lw          $a0, 0x890($a3)
    ctx->pc = 0x24ac8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2192)));
    // 0x24ac90: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x24ac90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x24ac94: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x24ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24ac98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24ac98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24ac9c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x24ac9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x24aca0: 0x90a201bc  lbu         $v0, 0x1BC($a1)
    ctx->pc = 0x24aca0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 444)));
label_24aca4:
    // 0x24aca4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x24ACA4u;
    {
        const bool branch_taken_0x24aca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24aca4) {
            ctx->pc = 0x24ACA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24ACA4u;
            // 0x24aca8: 0x84e20040  lh          $v0, 0x40($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24ACD8u;
            goto label_24acd8;
        }
    }
    ctx->pc = 0x24ACACu;
    // 0x24acac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24ACACu;
    {
        const bool branch_taken_0x24acac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ACACu;
        // 0x24acb0: 0x8ca40890  lw          $a0, 0x890($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24acac) {
            ctx->pc = 0x24ACC4u;
            goto label_24acc4;
        }
    }
    ctx->pc = 0x24ACB4u;
    // 0x24acb4: 0x0  nop
    ctx->pc = 0x24acb4u;
    // NOP
label_24acb8:
    // 0x24acb8: 0x54c00007  bnel        $a2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x24ACB8u;
    {
        const bool branch_taken_0x24acb8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x24acb8) {
            ctx->pc = 0x24ACBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24ACB8u;
            // 0x24acbc: 0x84e20040  lh          $v0, 0x40($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24ACD8u;
            goto label_24acd8;
        }
    }
    ctx->pc = 0x24ACC0u;
    // 0x24acc0: 0x8ce40890  lw          $a0, 0x890($a3)
    ctx->pc = 0x24acc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2192)));
label_24acc4:
    // 0x24acc4: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x24acc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x24acc8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x24acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24accc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24acccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24acd0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x24acd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_24acd4:
    // 0x24acd4: 0x84e20040  lh          $v0, 0x40($a3)
    ctx->pc = 0x24acd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 64)));
label_24acd8:
    // 0x24acd8: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x24acd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x24acdc: 0x10460005  beq         $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x24ACDCu;
    {
        const bool branch_taken_0x24acdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x24ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ACDCu;
        // 0x24ace0: 0x2403fffd  addiu       $v1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24acdc) {
            ctx->pc = 0x24ACF4u;
            goto label_24acf4;
        }
    }
    ctx->pc = 0x24ACE4u;
    // 0x24ace4: 0x8ce40890  lw          $a0, 0x890($a3)
    ctx->pc = 0x24ace4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2192)));
    // 0x24ace8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x24ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24acec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24acecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24acf0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x24acf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_24acf4:
    // 0x24acf4: 0x84a20040  lh          $v0, 0x40($a1)
    ctx->pc = 0x24acf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x24acf8: 0x10460005  beq         $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x24ACF8u;
    {
        const bool branch_taken_0x24acf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x24ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ACF8u;
        // 0x24acfc: 0x2403fffd  addiu       $v1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24acf8) {
            ctx->pc = 0x24AD10u;
            goto label_24ad10;
        }
    }
    ctx->pc = 0x24AD00u;
    // 0x24ad00: 0x8ca40890  lw          $a0, 0x890($a1)
    ctx->pc = 0x24ad00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2192)));
    // 0x24ad04: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x24ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24ad08: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24ad08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24ad0c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x24ad0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_24ad10:
    // 0x24ad10: 0x3e00008  jr          $ra
    ctx->pc = 0x24AD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AD18u;
}
