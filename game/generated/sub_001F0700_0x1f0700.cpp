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

// Function: sub_001F0700
// Address: 0x1f0700 - 0x1f0788
void sub_001F0700_0x1f0700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0700_0x1f0700");
#endif

    switch (ctx->pc) {
        case 0x1f0760u: goto label_1f0760;
        default: break;
    }

    ctx->pc = 0x1f0700u;

    // 0x1f0700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f0700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f0704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f0704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f0708: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f0708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f070c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f070cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f0710: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x1f0710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1f0714: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1f0714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1f0718: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1f0718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1f071c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F071Cu;
    {
        const bool branch_taken_0x1f071c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F071Cu;
        // 0x1f0720: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f071c) {
            ctx->pc = 0x1F0738u;
            goto label_1f0738;
        }
    }
    ctx->pc = 0x1F0724u;
    // 0x1f0724: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0728: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0728u;
    {
        const bool branch_taken_0x1f0728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0728u;
        // 0x1f072c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0728) {
            ctx->pc = 0x1F0748u;
            goto label_1f0748;
        }
    }
    ctx->pc = 0x1F0730u;
    // 0x1f0730: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F0730u;
    {
        const bool branch_taken_0x1f0730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0730u;
        // 0x1f0734: 0x8e030040  lw          $v1, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0730) {
            ctx->pc = 0x1F0764u;
            goto label_1f0764;
        }
    }
    ctx->pc = 0x1F0738u;
label_1f0738:
    // 0x1f0738: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x1f0738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x1f073c: 0x24421f80  addiu       $v0, $v0, 0x1F80
    ctx->pc = 0x1f073cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8064));
    // 0x1f0740: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1f0740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x1f0744: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f0744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_1f0748:
    // 0x1f0748: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1f0748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f074c: 0x8c43885c  lw          $v1, -0x77A4($v0)
    ctx->pc = 0x1f074cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936668)));
    // 0x1f0750: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0750u;
    {
        const bool branch_taken_0x1f0750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1f0750) {
            ctx->pc = 0x1F0754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0750u;
            // 0x1f0754: 0x8e030040  lw          $v1, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0764u;
            goto label_1f0764;
        }
    }
    ctx->pc = 0x1F0758u;
    // 0x1f0758: 0xc0866f8  jal         func_219BE0
    ctx->pc = 0x1F0758u;
    SET_GPR_U32(ctx, 31, 0x1F0760u);
    ctx->pc = 0x219BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219BE0u, 0x1F0758u, 0x1F0760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0760u;
label_1f0760:
    // 0x1f0760: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1f0760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1f0764:
    // 0x1f0764: 0x2404ff7f  addiu       $a0, $zero, -0x81
    ctx->pc = 0x1f0764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1f0768: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f0768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f076c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f076cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0770: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1f0770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1f0774: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x1f0774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x1f0778: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f0778u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f077c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F077Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F077Cu;
        // 0x1f0780: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F077Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0784u;
    // 0x1f0784: 0x0  nop
    ctx->pc = 0x1f0784u;
    // NOP
    ctx->pc = 0x1f0788u;
}
