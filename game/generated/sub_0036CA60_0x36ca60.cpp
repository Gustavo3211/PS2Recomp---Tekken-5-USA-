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

// Function: sub_0036CA60
// Address: 0x36ca60 - 0x36cad8
void sub_0036CA60_0x36ca60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CA60_0x36ca60");
#endif

    switch (ctx->pc) {
        case 0x36ca94u: goto label_36ca94;
        default: break;
    }

    ctx->pc = 0x36ca60u;

    // 0x36ca60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36ca60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36ca64: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36ca68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36ca68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36ca6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36ca6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ca70: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x36ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x36ca74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36ca74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36ca78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36ca78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36ca7c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x36ca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x36ca80: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x36ca80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x36ca84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36ca84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ca88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36ca88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ca8c: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x36CA8Cu;
    SET_GPR_U32(ctx, 31, 0x36CA94u);
    ctx->pc = 0x36CA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CA8Cu;
    // 0x36ca90: 0x32310001  andi        $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x36CA8Cu, 0x36CA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CA94u;
label_36ca94:
    // 0x36ca94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36ca94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ca98: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36ca9c: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36caa0: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x36CAA0u;
    {
        const bool branch_taken_0x36caa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CAA0u;
        // 0x36caa4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36caa0) {
            ctx->pc = 0x36CAC0u;
            goto label_36cac0;
        }
    }
    ctx->pc = 0x36CAA8u;
    // 0x36caa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36caa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36caac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36caacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36cab0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36cab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36cab4: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x36CAB4u;
    ctx->pc = 0x36CAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CAB4u;
    // 0x36cab8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x36CABCu;
    // 0x36cabc: 0x0  nop
    ctx->pc = 0x36cabcu;
    // NOP
label_36cac0:
    // 0x36cac0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36cac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36cac4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36cac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36cac8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36cac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36cacc: 0x3e00008  jr          $ra
    ctx->pc = 0x36CACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CACCu;
        // 0x36cad0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CAD4u;
    // 0x36cad4: 0x0  nop
    ctx->pc = 0x36cad4u;
    // NOP
    ctx->pc = 0x36cad8u;
}
