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

// Function: sub_0023CFF8
// Address: 0x23cff8 - 0x23d060
void sub_0023CFF8_0x23cff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CFF8_0x23cff8");
#endif

    ctx->pc = 0x23cff8u;

    // 0x23cff8: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x23cff8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x23cffc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x23cffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d000: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23D000u;
    {
        const bool branch_taken_0x23d000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D000u;
        // 0x23d004: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d000) {
            ctx->pc = 0x23D040u;
            goto label_23d040;
        }
    }
    ctx->pc = 0x23D008u;
    // 0x23d008: 0x1880000d  blez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x23D008u;
    {
        const bool branch_taken_0x23d008 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x23D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D008u;
        // 0x23d00c: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d008) {
            ctx->pc = 0x23D040u;
            goto label_23d040;
        }
    }
    ctx->pc = 0x23D010u;
    // 0x23d010: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23d010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23d014: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d018: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x23d018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x23d01c: 0x2421f398  addiu       $at, $at, -0xC68
    ctx->pc = 0x23d01cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294964120));
    // 0x23d020: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x23d020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x23d024: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x23d024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23d028: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x23d028u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x23d02c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D02Cu;
    {
        const bool branch_taken_0x23d02c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d02c) {
            ctx->pc = 0x23D040u;
            goto label_23d040;
        }
    }
    ctx->pc = 0x23D034u;
    // 0x23d034: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23d034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d038: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x23d038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x23d03c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x23d03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23d040:
    // 0x23d040: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D040u;
    {
        const bool branch_taken_0x23d040 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d040) {
            ctx->pc = 0x23D054u;
            goto label_23d054;
        }
    }
    ctx->pc = 0x23D048u;
    // 0x23d048: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x23d048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x23d04c: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x23d04cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23d050: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x23d050u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_23d054:
    // 0x23d054: 0x3e00008  jr          $ra
    ctx->pc = 0x23D054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D054u;
        // 0x23d058: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D05Cu;
    // 0x23d05c: 0x0  nop
    ctx->pc = 0x23d05cu;
    // NOP
    ctx->pc = 0x23d060u;
}
