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

// Function: sub_0048D048
// Address: 0x48d048 - 0x48d0d8
void sub_0048D048_0x48d048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048D048_0x48d048");
#endif

    switch (ctx->pc) {
        case 0x48d080u: goto label_48d080;
        case 0x48d098u: goto label_48d098;
        case 0x48d0b0u: goto label_48d0b0;
        default: break;
    }

    ctx->pc = 0x48d048u;

    // 0x48d048: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48d048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48d04c: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x48d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x48d050: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48d050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48d054: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x48d054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d058: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x48d058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x48d05c: 0x2452b240  addiu       $s2, $v0, -0x4DC0
    ctx->pc = 0x48d05cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947392));
    // 0x48d060: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x48d060u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x48d064: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x48d064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x48d068: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x48d068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x48d06c: 0x48c03  sra         $s1, $a0, 16
    ctx->pc = 0x48d06cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 4), 16));
    // 0x48d070: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x48d070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x48d074: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x48d074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d078: 0xc123402  jal         func_48D008
    ctx->pc = 0x48D078u;
    SET_GPR_U32(ctx, 31, 0x48D080u);
    ctx->pc = 0x48D07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D078u;
    // 0x48d07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48D008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D008u, 0x48D078u, 0x48D080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D080u;
label_48d080:
    // 0x48d080: 0x26430200  addiu       $v1, $s2, 0x200
    ctx->pc = 0x48d080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
    // 0x48d084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48d084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d088: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x48D088u;
    {
        const bool branch_taken_0x48d088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48D08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D088u;
        // 0x48d08c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d088) {
            ctx->pc = 0x48D0B8u;
            goto label_48d0b8;
        }
    }
    ctx->pc = 0x48D090u;
    // 0x48d090: 0xc123402  jal         func_48D008
    ctx->pc = 0x48D090u;
    SET_GPR_U32(ctx, 31, 0x48D098u);
    ctx->pc = 0x48D094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D090u;
    // 0x48d094: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48D008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D008u, 0x48D090u, 0x48D098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D098u;
label_48d098:
    // 0x48d098: 0x26430400  addiu       $v1, $s2, 0x400
    ctx->pc = 0x48d098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    // 0x48d09c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48d09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d0a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x48D0A0u;
    {
        const bool branch_taken_0x48d0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48D0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D0A0u;
        // 0x48d0a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d0a0) {
            ctx->pc = 0x48D0B8u;
            goto label_48d0b8;
        }
    }
    ctx->pc = 0x48D0A8u;
    // 0x48d0a8: 0xc123402  jal         func_48D008
    ctx->pc = 0x48D0A8u;
    SET_GPR_U32(ctx, 31, 0x48D0B0u);
    ctx->pc = 0x48D0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D0A8u;
    // 0x48d0ac: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48D008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D008u, 0x48D0A8u, 0x48D0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D0B0u;
label_48d0b0:
    // 0x48d0b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48D0B0u;
    {
        const bool branch_taken_0x48d0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D0B0u;
        // 0x48d0b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d0b0) {
            ctx->pc = 0x48D0C0u;
            goto label_48d0c0;
        }
    }
    ctx->pc = 0x48D0B8u;
label_48d0b8:
    // 0x48d0b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48d0bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48d0bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48d0c0:
    // 0x48d0c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48d0c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48d0c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x48d0c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48d0c8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x48d0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x48d0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x48D0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48D0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D0CCu;
        // 0x48d0d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48D0D4u;
    // 0x48d0d4: 0x0  nop
    ctx->pc = 0x48d0d4u;
    // NOP
    ctx->pc = 0x48d0d8u;
}
