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

// Function: sub_0024DFE8
// Address: 0x24dfe8 - 0x24e068
void sub_0024DFE8_0x24dfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DFE8_0x24dfe8");
#endif

    switch (ctx->pc) {
        case 0x24e028u: goto label_24e028;
        default: break;
    }

    ctx->pc = 0x24dfe8u;

    // 0x24dfe8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x24dfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x24dfec: 0x2463fb10  addiu       $v1, $v1, -0x4F0
    ctx->pc = 0x24dfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966032));
    // 0x24dff0: 0x8c620264  lw          $v0, 0x264($v1)
    ctx->pc = 0x24dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3AFD74u));
    // 0x24dff4: 0x8c66026c  lw          $a2, 0x26C($v1)
    ctx->pc = 0x24dff4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3AFD7Cu));
    // 0x24dff8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x24dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x24dffc: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x24dffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x24e000: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x24E000u;
    {
        const bool branch_taken_0x24e000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e000) {
            ctx->pc = 0x24E05Cu;
            goto label_24e05c;
        }
    }
    ctx->pc = 0x24E008u;
    // 0x24e008: 0x8c650104  lw          $a1, 0x104($v1)
    ctx->pc = 0x24e008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x24e00c: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x24E00Cu;
    {
        const bool branch_taken_0x24e00c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E00Cu;
        // 0x24e010: 0xc4102a  slt         $v0, $a2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e00c) {
            ctx->pc = 0x24E05Cu;
            goto label_24e05c;
        }
    }
    ctx->pc = 0x24E014u;
    // 0x24e014: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24E014u;
    {
        const bool branch_taken_0x24e014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e014) {
            ctx->pc = 0x24E05Cu;
            goto label_24e05c;
        }
    }
    ctx->pc = 0x24E01Cu;
    // 0x24e01c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x24e01cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e020: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x24e020u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x24e024: 0x8ca30118  lw          $v1, 0x118($a1)
    ctx->pc = 0x24e024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 280)));
label_24e028:
    // 0x24e028: 0x8ca60104  lw          $a2, 0x104($a1)
    ctx->pc = 0x24e028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x24e02c: 0x31683  sra         $v0, $v1, 26
    ctx->pc = 0x24e02cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 26));
    // 0x24e030: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24e030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24e034: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24E034u;
    {
        const bool branch_taken_0x24e034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E034u;
        // 0x24e038: 0x671825  or          $v1, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e034) {
            ctx->pc = 0x24E040u;
            goto label_24e040;
        }
    }
    ctx->pc = 0x24E03Cu;
    // 0x24e03c: 0xaca30118  sw          $v1, 0x118($a1)
    ctx->pc = 0x24e03cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 280), GPR_U32(ctx, 3));
label_24e040:
    // 0x24e040: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x24e040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e044: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24E044u;
    {
        const bool branch_taken_0x24e044 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e044) {
            ctx->pc = 0x24E05Cu;
            goto label_24e05c;
        }
    }
    ctx->pc = 0x24E04Cu;
    // 0x24e04c: 0x8d02026c  lw          $v0, 0x26C($t0)
    ctx->pc = 0x24e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 620)));
    // 0x24e050: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x24e050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x24e054: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x24E054u;
    {
        const bool branch_taken_0x24e054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e054) {
            ctx->pc = 0x24E058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E054u;
            // 0x24e058: 0x8ca30118  lw          $v1, 0x118($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e028;
        }
    }
    ctx->pc = 0x24E05Cu;
label_24e05c:
    // 0x24e05c: 0x3e00008  jr          $ra
    ctx->pc = 0x24E05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E064u;
    // 0x24e064: 0x0  nop
    ctx->pc = 0x24e064u;
    // NOP
    ctx->pc = 0x24e068u;
}
