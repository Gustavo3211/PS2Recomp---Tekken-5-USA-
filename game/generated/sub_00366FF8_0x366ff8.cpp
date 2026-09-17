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

// Function: sub_00366FF8
// Address: 0x366ff8 - 0x367128
void sub_00366FF8_0x366ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366FF8_0x366ff8");
#endif

    switch (ctx->pc) {
        case 0x367038u: goto label_367038;
        case 0x367078u: goto label_367078;
        case 0x3670c8u: goto label_3670c8;
        case 0x367118u: goto label_367118;
        default: break;
    }

    ctx->pc = 0x366ff8u;

    // 0x366ff8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x366ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x366ffc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x366ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x367000: 0x8c42a80c  lw          $v0, -0x57F4($v0)
    ctx->pc = 0x367000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944780)));
    // 0x367004: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x367004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x367008: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x367008u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x36700c: 0xac25a804  sw          $a1, -0x57FC($at)
    ctx->pc = 0x36700cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944772), GPR_U32(ctx, 5));
    // 0x367010: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x367010u;
    {
        const bool branch_taken_0x367010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x367010) {
            ctx->pc = 0x3670C0u;
            goto label_3670c0;
        }
    }
    ctx->pc = 0x367018u;
    // 0x367018: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x367018u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x36701c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x36701cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x367020: 0x8cc6a800  lw          $a2, -0x5800($a2)
    ctx->pc = 0x367020u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294944768)));
    // 0x367024: 0x18c00010  blez        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x367024u;
    {
        const bool branch_taken_0x367024 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x367028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367024u;
        // 0x367028: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367024) {
            ctx->pc = 0x367068u;
            goto label_367068;
        }
    }
    ctx->pc = 0x36702Cu;
    // 0x36702c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x36702cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367030: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x367030u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367034: 0x0  nop
    ctx->pc = 0x367034u;
    // NOP
label_367038:
    // 0x367038: 0x80620008  lb          $v0, 0x8($v1)
    ctx->pc = 0x367038u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x36703c: 0x14480007  bne         $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x36703Cu;
    {
        const bool branch_taken_0x36703c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x367040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36703Cu;
        // 0x367040: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36703c) {
            ctx->pc = 0x36705Cu;
            goto label_36705c;
        }
    }
    ctx->pc = 0x367044u;
    // 0x367044: 0xac650030  sw          $a1, 0x30($v1)
    ctx->pc = 0x367044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 5));
    // 0x367048: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x367048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x36704c: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x36704cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x367050: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x367050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x367054: 0x8cc6a800  lw          $a2, -0x5800($a2)
    ctx->pc = 0x367054u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294944768)));
    // 0x367058: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x367058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_36705c:
    // 0x36705c: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x36705cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x367060: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x367060u;
    {
        const bool branch_taken_0x367060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367060u;
        // 0x367064: 0x24631500  addiu       $v1, $v1, 0x1500 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367060) {
            ctx->pc = 0x367038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367038;
        }
    }
    ctx->pc = 0x367068u;
label_367068:
    // 0x367068: 0x18c00015  blez        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x367068u;
    {
        const bool branch_taken_0x367068 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x36706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367068u;
        // 0x36706c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367068) {
            ctx->pc = 0x3670C0u;
            goto label_3670c0;
        }
    }
    ctx->pc = 0x367070u;
    // 0x367070: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x367070u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x367074: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x367074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_367078:
    // 0x367078: 0x80a20008  lb          $v0, 0x8($a1)
    ctx->pc = 0x367078u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x36707c: 0x1448000d  bne         $v0, $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x36707Cu;
    {
        const bool branch_taken_0x36707c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x367080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36707Cu;
        // 0x367080: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36707c) {
            ctx->pc = 0x3670B4u;
            goto label_3670b4;
        }
    }
    ctx->pc = 0x367084u;
    // 0x367084: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x367084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x367088: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x367088u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36708c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x36708cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x367090: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x367090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x367094: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x367094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x367098: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x367098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x36709c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x36709cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3670a0: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x3670a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x3670a4: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x3670a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x3670a8: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x3670a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x3670ac: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x3670acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3670b0: 0x8cc6a800  lw          $a2, -0x5800($a2)
    ctx->pc = 0x3670b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294944768)));
label_3670b4:
    // 0x3670b4: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x3670b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3670b8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3670B8u;
    {
        const bool branch_taken_0x3670b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3670BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3670B8u;
        // 0x3670bc: 0x24a51500  addiu       $a1, $a1, 0x1500 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3670b8) {
            ctx->pc = 0x367078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367078;
        }
    }
    ctx->pc = 0x3670C0u;
label_3670c0:
    // 0x3670c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3670C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3670C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3670C8u;
label_3670c8:
    // 0x3670c8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3670c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3670cc: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x3670ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3670d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3670d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3670d4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3670d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3670d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3670d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3670dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3670dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3670e0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3670e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3670e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3670e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3670e8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3670e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3670ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3670ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3670f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3670f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3670f4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x3670f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x3670f8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x3670f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3670fc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3670fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x367100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x367100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367104: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x367104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x367108: 0x24a61500  addiu       $a2, $a1, 0x1500
    ctx->pc = 0x367108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 5376));
    // 0x36710c: 0x80d9338  j           func_364CE0
    ctx->pc = 0x36710Cu;
    ctx->pc = 0x367110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36710Cu;
    // 0x367110: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364CE0u, 0x36710Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x367114u;
    // 0x367114: 0x0  nop
    ctx->pc = 0x367114u;
    // NOP
label_367118:
    // 0x367118: 0xaf85c820  sw          $a1, -0x37E0($gp)
    ctx->pc = 0x367118u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952992), GPR_U32(ctx, 5));
    // 0x36711c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36711cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367120: 0x3e00008  jr          $ra
    ctx->pc = 0x367120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367120u;
        // 0x367124: 0xaf86c824  sw          $a2, -0x37DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952996), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367128u;
}
