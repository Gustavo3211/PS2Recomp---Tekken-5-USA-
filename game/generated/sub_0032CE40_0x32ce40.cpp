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

// Function: sub_0032CE40
// Address: 0x32ce40 - 0x32cee0
void sub_0032CE40_0x32ce40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032CE40_0x32ce40");
#endif

    switch (ctx->pc) {
        case 0x32ce64u: goto label_32ce64;
        default: break;
    }

    ctx->pc = 0x32ce40u;

    // 0x32ce40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32ce40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32ce44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32ce44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32ce48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32ce48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ce4c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32ce4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32ce50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32ce54: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x32CE54u;
    {
        const bool branch_taken_0x32ce54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CE54u;
        // 0x32ce58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ce54) {
            ctx->pc = 0x32CECCu;
            goto label_32cecc;
        }
    }
    ctx->pc = 0x32CE5Cu;
    // 0x32ce5c: 0xc0d0f2e  jal         func_343CB8
    ctx->pc = 0x32CE5Cu;
    SET_GPR_U32(ctx, 31, 0x32CE64u);
    ctx->pc = 0x343CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343CB8u, 0x32CE5Cu, 0x32CE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CE64u;
label_32ce64:
    // 0x32ce64: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x32ce64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x32ce68: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x32ce68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32ce6c: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x32ce6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x32ce70: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x32ce70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32ce74: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x32ce74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x32ce78: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x32ce78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x32ce7c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x32ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x32ce80: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32ce80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32ce84: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x32ce84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x32ce88: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32ce88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32ce8c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x32ce8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x32ce90: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x32ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x32ce94: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x32CE94u;
    {
        const bool branch_taken_0x32ce94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ce94) {
            ctx->pc = 0x32CE98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32CE94u;
            // 0x32ce98: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32CEA8u;
            goto label_32cea8;
        }
    }
    ctx->pc = 0x32CE9Cu;
    // 0x32ce9c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x32ce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x32cea0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32CEA0u;
    {
        const bool branch_taken_0x32cea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CEA0u;
        // 0x32cea4: 0xaca60004  sw          $a2, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cea0) {
            ctx->pc = 0x32CEB4u;
            goto label_32ceb4;
        }
    }
    ctx->pc = 0x32CEA8u;
label_32cea8:
    // 0x32cea8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x32cea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x32ceac: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x32ceacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x32ceb0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x32ceb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_32ceb4:
    // 0x32ceb4: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x32ceb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x32ceb8: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x32ceb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x32cebc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x32cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x32cec0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32cec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32cec4: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x32cec4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x32cec8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x32cec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_32cecc:
    // 0x32cecc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32ceccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ced0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32ced0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32ced4: 0x3e00008  jr          $ra
    ctx->pc = 0x32CED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CED4u;
        // 0x32ced8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CEDCu;
    // 0x32cedc: 0x0  nop
    ctx->pc = 0x32cedcu;
    // NOP
    ctx->pc = 0x32cee0u;
}
