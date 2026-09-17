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

// Function: sub_0033B170
// Address: 0x33b170 - 0x33b250
void sub_0033B170_0x33b170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B170_0x33b170");
#endif

    ctx->pc = 0x33b170u;

    // 0x33b170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33b170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33b174: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x33b174u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33b178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33b17c: 0x8d22003c  lw          $v0, 0x3C($t1)
    ctx->pc = 0x33b17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x33b180: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x33B180u;
    {
        const bool branch_taken_0x33b180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B180u;
        // 0x33b184: 0x2447ffc0  addiu       $a3, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b180) {
            ctx->pc = 0x33B22Cu;
            goto label_33b22c;
        }
    }
    ctx->pc = 0x33B188u;
    // 0x33b188: 0x8f88ccb4  lw          $t0, -0x334C($gp)
    ctx->pc = 0x33b188u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954164)));
    // 0x33b18c: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x33b18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x33b190: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x33b190u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x33b194: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33B194u;
    {
        const bool branch_taken_0x33b194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B194u;
        // 0x33b198: 0x8f82ccb0  lw          $v0, -0x3350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b194) {
            ctx->pc = 0x33B1B0u;
            goto label_33b1b0;
        }
    }
    ctx->pc = 0x33B19Cu;
    // 0x33b19c: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x33b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x33b1a0: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x33b1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x33b1a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33b1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x33b1a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33B1A8u;
    {
        const bool branch_taken_0x33b1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B1A8u;
        // 0x33b1ac: 0x24460040  addiu       $a2, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b1a8) {
            ctx->pc = 0x33B1C4u;
            goto label_33b1c4;
        }
    }
    ctx->pc = 0x33B1B0u;
label_33b1b0:
    // 0x33b1b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33b1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33b1b4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33b1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33b1b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33b1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33b1bc: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x33b1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x33b1c0: 0x24660040  addiu       $a2, $v1, 0x40
    ctx->pc = 0x33b1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_33b1c4:
    // 0x33b1c4: 0x8f83cca8  lw          $v1, -0x3358($gp)
    ctx->pc = 0x33b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954152)));
    // 0x33b1c8: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x33b1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x33b1cc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33B1CCu;
    {
        const bool branch_taken_0x33b1cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B1CCu;
        // 0x33b1d0: 0x88102b  sltu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b1cc) {
            ctx->pc = 0x33B1E8u;
            goto label_33b1e8;
        }
    }
    ctx->pc = 0x33B1D4u;
    // 0x33b1d4: 0x8f82ccbc  lw          $v0, -0x3344($gp)
    ctx->pc = 0x33b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954172)));
    // 0x33b1d8: 0xaf87cca8  sw          $a3, -0x3358($gp)
    ctx->pc = 0x33b1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954152), GPR_U32(ctx, 7));
    // 0x33b1dc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x33b1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x33b1e0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x33B1E0u;
    {
        const bool branch_taken_0x33b1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B1E0u;
        // 0x33b1e4: 0xaf82ccbc  sw          $v0, -0x3344($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294954172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b1e0) {
            ctx->pc = 0x33B22Cu;
            goto label_33b22c;
        }
    }
    ctx->pc = 0x33B1E8u;
label_33b1e8:
    // 0x33b1e8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33B1E8u;
    {
        const bool branch_taken_0x33b1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B1E8u;
        // 0x33b1ec: 0x8f82ccc0  lw          $v0, -0x3340($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b1e8) {
            ctx->pc = 0x33B210u;
            goto label_33b210;
        }
    }
    ctx->pc = 0x33B1F0u;
    // 0x33b1f0: 0x8f82ccac  lw          $v0, -0x3354($gp)
    ctx->pc = 0x33b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954156)));
    // 0x33b1f4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x33B1F4u;
    {
        const bool branch_taken_0x33b1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b1f4) {
            ctx->pc = 0x33B1F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B1F4u;
            // 0x33b1f8: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B1FCu;
            goto label_33b1fc;
        }
    }
    ctx->pc = 0x33B1FCu;
label_33b1fc:
    // 0x33b1fc: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x33b1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x33b200: 0x8f82ccac  lw          $v0, -0x3354($gp)
    ctx->pc = 0x33b200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954156)));
    // 0x33b204: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x33b204u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x33b208: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33B208u;
    {
        const bool branch_taken_0x33b208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B208u;
        // 0x33b20c: 0xaf87ccac  sw          $a3, -0x3354($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294954156), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b208) {
            ctx->pc = 0x33B22Cu;
            goto label_33b22c;
        }
    }
    ctx->pc = 0x33B210u;
label_33b210:
    // 0x33b210: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x33b210u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33b214: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33b214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33b218: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x33b218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33b21c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x33b21cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x33b220: 0x8f82ccc0  lw          $v0, -0x3340($gp)
    ctx->pc = 0x33b220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954176)));
    // 0x33b224: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x33b224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33b228: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x33b228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
label_33b22c:
    // 0x33b22c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x33b22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x33b230: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33B230u;
    {
        const bool branch_taken_0x33b230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B230u;
        // 0x33b234: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b230) {
            ctx->pc = 0x33B248u;
            goto label_33b248;
        }
    }
    ctx->pc = 0x33B238u;
    // 0x33b238: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x33b238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b23c: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x33B23Cu;
    ctx->pc = 0x33B240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B23Cu;
    // 0x33b240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x33B244u;
    // 0x33b244: 0x0  nop
    ctx->pc = 0x33b244u;
    // NOP
label_33b248:
    // 0x33b248: 0x3e00008  jr          $ra
    ctx->pc = 0x33B248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B248u;
        // 0x33b24c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B250u;
}
