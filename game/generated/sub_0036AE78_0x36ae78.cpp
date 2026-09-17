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

// Function: sub_0036AE78
// Address: 0x36ae78 - 0x36aef0
void sub_0036AE78_0x36ae78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036AE78_0x36ae78");
#endif

    switch (ctx->pc) {
        case 0x36aeacu: goto label_36aeac;
        default: break;
    }

    ctx->pc = 0x36ae78u;

    // 0x36ae78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36ae78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36ae7c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36ae80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36ae80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36ae84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36ae84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ae88: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x36ae88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x36ae8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36ae8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36ae90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36ae90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36ae94: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x36ae94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x36ae98: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x36ae98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x36ae9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36ae9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aea0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36aea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36aea4: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x36AEA4u;
    SET_GPR_U32(ctx, 31, 0x36AEACu);
    ctx->pc = 0x36AEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AEA4u;
    // 0x36aea8: 0x32310001  andi        $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x36AEA4u, 0x36AEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AEACu;
label_36aeac:
    // 0x36aeac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36aeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aeb0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36aeb4: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36aeb8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x36AEB8u;
    {
        const bool branch_taken_0x36aeb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AEB8u;
        // 0x36aebc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36aeb8) {
            ctx->pc = 0x36AED8u;
            goto label_36aed8;
        }
    }
    ctx->pc = 0x36AEC0u;
    // 0x36aec0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36aec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36aec4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36aec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36aec8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36aec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36aecc: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x36AECCu;
    ctx->pc = 0x36AED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AECCu;
    // 0x36aed0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x36AED4u;
    // 0x36aed4: 0x0  nop
    ctx->pc = 0x36aed4u;
    // NOP
label_36aed8:
    // 0x36aed8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36aed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36aedc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36aedcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36aee0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36aee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36aee4: 0x3e00008  jr          $ra
    ctx->pc = 0x36AEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36AEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AEE4u;
        // 0x36aee8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36AEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36AEECu;
    // 0x36aeec: 0x0  nop
    ctx->pc = 0x36aeecu;
    // NOP
    ctx->pc = 0x36aef0u;
}
